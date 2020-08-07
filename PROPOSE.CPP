//how to make propose program in turboc++ compiler
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
	clrscr();

	int i,j,k=1;

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	for(i=-50,j=1;!kbhit();j+=1,i+=10)
	{
		if(i<=170)
		{
			cleardevice();

			//floor and name
			setcolor(15);
			line(0,400,600,400);
			settextstyle(3,0,2);
			outtextxy(310,250,"*me");
			outtextxy(80+i,250,"*404");

			//girl
			setcolor(12);

			//face
			circle(100+i,300,15);

			//dress
			line(100+i,315,87+i,360);
			line(87+i,360,113+i,360);
			line(100+i,315,113+i,360);

			//leg
			if(j==1&&i<170)
			{
				line(100+i,360,110+i,370);
				line(110+i,370,110+i,400);
				line(100+i,360,85+i,400);
			}
			else if(j==2&&i<170)
			{
				line(100+i,360,110+i,370);
				line(110+i,370,110+i,400);
				line(100+i,360,85+i,400);
			}
			else if(j==3&&i<170)
			{
				line(100+i,360,104+i,400);
				line(100+i,360,107+i,370);
				line(107+i,370,83+i,400);
			}
			else if(j==4&&i<170)
			{
				line(100+i,360,110+i,370);
				line(110+i,370,110+i,400);
				line(100+i,360,80+i,400);
			}
			else if(j==5&&i<170)
			{
				line(100+i,360,80+i,400);
				line(100+i,360,120+i,400);

				//for re-step
				j=1;
			}
			else
			{
				line(100+i,360,104+i,400);
				line(100+i,360,107+i,370);
				line(107+i,370,83+i,400);
			}

			//hand
			if(i==170&&k==1)
			{
				line(100+i,325,101+i,345);
				line(101+i,345,121+i,324);

				//rose
				line(121+i,320,121+i,335);
				line(117+i,320,123+i,320);
				line(121+i,315,117+i,320);
				line(121+i,315,123+i,320);

			}
			else if(i==170&&k==2)
			{
				line(100+i,325,104+i,343);
				line(104+i,343,122+i,326);

				//rose
				line(122+i,322,122+i,337);
				line(119+i,322,125+i,322);
				line(122+i,317,119+i,322);
				line(122+i,317,125+i,322);

			}
			else if(i==170&&k==3)
			{
				line(100+i,325,104+i,343);
				line(104+i,343,123+i,328);

				//rose
				line(123+i,324,123+i,339);
				line(120+i,324,126+i,324);
				line(123+i,319,120+i,324);
				line(123+i,319,126+i,324);

			}
			else if(i==170&&k==4)
			{
				line(100+i,325,105+i,341);
				line(105+i,341,125+i,330);

				//rose
				line(125+i,326,125+i,341);
				line(122+i,326,128+i,326);
				line(125+i,321,122+i,326);
				line(125+i,321,128+i,326);

			}
			else if(i==170&&k==5)
			{
				line(100+i,325,106+i,339);
				line(106+i,339,127+i,332);

				//rose
				line(127+i,328,127+i,343);
				line(124+i,328,130+i,328);
				line(127+i,323,124+i,328);
				line(127+i,323,130+i,328);

			}
			else
			{
				line(100+i,325,101+i,345);
				line(101+i,345,120+i,324);

				//rose
				line(120+i,320,120+i,335);
				line(117+i,320,123+i,320);
				line(120+i,315,117+i,320);
				line(120+i,315,123+i,320);

			}

			//boy
			setcolor(10);

			//face
			circle(325,300,15);

			//dress and leg
			line(325,315,325,360);

			line(325,360,320,400);
			line(325,360,317,372);
			line(317,372,335,400);

			//hand
			if(k==1&&i==170)
			{
				line(325,320,327,337);
				line(327,337,310,350);

				i-=10;
				k++;
			}
			else if(k==2&&i==170)
			{
				line(325,320,325,338);
				line(325,338,307,346);

				i-=10;
				k++;
			}
			else if(k==3&&i==170)
			{
				line(325,320,324,339);
				line(324,339,304,341);

				i-=10;
				k++;
			}
			else if(k==4&&i==170)
			{
				line(325,320,323,340);
				line(323,340,301,337);

				i-=10;
				k++;
			}
			else if(k==5&&i==170)
			{
				line(325,320,321,341);
				line(321,341,297,332);

				k++;
			}
			else
			{
				line(325,320,328,336);
				line(328,336,317,355);
			}
			delay(280);
		}
		else
			goto out;
	}
	out:
	getch();
}