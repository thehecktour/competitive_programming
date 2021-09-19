array_one = [1,2,3,4,5]
array_two = [6,7,8,9,10]

m = {}

if len(array_one)<len(array_two):
    array_one,array_two = array_one,array_two
for i in array_one:
    if i not in m:
        m[i] = 1
    else:
        m[i]+=1
result = []

for i in array_two:
    if i in m and m[i]:
        m[i]-=1
        result.append(i)

print(result)