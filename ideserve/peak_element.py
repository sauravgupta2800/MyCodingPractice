array=[1,4,3,6,7,5]
start=0
end=len(array)
res=True
while start<=end:
    mid=(start+end)//2
    print(start, end, mid)
    if array[mid-1]<array[mid] and array[mid]>array[mid+1]:
        print(array[mid])
        break
    elif array[mid-1]>array[mid]:
        end=mid-1
    else:
        start=mid+1

print("over")