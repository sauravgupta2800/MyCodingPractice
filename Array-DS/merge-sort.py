def merge(left,right):
    a,b=len(left),len(right)
    c=[]
    i,j=0,0
    while i+j<a+b:
        if i==a:
            c.append(right[j])
            j+=1
        elif j==b:
            c.append(left[i])
            i+=1
        elif left[i]<=right[j]:
            c.append(left[i])
            i+=1
        else:
            c.append(right[j])
            j+=1
    return c

def mergesort(arr,l,r):
    if l==r:
        return arr[l:r+1]
    else:
        mid=(l+r)//2
        left=mergesort(arr,l,mid)
        right=mergesort(arr,mid+1,r)
        return merge(left,right) # merging left and right sub parts



arr=[1,3,5,7,9,2,4,6,8]

print(mergesort(arr,0,len(arr)-1))
