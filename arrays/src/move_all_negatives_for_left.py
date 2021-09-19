array = [int(i) for i in input().split()]

new_array = []

for number in array:
    if number <0:
        new_array.append(number)

for new_number in array:
    if new_number >0:
        new_array.append(new_number)

print(new_array)