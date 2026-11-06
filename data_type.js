const readline = require("readline");

// Input configuration
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Input function
function getInput(question) {
    return new Promise(resolve => {
        rl.question(question, resolve);
    });
}

async function main() {

    console.log("===== JAVASCRIPT DATA TYPES =====\n");

    // 1. NUMBER
    let age = Number(await getInput("Enter age: "));
    let height = Number(await getInput("Enter height: "));

    // 2. BIGINT
    let bigNumber = BigInt(
        await getInput("Enter a large integer: ")
    );

    // 3. STRING
    let name = await getInput("Enter name: ");

    // 4. BOOLEAN
    let booleanInput = (
        await getInput("Are you a student? (true/false): ")
    ).toLowerCase();

    let isStudent = booleanInput === "true";

    // 5. UNDEFINED
    let undefinedValue;

    // 6. NULL
    let nullValue = null;

    // 7. SYMBOL
    let uniqueId = Symbol("studentId");

    // 8. OBJECT
    let student = {
        name: name,
        age: age,
        isStudent: isStudent
    };

    // 9. ARRAY
    let marks = [85, 90, 95];

    // 10. FUNCTION
    function calculateAverage(a, b, c) {
        return (a + b + c) / 3;
    }

    // 11. DATE OBJECT
    let currentDate = new Date();

    // 12. MAP
    let studentMap = new Map();
    studentMap.set("name", name);
    studentMap.set("age", age);
    studentMap.set("marks", marks);

    // 13. SET
    let uniqueNumbers = new Set([10, 20, 30, 10, 20]);

    // 14. WEAKMAP
    let weakMap = new WeakMap();
    let weakMapKey = {};
    weakMap.set(weakMapKey, "Student Data");

    // 15. WEAKSET
    let weakSet = new WeakSet();
    let weakSetValue = {};
    weakSet.add(weakSetValue);

    // 16. REGULAR EXPRESSION
    let pattern = /JavaScript/i;

    // 17. ERROR OBJECT
    let errorObject = new Error("Sample Error");

    // 18. PROMISE
    let promiseObject = Promise.resolve("Success");

    // 19. ARRAY BUFFER
    let buffer = new ArrayBuffer(8);

    // 20. TYPED ARRAY
    let typedArray = new Int32Array([10, 20, 30]);

    // 21. DATE AND TIME OUTPUT
    console.log("\n===== BASIC DATA TYPES =====");

    console.log("Name:", name);
    console.log("Age:", age);
    console.log("Height:", height);
    console.log("Big Number:", bigNumber.toString());
    console.log("Is Student:", isStudent);
    console.log("Undefined:", undefinedValue);
    console.log("Null:", nullValue);
    console.log("Symbol:", uniqueId.toString());

    // OBJECT OUTPUT
    console.log("\n===== OBJECT =====");
    console.log(student);

    // ARRAY OUTPUT
    console.log("\n===== ARRAY =====");
    console.log(marks);

    // FUNCTION OUTPUT
    console.log("\n===== FUNCTION =====");
    console.log("Average:", calculateAverage(...marks));

    // DATE OUTPUT
    console.log("\n===== DATE OBJECT =====");
    console.log("Current Date:", currentDate);
    console.log("Year:", currentDate.getFullYear());

    // MAP OUTPUT
    console.log("\n===== MAP =====");
    console.log(studentMap);
    console.log("Student Name:", studentMap.get("name"));

    // SET OUTPUT
    console.log("\n===== SET =====");
    console.log(uniqueNumbers);

    // WEAKMAP OUTPUT
    console.log("\n===== WEAKMAP =====");
    console.log(weakMap.get(weakMapKey));

    // WEAKSET OUTPUT
    console.log("\n===== WEAKSET =====");
    console.log(weakSet.has(weakSetValue));

    // REGULAR EXPRESSION OUTPUT
    console.log("\n===== REGULAR EXPRESSION =====");
    console.log(pattern.test("JavaScript Programming"));

    // ERROR OUTPUT
    console.log("\n===== ERROR OBJECT =====");
    console.log(errorObject.message);

    // PROMISE OUTPUT
    console.log("\n===== PROMISE =====");
    console.log(await promiseObject);

    // ARRAY BUFFER OUTPUT
    console.log("\n===== ARRAY BUFFER =====");
    console.log("Byte Length:", buffer.byteLength);

    // TYPED ARRAY OUTPUT
    console.log("\n===== TYPED ARRAY =====");
    console.log(typedArray);

    // TYPE CONVERSION
    console.log("\n===== TYPE CONVERSION =====");

    console.log("String to Number:", Number("100"));
    console.log("Number to String:", String(100));
    console.log("Number to Boolean:", Boolean(1));
    console.log("String to Integer:", parseInt("50"));
    console.log("String to Float:", parseFloat("50.5"));

    // TYPE CHECKING
    console.log("\n===== TYPE CHECKING =====");

    console.log("Number:", typeof age);
    console.log("String:", typeof name);
    console.log("BigInt:", typeof bigNumber);
    console.log("Boolean:", typeof isStudent);
    console.log("Undefined:", typeof undefinedValue);
    console.log("Null:", typeof nullValue);
    console.log("Symbol:", typeof uniqueId);
    console.log("Object:", typeof student);
    console.log("Array:", Array.isArray(marks));
    console.log("Function:", typeof calculateAverage);
    console.log("Date:", currentDate instanceof Date);
    console.log("Map:", studentMap instanceof Map);
    console.log("Set:", uniqueNumbers instanceof Set);
    console.log("WeakMap:", weakMap instanceof WeakMap);
    console.log("WeakSet:", weakSet instanceof WeakSet);
    console.log("RegExp:", pattern instanceof RegExp);
    console.log("Error:", errorObject instanceof Error);
    console.log("Promise:", promiseObject instanceof Promise);

    rl.close();
}

main().catch(error => {
    console.error("Error:", error.message);
    rl.close();
});
