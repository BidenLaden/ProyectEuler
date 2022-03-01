/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a² + b² = c²
For example, 3²+ + 4² = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/

#include <iostream>
#include <ctime>
using namespace std;

int main(){
    unsigned t0, t1;
    t0 = clock();
    int a = 0, b = 0, c = 0;
    int s = 1000;
    bool found = false;
    for (a = 1; a < s / 3; a++) {
        for (b = a; b < s / 2; b++) {
            c = s - a - b;
 
            if (a * a + b * b == c * c) {
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    int product = a*b*c;
    cout<<a <<" "<<b<<" "<<c<<"and the product is "<<product<<endl;
    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Execution Time: " << time << endl;
}
    

    
