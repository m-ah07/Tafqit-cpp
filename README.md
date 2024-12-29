# Tafqit-C++

Tafqit-C++ is a practical solution designed to convert numbers into words, tailored for C++ developers. Currently supporting English, this project simplifies the process of integrating number-to-words functionality into applications. Its modular design ensures that developers can easily extend the service to support additional languages, making it versatile and adaptable to various localization needs.

This project is ideal for anyone looking to implement efficient and customizable number-to-words conversion in their C++ applications.

## 🚀 Features
- Convert numbers to words in English.
- Modular design for adding support for other languages.
- Simple and clean implementation using C++.

## 📖 Usage
Here's an example of how to use the Tafqit service in your C++ project:

   ```bash
      #include "src/tafqit.h"
      #include <iostream>
      
      int main() {
          int number = 123;
          std::string result = numberToWords(number, "en");
          std::cout << "Number in words: " << result << std::endl;
          return 0;
      }
   ```

This example demonstrates a basic usage of the Tafqit service to convert a number into words. You can extend it further by integrating it with your application or adding support for more languages.

## 📂 Folder Structure
```plaintext
tafqit-cpp/
├── src/
│   ├── tafqit.h
│   └── tafqit.cpp
├── examples/
│   └── example.cpp
├── tests/
│   └── test_tafqit.cpp
├── LICENSE
├── README.md
└── Makefile
```

## ⚙️ Requirements
- C++ Compiler: A compiler that supports C++11 or later (e.g., GCC, Clang).
- Development Environment: An IDE or text editor suitable for C++ development (e.g., Visual Studio, Code::Blocks).
- Build System: Make utility for building the project using the provided Makefile.

## 🔧 Getting Started
1. Clone this repository:
   ```bash
   git clone https://github.com/marwan-ahmed-23/Tafqit-cpp.git
   cd tafqit-cpp
2. Build the project
   ```bash
   make
3. Run the example
   ```bash
   ./example
   ```   

## 🤝 Contributions
We welcome contributions to expand this project. Feel free to:

- Add New Features: Enhance the project by implementing additional functionality, such as support for more languages or advanced formatting options.
- Fix Bugs: Identify and resolve issues to improve the project's stability and performance.
- Improve Documentation: Help make the project more accessible by expanding and refining the documentation.
- Share Ideas: Provide feedback or suggestions to help shape the project's future direction.

Your contributions are valuable and greatly appreciated!

## 🌟 Show Your Support
If you found this project helpful, please consider giving it a ⭐ on GitHub. Your support means the world to us!
