#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct con
{
    char name [50] ;
    char phone_number[50] ;
    char email [50] ;
    struct con * next;

} contact;

contact* head =NULL;
void add(char * NAME,char * PHONE_NUMBER, char* EMAIL );
void search_with_name(char * NAME);
void display ();

int main()
{
    char name1[50] = "monica";
    char name2[50] = "mariam";
    char name3[50] = "salma";
    char name4[50] = "noha";
    char email1[50] = "mon@gmail.com";
    char email2[50] = "mar@gmail.com";
    char email3[50] = "sal@gmail.com";
    char num1[50]="0125555555";
    char num2[50]="0126666666";
    char num3[50]="0127777777";
    add(name1,num1,email1);
    add(name2,num2,email2);
    add(name3,num3,email3);
    search_with_name(name1);
    search_with_name(name4);
    display ();

    return 0;
}
void add(char * NAME,char *PHONE_NUMBER, char*  EMAIL )
{
    contact* ptr=(contact*)malloc(sizeof(contact));
    strcpy(ptr ->name,NAME);
    strcpy(ptr -> phone_number,PHONE_NUMBER);
    strcpy(ptr ->email,EMAIL);
    ptr ->next =head;
    head =ptr;

}
void search_with_name(char * NAME)
{
    contact* ptr =head;
    while(ptr!=NULL)
    {
        if (strcmp(ptr->name, NAME) == 0)
        {
            printf("phone number is %s \n emai is %s \n \n \n  ",ptr->phone_number,ptr->email);

            return;
        }
        ptr =ptr->next;
    }
    printf("not found \n \n \n");
}
void display ()
{
    contact* ptr =head;
    while(ptr!=NULL)
    {

        printf(" name is %s \n phone number is %s \n emai is %s \n\n\n ",ptr->name,ptr->phone_number,ptr->email);



        ptr =ptr->next;
    }


}

