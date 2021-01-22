#include<bits/stdc++.h> 
#include<conio.h>
#include <windows.h>
#include<string.h>
#include<time.h> 
#define NUM 1000 //控制房间个数
int j;
void LoginRoom();//登记房屋
void SearchRoom();//搜寻房屋
void ChangeRoom();//更换住房
void OutRoom();//退房
void save();//保存信息
void load();//载入信息
//struct Total
struct Total
{
 char Name[20];
 int Sex;
 int Age;
 char IDcard[18];
 int hour;
  
 int xx;
int yy;
int zz;
 
}; 
struct room
{
 int RoomID;
 char Tel[11];
 long Price;
 int Sign;
 int feiyong;
 //struct Date Datesum;
 struct Total Totallist;
 }Room[NUM];
// 将房间个数写入信息
 
void LoginRoom() //登记,注册客房信息函数
{
 int i,n,k;
 n=0;
system("cls");
 printf("    用户登记\n");
 for(k=0;k<=1000;k++)
 {
 printf("请输入客房号:\n");
 scanf("%d",&i);
 if(Room[i-1].Sign==1)
{
 printf("对不起，该房间已入住,请重新输入。\n");
 Sleep(160); //延时160帧
 system("cls");//清屏
return; //返回原函数
 }
 if(n==5)
 {
 printf("\n请查询清楚客房入住信息后再来登记，谢谢");
 Sleep(1500); //时间延时1.5秒 
 system("cls");//清屏
 return ;
 }
 if(Room[i-1].Sign!=1)
 break;
 }
 printf("房间号：%d\n",i);
 printf("客户姓名:");
 scanf("%s",(char *)&Room[i-1].Totallist.Name);
 printf("性别(1.男 2.女):\n");
  
 scanf("%d",&Room[i-1].Totallist.Sex); 
 if(Room[i-1].Totallist.Sex>2){
 printf("信息错误,请重新输入");
 LoginRoom();
 
 } 
 printf("年龄:\n");
 scanf("%d",&Room[i-1].Totallist.Age);
 if(Room[i-1].Totallist.Age<18){
 printf("未到国家法定开房年龄，禁止开房\n");
 printf("请重新输入");
LoginRoom();
 }
 
 printf("身份证号码:\n");
 scanf("%s",&Room[i-1].Totallist.IDcard); //判断身份证信息 
 if(strlen(Room[i-1].Totallist.IDcard)!=18){
 printf("信息错误");
 LoginRoom();
}
 
 
 printf("联系电话:");
scanf("%s",&Room[i-1].Tel);
 printf("入住时间:");
 scanf("%d %d %d",&Room[i-1].Totallist.xx,&Room[i].Totallist.yy,&Room[i].Totallist.zz);
 
 printf("住房时长:");
 scanf("%d",&Room[i-1].Totallist.hour);
 
 printf("请选择套房（1.总统套房（300/小时）\n2.双人房（200/小时）\n3.单人房（100/小时）\n4.特价房（40/小时））\n");
 scanf("%d",&Room[i-1].feiyong); //////
 Room[i-1].RoomID=i;
 switch(Room[i-1].feiyong){
 case 1:Room[i-1].Price=(Room[i-1].Totallist.hour)*300;break;
 case 2:Room[i-1].Price=(Room[i-1].Totallist.hour)*200;break;
 case 3:Room[i-1].Price=(Room[i-1].Totallist.hour)*100;break;
 case 4:Room[i-1].Price=(Room[i-1].Totallist.hour)*40;break;
 }
 Room[i-1].Sign=1;
 save();
 printf("恭喜,入住成功!!\n要返回首页吗？(1:Y,0:N)");
 scanf("%d",&j);
 if(j==0)
 {
 LoginRoom();
 }
 system("cls");
}
 
void save() //将客房入住信息保存到文件中
{
 int i;
 FILE *fp;
if((fp=fopen("data.txt","w"))==NULL)
 {
 printf("无法打开文件\n");
return;
 }
 fwrite(Room,sizeof(struct room),NUM,fp);
 printf("文件写入完成\n");
 fclose(fp);
}
 
void save1() //将客房入住信息保存到文件中
{
  
 FILE *fp;
 if((fp=fopen("date.txt","w"))==NULL)
 {
 printf("无法打开文件\n");
 return ;
 }
 
fwrite(Room,sizeof(struct room),NUM,fp);
// gets(Room,sizeof(struct room),NUM,fp);
 //fputs(Room,sizeof(struct room),NUM,fp);
 
 printf("文件写入完成\n");
 fclose(fp);
}
 
void load() //从文件中读取客房入住信息
{     
FILE *fp;
int i;
 if((fp=fopen("date.txt","r"))==NULL)
 {
 printf("不能打开文件\n");
 return ;
}
 for(i=0;!feof(fp);i++)  //读取文档，从零开始直到结束 feof()函数
    //文档的结尾都有一个隐藏字符”EOF”，
 {    //当程序读取它的时候，就会知道文件已经到达结尾。通常使用while循环加EOF判断作为读取结束的标志。
fread(&Room[i],sizeof(struct room),1,fp);  //sizeof实际上是获取了数据在内存中所占用的存储空间，以字节为单位来计数
   // 读取文档，存储信息
 }
fclose(fp);  //结束工作
 system("cls");
 printf("文件读取成功\n");
}
 
void SearchRoom() //查询客房信息
{
 int k;
 system("cls");
 printf("    查询客房信息\n");
printf("请输入要查询的房间号码:\n");
scanf("%d",&k);
if(k<=0||k>1000)
{
 printf("对不起，未能查到任何信息。\n");
 printf("请重新输入");
 SearchRoom();  //重新调用
 }
 
 if(Room[k-1].Sign==1)  
 {
 printf("姓名:%s\n",Room[k-1].Totallist.Name);
 
 if(Room[k-1].Totallist.Sex==1)
 {
 printf("性别:男\n");
 }
else
{
 printf("性别:女\n");
 }
 
 printf("客户年龄:%d\n",Room[k-1].Totallist.Age);
 printf("身份证号:%s\n",Room[k-1].Totallist.IDcard);
 printf("联系电话:%s\n",Room[k-1].Tel);
 printf("入住时间:%d/%d/%d\n",Room[k-1].Totallist.xx,Room[k-1].Totallist.yy,Room[k-1].Totallist.zz);
 printf("入住时长:%d\n",Room[k-1].Totallist.hour);
 switch(Room[k-1].feiyong){
 case 1:printf("总统套房（300/小时）\n");break;
 case 2:printf("双人房（200/小时）\n");break;
 case 3:printf("单人房（100/小时）\n");break;
 case 4:printf("特价房（40/小时）\n");break;
 }
  
 printf("费用:%ld\n",Room[k-1].Price);
 }
 
 
 else
 {
 system("cls");
 printf("很抱歉,没有找到该房间登记的相关信息!!\n");
 }
 printf("要返回首页吗？(1:Y,0:N)");
 scanf("%d",&j);
 if(j==0)
 {
 SearchRoom();
 }
 system("cls");
}
 
void ChangeRoom() //修改客房入住信息
{
 int i,n;
system("cls");
 printf("   修改客房信息\n");
 printf("请输入房间号:\n");
 scanf("%d",&i);
 if(Room[i-1].Sign==1)
 {
 printf("\t1.修改客户姓名\n");
 printf("\t2.修改客户性别\n");
 printf("\t3.修改客户年龄\n");
 printf("\t4.修改住房时间\n");
 printf("\t5.修改住房时长（续住）\n");
 printf("\t6.修改客户电话号码\n");
 printf("\t7.修改客户身份证号\n");
 printf("请输入要修改的项：");
 scanf("%d",&n);
 switch(n)
 {
 case 1:scanf("%s",(char *)&Room[i-1].Totallist.Name);
 break;
 case 2:scanf("%d",&Room[i-1].Totallist.Sex);
break;
 case 3:scanf("%d",&Room[i-1].Totallist.Age);
 break;
 case 4:scanf("%d %d %d",&Room[i-1].Totallist.xx,&Room[i-1].Totallist.yy,&Room[i-1].Totallist.zz);
 break;
case 5:
 scanf("%d",&Room[i-1].Totallist.hour);
 break;
 
 switch(Room[i-1].feiyong){
 case 1:Room[i-1].Price=(Room[i-1].Totallist.hour)*300;break;
 case 2:Room[i-1].Price=(Room[i-1].Totallist.hour)*200;break;
 case 3:Room[i-1].Price=(Room[i-1].Totallist.hour)*100;break;
 case 4:Room[i-1].Price=(Room[i-1].Totallist.hour)*40;break;
 }
 
 break;
 case 6:scanf("%s",(char *)&Room[i-1].Tel);
 break;
 case 7:scanf("%s",(char *)&Room[i-1].Totallist.IDcard);
break;
 default:printf("输入错误，请从新选择");
 break;
 }
 save();
 printf("修改成功！");
 }
 else
{
 system("cls");
 printf("该房间为空房!!\n");
}
printf("\n要返回首页吗？(1:Y,0:N)");
scanf("%d",&j);
 if(j==0)
 {
 ChangeRoom();
 }
 system("cls");
}
 
void OutRoom() //退房函数
{
 int i,j;
 system("cls");
 printf("    退房管理系统\n");
 printf("请输入房间号:\n");
 scanf("%d",&i);
 printf("确认要退%d号房吗？(1:Y/0:N)",i);
 scanf("%d",&j);
 if(j==1)
 {
if(Room[i-1].Sign==1)
 {
 Room[i-1]=Room[101];
 save();
 system("cls");
 printf("退房成功\n");
 }
else
 {
 system("cls");
 printf("该房间为空房\n");
 }
 }
printf("要返回首页吗？(1:Y,0:N)");
 scanf("%d",&j);
 if(j==0)
 {
 OutRoom();
 }
system("cls");
}
 
void FreeRoom() //查询客房整体入住信息
{
 int f,sum;
sum=0;
 system("cls");
 printf("   客房入住信息\n");
 for(f=0;f<NUM;f++)
 {
 if(Room[f].Sign==1)
 {
 printf("%d号房已入住\n",f+1);
 sum=sum+1;
 }
 }
 printf("\n总共总共1~1000号房间中有%d个房间已入住，剩余%d个房间为空房。 \n",sum,NUM-sum);
printf("要返回首页吗？(1:Y,0:N)");
 scanf("%d",&j);
 if(j==0)
 {
 FreeRoom();
}
 system("cls");
}
 
 
void Ser()
{
char sy[7];
int i=0;
printf("\n\n\n\t\t\t 请输入七位密码\n\n\n\t\t\t ");
do
{
sy[i++]=getch();
printf("*");
}while(i!=6);
sy[i]='\0';
if(strcmp(sy,"strong")!=0)
{
system("cls");
printf("\n\n\n\t\t\t抱歉，您输入的密码有误，请再次输入!\n\n\n");
printf("\t ⊙-------------------☆☆☆-------------------⊙\n\n");
Ser();
}
}
 
 
void show(){
 
 printf(" ********************************************************************************\n");
 printf(" ************************欢迎使用客房登记系统************************************\n");
 printf("|    1.--登记客房     |\n");
 printf("|    2.--查询客房     |\n");
 printf("|    3.--修改客房     |\n");
 printf("|    4.--退房管理     |\n");
 printf("|    5.--显示当前所有空房    |\n");
 printf("|    6.--退出系统     |\n");
 printf("|*******************************************************************************|\n");
  
 printf("|*******************************************************************************|\n\n");
 
 
}
void logtime(char c,int n,int s)
{
int i;
for(i=0;i<n;i++)
{
printf("%c",c);
Sleep(s);
}
}
 
int main()//主函数
{
 int i,j;
Ser();
system("mode con cols=82");
printf("\n\n\t\tloging");
logtime('.',6,200);
 system("color 3f");
 load();
 system("cls");
 for(j=0;j<NUM;j++) //为房间状态赋值为0，当有人入住时，其值改变为1
 {
 Room[j].RoomID=j+1;
 }
do //菜单栏
{
printf("\n");
 
 show();
 
 printf("输入需要选择的功能:");
 scanf("%d",&i);
switch(i) //通过输入相应数字调用不同函数进行相应工作
 {
 case 1:LoginRoom();
 break;
 case 2:SearchRoom();
 break;
 case 3:ChangeRoom();
 break;
 case 4:OutRoom();
 break;
 case 5:FreeRoom();
 break;
 case 6:printf("谢谢使用客房登记系统,正在退出..........\n退出成功，按任意键关闭程序!!\n");
 break;
 default:
 printf("\n 输入错误，请从新选择\n");
 break;
 }
}
 while(i!=6);
 return 0;
}