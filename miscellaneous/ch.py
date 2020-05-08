M = 1000000007
n,q=list(map(int, input().split()))
n=n+1;
nodes=pow(2,n)-1;
edges=nodes-1;
leave=(nodes+1)//2;
top=1;
for _ in range(q):
    l=list(map(int, input().split()) )
    if(l[0]==1):
        if l[1]==1 or l[1]==2:
            edges=(n+(2*edges))%M;
            leave=2*leave
            top=2*top;
        elif l[1]==3:
            n=n*2;
            edges=(top+(2*edges))%M;
            top=leave
        elif l[1]==4:
            n=n*2;
            edges=(leave+(2*edges))%M
            leave=top
    else:
        print(edges)
