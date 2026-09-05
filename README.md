# Unix Systems Programming Projects

A collection of C programming projects demonstrating fundamental programming concepts, data structures, file processing, build automation, and Unix system interfaces.

## Projects

### [Basic C Demo](./basic-cpp-demo)

An introductory C program demonstrating console output, variables, strings, and conditional statements.

### [Bitwise Operations Visualizer](./bitwise-operations-visualizer)

Reads integers from a data file and displays the results of bit masking, left and right shifts, and bit testing in 32-bit binary format.

### [Employee Record Manager](./employee-record-manager)

Read binary employee records from a file into a linked list of structs, print forward and reverse, handle signals (SIGUSR1, SIGTERM, SIGTSTP).

### [Integer Math Utility](./integer-math-utility)

An interactive command-line program that calculates the square, successor, and half of user-provided integers until a termination value is entered.

### [Integer Range Calculator](./integer-range-calculator)

Accepts pairs of integers and calculates how many integer values fall strictly between them. The program includes command-line argument validation and sentinel-controlled input.

### [Loops Demo](./loops-demo)

Demonstrates iterative control flow using common loop structures and repeated data processing.

### [Pest Observation Report](./pest-observation-report)

Reads pest-observation data from a file, categorizes the records by severity level, and generates a formatted report containing the count for each category. The project uses modular source files, a custom static library, and recursive Makefiles.

### [POSIX Multithreading Demo](./posix_multithreading_demo)

Create and manage POSIX threads, pass arguments, collect return values, demonstrate a race condition on a shared global counter, then fix it with a mutex lock.

### [Text Replacement Tool](./text-replacement-tool)

Read lines from stdin, dynamically allocate a vector of strings, replace "XYZ" with a command line argument, print in reverse order using pointer math.

### [Unix Process and Environment Demo](./unix-process-environment-demo)

Build a parent and child program where the parent fork()s and exec()s the child, passes environment variables, and wait()s for the child to finish.


## Concepts Demonstrated

* C program structure and `main()`
* Functions and function calls
* Command-line arguments
* Conditional statements and loops
* Arrays and strings
* Structures and `typedef`
* Memory addresses and pointers
* Pointer arithmetic
* Dynamic memory allocation
* Doubly linked lists
* File input and output
* Standard input redirection
* Formatted output
* Bitwise operations
* Bit masking and shifting
* Modular source and header organization
* Static library creation and linking
* Makefiles and recursive builds
* Foreground and background processes
* Process creation with `fork()`
* Program execution with `exec()`
* Parent-child synchronization with `wait()`
* Process IDs and environment variables
* Unix signal handling
* POSIX multithreading
* Thread creation and joining
* Shared-state synchronization
* Shell process-management commands
