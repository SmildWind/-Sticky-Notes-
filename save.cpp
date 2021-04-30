#include<bits/stdc++.h>
using namespace std;
ofstream outfile;
ifstream infile;
int main(int argc,char *argv[])
{




    outfile.open("./db.txt",ios::app);

    for (int i = 1; i < argc; i++)outfile<<argv[i]<<endl;
    if(argc>1)
    {
        cout<<"√"<<endl;
        cout<<"添加了"<<argc-1<<"行";
    }
    else
    {
        cout<<"什么都没做";

    }

    outfile.close();

    return 0;
}
