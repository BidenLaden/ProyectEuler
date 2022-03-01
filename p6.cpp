/*The sum of the squares of the first ten natural numbers is,
1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

#include <iostream>
using namespace std;

int sumaCuadrados(int n){
    //Sn² = n(n+1)(2n+1)/6
    return (n*(n+1)*(2*n+1))/6;
}
int cuadradoSuma(int n){
    return (n*(n+1)/2)*(n*(n+1)/2);
}
int solve(int n){
    return cuadradoSuma(n) - sumaCuadrados(n);
}
int main(){
    int x;
    cout<< "Introduce un numero "<<endl;
    cin >> x;
    cout<<"La diferencia entre en cuadrado de la suma y la suma de cuadrados es "<<solve(x)<<endl;
    return 0;
}