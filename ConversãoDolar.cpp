
#include <iostream>

using namespace std;
double mat[20];
double matConvertido[20];
double total;
int main()
{
   for (int i = 0; i < 20; i++) {
       std::cin >> mat[i];
       matConvertido[i] = mat[i] * 4.84;
   }
   
   for (int i = 0; i < 20; i++) {
       std::cout << matConvertido[i] << std::endl;
       total = total + matConvertido[i];
   }
   std::cout << "A soma total em Dolares é: $" << total << std::endl;
   double media = (total / 4.84)/20;
   std::cout << "A média é: R$" << media << std::endl;
}
