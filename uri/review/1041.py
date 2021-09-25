x,y = [float(i) for i in input().split()]

if y>0 and x>0:
    print("Q1")
elif y>0 and x<0:
    print("Q2")
elif y<0 and x<0:
    print("Q3")
elif y<0 and x>0:
    print("Q4")
elif y==0 and x==0:
    print("Origem")