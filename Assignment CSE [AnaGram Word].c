#include<stdio.h>
#include<string.h>
main()
{
	char w1[80],w2[80],ch;
	int i,wl1,wl2,pos,counter[26],u;
	printf("Enter 1st Word:");
	gets(w1);
	printf("\nEnter 2nd Word:");
	gets(w2);

	wl1=strlen(w1);
	wl2=strlen(w2);

	for(i=0;i<26;i++)
	{
	     counter[i]=0;
	}

	for(i=0;i<wl1;i++)
	{
		 ch=tolower(w1[i]);
		 pos=ch-97;
		 ++counter[pos];
	}

	for(i=0;i<wl2;i++)
	{
		 ch=tolower(w2[i]);
		 pos=ch-97;
	     --counter[pos];
	}

	u=0;
	for(i=0;i<26;i++)
	{
	     if(counter[i]==0)
			u=u+1;
	}

	if(u==26) printf("\nAnagram\n");
	else printf("\nNo\n");
}
