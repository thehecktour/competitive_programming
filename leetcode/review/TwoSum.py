arr = [int(i) for i in input().split()]
target = int(input())

tamanho = len(arr)

for i in range(tamanho -1):
    for j in range(i+1, tamanho):
        if arr[i] + arr[j] == target:
            print("[{},{}]".format(arr[i],arr[j]))
