#include<iostream>
#include<conio.h>
#include<process.h>
#include<string>
#include<stdlib.h>               //for color
using namespace std;
class codiyapa
{
	public:
		char option;
		char y,c,l;
		int ch,life;
		string name;
		int Age,q;
		string place;
	void show();
	void enter();
	void input();
	void intro();
	void instraction();
	void game();
	void lifeline(int Q_no);
};
char expert_ans[] = {'D','C','A','D'};
int life_line[]={1,1,1};

void codiyapa::lifeline(int Q_no)
{
	cout<<"[1]  AADHA-AADHA "<<endl;
	cout<<"[2]  JANTA KI AWAAJ"<<endl;
	cout<<"[3]  CHACHA VIDHAYAK HAI HAMARE"<<endl<<endl;	
	cout<<"Select which lifeline you want to apply"<<endl;
	cin>>life;
	if(life<=3 && life!=0 )
	{
		if(life_line[0]==0 && life_line[1]==0 && life_line[2]==0)
		{
			cout<<"You Don't have any Life Line !!!";
			return;
		}
		if(!life_line[life-1])
		{
			cout<<"You already used this lifeline !!!"<<endl;
			cout<<"Choose other Lifeline !!!"<<endl;
			lifeline(Q_no);
			return;
		}
		switch(life)
		{
			
			case 1:
				life_line[life-1]=0;
				if(Q_no==1)
				{
				cout<<"Q1 Which of the following is/are example of storage devices"<<endl;
				cout<<"Remaining options are"<<endl;
				cout<<"A  Tapes"<<"\t\t\t"<<"B    "<<endl;
	            cout<<"C       "<<"\t\t\t"<<"D  All of the above"<<endl<<endl;
	            cout<<"######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
	        	}
	        	if(Q_no==2)
	        	{
	        		cout<<"Q2 Solid carbon dioxide is also called as"<<endl;
					cout<<"Remaining options are"<<endl;
					cout<<"A            "<<"\t\t\t\t"<<"B              "<<endl;
		            cout<<"C  Dry ice"<<"\t\t\t\t"<<"D  Solid dioxide"<<endl<<endl;
		            cout<<"######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
				}
				if(Q_no==3)
				{
					cout<<"Q3 Which of the following is not an example of operating system-"<<endl;
					cout<<"Remaining options are"<<endl;
					cout<<"A  Microsoft office"<<"\t\t\t"<<"B               "<<endl;
		            cout<<"C      "<<"\t\t\t\t"<<"D  Ubuntu Linux"<<endl<<endl;
		            cout<<"######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
				}
				if(Q_no==4)
				{
					cout<<"Q4 Earthquakes rarely occours in"<<endl;
					cout<<"Remaining options are"<<endl;
				    cout<<"A        "<<"\t\t\t\t"<<"B  Mexico"<<endl;
               		cout<<"C             "<<"\t\t\t"<<"D  Brazil"<<endl<<endl;
			        cout<<"######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
				}
				cin>>l;
				if(l=='L' || l=='l')
				{
					lifeline(Q_no);			
				}
				break;
			case 2:
				life_line[life-1]=0;
				if(Q_no==1)
				{
					cout<<endl<<endl<<"According to JANTA KI AWAAJ the BAR GRAPH is given as--"<<endl<<endl;
				    cout<<"Option A  ||||||||                           20%"<<endl;
				    cout<<"Option B  ||||                               10%"<<endl;
				    cout<<"Option C  ||||                               10%"<<endl;
				    cout<<"Option D  ||||||||||||||||||||||||           60%"<<endl;
			    	cout<<"######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
				}
				if(Q_no==2)
				{
  				    cout<<endl<<endl<<"According to JANTA KI AWAAJ the BAR GRAPH is given as--"<<endl<<endl;
				    cout<<"Option A  ||||                               10%"<<endl;
				    cout<<"Option B                                      0%"<<endl;
				    cout<<"Option C  ||||||||||||||||||||||||||||       70%"<<endl;
				    cout<<"Option D  ||||||||                           20%"<<endl;
				    cout<<"######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
				}
				if(Q_no==3)
				{
					cout<<endl<<endl<<"According to JANTA KI AWAAJ the BAR GRAPH is given as--"<<endl<<endl;
				    cout<<"Option A  ||||||||||||||||||||||||||||       70%"<<endl;
				    cout<<"Option B  ||||                               10%"<<endl;
				    cout<<"Option C                                      0%"<<endl;
				    cout<<"Option D  ||||||||                           20%"<<endl;
				    cout<<"######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
				}
				if(Q_no==4)
				{
					cout<<endl<<endl<<"According to JANTA KI AWAAJ the BAR GRAPH is given as--"<<endl<<endl;
				    cout<<"Option A  ||||||||                           20%"<<endl;
				    cout<<"Option B  ||||                               10%"<<endl;
				    cout<<"Option C  |||||||||||||||||||                50%"<<endl;
				    cout<<"Option D  ||||||||                           20%"<<endl;
				    cout<<"######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
				}
				cin>>l;
				if(l=='L' || l=='l')
				{
					lifeline(Q_no);			
				}
   		        break;
		    case 3:
		    	life_line[life-1]=0;
			    cout<<endl<<endl<<"^^^^^^^  According to CHACHA VIDHAYAK HAI HAMARE the answer is definitely OPTION "<<expert_ans[Q_no-1]<<"  ^^^^^^^^"<<endl<<endl;
				cout<<"######  IF YOU {* AGAIN *} WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		        cin>>l;
				if(l=='L' || l=='l')
				{
					lifeline(Q_no);			
				}
				break;    
		}
	}
	else
	{
		cout<<endl<<"---  You are selecting wrong option so,please select correct option  ---"<<endl;
		
	}
}
void codiyapa::show()
{
	cout<<"***********************"<<endl;
	cout<<"*                                                                   *"<<endl;
	cout<<"*            * WELCOME TO THE CODIYAPA GAME *                       *"<<endl;
	cout<<"*                 -------------------------------                   *"<<endl;
	cout<<"*                            By                                     *"<<endl;
	cout<<"*                                                                   *"<<endl;
	cout<<"*            Arun Kumar,Pankaj,Pankaj Kumar Saini                   *"<<endl;
	cout<<"*                                                                   *"<<endl;
	cout<<"***********************"<<endl;
}

void codiyapa::enter()
{	
    cout<<"press 1 to enter your details"<<endl;
    cin>>ch;
    system("cls");
}
void codiyapa::input()
{
    switch(ch)
    {
        case 1:
    	cout<<endl<<"Enter Your Name-"<<endl;
    	cin>>name;
    	cout<<"Enter Your Age-"<<endl;
    	cin>>Age;
    	cout<<"Place(you belong)-"<<endl;
    	cin>>place;
    	getch();
    	break;
	    default: 
	    cout<<endl<<"you enter wrong digit and you are not able to continue"<<endl<<endl<<"*  For play this game please run once again and select correct option this time Thankuu  * "<<endl;
	    exit(0);
    }
}
void codiyapa::intro()
{
	system("cls");
	cout<<"                      ***  WELCOME TO CODIYAPA GAME  ***"<<endl;
	cout<<endl<<endl<<"Today we have a NEW PLAYER,here with us whose name is "<<name<<". He belongs to the place called "<<place<<".";
	cout<<endl<<endl<<"Lets start the game CODIYAPA"<<endl<<endl;
	getch();
}
void codiyapa::instraction()
{
	system("cls");
	cout<<"-----  RULES/INSTRACTIONS  -----"<<endl<<endl;
	cout<<"*  There are total 5 Multiple choice questions."<<endl;
	cout<<"*  The 1st question is worth Rs.1,000"<<endl;
	cout<<"*  Q 5 is the JACKPOT question worth Rs 25,00,000"<<endl<<endl;
	getch();
}
void codiyapa::game()
{
	int Q_no=0;
	system("cls");
	cout<<endl<<"Lets Start To Play codiyapa"<<endl<<"Best Of LUCK For Your Game"<<endl;
	cout<<endl<<"Q1 for Rs. 1,000 press y to show question"<<endl;
	cin>>y;
	if(y=='y'|| y=='Y')
	{
		Q_no++;
		system("cls");
		cout<<"Q1 Which of the following is/are example of storage devices"<<endl;
		cout<<"Options are"<<endl;
		cout<<"A  Tapes"<<"\t\t\t\t"<<"B  DVDs"<<endl;
		cout<<"C  Magnetic disks"<<"\t\t\t"<<"D  All of the above"<<endl<<endl;
		cout<<"######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
		cin>>l;
		if(l=='L' || l=='l')
		{	
			lifeline(Q_no);
		}
		cout<<endl<<"select your option"<<endl;
		cin>>option;
		if(option=='D' || option=='d')
		{
			system("cls");
			cout<<endl<<"*  congratulation you won Rs.1,000  **"<<endl;
			x:
			cout<<"press c to continue the game or press e to quit game"<<endl;
			cin>>c;
			if(c=='c' || c=='C')
			{
				system("cls");
				cout<<endl<<"Q2 for Rs. 10,000 press y to show question on your computer screen "<<endl;
				cin>>y;
				if(y=='y' || y=='Y')
				{
					Q_no++;
					system("cls");
					cout<<"Q2 Solid carbon dioxide is also called as"<<endl;
					cout<<"options are"<<endl;
					cout<<"A  Sol carbon"<<"\t\t\t\t"<<"B  White carbon"<<endl;
					cout<<"C  Dry ice"<<"\t\t\t\t"<<"D  Solid dioxide"<<endl<<endl;
					cout<<"######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
					cin>>l;
					if(l=='L' || l=='l')
					{
						lifeline(Q_no);
					}
					cout<<endl<<"select your option"<<endl;
					cin>>option;
					if(option=='C'|| option=='c' )
					{
						system("cls");
						cout<<endl<<"*  congratulation you won Rs.10,000  **"<<endl;
						s:
						cout<<"press c to continue the game or press e to quit game"<<endl;
						cin>>c;
						if(c=='c' || c=='C' )
						{
							system("cls");
							cout<<endl<<"Q3 for *Rs. 1,00,000 ( 1st stage of game *)  press y to show question on your computer screen "<<endl;
							cin>>y;
							if(y=='y' || y=='Y' )
							{
								Q_no++;
								system("cls");
								cout<<"Q3 Which of the following is not an example of operating system-"<<endl;
								cout<<"options are"<<endl;
								cout<<"A  Microsoft office"<<"\t\t\t"<<"B  Windows vista"<<endl;
								cout<<"C  Unix"<<"\t\t\t\t"<<"D  Ubuntu Linux"<<endl<<endl;
								cout<<"######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
								cin>>l;
								if(l=='L' || l=='l')
								{
								lifeline(Q_no);			
								}
								cout<<endl<<"select your option"<<endl;
								cin>>option;
								if(option=='A' || option=='a')
								{
									system("cls");
									cout<<endl<<"*  congratulation you won Rs.1,00,000  **"<<endl;
									v:
									cout<<"press c to continue the game or press e to quit game"<<endl;
									cin>>c;
									if(c=='c' || c=='C')
									{
										system("cls");
										cout<<endl<<"Q4 for Rs. 10,00,000  press y to show question on your computer screen "<<endl;
										cin>>y;
										if(y=='y' || y=='Y')
										{
											Q_no++;
											system("cls");
											cout<<"Q4 Earthquakes rarely occours in"<<endl;
											cout<<"options are"<<endl;
											cout<<"A  Alaska"<<"\t\t\t\t"<<"B  Mexico"<<endl;
											cout<<"C  New zealand"<<"\t\t\t"<<"D  Brazil"<<endl<<endl;
											cout<<"######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
											cin>>l;
											if(l=='L' || l=='l')
											{
												lifeline(Q_no);			
											}
											cout<<endl<<"select your option"<<endl;
											cin>>option;
											if(option=='C' || option=='c')
											{
												system("cls");
												cout<<endl<<"*  congratulation you won Rs.10,00,000  **"<<endl;
												v1:
												cout<<"press c to continue the game or press e to quit game"<<endl;
												cin>>c;
												if(c=='c' || c=='C')
												{
													system("cls");
													cout<<endl<<"Q5 for Rs. 25,00,000  press y to show question on your computer screen "<<endl;
													
													cin>>y;
													if(y=='y' || y=='Y')
													{
														Q_no++;
														system("cls");
														cout<<"Q5.Which of the following computer language is used for artificial intelligence?"<<endl;
														cout<<"options are"<<endl;
														cout<<"A  FORTRAN"<<"\t\t\t\t"<<"B  PROLOG"<<endl;
														cout<<"C  C"<<"\t\t\t"<<"D  None of the above"<<endl<<endl;
														cout<<"######  IF YOU WANT TO USE LIFELINE THEN PRESS L TO SHOW LIFELINE OR PRESS ANY KEY TO GIVE YOUR ANSWER  ######"<<endl;
														cin>>l;
														if(l=='L' || l=='l'){
															lifeline(Q_no);			
														}
														cout<<endl<<"select your option"<<endl;
														cin>>option;
														if(option=='B' || option=='b'){
															system("cls");
															cout<<endl<<"*  congratulation you won Rs.25,00,000  **"<<endl;
															cout<<endl<<"*  congratulation you won the Game...  **"<<endl;
															exit(1);
														}
														else{
															cout<<endl<<"oops! you are giving wrong answer"<<endl<<"-------->Correct answer is option B"<<endl<<endl;
															getch();
															cout<<"----  Sorry you are not able to continue this game ----  "<<endl<<endl;
															cout<<"$$$$$  Rs.0,000   $$$$$"<<endl<<"*  BETTER LUCK NEXT TIME  *"<<endl;
														}
													}
													else{
														cout<<"Are You sure you want to quit your game"<<endl;
														cout<<"[1] Yes"<<endl<<"[2] No,I want to continue"<<endl<<endl;
														cin>>q;
														if(q==1){
															system("cls");
															cout<<endl<<"You won Rs.10,00,000"<<endl;
															cout<<"**Thanks for Playing the game*";
														}
														else
														goto x;
													}
												}
												else{
													cout<<endl<<"oops! you are giving wrong answer"<<endl<<"-------->Correct answer is option D"<<endl<<endl;
													getch();
													cout<<"----  Sorry you are not able to continue this game ----  "<<endl<<endl;
													cout<<"$$$$$  Rs.1,00,000  $$$$$"<<endl<<"*  BETTER LUCK NEXT TIME  *"<<endl;
												}
											}	
										}
										else{
											cout<<"Are You sure you want to quit your game"<<endl;
											cout<<"[1] Yes"<<endl<<"[2] No,I want to continue"<<endl<<endl;
											cin>>q;
											if(q==1){
												system("cls");
												cout<<endl<<"You won Rs.1,00,000"<<endl;
												cout<<"**Thanks for Playing the game*";
											}
											else
											goto x;
										}
									}
									else{
										cout<<endl<<"oops! you are giving wrong answer"<<endl<<"-------->Correct answer is option A"<<endl<<endl;
										getch();
										cout<<"----  Sorry you are not able to continue this game ----  "<<endl<<endl;
										cout<<"$$$$$  Rs.0,000  $$$$$"<<endl<<"*  BETTER LUCK NEXT TIME  *"<<endl;
									}
								}
							
							}
							else{
								cout<<"Are You sure you want to quit your game"<<endl;
								cout<<"[1] Yes"<<endl<<"[2] No,I want to continue"<<endl<<endl;
								cin>>q;
								if(q==1){
									system("cls");
									cout<<endl<<"You won Rs.10,000"<<endl;
									cout<<"**Thanks for Playing the game*";
								}
								else
								goto x;
							}
						}
						else{
							cout<<endl<<"oops! you are giving wrong answer"<<endl<<"-------->Correct answer is option C"<<endl<<endl;
							getch();
							cout<<"----  Sorry you are not able to continue this game ----  "<<endl<<endl;
							cout<<"$$$$$  Rs.0,000  $$$$$"<<endl<<"*  BETTER LUCK NEXT TIME  *"<<endl;
						}
					}
				
				}
				else{
					cout<<"Are You sure you want to quit your game"<<endl;
					cout<<"[1] Yes"<<endl<<"[2] No,I want to continue"<<endl<<endl;
					cin>>q;
					if(q==1)
					{
					system("cls");
					cout<<endl<<"You won Rs.1,000"<<endl;
					cout<<"**Thanks for Playing the game*";
					}
					else
					goto v1;
				}
			}
			else{
				cout<<endl<<"oops! you are giving wrong answer"<<endl<<"-------->Correct answer is option D"<<endl<<endl;
				getch();
				cout<<"----  Sorry you are not able to continue this game ----  "<<endl<<endl;
				cout<<"$$$$$  Rs.0  $$$$$"<<endl<<"*  BETTER LUCK NEXT TIME  *"<<endl;
			}
		}
		else{
			cout<<endl<<"oops! you select the wrong option"<<endl<<endl;
			cout<<"----  Sorry you are not able to continue this game  ----  "<<endl;
		}
	}
}
main()
{
	system ("color BC");
	codiyapa o;
	o.show();
	o.enter();
	o.input();
	o.intro();
	o.instraction();
	o.game();
}

