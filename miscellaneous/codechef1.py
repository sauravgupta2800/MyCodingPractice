t=int(input())
for _ in range(t):
    p1,p2,k=list(map(int ,input().split()))
    sum=(p1+p2)//k
    if sum%2==0:
        print("CHEF")
    else:
        print("COOK")
