N=30;

input_interval = 1/N;

%% A CREATION

x_axis = 0:input_interval:1;

y = zeros(size(x_axis));

for j=1:1:N+1
    y(j) = (j+1)^6 - 1;
end

y;
%figure("A_vector");
plot(x_axis,y, "x");

%% QUANTIZATON

x = 0.04

for i= 1:1:N+1    
    if ( abs(x) > (i-1)*input_interval  ) && ( abs(x) <= (i)*input_interval )
        if (abs(x) - (i-1)*input_interval) < abs(abs(x) - (i)*input_interval)
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

simOut = sim("DC2_predistortion.slx");

%x = get(simOut,x);
x = simOut.x.Data;

x = x((2*end/3):end);

x_amp = simOut.x_amp.Data;
x_amp = x_amp((2*end/3):end);
%x_amp = get(simOut,x_amp);

% figure,
hold on;
scatter(abs(x),abs(x_amp));
