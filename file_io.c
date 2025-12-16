#include <stdio.h>
#include "contacts.h"
#include "file_io.h"
int main(){   
loadContacts(); 
int choice;  
while(1){   
  printf("--- Contact Manager ---\n");  
  printf("1. List all contacts\n2. Show contact by ID\n3. Add contact\n4. Update contact\n5. Delete contact\n6. Save and Exit\n"); 
  printf("Enter choice: ");
  scanf("%d", &choice);  
  if(choice == 1){ 
    list_contacts();  
    continue;
  }     
  else if(choice == 2){    
    get_contact_by_id(); 
    continue;
  }     
  else if(choice == 3){  
    add_contact();  
    continue;
  }     
  else if(choice == 4){  
    update_contact_by_id(); 
    continue;
  }     
  else if(choice == 5){    
    delete_contact_by_id(); 
    continue;
  }    
  else if(choice == 6){    
    save_contact_to_file();  
    break;  
  }    
  else{     
    printf("That is not a valid option");  
    continue;    
  }   
}  
return 0;


