#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();            // 忽略换行符
    int cnt_chat = 0;        // 计数正常聊天信息的条数
    int cnt_competition = 0; // 计数比赛信息的条数
    while (n--)
    {
        string s;
        getline(cin, s);                    // 读取一整行
        size_t pos = s.find(":");           // 找到冒号的位置
        string id = s.substr(0, pos);       // 提取QQ号
        string content = s.substr(pos + 1); // 提取聊天信息
        if (id == "234186389")
        {
            if (content.find("competition") != string::npos)
            {
                cnt_competition++;
            }
            else
            {
                cnt_chat++;
            }
        }
    }
    cout << cnt_competition - cnt_chat << endl;
    return 0;
}
