#include <iostream>
using namespace std;

int sudetis(int x, int y){
return x+y
}
int atimtis(int x, int y){
return x-y
}
int daugyba(int x, int y){
return x*y
}

int main (int argc, char const *argv[])
{
    int x=10, y=5;

	cout << "Sveika aritmetika!";
	cout<<"x+y="<<sudetis(x,y);
        cout<<"x-y="<<atimtis(x,y);
        cout<<"x*y="<<daugyba(x,y);
	return 0;

}
