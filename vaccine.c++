#include <iostream>
#include<iomanip>
#include <conio.h>
#include<string.h>
#include<fstream>
using namespace std;
static int reg_mem=0;
static int csvac=4;
static int cvvac=4;
static int D1=4;
static int D2=4;


//user inputs-----------------------------------------
class user{

protected:
int age;
char name[100];
char DOB[100];
char gender[100];
char aadhar[100];
char mobile[100];

public:
void adddetails();
};

void user::adddetails(){
    cout<<endl;
     cout<<setw(98)<<"***********************************************************\n"<<endl;
cout<<setw(70)<<"DETAILS"<<endl<<endl;
 reg_mem++;
    cout<<setw(50)<<"Enter name: ";
    cin.getline(name,100);
    cin.getline(name,100);
    cout<<endl;
    cout<<setw(49)<<"Enter DOB: ";
    cin>>DOB;
    cout<<endl;
    cout<<setw(49)<<"Enter age: ";
    cin>>age;
    cout<<endl;
    cout<<setw(57)<<"Enter Gender(M/F): ";
    cin.getline(gender,100);
     cin.getline(gender,100);
     cout<<endl;
    cout<<setw(55)<<"Enter Mobile No: ";
    cin.getline(mobile,100);
    cout<<endl;
    cout<<setw(55)<<"Enter Aadhar no: ";
    cin.getline(aadhar,100);
    cout<<endl;

}


//vaccine inputs--------------------------------------------------------------------------
class vaccine{
    protected:
    int vaccine_type;
    int dose;
    char date[100];
    public:
    void vac_det(){
        cout<<setw(73)<<"Enter the vaccine to be injected : "<<endl;
        cout<<setw(53)<<"1.COVIDSHIELD"<<endl;
        cout<<setw(49)<<"2.COVAXIN"<<endl;
        cout<<setw(57)<<"ENTER YOUR CHOICE: ";
        cin>>vaccine_type;

switch (vaccine_type)
{
case 1:
    vaccine V1;
    --V1;
    break;
    case 2:
    vaccine V2;
    -V2;
    break;
default:
cout<<"ENTER VALID OPTION:";
    break;
}
// if(csvac==0){
//     goto T;
// }
        cout<<endl;
        cout.setf(ios::right,ios::adjustfield);
        cout.width(60);
        cout<<"Enter Dose type:: "<<endl;
       cout<<setw(55)<<"1.DOSE 1"<<endl;
       cout<<setw(55)<<"2.DOSE 2"<<endl;

cout<<setw(58)<<"ENTER YOUR CHOICE: ";
cin>>dose;

switch (dose)
{
case 1:
    vaccine V3;
    +V3;
    cout<<endl;
    break;
    case 2:
    vaccine V4;
    ++V4;
    cout<<endl;
    break;
default:
cout<<setw(55)<<"ENTER VALID OPTION:";
    break;
}
        cout<<setw(62)<<"Enter date(DD/MM/YYYY): ";
        cin.getline(date,100);
        cin.getline(date,100);
        cout<<endl;
        cout<<setw(80)<<"SUCCESFULLY REGISTERED."<<endl;
        cout<<setw(67)<<"THANK YOU.";
        cout<<endl;
    }

    //vaccine updation operator overloading
    void operator--(){
        
        if(csvac==0){
            cout<<endl;
    cout<<setw(50)<<"VACCINES ARE NOT AVAILABLE."<<endl;
    cout<<endl;
    cout<<setw(50)<<"please Update vaccines.\n";
    cout<<endl;
        }
         csvac--;
}
void operator-(){
    
    if(cvvac==0){
         cout<<setw(50)<<"VACCINES ARE NOT AVAILABLE."<<endl;
    cout<<endl;
    cout<<setw(50)<<"please Update vaccines.\n";
    }
    
    cvvac--;
}
void operator+(){
    
    if(D1==0){
        cout<<setw(50)<<"VACCINES ARE NOT AVAILABLE."<<endl;
    cout<<endl;
    cout<<setw(50)<<"please Update vaccines.\n";
    }
    D1--;
}
void operator++(){
    
    if(D2==0){
        cout<<setw(50)<<"VACCINES ARE NOT AVAILABLE."<<endl;
    cout<<endl;
    cout<<setw(50)<<"please Update vaccines.\n";
    }
    D2--;
}
};

//vaccination and member display and updation
class vaccination_det:public vaccine,public user{

public:

void all_deti(){
    adddetails();
    vac_det();
}
void show_det(){
 cout<<endl;
    cout<<setw(22)<<name<<setw(16)<<DOB<<setw(16)<<age<<setw(13)<<gender<<setw(21)<<mobile<<setw(19)<<aadhar<<setw(15)<<vaccine_type<<setw(19)<<dose<<setw(15)<<date;
    cout<<endl;
}
void vaccaval(){
    cout<<endl;
    int back;
    int v;
    int uv,b=0;
    int v_choice,covaxin,covidshield;
    int Dose1,Dose2;
    cout<<setw(98)<<"***********************************************************\n"<<endl;
    cout<<setw(74)<<"VACCINE STATS"<<endl<<endl;
    cout<<endl;
    A:
    cout<<setw(50)<<"1.UPDATE VACCINES"<<endl
        <<setw(53)<<"2.VACCINES AVAILABLE"<<endl
        <<setw(39)<<"3.EXIT"<<endl;
do
{
    cout<<endl;
    cout<<setw(50)<<"ENTER YOUR CHOICE :-> ";
        cin>>v;
        cout<<endl;
     switch(v)
        {
        case 1:
cout<<endl;
cout<<setw(51)<<"1.UPDATE COVAXIN"<<endl;
cout<<setw(55)<<"2.UPDATE COVIDSHEILD"<<endl;
cout<<setw(50)<<"3.UPDATE DOSE 1"<<endl;
cout<<setw(50)<<"4.UPDATE DOSE 2"<<endl;
cout<<setw(41)<<"5.BACK"<<endl;
cout<<endl;
do{
    cout<<setw(60)<<"ENTER ACCORDING TO YOUR NEED: ";
cin>>v_choice;
cout<<endl;
switch (v_choice)
{
case 1:

cout<<endl;
    cout<<setw(55)<<"ENTER NUMBER OF VACCINES:";
    cin>>covaxin;
    cvvac+=covaxin;
    break;
case 2:
cout<<endl;
    cout<<setw(55)<<"ENTER NUMBER OF VACCINES:";
    cin>>covidshield;
    csvac+=covidshield;
    break;
case 3:
cout<<endl;
    cout<<setw(55)<<"ENTER NUMBER OF DOSES:";
    cin>>Dose1;
    D1+=Dose1;
    break;
case 4:
cout<<endl;
    cout<<setw(55)<<"ENTER NUMBER OF DOSES:";
    cin>>Dose2;
    D2+=Dose2;
    break;
case 5:
cout<<endl;
back=0;
break;
default:
    break;
}
}while(back!=0);
 cout<<setw(50)<<"Vaccines Updated."<<endl;
 cout<<endl;
  cout<<setw(98)<<"***********************************************************\n"<<endl;
 goto A;
break;
        
        case 2:
        cout<<setw(60)<<"AVAILABLE COVAXINES "<<setw(12)<<":-> "<<setw(5)<<cvvac<<endl;
        cout<<setw(61)<<"AVAILABLE COVIDSHIELD"<<setw(11)<<":-> "<<setw(5)<<csvac<<endl;
        cout<<setw(66)<<"AVAILABLE NUMBER OF DOSE 1"<<setw(6)<<" :-> "<<setw(5)<<D1<<endl;
        cout<<setw(67)<<"AVAILABLE NUMBER OF DOSE 2 "<<setw(5)<<":-> "<<setw(5)<<D2<<endl;
        cout<<endl;
        break;
        case 3:
        b=1;
        break;
        default:
        cout<<"ENTER VALID OPTION:";
            break;
        }

} while (b!=1);  
}
};

//userlogin--------------------------------------------------------------------------------------------

int userlogin(){
    char uname[30],upass[20];
 int ch,i=0,cap=0,capt=0;
 char temp[20]={"userpassword"};
cout<<endl;
cout<<setw(98)<<"***********************************************************\n"<<endl;
cout.setf(ios::right,ios::adjustfield);
    cout.width(70);
    cout<<"LOGIN\n"<<endl;
 cout<<setw(50)<<"ENTER USERNAME: ";
  gets(uname);
 cout<<endl;
 cout<<setw(50)<<"ENTER PASSWORD: ";
while((ch=getch()) != 13)
    {
        cout<<"*";
        upass[i]=ch;
        i++;
    }
    upass[i] = '\0';
    cap=rand();
    cout<<"\n\n"<<setw(50)<<"CAPTURE:-> "<<cap<<endl;
    cout<<setw(50)<<"PLEASE ENTER VALID CAPTURE :->   ";
    cin>>capt;
  if( (strcmp(uname,"user")==0) && (strcmp(upass,temp)==0) && cap==capt)
        return 1;
    else
        return 0;
}


//usermenu---------------------------------------------------------
void usermenu(){
cout<<endl;
cout<<setw(98)<<"***********************************************************\n"<<endl;
cout<<setw(80)<<"VACCINE MANAGEMENT SYSTEM\n"<<endl;
cout<<setw(98)<<"***********************************************************\n"<<endl;
cout.setf(ios::right,ios::adjustfield);
    cout.width(72);
    cout<<"MAIN MENU\n"<<endl;
    cout<<setw(48)<<"1.REGISTER YOURSELF\n"<<endl;
    cout<<setw(44)<<"2.VACCINE STATS\n"<<endl;
    cout<<setw(54)<<"3.DISPLAY MEMBERS DETAILS\n"<<endl;
    cout<<setw(34)<<"4.EXIT"<<endl;
    cout<<endl;


}

//main function-------------------------------------------------------------------------------------
int main()
{
    int a=0;
cout<<endl;
//user login
    int l=3;
    R:
    cout<<"\n"<<setw(80)<<"VACCINE MANAGEMENT SYSTEM\n"<<endl;
while(l>=1){
  int  c=userlogin();
     if(c==1)
        break;
    else
        cout<<"\n\n"<<setw(70)<<" WRONG PASSWORD OR USERNAME \n\n"<<setw(56)<<"YOU CAN TRY ONLY "<<l-1<<" TIMES MORE";
    l--;
  }
  if(l<1){
  cout<<endl<<setw(50)<<"YOU ARE BLOCKED FOR 30 SECONDS"<<endl;
    for(int i=30;i>=0;i--){
        cout<<endl<<setw(50)<<"TRY AGAIN AFTER "<<i<<"SECONDS"<<endl;
    }
     l=3;
    goto R;
  
  }
   cout<<"\n"<<setw(50)<<"LOGGED IN SUCCESSFULLY";
   cout<<endl;


//main menu------------------------------------------------------------------
int uch;
static int i=0;
T:
do
{
            usermenu();
            cout<<setw(50)<<"CHOOSE ACCORDING TO YOUR NEED : ";
            cin>>uch;
            vaccination_det U[10];

      switch(uch)
       {
         case 1:
         if(csvac==0&&cvvac==0&&D1==0&&D2==0){
            cout<<endl;
            cout<<setw(70)<<"SORRY! YOU NEED TO FIRST UPDATE VACCINES TO REGISTER MEMBERS."<<endl;
            cout<<endl;
         }
         else{
        U[i].all_deti();
        i++;
        }
         break;
        case 2:
               U->vaccaval(); 
                 break;
        case 3:
                 cout<<setw(98)<<"***********************************************************\n"<<endl;
                 cout<<setw(70)<<"MEMBER DETAILS"<<endl;
                 cout<<endl;
                 cout<<setw(50)<<"TOTAL VACCINATED MEMBERS: "<<reg_mem<<endl;
                 cout<<endl;
                 cout<<setw(15)<<"NAME"<<setw(25)<<"DATE OF BIRTH"<<setw(15)<<"AGE"<<setw(15)<<"GENDER"<<setw(20)<<"MOBILE NUMBER" <<setw(15)<<"AADHAR NO"<<setw(20)<<"VACCINE TYPE"<<setw(15)<<"DOSE"<<setw(12)<<"DATE"<<endl;
    cout<<endl;
                 for(i=0;i<reg_mem;i++)
                 U[i].show_det();

        break;
        default:
                 uch=0;
                  cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\tTHANK YOU!!"<<endl;
                  cout<<"\n\n\t\t\t\t\t****HAVE A NICE DAY*****";
                  exit(0);
       }
      }while(uch!=0);

}
   

