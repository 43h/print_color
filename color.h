/*******************************************************************************
 * [file name]:color.h
 * [description]:
 * [author]:
 * [Creation Time]: 2018/11/23
 * [version]:0.1
********************************************************************************
 * [change]:
 * [time]:
 * [who]:
 * [version]:
*******************************************************************************/

/*
 * \033[ Param {;Param;...}m
 * \e[ Param {;Param;...}m
 */
//字体类型
#define STYLE_DEFAULT       0   //重置
#define STYLE_BOLD          1   //粗体/高亮
#define STYLE_N_BOLD        22  //非粗体
#define STYLE_UNDERLINE     4   //单下划线
#define STYLE_N_UNDERLINE   24  //无下划线
#define STYLE_TWINKLE       5   //闪烁
#define STYLE_N_TWINKLE     25  //无闪烁
#define STYLE_REVERSE       7   //反显、翻转前景色和背景色
#define STYLE_N_REVERSE     27  //无反显
#define STYLE_HIDE           8  //隐藏

//颜色
#define COLOR_BLACK         0   //黑色
#define COLOR_RED           1   //红色
#define COLOR_GREEN         2   //绿色
#define COLOR_YELLOW        3   //黄色
#define COLOR_BLUE          4   //蓝色
#define COLOR_MAGENTA       5   //洋红
#define COLOR_CYAN          6   //青色
#define COLOR_WHITE         7   //白色

#define COLOR_BACKGROUND   30  //背景色起始
#define COLORFRONT         40  //前景色起始


#define SET_FONT_STYLE(n)   printf("\e[%um",n)   //设置字体
#define SET_B_COLOR(n)      printf("\e[%um",BACKGROUND + n)//设置背景颜色
#define SET_F_COLOR(n)      printf("\e[%um",FRONT + n)//设置前景颜色

#define CURSOR_UP(n)        printf("\e[%uA",n) //光标上移n行
#define CURSOR_DOWN(n)      printf("\e[%uB",n) //光标下移n行
#define CURSOR_RIGHT(n)     printf("\e[%uC",n) //光标右移n行
#define CURSOR_LEFT(n)      printf("\e[%uD",n)//光标左移n行
#define CURSOR_AT(x, y)     printf("\e[%u;%uH",x,y) //设置光标位置

#define CURSOR_PUSH         printf("\e[s") //保存光标位置
#define CURSOR_POP          printf("\e[u") //恢复光标位置
#define CURSOR_HIDE         printf("\e[?25l") //隐藏光标
#define CURSOR_SHOW         printf("\e[?25h") //显示光标

#define CLEAR_LINE          printf("\e[1K")  //请空光标所在行 
#define CLEAN_CURSOR        printf("\e[K") //清除从光标到行尾的内容
#define CLEAN_SCREEN        printf("\e[2J") // 清屏
