/*����ֻ��һ��,���а�������������month,day,��ʾ�����е��¡��ա�
���һ��,��������¶�Ӧ��Ӣ�ĵ���,�����һ���ո����ڷָ�,�������ն�Ӧ��Ӣ����д��
1��12�¶�Ӧ��Ӣ�ĵ��ʷֱ�Ϊ
January,February,March,April,May,June,July,August, September,October,November,December��
����յ�ʮλ��Ϊ1��ͬʱ��λΪ1,2,3,�����յ�����֮�����st,nd,rd,�������th,���ɵõ��ն�Ӧ����д��*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string suffix(int day)
{
	if (day/10!=1){
		switch(day%10) {
			case 1:
			return "st";
			break;
			case 2:
			return "nd";
			break;
			case 3:
			return "rd";
			break;
			default:
			return "th";}}
	else return "th";
}
int main()
{
	int month,day;
	cin>>month>>day;
	vector <string> monthEng={"January","February","March","April","May","June",
	"July","August","September","October","November","December"};
	cout<<monthEng[month-1]<<" "<<day<<suffix(day)<<endl;
	return 0;
}
