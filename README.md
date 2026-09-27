# OOP C++ - Unit II: Inheritance

## Student Details

- **Student Name:**Om Vijaykumar Nanaware
- **ZPRN:**125UAD1271
- **Class/Division:**E
- **Course Name:** Object-Oriented Programming with C++
- **Unit:** II - Inheritance

## List of Programs

| No. | Program | Main Concept |
|---|---|---|
| 01 | Basic Single Inheritance | Base and derived classes |
| 02 | Protected Member Access | Protected access specifier |
| 03 | Public versus Private Inheritance | Inheritance modes |
| 04 | Multilevel Inheritance | Three-level hierarchy |
| 05 | Hierarchical Inheritance | One base, multiple derived classes |
| 06 | Multiple Inheritance | Two base classes |
| 07 | Multiple-Inheritance Ambiguity | Scope-resolution operator |
| 08 | Constructor and Destructor Order | Object lifecycle |
| 09 | Parameterized Base Constructor | Initializer list |
| 10 | Function Overriding | virtual and override |
| 11 | Abstract Class | Pure virtual function |
| 12 | Virtual Base Class and Diamond Inheritance | Virtual base class |
| 13 | Friend Class | Special access permission |
| 14 | Nested Class | Class inside another class |
| 15 | Mini-Project: Vehicle Rental System | Integrated inheritance |
| 16 | Mini-Project: Employee Payroll System | Abstract base and overriding |

## Brief Description

1. **Basic Single Inheritance:** Person is the base class and Student is the derived class.
2. **Protected Member Access:** Demonstrates access to a protected base-class member from a derived class.
3. **Public versus Private Inheritance:** Shows the effect of public and private inheritance on accessibility.
4. **Multilevel Inheritance:** Demonstrates the Person → Employee → Manager hierarchy.
5. **Hierarchical Inheritance:** Demonstrates Car and Bike derived from Vehicle.
6. **Multiple Inheritance:** Combines academic and sports records in Student.
7. **Multiple-Inheritance Ambiguity:** Resolves same-named functions using the scope-resolution operator.
8. **Constructor and Destructor Order:** Demonstrates base/derived object lifecycle order.
9. **Parameterized Base Constructor:** Initializes a parameterized base class from a derived constructor.
10. **Function Overriding:** Demonstrates virtual functions and overriding.
11. **Abstract Class:** Uses a pure virtual function to create an abstract Shape class.
12. **Virtual Base Class and Diamond Inheritance:** Uses a virtual base class to avoid duplicate Person objects.
13. **Friend Class:** Demonstrates controlled access to private data through a friend class.
14. **Nested Class:** Demonstrates a Department class nested inside University.
15. **Vehicle Rental System:** Integrates inheritance for vehicle details and rental calculation.
16. **Employee Payroll System:** Uses an abstract Employee base class and derived salary calculations.

## Repository Structure

```text
OOP-Cpp-Unit-II/
├── README.md
├── Program_01_Basic_Single_Inheritance/
│   ├── 01_basic_single_inheritance.cpp
│   ├── ALGORITHM.txt
│   └── OUTPUT.txt
├── Program_02_Protected_Member_Access/
│   ├── 02_protected_member_access.cpp
│   ├── ALGORITHM.txt
│   └── OUTPUT.txt
...
└── Program_16_Employee_Payroll_System/
    ├── 16_employee_payroll_system.cpp
    ├── ALGORITHM.txt
    └── OUTPUT.txt
```

## Compilation

The supplied practical code book uses C++17 or later.

### Windows / MinGW

```powershell
g++ -std=c++17 filename.cpp -o program.exe
.\program.exe
```

### Linux / macOS

```bash
g++ -std=c++17 filename.cpp -o program
./program
```

## Submission Checklist

- [ ] Student Name, PRN and Class/Division filled in.
- [ ] All 16 Unit-II programs uploaded.
- [ ] Every program is properly named and organized.
- [ ] Algorithm included for every program.
- [ ] Output included wherever applicable.
- [ ] Comments included in the source code.
- [ ] README.md completed.
- [ ] Repository is accessible to faculty.
- [ ] Regular commits made so coding progress is visible.
- [ ] Repository link verified before submission.
- [ ] Repository belongs to the student's GitHub account unless group submission is instructed.

## Source

Prepared from the supplied **Object-Oriented Programming with C++ - Unit 2: Inheritance — Practical Code Book**, Course Code ADPC303, C++17 or later.
