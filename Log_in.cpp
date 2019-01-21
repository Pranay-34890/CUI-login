//Use MinGW compiler
#include <iostream>
#include<conio.h>
#include <string.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class security
{
	char username[40];
	char password[40];
public:
	void newdata()
	{
		cout<<"Enter username:"<<endl;
		cin>>username;
		cout<<"Enter password"<<endl;
		cin>>password;
	}
	void deletedata()
	{
		remove("database.txt");
	}
		char* getUsername()
	{
		return username;
	}
	char* getPassword()
	{
		return password;
	}	
}obj;
	fstream fp;
void new_data_entry()
{
	cout<<"New Data Entry:"<<endl;
		obj.newdata();
		fp.open("database.dat",ios::out);
		fp.write((char*)&obj,sizeof(security));
		cout<<"ENTRY SUCCESSFUL";
		fp.close();
}
void delete_previous_data()
{
	remove("database.dat");
}
		void check()
		{
			char user[40];
			char pass[40];
			char c=' ';
			int i=0;
			cout<<"Enter username:"<<endl;
				cin>>user;
				cout<<"Enter password"<<endl;
				while(i<10)
	{
		pass[i]=getch();
		c=pass[i];
		if(c==13) 
			break;
		else if(c==8)
			exit(0);
		else
			cout<<"#";
		i++;
	}
	pass[i]='\0';
	i=0;
					fp.open("database.dat",ios::in);
					fp.read((char*)&obj,sizeof(security));
					fp.close();
						if(strcmp(user,obj.getUsername())==0)
						{
							if(strcmp(pass,obj.getPassword())==0)
							{
							cout<<"\nSuccess"<<endl;
							}
						}
						else
						{
						cout<<"\nTry Again"<<endl;
						check();
						}
		}
int main()
{
	fstream fp1;	
	int in,a=0;
	
	fp1.open("database.dat",ios::in);
	if(fp1!=NULL)
		{
		for(;;)
		{
				system("cls");
				cout<<"1.LOGIN"<<endl;
				cout<<"2.RESET"<<endl;
				cout<<"3.Exit"<<endl;
				cin>>in;
				switch(in)
				{
					case 1:
					system("cls");
					check();
					break;
					case 2:
					system("cls");
					check();
					getch();
					system("cls");
					delete_previous_data();
					new_data_entry();
					getch();
					main();
					break;
					case 3:
					break;
					default:
					cout<<"Invalid";
				}
				break;
		}
	}	
			
	else
	

	{
			fp1.open("database.txt",ios::in);
			fp1.read((char*)&obj,sizeof(security));
			fp1.close();
				system("cls");
				new_data_entry();
				getch();
				main();
			}

				getch();
	return 0;
}
//made by Pranay-34890
