#include <conio.h>
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <graphics.h>
#include <dos.h>
int main()
{
	int gd=DETECT,gm;
	int age,sinus=0,diarrhoea=0,typhoidefever=0,jaundice=0,stomachulcer=0;
	char name[20],b[30];
	initgraph(7gd,&gm,"C:\\TC\\bgi");
	printf("\t\tWELCOME TO MEDICAL EXPERT SYSTEM");
	printf("\nEnter the name of the patient:");
	scanf("%s",&name);
	printf("\nEnter the age of the patient:");
	scanf("%d",&age);
	printf("\nKINDLY ANSWER THE FOLLOWINF QUESTION CORRECTLY");
	printf("\nDO YOU HAVE FOLLOWING SYMPTEMS TYPE 'Y' ELSE TYPE 'N'");
	printf("\n1.Do  you have pain in back of the eye and ear?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		sinus++;
	} 
	printf("\n2.Do  you have pain in sinuses?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		sinus++;
	} 
	printf("\n3.Do you feel loss of smell?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		sinus++;
	} 
	printf("\n4.Do you feel sneezing?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		sinus++;
	} 
	printf("\n5.Do you have headache?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		sinus++;
		typhoidefever++;
	} 
	printf("\n6.Do you have fever?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		printf("\n7.Do you have high fever?:\t");
		scanf("%s",b);
		if(strcmp(b,"y")==0)
		{
			typhoidefever++;
		}
		else
		{
			sinus++;
			jaundice++;
		}
		
	} 
	printf("\n8.Do you have cold?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		sinus++;
	} 
	printf("\n9.Do you have difficulty in sleeping?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		sinus++;
	}
	printf("\n10.Do you have difficulty in breathing?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		sinus++;
		stomachulcer++;
	}  
	printf("\n11.Do you have throat ittitating?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		sinus++;
	} 
	printf("\n12.Do you feel abdominal cramps?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		diarrhoea++;
	} 
	printf("\n13.Do you feel abdominal pains?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		diarrhoea++;
		jaundice++;
		stomachulcer++;
	} 
	printf("\n14.Do you feel urgency to go to the toilet?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		diarrhoea++;
	} 
	printf("\n15.Do you have frequent passing of loose?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		diarrhoea++;
	} 
	printf("\n16.Do you have watery faces?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		diarrhoea++;
	} 
	printf("\n17.Is there is  vomiting?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		printf("\n18.Is there vamiting with blood?:\t");
		scanf("%s",b);
		if(strcmp(b,"y")==0)
			{
				stomachulcer++;
			}
		else
		{
			diarrhoea++;
			typhoidefever++;
			jaundice++;
		}
			
	} 
	printf("\n19.Do you feel nausea?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		diarrhoea++;
		stomachulcer++;
	} 
	printf("\n20.Is there change in colour of your stools?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		diarrhoea++;
	} 
	printf("\n21.Is there mix of blood in your stool?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		printf("\n22.Is there mix of dark blood in your stool?:\t");
		scanf("%s",b);
		if(strcmp(b,"y")==0)
		{
			stomachulcer++;
		}
		else
		{
			diarrhoea++;
		}
	} 
	printf("\n23.Do you have stomach pain?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		printf("\n24.Do you have burning stomach pain?:\t");
		scanf("%s",b);
		if(strcmp(b,"y")==0)
		{
			stomachulcer++;
		}
		else
		{
			typhoidefever++;
		}
	} 
	printf("\n25.Do you feel weakness?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		typhoidefever++;
		sinus++;
		diarrhoea++;
		jaundice++;
	} 
	printf("\n26.Do you have loose stools?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		typhoidefever++;
	} 
	printf("\n27.Do you have pain in muscles?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		typhoidefever++;
	} 
	printf("\n28.Do you have loss of appetite?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		typhoidefever++;
		stomachulcer++;
	} 
	printf("\n29.Do you feel tatigue?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		jaundice++;
	} 
	printf("\n30.Do you have weightloss?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		jaundice++;
		diarrhoea++;
	} 
	printf("\n31.Do you have palestools?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		jaundice++;
	} 
	printf("\n32.Is there dark urine?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		jaundice++;
	} 
	printf("\n33.Is there yellowing of the skin and the whites of eyes?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		jaundice++;
	} 
	printf("\n34.Do you have low pain in chest or upper abdomen?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		stomachulcer++;
	} 
	printf("\n35.Do you have heart burn?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		stomachulcer++;
	} 
	printf("\n36.Is there feel of fullness?:\t");
	scanf("%s",b);
	if(strcmp(b,"y")==0)
	{
		stomachulcer++;
	//for reference
	printf("\n%d",sinus);
	printf("\n%d",diarrhoea);
	printf("\n%d",typhoidefever);
	printf("\n%d",jaundice);
	printf("\n%d",stomachulcer);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	
	if(sinus>=9)
	{
	
		setbkcolor(4);
		printf("\n**************************************************************************************");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		settextxy(GOTHIC_FONT,0,4);
		outtextxy(230,10,"\nPATIENT REPORT CARD");
		printf("\n*NAME::::%s",name);
		printf("                                                  AGE=%d                 *",age);
		
		printf("\nYOU COULD HAVE SINUS..");
		printf("\nIt was a cureable  disease.");
		printf("\nGo and visit any otolarynglogist.");
		printf("\nThis disease will be cured in 3-4weeks if you consult with doctor.");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n**************************************************************************************");
		getch();
	}
	if(diarrhoea>=9)
	{
		
		setbkcolor(19);
		printf("\n**************************************************************************************");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		settextxy(GOTHIC_FONT,0,4);
		outtextxy(230,10,"\nPATIENT REPORT CARD");
		printf("\n*NAME::::%s",name);
		printf("                                              AGE=%d                 *",age);
		printf("\nYOU COULD HAVE DIARRHOEA");
		printf("\nIt was a cureable disease");
		printf("\nYou can slowdown with the help of 'IMODIAM' and consult with doctor.");
		printf("\nMust to avoide junkfoods and take fresh and natural and also hygenic foods to prevent from this disease.");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n**************************************************************************************");
		getch();
	}
	
	if(typhoidefever>=6)
	{
		
		setbkcolor(7);
		printf("\n**************************************************************************************");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		settextxy(GOTHIC_FONT,0,4);
		outtextxy(230,10,"\nPATIENT REPORT CARD");
		printf("\n*NAME::::%s",name);
		printf("                                              AGE=%d                 *",age);
		printf("\nYOU COULD HAVE TYPHOIDE FEVER.");
		printf("\nIt was a cureable disease but dangerous.");
		printf("\nWhen fever got high couries temperature don't ignore it,get a doctor as soon as possible.");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n**************************************************************************************");
		getch();
	}
	if(jaundice>=7)
	{
		
		setbkcolor(14);
		printf("\n**************************************************************************************");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		settextxy(GOTHIC_FONT,0,4);
		outtextxy(230,10,"\nPATIENT REPORT CARD");
		printf("\n*NAME::::%s",name);
		printf("                                                AGE=%d                 *",age);
		printf("\nYOU COULD HAVE JAUNDICE.");
		printf("\nVisit a doctor as soon as possible.");
		printf("\nTaking iron and vitamin 'A' riched foods to prevent from this disease.");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n**************************************************************************************");
		getch();
	}
	if(stomachulcer>=8)
	{
		
		setbkcolor(8);
		printf("\n**************************************************************************************");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		settextxy(GOTHIC_FONT,0,4);
		outtextxy(230,10,"\nPATIENT REPORT CARD");
		printf("\n*NAME::::%s",name);
		printf("                                                 AGE=%d                 *",age);
		printf("\nYOU COULD HAVE STOMACH ULCER.");
		printf("\nGo and visit any gastroenterologyist.");
		printf("\nAvoide junkfoods and take fresh and natural foods and on time regularly.");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n*                                                                                    *");
		printf("\n**************************************************************************************");
		getch();
	}
	return 0;
	getch();
} 
	     
	
	
		

