#include <iostream>
#include <string>
using namespace std;

class foo
{
public:
	foo();
	string get() const;
	void formal();
private:
	string str;
};
foo::foo()
{
	str = "";
}
string foo::get()const
{
	return str;
}
void foo::formal()
{
	str[0]=toupper(str[0]);
	for( int i = 1; i < str.length(); i_++)
	{
		str[i] = tolower(str[i]);
	}
}
int main()
{
	foo ex1;
	foo ex2("Hello World");
	cout << get1.get() << endl;
	
}