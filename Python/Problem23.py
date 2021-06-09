#June3rd2020

import math as m

def factor(n):
    result=[]
    #n = int(input('GIVE ME ALL YOUR MONEY'))
    n = int(n)
    for x in range(1,int(m.sqrt(int(n))+1)):
        if n%x==0:
            result.append(int(x))
            result.append(int(n/x))
    result.sort()
    #print(result)
    result.pop()
    sum = 0
    for i in result:
        sum+=i
    print("number: ",n)
    print("sum: ",sum)
    return "perfect" if sum == n else "defiient" if sum < n else "abundant"
    return(result)
