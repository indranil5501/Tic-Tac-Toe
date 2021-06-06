//****** TIC TAC TOE *******//
//...........CREATED BY INDRANIL DAS.......//

using namespace std;
#include<iostream>
char tic[]={'1','2','3','4','5','6','7','8','9'};
int p1,p2,score;
int ar[9]={0,0,0,0,0,0,0,0,0};


void show()
{
	system("cls");
	cout<<"*** TIC TAC TOE ***"<<endl;
	cout<<endl;
	cout<<"RULES--"<<endl;
	cout<<"#REEDIT OF X AND O IS NOT ALLOWED. "<<endl;
	cout<<"# PLAYER 1 - X"<<endl;
	cout<<"# PLAYER 2 - O"<<endl;
	cout<<endl;
	cout<<"|-----|-----|-----|"<<endl;
	cout<<"|  "<<tic[0]<<"  |  "<<tic[1]<<"  |  "<<tic[2]<<"  |"<<endl;
	cout<<"|-----|-----|-----|"<<endl;
	cout<<"|  "<<tic[3]<<"  |  "<<tic[4]<<"  |  "<<tic[5]<<"  |"<<endl;
	cout<<"|-----|-----|-----|"<<endl;
	cout<<"|  "<<tic[6]<<"  |  "<<tic[7]<<"  |  "<<tic[8]<<"  |"<<endl;
	cout<<"|-----|-----|-----|"<<endl;
}

void logic()
{
	
	if(tic[0]=='X'&& tic[1]=='X' &&tic[2]=='X'||tic[0]=='X'&& tic[3]=='X' && tic[6]=='X'|| tic[6]=='X' && tic[7]=='X' && tic[8]=='X'||tic[8]=='X' && tic[5]=='X' && tic[3]=='X'||tic[8]=='X' && tic[4]=='X' && tic[0]=='X')
	{
		cout<<"***PLAYER 1 WINNER***"<<endl;
		score++;
	}
	else if(tic[0]=='O'&& tic[1]=='O' &&tic[2]=='O'||tic[0]=='O'&& tic[3]=='O' && tic[6]=='O'|| tic[6]=='O' && tic[7]=='O' && tic[8]=='O'||tic[8]=='O' && tic[5]=='O' && tic[3]=='O'||tic[8]=='O' && tic[4]=='O' && tic[0]=='O')
	{
		cout<<"***PLAYER 2 WINNER***"<<endl;
		score++;	
	}
}


void input()
{
	int temp1,temp2;
		cout<<"enter the position player 1 (X)- ";
		cin>>p1;
		temp1=p1;
		cout<<"enter the position player 2 (O)- ";
		cin>>p2;
		temp2=p2;
		
			if(ar[p1-1]==0 || ar[p2-1]==0)
			{
				tic[temp2-1]='O';
				tic[temp1-1]='X';
				ar[p1-1]=1;
				ar[p2-1]=1;
			}		
}


main()
{
	int ch;
	do
	{
	show();
	while(!score)
	{
	input();
	show();
	logic();
	}
	cout<<"ENTER 0 TO EXIT AND 1 TO REPLY-";
	cin>>ch;
	}while(ch);
	cout<<endl;
	cout<<"****THANK YOU****";
}
