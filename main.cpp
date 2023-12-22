#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e;
    string marcada;
    int qtd = 1;


    while(qtd != 0){
        cout << "Corrigir quantas Questões ? ?" << endl;
        cin >> qtd;

        for(int i = 0; i < qtd ; i++)
        {
            cout << "Questão: "<<i <<endl;
            cin >> a;
            cin >> b;
            cin >> c;
            cin >> d;
            cin >> e;


            if(a <= 127 && b > 127 && c >127 && d > 127 && e>127)
            {
                cout << "A" << endl;
            }
            else if(b <= 127 && a > 127 && c >127 && d > 127 && e>127)
            {
                cout << "B" << endl;
            }
            else if(c <= 127 && a > 127 && b > 127 && d > 127 && e>127)
            {
                cout << "C" << endl;
            }
            else if(d <= 127 && a > 127 && b > 127 && c > 127 && e>127)
            {
                cout << "D" << endl;
            }
            else if(e <= 127 && a > 127 && b > 127 && c > 127 && d >127)
            {
                cout << "E" << endl;
            }
            else
            {
                cout << "*" << endl;
            }

        }
    }
    return 0;
}
