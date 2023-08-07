#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include <string>
using namespace std;

int choice1 = 0;


struct cattle               //Creating a cattle structure
{

    int ID;                      //Declaring memebre variables
    char gender = '0';
    int birthYear = 0;
    char breed[20] = "0";
    char Registered_Date[10] = "0";

    cattle* next = NULL;
    int getId();

};


struct vaccine {       //Creating a vaccine structure     

    char dateOfVaccination[10] = "0";    //Declaring member variables
    char VaccineName[20] = "0";
};

struct patientCattle {      //Creating a patient cattle structure


    int ID;                 //Declaring member variables
    char gender = '0';
    int birthYear = 0;
    char breed[20] = "0";
    patientCattle* next;
};


class linkedlist    //creating a linked list class
{

    cattle* head, * last;   //Declaring class variables
    int size = 0;
    int ID2 = 1;

public:
    linkedlist()        //constructor
    {
        head = NULL;
        last = NULL;
        int size = 0;
    }

    cattle input();         //Declaring member functions
    void insertatend();
    void listofcattle();
    char departmentname[50] = "0";
    void deleteAt();
    void deleteFirst();
    void deleteLast();
    vaccine VaccineDetails();


};

class linkedqueue {             //creating a linked queue class
    patientCattle* head, * last;
    int size = 0;

public:
    linkedqueue() {         //constructor
        head = NULL;
        last = NULL;
        size = 0;
    }

    void deleteFirst();         //Declaring member functions
    patientCattle inputDetails();
    void insertatend();

};

void linkedqueue::deleteFirst() {  //implementing delete first function

    if (head == NULL)
        cout << "List is empty" << endl;
    else {
        patientCattle* CP = head;  //declaroing a patient cattle CP

        if (size == 1) {
            delete CP;
            head = NULL;
            last = NULL;
            size = 0;
        }
        else {
            head = head->next;
            delete CP;
            size--;
        }
        cout << "\n----CATTLE REMOVED----" << endl;

    }



}


patientCattle linkedqueue::inputDetails() {
    int flag = 0;
    patientCattle* CP = new patientCattle();
    cout << "\n ---PLEASE ENTER DATA FOR CATTLE---\n";

    cout << "\n\t1.ID of the cattle  : ";
    cin >> CP->ID;
again:
    cout << "\t2.Breed (Kinniya/Thamankaduwa/Sahiwal/Cape/Hatton/Friesian/Jersey/Khillari/Australian Milking Zebu):   ";

    cin >> CP->breed;
    if ((strcmp(CP->breed, "Kinniya") == 0) || (strcmp(CP->breed, "Thamankaduwa") == 0) || (strcmp(CP->breed, "Sahiwal") == 0) || (strcmp(CP->breed, "Cape") == 0) ||
        (strcmp(CP->breed, "Hatton") == 0) || (strcmp(CP->breed, "Friesian") == 0) || (strcmp(CP->breed, "Jersey") == 0) || (strcmp(CP->breed, "Khillari") == 0) ||
        (strcmp(CP->breed, "Australian Milking Zebu") == 0))
        flag = 1;
    if (flag == 0)
    {
        cout << "\n   Invalid Breed type Try Again..\n\n";
        goto again;

    }
    cout << "\t3.Gender(m/f)                : ";
    cin >> CP->gender;
    cout << "\t4.Year of birth              : ";
    cin >> CP->birthYear;

    cout << "\n----CATTLE ADDED TO THE CLINIC---" << endl;


    return *CP;
}

void linkedqueue::insertatend()
{
    patientCattle* CP = new patientCattle();
    *CP = inputDetails();
    if (CP->ID == 0)
        return;

    if (head == NULL)
    {
        head = CP;
        last = CP;
        CP->next = NULL;
    }
    else
    {
        CP->next = NULL;
        last->next = CP;
        last = CP;
    }
    system("cls");


}

int readnumber()
{
    char b[20];
    cin.getline(b, sizeof(b));
    return atoi(b);
}

cattle linkedlist::input()
{
    int flag = 0;
    cattle* p = new cattle();
    cout << "\n\n  PLEASE ENTER DATA FOR CATTLE \n\n";

again:
    cout << "   Breed (Kinniya/Thamankaduwa/Sahiwal/Cape/Hatton/Friesian/Jersey/Khillari/Australian Milking Zebu):   ";

    cin >> p->breed;
    if ((strcmp(p->breed, "Kinniya") == 0) || (strcmp(p->breed, "Thamankaduwa") == 0) || (strcmp(p->breed, "Sahiwal") == 0) || (strcmp(p->breed, "Cape") == 0) ||
        (strcmp(p->breed, "Hatton") == 0) || (strcmp(p->breed, "Friesian") == 0) || (strcmp(p->breed, "Jersey") == 0) || (strcmp(p->breed, "Khillari") == 0) ||
        (strcmp(p->breed, "Australian Milking Zebu") == 0))
        flag = 1;
    if (flag == 0)
    {
        cout << "\n   Invalid Breed type Try Again..\n\n";
        goto again;

    }
    cout << "   Gender(m/f)                : ";
    cin >> p->gender;
    cout << "   Year of birth              : ";
    cin >> p->birthYear;
    cout << "   Registered date(DD/MM/YY)  : ";
    cin >> p->Registered_Date;

    cout << "ID is  :" << ID2 << endl;


    p->ID = ID2;
    ID2++;


    return *p;
}



int readnumber()
{
    char b[20];
    cin.getline(b, sizeof(b));
    return atoi(b);
}

cattle linkedlist::input()
{
    int flag = 0;
    cattle* p = new cattle();
    cout << "\n\n  PLEASE ENTER DATA FOR CATTLE \n\n";

again:
    cout << "   Breed (Kinniya/Thamankaduwa/Sahiwal/Cape/Hatton/Friesian/Jersey/Khillari/Australian Milking Zebu):   ";

    cin >> p->breed;
    if ((strcmp(p->breed, "Kinniya") == 0) || (strcmp(p->breed, "Thamankaduwa") == 0) || (strcmp(p->breed, "Sahiwal") == 0) || (strcmp(p->breed, "Cape") == 0) ||
        (strcmp(p->breed, "Hatton") == 0) || (strcmp(p->breed, "Friesian") == 0) || (strcmp(p->breed, "Jersey") == 0) || (strcmp(p->breed, "Khillari") == 0) ||
        (strcmp(p->breed, "Australian Milking Zebu") == 0))
        flag = 1;
    if (flag == 0)
    {
        cout << "\n   Invalid Breed type Try Again..\n\n";
        goto again;

    }
    cout << "   Gender(m/f)                : ";
    cin >> p->gender;
    cout << "   Year of birth              : ";
    cin >> p->birthYear;
    cout << "   Registered date(DD/MM/YY)  : ";
    cin >> p->Registered_Date;

    cout << "ID is  :" << ID2 << endl;


    p->ID = ID2;
    ID2++;


    return *p;
}




vaccine linkedlist::VaccineDetails() {
    int ID = 1;
    int flag = 0;
    vaccine* v = new vaccine();


    cout << "\n-----Vaccination details--------" << endl;
    cout << "\n\t1. Enter the ID of the cattle: ";
    cin >> ID;



    cout << "\t2. Enter the name of the vaccine(FMD/HS/Black Quarter (BQ)/Brucellosis/Theileriosis/Anthrax/IBR/Rabies) : ";


    cin >> v->VaccineName;
    if ((strcmp(v->VaccineName, "FMD") == 0) || (strcmp(v->VaccineName, "HS") == 0) || (strcmp(v->VaccineName, "Black Quarter (BQ) ") == 0) || (strcmp(v->VaccineName, "Brucellosis ") == 0) ||
        (strcmp(v->VaccineName, "Theileriosis") == 0) || (strcmp(v->VaccineName, "Anthrax") == 0) || (strcmp(v->VaccineName, "IBR") == 0) || (strcmp(v->VaccineName, "Rabies") == 0))

        flag = 1;


    cout << "\t3. Enter the date of vaccination(DD/MM/YY): ";
    cin >> v->dateOfVaccination;

    return*v;
}



int readnumber()
{
    char b[20];
    cin.getline(b, sizeof(b));
    return atoi(b);
}

cattle linkedlist::input()
{
    int flag = 0;
    cattle* p = new cattle();
    cout << "\n\n  PLEASE ENTER DATA FOR CATTLE \n\n";

again:
    cout << "   Breed (Kinniya/Thamankaduwa/Sahiwal/Cape/Hatton/Friesian/Jersey/Khillari/Australian Milking Zebu):   ";

    cin >> p->breed;
    if ((strcmp(p->breed, "Kinniya") == 0) || (strcmp(p->breed, "Thamankaduwa") == 0) || (strcmp(p->breed, "Sahiwal") == 0) || (strcmp(p->breed, "Cape") == 0) ||
        (strcmp(p->breed, "Hatton") == 0) || (strcmp(p->breed, "Friesian") == 0) || (strcmp(p->breed, "Jersey") == 0) || (strcmp(p->breed, "Khillari") == 0) ||
        (strcmp(p->breed, "Australian Milking Zebu") == 0))
        flag = 1;
    if (flag == 0)
    {
        cout << "\n   Invalid Breed type Try Again..\n\n";
        goto again;

    }
    cout << "   Gender(m/f)                : ";
    cin >> p->gender;
    cout << "   Year of birth              : ";
    cin >> p->birthYear;
    cout << "   Registered date(DD/MM/YY)  : ";
    cin >> p->Registered_Date;

    cout << "ID is  :" << ID2 << endl;


    p->ID = ID2;
    ID2++;


    return *p;
}



void output(cattle* p)
{

    cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
    cout << "\n   cattle data:\n";
    cout << "\n   ID                 : " << p->ID;
    cout << "\n   Gender             : " << p->gender;
    cout << "\n   Year of birth      : " << p->birthYear;
    cout << "\n   Breed type         : " << p->breed;

    cout << "\n\n \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
}


void linkedlist::insertatend()
{
    cattle* p = new cattle();
    *p = input();


    if (head == NULL)
    {
        head = p;
        last = p;
        p->next = NULL;
    }
    else
    {
        p->next = NULL;
        last->next = p;
        last = p;
    }
    system("cls");
    cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
    cout << "\n  |-- CATTLE REGISTRATION MANAGEMENT SYSTEM --|";
    cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
    cout << "\n  ----------CATTLE ADDED-----------";
    size++;
    output(p);
}

void linkedlist::deleteFirst() {

    if (head == NULL)
        cout << "List is empty" << endl;
    else {
        cattle* p = head;

        if (size == 1) {
            delete p;
            head = NULL;
            last = NULL;
            size = 0;
        }
        else {
            head = head->next;
            delete p;
            size--;
        }
    }
}

void linkedlist::deleteLast() {

    if (head == NULL)
        cout << "List is empty" << endl;
    else {
        cattle* p = last;
        if (size == 1) {
            delete p;
            head = NULL;
            last = NULL;
            size = 0;
        }
        else {
            cattle* current = head;

            for (int i = 0; i < size - 2; i++) {
                current = current->next;
            }
            last = current;
            last->next = NULL;
            delete p;
            size--;
        }
    }
}

void linkedlist::deleteAt() {
    int pos;
    cout << "Enter the ID of the cattle neede to be removed: ";
    cin >> pos;
    if (pos < 0 || pos >= size)
        cout << "Invalid position" << endl;
    else if (pos == 0)
        deleteFirst();
    else if (pos == size - 1)
        deleteLast();
    else {

        cattle* current = head;
        for (int i = 0; i < pos - 1; i++) {
            current = current->next;
        }
        cattle* p = current->next;
        current->next = p->next;
        delete p;
        size--;

    }

    cout << "Cattle removed from list" << endl;
}

void linkedlist::listofcattle()
{
    if (head == NULL)
    {
        cout << "\n  No cattle";
    }
    system("cls");
    cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
    cout << "\n  |-- CATTLE REGISTRATION MANAGEMENT SYSTEM --|";
    cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
    cattle* p = new cattle;
    vaccine* v = new vaccine;
    p = head;
    while (p != NULL)
    {
        cout << "\n   cattle data:\n";
        cout << "\n   ID                 : " << p->ID;
        cout << "\n   Gender             : " << p->gender;
        cout << "\n   Year of birth      : " << p->birthYear;
        cout << "\n   Breed type         : " << p->breed;
        if (v->dateOfVaccination == 0)
            cout << "No detailes given" << endl;
        else {
            cout << v->VaccineName;
            cout << v->dateOfVaccination;
        }

        cout << "\n\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n";
        p = p->next;
    }
    cout << "\n";
}


void departmentmenu(linkedlist* l)
{
    
    int choice2 = 0;
    int choice3 = 0;


    cattle p;
again:

    while (choice2 != 4 && choice3!=3 )
    {
        if (choice1 == 1 || choice1 == 2) {
            system("cls");
            cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
            cout << "\n  |------- NEWLY BORN CATTLE REGISTRATION SECTION -------|";
            cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n";
            cout << "\n\n   " << l->departmentname;
            cout << "   [1] Register cattle \n";
            cout << "   [2] Remove cattle \n";
            cout << "   [3] Display list\n";
            cout << "   [4] Change department or exit\n";
            cout << "\n   Please enter your choice : ";
            choice2 = readnumber();
            cout << "  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";

            switch (choice2)
            {
            case 1:	l->insertatend();
                cout << "\n   Press any key";
                _getch();
                break;

            case 2:	l->deleteAt();
                cout << "\n   Press any key";
                _getch();
                break;



            case 3:	system("cls");
                l->listofcattle();
                cout << "\n   Press any key";
                _getch();
                break;
            }


        }
        else if (choice1 == 3) {
            linkedqueue* q = new linkedqueue;
            while (choice3 != 3)
            {
                system("cls");
                cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
                cout << "\n  |-- MEDICAL CLINIC --|";
                cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
                cout << "\n\n   " << l->departmentname;
                cout << "   [1] Admit cattle \n";
                cout << "   [2] Remove cattle \n";
                cout << "   [3] Exit or change department\n";
                cout << "\n   Please enter your choice : ";
                choice3 = readnumber();
                cout << "  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";

                switch (choice3)
                {
                case 1:	q->insertatend();
                    cout << "\n   Press any key";
                   _getch();
                    break;

                case 2:	q->deleteFirst();
                    cout << "\n   Press any key";
                   _getch();
                    break;


                case 3: 
                    cout << "\n   Press any key";
                    _getch();
            
                    goto again;
                    
                    break;

                }


            }
            break;
        }
        else if (choice1 == 4) {
            l->VaccineDetails();
            l->listofcattle();



            break;

        }
        else if (choice1 == 5)
        {

            l->listofcattle();
            break;
        }
        
    }
}

int main()
{
    int i;
    linkedlist departments[5];
   
    while (choice1 != 6)
    {
        strcpy_s(departments[0].departmentname, "Newly born calves section\n");
        strcpy_s(departments[1].departmentname, "Dairy cows section \n");
        strcpy_s(departments[2].departmentname, "Health Division \n");
        strcpy_s(departments[3].departmentname, "Vaccination details \n");
        strcpy_s(departments[4].departmentname, "Display details\n");

        system("cls");
        cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
        cout << "\n  |------- CATTLE REGISTRATION MANAGEMENT SYSTEM -------|";
        cout << "\n  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n";
        cout << "   Main Menu\n\n";
        for (i = 0; i < 5; i++)
        {
            cout << "   " << (i + 1) << ": " << departments[i].departmentname;
        }
        cout << "   6: Exit";
        cout << "\n\n   Please enter your choice : ";
        choice1 = readnumber();
        if (choice1 >= 1 && choice1 <= 5)
        {
            departmentmenu(&departments[choice1 - 1]);
        }

    }
    if (choice1 == 6)
        cout << "\n\t\tThank you! \n";
    return 0;

}