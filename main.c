#include<stdio.h>
 struct record
    {
        int usn;
        char name[10];
        float grade;


    };
     struct books{
           	char title[20];
           	int price;
           	float rating
           };



void main(){
     int count;

    struct record student;
    struct books books[10];

   char data;

    printf("enter the details\n");
    printf("enter the usn:\n");
    scanf("%d",&student.usn);
     printf("enter the name:\n");
    scanf("%s",student.name);
    printf("enter the grade:\n");
    scanf("%f",&student.grade);
    count=0;
   while(1){

		printf("enter the book title:\n");
		scanf("%s",books[count].title);
		printf("enter the pricing of book:\n");
		scanf("%d",&books[count].price);
		printf("enter the review of book\n");
		scanf("%f",&books[count].rating);

		printf("do want to continue?y/n\n");
		scanf("%s",&data);
		count++;


		if(data=='n'){
			break;
		}

		else if(data=='y'){
			continue;
		}

    }
    printf("Number of books taken:%d",count);




    printf("\t\t\t\t printing details\n");
    printf("name:%s\n ",student.name);
      printf("USN:%d\n ",student.usn);
        printf("GRADE:%f\n ",student.grade);
        printf("Number of books taken:%d\n",count);
        count=0;
        while(1){
        	count++;
        			printf("enter the book title:\n");
        			scanf("%s",books[count].title);
        			printf("enter the pricing of book:\n");
        			scanf("%d",&books[count].price);
        			printf("enter the review of book\n");
        			scanf("%f",&books[count].rating);
        			printf("do want to continue?y/n\n");
        			scanf("%s",&data);


        }




}
