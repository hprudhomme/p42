char* read_line(int fd)
{
	int i=0;
	char *line;
	char courant;

	line=malloc(sizeof(char*));
	read(fd,&courant,15);

	printf("%c\n",courant);
	line[i]='\0';
	return line;
}

int main()
{
	int f=open("numbers.dict", 0644);
	printf("%s",read_line(f));
	return 0;
}
