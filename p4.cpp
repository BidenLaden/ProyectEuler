/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 
2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int esPalindromo(int n){
    //Retorna 1 si es palindromo, 0 si no lo es
    int palindromo = 1;
    string s = to_string(n);
    int i = 0, k = s.length()-1;
    while(i < k){
        if(s[i++] != s[k--]){
            palindromo = 0;
            break;
        }
    }
    return palindromo;
}
int main(){
    int f1 = 0, f2 = 0;
    int maxPalindromo = 1;
    long producto, x;
    cout<<"Introduce numero de digitos ";
    cin>> x;
    int numeroFinal = int(pow(10,x)) - 1; //Si es 4 digitos --> 10000 - 1 = 9999
    int numeroInicial = int(pow(10,(x-1)));

    for(int i = numeroFinal; i >= numeroInicial; i--){
        for(int j = numeroFinal; j >= numeroInicial; j--){
            producto = i * j;
            if(esPalindromo(producto) == 1){
                if(producto > maxPalindromo){
                    maxPalindromo = producto;
                    f1 = i;
                    f2 = j;
                    break;
                }
            }
        }
    }
    cout<<"El palindromo mas grande con "<< x <<" digitos es "<< maxPalindromo <<" producto de "<< f1 << " y "<<f2<<endl;
    
}