#include <stdio.h>
#include <ctime>
#include <time.h>    //suiji
#include <windows.h> //SLEEP函数
struct Player        // 玩家结构体，并初始化player
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
} player = {"勇者", 50, 40, 100, 100, 1, 0, 0, 100};
struct Enemy // 怪的结构体,并初始化各种怪
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
} strongman = {"森林巨人", "黄金圣衣", 40, 50, 350, 200, 100, 1, 2, 1, 0},
  witch = {"森林女巫", "银甲", 25, 15, 100, 50, 50, 2, 2, 1, 1},
  xiyi = {"森林蜥蜴", "铁甲", 18, 10, 50, 30, 35, 3, 3, 2, 2},
  big_strongman = {"森林巨人王", "巨人晶石", 40 * 5, 50 * 5, 200 * 5, 200 * 5, 100 * 5, 4, 4, 2, 0},
  lion = {"草原雄狮", "绝世好剑", 60, 30, 280, 200, 100, 5, 2, 1, 0},
  horse = {"草原野马", "碧血剑", 28, 12, 90, 50, 50, 6, 2, 1, 1},
  bee = {"草原黄蜂", "长剑", 17, 11, 60, 30, 35, 7, 3, 2, 2},
  shitu = {"使徒", "\0", 60 * 8, 30 * 8, 280 * 8, 200 * 8, 100 * 8, 9, 1, 1, 0},
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
char gongname[20] = "无", fangname[20] = "无";
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
    printf("--------------------------欢迎来到 [苍穹世界] 2.2 测试版-----------------------\n\n\n");
    // 如果想使用外挂，名字请输入：“圣战斗士 ”。
    Sleep(1000);
    printf("这里是苍穹世界! 雅莉萨斯国的罗茜公主被陌生人绑架了!\n\n\n 伟大的勇者啊~拿起你们的武器,营救公主!\n\n\n输入你的名字: (20个字符)\n\n\n");
    scanf("%s", player_name);
    strncpy(player.name, player_name, 20);
    if (strcmp(player.name, "圣战斗士") == 0)
    {
        printf("\n\n\n封印多年的圣剑血统啊!你终于觉醒了!\n\n\n圣战斗士，你成为了天选之人，请你救出公主吧！\n\n\n");
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

void ChooseWupin() // 选择物品 并使用
{
    printf("物品: 1,止血草%d个 2,急救包%d个 3,云南白药%d个 4,超级云南白药%d个 5,手雷%d个 6,毒标%d个 7,手抛式原子弹%d个 8,经验草%d个 9,经验包%d个 10,经验石%d个 11,巨人晶石%d个 0,返回\n\n\n", cao, jijiubao, baiyao, superbaiyao, boom, dubiao, atom_boom, jingyancao, jingyanbao, jingyanshi, strongman_arm);
    switch (scanf("%d", &choose_number), choose_number)
    {
    case 1:
        if (cao > 0)
        {
            printf("使用止血草,HP增加60\n\n\n");
            cao--;
            if (player.health + 60 > player.max_health)
                player.health = player.max_health;
            else
                player.health += 60;
        }
        else
            printf("没有止血草了\n\n\n");
        break;
    case 2:
        if (jijiubao > 0)
        {
            printf("使用急救包,HP增加80\n\n\n");
            jijiubao--;
            if (player.health + 80 > player.max_health)
                player.health = player.max_health;
            else
                player.health += 80;
        }
        else
            printf("没有急救包了\n\n\n");
        break;
    case 3:
        if (baiyao > 0)
        {
            printf("使用云南白药,HP增加120\nz\n\n");
            baiyao--;
            if (player.health + 120 > player.max_health)
                player.health = player.max_health;
            else
                player.health += 120;
        }
        else
            printf("没有云南白药了\n\n\n");
        break;
    case 4:
        if (superbaiyao > 0)
        {
            printf("使用超级云南白药,HP增加200\n\n\n");
            superbaiyao--;
            if (player.health + 200 > player.max_health)
                player.health = player.max_health;
            else
                player.health += 200;
        }
        else
            printf("没有超级云南白药了\n\n\n");
        break;
    case 5:
        if (battle) // 在战斗中(battle=1),否则(battle=0)不能使用攻击性物品
        {
            if (boom > 0)
            {
                printf("使用手雷,敌人HP减少100\n\n\n");
                boom--;
                guai.health -= 100;
                AttackResult();
            }
        }
        else
            printf("非战斗状态,不能使用手雷!\n\n\n");
        break;
    case 6:
        if (battle) // 在战斗中(battle=1),否则(battle=0)不能使用攻击性物品
        {
            if (dubiao > 0)
            {
                printf("使用毒标,敌人HP减少200\n\n\n");
                dubiao--;
                guai.health -= 200;
                AttackResult();
            }
        }
        else
            printf("非战斗状态,不能使用毒标!\n\n\n");
        break;
    case 7:
        if (battle) // 在战斗中(battle=1),否则(battle=0)不能使用攻击性物品
        {
            if (atom_boom > 0)
            {
                printf("使用手抛式原子弹,敌人HP减少666666666\n\n\n");
                atom_boom--;
                guai.health -= 666666666;
                AttackResult();
            }
        }
        else
            printf("非战斗状态,不能使用手抛式原子弹!\n\n\n");
        break;
    case 8:
        if (jingyancao > 0 && player.level < 1000)
        {

            printf("使用经验草,等级增加10级\n\n\n");
            jingyancao--;
            player.level += 10;
            printf("等级：%d\n", player.level);
        }
        else if (jingyancao < 1)
        {
            printf("没有经验草了\n\n\n");
        }
        else
            printf("等级超过45级,修为太高，无法使用。\n\n\n");
        break;
    case 9:
        if (jingyanbao > 0 && player.level < 1000)
        {
            if (player.level > 44 && player.level < 1000)
            {
                int sheng;
                sheng = 45 - player.level;
                player.level += sheng;
                printf("使用经验包,等级增加%d级", sheng);
                printf("等级：%d\n", player.level);
            }
            else
            {

                printf("使用经验包,等级增加2级\n\n\n");
                jingyanbao--;
                player.level += 2;
                printf("等级：%d\n", player.level);
            }
        }
        else if (jingyanbao < 1)
        {
            printf("没有经验包了");
        }
        else
            printf("等级超过45级,修为太高，无法使用。\n\n\n");
        break;
    case 10:
        if (jingyanshi > 0 && player.level < 1000)
        {
            if (player.level > 42 && player.level < 1000)
            {
                int sheng;
                sheng = 45 - player.level;
                player.level += sheng;
                printf("使用经验石,等级增加%d级\n", sheng);
                printf("等级：%d\n", player.level);
            }
            else
            {
                printf("使用经验石,等级增加10级\n");
                jingyanshi--;
                player.level += 10;
            }
        }
        else if (jingyanshi < 1)
        {
            printf("没有经验石了\n\n\n");
        }
        else
            printf("等级超过45级,修为太高，无法使用。\n\n\n");
        break;
    case 11:
        if (strongman_arm > 0 && player.level < 10000)
        {
            if (player.level > 29 && player.level < 10000)
            {
                int sheng;
                sheng = 45 - player.level;
                player.level += sheng;
                printf("使用巨人晶石,等级增加%d级", sheng);
                printf("等级：%d\n", player.level);
            }
            else
            {
                printf("使用巨人晶石,等级增加16级\n\n\n");
                strongman_arm--;
                player.level += 16;
                printf("等级：%d\n", player.level);
            }
        }
        else if (strongman_arm < 1)
        {
            printf("没有巨人晶石了。\n\n\n");
        }
        else
            printf("等级超过45级,修为太高，无法使用。\n\n\n");
        break;
    case 0:
        break;
    default:
        printf("ChooseWupin error!\n\n\n");
    }
}

int AttackResult() // 攻击结果:判断是否获胜 是否获得物品 和 是否升级
{
    if (guai.health <= 0)
    {
        battle = 0;
        printf("战斗胜利!获得金币%d,经验%d\n\n\n", guai.money, guai.exp);
        player.exp += guai.exp;
        player.range_exp += guai.exp;
        money += guai.money;
        s = SuiJi();
        if (s < guai.wupinpro)
        {
            printf("从敌人尸骸中发现");
            printf("%s\n\n\n", guai.wupin);
            AddWupin(guai.wupin_sign);
        }
        WhetherLevelUp();
        if (strcmp(guai.name, "使徒") == 0)
        {
            printf("战斗胜利，救出公主！！！");
            getchar();
            getchar();
            exit(0);
        }
        return 1; // 攻击有结果了返回1,否则返回0,用于判断是否继续做战斗行为
    }
    else
    {
        int s = SuiJi();

        if ((guai.attack + s - player.defense / 3) < 0)
        {
            player.health -= 1;
            printf("%s反击,你的HP减少了 1\n\n", guai.name);
        }
        else
        {
            player.health -= guai.attack + s - player.defense / 3;
            printf("%s反击,你的HP减少了%d\n\n", guai.name, guai.attack + s - player.defense / 3);
        }
        if (player.health < 0)
        {
            battle = 0;
            printf("%s战死!金币掉落%d\n\n\n", player.name, player.level * 500);
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
    if (player.level <= 15 && l1 > 0) // 15级以下,经验足够 都满足则升级
    {
        if (l1 == 1)
        {
            printf("%s", player.name);
            printf(" 升级!\n\n\n攻击力+3, 防御力+2, HP上限+20\n\n\n");
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
            printf("好厉害!连升%d级!", l1);
            printf("攻击力+%d, 防御力+%d, HP上限+%d\n\n\n", 3 * l1, 2 * l1, 20 * l1);
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
            printf(" 升级!\n\n\n攻击力+3, 防御力+2, HP上限+20\n\n\n");
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
            printf("好厉害!连升%d级!", l1);
            printf("攻击力+%d, 防御力+%d, HP上限+%d\n\n\n", 3 * l2, 2 * l2, 20 * l2);
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
            printf(" 升级!\n\n\n攻击力+3, 防御力+2, HP上限+20\n\n\n");
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
            printf("好厉害!连升%d级!", l1);
            printf("攻击力+%d, 防御力+%d, HP上限+%d\n\n\n", 3 * l3, 2 * l3, 20 * l3);
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
void OrdinaryAct() // 正常行为菜单(移动,物品,对话,查看状态,装备,退出游戏)
{

    while (1)
    {
        // \(1000);
        // system("cls");
        puts("=============================================================================");
        printf("要做什么?\n\n\n 1,移动 2,道具 3,对话 4,查看状态 5,装备 6,关于游戏 0,退出游戏\n\n\n");
        puts("=============================================================================");
        switch (scanf("%d", &choose_number), choose_number)
        {
        case 1: // 显示移动菜单
            printf("要去哪里?\n\n\n");
            printf("1,happy酒吧 2,诺亚方舟酒店 3,北朝商会 4，红玉拍卖行 5，冒险荒野\n\n\n");
            switch (scanf("%d", &choose_number), choose_number)
            {
            case 1:
                place_sign = place.bar; // 记录目前位置-酒吧
                // OrdinaryAct();
                break;
            case 2:
                place_sign = place.hotel; // 进入旅店
                printf("金币：%d", money);
                printf("要开房吗? 200个金币 1,是 0,否\n\n\n");
                choose_number = 1;
                switch (scanf("%d", &choose_number), choose_number)
                {
                case 1:
                    if (money - 200 < 0) // 判断钱是否够
                    {
                        printf("Sorry,你的钱不够~\n\n\n");
                        printf("金币：%d", money);
                    }
                    else
                    {
                        printf("好好休息\nHP满\n第二天了\n\n");
                        printf("金币：%d\n", money);
                        money -= 200;                      // 花费200住店费
                        player.health = player.max_health; // 体力满
                    }
                    break;
                case 0:
                    printf("下次再来!\n\n\n");
                    break;
                default:
                    printf("hotel talk error!\n\n\n");
                }
                place_sign = 0;
                break;
            case 3:
                int yongju, gong, fang;
                printf("请问您要购买什么类型的物品？\n\n\n 1,攻击装备 2，防御装备 3,一次性伤害武器\n\n\n");
                scanf("%d", &yongju);
                switch (yongju)
                {
                case 1:
                    printf("请问您要购买什么武器?\n\n\n 1,匕首￥300 2，长剑￥500 3，碧血剑￥1000\n\n\n");
                    scanf("%d", &gong);
                    switch (gong)
                    {
                    case 1:
                        if (money >= 300)
                        {
                            gong1n++;
                            money = money - 300;
                            printf("匕首+1\n");
                            printf("匕首:%d个\n", gong1n);
                            printf("金币：%d\n", money);
                            break;
                        }
                        else
                        {
                            printf("钱不够!\n");
                            printf("金币：%d\n", money);
                            break;
                        }
                    case 2:
                        if (money >= 500)
                        {
                            gong2n++;
                            money = money - 500;
                            printf("长剑+1\n");
                            printf("长剑:%d个\n", gong2n);
                            printf("金币：%d\n", money);
                            break;
                        }
                        else
                        {
                            printf("钱不够!\n");
                            printf("金币：%d\n", money);
                            break;
                        }
                    case 3:
                        if (money >= 1000)
                        {
                            gong3n++;
                            money = money - 1000;
                            printf("碧血剑+1\n");
                            printf("碧血剑:%d个\n", gong3n);
                            printf("金币：%d\n", money);
                            break;
                        }
                        else
                        {
                            printf("钱不够!\n");
                            printf("金币：%d\n", money);
                            break;
                        }
                    default:
                        printf("对不起，我们只会打造以上武器。");
                        break;
                    }
                    break;
                case 2:
                    int fang;
                    printf("请问您要购买什么防具?\n\n\n 1,布衣￥300 2，铁甲￥500 3，银甲￥1000\n\n\n");
                    scanf("%d", &fang);
                    switch (fang)
                    {
                    case 1:
                        if (money >= 300)
                        {
                            fang1n++;
                            money = money - 300;
                            printf("布衣+1\n");
                            printf("布衣:%d个\n", fang1n);
                            printf("金币：%d\n", money);
                        }
                        else
                        {
                            printf("钱不够!\n");
                            printf("金币：%d\n", money);
                        }

                        break;
                    case 2:
                        if (money >= 500)
                        {
                            fang2n++;
                            money = money - 500;
                            printf("铁甲+1\n");
                            printf("铁甲:%d个\n", fang2n);
                            printf("金币：%d\n", money);
                        }
                        else
                        {
                            printf("钱不够!\n");
                            printf("金币：%d", money);
                        }
                        break;
                    case 3:
                        if (money >= 1000)
                        {
                            fang3n++;
                            money = money - 1000;
                            printf("银甲+1\n");
                            printf("银甲:%d个\n", fang3n);
                            printf("金币：%d\n", money);
                        }
                        else
                        {
                            printf("钱不够!\n");
                            printf("金币：%d\n", money);
                        }
                    default:
                        printf("对不起，我们只会打造以上防具。");
                        break;
                    }
                    printf("金币：%d\n", money);
                    break;
                case 3:
                    printf("请问您要购买什么一次性伤害武器？\n 1,手雷 2，毒镖 3，手抛式原子弹\n\n\n");
                    int yi;
                    scanf("%d", &yi);
                    switch (yi)
                    {
                    case 1:
                        if (money >= 300 && boom < 5)
                        {
                            boom++;
                            money = money - 300;
                            printf("手雷+1\n");
                            printf("手雷：%d\n", boom);
                            printf("金币：%d\n", money);
                        }
                        else
                        {
                            printf("钱不够!\n");
                            printf("金币：%d", money);
                        }
                        break;
                    case 2:
                        if (money >= 600 && dubiao < 4)
                        {
                            dubiao++;
                            money = money - 600;
                            printf("毒镖+1\n");
                            printf("毒镖：%d\n", dubiao);
                            printf("金币：%d\n", money);
                        }
                        else
                        {
                            printf("钱不够!\n");
                            printf("金币：%d\n", money);
                        }
                        break;
                    case 3:
                        if (money >= 0 && atom_boom < 23333333333)
                        {
                            atom_boom = atom_boom + 233;
                            money = money + 1500;
                            printf("手抛式原子弹+2\n");
                            printf("手抛式原子弹：%d\n", atom_boom);
                            printf("金币：%d\n", money);
                        }
                        else
                        {
                            printf("钱不够!\n\n\n");
                            printf("金币：%d\n", money);
                        }

                        break;
                    }
                }
                break;
            case 4:
                printf("欢迎您光临本拍卖行，请问您要卖什么东西？\n\n");
                printf("攻击装备: 1,匕首:%d个 2,长剑:%d个 3,碧血剑:%d个 4,绝世好剑:%d个\n", gong1n, gong2n, gong3n, gong4n);
                printf("防御装备: 5,布衣:%d个 6,铁甲:%d个 7,银甲:%d个 8,黄金圣衣:%d个\n9，巨人晶石:%d个 0,返回\n\n\n", fang1n, fang2n, fang3n, fang4n, strongman_arm);
                int pai, shu, i;
                scanf("%d", &pai);
                switch (pai)
                {
                case 1:
                    printf("请问您要出售几件？");
                    scanf("%d", &shu);
                    if (gong1n >= shu)
                    {
                        gong1n = gong1n - shu;
                        money = money + shu * 240;
                        printf("匕首：%d\n", gong1n);
                        printf("金币：%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("装备数不够，无法出售！\n");
                        break;
                    }
                    break;
                case 2:
                    printf("请问您要出售几件？\n");
                    scanf("%d", &shu);
                    if (gong2n >= shu)
                    {
                        gong2n = gong2n - shu;
                        money = money + shu * 400;
                        printf("长剑：%d\n", gong2n);
                        printf("金币：%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("装备数不够，无法出售！\n");
                        break;
                    }
                case 3:
                    printf("请问您要出售几件？\n");
                    scanf("%d", &shu);
                    if (gong3n >= shu)
                    {
                        gong3n = gong3n - shu;
                        money = money + shu * 800;
                        printf("碧血剑：%d\n", gong3n);
                        printf("金币：%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("装备数不够，无法出售！\n");
                        break;
                    }
                case 4:
                    printf("请问您要出售几件？\n");
                    scanf("%d", &shu);
                    if (gong4n >= shu)
                    {
                        gong4n = gong4n - shu;
                        money = money + shu * 1500;
                        printf("绝世好剑：%d\n", gong4n);
                        printf("金币：%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("装备数不够，无法出售！\n");
                        break;
                    }
                case 5:
                    printf("请问您要出售几件？\n");
                    scanf("%d", &shu);
                    if (fang1n >= shu)
                    {
                        fang1n = fang1n - shu;
                        money = money + shu * 240;
                        printf("布衣：%d\n", fang1n);
                        printf("金币：%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("装备数不够，无法出售！\n");
                        break;
                    }
                case 6:
                    printf("请问您要出售几件？\n");
                    scanf("%d", &shu);
                    if (fang2n >= shu)
                    {
                        fang2n = fang2n - shu;
                        money = money + shu * 500;
                        printf("铁甲：%d\n", fang2n);
                        printf("金币：%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("装备数不够，无法出售！\n");
                        break;
                    }
                case 7:
                    printf("请问您要出售几件？\n");
                    scanf("%d", &shu);
                    if (fang3n >= shu)
                    {
                        fang3n = fang3n - shu;
                        money = money + shu * 800;
                        printf("银甲：%d\n", fang3n);
                        printf("金币：%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("装备数不够，无法出售！\n");
                        break;
                    }
                    break;
                case 8:
                    printf("请问您要出售几件？\n");
                    scanf("%d", &shu);
                    if (fang1n >= shu)
                    {
                        fang4n = fang4n - shu;
                        money = money + shu * 1500;
                        printf("黄金圣衣：%d\n", fang4n);
                        printf("金币：%d\n", money);
                        break;
                    }
                    else
                    {
                        printf("装备数不够，无法出售！\n");
                        break;
                    }
                case 9:
                    printf("请问您要出售几颗？");
                    scanf("%d", &shu);
                    if (strongman_arm >= shu)
                    {
                        strongman_arm = strongman_arm - shu;
                        money = money + shu * 2000;
                        printf("巨人晶石：%d\n", strongman_arm);
                        printf("金币：%d\n", money);
                    }
                    else
                    {
                        printf("晶石数不够，无法出售！\n");
                        break;
                    }
                    break;
                case 0:
                    break;
                    break;
                default:
                    printf("没有该装备，无法出售！\n");
                    break;
                }

                break;
            case 5:
                int yewai;
                while (1)
                {
                    puts("=============================================================================");
                    printf("要去哪冒险呢？");
                    printf("\n\n 1,神秘沼泽 危险程度：★\n\n 2,星耀草原 危险程度：★\n\n 3,诡异森林 危险程度：★★★\n\n 4,荒漠矿场 危险程度：★★★\n\n 5,炽热炎洞 危险程度：★★★★\n\n 6,花朵宫殿 危险程度：★★★★★\n\n 0,离开\n");
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
                            printf("%s扑了过来!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            guai = witch;
                            printf("%s扑了过来!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else
                        {
                            printf("这里安全\n\n\n");
                            // 不用调用OAct函数,会自动执行OAct函数;
                        }
                        break;
                    case 3:
                        place_sign = place.forest2;
                        s = SuiJi();
                        if (s < 7)
                        {
                            battle = 1;
                            guai = witch;
                            printf("%s扑了过来!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            guai = strongman;
                            printf("%s扑了过来!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else
                        {
                            printf("这里安全\n\n\n");
                        }
                        break;
                    case 5:
                        place_sign = place.forest3;
                        s = SuiJi();
                        if (s < 7)
                        {
                            battle = 1;
                            guai = strongman;
                            printf("%s扑了过来!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            guai = big_strongman;
                            printf("%s扑了过来!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else
                        {
                            printf("这里安全\n\n\n");
                        }
                        break;
                    case 2:
                        place_sign = place.grass1;
                        s = SuiJi();
                        if (s < 7)
                        {
                            battle = 1;
                            guai = bee;
                            printf("%s扑了过来!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            guai = horse;
                            printf("%s扑了过来!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else
                        {
                            printf("这里安全\n\n\n");
                        }
                        break;
                    case 4:
                        place_sign = place.grass2;
                        s = SuiJi();
                        if (s < 7)
                        {
                            battle = 1;
                            guai = horse;
                            printf("%s扑了过来!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            guai = lion;
                            printf("%s扑了过来!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else
                        {
                            printf("这里安全\n\n\n");
                        }
                        break;
                    case 6:
                        place_sign = place.grass3;
                        s = SuiJi();
                        if (s < 7)
                        {
                            battle = 1;
                            guai = lion;
                            printf("%s扑了过来!\n\n\n", guai.name);
                            BattleAct();
                        }
                        else if (s < 9)
                        {
                            battle = 1;
                            if (strongman_arm)
                            {
                                printf("神秘老人:\n\n\n 哈哈,年轻人,做的不错,不过...嘿嘿,你上当啦!巨人晶石我要了,公主你也别想带走!\n\n\n");
                                guai = shitu;
                                printf("%s扑了过来!\n\n\n", guai.name);
                                BattleAct();
                            }
                            else
                                printf("神秘老人:\n\n\n 年轻人,你好啊.如果你有巨人晶石,我可以告诉你公主的下落哦~\n\n\n");
                        }
                        else
                        {
                            printf("这里安全\n\n\n");
                        }
                        break;
                        if (yewai != 0)
                        {
                            printf("该区域为未知区域，无法进入。\n\n\n");
                            break;
                        }
                    }
                    if (yewai == 0)
                    {
                        break;
                        printf("已离开荒野。");
                    }
                }
            }
            break;

        case 2:
            ChooseWupin();
            break; // 显示道具,并可以使用.
        case 3:    // 对话选项
            if (place_sign == place.bar)
            {
                printf("要和谁说话?\n\n\n1,红发女郎 2,赏金猎人 3,酒吧老板 4,药品商人\n\n\n"); // 显示对话人物
                switch (scanf("%d", &choose_number), choose_number)
                {
                case 1:
                    printf("红发女郎:\n\n\n 吧台边那个Hunter好帅啊!(~脸红~)\n\n\n听说他经常外出打猎,外面的路他应该很熟悉的!\n\n\n");
                    break;
                case 2:
                    if (fang1n < 1 && gong1n < 1)
                    {
                        printf("赏金猎人:\n\n\n 你要救公主啊!好胆量!\n\n\n 不过外面的世界很险恶,而且越深越危险,这是匕首和布衣,对你会有些帮助的,拿去吧!\n\n\n");
                        printf("%s心想:哇,这位大叔人真好啊!\n\n\n)", player.name);
                        gong1n++;
                        fang1n++;
                    }
                    else
                        printf("赏金猎人:\n\n\n 加油吧,年轻人!\n\n\n 不要被外面世界所吓倒!\n\n\n");
                    break;
                case 3:
                    printf("要喝点什么?\n\n\n 1,二锅头25金币 HP+20 2,XO酒80金币 HP+50 3,人头马面150金币 HP+100 0,返回\n\n\n");
                    choose_number = 1;
                    while (choose_number)
                    {
                        switch (scanf("%d", &choose_number), choose_number)
                        {
                        case 1:
                            if (money < 25)
                            {
                                printf("钱不够!");
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
                                    printf("HP满了");
                                    player.health = player.max_health;
                                }
                            }
                            break;
                        case 2:
                            if (money < 80)
                            {
                                printf("钱不够!");
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
                                    printf("HP满了");
                                    player.health = player.max_health;
                                }
                            }
                            break;
                        case 3:
                            if (money < 150)
                            {
                                printf("钱不够!");
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
                                    printf("HP满了");
                                    player.health = player.max_health;
                                }
                            }
                            break;
                        case 0:
                            printf("下次再来!\n");
                            break;
                        default:
                            printf("输入错误\n\n\n");
                            break;
                        }
                        break;
                    }
                    break;
                case 4:
                    printf("你要干什么？\n\n\n 1，买东西 2，聊天 \n\n\n");
                    int mai;
                    scanf("%d", &mai);
                    if (mai == 1)
                    {
                        printf("买点什么呢？\n1,止血草￥100 HP+60\n2，急救包￥150 HP+80 \n3，云南白药￥250 HP+120\n4，超级云南白药￥400 HP+200 \n5，经验草￥150 经验+300 \n6，经验包￥600 经验+600\n7，经验石￥500 经验+1000 \n0,拜拜\n");
                        int dongxi;
                        scanf("%d", &dongxi);
                        switch (dongxi)
                        {
                        case 1:
                            if (money >= 100 && cao < 6)
                            {
                                cao++;
                                money = money - 100;
                                printf("止血草+1\n");
                            }
                            else
                            {
                                printf("钱不够!\n");
                            }
                            break;
                        case 2:
                            if (money >= 150 && jijiubao < 5)
                            {
                                jijiubao++;
                                money = money - 150;
                                printf("急救包+1\n");
                            }
                            else
                            {
                                printf("钱不够!\n");
                            }
                            break;
                        case 3:
                            if (money >= 250 && baiyao < 4)
                            {
                                baiyao++;
                                money = money - 250;
                                printf("云南白药+1\n");
                            }
                            else
                            {
                                printf("钱不够!\n");
                            }
                            break;
                        case 4:
                            if (money >= 400 && superbaiyao < 3)
                            {
                                superbaiyao++;
                                money = money - 400;
                                printf("超级云南白药+1\n");
                            }
                            else
                            {
                                printf("钱不够!\n");
                            }
                            break;
                        case 5:
                            if (money >= 150)
                            {
                                jingyancao++;
                                money = money - 150;
                                printf("经验草+1\n");
                            }
                            else
                            {
                                printf("钱不够!\n");
                            }
                            break;
                        case 6:
                            if (money >= 300)
                            {
                                jingyanbao++;
                                money = money - 300;
                                printf("经验包+1\n");
                            }
                            else
                            {
                                printf("钱不够!\n");
                            }
                            break;
                        case 7:
                            if (money >= 500)
                            {
                                jingyanshi++;
                                money = money + 500;
                                printf("经验石+1\n");
                            }
                            else
                            {
                                printf("钱不够!\n");
                            }
                            break;
                        }
                    case 0:
                        printf("金币：%d\n", money);
                        printf("再见，欢迎下次再来！\n");
                        break;
                    }
                    if (mai == 2)
                    {
                        printf("药品商人：去去去，老子没时间陪你聊。\n");
                    }
                }
            }
            else if (place_sign == place.hotel)
                printf("“老板娘!我...”\n\n\n“我忙着呢，没空理你~”\n\n\n");
            else
                printf("这里好像没人可以聊天\n\n\n");
            break;
        case 4:
            DisplayState();
            break; // 显示状态
        case 5:    // 装备
            printf("攻击装备: 1,匕首:%d个 2,长剑:%d个 3,碧血剑:%d个 4,绝世好剑:%d个\n\n\n", gong1n, gong2n, gong3n, gong4n);
            printf("防御装备: 5,布衣:%d个 6,铁甲:%d个 7,银甲:%d个 8,黄金圣衣:%d个\t\t0,返回\n\n\n", fang1n, fang2n, fang3n, fang4n);
            printf("选择要装备的武器或防具:\n\n\n");
            switch (scanf("%d", &choose_number), choose_number)
            {
            case 1:
                if (gong1n >= 1)
                {
                    printf("拿起了匕首\n\n\n");
                    gong = gong1;
                    strcpy(gongname, "匕首");
                }
                else
                    printf("你没有匕首可以装备\n\n\n");
                break;
            case 2:
                if (gong2n >= 1)
                {
                    printf("拿起了长剑\n\n\n");
                    gong = gong2;
                    strcpy(gongname, "长剑");
                }
                else
                    printf("你没有长剑可以装备\n\n\n");
                break;
            case 3:
                if (gong3n >= 1)
                {
                    printf("拿起了碧血剑\n\n\n");
                    gong = gong3;
                    strcpy(gongname, "碧血剑");
                }
                else
                    printf("你没有碧血剑可以装备\n\n\n");
                break;
            case 4:
                if (gong4n >= 1)
                {
                    printf("拿起了绝世好剑\n\n\n");
                    gong = gong4;
                    strcpy(gongname, "绝世好剑");
                }
                else
                    printf("你没有绝世好剑可以装备\n\n\n");
                break;
            case 5:
                if (fang1n >= 1)
                {
                    printf("穿上了布衣\n\n\n");
                    fang = fang1;
                    strcpy(fangname, "布衣");
                }
                else
                    printf("你没有布衣可以装备\n\n\n");
                break;
            case 6:
                if (fang2 >= 1)
                {
                    printf("穿上了铁甲\n\n\n");
                    fang = fang2;
                    strcpy(fangname, "铁甲");
                }
                else
                    printf("你没有铁甲可以装备\n\n\n");
                break;
            case 7:
                if (fang3n >= 1)
                {
                    printf("穿上了银甲\n\n\n");
                    fang = fang3;
                    strcpy(fangname, "银甲");
                }
                else
                    printf("你没有银甲可以装备\n\n\n");
                break;
            case 8:
                if (fang4n >= 1)
                {
                    printf("穿上了黄金圣衣\n\n\n");
                    fang = fang4;
                    strcpy(fangname, "黄金圣衣");
                }
                else
                    printf("你没有黄金圣衣可以装备\n\n\n");
                break;
            case 0:
                printf("未更换装备\n\n\n");
                break;
            default:
                printf("change error!");
            }
            break;
        case 6:
            printf(" 您好，欢迎您玩苍穹世界。为了给您更好的游戏体验，本团队时不时会优化本游戏，优化后会尽快发布在网上。关于外挂方面，开启外挂的方式是设定勇者姓名时，输入“圣战斗士 ”（不包括双引号）。由于2.0版本的buy，我们在2.0的基础上进行修改，已修复该buy。并且新增了经验草等有助于升级的道具，希望大家喜欢。在这里要感谢离陌同学，他给了我们许多宝贵的建议，谢谢。\n");
            break;
        case 0:
            printf("确定退出游戏?(Y/N)\n\n\n");
            getchar();
            proof = getchar();
            if (proof == 'y' || proof == 'Y')
            {
                printf("数据存储中...");
                // 向文件中更新数据;
                getchar();
                printf("按回车退出");
                getchar();
                return;
            }
            else if (proof == 'n' || proof == 'N')
                printf("继续游戏!\n\n\n");
            else
                printf("继续!\n\n\n");
            break;
        default:
            printf("输入错误!\n\n\n");
        }
    }
}
void DisplayState()
{
    printf("%s 攻击力:%d+%d=%d 防御力:%d+%d=%d HP:%d/%d \n\n\n", player.name, player.attack, gong, player.attack + gong, player.defense, fang, player.defense + fang, player.health, player.max_health);
    printf("武器: %s 防具: %s \n\n\n", gongname, fangname);
    printf("等级:%d 经验:%d/%d 还需要%d经验升级 金币:%d \n\n\n", player.level, player.exp, player.max_exp, player.max_exp - player.exp, money);
}
void BattleAct()
{
    while (1)
    {
        puts("=============================================================================");
        printf("要怎么办?\n\n\n 1,攻击 2,物品 3,查看状态 4,逃跑\n\n\n");
        switch (scanf("%d", &choose_number), choose_number)
        {
        case 1:
            s = SuiJi();
            printf("%s攻击! %sHP减少%d\n\n\n", player.name, guai.name, player.attack + s + gong - guai.defense / 3);
            guai.health -= player.attack + s + gong - guai.defense / 3;
            if (AttackResult())
                return; // 如果攻击有结果(敌人或玩家战死)退出函数
            else
                continue;
        case 2:
            ChooseWupin();
            break; // 选择物品,可以使用,战斗中允许使用攻击性物品
        case 3:
            DisplayState();
            break; // 显示状态
        case 4:
            s = SuiJi();
            if (s < 4) // 40%的概率可以逃跑
            {
                printf("%s逃跑了~\n\n\n", player.name);
                battle = 0;
                return;
            }
            else
                printf("%s逃跑失败!\n\n\n", player.name);
            break;
        default:
            printf("输入错误,重新输入!\n\n\n");
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
