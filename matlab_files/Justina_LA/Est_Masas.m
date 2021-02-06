function Betta_e  = Est_Masas(torques,posiciones)
%Estimación de parámetros por Mínimos cuadrados no lineales
%Betta_e = [me_l1,me_l2,me_l3,me_l4,me_l5,me_l6,me_l7,me_obj];
    %inicializa Betta
    Betta = zeros(1,8)';
    m = length(y);
    n = length(Betta);
    e = 0;
    
    while e > 0.0001
        for i = 1:m
            dBetta = Betta_s - Betta;
            Betta = Betta + dBetta;
            dy = torques - f(torques,Betta);
            r(i) = dy(i)- sum();
            sqrt_r(i) = r(i)^2;
            S = sum(sqrt_r);
            min(S);
        end
        e = abs((S_k-S_k+1)/S_k);
    end

%outputArg1 = inputArg1;
end
