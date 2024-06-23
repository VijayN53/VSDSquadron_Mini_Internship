# VSDSquadron Mini Internship June_2024

## Basic Details
**Name:**  N Vijay<br />
**College:** R.M.K. Engineering College<br />
**Email Id:** [vija21432.ec@rmkec.ac.in](vija21432.ec@rmkec.ac.in)<br />
**GitHub Profile:** [VijayN53](https://github.com/VijayN53)<br />
**Linkedin Profile:** [N VIJAY](https://www.linkedin.com/in/n-vijay-a3950122b?lipi=urn%3Ali%3Apage%3Ad_flagship3_profile_view_base_contact_details%3BIbIZWmtARZ65D08AaTXuWQ%3D%3D)<br />
***
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
  [Sample Code](https://github.com/VijayN53/VSDSquadron_Mini_Internship/blob/be9d3511691fc4f75648942707b1a260fa4c5404/Task%201/2.Sample_C_code.png)<br />
  
  **4.Command for Compiling and Analyzing the Output**<br />
  ```
  $ gcc filename.c
  $ ./a.out
  ```
  [OutputFile](https://github.com/VijayN53/VSDSquadron_Mini_Internship/blob/be9d3511691fc4f75648942707b1a260fa4c5404/Task%201/3.Output%20of%20Sample%20code.png)<br />
  
  **5.Command for Compiling the Code using RISCV Compiler**<br />
  ```
  $ riscv64-unknown-elf-gcc -O1 -mabi=lp64 -march=rv64i -o filename.o filename.c
  $ ls -ltr filename.o
  ```
  [Document](https://github.com/VijayN53/VSDSquadron_Mini_Internship/blob/be9d3511691fc4f75648942707b1a260fa4c5404/Task%201/4.Installing%20RISC%20Compiler.png)<br />
  
  **6.Command to View the Assembly Code**<br />
  ```
  $ riscv64-unknown-elf-objdump -d filename.o //Gives bunch of Code
  $ riscv64-unknown-elf-objdump -d filename.o | less // Gives Reduced Code
  /main //to view the main function of the code
  ```
  [AssembyCode1](https://github.com/VijayN53/VSDSquadron_Mini_Internship/blob/be9d3511691fc4f75648942707b1a260fa4c5404/Task%201/5.Main%20Function%20Assembly%20code.png)<br />
  
  **7. Command to View the Assembly Code**<br />
  ```
  $ riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o filename.o filename.c
  $ riscv64-unknown-elf-objdump -d filename.o | less 
  /main 
  ```
  [AssemblyCode2](https://github.com/VijayN53/VSDSquadron_Mini_Internship/blob/be9d3511691fc4f75648942707b1a260fa4c5404/Task%201/6.Assembly%20code%20for%20ofast%20command.png)<br />
 *** 
  
  
  
  


  
  


