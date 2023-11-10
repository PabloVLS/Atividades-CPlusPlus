/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int C,N;
    std::cout << "Digite quantos Oponenente Devita tera que enfrentar" << std::endl;
    std::cin >> C;
    for(int I = 0 ; I < C ; I++ ){
       std::cout << "Digite o poder do "<< I <<" oponente de Devita "<< std::endl;
       std::cin >> N;
       if( N >= 8000 && N<= 100000){
           std::cout << "Mais de 8000 mil" << std::endl;
       }else{
           std::cout << "INSETO" << std::endl;
       }
       
    }
}
