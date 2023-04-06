#include <iostream>
#include <cstring>
using namespace std;
char c[300];
int len;
int fun(int pos)
{
    int i;
    i = pos + 1; //从当前位置的下一个位置开始判断
    while (1)
    {
        while (c[i] != '(' && c[i] != ')' && c[i] != '\0') //如果当前位置不是括号或结束符号
        {
            i++;
        }
        if (c[i] == '(') //从内而外的判断
        {
            i = fun(i); //进入下一层递归
        }
        else
        {
            if (c[i] == ')') //与左边的左括号配对成功，则退出当前层次的递归
            {
                c[pos] = ' '; //配对成功的左括号就将该左括号位置赋值为空格
                c[i] = ' ';   //配对成功的右括号就将当前位置赋值为空格
                return i + 1; //退出一层递归，从下一个位置继续找上一层左括号对应的右括号
            }
            else //到行末时左括号也没有配对成功
            {
                c[pos] = '$'; //左括号标记未配对成功
                return len;   //退出判断,并返回字符串长度，以便下方退出while循环
            }
        }
    }
}

int main()
{
    while (cin.getline(c, 101)) //整行输入
    {
        cout << c << endl; //先将原字符串输出
        len = strlen(c);
        //重新对c赋值来存储原字符串下面一行的输出情况
        int i;
        for (i = 0; i < len; i++) //将非括号的位置改为空格
        {
            if (c[i] != '(' && c[i] != ')')
            {
                c[i] = ' ';
            }
        }
        i = 0;
        while (c[i] != '\0')
        {
            while (c[i] != '(' && c[i] != '\0')
            {
                i++;
            }
            if (c[i] == '(') //如果为左括号，进入递归去寻找是否有与其对应的右括号
            {
                i = fun(i);
            }
        }
        i = 0;
        while (c[i] != '\0')
        {
            if (c[i] == ')') //如果还有剩下没有被配对的右括号则标记为"?"
            {
                c[i] = '?';
            }
            i++;
        }
        cout << c << endl; //将经历过重新赋值的字符数组再输出
    }
    return 0;
}