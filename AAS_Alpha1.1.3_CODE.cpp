#pragma GCC optimize(2.5)
#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
#include<string>
#include<cmath>
#include<iomanip>  
using namespace std;
bool liansuoa=0,liansuob=0,gameover=0;//liansuoΪ������ 
int a1=1,a2=1,b1=1,b2=1,zta=0,ztb=0,ka,kb,psxya=0,psxyb=0,xm58a=0,xm58b=0;//"zt"�����a��b����Ȩ�� 
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
	cout<<"��Ϸ����"<<endl<<"A:"<<kb<<"��Ѫ "<<"B:"<<ka<<"��Ѫ\n"<<"Bȡ��ʤ����"<<endl;
	coutaas();
	gameover=1;
	return;
	}
void gameoverb()
	{
	system("CLS");
	cout<<"��Ϸ����"<<endl<<"A:"<<ka<<"��Ѫ "<<"B:"<<kb<<"��Ѫ\n"<<"Aȡ��ʤ����"<<endl;
	coutaas();
	gameover=1;
	return;
	}
void gameoverping()
	{
	system("CLS");
	cout<<"��Ϸ����"<<endl<<"A:"<<ka<<"��Ѫ "<<"B:"<<kb<<"��Ѫ\n"<<"ƽ�֣�"<<endl;
	coutaas();
	gameover=1;
	return;
	}
void lla()
{
	int lianlix;
	int lianliy;
	cout<<"����"<<endl<<"��Ҫ���Է��ĸ����ָı䣿"<<endl;
	cin>>lianlix;
	cout<<"��Ҫ�����ĳɣ�"<<endl;
	cin>>lianliy;
	if(lianlix==1)b1=lianliy;
	if(lianlix==2)b2=lianliy;
} 
void llb()
{
	int lianlix;
	int lianliy;
	cout<<"����"<<endl<<"��Ҫ���Է��ĸ����ָı䣿"<<endl;
	cin>>lianlix;
	cout<<"��Ҫ�����ĳɣ�"<<endl;
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
	if(a1==0&&a2==0){bjian+=2;cout<<"ȭ��"<<endl;}
	if(a1==0&&a2==1||a1==1&&a2==0){bjian+=2;cout<<"ƻ��"<<endl;}
	if(a1==0&&a2==5||a1==5&&a2==0)if(psxya<=0){cout<<"��ɽ����"<<endl;psxya=5;zta+=3;pea();pea();pea();}
	if(a1==0&&a2==6||a1==6&&a2==0){bjian+=1;cout<<"��ñ"<<endl;}//2018.10.19�� ��ɶ�12% 
	if(a1==0&&a2==8||a1==8&&a2==0){ajia+=1;cout<<"����"<<endl;} 
	if(a1==0&&a2==9||a1==9&&a2==0){ajia+=2;cout<<"�������"<<endl;}
	if(a1==1&&a2==1){bjian+=1;cout<<"˫���"<<endl;}
	if(a1==1&&a2==6||a1==6&&a2==1){bjian+=1;cout<<"����"<<endl;}
	if(a1==1&&a2==8||a1==8&&a2==1){bjian+=1;cout<<"����"<<endl;}
	if(a1==1&&a2==9||a1==9&&a2==1){bjian+=2;cout<<"����"<<endl;}
	if(a1==2&&a2==2){lla();} 
	if(a1==2&&a2==4||a1==4&&a2==2){bjian+=1;cout<<"����"<<endl;}
	if(a1==2&&a2==8||a1==8&&a2==2){bjian+=2;cout<<"��׼���"<<endl;}
	if(a1==4&&a2==4){cout<<"����"<<endl;int juedou=boolsj();if(juedou==1){cout<<"ʤ��"<<endl;bjian+=2;}else cout<<"ʧ��"<<endl;}
	if(a1==4&&a2==5||a1==5&&a2==4)if(xm58a<=0){cout<<"лĻ"<<endl;xm58a=3;bting+=1;ajia+=1;}
	if(a1==5&&a2==5)if(psxya<=0){cout<<"��Գ����"<<endl;psxya=4;bting+=2;}
	if(a1==5&&a2==8||a1==8&&a2==5)if(xm58a<=0){cout<<"58ͬ��"<<endl;xm58a=3;bting+=1;}
	if(a1==6&&a2==6){cout<<"������˳"<<endl;ajia+=2;}
	if(a1==6&&a2==8||a1==8&&a2==6){cout<<"����"<<endl;liansuob=true;}
	if(a1==7&&a2==7){cout<<"��֮͵"<<endl;bjian+=1;ajia+=1;}
	if(a1==7&&a2==8||a1==8&&a2==7){cout<<"�׳�"<<endl;bjian+=1;}
	if(a1==7&&a2==9||a1==9&&a2==7){cout<<"��ţ��"<<endl;ajia+=1;}
	if(a1==8&&a2==8){cout<<"˫ǹ"<<endl;bjian+=2;}
	if(a1==8&&a2==9||a1==9&&a2==8){cout<<"ɢ��"<<endl;bjian+=3;ajian+=1;}
	if(a1==9&&a2==9){cout<<"�žŹ�һ"<<endl<<"����������Ҫ�ı����"<<endl;cin>>gui1x>>gui1y;a1=gui1x;a2=gui1y;pa();} 
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
	if(b1==0&&b2==0){ajian+=2;cout<<"ȭ��"<<endl;}
	if(b1==0&&b2==1||b1==1&&b2==0){ajian+=2;cout<<"ƻ��"<<endl;}
	if(b1==0&&b2==5||b1==5&&b2==0)if(psxyb<=0){cout<<"��ɽ����"<<endl;psxyb=5;ztb+=3;peb();peb();peb();}
	if(b1==0&&b2==6||b1==6&&b2==0){ajian+=1;cout<<"��ñ"<<endl;}
	if(b1==0&&b2==8||b1==8&&b2==0){bjia+=1;cout<<"����"<<endl;} 
	if(b1==0&&b2==9||b1==9&&b2==0){bjia+=2;cout<<"�������"<<endl;}
	if(b1==1&&b2==1){ajian+=1;cout<<"˫���"<<endl;}
	if(b1==1&&b2==6||b1==6&&b2==1){ajian+=1;cout<<"����"<<endl;}
	if(b1==1&&b2==8||b1==8&&b2==1){ajian+=1;cout<<"����"<<endl;}
	if(b1==1&&b2==9||b1==9&&b2==1){ajian+=2;cout<<"����"<<endl;}
	if(b1==2&&b2==2){llb();} 
	if(b1==2&&b2==4||b1==4&&b2==2){ajian+=1;cout<<"����"<<endl;} 
	if(b1==2&&b2==8||b1==8&&b2==2){ajian+=2;cout<<"��׼���"<<endl;}
	if(b1==4&&b2==4){cout<<"����"<<endl;int juedou=boolsj();if(juedou==1){cout<<"ʤ��"<<endl;ajian+=2;}else cout<<"ʧ��"<<endl;}
	if(b1==4&&b2==5||b1==5&&b2==4)if(xm58b<=0){cout<<"лĻ"<<endl;xm58b=3;ating+=1;bjia+=1;}
	if(b1==5&&b2==5)if(psxyb<=0){cout<<"��Գ����"<<endl;psxyb=4;ating+=2;}
	if(b1==5&&b2==8||b1==8&&b2==5)if(xm58b<=0){cout<<"58ͬ��"<<endl;xm58b=3;ating+=1;}
	if(b1==6&&b2==6){cout<<"������˳"<<endl;bjia+=2;}
	if(b1==6&&b2==8||b1==8&&b2==6){cout<<"����"<<endl;liansuoa=true;}
	if(b1==7&&b2==7){cout<<"��֮͵"<<endl;ajian+=1;bjia+=1;}
	if(b1==7&&b2==8||b1==8&&b2==7){cout<<"�׳�"<<endl;ajian+=1;}
	if(b1==7&&b2==9||b1==9&&b2==7){cout<<"��ţ��"<<endl;bjia+=1;}
	if(b1==8&&b2==8){cout<<"˫ǹ"<<endl;ajian+=2;}
	if(b1==8&&b2==9||a1==9&&a2==8){cout<<"ɢ��"<<endl;ajian+=3;bjian+=1;}
	if(b1==9&&b2==9){cout<<"�žŹ�һ"<<endl<<"����������Ҫ�ı����"<<endl;cin>>gui1x>>gui1y;b1=gui1x;b2=gui1y;pb();}
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
	cout<<"         A     Ѫ��"<<endl<<"         "<<a1<<" "<<a2<<"     "<<ka<<endl;
	cout<<"         B     Ѫ��"<<endl<<"         "<<b1<<" "<<b2<<"     "<<kb<<endl;
	cout<<"-----------------------------"<<endl; 
	}
void pea(){
	if(zta>0){
		coutzt();
		cout<<"         �ֵ�A��"<<endl<<"         ";
		if(b1==0&&b2==0)
		{
		cout<<"���ǣ�B������������0���㲻�������Զ��ֵ��Է���"<<endl;
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
		cout<<"������0"<<endl;
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
		cout<<"������0"<<endl;
		zta++;
		pea();
		}
		if(i<'0'||i>'2'||j<'0'||j>'2') cout<<"�����������Ϊ�������Զ��ֵ��Է�"<<endl;
		}
		}
void peb(){
	if(ztb>0){
		coutzt();
		cout<<"         �ֵ�B��"<<endl<<"         ";
		if(a1==0&&a2==0)
		{
		cout<<"���ǣ�A������������0���㲻�������Զ��ֵ��Է���"<<endl;
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
		cout<<"������0"<<endl;
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
		cout<<"������0"<<endl;
		ztb++;
		peb();
		}
		if(i<'0'||i>'2'||j<'0'||j>'2') cout<<"�����������Ϊ�������Զ��ֵ��Է�"<<endl;
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
		cout<<"��ʼѪ����"<<endl;
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
					cout<<"0.�˳� 1.�ص������� 2.����һ�� 3.�ۿ�ע������ 4.������"<<endl; 
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
							cout<<"�������������������"<<endl;
							int pdzz;
							cin>>pdzz;
							zjmfhpd(pdzz);
						}
				}
			}
	int fh;
	printf("0.�˳� 1.�ص������� 2.����һ�� 3.�ۿ�ע������ 4.������\n"); 
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
		cout<<"�������������������"<<endl;
		int pdzz;
		cin>>pdzz;
		zjmfhpd(fh);
	}
	} 
void tjzh()
{
	system("CLS");
	cout<<"ͼ��--���\n";
	cout<<"1+1˫��� �Է�-1��\n";
	cout<<"1+6���� �Է�-1��\n";
	cout<<"1+8 ���� �Է�-1��\n";
	cout<<"1+9 ���� �Է�-2��\n";
	cout<<"1+0 ƻ�� �Է�-2��\n";
	cout<<"2+2 ���� �ı�Է�1������\n";
	cout<<"2+4 ���� �Է�-1�㣨����\n";
	cout<<"2+8 ��׼��� �Է�-2��\n";
	cout<<"3+6 ��ñ �Է�-1�㣨�޲���0�֣�������\n";
	cout<<"4+4 ���� �ж�һ�Σ���ʤ���Է�-2��\n";
	cout<<"4+5 лĻ �Լ�+1�㣬�Է�ͣһ�غ� ����ȴ3�غϣ�\n";
	cout<<"5+5 ��Գ���� �Է�ͣ���غ� ����ȴ4�غϣ�\n";
	cout<<"5+5 ̫��ȭ �Է�-2�㣨Ŀǰ���������޷�ʵ�֣�\n";
	cout<<"5+8 58ͬ�� �Է�ͣһ�غ� ����ȴ3�غϣ�\n";
	cout<<"5+0 ��ɽ���� ��������\n"; 
	cout<<"6+6 ������˳ �Լ���2��\n";
	cout<<"6+8 ���� ѡ��һ���ˣ�һ�غ������Լ�ͬʱ���ͬ����Ч�����������⣩\n";
	cout<<"6+0 �Է�-1�㣨����\n";
	cout<<"7+7 ��֮͵ �Է�-1���Լ�+1\n";
	cout<<"7+8 �׳� �Է�-1�㣨����\n";
	cout<<"7+9 ��ţ�� �Լ�+1��\n";
	cout<<"8+8 ˫ǹ �Է�-2�����ѡ2��ÿ��-1��\n";
	cout<<"8+9 ɢ�� �Է�-3�㣬�Լ�-1��\n";
	cout<<"8+0 ���� �Լ�+1��\n";
	cout<<"9+9 �žŹ�һ ���������������\n";
	cout<<"9+0 ������� �Լ�+2��\n";
	cout<<"0+0 ȭ�� �Է�-2��\n";
	cout<<endl;
}
void xttj()//��1.6�汾����ʵ���Լ�ѡ��ʹ�ü��ܵ�Ŀ�꣬��ֹ�����ĸ�Ц���� 
{
	system("CLS");
	cout<<"ͼ��--��� ϵͳ\n";
	cout<<"1+1 ˫���   id:00001"<<"\n";
	cout<<"1+6 ����     id:00002"<<"\n";
	cout<<"1+8 ����     id:00003"<<"\n";
	cout<<"1+9 ����     id:00004"<<"\n";
	cout<<"1+0 ƻ��     id:00005"<<"\n";
	cout<<"2+2 ����     id:00006"<<"\n";
	cout<<"2+4 ����     id:00007"<<"\n";
	cout<<"2+8 ��׼��� id:00008"<<"\n";
	cout<<"3+6 ��ñ     id:00009"<<"\n";
	cout<<"4+4 ����     id:00010"<<"\n";
	cout<<"4+5 лĻ     id:00011"<<"\n";
	cout<<"5+5 ��Գ���� id:00012"<<"\n";
	cout<<"5+5 ̫��ȭ   id:00013"<<"\n";
	cout<<"5+8 58ͬ��   id:00014"<<"\n";
	cout<<"5+0 ��ɽ���� id:00015"<<"\n"; 
	cout<<"6+6 ������˳ id:00016"<<"\n";
	cout<<"6+8 ����     id:00017"<<"\n";
	cout<<"6+0 ��ñ     id:00018"<<"\n";
	cout<<"7+7 ��֮͵   id:00019"<<"\n";
	cout<<"7+8 �׳�     id:00020"<<"\n";
	cout<<"7+9 ��ţ��   id:00021"<<"\n";
	cout<<"8+8 ˫ǹ     id:00022"<<"\n";
	cout<<"8+9 ɢ��     id:00023"<<"\n";
	cout<<"8+0 ����     id:00024"<<"\n";
	cout<<"9+9 �žŹ�һ id:00025"<<"\n";
	cout<<"9+0 ������� id:00026"<<"\n";
	cout<<"0+0 ȭ��     id:00027"<<"\n";
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
	cout<<"��ӭ����ͼ����"<<endl<<"1.ͼ��--��� 2.ͼ��--��ɫ 3.ϵͳͼ��--��ɫ��������룩"<<endl;
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
	cout<<"ע������\n";
	cout<<"1.�벻Ҫ���κη�ʽ�޸Ĵ��롣\n";
	cout<<"2.�벻Ҫ�ڳ�������ʱ������ĸ��ʹ���������\n";
	cout<<"3.��׼�����ߡ�\n";
	cout<<"4.��Ҫ����һЩд�����ɽ���ĵط�\n\n";
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
	cout<<"0.�˳� 1.�ص������� 2.������һ��"<<endl; 
	cin>>fh;
	if(fh==0)return;
	else if(fh==1)zhujiemian();
	else if(fh==2)ongame(); 
	else if(fh==3)zysx();
	else 
	{
		cout<<"�������������������"<<endl;
		int pdzz;
		cin>>pdzz;
		zjmfhpd(pdzz);
	}
	} 
	else if(srin==3)
	{
	zysx();
	cout<<"0.�˳� 1.�ص������� 2.������һ��"<<endl;
	int fh; 
	cin>>fh;
	if(fh==0)return;
	else if(fh==1)zhujiemian();
	else if(fh==2)ongame(); 
	else if(fh==3)zysx();
	else 
	{
		cout<<"�������������������"<<endl;
		int pdzz;
		cin>>pdzz;
		zjmfhpd(pdzz);
	}
	} 
	else 
	{
	cout<<"�������������������"<<endl;
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
	cout<<"��ӭ����C++AAS��"<<endl<<"0.�˳� 1.��ʼ��Ϸ 2.ͼ�� 3.ע������"<<endl;
	cin>>srin;
	zjmfhpd(srin);
}
int main()
{
	zhujiemian();
	return 0;
}
/*������־*/ 
//2018.10.21�� ��������Բ��  MANY BUGS (��������ʧ��)(������Զʤ��)����ɽ����ʧЧ�� ���볤��100���� 
//2018.10.26�� ����ʵ�ֳ�����ӻ� ������Ϸ���� ���Ӹ�����  ���볤��Լ200�� 
//2018.10.27�� 19:14 Classic �޸�����BUG ���볤��Ϊ300�� 
//2018.11.01�� 19:49 Alpha1.0  ����������и��� һ�β���ֻ����һ�� ����ͼ��--��� ���볤��Ϊ363�� 
//2018.11.01�� 20:00 Alpha1.0.1 ����Ϸ��Խ������������� ���볤��Ϊ367�� 
//2018.11.01�� 20:09 Alpha1.0.2 �޸���Ϸ�еڶ��ν��жԾֵ�ֱ���˳�BUG ���볤��Ϊ370�� 
//2018.11.07�� 20:41 Alpha1.1 ����ͼ��-��ϼ������� 
//2018.11.16�� 20:53 Alpha1.1.1 ȡ�����������޸�����������BUG������532�� 
//2018.11.17�� 21:29 Alpha1.1.2 ����ϵͳͼ����Ϊ�Ժ�ѡ��ʹ�ü��������������ٴ��޸�����BUG������572�� 
//2018.11.24���� 16:40 Alpha1.1.3 �޸���0BUG������590�� 
void fuzhiqu(){} 

