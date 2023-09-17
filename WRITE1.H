void write1()
{

	FILE *p;
	char fname[100], ch;
	puts("Enter name of file\n");
	gets(fname);
	p = fopen(fname, "w");
	if (p == NULL)
	{
		puts("\nCannot open file");
	       //	exit(1);
	}
	else
	{
		puts("WRITE entries\n\n");
		puts("\npress * to stop");
		ch=getch();
		while (ch!='*')
		{
			ch = fputc(ch,p);
			/*if (ch == EOF)
			{
				break;
			}
			else
			{
				printf("%c", ch);
			}*/
			printf("%c",ch);
			ch=getch();
		}
		fclose(p);
	}
	 getch();

}