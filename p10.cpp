/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/
#include <iostream>
#include <ctime>
#include <math.h>
#include <list>
using namespace std;

bool esPrimo(int n){
    if(n == 2) return true;
    if(n == 0 || n == 1 || n %2 == 0) return false;
    
    for(int i = 3; i <= (sqrt(n)); i = i+2){
        if(n % i == 0){
            return false;
        } 
    }
    return true;
}

int main(){
    unsigned t0, t1;
    t0 = clock();

    int suma = 0;
    int x;
    cin>> x;

    list <int> arrayPrimos;
    list<string>::iterator it = ;
    
    for(int i = 2; i <= x; i++){   
        if(esPrimo(i) == true) {
            arrayPrimos.push_back(i);
        } 
    }
    while(it != arrayPrimos.end()){
        suma = suma + *it;    
    }

    cout<<"Suma:"<<suma<<endl;

    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Execution Time: " << time << endl;
}