"""
2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?
"""

from math import pow

def sumaDigitos(n):
    x = int(pow(2,n))
    num = [int(a) for a in str(x)]
    return sum(num)

print(sumaDigitos(1000))