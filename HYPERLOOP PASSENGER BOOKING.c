// HYPERLOOP PASSENGER BOOKING 


#include<stdio.h>
#include<string.h>
 
    char passenger_name_1[20];            // declaring passenger_name_1
    char passenger_name_2[20];            // declaring passenger_name_1
    char passenger_name_3[20];            // declaring passenger_name_3
    char passenger_name_4[20];
    char dest_1[20];
    char dest_2[20];
    char dest_3[20];
    char dest_4[20];
    int count;
    int age_1,age_2,age_3,age_4;        // declaring age 
    
   
 /* 
   
   function declaration
   
   */
    
void INIT();                       
void ADD_PASSENGER();            
void START_POD();
void PRINT_Q();                    




void func()
{
    int ch,s;
        do
      {
        printf("\t\t\t_______Hyperloop Passenger Booking_______\n");
    printf("\t\t\t1.INIT\n");
    printf("\t\t\t2.ADD PASSENGER\n");
    printf("\t\t\t3.START POD\n");
    printf("\t\t\t4.PRINT Q\n");
    printf("Enter the choice:\n");
    scanf("%d",&ch);
    switch(ch)
        {
        case 1: INIT();
              break;
      case 2: ADD_PASSENGER();
              break;
      case 3: START_POD();
              break;
          case 4: PRINT_Q();
                  break;
          default:
         printf("Enter the valid choice!\n");
         }
          printf("Press 1 to continue???\n");
          scanf("%d",&s);
    }while(s==1);
}

/*
      void INIT()   INIT Command  - Initializes the system with
          a. Number of interconnecting routes (N) and the Starting station.
          b. Next N lines denotes connection between two interconnections.    */
          
   void INIT()       
  {
    printf("INIT 7 A\n");
    printf("A B\n");
    printf("A C\n");
    printf("B D\n");
    printf("B C\n");
    printf("B E\n");
    printf("C E\n");
    printf("D E\n");
   
   
}


/*   ADD_PASSENGER command adds passenger to the line    */
void ADD_PASSENGER()
{
   
    int n;
    int i=1;
    printf("Enter no of Passengers: ");
    scanf("%d",&n);                       //  to get number of passengers 
    printf("Enter the same as number of passengers: ");
    scanf("%d",&count);                             // ALWAYS ONE PASSENGER IS BOARDED AT A TIME IN HYPERLOOP 
    //printf("ADD_PASSENGER %d",i);
    
    if(n==1)
    {
        printf("ADD_PASSENGER 1");
        scanf("%s %d %s",passenger_name_1,&age_1,dest_1);       // NAME,AGE,DESTINATION
    }
    if(n==2)
    {
        printf("ADD_PASSENGER 1");
        scanf("%s %d %s",passenger_name_1,&age_1,dest_1);
        printf("ADD_PASSENGER 2");
        scanf("%s %d %s",passenger_name_2,&age_2,dest_2);      // NAME,AGE,DESTINATION
    }
    if(n==3)
    {
        printf("ADD_PASSENGER 1");
        scanf("%s %d %s",passenger_name_1,&age_1,dest_1);
        printf("ADD_PASSENGER 2");
        scanf("%s %d %s",passenger_name_2,&age_2,dest_2);
        printf("ADD_PASSENGER 3");
        scanf("%s %d %s",passenger_name_3,&age_3,dest_3);
    }
    
    if(n==4)
    {
        printf("ADD_PASSENGER 1 : ");
        scanf("%s %d %s",passenger_name_1,&age_1,dest_1);
        printf("ADD_PASSENGER 2 : ");
        scanf("%s %d %s",passenger_name_2,&age_2,dest_2);
        printf("ADD_PASSENGER 3 : ");
        scanf("%s %d %s",passenger_name_3,&age_3,dest_3);
        printf("ADD_PASSENGER 4 : ");
        scanf("%s %d %s",passenger_name_4,&age_4,dest_4);
        
    }
    
    
}



/*  START_POD command starts pod with a passenger having highest age to his
destination . 
   */

void START_POD()
{
   
    int k=1;
    char res[5];
    printf("START POD %d",k);
    

    
        if(age_1>age_2 && age_1>age_3 && age_1>age_4)
        {
            
         printf("%s %d \n",passenger_name_1,age_1);
            
            
        }
        else if(age_2>age_3 && age_2>age_4)
        {
            printf("%s %d \n",passenger_name_2,age_2);
        }
        else if(age_3>age_4)
        {
            printf("%s %d \n",passenger_name_3,age_3);
        }
        else
        {
             printf("%s %d \n",passenger_name_4,age_4);
        }
    
   
   k++;
   
   
   
}
   
/*
PRINT_Q command prints the number of passengers and their details who are
remaining in the queue.
*/



void PRINT_Q()
{
   printf("Remaining in the queue");
   printf("%d\n ",(count)-1);
   
   
   if(age_1>age_2 && age_1>age_3)
        {
            
            printf("%s %d %s\n",passenger_name_2,age_2,dest_2);
            printf("%s %d %s\n",passenger_name_3,age_3,dest_3);
        }
        
   else if(age_2>age_3)
        {
            printf("%s %d %s\n",passenger_name_1,age_1,dest_1);
            printf("%s %d %s\n",passenger_name_3,age_3,dest_3);
        }
   else
   {
       printf("%s %d %s\n",passenger_name_1,age_1,dest_1);
       printf("%s %d %s\n",passenger_name_2,age_2,dest_2);
   }
}


void main()
{
    
func();

}

