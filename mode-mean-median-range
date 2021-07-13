def mean(list_of_nums):
    total = 0
    for number in list_of_nums:
        total = total + number
    return total / len(list_of_nums)

def mode(list_of_nums):
    max = (0, 0)
    for number in list_of_nums:
        occurences = list_of_nums.count(number)
        if occurences > max[0]:
            max = (occurences, number)
    return max[1]

def median(list_of_nums):
    list_of_nums.sort()
    if len(list_of_nums) % 2 != 0:
        middle = int((len(list_of_nums) - 1) / 2)
        return list_of_nums[middle]
    elif len(list_of_nums) % 2 == 0:
        middle_index_1 = int(len(list_of_nums) / 2)
        middle_index_2 = int(len(list_of_nums) / 2) - 1
        return int(mean([list_of_nums[middle_index_1], list_of_nums[middle_index_2]]))

def range(list_of_nums):
    list_of_nums.sort()
    first = list_of_nums.pop(0)
    last = list_of_nums.pop()
    return (last - first)   

try:
    numbers = []
    print("Type the numbers you want to be in the list and press 'enter'.\nWhen you are done type 'stop' or press 'enter' again.")
    while True:
        numbers.append(int(input()))
         
except:

    print("\n")
    print(numbers)
    print("\nAmount of numbers in the list is:", len(numbers))
    print("Rearranged is:", sorted(numbers))
    print("The mean is:", mean(numbers))
    print("The mode is:", mode(numbers))
    print("The median is:", median(numbers))
    print("The range is:", range(numbers))
