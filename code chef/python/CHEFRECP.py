def sol():
    n=int(input())
    v1=list(map(int,input().split()))
    v2=[]
    for i in set(v1):
        if v2.count(v1.count(i))>0:
            print("NO")
            return 
        v2.append(v1.count(i))
    v2=[v1[0]]
    prev=v1[0]
    for i in range(len(v1)):
        if prev!=v1[i]:
            if v2.count(v1[i])>0:
                print("NO")
                return
        prev=v1[i]
        v2.append(v1[i])
    print("YES")
try:
    for i in range(int(input())):
        sol()
except:
    pass
