#include<dir.h>
void show1()
{

	int done, i=1;
	struct ffblk a;
	clrscr();
	printf("Press any key to list and view all the files in the current directory : \n");
	getch();
	done=findfirst("*.*", &a, 0);
	while(!done)
	{
		printf("%d=%s \n ", i, a.ff_name);
		done=findnext(&a);
		i++;
		if(i%400==0)
		getch();
	}
	getch();
}