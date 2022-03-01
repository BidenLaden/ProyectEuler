"""
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?"""
#En la matriz 2x2 hay 6 combinaciones, es el factorial

from math import factorial
import time

start = time.time()
def nck(n, k):
    return factorial(n)/(factorial(k)*factorial(n-k))

print(int(nck(20+20,20)))
end = time.time()
print(end-start)