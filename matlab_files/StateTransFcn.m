function x = StateTransFcn(x,u)
dt = 0.002;
x = x + [x(2) ; x(1)+u]*dt;
end