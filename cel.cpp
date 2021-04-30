#include<bits/stdc++.h>
using namespace std;
ofstream outfile;
ifstream infile;
vector<string> v;
void ex()
{
    infile.close();
    exit(0);
}
int del(int sL,int eL)
{

    infile.open("./db.txt",ios::in);
    string s;
    int i=1;
    v.reserve(100);
    ostringstream newStr;
    while(!infile.eof())
    {
        infile>>s;
        if(!infile.eof())
        {
            // cout<<setw(4)<< i<<":  ";
            if(i<sL || i>eL)newStr<<s<<endl;
            ++i;

        }
    }
    infile.close();
    outfile.open("./db.txt",ios::trunc);
    outfile<<newStr.str();
   if(sL==eL) cout<<"Cel "<<sL<<" line";
   else cout<<"Cel "<<sL<<"-"<<eL<<" line";

}
int main(int argc,char *argv[])
{
    string s;
    if(argc == 2)
    {
        ostringstream os;
        os<<argv[1];
        if(os.str()=="all")
        {
            outfile.open("./db.txt",ios::trunc);
            outfile<<"";
            cout<<"clear";
        }
        s=os.str();
        int sL,eL;
        for(int k = 0; k<s.size(); ++k)
        {
            if(s[k]=='-')
            {
               // cout<<"have -"<<endl;
                sL =  stoi( s.substr(0,k) );
                eL =  stoi( s.substr(k+1,s.size()) );
               // cout<<sL<<" "<<eL;
                del(sL,eL);
                return 0;
            }
        }

        if(atoi(argv[1]))
        {
            int delLine = atoi(argv[1]);
            del(delLine,delLine);


        }

    }








}
