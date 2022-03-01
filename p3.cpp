/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

Para llegar a una conclusion, utilizaremos la descomposicion en factores primos easy y la 
implementaremos:
The number 12.
We start with the smallest prime number (2).
12/2 = 6, which means that 2 is a prime factor to 12.
We try again to divide the remainder with 2 again:
6/2 = 3. Three is a prime number as well, so we now have the complete factorization which is
Prime factorization of 12 is 2,2,3 and we can check that 2*2*3=12. 
*/

#include <iostream>
using namespace std;

int main(){
    long x;
    long factorMasGrande;
    cout<<"Introduce un numero ";
    cin>> x;

    int counter = 2;
    while(counter*counter <= x){
        if(x % counter == 0){
            x = x / counter;
            factorMasGrande = counter;
        }else{
            counter++;
        }
    }
    if(x >= factorMasGrande){
        factorMasGrande = x;
    }
    cout<< "El factor primo mas grande del numero es "<< x<<endl;
    
}