/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples
is 23.Find the sum of all the multiples of 3 or 5 below 1000.

So lets look at the numbers divisible by n=3:
3+6+9+12+…+999 = 3*(1+2+3+4+…+333)
And the numbers divisible by n=5:
5+10+15+20+…+995 = 5*(1+2+3+4+…+199)

The trick is to express the sum by other means, and in this case the sum
1+2+3+4+…+N = (N*(N+1)/2).
A geometric explanation is given here and an arithmetic explanation is given here. 
Thus the sequences for any number divisible by n can be written as n*N*(N+1)/2.

N is the highest number less than p divisible by n. In the case of 5 this is 995. However, with integer division N can be 
expressed as
N = p/n
*/

#include <iostream>
using namespace std;

int sumaDivisible(int n, int p){
    return n*(int(p/n))*((int(p/n))+1)/2;
}
int solve(){
    return sumaDivisible(3,999) + sumaDivisible(5,999) - sumaDivisible(15,999);
}
int main(){
    cout<<solve();
    return 0;
}