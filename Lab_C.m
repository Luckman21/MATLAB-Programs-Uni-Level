%f(x) - Original Function
x =[1.0:0.5:6.0];
y1 = ((x.^3-3.^3).^(1./3));

%f'(x) - First Derivative 
y2 = ((x.^2)./(x.^3-3.^3).^(2./3));

%plotting both functions
plot(x,y1,'r--')
hold on
plot(x,y2,'b--')
legend('f(x) - Original Function',"f'(x) - 1st Derivative")
hold off
xlabel("X Axis");
ylabel("Y Axis");
title("Graphing a Function and its Derivative");
axis([0,6,-2,10])