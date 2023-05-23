// Example program
#include <iostream>
#include <string>

int main()
{
 // string a,;
  std::string a,b,c,d,e,f,name;
  std::cout << "What is your name? ";
  getline (std::cin, name);
  a=name;
  std::cout << " a= " << a << "!\n";
  std::cout << "What is your first name? ";
  getline (std::cin, name);
  b=name;
  std::cout << " b= " << b << "!\n";
  if (a==b)
        c=a;
    else 
        c=b;
  std::cout << " c= " << c << "!\n";
}

