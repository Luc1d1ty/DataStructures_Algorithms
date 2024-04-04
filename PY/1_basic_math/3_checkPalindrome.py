num = int(input())

org = num
dup = 0

while num > 0:
    dup = dup * 10 + (num % 10)
    num //= 10

#print(dup)
#print(org)

print("yes") if org == dup else print("no")
