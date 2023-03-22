#include<iostream>
using namespace std;
class company{
    int c_id;
    string c_name;
    int quantity;
    public:
    company(){

    }
    company(int id,string name,int qty){
        this->c_id = id;
        this->c_name = name;
        this->quantity = qty;
    }
    void display();
};
void company :: display(){
    cout<<"Company id"<<c_id<<endl;
    cout<<"Company name"<<c_name<<endl;
    cout<<"Company quantity "<<quantity<<endl;
}
int main(){
    int i,n,id,qty;
    string name;
    cout<<"Enter no of company";
    cin>>n;
    // company c1[n];
    company* c1  = (company*)malloc(sizeof(company) * n);
    
    for(i=0;i<n;i++){
        cout<<"Enter id";
        cin>>id;
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter qty";
        cin>>qty;
        c1[i] = company(id,name,qty);
        c1[i].display();

    }
    
return 0;
}
