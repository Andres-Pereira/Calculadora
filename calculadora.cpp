#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  char operacion; //Uncommunicative Name -- Refactorizacion: Op->Operacion
  int n1, n2, r;
  do {
    cout << "Suma" << endl;
    cout << "Resta"<< endl;
    cout << "Multiplicacion"<< endl;
    cout << "Division" << endl;
  

    do {
        cout << "\n Operacion: ";
        cin >> operacion;
    } while ( operacion < '1' || operacion > '5' );

    switch ( operacion ) {
        case '1': 
          cin >> n1;
          cin >> n2;
          r = n1 + n2;
          cout <<"\n   " << n1 << " + " << n2 <<" = "<< r;
          break;

        case '2': 
          cin >> n1;
          cin >> n2;
          r = n1 - n2;
          cout <<"\n   " << n1 << " - " << n2 <<" = "<< r;
          break;

        case '3': 
          
          cin >> n1;
          cin >> n2;
          r = n1 * n2;
          cout <<"\n   " << n1 << " * " << n2 <<" = "<< r;
          break;           

        case '4': 
          cin >> n1;
          cin >> n2;
          if ( n2 != 0 ){
            r = n1 / n2;
            cout <<"\n   " << n1 << " / " << n2 <<" = "<< r;
          }
          else {
            cout << "\n   ERROR \n" ;
          }
    }
  } while ( operacion != '5' );
  return 0;
}