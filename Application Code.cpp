//******STORE MANAGEMENT******// 

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
int p1,p2,p3,p4,t_p;
int s_price_imc=0,c_price_imc=0,s_price_ifc=0,c_price_ifc=0,s_price_wmc=0,c_price_wmc=0,s_price_wfc=0,c_price_wfc=0;
int quantity_imc=0,quantity_ifc=0,quantity_wmc=0,quantity_wfc=0;
char size_1[20],size_2[20],size_3[20],size_4[20];
class clothes
{
	int t_p;
    public:
    		void add();					//add member function declaration
            void displaystock();		//displaystock member function declaration
            friend int profit();		//profit friend function declaration 
};
class modification :public clothes		//single inheritance of class clothes
{
	public:
		void edit();					//edit member function declaration
		void remove();					//remove member function declaration 
};
void clothes :: add()					//member function definition outside the class
{
	int ch1;
    cout<<"\n\t\t\t\tEnter the details of the clothes you want to add : \n";
        while(1)
        {
            cout<<"\n\n\n\t\t\t\t1.Do you want to enter stock of Indian male clothes\n\t\t\t\t2.Do you want to enter stock of Indian female clothes\n\t\t\t\t3.Do you want to enter stock of Western male clothes\n\t\t\t\t4.Do you want to enter stock of Western female clothes\n\t\t\t\t5.Exit";
            cout<<"\n\t\t\t\tEnter your choice : ";
            cin>>ch1;
            if(ch1==1)
            {
            	system("cls");
            	cout<<"\n\n\t\t\t\tAdding stock of Indian Male Clothes....";
            	cout<<"\n\t\t\t\tEnter the quantity : ";
           		cin>>quantity_imc;
           		cout<<"\n\t\t\t\tEnter the Size(XS/S/M/L/XL/XXL): ";
        		cin>>size_1;
            	cout<<"\n\t\t\t\tEnter the selling price : ";
            	cin>>s_price_imc;
            	cout<<"\n\t\t\t\tEnter the cost price : ";
            	cin>>c_price_imc;
            	cout<<"\n\t\t\t\tStock Added Successfully!!\n\n";
            	Sleep(2500);
				system("cls");	
			}
			else if(ch1==2)
			{
				system("cls");
				cout<<"\n\n\t\t\t\tAdding stock of Indian Female Clothes....";
            	cout<<"\n\t\t\t\tEnter the quantity : ";
            	cin>>quantity_ifc;
            	cout<<"\n\t\t\t\tEnter the Size(XS/S/M/L/XL/XXL): ";
        		cin>>size_2;
            	cout<<"\n\t\t\t\tEnter the selling price : ";
            	cin>>s_price_ifc;
            	cout<<"\n\t\t\t\tEnter the cost price : ";
            	cin>>c_price_ifc;
            	cout<<"\n\t\t\t\tStock Added Successfully!\n\n";
            	Sleep(2500);
            	system("cls");
			}
			else if(ch1==3)
            {
            	system("cls");
            	cout<<"\n\n\t\t\t\tAdding stock of Western Male Clothes....";
            	cout<<"\n\t\t\t\tEnter the quantity : ";
           		cin>>quantity_wmc;
           		cout<<"\n\t\t\t\tEnter the Size(XS/S/M/L/XL/XXL): ";
        		cin>>size_3;
            	cout<<"\n\t\t\t\tEnter the selling price : ";
            	cin>>s_price_wmc;
            	cout<<"\n\t\t\t\tEnter the cost price : ";
            	cin>>c_price_wmc;
            	cout<<"\n\t\t\t\tStock Added Successfully!!\n\n";
            	Sleep(2500);
            	system("cls");
			}
			else if(ch1==4)
			{
				system("cls");
				cout<<"\n\n\t\t\t\tAdding stock of Western Female Clothes....";
            	cout<<"\n\t\t\t\tEnter the quantity : ";
            	cin>>quantity_wfc;
            	cout<<"\n\t\t\t\tEnter the Size(XS/S/M/L/XL/XXL): ";
        		cin>>size_4;
            	cout<<"\n\t\t\t\tEnter the selling price : ";
            	cin>>s_price_wfc;
            	cout<<"\n\t\t\t\tEnter the cost price : ";
            	cin>>c_price_wfc;
            	cout<<"\n\t\t\t\tStock Added Successfully!\n\n";
            	Sleep(2500);
            	system("cls");
			}
			else if(ch1==5)
			{
				system("cls");
				break;
			}
            else
            {
        		cout<<"\n\t\t\t\tEnter correct choice!!";
			}
    	}
}

void clothes :: displaystock()			//member function definition outside the class				
{
		cout<<"\n\t\t\t\t\t*****ALL CLOTHES*****\n";
        cout<<"**************************************************************************************************";
        cout<<"\nType Name\t\t\t\tSize\t\tQuantity\tSelling Price\t\tCost Price";
        cout<<"\n**************************************************************************************************"<<endl;
        cout<<"1.Indian Male clothes\t\t\t  "<<size_1<<"\t\t  "<<quantity_imc<<"\t\t    "<<s_price_imc<<"\t\t         "<<c_price_imc<<endl;
	    cout<<"2.Indian Female clothes\t\t\t  "<<size_2<<"\t\t  "<<quantity_ifc<<"\t\t    "<<s_price_ifc<<"\t\t         "<<c_price_ifc<<endl;
		cout<<"3.Western Male clothes\t\t\t  "<<size_3<<"\t\t  "<<quantity_wmc<<"\t\t    "<<s_price_wmc<<"\t\t         "<<c_price_wmc<<endl;
		cout<<"4.Western Female clothes\t\t  "<<size_4<<"\t\t  "<<quantity_wfc<<"\t\t    "<<s_price_wfc<<"\t\t         "<<c_price_wfc<<endl;
		Sleep(2500);
}

void modification :: edit()				//member function definition outside the class
{
	int ch2;
	while(1)
	{
		system("cls");
		cout<<"\n\t\t\t\tWhat Do You Want To Edit...."<<endl;
		cout<<"\n\t\t\t\t1.Indian Male Clothes\n\t\t\t\t2.Indian Female Clothes\n\t\t\t\t3.Western Male Clothes\n\t\t\t\t4.Western Female Clothes\n\t\t\t\t5.Exit";
		cout<<"\n\t\t\t\tEnter your choice : ";
		cin>>ch2;
			if(ch2==1)
			{
				system("cls");
				cout<<"\n\n\t\t\t\tEditing stock of Indian Male Clothes....";
				cout<<"\n\t\t\t\tEnter the quantity : ";
           		cin>>quantity_imc;
           		cout<<"\n\t\t\t\tEnter the Size(XS/S/M/L/XL/XXL): ";
        		cin>>size_1;
            	cout<<"\n\t\t\t\tEnter the selling price : ";
            	cin>>s_price_imc;
            	cout<<"\n\t\t\t\tEnter the cost price : ";
            	cin>>c_price_imc;
            	cout<<"\n\t\t\t\tStock Edited Successfully!!\n\n";
            	Sleep(2500);
				system("cls");	
			}
			else if(ch2==2)
			{
				system("cls");
				cout<<"\n\n\t\t\t\tEditing stock of Indian Female Clothes....";
            	cout<<"\n\t\t\t\tEnter the quantity : ";
            	cin>>quantity_ifc;
            	cout<<"\n\t\t\t\tEnter the Size(XS/S/M/L/XL/XXL): ";
        		cin>>size_2;
            	cout<<"\n\t\t\t\tEnter the selling price : ";
            	cin>>s_price_ifc;
            	cout<<"\n\t\t\t\tEnter the cost price : ";
            	cin>>c_price_ifc;
            	cout<<"\n\t\t\t\tStock Edited Successfully!!\n\n";
            	Sleep(2500);
            	system("cls");
			}
			else if(ch2==3)
            {
            	system("cls");
            	cout<<"\n\n\t\t\t\tEditting stock of Western Male Clothes....";
            	cout<<"\n\t\t\t\tEnter the quantity : ";
           		cin>>quantity_wmc;
           		cout<<"\n\t\t\t\tEnter the Size(XS/S/M/L/XL/XXL): ";
        		cin>>size_3;
            	cout<<"\n\t\t\t\tEnter the selling price : ";
            	cin>>s_price_wmc;
            	cout<<"\n\t\t\t\tEnter the cost price : ";
            	cin>>c_price_wmc;
            	cout<<"\n\t\t\t\tStock Edited Successfully!!\n\n";
            	Sleep(2500);
            	system("cls");
			}
			else if(ch2==4)
			{
				system("cls");
				cout<<"\n\n\t\t\t\tEditing stock of Western Female Clothes....";
            	cout<<"\n\t\t\t\tEnter the quantity : ";
            	cin>>quantity_wfc;
            	cout<<"\n\t\t\t\tEnter the Size(XS/S/M/L/XL/XXL): ";
        		cin>>size_4;
            	cout<<"\n\t\t\t\tEnter the selling price : ";
            	cin>>s_price_wfc;
            	cout<<"\n\t\t\t\tEnter the cost price : ";
            	cin>>c_price_wfc;
            	cout<<"\n\t\t\t\tStock Edited Successfully!\n\n";
            	Sleep(2500);
            	system("cls");
			}
			else if(ch2==5)
			{
				system("cls");
				break;
			}
            else
            {
        		cout<<"\n\t\t\t\tEnter correct choice!!";
			}
	}
}

void modification :: remove()			//member function definition outside the class
{
	int ch3,i;
	while(1)
	{
		system("cls");
		cout<<"\n\t\t\t\tWhich Stock Do You Want To Remove...."<<endl;
		cout<<"\n\t\t\t\t1.Indian Male Clothes\n\t\t\t\t2.Indian Female Clothes\n\t\t\t\t3.Western Male Clothes\n\t\t\t\t4.Western Female Clothes\n\t\t\t\t5.Exit";
		cout<<"\n\t\t\t\tEnter your choice : ";
		cin>>ch3;
		if(ch3==1)
			{
				cout<<"\n\n\t\t\t\tRemoving stock of Indian Male Clothes....";
				quantity_imc=0;
				size_1[i]='\0';
				s_price_imc=0;
				c_price_imc=0;
				//Sleep(2500);
				system("cls");	
			}
			else if(ch3==2)
			{
				cout<<"\n\n\t\t\t\tRemoving stock of Indian Female Clothes....";
				quantity_ifc=0;
				size_2[i]='\0';
				s_price_ifc=0;
				c_price_ifc=0;
				//Sleep(2500);
            	system("cls");
			}
			else if(ch3==3)
            {
            	cout<<"\n\n\t\t\t\tRemoving stock of Western Male Clothes....";
				quantity_wmc=0;
				size_3[i]='\0';
				s_price_wmc=0;
				c_price_wmc=0;
				Sleep(2500);
            	system("cls");
			}
			else if(ch3==4)
			{
				cout<<"\n\n\t\t\t\tRemoving stock of Western Female Clothes....";
				quantity_wfc=0;
				size_4[i]='\0';
				s_price_wfc=0;
				c_price_wfc=0;
				//Sleep(2500);
            	system("cls");
			}
			else if(ch3==5)
			{
				//system("cls");
				break;
			}
            else
            {
        		cout<<"\n\t\t\t\tEnter correct choice!!";
			}
	}
}
int profit()							//friend function definition
{
	system("cls");
	int p1=0,p2=0,p3=0,p4=0;
	int n_imc=0,n_ifc=0,n_wmc=0,n_wfc=0;
	if(n_imc<=quantity_imc && n_ifc<=quantity_ifc && n_wmc<=quantity_wmc && n_wfc<=quantity_wfc)
	{
		cout<<"\n\n\t\t\t\tEnter the number of Indian Male clothes sold this month : ";
		cin>>n_imc;
		cout<<"\n\t\t\t\tEnter the number of Indian Female clothes sold this month : ";
		cin>>n_ifc;
		cout<<"\n\t\t\t\tEnter the number of Western Male clothes sold this month : ";
		cin>>n_wmc;
		cout<<"\n\t\t\t\tEnter the number of Western female clothes sold this month : ";
		cin>>n_wfc;
		
		p1=(s_price_imc-c_price_imc)*n_imc;
		p2=(s_price_ifc-c_price_ifc)*n_ifc;
		p3=(s_price_wmc-c_price_wmc)*n_wmc;
		p4=(s_price_wfc-c_price_wfc)*n_wfc;
		t_p=p1+p2+p3+p4;
				
		cout<<"\n\t\t\t\tTotal Profit of these Month : "<<t_p;
		Sleep(2500);
	}
}

int main()								//start of main function
{
    system("cls");
    int ch5;
    while(1)
    {
    	
    	cout<<"\n\n\n\n\t\t\t\t*****WELCOME TO CLOTHES STORE MANAGEMENT SYSTEM*****\n";
    	cout<<"\n\t\t\t\t***********************************************\n";
        cout<<"\n\t\t\t\t1.Display All the Clothes in the Store\n\t\t\t\t2.Add New Stock\n\t\t\t\t3.Edit\n\t\t\t\t4.Remove\n\t\t\t\t5.Profit\n\t\t\t\t6.Exit";
        cout<<"\n\t\t\t\tEnter your choice : ";
        cin>>ch5;
        system("cls");
        switch(ch5)
        {
        	case 1: 
        		system("cls");
        		clothes d;				//object creatation
                d.displaystock();		//member function call
                break;
            case 2:
            	clothes a;				//object creatation
            	a.add();				//member function call
            	system("cls");
				break;
			case 3: 
				modification e;			//object creatation
				e.edit();				//member function call
				system("cls");	
				break;
			case 4: 
				modification r;			//object creatation
				r.remove();				//member function call
				system("cls");	
				break;	
			case 5:
				system("cls");
				profit();				//friend function call
				break;
			case 6:
				int x;
				cout<<"\n\t\t\t\tDo you want to Exit\n\t\t\t\t1.NO\t2.Yes : ";
				cin>>x;
				if(x==2)
				{
					cout<<"\n\t\t\t\tSigning Off...\n\n";
					exit(0);
				}
				else
				{
					system("cls");
					continue;
				}
				break;
			default:
				cout<<"\nEnter correct choice!!!"<<endl;
        }
    }
}
