Data = readtable('Datos_lab.xls');
notrained_data = readmatrix("NT_Data.xls");
Data = mergevars(Data, {'Posiciones_1','Posiciones_2','Posiciones_3','Posiciones_4','Posiciones_5','Posiciones_6','Posiciones_7'}, 'NewVariableName', 'Posiciones', 'MergeAsTable', false);
Data = mergevars(Data, {'Torques_1','Torques_2','Torques_3','Torques_4','Torques_5','Torques_6','Torques_7'}, 'NewVariableName', 'Torques', 'MergeAsTable', false);
inputs = [Data.Posiciones';Data.Torques';Data.Masas'];
targets = Data.Masas';
inputs2 = [inputs,notrained_data];
targets2 = [targets,notrained_data(15,:)];
net = feedforwardnet(10);


[net,tr] = train(net,inputs,targets);

output_net = net(inputs(:,38))
output_net = net(notrained_data(:,9))

[net,tr] = train(net,inputs,targets);

output_net_1 = net(inputs(:,38))
output_net_1 = net(notrained_data(:,9))

[net1,tr] = train(net,inputs2,targets2);

output_net1 = net1(inputs(:,38))
output_net1 = net1(notrained_data(:,9))


[net2,a,e,pf] = adapt(net1,inputs2,targets2);

output_net2 = net2(inputs(:,38))
output_net2 = net2(notrained_data(:,9))
