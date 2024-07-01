# VSDSquadron Mini Internship June_2024
<img align="right" width="300" height="138" src="https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/368c7a8d-7891-4838-8b8f-f9634078b7fc"> VSDSquadron Mini Board is a RISC-V based Architecture and consists of 32-bit RISC-V Core ,3 Groups of GPIO pins(15 I/O ports),RV32EC instruction set and supports CH32V305FBP6 single-wire programming protocol and other various communication protocols<br />



## Basic Details
**Name:**  N Vijay<br />
**College:** R.M.K. Engineering College<br />
**Email Id:** vija21432.ec@rmkec.ac.in<br />
**GitHub Profile:** [VijayN53](https://github.com/VijayN53)<br />
**Linkedin Profile:** [N VIJAY](https://www.linkedin.com/in/n-vijay-a3950122b?lipi=urn%3Ali%3Apage%3Ad_flagship3_profile_view_base_contact_details%3BIbIZWmtARZ65D08AaTXuWQ%3D%3D)<br />

***

<details>
<summary><b>Task 1:</b>The task is to install the necessary tools for this internship such as Ubuntu on VMBox, Visual C++ and write a sample C code and analysing RISC asssemby code for the sample C code</summary><br />
  
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
  
</details>

***

<details>
<summary><b>Task 2:</b>To Write a Simple C code for the project "Crafting a Digital Clock Divider Circuit" and to analyze instructions in  assembly code using RISC-V Compiler by following the same procedures in the task1</summary><br />

  **1.Sample C Code on LeafPad**<br />
  > A clock divider circuit creates lower frequency clock signals from an input clock source. The divider circuit counts input clock cycles, and drives the output clock low and then high for some number of input clock cycles.<br />
  ![1 Simple C code](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/7aca13cc-a5d8-47a1-8379-bab1fa5294a8)

**2.Checking The Output**<br />
  > The Output Clock signal is produced in the Output and verified.<br />
  ![2 Output for the  C code](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/8fb71cd3-2d46-43fe-a539-21b812756f74)

**3.Run the Code in RISC-V Compiler**<br />
  > Compiling the C code on RISC-V compiler using the below shown command.<br />
    ![3 Command to run RISC-V](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/33dc5679-355c-4272-9162-e0e4b0cc7f0b)
  > In Assembly code the instructions of the main function is analyzed.<br />
    ![4 Assembly code](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/04a37ebd-e120-4d66-be35-c5f78bbec7f4)
    ![5 Assembly code](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/15c26f89-9fad-4506-a8fb-334b5c83d040)

**4.Run the code using Ofast Command**<br />
  > Compiling the C code on RISC-V compiler using the below shown command.<br />
  ![6 Ofast cmnd to run code on RISC-V](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/e088dbce-f7c6-4580-a4f0-a343a8f073c7)
  > In Assembly code the instructions of the main function is analyzed.<br />
  ![7 Assembly code](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/dd42a415-9db4-4862-9f3b-b0b0e3c47f72)
  ![8 Assebmly code](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/c87122f9-81e1-4ca2-b295-d31c0cba3845)

 </details>
 
 ***
<details>
  <summary><b>Task 3:</b>To Observe the output for the code in both gcc compiler and RISC-V compiler by verifying both the outputs and debug the instruction of the assembly 
  code</summary><br />

  **1.Verifying the Outputs**<br >
  + The command used to run and verify the output through gcc compiler is shown below,
  
  ```
  $ gcc clkdiv.c
  $ ./a.out
  ```

  + The command used to run the RISC-V compiler is shown below,
  ```
  $ riscv64-unknown-elf-gcc -Ofast -mabi=lp64 -march=rv64i -o clkdiv.o clkdiv.c
  $ spike pk clkdiv.o
  ```
  ![1 Verifying Output](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/5b320348-e612-4ccb-aa56-b08a881f37ea)

  + So we can see that the output is same, when we compile through both gcc and RISC-V compiler.<br />
  
  **2.Debugging the instruction**
  + Before Debugging, open the assembly code of your project in a newtab and enter the below command to view the assembly code.
  ```
  $ riscv64-unknown-elf-objdump -d clkdiv.o | less
  ```
 ![3 Opening objdump](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/da98e27f-3fad-46e4-baed-996486b1fcb3)
 
  + To start debugging the assembly code,enter the below command as shown,
  ```
  $ spike -d pk clkdiv.o
  (spike) // will be displayed below the above command.
  ```
  ![2  Debugging command](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/58b3e52b-0a4e-4f9c-b598-78404b162b9b)
  
  + We can also enter a command from where the instruction needed to be debugged (i.e) All the instruction before that address will be executed.
  ```
  (spike) until pc 0 100b0 // we can start debugging from this address
  ```
  + As you can see in the above image,the instruction of main function, to access the content of a5, type this command as shown,
  ```
  (spike) reg 0 a5 // the content before executing the instruction will be displayed
  ```
  ![4 Accessing content of  a5 before execution](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/b2759309-d606-4ae2-b831-4500e4eb9859)
  
  + Now press enter to view the instruction of the given first address and follow the above command to view the content of a5 after execution,
    
  ![5 Accessing the  content of  a5 after execution](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/be847581-e37a-447d-bd54-7178faf20958)
  
  + similarly the contents of stack pointer before and after execution of that instruction can also viewed as shown below.Similarly continue pressing the **ENTER** to view 
  the next significant instruction.<br />

 ![6 Accessing the content of sp before execution](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/53cbc25c-54ee-43de-a9f9-3de05b4b52a7)

 ![7 Accessing the content of sp After execution](https://github.com/VijayN53/VSDSquadron_Mini_Internship/assets/106604062/07872edf-c38f-4baa-84f7-1f2516cd2e61)
 
 **3.Explanation of RISC-V Instructions**<br />
     **--> lui -**  The lui(Load Upper Immediate) instruction in the RISC-V compiler is used to load a 20-bit immediate value into the upper 20 bits of a register, effectively setting up a large constant value. It is typically followed by other instructions to complete the 32-bit value manipulation in the register.<br />
     **--> addi -** The addi(Add Immediate) instruction in the RISC-V compiler adds a 12-bit immediate value to a source register and stores the result in a destination register. It is commonly used for small constant additions to register values.<br />
     **--> ld -**   The ld(Load Doubleword) instruction in the RISC-V compiler is used to load a 64-bit value from memory into a register. It is typically used in 64-bit RISC-V implementations to handle large data transfers from memory.<br />
     **--> sd -**   The sd(Store Doubleword) instruction in the RISC-V compiler is used to store a 64-bit value from a register into memory. It is typically used in 64-bit RISC-V implementations for saving large data from a register to a memory address.<br />
     **--> sw -**   The sw(Store Word) instruction in the RISC-V compiler is used to store a 32-bit value from a register into memory. It is commonly used to save the contents of a register to a specified memory address.
     
</details>

***

<details>
  <summary><b>Task 4:</b>To analyze and learn Base Instructions formats (R,I,S,B,U,J) and to identify 32 bit instruction code for the specified instruction type format in RISC-V instruction</summary> 

## TABLE OF CONTENT

- [INTRODUCTION](#introduction)
     - [1.RISC-V](#1risc-v)
     - [2.RV32I Base Integer Instruction Set](#2rv32i-base-integer-instruction-set)
     - [3.Instruction Set Overview](#3instruction-set-overview)
- [BASE INSTRUCTION FORMATS AND TYPES](#base-instruction-formats-and-types)
     - [1.Detail Explanation for Base Instructions](#1detail-explanation-for-base-instructions)
- [32-BIT INSTRUCTION CODE](#32-bit-instruction-code)
     - [1.Overall Instruction Codes](#1overall-instruction-codes)
- [REFERENCE](#reference)
  
## INTRODUCTION

#### 1.RISC-V

+ RISC-V (pronounced "risk-five") is a new instruction-set architecture (ISA) that was originally designed
to support computer architecture research and education.
+ RISC-V is an open-standard instruction set architecture (ISA) that is free to use for anyone.
+ RISC-V is designed to be simple and modular, allowing for custom extensions and optimizations.
+ Allows for easy implementation of custom extensions tailored to specific applications.
+ Follows the principles of Reduced Instruction Set Computing (RISC), which simplifies the hardware and can improve performance.

#### 2.RV32I Base Integer Instruction Set

+ The RV32I Base Integer Instruction Set is a fundamental subset of the RISC-V instruction set architecture (ISA) designed for 32-bit integer operations. It provides the essential instructions needed to perform basic computing tasks. Here’s a detailed breakdown:
  
  + **1.Overview of RV32I :**
     + 32-bit Architecture: The "32" in RV32I refers to the 32-bit width of the instruction set, indicating that instructions and data are processed as 32-bit entities.
     + Base Integer Instructions: The "I" stands for "Integer," meaning this set covers the basic operations for integer arithmetic, logic, and data manipulation.
  + **2.Basic Operations :**
     +  Arithmetic: Add, subtract, multiply, divide.
     +  Logical: AND, OR, XOR, shift operations.
     +  Data Movement: Load from memory, store to memory.
     + Control Flow: Conditional branches, jumps, subroutine calls.
  
#### 3.Instruction Set Overview

+ The RV32I Base Integer Instruction Set is the fundamental subset of the RISC-V ISA for 32-bit integer operations. Below is a summary of the different instruction types and their functions:

| **Instruction Type** | **Description**                                     | **Examples**        |
|----------------------|-----------------------------------------------------|---------------------|
| **Arithmetic**       | Basic math operations                              | `ADD`, `SUB`, `MUL`, `DIV` |
| **Logical**          | Bitwise operations                                 | `AND`, `OR`, `XOR`, `SLL` |
| **Memory**           | Data transfer between memory and registers        | `LW`, `SW`          |
| **Branch**           | Conditional execution based on comparisons        | `BEQ`, `BNE`        |
| **Jump**             | Unconditional changes in the execution flow       | `JAL`, `JALR`       |
| **Immediate**        | Operations involving constants                     | `ADDI`, `ORI`      |


  
## BASE INSTRUCTION FORMATS AND TYPES
+ In RISC-V, Generally in base RV32I ISA, there are four core instruction formats (R/I/S/U)
+ There are a further two variants of the instruction formats (B/J) based on the handling of immediates, these base instruction formats that define how instructions are encoded within a 32-bit word

![Types](https://github.com/VijayN53/To_know_about_repo/assets/106604062/73217dd0-4ef7-4dc1-9271-9f95a67e5cb7)

#### 1.Detail Explanation for Base Instructions

+ Let's see the instruction type formats in detail,
  
| Instruction Format | Explanation |
|--------------------|-------------|
| **R-type**         | <ul><li>Used for register-register operations.</li><li>Opcode: Identifies the operation to be performed.</li><li>Funct3: Further specifies the operation.</li><li>Funct7: Used in combination with opcode and funct3 to define the operation.</li><li>rs1, rs2: Source registers.</li><li>rd: Destination register.</li></ul> |
| **I-type**         | <ul><li>Used for immediate values.</li><li>Opcode: Identifies the operation to be performed.</li><li>Funct3: Further specifies the operation.</li><li>Imm: Immediate value (12-bit).</li><li>rs1: Source register.</li><li>rd: Destination register.</li></ul> |
| **S-type**         | <ul><li>Used for store instructions.</li><li>Opcode: Identifies the operation to be performed.</li><li>Funct3: Further specifies the operation.</li><li>Imm: Immediate value (split across two fields).</li><li>rs1: Source register.</li><li>rs2: Source register whose value is to be stored.</li></ul> |
| **B-type**         | <ul><li>Used for branch instructions.</li><li>Opcode: Identifies the operation to be performed.</li><li>Funct3: Further specifies the operation.</li><li>Imm: Immediate value (split across multiple fields).</li><li>rs1, rs2: Source registers.</li></ul> |
| **U-type**         | <ul><li>Used for upper immediate instructions.</li><li>Opcode: Identifies the operation to be performed.</li><li>Imm: Immediate value (20-bit).</li><li>rd: Destination register.</li></ul> |
| **J-type**         | <ul><li>Used for jump instructions.</li><li>Opcode: Identifies the operation to be performed.</li><li>Imm: Immediate value (split across multiple fields).</li><li>rd: Destination register.</li></ul> |

## 32-BIT INSTRUCTION CODE

1. **ADD**<br />
   ```
   ADD r1, r2, r3
   ```
   - **Description**: Performs integer addition between two registers.
   - **Typical Use**: Adding two values stored in registers to produce a result.
   - **Type**: R-type
   - **Opcode**: 0110011
   - **Funct3**: 000
   - **Funct7**: 0000000
   - **Binary**: `0000000 00011 00010 000 00001 0110011`
   - **Hex**: `0x00200133`
   
2. **SUB**<br />
   ```
   SUB r3, r1, r2
   ```
   - **Description**: Performs integer subtraction between two registers.
   - **Typical Use**: Subtracting one value from another and storing the result.
   - **Type**: R-type
   - **Opcode**: 0110011
   - **Funct3**: 000
   - **Funct7**: 0100000
   - **Binary**: `0100000 00010 00001 000 00011 0110011`
   - **Hex**: `0x402080b3`
   
3. **AND**<br />
   ```
   AND r2, r1, r3
   ```
   - **Description**: Performs bitwise AND between two registers.
   - **Typical Use**: Performing a bitwise AND operation to filter specific bits.
   - **Type**: R-type
   - **Opcode**: 0110011
   - **Funct3**: 111
   - **Funct7**: 0000000
   - **Binary**: `0000000 00011 00001 111 00010 0110011`
   - **Hex**: `0x003001b3`
   
4. **OR**<br />
   ```
   OR r8, r2, r5
   ```
   - **Description**: Performs bitwise OR between two registers.
   - **Typical Use**: Combining bits from two values to include all bits that are set.
   - **Type**: R-type
   - **Opcode**: 0110011
   - **Funct3**: 110
   - **Funct7**: 0000000
   - **Binary**: `0000000 00101 00010 110 01000 0110011`
   - **Hex**: `0x00510c33`
   
5. **XOR**<br />
   ```
   XOR r8, r1, r4
   ```
   - **Description**: Performs bitwise XOR between two registers.
   - **Typical Use**: Performing a bitwise XOR operation for bit masking or toggling.
   - **Type**: R-type
   - **Opcode**: 0110011
   - **Funct3**: 100
   - **Funct7**: 0000000
   - **Binary**: `0000000 00100 00001 100 01000 0110011`
   - **Hex**: `0x00410c33`
   
6. **SLT**<br />
    ```
    SLT r10, r2, r4
    ```
   - **Description**: Sets register if the first operand is less than the second.
   - **Typical Use**: Comparing two values to check if one is less than the other.
   - **Type**: R-type
   - **Opcode**: 0110011
   - **Funct3**: 010
   - **Funct7**: 0000000
   - **Binary**: `0000000 00100 00010 010 01010 0110011`
   - **Hex**: `0x00410a33`
   
7. **ADDI**<br />
    ```
    ADDI r12, r3, 5
    ```
   - **Description**: Adds an immediate value to a register.
   - **Typical Use**: Adding a constant value to a register’s contents.
   - **Type**: I-type
   - **Opcode**: 0010011
   - **Funct3**: 000
   - **Binary**: `000000000101 00011 000 01100 0010011`
   - **Hex**: `0x00518193`
   
8. **SW**<br />
    ```
    SW r3, r1, 4
    ```
   - **Description**: Stores the value from a register into memory.
   - **Typical Use**: Writing data from a register to a memory location.
   - **Type**: S-type
   - **Opcode**: 0100011
   - **Funct3**: 010
   - **Binary**: `0000000 00011 00001 010 00100 0100011`
   - **Hex**: `0x00312023`
   
9. **SRL**<br />
    ```
    SRL r16, r11, r2
    ```
   - **Description**: Performs a logical right shift on the value in a register.
   - **Typical Use**: Shifting bits to the right to divide by powers of two.
   - **Type**: R-type
   - **Opcode**: 0110011
   - **Funct3**: 101
   - **Funct7**: 0000000
   - **Binary**: `0000000 00010 01011 101 10000 0110011`
   - **Hex**: `0x0025a233`
   
10. **BNE**<br />
    ```
    BNE r0, r1, 20
    ```
    - **Description**: Branches if two registers are not equal.
    - **Typical Use**: Conditional branching in control flow based on comparison.
    - **Type**: B-type
    - **Opcode**: 1100011
    - **Funct3**: 001
    - **Binary**: `000001 00001 00000 001 0100 1100011`
    - **Hex**: `0x00814063`
    
11. **BEQ**<br />
    ```
    BEQ r0, r0, 15
    ```
    - **Description**: Branches if two registers are equal.
    - **Typical Use**: Conditional branching to a target address if a comparison is true.
    - **Type**: B-type
    - **Opcode**: 1100011
    - **Funct3**: 000
    - **Binary**: `000000 00000 00000 000 01111 1100011`
    - **Hex**: `0x00700063`
    
12. **LW**<br />
    ```
    LW r13, r11, 2
    ```
    - **Description**: Loads a 32-bit word from memory into a register.
    - **Typical Use**: Reading data from memory into a register.
    - **Type**: I-type
    - **Opcode**: 0000011
    - **Funct3**: 010
    - **Binary**: `000000000010 01011 010 01101 0000011`
    - **Hex**: `0x0025a603`
    
13. **SLL**<br />
    ```
    SLL r15, r11, r2
    ```
    - **Description**: Performs a logical left shift on the value in a register.
    - **Typical Use**: Shifting bits to the left to multiply by powers of two.
    - **Type**: R-type
    - **Opcode**: 0110011
    - **Funct3**: 001
    - **Funct7**: 0000000
    - **Binary**: `0000000 00010 01011 001 01111 0110011`
    - **Hex**: `0x0025b233`

#### 1.Overall Instruction Codes

+ The below tabulation represents entire 32-bit Instruction code for the given RISC-V instructions
  
| Instruction | 32-bit Instruction Code      | Hexadecimal  | Type |
|-------------|------------------------------|--------------|------|
| ADD r1, r2, r3 | `0000000 00011 00010 000 00001 0110011` | `0x00200133` | R |
| SUB r3, r1, r2 | `0100000 00010 00001 000 00011 0110011` | `0x402080b3` | R |
| AND r2, r1, r3 | `0000000 00011 00001 111 00010 0110011` | `0x003001b3` | R |
| OR r8, r2, r5 | `0000000 00101 00010 110 01000 0110011` | `0x00510c33` | R |
| XOR r8, r1, r4 | `0000000 00100 00001 100 01000 0110011` | `0x00410c33` | R |
| SLT r10, r2, r4 | `0000000 00100 00010 010 01010 0110011` | `0x00410a33` | R |
| ADDI r12, r3, 5 | `000000000101 00011 000 01100 0010011` | `0x00518193` | I |
| SW r3, r1, 4 | `0000000 00011 00001 010 00000 0100011` | `0x00312023` | S |
| SRL r16, r11, r2 | `0000000 00010 01011 101 10000 0110011` | `0x0025a233` | R |
| BNE r0, r1, 20 | `000000 010001 00001 001 00010 1100011` | `0x00814063` | B |
| BEQ r0, r0, 15 | `000000 000111 00000 000 00000 1100011` | `0x00700063` | B |
| LW r13, r11, 2 | `000000000010 01011 010 01101 0000011` | `0x0025a603` | I |
| SLL r15, r11, r2 | `0000000 00010 01011 001 01111 0110011` | `0x0025b233` | R |
    
## REFERENCE 

+ [ISA Specification RISC-V(Volume 1)](https://drive.google.com/file/d/1uviu1nH-tScFfgrovvFCrj7Omv8tFtkp/view?usp=drive_link)
+ Used AI tools to identify 32-bit Instruction Code. 

</details>

***
  
  
  


  
  


