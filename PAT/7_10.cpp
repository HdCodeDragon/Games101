/*
某公司员工的工资计算方法如下：一周内工作时间不超过40小时，按正常工作时间计酬；
超出40小时的工作时间部分，按正常工作时间报酬的1.5倍计酬。
员工按进公司时间分为新职工和老职工，进公司不少于5年的员工为老职工，5年以下的为新职工。
新职工的正常工资为30元/小时，老职工的正常工资为50元/小时。请按该计酬方式计算员工的工资。

输入格式：
输入在一行中给出2个正整数，分别为某员工入职年数和周工作时间，其间以空格分隔。

输出格式：
在一行输出该员工的周薪，精确到小数点后2位。

输入样例1：
5 40
输出样例1：
2000.00
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned years, sword;
    cin >> years >> sword;
    double wage;
    if (sword > 40)
    {

        if (years > 5)
        {
            wage = 50 * 40 + 50 * (sword - 40) * 1.5;
        }
        else
        {
            wage = 30 * 40 + 30 * (sword - 40) * 1.5;
        }
    }
    else
    {
        if (years >= 5)
        {
            wage = 50 * sword;
        }
        else
        {
            wage = 30 * sword;
        }
    }
    cout.setf(ios::fixed);

    cout << setprecision(2) << wage;
    return 0;
}