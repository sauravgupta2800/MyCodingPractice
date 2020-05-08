
l=list(map(int,input().split()))
x=[1,1]
y=[2,4]
oddSum=3
evenSum=5
for i in range(3,26):
    if i%2!=0:
        #odd case
        x.append(oddSum)
        y.append(pow(2,i))
        oddSum=oddSum+pow(2,i)
    else:
        #even sum
        x.append(evenSum)
        y.append(pow(2,i))
        evenSum=evenSum+pow(2,i)
ans=[]
pos=1
for i in range(l[0]):
    ans.append(x[l[pos]-1])
    ans.append(y[l[pos]-1])
    pos+=1
print(*ans,sep=" ")
