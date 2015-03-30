#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ncurses.h>
int main()
{
	int i,j,x;
	char arr[5];
	scanf("%s",arr);
	//printf("%s",arr);
	for (i=0;i<5;i++)			//Removal of repitition
	{
		for (j=i+1;j<5;j++)
		{
			if ( arr[i]==arr[j] )
			{
				for (x=j+1;arr[x]!='\0';x++)
				{
					arr[x-1]=arr[x];
				}
				arr[x-1]='\0';
			}
		}
	}
	printf("%s",arr);
	i=(26-strlen(arr))%strlen(arr)==0?(26-strlen(arr))/strlen(arr):(26-strlen(arr))/strlen(arr)+1;//finding column and rows
	printf("%d",i);
	int str[6][4];				//new 2d array
	int ascval[4];				//arr to store asci val
	char fori;				//shortcut single-d array
	int Z=97;
	for (j=0;arr[j]!='\0';j++)
	{
		ascval[j]=(int) arr[j];
		printf("\n%d\t\n",ascval[j]);
	}
	for(j=0;j<7;j++)
	{
		for (x=0;x<4;x++)
		{
			if (j==0)	
			{ str[j][x]=arr[x];}
			else
			{
				 if (Z==123)			//ending of the 2d array
                                {
                                        str[j][x]=NULL;
				}
				else if (Z!=ascval[0] && Z!=ascval[1] && Z!=ascval[2] && Z!=ascval[3] )
				{	
					str[j][x]=(char) Z;
					Z++;
				}
				else  
				{
					Z++;
					str[j][x]=(char) Z;
					Z++;
				}
			}
			fori=str[j][x];	
			printf("%c\t",fori);						
		}  
		printf("\n");
	}
	printf("\n");
	char key[26];
	key[0]=NULL;
	int min=(int) str[0][0];
	int pos;
	for ( j=0;j<4;j++)
	{
		for ( x=0; x<4;x++)
		{
			if (min>=(int) str[0][x])
			{
				min=(int) str[0][x];
				pos=x;
				printf("%d\t%d\t%c\n",min,pos,str[0][x]);
			}
		}
		for (Z=0;Z<7;Z++)
		{	arr[0]=str[Z][pos];
			strcat(key,arr);
			printf("%s\n",key);
		}

		min=125;
		str[0][pos]=255;
		pos=0;
	}

	printf("%s",key);
			 
				
	getchar();
	return 0;
}

