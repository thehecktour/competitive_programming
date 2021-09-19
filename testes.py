nums = [int(i) for i in input().split()]
target = int(input())

tamanho = len(nums)
pos = 0

for i in range(tamanho -1):
    for j in range(i+1, tamanho):
        if nums[i] + nums[j] == target:
            print("Posição {} e posição {}".format(nums[i],nums[j]))
