from cs50 import get_string
# get text from user
text = get_string("Text: ")
# decleration for letters,words and sentences
letters = 0
words = 1
sentences = 0
# make a loop to check if we count letters or words or sentences
for i in text:
    if i.isalpha():
        letters += 1
    elif i == " ":
        words += 1
    elif i == "?" or i == "!" or i == ".":
        sentences += 1
# mak a formula
index = round(0.0588 * (letters / words * 100) - 0.296 * (sentences / words * 100) - 15.8)
# print the grade
if index >= 16:
    print("Grade 16+")
elif index < 1:
    print("Before Grade 1")
else:
    print(f"Grade", index)