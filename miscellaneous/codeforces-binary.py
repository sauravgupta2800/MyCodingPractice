t=int(input())
arr=list(map(int,input().split()))
arr=sorted(arr)
maxx=abs(arr[0]-arr[-1])
x=arr.count(arr[0])
y=arr.count(arr[-1])
if(arr[0]==arr[-1]):
    c=(x*(x-1)//2)
    print(maxx,c)
else:
    c=x*y
    print(maxx,c)