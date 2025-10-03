def is_palindrome_string(number):
    num_str = str(number)
    return num_str == num_str[::-1]

# Get input from the user
num = int(input("Enter a number: "))

if is_palindrome_string(num):
    print(f"{num} is a palindrome number.")
else:
    print(f"{num} is not a palindrome number.")