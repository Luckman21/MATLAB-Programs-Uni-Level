%{
x = 8;
y = 5;
%x = 12%
%y = 6;
 if ((x-y)<=0)
     disp('c');
 elseif((x-y) > 2)
     disp('a');
 else
     disp('o');
 end
 x = 5;
%}

%{
x = [1 4 5 6 7];
y = [3 2 15 6 8];
disp(length(x+y));
%}

%{
fprintf('the answer to 3+6 is %0.2f', 9.5*3)
%}
disp(0.3:0.2:3.5);