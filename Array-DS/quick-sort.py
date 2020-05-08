def partition(arr,l,r):
    pivot=arr[r]
    separator=l-1
    for j in range(l,r+1):
        if arr[j]<=pivot:
            separator=separator+1
            # swap in python
            arr[j],arr[separator]=arr[separator],arr[j]
    return separator

def quicksort(arr,l,r):
    if l<=r:
        pos=partition(arr,l,r)
        quicksort(arr,l,pos-1)
        quicksort(arr,pos+1,r)
        return arr

arr=[10,80,30,90,40,50,70]

print(quicksort(arr,0,len(arr)-1))
