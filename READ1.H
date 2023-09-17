void read1()
{
	FILE *p;
	char fname[100], ch;
	puts("Enter name of file\n");
	gets(fname);
	p = fopen(fname, "r");
	if (p == NULL)
	{
		puts("\nCannot open file");
	       //	exit(1);
	}
	else
	{
		puts("Reading entries\n\n");
		// puts("\npress * to stop");
		while (1)
		{
			ch = fgetc(p);
			if (ch == EOF)
			{
				break;
			}
			else
			{
				printf("%c", ch);
			}
		}
		fclose(p);
	}
	 getch();
}