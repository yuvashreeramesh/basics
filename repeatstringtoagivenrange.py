String = "apple"
Length = 10
Temp = ""
while True:
    for i in String:
        if len(Temp) == Length:
            break
        else:
            Temp += i
    if len(Temp) == Length:
        break
print(Temp)
