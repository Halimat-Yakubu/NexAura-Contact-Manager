# NexAura-Contact-Manager
This repository contains code and necessary documentation for a simple command-line Contact Manager. 
#This application is created entirely in C, specifically highlighting the following topics: 
● Modular Programming 
● Arrays
● Handling csv files in C

The program carries out basic CRUD operations:
● Add a contact
● List all contacts
● Show a single contact by ID
● Update a contact
● Delete a contact


---

• Contact Manager CLI Application

A simple command-line contact management system written in C that performs CRUD (Create, Read, Update, Delete) operations on contact records with persistent CSV storage.


• Features

- Add new contacts with unique IDs
- List all contacts in tabular format
- View individual contact details by ID
- Update existing contact information
- Delete contacts
- Persistent storage using CSV files
- Automatic directory creation for data storage
- Simple and intuitive CLI interface



• Project Structure

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

---

• Requirements

- **Operating System:** Linux/Unix-based system (tested on Ubuntu)
- **Compiler:** GCC (GNU Compiler Collection)
- **C Standard:** C99 or later.
```

---

• Installation

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

---

• Compilation

### Method 1: Using Makefile (Recommended)

If you have a Makefile:
```bash
make
```

To clean build files:
```bash
make clean
```

### Method 2: Manual Compilation (Without Makefile)

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


### Expected Output:
If compilation is successful, you'll see no error messages and a new executable file named `contact_manager` will be created.

To verify:
```bash
ls -l contact_manager
```

---

## How to Run

### Start the Program:
```bash
./contact_manager
```

### First Run:
On the first run, the program will:
1. Create the directory `~/.local/share/contact_manager/` if it doesn't exist.
2. Show the main menu with a prompt to get started.

---

## Usage Guide

### Main Menu Options:

```
=== Contact Manager ===
1. Add Contact
2. List All Contacts
3. View Contact by ID
4. Update Contact
5. Delete Contact
6. Exit
```

---

• Sample Output

```bash
$ ./contact_manager
No existing contacts file found. Starting fresh.

=== Contact Manager ===
1. Add Contact
2. List All Contacts
3. View Contact by ID
4. Update Contact
5. Delete Contact
6. Exit
Choose an option: 1
First Name: Alice
Last Name: Johnson
Phone Number: 08011112222
Email: alice@mail.com
Contact added successfully! 

=== Contact Manager ===
1. Add Contact
2. List All Contacts
3. View Contact by ID
4. Update Contact
5. Delete Contact
6. Exit
Choose an option: 2

ID    | First Name      | Last Name       | Phone Number    | Email
------------------------------------------------------------------------
1     | Alice           | Johnson         | 08011112222     | alice@mail.com

=== Contact Manager ===
1. Add Contact
2. List All Contacts
3. View Contact by ID
4. Update Contact
5. Delete Contact
6. Exit
Choose an option: 6
Saved 1 contacts to file.
Goodbye!
```

---

• Technical Details

### Data Structure:
- Uses **parallel arrays** (not structs)
- Maximum capacity: **500 contacts**
- Fields stored: ID, First Name, Last Name, Phone Number, Email

### CSV Format:
```csv
id,first_name,last_name,phone_number,email
1,John,Doe,08012345678,john@example.com
2,Mary,Ada,08098765432,mary@site.com
```

### File Storage:
- Location: `~/.local/share/contact_manager/contacts.csv`
- Data is loaded on program start
- Data is saved when selecting "Exit" option

---

## Team Members

- Aliyah Atolagble Salami - harliyah 
- Halimat Yakubu Sadia - halimatyakubu50@gmail.com
- Demo Video: [Link to video]

---

