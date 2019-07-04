#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// char v1=12.43.234 v2=12.44
//	v1[8]={'1','2','.','4','3',.,'2',.}
// store number for each version., compare. return largest.
// needs seperate incrementors.
// . is for next step in comparionskip
int versionCompare(char v1[], char v2[])
{
    //  vnum stores each numeric part of version
    int vnum1 = 0, vnum2 = 0;
    printf("v1 = %s strlenv1 =%lu ; v2 =%s strlen v2 = %lu\n",v1,strlen(v1),v2,strlen(v2)); 
    //  loop untill both string are processed
    for (int i=0,j=0; (i<=strlen(v1) || j<=strlen(v2));)
    {
        //  storing numeric part of version 1 in vnum1
        while (i < strlen(v1) && v1[i] != '.')
        {
            vnum1 = vnum1 * 10 + (v1[i] - '0'); //*10 for every time we loops, the since its is ones, tens, hundres etc. 
	    printf("vnum1 =%d\n",vnum1);
            i++;
        }
	
        //  storing numeric part of version 2 in vnum2
        while (j < strlen(v2) && v2[j] != '.')
        {
            vnum2 = vnum2 * 10 + (v2[j] - '0');
	    printf("vnum2 =%d\n",vnum2);
            j++;
        }
	printf("While loops over \n"); 
        if (vnum1 > vnum2)
            return 1;
        if (vnum2 > vnum1)
            return -1;
 
        //  if equal, reset variables and go for next numeric
        // part
        vnum1 = vnum2 = 0;
        i++;
        j++;
	printf("!!i = %d  j=%d \n",i,j);
    }
    return 0;
}

int main()
{
    char version1[] = "12.103.3.4";
    char version2[] = "12.103.3.1";
 
    if (versionCompare(version1, version2) < 0)
        printf("%s is smaller", version1);
    else if (versionCompare(version1, version2) > 0)
        printf("%s is smaller", version2);
    else
        printf("Both version are equal\n");
    return 0;
}
