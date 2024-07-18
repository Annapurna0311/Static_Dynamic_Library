# Static_Dynamic_Library
Libraries are reusable code packages that can be imported into programs to utilize pre-defined functionalities. In C++, libraries can be classified as either static or dynamic. Static libraries are linked to the program during the compilation process, whereas dynamic libraries are linked at runtime. One benefit of dynamic libraries is that they are not included in the executable file, which helps keep the executable size smaller. In this project, we will explore the process of creating a library in C++ that can be used in Competitive Programming to increase efficiency. 
# Importance
   # Static Libraries:
1. Performance
2. Portability
3. Simplicity
   # Dynamic Libraries:
1. Reduced Memory Usage
2. Modularity
3. Smaller Executable Size
4. Flexibility ensurance at runtime
   # General Importance:
1. Code Reusability
2. Encapsulation
3. Standardization
# How to use
1. Open an IDE and create a header file with the .h a and declaring the functions that we want to have in the library.Now, create another file that is the source code file with .cpp extension and write the function body of the function that we declared in the header file.
     Header File name: math_operations.h

   ![image](https://github.com/user-attachments/assets/3672b189-71a0-4f8f-a01d-0192d24b92c0)

     Source Code File: math_operations.cpp

   ![image](https://github.com/user-attachments/assets/2b0bf5bd-2e7a-462a-8558-e8a9d5944822)
2. Compile the source code into object files. By opening the terminal in the directory containing the source code file (math_operations.cpp) and run the following command:
      g++ -c math_operations.cpp -o math_operations.o
      
3. Use the ar (archive) command to bundle the object files into a static library and create a static library named libmath_operations.a from the object file math_operations.o. Run the following command:
      ar rcs libmath_operations.a math_operations.o
4. Now, we can use the created static library in another C++ program.
      trial.cpp:

   ![image](https://github.com/user-attachments/assets/ee0ea490-33c2-4b55-b0d6-e728b643d3ed)
6. Run the compiled program using following command:
      ./main_executable
7. Output

   ![image](https://github.com/user-attachments/assets/fbe52991-44c3-40ca-bcec-7cf3392e061b)
