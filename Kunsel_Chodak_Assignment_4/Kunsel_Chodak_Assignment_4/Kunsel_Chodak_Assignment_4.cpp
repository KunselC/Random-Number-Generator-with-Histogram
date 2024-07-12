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
        if (random >= 0.1 && random < 0.2) {
            counters[1] += 1;
        }

    }
}
