void append2()
{
	FILE *p, *q,*r;
	char fname[100], fnamee[100], str[60];
	puts("enter file nane of for appending\n");
	gets(fname);
	p = fopen(fname, "r");
	if (p == NULL)
	{
		puts("cannot open file for appending\n");
		getch();
		;
	}
	else
	{
		puts("\n\aenter filename to be appended\n");
		gets(fnamee);
		q = fopen(fnamee, "r");
		if (q == NULL)
		{
			puts("cannot open file to be copied\n");
			getch();
			
		}
		else
		{
			while ((fgets(str, sizeof(str), q))  != NULL)
			{
				fputs(str, p);
			}
		}
	}
	puts("FILE APPENDED");
	fclose(p);
	fclose(q);
	getch();
}