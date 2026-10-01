inp = (input())

numbers = inp.split()

x = int(numbers[0])
y = int(numbers[1])

last_digit_of_x = x % 10
last_digit_of_y = y % 10

sum_of_last_digits = last_digit_of_x + last_digit_of_y
print(sum_of_last_digits)
