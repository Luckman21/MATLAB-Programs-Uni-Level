%{
function Lab_E(input)
%Test Function, enter one value (input) and it will return with a sentence
fprintf('My variable has the value %d \n',input)
end
%}

%{
function Lab_E(input)

if (input == 1)
    figure(1);
    plot([1, 2, 3, 4],[10, 100, 300, -22]);
    
elseif (input == 2)
    figure(1);
    plot([1, 2, 3, 4],[40,50,60,80]);
    
else
    disp('Error!  The user selected a wrong number.  Choose 1 or 2.')
end
end
%}

%Variables
figure(1)
clf(1,'reset')
a = 30;

baseside_x = [0 0 0 0];
baseside_y = [0 0 2 2];
baseside_z = [0 3 3 0];
patch(baseside_x,baseside_y,baseside_z,'cyan','FaceAlpha',0.5)
 
basefront_x = [0 4 4 0];
basefront_y = [0 0 0 0];
basefront_z = [0 0 3 3];
patch(basefront_x,basefront_y,basefront_z,'cyan','FaceAlpha',0.5)
 
basetop_x = [0 4 4 0];
basetop_y = [0 0 2 2];
basetop_z = [3 3 3 3];
patch(basetop_x,basetop_y,basetop_z,'cyan','FaceAlpha',0.5)
 
%Top

topside_x = [1 1 1 1];
topside_y = [1 1 4 4];
topside_z = [3 5 5 3];
patch(topside_x,topside_y,topside_z+0.5,'white','FaceAlpha',0.5)
 
topfront_x = [1 5 5 1];
topfront_y = [1 1 1 1];
topfront_z = [3 3 5 5];
patch(topfront_x,topfront_y,topfront_z+0.5,'white','FaceAlpha',0.5)
 
toptop_x = [1 5 5 1];
toptop_y = [1 1 4 4];
toptop_z = [5 5 5 5];
patch(toptop_x,toptop_y,toptop_z+0.5,'white','FaceAlpha',0.5)
 
topsidefar_x = [5 5 5 5];
topsidefar_y = [1 1 4 4];
topsidefar_z = [3 5 5 3];
patch(topsidefar_x,topsidefar_y,topsidefar_z+0.5,'white','FaceAlpha',0.5)
 
topback_x = [1 5 5 1];
topback_y = [4 4 4 4];
topback_z = [3 3 5 5];
patch(topback_x,topback_y,topback_z+0.5,'white','FaceAlpha',0.5)

%patch([1 5*cosd(a) 5*cosd(a)-4*sind(a) -1*cosd(a)],[1 5*sind(a) 5*sind(a)+4*cosd(a) 5.5*sind(90-a)],[5.5 5.5 5.5 5.5], 'blue', 'FaceAlpha',0.5)

axis ('equal')
view ([-1 -1 1])
xlabel ('x')
ylabel ('y')
zlabel('z')
title("Our Robot")
