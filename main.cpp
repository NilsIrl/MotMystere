#include <iostream>
#include "Mot.h"

using namespace std;

int main()
{
    int const TRIES(6);
    int const LINEJUMPS(40);
    // 1 Demander le mot à deviner

    string motATrouver("");
    string rejouer("");

    do {
        cout << "Saysissez un mot : ";
        cin >> motATrouver;
        for(int x(0);x<LINEJUMPS;x++){
            cout << endl;
        }

        // 2 Générer un mot mystère

        string motEncrypter(melangeMot(motATrouver));

        int leftTries(TRIES);
        // 3 Demander le mot en boucle
        string tempString("");
        do {
            cout << endl << "Quel est ce mot " << motEncrypter << " ? : ";
            cin >> tempString;
            if(tempString == motATrouver) {
                cout << "BRAVO !!!!!!!!!" << endl;
                break;
            } else {
                cout << "Ce n'est pas le mot !!" << endl;
                leftTries--;
                cout << "Il vous reste " << leftTries << " essais." << endl;
            }
            if(leftTries == 0) {
                cout << "Perdu :(" << endl;
            }
        } while(true && leftTries > 0);
        cout << "Voulez vous rejouer (O/N) ? : ";
        cin >> rejouer;

    } while(rejouer == "O");
    return 0;
}
