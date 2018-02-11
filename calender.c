 #include <stdio.h>
#include <stdlib.h>

int main() {
	int month,year,a,b,c,Month,Year,no,n,hori=0,run=0,space,A,B,count=0,count1=0;
	int ly[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int ny[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	//input month and year

	printf("Enter the month and year (MM <space> YYYY): ");
	scanf("%d%d",&month,&year);
	printf("\n");


	//print month and year

	if(month==1)
	printf("January %d\n",year);
    if(month==2)
	printf("February %d\n",year);
	if(month==3)
	printf("March %d\n",year);
	if(month==4)
	printf("April %d\n",year);
	if(month==5)
	printf("May %d\n",year);
	if(month==6)
	printf("June %d\n",year);
	if(month==7)
	printf("July %d\n",year);
	if(month==8)
	printf("August %d\n",year);
	if(month==9)
	printf("September %d\n",year);
	if(month==10)
	printf("October %d\n",year);
	if(month==11)
	printf("November %d\n",year);
	if(month==12)
	printf("December %d\n",year);
	printf("\n");
	printf("Mon     Tue     Wed     Thu     Fri     Sat     Sun");

	//Month page

	no=year-1900;



    for(Year=0;Year<=no;Year++)
	{

		if(Year%4==0 && Year!=0)
		{

			if(Year==no)
			{
				run=month;
			}
			else
			{
				run=12;
			}



            if(run>12)
            {
            	continue;
			}
			else
			{

			for(n=1;n<=run;n++)
        	{

        		space=hori;
        		hori=(ly[n-1]+(hori))%7;

         	}

			}


		}
		else
		{

			if(Year==no)
			{
				run=month;
			}
			else
			{
				run=12;
			}



	        if(run>12)
            {
            	continue;
			}
			else
			{

			for(n=1;n<=run;n++)
        	{

        		space=hori;
        		hori=(ny[n-1]+(hori))%7;

         	}

			}



		}

	}


    	printf("\n");
    	if(month==1)
    	{
    		a=31;
		}
		if(month==2 && year%4==0)
		{
			a=29;
		}
    	if(month==2 && year%4!=0)
    	{
    		a=28;
		}
		if(month==3)
		{
			a=31;
		}
		if(month==4)
		{
			a=30;
		}
		if(month==5)
		{
			a=31;
		}
		if(month==6)
		{
			a=30;
		}
		if(month==7)
		{
			a=31;
		}
		if(month==8)
		{
			a=31;
		}
		if(month==9)
		{
			a=30;
		}
		if(month==10)
		{
			a=31;
		}
		if(month==11)
		{
			a=30;
		}
		if(month==12)
		{
			a=31;
		}

    	for(B=1;B<=a+space;B++)
    	{
    		count1++;
    		if(B<=space)
    		{
    			printf("\t");
			}
			else
			{
				count++;
				printf("%d\t",count);
			}
			if(count1%7==0)
			{
				printf("\n");
			}

		}


  printf("\n");

	return 0;
}








