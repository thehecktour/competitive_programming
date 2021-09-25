nums = [int(i) for i in input().split()]

target = int(input())

for i in range(len(nums)-1):
    for j in range(i+1, len(nums)):
        if nums[i] + nums[j] == target:
            print('{}{}'.format(nums[i], nums[j]))