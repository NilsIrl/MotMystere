#include "Mot.h"
#include <ctime>
#include <cstdlib>
#include <string>
#include <fstream>
#include <random>
#include <iostream>



using namespace std;

string melangeMot(string mot) {
    srand(time(0));
    string result("");
    int randomNb(0);
    int initialSize(mot.size());
    for(int x(0);x < initialSize;x++) {
        randomNb = rand() % mot.size();
        result += mot[randomNb];
        mot.erase(randomNb, 1);
    }
    return result;
}

string choisirMot() {
    srand(time(0));
    long random_int = rand();
    cout << random_int << endl;
    ifstream file("dico.txt");
    string ligne;
    for(long x(0);x <= random_int;x++){
        file >> ligne;
    }
    return ligne;
}
