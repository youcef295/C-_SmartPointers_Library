# Library Management System

## Description

This project implements a simple library management system in C++. It allows for managing different types of library items (e.g., books) and displaying their relevant details. The system leverages object-oriented programming principles such as inheritance, polymorphism, and smart pointers to ensure memory management is handled automatically and efficiently.

### Features:
- `LibraryItem` class as a base class for all library items.
- Derived `Book` class with specific attributes like page count.
- Use of `std::shared_ptr` and `std::unique_ptr` for managing memory and avoiding memory leaks.
- CMake-based build system for easy compilation and management.

## Structure

The project is organized as follows:
- `CMakeLists.txt`: Build configuration for CMake.
- `src/`: Source code files (`.cpp`).
- `include/`: Header files (`.hpp`).
- `README.md`: Project description and setup guide.

## Installation

To build this project, you need to have CMake installed. Follow these steps:

1. Clone the repository:

    ```bash
    git clone https://github.com/yourusername/Library-Management-System.git
    cd Library-Management-System
    ```

2. Create a build directory and run CMake:

    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```

3. Run the program:

    ```bash
    ./myLibrary
    ```

## Usage

This project includes a `LibraryItem` class and a `Book` class. Here's how you can use it:

- Create a `Book` instance, providing the title, author, and page count.
- Add the `Book` instance to the library collection using `std::shared_ptr` or `std::unique_ptr`.
- Call `display()` to print the information of each book.

### Example:

```cpp
#include "Book.hpp"

int main() {
    std::shared_ptr<Book> book1 = std::make_shared<Book>("C++ Programming", "Bjarne Stroustrup", 1360);
    book1->display();
    return 0;
}
```
### Expected Output:
```cpp
Title: C++ Programming
Author: Bjarne Stroustrup
Page count: 1360
```

###Contributing
Feel free to fork the repository and submit pull requests. If you find any bugs or have suggestions for improvements, please open an issue.

  
