#june3rd2020
Primes = []
def prime(n):
    result = []
    
    n=int(n)
    while n % 2 == 0:
        n = n/2
        result.append(2)
        if n == 1: break
    n = int(n)
    while n % 3 == 0:
        n = n/3
        result.append(3)
        if n == 1: break
    n = int(n)
    for i in range(5,n,2):
        if i % 3 == 0: continue
        while n % i == 0:
            n = n/i
            result.append(i)
    
        if n == 1: 
            break
    if n > 1: result.append(n)
    result = [2 if x!=1 else x for x in result]
    power = len(result)
    twoed = 2 ** power
    
    return twoed


index = 2
while len(Primes)< 10001:
    if prime(index)==2:
        Primes.append(index)
    index+=2

print(list(Primes))
   

