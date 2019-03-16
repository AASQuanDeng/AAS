#pragma GCC optimize(2.5)
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
#include<string>
#include<cmath>
#include<iomanip>  
using namespace std;
bool liansuoa=0,liansuob=0,gameover=0;//liansuo为被连锁 
int a1=1,a2=1,b1=1,b2=1,zta=0,ztb=0,ka,kb,psxya=0,psxyb=0,xm58a=0,xm58b=0;//"zt"代表给a或b碰的权利 
const int SX=101;
void pea();
void peb();
void zhujiemian();
void zjmfhpd(int srin);
void coutaas(){
cout<<"       A                 A                 SSSS        "<<endl;
cout<<"      A A               A A              S     S       "<<endl;
cout<<"     A   A             A   A            S       S      "<<endl;
cout<<"    A     A           A     A         S           S    "<<endl;
cout<<"   A       A         A       A      S               S  "<<endl;
cout<<"  A         A       A         A     S               S  "<<endl;
cout<<" A           A     A           A      S                "<<endl;
cout<<"A             A   A             A       S              "<<endl;
cout<<"AAAAAAAAAAAAAAA   AAAAAAAAAAAAAAA          S           "<<endl;
cout<<"A             A   A             A             S        "<<endl;
cout<<"A             A   A             A                S     "<<endl;
cout<<"A             A   A             A   S               S  "<<endl;
cout<<"A             A   A             A   S               S  "<<endl;
cout<<"A             A   A             A     S           S    "<<endl;
cout<<"A             A   A             A       S      S       "<<endl;
cout<<"A             A   A             A         SSSS         "<<endl;
cout<<endl; 
} 
bool boolsj()
{
	int a;
	srand((unsigned)time(NULL));
	a=rand()%2; 
	return a;
}
void gameovera()
	{	
	system("CLS");
	cout<<"游戏结束"<<endl<<"A:"<<kb<<"滴血 "<<"B:"<<ka<<"滴血\n"<<"B取得胜利！"<<endl;
	coutaas();
	gameover=1;
	return;
	}
void gameoverb()
	{
	system("CLS");
	cout<<"游戏结束"<<endl<<"A:"<<ka<<"滴血 "<<"B:"<<kb<<"滴血\n"<<"A取得胜利！"<<endl;
	coutaas();
	gameover=1;
	return;
	}
void gameoverping()
	{
	system("CLS");
	cout<<"游戏结束"<<endl<<"A:"<<ka<<"滴血 "<<"B:"<<kb<<"滴血\n"<<"平局！"<<endl;
	coutaas();
	gameover=1;
	return;
	}
void lla()
{
	int lianlix;
	int lianliy;
	cout<<"联立"<<endl<<"您要将对方哪个数字改变？"<<endl;
	cin>>lianlix;
	cout<<"您要把它改成？"<<endl;
	cin>>lianliy;
	if(lianlix==1)b1=lianliy;
	if(lianlix==2)b2=lianliy;
} 
void llb()
{
	int lianlix;
	int lianliy;
	cout<<"联立"<<endl<<"您要将对方哪个数字改变？"<<endl;
	cin>>lianlix;
	cout<<"您要把它改成？"<<endl;
	cin>>lianliy;
	if(lianlix==1)a1=lianliy;
	if(lianlix==2)a2=lianliy;
}
void pa(){
	if(ka<=0&&kb<=0)
		{if(ka==kb){
					gameoverping();
					return;
					}
			else if(ka>kb){
			gameoverb();
			return;
		}
				else {
					gameovera();
					return;
					}}
	if(ka<=0){gameovera();
			return;
			}
	if(kb<=0){gameoverb();
			return;
			}	
	int gui1x,gui1y,ajian=0,bjian=0,ajia=0,bting=0;
	if(a1==0&&a2==0){bjian+=2;cout<<"拳击"<<endl;}
	if(a1==0&&a2==1||a1==1&&a2==0){bjian+=2;cout<<"苹果"<<endl;}
	if(a1==0&&a2==5||a1==5&&a2==0)if(psxya<=0){cout<<"排山倒海"<<endl;psxya=5;zta+=3;pea();pea();pea();}
	if(a1==0&&a2==6||a1==6&&a2==0){bjian+=1;cout<<"绿帽"<<endl;}//2018.10.19晚 完成度12% 
	if(a1==0&&a2==8||a1==8&&a2==0){ajia+=1;cout<<"疫苗"<<endl;} 
	if(a1==0&&a2==9||a1==9&&a2==0){ajia+=2;cout<<"疯狂生长"<<endl;}
	if(a1==1&&a2==1){bjian+=1;cout<<"双叉戟"<<endl;}
	if(a1==1&&a2==6||a1==6&&a2==1){bjian+=1;cout<<"弓箭"<<endl;}
	if(a1==1&&a2==8||a1==8&&a2==1){bjian+=1;cout<<"上膛"<<endl;}
	if(a1==1&&a2==9||a1==9&&a2==1){bjian+=2;cout<<"激光"<<endl;}
	if(a1==2&&a2==2){lla();} 
	if(a1==2&&a2==4||a1==4&&a2==2){bjian+=1;cout<<"二死"<<endl;}
	if(a1==2&&a2==8||a1==8&&a2==2){bjian+=2;cout<<"瞄准射击"<<endl;}
	if(a1==4&&a2==4){cout<<"决斗"<<endl;int juedou=boolsj();if(juedou==1){cout<<"胜利"<<endl;bjian+=2;}else cout<<"失败"<<endl;}
	if(a1==4&&a2==5||a1==5&&a2==4)if(xm58a<=0){cout<<"谢幕"<<endl;xm58a=3;bting+=1;ajia+=1;}
	if(a1==5&&a2==5)if(psxya<=0){cout<<"心猿归正"<<endl;psxya=4;bting+=2;}
	if(a1==5&&a2==8||a1==8&&a2==5)if(xm58a<=0){cout<<"58同城"<<endl;xm58a=3;bting+=1;}
	if(a1==6&&a2==6){cout<<"六六大顺"<<endl;ajia+=2;}
	if(a1==6&&a2==8||a1==8&&a2==6){cout<<"连锁"<<endl;liansuob=true;}
	if(a1==7&&a2==7){cout<<"心之偷"<<endl;bjian+=1;ajia+=1;}
	if(a1==7&&a2==8||a1==8&&a2==7){cout<<"白痴"<<endl;bjian+=1;}
	if(a1==7&&a2==9||a1==9&&a2==7){cout<<"吃牛排"<<endl;ajia+=1;}
	if(a1==8&&a2==8){cout<<"双枪"<<endl;bjian+=2;}
	if(a1==8&&a2==9||a1==9&&a2==8){cout<<"散弹"<<endl;bjian+=3;ajian+=1;}
	if(a1==9&&a2==9){cout<<"九九归一"<<endl<<"请输入您想要改变的数"<<endl;cin>>gui1x>>gui1y;a1=gui1x;a2=gui1y;pa();} 
	kb-=bjian;ka+=ajia;ka-=ajian;ztb-=bting;
	if(liansuoa){ka-=bjian;kb+=ajia;kb-=ajian;zta-=bting;}
	if(ka<=0&&kb<=0)
		{if(ka==kb){
					gameoverping();
					return;
					}
			else if(ka>kb){
			gameoverb();
			return;
		}
				else {
					gameovera();
					return;
					}}
	if(ka<=0){gameovera();
			return;
			}
	if(kb<=0){gameoverb();
			return;
			}
	}
void pb(){
if(ka<=0&&kb<=0)
		{if(ka==kb){
					gameoverping();
					return;
					}
			else if(ka>kb){
			gameoverb();
			return;
		}
				else {
					gameovera();
					return;
					}}
	if(ka<=0){gameovera();
			return;
			}
	if(kb<=0){gameoverb();
			return;
			}
	int gui1x,gui1y,bjian=0,ajian=0,bjia=0,ating=0;
	if(b1==0&&b2==0){ajian+=2;cout<<"拳击"<<endl;}
	if(b1==0&&b2==1||b1==1&&b2==0){ajian+=2;cout<<"苹果"<<endl;}
	if(b1==0&&b2==5||b1==5&&b2==0)if(psxyb<=0){cout<<"排山倒海"<<endl;psxyb=5;ztb+=3;peb();peb();peb();}
	if(b1==0&&b2==6||b1==6&&b2==0){ajian+=1;cout<<"绿帽"<<endl;}
	if(b1==0&&b2==8||b1==8&&b2==0){bjia+=1;cout<<"疫苗"<<endl;} 
	if(b1==0&&b2==9||b1==9&&b2==0){bjia+=2;cout<<"疯狂生长"<<endl;}
	if(b1==1&&b2==1){ajian+=1;cout<<"双叉戟"<<endl;}
	if(b1==1&&b2==6||b1==6&&b2==1){ajian+=1;cout<<"弓箭"<<endl;}
	if(b1==1&&b2==8||b1==8&&b2==1){ajian+=1;cout<<"上膛"<<endl;}
	if(b1==1&&b2==9||b1==9&&b2==1){ajian+=2;cout<<"激光"<<endl;}
	if(b1==2&&b2==2){llb();} 
	if(b1==2&&b2==4||b1==4&&b2==2){ajian+=1;cout<<"二死"<<endl;} 
	if(b1==2&&b2==8||b1==8&&b2==2){ajian+=2;cout<<"瞄准射击"<<endl;}
	if(b1==4&&b2==4){cout<<"决斗"<<endl;int juedou=boolsj();if(juedou==1){cout<<"胜利"<<endl;ajian+=2;}else cout<<"失败"<<endl;}
	if(b1==4&&b2==5||b1==5&&b2==4)if(xm58b<=0){cout<<"谢幕"<<endl;xm58b=3;ating+=1;bjia+=1;}
	if(b1==5&&b2==5)if(psxyb<=0){cout<<"心猿归正"<<endl;psxyb=4;ating+=2;}
	if(b1==5&&b2==8||b1==8&&b2==5)if(xm58b<=0){cout<<"58同城"<<endl;xm58b=3;ating+=1;}
	if(b1==6&&b2==6){cout<<"六六大顺"<<endl;bjia+=2;}
	if(b1==6&&b2==8||b1==8&&b2==6){cout<<"连锁"<<endl;liansuoa=true;}
	if(b1==7&&b2==7){cout<<"心之偷"<<endl;ajian+=1;bjia+=1;}
	if(b1==7&&b2==8||b1==8&&b2==7){cout<<"白痴"<<endl;ajian+=1;}
	if(b1==7&&b2==9||b1==9&&b2==7){cout<<"吃牛排"<<endl;bjia+=1;}
	if(b1==8&&b2==8){cout<<"双枪"<<endl;ajian+=2;}
	if(b1==8&&b2==9||a1==9&&a2==8){cout<<"散弹"<<endl;ajian+=3;bjian+=1;}
	if(b1==9&&b2==9){cout<<"九九归一"<<endl<<"请输入您想要改变的数"<<endl;cin>>gui1x>>gui1y;b1=gui1x;b2=gui1y;pb();}
	ka-=ajian;kb+=bjia;kb-=bjian;zta-=ating;
	if(liansuob){kb-=ajian;ka+=bjia;ka-=bjian;ztb-=ating;}
	if(ka<=0&&kb<=0)
		{if(ka==kb){
					gameoverping();
					return;
					}
			else if(ka>kb){
			gameoverb();
			return;
		}
				else {
					gameovera();
					return;
					}}
	if(ka<=0){gameovera();
			return;
			}
	if(kb<=0){gameoverb();
			return;
			}
	}
void a1b1(){
	a1+=b1;
	if(a1>=10)a1-=10;
	pa();} 
void a1b2(){
	a1+=b2;
	if(a1>=10)a1-=10;
	pa();} 
void a2b1(){
	a2+=b1;
	if(a2>=10)a2-=10;
	pa();} 
void a2b2(){
	a2+=b2;
	if(a2>=10)a2-=10;
	pa();}
void b1a1(){
	b1+=a1;
	if(b1>=10)b1-=10;
	pb();}            
void b1a2(){
	b1+=a2;
	if(b1>=10)b1-=10;
	pb();} 
void b2a1(){
	b2+=a1;
	if(b2>=10)b2-=10;
	pb();} 
void b2a2(){
	b2+=a2;
	if(b2>=10)b2-=10;
	pb();}
void coutzt(){
	cout<<"-----------------------------"<<endl;
	cout<<"         A     血量"<<endl<<"         "<<a1<<" "<<a2<<"     "<<ka<<endl;
	cout<<"         B     血量"<<endl<<"         "<<b1<<" "<<b2<<"     "<<kb<<endl;
	cout<<"-----------------------------"<<endl; 
	}
void pea(){
	if(zta>0){
		coutzt();
		cout<<"         轮到A了"<<endl<<"         ";
		if(b1==0&&b2==0)
		{
		cout<<"但是，B的数字是两个0，你不能碰。自动轮到对方。"<<endl;
		return;
		liansuob=0;
		zta--;
		psxya--;
		xm58a--;
		}
		char i=0,j=0;
		cin>>i>>j;
		liansuob=0;
		zta--;
		psxya--;
		xm58a--;
		if(b1!=0)
		{
		if(i=='1'&&j=='1')
			a1b1();
		if(i=='2'&&j=='1')
			a2b1();
		}
		else if(j=='1')
		{
		cout<<"不能碰0"<<endl;
		zta++;
		pea();
		}
		if(b2!=0)
		{
		if(i=='1'&&j=='2')
			a1b2();
		if(i=='2'&&j=='2')
			a2b2();
		}
		else if(j=='2')
		{
		cout<<"不能碰0"<<endl;
		zta++;
		pea();
		}
		if(i<'0'||i>'2'||j<'0'||j>'2') cout<<"您输入错误，视为不碰，自动轮到对方"<<endl;
		}
		}
void peb(){
	if(ztb>0){
		coutzt();
		cout<<"         轮到B了"<<endl<<"         ";
		if(a1==0&&a2==0)
		{
		cout<<"但是，A的数字是两个0，你不能碰。自动轮到对方。"<<endl;
		return;
		liansuoa=0;
		ztb--;
		psxyb--;
		xm58b--;
		}
		char i=0,j=0;
		cin>>i>>j;
		liansuoa=0;
		ztb--;
		psxyb--;
		xm58b--;
		if(a1!=0)
		{
		if(i=='1'&&j=='1')
			b1a1();
		if(i=='2'&&j=='1')
			b2a1();
		}
		else if(j=='1')
		{
		cout<<"不能碰0"<<endl;
		ztb++;
		peb();
		}
		if(a2!=0)
		{
		if(i=='1'&&j=='2')
			b1a2();
		if(i=='2'&&j=='2')
			b2a2();
		}
		else if(j=='2')
		{
		cout<<"不能碰0"<<endl;
		ztb++;
		peb();
		}
		if(i<'0'||i>'2'||j<'0'||j>'2') cout<<"您输入错误，视为不碰，自动轮到对方"<<endl;
		}
		}
void ongame()
	{
		system("CLS");
		system("color 4F");
		coutaas();
		a1=1;
		a2=1;
		b1=1;
		b2=1;
		int k;
		cout<<"初始血量？"<<endl;
		cin>>k;
		ka=k;
		kb=k;
		system("CLS");
		system("color 57");
		gameover=false;
		while(!gameover)
			{	
				zta++;
				pea();
			if(!gameover)
				{
				ztb++;
				peb();
				}
			else 
				{
					int fh;
					cout<<"0.退出 1.回到主界面 2.再来一局 3.观看注意事项 4.放逐区"<<endl; 
					cin>>fh;
					if(fh==0)
						return;
					else if(fh==1)
						{
							zhujiemian();
							return;
						}
					else if(fh==2)
						{
							ongame();
							return;
						}
					else 
						{
							cout<<"您输入错误，请重新输入"<<endl;
							int pdzz;
							cin>>pdzz;
							zjmfhpd(pdzz);
						}
				}
			}
	int fh;
	printf("0.退出 1.回到主界面 2.再来一局 3.观看注意事项 4.放逐区\n"); 
	scanf("%d",&fh);
	if(fh==0)
		return;
	if(fh==1)
	{
	zhujiemian();
	return;
	}
	if(fh==2)
	{
	ongame();
	return;
	}
	else 
	{
		cout<<"您输入错误，请重新输入"<<endl;
		int pdzz;
		cin>>pdzz;
		zjmfhpd(fh);
	}
	} 
void tjzh()
{
	system("CLS");
	cout<<"图鉴--组合\n";
	cout<<"1+1双叉戟 对方-1点\n";
	cout<<"1+6弓箭 对方-1点\n";
	cout<<"1+8 上膛 对方-1点\n";
	cout<<"1+9 激光 对方-2点\n";
	cout<<"1+0 苹果 对方-2点\n";
	cout<<"2+2 联立 改变对方1个数字\n";
	cout<<"2+4 二死 对方-1点（精神）\n";
	cout<<"2+8 瞄准射击 对方-2点\n";
	cout<<"3+6 绿帽 对方-1点（限不带0局）（精神）\n";
	cout<<"4+4 决斗 判定一次，若胜，对方-2点\n";
	cout<<"4+5 谢幕 自己+1点，对方停一回合 （冷却3回合）\n";
	cout<<"5+5 心猿归正 对方停两回合 （冷却4回合）\n";
	cout<<"5+5 太极拳 对方-2点（目前技术限制无法实现）\n";
	cout<<"5+8 58同城 对方停一回合 （冷却3回合）\n";
	cout<<"5+0 排山倒海 多碰三下\n"; 
	cout<<"6+6 六六大顺 自己回2点\n";
	cout<<"6+8 连锁 选择一个人，一回合内与自己同时获得同样的效果（除多碰外）\n";
	cout<<"6+0 对方-1点（精神）\n";
	cout<<"7+7 心之偷 对方-1，自己+1\n";
	cout<<"7+8 白痴 对方-1点（精神）\n";
	cout<<"7+9 吃牛排 自己+1点\n";
	cout<<"8+8 双枪 对方-2点或任选2人每人-1点\n";
	cout<<"8+9 散弹 对方-3点，自己-1点\n";
	cout<<"8+0 疫苗 自己+1点\n";
	cout<<"9+9 九九归一 变成任意两个数字\n";
	cout<<"9+0 疯狂生长 自己+2点\n";
	cout<<"0+0 拳击 对方-2点\n";
	cout<<endl;
}
void xttj()//在1.6版本基本实现自己选择使用技能的目标，防止连锁的搞笑场景 
{
	system("CLS");
	cout<<"图鉴--组合 系统\n";
	cout<<"1+1 双叉戟   id:00001"<<"\n";
	cout<<"1+6 弓箭     id:00002"<<"\n";
	cout<<"1+8 上膛     id:00003"<<"\n";
	cout<<"1+9 激光     id:00004"<<"\n";
	cout<<"1+0 苹果     id:00005"<<"\n";
	cout<<"2+2 联立     id:00006"<<"\n";
	cout<<"2+4 二死     id:00007"<<"\n";
	cout<<"2+8 瞄准射击 id:00008"<<"\n";
	cout<<"3+6 绿帽     id:00009"<<"\n";
	cout<<"4+4 决斗     id:00010"<<"\n";
	cout<<"4+5 谢幕     id:00011"<<"\n";
	cout<<"5+5 心猿归正 id:00012"<<"\n";
	cout<<"5+5 太极拳   id:00013"<<"\n";
	cout<<"5+8 58同城   id:00014"<<"\n";
	cout<<"5+0 排山倒海 id:00015"<<"\n"; 
	cout<<"6+6 六六大顺 id:00016"<<"\n";
	cout<<"6+8 连锁     id:00017"<<"\n";
	cout<<"6+0 绿帽     id:00018"<<"\n";
	cout<<"7+7 心之偷   id:00019"<<"\n";
	cout<<"7+8 白痴     id:00020"<<"\n";
	cout<<"7+9 吃牛排   id:00021"<<"\n";
	cout<<"8+8 双枪     id:00022"<<"\n";
	cout<<"8+9 散弹     id:00023"<<"\n";
	cout<<"8+0 疫苗     id:00024"<<"\n";
	cout<<"9+9 九九归一 id:00025"<<"\n";
	cout<<"9+0 疯狂生长 id:00026"<<"\n";
	cout<<"0+0 拳击     id:00027"<<"\n";
	cout<<endl;
	char pdsffdsa,jklsahfd,asjklfd;
	cin>>pdsffdsa>>jklsahfd>>asjklfd;
	if(pdsffdsa=='2'&&jklsahfd=='3'&&asjklfd=='3')return;
	for(int i=-2147483647;i<=2147483647;i++)
	system("pause");
}
void tj()
{
	system("CLS");
	cout<<"欢迎来到图鉴！"<<endl<<"1.图鉴--组合 2.图鉴--角色 3.系统图鉴--角色（请勿进入）"<<endl;
	int sr;
	cin>>sr;
	if(sr==1)
		tjzh();
	if(sr==3)
		xttj();
	
}
void zysx()
{
	system("CLS");
	cout<<"注意事项\n";
	cout<<"1.请不要以任何方式修改代码。\n";
	cout<<"2.请不要在程序运行时输入字母而使程序崩溃。\n";
	cout<<"3.不准喷作者。\n";
	cout<<"4.不要进入一些写明不可进入的地方\n\n";
}
void zjmfhpd(int srin)
{
	if(srin==0)
		return;
	if(srin==1)
		ongame();
	else if(srin==2)
	{
	tj();
	int fh;
	cout<<"0.退出 1.回到主界面 2.马上来一局"<<endl; 
	cin>>fh;
	if(fh==0)return;
	else if(fh==1)zhujiemian();
	else if(fh==2)ongame(); 
	else if(fh==3)zysx();
	else 
	{
		cout<<"您输入错误，请重新输入"<<endl;
		int pdzz;
		cin>>pdzz;
		zjmfhpd(pdzz);
	}
	} 
	else if(srin==3)
	{
	zysx();
	cout<<"0.退出 1.回到主界面 2.马上来一局"<<endl;
	int fh; 
	cin>>fh;
	if(fh==0)return;
	else if(fh==1)zhujiemian();
	else if(fh==2)ongame(); 
	else if(fh==3)zysx();
	else 
	{
		cout<<"您输入错误，请重新输入"<<endl;
		int pdzz;
		cin>>pdzz;
		zjmfhpd(pdzz);
	}
	} 
	else 
	{
	cout<<"您输入错误，请重新输入"<<endl;
	int pdzz;
	cin>>pdzz;
	zjmfhpd(pdzz);
	} 
} 
void zhujiemian()
{
	system("color 9F");
	system("CLS");
	coutaas();
	int srin;
	cout<<"欢迎来到C++AAS！"<<endl<<"0.退出 1.开始游戏 2.图鉴 3.注意事项"<<endl;
	cin>>srin;
	zjmfhpd(srin);
}
int main()
{
	zhujiemian();
	return 0;
}
/*更新日志*/ 
//2018.10.21晚 初步功德圆满  MANY BUGS (联立功能失败)(决斗永远胜利)（排山倒海失效） 代码长度100余行 
//2018.10.26晚 初步实现程序可视化 更改游戏界面 增加复制区  代码长度约200行 
//2018.10.27晚 19:14 Classic 修复决斗BUG 代码长度为300行 
//2018.11.01晚 19:49 Alpha1.0  对主界面进行更新 一次不再只可玩一局 开启图鉴--组合 代码长度为363行 
//2018.11.01晚 20:00 Alpha1.0.1 对游戏中越界现象进行声明 代码长度为367行 
//2018.11.01晚 20:09 Alpha1.0.2 修复游戏中第二次进行对局的直接退出BUG 代码长度为370行 
//2018.11.07晚 20:41 Alpha1.1 增加图鉴-组合及放逐区 
//2018.11.16晚 20:53 Alpha1.1.1 取消放逐区，修复联立，决斗BUG，代码532行 
//2018.11.17晚 21:29 Alpha1.1.2 增加系统图鉴，为以后选择使用技能做基础，并再次修复联立BUG，代码572行 
//2018.11.24下午 16:40 Alpha1.1.3 修复碰0BUG，代码590行 
void fuzhiqu(){} 

