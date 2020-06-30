#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<string>	

using namespace std;

//STRUCTURE EXPENSE


struct expense
{
float petrol_cost;
float maintenance_cost;
float government_tax;
} ;

//CLASS CAR

class car
{
public:
char accident_gradec;
char car_type[20];
char companyc[20];
char name_c[20];
float car_cost;
int car_number;
int number_of_daysc;
float total_costc;
float finec;

void readc();
void displayc();
void totalcostc();
void calcfinec();
};

/*
FUNCTIONS
*/

void car::readc()
{
cout<<"\n"<<"CAR DATA READING";
char c='n';

cout<<"\n"<<"Enter the borrowers name:";
cin.ignore();
cin.getline(name_c,20);

cout<<"\n"<<"Enter the car company:";

cin.getline(companyc,20);

cout<<"\n"<<"Enter the car number:";
cin>>car_number;
cout<<"\n"<<"Enter the number of days on rent:";
cin>>number_of_daysc;
cout<<"\n"<<"Enter the car type (FR,MR,FF,4WD):";
//function for reading car data
cin>>car_type;
cout<<"\n"<<"Enter the car cost:";
cin>>car_cost;
cout<<"\n"<<"Has an accident been involved? (y/n):";
cin>>c;
if(c=='y'||c=='Y')
{
		calcfinec();
}
else
{
		accident_gradec='o';
finec=0.0;
}
cout<<"\n"<<"CAR DATA READING ENDED"<<"\n";
}

//Function to calculate car fine
void car::calcfinec()
{
	cout<<"\n"<<"CAR FINE BEING CALCULATED";
cout<<"\n"<<"Enter the accident grade(s- small accident)(m- medium accident)(b- big accident):";
cin>>accident_gradec;
float d;
if(strcmp(car_type,"FF")==0){
	d=10;
}
else if(strcmp(car_type,"FR")==0){
	d=20;
}
else if(strcmp(car_type,"4WD")==0){
	d=30;
}
else if(strcmp(car_type,"MR")==0){

	d=40;
}
else{
	d=1;
}

float e;
if((accident_gradec=='s')||(accident_gradec=='S'))
{
	e=3;
}
else if((accident_gradec=='m')||(accident_gradec=='M'))
{
	e=5;
}
else if((accident_gradec=='b')||(accident_gradec=='B'))
{
	e=8;
}
else
{
	e=1;
}
//Formulae used to calculate fine  car_cost*(accident_grade/100)*company value
finec=float(car_cost*(e/100)*d);
cout<<"\n"<<"CAR FINE CALCULATED"<<"\n";
}

//total cost calculation
void car::totalcostc()
{
	cout<<"\n"<<"TOTAL COST FOR CAR BEING CALCULATED.....";
	//Function to calculate car totalcost
	total_costc=(1000*number_of_daysc)+finec;
	cout<<"\n"<<"TOTAL COST CALCULATED"<<"\n";
}

//Displaying the car type

void car::displayc()
{
	cout<<"\n\t\t"<<"DISPLAYING CAR DATA";
cout<<"\n"<<"Name of the borrower of the car:";
puts(name_c);
cout<<"\n"<<"Number of days rented:"<<number_of_daysc;
cout<<"\n"<<"Cost of borrowed car:"<<car_cost;
cout<<"\n"<<"Car number is:"<<car_number;
cout<<"\n"<<"The car company is:";
puts(companyc);
cout<<"\n"<<"The car type is:"<<car_type;
if(accident_gradec=='o')
{
cout<<"\n"<<"The borrower was not involved in any accident";	//Function to display car details
cout<<"\n"<<"fine=0";
}
else
{
cout<<"\n"<<"THE BORROWER WAS INVOLVED IN AN ACCIDENT";
cout<<"\n"<<"THE FINE IS:"<<finec<<"Rupees";
}
cout<<"\n"<<"The total cost is:"<<total_costc<<"Rupees";
cout<<"\n"<<"END OF CAR DATA DISPLAY"<<"\n";
}
//CLASS MOTORBIKE

class motorbike
{
public:
char accident_gradeb;
char companyb[20];
char name_b[20];
int powerb;
double bike_cost;
int bike_number;
int number_of_daysb;
double total_costb;
double fineb;

void readb();
void displayb();
void totalcostb();
void calcfineb();
};

//Funtions

void motorbike::readb()
{
cout<<"MOTORBIKE DATA READING";
char c='n';
cin.ignore();
cout<<"\n"<<"Enter the borrowers name:";
cin.getline(name_b,20);
cout<<"\n"<<"Enter the motorbike company:";
cin.getline(companyb,20);
cout<<"\n"<<"Enter the motorbike number:";
cin>>bike_number;
cout<<"\n"<<"Enter the number of days on rent:";
cin>>number_of_daysb;
cout<<"\n"<<"Enter the Motorbike power (cc):";
cin>>powerb;
cout<<"\n"<<"Enter the motorbike cost:";
cin>>bike_cost;
cout<<"\n"<<"Has an accident been involved? (y/n):";
cin>>c;
if(c=='y'||c=='Y')
{
		calcfineb();
}
else
{
		accident_gradeb='o';
fineb=0;
}
cout<<"\n"<<"MOTORBIKE DATA READING ENDED"<<"\n";
}
// Calaculate fine based on power

void motorbike::calcfineb()
{
	cout<<"\n"<<"MOTORBIKE FINE BEING CALCULATED";
cout<<"\n"<<"Enter the accident grade(s- small accident)(m- medium accident)(b- big accident):";
cin>>accident_gradeb;
int d;
if(powerb>700)
	d=40;
else if(600<powerb<700)
	d=30;
else if(400<powerb<600)
	d=20;
else
	d=1;

int e;
if((accident_gradeb=='s')||(accident_gradeb=='S'))
{
	e=3;
}
else if((accident_gradeb=='m')||(accident_gradeb=='M'))
{
	e=5;
}
else if((accident_gradeb=='b')||(accident_gradeb=='B'))
{
	e=8;
}
else
{
	e=1;
}
// formulae for calculating fine Fine=bikecost*(accidentgrade/100)*powerb
fineb=double(bike_cost*(e/100)*d);
cout<<"\n"<<"MOTORBIKE FINE CALCULATED"<<"\n";
}

//Total cost

void motorbike::totalcostb()
{
	cout<<"\n"<<"TOTAL COST FOR MOTORBIKE BEING CALCULATED";
	//Function to calculate motorbike totalcost
	total_costb=500*number_of_daysb+fineb;
	cout<<"\n"<<"TOTAL COST CALCULATED"<<"\n";
}

//display function

void motorbike::displayb()
{
	cout<<"\n"<<"DISPLAYING MOTORBIKE DATA";
cout<<"\n"<<"Name of the borrower of the Motorbike:";
puts(name_b);
cout<<"\n"<<"Number of days rented:"<<number_of_daysb;
cout<<"\n"<<"Cost of borrowed motorbike:"<<bike_cost;
cout<<"\n"<<"Motorbike number is:"<<bike_number;
cout<<"\n"<<"The motorbike company is:";
puts(companyb);
cout<<"\n"<<"The motorbike power is:"<<powerb<<" cc";
//Function to display motorbike data
if(accident_gradeb=='o')
{
cout<<"\n"<<"The borrower was not involved in any accident";	//Function to display car details
cout<<"\n"<<"fine=0";
}
else
{
cout<<"\n"<<"THE BORROWER WAS INVOLVED IN AN ACCIDENT";
cout<<"\n"<<"THE FINE IS:"<<fineb<<"Rupees";
}
cout<<"\n"<<"The total cost is:"<<total_costb<<"Rupees";
cout<<"\n"<<"END OF MOTORBIKE DATA DISPLAY"<<"\n";
}

//BASE CLASS JCB

class JCB
{
	public:
	int no_of_jcb;
	int no_of_daysjcb;
void readjcb()
{
	cout<<"\n"<<"Enter the number of JCB's Rented:";
	cin>>no_of_jcb;
	cout<<"\n"<<"Enter the number of days rented:";
	cin>>no_of_daysjcb;
cout<<"\n";
}
void displayjcb()
{
cout<<"\n"<<"The number of JCB’s rented is:"<<"\n"<<no_of_jcb;
cout<<"\n"<<"The number of days rented is:"<<"\n"<<no_of_daysjcb;
}
};
//BASE CLASS BUS

class BUS
{
	public:
	int no_of_bus;
	int no_of_daysbus;
void readbus()
{
	cout<<"\n"<<"Enter the number of Buses Rented:";
	cin>>no_of_bus;
	cout<<"\n"<<"Enter the number of days rented:";
	cin>>no_of_daysbus;
cout<<"\n";
}
void displaybus()
{
cout<<"\n"<<"The number of Buses rented is:"<<"\n"<<no_of_bus;
cout<<"\n"<<"The number of days rented is:"<<"\n"<<no_of_daysbus;
}
};
// BASE CLASS VAN

class VAN
{
	public:
	int no_of_van;
int no_of_daysvan;
void readvan()
{
	cout<<"\n"<<"Enter the number of Vans Rented:";
	cin>>no_of_van;
	cout<<"\n"<<"Enter the number of days rented:";
	cin>>no_of_daysvan;
cout<<"\n";
}
void displayvan()
{
cout<<"\n"<<"The number of Vans rented is:"<<"\n"<<no_of_van;
cout<<"\n"<<"The number of days rented is:"<<"\n"<<no_of_daysvan;
cout<<"\n";
}
};
//DERIVED CLASS HEAVY

class heavy: public JCB, public BUS, public VAN
{
	public:
	char name_of_borrowerh[20];
	double total_costh;
	void readh();
	void totalcosth();
void displayh();
};


void heavy::readh()
{
	cout<<"\n"<<"ENTERING THE HEAVY VEHICLE DATA";
cout<<"\n"<<"Enter the name of the heavy vehicle borrower:";
cin.getline(name_of_borrowerh,20);
readjcb();
readbus();
readvan();
totalcosth();
cout<<"\n"<<"END OF HEAVY VEHICLE DATA ENTRY"<<"\n";
}

void heavy::totalcosth()
{
	cout<<"\n"<<"CALCULATING HEAVY VEHICLE TOTALCOST";
total_costh=(no_of_jcb*no_of_daysjcb*500)+
( no_of_bus*no_of_daysbus*400)+
( no_of_van*no_of_daysvan*300);
cout<<"\n"<<"TOTAL COST CALCULATED"<<"\n";
}

void heavy::displayh()
{
	cout<<"\n"<<"DISPLAYING HEAVY VEHICLE DATA";
cout<<"\n"<<"The name of the borrower of the heavy vehicle is:";
puts(name_of_borrowerh);
cout<<"\n"<<"The total cost is:"<<total_costh<<" Rupees";
displayjcb();
displaybus();
displayvan();
cout<<"\n"<<"END OF HEAVY VEHICLE DISPLAY"<<"\n";
}


int main()
{
	car ca;
	motorbike moto;
//Variable declaration
int i,j,k;
int L,m,n;
float t1=0,t2=0,t3=0,tot=0;
float total_expenses;
char abc;
cout<<"\t\t\t"<<"WELCOME TO THE VEHICLE DATA MANAGEMENT SYSTEM";
ofstream fout1;
fout1.open("details.txt",ios::out|ios::app);
cout<<"\n"<<"How many car records must be entered:"<<"\a";
cin>>i;
cout<<"\n"<<"How many motorbike records must be entered:"<<"\a";
cin>>j;
cout<<"\n"<<"How many heavy vehicle records must be entered:"<<"\a";
cin>>k;
car u[10];
motorbike v[10];
heavy w[10];
L=i;
m=j;
n=k;
fout1.seekp(0);
for(i=0;i<L;i++)
//Loop to process car rental data
{
	abc='n';
u[i].readc();
u[i].totalcostc();
t1=t1+u[i].total_costc;
cout<<"\n"<<"Do you want to see the entered car data? (y/n):";
cin>>abc;
if(abc=='y'||abc=='Y')
{
	u[i].displayc();
}
	fout1<<"\n\t\t"<<"DISPLAYING CAR DATA";
fout1<<"\n"<<"Name of the borrower of the car:";
fout1<<u[i].name_c;
fout1<<"\n"<<"Number of days rented:"<<u[i].number_of_daysc;
fout1<<"\n"<<"Cost of borrowed car:"<<u[i].car_cost;
fout1<<"\n"<<"Car number is:"<<u[i].car_number;
fout1<<"\n"<<"The car company is:";
fout1<<u[i].companyc;
fout1<<"\n"<<"The car type is:"<<u[i].car_type;
if(u[i].accident_gradec=='o')
{
fout1<<"\n"<<"The borrower was not involved in any accident";	//Function to display car details
fout1<<"\n"<<"fine=0";
}
else
{
fout1<<"\n"<<"THE BORROWER WAS INVOLVED IN AN ACCIDENT";
fout1<<"\n"<<"THE FINE IS:"<<u[i].finec<<" Rupees";
}
fout1<<"\n"<<"The total cost is:"<<u[i].total_costc<<"Rupees";
}
fout1<<"\nThe total profit on car rent:"<<t1<<"Rupees\n";
fout1.close();

ofstream fout2;
fout2.open("accb.txt",ios::out|ios::app);
for(j=0;j<m;j++)
//Loop to process motorbike rental data
{
	abc='n';
	v[j].readb();
v[j].totalcostb();
t2=t2+v[j].total_costb;
cout<<"\nDo you want to see the entered motorbike data(y/n):";
cin>>abc;
if(abc=='y'||abc=='Y')
{
	v[j].displayb();
}

fout2<<"\n"<<"DISPLAYING MOTORBIKE DATA";
fout2<<"\n"<<"Name of the borrower of the Motorbike:";
fout2<<v[j].name_b;
fout2<<"\n"<<"Number of days rented:"<<v[j].number_of_daysb;
fout2<<"\n"<<"Cost of borrowed motorbike:"<<v[j].bike_cost;
fout2<<"\n"<<"Motorbike number is:"<<v[j].bike_number;
fout2<<"\n"<<"The motorbike company is:";
fout2<<v[j].companyb;
fout2<<"\n"<<"The motorbike power is:"<<v[j].powerb<<" cc";
//Function to display motorbike data
if(v[j].accident_gradeb=='o')
{
fout2<<"\n"<<"The borrower was not involved in any accident";	//Function to display car details
fout2<<"\n"<<"fine=0";
}
else
{
fout2<<"\n"<<"THE BORROWER WAS INVOLVED IN AN ACCIDENT";
fout2<<"\n"<<"THE FINE IS:"<<v[j].fineb<<"Rupees";
}
fout2<<"\n"<<"The total cost is:"<<v[j].total_costb<<"Rupees";
}

fout2<<"\nThe total profit on motorbike rent: "<<t2<<"Rupees\n";
fout2.close();

ofstream fout3;
fout3.open("heavy_vehicles.txt",ios::out|ios::app);
for(k=0;k<n;k++)
//Loop to process heavy vehicle rental data
{
	abc='n';
w[k].readh();
	t3=t3+w[k].total_costh;
cout<<"\nDo you want to see the entered heavy vehicle data(y/n):";
cin>>abc;
if(abc=='y'||abc=='Y')
{
		w[k].displayh();
}
}
fout3<<"\nThe total profit on heavyvehicle rent:"<<t3<<"Rupees\n";
fout3.close();
expense exp;
cout<<"\nENTER THE MONTHLY EXPENSES DATA";
//Entering the business expenses
cout<<"\nEnter the petrol/diesel cost:";
cin>>exp.petrol_cost;
cout<<"\nEnter the maintenance cost:";
cin>>exp.maintenance_cost;
cout<<"\nEnter the government taxloss:";
cin>>exp.government_tax;
tot=t1+t2+t3-(exp.petrol_cost+exp.maintenance_cost+exp.government_tax);
fout3<<"\n\aTHE CURRENT MONTHLY PROFIT:"<<tot<<"Rupees\n";
abc='n';
cout<<"\nDo you wish to see the accident records(y/n):";
cin>>abc;
if(abc=='y'||abc=='Y')
{
	ifstream fin1;
	fin1.open("details.txt",ios::in);
fin1.seekg(0);
while(fin1)
{
	fin1.read((char*)&ca,sizeof(ca));
	ca.displayc();
}
fin1.close();
cout<<"\nAll car accident Records Displayed"<<endl;
ifstream fin2;
fin2.open("accb.txt",ios::in);
fin2.seekg(0);
while(fin2)
{
	fin2.read((char*)&moto,sizeof(moto));
	moto.displayb();
}
fin2.close();
cout<<"\nAll motorbike accident Records Displayed"<<endl;
}
cout<<"\n\nEND OF PROGRAM";

return(0);
//END

}
