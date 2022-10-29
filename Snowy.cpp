#include <bits/stdc++.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <conio.h>
#include <stdio.h>
#include <process.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <direct.h>

#define PI 3.141592654
using namespace std;

long long intResult = 0;
double kl=0, result=0;

int menu()
{
	int ch;
	cout<<"\n1.  Addition"<<"\t\t\t\t\t\t\t13. SquareRoot" ;
	cout<<"\n2.  Subtraction"<<" \t\t\t\t\t\t14. CubeRoot";
	cout<<"\n3.  Multiplication"<<"\t\t\t\t\t\t15. Power";
	cout<<"\n4.  Division"<<"\t\t\t\t\t\t\t16. Absolute Value";
	cout<<"\n5.  Remainder"<<" \t\t\t\t\t\t\t17. Sine Inverse";
	cout<<"\n6.  Factorial"<<" \t\t\t\t\t\t\t18. Cosine Inverse";
	cout<<"\n7.  Sine"<<"\t\t\t\t\t\t\t19. Tangent Inverse";
	cout<<"\n8.  Cosine"<<"\t\t\t\t\t\t\t20. Ceil Function";
	cout<<"\n9.  Tangent"<<" \t\t\t\t\t\t\t21. Floor Function";
	cout<<"\n10. log(base e)"<<" \t\t\t\t\t\t22. Permutation (nPr)";
	cout<<"\n11. log(base 10)"<<"  \t\t\t\t\t\t23. Combination(nCr)";
	cout<<"\n12. e^x"<<" \t\t\t\t\t\t\t24. Clear";
	cout<<"\n25. Exit";
	cout<<endl<<endl<<"Enter your choice: ";

	cin>>ch;
	return ch;
}

void addition()
{
	double a,b;
    cout<<"\nEnter two numbers: ";
    cin>>a>>b;
    result = a + b;
    cout<<"\nResult: "<<result;

}

void subtraction()
{
    double a, b;
    cout<<"\nEnter two numbers: ";
    cin>>a>>b;
    result = a - b;
    cout<<"\nResult: "<<result;
}


void multiplication()
{
    double a, b;
	cout<<"\nEnter two numbers: ";
    cin>>a>>b;
    result = a * b;
    cout<<"\nResult: "<<result;
}


void division()
{
    double a, b;
    cout<<"\nEnter two numbers: ";
    cin>>a>>b;
    if (b!=0)
        {
        result = a / b;
        cout<<"\nResult: "<<result;
        }
    else
        {
        cout<<"Math Error\n";
        }
}


void mod()
{
    long long a, b;
    cout<<"\nEnter two numbers: ";
    cin>>a>>b;
    intResult = a % b;
    cout<<"\nResult: "<<intResult;
}


void factorial()
{
    long long n, f, i;
    cout<<"\nEnter a number: ";
    cin>>n;
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    intResult = f;
    cout<<"\nResult: "<<intResult;

}
long long factorialReturn(long long n)
{
    long long f, i;
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    return f;
}


void sine()
{
    double a;
    cout<<"Enter angle in radians: ";
    cin>>a;
    result = sin(a);
    cout<<"\nResult: "<<result;
}


void cosine()
{
    double a;
    cout<<"Enter angle in radians: ";
    cin>>a;
    result = cos(a);
    cout<<"\nResult: "<<result;
}


void tangent()
{
    double a;
    cout<<"Enter angle in radians: ";
    cin>>a;
    result = tan(a);
    cout<<"\nResult: "<<result;
}


void logBasee()
{
    double a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a<=0.0)
    {
    cout<<"Math Error\n";
    }
    else
    {
    result = log(a);
    cout<<"\nResult: "<<result;
    }
}


void logBase10()
{
    double a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a<=0.0)
    {
    cout<<"Math Error\n";
    }
    else
    {
    result = log10(a);
    cout<<"\nResult: "<<result;
    }
}


void eToPowerX()
{
    double a;
    cout<<"Enter a number: ";
    cin>>a;
    result = exp(a);
    cout<<"\nResult: "<<result;
}


void squareRoot()
{
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;
    if (n<0)
    {
    cout<<"Math Error\n";
    }
    else
    {
    result = sqrt(n);
    cout<<"\nResult: "<<result;
    }
}


void cubeRoot()
{
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;
    result = cbrt(n);
    cout<<"\nResult: "<<result;
}


void power()
{
    double base, expo;
    cout<<"Enter base number: ";
    cin>>base;
    cout<<"Enter exponent: ";
    cin>>expo;
    result = pow(base, expo);
    cout<<"Base: "<<base<<"; Exponent: "<<expo<<"; Result: "<<result;
}


void absolute()
{
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;
    intResult = abs(n);
    cout<<"\nResult: "<<intResult;
}


void sineInverse()
{
    double n;
    cout<<"\nEnter a number: ";
    cin>>n;
    if(n>1 || n<-1)  // Parameter not in Range
    {
        cout<<"Not in Range";
    }
    else
    {
        result = asin(n);
        cout<<"Inverse of sin("<<n<<")"<<" in radians is "<<result;

      // converting radians to degree
        result = asin(n)*180/PI;
        cout<<" and in degrees is "<<result;
    }
}


void cosineInverse()
{
	double n;
	cout<<"\nEnter a number: ";
	cin>>n;
	if(n>1 || n<-1)
	{
		cout<<"Not in Range";
	}
	else
	{
		result = acos(n);
		cout<<"Inverse of cos("<<n<<")"<<" in radians is "<<result;
		result = acos(n)*180/PI;
		cout<<" and in degrees is "<<result;
	}
}


void tangentInverse()
{
    double n;
    cout<<"\nEnter a number: ";
    cin>>n;
    result = atan(n);

    cout<<"\nInverse of tan("<<n<<")"<<" in radians is "<<result;

    // Converting radians to degrees
    result = (result * 180) / PI;
    cout<<" and in degrees is "<<result;
}


void ceilF()
{
    double n;
    cout<<"\nEnter a number: ";
    cin>>n;
    result = ceil(n);
    cout<<"Ceiling integer of "<<n<<" is "<<result;
}


void floorF()
{
    double n;
    cout<<"\nEnter a number: ";
    cin>>n;
    result = floor(n);
    cout<<"Floor integer of "<<n<<" is "<<result;
}


void npr()
{
    long long n, r;
    cout<<"\nEnter two numbers: ";
    cin>>n>>r;
    if(n>=r && n>0 && r>=0)
    {
    intResult = factorialReturn(n) / factorialReturn(n - r);
    cout<<"\nResult is: "<<intResult;
    }
    else
    {
    cout<<"Math Error\n";
    }
}


void ncr()
{
    long long n, r;
    cout<<"\nEnter two numbers: ";
    cin>>n>>r;
    if(n>=r && n>0 && r>=0)
    {
    intResult = factorialReturn(n) / (factorialReturn(r) * factorialReturn(n - r));
    cout<<"\nResult is: "<<intResult;
    }
    else
    {
    cout<<"Math Error\n";
    }
}


void clear()
{
    cout<<"\nOld Data Cleared";
    intResult = 0;
    result = 0;
    int k = 0;
}
void delay(int number_of_seconds)
{
	int milli_seconds = 1000 * number_of_seconds;
	clock_t start_time = clock(); 
	while (clock() < start_time + milli_seconds);
}

void snowy( )
{
	system ("CLS");
	cout<<endl<<endl<<endl;
	cout<<"\t\t                               ..............,"<<endl;
	cout<<"\t\t                           *.....................,"<<endl;
	cout<<"\t\t                       *,,........................../...,."<<endl;
	cout<<"\t\t                    ...,............................*.*....."<<endl;
	cout<<"\t\t                   ,.,*.............................,/.......,"<<endl;
	cout<<"\t\t                  ,.....................,**,**......*,.....,,,."<<endl;
	cout<<"\t\t                 ,..,/***............................*...,,...,.,"<<endl;
	cout<<"\t\t                 ...,*.,,,,............,( /**/#*..,,.,/........,.,"<<endl;
	cout<<"\t\t                ....,*/,/(.............  *//(/*.,,*,.,*......*../,."<<endl;
	cout<<"\t\t               ,....*/ /*................ /**(/,,,*.,*,.....,,*,*./"<<endl;
	cout<<"\t\t               ,...,*,,................,/,.........../,..,,/@@@###@@@  "<<endl;
	cout<<"\t\t               ,...,*********..,...................,,*,*%@@         @@ "<<endl;
	cout<<"\t\t                ,,*,,****(****...................,,,//@@            *@ "<<endl;
	cout<<"\t\t      ,@@    .@@ .,*/***/*/*...*..............*//,,#@@              @  "<<endl;
	cout<<"\t\t    .@          @@,/**(//,,,.....,..,,,,,,,,,.&%,  &%              @   "<<endl;
	cout<<"\t\t    .@              .*,,(,,,,,,,,,,,,,,,,*.                       @    "<<endl;
	cout<<"\t\t      @/               /*** /(******((                           #@    "<<endl;
	cout<<"\t\t      ,@%                 _____                                @@   "<<endl;
	cout<<"\t\t      ,@%                |   __|___ ___ _ _ _ _ _             @@   "<<endl;
	cout<<"\t\t      ,@%                |__   |   | . | | | | | |              @@   "<<endl;
	cout<<"\t\t       *&@               |_____|_|_|___|_____|_  |               @#  "<<endl;
	cout<<"\t\t      ,@%                                    |___|                @@   "<<endl;
	cout<<"\t\t      ,@%                                                          @@   "<<endl;
	cout<<"\t\t      @, @                .%@@@@@@@@@@@@@@@@@@@@@@@@@@             %@  "<<endl;
	cout<<"\t\t      @           @@@                /....,,.,..,,,,,%@         @@*@   "<<endl;
	cout<<"\t\t      @&       &@@                   *..,..,,,,*..,,.,(@    %@@/@%...*,"<<endl;
	cout<<"\t\t       ,@@@@@@                      .,,..*,..,,*,,.../...........*.....,...*    "<<endl;
	cout<<"\t\t                                    ,,*...........,,,,,..,......,.,...*./,.....,"<<endl;
	cout<<"\t\t                                   ..*........*.......,,,.,./,.................."<<endl;
	cout<<"\t\t                                    ..../.,.,........,...,,,,,.,*..............."<<endl;
	cout<<"\t\t                                    *.....#..........(....,*..,,..,.....,......."<<endl;
	cout<<"\t\t                                     ......,.........,*,..*........*,.,,..,...,("<<endl;
	cout<<"\t\t                                       ,....**.......,*,............,,.,,,(....."<<endl;
	delay(2.5);
}

void loading() 
{
	system ("CLS");
	cout<<"\n\nINITIALIZING..."<<endl;
	delay(1);
	system ("CLS");
	cout<<"\n\nCHECKING FILES..."<<endl;
	delay(1);
	system ("CLS");
	cout<<"\n\nCHECKING FOR RESOURCES..."<<endl;
	delay(1);
	system ("CLS");
	cout<<"\n\nOPENING..."<<endl;
	delay(1.5);
	system ("CLS");
}

void tfunc( )
{
	time_t T = time(NULL);
	cout<<"\n\n\n\t\tCurrent Date and Time: "<<ctime(&T);
}

class Cal
{
	protected:
		int dat;
		int mont;
		char Name[100];
	public:
		void enter();
		void output()
		{ 
			cout<<"\t\t\t____________________"<<endl;
			cout<<"\n\t\t\t"<<dat<<"/"<<mont<<"\t"<<Name<<endl;
			cout<<"\t\t\t____________________"<<endl;
		}
		int retno()
		{
			return (mont*100 + dat);
		}
		char* retname()
		{
			return Name;
		}
};

void Cal::enter()
{ 
	int i;
	do
	{
		cout<<"\t\t\t____________________"<<endl;
		cout<<"\n\t\t\tEnter day(d m): ";
		cin>>dat;
		cin>>mont;
		i=0;
		if(mont<1||mont>12)
		{
			i=1;
		}
		if(mont%2!=0)
		{ 
			if(dat<1||dat>31)
				i=1;
		}
		else
		{ 
			if(dat<1||dat>30)
				i=1;
		}
		if(mont==2)
		{
			{ 
				if(dat<1||dat>29)
					i=1;
			}
		}
		if(i==1)
		{
			cout<<"\t\t\t___________________"<<endl;
			cout<<"\n\t\t\tInvalid entry.Please enter again"<<endl;
			cout<<"\t\t\t____________________"<<endl;
		}
	}while(i==1);
}

class Birtd: public Cal
{
	public:
		void entname()
		{ 
			cout<<"\t\t\t____________________"<<endl;
			cout<<"\n\t\t\tEnter name of person: ";
			cin>>Name;
			cout<<"\n\t\t\t____________________"<<endl;
		}
}bisamp;

class Event: public Cal
{
	public:
		void entname()
		{ 
			cout<<"\t\t\t____________________"<<endl;
			cout<<"\n\t\t\tEnter name of event: ";
			cin>>Name;
			cout<<"\n\t\t\t____________________"<<endl;
		}
}evsamp;

void disp1()
{
	ifstream fout;
	fout.open("B.txt",ios::in|ios::app|ios::binary);
	fout.seekg(0);
	if(fout.read((char*)&bisamp, sizeof(bisamp)))
	{
		fout.seekg(0);
		while(fout.read((char*)&bisamp, sizeof(bisamp)))
		{
			bisamp.output();
		}
	}
	else
	{
		cout<<"\t\t\tNo entries"<<endl;
		cout<<"\t\t\t____________________";
	}
	fout.close();
}

void disp2()
{
	ifstream fout2;
	fout2.open("E.txt",ios::in|ios::app|ios::binary);
	fout2.seekg(0);
	if(fout2.read((char*)&evsamp, sizeof(evsamp)))
	{
		fout2.seekg(0);
		while(fout2.read((char*)&evsamp, sizeof(evsamp)))
		{
			evsamp.output();
		}
	}
	else
	{
		cout<<"\t\t\tNo entries"<<endl;
		cout<<"\t\t\t____________________";
	}
	fout2.close();
}

void Calender()
{
	Birtd bisamp_2;
	Event evsamp_2;
	char ch,ch2,ch3;
	char str[20];
	fstream fin1;
	fstream fin3;
	do
	{
		system("CLS");
		cout<<"\n\t\t\tWelcome to the Calender Section."<<endl;
		cout<<"\t\t\t________________________________";
		tfunc();
		cout<<"\n\n\t\t\t1. Upcoming Birthdays ";
		cout<<"\n\t\t\t2. Upcoming Events ";
		cout<<"\n\t\t\t3. Go back to Main Menu ";
		cout<<"\n\n\t\t\tEnter your choice(1-3): ";
		cin>>ch;
		switch(ch)
		{
			case '1':
			do
			{
				system("CLS");
				disp1();
				cout<<"\n\n\t\t\t1.Add new Birthdays";
				cout<<"\n\t\t\t2.Delete a Birthday";
				cout<<"\n\t\t\t3.Return to previous menu";
				cout<<"\n\t\t\tEnter a choice(1-3): ";
				cin>>ch2;
				switch(ch2)
				{
					case '1':
					{
						fin1.open("B.txt",ios::in|ios::binary);
						fstream fin2;
						fin2.open("B2.txt",ios::app|ios::binary);
						bisamp_2.entname();
						bisamp_2.enter();
						if(!fin1)
						{
							fin2.write((char*)&bisamp_2 , sizeof(bisamp_2));
						}
						else
						{
							fin1.read((char*)&bisamp , sizeof(bisamp));
							while(!fin1.eof())
							{
								if((bisamp.retno())<=(bisamp_2.retno()))
								{
									fin2.write((char*)&bisamp , sizeof(bisamp));
								}
								else
								{
									break;
								}
								fin1.read((char*)&bisamp , sizeof(bisamp));
							}
							fin2.write((char*)&bisamp_2 , sizeof(bisamp_2));
							while(!fin1.eof())
							{
								fin2.write((char*)&bisamp, sizeof(bisamp));
								fin1.read((char*)&bisamp , sizeof(bisamp));
							}
						}
						fin1.close();
						fin2.close();
						remove("B.txt");
						rename("B2.txt","B.txt");
						break;
					}
					case '2':
					{
						fin1.open("B.txt",ios::in|ios::binary);
						fstream fin5;
						fin5.open("B2.txt",ios::app|ios::binary);
						cout<<"\n\t\t\tEnter the name to be deleted:";
						cin>>str;
						if(!fin1)
						{
							cout<<"\n\t\t\tNo records present";
						}
						else
						{
							fin1.read((char*) &bisamp, sizeof(bisamp));
							while(!fin1.eof())
							{
								if(strcmpi(bisamp.retname(),str))
								{
									fin5.write((char*)&bisamp, sizeof(bisamp));
									fin1.read((char*)&bisamp, sizeof(bisamp));
								}
								else
								{
									fin1.read((char*)&bisamp, sizeof(bisamp));
								}
							}
						}
						fin1.close();
						fin5.close();
						remove("B.txt");
						rename("B2.txt","B.txt");
						break;
					}

					case '3':
						break;

					default: 
						cout<<"\t\t\tWrong Entry!!";
					delay(0.7);
				}
			}while(ch2!='3');
			break;

			case '2':
				do
				{
					system("CLS");
					disp2();
					cout<<"\n\n\t\t\t1.Add new Events";
					cout<<"\n\t\t\t2.Delete an Event";
					cout<<"\n\t\t\t3.Return to previous menu";
					cout<<"\n\t\t\tEnter a choice(1-3): ";
					cin>>ch3;
					switch(ch3)
					{
						case '1':
						{
							fin3.open("E.txt",ios::in|ios::binary);
							fstream fin4;
							fin4.open("E2.txt",ios::app|ios::binary);
							evsamp_2.entname();
							evsamp_2.enter();
							if(!fin3)
							{
								fin4.write((char*)&evsamp_2 , sizeof(evsamp_2));
							}
							else
							{
								fin3.read((char*)&evsamp , sizeof(evsamp));
								while(!fin3.eof())
								{
									if((evsamp.retno())<=(evsamp_2.retno()))
									{
										fin4.write((char*)&evsamp , sizeof(evsamp));
									}
									else
									{
										break;
									}
									fin3.read((char*)&evsamp , sizeof(evsamp));
								}
								fin4.write((char*)&evsamp_2 , sizeof(evsamp_2));
								while(!fin3.eof())
								{
									fin4.write((char*)&evsamp, sizeof(evsamp));
									fin3.read((char*)&evsamp , sizeof(evsamp));
								}
							}
							fin3.close();
							fin4.close();
							remove("E.txt");
							rename("E2.txt","E.txt");
							break;
						}
			
						case '2':
						{
							fin1.open("E.txt",ios::in|ios::binary);
							fstream fin6;
							fin6.open("E2.txt",ios::app|ios::binary);
							cout<<"\n\t\t\tEnter the name of event to be deleted:";
							cin>>str;
							if(!fin1)
							{
								cout<<"\n\t\t\tNo records present";
							}
							else
							{
								fin1.read((char*) &evsamp, sizeof(evsamp));
								while(!fin1.eof())
								{
									if(strcmpi(evsamp.retname(),str))
									{
										fin6.write((char*)&evsamp, sizeof(evsamp));
										fin1.read((char*)&evsamp, sizeof(evsamp));
									}
									else
									{
										fin1.read((char*)&evsamp, sizeof(evsamp));
									}
								}
							}
							fin1.close();
							fin6.close();
							remove("E.txt");
							rename("E2.txt","E.txt");
							break;
						}
			
						case '3':
							break;
	
						default: 
							cout<<"\t\t\tWrong Entry";
						delay(0.7);
					}
				}while(ch3!='3');

				break;

			case '3':
				break;
			default:
				cout<<"\t\t\tWrong entry!!";
			delay(0.7);
		}
	}while(ch!='3');
}

int meetings();

int travels();

class general
{
	protected: 
		int hour;
		int minutes;
		int day;
		int month;
		int year;
		int code;
};

class meeting:protected general
{
	public: 
		meeting()
		{
			hour=minutes=year=code=0;
			month=day=1;
		}
		meeting(meeting &s)
		{
			code=s.code;
		}
		void modcode(int l)
		{
			code=l;
		}
		void getdata();
		void putdata()
		{
			cout<<"\n"<<code<<".\n"<<" Date: "<<day<<"/"<<month<<"/"<<year<<"\t"<<"\t"<<"Time: "<<hour<<":"<<minutes<<"\n";
		}
		int getcode()
		{
			return code;
		}
}m,n,a;

void meeting::getdata()
{ 
	int i=0;
	system("CLS");
	cout<<"\n\t\t\tEnter date "<<endl;
	do
	{
		cout<<"\t\t\t____________________"<<endl;
		cout<<"\n\t\t\tEnter day: ";
		cin>>day;
		cout<<"\n\t\t\tEnter month:";
		cin>>month;
		cout<<"\n\t\t\tEnter year:";
		cin>>year;
		i=0;
		if(month<1||month>12)
		{
			i=1;
		}
		if(month%2!=0)
		{ 
			if(day<1||day>31)
			i=1;
		}
		else
		{ 
			if(day<1||day>30)
			i=1;
		}
		if(month==2)
		{ 
			if(year%4==0)
			{ 
				if(day<1||day>29)
					i=1;
			}
			else
			{ 
				if(day<1||day>28)
				i=1;
			}
		}
		if(i==1)
		{
			cout<<"\t\t\tInvalid entry.Please enter again"<<endl;
		}
	}while(i==1);

	cout<<"\n\t\t\tEnter time(format HH:MM) "<<endl;
	do
	{
		i=0;
		cout<<"\t\t\t____________________"<<endl;
		cout<<"\n\t\t\tHours(HH):";
		cin>>hour;
		cout<<"\n\t\t\tMinutes(MM):";
		cin>>minutes;
		if(hour<0||hour>23)
			i=1;
		if(minutes<0||minutes>59)
			i=1;
		if(i==1)
		{ 
			cout<<"\t\t\tInvalid entry.Please enter again"<<endl;
		}
	}while(i==1);
}

class travel:protected general
{
		char from[50];
		char to[50];
		char mode[20];
	public: 
		travel()
		{
			hour=minutes=year=code=0;
			month=day=1;
			strcpy(to,"nowhere");
			strcpy(from,"nowhere");
			strcpy(mode,"none");
		}
		travel(travel &q)
		{
			code=q.code;
		}
		void moddcode(int l)
		{ 
			code=l;
		}
		void entdata();
		void disp()
		{
			cout<<"\n"<<code<<".\n"<<" To: "<<to<<"\t"<<"\t"<<"From: "<<from<<"\n"
			<<" By: "<<mode<<"\n"<<" Date: "<<day<<"/"<<month<<"/"<<year<<"\t"<<"Time: "<<hour<<":"<<minutes<<"\n";
		}
		int gettcode()
		{
			return code;
		}
}t,u,b;

void travel::entdata()
{ 
	int i=0;
	system("CLS");
	cout<<"\n\t\tEnter place of departure: ";
	cin>>from;
	cout<<"\n\t\tEnter destination: ";
	cin>>to;
	cout<<"\n\t\tEnter mode of transport: ";
	cin>>mode;
	cout<<"\n\t\tEnter date "<<endl;
	do
	{
		cout<<"\t\t____________________"<<endl;
		cout<<"\n\t\tEnter day: ";
		cin>>day;
		cout<<"\n\t\tEnter month:";
		cin>>month;
		cout<<"\n\t\tEnter year:";
		cin>>year;
		i=0;
		if(month<1||month>12)
		{
			i=1;
		}
		if(month%2!=0)
		{ 
			if(day<1||day>31)
			i=1;
		}
		else
		{ 
			if(day<1||day>30)
			i=1;
		}
		if(month==2)
		{ 
			if(year%4==0)
			{ 
				if(day<1||day>29)
				i=1;
			}
			else
			{ 
				if(day<1||day>28)
				i=1;
			}
		}
		if(i==1)
		{ 
			cout<<"Invalid entry.Please enter again"<<endl;
		}
	}while(i==1);
	cout<<"\n\t\tEnter time(format HH:MM) "<<endl;
	do
	{
		i=0;
		cout<<"\t\t____________________"<<endl;
		cout<<"\n\t\tHours(HH):";
		cin>>hour;
		cout<<"\n\t\tMinutes(MM):";
		cin>>minutes;
		if(hour<0||hour>23)
			i=1;
		if(minutes<0||minutes>59)
			i=1;
		if(i==1)
		{ 
			cout<<"Invalid entry.Please enter again"<<endl;
		}
	}while(i==1);
}

void slno(meeting &e,meeting &f)
{ 
	int i;
	i=e.getcode();
	f.modcode(i);
}

void sllno(travel &e,travel &f)
{ 
	int i;
	i=e.gettcode();
	f.moddcode(i);
}

int schedule()
{
	system("CLS");
	char x,ch;
	while(ch!='n')
	{
		cout<<"\n\n\t\tYou are now in the Schedule Section.\n\n";
		cout<<"\n\t\t\t1.My Meetings";
		cout<<"\n\t\t\t2.My Travels";
		cout<<"\n\t\t\t3.Return to Main Menu";
		rep:
		;
		cout<<"\n\n\t\t\tEnter your choice(1-3): ";
		cin>>x;
		if(x!='1'&&x!='2'&&x!='3')
		{
			cout<<"\n\t\t\tSorry, I did not understand. Please Enter Again: ";
			goto rep;
		}
		if(x=='1')
		{
			meetings();
		}
		if(x=='2')
		{
			travels();
		}
		if(x=='3')
		{
			return 0;
		}
		if(x=='1'||x=='2')
		{
			beg:
			;
			cout<<"\n\n\t\tWant to return to Schedule Section??(y/n):";
			cin>>ch;
			if(ch!='y'&&ch!='n')
			{
				cout<<"\n\t\t\tSorry, I did not understand. Please Enter Again: ";
				goto beg;
			}
			system("CLS");
		}
	}
return 0;
}

int l,k;

int meetings()
{
	system("CLS");
	char y;
	cout<<"\n\n\t\t\t1. View meetings: ";
	cout<<"\n\t\t\t2. Add meetings: ";
	cout<<"\n\t\t\t3. Delete meetings: ";
	repeat:
	;
	cout<<"\n\n\t\t\tEnter your choice(1-3): ";
	cin>>y;
	if(y!='1'&&y!='2'&&y!='3')
	{
		cout<<"\n\t\t\tSorry, I did not understand. Please Enter Again: ";
		goto repeat;
	}
	if(y=='1')
	{
		system("CLS");
		ifstream fin;
		fin.open("Meeting.dat",ios::in);
		fin.seekg(0);
		fin.read((char*)&m,sizeof(m));
		if(!fin)
		{
			cout<<"No entries!!";
		}
		while(fin)
		{
			m.putdata();
			fin.read((char*)&m,sizeof(m));
		}
		fin.close();
	}
	if(y=='2')
	{
		system("CLS");
		ofstream fout;
		fout.open("Meeting.dat",ios::app);
		char ans='y';
		while(ans=='y') //modify
		{ 
			if(l==m.getcode())
			{
				m.modcode(++l);
				l=m.getcode();
			}
			else
			{
				m.modcode(1);
				l=m.getcode();
			}
			m.getdata();
			fout.write((char*)&m,sizeof(m));
			start:
			;
			cout<<"\n\t\t\tWant to add more meetings(y/n)??";
			cin>>ans;
			if((ans!='y')&&(ans!='n'))
			{
				cout<<"\n\t\t\tSorry, I did not understand. Please Enter Again: ";
				goto start;
			}
		}
		fout.close();
	}
	if(y=='3')
	{ 
		base:
		;
		system("CLS");
		ifstream fio;
		ofstream file;
		fio.open("Meeting.dat",ios::in);
		fio.seekg(0);
		fio.read((char*)&m,sizeof(m));
		if(!fio)
		{
			cout<<"No entries!!";
		}
		else
		{
			while(!fio.eof())
			{
				m.putdata();
				fio.read((char*)&m,sizeof(m));
			}
			fio.close();
			int codeno,found=1;
			char confirm='n';
			cout<<"\nEnter the index number of the record you want to delete: ";
			cin>>codeno;
			fio.open("Meeting.dat",ios::in);
			file.open("temp.dat",ios::out);
			fio.seekg(0);
			fio.read((char*)&m,sizeof(m));
			while(!fio.eof())
			{ 
				if(m.getcode()==codeno)
				{ 
					a=m;
					m.putdata();
					redo:
					;
					cout<<"\nConfirm deletion(y/n): ";
					cin>>confirm;
					if(confirm!='y'&&confirm!='n')
					{
						cout<<"\t\t\tSorry, I did not understand. Please Enter Again: ";
						goto redo;
					}
					if(confirm=='n')
					{
						file.write((char*)&m,sizeof(m));
					}
					found=0;
				}
				else
				{
					if(found==0)
					{
						slno(a,m);
						a=m;
					}
					file.write((char*)&m,sizeof(m));
				}
				fio.read((char*)&m,sizeof(m));
			}
			if(found!=0)
			{
				cout<<"\t\t\tRecord not found!!\n";
			}
			fio.close();
			file.close();
			remove("Meeting.dat");
			rename("temp.dat","Meeting.dat");
			system("CLS");
			fio.open("Meeting.dat",ios::in);
			cout<<"\nNow the file contains:\n ";
			fio.seekg(0);
			fio.read((char*)&n,sizeof(n));
			if(!fio)
			{
				cout<<"File is empty";
			}
			else
			{
				while(!fio.eof())
				{
					n.putdata();
					fio.read((char*)&n,sizeof(n));
				}
			}
		}
		fio.close();
		char x='n';
		cout<<"\n\t\t\tWant to delete another record(y/n)??:";
		cin>>x;
		do
		{
			if(x=='y')
			{ 
				goto base;
			}
			else if(x!='n'&&x!='y')
			{ 
				do
				{
					cout<<"\n\t\t\tDid not get you. Please enter again(y/n):";
					cin>>x;
					if(x=='n')
					{
						break;
					}
				}while(x!='y');
			}
		}while(x!='n');
	}
	return 0;
}

int travels()
{
	system("CLS");
	char z;
	cout<<"\n\n\t\t\t1. View travels: ";
	cout<<"\n\t\t\t2. Add travels: ";
	cout<<"\n\t\t\t3. Delete travels: ";
	travrep:
	;
	cout<<"\n\t\t\tEnter your choice(1,2, or 3): ";
	cin>>z;
	if(z!='1'&&z!='2'&&z!='3')
	{
		cout<<"\n\t\t\tSorry, I did not understand. Please Enter Again: ";
		cin>>z;
		goto travrep;
	}
	if(z=='1')
	{
		system("CLS");
		ifstream ftin;
		ftin.open("Travel.dat",ios::in);
		ftin.seekg(0);
		ftin.read((char*)&t,sizeof(t));
		if(!ftin)
		{
			cout<<"No entries!!";
		}
		while(ftin)
		{
			t.disp();
			ftin.read((char*)&t,sizeof(t));
		}
		ftin.close();
	}
	if(z=='2')
	{
		system("CLS");
		ofstream ftout;
		ftout.open("Travel.dat",ios::app);
		char answ='y';
		while(answ=='y')
		{ 
			if(k==t.gettcode())
			{
				t.moddcode(++k);
				k=t.gettcode();
			}
			else
			{
				t.moddcode(1);
				k=t.gettcode();
			}
			t.entdata();
			ftout.write((char*)&t,sizeof(t));
			start:
			;
			cout<<"\nWant to add more travel details(y/n)??";
			cin>>answ;
			if((answ!='y')&&(answ!='n'))
			{
				cout<<"\nSorry, I did not understand. Please Enter Again: ";
				goto start;
			}
		}
		ftout.close();
	}
	if(z=='3')
	{ 
		base:
		;
		system("CLS");
		ifstream ftio;
		ofstream ftile;
		ftio.open("Travel.dat",ios::in);
		ftio.seekg(0);
		ftio.read((char*)&t,sizeof(t));
		if(!ftio)
		{
			cout<<"No entries!!";
		}
		else
		{
			while(ftio)
			{
				t.disp();
				ftio.read((char*)&t,sizeof(t));
			}
			ftio.close();
			int tcodeno,found=1;
			char confirm='n';
			cout<<"\nEnter the index number of the record you want to delete: ";
			cin>>tcodeno;
			ftio.open("Travel.dat",ios::in);
			ftile.open("temp2.dat",ios::out);
			ftio.seekg(0);
			ftio.read((char*)&t,sizeof(t));
			while(!ftio.eof())
			{
				if(t.gettcode()==tcodeno)
				{ 
					b=t;
					t.disp();
					redo:
					;
					cout<<"\n\t\tConfirm deletion(y/n): ";
					cin>>confirm;
					if(confirm!='y'&&confirm!='n')
					{
						cout<<"Sorry, I did not understand. Please Enter Again: ";
						goto redo;
					}
					if(confirm=='n')
					{
						ftile.write((char*)&t,sizeof(t));
					}
					found=0;
				}
				else
				{
					if(found==0)
					{
						sllno(b,t);
						b=t;
					}
					ftile.write((char*)&t,sizeof(t));
				}
				ftio.read((char*)&t,sizeof(t));
			}
			if(found=='f')
			cout<<"Record not found!!\n";
			ftio.close();
			ftile.close();
			remove("Travel.dat");
			rename("temp2.dat","Travel.dat");
			system("CLS");
			ftio.open("Travel.dat",ios::in);
			cout<<"\nNow the file contains:\n ";
			ftio.seekg(0);
			ftio.read((char*)&u,sizeof(u));
			if(!ftio)
			{
				cout<<"File is now empty.";
			}
			else
			{
				while(!ftio.eof())
				{
					u.disp();
					ftio.read((char*)&u,sizeof(u));
				}
			}
		}
		ftio.close();
		char x='n';
		cout<<"\n\t\tWant to delete another record(y/n)??:";
		cin>>x;
		do
		{
			if(x=='y')
			{ 
				goto base;
			}
			else if(x!='n'&&x!='y')
			{ 
				do
				{
					cout<<"\n\t\tDid not get you. Please enter again(y/n):";
					cin>>x;
					if(x=='n')
					{
						break;
					}
				}while(x!='y');
			}	
		}while(x!='n');
	}
	return 0;
}

int any(int n)
{ 
	srand(time(NULL));
	n=rand()%5;
	return n;
}

char *quotes(int n)
{ 
	char *quotes[]={"\t\tFight for what you have\n\t\tFight for what you want\n\t\tWin for what you can't\n\t\tLose for what you can", "\t\tBeing straightforward,\n\t\tis not being rude.\n\t\tBeing straightforward,\n\t\tis just being you.", "\t\tHappiness,\n\t\tnot everyone can have it\n\t\tnot everyone can grab it\n\t\tnot everyone can sort it\n\t\tnot everyone can give it!!", "\t\tSometimes it's life that let's u go away,\n\t\tSometimes it's you that let's you fade away......", "\t\tIt's hard to let go\n\t\tAnd its harder to hold on\n\t\tBut sometimes you just gotta move on..", "\t\tNever make promises, you can't keep \n\t\tCause sometimes they just become words,\n\t\tEasier to speak but harder to keep....", "\t\tNo matter how much, sometimes\n\t\tthe scent, the silence and the scene never gets too old....."};
	char *t;
	t=quotes[n];
	return t;
}

char *jokes(int n)
{ 
	char *jokes[]={"Did you hear about the actor who fell through the floorboards?- He was just going through a stage.","Why don't scientists trust atoms?- Because they make up everything.","Why did the yogurt go to the art exhibition?- Because it was cultured","Why did the Oreo go to the dentist?- Because he lost his filling.","\tWhat do you get from a pampered cow?- Spoiled milk.","What's a computer's favourite song??-An Algo-rhythm"};
	char *j;
	j=jokes[n];
	return j;
}

char *gk(int n)
{ 
	char *gk[]={"\t\tIn 2015,the UK became the first nation to allow the creation of babies from the DNA of three people.","In 2013, US Airways group and AMR cooperation mearged to become the worlds largest airline.","Mumbai is the largest city with a population of over 1 crore people.","'Hobby horse' was the name of the bicycle wich was the first mass produced item.","Kazakisthan is the largest land locked country."};
	char *g;
	g=gk[n];
	return g;
}

int dice(int n)
{ 
	srand(time(NULL));
	n=rand()%7;
	return n;
}

int randomfun()
{
	char *ptr;
	char ans;
	ans='y';
	int n=0;
	char ch;
	do
	{ 
		a:
		;
		system("CLS");
		cout<<"\n\t\tYour personal entertainment";
		cout<<"\n\n\t\t1. Roll a dice , see what u get!!!";
		cout<<"\n\t\t2. Wanna get motivated?? Read a few quotes.";
		cout<<"\n\t\t3. Sit back and laugh!! Jokes ahead !!";
		cout<<"\n\t\t4. Add something to your general knowledge";
		cout<<"\n\t\t5. Return to main menu";
		cout<<"\n\t\t___________________________________________";
		cout<<"\n\n\n\t\t Enter your choice.";
		cin>>ch;
		switch(ch)
		{ 
			case '1' :
				system("CLS");
				cout<<"\n\n\n\t\t";
				cout<<"\n\t\t___________________________________________";
				cout<<"\n\n\t\tAnd the number on your dice is.. ";
				n=dice(n);
				if(n==0)
				{
					n=1;
				}
				cout<<n;
				cout<<"\n\t\t___________________________________________";
				break;
	
			case '2' :
				system("CLS");
				cout<<"\n\n\t\t";
				cout<<"\n\t___________________________________________";
				cout<<"\n\t\t\n\t\t lets get motivated...\n\n";
				n=any(n);
				ptr=quotes(n);
				if(n==0)
				{
					n=1;
				}
				cout<<"\n\n"<<ptr;
				cout<<"\n\t___________________________________________";
				break;

			case '3' :
				system("CLS");
				cout<<"\n\n\t\t";
				cout<<"\n\t\t__________________________________________";
				cout<<"\n\n\t\t Ready for a laugh...!!!\n\n";
				n=any(n);
				ptr=jokes(n);
				if(n==0)
				{
					n=1;
				}
				cout<<"\n\n\t"<<ptr;
				cout<<"\n\t\t___________________________________________";
				break;

			case '4' :
				system("CLS");
				cout<<"\n\n\n\t\t";
				cout<<"\n\t\t___________________________________________";
				cout<<"\n\n\t\t Did you know????\n\n";
				n=any(n);
				ptr=gk(n);
				if(n==0)
				{
					n=1;
				}
				cout<<"\n\n\t"<<ptr;
				cout<<"\n\t\t___________________________________________";
				break;

			case '5' :
				n=0;
				break;

			default :
			cout<<"\n\t\t___________________________________________";
			cout<<"\n\t\tI did not understand.\n\t\ttry again.";
			cout<<"\n\t\t___________________________________________";
			delay(0.8);
			goto a;
		}
		if(n==0)
		{
			ans='n';
		}
		else
		{
			cout<<"\n\n\t\tStill Bored?? (y/n)... ";
			cin>>ans;
		}
		if(ans!='y'&&ans!='n')
		{
			while(ans)
			{
				if(ans=='y'||ans=='n')
					break;
				cout<<"\n\n\t\tEnter y or n:";
				cin>>ans;
			}
		}
	}while(ans=='y');
	return 0;
}

void Calculate()
{
	system("CLS");
	    int l = 0;

    
    while(1)
    {
        
        cout<<"\n Old Decimal Result: "<<result;
        cout<<"\n Old Integer Result: "<<intResult;

        
        switch(menu())
        {
            case 1: addition();
                    kl = 1;
                    break;

            case 2: subtraction();
                    kl = 1;
                    break;

            case 3: multiplication();
                    kl = 1;
                    break;

            case 4: division();
                    kl = 1;
                    break;

            case 5: mod();
                    kl = 1;
                    break;

            case 6: factorial();
                    kl = 1;
                    break;

            case 7: sine();
                    kl = 1;
                    break;

            case 8: cosine();
                    kl = 1;
                    break;

            case 9: tangent();
                    kl = 1;
                    break;

            case 10:logBasee();
                    kl = 1;
                    break;

            case 11:logBase10();
                    kl = 1;
                    break;

            case 12:eToPowerX();
                    kl = 1;
                    break;

            case 13:squareRoot();
                    kl = 1;
                    break;

            case 14:cubeRoot();
                    kl = 1;
                    break;

            case 15:power();
                    kl = 1;
                    break;

            case 16:absolute();
                    kl = 1;
                    break;

            case 17:sineInverse();
                    kl = 1;
                    break;

            case 18:cosineInverse();
                    kl = 1;
                    break;

            case 19:tangentInverse();
                    kl = 1;
                    break;

            case 20:ceilF();
                    kl = 1;
                    break;

            case 21:floorF();
                    kl = 1;
                    break;

            case 22:npr();
                    kl = 1;
                    break;

            case 23:ncr();
                    kl = 1;
                    break;

            case 24:clear();
                    break;

            case 25:l = 1;
                    break;

            default:
                    cout<<"\nInvalid Choice !";
        }
        
        cout<<"\nPress any button to continue......";
        getch();

        
        system("cls");

        
        if(l == 1)
            break;
    }
}

int main()
{
	loading();
	void Calender();
	int schedule();
	char c_1;
	snowy();
	system("CLS");
	cout<<"\n\n\n\n\n\n\t\tHi! I am Snowy, Your Personal Assistant.\n\n";
	do
	{
		if(c_1=='1'||c_1=='2'||c_1=='3'||c_1=='4')
		{
			cout<<"\n\n\n\n\n\n";
		}
		cout<<"\t\tYou are now in the Main Menu";
		cout<<"\n\t\t_______________________________________________________________"<<endl;
		cout<<"\t\t1.Go to Calender Section( See Upcoming Birthdays and Events )\n";
		cout<<"\t\t2.Show My Schedule( See Your Meetings and Travels )\n";
		cout<<"\t\t3.Bored?? Have some fun here...\n";
		cout<<"\t\t4.Calculate \n";
		cout<<"\t\t5.I'm done. Shutdown.";
		cout<<"\n\t\t_______________________________________________________________";
		cout<<"\n\n\t\tYour Orders Please(1-5): ";
		cin>>c_1;
		switch(c_1)
		{
			case '1':
				Calender();
				break;

			case '2':
				schedule();
				break;

			case '3':
				randomfun();
				break;

			case '4':
				Calculate();
				break;
				
			case '5':	
				snowy();
				exit(0);
					break;

			default:
				cout<<"\n\t\tSorry, I did not understand. Please Enter Again.";
				delay(3);
		}
		system("CLS");
	}while(c_1!='5');
	getch();
	return 0;
}
