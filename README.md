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

# How to Write a Professional README.md

Here's a complete, well-structured README for your Contact Manager project:

---

```markdown
# Contact Manager CLI Application

A simple command-line contact management system written in C that performs CRUD (Create, Read, Update, Delete) operations on contact records with persistent CSV storage.

## Table of Contents
- [Features](#features)
- [Project Structure](#project-structure)
- [Requirements](#requirements)
- [Installation](#installation)
- [Compilation](#compilation)
- [How to Run](#how-to-run)
- [Usage Guide](#usage-guide)
- [Sample Output](#sample-output)
- [Team Members](#team-members)
- [License](#license)

---

## Features

- ✅ Add new contacts with unique IDs
- ✅ List all contacts in tabular format
- ✅ View individual contact details by ID
- ✅ Update existing contact information
- ✅ Delete contacts
- ✅ Persistent storage using CSV files
- ✅ Automatic directory creation for data storage
- ✅ Simple and intuitive CLI interface

---

## Project Structure

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

**Data Storage Location:**
```
~/.local/share/contact_manager/contacts.csv
```

---

## Requirements

- **Operating System:** Linux/Unix-based system (tested on Ubuntu/Debian)
- **Compiler:** GCC (GNU Compiler Collection)
- **C Standard:** C99 or later

### Check if GCC is installed:
```bash
gcc --version
```

If not installed, install with:
```bash
# For Ubuntu/Debian
sudo apt update
sudo apt install build-essential

# For Fedora/RHEL
sudo dnf install gcc

# For Arch Linux
sudo pacman -S gcc
```

---

## Installation

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

## Compilation

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

**Option C - With Warnings Enabled (Recommended for Development):**
```bash
gcc -Wall -Wextra -o contact_manager main.c contacts.c file_io.c
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
1. Create the directory `~/.local/share/contact_manager/` if it doesn't exist
2. Display: `No existing contacts file found. Starting fresh.`
3. Show the main menu

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

### 1️⃣ Add Contact
- Select option `1`
- Enter the requested information:
  - First Name
  - Last Name
  - Phone Number
  - Email
- A unique ID will be automatically generated

**Example:**
```
Choose an option: 1
First Name: John
Last Name: Doe
Phone Number: 08012345678
Email: john@example.com
Contact added successfully! (ID: 1)
```

### 2️⃣ List All Contacts
- Select option `2`
- Displays all contacts in a formatted table

### 3️⃣ View Contact by ID
- Select option `3`
- Enter the contact ID when prompted
- Displays full details of the contact

**Example:**
```
Choose an option: 3
Enter contact ID: 1

Contact Found:
ID: 1
First Name: John
Last Name: Doe
Phone: 08012345678
Email: john@example.com
```

### 4️⃣ Update Contact
- Select option `4`
- Enter the contact ID
- Enter new values for all fields

### 5️⃣ Delete Contact
- Select option `5`
- Enter the contact ID to delete
- Confirmation message will be displayed

### 6️⃣ Exit
- Select option `6`
- All changes are automatically saved to the CSV file
- Program exits gracefully

---

## Sample Output

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
Contact added successfully! (ID: 1)

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

## Troubleshooting

### Problem: "Permission denied" when running
**Solution:**
```bash
chmod +x contact_manager
./contact_manager
```

### Problem: "No such file or directory" compilation error
**Solution:** Make sure all source files are in the same directory:
```bash
ls *.c *.h
```

### Problem: CSV file not being created
**Solution:** Check write permissions:
```bash
ls -ld ~/.local/share/
mkdir -p ~/.local/share/contact_manager
```

### Problem: Program crashes on invalid input
**Current Limitation:** The program expects valid numeric input for menu choices and IDs. Always enter valid numbers.

---

## Technical Details

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

- **[Your Name]** - [Student ID] - [Email]
- **[Team Member 2]** - [Student ID] - [Email]
- **[Team Member 3]** - [Student ID] - [Email]

**Project Repository:** [GitHub Link]

**Demo Video:** [Link to video]

---

## Future Enhancements

- [ ] Search contacts by name or phone number
- [ ] Input validation for email and phone formats
- [ ] Sort contacts by different fields
- [ ] Export to different file formats (JSON, XML)
- [ ] Support for multiple phone numbers per contact
- [ ] Backup and restore functionality

---

## License

This project is created as part of [Course Name] coursework at [University Name].

---

## Acknowledgments

- Course Instructor: [Instructor Name]
- C Standard Library Documentation
- Project Requirements: ATA C1 PRD

---

**Last Updated:** [Date]

**Version:** 1.0
```

---

## **Tips for Your README**

### **What Makes a Good README:**
1. ✅ **Clear section headers** - Easy to scan
2. ✅ **Step-by-step instructions** - Anyone can follow
3. ✅ **Copy-paste commands** - Ready to use
4. ✅ **Sample output** - Shows what to expect
5. ✅ **Troubleshooting section** - Addresses common issues

### **Markdown Formatting Tips:**
- Use `#` for headers (more `#` = smaller header)
- Use ` ```bash ` for code blocks
- Use `**bold**` for emphasis
- Use `- [ ]` for checkboxes
- Use `>` for blockquotes

### **Quick Customization Checklist:**
- [ ] Replace `[Your Name]` with actual names
- [ ] Add your GitHub repository URL
- [ ] Add link to demo video
- [ ] Update university/course information
- [ ] Add actual compilation date
- [ ] Test all commands before submitting

This README is professional, comprehensive, and will impress your instructors! 🚀
