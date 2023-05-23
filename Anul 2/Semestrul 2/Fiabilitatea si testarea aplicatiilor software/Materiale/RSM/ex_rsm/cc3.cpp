// Example program
#include <iostream>
#include <string>

int main()
{
 // string a,;
  std::string a,b;
  std::cout << "What is your name? ";
  getline (std::cin, a);
 // a=name;
  std::cout << " a= " << a << "!\n";
  std::cout << "What is your first name? ";
  getline (std::cin, b);
//  b=name;
  std::cout << " b= " << b << "!\n";
  if (a==b)
         std::cout << " your Name= " << a << "!\n";
    else 
       std::cout << " first Name= " << b << "!\n";
  if (a==" ")
  std::cout << " nume inex= " << a << "!\n";
}

