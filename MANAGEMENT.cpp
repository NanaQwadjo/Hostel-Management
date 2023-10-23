#include <iostream>
#include <windows.h>
#include <fstream>
#include <iomanip>
void menu();

class ManageMenu
{
protected:
//string user;

public:
    ManageMenu()
    {
        system("color 0A");
        //cout <<"\n\\n\n\n\n\n\n\n\n\n\n\t Enter Your name to continue as an Admin:";
        //cin >>user;
        system("CLS");
        menu();
    }

        ~ManageMenu(){}


};

using namespace std;
class customer{
public:
    string name , gender , address;
    int age,mobileNo,custNo;
    char all[999];


    void getdetail()
    {
    ofstream out ("Database.txt" , ios::app);
    {
    cout << "Enter Name : ";
    cin>> name;
    cout<< "Enter Age: ";
    cin >> age;
    cout<< "Enter Address: ";
    cin >> address;
    cout<< "Enter Mobile number: ";
    cin >> mobileNo;
    cout<< "Enter Customer ID: ";
    cin >> custNo;

    }
        out <<"\Name:" <<name << "\nAge:" << age << "\nAddress:"<< address << "\nMobile number:"<<mobileNo<<"\nCustomer:"<<custNo<< endl;
        out.close();
        cout <<"\SAVE \nNOTE: We save your details here!" << endl;
    }

    void showdetail()
    {
        ifstream in("Database.txt");
        {
            if(!in){
                cout << "File error! "  << endl;
            }
            while(!(in.eof())){
                in.getline(all,999);

            }
            in.close();
        }


    }


};
class Cabs{
    public:
int cabchoice;
int kilometer ;
float cabcost;
static float lastcab;


void Cabdetails(){

cout << "1. Rent a standard cab - Rs.15 for  1KM" << endl;
cout << "2. Rent a Luxury cab - Rs.25 per  1KM" << endl;
cout << "To calculate for your jounary " << endl;
cout << "Enter which kind of cab you wanted :" << endl;
cin>> cabchoice;
cout << "Enter kilometer you want to travel  :" ;
cin>> kilometer;

int hirecab;

if(cabchoice==1)
{
cabcost = kilometer * 15;
cout << "Your tour cost" << cabcost << " rupee a standard cab" << endl;
cout << "Press 1 to hire the cab or";
cout << "Pres 2 to hire another cab ";
cin>> hirecab;


if (hirecab==1){
    lastcab = cabcost;
    cout << "You have successfully hire standard cab " << endl;
    cout << "Goto menu and take the receipt " << endl;
}
else if (hirecab==2){
    Cabdetails();
}
else {
    cout << "Invalid Input! Redirecting to previous menu \nPleas wait  " << endl;
    system("CLS");
}

}
else if(cabchoice==2)
{
cabcost = kilometer * 25;
cout << "Your tour cost" << cabcost << "rupee a standard cab" << endl;
cout << "Press 1 to hire the cab or";
cout << "Pres 2 to hire another cab ";
cin>> hirecab;


if (hirecab==1){
    lastcab = cabcost;
    cout << "You have successfully hire standard cab " << endl;
    cout << "Goto menu and take the receipt " << endl;
}
else if (hirecab==2){
   Cabdetails();
}
else {
    cout << "Invalid Input! Redirecting to previous menu \nPleas wait  " << endl;
    system("CLS");
    Cabdetails();

}


}
else {
cout << "Invalid Input! Redirecting to Main menu \nPleas wait  " << endl;
system("CLS");
Cabdetails();
cout << endl;

}


}


};

float Cabs::lastcab;
class Booking{
    public:
int hotelchoice;
int packhotel;
static float hotelcost;



        void hotel()
        {
           cout <<"--------------Names of the hotel -------------" << endl;
           cout << "                1.Avendra                          " << endl;
           cout << "                2.ChoiceYou                        " << endl;
           cout << "                3.ElephantBay                      " << endl;


           cout <<"--------------Names of the hotel -------------" << endl;
           cout << "Currently we are collaborated with above hotels " << endl;
           cout << "Press any key to back or \nEnter number of the hotel you want to book: ";
           cin >> hotelchoice;
           system("CLS");
            if(hotelchoice==1){
                cout << "Package offered by Avendra \n " << endl;
                cout << "1.Standard Pack " << endl;
                cout << "2.Premium  Pack " << endl;
                cout << "3.Luxury   Pack " << endl;

                cout <<"\Press anothee key to back or \nEnter package number you want to book:";
                cin >>packhotel;

                if (packhotel==1){
                hotelcost == 5000.00;
                cout << "You have successfully hire standard cab " << endl;
                cout << "Goto menu and take the receipt " << endl;

                }
                else if (packhotel==2){
                    hotelcost = 10000.00;
                    cout << "You have successfully hire Premium  cab " << endl;
                    cout << "Goto menu and take the receipt " << endl;
                }
                else if (packhotel==3){
                    hotelcost = 15000.00;
                    cout << "You have successfully hire  Luxury  cab " << endl;
                    cout << "Goto menu and take the receipt " << endl;
                }
                else{
                     cout << "Invalid Input! Redirecting to previous menu \nPleas wait  " << endl;
                    system("CLS");
                    hotel();
                    }

            }

            else if (hotelchoice==2){

                cout << "----------WELCOME TO HOTEL CHOICEYOU -------" << endl;
                cout << "Package offered by ChoiceYou:\n" << endl;
                cout << "1.Family Pack " << endl;
                cout << "\t Rs.15000.00 for a day " << endl;
                cout << "2.Couple Pack " << endl;
                cout << "\t Rs.1000.00 for a day " << endl;
                cout << "2.Single  Pack " << endl;
                cout << "\t Rs.5000.00 for a day " << endl;

                cout <<"\Press another key to back or \nEnter package number you want to book:";
                cin >>packhotel;

                if (packhotel==1){
                hotelcost == 15000.00;
                cout << "You have successfully booked Family Pack at ChoiceYou  " << endl;
                cout << "Goto menu and take the receipt " << endl;

                }
                else if (packhotel==2){
                    hotelcost = 1000.00;
                    cout << "You have successfully booked Couple Pack  at ChoiceYou " << endl;
                    cout << "Goto menu and take the receipt " << endl;
                }
                else if (packhotel==3){
                    hotelcost = 5000.00;
            cout << "You have successfully booked Single  Pack at ChoiceYou  " << endl;
            cout << "Goto menu and take the receipt " << endl;
        }
        else{
             cout << "Invalid Input! Redirecting to previous menu \nPleas wait  " << endl;
            system("CLS");
            hotel();
            }


        }
    else if (hotelchoice==3){
        cout << "----------WELCOME TO HOTEL ELEPHANTBAY -------" << endl;

        cout <<"\Press another key to back or \nPress 1 to book this special  package :";
        cin >>packhotel;

        if (packhotel==1){
        hotelcost == 5000.00;
        cout << "You have successfully hire booked ElephantBay special Pack " << endl;
        cout << "Goto menu and take the receipt " << endl;

        }
        else{
             cout << "Invalid Input! Redirecting to previous menu \nPleas wait  " << endl;
            system("CLS");
            hotel();
            }

    }


}




};
float Booking::hotelcost;
class Charges:public Booking ,Cabs,customer
{

public:
    void printBill()
    {
        ofstream outf("receipt.txt");
        {
            outf << "-------------ABC Travel Agency----------" << endl;
            outf <<"--------------Receipt--------------------" << endl;
            outf<<"___________________________________________" << endl;


            outf<< "Customer ID:" << customer::custNo << endl << endl;
            outf<<"Description \t\t Total" << endl;
            outf<<"Hotel cost:\t\t" << fixed << setprecision(2) << Booking::hotelcost << endl;
            outf<<"Travel (cab) cost:\t\t" << fixed << setprecision(2) << Cabs::lastcab << endl;

            outf<<"___________________________________________" << endl;
            outf<< "Total Charge:\t\t"<< fixed <<  setprecision(2) << Booking::hotelcost + Cabs::lastcab << endl;
            outf<<"___________________________________________" << endl;
            outf<< "------------------THANK YOU---------------" << endl;



        }
    outf.close();


    }

    void showBill()
    {
        ifstream inf("receipt.txt");
        {
            if (!inf){
                cout << "File opening error!" << endl;
            }
            while(!(inf.eof())){
                inf.getline(all,999);
                cout << all << endl;
            }
       inf.close();
        }

    }


};

void menu()
{
    int mainChoice;
    int inchoice ;
    int gotoMenu;


    cout <<"\t\t    ABC Travels \n" << endl;
    cout << "t\---------------------Main Menu -------------" << endl;
    cout << "\t|\tCustomer Management -> 1\t|" << endl;
    cout << "\t|\tCabs Management     -> 2\t|" << endl;
    cout << "\t|\tBooking Hostel  -> 3\t|" << endl;
    cout << "\t|\tChargers  & Bill    -> 4\t|" << endl;
    cout << "\t|\tExit                -> 5\t|" << endl;
    cout << "\t|\t\t\t\t\t\t|" << endl;
    cout << "\t|---------------------------------------------" << endl;

    cout <<"\nEnter Your Choice :";
    cin >> mainChoice;
    system("CLS");

    customer a2;
    Cabs a3;
    Booking a4;
    Charges a5;

    if (mainChoice==1){
        cout << "------Customers --------\n" << endl;
        cout << "1.  Enter New Customer " << endl;
        cout << "2.  See Database  Customers " << endl;


        cout << "\nEnter Choice:  ";
        cin>> inchoice;
        system("CLS");
        if(inchoice==1){

            a2.getdetail();
        }
        else if (inchoice==2){
            a2.showdetail();
        }
        else {
            cout << "Invalid Input! Redirecting to previous menu \nPleas wait  " << endl;
            system("CLS");
           menu();
        }

    cout <<"\nPress 1 to REdirect main menu:";
    cin >> gotoMenu;
     system("CLS");

     if (gotoMenu==1){
        menu();
     }
     else {
        menu();
     }
    }

else if (mainChoice==2){
    a3.Cabdetails();
}
else if (mainChoice==3){
        cout << " ---> Book a luxury Hotel using the system  <-----" << endl;
     a4.hotel();

}
else if (mainChoice==4){
    cout << "---> Get your receipt  <--- " << endl;
    a5.printBill();
    cout << "Your receipt is already printed you can get it file path\n" << endl;
    cout << "to display your receipt int hr screen , Enter 1: or Enter another key to back main menu:";

    cin >>gotoMenu;
    if(gotoMenu==1){
        system("CLS");
        a5.showBill();
        cout << "\nPress 1 to redirect main menu:";
        cin >> gotoMenu;
        system("CLS");
        if(gotoMenu==1){
            menu();

        }
        else{
            menu();
        }

    }
    else {
    system("CLS");
    menu();

    }
}
else if(mainChoice==5){
    cout <<"-----GOOD BYE----"<< endl;
    Sleep(999);
     system("CLS");
    menu();
}
else {
        cout << "Invalid Input! Redirecting to previous menu \nPleas wait  " << endl;
        system("CLS");
        Sleep(999);
        menu();
    }

}

int main()
{
ManageMenu startobj;
customer c;
c.getdetail();
Cabs cab;
cab.Cabdetails();
Booking book;
book.hotel();
Charges charges;
charges.printBill();
menu();


    return 0;
}
