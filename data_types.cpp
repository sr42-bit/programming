#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <climits>
#include <cfloat>
#include <cstdint>
#include <cstddef>
#include <typeinfo>
#include <type_traits>
#include <cmath>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <algorithm>
#include <numeric>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

// 1. FUNCTION
int add(int a, int b)
{
    return a + b;
}

// 2. STRUCTURE
struct Student
{
    int rollNo;
    char grade;
};

// 3. CLASS
class Employee
{
public:
    int id;
    string name;

    mutable int accessCount = 0;

    void display() const
    {
        accessCount++;
        cout << "Employee: " << id << " " << name << endl;
    }
};

// 4. UNION
union Data
{
    int number;
    float decimal;
};

// 5. ENUMERATION
enum Day
{
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY,
    FRIDAY, SATURDAY, SUNDAY
};

// 6. ENUM CLASS
enum class Color
{
    RED, GREEN, BLUE
};

// 7. FUNCTION FOR QSORT
int compare(const void* a, const void* b)
{
    return (*(const int*)a - *(const int*)b);
}

int main()
{
    // 1. INTEGER DATA TYPES

    signed char sc = -100;
    unsigned char usc = 200;

    short int si = -20000;
    unsigned short int usi = 50000;

    int i = 1000;
    unsigned int ui = 100000;

    long int li = 200000L;
    unsigned long int uli = 300000UL;

    long long int lli = 400000LL;
    unsigned long long int ulli = 500000ULL;

    cout << "\n========== INTEGER DATA TYPES ==========\n";

    cout << "signed char: " << (int)sc
         << " | Size: " << sizeof(sc)
         << " | Range: " << (int)SCHAR_MIN << " to " << (int)SCHAR_MAX << endl;

    cout << "unsigned char: " << (int)usc
         << " | Size: " << sizeof(usc)
         << " | Range: 0 to " << (int)UCHAR_MAX << endl;

    cout << "short int: " << si
         << " | Size: " << sizeof(si)
         << " | Range: " << SHRT_MIN << " to " << SHRT_MAX << endl;

    cout << "unsigned short: " << usi
         << " | Size: " << sizeof(usi)
         << " | Maximum: " << USHRT_MAX << endl;

    cout << "int: " << i
         << " | Size: " << sizeof(i)
         << " | Range: " << INT_MIN << " to " << INT_MAX << endl;

    cout << "unsigned int: " << ui
         << " | Size: " << sizeof(ui)
         << " | Maximum: " << UINT_MAX << endl;

    cout << "long int: " << li
         << " | Size: " << sizeof(li)
         << " | Range: " << LONG_MIN << " to " << LONG_MAX << endl;

    cout << "unsigned long: " << uli
         << " | Size: " << sizeof(uli)
         << " | Maximum: " << ULONG_MAX << endl;

    cout << "long long: " << lli
         << " | Size: " << sizeof(lli)
         << " | Range: " << LLONG_MIN << " to " << LLONG_MAX << endl;

    cout << "unsigned long long: " << ulli
         << " | Size: " << sizeof(ulli)
         << " | Maximum: " << ULLONG_MAX << endl;


    // 2. FLOATING-POINT DATA TYPES

    float f = 3.14f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238L;

    cout << "\n========== FLOATING-POINT DATA TYPES ==========\n";

    cout << "float: " << f
         << " | Size: " << sizeof(f)
         << " | Maximum: " << FLT_MAX << endl;

    cout << "double: " << d
         << " | Size: " << sizeof(d)
         << " | Maximum: " << DBL_MAX << endl;

    cout << "long double: " << ld
         << " | Size: " << sizeof(ld)
         << " | Maximum: " << LDBL_MAX << endl;


    // 3. CHARACTER DATA TYPES

    char ch = 'A';
    signed char sch = -10;
    unsigned char uch = 250;
    wchar_t wch = L'A';

    cout << "\n========== CHARACTER DATA TYPES ==========\n";

    cout << "char: " << ch
         << " | Size: " << sizeof(ch) << endl;

    cout << "signed char: " << (int)sch
         << " | Size: " << sizeof(sch) << endl;

    cout << "unsigned char: " << (int)uch
         << " | Size: " << sizeof(uch) << endl;

    cout << "wchar_t: " << (char)wch
         << " | Size: " << sizeof(wch) << endl;


    // 4. BOOLEAN DATA TYPE

    bool isValid = true;

    cout << "\n========== BOOLEAN DATA TYPE ==========\n";

    cout << "bool: " << boolalpha << isValid << endl;
    cout << "true: " << true << endl;
    cout << "false: " << false << endl;

    cout << "Boolean size: " << sizeof(bool) << " bytes" << endl;


    // 5. VOID DATA TYPE

    int number = 50;
    void* ptr = &number;

    cout << "\n========== VOID DATA TYPE ==========\n";

    cout << "Value through void pointer: " << *(int*)ptr << endl;
    cout << "Void pointer size: " << sizeof(ptr) << " bytes" << endl;


    // 6. DERIVED DATA TYPES

    int arr[5] = {10, 20, 30, 40, 50};

    int* intPtr = &number;

    int& reference = number;

    int (*functionPtr)(int, int) = add;

    cout << "\n========== DERIVED DATA TYPES ==========\n";

    cout << "Array values: ";

    for (int j = 0; j < 5; j++)
    {
        cout << arr[j] << " ";
    }

    cout << "\nArray size: " << sizeof(arr) << " bytes" << endl;

    cout << "Pointer value: " << *intPtr << endl;

    cout << "Reference value: " << reference << endl;

    cout << "Function result: " << functionPtr(10, 20) << endl;

    cout << "Function pointer size: " << sizeof(functionPtr) << " bytes" << endl;


    // 7. USER-DEFINED DATA TYPES

    Student student = {101, 'A'};

    Employee employee;
    employee.id = 1;
    employee.name = "Somesh";

    Data data;
    data.number = 100;

    Day today = TUESDAY;

    Color color = Color::GREEN;

    cout << "\n========== USER-DEFINED DATA TYPES ==========\n";

    cout << "Structure roll number: " << student.rollNo << endl;
    cout << "Structure grade: " << student.grade << endl;
    cout << "Structure size: " << sizeof(student) << " bytes" << endl;

    employee.display();
    cout << "Mutable access count: " << employee.accessCount << endl;

    cout << "Union number: " << data.number << endl;
    cout << "Union size: " << sizeof(data) << " bytes" << endl;

    cout << "Enumeration value: " << today << endl;
    cout << "Enum class value: " << static_cast<int>(color) << endl;


    // 8. TYPE MODIFIERS AND QUALIFIERS

    const int constantValue = 10;
    volatile int volatileValue = 20;

    constexpr int fixedValue = 100;

    int first = 10;
    int second = 20;

    cout << "\n========== TYPE MODIFIERS AND QUALIFIERS ==========\n";

    cout << "const value: " << constantValue << endl;
    cout << "volatile value: " << volatileValue << endl;
    cout << "constexpr value: " << fixedValue << endl;

    cout << "Signed value: " << sc << endl;
    cout << "Unsigned value: " << ui << endl;

    cout << "Short size: " << sizeof(short) << endl;
    cout << "Long size: " << sizeof(long) << endl;


    // 9. ADDITIONAL C++ TYPES

    auto autoValue = 100;
    decltype(autoValue) anotherValue = 200;

    std::nullptr_t nullValue = nullptr;

    int Student::*memberPtr = &Student::rollNo;

    cout << "\n========== ADDITIONAL C++ TYPES ==========\n";

    cout << "auto value: " << autoValue << endl;
    cout << "decltype value: " << anotherValue << endl;

    cout << "nullptr: " << (nullValue == nullptr) << endl;

    cout << "Member pointer value: " << student.*memberPtr << endl;

    cout << "Fixed-width int8: " << static_cast<int>(int8_t(100)) << endl;
    cout << "Fixed-width int16: " << int16_t(1000) << endl;
    cout << "Fixed-width int32: " << int32_t(100000) << endl;
    cout << "Fixed-width int64: " << int64_t(1000000) << endl;


    // 10. DATA TYPE LIMITS

    cout << "\n========== DATA TYPE LIMITS ==========\n";

    cout << "INT MIN: " << numeric_limits<int>::min() << endl;
    cout << "INT MAX: " << numeric_limits<int>::max() << endl;

    cout << "FLOAT MAX: " << numeric_limits<float>::max() << endl;
    cout << "DOUBLE MAX: " << numeric_limits<double>::max() << endl;

    cout << "CHAR MAX: " << (int)numeric_limits<char>::max() << endl;

    cout << "LONG MAX: " << numeric_limits<long>::max() << endl;


    // 11. SIZE OF DATA TYPES

    cout << "\n========== DATA TYPE SIZES ==========\n";

    cout << "char: " << sizeof(char) << " bytes" << endl;
    cout << "short: " << sizeof(short) << " bytes" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "long: " << sizeof(long) << " bytes" << endl;
    cout << "long long: " << sizeof(long long) << " bytes" << endl;

    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "double: " << sizeof(double) << " bytes" << endl;
    cout << "long double: " << sizeof(long double) << " bytes" << endl;


    // 12. INPUT AND OUTPUT FUNCTIONS

    cout << "\n========== INPUT AND OUTPUT ==========\n";

    cout << "cout: Standard output" << endl;
    cerr << "cerr: Error message example" << endl;
    clog << "clog: Log message example" << endl;

    // cin example:
    // int input;
    // cin >> input;


    // 13. MATHEMATICAL FUNCTIONS

    cout << "\n========== MATHEMATICAL FUNCTIONS ==========\n";

    cout << "abs(-10): " << abs(-10) << endl;
    cout << "fabs(-5.5): " << fabs(-5.5) << endl;
    cout << "ceil(4.2): " << ceil(4.2) << endl;
    cout << "floor(4.8): " << floor(4.8) << endl;
    cout << "sqrt(25): " << sqrt(25) << endl;
    cout << "cbrt(27): " << cbrt(27) << endl;
    cout << "pow(2,3): " << pow(2, 3) << endl;
    cout << "exp(1): " << exp(1) << endl;
    cout << "log(10): " << log(10) << endl;
    cout << "log10(100): " << log10(100) << endl;
    cout << "sin(0): " << sin(0) << endl;
    cout << "cos(0): " << cos(0) << endl;
    cout << "tan(0): " << tan(0) << endl;
    cout << "round(4.6): " << round(4.6) << endl;
    cout << "fmod(10,3): " << fmod(10, 3) << endl;


    // 14. CHARACTER FUNCTIONS

    char character = 'A';

    cout << "\n========== CHARACTER FUNCTIONS ==========\n";

    cout << "isalpha(A): " << (bool)isalpha((unsigned char)character) << endl;
    cout << "isdigit(5): " << (bool)isdigit('5') << endl;
    cout << "isalnum(A): " << (bool)isalnum('A') << endl;
    cout << "islower(a): " << (bool)islower('a') << endl;
    cout << "isupper(A): " << (bool)isupper('A') << endl;
    cout << "isspace: " << (bool)isspace(' ') << endl;

    cout << "tolower(A): " << (char)tolower('A') << endl;
    cout << "toupper(a): " << (char)toupper('a') << endl;


    // 15. STRING FUNCTIONS

    char source[30] = "Hello";
    char destination[30] = "World";

    cout << "\n========== STRING FUNCTIONS ==========\n";

    cout << "strlen: " << strlen(source) << endl;

    strcpy(destination, source);
    cout << "strcpy: " << destination << endl;

    strcat(destination, " C++");
    cout << "strcat: " << destination << endl;

    cout << "strcmp: " << strcmp(source, "Hello") << endl;

    cout << "strchr: " << strchr(source, 'l') << endl;

    cout << "strstr: " << strstr(destination, "C++") << endl;


    // 16. RANDOM NUMBER FUNCTIONS

    srand((unsigned int)time(NULL));

    cout << "\n========== RANDOM NUMBER FUNCTIONS ==========\n";

    cout << "Random number: " << rand() << endl;
    cout << "Random number (0-99): " << rand() % 100 << endl;


    // 17. MEMORY MANAGEMENT FUNCTIONS

    cout << "\n========== MEMORY MANAGEMENT ==========\n";

    int* memory = (int*)malloc(3 * sizeof(int));

    if (memory != NULL)
    {
        memory[0] = 10;
        memory[1] = 20;
        memory[2] = 30;

        cout << "malloc values: "
             << memory[0] << " "
             << memory[1] << " "
             << memory[2] << endl;

        memory = (int*)realloc(memory, 5 * sizeof(int));

        if (memory != NULL)
        {
            memory[3] = 40;
            memory[4] = 50;

            cout << "realloc value: " << memory[4] << endl;
        }

        free(memory);
        memory = NULL;
    }

    int* zeroMemory = (int*)calloc(3, sizeof(int));

    if (zeroMemory != NULL)
    {
        cout << "calloc initial value: " << zeroMemory[0] << endl;
        free(zeroMemory);
    }


    // 18. UTILITY FUNCTIONS

    cout << "\n========== UTILITY FUNCTIONS ==========\n";

    cout << "atoi: " << atoi("123") << endl;
    cout << "atof: " << atof("12.5") << endl;

    int values[] = {40, 10, 30, 20};

    qsort(values, 4, sizeof(int), compare);

    cout << "qsort: ";

    for (int j = 0; j < 4; j++)
        cout << values[j] << " ";

    cout << endl;

    int a = 10, b = 20;

    swap(a, b);

    cout << "swap: " << a << " " << b << endl;

    cout << "min: " << min(a, b) << endl;
    cout << "max: " << max(a, b) << endl;


    // 19. TIME FUNCTIONS

    cout << "\n========== TIME FUNCTIONS ==========\n";

    time_t currentTime = time(NULL);

    cout << "Current time: " << currentTime << endl;

    clock_t start = clock();

    for (int j = 0; j < 100000; j++)
    {
        // Time measurement example
    }

    clock_t end = clock();

    cout << "Processor time: "
         << (double)(end - start) / CLOCKS_PER_SEC << " seconds" << endl;

    cout << "Local time: " << asctime(localtime(&currentTime));


    // 20. FILE FUNCTIONS

    cout << "\n========== FILE FUNCTIONS ==========\n";

    ofstream outputFile("sample.txt");

    if (outputFile.is_open())
    {
        outputFile << "Hello C++ File Handling\n";
        outputFile << "Learning file operations";
        outputFile.close();

        cout << "File written successfully." << endl;
    }

    ifstream inputFile("sample.txt");

    if (inputFile.is_open())
    {
        string line;

        cout << "File contents:" << endl;

        while (getline(inputFile, line))
        {
            cout << line << endl;
        }

        inputFile.close();
    }


    // 21. MISCELLANEOUS FUNCTIONS

    cout << "\n========== MISCELLANEOUS FUNCTIONS ==========\n";

    assert(number == 50);

    cout << "assert: Condition passed" << endl;

    cout << "typeid: " << typeid(number).name() << endl;

    cout << "sizeof: " << sizeof(number) << " bytes" << endl;


    // 22. STL CONTAINERS AND ALGORITHMS

    cout << "\n========== STL CONTAINERS AND ALGORITHMS ==========\n";

    vector<int> numbers = {10, 20, 30, 40, 50};

    numbers.push_back(60);

    cout << "push_back: ";

    for (int n : numbers)
        cout << n << " ";

    cout << endl;

    numbers.pop_back();

    cout << "pop_back size: " << numbers.size() << endl;

    cout << "find 30: "
         << (find(numbers.begin(), numbers.end(), 30) != numbers.end())
         << endl;

    cout << "binary_search 20: "
         << binary_search(numbers.begin(), numbers.end(), 20)
         << endl;

    reverse(numbers.begin(), numbers.end());

    cout << "reverse: ";

    for (int n : numbers)
        cout << n << " ";

    cout << endl;

    cout << "accumulate: "
         << accumulate(numbers.begin(), numbers.end(), 0)
         << endl;

    sort(numbers.begin(), numbers.end());

    cout << "sort: ";

    for (int n : numbers)
        cout << n << " ";

    cout << endl;

    cout << "lower_bound 30: "
         << *lower_bound(numbers.begin(), numbers.end(), 30)
         << endl;

    cout << "upper_bound 30: "
         << *upper_bound(numbers.begin(), numbers.end(), 30)
         << endl;


    cout << "\nProgram completed successfully.\n";

    return 0;
}
