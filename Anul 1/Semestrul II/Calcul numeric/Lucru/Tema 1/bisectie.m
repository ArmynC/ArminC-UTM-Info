a = 0;
b = 1;

l = a;
u = b;

iteratie = 0

x = (l + u) / 2

function rez = f(x)
%Functia data
    rez = x^3 - 4*x + 2;
end

eps = 0.01;

max = 20; %Maximul iteratiilor

while (abs(f(x)) > eps && iteratie < max)
    iteratie = iteratie + 1
    x = (l + u) / 2
    if f(x) * f(l) > 0
        l = x
    else
        u = x
    end
end

disp ('Solutia este:')
radacina = x