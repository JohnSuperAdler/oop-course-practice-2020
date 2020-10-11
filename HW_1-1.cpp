/*
HW_1-1
List prime number under 30
*/

#include <cmath>
#include <iostream>

using namespace std;

const int Max = 30;
const double UpperBound = sqrt(Max);

int main(){
    for (int i = 2; i <= Max ; ++i)
    {
        if (i <= 3) {
            cout << i << " is a prime number.\n"; // too small to be dealt in the loop
            continue;
        }
        for (int j = 2; j <= UpperBound; ++j)
        {
            if (i % j == 0)
            {
                break;
            }

            if (j == static_cast<int>(sqrt(i)))
            {
                cout << i << " is a prime number.\n";
            }
            
        }
    }
    return 0;
} 