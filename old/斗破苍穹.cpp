#include <stdio.h>
#include <ctime>
#include <time.h>    //suiji
#include <windows.h> //SLEEP����
struct Player        // ��ҽṹ�壬����ʼ��player
{
    char name[21];
    int attack;
    int defense;
    int health;
    long int max_health;
    int level;
    int exp;
    int range_exp;
    long int max_exp;
} player = {"����", 50, 40, 100, 100, 1, 0, 0, 100};
struct Enemy // �ֵĽṹ��,����ʼ�����ֹ�
{
    char name[20];
    char wupin[12];
    int attack;
    int defense;
    int health;
    int money;
    long int exp;
    int wupin_sign;
    int wupinpro;
    int double_attack;
    int miss;
} strongman = {"ɭ�־���", "�ƽ�ʥ��", 40, 50, 350, 200, 100, 1, 2, 1, 0},
  witch = {"ɭ��Ů��", "����", 25, 15, 100, 50, 50, 2, 2, 1, 1},
  xiyi = {"ɭ������", "����", 18, 10, 50, 30, 35, 3, 3, 2, 2},
  big_strongman = {"ɭ�־�����", "���˾�ʯ", 40 * 5, 50 * 5, 200 * 5, 200 * 5, 100 * 5, 4, 4, 2, 0},
  lion = {"��ԭ��ʨ", "�����ý�", 60, 30, 280, 200, 100, 5, 2, 1, 0},
  horse = {"��ԭҰ��", "��Ѫ��", 28, 12, 90, 50, 50, 6, 2, 1, 1},
  bee = {"��ԭ�Ʒ�", "����", 17, 11, 60, 30, 35, 7, 3, 2, 2},
  shitu = {"ʹͽ", "\0", 60 * 8, 30 * 8, 280 * 8, 200 * 8, 100 * 8, 9, 1, 1, 0},
  guai = {"\0", "\0", 0, 0, 0, 0, 0, 0, 0, 0, 0};
struct Place
{
    int bar, hotel, forest1, forest2, forest3, grass1, grass2, grass3;
} place = {1, 2, 3, 4, 5, 6, 7, 8};

int max_exp = 0;
int choose_number = 0, s = 0, strongman_arm = 0, battle = 0, money = 500, place_sign = 9;
int cao = 3, jijiubao = 2, baiyao = 2, superbaiyao = 1, boom = 3, dubiao = 2, atom_boom = 1;
int fang = 0, fang1 = 10, fang1n = 0, fang2 = 20, fang2n = 0, fang3 = 40, fang3n = 0, fang4 = 100, fang4n = 0;
int gong = 0, gong1 = 8, gong1n = 0, gong2 = 15, gong2n = 0, gong3 = 25, gong3n = 0, gong4 = 60, gong4n = 0;
int jingyancao = 0, jingyanbao = 0, jingyanshi = 0;
char gongname[20] = "��", fangname[20] = "��";
char proof;

void AddWupin(int);
int AttackResult();
void BattleAct();
void ChooseWupin();
void DisplayState();
void OrdinaryAct();
int SuiJi();
int SuiJi100();
void WhetherLevelUp();
void SlowDisplay(char *);

int main()
{

    int i = 0, j = 0, k = 0;
    char player_name[21];
    Sleep(1000);
    printf("--------------------------��ӭ���� [�������] 2.2 ���԰�-----------------------\n\n\n");
    // �����ʹ����ң����������룺��ʥս��ʿ ����
    Sleep(1000);
    printf("�����ǲ������! ������˹�������繫����İ���˰����!\n\n\n ΰ������߰�~�������ǵ�����,Ӫ�ȹ���!\n\n\n�����������: (20���ַ�)\n\n\n");
    scanf("%s", player_name);
    strncpy(player.name, player_name, 20);
    if (strcmp(player.name, "ʥս��ʿ") == 0)
    {
        printf("\n\n\n��ӡ�����ʥ��Ѫͳ��!�����ھ�����!\n\n\nʥս��ʿ�����Ϊ����ѡ֮�ˣ�����ȳ������ɣ�\n\n\n");
        player.attack = 999;
        player.defense = 999;
        player.health = 9999;
        player.max_health = 9999;
    }
    getchar();

    OrdinaryAct();
    return 0;
}

int SuiJi()
{
    srand((unsigned)time(NULL));
    return rand() % 10;
}

int SuiJi100()
{
    srand((unsigned)time(NULL));
    return rand() % 100;
}

void ChooseWupin() // ѡ����Ʒ ��ʹ��
{
    printf("��Ʒ: 1,ֹѪ��%d�� 2,���Ȱ�%d�� 3,���ϰ�ҩ%d�� 4,�������ϰ�ҩ%d�� 5,����%d�� 6,����%d�� 7,����ʽԭ�ӵ�%d�� 8,�����%d�� 9,�����%d�� 10,����ʯ%d�� 11,���˾�ʯ%d�� 0,����\n\n\n", cao, jijiubao, baiyao, superbaiyao, boom, dubiao, atom_boom, jingyancao, jingyanbao, jingyanshi, strongman_arm);
    switch (scanf("%d", &choose_number), choose_number)
    {
    case 1:
        if (cao > 0)
        {
            printf("ʹ��ֹѪ��,HP����60\n\n\n");
            cao--;
            if (player.health + 60 > player.max_health)
                player.health = player.max_health;
            else
                player.health += 60;
        }
        else
            printf("û��ֹѪ����\n\n\n");
        break;
    case 2:
        if (jijiubao > 0)
        {
            printf("ʹ�ü��Ȱ�,HP����80\n\n\n");
            jijiubao--;
            if (player.health + 80 > player.max_health)
                player.health = player.max_health;
            else
                player.health += 80;
        }
        else
            printf("û�м��Ȱ���\n\n\n");
        break;
    case 3:
        if (baiyao > 0)
        {
            printf("ʹ�����ϰ�ҩ,HP����120\nz\n\n");
            baiyao--;
            if (player.health + 120 > player.max_health)
                player.health = player.max_health;
            else
                player.health += 120;
        }
        else
            printf("û�����ϰ�ҩ��\n\n\n");
        break;
    case 4:
        if (superbaiyao > 0)
        {
            printf("ʹ�ó������ϰ�ҩ,HP����200\n\n\n");
            superbaiyao--;
            if (player.health + 200 > player.max_health)
                player.health = player.max_health;
            else
                player.health += 200;
        }
        else
            printf("û�г������ϰ�ҩ��\n\n\n");
        break;
    case 5:
        if (battle) // ��ս����(battle=1),����(battle=0)����ʹ�ù�������Ʒ
        {
            if (boom > 0)
            {
                printf("ʹ������,����HP����100\n\n\n");
                boom--;
                guai.health -= 100;
                AttackResult();
            }
        }
        else
            printf("��ս��״̬,����ʹ������!\n\n\n");
        break;
    case 6:
        if (battle) // ��ս����(battle=1),����(battle=0)����ʹ�ù�������Ʒ
        {
            if (dubiao > 0)
            {
                printf("ʹ�ö���,����HP����200\n\n\n");
                dubiao--;
                guai.health -= 200;
                AttackResult();
            }
        }
        else
            printf("��ս��״̬,����ʹ�ö���!\n\n\n");
        break;
    case 7:
        if (battle) // ��ս����(battle=1),����(battle=0)����ʹ�ù�������Ʒ
        {
            if (atom_boom > 0)
            {
                printf("ʹ������ʽԭ�ӵ�,����HP����666666666\n\n\n");
                atom_boom--;
                guai.health -= 666666666;
                AttackResult();
            }
        }
        else
            printf("��ս��״̬,����ʹ������ʽԭ�ӵ�!\n\n\n");
        break;
    case 8:
        if (jingyancao > 0 && player.level < 1000)
        {

            printf("ʹ�þ����,�ȼ�����10��\n\n\n");
            jingyancao--;
            player.level += 10;
            printf("�ȼ���%d\n", player.level);
        }
        else if (jingyancao < 1)
        {
            printf("û�о������\n\n\n");
        }
        else
            printf("�ȼ�����45��,��Ϊ̫�ߣ��޷�ʹ�á�\n\n\n");
        break;
    case 9:
        if (jingyanbao > 0 && player.level < 1000)
        {
            if (player.level > 44 && player.level < 1000)
            {
                int sheng;
                sheng = 45 - player.level;
                player.level += sheng;
                printf("ʹ�þ����,�ȼ�����%d��", sheng);
                printf("�ȼ���%d\n", player.level);
            }
            else
            {

                printf("ʹ�þ����,�ȼ�����2��\n\n\n");
                jingyanbao--;
                player.level += 2;
                printf("�ȼ���%d\n", player.level);
            }
        }
        else if (jingyanbao < 1)
        {
            printf("û�о������");
        }
        else
            printf("�ȼ�����45��,��Ϊ̫�ߣ��޷�ʹ�á�\n\n\n");
        break;
    case 10:
        if (jingyanshi > 0 && player.level < 1000)
        {
            if (player.level > 42 && player.level < 1000)
            {
                int sheng;
                sheng = 45 - player.level;
                player.level += sheng;
                printf("ʹ�þ���ʯ,�ȼ�����%d��\n", sheng);
                printf("�ȼ���%d\n", player.level);
            }
            else
            {
                printf("ʹ�þ���ʯ,�ȼ�����10��\n");
                jingyanshi--;
                player.level += 10;
            }
        }
        else if (jingyanshi < 1)
        {
            printf("û�о���ʯ��\n\n\n");
        }
        else
            printf("�ȼ�����45��,��Ϊ̫�ߣ��޷�ʹ�á�\n\n\n");
        break;
    case 11:
        if (strongman_arm > 0 && player.level < 10000)
        {
            if (player.level > 29 && player.level < 10000)
            {
                int sheng;
                sheng = 45 - player.level;
                player.level += sheng;
                printf("ʹ�þ��˾�ʯ,�ȼ�����%d��", sheng);
                printf("�ȼ���%d\n", player.level);
            }
            else
            {
                printf("ʹ�þ��˾�ʯ,�ȼ�����16��\n\n\n");
                strongman_arm--;
                player.level += 16;
                printf("�ȼ���%d\n", player.level);
            }
        }
        else if (strongman_arm < 1)
        {
            printf("û�о��˾�ʯ�ˡ�\n\n\n");
        }
        else
            printf("�ȼ�����45��,��Ϊ̫�ߣ��޷�ʹ�á�\n\n\n");
        break;
    case 0:
        break;
    default:
        printf("ChooseWupin error!\n\n\n");
    }
}

int AttackResult() // �������:�ж��Ƿ��ʤ �Ƿ�����Ʒ �� �Ƿ�����
{
    if (guai.health <= 0)
    {
        battle = 0;
        printf("ս��ʤ��!��ý��%d,����%d\n\n\n", guai.money, guai.exp);
        player.exp += guai.exp;
        player.range_exp += guai.exp;
        money += guai.money;
        s = SuiJi();
        if (s < guai.wupinpro)
        {
            printf("�ӵ���ʬ���з���");
            printf("%s\n\n\n", guai.wupin);
            AddWupin(guai.wupin_sign);
        }
        WhetherLevelUp();
        if (strcmp(guai.name, "ʹͽ") == 0)
        {
            printf("ս��ʤ�����ȳ�����������");
            getchar();
            getchar();
            exit(0);
        }
        return 1; // �����н���˷���1,���򷵻�0,�����ж��Ƿ������ս����Ϊ
    }
    else
    {
        int s = SuiJi();

        if ((guai.attack + s - player.defense / 3) < 0)
        {
            player.health -= 1;
            printf("%s����,���HP������ 1\n\n", guai.name);
        }
        else
        {
            player.health -= guai.attack + s - player.defense / 3;
            printf("%s����,���HP������%d\n\n", guai.name, guai.attack + s - player.defense / 3);
        }
        if (player.health < 0)
        {
            battle = 0;
            printf("%sս��!��ҵ���%d\n\n\n", player.name, player.level * 500);
            money -= player.level * 500;
            player.health = player.max_health / 5;
            OrdinaryAct(); //
            return 1;
        }
    }
    return 0;
}
void AddWupin(int wupin_sign)
{

    switch (wupin_sign)
    {
    case 1:
        fang4n++;
        break;
    case 2:
        fang3n++;
        break;
    case 3:
        fang2n++;
        break;
    case 4:
        strongman_arm = 1;
        break;
    case 5:
        gong4n++;
        break;
    case 6:
        gong3n++;
        break;
    case 7:
        gong2n++;
        break;
    default:
        printf("AddWupin error\n\n\n");
    }
}
void WhetherLevelUp()
{
    int i = 0, j = 0;
    int l1 = player.range_exp / 100;
    int l2 = player.range_exp / 300;
    int l3 = player.range_exp / 600;
    if (player.level <= 15 && l1 > 0) // 15������,�����㹻 ������������
    {
        if (l1 == 1)
        {
            printf("%s", player.name);
            printf(" ����!\n\n\n������+3, ������+2, HP����+20\n\n\n");
            player.exp = player.exp + guai.exp - (player.exp + guai.exp) % 100;
            player.attack += 3;
            player.defense += 2;
            player.max_health += 20;
            player.health = player.max_health;
            player.level++;
            player.range_exp = 0;
            player.exp = player.max_exp;
            player.max_exp += 100;
        }
        else
        {
            printf("������!����%d��!", l1);
            printf("������+%d, ������+%d, HP����+%d\n\n\n", 3 * l1, 2 * l1, 20 * l1);
            player.exp = (player.exp + guai.exp) || player.exp - ((player.exp + guai.exp) || player.exp) % 100;
            player.attack += 3 * l1;
            player.defense += 2 * l1;
            player.max_health += 20 * l1;
            player.health = player.max_health;
            player.level += l1;
            player.range_exp = 0;
            player.exp = player.max_exp;
            player.max_exp += 100 * l1;
        }
    }
    else if (player.level <= 40 && l2 > 0)
    {
        if (l2 == 1)
        {
            printf("%s", player.name);
            printf(" ����!\n\n\n������+3, ������+2, HP����+20\n\n\n");
            player.exp = player.exp + guai.exp - (player.exp + guai.exp) % 100;
            player.attack += 3;
            player.defense += 2;
            player.max_health += 20;
            player.health = player.max_health;
            player.level++;
            player.range_exp = 0;
            player.exp = player.max_exp;
            player.max_exp += 300;
        }
        else
        {
            printf("������!����%d��!", l1);
            printf("������+%d, ������+%d, HP����+%d\n\n\n", 3 * l2, 2 * l2, 20 * l2);
            player.exp = player.exp + guai.exp - (player.exp + guai.exp) % 100;
            player.attack += 3 * l2;
            player.defense += 2 * l2;
            player.max_health += 20 * l2;
            player.health = player.max_health;
            player.level += l2;
            player.range_exp = 0;
            player.exp = player.max_exp;
            player.max_exp += 300 * l2;
        }
    }
    else if (l3 > 0)
    {
        if (l3 == 1)
        {
            printf("%s", player.name);
            printf(" ����!\n\n\n������+3, ������+2, HP����+20\n\n\n");
            player.exp = player.exp + guai.exp - (player.exp + guai.exp) % 100;
            player.attack += 3;
            player.defense += 2;
            player.max_health += 20;
            player.health = player.max_health;
            player.level++;
            player.range_exp = 0;
            player.exp = player.max_exp;
            player.max_exp += 600;
        }
        else
        {
            printf("������!����%d��!", l1);
            printf("������+%d, ������+%d, HP����+%d\n\n\n", 3 * l3, 2 * l3, 20 * l3);
            player.exp = player.exp + guai.exp - (player.exp + guai.exp) % 100;
            player.attack += 3 * l3;
            player.defense += 2 * l3;
            player.max_health += 20 * l3;
            player.health = player.max_health;
            player.level += l3;
            player.range_exp = 0;
            player.exp = player.max_exp;
            player.max_exp += 600 * l3;
        }
    }
}
void OrdinaryAct() // ������Ϊ�˵�(�ƶ�,��Ʒ,�Ի�,�鿴״̬,װ��,�˳���Ϸ)
{

    while (1)
    {
        // \(1000);
        // system("cls");
        puts("=============================================================================");
        printf("Ҫ��ʲô?\n\n\n 1,�ƶ� 2,���� 3,�Ի� 4,�鿴״̬ 5,װ�� 6,������Ϸ 0,�˳���Ϸ\n\n\n");
        puts("=============================================================================");
        switch (scanf("%d", &choose_number), choose_number)
        {
        case 1: // ��ʾ�ƶ��˵�
            printf("Ҫȥ����?\n\n\n");
            printf("1,happy�ư� 2,ŵ�Ƿ��۾Ƶ� 3,�����̻� 4������������ 5��ð�ջ�Ұ\n\n\n");
            switch (scanf("%d", &choose_number), choose_number)
            {
            case 1:
                place_sign = place.bar; // ��¼Ŀǰλ��-�ư�
                // OrdinaryAct();
                break;
            case 2:
                place_sign = place.hotel; // �����õ�
                printf("��ң�%d", money);
                printf("Ҫ������? 200����� 1,�� 0,��\n\n\n");
                choose_number = 1;
                switch (scanf("%d", &choose_number), choose_number)
                {
                case 1:
                    if (money - 200 < 0) // �ж�Ǯ�Ƿ�
                    {
                        printf("Sorry,���Ǯ����~\n\n\n");
                        printf("��ң�%d", money);
                    }
                    else
                    {
                        printf("�ú���Ϣ\nHP��\n�ڶ�����\n\n");
                        printf("��ң�%d\n", money);
                        money -= 200;                      // ����200ס���
                        player.health = player.max_health; // ������
                    }
                    break;
                case 0:
                    printf("�´�����!\n\n\n");
                    break;
                default:
                    printf("hotel talk error!\n\n\n");
                }
                place_sign = 0;
                break;
            case 3:
                int yongju, gong, fang;
                printf("������Ҫ����ʲô���͵���Ʒ��\n\n\n 1,����װ�� 2������װ�� 3,һ�����˺�����\n\n\n");
                scanf("%d", &yongju);
                switch (yongju)
                {
                case 1:
                    printf("������Ҫ����ʲô����?\n\n\n 1,ذ�ף�300 2��������500 3����Ѫ����1000\n\n\n");
                    scanf("%d", &gong);
                    switch (gong)
                    {
                    case 1:
                        if (money >= 300)
                        {
                            gong1n++;
                            money = money - 300;
                            printf("ذ��+1\n");
                            printf("ذ��:%d��\n", gong1n);
                            printf("��ң�%d\n", money);
                            break;
                        }
                        else
                        {
                            printf("Ǯ����!\n");
                            printf("��ң�%d\n", money);
                            break;
                        }
                    case 2:
                        if (money >= 500)
                        {
                            gong2n++;
                            money = money - 500;
                            printf("����+1\n");
                            printf("����:%d��\n", gong2n);
                            printf("��ң�%d\n", money);
                            break;
                        }
                        else
                        {
                            printf("Ǯ����!\n");
                            printf("��ң�%d\n", money);
                            break;
                        }
                    case 3:
                        if (money >= 1000)
                        {
                            gong3n++;
                            money = money - 1000;
                            printf("��Ѫ��+1\n");
                            printf("��Ѫ��:%d��\n", gong3n);
                            printf("��ң�%d\n", money);
                            break;
                        }
                        else
                        {
                            printf("Ǯ����!\n");
                            printf("��ң�%d\n", money);
                            break;
                        }
                    default:
                        printf("�Բ�������ֻ���������������");
                        break;
                    }
                    break;
                case 2:
                    int fang;
                    printf("������Ҫ����ʲô����?\n\n\n 1,���£�300 2�����ף�500 3�����ף�1000\n\n\n");
                    scanf("%d", &fang);
                    switch (fang)
                    {
                    case 1:
                        if (money >= 300)
                        {
                            fang1n++;
                            money = money - 300;
                            printf("����+1\n");
                            printf("����:%d��\n", fang1n);
                            printf("��ң�%d\n", money);
                        }
                        else
                        {
                            printf("Ǯ����!\n");
                            printf("��ң�%d\n", money);
                        }

                        break;
                    case 2:
                        if (money >= 500)
                        {
                            fang2n++;
                            money = money - 500;
                            printf("����+1\n");
                            printf("����:%d��\n", fang2n);
                            printf("��ң�%d\n", money);
                        }
                        else
                        {
                            printf("Ǯ����!\n");
                            printf("��ң�%d", money);
                        }
                        break;
                    case 3:
                        if (money >= 1000)
                        {
                            fang3n++;
                            money = money - 1000;
                            printf("����+1\n");
                            printf("����:%d��\n", fang3n);
                            printf("��ң�%d\n", money);
                        }
                        else
                        {
                            printf("Ǯ����!\n");
                            printf("��ң�%d\n", money);
                        }
                    default:
                        printf("�Բ�������ֻ��������Ϸ��ߡ�");
                        break;
                    }
                    printf("��ң�%d\n", money);
                    break;
                case 3:
                    printf("������Ҫ����ʲôһ�����˺�������\n 1,���� 2������ 3������ʽԭ�ӵ�\n\n\n");
                    int yi;
                    scanf("%d", &yi);
                    switch (yi)
                    {
                    case 1:
                        if (money >= 300 && boom < 5)
                        {
                            boom++;
                            money = money - 300;
                            printf("����+1\n");
                            printf("���ף�%d\n", boom);
                            printf("��ң�%d\n", money);
                        }
                        else
                        {
                            printf("Ǯ����!\n");
                            printf("��ң�%d", money);
                        }
                        break;
                    case 2:
                        if (money >= 600 && dubiao < 4)
                        {
                            dubiao++;
                            money = money - 600;
                            printf("����+1\n");
                            printf("���ڣ�%d\n", dubiao);
                            printf("��ң�%d\n", money);
                        }
                        else
                        {
                            printf("Ǯ����!\n");
                            printf("��ң�%d\n", money);
                        }
                        break;
                    case 3:
                        if (money >= 0 && atom_boom < 23333333333)
                        {
                            atom_boom = atom_boom + 233;
                            money = money + 1500;
                            printf("����ʽԭ�ӵ�+2\n");
                            printf("����ʽԭ�ӵ���%d\n", atom_boom);
                            printf("��ң�%d\n", money);
                        }
                        else
                        {
                            printf("Ǯ����!\n\n\n");
                            printf("��ң�%d\n", money);
                        }

                        break;
                    }
                }
                break;
            case 4:
                printf("��ӭ�����ٱ������У�������Ҫ��ʲô������\n\n");
                printf("����װ��: 1,ذ��:%d�� 2,����:%d�� 3,��Ѫ��:%d�� 4,�����ý�:%d��\n", gong1n, gong2n, gong3n, gong4n);
                printf("����װ��: 5,����:%d�� 6,����:%d�� 7,����:%d�� 8,�ƽ�ʥ��:%d��\n9�����˾�ʯ:%d�� 0,����\n\n\n", fang1n, fang2n, fang3n, fang4n, strongman_arm);
                int pai, shu, i;
                scanf("%d", &pai);
                switch (pai)
                {
                case 1:
                    printf("������Ҫ���ۼ�����");
                    scanf("%d", &shu);
                    if (gong1n >= shu)
                    {
                        gong1n = gong1n - shu;
                        money = money + shu * 240;
                        printf("ذ�ף�%d\n", gong1n);
                        printf("��ң�%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("װ�����������޷����ۣ�\n");
                        break;
                    }
                    break;
                case 2:
                    printf("������Ҫ���ۼ�����\n");
                    scanf("%d", &shu);
                    if (gong2n >= shu)
                    {
                        gong2n = gong2n - shu;
                        money = money + shu * 400;
                        printf("������%d\n", gong2n);
                        printf("��ң�%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("װ�����������޷����ۣ�\n");
                        break;
                    }
                case 3:
                    printf("������Ҫ���ۼ�����\n");
                    scanf("%d", &shu);
                    if (gong3n >= shu)
                    {
                        gong3n = gong3n - shu;
                        money = money + shu * 800;
                        printf("��Ѫ����%d\n", gong3n);
                        printf("��ң�%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("װ�����������޷����ۣ�\n");
                        break;
                    }
                case 4:
                    printf("������Ҫ���ۼ�����\n");
                    scanf("%d", &shu);
                    if (gong4n >= shu)
                    {
                        gong4n = gong4n - shu;
                        money = money + shu * 1500;
                        printf("�����ý���%d\n", gong4n);
                        printf("��ң�%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("װ�����������޷����ۣ�\n");
                        break;
                    }
                case 5:
                    printf("������Ҫ���ۼ�����\n");
                    scanf("%d", &shu);
                    if (fang1n >= shu)
                    {
                        fang1n = fang1n - shu;
                        money = money + shu * 240;
                        printf("���£�%d\n", fang1n);
                        printf("��ң�%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("װ�����������޷����ۣ�\n");
                        break;
                    }
                case 6:
                    printf("������Ҫ���ۼ�����\n");
                    scanf("%d", &shu);
                    if (fang2n >= shu)
                    {
                        fang2n = fang2n - shu;
                        money = money + shu * 500;
                        printf("���ף�%d\n", fang2n);
                        printf("��ң�%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("װ�����������޷����ۣ�\n");
                        break;
                    }
                case 7:
                    printf("������Ҫ���ۼ�����\n");
                    scanf("%d", &shu);
                    if (fang3n >= shu)
                    {
                        fang3n = fang3n - shu;
                        money = money + shu * 800;
                        printf("���ף�%d\n", fang3n);
                        printf("��ң�%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("װ�����������޷����ۣ�\n");
                        break;
                    }
                    break;
                case 8:
                    printf("������Ҫ���ۼ�����\n");
                    scanf("%d", &shu);
                    if (fang1n >= shu)
                    {
                        fang4n = fang4n - shu;
                        money = money + shu * 1500;
                        printf("�ƽ�ʥ�£�%d\n", fang4n);
                        printf("��ң�%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("װ�����������޷����ۣ�\n");
                        break;
                    }
                case 9:
                    printf("������Ҫ���ۼ��ţ�");
                    scanf("%d", &shu);
                    if (strongman_arm >= shu)
                    {
                        strongman_arm = strongman_arm - shu;
                        money = money + shu * 2000;
                        printf("���˾�ʯ��%d\n", strongman_arm);
                        printf("��ң�%d\n", money);
                    }
                    else
                    {
                        printf("��ʯ���������޷����ۣ�\n");
                        break;
                    }
                    break;
                case 0:
                    break;
                    break;
                default:
                    printf("û�и�װ�����޷����ۣ�\n");
                    break;
                }

                break;
            case 5:
                int yewai;
                while (1)
                {
                    puts("=============================================================================");
                    printf("Ҫȥ��ð���أ�");
                    printf("\n\n 1,�������� Σ�ճ̶ȣ���\n\n 2,��ҫ��ԭ Σ�ճ̶ȣ���\n\n 3,����ɭ�� Σ�ճ̶ȣ�����\n\n 4,��Į�� Σ�ճ̶ȣ�����\n\n 5,�����׶� Σ�ճ̶ȣ������\n\n 6,���乬�� Σ�ճ̶ȣ�������\n\n 0,�뿪\n");
                    puts("=============================================================================");
                    scanf("%d", &yewai);
                    switch (yewai)
                    {
                    case 1:
                        place_sign = place.forest1;
                        s = SuiJi();
                        if (s < 7)
                        {
                            battle = 1;
                            guai = xiyi;
                            printf("%s���˹���!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            guai = witch;
                            printf("%s���˹���!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else
                        {
                            printf("���ﰲȫ\n\n\n");
                            // ���õ���OAct����,���Զ�ִ��OAct����;
                        }
                        break;
                    case 3:
                        place_sign = place.forest2;
                        s = SuiJi();
                        if (s < 7)
                        {
                            battle = 1;
                            guai = witch;
                            printf("%s���˹���!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            guai = strongman;
                            printf("%s���˹���!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else
                        {
                            printf("���ﰲȫ\n\n\n");
                        }
                        break;
                    case 5:
                        place_sign = place.forest3;
                        s = SuiJi();
                        if (s < 7)
                        {
                            battle = 1;
                            guai = strongman;
                            printf("%s���˹���!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            guai = big_strongman;
                            printf("%s���˹���!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else
                        {
                            printf("���ﰲȫ\n\n\n");
                        }
                        break;
                    case 2:
                        place_sign = place.grass1;
                        s = SuiJi();
                        if (s < 7)
                        {
                            battle = 1;
                            guai = bee;
                            printf("%s���˹���!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            guai = horse;
                            printf("%s���˹���!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else
                        {
                            printf("���ﰲȫ\n\n\n");
                        }
                        break;
                    case 4:
                        place_sign = place.grass2;
                        s = SuiJi();
                        if (s < 7)
                        {
                            battle = 1;
                            guai = horse;
                            printf("%s���˹���!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            guai = lion;
                            printf("%s���˹���!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else
                        {
                            printf("���ﰲȫ\n\n\n");
                        }
                        break;
                    case 6:
                        place_sign = place.grass3;
                        s = SuiJi();
                        if (s < 7)
                        {
                            battle = 1;
                            guai = lion;
                            printf("%s���˹���!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            if (strongman_arm)
                            {
                                printf("��������:\n\n\n ����,������,���Ĳ���,����...�ٺ�,���ϵ���!���˾�ʯ��Ҫ��,������Ҳ�������!\n\n\n");
                                guai = shitu;
                                printf("%s���˹���!\n\n\n", guai.name);
                                BattleAct();
                            }
                            else
                                printf("��������:\n\n\n ������,��ð�.������о��˾�ʯ,�ҿ��Ը����㹫��������Ŷ~\n\n\n");
                        }
                        else
                        {
                            printf("���ﰲȫ\n\n\n");
                        }
                        break;
                        if (yewai != 0)
                        {
                            printf("������Ϊδ֪�����޷����롣\n\n\n");
                            break;
                        }
                    }
                    if (yewai == 0)
                    {
                        break;
                        printf("���뿪��Ұ��");
                    }
                }
            }
            break;

        case 2:
            ChooseWupin();
            break; // ��ʾ����,������ʹ��.
        case 3:    // �Ի�ѡ��
            if (place_sign == place.bar)
            {
                printf("Ҫ��˭˵��?\n\n\n1,�췢Ů�� 2,�ͽ����� 3,�ư��ϰ� 4,ҩƷ����\n\n\n"); // ��ʾ�Ի�����
                switch (scanf("%d", &choose_number), choose_number)
                {
                case 1:
                    printf("�췢Ů��:\n\n\n ��̨���Ǹ�Hunter��˧��!(~����~)\n\n\n��˵�������������,�����·��Ӧ�ú���Ϥ��!\n\n\n");
                    break;
                case 2:
                    if (fang1n < 1 && gong1n < 1)
                    {
                        printf("�ͽ�����:\n\n\n ��Ҫ�ȹ�����!�õ���!\n\n\n ���������������ն�,����Խ��ԽΣ��,����ذ�׺Ͳ���,�������Щ������,��ȥ��!\n\n\n");
                        printf("%s����:��,��λ��������ð�!\n\n\n)", player.name);
                        gong1n++;
                        fang1n++;
                    }
                    else
                        printf("�ͽ�����:\n\n\n ���Ͱ�,������!\n\n\n ��Ҫ�������������ŵ�!\n\n\n");
                    break;
                case 3:
                    printf("Ҫ�ȵ�ʲô?\n\n\n 1,����ͷ25��� HP+20 2,XO��80��� HP+50 3,��ͷ����150��� HP+100 0,����\n\n\n");
                    choose_number = 1;
                    while (choose_number)
                    {
                        switch (scanf("%d", &choose_number), choose_number)
                        {
                        case 1:
                            if (money < 25)
                            {
                                printf("Ǯ����!");
                            }
                            else
                            {
                                if (player.health + 20 <= player.max_health)
                                {
                                    printf("HP+20.");
                                    money -= 25;
                                    player.health += 20;
                                }
                                else
                                {
                                    printf("HP����");
                                    player.health = player.max_health;
                                }
                            }
                            break;
                        case 2:
                            if (money < 80)
                            {
                                printf("Ǯ����!");
                            }
                            else
                            {
                                if (player.health + 50 <= player.max_health)
                                {
                                    printf("HP+50.");
                                    money -= 80;
                                    player.health += 50;
                                }
                                else
                                {
                                    printf("HP����");
                                    player.health = player.max_health;
                                }
                            }
                            break;
                        case 3:
                            if (money < 150)
                            {
                                printf("Ǯ����!");
                            }
                            else
                            {
                                if (player.health + 100 <= player.max_health)
                                {
                                    printf("HP+100.");
                                    money -= 150;
                                    player.health += 100;
                                }
                                else
                                {
                                    printf("HP����");
                                    player.health = player.max_health;
                                }
                            }
                            break;
                        case 0:
                            printf("�´�����!\n");
                            break;
                        default:
                            printf("�������\n\n\n");
                            break;
                        }
                        break;
                    }
                    break;
                case 4:
                    printf("��Ҫ��ʲô��\n\n\n 1������ 2������ \n\n\n");
                    int mai;
                    scanf("%d", &mai);
                    if (mai == 1)
                    {
                        printf("���ʲô�أ�\n1,ֹѪ�ݣ�100 HP+60\n2�����Ȱ���150 HP+80 \n3�����ϰ�ҩ��250 HP+120\n4���������ϰ�ҩ��400 HP+200 \n5������ݣ�150 ����+300 \n6���������600 ����+600\n7������ʯ��500 ����+1000 \n0,�ݰ�\n");
                        int dongxi;
                        scanf("%d", &dongxi);
                        switch (dongxi)
                        {
                        case 1:
                            if (money >= 100 && cao < 6)
                            {
                                cao++;
                                money = money - 100;
                                printf("ֹѪ��+1\n");
                            }
                            else
                            {
                                printf("Ǯ����!\n");
                            }
                            break;
                        case 2:
                            if (money >= 150 && jijiubao < 5)
                            {
                                jijiubao++;
                                money = money - 150;
                                printf("���Ȱ�+1\n");
                            }
                            else
                            {
                                printf("Ǯ����!\n");
                            }
                            break;
                        case 3:
                            if (money >= 250 && baiyao < 4)
                            {
                                baiyao++;
                                money = money - 250;
                                printf("���ϰ�ҩ+1\n");
                            }
                            else
                            {
                                printf("Ǯ����!\n");
                            }
                            break;
                        case 4:
                            if (money >= 400 && superbaiyao < 3)
                            {
                                superbaiyao++;
                                money = money - 400;
                                printf("�������ϰ�ҩ+1\n");
                            }
                            else
                            {
                                printf("Ǯ����!\n");
                            }
                            break;
                        case 5:
                            if (money >= 150)
                            {
                                jingyancao++;
                                money = money - 150;
                                printf("�����+1\n");
                            }
                            else
                            {
                                printf("Ǯ����!\n");
                            }
                            break;
                        case 6:
                            if (money >= 300)
                            {
                                jingyanbao++;
                                money = money - 300;
                                printf("�����+1\n");
                            }
                            else
                            {
                                printf("Ǯ����!\n");
                            }
                            break;
                        case 7:
                            if (money >= 500)
                            {
                                jingyanshi++;
                                money = money + 500;
                                printf("����ʯ+1\n");
                            }
                            else
                            {
                                printf("Ǯ����!\n");
                            }
                            break;
                        }
                    case 0:
                        printf("��ң�%d\n", money);
                        printf("�ټ�����ӭ�´�������\n");
                        break;
                    }
                    if (mai == 2)
                    {
                        printf("ҩƷ���ˣ�ȥȥȥ������ûʱ�������ġ�\n");
                    }
                }
            }
            else if (place_sign == place.hotel)
                printf("���ϰ���!��...��\n\n\n����æ���أ�û������~��\n\n\n");
            else
                printf("�������û�˿�������\n\n\n");
            break;
        case 4:
            DisplayState();
            break; // ��ʾ״̬
        case 5:    // װ��
            printf("����װ��: 1,ذ��:%d�� 2,����:%d�� 3,��Ѫ��:%d�� 4,�����ý�:%d��\n\n\n", gong1n, gong2n, gong3n, gong4n);
            printf("����װ��: 5,����:%d�� 6,����:%d�� 7,����:%d�� 8,�ƽ�ʥ��:%d��\t\t0,����\n\n\n", fang1n, fang2n, fang3n, fang4n);
            printf("ѡ��Ҫװ�������������:\n\n\n");
            switch (scanf("%d", &choose_number), choose_number)
            {
            case 1:
                if (gong1n >= 1)
                {
                    printf("������ذ��\n\n\n");
                    gong = gong1;
                    strcpy(gongname, "ذ��");
                }
                else
                    printf("��û��ذ�׿���װ��\n\n\n");
                break;
            case 2:
                if (gong2n >= 1)
                {
                    printf("�����˳���\n\n\n");
                    gong = gong2;
                    strcpy(gongname, "����");
                }
                else
                    printf("��û�г�������װ��\n\n\n");
                break;
            case 3:
                if (gong3n >= 1)
                {
                    printf("�����˱�Ѫ��\n\n\n");
                    gong = gong3;
                    strcpy(gongname, "��Ѫ��");
                }
                else
                    printf("��û�б�Ѫ������װ��\n\n\n");
                break;
            case 4:
                if (gong4n >= 1)
                {
                    printf("�����˾����ý�\n\n\n");
                    gong = gong4;
                    strcpy(gongname, "�����ý�");
                }
                else
                    printf("��û�о����ý�����װ��\n\n\n");
                break;
            case 5:
                if (fang1n >= 1)
                {
                    printf("�����˲���\n\n\n");
                    fang = fang1;
                    strcpy(fangname, "����");
                }
                else
                    printf("��û�в��¿���װ��\n\n\n");
                break;
            case 6:
                if (fang2 >= 1)
                {
                    printf("����������\n\n\n");
                    fang = fang2;
                    strcpy(fangname, "����");
                }
                else
                    printf("��û�����׿���װ��\n\n\n");
                break;
            case 7:
                if (fang3n >= 1)
                {
                    printf("����������\n\n\n");
                    fang = fang3;
                    strcpy(fangname, "����");
                }
                else
                    printf("��û�����׿���װ��\n\n\n");
                break;
            case 8:
                if (fang4n >= 1)
                {
                    printf("�����˻ƽ�ʥ��\n\n\n");
                    fang = fang4;
                    strcpy(fangname, "�ƽ�ʥ��");
                }
                else
                    printf("��û�лƽ�ʥ�¿���װ��\n\n\n");
                break;
            case 0:
                printf("δ����װ��\n\n\n");
                break;
            default:
                printf("change error!");
            }
            break;
        case 6:
            printf(" ���ã���ӭ���������硣Ϊ�˸������õ���Ϸ���飬���Ŷ�ʱ��ʱ���Ż�����Ϸ���Ż���ᾡ�췢�������ϡ�������ҷ��棬������ҵķ�ʽ���趨��������ʱ�����롰ʥս��ʿ ����������˫���ţ�������2.0�汾��buy��������2.0�Ļ����Ͻ����޸ģ����޸���buy�����������˾���ݵ������������ĵ��ߣ�ϣ�����ϲ����������Ҫ��л��İͬѧ��������������౦��Ľ��飬лл��\n");
            break;
        case 0:
            printf("ȷ���˳���Ϸ?(Y/N)\n\n\n");
            getchar();
            proof = getchar();
            if (proof == 'y' || proof == 'Y')
            {
                printf("���ݴ洢��...");
                // ���ļ��и�������;
                getchar();
                printf("���س��˳�");
                getchar();
                return;
            }
            else if (proof == 'n' || proof == 'N')
                printf("������Ϸ!\n\n\n");
            else
                printf("����!\n\n\n");
            break;
        default:
            printf("�������!\n\n\n");
        }
    }
}
void DisplayState()
{
    printf("%s ������:%d+%d=%d ������:%d+%d=%d HP:%d/%d \n\n\n", player.name, player.attack, gong, player.attack + gong, player.defense, fang, player.defense + fang, player.health, player.max_health);
    printf("����: %s ����: %s \n\n\n", gongname, fangname);
    printf("�ȼ�:%d ����:%d/%d ����Ҫ%d�������� ���:%d \n\n\n", player.level, player.exp, player.max_exp, player.max_exp - player.exp, money);
}
void BattleAct()
{
    while (1)
    {
        puts("=============================================================================");
        printf("Ҫ��ô��?\n\n\n 1,���� 2,��Ʒ 3,�鿴״̬ 4,����\n\n\n");
        switch (scanf("%d", &choose_number), choose_number)
        {
        case 1:
            s = SuiJi();
            printf("%s����! %sHP����%d\n\n\n", player.name, guai.name, player.attack + s + gong - guai.defense / 3);
            guai.health -= player.attack + s + gong - guai.defense / 3;
            if (AttackResult())
                return; // ��������н��(���˻����ս��)�˳�����
            else
                continue;
        case 2:
            ChooseWupin();
            break; // ѡ����Ʒ,����ʹ��,ս��������ʹ�ù�������Ʒ
        case 3:
            DisplayState();
            break; // ��ʾ״̬
        case 4:
            s = SuiJi();
            if (s < 4) // 40%�ĸ��ʿ�������
            {
                printf("%s������~\n\n\n", player.name);
                battle = 0;
                return;
            }
            else
                printf("%s����ʧ��!\n\n\n", player.name);
            break;
        default:
            printf("�������,��������!\n\n\n");
        }
    }
}
void printf(char *p)
{
    while (1)
    {
        if (*p != 0)
            printf("%c", *p++);
        else
            break;
        Sleep(100);
    }
}
