#include <iostream>
#include "Mot.h"

using namespace std;

int main()
{
    // 1 Demander le mot � deviner
    string motATrouver("");
    cout << "Saysissez un mot : ";
    cin >> motATrouver;
    for(int x(0);x<40;x++){
        cout << endl;
    }

    // 2 G�n�rer un mot myst�re

    string motEncrypter(melangeMot(motATrouver));


    // 3 Demander le mot en boucle
    string tempString("");
    do {
        cout << endl << "Quel est ce mot " << motEncrypter << " ? : ";
        cin >> tempString;
        if(tempString == motATrouver) {
            break;
        } else {
            cout << "Ce n'est pas le mot !!" << endl;
        }
    } while(true);
    cout << "BRAVO !!!!!!!!!" << endl;
    return 0;
}
