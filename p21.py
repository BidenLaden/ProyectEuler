"""
Let d(n) be defined as the sum of proper divisors of n (numbers less than n which divide evenly into n).
If d(a) = b and d(b) = a, where a ≠ b, then a and b are an amicable pair and each of a and b are called amicable numbers.

For example, the proper divisors of 220 are 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110; therefore d(220) = 284. The proper divisors of 284 are 1, 2, 4, 71 and 142; so d(284) = 220.

Evaluate the sum of all the amicable numbers under 10000.
"""

#Nos devuelve tambien la suma de los divisores
def d(n):
    suma = 0
    for i in range(1,n+1):
        if n%i==0:
            suma += i
    return suma


sumaTotal = 0
lista = []
for i in range(1001):
    lista.append('False')


for i in range(len(lista)):
    for j in range(len(lista)):
        if d(i) == d(j) and i != j and lista[i] == 'False' and lista[j] == 'False':
            sumaTotal += i + j
            lista[i] = 'True'
            lista[j] = 'True'
print(sumaTotal)

"""
for i in range(1,100):
    for j in range(1,100):
        if d(i) == d(j) and i!=j and lista[i] == False:
            print(i)
            print(j)
            lista[i] = True
            lista[j] = True
            sumaTotal += i + j

print(sumaTotal)
"""
    