#https://projecteuler.net/problem=1
def sumMultiples():
  sum = 0
  for i in range(1001):
    if (i % 3) == 0:
      sum += i
      continue
    if (i % 5) == 0:
      sum += i
  return sum

sumMultiples()
