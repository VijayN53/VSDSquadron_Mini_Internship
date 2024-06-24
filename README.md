# VSDSquadron Mini Internship June_2024
<img align="right" width="300" height="135" src="https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/368c7a8d-7891-4838-8b8f-f9634078b7fc"> VSDSquadron Mini Board is a RISC-V based Architecture and consists of 32-bit RISC-V Core ,3 Groups of GPIO pins(15 I/O ports),RV32EC instruction set and supports CH32V305FBP6 single-wire programming protocol and other various communication protocols<br />



## Basic Details
**Name:**  N Vijay<br />
**College:** R.M.K. Engineering College<br />
**Email Id:** [vija21432.ec@rmkec.ac.in](vija21432.ec@rmkec.ac.in)<br />
**GitHub Profile:** [VijayN53](https://github.com/VijayN53)<br />
**Linkedin Profile:** [N VIJAY](https://www.linkedin.com/in/n-vijay-a3950122b?lipi=urn%3Ali%3Apage%3Ad_flagship3_profile_view_base_contact_details%3BIbIZWmtARZ65D08AaTXuWQ%3D%3D)<br />
***
<details>
  <summary><b>Task 1: Installation and Setup</b></summary>
 
+ **Task 1:** The task is to install the necessary tools for this internship such as Ubuntu on VMBox, Visual C++ and write a sample C code and analysing RISC asssemby code for the sample C code

  **1.Installing Ubuntu on VMBox**<br />
  After installing the tools then open the terminal on Ubuntu to type the command.<br />
  ![Installing Ubuntu   VMBox](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/51924514-846f-4fe7-8d96-2619dad511f0)

  
  **2.Command for Installing Leafpad**<br />
  ```
  $ sudo apt install leafpad
  ```
  
  **3.Command for Opening Leafpad**<br />
  ```
  $ cd
  $ leafpad filename.c &
  ```
  ![Sample_C_code](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/584b7959-1760-4e50-bb75-fd011370cb2b)

  
  **4.Command for Compiling and Analyzing the Output**<br />
  ```
  $ gcc filename.c
  $ ./a.out
  ```
  ![Output of Sample code](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/b1e1a5dc-295e-4c80-b871-5c5154056b9f)
    
  **5.Command for Compiling the Code using RISCV Compiler**<br />
  ```
  $ riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o filename.o filename.c
  $ ls -ltr filename.o
  ```
  ![Installing RISC Compiler](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/d925b284-359e-444e-a7bb-62dd9a135d06)

  **6.Command to View the Assembly Code**<br />
  ```
  $ riscv64-unknown-elf-objdump -d filename.o //Gives bunch of Code
  $ riscv64-unknown-elf-objdump -d filename.o | less // Gives Reduced Code
  /main //to view the main function of the code
  ```
  ![Main Function Assembly code](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/e3323abe-ece5-481a-8c1a-70e1b5c26ada)
    
  **7. Command to View the Assembly Code**<br />
  ```
  $ riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o filename.o filename.c
  $ riscv64-unknown-elf-objdump -d filename.o | less 
  /main 
  ```
  ![Assembly code for ofast command](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/1e14ee97-c3ae-4644-80fa-bed8a9dbefb2)
 *** 
  
  
  
  


  
  


