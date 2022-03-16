x = -0.2;

function rez = f(x)
%Functia data
    rez = x^3 - x^2 -x + 1;
end

function rez = g(x)
%Derivata functiei
    rez = 3*(x^2) - 2*x - 1;
end

eps = 0.01;

max = 20; %Maximul iteratiilor

iteratie = 1

y = x - (f(x)/g(x))

dif_abs = abs(y-x)

while (dif_abs > eps && iteratie < max)
    iteratie = iteratie + 1
    x = y
    y = y - (f(y)/g(y))
    dif_abs = abs(y-x)
end

disp ('Solutia este:')
radacina = y