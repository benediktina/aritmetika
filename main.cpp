#include <iostream>
using namespace std;

int sudetis(int x, int y){
return x+y;
}
int atimtis(int x, int y){
return x-y;
}
int daugyba(int x, int y){
return x*y;
}
int dalyba(int x, int y){
return x/y;
}

int main (int argc, char const *argv[])
{
    int x=10, y=5;

	    cout << "Sveika aritmetika!"<<endl;
	    cout<<"x+y="<<sudetis(x,y)<<endl;
        cout<<"x-y="<<atimtis(x,y)<<endl;
        cout<<"x*y="<<daugyba(x,y)<<endl;
        cout<<"x/y="<<dalyba(x,y)<<endl;
        system ("PAUSE");
	return 0;

}
