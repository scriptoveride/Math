number = 1
pi = 0
i = 0
while i < 10000000: 
    if (i % 2) == 0:
        pi += 4/number
    else:
        pi -= 4/number

    number += 2
    i += 1
print(pi)
