#include<bits/stdc++.h>
using namespace std;
ofstream outfile;
ifstream infile;
int main(int argc,char *argv[])
{
    string s;
    infile.open("./db.txt",ios::in);
    int i=1;
    while(!infile.eof())
    {
        infile>>s;
        if(!infile.eof())
        {
            cout<<setw(4)<< i<<":  ";
            ++i;
            cout<<s<<endl;
        }


    }
    infile.close();
    return 0;
}
