#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include "contacts.h"
void loadContacts(){ 
  FILE *file =fopen("contacts.csv", "r");  
  char line[256];  
  if(file == NULL){     
    printf("Unable to open file");	
    return;   
  }   
  while(fgets(line, sizeof(line), file)){       
    if(count >= MAX_CONTACTS) break;
    char *token = strtok(line, ",");	
    if(token == NULL continue;	
    ids[count] = atoi(token); 
    token = strtok(NULL, ",");  
    if(token == NULL) continue;	
    strcpy(first_names[count], token);  
    token = strtok(NULL, ",");   
    if(token == NULL) continue;	
    strcpy(last_names[count], token); 
    token = strtok(NULL, ",");   
    if(token == NULL) continue;	
    strcpy(phone_numbers[count], token); 
    token = strtok(NULL, ",");
    if(token == NULL) continue;	
    token[strcspn(token, "\n")] = '\0';	
    strcpy(emails[count], token);
    count++; 
  }   
  fclose(file);
}
void 
save_contact_to_file(){ 
  FILE *file = fopen("contacts.csv", "w"); 
  if(file == NULL){     
    printf("Unable to open file");  
    return;
  }    
  for(int i = 0; i < count; i++){  
    fprintf(file, "%d,%s,%s,%s,%s\n", ids[i], first_names[i], last_names[i], phone_numbers[i], emails[i]);
  }   
  fclose(file);
}
