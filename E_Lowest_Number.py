n = int(input())

numbers = input().split()

numbers = [int(num) for num in numbers]

print(min(numbers), numbers.index(min(numbers))+1)
