/*A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci.
Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. 
Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 46).

Saída
Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. 
Não deve haver espaço após o último valor.*/

#include <iostream>

using namespace std;

int main()
{
    int valor;
    int i[2]= {1,2};
   
    
    for (int j = 0 ; j < 2; j++) {
        std::cout << "Digite o valor" << std::endl;
        std::cin >> i[j];
        if(j == 1){
            for (int j = 0 ; j < 10; j++) {
                valor = i[0] + i[1];
                std::cout << valor << std::endl;
                i[0] = i[1];
                i[1] = valor;
            }
        }
    }
    
}
