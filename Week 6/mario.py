from cs50 import get_int

# mak a nested loop to get a number between 0 and 9
while True:
    height = get_int("Height: ")
    if height > 0 and height < 9:
        break
# print the shape
for i in range(height):
    for j in range(height):
        if i + j >= height - 1:
            print("#", end="")
        else:
            print(" ", end="")
    print("")