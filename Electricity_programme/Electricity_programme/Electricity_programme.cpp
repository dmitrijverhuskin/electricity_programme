#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf



void main()
{
	float unit, uc, used, gst, n;  //uc=late charge
	int days, number;
	clreol();
	p("press '1' for non business consumers\n"); /*horse_hold ussers (comersial)*/
	p("press '2' for non business corporations\n"); //shops, industries (non comersial)
	p("select your option\n");
	s("%d", &number);
	switch (number)
	{
	case 1:
		p("\t\t non business\n");
		p("enter units\n");
		s("%f", &unit);
		p("enter number of days\n");
		s("%d", &days);

		//........UNITS.......
		if (unit<=50)
		{                                              //here i didnt used any break statment
			n = 0.5;                                   //because to continue into next level
			goto z;                                    // i have  use goto statment instead of break statment

		}


		if (unit<=100)
		{
			n = 1.50;
			goto z;

		}
		if (unit<=200)
		{
			n = 2.30;
			goto z;
		}

		if (unit=500)
		{
			n = 2.50;
			goto z;
		}

		//..........Days........
	z:
		used = unit * n;

		if (days<=31)
		{
			p("total unit coast=%.3f rupees only\n", used);
			goto x;
		}                                                        // search logic to compress
		                                                         // here lines too many

		if (days<=60)
		{
			p("total unit coast=%.3f rupees only\n", used);
			p("late charges 30 \n");
			uc = 30;
			p("total unit coast=%.3f rupees only\n", used+uc);
			goto x;
		}

		if (days<=90)
		{
			p("total unit coast=%.3f rupees only\n", used);
			p("late charges 60 \n");
			uc = 60;
			p("total unit coast=%.3f rupees only\n", used + uc);
			goto x;
		}

		if (days > 91)
		{
			p("total unit coast=%.3f rupees only\n", used);
			p("late charges 60 \n");
			uc = 60;
			p("total unit coast=%.3f rupees only\n", used + uc);
			goto x;
		}

		if (days>=91)                                                     //if your bill is pending in more than 91 days
		{                                                                 //it will go to y
			goto y;
		}
		goto x;                                                          //break; if i use breake; case 1 terminates here only it wont show x

	y:   
		p("your bill is apply for new bill\n");
		p("for more guires contact 987654321\n");
		break;

	case 2:
		p("\t\t bisness\n");
		p("enter units\n");
		s("%f", &unit);
		p("enter number of days\n");
		s("%d", &days);

		if (unit<=50)
		{
			n = 1.0;
			goto z;
		}

		if (unit <= 100)
		{
			n = 1.5;
			goto z;
		}

		if (unit <= 200)
		{
			n = 2.80;
			goto z;
		}

		if (unit <= 500)
		{
			n = 3.50;
			goto z;
		}


		//.................................TAX...............


	x:
		gst = (used * 14) / 100;
		p("gst tax=%.3f\n", gst);
		p("required amount=%.3f\n", gst + used + uc);                            //here for late fee also tax is applicable

	}
	getch();
}

