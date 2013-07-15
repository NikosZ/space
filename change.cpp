#include <iostream>
#include <stringstream>
#include <windows.h>

class core{
	private:
		static int seconds;
	public:
		void run():
		void stop();
		core();
		~core();
};
core::core()
{
	printf("Core started"\n);
	seconds=0;
}
core::~core()
{
	printf("Shutting down,runned time %d",seconds);
}
core::run()
{}
core::stop()
{} //SAVE DATA
void main()
{
	class core thread= new core();
	
}
