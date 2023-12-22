#include <iostream>

using namespace std;

int main()
{
    string T,A;
    int N;
    cout << "Qual o tipo de morfomon ?" << endl;
    cin >> T;
    cin >> N;

    for(int i; i < N ; i++ ){
       cin >> A;
       if(A == "alface"){
        T = "pranta";
       }
       if(A == "cerveja"){
        T = "aguado";
       }
       if(A == "burrito"){
        T = "foguento";
       }
    }
    cout << T;
    return 0;
}
