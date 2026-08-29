# 💰 Expense Tracker

A beginner-friendly C++ console application for tracking daily expenses and practicing fundamental programming concepts.

## ✨ Features

### ✅ Sprint 1 - Basic Expense Tracking

- Add expenses
- Store expense description
- Store expense category
- Store expense amount
- View all added expenses
- Display number of expenses
- Storage capacity limitation
- Empty expense list handling
- Invalid menu option handling

## 🚧 Upcoming Features

- 💰 Total spending calculation
- 🔍 Search expenses
- 🗑️ Delete expenses

- 🎯 Concepts Practiced

- Arrays
- Strings
- Variables
- `if-else`
- `switch`
- `do-while` loop
- `for` loop

- ## ✅ Sprint 2 - Expense Calculation & Summary

🎯 Features Added

- Added Total Expense option
- Calculate total amount spent
- Display expense-wise amount breakdown
- Display number of expenses
- Added storage limit handling

🎯 Concepts Practiced

- Arrays
- `for` loops
- `do-while` loops
- `switch` statements
- Array indexing
- Counters
- Accumulator variables
- Arithmetic operations

##🎯 What I Learned

In this sprint, I learned how to process multiple stored values using loops and calculate a cumulative total using an accumulator variable.
- Array indexing
- Menu-driven programming
- 📊 Category-wise spending / statistics
- ✅ Input validation
- 💾 File handling

- ## ✅ Sprint 3 - Delete Expense

🎯 Features Added

- Added a Delete Expense option
- Display all expenses before deletion
- Delete an expense using its expense number
- Added deletion confirmation using y/n
- Added invalid expense number handling
- Shifted remaining expenses after deletion
- Updated expense count after deletion
- Added deletion cancellation

#🎯 Concepts Practiced

- Array indexing
- Linear searching through array positions
- `for` loops
- Conditional statements
- Parallel arrays
- Array element shifting
- Updating array size/count
- Input validation
- User confirmation
- Menu-driven programming

🎯 What I Learned

In this sprint, I learned how to delete an element from fixed-size arrays. Since arrays cannot directly remove an element, the remaining elements are shifted one position to the left and the expense count is reduced.

## 🚧 Upcoming Features

- ✏️ Edit Expense Records
- 📊 Expense Statistics
- 🗂️ Category-based Analysis
- 💾 File Handling for Permanent Data Storage
- 🏛️ Object-Oriented Version using Classes


### ✅Sprint 4 — CRUD Update Functionality

Added the Update operation to complete the basic CRUD functionality of the Expense Tracker.

#🚧 Features Added
- Edit an existing expense
- Edit description
- Edit category
- Edit amount
- Validate expense number
- Validate edit choice

#### 🚧Concepts Practiced
- Nested switch statements
- Array indexing
- Conditional statements
- Input validation
- Updating existing array elements
- CRUD operations

#### 🚧What I Learned

This sprint helped me understand how existing data can be modified using array indexing. I also learned how the Update operation works as part of CRUD functionality and practiced nested decision-making using switch statements.

## ✅ Sprint 5 – Search & Category Analysis

###🚧 Features Added
- Search expenses by category
- Display all expenses belonging to a selected category
- Calculate total expenses for the selected category
- Added `bool` flag to track whether a category was found
- Added validation for invalid categories
- Improved user interaction and output formatting

###🚧 Concepts Learned
- `bool` data type
- `true` and `false`
- Boolean conditions using `!`
- Searching through arrays
- Accumulator variables
- Conditional statements
- `for` loops
- String comparison
- Combining multiple concepts into one feature

- 
###🚧 What I Learned
- `bool` data type
- `true` and `false`
- NOT operator `!`
- Searching through arrays using loops
- Comparing strings using `==`
- Using a boolean flag to track whether something was found
- Using an accumulator variable to calculate totals
- Understanding `categorytotal = categorytotal + amount[i]`
- Combining `for` loops with `if` conditions
- Applying multiple concepts together to build a real feature

- ✅# Expense Tracker - Sprint 6

## 🚧Project Evolution

This is Sprint 6 of my C++ Expense Tracker project.

In the previous sprints, I built the main features of the Expense Tracker such as adding, viewing, calculating, deleting, editing, and searching expenses.

In this sprint, I focused on improving the way the program handles user input.

---

##🚧 Features

- Add a new expense
- View all expenses
- Calculate total expenses
- Delete an expense
- Edit an existing expense
- Search expenses by category
- Calculate total expenses for a searched category
- Prevent negative expense amounts
- Handle invalid delete confirmation input
- Improved user input flow
- Exit the program with an expense count summary

---

##🚧 Concepts I Learned

- Input validation
- `do-while` loops
- Boolean expressions
- Logical operators such as `&&` and `||`
- Comparing user input
- Validating expense numbers
- Validating user confirmation input
- Improving program reliability
- Debugging input-related problems

---

##🚧 What I Improved in This Sprint

### 1. Negative Amount Validation

I worked on preventing invalid negative expense amounts from being added to the Expense Tracker.

### 2. Delete Confirmation Validation

The delete option now handles confirmation input more carefully.

The user is expected to enter:

- `y` for Yes
- `n` for No

This helped me understand how logical conditions can be used to validate user input.

### 3. Better Understanding of Loops and Conditions

While improving the input system, I practiced using conditions together with loops to control program flow.

---

## Concepts Used in the Project

- Variables
- Arrays
- Strings
- `if-else`
- `switch-case`
- `for` loops
- `do-while` loops
- Boolean variables
- Logical operators
- Input validation
- Array element shifting
- Searching
- Updating values

---
✅ Sprint 7 – Expense Insights

🚧 Features Added
Added a new Expense Insights section
Added Highest Expense feature
Added Lowest Expense feature
Added Average Expense feature
Created a separate submenu for expense insights
Added validation to prevent accessing insights when there are no expenses
Improved the Expense Tracker with basic expense analysis

🚧 Concepts Learned
Finding maximum values
Finding minimum values
Array traversal
Comparison using if conditions
Initializing variables with the first array element
Calculating averages
Type casting using (float)
Integer division vs floating-point division
Nested menus
do-while loops

🚧 What I Learned
How to find the highest value in an array
How to find the lowest value in an array
Why we initialize current_highest and current_lowest with amount[0]
How to compare every expense with the current highest expense
How to update the highest value when a bigger expense is found
How to compare every expense with the current lowest expense
How to update the lowest value when a smaller expense is found
How to calculate the total before finding the average
How to calculate the average expense
Why (float)totalexpense / expensecount is needed for decimal results
The difference between integer division and floating-point division
How to create a submenu using do-while and switch
How to combine multiple calculations into an Expense Insights feature


## ✅ Sprint 8 - Advanced Expense Management & Budget Features

Sprint 8 significantly expands the Expense Tracker into a more complete expense management application.

### Features

- Add new expenses
- View all expenses
- Calculate total expenses
- Delete expenses
- Edit existing expenses
- Search expenses by category
- Calculate category-wise expense totals
- View the highest expense
- View the lowest expense
- Calculate average expenses
- Set a personal budget
- View budget status
- Calculate remaining budget
- Detect when the budget has been exceeded
- Support up to 100 expenses
- Basic negative amount validation

## Concepts Used

- Arrays
- Strings
- Variables and data types
- `if-else`
- `switch-case`
- `for` loops
- `do-while` loops
- Nested conditions
- Boolean flags
- Searching
- Array shifting for deletion
- Updating array data
- Aggregation and calculations

## Sprint 8 Learning Highlights

In this sprint, I practiced managing multiple related arrays to store expense descriptions, categories, and amounts.

I also implemented CRUD-style operations:

- **Create** — Add expenses
- **Read** — View and search expenses
- **Update** — Edit expenses
- **Delete** — Remove expenses

Additionally, I implemented basic expense analytics and budget management using loops and conditional logic.

## Future Improvements

Future versions will focus on:

- Improving input validation
- Handling invalid numeric input
- Supporting multi-word descriptions
- Reducing repeated code
- Using functions for better code organization
- Using structures/classes for better data management
- File handling for permanent expense storage
- More advanced expense analytics

- #✅ Sprint 9: Added File Handling and Data Persistence

## File Handling and Data Persistence

In Sprint 9, the Expense Tracker was upgraded with file handling to make expense and budget data persistent.

Previously, all data was stored only in arrays and variables, so everything was lost when the program was closed. This sprint solves that problem by saving data into files and loading it again when the program starts.

## Features Added

* Added file handling using `<fstream>`
* Saved all expenses permanently in `expenses.txt`
* Automatically loaded previous expenses when the program starts
* Updated `expenses.txt` after adding an expense
* Updated `expenses.txt` after deleting an expense
* Updated `expenses.txt` after editing an expense
* Saved the user's budget permanently in `budget.txt`
* Automatically loaded the previous budget when the program starts
* Data now remains available even after closing and reopening the program

## File Handling Concepts Learned

### `ofstream`

Used to write data into files.

```cpp
ofstream file("expenses.txt");
```

### `ifstream`

Used to read data from files.

```cpp
ifstream file("expenses.txt");
```

### Saving Multiple Expenses

The program loops through all stored expenses and writes their description, category, and amount into the file.

### Loading Expenses

When the program starts, the saved expense data is read from `expenses.txt` and stored back into the arrays.

## Files Used

* `expenses.txt` - Stores all expense data
* `budget.txt` - Stores the user's budget

## Project Progress

The Expense Tracker can now:

* Add expenses
* View expenses
* Calculate total expenses
* Delete expenses
* Edit expenses
* Search expenses by category
* Show expense insights
* Manage budgets
* Save expense data permanently
* Load previous expense data automatically
* Save and load the budget permanently

## Sprint Status

Sprint 9 completed successfully.!!!

# Expense Tracker – Sprint 9

## 🚀 Sprint 9 – File Handling & Input Validation

In this sprint, the Expense Tracker was upgraded to store data permanently using file handling and improved input validation for important user inputs.

### ✨ Features Added

* Added file handling using `fstream`.
* Expenses are automatically saved to `expenses.txt`.
* Expenses are loaded automatically when the program starts.
* Budget is saved to `budget.txt`.
* Saved budget is loaded when the program starts.
* Added validation for the main menu choice.
* Added validation for expense amounts.
* Added validation for edited expense amounts.
* Added validation for budget input.
* Improved delete-expense number validation.
* Existing expense features continue to work with persistent data.

### 🧠 Concepts Learned

* `ifstream` for reading data from files.
* `ofstream` for writing data to files.
* `getline()` for reading string data.
* File opening and closing.
* Persistent data storage.
* `cin.fail()`, `cin.clear()` and `cin.ignore()` for input validation.
* Using loops to repeatedly request valid input.

### 📌 Current Data Files

* `expenses.txt` → Stores all expense records.
* `budget.txt` → Stores the current budget.

### 🎯 Sprint Outcome

The Expense Tracker is no longer completely dependent on temporary program memory. Expenses and budget information can now survive after the program is closed and opened again.

Further improvements to input structure and advanced data management will be handled in later sprints.




## 👨‍💻 Author

Rishik
First Year Engineering Student

