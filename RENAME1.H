
void rename1()
{

char oldname[200],newname[200];
printf("Enter The File to Rename : ");
gets(oldname);
printf("New Name : ");
gets(newname);
if(rename(oldname,newname)==0)
printf("Renamed %s to %s .\n",oldname,newname);
else
perror("Rename Error\n");
getch();
}