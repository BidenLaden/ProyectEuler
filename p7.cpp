/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10001st prime number?*/

//Fuerza bruta
#include <iostream>
#include <list>
#include <ctime>
#include <math.h>
using namespace std;

//El unico primo par es 2, asi que en el bucle recorreremos solo los impares
bool esPrimo(int n){
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

    list <int> arrayPrimos;
    int x;
    cout<<"Ver primo numero.. "<<endl;
    cin>> x;
    int contador = 2;
    while(arrayPrimos.size() != x){
        if(esPrimo(contador) == true) arrayPrimos.push_back(contador);
        contador++;
    }
    cout<< arrayPrimos.back()<<endl;
    t1 = clock();
    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout << "Execution Time: " << time << endl;
}
