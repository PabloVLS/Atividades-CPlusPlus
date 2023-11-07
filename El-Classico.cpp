/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int real , barc, vitoriasReal , vitoriasBarc, empates ;

int main()
{
    for (int i = 0 ; i <= 2 ; i++) {
      std::cout << "Digite quanto ficou o jogo entre Real Madid e Barcelona" << std::endl;
      std::cout << "Real Madrid:" << std::endl;
      std::cin >> real;
      std::cout << "Barcelona:" << std::endl;
      std::cin >> barc;
      
      if(real > barc){
          vitoriasReal = vitoriasReal + 1;
      }else if(barc > real){
          vitoriasBarc = vitoriasBarc + 1;
      }else{
          empates = empates + 1;
      }
      std::cout << "Novo El-Classico (1-sim 2-nao)" << std::endl;
      std::cin >> i;
    }
    
    std::cout << "Estatisticas El-Classico" << std::endl;
    std::cout << "Vitorias do Real Madrid: "<< vitoriasReal << std::endl;
    std::cout << "Vitorias do Barcelona: "<< vitoriasBarc << std::endl;
    std::cout << "Empates: "<< empates << std::endl;

    return 0;
}
