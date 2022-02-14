#include <iostream>
using namespace std;

int main(){
    //...
    int n,m,x;
    int o=0;
    int data[x];
    //...
    cout
    << "=== [ Sequential Searching ] ===\n"
    << ". . .\n"
    << "Input total data : ";cin>>n;
        //...
        system("cls");
        cout << "( INPUT DATA )\n";
        for(x=0;x<n;x++){
            cout << "masukkan data : ";
            cin >> data[x];
        }
        //...
        system("cls");
        cout
        << "( Searching )\n"
        << "...\n"
        << "mesin pencarian : ";
        cin >> m;
            //...
            system("cls");
            cout
            << "( Hasil )\n"
            << "...\n";
            for(x=0;x<n;x++){
                if(data[x]==m){
                    cout
                    << "Data "<<m<<", ditemukan!\nIndex : " <<x+1;
                    o++;
                    cout << "\n";
                }
            }
            cout <<"...\n";
            if(o==0){
                system("cls");
                cout << "Data "<<m<<", tidak ditemukan!\n";
            }
            else{
                cout << "Total data : " <<o <<endl;
            }
            system("pause");
}