# your code goes here# Uses python3
import numpy

def ev(a, b, op):
    if op == '+':
        return a + b
    elif op == '-':
        return a - b
    elif op == '*':
        return a * b
    else:
        assert False

def get_maximum_value(dataset):
    #write your code here
    d = dataset[::2]
    op = dataset[1::2]
    m=numpy.zeros((len(d)+1,len(d)+1))
    n=numpy.zeros((len(d)+1,len(d)+1))
    for i in range(1,len(d)+1):
        m[i][i]=n[i][i]=d[i-1]
    o=len(d)
    for h in range(1,o):
        for j in range(1,o-h+1):
            s=h+j
            mini,maxi = float('inf'),float('-inf')
            for k in range(j,s):
                a=ev(n[j][k],n[k+1][s],op[k-1])
                b=ev(n[j][k],m[k+1][s],op[k-1])
                c=ev(m[j][k],n[k+1][s],op[k-1])
                d=ev(m[j][k],m[k+1][s],op[k-1])
                mini = min(mini,a,b,c,d)
                maxi = max(maxi,a,b,c,d)
            m[j][s] = mini
            n[j][s]	= maxi
    return int(n[1][o])
            
            





if __name__ == "__main__":
    print(get_maximum_value(input()))