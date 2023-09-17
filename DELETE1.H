void delete1()
{

char file[200];
printf("enter the name of the file to deleted  : ");
gets(file);
if(remove(file)==0)
printf("Removed File : %s \n",file);
else
perror("File not present. Error Occured.\n");
getch();
}