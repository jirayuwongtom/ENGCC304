#include <stdio.h>
#include <string.h>

typedef struct{
    int id;
    char title[50];
    char author[50];
    int year;
} Book;

void addBook(Book books[] , int *count){
    printf("--------------------\n");
    printf("Enter Book ID : ");
    scanf("%d", &books[*count].id);
    getchar();
    printf("Enter Title : ");
    scanf(" %[^\n]", books[*count].title);
    printf("Enter Author : ");
    scanf(" %[^\n]", books[*count].author);
    printf("Enter Year : ");
    scanf("%d" , &books[*count].year);
    printf("Book added successfully!\n");
    (*count)++;
    printf("--------------------\n");
}//end function

void searchBook(Book books[] , int count , char title[]){
    int found = 0;
    int i;
    for(i = 0; i < count; i++){
        if(strcmp(books[i].title , title) == 0){
            printf("--------------------\n");
            printf("Book ID : %d\n", books[i].id);
            printf("Title : %s\n", books[i].title);
            printf("Author : %s\n", books[i].author);
            printf("Year : %d\n", books[i].year);
            printf("--------------------\n");
            found = 1;
            break;
        }//end if
    }//end for
    if(found == 0){
        printf("Book not found.\n");
        printf("--------------------\n");
    }//end if
}//end function

void displayBooks(Book books[] , int count){
    printf("--------------------\n");
    for(int i = 0; i < count; i++){
        printf("Book ID : %d\nTitle : %s\nAuthor : %s\nYear : %d\n" , books[i].id , books[i].title , books[i].author , books[i].year);
        printf("--------------------\n");
    }//end for
}//end function

int main(){
    int choice;
    int count = 0;
    Book books[50];
    char searchbook[50];
    while(1){
        printf("1. Add New Book\n");
        printf("2. Search Book\n");
        printf("3. Show All Book\n");
        printf("4. Exit\n");
        printf("--------------------\n");
        printf("Choose an option : ");
        scanf("%d" , &choice);
        getchar();
        if(choice == 1){
            addBook(books , &count);
        }
        else if(choice == 2){
            printf("Enter Title to Search : ");
            scanf(" %[^\n]" , searchbook);
            searchBook(books , count , searchbook);
        } 
        else if(choice == 3){
           displayBooks(books , count);
        } 
        else if(choice == 4){
            break;
        }//end if
    }//end while
    return 0;
}//end main function