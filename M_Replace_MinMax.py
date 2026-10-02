n = int(input())

numbers = input().split()

numbers = [int(num) for num in numbers]

min_num = min(numbers)
min_index = numbers.index(min_num) 

max_num = max(numbers)
max_index = numbers.index(max_num)

numbers[min_index] = max_num
numbers[max_index] = min_num

for num in numbers:
    print(num, end=" ")
