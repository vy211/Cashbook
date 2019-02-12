//write on turbo c
/*
   @ Vipin Yadav
   
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,n,i,ch;
	float s1,s2,s3,x,y,z,sum,total,t;
	printf("*************************************CASH BOOK****************************\n\n");
	printf("                                                           -By VIPIN YADAV\n\n");
	printf("How Many Entry you Want to do: ");
	scanf("%d",&a);
	sum=0;
	total=0;
	for(i=1;i<=a;i++)
	{
		printf("\nEnter 1 for Recipt:\n");
		printf("Enter 2 for Payment:\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				printf("\nRecipt Amt.:");
				scanf("%f",&x);
				total=total+x;
				break;
			case 2:
			    printf("\nPayment Amt.:");
				scanf("%f",&y);
				t=t+y;
				break;
			default	:
			       printf("Wrong Choice!");
				   break;	
		}
		
	}
	 
	 printf("Total Recipt Amt.: %f\n\n",total);
	 printf("Total Paymnt Amt.: %f\n\n",t);
	 printf("\n\n*********For Balance c/d***********\n\n");
	 if(total>t)
	   { 
	       s1=total-t;
	       printf("      Add PAYMENT Side: %f\n\n",s1);
	       printf("RECIPT(%f)=PAYMENT(%f)\n\n",total,total);
	       
	   }
	 else {
	 	s2=t-total;
	 	printf("        Add RECIPT Side: %f\n\n",s2);
	 	printf("#####     RECIPT side(%f)=PAYMENT side(%f)      ####\n\n",t,t);
	 	
	 }  
	 printf("$$Now CASH Both side are Equal$$$\n\n");
	 
	 
	getch();
	 
}
