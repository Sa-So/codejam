import math as m
print(m.log(1e9,2))
a=[2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
ans=1;
for i in a:
    if ans > 1e9: break
    ans*=i
    print(ans)
