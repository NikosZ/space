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
	porintf("Shutting down,runned time %d",seconds);
}
