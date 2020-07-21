# python3
import numpy

n1=int(input())
s1=[int(i) for i in input().split()]
n2=int(input())
s2=[int(i) for i in input().split()]
n3=int(input())
s3=[int(i) for i in input().split()]
    # If inputs for s1, s2 are numbers uncomment below line. 
    # s1, s2 = [int(i) for i in s1.split()], [int(i) for i in s2.split()]
Matrix = numpy.zeros((n1+1 , n2+1,n3+1))

for i in range(1, n1+1):
    for j in range(1, n2+1):
        for k in range(1, n3+1):
            if s1[i-1] == s2[j-1]== s3[k-1]:
                Matrix[i][j][k] = Matrix[i-1][j-1][k-1] + 1
            else:
                Matrix[i][j][k] = max(Matrix[i][j-1][k], Matrix[i-1][j][k],Matrix[i][j][k-1])


print(int(Matrix[n1][n2][n3]))