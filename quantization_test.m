%numberofCoefficients=30;

%inputTreshold = 1/numberofCoefficients;

%% A CREATIOnumberofCoefficients
numberofCoefficients=30;
boundaryInterval = 1/numberofCoefficients;
K = 0.988;
smoothing = 3;


x_axis = 0:inputTreshold:1;

predistortionCoefficients = zeros(size(x_axis));
% for j=1:1:numberofCoefficients+1
%     predistortionCoefficients(j) = ((j*boundaryInterval+1)^(2*smoothing)) - 1;
% end

for j=1:1:numberofCoefficients+1
    xtemp = boundaryInterval*(j-1);
    predistortionCoefficients(j) = ( (xtemp*K)/((1-((xtemp*K)/1)^(2*smoothing) )^(1/(2*smoothing))) )/(xtemp);
end


predistortionCoefficients

%figure("A_vector");
plot(x_axis,predistortionCoefficients);

%% QUANTIZATON

x = 0.04

for i= 1:1:numberofCoefficients+1    
    if ( abs(x) > (i-1)*inputTreshold  ) && ( abs(x) <= (i)*inputTreshold )
        if (abs(x) - (i-1)*inputTreshold) < abs(abs(x) - (i)*inputTreshold)
            %if (i ==1)
            %    n=1;
            %end
            n=i;
        else
            n = i+1;
        end
        break
    end
end

n

%% TESTING RESULTS

%% Rapp model, figure 1
clear all;
figure,

simOut = sim("DC2_predistortion.slx");

x = simOut.x.Data;
x = x((2*end/3):end);


predistorter_out = simOut.x_amp.Data;
predistorter_out = predistorter_out((2*end/3):end);


hold on;
scatter(abs(x),abs(predistorter_out));

%% Predsistorter Gain

clear all;
figure,

simOut = sim("DC2_predistortion.slx");

CoefficientVector = simOut.CoefficientVector.Data;

%% Predistorter input characteristic (Figure 4)

% input vs output at predist. with K=0.98843, K=0.89443

clear all;
%figure,


%K=0.98843;
K=0.89443;

s=3;

Psat =1;
x_max = sqrt(Psat/K^2);

x_input = (0:0.001:x_max);
samples_number = length(x_input);

predistorter_out = K.*x_input ./ ( (1 - (K.*abs(x_input)).^(2*s) ).^(1/(2*s)) );

hold on;
plot(x_input, predistorter_out, '--', 'LineWidth', 2);
xline(x_max, '--');

%% Predistorter Gain characteristic (Figure 5)

% input vs output at predist. with K=0.98843, K=0.89443
% Define Gain as z/x
% plot Gain vs. x


clear all;
%figure,


%K=0.98843;
K=0.89443;

s=3;
Psat =1;
x_max = sqrt(Psat/K^2);

x_input = (0:0.0001:x_max);
samples_number = length(x_input);

predistorter_out = K.*x_input ./ ( (1 - (K.*abs(x_input)).^(2*s) ).^(1/(2*s)) );

Gain = predistorter_out ./ x_input;

hold on;
plot(x_input, Gain, '--', 'LineWidth', 2);
xline(x_max, '--');


%% Cumulative Distribution of the Squared Modulus (Figure 6)

% 

clear all;
%figure,

alpha_dB = 0:0.1:20;
alpha = 10.^(alpha_dB./10);



prob_mod_exceeds_alpha_COMPLEX = exp(-(10.^(alpha_dB./10))./2);
prob_mod_exceeds_alpha_REAL = (2.*exp(-(10.^(alpha_dB./10))./4)) ./ (sqrt((2*pi).*(10.^(alpha_dB./10))./2));

%prob_mod_exceeds_alpha_REAL = 2.* qfunc(sqrt((10.^(alpha_dB./10))/2));

prob_dB = db(prob_mod_exceeds_alpha_COMPLEX);
%prob_dB = db(prob_mod_exceeds_alpha_REAL);



hold on;
loglog(alpha_dB,prob_dB, '--', 'LineWidth', 2);
