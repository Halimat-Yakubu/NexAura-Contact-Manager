
• Contact Manager CLI Application

A simple command-line contact management system written in C that performs CRUD (Create, Read, Update, Delete) operations on contact records with persistent CSV storage.

This application is created entirely in C, specifically highlighting the following topics: 
● Modular Programming 
● Arrays
● Handling csv files in C


## • Features

- Add new contacts with unique IDs
- List all contacts in tabular format
- View individual contact details by ID
- Update existing contact information
- Delete contacts
- Persistent storage using CSV files
- Simple and intuitive CLI interface



## • Project Structure

```
contact_manager/
├── main.c              # Entry point and menu system
├── contacts.c          # Contact CRUD operations
├── contacts.h          # Contact function declarations
├── file_io.c           # CSV file handling
├── file_io.h           # File I/O function declarations
├── Makefile            # Build configuration (optional)
└── README.md           # This file
```


• Data Storage Location:
```
~/.local/share/contact_manager/contacts.csv
```



## • Requirements

- **Operating System:** Linux/Unix-based system (tested on Ubuntu)
- **Compiler:** GCC (GNU Compiler Collection)
- **C Standard:** C99 or later.



## • Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/yourusername/contact_manager.git
   cd contact_manager
   ```

2. **Verify all source files are present:**
   ```bash
   ls -l
   ```
   You should see: `main.c`, `contacts.c`, `contacts.h`, `file_io.c`, `file_io.h`




## • Compilation

- Method 1: Using Makefile 

If you have a Makefile:
```bash
make
```

- Method 2: Manual Compilation (Without Makefile)

**Option A - Single Command:**
```bash
gcc main.c contacts.c file_io.c -o contact_manager
```

**Option B - Step-by-Step (Separate Compilation):**
```bash
# Compile each source file to object file
gcc -c main.c -o main.o
gcc -c contacts.c -o contacts.o
gcc -c file_io.c -o file_io.o

# Link all object files together
gcc main.o contacts.o file_io.o -o contact_manager
```

Expected Output:
If compilation is successful, you'll see no error messages and a new executable file named `contact_manager` will be created.




## • How to Run

- Start the Program:
```bash
./contact_manager
```

- First Run:
On the first run, the program will show the main menu with a prompt to get started.




## • Usage Guide

- Main Menu Options:

```
=== Contact Manager ===
1. List all contacts
2. Show Contact by ID
3. Add Contact 
4. Update Contact
5. Delete Contact
6. Save and Exit
Enter choice: 
```



## • Sample Output

```bash
$ ./contact_manager

=== Contact Manager ===
1. List all contacts
2. Show Contact by ID
3. Add Contact 
4. Update Contact
5. Delete Contact
6. Save and Exit
Enter choice: 3
First Name: Halimat
Last Name: Yakubu 
Phone Number: 09048473861
Email: halimatyakubu50@gmail.com
Contact added successfully! 


=== Contact Manager ===
1. List all contacts
2. Show Contact by ID
3. Add Contact 
4. Update Contact
5. Delete Contact
6. Save and Exit
Enter choice: 1

ID    | First Name      | Last Name       | Phone Number    | Email
------------------------------------------------------------------------
1     | Halimat         | Yakubu          | 09048473861     | halimatyakubu50@gmail.com


=== Contact Manager ===
1. List all contacts
2. Show Contact by ID
3. Add Contact 
4. Update Contact
5. Delete Contact
6. Save and Exit
Enter choice: 4

Enter ID to update: 1
Updating contact ID 1:
First Name: Aliyah
Last Name: Atolagbe
Phone Number: 07040707136
Email: harliyahatolagbe@gmail.com
Contact updated.


=== Contact Manager ===
1. List all contacts
2. Show Contact by ID
3. Add Contact 
4. Update Contact
5. Delete Contact
6. Save and Exit
Enter choice: 1

ID    | First Name      | Last Name       | Phone Number    | Email
------------------------------------------------------------------------
1     | Aliyah          | Atolagbe        | 07040707136     | harliyahatolagbe@gmail.com


=== Contact Manager ===
1. List all contacts
2. Show Contact by ID
3. Add Contact 
4. Update Contact
5. Delete Contact
6. Save and Exit
Enter choice: 5
Enter ID to delete: 1

Contact deleted.

```



## • Technical Details

• Data Structure:
- Uses **parallel arrays** (not structs)
- Maximum capacity: **500 contacts**
- Fields stored: ID, First Name, Last Name, Phone Number, Email


• CSV Format:
```csv
id,first_name,last_name,phone_number,email
1,John,Doe,08012345678,john@example.com
2,Mary,Ada,08098765432,mary@site.com
```

• File Storage:
- Location: `~/.local/share/contact_manager/contacts.csv`
- Data is loaded on program start
- Data is saved when selecting "Exit" option



## • Team Members

- Aliyah Atolagble Opeyemi - harliyahatolagbe@gmail.com
- Halimat Yakubu Sadia - halimatyakubu50@gmail.com
- Demo Video: https://drive.google.com/drive/folders/154sAlNpR_sI5zuoV2jnsQX__5EQdN8Q3



