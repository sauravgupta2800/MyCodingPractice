
def  Bsearch(arr,low,high,key):
    if(key<arr[low]):
        return low;
    if(key>arr[high]):
        return high+1;
    mid=(low+high)//2;
    if(arr[mid]==key):
        return mid;
    elif(arr[mid]<key):
        return Bsearch(arr,mid+1,high,key)
    else:
        return Bsearch(arr,low,mid-1,key);

size=int(input())
l=[]
curr_sum=0
for _ in range(size):
    n=int(input())
l=[2,5,7,11]
print(Bsearch(l,0,1,2))
