#include <bits/stdc++.h>
using namespace std;
 
//  Method to compare two versions. Returns 1 if v2 is
// smaller, -1 if v1 is smaller, 0 if equal
int versionCompare(string v1, string v2)
{
    //  vnum stores each numeric part of version
    int vnum1 = 0, vnum2 = 0;
    cout<<"v1= "<<v1<<" v2 = "<<v2 <<endl; 
    //  loop untill both string are processed
    for (int i=0,j=0; (i<=v1.length() || j<=v2.length()); )
    {
	cout<<"v1.length = "<<v1.length()<< " v2.lenthg = " <<v2.length()<<endl;
        //  storing numeric part of version 1 in vnum1
        while (i < v1.length() && v1[i] != '.')
        {
            vnum1 = vnum1 * 10 + (v1[i] - '0');
            i++;
        }
 
        //  storing numeric part of version 2 in vnum2
        while (j < v2.length() && v2[j] != '.')
        {
            vnum2 = vnum2 * 10 + (v2[j] - '0');
            j++;
        }
 
        if (vnum1 > vnum2)
            return 1;
        if (vnum2 > vnum1)
            return -1;
 
        //  if equal, reset variables and go for next numeric
        // part
        vnum1 = vnum2 = 0;
        i++;
        j++;
	cout << "i = " <<i<< " j= "<<j<<endl;
    }
    return 0;
}
 
//  Driver method to check above comparison function
int main()
{
    string version1 = "12.103.3.4";
    string version2 = "12.103.3.1";
 
    if (versionCompare(version1, version2) < 0)
        cout << version1 << " is smaller\n";
    else if (versionCompare(version1, version2) > 0)
        cout << version2 << " is smaller\n";
    else
        cout << "Both version are equal\n";
    return 0;
}
