# Uses python3
a, b = [int(i) for i in input().split()]


def gcd(a,b):
    
    if(b!=0):
        c=a%b
        gcd(b,c)
    else:
        print(a)
        

if (a>b):
    gcd(a,b)
else:
    gcd(b,a)
   
             