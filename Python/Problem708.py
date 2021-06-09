#June2nd2020
import sys
result = []
def prime(n):
    result = []
    #n = int(input("number"))
    n=int(n)
    #start @ two
    #change to three
    #make it step up by 2

    while n % 2 == 0:
        print( "2 |",n)
        n = n/2
        result.append(2)
        if n == 1: break
    n = int(n)
    while n % 3 == 0:
        print( "3 |",n)
        n = n/3
        result.append(3)
        if n == 1: break
    n = int(n)
    for i in range(5,n,2):
        if i % 3 == 0: continue
        while n % i == 0:
            print( i,"|",n)
            n = n/i
            result.append(i)
    
        if n == 1: 
            break
    
    if n > 1: result.append(n)
    return result

def twofer(array):
    array = [2 if x!=1 else x for x in array]
    return(array)
    
def powerM(array):
    power = len(array)
    twoed = 2 ** power
    return twoed

def bruh():
    Sum = 0
    for i in range(0,5,2):
        print("i is ",i)
        Sum += divUNDconq(i)
        print(Sum)
        Sum += divUNDconq(i+1)
    return Sum
##def bruh():
##    Sum = 0
##    for i in range(1,10):
##        print("i is ",i)
##        Sum += divUNDconq(i)
##    return Sum

def divUNDconq(n):
    result = []
    n=int(n)
    
    while n % 2 == 0:
        print( "2 |",n)
        n = n/2
        result.append(2)
        if n == 1: break
    n = int(n)
    while n % 3 == 0:
        print( "3 |",n)
        n = n/3
        result.append(3)
        if n == 1: break
    n = int(n)
    for i in range(5,n,2):
        if i % 3 == 0: continue
        while n % i == 0:
            print( i,"|",n)
            n = n/i
            result.append(i)
    
        if n == 1: 
            break
    
    if n > 1: result.append(n)
    result = [2 if x!=1 else x for x in result]
    power = len(result)
    twoed = 2 ** power
    return twoed
