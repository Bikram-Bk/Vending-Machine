#include<stdio.h>
#include<stdlib.h> 
int snacks();
int colddrinks();
int selection();

int main()
{   int i;
	int choice;
	welcome();
	selection();
	printf("\n Would you like to continue Press 1 if Yes or Press 2 if No:");
	scanf("%d",&choice);
	switch(choice)
	{
	{
		case 1:
		selection(); 
		break;
	}
	{
		case 2:
	for(i=0;i<=58;i++){
		printf("**");
	}
	printf("\n\n\t\t\t\t\t\tVisit again\n\n");
	for(i=0;i<=58;i++){
	printf("**");	
	}

	}
}
}
int welcome()
{
	int i;
	for(i=0;i<=58;i++){
		printf("**");
	}
	printf("\n\n\n\n\t\t\t\t\t Welcome to Vending Machine\n\n\n\n");
	for(i=0;i<=58;i++){
	printf("**");	
	}
	system("pause");
	system("cls");
}
int snacks()
{	FILE *fp;
	int i,a,selection,quantity,amount,price,totalamount,remaining,totalprice;
	printf("SRno.\t\tItem\t\tWeight\t\tPrice\n\n");
	printf("1\t\tChips\t\t200g\t\t 20\n");
	printf("2\t\tChocolate\t200g\t\t 200\n");
	printf("3\t\tCake\t\t200g\t\t 150\n");
	printf("What do you want to select:\n");
	scanf("%d",&selection);
	
	switch(selection)
	{
		case 1:
			
				printf("Enter the quantity:\n");
				scanf("%d",&quantity);
				amount=quantity*20;
				printf("\nItem\t\t\tQuantity\t\tWeight\t\tTotal Price\n\n");
                printf("Chips\t\t\t%d\t\t\t200g\t\t%d\n",quantity,amount);
				printf("\nEnter the amount:\n");
				scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	else
	{
		printf("\nNot-sufficient amount:\n");
		printf("\nRe-enter the amount:\n");
		scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	}
	fp=fopen("Vending machine.txt","w+");
	fscanf(fp,"%d",&selection);
	if(fp==NULL){
		printf("Unable to open file");
		exit(1);
	    }
	fputs("\tItem=Chips\tPrice=20\n",fp);
	break;
	
	
case 2:
			
				printf("Enter the quantity:\n");
				scanf("%d",&quantity);
				amount=quantity*200;
				printf("\nItem\t\tQuantity\t\tWeight\t\tTotal Price\n\n");
                printf("Chocolate\t%d\t\t\t200g\t\t%d\n",quantity,amount);
				printf("\nEnter the amount:\n");
				scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	else
	{
		printf("\nNot-sufficient amount:\n");
		printf("\nRe-enter the amount:\n");
		scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	}
	fp=fopen("Vending machine.txt","w+");
	fscanf(fp,"%d",&selection);
	if(fp==NULL){
		printf("Unable to open file");
		exit(1);
	    }
	fputs("\tItem=Chocolate\tPrice=200\n",fp);
	break;
	

case 3:
			
				printf("Enter the quantity:\n");
				scanf("%d",&quantity);
				amount=quantity*150;
				printf("\nItem\t\tQuantity\t\tWeight\t\tTotal Price\n\n");
                printf("Cake\t\t%d\t\t\t200g\t\t%d\n",quantity,amount);
				printf("\nEnter the amount:\n");
			 	scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	else
	{
		printf("\nNot-sufficient amount:\n");
		printf("\nRe-enter the amount:\n");
		scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	}
	fp=fopen("Vending machine.txt","w+");
	fscanf(fp,"%d",&selection);
	if(fp==NULL){
		printf("Unable to open file");
		exit(1);
	    }
	fputs("\tItem=Cake\tPrice=150\n",fp);
	break;
		
	default:
	printf("invalid input");
    }
    fclose(fp);
}
int colddrinks()
{	FILE *fp;
	int i,a,selection,quantity,amount,price,totalamount,remaining;
	printf("SRno.\t\t Item\t\t Weight\t\t Price\n\n");
	printf("1\t\t Coke\t\t 250ml\t\t 55\n");
	printf("2\t\t Dew\t\t 200ml\t\t 45\n");
	printf("3\t\t Fanta\t\t 2230ml\t\t 50\n");
	printf("What do you want to select:\n");
	scanf("%d",&selection);
	switch(selection)
	{
		case 1:
			
				printf("Enter the quantity:\n");
				scanf("%d",&quantity);
				amount=quantity*55;
				printf("\nItem\t\tQuantity\t\tWeight\t\tTotal Price\n\n");
                printf("Coke\t\t%d\t\t\t200g\t\t%d\n",quantity,amount);
				printf("\nEnter the amount:\n");
				scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	else
	{
		printf("\nNot-sufficient amount:\n");
		printf("\nRe-enter the amount:\n");
		scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	}
	fp=fopen("Vending machine.txt","w+");
	fscanf(fp,"%d",&selection);
	if(fp==NULL){
		printf("Unable to open file");
		exit(1);
	    }
	fputs("\tItem=Coke\tPrice=55\n",fp);
	break;
	
	
case 2:
			
				printf("Enter the quantity:\n");
				scanf("%d",&quantity);
				amount=quantity*45;
				printf("\nItem\t\tQuantity\t\tWeight\t\tTotal Price\n\n");
                printf("Dew\t\t%d\t\t\t200g\t\t%d\n",quantity,amount);
				printf("\nEnter the amount:\n");
				scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	else
	{
		printf("\nNot-sufficient amount:\n");
		printf("\nRe-enter the amount:\n");
		scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	}
	fp=fopen("Vending machine.txt","w+");
	fscanf(fp,"%d",&selection);
	if(fp==NULL){
		printf("Unable to open file");
		exit(1);
	    }
	fputs("\tItem=Dew\tPrice=45\n",fp);
	break;
	

case 3:
			
				printf("Enter the quantity:\n");
				scanf("%d",&quantity);
				amount=quantity*50;
				printf("\nItem\t\tQuantity\t\tWeight\t\tTotal Price\n\n");
                printf("Fanta\t\t%d\t\t\t200g\t\t%d\n",quantity,amount);
				printf("\nEnter the amount:\n");
			 	scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	else
	{
		printf("\nNot-sufficient amount:\n");
		printf("\nRe-enter the amount:\n");
		scanf("%d",&price);
				if(price>=amount)
				{
					totalamount=price-amount;
					printf("\nYour remaining amount is: %d\n",totalamount);
					for(i=0;i<=58;i++)
	{
		printf("**");
	}
	printf("\n\n\t\t\t\t\tThanks for choosing\n\n");
				for(i=0;i<=58;i++)
	{
		printf("**");
	}
	}
	}
	fp=fopen("Vending machine.txt","w+");
	fscanf(fp,"%d",&selection);
	if(fp==NULL){
		printf("Unable to open file");
		exit(1);
	    }
	fputs("\tItem=Fanta\tPrice=50\n",fp);
	break;
		
	default:
	printf("invalid input");
    }
    fclose(fp);
}

int selection()
{   
	int choose;
	printf("\nWhat would you like to select:");
	printf("\n1.snacks");
	printf("\n2.colddrinks\n");
	scanf("%d",&choose);
	switch(choose)
	{
		{
			case 1:
			snacks();
			break;
		}
		{
			case 2:
			colddrinks();
		}
	}
}


