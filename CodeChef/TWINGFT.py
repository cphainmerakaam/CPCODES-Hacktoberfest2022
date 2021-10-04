for i in range(int(input())):
    n,k=[int(i) for i in input().split()]
    l=[int(i) for i in input().split()]
    l=sorted(l,reverse=True)
    s1=0
    s2=0
    i=0
    j=2*k
    while(j!=0):
        if i==0:
            s1+=l[0]
            i=1
            l.pop(0)
        else:
            s2+=l[0]
            i=0
            l.pop(0)
        j-=1
    s2+=l[0]
    print(max(s1,s2))