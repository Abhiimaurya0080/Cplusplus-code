# 💻 C++ Fundamentals – Data Types, Variables & OOP

This repository contains C++ programs that demonstrate the **basic concepts of C++ programming**, including variables, data types, operators, control statements, functions, and object-oriented programming.

This project is created for **learning and practice purposes**.

---

# 📚 Topics Covered

## 1. Variables in C++

Variables are used to store data values in a program.

Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 21;
    float price = 99.5;
    char grade = 'A';
    cout << age << endl;
    return 0;
}
```

Concepts covered:

* Variable declaration
* Variable initialization
* Naming rules

---

## 2. Data Types in C++

C++ supports several built-in data types.

### Basic Data Types

* int
* float
* double
* char
* bool

Example:

```cpp
int number = 10;
float price = 25.5;
char letter = 'A';
bool isActive = true;
```

---

## 3. Operators in C++

Operators are used to perform operations on variables.

### Arithmetic Operators

```
+  -  *  /  %
```

### Comparison Operators

```
==  !=  >  <  >=  <=
```

### Logical Operators

```
&&  ||  !
```

---

## 4. Conditional Statements

Used to make decisions in a program.

Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 18;

    if(age >= 18) {
        cout << "Eligible to vote";
    } else {
        cout << "Not eligible";
    }
}
```

---

## 5. Loops in C++

Loops are used to repeat a block of code.

### For Loop

```cpp
for(int i = 0; i < 5; i++) {
    cout << i << endl;
}
```

### While Loop

```cpp
int i = 0;
while(i < 5) {
    cout << i << endl;
    i++;
}
```

---

# 🧠 Object-Oriented Programming (OOP)

C++ supports Object-Oriented Programming.

Concepts included in this project:

* Classes
* Objects
* Constructors
* Inheritance
* Encapsulation
* Polymorphism

---

## Class and Object Example

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void show() {
        cout << name << " " << age;
    }
};

int main() {
    Student s1;
    s1.name = "Abhi";
    s1.age = 21;
    s1.show();
}
```

---

## Inheritance Example

```cpp
#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaking";
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barking";
    }
};

int main() {
    Dog d;
    d.speak();
    d.bark();
}
```

---

# 📂 Project Structure

```
cpp-fundamentals/
│
├── variables.cpp
├── data_types.cpp
├── operators.cpp
├── conditions.cpp
├── loops.cpp
├── functions.cpp
├── oop.cpp
└── README.md
```

---

# ▶️ How to Run

1. Install a C++ compiler (g++, MinGW, etc.)
2. Clone the repository

```
git clone https://github.com/your-username/your-repository-name.git
```

3. Open the project folder

```
cd your-repository-name
```

4. Compile the program

```
g++ variables.cpp -o variables
```

5. Run the program

```
./variables
```

---

# 🎯 Purpose of This Repository

This repository helps:

* Beginners learn C++
* Practice programming concepts
* Understand Object-Oriented P
