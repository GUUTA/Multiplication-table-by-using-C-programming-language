#include<iostream>
#include<iomanip>
using namespace std;
/**
* Abbaan kodii kan Guutaa Tasammaa ti.
 * kodii kan enyuu ille faayadamuu ni danda'uu, garu gitihuub kan lakii gochuu hin dagatina
*/
int main(){

cout<<"Multiplication Table \n";
cout<<"--------------------------------------------------------------------------- \n";
for (int i=1; i<=10; i++){
cout<<"|";
for(int j=1; j<=12; j++){

int product=i*j;
cout<<setw(6)<<product;


}
cout<<setw(4)<<"|"<<endl;

}
cout<<"----------------------------------------------------------------------------";

return 0;
}
