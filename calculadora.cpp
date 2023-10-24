/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int num1, num2, resultado;
    char tipo;
    
    cout<<"Calculadora";
    std::cout << "Digite o primeiro numero:" << std::endl;
    std::cin >> num1;
    
    std::cout << "Digite o segundo numero:" << std::endl;
    std::cin >> num2;
    
    std::cout << "Digite S para soma , T para subtração , D para divisao , M para multiplicação " << std::endl;
    std::cin >> tipo;
    
    if(tipo == 's'){
       resultado = num1 + num2; 
       std::cout << resultado << std::endl;
    }else if(tipo == 't'){
        resultado = num1  - num2;
        std::cout << resultado << std::endl;
    }else if(tipo == 'd'){
        resultado = num1  / num2;
        std::cout << resultado << std::endl;
    }else if(tipo == 'm'){
        resultado = num1  * num2;
        std::cout << resultado << std::endl;
    }else{
    std::cout << "Algo deu errado" << std::endl;
    }

    


    return 0;
}