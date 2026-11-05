#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdbool.h>
#include <stddef.h>
#include <wchar.h>

/* Function */
int add(int a, int b)
{
    return a + b;
}

/* Structure */
struct Student
{
    int rollNo;
    char grade;
};

/* Union */
union Data
{
    int number;
    float decimal;
};

/* Enumeration */
enum Day
{
    MONDAY,
    TUESDAY,
    WEDNESDAY
};

int main(void)
{
    /* 1. INTEGER DATA TYPES */

    signed char sc = -100;
    short int si = -20000;
    int i = 1000;
    long int li = 200000L;
    long long int lli = 300000LL;

    unsigned char usc = 200;
    unsigned short int usi = 50000;
    unsigned int ui = 100000U;
    unsigned long int uli = 200000UL;
    unsigned long long int ulli = 300000ULL;

    printf("\n========== INTEGER DATA TYPES ==========\n");

    printf("signed char: %hhd | Size: %zu | Range: %d to %d\n",
           sc, sizeof(sc), SCHAR_MIN, SCHAR_MAX);

    printf("short int: %hd | Size: %zu | Range: %d to %d\n",
           si, sizeof(si), SHRT_MIN, SHRT_MAX);

    printf("int: %d | Size: %zu | Range: %d to %d\n",
           i, sizeof(i), INT_MIN, INT_MAX);

    printf("long int: %ld | Size: %zu | Range: %ld to %ld\n",
           li, sizeof(li), LONG_MIN, LONG_MAX);

    printf("long long int: %lld | Size: %zu | Range: %lld to %lld\n",
           lli, sizeof(lli), LLONG_MIN, LLONG_MAX);

    printf("unsigned char: %hhu | Size: %zu | Range: 0 to %u\n",
           usc, sizeof(usc), UCHAR_MAX);

    printf("unsigned short int: %hu | Size: %zu | Range: 0 to %u\n",
           usi, sizeof(usi), USHRT_MAX);

    printf("unsigned int: %u | Size: %zu | Range: 0 to %u\n",
           ui, sizeof(ui), UINT_MAX);

    printf("unsigned long int: %lu | Size: %zu | Range: 0 to %lu\n",
           uli, sizeof(uli), ULONG_MAX);

    printf("unsigned long long int: %llu | Size: %zu | Range: 0 to %llu\n",
           ulli, sizeof(ulli), ULLONG_MAX);


    /* 2. FLOATING-POINT DATA TYPES */

    float f = 3.14f;
    double d = 3.141592653589793;
    long double ld = 3.141592653589793238L;

    printf("\n========== FLOATING-POINT DATA TYPES ==========\n");

    printf("float: %g | Size: %zu | Max: %g\n",
           f, sizeof(f), FLT_MAX);

    printf("double: %g | Size: %zu | Max: %g\n",
           d, sizeof(d), DBL_MAX);

    printf("long double: %Lg | Size: %zu | Max: %Lg\n",
           ld, sizeof(ld), LDBL_MAX);


    /* 3. CHARACTER DATA TYPES */

    char ch = 'A';
    signed char sch = -10;
    unsigned char uch = 250;
    wchar_t wch = L'A';

    printf("\n========== CHARACTER DATA TYPES ==========\n");

    printf("char: %c | Size: %zu | Range: %d to %d\n",
           ch, sizeof(ch), CHAR_MIN, CHAR_MAX);

    printf("signed char: %hhd | Size: %zu | Range: %d to %d\n",
           sch, sizeof(sch), SCHAR_MIN, SCHAR_MAX);

    printf("unsigned char: %hhu | Size: %zu | Range: 0 to %u\n",
           uch, sizeof(uch), UCHAR_MAX);

    printf("wchar_t: %lc | Size: %zu | Range: implementation-dependent\n",
           (wint_t)wch, sizeof(wch));


    /* 4. BOOLEAN DATA TYPE */

    bool isValid = true;

    printf("\n========== BOOLEAN DATA TYPE ==========\n");

    printf("bool: %d | Size: %zu | Range: 0 to 1\n",
           isValid, sizeof(isValid));

    printf("true: %d\n", true);
    printf("false: %d\n", false);


    /* 5. VOID DATA TYPE */

    int number = 50;
    void *ptr = &number;

    printf("\n========== VOID DATA TYPE ==========\n");

    printf("Value through void pointer: %d\n", *(int *)ptr);
    printf("Void pointer size: %zu bytes\n", sizeof(ptr));


    /* 6. DERIVED DATA TYPES */

    int arr[5] = {10, 20, 30, 40, 50};
    int *intPtr = &number;
    int (*functionPtr)(int, int) = add;

    printf("\n========== DERIVED DATA TYPES ==========\n");

    printf("Array values: ");

    for (int j = 0; j < 5; j++)
    {
        printf("%d ", arr[j]);
    }

    printf("\nArray size: %zu bytes\n", sizeof(arr));

    printf("Pointer value: %d\n", *intPtr);
    printf("Pointer size: %zu bytes\n", sizeof(intPtr));

    printf("Function result: %d\n", functionPtr(10, 20));
    printf("Function pointer size: %zu bytes\n", sizeof(functionPtr));


    /* 7. USER-DEFINED DATA TYPES */

    struct Student student = {101, 'A'};

    union Data data;
    data.number = 100;

    enum Day today = TUESDAY;

    printf("\n========== USER-DEFINED DATA TYPES ==========\n");

    printf("Structure roll number: %d\n", student.rollNo);
    printf("Structure grade: %c\n", student.grade);
    printf("Structure size: %zu bytes\n", sizeof(student));

    printf("Union number: %d\n", data.number);
    printf("Union size: %zu bytes\n", sizeof(data));

    printf("Enumeration value: %d\n", today);
    printf("Enumeration size: %zu bytes\n", sizeof(today));


    /* 8. TYPE MODIFIERS AND QUALIFIERS */

    const int constantValue = 10;
    volatile int volatileValue = 20;

    int first = 10;
    int second = 20;

    int *restrict firstPtr = &first;
    int *restrict secondPtr = &second;

    printf("\n========== TYPE QUALIFIERS ==========\n");

    printf("const value: %d\n", constantValue);
    printf("volatile value: %d\n", volatileValue);

    printf("restrict pointer values: %d and %d\n",
           *firstPtr, *secondPtr);


    /* 9. DATA TYPE LIMITS */

    printf("\n========== DATA TYPE LIMITS ==========\n");

    printf("SCHAR_MIN: %d\n", SCHAR_MIN);
    printf("SCHAR_MAX: %d\n", SCHAR_MAX);

    printf("SHRT_MIN: %d\n", SHRT_MIN);
    printf("SHRT_MAX: %d\n", SHRT_MAX);

    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);

    printf("LONG_MIN: %ld\n", LONG_MIN);
    printf("LONG_MAX: %ld\n", LONG_MAX);

    printf("LLONG_MIN: %lld\n", LLONG_MIN);
    printf("LLONG_MAX: %lld\n", LLONG_MAX);

    printf("UCHAR_MAX: %u\n", UCHAR_MAX);
    printf("USHRT_MAX: %u\n", USHRT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("ULONG_MAX: %lu\n", ULONG_MAX);
    printf("ULLONG_MAX: %llu\n", ULLONG_MAX);


    /* 10. SIZE OF DATA TYPES */

    printf("\n========== DATA TYPE SIZES ==========\n");

    printf("char: %zu bytes\n", sizeof(char));
    printf("short: %zu bytes\n", sizeof(short));
    printf("int: %zu bytes\n", sizeof(int));
    printf("long: %zu bytes\n", sizeof(long));
    printf("long long: %zu bytes\n", sizeof(long long));

    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long double: %zu bytes\n", sizeof(long double));

    printf("Pointer: %zu bytes\n", sizeof(void *));


    /* 11. SIZE-RELATED TYPES */

    size_t sizeValue = sizeof(int);
    ptrdiff_t difference = 5;

    printf("\n========== SIZE-RELATED TYPES ==========\n");

    printf("size_t value: %zu\n", sizeValue);
    printf("ptrdiff_t value: %td\n", difference);


    printf("\nProgram completed successfully.\n");

    return 0;
}