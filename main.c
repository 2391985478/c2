#include <stdio.h>
char arr[1024];
int index=0;
int main()
{

    printf("xitong\n");

    while (1)
    {
        printf("1---tianjia\n");
        printf("2---shanchu\n");
        printf("3---chakan\n");
        printf("4---tihuan\n");
        printf("5---tuichu\n");

        printf("gongneng\n");

        int code = 0;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入要添加的敏感字符\n");
            char m;
            scanf("%c", &m); //这一个scanf是把上一次的回车字符从电脑中取出
            scanf("%c", &m); //这一行scanf才是真正的取出用户输入的敏感字符

            arr[index] = m;
            index++;

            printf("添加成功，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("删除最后一个敏感字符\n");

            index--;

            if (index == 0)
            {
                printf("删除失败\n");
            }
            else
            {
                index--;
            }
            printf("删除成功，点击回车继续\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("tuichu\n");
            break;
        }
    }

    return 0;
}