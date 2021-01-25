hello = input("Please input your name:\n")

print("Hello ")
print(hello)
print("\n")
if hello == "hello":
    print("Hello, Python world!\n")
else:
    print("Welcome to Python Program.\n")

print("The End")

inp = input("Please input a number:\n")
num = (int)(inp)
sums = 0

for i in range(1, num):
    sums += i;
print("The sums between 1 to ", num, " is ", sums)
