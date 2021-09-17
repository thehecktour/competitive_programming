nums = [int(i) for i in input().split()]
target = int(input())

tamanho = len(nums)
pos = 0

for i in range(0, tamanho):
    for j in range(tamanho,0):
        print(i,j)
