/*Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência
de seus clientes. Escreva um algoritmo para ler o tipo de combustível abastecido
(codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). 
Caso o usuário informe um código inválido (fora da faixa de 1 a 4) 
deve ser solicitado um novo código 
(até que seja válido). O programa será encerrado quando o código informado for o número 4.*/

#include <iostream>

using namespace std;

int main()
{
    int tipo;
    int gasolina , alcool , diesel;
    
    
    
    while(tipo != 4){
        std::cout << "Digite o tipo de combustivel:" << std::endl;
        std::cout << " 1 Alcool \n 2 Gasolina\n 3 Diesel \n 4 Fim" << std::endl;
        std::cin >> tipo;
        
        if(tipo == 1){
          alcool = alcool + 1;  
        }
        else if(tipo == 2){
            gasolina = gasolina + 1;
        }
        else if (tipo == 3){
            diesel = diesel + 1;
        }
        else{
            std::cout << "Digite um valor valido !!!" << std::endl;
        }
    }
    std::cout << "Muito obrigado" << std::endl;
    std::cout << "Alcool:"<<alcool<< std::endl;
    std::cout << "Gasolina:"<<gasolina<< std::endl;
    std::cout << "Diesel:"<<diesel<< std::endl;
    
    return 0;
}
