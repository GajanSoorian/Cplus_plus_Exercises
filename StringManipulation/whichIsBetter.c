int main()

{

	char a[]="s";
	char b[]="g";
	printf("%c %c",a[0],b[0]);
	a[0]=a[0]^b[0];
	b[0]=a[0]^b[0];
	a[0]=a[0]^b[0];
	printf("%c %c",a[0],b[0]);
}
		
