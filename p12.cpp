#include <iostream>
#include <cmath>

using namespace std;

int NumberOfDivisors(int number);
int main(){
    int number = 0;
    int i = 1;
 
    while(NumberOfDivisors(number) < 53){
        number += i;
        i++;
    }
    cout<< number;
}
int NumberOfDivisors(int number) {
    int nod = 0;
    int raiz = (int) sqrt(number);
 
    for(int i = 1; i<= raiz; i++){
        if(number % i == 0){
            nod += 2;
        }
        //Correction if the number is a perfect square
        if (raiz * raiz == number) {
        nod--;
        }
    }
    
 
    return nod;
}

