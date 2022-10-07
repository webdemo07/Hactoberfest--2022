### Shubh Sarthak Sahu
-Photo: https://imgur.com/z6b0cMl
-Location:India
-Github: https://github.com/thelifeofshubh


#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct bat
{
char name[20],modeout[70], indica;
int runs, score, totruns, totove, xtras;
};

struct bowl
{
char name[20];
int ttvrs,rnsgvn,wktstkn;
};
void main()
{
clrscr();
int plno;
int plytyp;
bat pl1[3];
bowl pl2[3];



cout<<"Enter the batsmen details:"<<endl;
for (int i=0;i<3;i++)
{
cout<<"Enter name of player "<<i+1<<endl;
gets (pl1[i].name);
cout<<"enter the runs scored by player "<<i+1<<endl;
cin>>pl1[i].runs;
cout<<"Enter the overs played by the player"<<i+1<<endl;
cin>>pl1[i].totove;
cout<<"Enter the status of the player if out (N)or not(Y)"<<endl;
cin>>pl1[i].indica;
}



cout<<"Enter the bowlers details "<<endl;
for (i=0;i<3;i++)
{
cout<<"Enter the name of the bowler "<<i+1<<endl;
gets(pl2[i].name);
cout<<"Enter the runs given by the bowler "<<i+1<<endl;
cin>>pl2[i].rnsgvn;
cout<<"Enter the wickets taken by the bowler "<<i+1<<endl;
cin>>pl2[i].wktstkn;
cout<<"Enter the total overs played by the  bowler "<<i+1<<endl;
cin>>pl2[i].ttvrs;
}


cout<<"Thank you all details recd"<<endl;
xyz:
cout<<"Select between batsmen(1) or bowlers(2) to see their details"<<endl;
abc:
cin>>plytyp;


switch (plytyp)
{


case 1:
cout<<"Enter the batsman number to see his details "<<endl<<endl<<endl;
cin>>plno;
plno--;
cout<<"Batsman number :"<<plno+1<<endl;
cout<<"Batsman name :";
puts(pl1[plno].name);
cout<<"Runs scored by the batsman :"<<pl1[plno].runs<<endl;
cout<<"Total overs played by the batsman :"<<pl1[plno].totove<<endl;
cout<<"Player status out "<<pl1[plno].indica<<endl;
break;



case 2:
cout<<"Enter the bowlers number to see his details "<<endl<<endl<<endl;
cin>>plno;
plno--;
cout<<"Bowlers name :";
puts(pl2[plno].name);
cout<<"Runs given by the player is :"<<pl2[plno].rnsgvn<<endl;
cout<<"Total overs played by the player :"<<pl2[plno].ttvrs<<endl;
cout<<"Total wickets taken by the user :"<<pl2[plno].wktstkn<<endl;
break;


default:
cout<<"Idiot enter a decent value"<<endl;
goto abc;
}

cout<<endl<<endl<<endl<<"Do you wish to continue? Y-1 N-2"<<endl;
cin>>plno;
if (plno==1)
goto xyz;
else
cout<<"Thank you Press any key to exit";
getch();
}

output:
  Enter the batsmen details:
Enter name of player 1
SACHIN
enter the runs scored by player 1
34
Enter the overs played by the player1
6
Enter the status of the player if out (N)or not(Y)
N
Enter name of player 2
GAMBHIR
enter the runs scored by player 2
12
Enter the overs played by the player2
5
Enter the status of the player if out (N)or not(Y)
Y
Enter name of player 3
SEHWAG
enter the runs scored by player 3
56
Enter the overs played by the player3
11
Enter the status of the player if out (N)or not(Y)
N
Enter the bowlers details
Enter the name of the bowler 1
31
Enter the wickets taken by the bowler 1
1
Enter the total overs played by the  bowler 1
5
Enter the name of the bowler 2
JOHNSON
Enter the runs given by the bowler 2
25
Enter the wickets taken by the bowler 2
0
Enter the total overs played by the  bowler 2
4
Enter the name of the bowler 3
MCGRATH
Enter the runs given by the bowler 3
40
Enter the wickets taken by the bowler 3
0
Enter the total overs played by the  bowler 3
7
Thank you all details recd
Select between batsmen(1) or bowlers(2) to see their details
2
Enter the bowlers number to see his details


2
Bowlers name :JOHNSON
Runs given by the player is :25
Total overs played by the player :4
Total wickets taken by the user :0



Do you wish to continue? Y-1 N-2
Y
Select between batsmen(1) or bowlers(2) to see their details
Enter the bowlers number to see his details


Bowlers name :LEE
Runs given by the player is :31
Total overs played by the player :5
Total wickets taken by the user :1

                                                                               
Do you wish to continue? Y-1 N-2        


Read more: http://dijibook.blogspot.com/2013/02/c-programme-to-record-score-of-cricket.html#ixzz7h0aXq42h
Follow us: @jaimin1012 on Twitter | jaiminkumar.prajapati on Facebook
