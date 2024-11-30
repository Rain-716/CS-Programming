/*输入只有一行,其中包含两个正整数month,day,表示日期中的月、日。
输出一行,首先输出月对应的英文单词,再输出一个空格用于分隔,最后输出日对应的英文缩写。
1至12月对应的英文单词分别为
January,February,March,April,May,June,July,August, September,October,November,December。
如果日的十位不为1的同时个位为1,2,3,则在日的数字之后加上st,nd,rd,否则加上th,即可得到日对应的缩写。*/
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
