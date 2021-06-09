def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n-1)

def isPanDigital(n):
    length = len(str(n))
    current = 1
    for i in range(length):
        current = current * n // (10 ** (length-1))
        length = length - 1
    if current == factorial(length):
        return True
    return False

print(isPanDigital(15234))
