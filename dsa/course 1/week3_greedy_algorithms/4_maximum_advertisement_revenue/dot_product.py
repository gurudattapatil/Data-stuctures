n = int(input())
a = [int(i) for i in input().split()]
b = [int(i) for i in input().split()]
sum=0
for i in range(n):
    sum+=(max(a)*max(b))
    a.remove(max(a))
    b.remove(max(b))
    
print(sum)