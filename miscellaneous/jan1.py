import re

def findWholeWord(w):
    return re.compile(r'\b({0})\b'.format(w), flags=re.IGNORECASE).search


t=int(input())
for _ in range(t):
    str=input()
    if(findWholeWord('not')(str)):
        print("Real Fancy")
    else:
        print("regularly fancy")
