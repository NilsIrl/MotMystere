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
    boost::random::mt19937 rng;
    boost::random::uniform_int_distribution<> nombre(0, 323576);
    int random_int = nombre(rng);
    cout << random_int << endl;
    ifstream file("dico.txt");
    string ligne;
    for(int x(0);x <= random_int;x++){
        file >> ligne;
    }
    return ligne;
}
