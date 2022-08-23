/////////////////////////////////////////////////////////////////////////////
		   //CS PROJECT - LIBRARY MANAGEMENT SYSTEM/
/////////////////////////////////////////////////////////////////////////////

//all header files here//

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
#include<fstream.h>

char a[20],b[56],ch1,op;
int login,log=0,g=0,yw=0,yb=1,ya=1,choice,delay_days,penalty,chi,c___;
int DD1,MM1,YY1,DD2,MM2,YY2,DD3,MM3,YY3,a_,b_,c_,a__,b__,c__;

class library_
{
public:
void intro();
};
void library_::intro()
{
start:
textbackground(BLACK);
clrscr();
gotoxy(1,3);
  for(int ns=23;ns>0;ns--)
  {
  textbackground(WHITE);
  gotoxy(1,ns);
  cprintf("                                                                                ");
  delay(20);
  }
gotoxy(1,1);
  for(int jk=0;jk<40;jk++)
  {
  textbackground(BLACK);cprintf("  ");
  textbackground(YELLOW);cprintf("  ");
  }
gotoxy(1,24);
  for(int jk1=0;jk1<39;jk1++)
  {
  textbackground(YELLOW);cprintf("  ");
  textbackground(BLACK);cprintf("  ");
  }
textbackground(YELLOW);
cprintf("  ");
gotoxy(80,10);
  for(int gr1_=80;gr1_>3;gr1_--)
  {
  textbackground(CYAN);
  gotoxy(gr1_,9);cprintf(" ");
  gotoxy(gr1_,10);cprintf(" ");
  gotoxy(gr1_,11);cprintf(" ");
  gotoxy(gr1_,12);cprintf(" ");
  gotoxy(gr1_,13);cprintf(" ");
  gotoxy(gr1_,14);cprintf(" ");
  gotoxy(gr1_,15);cprintf(" ");
  gotoxy(gr1_,16);cprintf(" ");
  gotoxy(gr1_,17);cprintf(" ");
  delay(10);
  }
gotoxy(41,5);
textbackground(BLUE);textcolor(WHITE);
cprintf("  When in doubt, go to the library . \n");
gotoxy(41,6);
cprintf("                     - J.K. ROWLING  ");
  for(int gr1__=80;gr1__>2;gr1__--)
  {
  textbackground(BLACK);
  gotoxy(gr1__,10);cprintf(" ");
  gotoxy(gr1__,11);cprintf(" ");
  gotoxy(gr1__,12);cprintf(" ");
  gotoxy(gr1__,13);cprintf(" ");
  gotoxy(gr1__,14);cprintf(" ");
  gotoxy(gr1__,15);cprintf(" ");
  gotoxy(gr1__,16);cprintf(" ");
  delay(10);
  }
gotoxy(5,10);
textbackground(BLACK);
cprintf(" ");
  for(int j=0;j<37;j++)
  {
  delay(15);
  textbackground(BLACK);
  textcolor(YELLOW);
  cprintf("- ");
  }
cout<<endl;
gotoxy(5,11);cprintf("  -         ");textcolor(LIGHTRED);cprintf(" !     !!      !! ");textcolor(LIGHTRED);cprintf("     !   ");textcolor(LIGHTRED+BLINK);cprintf("");textcolor(LIGHTRED);cprintf("  !!   !!    !   !!   !  !     ");textcolor(YELLOW);cprintf(" -");cout<<endl;
gotoxy(5,12);cprintf("   -        ");textcolor(CYAN);cprintf("! !    ! !    !   ");textcolor(CYAN);cprintf("     !      ! !  ! !  ! !  ! !   ! !    ");textcolor(YELLOW);cprintf(" -");cout<<endl;
gotoxy(5,13);cprintf("    -       ");textcolor(LIGHTRED);cprintf("!!!    !!      !  ");textcolor(LIGHTRED);cprintf("     ! ! !  !!   !!   !!!  !!     !    ");textcolor(YELLOW);cprintf(" -");cout<<endl;
gotoxy(5,14);cprintf("     -      ");textcolor(YELLOW);cprintf("! !.   !  .     !.");textcolor(YELLOW);cprintf("     !!  !  ! !  ! !  ! !  ! !  !     ");textcolor(YELLOW);cprintf(" -");cout<<endl;
gotoxy(5,15);cprintf("      -     ");textcolor(LIGHTRED);cprintf("              !!  ");textcolor(LIGHTRED);cprintf("            !!                       ");textcolor(YELLOW);cprintf(" -");cout<<endl;
gotoxy(12,16);
  for(int k=0;k<31;k++)
  {
  delay(10);
  cprintf("- ");
  }
//book design at start
gotoxy(9,5);cprintf("  ");gotoxy(9,6);cprintf("  ");
gotoxy(9,7);cprintf("  ");gotoxy(9,8);cprintf("  ");
gotoxy(9,4);
  for(int kd=0;kd<14;kd++)
  {
  textbackground(BLACK);
  delay(10);
  cprintf(" ");
  }
gotoxy(21,5);cprintf("  ");
gotoxy(21,6);cprintf("  ");
delay(20);cprintf("          ");
gotoxy(21,7);cprintf("  ");
gotoxy(21,8);cprintf("  ");
gotoxy(31,7);cprintf("  ");
gotoxy(31,8);cprintf("  ");
gotoxy(74,22);
  for(int kd1=74;kd1>62;kd1--)
  {
  gotoxy(kd1,22);
  textbackground(BLACK);
  delay(10);
  cprintf(" ");
  }
//book dot design
textcolor(BLACK);textbackground(WHITE);
gotoxy(71,19);cprintf("*");gotoxy(71,20);cprintf("*");
gotoxy(71,21);cprintf("*");gotoxy(71,18);cprintf("*");
gotoxy(61,19);cprintf("*");gotoxy(61,18);cprintf("*");
gotoxy(12,5);cprintf("*");gotoxy(12,6);cprintf("*");
gotoxy(12,7);cprintf("*");gotoxy(12,8);cprintf("*");
gotoxy(24,7);cprintf("*");gotoxy(24,8);cprintf("*");
textbackground(BLACK);
gotoxy(73,18);cprintf("  ");gotoxy(73,19);cprintf("  ");
gotoxy(73,20);cprintf("  ");gotoxy(73,21);cprintf("  ");
gotoxy(63,20);cprintf("  ");gotoxy(63,19);cprintf("  ");
gotoxy(63,18);cprintf("  ");gotoxy(63,21);cprintf("  ");
gotoxy(53,20);cprintf("            ");
gotoxy(53,19);cprintf("  ");
gotoxy(53,18);cprintf("  ");
//for continue option at start page
textbackground(BLACK);
textcolor(YELLOW+BLINK);
gotoxy(3,22);cprintf(" < Press any key > ");
getch();
//hiding continue option at start page
textbackground(WHITE);
gotoxy(3,22);cprintf("                   ");

  for(int gr1___=80;gr1___>2;gr1___--)
  {
  textbackground(BLACK);
  gotoxy(gr1___,10);cprintf(" ");
  gotoxy(gr1___,11);cprintf(" ");
  gotoxy(gr1___,12);cprintf(" ");
  gotoxy(gr1___,13);cprintf(" ");
  gotoxy(gr1___,14);cprintf(" ");
  gotoxy(gr1___,15);cprintf(" ");
  gotoxy(gr1___,16);cprintf(" ");
  delay(8);
  }
//hide book design
textbackground(WHITE);
gotoxy(9,5);cprintf("  ");cout<<endl;
gotoxy(9,6);cprintf("  ");cout<<endl;
gotoxy(9,7);cprintf("  ");cout<<endl;
gotoxy(9,8);cprintf("  ");cout<<endl;
gotoxy(9,4);
//hide book dots  at start
textbackground(WHITE);
gotoxy(71,19);cprintf(" ");gotoxy(71,20);cprintf(" ");
gotoxy(71,21);cprintf(" ");gotoxy(71,18);cprintf(" ");
gotoxy(61,19);cprintf(" ");gotoxy(61,18);cprintf(" ");
gotoxy(12,5);cprintf(" ");gotoxy(12,6);cprintf(" ");
gotoxy(12,7);cprintf(" ");gotoxy(12,8);cprintf(" ");
gotoxy(1,4);
//hide book design
  for(int kdh=0;kdh<22;kdh++)
  {
  textbackground(WHITE);
  delay(10);
  cprintf(" ");
  }
cout<<endl;
gotoxy(21,5);cprintf("  ");
cout<<endl;
gotoxy(21,6);cprintf("  ");
cprintf("          ");
cout<<endl;
gotoxy(21,7);cprintf("  ");
gotoxy(21,8);cprintf("  ");
gotoxy(31,7);cprintf("  ");
cout<<endl;
gotoxy(31,8);cprintf("  ");
gotoxy(80,22);
  for(int kd1k=80;kd1k>62;kd1k--)
  {
  gotoxy(kd1k,22);
  textbackground(WHITE);
  delay(10);
  cprintf(" ");
  }
gotoxy(73,18);cprintf("  ");
gotoxy(73,19);cprintf("  ");
gotoxy(73,20);cprintf("  ");
gotoxy(73,21);cprintf("  ");
gotoxy(63,20);cprintf("  ");
gotoxy(63,19);cprintf("  ");
gotoxy(63,18);cprintf("  ");
gotoxy(63,21);cprintf("  ");
gotoxy(53,20);cprintf("            ");
gotoxy(53,19);cprintf("  ");
gotoxy(53,18);cprintf("  ");
//aps logo
textbackground(RED);
gotoxy(26,5);cprintf("    ");
gotoxy(23,6);cprintf("          ");
gotoxy(20,7);cprintf("                ");
gotoxy(17,8);cprintf("                      ");
gotoxy(13,9);cprintf("                              ");
gotoxy(17,10);cprintf("   ");gotoxy(36,10);cprintf("   ");
textbackground(WHITE);
gotoxy(17,11);cprintf("   ");gotoxy(23,11);cprintf(" ");
gotoxy(32,11);cprintf(" ");gotoxy(36,11);cprintf("   ");
gotoxy(17,12);cprintf("   ");gotoxy(23,12);cprintf(" ");
gotoxy(25,12);cprintf(" ");gotoxy(30,12);cprintf(" ");
gotoxy(32,12);cprintf(" ");gotoxy(36,12);cprintf("   ");
gotoxy(17,13);cprintf("   ");gotoxy(23,13);cprintf(" ");
gotoxy(25,13);cprintf(" ");gotoxy(27,13);cprintf("  ");
gotoxy(30,13);cprintf(" ");gotoxy(32,13);cprintf(" ");
gotoxy(36,13);cprintf("   ");gotoxy(17,14);cprintf("   ");
gotoxy(23,14);cprintf(" ");gotoxy(25,14);cprintf(" ");
gotoxy(27,14);cprintf("  ");gotoxy(30,14);cprintf(" ");
gotoxy(32,14);cprintf(" ");gotoxy(36,14);cprintf("   ");
textbackground(RED);
gotoxy(17,15);cprintf("   ");gotoxy(36,15);cprintf("   ");
gotoxy(13,16);cprintf("                              ");
gotoxy(10,17);cprintf("                                    ");
  for(int gr1____=80;gr1____>58;gr1____--)
  {
  textbackground(YELLOW);
  gotoxy(gr1____,10);cprintf(" ");
  gotoxy(gr1____,11);cprintf(" ");
  gotoxy(gr1____,12);cprintf(" ");
  gotoxy(gr1____,13);cprintf(" ");
  gotoxy(gr1____,14);cprintf(" ");
  gotoxy(gr1____,15);cprintf(" ");
  gotoxy(gr1____,16);cprintf(" ");
  delay(10);
  }
  for(int gr1_____=80;gr1_____>60;gr1_____--)
  {
  textbackground(BLACK);
  gotoxy(gr1_____,11);cprintf(" ");
  gotoxy(gr1_____,12);cprintf(" ");
  gotoxy(gr1_____,13);cprintf(" ");
  gotoxy(gr1_____,14);cprintf(" ");
  gotoxy(gr1_____,15);cprintf(" ");
  delay(10);
  }
textcolor(WHITE+BLINK);
gotoxy(65,11);cprintf("  LOGIN AS: ");
textcolor(WHITE);gotoxy(65,12);cprintf(" **********");
textcolor(BLUE);
textbackground(WHITE);
gotoxy(65,13);cprintf(" 1.");cout<<" ";cprintf(" Admin   ");
gotoxy(65,14);cprintf(" 2.");cout<<" ";cprintf(" Student ");
gotoxy(65,15);cprintf(" 3.");cout<<" ";cprintf(" Teacher ");
textcolor(WHITE);
textbackground(BLACK);
gotoxy(62,22);cprintf(" <4.> Quick Exit ");
ZXC:
textbackground(BLACK);textcolor(YELLOW);
gotoxy(5,22);cprintf(" Your Choice ");
textbackground(BLUE);textcolor(WHITE);cprintf("   ");
gotoxy(19,22);cin>>login;
textbackground(WHITE);
gotoxy(62,22);cprintf("                 ");
 if(login==1||login==2||login==3)
 {
 goto point1;
 }
 if(login==4)
 {
 exit(0);
 }
 else
 {
 textbackground(RED);
 textcolor(YELLOW+BLINK);
 gotoxy(31,22);cprintf(" INVALID INPUT,TRY AGAIN. ");
 delay(1500);textbackground(WHITE);
 gotoxy(31,22);cprintf("                           ");
 goto ZXC;
 }
point1:
  for(int gr1______=50;gr1______>32;gr1______--)
  {
  textbackground(BLACK);
  gotoxy(gr1______,22);cprintf(" ");
  delay(10);
  }
textcolor(WHITE+BLINK);
gotoxy(38,20);cprintf(" LOADING ");
gotoxy(33,22);
  for(int lg=0;lg<18;lg++)
  {
  textbackground(GREEN);
  cprintf(" ");
  delay(40);
  }
  for(int slideup1=0;slideup1<50;slideup1++)
  {
  delay(10);
  cout<<endl;
  textbackground(BLACK);textcolor(WHITE);
  cprintf(" ");
  }
  }

class MODES
{
public:
void details();
};
void MODES::details()
{
start:
tag1:
textbackground(BLACK);
clrscr();

/////////////////////////////////////////////////////////////////////////////
			       //SIGN IN SCREEN//
/////////////////////////////////////////////////////////////////////////////

cout<<"                          ";
  for( int l=0;l<29;l++)
  {
  delay(15);
  textbackground(BLUE);cprintf(" ");
  }
textbackground(BLACK);cout<<endl;
textbackground(BLUE);cprintf("                          ");
textcolor(WHITE);cprintf("       A.P.S.   LIBRARY");
cprintf("                               ");
textbackground(BLACK);cout<<"   ";
textbackground(BLUE);cprintf("   ");
textbackground(BLACK);cout<<"                    ";
textbackground(BLUE);textcolor(WHITE);cprintf("  *************************  ");
textbackground(BLACK);
 if(login==1)
 {
 cprintf("       ADMIN       ");}
 if(login==2)
 {
 cprintf("       STUDENT       ");}
 else if(login==3)
 {
 cprintf("       TEACHER       ");}
//border design (right)
int fg=3,nb=4;
  for(int dot=0;dot<10;dot++)
  {
  textbackground(BLUE);
  gotoxy(75,fg);cprintf("   ");cout<<endl;
  gotoxy(78,nb);cprintf("   ");cout<<endl;
  fg=fg+2;
  nb=nb+2;
  }
//border design (left)
int ug=3,bb=4;
  for(int dot1=0;dot1<10;dot1++)
  {
  textbackground(BLUE);
  gotoxy(4,ug);cprintf("   ");cout<<endl;
  gotoxy(1,bb);cprintf("   ");cout<<endl;
  ug=ug+2;
  bb=bb+2;
  }
textbackground(BLUE);
cout<<"   ";cprintf("   ");
gotoxy(75,23);
cprintf("   ");cout<<"   ";
  for(int cv=0;cv<8;cv++)
  {
  cprintf("          "); }
//loading box
gotoxy(32,23);cprintf("                   ");
gotoxy(32,25);cprintf("                   ");
textbackground(WHITE);
gotoxy(34,24);cprintf("               ");
  for(int vc=20;vc>8;vc--)
  {
  textbackground(YELLOW);
  gotoxy(20,vc);
  cprintf("                                           ");
  delay(20);
  }
textbackground(WHITE);
gotoxy(23,10);cprintf("                                     ");
gotoxy(23,19);cprintf("                                     ");
  for(int ty=10;ty<20;ty++)
  {
  gotoxy(22,ty);cprintf("  ");gotoxy(59,ty);cprintf("  ");
  delay(10);
  }
textcolor(BLACK+BLINK);
gotoxy(34,12);cprintf(" ENTER DETAILS ");
textbackground(BLACK);textcolor(WHITE);
gotoxy(30,15);cprintf("  Username  ");
textbackground(WHITE);textcolor(BLUE);
cprintf("            ");
textbackground(BLACK);textcolor(WHITE);
gotoxy(30,17);cprintf("  Password  ");
textbackground(WHITE);textcolor(BLUE);
cprintf("            ");
gotoxy(36,24);textcolor(BLUE+BLINK);cprintf("   Log In");
delay(1000);
gotoxy(36,24);cprintf("             ");
gotoxy(44,15);gets(b);
 if(login==1)
 {
 if(strcmp("roshan",b)==0||strcmp("anshul",b)==0||strcmp("darshan",b)==0||strcmp("ROSHAN",b)==0||strcmp("ANSHUL",b)==0||strcmp("DARSHAN",b)==0||strcmp("Roshan",b)==0||strcmp("Anshul",b)==0||strcmp("Darshan",b)==0)
 {}
 else
 {
 gotoxy(27,19);
 textbackground(RED);textcolor(YELLOW+BLINK);
 cprintf(" Wrong username , try again. ");
 delay(1550);
 taz:
 gotoxy(27,19);
 textbackground(BLUE);textcolor(WHITE);
 cprintf(" Want to continue (y/n) ? ");textbackground(BLACK);cprintf("   ");
 gotoxy(54,19);
 cin>>op;
 if(op=='y'||op=='Y')
 {
 goto tag1;
 }
 else if(op=='n'||op=='N')
 {
 exit(0);
 }
 else
 {
 gotoxy(27,19);
 textbackground(RED);textcolor(YELLOW+BLINK);
 cprintf("  Wrong Input , try again .  ");
 delay(1550);
 goto taz;
 }
 }
gotoxy(44,17);gets(a);
 if(strcmp("****",a)==0)
 {
 textbackground(BLACK);textcolor(WHITE+BLINK);
 gotoxy(38,22);cprintf("LOADING");
 gotoxy(34,24);
  for(int vb=0;vb<15;vb++)
  {
  textbackground(GREEN);
  cprintf(" ");
  delay(30);
  }
 }
 else
 {
 gotoxy(27,19);
 textbackground(RED);textcolor(YELLOW+BLINK);
 cprintf(" Wrong password, try again. ");
 delay(1550);
 gotoxy(27,19);
 textbackground(BLUE);textcolor(WHITE+BLINK);
 cprintf(" Want to continue (y/n) ? ");textbackground(BLACK);cprintf("   ");
 gotoxy(54,19);
 cin>>op;
 if(op=='y'||op=='Y')
 {
 goto tag1;
 }
 else if(op=='n'||op=='N')
 {
 exit(0);
 }
 else
 {
 gotoxy(27,19);
 textbackground(RED);textcolor(YELLOW+BLINK);
 cprintf("  Wrong Input , try again .  ");
 delay(1550);
 goto taz;
 }
 }
/////////////////////////////////////////////////////////////////////////////
			   //SLIDE-UP ANIMATION//
/////////////////////////////////////////////////////////////////////////////

  for(int q=0;q<50;q++)
  {
  cout<<endl;
  delay(10);
  textbackground(BLACK);textcolor(WHITE);
  cprintf(" ");
  }
textbackground(BLACK);
start2:
clrscr();
}
 else if (login==2||login==3)
 {
 gotoxy(44,17);gets(a);
 if(strcmp("aps2",a)==0)
 {
 textbackground(BLACK);textcolor(WHITE+BLINK);
 gotoxy(38,22);cprintf("LOADING");
 gotoxy(34,24);
  for(int vb=0;vb<15;vb++)
  {
  textbackground(GREEN);
  cprintf(" ");
  delay(30);
  }}
 else
 {
 gotoxy(29,19);
 textbackground(RED);textcolor(YELLOW+BLINK);
 cprintf(" Wrong password,try again. ");
 delay(1550);
 resetback:
 gotoxy(28,19);
 textbackground(BLUE);textcolor(WHITE);
 cprintf(" Want to continue (y/n) ? ");textbackground(BLACK);cprintf("   ");
 gotoxy(55,19);
 cin>>op;
 if(op=='y'||op=='Y')
 {
 goto tag1;
 }
 else if(op=='n'||op=='N')
 {
 exit(0);
 }
 else
 {
 gotoxy(28,19);
 textbackground(RED);textcolor(YELLOW+BLINK);
 cprintf("  Wrong Input , try again .  ");
 delay(1550);
 goto resetback;
 }
 }
/////////////////////////////////////////////////////////////////////////////
			   //SLIDE-UP ANIMATION//
/////////////////////////////////////////////////////////////////////////////

  for(int q=0;q<50;q++)
  {
  cout<<endl;
  delay(10);
  textbackground(BLACK);textcolor(WHITE);
  cprintf(" ");
  }
textbackground(BLACK);
clrscr();
 }
 }
class library
   {
   int code;
   char name[20];
   public:
   void get()
   {
   cprintf(" Enter Book Code ");
   gotoxy(8,7);
   textbackground(GREEN);
   cprintf(" Enter Book Name ");
   gotoxy(26,4);cin>>code;
   gotoxy(26,7);gets(name);
   }
   void put(int lk,int vbn)
   {
   if(lk<22&&lk<10)
   {
   textbackground(WHITE);
   cprintf("  ");cout<<"  ";
   textbackground(CYAN);
   cprintf("  ");
   textbackground(BLACK);
   textcolor(RED);cout<<lk;cprintf(".");
   textcolor(YELLOW);
   cprintf(" Code: ");cout<<code<<" ";
   textcolor(CYAN);
   cprintf(" Name: ");cout<<name<<"\n";
   delay(100);
   }
   else if(lk<22&&lk>9)
   {
   textbackground(WHITE);
   cprintf("  ");cout<<"  ";
   textbackground(CYAN);
   cprintf("  ");
   textbackground(BLACK);
   textcolor(RED);cout<<lk;cprintf(".");
   textcolor(YELLOW);
   cprintf("Code: ");cout<<code<<" ";
   textcolor(CYAN);
   cprintf(" Name: ");cout<<name<<"\n";
   delay(100);
   }
   if(lk>=22)
   {
   gotoxy(44,vbn);
   textbackground(BLACK);
   textcolor(RED);cout<<lk;cprintf(".");
   textcolor(YELLOW);
   cprintf("Code: ");cout<<code<<" ";
   textcolor(CYAN);
   cprintf(" Name: ");cout<<name<<"\n";
   delay(100);
   }
   }
   void put_()
   {
   textbackground(WHITE);
   cprintf("  ");cout<<"  ";
   textbackground(CYAN);
   cprintf("  ");
   textbackground(BLACK);
   textcolor(RED);cprintf(" * ");
   textcolor(YELLOW);
   cprintf(" Code : ");cout<<code<<"  ";
   textcolor(CYAN);
   cprintf(" Name : ");cout<<name<<"\n";
   }
   int scode()
   {
    return code;
   }
   } s,stud;
   void display()
   {
    int lk=0,vbn=2;
    ifstream fin("lib.dat",ios::in|ios::binary);
   while(fin.read((char*)&s,sizeof(s)))
    {
    lk++;
    if(lk>21)
    {
    vbn++;
    }
    s.put(lk,vbn);
    }
    fin.close();
    }
   int search(int cde)
     {
     int fdx=0;
     ifstream fin("lib.dat",ios::in|ios::binary);
    while(fin.read((char*)&s,sizeof(s)))
     {
     if(s.scode()==cde)
     {
     s.put_();fdx++;
     }
     }
     fin.close();
     if(fdx==0)
     {
     gotoxy(15,18);textbackground(RED);textcolor(WHITE+BLINK);
     cprintf(" BOOK NOT PRESENT ! ");
     delay(500);
     }
     textcolor(WHITE);
     return fdx;
     }
   void append_data()
   {
   ofstream fout("lib.dat",ios::app|ios::binary);
   s.get();
   fout.write((char*)&s,sizeof(s));
   fout.close();
   }
   void deleterec()
   {
    int r;
    cprintf(" Enter code to be Deleted ");
    gotoxy(36,4);cin>>r;
    ofstream fout ("temp.dat",ios::binary|ios::out);
    ifstream fin ("lib.dat",ios::binary|ios::in);
   while(fin.read((char*)&s,sizeof(s)))
    if(s.scode()!=r)
    fout.write((char*)&s,sizeof(s));
    fin.close();
    fout.close();
    remove("lib.dat");
    rename("temp.dat","lib.dat");
   }
   void sort_data()
   {
    fstream f;
    f.open("lib.dat",ios::in|ios::binary);
    library st[100],temp;
    int n=0;
   while(f.read((char*)&st[n],sizeof(library)))
    {
     n++;
    }
    int i,j;
    for(i=1;i<n;i++)
    {
    for(j=0;j<n-1;j++)
    {
    if(st[j].scode()>st[j+1].scode())
    {
    temp=st[j];
    st[j]=st[j+1];
    st[j+1]=temp;
    }
    }
    }
     f.close();
     f.open("lib.dat",ios::out|ios::binary);
     i=0;
     while(i<n)
     {
     f.write((char*)&st[i],sizeof(library));
     i++;
     }
     gotoxy(12,18);textcolor(WHITE+BLINK);
     cprintf(" BOOKS SORTED SUCCESSFULLY ! ");
     textcolor(WHITE);
     f.close();
     }

void MENU()
{
start2:
textbackground(YELLOW);
textcolor(CYAN);
clrscr();
textbackground(BLACK);
cout<<endl;
int yb=1;
  for(int go=3;go<79;go++)
  {
  gotoxy(go,2);cprintf(" ");
  delay(10);
  gotoxy(go,24);cprintf(" ");
  yb++;
 if(yb<25)
 {
 gotoxy(3,yb);
 cprintf("  ");
 delay(10);
 gotoxy(77,yb);
 cprintf("  ");
 }
  }
			 //APS LIBRARY LOGO//
textbackground(WHITE);
gotoxy(26,6);cprintf("    ");
gotoxy(23,7);cprintf("          ");
gotoxy(20,8);cprintf("                ");
gotoxy(17,9);cprintf("                      ");
gotoxy(13,10);cprintf("                              ");
gotoxy(17,11);cprintf("   ");gotoxy(36,11);cprintf("   ");
gotoxy(17,12);cprintf("   ");gotoxy(23,12);cprintf(" ");
gotoxy(32,12);cprintf(" ");gotoxy(36,12);cprintf("   ");
gotoxy(17,13);cprintf("   ");gotoxy(23,13);cprintf(" ");
gotoxy(25,13);cprintf(" ");gotoxy(30,13);cprintf(" ");
gotoxy(32,13);cprintf(" ");gotoxy(36,13);cprintf("   ");
gotoxy(17,14);cprintf("   ");gotoxy(23,14);cprintf(" ");
gotoxy(25,14);cprintf(" ");gotoxy(27,14);cprintf("  ");
gotoxy(30,14);cprintf(" ");gotoxy(32,14);cprintf(" ");
gotoxy(36,14);cprintf("   ");gotoxy(17,15);cprintf("   ");
gotoxy(23,15);cprintf(" ");gotoxy(25,15);cprintf(" ");
gotoxy(27,15);cprintf("  ");gotoxy(30,15);cprintf(" ");
gotoxy(32,15);cprintf(" ");gotoxy(36,15);cprintf("   ");
gotoxy(17,16);cprintf("   ");gotoxy(36,16);cprintf("   ");
gotoxy(13,17);cprintf("                              ");
gotoxy(10,18);cprintf("                                    ");
  for(int gr=80;gr>50;gr--)
  {
  textbackground(BLACK);
  gotoxy(gr,4);cprintf(" ");
  delay(15);
  }
textbackground(YELLOW);
gotoxy(79,4);cprintf("  ");
gotoxy(73,4);cprintf("    ");
gotoxy(51,4);
textbackground(BLACK);textcolor(WHITE+BLINK);
cprintf(" > Choose Operation : ");textcolor(WHITE);
  for(int gr1=80;gr1>50;gr1--)
  {
  textbackground(BLACK);
  gotoxy(gr1,6);cprintf(" ");
  delay(15);
  }
textbackground(YELLOW);
gotoxy(79,6);cprintf("  ");
gotoxy(73,6);cprintf("    ");
textbackground(BLACK);
gotoxy(52,6);cprintf(" ");
textbackground(YELLOW);cprintf(" ");textbackground(BLACK);cprintf(" 1. ADD A BOOK");
gotoxy(52,6);textbackground(CYAN);cprintf(" ");
  for(int gr2=80;gr2>50;gr2--)
  {
  textbackground(BLACK);
  gotoxy(gr2,8);cprintf(" ");
  delay(15);
  }
textbackground(YELLOW);
gotoxy(79,8);cprintf("  ");
gotoxy(73,8);cprintf("    ");
textbackground(BLACK);
gotoxy(52,8);cprintf(" ");
textbackground(YELLOW);cprintf(" ");textbackground(BLACK);cprintf(" 2. DELETE A BOOK");
gotoxy(52,8);textbackground(CYAN);cprintf(" ");
  for(int gr3=80;gr3>50;gr3--)
  {
  textbackground(BLACK);
  gotoxy(gr3,10);cprintf(" ");delay(20);
  }
textbackground(YELLOW);
gotoxy(79,10);cprintf("  ");
gotoxy(73,10);cprintf("    ");
textbackground(BLACK);
gotoxy(52,10);cprintf(" ");
textbackground(YELLOW);cprintf(" ");textbackground(BLACK);cprintf(" 3. DISPLAY BOOKS");
gotoxy(52,10);textbackground(CYAN);cprintf(" ");
  for(int gr4=80;gr4>50;gr4--)
  {
  textbackground(BLACK);
  gotoxy(gr4,12);cprintf(" ");
  delay(15);
  }
textbackground(YELLOW);
gotoxy(79,12);cprintf("  ");
gotoxy(73,12);cprintf("    ");
textbackground(BLACK);
gotoxy(52,12);cprintf(" ");
textbackground(YELLOW);cprintf(" ");textbackground(BLACK);cprintf(" 4. SEARCH A BOOK");
gotoxy(52,12);textbackground(CYAN);cprintf(" ");
  for(int gr5=80;gr5>50;gr5--)
  {
  textbackground(BLACK);
  gotoxy(gr5,14);cprintf(" ");
  delay(15);
  }
textbackground(YELLOW);
gotoxy(79,14);cprintf("  ");
gotoxy(73,14);cprintf("    ");
textbackground(BLACK);
gotoxy(52,14);cprintf(" ");
textbackground(YELLOW);cprintf(" ");textbackground(BLACK);cprintf(" 5. SORT BOOKS");
gotoxy(52,14);textbackground(CYAN);cprintf(" ");
  for(int gr6=80;gr6>52;gr6--)
  {
  textbackground(BLACK);
  gotoxy(gr6,16);
  cprintf(" ");
  delay(15);
  }
textbackground(YELLOW);
gotoxy(79,16);cprintf("  ");
gotoxy(73,16);cprintf("    ");
textbackground(BLACK);
gotoxy(51,16);cprintf("  ");
textbackground(YELLOW);cprintf(" ");textbackground(BLACK);cprintf(" 6. ISSUE BOOKS");
gotoxy(52,16);textbackground(CYAN);cprintf(" ");
  for(int gr7=80;gr7>50;gr7--)
  {
  textbackground(BLACK);
  gotoxy(gr7,18);cprintf(" ");
  delay(15);
  }
textbackground(YELLOW);
gotoxy(79,18);cprintf("  ");
gotoxy(73,18);cprintf("    ");
textbackground(BLACK);
gotoxy(52,18);cprintf(" ");
textbackground(YELLOW);cprintf(" ");textbackground(BLACK);cprintf(" 7. RETURN BOOK");
gotoxy(52,18);textbackground(CYAN);cprintf(" ");
  for(int gr8=80;gr8>52;gr8--)
  {
  textbackground(BLACK);
  gotoxy(gr8,20);
  cprintf(" ");
  delay(15);
  }
textbackground(YELLOW);
gotoxy(79,20);cprintf("  ");
gotoxy(73,20);cprintf("    ");
textbackground(BLACK);
gotoxy(51,20);cprintf("  ");
textbackground(YELLOW);cprintf(" ");textbackground(BLACK);cprintf(" 8. EXIT LIBRARY");
gotoxy(52,20);textbackground(CYAN);cprintf(" ");
textbackground(WHITE);
int ya=1;
  for(int go0=1;go0<40;go0++)
  {
  gotoxy(go0,1);cprintf(" ");delay(10);
  gotoxy(go0,25);cprintf(" ");
  ya++;
 if(ya<26)
 {
 gotoxy(1,ya);cprintf("  ");delay(10);
 }
  }
gotoxy(32,1);cprintf("A.P.S. ");textbackground(YELLOW);cprintf(" LIBRARY");
gotoxy(7,24);
textbackground(BLACK);textcolor(WHITE);cprintf(" USER : ");textbackground(BLACK);
puts(b);
nb:
textbackground(BLACK);
gotoxy(51,22);
textcolor(YELLOW);cprintf(" Your Choice (1-8) ");
textcolor(BLUE);textbackground(WHITE);cprintf("   ");gotoxy(71,22);cin>>choice;
 if(choice==0)
 {
 textbackground(RED);
 gotoxy(35,22);textcolor(WHITE+BLINK);cprintf(" INVALID INPUT ");
 delay(800);
 gotoxy(35,22);textbackground(YELLOW);cprintf("               ");
 goto nb;
 }
 if(choice<8)
 {
 goto vb;
 }
 if(choice>8)
 {
 textbackground(RED);
 gotoxy(35,22);textcolor(WHITE+BLINK);cprintf(" INVALID INPUT ");
 delay(800);
 gotoxy(35,22);textbackground(YELLOW);cprintf("               ");
 goto nb;
 }
vb:
//to quick exit at aps lib menu
 if(choice==8)
 {
 exit(0);
 }
textbackground(YELLOW);
//loading
gotoxy(37,21);textcolor(BLACK+BLINK);cprintf(" LOADING ");
textbackground(WHITE);gotoxy(31,22);cprintf("                    ");
gotoxy(31,22);
  for(int loading=0;loading<20;loading++)
  {
  textbackground(GREEN);
  cprintf(" ");
  delay(30);
  }
//to hide loading
gotoxy(37,21);textbackground(YELLOW);cprintf("         ");
gotoxy(31,22);cprintf("                    ");
//over hiding
////////////////////////////////////////////////////////////////////////////
			 //slide down cyan screen at aps menu//
			  //////////////////////////////////
////////////////////////////////////////////////////////////////////////////
int yw=0;
  for(int go_=3;go_<79;go_++)
  {
  yw++;
 if(yw<25)
 {
 textbackground(CYAN);
 gotoxy(5,yw);cprintf("                                             ");
 delay(20);
 }
  }
int yw_=0;
  for(int go__=3;go__<79;go__++)
  {
  yw_++;
 if(yw_<24)
 {
 textbackground(BLACK);textcolor(YELLOW);
 gotoxy(7,yw_);cprintf("                                           ");
 delay(20);
 }
  }
textbackground(WHITE);
gotoxy(5,1);cprintf("                                   ");
textbackground(YELLOW);cprintf("             ");
textcolor(WHITE);textbackground(WHITE);
gotoxy(32,1);cprintf("A.P.S. ");textbackground(YELLOW);cprintf(" LIBRARY");
}
class student
   {
   int id;
   char name_[20],class_[20];
   public:
   void put_();
   int scode_()
   {
   return id;
   }
   }s_,stud_;

   void student:: put_()
   {
   textcolor(RED);textbackground(BLACK);
   gotoxy(11,22);
   cprintf(" ID:");cout<<id;
   textcolor(CYAN);
   cprintf(" Name:");puts(name_);
   textcolor(GREEN);
   gotoxy(11,23);
   cprintf(" Class:");cout<<" ";puts(class_);
   gotoxy(18,17);
   textcolor(WHITE+BLINK);textbackground(BLUE);
   cprintf(" PRESENT IN RECORD  ");
   for(int hgf=10;hgf>0;--hgf)
   {
   gotoxy(32,23);cout<<" Countdown : ";cout<<hgf;
   delay(500);
   }
   textcolor(WHITE);
   }

   void display_()
    {
    ifstream fin("stu_.dat",ios::in|ios::binary);
    while(fin.read((char*)&s_,sizeof(s_)))
    {
    s_.put_();
    }
    fin.close();
    }

  int search_(int cde_)
  {
  int cvbn=0;
  ifstream fin("stu_.dat",ios::in|ios::binary);
  while(fin.read((char*)&s_,sizeof(s_)))
  {
  if(s_.scode_()==cde_)
  {
  gotoxy(10,21);cvbn++;
  s_.put_();
  }
  }
  fin.close();
  return cvbn;
  }
void date_mechanism(int DD1,int MM1,int YY1,int DD2,int MM2,int YY2)
{
if(YY1%4==0)
{
switch(MM1)
{
case 1:   a_=(31*0)+DD1;      break;
case 2:   a_=(31*1)+DD1;      break;
case 3:   a_=(31*2)-2+DD1;    break;
case 4:   a_=(31*3)-2+DD1;    break;
case 5:   a_=(31*4)-3+DD1;    break;
case 6:   a_=(31*5)-3+DD1;    break;
case 7:   a_=(31*6)-4+DD1;    break;
case 8:   a_=(31*7)-4+DD1;    break;
case 9:   a_=(31*8)-4+DD1;    break;
case 10:  a_=(31*9)-5+DD1;    break;
case 11:  a_=(31*10)-5+DD1;   break;
case 12:  a_=(31*11)-6+DD1;   break;
}
switch(MM2)
{
case 1:   b_=(31*0)+DD2;       break;
case 2:   b_=(31*1)+DD2;       break;
case 3:   b_=(31*2)-2+DD2;     break;
case 4:   b_=(31*3)-2+DD2;     break;
case 5:   b_=(31*4)-3+DD2;     break;
case 6:   b_=(31*5)-3+DD2;     break;
case 7:   b_=(31*6)-4+DD2;     break;
case 8:   b_=(31*7)-4+DD2;     break;
case 9:   b_=(31*8)-4+DD2;     break;
case 10:  b_=(31*9)-5+DD2;     break;
case 11:  b_=(31*10)-5+DD2;    break;
case 12:  b_=(31*11)-6+DD2;    break;
}
if(YY2-YY1>0)
c_=b_-a_+((365*(YY2-YY1))+1);
else
{
c_=b_-a_;
}
cout<<"difference of dates";
cout<<c_;
}
else if(YY1%4!=0)
{
switch(MM1)
{
case 1:  a_=(31*0)+DD1;       break;
case 2:  a_=(31*1)+DD1;       break;
case 3:  a_=(31*2)-3+DD1;     break;
case 4:  a_=(31*3)-3+DD1;     break;
case 5:  a_=(31*4)-4+DD1;     break;
case 6:  a_=(31*5)-4+DD1;     break;
case 7:  a_=(31*6)-5+DD1;     break;
case 8:  a_=(31*7)-5+DD1;     break;
case 9:  a_=(31*8)-5+DD1;     break;
case 10: a_=(31*9)-6+DD1;     break;
case 11: a_=(31*10)-6+DD1;    break;
case 12: a_=(31*11)-7+DD1;    break;
}
switch(MM2)
{
case 1:  b_=(31*0)+DD2;       break;
case 2:  b_=(31*1)+DD2;       break;
case 3:  b_=(31*2)-3+DD2;     break;
case 4:  b_=(31*3)-3+DD2;     break;
case 5:  b_=(31*4)-4+DD2;     break;
case 6:  b_=(31*5)-4+DD2;     break;
case 7:  b_=(31*6)-5+DD2;     break;
case 8:  b_=(31*7)-5+DD2;     break;
case 9:  b_=(31*8)-5+DD2;     break;
case 10: b_=(31*9)-6+DD2;     break;
case 11: b_=(31*10)-6+DD2;    break;
case 12: b_=(31*11)-7+DD2;    break;
}
c_=b_-a_+(365*(YY2-YY1));
}
else
{
gotoxy(10,10);cprintf(" Wrong Input ");
}
	       textbackground(WHITE);
	       gotoxy(15,15);cprintf("                    ");
	       gotoxy(15,15);
	       for(int issuing=0;issuing<20;issuing++)
	       {
	       textbackground(GREEN);
	       cprintf(" ");
	       delay(40);
	       }
	       gotoxy(17,15);textbackground(CYAN);
	       textcolor(WHITE+BLINK);cprintf("  BOOK ISSUED  ");
	       textbackground(MAGENTA);textcolor(WHITE);
	       gotoxy(10,19);cout<<"Book Issued for";
	       cout<<" ";cout<<c_;cout<<" Days";

}
int date_mechanism_(int DD1,int MM1,int YY1,int DD3,int MM3,int YY3)
{
if(YY1%4==0)
{
switch(MM1)
{
case 1:   a__=(31*0)+DD1;      break;
case 2:   a__=(31*1)+DD1;      break;
case 3:   a__=(31*2)-2+DD1;    break;
case 4:   a__=(31*3)-2+DD1;    break;
case 5:   a__=(31*4)-3+DD1;    break;
case 6:   a__=(31*5)-3+DD1;    break;
case 7:   a__=(31*6)-4+DD1;    break;
case 8:   a__=(31*7)-4+DD1;    break;
case 9:   a__=(31*8)-4+DD1;    break;
case 10:  a__=(31*9)-5+DD1;    break;
case 11:  a__=(31*10)-5+DD1;   break;
case 12:  a__=(31*11)-6+DD1;   break;
}
switch(MM2)
{
case 1:   b__=(31*0)+DD3;       break;
case 2:   b__=(31*1)+DD3;       break;
case 3:   b__=(31*2)-2+DD3;     break;
case 4:   b__=(31*3)-2+DD3;     break;
case 5:   b__=(31*4)-3+DD3;     break;
case 6:   b__=(31*5)-3+DD3;     break;
case 7:   b__=(31*6)-4+DD3;     break;
case 8:   b__=(31*7)-4+DD3;     break;
case 9:   b__=(31*8)-4+DD3;     break;
case 10:  b__=(31*9)-5+DD3;     break;
case 11:  b__=(31*10)-5+DD3;    break;
case 12:  b__=(31*11)-6+DD3;    break;
}
if(YY3-YY1>0)
c__=b__-a__+((365*(YY3-YY1))+1);
else
{
c__=b__-a__;
}
cout<<"difference of dates";
cout<<c__;
}
else if(YY1%4!=0)
{
switch(MM1)
{
case 1:  a__=(31*0)+DD1;       break;
case 2:  a__=(31*1)+DD1;       break;
case 3:  a__=(31*2)-3+DD1;     break;
case 4:  a__=(31*3)-3+DD1;     break;
case 5:  a__=(31*4)-4+DD1;     break;
case 6:  a__=(31*5)-4+DD1;     break;
case 7:  a__=(31*6)-5+DD1;     break;
case 8:  a__=(31*7)-5+DD1;     break;
case 9:  a__=(31*8)-5+DD1;     break;
case 10: a__=(31*9)-6+DD1;     break;
case 11: a__=(31*10)-6+DD1;    break;
case 12: a__=(31*11)-7+DD1;    break;
}
switch(MM3)
{
case 1:  b__=(31*0)+DD3;       break;
case 2:  b__=(31*1)+DD3;       break;
case 3:  b__=(31*2)-3+DD3;     break;
case 4:  b__=(31*3)-3+DD3;     break;
case 5:  b__=(31*4)-4+DD3;     break;
case 6:  b__=(31*5)-4+DD3;     break;
case 7:  b__=(31*6)-5+DD3;     break;
case 8:  b__=(31*7)-5+DD3;     break;
case 9:  b__=(31*8)-5+DD3;     break;
case 10: b__=(31*9)-6+DD3;     break;
case 11: b__=(31*10)-6+DD3;    break;
case 12: b__=(31*11)-7+DD3;    break;
}
c__=b__-a__+(365*(YY3-YY1));
}
else
{
gotoxy(10,10);cprintf(" Wrong Input ");
}
return c__;
}

void EXIT_SCREEN()
{
textbackground(RED);
gotoxy(39,5);cprintf("    ");
gotoxy(36,6);cprintf("          ");
gotoxy(33,7);cprintf("                ");
gotoxy(30,8);cprintf("                      ");
gotoxy(26,9);cprintf("                              ");
gotoxy(30,10);cprintf("   ");gotoxy(49,10);cprintf("   ");
textbackground(WHITE);
gotoxy(30,11);cprintf("   ");gotoxy(36,11);cprintf(" ");
gotoxy(45,11);cprintf(" ");gotoxy(49,11);cprintf("   ");
gotoxy(30,12);cprintf("   ");gotoxy(36,12);cprintf(" ");
gotoxy(38,12);cprintf(" ");gotoxy(43,12);cprintf(" ");
gotoxy(45,12);cprintf(" ");gotoxy(49,12);cprintf("   ");
gotoxy(30,13);cprintf("   ");gotoxy(36,13);cprintf(" ");
gotoxy(38,13);cprintf(" ");gotoxy(30,13);cprintf("  ");
gotoxy(40,13);cprintf("  ");gotoxy(40,14);cprintf("  ");
gotoxy(43,13);cprintf(" ");gotoxy(45,13);cprintf(" ");
gotoxy(49,13);cprintf("   ");gotoxy(30,14);cprintf("   ");
gotoxy(36,14);cprintf(" ");gotoxy(38,14);cprintf(" ");
gotoxy(30,14);cprintf("  ");gotoxy(43,14);cprintf(" ");
gotoxy(45,14);cprintf(" ");gotoxy(49,14);cprintf("   ");
textbackground(RED);
gotoxy(30,15);cprintf("   ");gotoxy(49,15);cprintf("   ");
gotoxy(26,16);cprintf("                              ");
gotoxy(23,17);cprintf("                                    ");
textbackground(YELLOW);
cout<<endl;
int yb_=1;
  for(int gow=12;gow<69;gow++)
  {
  gotoxy(gow,2);cprintf(" ");
  delay(10);
  gotoxy(gow,24);cprintf(" ");
  yb_++;
    if(yb_<25)
     {
     gotoxy(12,yb_);
     cprintf("  ");
     delay(10);
     gotoxy(67,yb_);
     cprintf("  ");
     }
  }
textbackground(WHITE);
int ya_=1;
  for(int go0_=12;go0_<41;go0_++)
  {
  gotoxy(go0_,2);cprintf(" ");delay(10);
  gotoxy(go0_,24);cprintf(" ");
  ya_++;
 if(ya_<25)
 {
 gotoxy(12,ya_);cprintf("  ");delay(10);
 }
  }
gotoxy(22,20);textbackground(BLACK);textcolor(WHITE);
cprintf(" <y.> continue <n.> Log out <e.> Exit ");
textbackground(BLUE);
gotoxy(33,22);cprintf(" Your Choice ");textbackground(CYAN);cprintf("   ");
gotoxy(47,22);cin>>ch1;
}

/////////////////////////////////////////////////////////////////////////////
				  //VOID MAIN//
/////////////////////////////////////////////////////////////////////////////

void main()
{
int n,ch,c;
char cho;
start:
clrscr();
library_ s_;
s_.intro();
 if(login==1||login==2||login==3)
 {
MODES s1;
s1.details();
/////////////////////////////////////////////////////////////////////////////
		     // SWITCH CASE OF A.P.S LIBRARY //
/////////////////////////////////////////////////////////////////////////////
do
{
start2:
MENU();
switch(choice)
{
       case 1://ADD A BOOK
       if(login==1)
       {
       int cz=0;
       blackscreen:
       if(cz>0)
       {
       int yw_=0;
       for(int go__=3;go__<79;go__++)
       {
       yw_++;
       if(yw_<24)
       {
       textbackground(BLACK);textcolor(YELLOW);
       gotoxy(7,yw_);cprintf("                                           ");
       delay(20);
       }
       }
       textbackground(WHITE);
       gotoxy(5,1);cprintf("                                   ");
       textbackground(YELLOW);cprintf("             ");
       textcolor(WHITE);textbackground(WHITE);
       gotoxy(32,1);cprintf("A.P.S. ");textbackground(YELLOW);cprintf(" LIBRARY");
       }
	      gotoxy(8,4);
	      append_data();
	      textbackground(WHITE);gotoxy(15,19);cprintf("                    ");
	      gotoxy(15,19);
	      for(int adding=0;adding<20;adding++)
	      {
	      textbackground(GREEN);
	      cprintf(" ");
	      delay(30);
	      }
	      gotoxy(19,19);textbackground(CYAN);
	      textcolor(WHITE+BLINK);cprintf(" BOOK ADDED ");
	      fg:
	      textbackground(BLUE);
	      textcolor(WHITE);
	      gotoxy(8,22);cprintf(" Want to Add more books (y/n) ? ");
	      textbackground(WHITE);textcolor(BLUE);cprintf("   ");
	      char ch_;textcolor(WHITE);
	      gotoxy(41,22);cin>>ch_;
	      if(ch_=='y'||ch_=='Y')
	      {
	      cz++;
	      goto blackscreen;
	      }
	      if(ch_=='n'||ch_=='N')
	      {}
	      else
	      {
	      gotoxy(8,22);
	      textbackground(RED);
	      cprintf("  <<  Wrong Input , try again  >>  ");delay(1000);
	      goto fg;
	      }
	      }
	      if(login==2||login==3)
	      {
	      gotoxy(8,12);textbackground(WHITE);textcolor(RED);
	      cprintf(" ONLY ADMIN CAN MAKE CHANGES IN LIBRARY !");
	      textcolor(WHITE);
	      }
	      break;
       case 2://DELETE A BOOK
       if(login==1)
       {
       int cz__=0;
       blackscreen__:
       if(cz__>0)
       {
       int yw__=0;
       for(int goe__=3;goe__<79;goe__++)
       {
       yw__++;
       if(yw__<24)
       {
       textbackground(BLACK);textcolor(YELLOW);
       gotoxy(7,yw__);cprintf("                                           ");
       delay(20);
       }
       }
       textbackground(WHITE);
       gotoxy(5,1);cprintf("                                   ");
       textbackground(YELLOW);cprintf("             ");
       textcolor(WHITE);textbackground(WHITE);
       gotoxy(32,1);cprintf("A.P.S. ");textbackground(YELLOW);cprintf(" LIBRARY");
       }
	      gotoxy(8,4);
	      deleterec();
	      textbackground(WHITE);gotoxy(15,19);cprintf("                    ");
	      gotoxy(15,19);
	      for(int deleting=0;deleting<20;deleting++)
	      {
	      textbackground(GREEN);
	      cprintf(" ");
	      delay(30);
	      }
	      gotoxy(19,19);textbackground(CYAN);
	      textcolor(WHITE+BLINK);cprintf("BOOK DELETED");
	      fg__:
	      textbackground(BLUE);
	      textcolor(WHITE);
	      gotoxy(8,22);cprintf(" Want to delete more books(y/n) ");
	      textbackground(WHITE);textcolor(BLUE);cprintf("   ");
	      char ch___;textcolor(WHITE);
	      gotoxy(41,22);cin>>ch___;
	      if(ch___=='y'||ch___=='Y')
	      {
	      cz__++;
	      goto blackscreen__;
	      }
	      if(ch___=='n'||ch___=='N')
	      {}
	      else
	      {
	      gotoxy(8,22);
	      textbackground(RED);
	      cprintf("  <<  Wrong Input , try again  >>  ");delay(1000);
	      goto fg__;
	      }
	      }

	      if(login==2||login==3)
	      {
	      gotoxy(8,12);textbackground(WHITE);textcolor(RED);
	      cprintf(" ONLY ADMIN CAN MAKE CHANGES IN LIBRARY !");
	      textcolor(WHITE);
	      }
	      break;
       case 3://DISPLAY ALL BOOKS
	      if(login==1)
	      {
	      int yw__=2;
	      for(int go___=3;go___<79;go___++)
	      {
	      yw__++;
	      if(yw__<24)
	      {
	      textbackground(BLACK);
	      gotoxy(1,yw__);
	      cprintf("                                                                              ");
	      }
	      }
	      gotoxy(32,2);textbackground(BLUE);
	      textcolor(WHITE+BLINK);
	      cprintf(" List of Books ");
	      gotoxy(1,3);
	      display();
	      textcolor(WHITE);
	      }
	      if(login==2||login==3)
	      {
	      int yw__=2;
	      for(int go___=3;go___<79;go___++)
	      {
	      yw__++;
	      if(yw__<24)
	      {
	      textbackground(BLACK);
	      gotoxy(1,yw__);
	      cprintf("                                                                              ");
	      }
	      }
	      gotoxy(32,2);textbackground(BLUE);
	      cprintf(" List of Books ");
	      gotoxy(1,3);
	      display();
	      textcolor(WHITE);
	      }
	      break;
       case 4://SEARCH A BOOK
	      gotoxy(8,4);
	      cprintf(" Enter Code for search ");cout<<" ";
	      cin>>c;
	      textbackground(WHITE);
	      gotoxy(15,15);cprintf("                    ");
	      gotoxy(15,15);
	      for(int searching=0;searching<20;searching++)
	      {
	      textbackground(GREEN);
	      cprintf(" ");
	      delay(30);
	      }
	      gotoxy(17,15);textbackground(CYAN);
	      textcolor(WHITE+BLINK);cprintf(" BOOK SEARCHED ");
	      cout<<endl<<endl;
	      search(c);
	      textcolor(WHITE);
	      break;
       case 5://SORT BOOKS
	      gotoxy(12,13);
	      cprintf(" SORTING.. ");
	      textbackground(WHITE);
	      gotoxy(15,15);cprintf("                    ");
	      gotoxy(15,15);
	      for(int sorting=0;sorting<20;sorting++)
	      {
	      textbackground(GREEN);
	      cprintf(" ");
	      delay(30);
	      }
	      sort_data();
	      break;
       case 6://ISSUE BOOK
	      if(login==1)
	      {
		for(int vc=20;vc>8;vc--)
		{
		textbackground(CYAN);
		gotoxy(9,vc);
		cprintf("                                      ");
		delay(20);
		}
		textbackground(WHITE);
		gotoxy(12,10);cprintf("                                ");
		gotoxy(12,19);cprintf("                                ");
		for(int ty=10;ty<20;ty++)
		{
		gotoxy(11,ty);cprintf("  ");gotoxy(43,ty);cprintf("  ");
		delay(10);
		}
		gotoxy(18,12);
		textcolor(BLACK+BLINK);textbackground(WHITE);
		cprintf("    VERIFICATION    ");
	      textcolor(YELLOW);textbackground(BLACK);
	      gotoxy(15,14);
	      cprintf(" STUDENT ID ");
	      textbackground(WHITE);cprintf("              ");
	      gotoxy(30,14);
	      cin>>c___;
	      search_(c___);
	      int vcxz=search_(c___);
	      if(vcxz!=0)
	      {
	      //TO HIDE LAST SCREEN
	      int yw___=0;
	      for(int goe___=3;goe___<79;goe___++)
	       {
	       yw___++;
	       if(yw___<24)
	       {
	       textbackground(BLACK);textcolor(YELLOW);
	       gotoxy(7,yw___);cprintf("                                           ");
	       }
	       }
	      textbackground(WHITE);
	      gotoxy(5,1);cprintf("                                   ");
	      textbackground(YELLOW);cprintf("             ");
	      textcolor(WHITE);textbackground(WHITE);
	      gotoxy(32,1);cprintf("A.P.S. ");textbackground(YELLOW);cprintf(" LIBRARY");
	      //FURTHER
	      gotoxy(8,5);textbackground(YELLOW);
	      cprintf(" Enter Code for search ");cout<<" ";
	      cin>>c;
	      textbackground(WHITE);
	      gotoxy(15,7);cprintf("                    ");
	      gotoxy(15,7);
	      for(int searching=0;searching<20;searching++)
	      {
	      textbackground(GREEN);
	      cprintf(" ");
	      delay(30);
	      }
	      gotoxy(17,7);textbackground(CYAN);
	      textcolor(WHITE+BLINK);cprintf(" BOOK SEARCHED ");
	      cout<<endl<<endl;
	      search(c);
	     int yui=search(c);
	       gotoxy(7,10);textbackground(BLACK);
	       cprintf("                                      ");
	       gotoxy(7,11);textbackground(BLACK);
	       cprintf("                                      ");
	       gotoxy(7,12);textbackground(BLACK);
	       cprintf("                                      ");
	       gotoxy(7,13);textbackground(BLACK);
	       cprintf("                                      ");
	     char choi;
	     if (yui>0)
	     {
	     textbackground(CYAN);
	     gotoxy(10,15);cprintf(" Want to issue book (y/n) ");
	     textcolor(BLUE);
	     textbackground(WHITE);cprintf("   ");
	     gotoxy(37,15);cin>>choi;
	     textcolor(WHITE);
	     if(choi=='y'||choi=='Y')
	     {
	     textbackground(BLACK);
	     gotoxy(10,15);cprintf("                               ");
	       textcolor(WHITE);
	       gotoxy(8,5);textbackground(YELLOW);
	       cprintf(" Enter Today's Date ");textcolor(BLUE);
	       textbackground(BLACK);cprintf(" ");
	       textbackground(WHITE);cprintf("    ");cout<<" ";
	       textbackground(WHITE);cprintf("    ");cout<<" ";
	       textbackground(WHITE);cprintf("      ");cout<<" ";
	       textbackground(GREEN);
	       gotoxy(8,7);textcolor(WHITE);
	       cprintf(" Enter Return Date  " );textcolor(BLUE);
	       textbackground(BLACK);cprintf(" ");
	       textbackground(WHITE);cprintf("    ");cout<<" ";
	       textbackground(WHITE);cprintf("    ");cout<<" ";
	       textbackground(WHITE);cprintf("      ");cout<<" ";
	       gotoxy(30,5);cin>>DD1;
	       gotoxy(35,5);cin>>MM1;
	       gotoxy(40,5);cin>>YY1;
	       gotoxy(30,7);cin>>DD2;
	       gotoxy(35,7);cin>>MM2;
	       gotoxy(40,7);cin>>YY2;
	       date_mechanism(DD1,MM1,YY1,DD2,MM2,YY2);
	       }
	      if(choi=='n'||choi=='N')
	      {
	      textbackground(BLACK);
	      gotoxy(10,15);cprintf("                               ");
	      }
	      }
	      }
	      else
	      {
	      gotoxy(18,17);
	      textcolor(WHITE+BLINK);textbackground(RED);
	      cprintf(" RECORD NOT PRESENT ");
	      delay(100);
	      textcolor(WHITE);
	      }
	      }
	      if(login==2||login==3)
	      {
	      gotoxy(8,12);textbackground(WHITE);textcolor(RED);
	      cprintf(" ONLY ADMIN CAN ISSUE BOOKS IN LIBRARY ! ");
	      textcolor(WHITE);
	      }
	      break;
       case 7://RETURN BOOK
	       if(login==1)
	       {
	       gotoxy(8,4);
	      cprintf(" Returning Book's Code ");cout<<" ";
	      cin>>c;
	      textbackground(WHITE);
	      gotoxy(15,15);cprintf("                    ");
	      gotoxy(15,15);
	      for(int searching=0;searching<20;searching++)
	      {
	      textbackground(GREEN);
	      cprintf(" ");
	      delay(30);
	      }
	      gotoxy(17,15);textbackground(CYAN);
	      textcolor(WHITE+BLINK);cprintf(" BOOK SEARCHED ");
	      cout<<endl<<endl;
	      search(c);
	      int yui=search(c);
	       gotoxy(7,10);textbackground(BLACK);
	       cprintf("                                      ");
	       gotoxy(7,11);textbackground(BLACK);
	       cprintf("                                      ");
	       gotoxy(7,12);textbackground(BLACK);
	       cprintf("                                      ");
	       gotoxy(7,18);textbackground(BLACK);
	       cprintf("                                      ");

	      if (yui>0)
	     {textcolor(WHITE+BLINK);
	     gotoxy(14,23);cprintf("< PRESS ANY KEY TO CONTINUE >");
	      getch();
	      textcolor(WHITE);
	      //TO HIDE LAST SCREEN
	      int yw___=0;
	      for(int goe___=3;goe___<79;goe___++)
	       {
	       yw___++;
	       if(yw___<24)
	       {
	       textbackground(BLACK);textcolor(YELLOW);
	       gotoxy(7,yw___);cprintf("                                           ");
	       }
	       }
	      textbackground(WHITE);
	      gotoxy(5,1);cprintf("                                   ");
	      textbackground(YELLOW);cprintf("             ");
	      textcolor(WHITE);textbackground(WHITE);
	      gotoxy(32,1);cprintf("A.P.S. ");textbackground(YELLOW);cprintf(" LIBRARY");
	       gotoxy(8,4);textbackground(GREEN);
	       cprintf(" Book was issued on ");cout<<" "<<DD1<<"-"<<MM1<<"-"<<YY1;
	       gotoxy(8,5);textbackground(YELLOW);
	       cprintf("  Enter Return Date ");textcolor(BLUE);
	       textbackground(BLACK);cprintf(" ");
	       textbackground(WHITE);cprintf("    ");cout<<" ";
	       textbackground(WHITE);cprintf("    ");cout<<" ";
	       textbackground(WHITE);cprintf("      ");cout<<" ";
	       gotoxy(30,5);cin>>DD3;
	       gotoxy(35,5);cin>>MM3;
	       gotoxy(40,5);cin>>YY3;
	       date_mechanism_(DD1,MM1,YY1,DD3,MM3,YY3);
	       int c___=date_mechanism_(DD1,MM1,YY1,DD3,MM3,YY3);
	       textbackground(CYAN);textcolor(WHITE);
	      gotoxy(8,10);cprintf(" YOU ARE RETURNING BOOK AFTER ");
	      cout<<c___<<" days ";
	      if(c_>=c___)
	      {
	      textbackground(GREEN);textcolor(WHITE+BLINK);
	      gotoxy(22,15);cprintf(" THANK YOU ");delay(50);
	      textcolor(WHITE);
	      }
	      else
	      {
	      delay_days=c__-c_;
	      gotoxy(8,18);textcolor(WHITE);
	      cprintf(" Delay in Returning book by ");
	      cout<<delay_days<<" days.";
	      penalty=delay_days*7;
	      gotoxy(8,20);textbackground(RED);textcolor(WHITE+BLINK);
	      cprintf(" Penalty ");cout<<" Rs."<<penalty;
	      textcolor(WHITE);
	      }
	      }

	      }
	      if(login==2||login==3)
	      {
	      gotoxy(8,12);textbackground(WHITE);textcolor(RED);
	      cprintf(" ONLY ADMIN CAN RETURN BOOKS IN LIBRARY! ");
	      textcolor(WHITE);
	      }
	      break;
       case 8:
	      exit(0);
}
   dfg:
   if(choice==1||choice==3||choice==2)
   {
   gotoxy(51,24);textbackground(BLUE);
   cprintf("  GO TO MAIN MENU (Y/N)  ");
   gotoxy(76,24);textbackground(WHITE);textcolor(BLUE);
   cprintf("   ");
   gotoxy(77,24);cin>>cho;
   }
   if(choice==4||choice==5||choice==6||choice==7)
   {
   gotoxy(12,22);textbackground(BLUE);
   cprintf("  GO TO MAIN MENU (Y/N)  ");
   gotoxy(37,22);textbackground(WHITE);textcolor(BLUE);
   cprintf("   ");
   gotoxy(38,22);cin>>cho;
   }
   }while(cho=='y'||cho=='Y');

   if(cho=='n'||cho=='N'||cho=='y'||cho=='Y')
   {
   }
   else
   {
   gotoxy(51,24);textbackground(BLUE);textcolor(WHITE);
   cprintf(" WRONG INPUT , TRY AGAIN !! ");textbackground(BLACK);
   delay(500);
   gotoxy(51,24);cprintf("                            ");
   goto dfg;
   }
/////////////////////////////////////////////////////////////////////////////
		       //CONTINUE,LOG-OUT,EXIT SCREEN//
/////////////////////////////////////////////////////////////////////////////
start3:
textbackground(BLACK);
clrscr();
EXIT_SCREEN();
/////////////////////////////////////////////////////////////////////////////
		     //WHAT HAPPENS WHEN WE CHOOSE TO CONTINUE//
/////////////////////////////////////////////////////////////////////////////
 if(ch1=='y'||ch1=='Y')
 {
 textbackground(WHITE);textcolor(BLACK+BLINK);
 gotoxy(32,22);
 cprintf("    CONTINUING    \n");
 cout<<endl;
 //green design loading at exit
  textbackground(GREEN);
  int ya_=1;
  for(int go0_=12;go0_<41;go0_++)
  {
  gotoxy(go0_,2);cprintf(" ");delay(10);
  gotoxy(go0_,24);cprintf(" ");
  ya_++;
 if(ya_<25)
 {
 gotoxy(12,ya_);cprintf("  ");delay(10);
 }
  }
  for(int n=0;n<50;n++)
  {
  cout<<endl;
  delay(10);
  textbackground(BLACK);textcolor(WHITE);
  cprintf(" ");
  }
  goto start2;
  }
/////////////////////////////////////////////////////////////////////////////
			    //TO EXIT//
/////////////////////////////////////////////////////////////////////////////
 else if(ch1=='e'||ch1=='E')
 {
 textbackground(WHITE);textcolor(BLACK+BLINK);
 gotoxy(33,22);
 cprintf("......EXITING...... ");
 cout<<endl;
 textbackground(BLACK);textcolor(WHITE);
 cout<<endl;
  //green design loading at exit
  textbackground(GREEN);
int ya_=1;
  for(int go0_=12;go0_<41;go0_++)
  {
  gotoxy(go0_,2);cprintf(" ");delay(10);
  gotoxy(go0_,24);cprintf(" ");
  ya_++;
 if(ya_<25)
 {
 gotoxy(12,ya_);cprintf("  ");delay(10);
 }
  }
  for(int n=0;n<50;n++)
  {
  cout<<endl;
  delay(10);
  textbackground(BLACK);textcolor(WHITE);
  cprintf(" ");
  }
  exit(0);
  }
/////////////////////////////////////////////////////////////////////////////
			    //TO LOG OUT//
/////////////////////////////////////////////////////////////////////////////
 else if(ch1=='n'||ch1=='N')
 {
 textbackground(WHITE);textcolor(BLACK+BLINK);
 gotoxy(33,22);
 cprintf("   LOGGING OUT   \n");
 cout<<endl;
 textbackground(BLACK);textcolor(WHITE);
  //green design loading at exit
  textbackground(GREEN);
int ya_=1;
  for(int go0_=12;go0_<41;go0_++)
  {
  gotoxy(go0_,2);cprintf(" ");delay(10);
  gotoxy(go0_,24);cprintf(" ");
  ya_++;
 if(ya_<25)
 {
 gotoxy(12,ya_);cprintf("  ");delay(10);
 }
 }
  for(int n=0;n<50;n++)
  {
  cout<<endl;
  delay(10);
  textbackground(BLACK);textcolor(WHITE);
  cprintf(" ");
  }
log++;
  goto start;
 }
/////////////////////////////////////////////////////////////////////////////
		       //WHEN WE TYPE ANYTHING EXCEPT Y/N/E//
/////////////////////////////////////////////////////////////////////////////
 else
 {
 textbackground(WHITE);textcolor(BLACK+BLINK);
 gotoxy(26,23);
 cprintf(" INVALID CHOICE, TRY AGAIN !!! \n");
 cout<<endl;
 delay(1500);
  for(int n=0;n<50;n++)
  {
  cout<<endl;
  delay(10);
  textbackground(BLACK);
  textcolor(WHITE);
  cprintf(" ");
  }
  textbackground(WHITE);textcolor(RED);
  goto start3;
  }
}while(ch1=='y'||ch1=='Y');
getch();
}
/////////////////////////////////////////////////////////////////////////////
				  //THE END//
/////////////////////////////////////////////////////////////////////////////