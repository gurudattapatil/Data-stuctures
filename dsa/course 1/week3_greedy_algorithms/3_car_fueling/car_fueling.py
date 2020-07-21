d = int(input())
m = int(input())
n = int(input())
v = [int(i) for i in input().split()]
    
a=0    
count=0
for s in v:
    if s>m:
        m+=a
        if m>d:
            
            quit()
        elif (s-a)>m:
            count=-1
            quit()
        count+=1
        a=s
print(count)