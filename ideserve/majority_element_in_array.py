a=[2,6,22,2,2,2,2,2,21,6,3,2,8,2,1]
#a=[4,7,4,4,7,4,4,9,4,3]
count=0
for i in a:
    if count==0:
        candidate=i
        count=1
        continue
    else:
        if candidate==i:
            count+=1
        else:
            count-=1

if count==0:
    exit(0)

count=0

for i in a:
    if i==candidate:
        count+=1

if count>=len(a)//2:
    print(candidate)
else:
    exit(0)