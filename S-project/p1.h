#include <stdio.h>
#include <string.h>
// ============================= 1.Calculater =============================
void cal(int a, int b, char op){
    if(op == '+'){
        printf("%d + %d = %d\n", a, b, a+b);    
    }
    if(op == '-'){
        printf("%d - %d = %d\n", a, b, a-b);    
    }
    if(op == '*'){
        printf("%d * %d = %d\n", a, b, a*b);    
    }
    if(op == '/'){
        if(b == 0){
            printf("Division by zero is not allowed\n");
            return;
        }
        printf("%d / %d = %.2f\n", a, b, (a/b));  
    }
}
// ============================= 2.To Do List =============================
void todo(){
    char task[100][50];
    int id[100];
    int choice;
    int size = 0;
    
    while(1) {
        printf("====================== Todo list system ====================\n");
        printf("1. Add Task\n2. Delete Task\n3. Display Tasks\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 1){
            printf("Enter task: ");
            scanf("%s", task[size]);
            id[size] = size + 1; 
            size++;
            printf("Task added successfully.\n");
        }
        else if(choice == 2){
            if(size == 0){
                printf("No tasks to delete.\n");
                continue;
            }
            int deleteId;
            printf("Enter task ID to delete: ");
            scanf("%d", &deleteId);
            int found = 0;
            for(int i=0; i<size; i++){
                if(id[i] == deleteId){
                    found = 1;
                    for(int j=i; j<size-1; j++){
                        id[j] = id[j + 1];
                        strcpy(task[j], task[j + 1]);
                    }
                    size--;
                    printf("Task deleted successfully.\n");
                    break;
                }
            }
            if(!found){
                printf("Task with ID %d not found.\n", deleteId);
            }
        }
        else if(choice == 3){
            if(size == 0){
                printf("No tasks to display.\n");
                continue;
            }
            printf("\nAll tasks:\n");
            for(int i=0; i<size; i++){
                printf("%d. %s\n", id[i], task[i]);
            }
            printf("\n");
        }
        else if(choice == 4){
            return;
        }
        else{
            printf("Invalid choice\n");
        }
    }
}
// ============================= 5.Library Management System =============================
void library(){
    char books[100][50];
    int id[100];
    int choice;
    int size = 0;
    
    while(1) {
        printf("====================== Library Management System ====================\n");
        printf("1. Add Book\n2. Delete Book\n3. Display Books\n4. Search\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 1){
            printf("Enter book name: ");
            scanf("%s", books[size]);
            id[size] = size + 1; 
            size++;
            printf("Book added successfully.\n");
        }
        else if(choice == 2){
            if(size == 0){
                printf("No books to delete.\n");
                continue;
            }
            int deleteId;
            printf("Enter book ID to delete: ");
            scanf("%d", &deleteId);
            int found = 0;
            for(int i=0; i<size; i++){
                if(id[i] == deleteId){
                    found = 1;
                    for(int j=i; j<size-1; j++){
                        id[j] = id[j + 1];
                        strcpy(books[j], books[j + 1]);
                    }
                    size--;
                    printf("Book deleted successfully.\n");
                    break;
                }
            }
            if(!found){
                printf("Book with ID %d not found.\n", deleteId);
            }
        }
        else if(choice == 3){
            if(size == 0){
                printf("No books to display.\n");
                continue;
            }
            printf("\nAll books:\n");
            for(int i=0; i<size; i++){
                printf("%d. %s\n", id[i], books[i]);
            }
            printf("\n");
        }
        else if(choice == 4){
            if(size == 0){
                printf("No books to search.\n");
                continue;
            }
            char search[50];
            printf("Enter book name to search: ");
            scanf("%s", search);
            int found = 0;
            for(int i=0; i<size; i++){
                if(strcmp(books[i], search) == 0){
                    found = 1;
                    printf("Book found at ID %d\n", id[i]);
                    break;
                }
            }
            if(!found){
                printf("Book not found.\n");
            }
        }
        else if(choice == 5){
            return;
        }
        else{
            printf("Invalid choice\n");
        }
    }
} 

// ============================= 6.Banking Management Simulation =============================
  void money(){
    int balance = 0;
    int choice;
    while(1) {
        printf("====================== Banking Management System ====================\n");
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        
        if(choice == 1){
            int amount;
            printf("Enter amount to deposit: ");
            scanf("%d", &amount);
            balance += amount;
            printf("Amount deposited successfully.\n");
        }
        else if(choice == 2){
            int amount;
            printf("Enter amount to withdraw: ");
            scanf("%d", &amount);
            if(amount > balance){
                printf("Insufficient balance.\n");
                continue;
            }
            balance -= amount;
            printf("Amount withdrawn successfully.\n");
        }
        else if(choice == 3){
            printf("Your balance is %d\n", balance);
        }
        else if(choice == 4){
            return;
        }
        else{
            printf("Invalid choice\n");
        }
    }
}