import math
import random
import statistics
import datetime
import os
import sys
import json
import re
from collections import Counter

# 1. NUMERIC DATA TYPES

integer_value = 100
float_value = 3.14
complex_value = 3 + 4j

print("\n========== NUMERIC DATA TYPES ==========")

print("int:", integer_value, "| Type:", type(integer_value))
print("float:", float_value, "| Type:", type(float_value))
print("complex:", complex_value, "| Type:", type(complex_value))

print("Integer size:", sys.getsizeof(integer_value), "bytes")
print("Float size:", sys.getsizeof(float_value), "bytes")
print("Complex size:", sys.getsizeof(complex_value), "bytes")


# 2. BOOLEAN DATA TYPE

is_valid = True
is_completed = False

print("\n========== BOOLEAN DATA TYPE ==========")

print("True:", is_valid, "| Type:", type(is_valid))
print("False:", is_completed, "| Type:", type(is_completed))


# 3. STRING DATA TYPE

name = "Somesh"
character = 'A'
multiline = """Python
Programming"""

print("\n========== STRING DATA TYPE ==========")

print("String:", name)
print("Character:", character)
print("Multiline:", multiline)

print("String length:", len(name))
print("Uppercase:", name.upper())
print("Lowercase:", name.lower())
print("Title:", name.title())
print("Replace:", name.replace("Somesh", "Python"))
print("Find:", name.find("m"))
print("Count:", name.count("s"))
print("Starts with:", name.startswith("So"))
print("Ends with:", name.endswith("sh"))
print("String slice:", name[0:3])


# 4. LIST DATA TYPE

numbers = [10, 20, 30, 40, 50]

print("\n========== LIST DATA TYPE ==========")

print("List:", numbers)
print("First element:", numbers[0])
print("Last element:", numbers[-1])

numbers.append(60)
print("append:", numbers)

numbers.insert(1, 15)
print("insert:", numbers)

numbers.remove(30)
print("remove:", numbers)

numbers.pop()
print("pop:", numbers)

numbers.sort()
print("sort:", numbers)

numbers.reverse()
print("reverse:", numbers)

print("List length:", len(numbers))
print("List size:", sys.getsizeof(numbers), "bytes")


# 5. TUPLE DATA TYPE

coordinates = (10, 20, 30, 40)

print("\n========== TUPLE DATA TYPE ==========")

print("Tuple:", coordinates)
print("First element:", coordinates[0])
print("Tuple length:", len(coordinates))
print("Count:", coordinates.count(20))
print("Index:", coordinates.index(30))
print("Tuple size:", sys.getsizeof(coordinates), "bytes")


# 6. SET DATA TYPE

unique_numbers = {10, 20, 30, 40, 50}

print("\n========== SET DATA TYPE ==========")

print("Set:", unique_numbers)

unique_numbers.add(60)
print("add:", unique_numbers)

unique_numbers.discard(20)
print("discard:", unique_numbers)

print("Membership:", 30 in unique_numbers)

set_a = {1, 2, 3}
set_b = {3, 4, 5}

print("Union:", set_a.union(set_b))
print("Intersection:", set_a.intersection(set_b))
print("Difference:", set_a.difference(set_b))


# 7. DICTIONARY DATA TYPE

student = {
    "name": "Somesh",
    "rollNo": 101,
    "grade": "A"
}

print("\n========== DICTIONARY DATA TYPE ==========")

print("Dictionary:", student)
print("Name:", student["name"])
print("Roll number:", student["rollNo"])

student["city"] = "Mumbai"
print("After adding:", student)

student["grade"] = "A+"
print("After updating:", student)

print("Keys:", student.keys())
print("Values:", student.values())
print("Items:", student.items())

student.pop("city")
print("After removing:", student)


# 8. RANGE DATA TYPE

numbers_range = range(1, 6)

print("\n========== RANGE DATA TYPE ==========")

print("Range:", list(numbers_range))
print("Type:", type(numbers_range))
print("Range length:", len(numbers_range))


# 9. NONE DATA TYPE

empty_value = None

print("\n========== NONE DATA TYPE ==========")

print("None value:", empty_value)
print("Type:", type(empty_value))
print("Is None:", empty_value is None)


# 10. TYPE CONVERSION

number_string = "100"

print("\n========== TYPE CONVERSION ==========")

print("String to int:", int(number_string))
print("Int to float:", float(10))
print("Int to string:", str(100))
print("Int to complex:", complex(10))
print("List to tuple:", tuple([1, 2, 3]))
print("Tuple to list:", list((1, 2, 3)))
print("List to set:", set([1, 2, 2, 3]))


# 11. BINARY DATA TYPES

byte_data = bytes([65, 66, 67])
byte_array = bytearray([65, 66, 67])
memory_data = memoryview(byte_data)

print("\n========== BINARY DATA TYPES ==========")

print("bytes:", byte_data)
print("bytearray:", byte_array)
print("memoryview:", memory_data.tolist())

byte_array[0] = 68
print("Modified bytearray:", byte_array)


# 12. TYPE MODIFIERS AND TYPE CHECKING

value = 100

print("\n========== TYPE CHECKING ==========")

print("type:", type(value))
print("isinstance:", isinstance(value, int))
print("issubclass:", issubclass(bool, int))
print("id:", id(value))


# 13. ARITHMETIC OPERATORS

a = 10
b = 3

print("\n========== ARITHMETIC OPERATORS ==========")

print("Addition:", a + b)
print("Subtraction:", a - b)
print("Multiplication:", a * b)
print("Division:", a / b)
print("Floor division:", a // b)
print("Modulus:", a % b)
print("Exponent:", a ** b)


# 14. MATHEMATICAL FUNCTIONS

print("\n========== MATHEMATICAL FUNCTIONS ==========")

print("Absolute:", abs(-10))
print("Power:", pow(2, 3))
print("Round:", round(4.567, 2))
print("Maximum:", max(10, 20, 30))
print("Minimum:", min(10, 20, 30))
print("Sum:", sum([10, 20, 30]))

print("Square root:", math.sqrt(25))
print("Ceiling:", math.ceil(4.2))
print("Floor:", math.floor(4.8))
print("Factorial:", math.factorial(5))
print("GCD:", math.gcd(12, 18))
print("Sine:", math.sin(0))
print("Cosine:", math.cos(0))
print("Log:", math.log(10))
print("Pi:", math.pi)


# 15. STRING OPERATIONS

text = "Python Programming"

print("\n========== STRING OPERATIONS ==========")

print("Length:", len(text))
print("Upper:", text.upper())
print("Lower:", text.lower())
print("Capitalize:", text.capitalize())
print("Split:", text.split())
print("Join:", "-".join(["Python", "Programming"]))
print("Strip:", "  Python  ".strip())
print("Replace:", text.replace("Python", "C++"))
print("Find:", text.find("Program"))
print("Count:", text.count("m"))

print("Is alphabet:", "Python".isalpha())
print("Is digit:", "123".isdigit())
print("Is alphanumeric:", "Python123".isalnum())
print("Is lowercase:", "python".islower())
print("Is uppercase:", "PYTHON".isupper())


# 16. LIST FUNCTIONS

values = [40, 10, 30, 20, 50]

print("\n========== LIST FUNCTIONS ==========")

print("Original:", values)

values.append(60)
print("append:", values)

values.extend([70, 80])
print("extend:", values)

values.insert(0, 5)
print("insert:", values)

values.remove(30)
print("remove:", values)

values.pop()
print("pop:", values)

print("Index:", values.index(20))
print("Count:", values.count(10))

values.sort()
print("sort:", values)

values.reverse()
print("reverse:", values)

print("Length:", len(values))


# 17. DICTIONARY FUNCTIONS

data = {"name": "Somesh", "age": 20}

print("\n========== DICTIONARY FUNCTIONS ==========")

print("get:", data.get("name"))

data.update({"city": "Mumbai"})
print("update:", data)

print("keys:", list(data.keys()))
print("values:", list(data.values()))
print("items:", list(data.items()))

data.setdefault("grade", "A")
print("setdefault:", data)

data.pop("age")
print("pop:", data)


# 18. RANDOM NUMBER FUNCTIONS

print("\n========== RANDOM NUMBER FUNCTIONS ==========")

print("Random:", random.random())
print("Random integer:", random.randint(1, 100))
print("Random range:", random.randrange(1, 10))
print("Choice:", random.choice([10, 20, 30, 40]))
print("Sample:", random.sample([1, 2, 3, 4, 5], 3))

random_list = [1, 2, 3, 4, 5]
random.shuffle(random_list)

print("Shuffle:", random_list)


# 19. STATISTICS FUNCTIONS

marks = [70, 80, 90, 80, 100]

print("\n========== STATISTICS FUNCTIONS ==========")

print("Mean:", statistics.mean(marks))
print("Median:", statistics.median(marks))
print("Mode:", statistics.mode(marks))
print("Standard deviation:", statistics.stdev(marks))


# 20. DATE AND TIME FUNCTIONS

current_time = datetime.datetime.now()

print("\n========== DATE AND TIME FUNCTIONS ==========")

print("Current date and time:", current_time)
print("Date:", current_time.date())
print("Time:", current_time.time())
print("Year:", current_time.year)
print("Month:", current_time.month)
print("Day:", current_time.day)
print("Formatted:", current_time.strftime("%d-%m-%Y"))


# 21. FILE HANDLING

print("\n========== FILE HANDLING ==========")

with open("sample.txt", "w") as file:
    file.write("Hello Python\n")
    file.write("Learning file handling")

print("File written successfully.")

with open("sample.txt", "r") as file:
    content = file.read()
    print("File contents:", content)

with open("sample.txt", "a") as file:
    file.write("\nNew line added")

print("File appended successfully.")

with open("sample.txt", "r") as file:
    print("Updated contents:", file.read())


# 22. EXCEPTION HANDLING

print("\n========== EXCEPTION HANDLING ==========")

try:
    result = 10 / 2
    print("Division:", result)

except ZeroDivisionError:
    print("Cannot divide by zero.")

finally:
    print("Finally block executed.")


# 23. REGULAR EXPRESSIONS

print("\n========== REGULAR EXPRESSIONS ==========")

pattern = r"\d+"
sample_text = "My roll number is 101"

print("Search:", re.search(pattern, sample_text).group())
print("Find all:", re.findall(pattern, sample_text))
print("Split:", re.split(r"\s", "Python Programming"))


# 24. JSON FUNCTIONS

print("\n========== JSON FUNCTIONS ==========")

student_data = {
    "name": "Somesh",
    "rollNo": 101,
    "grade": "A"
}

json_data = json.dumps(student_data)

print("JSON:", json_data)
print("Dictionary:", json.loads(json_data))


# 25. ITERATION AND BUILT-IN FUNCTIONS

numbers = [10, 20, 30, 40, 50]

print("\n========== BUILT-IN FUNCTIONS ==========")

print("Length:", len(numbers))
print("Type:", type(numbers))
print("Sum:", sum(numbers))
print("Maximum:", max(numbers))
print("Minimum:", min(numbers))
print("Sorted:", sorted(numbers))
print("Enumerate:", list(enumerate(numbers)))
print("Zip:", list(zip([1, 2, 3], ["A", "B", "C"])))

print("All:", all([True, True, True]))
print("Any:", any([False, True, False]))
print("Range:", list(range(1, 6)))
print("Reversed:", list(reversed(numbers)))


# 26. OBJECT-ORIENTED PROGRAMMING

class Student:

    def __init__(self, name, roll_no):
        self.name = name
        self.roll_no = roll_no

    def display(self):
        print("Student name:", self.name)
        print("Roll number:", self.roll_no)


print("\n========== OBJECT-ORIENTED PROGRAMMING ==========")

student = Student("Somesh", 101)
student.display()


# 27. COLLECTIONS

print("\n========== COLLECTIONS ==========")

items = ["C", "C++", "Python", "Java", "Python"]

counter = Counter(items)

print("Counter:", counter)
print("Most common:", counter.most_common(2))


print("\nProgram completed successfully.")
