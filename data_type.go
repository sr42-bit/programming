package main

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
	"time"
)

// Input function
var reader = bufio.NewReader(os.Stdin)

func getInput(question string) string {
	fmt.Print(question)
	input, _ := reader.ReadString('\n')
	return strings.TrimSpace(input)
}

func main() {

	fmt.Println("===== GO DATA TYPES =====")

	// 1. INTEGER
	ageInput := getInput("Enter age: ")
	age, _ := strconv.Atoi(ageInput)

	// 2. FLOAT
	heightInput := getInput("Enter height: ")
	height, _ := strconv.ParseFloat(heightInput, 64)

	// 3. STRING
	name := getInput("Enter name: ")

	// 4. BOOLEAN
	booleanInput := strings.ToLower(getInput("Are you a student? (true/false): "))
	isStudent := booleanInput == "true"

	// 5. RUNE
	runeValue := 'A'

	// 6. BYTE
	byteValue := byte(65)

	// 7. COMPLEX
	complexValue := complex(10, 20)

	// 8. ZERO VALUE
	var zeroInt int
	var zeroFloat float64
	var zeroString string
	var zeroBool bool

	// 9. ARRAY
	var marks = [3]int{85, 90, 95}

	// 10. SLICE
	numbers := []int{10, 20, 30}
	numbers = append(numbers, 40)

	// 11. MAP
	studentMap := map[string]interface{}{
		"name": name,
		"age": age,
		"marks": marks,
	}

	// 12. STRUCT
	type Student struct {
		Name      string
		Age       int
		IsStudent bool
	}

	student := Student{
		Name: name,
		Age: age,
		IsStudent: isStudent,
	}

	// 13. POINTER
	pointerValue := &age

	// 14. FUNCTION
	calculateAverage := func(a, b, c int) float64 {
		return float64(a+b+c) / 3
	}

	// 15. DATE AND TIME
	currentTime := time.Now()

	// 16. CHANNEL
	channel := make(chan string, 1)
	channel <- "Hello from Channel"
	channelValue := <-channel

	// 17. INTERFACE
	var interfaceValue interface{} = "Go Programming"

	// 18. ERROR
	var errorValue error = fmt.Errorf("Sample Error")

	// 19. CONSTANT
	const language = "Go"

	// 20. NIL
	var nilPointer *int

	// OUTPUT

	fmt.Println("\n===== BASIC DATA TYPES =====")
	fmt.Println("Name:", name)
	fmt.Println("Age:", age)
	fmt.Println("Height:", height)
	fmt.Println("Is Student:", isStudent)
	fmt.Println("Rune:", runeValue)
	fmt.Println("Byte:", byteValue)
	fmt.Println("Complex:", complexValue)
	fmt.Println("Constant:", language)

	// ZERO VALUES
	fmt.Println("\n===== ZERO VALUES =====")
	fmt.Println("Integer:", zeroInt)
	fmt.Println("Float:", zeroFloat)
	fmt.Println("String:", zeroString)
	fmt.Println("Boolean:", zeroBool)

	// ARRAY
	fmt.Println("\n===== ARRAY =====")
	fmt.Println("Marks:", marks)
	fmt.Println("First Mark:", marks[0])

	// SLICE
	fmt.Println("\n===== SLICE =====")
	fmt.Println("Numbers:", numbers)
	fmt.Println("Length:", len(numbers))
	fmt.Println("Capacity:", cap(numbers))

	// MAP
	fmt.Println("\n===== MAP =====")
	fmt.Println("Student Map:", studentMap)
	fmt.Println("Student Name:", studentMap["name"])

	// STRUCT
	fmt.Println("\n===== STRUCT =====")
	fmt.Println("Student:", student)
	fmt.Println("Name:", student.Name)

	// POINTER
	fmt.Println("\n===== POINTER =====")
	fmt.Println("Pointer Address:", pointerValue)
	fmt.Println("Pointer Value:", *pointerValue)

	// FUNCTION
	fmt.Println("\n===== FUNCTION =====")
	fmt.Println("Average:", calculateAverage(
		marks[0], marks[1], marks[2],
	))

	// DATE AND TIME
	fmt.Println("\n===== DATE AND TIME =====")
	fmt.Println("Current Time:", currentTime)
	fmt.Println("Year:", currentTime.Year())
	fmt.Println("Month:", currentTime.Month())
	fmt.Println("Day:", currentTime.Day())

	// CHANNEL
	fmt.Println("\n===== CHANNEL =====")
	fmt.Println("Channel Value:", channelValue)
	close(channel)

	// INTERFACE
	fmt.Println("\n===== INTERFACE =====")
	fmt.Println("Interface Value:", interfaceValue)

	// ERROR
	fmt.Println("\n===== ERROR =====")
	fmt.Println("Error Message:", errorValue)

	// NIL
	fmt.Println("\n===== NIL =====")
	fmt.Println("Nil Pointer:", nilPointer)
	fmt.Println("Is Nil:", nilPointer == nil)

	// TYPE CONVERSION
	fmt.Println("\n===== TYPE CONVERSION =====")
	fmt.Println("Integer to Float:", float64(age))
	fmt.Println("Float to Integer:", int(height))
	fmt.Println("Integer to String:", strconv.Itoa(age))
	fmt.Println("String to Integer:", func() int {
		value, _ := strconv.Atoi("100")
		return value
	}())

	// TYPE CHECKING
	fmt.Println("\n===== TYPE CHECKING =====")
	fmt.Printf("Age: %T\n", age)
	fmt.Printf("Height: %T\n", height)
	fmt.Printf("Name: %T\n", name)
	fmt.Printf("Boolean: %T\n", isStudent)
	fmt.Printf("Rune: %T\n", runeValue)
	fmt.Printf("Byte: %T\n", byteValue)
	fmt.Printf("Complex: %T\n", complexValue)
	fmt.Printf("Array: %T\n", marks)
	fmt.Printf("Slice: %T\n", numbers)
	fmt.Printf("Map: %T\n", studentMap)
	fmt.Printf("Struct: %T\n", student)
	fmt.Printf("Pointer: %T\n", pointerValue)
	fmt.Printf("Function: %T\n", calculateAverage)
	fmt.Printf("Channel: %T\n", channel)
	fmt.Printf("Interface: %T\n", interfaceValue)
	fmt.Printf("Error: %T\n", errorValue)

	// TYPE ASSERTION
	fmt.Println("\n===== TYPE ASSERTION =====")
	stringValue, ok := interfaceValue.(string)
	fmt.Println("Value:", stringValue)
	fmt.Println("Type Assertion Successful:", ok)

	fmt.Println("\n===== PROGRAM COMPLETED =====")
}
