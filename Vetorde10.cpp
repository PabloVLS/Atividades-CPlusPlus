/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int vetor;
    int x[10] ;
   for (int i = 0 ; i < 10 ; i++) {
       std::cin >> x[i];
      if(x[i] <= 0){
          x[i] = 1;
      } 
     
   }

   for (int i= 0; i < 10; i++) {
      std::cout << x[i] << " ";
   }
}
