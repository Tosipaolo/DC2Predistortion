N = 2;

A = [0:(1/N):1]';

x = 0.567767+ 1i*0.667 ;
n=9999;

max_x = 1;

delta = max_x/2*N;

input_interval = max_x/N;

%n = N/2;

    for k = 1:1:N+1
        if abs(x) > (k-1)*input_interval && abs(x) <= (k)*input_interval
            n = k;
            break
        end
    end

n

%     a_n = A(n);
%     a_n1 = A(n+1);
% 
% 
% P_x =  ( abs(x) - (2*n + 1)*delta )*(a_n1 - a_n)/( 2*delta) + (a_n1 + a_n)/2;
% 



