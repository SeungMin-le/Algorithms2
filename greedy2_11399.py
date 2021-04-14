pNum = int(input())
pTime=[int(x) for x in input().split()]

pTime.sort()
result=pTime[0]
print(pTime)
for i in range(1,pNum):
    pTime[i]+=pTime[i-1]
    result+=pTime[i]

print(result)
