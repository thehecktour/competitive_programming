listinha = [100,50,20,10,5,2,1]

a = int(input())

for number in listinha:
    result = a/number
    print(result)    
    a = a - (result/a)