char *s_gets(char *st,int n)
{
	char *ret_val;
	char *find;
	ret_val=fgets(st,n,stdin);
	if(ret_val)
	{
		find=strchr(st,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue;
	}
	return ret_val;
}
void append(FILE *source,FILE *dest)
{
	size_t bytes;
	static char temp[BUFSIZE];
	while((bytes=fread(temp,sizeof(char),BUFSIZE,source))>0)
		fwrite(temp,sizeof(char),bytes,dest);
}
int main(void)
{
	FILE *fa,*fs;//fa指向目标文件，fs指向源文件
	int files=0;
	char file_app[SLEN];//目标文件名
	char file_src[SLEN];//源文件名
	int ch;
	s_gets(file_app,SLEN);
	if((fa=fopen(file_app,"a+"))==NULL)
	{
		











