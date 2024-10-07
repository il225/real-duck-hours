#adds integers 1 to input number
 
rerun = "y"

while rerun == "y":

    x = int(input("number: "))
    y = int(0)

    while x > 0:
        y = y + x
        x = x - 1

    print(y)

    rerun = str(input("rerun? (y/n) "))