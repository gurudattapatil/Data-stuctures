n, m = [int(i) for i in input().split()]

# if period length of fibo modulo m is l. we need to compute n mod l 
if n<=1:
    print(n)  
    quit()
def pisano(m): 
    previous, current = 0, 1
    for i in range(0, m * m): 
        previous, current        = current, (previous + current) % m 
          
        # A Pisano Period starts with 01 
        if (previous == 0 and current == 1): 
            return i + 1

lesser = n%pisano(m)
if lesser<=1:
    print(lesser)
    quit()

def fibo(n, m):
    a, b = 0, 1
    for _ in range(n-1):
        c = a + b
        b, a = c, b
    print(c%m)

fibo(lesser, m)