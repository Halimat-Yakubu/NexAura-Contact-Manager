#ifndef CONTACTS_H
#define CONTACTS_H

extern char first_names[500][50];
extern char last_names[500][50];
extern char phone_numbers[500][20];
extern char emails[500][100];
extern int ids[500];
extern int count;

void add_contact();
int verify_email(char emails[50]);
void get_contact_by_id();
void update_contact_by_id();
void delete_contact_by_id();
void list_contacts();
void save_contact_to_file();
#endif
