#include <iostream>

using namespace std;

class tade{
private :
	static int id;
public:
void id_inc();
tade();
void print_id()
{
	cout<<id<<endl;
}
};

 void tade::id_inc()
{
	id++;
}
tade::tade()
{ id_inc();}
int tade::id=0;
int main()
{
	for(int i=0;i<100;i++)
	{class tade a; a.print_id();}
	return 0;
}
	
