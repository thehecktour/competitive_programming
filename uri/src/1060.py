a = 0
quantidade = 0

while(a<6):
    valor = float(input())
    if valor > 0:
        quantidade +=1
    a+=1

print("{} valores positivos".format(quantidade))