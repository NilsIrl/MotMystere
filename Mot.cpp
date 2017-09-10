#include "Mot.h"
#include <ctime>
#include <cstdlib>
#include <string>

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
