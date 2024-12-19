#include<stdio.h>
using namespace std;

class myTime{
	public:
		int hour;
		int minute;
		void printTime();
};

void myTime::printTime(){
   count<<hour<<":"<<minute<<"/n";
}
int mail(){
    myTime now, open;
    now.hour = 8;
    now.minute = 18;
    count<<"現在時間:";
    now.printTime();
    open.minute = 10
    cout<<"開張時間:";
    open.printTime();
}
	
}
