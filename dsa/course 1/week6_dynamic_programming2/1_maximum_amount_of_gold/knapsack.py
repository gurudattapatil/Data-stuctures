import sys
import numpy
def optimal_weight(W, w,n):
    w.sort()
    m=numpy.zeros((W+1,n+1))
    for i in range(1,W+1):
        for j in range(1,n+1):
            m[i][j]=m[i][j-1]
            if w[j-1]<=i:
                
                temp=m[i-w[j-1]][j-1]+w[j-1]
                if temp>m[i][j]:
                    m[i][j]=temp
      
                
    return (int(m[W][n]))


if __name__ == '__main__':
    W, n               = [int(i) for i in input().split()]
    w               = [int(i) for i in input().split()]
    print(optimal_weight(W, w,n))