def abs(n):
    if n<0:
        return -1*n
    else:
        return n
l=list("....x..xx...x")
MOD=10000003
index=[]
for i in range(1,len(l)+1):
    if l[i-1]=="x":
        index.append(i)
center=0
if(len(index)%2!=0):
    center=index[(len(index))//2]
else:
    center=(index[len(index)//2]+index[(len(index)//2)-1])//2

sum=0
center-=1
put=center
for i in range(center,len(l),1):
    if l[i]=="x":
        sum+=abs((i-put))%MOD
        put+=1
put=center-1
for i in range(center-1,-1,-1):
    if l[i]=="x":
        sum+=abs((i-put))%MOD
        put-=1
print(sum)
