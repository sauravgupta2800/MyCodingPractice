def fun(i,n,sum):
    if(i==n):
        return sum+i;
    print(sum)  # yaha pe sum ko print kr ke dekh lo samajh a jayega
    return fun(i+1,n,i+sum)

print(fun(1,5,0))# function call pe hum sum=0 initilialed ho jayega
