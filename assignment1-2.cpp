#include<iostream>
#include<string>
using namespace std;
enum Y{Y2010,Y2011,Y2012,Y2013,Y2014,Y2015};
enum M{JAN=1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};
class timedate
{
private:
	int year;
	int month;
	int date;
	int hour;
	int minute;
	int second;
public:
	timedate() {
		year = Y2010; month =1; date = 1; hour = 0; minute = 0; second = 0;
	}
	timedate(int, int, int, int, int, int);
	void set();
	void show();
	timedate(int a, int b, int c, int d, int e, int f, int g);
};
	timedate::timedate(int a, int b, int c, int d, int e, int f, int g) :year(a), month(b), date(c), hour(d), minute(e), second(f) {}
	timedate::timedate(int,int, int, int, int, int)
	{
	}
	void timedate::set()
	{
		cout << "year(2010-2015):";
		cin >> year;
		cout << "month(1-12):";
		cin >> month;
		cout << "date:";
		cin >> date;
		cout << "hour:";
		cin >> hour; 
		cout << "minute:";
		cin >> minute;
		cout << "second:";
		cin >> second;
	}
	void timedate::show()
	{
		cout << "year/month/date:";
		switch (year)
		{
		case Y2010:cout << "2010"; break;
		case Y2011:cout << "2011"; break;
		case Y2012:cout << "2012"; break;
		case Y2013:cout << "2013"; break;
		case Y2014:cout << "2014"; break;
		case Y2015:cout << "2015"; break;
		default:break;
		}
		switch (month)
		{
		case JAN:cout << "JAN"; break;
		case FEB:cout << "FEB"; break;
		case MAR:cout << "MAR"; break;
		case APR:cout << "APR"; break;
		case MAY:cout << "MAY"; break;
		case JUN:cout << "JUN"; break;
		case JUL:cout << "JUL"; break;
		case AUG:cout << "AUG"; break;
		case SEP:cout << "SEP"; break;
		case OCT:cout << "OCT"; break;
		case NOV:cout << "NOV"; break;
		case DEC:cout << "DEC"; break;
		default:break;
		}
		cout << "hour/minute/second:" << hour <<':'<< minute <<':'<< second<<endl;
	}
	int main()
	{
		timedate a;
		a.set();
		a.show();
		return 0;
	}