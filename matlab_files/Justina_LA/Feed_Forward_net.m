load('matlab.mat')
net = feedforwardnet;
net.layers{1};
net.layerWeights{2,1};
net = linearlayer(0,0);
net=configure(net,pos_all,torques_all);
net.IW{1,1} = zeros([7001 7001]);
net.b{1} = zeros([7001 1]);
[net,a,e,pf] = adapt(net,pos_all,torques_all);
net.inputWeights{1,1}.learnParam.lr = 0.1;
net.biases{1,1}.learnParam.lr = 0.1;
[net,a,e,pf] = adapt(net,pos_all,torques_all);
a
[net,a,e,pf] = adapt(net,pos_all,torques_all);
a
tiledlayout(2,1)
ax1 = nexttile;
plot(ax1,pos_all,torques_all)
title(ax1,'Relación Posiciones-Torques original')
ax2 = nexttile;
plot(ax2,pos_all,a, 'g')
title(ax2,'Relación Posiciones-Torques obtenida con la red')
