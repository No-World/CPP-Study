/*
 * @Author: No_World 2259881867@qq.com
 * @Date: 2024-11-19 11:34:04
 * @LastEditors: No_World 2259881867@qq.com
 * @LastEditTime: 2024-11-19 11:40:35
 * @FilePath: \C++ Study\duixiang.h
 * @Description: 
 */
class girl
{
private:
    int age;
    char name[20];
    float height;
    float weight;
    char hobby[20];
    char boyfriends[20];
    int bust;
    int waistline;
    int hipline;
public:
    void setage(int a);
    void setname(char *n);
    void setheight(float h);
    void setweight(float w);
    void sethobby(char *h);
    void setboyfriends(char *b);
    void setbust(int b);
    void setwaistline(int w);
    void sethipline(int h);
    int getage();
    char *getname();
    float getheight();
    float getweight();
    char *gethobby();
    char *getboyfriends();
    int getbust();
    int getwaistline();
    int gethipline();
    void show();
};