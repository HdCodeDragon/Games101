/*
输入一个整数（位数不超过9位）代表一个人民币值（单位为元），请转换成财务要求的大写中文格式。如23108元，
转换后变成“贰万叁仟壹百零捌”元。为了简化输出，用小写英文字母a-j顺序代表大写数字0-9，
用S、B、Q、W、Y分别代表拾、百、仟、万、亿。于是23108元应被转换输出为“cWdQbBai”元。

输入格式：
输入在一行中给出一个不超过9位的非负整数。

输出格式：
在一行中输出转换后的结果。注意“零”的用法必须符合中文习惯。

输入样例1：
813227345
输出样例1：
iYbQdBcScWhQdBeSf
输入样例2：
6900
输出样例2：
gQjB
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> vec1 = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    vector<char> vec2 = {'S', 'B', 'Q', 'W', 'Y'};
    unsigned int money;
    cin >> money;
    return 0;
}