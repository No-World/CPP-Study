#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// 模板替换函数，返回替换后的字符串
string replace(string &s, unordered_map<string, string> &vars)
{
    int n = s.size();
    string res;
    for (int i = 0; i < n;)
    {
        if (i + 1 < n && s[i] == '{' && s[i + 1] == '{')
        { // 遇到了 {{
            int j = i + 2;
            while (j < n && s[j] != '}')
                j++; // 寻找变量名
            if (j == n || s[j + 1] != '}')
            { // 如果找不到 }}，则跳过 {{
                res += s.substr(i, 2);
                i += 2;
                continue;
            }
            string var = s.substr(i + 2, j - i - 2);
            if (vars.count(var))
            { // 找到了变量，进行替换
                res += vars[var];
            }
            else
            { // 找不到变量，忽略
                res += "";
            }
            i = j + 2;
        }
        else
        { // 普通字符，直接加到结果中
            res += s[i];
            i++;
        }
    }
    return res;
}

int main()
{
    int m, n;
    cin >> m >> n;
    cin.ignore(); // 忽略掉换行符

    // 读入模板
    string tpl;
    for (int i = 0; i < m; i++)
    {
        string line;
        getline(cin, line);
        tpl += line + '\n';
    }

    // 读入变量并存储
    unordered_map<string, string> vars;
    for (int i = 0; i < n; i++)
    {
        string name, value;
        cin >> name >> value;
        vars[name] = value.substr(1, value.size() - 2); // 去掉双引号
    }

    // 对每一行进行替换并输出
    string line;
    while (getline(cin, line))
    {
        cout << replace(line, vars) << endl;
    }

    return 0;
}
