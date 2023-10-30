#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <dir.h>


using namespace std;
string b_number,b_password;
string c_number,c_password;

float cnt=0;
//void manu_call();
void owner();
void add_drinks();
void show_drinks();
void modify_drinks();
void delete_drinks();
void drinks_case();
void add_fruits();
void show_fruits();
void modify_fruits();
void delete_fruits();
void furits_case();
void add_Meat();
void show_Meat();
void modify_Meat();
void delete_Meat();
void Meat_case();
void add_sancks();
void show_sancks();
void modify_sancks();
void delete_sancks();
void sancks_case();
void add_vegetables();
void show_vegetables();
void modify_vegetables();
void delete_vegetables();
void vegetables_case();
void manu_call();
void customer();
void fruits_bill();
void show_fruits_bill();
void meat_bill();
void show_meat_bill();
void sancks_bill();
void show_sancks_bill();
void cnting_bill();//
void frontpage(int ch);
void linked(int sin_std);
void login(int sin_std);
void signup(int sin_std);
void student_page(int opt);
void first_std(int op);
void student_second_page(int ni);
void create_student_profile();
void std_full_profile();
void view_full_profile();
void edit_student_profile();
void std_mess_seat_info();
void std_bus_route_info();
void std_bus_route_address_info();
void student_first_mess_profile();
void student_mess_search_path();
void student_full_mess_profile();
void std_route_one(int ni);
void std_route_two(int ni);
void std_route_three(int ni);
void std_route_four(int ni);
int  start_student();
void std_current_mess();
void std_pending_mess();
void own_fistpage();
void own_secndpage();
void own_createprofile();
void own_profile();
void own_edit();
void own_messpage();
void logout();
void own_mesfirpage();
void own_create_mess();
void own_route1();
void own_route2();
void own_route3();
void own_route4();
void own_view_mess();
void own_edit_mess();
void own_pending();
void own_current();
void notify();
int start_owner();
void mess();

typedef struct product
{

    string pro_code;
    string name;
    float price;
    int qut;
    char uname[15],c=' ';
    char pword[15],code[10];
    int a=0,i=0;
} prod;
prod n;

typedef struct clint
{
    string email, password, Name;

} cl;
cl clp;


  int main()
{
   system("cls");
    cout<<"                               WELOCME TO SED-CODRAS                    \n";
    cout<<"\n\n\n[1]. LU Mess Rent Solution\n\n\n[2]. Grocery Store\n\n";
    cout<<"ENTER : ";
    int wait;
    cin>>wait;
    switch(wait){
case 1:
     mess();
     break;
case 2:
    manu_call();
    break;
default:
    cout<<"worng choose,Try again"<<endl;
    getch();
    main();

    }


//manu_call();

}


void clint_profile()
{
    system("cls");
    cout<<"\n************************************************************************************************"<<endl;
    cout<<"\n\t\t\t!!!!!!!!!!!!! SING UP !!!!!!!!!!!!!\n";
    cout<<"\n************************************************************************************************\n\n"<<endl;


    cout << "Enter your full name : ";
    getline(cin >> ws, clp.Name);

    cout << "Enter your Email : ";
    getline(cin >> ws, clp.email);

    cout << "Enter your Password : ";
    getline(cin >> ws, clp.password);
    {

        ofstream clin(clp.Name+"_profile_data.txt");

        clin<< clp.Name << "\t"<< clp.email << "\t" << clp.password << endl;
        clin.close();

    }


}

void add_drinks()
{
    show_drinks();
    Sleep(800);
    system("cls");
    cout<<"\n------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\t\t\t**********ADD NEW DRINKS**********\n";
    cout<<"\n------------------------------------------------------------------------------------------------\n"<<endl;
    ofstream ak("drinks.txt",ios::app);
    cout << "Enter The Product code : ";
    cin >> n.pro_code;
    cout << "\nEnter The Product Name :";
    cin>>n.name;
    cout <<"\nEnter The Price of The Product : ";
    cin >>n.price;
    ak<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;
    cout<<"Product add successfully"<<endl;
    ak.close();
}
void show_drinks()
{
    system("cls");
    ifstream view_product("drinks.txt");
    cout<<"\n************************************************************************************************"<<endl;
    cout<<"\n\t\t\t!!!!!!!!!!!!! PRODUCT  MEAT !!!!!!!!!!!!!\n";
    cout<<"\n************************************************************************************************\n\n"<<endl;


    cout<<"\n----------------------------------------------------"<<endl;
    cout<<"| Product_code\tProduct_Name \tPrice        \t   |\n";
    cout<<"----------------------------------------------------"<<endl;
    while(view_product>>n.pro_code >> n.name>> n.price)
    {
        cout<<"| "<< n.pro_code<<" \t\t"<<n.name<<"\t\t"<<n.price<<"          \t   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;

    }

    view_product.close();

    getch();
}
void modify_drinks()
{
    show_drinks();
    Sleep(800);
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<"\n\t\t\t==================UPDATE DRINKS==================\n";
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n"<<endl;
    string b,q;
    string s;
    float x;
    cout<<"\nEnter product code : ";
    cin>>b;
    ifstream old_file;
    old_file.open("drinks.txt");
    ofstream new_file;
    new_file.open("new.txt");
    old_file>>n.pro_code;
    old_file>>n.name;
    old_file>>n.price;
    while(!old_file.eof())
    {
        if(n.pro_code != b)
        {
            new_file<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;

        }
        else
        {
            cout << "Enter The Product code : ";
            cin >> q;
            cout << "\nEnter The Product Name :";
            cin>>s;
            cout <<"\nEnter The Price of The Product : ";
            cin >>x;
            new_file<<q<<"\t\t"<<s<<"\t\t"<<x<<endl;
        }
        old_file>>n.pro_code;
        old_file>>n.name;
        old_file>>n.price;
    }
    new_file.close();
    old_file.close();

    remove("drinks.txt");
    rename("new.txt","drinks.txt");

}

void delete_drinks()
{
    show_drinks();
    Sleep(800);
    string b;
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\n\t\t\t----------------Delete DRINKS----------------\n";
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n"<<endl;
    cout<<"\nEnter product code : ";
    cin>>b;
    ifstream old_file;
    old_file.open("drinks.txt");
    ofstream new_file;
    new_file.open("new.txt");
    old_file>>n.pro_code;
    old_file>>n.name;
    old_file>>n.price;
    while(!old_file.eof())
    {
        if(n.pro_code != b)
        {
            new_file<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;

        }
        else
        {
            cout<<"\n\nProduct is Deleted!!\n\n";
        }
        old_file>>n.pro_code;
        old_file>>n.name;
        old_file>>n.price;
    }
    new_file.close();
    old_file.close();

    remove("drinks.txt");
    rename("new.txt","drinks.txt");

}

void drinks_case() ////case 1;
{
    system("cls");
    int d;
    cout<<"1.Add Drinks\n";
    cout<<"2.Show Product\n";
    cout<<"3.Updated Drinks\n";
    cout<<"4.Deleted Drinks\n";
    cout<<"5.Back\n";
    cout<<"Enter Your Choose : ";
    cin>>d;
    switch(d)
    {
    case 1:

l:
        add_drinks();
        char add;
        cout<<"You Add More Product(y/n) : ";
        cin>>add;
        if(add=='y'||add == 'Y')
        {
            goto l;
        }
        getch();
        drinks_case();
        break;
    case 2:
        show_drinks();
        getch();
        drinks_case();
        break;
    case 3:
lo:
        char mod;
        modify_drinks();
        cout<<"You Modify More Product : ";
        cin>>mod;
        if(mod=='y'|| mod == 'Y')
        {
            goto lo;
        }
        getch();
        drinks_case();
        break;
    case 4:
loo:
        char del;
        delete_drinks();
        cout<<"You Deleted More Product : ";
        cin>>del;
        if(del=='y'||del == 'Y')
        {
            goto loo;
        }
        getch();
        drinks_case();
        break;
    case 5:
        owner();
        break;
    default:
        cout<<"Wrong choose,Try aging"<<endl;
        getch();
        drinks_case();
        break;
    }
}

void drink_bill()
{
    // clint_profile();
lll:
    string b;
    cout<<"\nWhich product you need, Please Enter product code : ";
    cin>>b;
    ifstream a;
    a.open("drinks.txt");
    ofstream c;
    c.open("newproduct.txt",ios::app);
    a>>n.pro_code;
    a>>n.name;
    a>>n.price;
    while(!a.eof())
    {
        if(n.pro_code == b)
        {
            c<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;
        }
        a>>n.pro_code;
        a>>n.name;
        a>>n.price;
    }
    c.close();
    a.close();
    char s;
    cout<<"You want to add more (y/n)";
    cin>>s;
    if(s=='y'||s=='Y')
    {
        goto lll;
    }
}
void show_drinks_bill()
{
    // system("cls");
    ifstream view_bill("newproduct.txt");
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////"<<endl<<endl;
    cout<<"\t\t\t----------------YOU BILL ----------------\n";
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"\n----------------------------------------------------"<<endl;
    cout<<"| Product_code\tProduct Name\tPrice        \t   |\n";
    cout<<"----------------------------------------------------"<<endl;
    while(view_bill>> n.pro_code >> n.name >> n.price)
    {
        cout<<"| "<< n.pro_code<<"\t\t"<<n.name<< "\t\t"<<n.price<<"          \t   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;

    }
}

void add_fruits()
{
    show_fruits();
    Sleep(800);
    system("cls");
    cout<<"\n------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\t\t\t**********ADD FRUITS**********\n";
    cout<<"\n------------------------------------------------------------------------------------------------\n"<<endl;
    ofstream ak("fruits.txt",ios::app);
    cout << "Enter The Product code : ";
    cin >> n.pro_code;
    cout << "\nEnter The Product Name :";
    cin>>n.name;
    cout <<"\nEnter The Price of The Product : ";
    cin >>n.price;
    ak<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;
    ak.close();
    cout<<"Product add successfully"<<endl;
}
void show_fruits()
{
    system("cls");
    ifstream view_product("fruits.txt");
    cout<<"\n************************************************************************************************"<<endl;
    cout<<"\n\t\t\t!!!!!!!!!!!!! FRUITS !!!!!!!!!!!!!\n";
    cout<<"\n************************************************************************************************\n\n"<<endl;


    cout<<"\n----------------------------------------------------"<<endl;
    cout<<"| Product_code\tProduct_Name \tPrice        \t   |\n";
    cout<<"----------------------------------------------------"<<endl;
    while(view_product>>n.pro_code >> n.name>> n.price)
    {
        cout<<"| "<< n.pro_code<<" \t\t"<<n.name<<"\t\t"<<n.price<<"          \t   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;

    }

    view_product.close();

    getch();
}
void modify_fruits()
{
    show_fruits();
    Sleep(800);
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<"\n\t\t\t==================UPDATE FURITES==================\n";
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n"<<endl;
    string b,q;
    string s;
    float x;
    cout<<"\nEnter product code : ";
    cin>>b;
    ifstream old_file;
    old_file.open("fruits.txt");
    ofstream new_file;
    new_file.open("new.txt");
    old_file>>n.pro_code;
    old_file>>n.name;
    old_file>>n.price;
    while(!old_file.eof())
    {
        if(n.pro_code != b)
        {
            new_file<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;

        }
        else
        {
            cout << "Enter The Product code : ";
            cin >> q;
            cout << "\nEnter The Product Name :";
            cin>>s;
            cout <<"\nEnter The Price of The Product : ";
            cin >>x;
            new_file<<q<<"\t\t"<<s<<"\t\t"<<x<<endl;
        }
        old_file>>n.pro_code;
        old_file>>n.name;
        old_file>>n.price;
    }
    new_file.close();
    old_file.close();

    remove("fruits.txt");
    rename("new.txt","fruits.txt");

}
void delete_fruits()
{
    string b;
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\n\t\t\t----------------DELETED FRUITS----------------\n";
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n"<<endl;
    cout<<"\nEnter product code : ";
    cin>>b;
    ifstream old_file;
    old_file.open("fruits.txt");
    ofstream new_file;
    new_file.open("new.txt");
    old_file>>n.pro_code;
    old_file>>n.name;
    old_file>>n.price;
    while(!old_file.eof())
    {
        if(n.pro_code != b)
        {
            new_file<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;

        }
        else
        {
            cout<<"\n\nProduct is Deleted!!\n\n";
        }
        old_file>>n.pro_code;
        old_file>>n.name;
        old_file>>n.price;
    }
    new_file.close();
    old_file.close();

    remove("fruits.txt");
    rename("new.txt","fruits.txt");

}
void furits_case() ////case 2;
{
    system("cls");
    int d;
    cout<<"1.Add Fruits \n";
    cout<<"2.Show Product \n";
    cout<<"3.Updated Fruits\n";
    cout<<"4.Deleted Fruits\n";
    cout<<"5.Back\n";
    cout<<"Enter Your Choose : ";
    cin>>d;
    switch(d)
    {
    case 1:
f:
        char add;
        add_fruits();
        cout<<"You Add More Fruits : ";
        cin>>add;
        if(add=='y'||add == 'Y')
        {
            goto f;
        }
        getch();
        furits_case();
        break;
    case 2:
        show_fruits();
        getch();
        furits_case();
        break;
    case 3:
lo:
        char mod;
        modify_fruits();
        cout<<"You Modify More Fruits : ";
        cin>>mod;
        if(mod=='y'|| mod == 'Y')
        {
            goto lo;
        }
        getch();
        furits_case();
        break;
    case 4:
loo:
        char del;
        delete_fruits();
        cout<<"You Deleted More Fruits : ";
        cin>>del;
        if(del=='y'||del == 'Y')
        {
            goto loo;
        }
        getch();
        furits_case();
        break;

    case 5:
        owner();
        break;
    default:
        cout<<"Wrong choose,Try aging"<<endl;
        getch();
        furits_case();
        break;
    }
}
void fruits_bill()
{
lll:
    string b;
    cout<<"\nWhich product you need, Please Enter product code : ";
    cin>>b;
    ifstream a;
    a.open("fruits.txt");
    ofstream c;
    c.open("newproduct.txt",ios::app);
    a>>n.pro_code;
    a>>n.name;
    a>>n.price;
    while(!a.eof())
    {
        if(n.pro_code == b)
        {

            c<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;
        }
        a>>n.pro_code;
        a>>n.name;
        a>>n.price;
    }
    c.close();
    a.close();
    char s;
    cout<<"You want to add more (y/n)";
    cin>>s;
    if(s=='y'||s=='Y')
    {
        goto lll;
    }
}
void show_fruits_bill()
{
    // system("cls");
    ifstream view_bill("newproduct.txt");
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////"<<endl<<endl;
    cout<<"\t\t\t----------------YOU BILL ----------------\n";
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"\n----------------------------------------------------"<<endl;
    cout<<"| Product_code\tProduct Name\tPrice        \t   |\n";
    cout<<"----------------------------------------------------"<<endl;
    while(view_bill>> n.pro_code >> n.name >> n.price)
    {
        cout<<"| "<< n.pro_code<<"\t\t"<<n.name<< "\t\t"<<n.price<<"          \t   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;

    }

}

void add_Meat()
{
    show_Meat();
    Sleep(800);
    system("cls");
    cout<<"\n------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\t\t\t**********ADD NEW MEAT**********\n";
    cout<<"\n------------------------------------------------------------------------------------------------\n"<<endl;
    ofstream ak("meats.txt",ios::app);
    cout << "Enter The Product code : ";
    cin >> n.pro_code;
    cout << "\nEnter The Product Name :";
    cin>>n.name;
    cout <<"\nEnter The Price of The Product : ";
    cin >>n.price;
    ak<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;
    ak.close();
    cout<<"Product add successfully"<<endl;
}
void show_Meat()
{
    system("cls");
    ifstream view_product("meats.txt");
    cout<<"\n************************************************************************************************"<<endl;
    cout<<"\n\t\t\t!!!!!!!!!!!!! PRODUCT  MEAT !!!!!!!!!!!!!\n";
    cout<<"\n************************************************************************************************\n\n"<<endl;


    cout<<"\n----------------------------------------------------"<<endl;
    cout<<"| Product_code\tProduct_Name \tPrice        \t   |\n";
    cout<<"----------------------------------------------------"<<endl;
    while(view_product>>n.pro_code >> n.name>> n.price)
    {
        cout<<"| "<< n.pro_code<<" \t\t"<<n.name<<"\t\t"<<n.price<<"          \t   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;

    }

    view_product.close();

    getch();
}

void modify_Meat()
{
    show_Meat();
    Sleep(800);
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<"\n\t\t\t==================UPDATE MEAT==================\n";
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n"<<endl;
    string b,q;
    string s;
    float x;
    cout<<"\nEnter product code : ";
    cin>>b;
    ifstream old_file;
    old_file.open("meats.txt");
    ofstream new_file;
    new_file.open("new.txt");
    old_file>>n.pro_code;
    old_file>>n.name;
    old_file>>n.price;
    while(!old_file.eof())
    {
        if(n.pro_code != b)
        {
            new_file<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;

        }
        else
        {
            cout << "Enter The Product code : ";
            cin >> q;
            cout << "\nEnter The Product Name :";
            cin>>s;
            cout <<"\nEnter The Price of The Product : ";
            cin >>x;
            new_file<<q<<"\t\t"<<s<<"\t\t"<<x<<endl;
        }
        old_file>>n.pro_code;
        old_file>>n.name;
        old_file>>n.price;
    }
    new_file.close();
    old_file.close();

    remove("meats.txt");
    rename("new.txt","meats.txt");

}
void delete_Meat()
{
    show_Meat();
    Sleep(800);
    string b;
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\n\t\t\t----------------DELETED MEAT----------------\n";
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n"<<endl;
    cout<<"\nEnter product code : ";
    cin>>b;
    ifstream old_file;
    old_file.open("meats.txt");
    ofstream new_file;
    new_file.open("new.txt");
    old_file>>n.pro_code;
    old_file>>n.name;
    old_file>>n.price;
    while(!old_file.eof())
    {
        if(n.pro_code != b)
        {
            new_file<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;

        }
        else
        {
            cout<<"\n\nProduct is Deleted!!\n\n";
        }
        old_file>>n.pro_code;
        old_file>>n.name;
        old_file>>n.price;
    }
    new_file.close();
    old_file.close();

    remove("meats.txt");
    rename("new.txt","meats.txt");

}
void Meat_case() ////case 3;
{
    system("cls");
    int d;
    cout<<"1.Add Meat \n";
    cout<<"2.Show Product\n";
    cout<<"3.Updated Meat\n";
    cout<<"4.Deleted Meat\n";
    cout<<"5.Back\n";
    cout<<"Enter Your choose : ";
    cin>>d;
    switch(d)
    {
    case 1:

l:
        char add;
        add_Meat();
        cout<<"You Add More Meat : ";
        cin>>add;
        if(add=='y'||add == 'Y')
        {
            goto l;
        }
        getch();
        Meat_case();
        break;
    case 2:
        show_Meat();
        getch();
        Meat_case();
        break;
    case 3:
lo:
        char  mod;
        modify_Meat();
        cout<<"You Modify More Meat : ";
        cin>>mod;
        if(mod=='y'|| mod == 'Y')
        {
            goto lo;
        }
        getch();
        Meat_case();
        break;
    case 4:
loo:
        char del;
        delete_Meat();
        cout<<"You Deleted More Meat : ";
        cin>>del;
        if(del=='y'||del == 'Y')
        {
            goto loo;
        }
        getch();
        Meat_case();
        break;
    case 5:
        owner();
        break;
    default:
        cout<<"Wrong choose,Try aging"<<endl;
        getch();
        Meat_case();
        break;
    }
}
void meat_bill()
{
lll:
    string b;
    cout<<"\nWhich product you need, Please Enter product code : ";
    cin>>b;
    ifstream a;
    a.open("meats.txt");
    ofstream c;
    c.open("newproduct.txt",ios::app);
    a>>n.pro_code;
    a>>n.name;
    a>>n.price;
    while(!a.eof())
    {
        if(n.pro_code == b)
        {
            c<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;
        }
        a>>n.pro_code;
        a>>n.name;
        a>>n.price;
    }
    c.close();
    a.close();
    char s;
    cout<<"You want to add more (y/n)";
    cin>>s;
    if(s=='y'||s=='Y')
    {
        goto lll;
    }
}
void show_meat_bill()
{
    // system("cls");
    ifstream view_bill("newproduct.txt");
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////"<<endl<<endl;
    cout<<"\t\t\t----------------YOU BILL ----------------\n";
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"\n----------------------------------------------------"<<endl;
    cout<<"| Product_code\tProduct Name\tPrice        \t   |\n";
    cout<<"----------------------------------------------------"<<endl;
    while(view_bill>> n.pro_code >> n.name >> n.price)
    {
        cout<<"| "<< n.pro_code<<"\t\t"<<n.name<< "\t\t"<<n.price<<"          \t   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;

    }
}

void add_sancks()
{
    show_sancks();
    Sleep(800);
    system("cls");
    cout<<"\n------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\t\t\t**********ADD NEW sancks**********\n";
    cout<<"\n------------------------------------------------------------------------------------------------\n"<<endl;
    ofstream ak("sancks.txt",ios::app);
    cout << "Enter The Product code : ";
    cin >> n.pro_code;
    cout << "\nEnter The Product Name :";
    cin>>n.name;
    cout <<"\nEnter The Price of The Product : ";
    cin >>n.price;
    ak<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;
    ak.close();
    cout<<"Product add successfully"<<endl;
}
void show_sancks()
{
    system("cls");
    ifstream view_product("sancks.txt");
    cout<<"\n************************************************************************************************"<<endl;
    cout<<"\n\t\t\t!!!!!!!!!!!!! PRODUCT  MEAT !!!!!!!!!!!!!\n";
    cout<<"\n************************************************************************************************\n\n"<<endl;


    cout<<"\n----------------------------------------------------"<<endl;
    cout<<"| Product_code\tProduct_Name \tPrice        \t   |\n";
    cout<<"----------------------------------------------------"<<endl;
    while(view_product>>n.pro_code >> n.name>> n.price)
    {
        cout<<"| "<< n.pro_code<<" \t\t"<<n.name<<"\t\t"<<n.price<<"          \t   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;

    }

    view_product.close();

    getch();
}

void modify_sancks()
{
    show_sancks();
    Sleep(800);
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<"\n\t\t\t==================UPDATE sancks==================\n";
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n"<<endl;
    string b,q;
    string s;
    float x;
    cout<<"\nEnter product code : ";
    cin>>b;
    ifstream old_file;
    old_file.open("sancks.txt");
    ofstream new_file;
    new_file.open("new.txt");
    old_file>>n.pro_code;
    old_file>>n.name;
    old_file>>n.price;
    while(!old_file.eof())
    {
        if(n.pro_code != b)
        {
            new_file<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;

        }
        else
        {
            cout << "Enter The Product code : ";
            cin >> q;
            cout << "\nEnter The Product Name :";
            cin>>s;
            cout <<"\nEnter The Price of The Product : ";
            cin >>x;
            new_file<<q<<"\t\t"<<s<<"\t\t"<<x<<endl;
        }
        old_file>>n.pro_code;
        old_file>>n.name;
        old_file>>n.price;
    }
    new_file.close();
    old_file.close();

    remove("sancks.txt");
    rename("new.txt","sancks.txt");

}
void delete_sancks()
{
    show_sancks();
    Sleep(800);
    string b;
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\n\t\t\t----------------DELETED sancks----------------\n";
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n"<<endl;
    cout<<"\nEnter product code : ";
    cin>>b;
    ifstream old_file;
    old_file.open("sancks.txt");
    ofstream new_file;
    new_file.open("new.txt");
    old_file>>n.pro_code;
    old_file>>n.name;
    old_file>>n.price;
    while(!old_file.eof())
    {
        if(n.pro_code != b)
        {
            new_file<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;

        }
        else
        {
            cout<<"\n\nProduct is Deleted!!\n\n";
        }
        old_file>>n.pro_code;
        old_file>>n.name;
        old_file>>n.price;
    }
    new_file.close();
    old_file.close();

    remove("sancks.txt");
    rename("new.txt","sancks.txt");

}
void sancks_case() ////case 4;
{
    system("cls");
    int d;
    cout<<"1.Add sancks \n";
    cout<<"2.Show Product\n";
    cout<<"3.Updated sancks\n";
    cout<<"4.Deleted sancks\n";
    cout<<"5.Back\n";
    cout<<"Enter Your choose : ";
    cin>>d;
    switch(d)
    {
    case 1:

l:
        char add;
        add_sancks();
        cout<<"You Add More sancks : ";
        cin>>add;
        if(add=='y'||add == 'Y')
        {
            goto l;
        }
        getch();
        sancks_case();
        break;
    case 2:
        show_sancks();
        getch();
        sancks_case();
        break;
    case 3:
lo:
        char mod;
        modify_sancks();
        cout<<"You Modify More sancks : ";
        cin>>mod;
        if(mod=='y'|| mod == 'Y')
        {
            goto lo;
        }
        getch();
        sancks_case();
        break;
    case 4:
loo:
        char del;
        delete_sancks();
        cout<<"You Deleted More sancks : ";
        cin>>del;
        if(del=='y'||del == 'Y')
        {
            goto loo;
        }
        getch();
        sancks_case();
        break;
    case 5:
        owner();
        break;
    default:
        cout<<"Wrong choose,Try aging"<<endl;
        getch();
        sancks_case();
        break;
    }
}
void sancks_bill()
{
lll:
    string b;
    cout<<"\nWhich product you need, Please Enter product code : ";
    cin>>b;
    ifstream a;
    a.open("sancks.txt");
    ofstream c;
    c.open("newproduct.txt",ios::app);
    a>>n.pro_code;
    a>>n.name;
    a>>n.price;
    while(!a.eof())
    {
        if(n.pro_code == b)
        {
            c<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;
        }
        a>>n.pro_code;
        a>>n.name;
        a>>n.price;
    }
    c.close();
    a.close();
    char s;
    cout<<"You want to add more (y/n)";
    cin>>s;
    if(s=='y'||s=='Y')
    {
        goto lll;
    }
}
void show_sancks_bill()
{
    // system("cls");
    ifstream view_bill("newproduct.txt");
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////"<<endl<<endl;
    cout<<"\t\t\t----------------YOU BILL ----------------\n";
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"\n----------------------------------------------------"<<endl;
    cout<<"| Product_code\tProduct Name\tPrice        \t   |\n";
    cout<<"----------------------------------------------------"<<endl;
    while(view_bill>> n.pro_code >> n.name >> n.price)
    {
        cout<<"| "<< n.pro_code<<"\t\t"<<n.name<< "\t\t"<<n.price<<"          \t   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;

    }
}

void add_vegetables()
{
    show_vegetables();
    Sleep(800);
    system("cls");
    cout<<"\n------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\n\t\t\t**********ADD NEW VEGETABLES**********\n";
    cout<<"\n------------------------------------------------------------------------------------------------\n"<<endl;
    ofstream ak("vegetables.txt",ios::app);
    cout << "Enter The Product code : ";
    cin >> n.pro_code;
    cout << "\nEnter The Product Name :";
    cin>>n.name;
    cout <<"\nEnter The Price of The Product : ";
    cin >>n.price;
    ak<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;
    ak.close();
    cout<<"Product add successfully"<<endl;
}
void show_vegetables()
{
    system("cls");
    ifstream view_product("vegetables.txt");
    cout<<"\n************************************************************************************************"<<endl;
    cout<<"\n\t\t\t!!!!!!!!!!!!! PRODUCT  MEAT !!!!!!!!!!!!!\n";
    cout<<"\n************************************************************************************************\n\n"<<endl;


    cout<<"\n----------------------------------------------------"<<endl;
    cout<<"| Product_code\tProduct_Name \tPrice        \t   |\n";
    cout<<"----------------------------------------------------"<<endl;
    while(view_product>>n.pro_code >> n.name>> n.price)
    {
        cout<<"| "<< n.pro_code<<" \t\t"<<n.name<<"\t\t"<<n.price<<"          \t   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;

    }

    view_product.close();

    getch();
}

void modify_vegetables()
{
    show_vegetables();
    Sleep(800);
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<"\n\t\t\t==================UPDATE VEGETABLES==================\n";
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n"<<endl;
    string b,q;
    string s;
    float x;
    cout<<"\nEnter product code : ";
    cin>>b;
    ifstream old_file;
    old_file.open("vegetables.txt");
    ofstream new_file;
    new_file.open("new.txt");
    old_file>>n.pro_code;
    old_file>>n.name;
    old_file>>n.price;
    while(!old_file.eof())
    {
        if(n.pro_code != b)
        {
            new_file<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;

        }
        else
        {
            cout << "Enter The Product code : ";
            cin >> q;
            cout << "\nEnter The Product Name :";
            cin>>s;
            cout <<"\nEnter The Price of The Product : ";
            cin >>x;
            new_file<<q<<"\t\t"<<s<<"\t\t"<<x<<endl;
        }
        old_file>>n.pro_code;
        old_file>>n.name;
        old_file>>n.price;
    }
    new_file.close();
    old_file.close();

    remove("vegetables.txt");
    rename("new.txt","vegetables.txt");

}
void delete_vegetables()
{
    show_vegetables();
    Sleep(800);
    string b;
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
    cout<<"\n\t\t\t----------------DELETED VEGETABLES----------------\n";
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n"<<endl;
    cout<<"\nEnter product code : ";
    cin>>b;
    ifstream old_file;
    old_file.open("vegetables.txt");
    ofstream new_file;
    new_file.open("new.txt");
    old_file>>n.pro_code;
    old_file>>n.name;
    old_file>>n.price;
    while(!old_file.eof())
    {
        if(n.pro_code != b)
        {
            new_file<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;

        }
        else
        {
            cout<<"\n\nProduct is Deleted!!\n\n";
        }
        old_file>>n.pro_code;
        old_file>>n.name;
        old_file>>n.price;
    }
    new_file.close();
    old_file.close();

    remove("vegetables.txt");
    rename("new.txt","vegetables.txt");

}
void vegetables_case() ////case 3;
{
    system("cls");
    int d;
    cout<<"1.Add vegetables \n";
    cout<<"2.Show Product\n";
    cout<<"3.Updated vegetables\n";
    cout<<"4.Deleted vegetables\n";
    cout<<"5.Back\n";
    cout<<"Enter Your Choose : ";
    cin>>d;
    switch(d)
    {
    case 1:

l:
        char add;
        add_vegetables();
        cout<<"You Add More vegetables : ";
        cin>>add;
        if(add=='y'||add == 'Y')
        {
            goto l;
        }
        getch();
        vegetables_case();
        break;
    case 2:
        show_vegetables();
        getch();
        vegetables_case();
        break;
    case 3:
lo:
        char mod;
        modify_vegetables();
        cout<<"You Modify More vegetables : ";
        cin>>mod;
        if(mod=='y'|| mod == 'Y')
        {
            goto lo;
        }
        getch();
        vegetables_case();
        break;
    case 4:
loo:
        char del;
        delete_vegetables();
        cout<<"You Deleted More vegetables : ";
        cin>>del;
        if(del=='y'||del == 'Y')
        {
            goto loo;
        }
        getch();
        vegetables_case();
        break;
    case 5:
        owner();
        break;
    default:
        cout<<"Wrong choose,Try aging"<<endl;
        getch();
        vegetables_case();
        break;
    }
}
void vegtables_bill()
{
lll:
    string b;
    cout<<"\nWhich product you need, Please Enter product code : ";
    cin>>b;
    ifstream a;
    a.open("vegetables.txt");
    ofstream c;
    c.open("newproduct.txt",ios::app);
    a>>n.pro_code;
    a>>n.name;
    a>>n.price;
    while(!a.eof())
    {
        if(n.pro_code == b)
        {
            c<<n.pro_code<<"\t\t"<<n.name<<"\t\t"<<n.price<<endl;
        }
        a>>n.pro_code;
        a>>n.name;
        a>>n.price;
    }
    c.close();
    a.close();
    char s;
    cout<<"You want to add more (y/n)";
    cin>>s;
    if(s=='y'||s=='Y')
    {
        goto lll;
    }
}
void show_vegetables_bill()
{
    // system("cls");
    ifstream view_bill("newproduct.txt");
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////"<<endl<<endl;
    cout<<"\t\t\t----------------YOU BILL ----------------\n";
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;
    cout<<"\n----------------------------------------------------"<<endl;
    cout<<"| Product_code\tProduct Name\tPrice        \t   |\n";
    cout<<"----------------------------------------------------"<<endl;
    while(view_bill>> n.pro_code >> n.name >> n.price)
    {
        cout<<"| "<< n.pro_code<<"\t\t"<<n.name<< "\t\t"<<n.price<<"          \t   |"<<endl;
        cout<<"----------------------------------------------------"<<endl;

    }
}
void cnting_bill()
{
    cnt=0;
    ifstream view_bill("newproduct.txt");
    while(view_bill>> n.pro_code >> n.name >> n.price)
    {
        while(!view_bill.eof())
        {

            cnt= cnt+(n.price);

            view_bill>>n.pro_code;
            view_bill>>n.name;
            view_bill>>n.price;
        }

    }

    view_bill.close();

    cout<<"|\t  Totle bill      =     "<<cnt<<"\t\t   |"<<endl;
    cout<<"****************************************************"<<endl;
}
void bka()
{
    cout<<"Bkash Number : ";
    cin>>b_number;
    cout<<"\n\nPassword : ";
    cin>>b_password;
}
void crd()
{
    cout<<"Card Number : ";
    cin>>c_number;
    cout<<"\n\nPassword : ";
    cin>>c_password;
}
void cash()
{
    cout<<"|\t  Received      =      "<<cnt<<"\t\t   |"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"|\t  payment Type   =      Cash\t\t   |"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"               SED CODERS GROCERY SHOP                "<<endl;
    cout<<"             Thanks for shopping with us              "<<endl;
    cout<<"                Contact Us:01722525258                "<<endl;
}

void bkash()
{
    cout<<"|\t  Received      =       "<<cnt<<"\t\t   |"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"|\t  payment Type   =      Bkash\t\t   |"<<endl;
    cout<<"****************************************************"<<endl;
    //cout<<"|\t  Bkash Number   =   "<<b_number<"\t\t  |"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"               SED CODERS GROCERY SHOP               "<<endl;
    cout<<"             Thanks for shopping with us             "<<endl;
    cout<<"               Contact Us:01722525258               "<<endl;
}
void card()
{
    cout<<"|\t  Received      =      "<<cnt<<"\t\t   |"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"|\t  payment Type   =      Card\t\t   |"<<endl;
    cout<<"****************************************************"<<endl;
    cout<<"              SED CODERS GROCERY SHOP                "<<endl;
    cout<<"             Thanks for shopping with us             "<<endl;
    cout<<"               Contact Us:01722525258               "<<endl;
}


void payment_process1()
{
    int a;
    cout<<"payment options:"<<endl;
    cout<<"1. Cash \n2. Bkash \n3. Card \n"<<endl;
    cout<<"choose your payment option: ";
    cin>>a;
    switch(a)
    {
    case 1:
        show_drinks_bill();
        cnting_bill();
        cash();
        break;
    case 2:
        bka();
        show_drinks_bill();
        cnting_bill();
        bkash();
        break;
    case 3:
        crd();
        show_drinks_bill();
        cnting_bill();
        card();
        break;
    default:
        cout<<"Try again..."<<endl;
        getch();
        payment_process1();
    }
}
void payment_process2()
{
    int a;
    cout<<"payment options:"<<endl;
    cout<<"1. Cash \n2. Bkash \n3. Card \n"<<endl;
    cout<<"choose your payment option: ";
    cin>>a;
    switch(a)
    {
    case 1:
        show_fruits_bill();
        cnting_bill();
        cash();
        break;
    case 2:
        bka();
        show_fruits_bill();
        cnting_bill();
        bkash();
        break;
    case 3:
        crd();
        show_fruits_bill();
        cnting_bill();
        card();
        break;
    default:
        cout<<"Try again..."<<endl;
        getch();
        payment_process2();
    }
}
void payment_process3()
{
    int a;
    cout<<"payment options:"<<endl;
    cout<<"1. Cash \n2. Bkash \n3. Card \n"<<endl;
    cout<<"choose your payment option: ";
    cin>>a;
    switch(a)
    {
    case 1:
        show_meat_bill();
        cnting_bill();
        cash();
        break;
    case 2:
        bka();
        show_meat_bill();
        cnting_bill();
        bkash();
        break;
    case 3:
        crd();
        show_meat_bill();
        cnting_bill();
        card();
        break;
    default:
        cout<<"Try again..."<<endl;
        getch();
        payment_process3();
    }
}
void payment_process4()
{
    int a;
    cout<<"payment options:"<<endl;
    cout<<"1. Cash \n2. Bkash \n3. Card \n"<<endl;
    cout<<"choose your payment option: ";
    cin>>a;
    switch(a)
    {
    case 1:
        show_meat_bill();
        cnting_bill();
        cash();
        break;
    case 2:
        bka();
        show_meat_bill();
        cnting_bill();
        bkash();
        break;
    case 3:
        crd();
        show_meat_bill();
        cnting_bill();
        card();
        break;
    default:
        cout<<"Try again..."<<endl;
        getch();
        payment_process4();
    }
}
void payment_process5()
{
    int a;
    cout<<"payment options:"<<endl;
    cout<<"1. Cash \n2. Bkash \n3. Card \n"<<endl;
    cout<<"choose your payment option: ";
    cin>>a;
    switch(a)
    {
    case 1:
        show_vegetables_bill();
        cnting_bill();
        cash();
        break;
    case 2:
        bka();
        show_vegetables_bill();
        cnting_bill();
        bkash();
        break;
    case 3:
        crd();
        show_vegetables_bill();
        cnting_bill();
        bkash();
        break;
    default:
        cout<<"Try again..."<<endl;
        getch();
        payment_process5();
    }
}

void owner()
{
    system("cls");
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
    cout<<"\n\t\t\t==================LOGIN==================\n";
    cout<<"\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n"<<endl;
    cout<<"Username : ";
    cin>>n.uname;
    cout<<"Password : ";
    while(n.i<15)
    {
        n.pword[n.i]=getch();
        n.c=n.pword[n.i];
        if(n.c==13) break;
        else printf("*");
        n.i++;
    }
    n.pword[n.i]='\0';
    n.i=0;
    if(strcmp(n.uname,"Sedcoders")==0 && strcmp(n.pword,"leading")==0)
    {
        system("cls");
        int a;
        cout<<"\n*******************************\n";
        cout<<"| 1.Drinks                    |\n";
        cout<<"*******************************\n";
        cout<<"| 2.Fruits                    |\n";
        cout<<"*******************************\n";
        cout<<"| 3.Meat                      |\n";
        cout<<"*******************************\n";
        cout<<"| 4.Snacks                    |\n";
        cout<<"*******************************\n";
        cout<<"| 5.vegetables                |\n";
        cout<<"*******************************\n";
        cout<<"| 6.Back                      |\n";
        cout<<"*******************************\n\n";
        cout<<"Enter your choose: ";
        cin>>a;
        switch(a)
        {
        case 1:
            drinks_case();
            break;

        case 2:
            furits_case();
            break;
        case 3:
            Meat_case();
            break;
        case 4:
            sancks_case();
            break;
        case 5:
            vegetables_case();
            break;
        case 6:
            manu_call();
            break;
        default:
            cout<<"wrong choose,Try again...";
            getch();
            owner();
        }
    }
    else
    {
        cout<<"Wrong Password Try again...";
        getch();
        owner();
    }
}

void customer()
{
    clint_profile();
    system("cls");
    int a;
    cout<<"\n*******************************\n";
    cout<<"| 1.Drinks                    |\n";
    cout<<"*******************************\n";
    cout<<"| 2.Fruits                    |\n";
    cout<<"*******************************\n";
    cout<<"| 3.Meat                      |\n";
    cout<<"*******************************\n";
    cout<<"| 4.Snacks                    |\n";
    cout<<"*******************************\n";
    cout<<"| 5.vegetables                |\n";
    cout<<"*******************************\n";
    cout<<"| 6.Back                      |\n";
    cout<<"*******************************\n\n";
    cout<<"Enter your choose: ";
    cin>>a;
    switch(a)
    {
    case 1:
        show_drinks();
        drink_bill();
        show_drinks_bill();
        cnting_bill();
        getch();
        payment_process1();
        getch();
        remove("newproduct.txt");
        manu_call();
        break;

    case 2:
        show_fruits();
        fruits_bill();
        show_fruits_bill();
        cnting_bill();
        getch();
        payment_process2();
        getch();
        remove("newproduct.txt");
        manu_call();
        break;
    case 3:
        show_Meat();
        meat_bill();
        show_meat_bill();
        cnting_bill();
        getch();
        payment_process3();
        getch();
        remove("newproduct.txt");
        manu_call();
        break;
    case 4:
        show_sancks();
        sancks_bill();
        show_meat_bill();
        cnting_bill();
        getch();
        payment_process4();
        getch();
        remove("newproduct.txt");
        manu_call();
        break;
    case 5:
        show_vegetables();
        vegtables_bill();
        show_vegetables_bill();
        cnting_bill();
        getch();
        payment_process5();
        getch();
        remove("newproduct.txt");
        manu_call();
        break;
    case 6:
        manu_call();
        break;
    default:
        cout<<"\nWrong Choose,Try again...";
        getch();
        manu_call();
        break;
    }
}



void manu_call()
{
    system("cls");
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////"<<endl<<endl;
    cout<<"\t\t\t----------------WELLCOME TO SEDCODERS GROCERY STORE ----------------\n";
    cout<<"\n////////////////////////////////////////////////////////////////////////////////////////////////\n\n"<<endl;

    cout<<"**********************************\n";
    cout<<"!  1. SHOPPING                   !\n";
    cout<<"**********************************\n";
    cout<<"!  2. OWNER                      !\n";
    cout<<"**********************************\n";
    cout<<"!  3. Exit                       !\n";
    cout<<"**********************************\n\n";

    cout<<"Enter your input : ";
    int in;
    cin>>in;
    switch(in)
    {
    case 1:
        customer();
        break;
    case 2:
        owner();
        break;
    case 3:
        exit(0);
        break;
    default:
        cout<<"\nTry again....";
        getch();
        manu_call();
        break;
    }
}




//2nd project





fstream file;
int ni, x;///////
string puser,ppass,ruser,rpass;
int sin_std;
string reguser,regpass,regnum,regema;


int std_current_live = 0;

typedef struct student
{
    string email, password, gender, phone, student_id, name;

} std_p;
std_p sp1;

typedef struct owner
{
    string name,email,phone;

} ownr;
ownr pro;

typedef struct mespro
{
    string place,address,name;
    int seat_no, price,room,serial_no=1;
} mes;
mes pro1;



string std_route;
string own_live;


//  function Starts here
int y, z, choice;
string owner_mess;

// MAIN function Starts here
void mess()
{
    int choice;
    system("cls");
    cout<<"\t\t\t\t***  WELCOME TO LU MESS RENT SOLUTION  ***\n\n"<<endl;
    cout<<"\t\t\t\t--------ENTER YOU CHOICE BELOW-----------"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"1. OWNER"<<endl;
    cout<<"2. STUDENT "<<endl;
    //cout<<"3. ENTER TO APPLICATION "<<endl;
    cout<<"4. EXIT APPLICATION "<<endl;

    cout<<endl;

    cout<<"ENTER : ";
    cin>>choice;

    frontpage(choice);

}






// Front Page function

void frontpage(int choice)
{

    cout<<"\n\t\t\t\t** LU MESS RENT SOLUTION  **\n"<<endl;

    switch(choice)
    {

    case 1:
    {
        system("cls");
        cout<<"\n\t\t\t\t**  LU MESS RENT SOLUTION  **\n"<<endl;
        cout<<"\n\t\t\t\t------------ OWNER'S PROFILE ---------- \n\n";
        sin_std=2;
        linked(sin_std);
        break;
    }

    case 2:

    {
        system("cls");
        cout<<"\n\t\t\t\t**  LU MESS RENT SOLUTION  **\n"<<endl;
        cout<<"\n\t\t\t\t------------ STUDENT'S PROFILE --------- \n\n";
        sin_std= -2;
        linked(sin_std);
        break;
    }

    case 3:
    {
        cout<< "\n\n+++++++++PLEASE SELECT AN USER++++++++++\n\n";
        cin.get();
        mess();
    }


    //case 4: exit();
    //case 3: login();break;
    //case 4: signup(x);break;


    default:
    {
        cout<<" !!! INVALID INPUT !!! "<<endl;
    }

    cin.get();
    cin.get();
    mess();

    }
}





// Linked to LOG

void linked(int sin_std)
{
    //  cout<<"\n\n***  WELCOME TO LU MESS RENT SOLUTION  ***\n\n"<<endl;

    int ch;
    //  system("cls");
    //cout<<"------------Enter Choice Below --------------"<<endl;
    cout<<"1. SIGN IN"<<endl;
    cout<<"2. SIGN UP"<<endl;
    cout<<"3. EXIT "<<endl;

    cout<<endl;
    cout<<"ENTER : ";
    cin>>ch;

    if( ch==1 )
    {
        login(sin_std);
    }

    else if( ch==2 )
    {
        signup(sin_std);
    }
    else if( ch==3 )
    {
        mess();
    }
    else{
        cout<<"WRONG CHOICE"<<endl;
    }

    cin.get();
     cin.get();
    mess();

}




// SIGN UP FUNCTION

void signup(int sin_std)
{
    system("cls");

    cout<<"\n\t\t\t\t**    LU MESS RENT SOLUTION  **\n\n\n"<<endl;
    cout<<"\t\t\t\t------------SIGNUP PAGE --------------"<<endl;
    cout<<endl;

    //cout<<"\n\n***  WELCOME TO LU MESS RENT SOLUTION  ***\n\n\n"<<endl;
    string ruser,rpass,rmail,rphn;

//system("cls");
    if( sin_std ==2)

    {
        cout<<"Enter User Name : ";
        getline(cin >> ws, pro.name);

        cout<<"Enter Email : ";
        cin>>rmail;

        cout<<"Enter Phone number : ";
        cin>>rphn;

        cout<<"Enter Password : ";
        cin>>rpass;


        //owner_mess=sp1.name;
        string k =pro.name;
        mkdir(k.c_str());
        ofstream signup(k+"./"+pro.name+"_owner_pass_data_base.txt");
        //signup<<"\n ** OWNER'S INFO ***\n"<<endl;
        signup<<pro.name<<" "<<rpass<<" "<<rphn<<" "<<" "<<rmail<<endl;
    }


    else if( sin_std== -2)

    {

        cout<<"Enter User Name : ";
        getline(cin >> ws, sp1.name);

        cout<<"Enter Email : ";
        cin>>rmail;

        cout<<"Enter Phone number : ";
        cin>>rphn;

        cout<<"Enter Password : ";
        cin>>rpass;






        string k =sp1.name;
        mkdir(k.c_str());
        ofstream signup(k+"./"+sp1.name+"_std_pass_data_base.txt");
        // signup<<"\n ** STUDENTS'S INFO ** \n "<<endl;
        signup<<sp1.name<<" "<<rpass<<" "<<rphn<<" "<<" "<<rmail<<endl;
    }


//system("cls");
    cout<<"\n\t\t\t\t-----  SIGN UP SUCCESSFULL !! -----\n\n"<<endl;

    cin.get();
    mess();

}





// LOG IN FUNCTION

void login(int sin_std)
{
    //   cout<<"\n\n***  WELCOME TO LU MESS RENT SOLUTION  ***\n\n\n"<<endl;
    system("cls");
    cout<<"\n\t\t\t\t**   LU MESS RENT SOLUTION  **\n"<<endl;
    cout<<"\t\t\t\t------------SIGNIN PAGE --------------"<<endl;
    int prev=0;
    string puser,ppass,user,pass;

    if(sin_std==2)
    {
        cout<<"Enter User Name : ";
        getline(cin >> ws, pro.name);

        cout<<"Enter Password : ";
        cin>>ppass;


        string k =pro.name;

        ifstream obase(k+"./"+pro.name+"_owner_pass_data_base.txt");

        while(obase>> user>> pass)
        {
            if(user == pro.name && pass == ppass)
            {
                prev=1;
            }

        }
        obase.close();



        if(prev==0)
        {
            cout<<"INVALID LOGIN INFO"<<endl;


            cin.get();
            mess();
        }
        else
        {
            cout<<"\n==================================================\n\n"<<endl;
            cout<<"================  HELLOO "<<pro.name<<"  ==========================\n\n";
            cout<<"\n==================================================\n\n"<<endl;

            cin.get();
            start_owner();
        }



    }




    else if(sin_std==-2)
    {


        cout<<"Enter User Name : ";
        getline(cin >> ws, sp1.name);

        cout<<"Enter Password : ";
        cin>>ppass;

        string k =sp1.name;
        ifstream sbase(k+"./"+sp1.name+"_std_pass_data_base.txt");
        while(sbase>> user>> pass)
        {
            if(user == sp1.name && pass == ppass)
            {
                prev=1;
            }

        }
        sbase.close();




        if(prev==0)
        {
            cout<<"INVALID LOGIN INFO"<<endl;


            cin.get();
            mess();
        }
        else
        {
            cout<<"\n==================================================\n\n"<<endl;
            cout<<"================        HELLOO "<<sp1.name<<"  ==========================\n\n";
            cout<<"\n==================================================\n\n"<<endl;

            cin.get();
            start_student();
        }
    }

}














int start_student()
{

    std_full_profile();
}


void std_full_profile()
{
    system("cls");
    cout << "\t\t\t\t---------- SIGNED IN AS -----------" << endl;
    cout << "\t\t\t\t          STUDENT       " << endl;
    cout<<endl;
    cout<<"\t\t\t\t"<<sp1.name<<"'s Profile"<<endl;
    cout<<"\n\n";
    cout << "\n\n";

    cout << "1.  MY PROFILE " << endl;
    cout << "2.  START MESS SERVER " << endl;
    cout << "3.  LOG OUT \n\n"
         //cout << "3.  EXIT " << endl;
         << endl;
    cout << "    ENTER CHOICE :  ";
    int op;
    cin >> op;
    first_std(op);
}




void first_std(int op)
{
    switch (op)
    {
    case 1:
        student_page(op);
        break;
    case 2:
        student_first_mess_profile();
        break;
    case 3:
        mess();
        break;
    }
}





void student_page(int opt)
{

    system("cls");
    cout << "\n\t\t\t\t---------- "<<sp1.name<<"'s Profile ---------- \n\n";
    switch (opt)
    {

    case 1:
    {
        cout << "1. CREATE PROFILE" << endl;
        cout << "2. VIEW PROFILE" << endl;
        cout << "3. EDIT PROFILE" << endl;
        cout << "4. START MESSS SERVER" << endl;
        cout << "5. EXIT " << endl;

        int x;
        cout << "ENTER CHOICE : " << endl;
        cin >> x;
        student_second_page(x);
        break;
    }

    default:
    {
        cout << " !!! INVALID INPUT !!! " << endl;
        break;
    }

    cin.get();
    cin.get();
    start_student();

    }
}




void student_second_page(int ni)
{

    switch (ni)
    {

    case 1:
        create_student_profile();
        break;
    case 2:
        view_full_profile();
        break;
    case 3:
        edit_student_profile();
        break;
    case 4:
        student_first_mess_profile();
        break;

    case 5 :
        std_full_profile();
    default:
    {
        cout << " !!! INVALID INPUT !!! " << endl;
        break;
    }

    cin.get();
    cin.get();
    start_student();
    }
}





void create_student_profile()
{



    cout << "Enter your full name : ";
    getline(cin >> ws, sp1.name);

    cout << "Enter your Email : ";
    getline(cin >> ws, sp1.email);

    cout << "Enter your Password : ";
    getline(cin >> ws, sp1.password);

    cout << "Gender : ";
    getline(cin >> ws, sp1.gender);

    cout << "Enter your student ID : ";

    getline(cin >> ws, sp1.student_id);

    cout << "Enter your Phone Number : ";

    getline(cin >> ws, sp1.phone);


    string k =sp1.name;


    {

        ofstream stdp(k+"./"+sp1.name+"_profile_data_base.txt");
        stdp << sp1.name << "\n";
        stdp << sp1.email << " " << sp1.gender << " " << sp1.password << " " << sp1.phone << endl;
        stdp.close();

    }


    cout << "\nn\nPROFILE CREATION SUCCESSFULL\n";

    cin.get();
    cin.get();
    system("cls");
    start_student();
}





void view_full_profile()
{
    system("cls");
    string k =sp1.name;
    ifstream view_profile(k+"./"+sp1.name+"_profile_data_base.txt");
    cout << "\n\n========= =====  THIS IS YOU CURRENT PROFILE ===== ============= \n\n\n" << endl;

    while (view_profile >> sp1.name >> sp1.email >> sp1.gender >> sp1.password >> sp1.phone)
    {

        cout<<"\n\n\n";
        cout << "\t\t\tName     : " << sp1.name << endl;
        cout << "\t\t\tEmail    : " << sp1.email << endl;
        cout << "\t\t\tGender   : " << sp1.gender << endl;
        cout << "\t\t\tPassword : " << sp1.password << endl;
        cout << "\t\t\tPhone    : " << sp1.phone << endl;
    }

    view_profile.close();

    cin.get();
    cin.get();
    start_student();
}





void edit_student_profile()
{
    system("cls");
    cout << "========= =====  THIS IS YOU CURRENT PROFILE ===== ============= " << endl;


    string k =sp1.name;
    ifstream view_profile;
    view_profile.open(k+"./"+sp1.name+"_profile_data_base.txt");

    while (view_profile >> sp1.name >> sp1.email >> sp1.gender >> sp1.password >> sp1.phone)
    {
        cout<<"\n\n\n";
        cout << "\t\t\tName     : " << sp1.name << endl;
        cout << "\t\t\tEmail    : " << sp1.email << endl;
        cout << "\t\t\tGender   : " << sp1.gender << endl;
        cout << "\t\t\tPassword : " << sp1.password << endl;
        cout << "\t\t\tPhone    : " << sp1.phone << endl;
    }


    cout << "\n\n\n\tENTER NEW INFORMATION TO UPDATE PROFILE \n" << endl;


    cout << "\tEnter your Name to Update according : ";
    getline(cin >> ws, sp1.name);
    cin.get();


    cout << "Enter your Email : ";
    getline(cin >> ws, sp1.email);

    cout << "Enter your Password : ";
    getline(cin >> ws, sp1.password);

    cout << "Gender : ";
    getline(cin >> ws, sp1.gender);
    ;

    cout << "Enter your student ID : ";
    // getline(cin >> ws, sp1.student_id);
    cin >> sp1.student_id;

    cout << "Enter your Phone Number : ";
    // getline(cin,sp1.phone);
    getline(cin >> ws, sp1.phone);

    {
        ofstream stdp(k+"./"+sp1.name+"_profile_data_base.txt", ios::out);
        // stdp<<"\n ** STUDENT'S PROFILE ***\n"<<endl;
        stdp << sp1.name << endl;
        stdp << sp1.email << " " << sp1.gender << " " << sp1.password << " " << sp1.phone << endl;

    }
    system("cls");

    cout << "\nn\nPROFILE UPDATE SUCCESSFULL\n";

    cout << "========= =====  THIS IS YOU UPDATED PROFILE ===== ============= " << endl;

    // view_full_profile();
//       string k =sp1.name;
    ifstream view_new_profile(k+"./"+sp1.name+"_profile_data_base.txt");

    while (view_new_profile >> sp1.name >> sp1.email >> sp1.gender >> sp1.password >> sp1.phone)
    {

        cout << "Name     : " << sp1.name << endl;
        cout << "Email    : " << sp1.email << endl;
        cout << "Gender   : " << sp1.gender << endl;
        cout << "Password : " << sp1.password << endl;
        cout << "Phone    : " << sp1.phone << endl;
    }

    view_new_profile.close();



    cin.get();

    // main();

    std_full_profile();







}





void student_first_mess_profile()
{

    system("cls");

    cout << "\n\n  ======== STUDENT MESS PROFILE =========== \n\n\n " << endl;
    cout << "1.START MESS SEARCH " << endl;
    cout << "2.MESS PROFILE" << endl;
    cout<<  "3.EDIT MESS INFORAMTION"<<endl;
    cout<< "4.Go Back"<<endl;
    cout << "ENTER CHOICE : ";
    int std_mess_profile;
    cin >> std_mess_profile;
    switch (std_mess_profile)
    {
    case 1:
        student_mess_search_path();
        break;
    case 2:
        student_full_mess_profile();
        break;
    case 4 :
        std_full_profile();


    default:
        cout << "INVALID INFO";
        cin.get();
        cin.get();
        student_first_mess_profile();
        break;
    }
}





void student_mess_search_path()
{

    system("cls");

    cout << " \n\n ========  CHOOSE SEAT NUMBER ==========\n\n\n";
    int seat_no;

    cout << " \n\n ENTER SEAT ( 1 - 6 ) : ";
    cin >> seat_no;


    string k = sp1.name;

    {
        ofstream stp_seat(k+"./"+sp1.name+"_mess_full_data_base.txt", ios::app);
        stp_seat << sp1.name <<"\n"<< seat_no << endl;

        stp_seat.close();
    }

    system("cls");

    int std_route_no;
LOOP:
    cout << "ENTER ROUTE NO : ";
    cin >> std_route_no;

    switch (std_route_no)
    {
    case 1:
        std_route_one(seat_no);
        break;
    case 2:
        std_route_two(seat_no);
        break;

    case 3:
        std_route_three(seat_no);
        break;
    case 4:
        std_route_four(seat_no);
        break;

    default:
        cout << "* INVALID INPUT * " << endl;
        goto LOOP;
        break;
    }
}






void std_route_one(int ni)
{
    string r1_add, r1_room;
    int r1_serial,r1_seat,r1_price;

    ifstream std_r_one;
    std_r_one.open("std_route_one_address_base.txt");
    if (std_r_one.fail())
    {
        cout << "FILE NOT FOUND";
    }

    else
    {

        string one_route;

        while (std_r_one >> one_route)
        {

            cout << one_route << endl;
        }
        std_r_one.close();
    }
    cout << "Type the Points name : " << endl;
    string point_r_one;
    cin >> point_r_one;


    string k = sp1.name;

    system("cls");
    cout << "  ====== " << point_r_one << " MESSES ARE  ====== \n"
         << endl;


    ifstream r_one_add;
    r_one_add.open(point_r_one + ".txt");    //open the typed point file  i.e: Tilaghor.txt
    {



        while (r_one_add >> r1_serial >> r1_add >> r1_room >> r1_seat >> r1_price)
        {
            if (r1_seat >= ni)
            {
                // searches meess seat based on user input
                cout << "SERIAL  :" << r1_serial<<endl;
                cout << "ADDRESS :" << r1_add << endl;
                cout << "ROOMS   :" << r1_room << endl;
                cout << "SEATS   :" << r1_seat << endl;
                cout << "PRICE   :" << r1_price << endl;
                cout << "\n\n";
            }
        }
    }

    /////////////////////////////////////////////////

    ifstream r_one_adds;
    r_one_adds.open(point_r_one + ".txt");
    {




        cout<<"Enter Serial No : ";
        int std_serial;
        cin>>std_serial;


        while (r_one_adds >> r1_serial >> r1_add >> r1_room >> r1_seat >> r1_price)

        {

            if(std_serial == r1_serial)
            {


                string k = sp1.name;

                ofstream stp_seat(k+"./"+sp1.name+"_mess_full_data_base.txt", ios::app);
                stp_seat << r1_serial <<"\n"<< point_r_one <<"\n"<< r1_add <<"\n"<< r1_room <<"\n"<<r1_seat<<"\t"<<r1_price<<endl<<endl;


                // searches meess seat based on user input
                cout<<"\n";
                cout<<"\nYOU REQUESTED DESIRED MESS IS \n\n"<<endl;
                cout << "SERIAL  :" << r1_serial<<endl;
                cout << "ADDRESS :" << r1_add << endl;
                cout << "ROOMS   :" << r1_room << endl;
                cout << "SEATS   :" << r1_seat << endl;
                cout << "PRICE   :" << r1_price << endl;
                cout << "\n\n";
                break;

            }
        }

        ofstream stp_seats(r1_add+"_mess_pending_info.txt", ios::app);
        stp_seats <<sp1.name <<"\n"<< r1_serial <<"\n"<< point_r_one <<"\n"<< r1_add <<"\n"<< r1_room <<"\n"<<r1_seat<<"\n"<<r1_price<<endl<<endl;





    }

}



void std_route_two(int ni)
{


    string r1_add, r1_room;
    int r2_serial,r1_seat;


    ifstream std_r_two;
    std_r_two.open("std_route_two_address_base.txt");
    if (std_r_two.fail())
    {
        cout << "FILE NOT FOUND";
    }

    else
    {

        string two_route;

        while (std_r_two >> two_route)
        {

            cout << two_route << endl;
        }
        std_r_two.close();
    }
    cout << "Type the Points name : " << endl;
    string point_r_two;
    cin >> point_r_two;

    string k = sp1.name;
    ofstream stp_seat(k+"./"+sp1.name+"_mess_full_data_base.txt", ios::app);

    stp_seat << point_r_two << endl;

    stp_seat.close();

    system("cls");
    cout << "  ====== " << point_r_two << " MESSES ARE  ====== \n"
         << endl;
    ifstream r_two_add;
    r_two_add.open(point_r_two + ".txt");
    {

        /*string r1_add, r1_room;
        int r1_seat;
        */
        while (r_two_add >> r1_add >> r1_room >> r1_seat)
        {
            if (r1_seat >= ni)
            {
                // searches meess seat based on user input
                cout << "ADDRESS :" << r1_add << endl;
                cout << "ROOMS   :" << r1_room << endl;
                cout << "SEATS   :" << r1_seat << endl;
                cout << "\n\n";
            }
        }
    }









    //////////////////////////////////////////////////

    ifstream r_two_adds;
    r_two_adds.open(point_r_two + ".txt");
    {


        cout<<"Enter Serial No : ";
        int std_serial;
        cin>>std_serial;

        while (r_two_adds >> r2_serial >> r1_add >> r1_room >> r1_seat)
        {
            if(std_serial == r2_serial)
            {

                string k = sp1.name;

                ofstream stp_seat(k+"./"+sp1.name+"_mess_full_data_base.txt", ios::out);
                stp_seat << r2_serial <<"\n"<< point_r_two<<"\n"<< r1_add <<"\n"<< r1_room <<"\n"<<r1_seat<<endl;

                // searches meess seat based on user input
                cout<<"\n";
                cout<<"YOU REQUESTED DESIRED MESS IS :"<<endl;
                cout << "SERIAL  :" << r2_serial<<endl;
                cout << "ADDRESS :" << r1_add << endl;
                cout << "ROOMS   :" << r1_room << endl;
                cout << "SEATS   :" << r1_seat << endl;
                cout << "\n\n";
                break;


            }
        }



        ofstream stp_seats(r1_add+"_mess_pending_info.txt", ios::app);
        stp_seats <<sp1.name <<"\n"<< r2_serial <<"\n"<< point_r_two <<"\n"<< r1_add <<"\n"<< r1_room <<"\n"<<r1_seat<<endl<<endl;




    }
//r_one_add.close();


}



void std_route_three(int ni)
{


    string r1_add, r1_room;
    int r3_serial,r1_seat,r1_price;

    ifstream std_r_three;
    std_r_three.open("std_route_three_address_base.txt");
    if (std_r_three.fail())
    {
        cout << "FILE NOT FOUND";
    }

    else
    {

        string three_route;

        while (std_r_three >> three_route)
        {

            cout << three_route << endl;
        }
        std_r_three.close();
    }
    cout << "Type the Points name : " << endl;
    string point_r_three;
    cin >> point_r_three;

    string k = sp1.name;
    ofstream stp_seat(k+"./"+sp1.name+"_mess_full_data_base.txt", ios::app);


    stp_seat << point_r_three << endl;

    stp_seat.close();

    system("cls");
    cout << "  ====== " << point_r_three << " MESSES ARE  ====== \n"
         << endl;
    ifstream r_three_add;
    r_three_add.open(point_r_three + ".txt");
    {

        /*  string r1_add, r1_room;
          int r1_seat; */
        while (r_three_add >> r1_add >> r1_room >> r1_seat)
        {
            if (r1_seat >= ni)
            {
                // searches meess seat based on user input
                cout << "ADDRESS :" << r1_add << endl;
                cout << "ROOMS   :" << r1_room << endl;
                cout << "SEATS   :" << r1_seat << endl;
                cout << "\n\n";
            }
        }
    }


    /////////////////////////////////////////////////

    ifstream r_three_adds;
    r_three_adds.open(point_r_three + ".txt");
    {


        cout<<"Enter Serial No : ";
        int std_serial;
        cin>>std_serial;

        while (r_three_adds >> r3_serial >> r1_add >> r1_room >> r1_seat)
        {
            if(std_serial == r3_serial)
            {

                string k = sp1.name;

                ofstream stp_seat(k+"./"+sp1.name+"_mess_full_data_base.txt", ios::out);
                stp_seat << r3_serial <<"\n"<< point_r_three <<"\n"<< r1_add <<"\n"<< r1_room <<"\n"<<r1_seat<<endl;

                // searches meess seat based on user input
                cout<<"\n";
                cout<<"YOU REQUESTED DESIRED MESS IS :"<<endl;
                cout << "SERIAL  :" << r3_serial<<endl;
                cout << "ADDRESS :" << r1_add << endl;
                cout << "ROOMS   :" << r1_room << endl;
                cout << "SEATS   :" << r1_seat << endl;
                cout << "PRICE   :" << r1_price << endl;
                cout << "\n\n";
                break;

            }
        }



        ofstream stp_seats(r1_add+"_mess_pending_info.txt", ios::app);
        stp_seats <<sp1.name <<"\n"<< r3_serial <<"\n"<< point_r_three<<"\n"<< r1_add <<"\n"<< r1_room <<"\n"<<r1_seat<<"\n"<<r1_price<<endl<<endl;



    }
//r_one_add.close();



}



void std_route_four(int ni)
{
    string r1_add, r1_room;
    int r4_serial,r1_seat,r1_price;

    ifstream std_r_four;
    std_r_four.open("std_route_four_address_base.txt");
    if (std_r_four.fail())
    {
        cout << "FILE NOT FOUND";
    }

    else
    {

        string four_route;

        while (std_r_four >> four_route)
        {

            cout << four_route << endl;
        }
        std_r_four.close();
    }
    cout << "Type the Points name : " << endl;
    string point_r_four;
    cin >> point_r_four;

    string k = sp1.name;
    ofstream stp_seat(k+"./"+sp1.name+"_mess_full_data_base.txt", ios::app);

    stp_seat << point_r_four << endl;

    stp_seat.close();

    system("cls");
    cout << "  ====== " << point_r_four << " MESSES ARE  ====== \n"  << endl;


    ifstream r_four_add;
    r_four_add.open(point_r_four + ".txt");
    {


        while (r_four_add >> r1_add >> r1_room >> r1_seat >> r1_price)
        {
            if (r1_seat >= ni)
            {
                // searches meess seat based on user input
                cout << "ADDRESS :" << r1_add << endl;
                cout << "ROOMS   :" << r1_room << endl;
                cout << "SEATS   :" << r1_seat << endl;
                cout << "PRICE   :" << r1_price << endl;
                cout << "\n\n";
            }
        }
    }





    /////////////////////////////////////////////////

    ifstream r_four_adds;
    r_four_adds.open(point_r_four + ".txt");
    {




        cout<<"Enter Serial No : ";
        int std_serial;
        cin>>std_serial;




        while (r_four_adds >> r4_serial >> r1_add >> r1_room >> r1_seat)
        {
            if(std_serial == r4_serial)
            {

                string k = sp1.name;

                ofstream stp_seat(k+"./"+sp1.name+"_mess_full_data_base.txt", ios::out);
                stp_seat << r4_serial <<"\n"<< point_r_four <<"\n"<< r1_add <<"\n"<< r1_room <<"\n"<<r1_seat<<"\n"<<r1_price<<endl;


                // searches meess seat based on user input
                cout<<"\n";
                cout<<"YOU REQUESTED DESIRED MESS IS :"<<endl;
                cout << "SERIAL  :" << r4_serial<<endl;
                cout << "ADDRESS :" << r1_add << endl;
                cout << "ROOMS   :" << r1_room << endl;
                cout << "SEATS   :" << r1_seat << endl;
                cout << "PRICE   :" << r1_price << endl;
                cout << "\n\n";
                break;






            }
        }



        ofstream stp_seats(r1_add+"_mess_pending_info.txt", ios::app);
        stp_seats <<sp1.name <<"\n"<< r4_serial <<"\n"<< point_r_four <<"\n"<< r1_add <<"\n"<< r1_room <<"\n"<<r1_seat<<"\n"<<r1_price<<endl<<endl;




    }
//r_one_add.close();







}


void student_full_mess_profile()
{

    cout<<" 1. CURRENT MESS "<<endl;
    cout<<" 2. PENDING MESS "<<endl;
    int c_m;
    cout<<"ENTER : ";
    cin>>c_m;
    switch(c_m)
    {
    case 1:
        std_current_mess();
        break;
    case 2:
        std_pending_mess();
        break;
    }


}


void std_current_mess()
{

/*
    string k = sp1.name;


    string r1_add, r1_point,r1_room;
    int r1_serial,r1_seat,r1_price;

    ifstream old_mess;
    old_mess.open(k+"./"+sp1.name+"_mess_full_data_base.txt");
    {



        while (old_mess >> r1_serial >> r1_point >> r1_add >> r1_room >> r1_seat >> r1_price)
        {


            //system("cls");
            own_live=r1_add;
            string r1_add, r1_name, r1_point,r1_room;
            int r1_serial,r1_seat,r1_price;

            ifstream scm;
            scm.open(own_live+"_mess_current_info.txt");
            {

                // system("cls");
                cout<<"\n";
                cout<<"=============== APPROVED ==================\n\n";
                cout<<"\n=== CURRENT MESS LIVING STATUS ARE ==== \n\n"<<endl;

                while (scm >> r1_name >> r1_serial >> r1_point >> r1_add >> r1_room >> r1_seat >> r1_price)
                {



                    cout << "NAME    :" << r1_name<<endl;
                    cout << "SERIAL  :" << r1_serial<<endl;
                    cout << "POINT   :" << r1_point << endl;
                    cout << "ADDRESS :" << r1_add << endl;
                    cout << "ROOMS   :" << r1_room << endl;
                    cout << "SEATS   :" << r1_seat << endl;
                    cout << "PRICE   :" << r1_price<<endl;
                    cout << "\n\n";

                }
            }

            scm.close();



        }

    }
    old_mess.close();


    cin.get();
    cin.get();
    system("cls");
    std_full_profile();
    */





    system("cls");

    ifstream mess_profiles(pro.name+"./"+pro.name+"_mess_info.txt", ios::app);
    while(mess_profiles >> pro1.serial_no >> pro1.address >> pro1.room>> pro1.seat_no >>pro1.price)
    {
        cout<<"Mess no : " << pro1.serial_no<<endl;
        // cout<<"Place : " << pro1.place<<endl;
        cout<<"Address : " << pro1.address<<endl;
        cout<<"Room Numbers : " << pro1.room<<endl;
        cout<<"Seat Numbers : " << pro1.seat_no<<endl;
        cout<<"Per Seat Price : " << pro1.price<<endl;

    }
    mess_profiles.close();
    cin.get();
    cin.get();
    std_full_profile();
}


void std_pending_mess()
{

/*
    string r1_add, r1_point,r1_room;
    int r1_serial,r1_seat,r1_price;

    string k = sp1.name;

    ifstream pend;
    pend.open(k+"./"+sp1.name+"_mess_full_data_base.txt");
    {


        //system("cls");

        while (pend >> r1_serial >> r1_point >> r1_add >> r1_room >> r1_seat >> r1_price )
        {

            // searches meess seat based on user input
            // searches meess seat based on user input

            cout<<"\n";
            cout<<"========== PENDING ==================\n\n";
            cout<<"\nYOU REQUESTED DESIRED MESS IS \n\n"<<endl;

            cout << "SERIAL  :" << r1_serial<<endl;
            cout << "POINT   :" << r1_point << endl;
            cout << "ADDRESS :" << r1_add << endl;
            cout << "ROOMS   :" << r1_room << endl;
            cout << "SEATS   :" << r1_seat << endl;
            cout << "PRICE   :" << r1_price <<endl;
            cout << "\n\n";

        }
    }
    pend.close();

    cin.get();
    cin.get();
    //system("cls");
    */



    system("cls");

    ifstream mess_profiles(pro.name+"./"+pro.name+"_mess_info.txt", ios::app);
    while(mess_profiles >> pro1.serial_no >> pro1.address >> pro1.room>> pro1.seat_no >>pro1.price)
    {
        cout<<"Mess no : " << pro1.serial_no<<endl;
        // cout<<"Place : " << pro1.place<<endl;
        cout<<"Address : " << pro1.address<<endl;
        cout<<"Room Numbers : " << pro1.room<<endl;
        cout<<"Seat Numbers : " << pro1.seat_no<<endl;
        cout<<"Per Seat Price : " << pro1.price<<endl;

    }
    mess_profiles.close();
    cin.get();
    cin.get();
    std_full_profile();









}





int start_owner()
{
    cout<<"\n\n ==== ENTERED AS OWNER ==== \n\n\n";
    cin.get();
    own_fistpage();

}




void own_fistpage()
{

    system("cls");
    int a;
    cout<<"\n\n \t \t \t ==== ENTERED AS OWNER ==== \n\n\n";
    cout <<"\t \t \t  LU MESS RENT SOLUTION "<<endl;
    cout<<"\t \t \t    OWNER PROFILE"<<endl;
    cout<<endl;
    cout<<"1.Profile"<<endl;
    cout<<"2.Mess Profile"<<endl;
    cout<<"3.Log Out"<<endl;
    cout<<endl;
    cout<<"Enter your choice : ";
    cin>>a;
    switch(a)
    {
    case 1:
        own_secndpage();
        break;
    case 2:
        own_mesfirpage();
        break;
    case 3:
        mess();
        break;


    }



}

void own_secndpage()
{
    system("cls");
    int a;
    cout <<"\t \t \t  LU MESS RENT SOLUTION "<<endl;
    cout<<"\t \t \t    OWNER PROFILE"<<endl;
    cout<<endl;
    cout<<"\n1.Create profile";
    cout<<"\n2.View Profile";
    cout<<"\n3.Edit profile";
    cout<<"\n4.Logout";
    cout<<"\n5.Back"<<endl;
    cout<<"\nEnter your choice: ";
    cin>>a;

    switch(a)
    {
    case 1:
        own_createprofile();
        break;
    case 2:
        own_profile();
        break;
    case 3:
        own_edit();
        break;

    case 4:
        own_fistpage();
        break;

    case 5:
        own_fistpage();
        break;



    }

    cin.get();
    cin.get();
    own_fistpage();

}

void own_createprofile()
{
    system("cls");

    ofstream ownp("data.txt");

    cout<<"Enter your full name : ";
    getline(cin >> ws, pro.name);

    cout<<"Enter your Email : ";
    getline(cin >> ws, pro.email);

    cout<<"Enter your Phone Number : ";
    getline(cin >> ws, pro.phone);

    //string nu=pro.name;
    mkdir(pro.name.c_str());

    {
        ofstream ownp(pro.name+"./"+pro.name+"_data.txt");
        ownp<<pro.name<<"\t"<<pro.email<<"\t"<<pro.phone<<endl;

    }

    cout<<endl;
    cout<<endl;

    cout<<"Welcome "<<pro.name<<endl;
    cout<<"Your profile is successfully created "<<endl;


    cin.get();
    cin.get();
    own_fistpage();



}

void own_profile()
{
    system("cls");
    //string nu=pro.name;
    // mkdir(pro.name.c_str());

    ifstream profile(pro.name+"./"+pro.name+"_data.txt");
    while(profile >> pro.name >> pro.email >> pro.phone)
    {
        cout<<"Name : "<<pro.name<<endl;
        cout<<"Email : "<<pro.email<<endl;
        cout<<"Phone : "<<pro.phone<<endl;

    }
    profile.close();
    cin.get();
    cin.get();


    own_secndpage();


}

void own_edit()
{

    cout<<"Your Current Account Information "<<endl;
    cout<<endl;

    // own_profile();

    cout<<endl;


    cout<<"ENTER NEW INFORMATION TO UPDATE PROFILE "<<endl;


    ofstream ownrp(pro.name+"./"+pro.name+"_data.txt");



    cout<<"Enter your full name : ";
    getline(cin >> ws, pro.name);

    cout<<"Enter your Email : ";
    getline(cin >> ws, pro.email);

    cout<<"Enter your Phone Number : ";
    getline(cin >> ws, pro.phone);



    {
        ofstream ownrp(pro.name+"./"+pro.name+"_data.txt");
        ownrp<<pro.name<<"\t"<<pro.email<<"\t"<<pro.phone<<endl;
    }

    cout<<"\nn\nPROFILE Updated SUCCESSFUL\n";

    cin.get();

    own_secndpage();


}

void own_mesfirpage()
{
    system("cls");
    int a;
    cout<<"\t \t \t  LU MESS RENT SOLUTION  "<<endl;
    cout<<"\t \t \t     MESS PROFILE  "<<endl;
    cout<<endl;
    cout<<"1.View Mess Profile"<<endl;
    cout<<"2.Create Mess Profile"<<endl;
    cout<<"3.Edit Mess Profile"<<endl;
    cout<<"4.Registered Student List"<<endl;
    cout<<"5.Current Student List"<<endl;
    cout<<"6.Log Out"<<endl;
    cout<<"7.Back"<<endl;
    cout<<endl;
    cout<<"Enter your choice : ";
    cin>>a;
    switch(a)
    {
    case 1:
        own_view_mess();
        break;
    case 2:
        own_create_mess();
        break;
    case 3:
        // own_edit_mess();
        break;
    case 4:
        own_pending();
        break;
    case 5:
        own_current();
        break;
    case 6:
        // own_notify();
        own_fistpage();
        break;
    case 7:
        own_fistpage();
        break;
    default:
        cout<<"Wrong choice";
        break;
    }

}


void own_create_mess()
{
    system("cls");

    string line;
    int a;

    cout <<"\t \t \t  LU MESS RENT SOLUTION "<<endl;
    cout<<"\t \t \t     MESS PROFILE"<<endl;
    cout<<endl;


    ifstream routepro("route.txt");
    while(getline(routepro,line))
    {
        cout<<line<<endl;
    }
    routepro.close();

    cout<<endl;
    cout<<endl;
    cout<<endl;


    cout<<"ENTER ROUTE NUMBER: ";
    cin>>a;

    switch(a)
    {
    case 1:
        own_route1();
        break;
    case 2:
        own_route2();
        break;
    case 3:
        own_route3();
        break;
    case 4:
        own_route4();
        break;

    default:
        cout<<"Invalid option "<<endl;



    }
}


void own_route1()
{

    system("cls");
    string line,place;
    int count=0,ro=0;
    mes str2;



    ifstream siri(pro.name+"./"+pro.name+"_mess_info.txt");
    while(getline(siri,line))
    {
        count++;
    }


    ifstream routepro("route_1.txt");
    while(getline(routepro,line))
    {
        cout<<line<<endl;
    }
    routepro.close();

    cout<<endl;
    cout<<endl;
    cout<<endl;



    cout<<"ENTER PLACE :";
    cin>>pro1.place;

    cout<<"\nENTER MESS ADDRESS WITH USENAME INFRONT: ";
    cin>>pro1.address;

    cout<<"\nENTER MESS ROOM NUMBERS: ";
    cin>>pro1.room;

    cout<<"\nENTER AVAILABLE SEAT NUMBERS: ";
    cin>>pro1.seat_no;

    cout<<"\nEnter PER SEAT PRICE : ";
    cin>>pro1.price;

    pro1.serial_no=count/3;

    ifstream siri1 (pro1.place+"_mess_info.txt");
    while(getline(siri1,line))
    {
        ro++;
    }

    mkdir(pro.name.c_str());
    {
        ofstream messo (pro.name+"./"+pro.name+"_mess_info.txt", ios::app);
        messo<<pro1.serial_no+1<<endl;
        messo<<pro1.address<<endl;
        messo<<pro1.room<<"\t"<<pro1.seat_no<<"\t"<<pro1.price<<endl;
    }

    pro1.serial_no=ro/3;


    {
        ofstream messe (pro1.place+".txt", ios::app);
        messe<<pro1.serial_no+1<<" "<<pro1.address<<" "<<pro1.room<<" "<<pro1.seat_no<<" "<<pro1.price<<endl;
    }


    cout<<"\nn\nMESS PROFILE CREATION SUCCESSFULL\n";

    cin.get();
    cin.get();


    own_fistpage();



}


void own_route2()
{

    system("cls");
    string line,place;
    int count=0,ro=0;
    mes pro2;


    ifstream siri(pro.name+"./"+pro.name+"mess_info.txt");
    while(getline(siri,line))
    {
        count++;
    }


    ifstream routepro("route_2.txt");
    while(getline(routepro,line))
    {
        cout<<line<<endl;
    }
    routepro.close();

    cout<<endl;
    cout<<endl;
    cout<<endl;


    cout<<"ENTER PLACE :";
    cin>>pro2.place;

    cout<<"\nENTER MESS ADDRESS  WITH USENAME INFRONT: ";
    cin>>pro2.address;

    cout<<"\nENTER MESS ROOM NUMBERS: ";
    cin>>pro2.room;

    cout<<"\nENTER AVAILABLE SEAT NUMBERS: ";
    cin>>pro2.seat_no;

    cout<<"\nEnter PER SEAT PRICE : ";
    cin>>pro2.price;


    pro2.serial_no=count/3;
    ifstream siri1 (pro2.place+"_mess_info.txt");
    while(getline(siri1,line))
    {
        ro++;
    }

    mkdir(pro.name.c_str());

    {
        ofstream messo (pro.name+"./"+pro.name+"_mess_info.txt", ios::app);
        messo<<pro2.serial_no+1<<endl;
        messo<<pro2.address<<endl;
        messo<<pro2.room<<"\t"<<pro2.seat_no<<"\t"<<pro2.price<<endl;
    }

    pro2.serial_no=ro/3;


    {
        ofstream messe (pro2.place+".txt", ios::app);
        messe<<pro2.serial_no+1<<" "<<pro2.address<<" "<<pro2.room<<" "<<pro2.seat_no<<" "<<pro2.price;
    }


    cout<<"\nn\nMESS PROFILE CREATION SUCCESSFULL\n";

    cin.get();
    cin.get();


    own_fistpage();



}

void own_route3()
{

    system("cls");
    string line,place;
    int count=0,ro=0;
    mes pro3;

    ifstream siri(pro.name+"./"+pro.name+"mess_info.txt");
    while(getline(siri,line))
    {
        count++;
    }


    ifstream routepro("route_3.txt");
    while(getline(routepro,line))
    {
        cout<<line<<endl;
    }
    routepro.close();

    cout<<endl;
    cout<<endl;
    cout<<endl;



    cout<<"ENTER PLACE :";
    cin>>pro3.place;

    cout<<"\nENTER MESS ADDRESS WITH USENAME INFRONT: ";
    cin>>pro3.address;

    cout<<"\nENTER MESS ROOM NUMBERS: ";
    cin>>pro3.room;

    cout<<"\nENTER AVAILABLE SEAT NUMBERS: ";
    cin>>pro3.seat_no;

    cout<<"\nEnter PER SEAT PRICE : ";
    cin>>pro3.price;

    pro3.serial_no=count/3;
    ifstream siri1 (pro3.place+"_mess_info.txt", ios::app);
    while(getline(siri1,line))
    {
        ro++;
    }

    mkdir(pro.name.c_str());

    {
        ofstream messz (pro.name+"./"+pro.name+"_mess_info.txt", ios::app);
        messz<<pro3.serial_no+1<<endl;
        messz<<pro3.address<<endl;
        messz<<pro3.room<<"\t"<<pro3.seat_no<<"\t"<<pro3.price<<endl;
    }
    pro3.serial_no=ro/3;

    {
        ofstream messe (pro1.place+".txt", ios::app);
        messe<<pro3.serial_no+1<<" "<<pro3.address<<" "<<pro3.room<<" "<<pro3.seat_no<<" "<<pro3.price;
    }



    cout<<"\nn\nMESS PROFILE CREATION SUCCESSFULL\n";

    cin.get();
    cin.get();


    own_fistpage();



}

void own_route4()
{

    system("cls");
    string line,place;
    int count=0,ro=0;
    mes pro4;

    ifstream siri(pro.name+"./"+pro.name+"mess_info.txt");
    while(getline(siri,line))
    {
        count++;
    }
    ifstream routepro("route_4.txt");
    while(getline(routepro,line))
    {
        cout<<line<<endl;
    }
    routepro.close();

    cout<<endl;
    cout<<endl;
    cout<<endl;


    cout<<"ENTER PLACE :";
    cin>>pro4.place;

    cout<<"\nENTER MESS ADDRESS WITH USENAME INFRONT: ";
    cin>>pro4.address;

    cout<<"\nENTER MESS ROOM NUMBERS: ";
    cin>>pro4.room;

    cout<<"\nENTER AVAILABLE SEAT NUMBERS: ";
    cin>>pro4.seat_no;

    cout<<"\nEnter PER SEAT PRICE : ";
    cin>>pro4.price;

    pro4.serial_no=count/3;
    ifstream siri1 (pro4.place+"_mess_info.txt");
    while(getline(siri1,line))
    {
        ro++;
    }

    mkdir(pro.name.c_str());

    {
        ofstream messv (pro.name+"./"+pro.name+"_mess_info.txt", ios::app);
        messv<<pro4.serial_no+1<<endl;
        messv<<pro4.address<<endl;
        messv<<pro4.room<<"\t"<<pro4.seat_no<<"\t"<<pro4.price<<endl;
    }

    pro4.serial_no=ro/3;
    {
        ofstream messe (pro1.place+".txt", ios::app);
        messe<<pro4.serial_no+1<<" "<<pro4.address<<" "<<pro4.room<<" "<<pro4.seat_no<<" "<<pro4.price;
    }



    cout<<"\nn\nMESS PROFILE CREATION SUCCESSFULL\n";

    cin.get();
    cin.get();


    own_fistpage();



}


void own_view_mess()
{

    system("cls");

    ifstream mess_profile(pro.name+"./"+pro.name+"_mess_info.txt", ios::app);
    while(mess_profile >> pro1.serial_no >> pro1.address >> pro1.room>> pro1.seat_no >>pro1.price)
    {
        cout<<"Mess no : " << pro1.serial_no<<endl;
        // cout<<"Place : " << pro1.place<<endl;
        cout<<"Address : " << pro1.address<<endl;
        cout<<"Room Numbers : " << pro1.room<<endl;
        cout<<"Seat Numbers : " << pro1.seat_no<<endl;
        cout<<"Per Seat Price : " << pro1.price<<endl;

    }
    mess_profile.close();
    cin.get();
    cin.get();
    own_fistpage();

}
















void own_pending()
{








    string r1_add, r1_name, r1_point,r1_room;
    int r1_serial,r1_seat,r1_price;

    string k = sp1.name;

    ifstream opend;
    opend.open(pro.name+"_mess_pending_info.txt");
    {

        //   while(!opend.eof()){
        system("cls");
        cout<<"\n";
        cout<<"========== PENDING ==================\n\n";
        cout<<"\n===PENDING MESS REQUESTS ARE ==== \n\n"<<endl;

        while (opend >> r1_name >> r1_serial >> r1_point >> r1_add >> r1_room >> r1_seat >>r1_price )
        {



            cout << "NAME    :" << r1_name<<endl;
            cout << "SERIAL  :" << r1_serial<<endl;
            cout << "POINT   :" << r1_point << endl;
            cout << "ADDRESS :" << r1_add << endl;
            cout << "ROOMS   :" << r1_room << endl;
            cout << "SEATS   :" << r1_seat << endl;
            cout << "PRICE   :" << r1_price << endl;
            cout << "\n\n";

        }
    }

    opend.close();







    cout<<"DO YOU WISH TO APPROVE ALL ?" <<endl;
    cout<<"1. YES "<<endl;
    cout<<"2.NO " <<endl;
    //cout<<"3.DELETE " <<endl;

    int wish_pen ;
    cout<<"ENTER : ";
    cin>>wish_pen;

    if(wish_pen == 1)
    {

        own_current();
    }
    else if(wish_pen==2)
    {

        cout<<"\nREQUEST ARE STILL IN PENDING";
        cin.get();
        cin.get();
        own_mesfirpage();
    }

///////////////////////////////////////////////////////////////////////////////////////////////////
    //                        USE THIS TO DELETE A FILE
//                  ofstream again(pro.name+"_mess_pending_info.txt");

///////////////////////////////////////////////////////////////////////////////////////////////////








}





void own_current()
{




    char line[100];

    ifstream is(pro.name+"_mess_pending_info.txt");
    ofstream os(pro.name+"_mess_current_info.txt");



    if (is.is_open())
    {
        while (!is.eof())
        {
            is.getline(line,100,'\n');
            os << line << endl;
        }

    }

//ofstream again(pro.name+"_mess_pending_info.txt");

    own_live= pro.name;

    string r1_add, r1_name, r1_point,r1_room;
    int r1_serial,r1_seat,r1_price;

    ifstream cpend;
    cpend.open(pro.name+"_mess_current_info.txt");
    {


        system("cls");
        cout<<"\n";
        cout<<"========== PENDING ==================\n\n";
        cout<<"\n=== CURRENT MESS DWELLERS ARE ==== \n\n"<<endl;

        while (cpend >> r1_name >> r1_serial >> r1_point >> r1_add >> r1_room >> r1_seat>>r1_price )
        {



            cout << "NAME    :" << r1_name<<endl;
            cout << "SERIAL  :" << r1_serial<<endl;
            cout << "POINT   :" << r1_point << endl;
            cout << "ADDRESS :" << r1_add << endl;
            cout << "ROOMS   :" << r1_room << endl;
            cout << "SEATS   :" << r1_seat << endl;
            cout << "PRICE   :" << r1_price << endl;
            cout << "\n\n";

        }
    }

    cpend.close();






    cin.get();
    cin.get();
    own_mesfirpage();

}


