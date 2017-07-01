#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int start = 1;
    while(start == 1){
        int scelta = 0;
        cout << "Premi 1 per addizione \n";
        cout << "Premi 2 per sottrazione \n";
        cout << "Premi 3 per moltiplicazione \n";
        cout << "Premi 4 per divisione \n";
        cin >> scelta;
        
        if(scelta > 4){
                  cout << "Comando errato \n \n";
        }
        
        if(scelta < 1){
                  cout << "Comando errato \n \n";   
        }
        
        if(scelta == 1){
            
            int x;
            int y;
            bool z;
            cout << "Inserisci il primo addendo \n";
            cin >> x;
            cout << "Inserisci il secondo addendo \n";
            cin >> y;
            cout << x ;
            cout << " + ";
            cout << y;
            cout << " = \n";
            cout << x+y;
            cout << "\n";
            system("PAUSE");
            cin.ignore();
            }
            
        if(scelta == 2){
            
            int x;
            int y;
            bool z;
            cout << "Inserisci il minuendo \n";
            cin >> x;
            cout << "Inserisci il sottraendo \n";
            cin >> y;
            cout << x ;
            cout << " - ";
            cout << y;
            cout << " = \n";
            cout << x-y;
            cout << "\n";
            system("PAUSE");
            cin.ignore();
            }
        
        if(scelta == 3){
            
            int x;
            int y;
            bool z;
            cout << "Inserisci il moltiplicando \n";
            cin >> x;
            cout << "Inserisci il moltiplicatore \n";
            cin >> y;
            cout << x ;
            cout << " * ";
            cout << y;
            cout << " = \n";
            cout << x*y;
            cout << "\n";
            system("PAUSE");
            cin.ignore();
            }
            
        if(scelta == 4){
            
            int x;
            int y;
            bool z;
            cout << "Inserisci il dividendo \n";
            cin >> x;
            cout << "Inserisci il divisore \n";
            cin >> y;
            cout << x ;
            cout << " / ";
            cout << y;
            cout << " = \n";
            cout << x/y;
            cout << "\n";
            system("PAUSE");
            cin.ignore();
            }
        }
    
}

