#include <iostream>

using namespace std;

int main()
{
    double menor = 9999;
    double dp;
    double a[3][3];
    double maior;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < 3 ; i++){

        for(int j = 0 ; j < 3 ; j++){
            cout << a[i][j] << " ";
            if(i == j ){
               dp = dp + a[i][j];
            }
            if(a[i][j] > maior){
               maior = a[i][j];
            }
            if(a[i][j] < menor){
               menor = a[i][j];
            }

        }
        cout << "" << endl;
    }
    cout << "A soma da principal é: "<< dp << endl;
    cout << "O maior numero é "<< maior << endl;
    cout << "O menor numero é: " <<menor << endl;
}
