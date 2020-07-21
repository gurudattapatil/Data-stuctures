# Uses python3
n = int(input())
def calc_fib(n):
    
    if(n<=1):
        print(n)
    else:
        a,b= 0,1
        for num in range(n-1):
            c=a+b
            c=c%10
            b,a=c,b
        print(c)
        
        
calc_fib(n)
