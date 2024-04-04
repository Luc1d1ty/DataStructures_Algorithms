num = int(input())

c = 0

while num > 0:

    num //= 10
    c += 1


print(num)
print(c)
