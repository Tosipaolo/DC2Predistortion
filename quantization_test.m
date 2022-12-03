numberofCoefficients=30;

inputTreshold = 1/numberofCoefficients;

%% A CREATIOnumberofCoefficients
numberofCoefficients=30;
inputTreshold = 1/numberofCoefficients;


x_axis = 0:inputTreshold:1;

y = zeros(size(x_axis));

for j=1:1:numberofCoefficients+1
    y(j) = ((j*inputTreshold+1)^6) -1;
end

y
%figure("A_vector");
plot(x_axis,y, "x");

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
clear all;
figure,

simOut = sim("DC2_predistortion.slx");

x = simOut.x.Data;
x = x((2*end/3):end);


x_amp = simOut.x_amp.Data;
x_amp = x_amp((2*end/3):end);


hold on;
scatter(abs(x),abs(x_amp));
