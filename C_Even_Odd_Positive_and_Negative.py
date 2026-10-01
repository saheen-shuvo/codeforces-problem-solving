t = input()
t = int(t)

inp = input();
numbers = inp.split()
even_count = 0
odd_count = 0
positive_count = 0
negative_count = 0

for i in range(t):
    numbers[i] = int(numbers[i])
    if numbers[i] % 2 == 0:
        even_count += 1
    if numbers[i] % 2 != 0:
        odd_count += 1
    if numbers[i] > 0:
        positive_count += 1
    if numbers[i] < 0:
        negative_count += 1

print("Even:", even_count)
print("Odd:", odd_count)
print("Positive:", positive_count)
print("Negative:", negative_count)
