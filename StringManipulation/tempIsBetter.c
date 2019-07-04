int main()

{

	char a[]="s";
	char b[]="g";
	char temp;
        printf("%c %c",a[0],b[0]);
	a[0]=temp;
	a[0]=b[0];
	b[0]=temp;
        printf("%c %c",a[0],b[0]);
}
		
