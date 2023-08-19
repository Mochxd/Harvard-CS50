from cs50 import get_float

# get cash from the user
while True:
    cents = get_float("Change owed: ")
    if cents > 0:
        break
cents = round(cents * 100)
count = 0
# number of quarters
while cents >= 25:
    cents = cents - 25
    count += 1
# number of Dimes
while cents >= 10:
    cents = cents - 10
    count += 1
# number of nickles
while cents >= 5:
    cents = cents - 5
    count += 1
# number of cents
while cents >= 1:
    cents = cents - 1
    count += 1
# print the count
print(f"", count)