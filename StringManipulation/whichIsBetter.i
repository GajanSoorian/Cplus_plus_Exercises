# 1 "whichIsBetter.c"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "whichIsBetter.c"
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
