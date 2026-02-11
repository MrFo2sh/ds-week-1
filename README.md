# Week 1 Lab: Understanding Structs, Stack vs Heap

## 🎯 Objective

Learn the difference between stack and heap memory allocation in C using `struct User`.

## 📝 Problem Statement

Create a program that demonstrates **4 different ways** to create and initialize a `User` struct:

1. **Stack allocation with initializer list**
2. **Stack allocation with manual assignment**
3. **Heap allocation with manual assignment**
4. **Heap allocation via a helper function**

---

## 📋 Instructions

### Step 1: Define the User Structure

Create a `struct User` with:

- `int age`
- `char name[50]`
- `double gpa`

Use `typedef` for cleaner syntax.

---

### Step 2: Create Four Users

#### User 1 (u1)

- Allocate on the **stack**
- Initialize using an **initializer list**: `{1, "Mohamed", 3.1}`
- Print the details

#### User 2 (u2)

- Allocate on the **stack**
- Initialize with **empty braces** `{}`
- Manually assign values:
  - `age = 21`
  - `name = "Ahmed"`
  - `gpa = 3.9`
- Print the details

#### User 3 (u3)

- Allocate on the **heap** using `malloc`
- Manually assign values:
  - `age = 15`
  - `name = "Omar"`
  - `gpa = 2.5`
- Print the details

#### User 4 (u4)

- Create a **helper function** `createUser(int id, char name[], double gpa)`
- Inside the function:
  - Allocate memory on the **heap**
  - Initialize the fields
  - Return the pointer
- Call the function and print the details

---

### Step 3: Compile and Run

```bash
gcc Program.c -o program
./program
```

---

## ✅ Expected Output

```
Age: 1, Name: Mohamed, gpa: 3.100000
Age: 21, Name: Ahmed, gpa: 3.900000
Age: 15, Name: Omar, gpa: 2.500000
Age: 15, Name: Omar, gpa: 2.500000
```

---

## 🚨 Important Notes

- Remember to `free()` heap-allocated memory (u3, u4) before the program ends
- Stack variables are automatically cleaned up
- Heap variables persist until explicitly freed

---

## 🎓 Learning Goals

- Understand **stack vs heap** memory
- Know when to use each allocation method
- Practice pointer syntax (`->` vs `.`)
- Learn dynamic memory management with `malloc` and `free`
