#include <iostream>
using namespace std;
int main ()
{
    int v,s,t;
    cout<< "++++ Menghitung Jarak Tempuh ++++\n";
    cout<< "Input Keceepatan :";
    cin>>v;
    cout<< "Input Waktu Tempuh :";
    cin>>t;
    s=v*t;
    cout<< "Jarak Tempuh Adalah :"<<s;
    char LG;
    cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y/T ] ?";cin>>LG;
if (LG=='Y' || LG=='y')main();
else if (LG=='T' || LG=='t') goto x;
x:
    return 0;
}
