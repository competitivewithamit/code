def sol():
    n=int(input())
    a=input()
    b=input()
    for i in range(len(a)):
        if a[i]<b[i] or a.count(b[i])==0:
            print(-1)
            return
    ans=[]
    f=0
    for i in sorted(list(set(b)),reverse=True):
        a1=[]
        f=0
        for j in range(len(b)):
            if a[j]==i and f==1:
                continue
            if b[j]==i or a[j]==i:
                a1.append(j)
            if a[j]==i:
                f=1
        if len(a1)!=1:
            ans.append(a1)
    print(len(ans))
    for i in ans:
        print(len(i),end=" ")
        for j in i:
            print(j,end=" ")
        print()
try:
    for _ in range(int(input())):
        sol()
except:
    pass
