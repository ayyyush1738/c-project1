#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


typedef struct UserData
{
    char Name[30];
    char email[50];
    char password[50];
    long int contact[10];
}UD; 

void main_menu();
void login();
void signup();


typedef struct item
{ 
        int Sno;
        char name[40];
        int quantity, price;
}i;

void display()
{
         printf("\n\t\t\t\t\t\t\t\t\t*******************************************");
         printf("\n\t\t\t\t\t\t\t\t\t*        1. Add new item                  *");
         printf("\n\t\t\t\t\t\t\t\t\t*        2. Delete pre existing records   *");
         printf("\n\t\t\t\t\t\t\t\t\t*        3. Display items available       *");
         printf("\n\t\t\t\t\t\t\t\t\t*        4. Modify records                *");
         printf("\n\t\t\t\t\t\t\t\t\t*        5. Main menu                     *");
         printf("\n\t\t\t\t\t\t\t\t\t*******************************************\n");
}

int cases_e(int);
int cases_c(int);
int cases_g(int);
int cases_p(int);
int cases_h(int);

void tasksE()
{
    printf("\n\t\t\t\t\t\t\t\t\t\t###### Electronics ######");
    display();
    int option;
         printf("\n\nSelect the task which to be performed on Electronics department : ");
         scanf("%d",&option);
         cases_e(option);
}

void tasksC()
{
    printf("\n\t\t\t\t\t\t\t\t\t\t  ###### Clothing ######");
    display();
    int option;
         printf("\n\nSelect the task which to be performed on Clothings department : ");
         scanf("%d",&option);
         cases_c(option);
}

void tasksG()
{
    printf("\n\t\t\t\t\t\t\t\t\t\t  ###### Groceries ######");
    display();
    int option;
         printf("\n\nSelect the task which to be performed on Groceries department : ");
         scanf("%d",&option);
         cases_g(option);
}

void tasksP()
{
    printf("\n\t\t\t\t\t\t\t\t\t\t  ###### Packed food and edibles ######");
    display();
    int option;
         printf("\n\nSelect the task which to be performed on Packed food and Edibles department : ");
         scanf("%d",&option);
         cases_p(option);
}

void tasksH()
{
    printf("\n\t\t\t\t\t\t\t\t\t\t  ###### Household items ######");
    display();
    int option;
         printf("\n\nSelect the task which to be performed on Household items department : ");
         scanf("%d",&option);
         cases_h(option);
}


void task_e1();
void task_e3();
void task_e2();
void task_e4();
void task_e5();

void task_c1();
void task_c3();
void task_c2();
void task_c4();
void task_c5();

void task_g1();
void task_g3();
void task_g2();
void task_g4();
void task_g5();

void task_p1();
void task_p3();
void task_p2();
void task_p4();
void task_p5();

void task_h1();
void task_h3();
void task_h2();
void task_h4();
void task_h5();

void loop()
{
     login();
}

int main()
{
    system ("color 0a");
    int option;
    
    
    printf("\nPlease choose your operation");
    printf("\n\t\t\t\t\t\t\t\t\t*****************************************");
    printf("\n\t\t\t\t\t\t\t\t\t*             1. Signup                 *");
    printf("\n\t\t\t\t\t\t\t\t\t*             2. Login                  *");
    printf("\n\t\t\t\t\t\t\t\t\t*             3. Exit                   *");
    printf("\n\t\t\t\t\t\t\t\t\t*****************************************\n");

    printf("\n\t\t\t\t\t\tYour choice :");

    scanf("%d",&option);
    
    
    switch(option)
    {
        case 1:
               signup();
               break;

        case 2:
               login();
               break;
               
        case 3:
               exit(0);
    }


     

     return 0;
}

void main_menu()
{ 
    
    int option;

    printf("\n\t\t\t\t\t\t\t\t###########  WELCOME TO ROSTERBOOK ###########\n\n");
    
     printf("\n\t\t\t\t\t\t\t\t\t     ########### ITEM MENU ###########");
     printf("\n\t\t\t\t\t\t\t\t\t*****************************************");
     printf("\n\t\t\t\t\t\t\t\t\t*             1. Electronics            *");
     printf("\n\t\t\t\t\t\t\t\t\t*             2. Clothing               *");
     printf("\n\t\t\t\t\t\t\t\t\t*             3. Groceries              *");
     printf("\n\t\t\t\t\t\t\t\t\t*             4. Packed food and Edibles*");
     printf("\n\t\t\t\t\t\t\t\t\t*             5. Household items        *");
     printf("\n\t\t\t\t\t\t\t\t\t*****************************************\n");

     printf("\n\nSelect a department from the main menu by pressing the assigned numbers :");

     scanf("%d",&option);

     switch(option)
     {
         case 1:
         system("cls");
         tasksE();
         break;

         case 2:
         system("cls");
         tasksC();
         break;

         case 3:
         system("cls");
         tasksG();
         break;

         case 4:
         system("cls");
         tasksP();
         break;
         
         case 5:
         system("cls");
         tasksH();
         break;
     }
}

void signup()
{
    FILE *fp;
    UD user;
             printf("\n\n\t\t\t\t\t\t\t\t\t--------Create an account--------");
             fp= fopen("data.txt", "w+");
             printf("\n\n\t\t\t\t\t\tEnter your full name:\t");
             fflush(stdin);
             gets(user.Name);
             
             printf("\n");
             printf("\n\t\t\t\t\t\tEnter your email:\t");
             scanf("%[^\n]s",user.email);
             fputs(user.email, fp);
             printf("\n");
             fputs(" ",fp);
             printf("\n\t\t\t\t\t\tpassword:\t");

             fflush(stdin);
             scanf("%[^\n]",user.password);
             fputs(user.password, fp);
             printf("\n\t\t\t\t\t\tContact number:\t");
             scanf("%d",&user.contact);
             
             if( fp == NULL )
             {
                 printf("\n\nError\n\n");
                 exit(1);
             }

             
             fclose(fp);

             printf("\n\t\t\t\t\t\t\t\t\t-------Account created successfully-------\n\n");

             
             login();
}

void login()
{
    system("cls");
    char email[30],password[50];
    printf("\n\t\t------------------------------------------------------------------Login with your account---------------------------------------------------------------------\n");
    UD login;
    FILE *fp;
        fp=fopen("data.txt", "r");
        char em[30],pss[50];
        char choice;
        fscanf(fp,"%s%s",login.email,login.password);
        printf("\n\t\t\t\tEnter email :");
        fflush(stdin);
        gets(em);
        printf("\n\t\t\t\tEnter password :");
        gets(pss);
        if(strcmp(em,login.email)==0 && strcmp(pss,login.password)==0)
        {
            
            system("cls");
            printf("\n\t\t\t\t\t\t\t\t\t\t    ACCOUNT VERIFIED\n\n");
            main_menu();
        }
        else
        {
            printf("\n\t\t\t\t\t\t\t\t\t\t Wrong email id or password\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\tTry again?\n Press y for YES and n for NO?\n y/n?: ");
            scanf("%c",&choice);
            if(choice=='y')
            {
                loop();
            }
            else if(choice=='n')
            {
                exit(1);
            }
        }
        fclose(fp);
}

void task_e1()
{
    
    printf("\n\t\t\t\t\t\t    Add records :");
    FILE *fp;
    i item;
    char n, choice;
    fp=fopen("itemsE.txt","ab+");
    
    
    if(fp==NULL)
     {
         printf("\n\t\t\t\t\t\t\t The record does not exist\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\n\t\t\t\t\t\t\t\t\t\tPress 'y' to agree and 'n' to back to main menu. y/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_e1();
         }
         else if(choice == 'n')
         {
             main_menu();
         }
     }
    fflush(stdin);
    
    
        printf("\nEnter the code of the product :- ");
        fflush(stdin);
        scanf("%d",&item.Sno);

        printf("Enter the name of the product :- ");
        fflush(stdin);
        gets(item.name);
        printf("Enter the quantity of the product :- ");
        fflush(stdin);
        scanf("%d",&item.quantity);
        
        printf("Enter the price of the product :- ");
        scanf("%d",&item.price);
        
        fwrite(&item,sizeof(i),1,fp);system("cls");
        printf("\n\t\t\t\t\t\t\t\t          Record created successfully!!\n\n");
    
    
    fclose(fp);
    char c;
    printf("\n\t\t\t\t\t\t Press 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.");
    printf("\n\t\t\t\t\t\t                                  Press any other key to exit the program.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
    task_e3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksE();
    }
    else{
        exit(1);
    }
}

void task_e2()
{ 
   char name[40];
   i item;
   char choice;
   char filePath[] = "itemsE.txt";

   FILE *fp = fopen(filePath ,"rb" ), *fp2;
   printf("\n\nEnter name of the product which you want to delete :-");
   fflush(stdin);
   gets(name);
   if(fp == NULL)
   {
         printf("\n\t\t\t\t\t\t\t The record does not exist\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\n\t\t\t\t\t\t\t\t\t\tPress 'y' to agree and 'n' to back to main menu. y/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_e1();
         }
         else if(choice == 'n')
         {
             main_menu();
         }
   }
   fp2 = fopen("replicaE.txt", "ab");

   while(fread(&item, sizeof(i), 1, fp))
   {  
      if(strcmp(item.name, name)){
         fwrite(&item, sizeof(i), 1, fp2);
      }
      else{
         printf("\n\t\t\t\t\t\t\t\t\t\t %s is deleted from records\n", name);
      }
   }

   fclose(fp);
   fclose(fp2);

   remove(filePath);
   rename("replicaE.txt", filePath);
   
   
    char c;
    printf("\n\n\t\t\t\t\t\tPress 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
        system("cls");
        task_e3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksE();
    }

}

void task_e3()
{
    
    char choice;
    FILE *fq;
    i item;
    printf("\n\t\t\t\t\t\t\t\t\t\t         ===List of Records===\n\n");
    printf("\t\t\t\t\t\t\t\t\t%-10s%-20s%-10s %s\n","CODE","NAME","QUANTITY","PRICE");
     fq = fopen("itemsE.txt", "rb+");
     
         fflush(stdin);
     if(fq == NULL)
     {
         printf("\n\t\t\t\t\t\t\t\t\tThe user has not created the record.\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\ny/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_e1();
         }
         else if(choice == 'n')
         {
             exit(1);
         }
     }
     fflush(stdin);
     while(fread(&item,sizeof(i),1,fq)==1)
     {

         printf("\n\t\t\t\t\t\t\t\t\t%-10d%-20s%-10d %d",item.Sno,item.name,item.quantity,item.price);
     }
     fflush(stdin);
     fclose(fq);


    char c;
    printf("\n\n\t\t\t\t\t\t\t Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
    task_e3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksE();
    }
}

void task_e4()
{
    
    printf("Modify Record\n");
    char name[40];
    int isFound = 0;
    printf("Enter name of the product to Modify: ");fflush(stdin);
    gets(name);
    FILE *fp;
    i item;
    fp = fopen("itemsE.txt","rb+");
    while(fread(&item, sizeof(i),1,fp) == 1){
        if(strcmp(name, item.name) == 0){
            printf("\nEnter new data\n");
            fflush(stdin);
            printf("code :- ");
            scanf("%d",&item.Sno);
            printf("Name :- ");
            fflush(stdin);
            gets(item.name);
            printf("Quantity: ");
            scanf("%d",&item.quantity);
            printf("Price: ");
            scanf("%d",&item.price);
            
            fseek(fp,-sizeof(i), SEEK_CUR);
            fwrite(&item,sizeof(i), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("No Record Found");
    }
    fclose(fp);

    char c;
    printf("\n\n\t\t\t\t\t\t Press 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
        task_e3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksE();
    }
}

void task_e5()
{
    main_menu();
}

void task_c1()
{
    
    printf("\n\t\t\t\t\t\t    Add records :");
    FILE *fp;
    i item;
    char n, choice;
    fp=fopen("itemsC.txt","ab+");
    
    
    if(fp==NULL)
     {
         printf("\n\t\t\t\t\t\t\t The record does not exist\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\n\t\t\t\t\t\t\t\t\t\tPress 'y' to agree and 'n' to back to main menu. y/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_c1();
         }
         else if(choice == 'n')
         {
             main_menu();
         }
     }
    fflush(stdin);
    
    
        printf("\nEnter the code of the product :- ");
        fflush(stdin);
        scanf("%d",&item.Sno);

        printf("Enter the name of the product :- ");
        fflush(stdin);
        gets(item.name);
        printf("Enter the quantity of the product :- ");
        fflush(stdin);
        scanf("%d",&item.quantity);
        
        printf("Enter the price of the product :- ");
        scanf("%d",&item.price);
        
        fwrite(&item,sizeof(i),1,fp);system("cls");
        printf("\n\t\t\t\t\t\t\t\t          Record created successfully!!\n\n");
    
    
    fclose(fp);
    char c;
    printf("\n\t\t\t\t\t\t Press 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.");
    printf("\n\t\t\t\t\t\t                                  Press any other key to exit the program.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
    task_c3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksC();
    }
    else{
        exit(1);
    }
}

void task_c2()
{ 
   char name[40];
   i item;
   char choice;
   char filePath[] = "itemsC.txt";

   FILE *fp = fopen(filePath ,"rb" ), *fp2;
   printf("\n\nEnter name of the product which you want to delete :-");
   fflush(stdin);
   gets(name);
   if(fp == NULL)
   {
         printf("\n\t\t\t\t\t\t\t The record does not exist\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\n\t\t\t\t\t\t\t\t\t\tPress 'y' to agree and 'n' to back to main menu. y/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_c1();
         }
         else if(choice == 'n')
         {
             main_menu();
         }
   }
   fp2 = fopen("replicaC.txt", "ab");

   while(fread(&item, sizeof(i), 1, fp))
   {  
      if(strcmp(item.name, name)){
         fwrite(&item, sizeof(i), 1, fp2);
      }
      else{
         printf("\n\t\t\t\t\t\t\t\t\t\t %s is deleted from records\n", name);
      }
   }

   fclose(fp);
   fclose(fp2);

   remove(filePath);
   rename("replicaC.txt", filePath);
   
   
    char c;
    printf("\n\n\t\t\t\t\t\tPress 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
        system("cls");
        task_c3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksC();
    }

}

void task_c3()
{
    
    char choice;
    FILE *fq;
    i item;
    printf("\n\t\t\t\t\t\t\t\t\t\t         ===List of Records===\n\n");
    printf("\t\t\t\t\t\t\t\t\t%-10s%-20s%-10s %s\n","CODE","NAME","QUANTITY","PRICE");
     fq = fopen("itemsC.txt", "rb+");
     
         fflush(stdin);
     if(fq == NULL)
     {
         printf("\n\t\t\t\t\t\t\t\t\tThe user has not created the record.\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\ny/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_c1();
         }
         else if(choice == 'n')
         {
             exit(1);
         }
     }
     fflush(stdin);
     while(fread(&item,sizeof(i),1,fq)==1)
     {

         printf("\n\t\t\t\t\t\t\t\t\t%-10d%-20s%-10d %d",item.Sno,item.name,item.quantity,item.price);
     }
     fflush(stdin);
     fclose(fq);


    char c;
    printf("\n\n\t\t\t\t\t\t\t Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
    task_c3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksC();
    }
}

void task_c4()
{
    
    printf("Modify Record\n");
    char name[40];
    int isFound = 0;
    printf("Enter name of the product to Modify: ");fflush(stdin);
    gets(name);
    FILE *fp;
    i item;
    fp = fopen("itemsE.txt","rb+");
    while(fread(&item, sizeof(i),1,fp) == 1){
        if(strcmp(name, item.name) == 0){
            printf("\nEnter new data\n");
            fflush(stdin);
            printf("code :- ");
            scanf("%d",&item.Sno);
            printf("Name :- ");
            fflush(stdin);
            gets(item.name);
            printf("Quantity: ");
            scanf("%d",&item.quantity);
            printf("Price: ");
            scanf("%d",&item.price);
            
            fseek(fp,-sizeof(i), SEEK_CUR);
            fwrite(&item,sizeof(i), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("No Record Found");
    }
    fclose(fp);

    char c;
    printf("\n\n\t\t\t\t\t\t Press 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
        task_c3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksC();
    }
}



void task_c5()
{
    main_menu();
}

void task_g1()
{
    
    printf("\n\t\t\t\t\t\t    Add records :");
    FILE *fp;
    i item;
    char n, choice;
    fp=fopen("itemsC.txt","ab+");
    
    
    if(fp==NULL)
     {
         printf("\n\t\t\t\t\t\t\t The record does not exist\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\n\t\t\t\t\t\t\t\t\t\tPress 'y' to agree and 'n' to back to main menu. y/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_g1();
         }
         else if(choice == 'n')
         {
             main_menu();
         }
     }
    fflush(stdin);
    
    
        printf("\nEnter the code of the product :- ");
        fflush(stdin);
        scanf("%d",&item.Sno);

        printf("Enter the name of the product :- ");
        fflush(stdin);
        gets(item.name);
        printf("Enter the quantity of the product :- ");
        fflush(stdin);
        scanf("%d",&item.quantity);
        
        printf("Enter the price of the product :- ");
        scanf("%d",&item.price);
        
        fwrite(&item,sizeof(i),1,fp);system("cls");
        printf("\n\t\t\t\t\t\t\t\t          Record created successfully!!\n\n");
    
    
    fclose(fp);
    char c;
    printf("\n\t\t\t\t\t\t Press 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.");
    printf("\n\t\t\t\t\t\t                                  Press any other key to exit the program.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
    task_g3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksG();
    }
    else{
        exit(1);
    }
}

void task_g2()
{ 
   char name[40];
   i item;
   char choice;
   char filePath[] = "itemsC.txt";

   FILE *fp = fopen(filePath ,"rb" ), *fp2;
   printf("\n\nEnter name of the product which you want to delete :-");
   fflush(stdin);
   gets(name);
   if(fp == NULL)
   {
         printf("\n\t\t\t\t\t\t\t The record does not exist\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\n\t\t\t\t\t\t\t\t\t\tPress 'y' to agree and 'n' to back to main menu. y/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_g1();
         }
         else if(choice == 'n')
         {
             main_menu();
         }
   }
   fp2 = fopen("replicaC.txt", "ab");

   while(fread(&item, sizeof(i), 1, fp))
   {  
      if(strcmp(item.name, name)){
         fwrite(&item, sizeof(i), 1, fp2);
      }
      else{
         printf("\n\t\t\t\t\t\t\t\t\t\t %s is deleted from records\n", name);
      }
   }

   fclose(fp);
   fclose(fp2);

   remove(filePath);
   rename("replicaC.txt", filePath);
   
   
    char c;
    printf("\n\n\t\t\t\t\t\tPress 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
        system("cls");
        task_g3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksG();
    }

}

void task_g3()
{
    
    char choice;
    FILE *fq;
    i item;
    printf("\n\t\t\t\t\t\t\t\t\t\t         ===List of Records===\n\n");
    printf("\t\t\t\t\t\t\t\t\t%-10s%-20s%-10s %s\n","CODE","NAME","QUANTITY","PRICE");
     fq = fopen("itemsC.txt", "rb+");
     
         fflush(stdin);
     if(fq == NULL)
     {
         printf("\n\t\t\t\t\t\t\t\t\tThe user has not created the record.\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\ny/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_g1();
         }
         else if(choice == 'n')
         {
             exit(1);
         }
     }
     fflush(stdin);
     while(fread(&item,sizeof(i),1,fq)==1)
     {

         printf("\n\t\t\t\t\t\t\t\t\t%-10d%-20s%-10d %d",item.Sno,item.name,item.quantity,item.price);
     }
     fflush(stdin);
     fclose(fq);


    char c;
    printf("\n\n\t\t\t\t\t\t\t Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
    task_g3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksG();
    }
}

void task_g4()
{
    
    printf("Modify Record\n");
    char name[40];
    int isFound = 0;
    printf("Enter name of the product to Modify: ");fflush(stdin);
    gets(name);
    FILE *fp;
    i item;
    fp = fopen("itemsE.txt","rb+");
    while(fread(&item, sizeof(i),1,fp) == 1){
        if(strcmp(name, item.name) == 0){
            printf("\nEnter new data\n");
            fflush(stdin);
            printf("code :- ");
            scanf("%d",&item.Sno);
            printf("Name :- ");
            fflush(stdin);
            gets(item.name);
            printf("Quantity: ");
            scanf("%d",&item.quantity);
            printf("Price: ");
            scanf("%d",&item.price);
            
            fseek(fp,-sizeof(i), SEEK_CUR);
            fwrite(&item,sizeof(i), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("No Record Found");
    }
    fclose(fp);

    char c;
    printf("\n\n\t\t\t\t\t\t Press 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
        task_g3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksG();
    }
}



void task_g5()
{
    main_menu();
}

void task_p1()
{
    
    printf("\n\t\t\t\t\t\t    Add records :");
    FILE *fp;
    i item;
    char n, choice;
    fp=fopen("itemsE.txt","ab+");
    
    
    if(fp==NULL)
     {
         printf("\n\t\t\t\t\t\t\t The record does not exist\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\n\t\t\t\t\t\t\t\t\t\tPress 'y' to agree and 'n' to back to main menu. y/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_p1();
         }
         else if(choice == 'n')
         {
             main_menu();
         }
     }
    fflush(stdin);
    
    
        printf("\nEnter the code of the product :- ");
        fflush(stdin);
        scanf("%d",&item.Sno);

        printf("Enter the name of the product :- ");
        fflush(stdin);
        gets(item.name);
        printf("Enter the quantity of the product :- ");
        fflush(stdin);
        scanf("%d",&item.quantity);
        
        printf("Enter the price of the product :- ");
        scanf("%d",&item.price);
        
        fwrite(&item,sizeof(i),1,fp);system("cls");
        printf("\n\t\t\t\t\t\t\t\t          Record created successfully!!\n\n");
    
    
    fclose(fp);
    char c;
    printf("\n\t\t\t\t\t\t Press 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.");
    printf("\n\t\t\t\t\t\t                                  Press any other key to exit the program.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
    task_p3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksP();
    }
    else{
        exit(1);
    }
}

void task_p2()
{ 
   char name[40];
   i item;
   char choice;
   char filePath[] = "itemsE.txt";

   FILE *fp = fopen(filePath ,"rb" ), *fp2;
   printf("\n\nEnter name of the product which you want to delete :-");
   fflush(stdin);
   gets(name);
   if(fp == NULL)
   {
         printf("\n\t\t\t\t\t\t\t The record does not exist\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\n\t\t\t\t\t\t\t\t\t\tPress 'y' to agree and 'n' to back to main menu. y/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_p1();
         }
         else if(choice == 'n')
         {
             main_menu();
         }
   }
   fp2 = fopen("replicaE.txt", "ab");

   while(fread(&item, sizeof(i), 1, fp))
   {  
      if(strcmp(item.name, name)){
         fwrite(&item, sizeof(i), 1, fp2);
      }
      else{
         printf("\n\t\t\t\t\t\t\t\t\t\t %s is deleted from records\n", name);
      }
   }

   fclose(fp);
   fclose(fp2);

   remove(filePath);
   rename("replicaE.txt", filePath);
   
   
    char c;
    printf("\n\n\t\t\t\t\t\tPress 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
        system("cls");
        task_p3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksP();
    }

}

void task_p3()
{
    
    char choice;
    FILE *fq;
    i item;
    printf("\n\t\t\t\t\t\t\t\t\t\t         ===List of Records===\n\n");
    printf("\t\t\t\t\t\t\t\t\t%-10s%-20s%-10s %s\n","CODE","NAME","QUANTITY","PRICE");
     fq = fopen("itemsE.txt", "rb+");
     
         fflush(stdin);
     if(fq == NULL)
     {
         printf("\n\t\t\t\t\t\t\t\t\tThe user has not created the record.\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\ny/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_p1();
         }
         else if(choice == 'n')
         {
             exit(1);
         }
     }
     fflush(stdin);
     while(fread(&item,sizeof(i),1,fq)==1)
     {

         printf("\n\t\t\t\t\t\t\t\t\t%-10d%-20s%-10d %d",item.Sno,item.name,item.quantity,item.price);
     }
     fflush(stdin);
     fclose(fq);


    char c;
    printf("\n\n\t\t\t\t\t\t\t Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
    task_p3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksP();
    }
}

void task_p4()
{
    
    printf("Modify Record\n");
    char name[40];
    int isFound = 0;
    printf("Enter name of the product to Modify: ");fflush(stdin);
    gets(name);
    FILE *fp;
    i item;
    fp = fopen("itemsE.txt","rb+");
    while(fread(&item, sizeof(i),1,fp) == 1){
        if(strcmp(name, item.name) == 0){
            printf("\nEnter new data\n");
            fflush(stdin);
            printf("code :- ");
            scanf("%d",&item.Sno);
            printf("Name :- ");
            fflush(stdin);
            gets(item.name);
            printf("Quantity: ");
            scanf("%d",&item.quantity);
            printf("Price: ");
            scanf("%d",&item.price);
            
            fseek(fp,-sizeof(i), SEEK_CUR);
            fwrite(&item,sizeof(i), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("No Record Found");
    }
    fclose(fp);

    char c;
    printf("\n\n\t\t\t\t\t\t Press 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
        task_p3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksP();
    }
}

void task_p5()
{
    main_menu();
}


void task_h1()
{
    
    printf("\n\t\t\t\t\t\t    Add records :");
    FILE *fp;
    i item;
    char n, choice;
    fp=fopen("itemsE.txt","ab+");
    
    
    if(fp==NULL)
     {
         printf("\n\t\t\t\t\t\t\t The record does not exist\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\n\t\t\t\t\t\t\t\t\t\tPress 'y' to agree and 'n' to back to main menu. y/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_h1();
         }
         else if(choice == 'n')
         {
             main_menu();
         }
     }
    fflush(stdin);
    
    
        printf("\nEnter the code of the product :- ");
        fflush(stdin);
        scanf("%d",&item.Sno);

        printf("Enter the name of the product :- ");
        fflush(stdin);
        gets(item.name);
        printf("Enter the quantity of the product :- ");
        fflush(stdin);
        scanf("%d",&item.quantity);
        
        printf("Enter the price of the product :- ");
        scanf("%d",&item.price);
        
        fwrite(&item,sizeof(i),1,fp);system("cls");
        printf("\n\t\t\t\t\t\t\t\t          Record created successfully!!\n\n");
    
    
    fclose(fp);
    char c;
    printf("\n\t\t\t\t\t\t Press 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.");
    printf("\n\t\t\t\t\t\t                                  Press any other key to exit the program.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
    task_h3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksH();
    }
    else{
        exit(1);
    }
}

void task_h2()
{ 
   char name[40];
   i item;
   char choice;
   char filePath[] = "itemsE.txt";

   FILE *fp = fopen(filePath ,"rb" ), *fp2;
   printf("\n\nEnter name of the product which you want to delete :-");
   fflush(stdin);
   gets(name);
   if(fp == NULL)
   {
         printf("\n\t\t\t\t\t\t\t The record does not exist\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\n\t\t\t\t\t\t\t\t\t\tPress 'y' to agree and 'n' to back to main menu. y/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_h1();
         }
         else if(choice == 'n')
         {
             main_menu();
         }
   }
   fp2 = fopen("replicaE.txt", "ab");

   while(fread(&item, sizeof(i), 1, fp))
   {  
      if(strcmp(item.name, name)){
         fwrite(&item, sizeof(i), 1, fp2);
      }
      else{
         printf("\n\t\t\t\t\t\t\t\t\t\t %s is deleted from records\n", name);
      }
   }

   fclose(fp);
   fclose(fp2);

   remove(filePath);
   rename("replicaE.txt", filePath);
   
   
    char c;
    printf("\n\n\t\t\t\t\t\tPress 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
        system("cls");
        task_h3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksH();
    }

}

void task_h3()
{
    
    char choice;
    FILE *fq;
    i item;
    printf("\n\t\t\t\t\t\t\t\t\t\t         ===List of Records===\n\n");
    printf("\t\t\t\t\t\t\t\t\t%-10s%-20s%-10s %s\n","CODE","NAME","QUANTITY","PRICE");
     fq = fopen("itemsE.txt", "rb+");
     
         fflush(stdin);
     if(fq == NULL)
     {
         printf("\n\t\t\t\t\t\t\t\t\tThe user has not created the record.\n");
         printf("\t\t\t\t\t\t\t\t\t\t      Add records?\ny/n? :");fflush(stdin);
         scanf("%c",&choice);
         if(choice == 'y')
         {
             task_h1();
         }
         else if(choice == 'n')
         {
             exit(1);
         }
     }
     fflush(stdin);
     while(fread(&item,sizeof(i),1,fq)==1)
     {

         printf("\n\t\t\t\t\t\t\t\t\t%-10d%-20s%-10d %d",item.Sno,item.name,item.quantity,item.price);
     }
     fflush(stdin);
     fclose(fq);


    char c;
    printf("\n\n\t\t\t\t\t\t\t Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
    task_h3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksH();
    }
}

void task_h4()
{
    
    printf("Modify Record\n");
    char name[40];
    int isFound = 0;
    printf("Enter name of the product to Modify: ");fflush(stdin);
    gets(name);
    FILE *fp;
    i item;
    fp = fopen("itemsE.txt","rb+");
    while(fread(&item, sizeof(i),1,fp) == 1){
        if(strcmp(name, item.name) == 0){
            printf("\nEnter new data\n");
            fflush(stdin);
            printf("code :- ");
            scanf("%d",&item.Sno);
            printf("Name :- ");
            fflush(stdin);
            gets(item.name);
            printf("Quantity: ");
            scanf("%d",&item.quantity);
            printf("Price: ");
            scanf("%d",&item.price);
            
            fseek(fp,-sizeof(i), SEEK_CUR);
            fwrite(&item,sizeof(i), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound){
        printf("No Record Found");
    }
    fclose(fp);

    char c;
    printf("\n\n\t\t\t\t\t\t Press 'd' to display the record. || Press 'm' to go back to main menu. || Press 't' to go back to task menu.\nYour choice :-");
    fflush(stdin);
    scanf("%c",&c);
    if(c== 'd')
    {
        task_h3();
    }
    else if (c == 'm')
    {
        main_menu();
    }
    else if(c == 't')
    {
        tasksH();
    }
}

void task_h5()
{
    main_menu();
}

int cases_e(int select)
{
     switch(select)
     {
         case 1:
         task_e1();
         break;

         case 2:
         task_e2();
         break;

         case 3:
         task_e3();
         break;

         case 4:
         task_e4();
         break;

         case 5:
         task_e5();
         break;
         
     }
}

int cases_c(int select)
{
     switch(select)
     {
         case 1:
         task_c1();
         break;

         case 2:
         task_c2();
         break;

         case 3:
         task_c3();
         break;

         case 4:
         task_c4();
         break;

         case 5:
         task_c5();
         break;
         
     }
}

int cases_g(int select)
{
     switch(select)
     {
         case 1:
         task_g1();
         break;

         case 2:
         task_g2();
         break;

         case 3:
         task_g3();
         break;

         case 4:
         task_g4();
         break;

         case 5:
         task_g5();
         break;
         
     }
}

int cases_p(int select)
{
     switch(select)
     {
         case 1:
         task_p1();
         break;

         case 2:
         task_p2();
         break;

         case 3:
         task_p3();
         break;

         case 4:
         task_p4();
         break;

         case 5:
         task_p5();
         break;
         
     }
}

int cases_h(int select)
{
     switch(select)
     {
         case 1:
         task_h1();
         break;

         case 2:
         task_h2();
         break;

         case 3:
         task_h3();
         break;

         case 4:
         task_h4();
         break;

         case 5:
         task_h5();
         break;
         
     }
}