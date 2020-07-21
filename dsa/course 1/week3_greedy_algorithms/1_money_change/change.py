m = int(input())
ct=0


for i in [10,5,1]:
    if m>=i:
        q=m//i
        ct+= q
        m=m%i
        if m==0:
            print(ct)