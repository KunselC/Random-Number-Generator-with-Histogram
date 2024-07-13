#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


int main()
{
    int counters[10] = { 0 };
    double random = 0;
    for (int i = 0; i < 10000; i++) {
        random = double(rand()) / RAND_MAX;
        if (random >= 0 && random < 0.1) {
            counters[0] += 1;
        }
        else if (random >= 0.1 && random < 0.2) {
            counters[1] += 1;
        }
        else if (random >= 0.2 && random < 0.3) {
            counters[2] += 1;
        }
        else if (random >= 0.3 && random < 0.4) {
            counters[3] += 1;
        }
        else if (random >= 0.4 && random < 0.5) {
            counters[4] += 1;
        }
        else if (random >= 0.5 && random < 0.6) {
            counters[5] += 1;
        }
        else if (random >= 0.6 && random < 0.7) {
            counters[6] += 1;
        }
        else if (random >= 0.7 && random < 0.8) {
            counters[7] += 1;
        }
        else if (random >= 0.8 && random < 0.9) {
            counters[8] += 1;
        }
        else if (random >= 0.9 && random < 1.0) {
            counters[9] += 1;
        }
    }
    //normalizing
    for (int i = 0; i < 10; i++) {
        counters[i] /= 20.0;
    }
    for (int i = 0; i < 10; i++) {
        cout << i << " | ";
        for (int j = 0; j < static_cast<int>(counters[i]); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
