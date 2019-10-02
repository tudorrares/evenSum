#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {

    int beg;
    int lim;
    int j = 0;
    int result = 0;
    string resp;
    string resp2;

    cout << "Alege inceputul din interval (primul numar): " << endl;
    cin >> beg;

    cout << "Alege limita intervalului (al doilea numar)" << endl;
    cin >> lim;

    cout << "Intervalul ales este intre "; cout << beg; cout << "-"; cout << lim; cout << ". "; cout << "Este corect? (D/N)";
    cin >> resp2;

    if(resp2 == "d" || "D") {
        
    } else {
        cout << "Te rog mai introdu inca odata numerele:" << endl;
        main();
    }

    for(int i = beg + 1; i<lim; i++) {
        if(i%2==0) {
            result = result + i;
        }
    }

    if(result == 0) {
        cout << "In intervalul dat nu s-a putut gasi niciun numar par. Te rog mai incearca odata." << endl;
        cout << endl;
        main();
    } else {
        cout << endl;
        cout << "Suma numerelor pare din intervalul ales este de: "; cout << result; cout << "." << endl;
        cout << "Doresti sa incerci si alt interval?";
        cin >> resp;
        if(resp == "y" || resp == "Y") {
            cout << endl;
            main();
        } else {
            cout << "Multumim pentru folosirea programului. La revedere." << endl;
            exit(0);
        }
    }


    return 0;

}