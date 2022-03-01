"""
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
"""
from math import sqrt
from math import floor
import profile
from sys import getsizeof


def esPrimo(n):
    if (n == 2): return True
    if(n == 0 or n == 1 or n%2 == 0): return False
    for i in range(3,floor(sqrt(n))+1,2):
        if (n % i == 0): return False
    return True

suma = 0
listaPrimos = []

for i in range(100):
    if(esPrimo(i) == True): listaPrimos.append(i)

for i in listaPrimos:
    suma += i

print("La suma de los primos por debajo de 2 millones es: ", suma)

