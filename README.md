# Zetech C++ Assignments

## Overview
This repository contains a series of standalone C++ assignment programs for learning basic programming concepts. Each file is a self-contained C++ exercise covering input/output, decision-making, arithmetic operations, and simple control structures.

## Repository Structure
- `library_fine/` and `library_fine.cpp` — Library fine calculator
- `scholarship/` and `scholarship.cpp` — Scholarship eligibility program
- `week1_task1_mobile_phone_sales.cpp` — Mobile phone sales calculator
- `week1_task2_driving_test.cpp` — Driving test assessment program
- `week2_task1_grading_system.cpp` — Grading system evaluator
- `week2_task2_admission_decision.cpp` — Admission decision logic
- `week2_task3_calculator.cpp` — Basic calculator
- `week3_task1_payroll.cpp` — Payroll calculator
- `week3_task2_water_billing.cpp` — Water billing calculation
- `week4_task1_employee_bonus.cpp` — Employee bonus calculator
- `week4_task2_withdrawal_system.cpp` — Withdrawal system simulation
- `week4_task3_password_verification.cpp` — Password verification program
- `week5_hotel_management.cpp` — Simple hotel management application
- `build/` — build outputs and compiled binaries

## How to Build and Run
Each C++ program in this repository is standalone and can be compiled individually.

### Using GCC
```bash
cd /home/maiyo/zetech/zetech_c_plus_assignments

g++ -std=c++17 -Wall -Wextra -o program_name source_file.cpp
./program_name
```
Example:
```bash
g++ -std=c++17 -Wall -Wextra -o week1_task2_driving_test week1_task2_driving_test.cpp
./week1_task2_driving_test
```

### Using VS Code
- Open the file you want to run.
- Use the provided task `C/C++: gcc build active file` to compile.
- Run the generated executable from the terminal or via the debugger.

## Assignment Summaries
### Library Fine Calculator
Calculates overdue fines for returned books based on the number of days late. It reads book ID, due date, and return date, then computes the fine according to tiered rates.

### Scholarship Eligibility Program
Evaluates a student’s scholarship eligibility using marks and attendance. The program uses nested conditionals to decide between full scholarship, partial scholarship, or no scholarship.

### Mobile Phone Sales
A task that handles phone sales input, computes totals, and displays relevant sales details.

### Driving Test Program
Assesses driving test results based on criteria such as age, score, or other evaluation metrics.

### Grading System
A grade evaluator that assigns letter grades or pass/fail decisions based on exam marks.

### Admission Decision
Determines admission status using academic performance and eligibility rules.

### Basic Calculator
Performs arithmetic operations such as addition, subtraction, multiplication, and division.

### Payroll Calculator
Computes employee pay, including salary and deductions or allowances.

### Water Billing
Calculates utility bills for water usage based on consumption.

### Employee Bonus Calculator
Determines bonus amounts using performance or salary-based rules.

### Withdrawal System
Simulates bank withdrawal logic and validates transaction conditions.

### Password Verification
Verifies user credentials or password inputs against expected values.

### Hotel Management
A simple hotel management task that tracks bookings, rooms, or guest details.

## Notes
- Most programs read input from the console and print results to standard output.
- Rename compiled executables as needed for easier testing.
- Use the `build/Debug` folder for temporary output if using VS Code debugging.

## License
This repository is intended for educational use and self-study.