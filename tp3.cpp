#include<iostream>
#include<string>

using namespace std;
//need to use ordre lexicographique
//pas encore fini

int main(int,char **){
    string c1;
    string c2;    

    cout<<"Please input the first sentense:"<<endl;
    cin>>c1;
    cout<<"length of the first sentense is"<<c1.length()<<endl;

    cout<<"please input the second sentense:"<<endl;
    cin>>c2;
    cout<<"length of the second sentense is"<<c2.length()<<endl;

    if(c1.compare(c2)<0){
        cout<<c2<<"is the small one"<<endl;
    } else if(c1.compare(c2)>0){
        cout<<c1<<"is the small one"<<endl;
    } else {
        cout<<"two phrase is the same"<<endl;
    }
   
   
    

    return 0;
}