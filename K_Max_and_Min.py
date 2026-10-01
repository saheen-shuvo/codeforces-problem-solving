inp = input()
numbers = inp.split();

max_num = int(numbers[0])
min_num = int(numbers[0])

for num in numbers:
    num = int(num)
    if num > max_num:
        max_num = num
    if num < min_num:
        min_num = num
print(min_num, max_num)
