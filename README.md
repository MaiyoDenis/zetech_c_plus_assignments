# C++ Programming Exercises

## Question a) Library Fine Calculator

You are required to develop a C++ program to calculate the fine for overdue library books.

The library charges fines based on the number of days a book is overdue. The fine rates are as follows:

| Days Overdue      | Charges per day |
|-------------------|-----------------|
| Up to 7 days      | Ksh. 20         |
| 8 – 14 days       | Ksh. 50         |
| 15 days or more   | Ksh. 100        |

### Requirements:

1. **Input (3 marks)**
   - Write a C++ program that takes the following inputs from the user:
     - Book ID (an integer)
     - Due Date (an integer)
     - Return Date (an integer)

2. **Calculation (2 marks)**
   - Calculate the days overdue
   - *Hint: `returnDate - dueDate`*

3. **Fine Determination (6 marks)**
   - Use an `if...else` statement to determine the fine rate as per the specified rates in the above table and apply the necessary calculations.

4. **Output Display (4 marks)**
   - The program should display the following:
     - `bookID`
     - `dueDate`
     - `returnDate`
     - `daysOverdue`
     - `fineRate`
     - `fineAmount`

---

## Question b) Scholarship Eligibility Program

A university awards scholarships based on a student's **marks** and **attendance rate**.

Write a C++ program that:

### 1. Input
Prompts the user to enter:
- Student name
- Exam marks (0–100)
- Attendance percentage (0–100)

### 2. Scholarship Eligibility Logic
Uses **nested if statements** to determine scholarship eligibility:

- **If marks are 70 or above:**
  - If attendance is **80% or above** → Scholarship = **"Full Scholarship"**
  - Otherwise → Scholarship = **"Partial Scholarship"**

- **If marks are 50 to 69:**
  - If attendance is **85% or above** → Scholarship = **"Partial Scholarship"**
  - Otherwise → Scholarship = **"No Scholarship"**

- **If marks are below 50:**
  - No Scholarship

### 3. Output
Display the **student name** and **scholarship status**.
