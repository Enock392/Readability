try: input=raw_input
except NameError: pass
passage = input("Text: ")
sentences=0
letters = 0
words=0
for i in passage:
    if i.isalpha():
        letters+=1
    elif i.isspace():
        words+=1
    elif i=='.' or i =='!' or i=='?':
        sentences+=1
words+=1
AverageWords=100.0/words
l=AverageWords*letters
s=AverageWords*sentences
grade=0.0588*l-0.296*s-15.8
if grade>16:
    print(f"Grade 16+")
elif grade<1:
    print(f"Before Grade 1")
else:
    print(f"Grade:{round(grade)}")