a,b = [int(i) for i in input().split()]

x = 1
y = 2
z = 3

for i in range(a,b+1):
    print('{} {} {}'.format(x,y,z))
    x = x+a
    y = y+a
    z = z+a
    if a 