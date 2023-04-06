/*

这段代码的目的是遍历给定路径下的所有文件和子目录，并将它们的完整路径写入一个新创建的文件中。

首先，它包含了四个头文件：

    <iostream>：C++ 标准输入输出流库。
    <fstream>：C++ 标准文件输入输出流库。
    <dirent.h>：C 语言库，用于操作目录。
    <sys/stat.h>：C 语言库，用于获取文件信息。

然后是一个名为 createFile 的函数，它接受一个字符串类型的参数 path，表示要遍历的目录路径。

在函数内部，它首先使用 ofstream 类型的变量 outfile 打开一个文件，并将其命名为 path + "/the directory file.txt"。这里的 + 操作是 C++ 的字符串连接运算符，它将路径字符串和文件名字符串拼接起来。

接下来，它使用 C 语言的函数 opendir 打开给定路径的目录，并将打开的目录句柄存储在变量 dir 中。如果目录打开成功，它进入一个无限循环。在每次循环中，它使用函数 readdir 读取目录下的下一个文件或目录，并将读取到的信息存储在变量 ent 中。如果读取成功（即还有更多的文件或目录），它会进行一些判断：

    如果读取到的文件或目录的名称是“.”或“..”，就跳过这次循环（这两个文件名是特殊的目录名，分别表示当前目录和上级目录）。
    否则，使用函数 stat 获取该文件或目录的信息，并将信息存储在变量 st 中。
    如果获取信息成功，再使用位运算符 & 和常量 S_IFMT 判断该文件或目录是否为目录。如果是目录，就调用函数本身（递归调用），并传入该目录的完整路径 filepath；如果不是，就继续执行下一步。

最后，将文件或目录的完整路径写入文件中。在循环结束后，关闭目录句柄，并关闭文件。

在 main 函数中，它调用了 createFile 函数，并传入了一个预先定义的路径字符串 "D:/test"。最后返回 0。

*/
#include <iostream>
#include <fstream>
#include <dirent.h>
#include <sys/stat.h>

using namespace std;

void createFile(string path)
{
    // 创建文件
    ofstream outfile;
    outfile.open(path + "/the directory file.txt");
    // 获取该目录下所有文件名
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir(path.c_str())) != NULL)
    {
        while ((ent = readdir(dir)) != NULL)
        {
            // 忽略“.”和“..”
            if (strcmp(ent->d_name, ".") == 0 || strcmp(ent->d_name, "..") == 0)
            {
                continue;
            }

            // 在这里判断是否为目录
            struct stat st;
            string filepath = path + "/" + ent->d_name;
            if (stat(filepath.c_str(), &st) == 0)
            {
                // 判断是否为目录
                if ((st.st_mode & S_IFMT) == S_IFDIR)
                {
                    // 如果是目录，则对其进行递归
                    createFile(filepath);
                    continue;
                }
            }
            /*

            首先，调用了 stat 函数，这是一个系统函数，可以获取文件信息。第一个参数是文件路径，第二个参数是一个结构体指针，用于存储文件信息。该函数返回 0 表示调用成功。

            然后，使用 & 运算符将 stat 结构体中的 st_mode 变量与 S_IFMT 常量进行按位与操作，得到的结果与 S_IFDIR 常量进行比较。如果相等，则表示当前文件是一个目录，否则就是一个普通文件。

            */

            // 将完整路径写入文件
            outfile << filepath << endl;
        }
        closedir(dir);
    }
    else
    {
        printf("未找到该路径!");
    }
    outfile.close();
}

int main()
{
    // string path = "D:/test";

    string path;
    cout << "请给出一个文件路径(格式X:/XXX/):";
    cin >> path;

    createFile(path);
    return 0;
}