import math
 
a=int(input()) 
b=int(input())
k=int(input()) 
ans=0
for y in range(10**18):
    u = y*y*y
    if u <= b and u >= a:
        l = max(u - k, a)**0.5
        r = min(u + k, b)**0.5
        ans += math.floor(r) - math.ceil(l) + 1
    if u > b:
        print(ans)
        exit(0)
print(ans)
