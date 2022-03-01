def sumaDivisible(n, p):
    return n*(int(p/n))*((int(p/n))+1)/2

def solve():
    return sumaDivisible(3,999) + sumaDivisible(5,999) - sumaDivisible(15,999)

print(int(solve()))