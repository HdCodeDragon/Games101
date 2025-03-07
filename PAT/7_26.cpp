/*
你的程序要读入一行文本，其中以空格分隔为若干个单词，以.结束。你要输出每个单词的长度。这里的单词与语言无关，
可以包括各种符号，比如it's算一个单词，长度为4。注意，行中可能出现连续的空格；最后的.不计算在内。

输入格式：
输入在一行中给出一行文本，以.结束

提示：用scanf("%c",...);来读入一个字符，直到读到.为止。

输出格式：
在一行中输出这行文本对应的单词的长度，每个长度之间以空格隔开，行末没有最后的空格。

输入样例：
It's great to see you here.
输出样例：
4 5 2 3 3 4
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int len = 0;
    int space_len = 0;
    for (auto &i : str)
    {
        if (!isspace(i))
        {
            if (space_len != 0)
            {
                cout << len << " ";
                len = 0;
                space_len = 0;
            }

            if (i == '.')
            {
                cout << len;
                break;
            }
            len++;
        }
        else
        {
            space_len++;
        }
    }

    return 0;
}