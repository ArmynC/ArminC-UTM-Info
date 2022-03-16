x = 0;

function rez = f(x)
%Functia data
    rez = 8*(x^3) + x^2 + 8*x - 3;
end

y = 0.6;

eps = 0.01;

max = 20; %Maximul iteratiilor

iteratie = 1

z = (x*f(y) - y*f(x)) / (f(y) - f(x))

dif_abs = abs(z-y)

while (dif_abs > eps && iteratie < max)
    iteratie = iteratie + 1
    x = y
    y = z
    z = (x*f(y) - y*f(x)) / (f(y) - f(x))
    dif_abs = abs(z-y)
end

disp ('Solutia este:')
radacina = z
