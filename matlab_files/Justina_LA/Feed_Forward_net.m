%load('feedforward_ws.mat')
%pos_all = readmatrix('Pos.xls');
%torques_all = readmatrix('Torques.xls');
t = masa_t;
x1 = pos_all;
x2 = torques_x_all;
x3 = torques_y_all;
x4 = torques_z_all;
x = {x1;x2;x3;x4};

net = feedforwardnet;
net.numinputs = 4;
net = configure(net,x,t);
net = train(net,x,t);
view(net)
% x = {pos_all;torques_all};
% t = [out.Posiciones.time];
% net = feedforwardnet;
% net.numinputs = 2;
% % net.layers{1};
% % net.layerWeights{2,1};
% % net = linearlayer(0,0);
% net = configure(net,x);
% net = train(net,x,t);
% view(net)

% net.IW{1,1} = zeros([7001 7001]);
% net.b{1} = zeros([7001 1]);
% [net,a,e,pf] = adapt(net,pos_all,torques_all);
% net.inputWeights{1,1}.learnParam.lr = 0.1;
% net.biases{1,1}.learnParam.lr = 0.1;
% [net,a,e,pf] = adapt(net,pos_all,torques_all);
% a;
% [net,a,e,pf] = adapt(net,pos_all,torques_all);
% a;
% % [net1,a1,e1,pf1] = adapt(net,pos_all,torques_all);
% % [net1,a1,e1,pf1] = adapt(net1,pos_all,torques_all);
% tiledlayout(2,1)
% ax1 = nexttile;
% plot(ax1,pos_all,torques_all)
% title(ax1,'Relación Posiciones-Torques original')
% ax2 = nexttile;
% plot(ax2,pos_all,a, 'g')
% title(ax2,'Relación Posiciones-Torques obtenida con la red')
% % ax3 = nexttile;
% % plot(ax3,pos_all,a1,'b')
% % title(ax3,'Relación Posiciones-Torques Iteración 2 (w&B cambiados)')
