#include <iostream>
#include "Mot.h"
#include <vector>

using namespace std;

int main()
{
    int const TRIES(6);
    int const LINEJUMPS(40);
    // 1 Demander le mot � deviner

    string motATrouver;
    string rejouer("");

    vector<int> triesList;
    do {
        motATrouver = choisirMot();
        for(int x(0);x<LINEJUMPS;x++){
            cout << endl;
        }

        // 2 G�n�rer un mot myst�re

        string motEncrypter(melangeMot(motATrouver));

        int triesNum(0);
        // 3 Demander le mot en boucle
        string tempString("");
        do {
            cout << endl << "Quel est ce mot " << motEncrypter << " ? : ";
            cin >> tempString;
            if(tempString == motATrouver) {
                cout << "BRAVO !!!!!!!!!" << endl;
                triesList.push_back(triesNum);
                cout << triesNum << endl;
                break;
            } else {
                cout << "Ce n'est pas le mot !!" << endl;
                triesNum++;
                cout << "Il vous reste " << TRIES-triesNum << " essais." << endl;
            }
            if(triesNum == TRIES) {
                cout << "Perdu :(" << endl;
                cout << "Le mot �tait : '" << motATrouver << "'" << endl;
            }
        } while(true && triesNum < TRIES);
        cout << "Voulez vous rejouer (O/N) ? : ";
        cin >> rejouer;

    } while(rejouer == "O");
    if(triesList.size() != 0){
        int result = 0;
        for(unsigned int x=0;x<triesList.size();x++) {
            result += triesList[x];
        }
        result /= triesList.size();
        cout << "Votre moyenne est de " << result << "essais !" << endl;
    } else {
        cout << "Vous n'avez pas gagn�." << endl;
    }
    return 0;
}
