#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

string b;
int x[]={1,2,4,8,16,32,64,128,256,512};

void C2B(char a)//ʮ������ת������
{
    int d;
    int r;
    b.clear();//�����ÿ�
    if(a>='0'&&a<='9') d=a-'0';//��ʮ��������
    else d=a-'W';
    do
    {//ѭ��ȡ��
        r=d%2;
        if(r==1) b.push_back('1');
        else b.push_back('0');
        d=d/2;
    }while(d!=0);
    while(b.size()!=4)//����
        b.push_back('0');
    reverse(b.begin(),b.end());//����
}

int H2D(string a)//������תʮ����
{
    int d=0;
    int l=a.size();
    for(int i=0;i<l;i++)
    {
        if(a[i]=='0') continue;
        d+=x[l-i-1];
    }
    return d;
}

int main()
{
    vector<char> A;
    vector<string> B;
    cout<<"��ճ�������Ƶ�ȫ���ֽڣ����ڽ�β�� # �ţ�"<<endl;
    char ch;
    while(ch=getchar(),ch!='#')//����
        A.push_back(ch);
    cout<<"��ȡ���..."<<endl;
    cout<<"���ڷ���..."<<endl;
    for(int i=7;i<=53;i++)//��������
    {
        if(A[i]==' ') continue;
        C2B(A[i]);
        B.push_back(b);
    }
    for(int i=81;i<=115;i++)
    {
        if(A[i]==' ') continue;
        C2B(A[i]);
        B.push_back(b);
    }
    cout<<"�������..."<<endl;
    cout<<"�������ȫ���ֽ���:"<<endl;
    for(auto i:A)
        cout<<i;
    cout<<endl;
    cout<<"����IP���ݱ�����Ϊ��"<<endl;
    for(int i=7;i<=53;i++)//ת��������
        cout<<A[i];
    cout<<' ';
    for(int i=81;i<=115;i++)
        cout<<A[i];
    cout<<endl;
    cout<<"ת��Ϊ������Ϊ��"<<endl;
    for(int i=0;i<28;i++)
    {
        if(i==14) cout<<endl;
        cout<<B[i]<<' ';
    }
    //����
    cout<<endl<<"�������Ϊ��"<<endl;
    //Ӳ������
    cout<<B[0]<<' '<<B[1]<<' '<<B[2]<<' '<<B[3]<<"........................................ ����";
    cout<<"Ӳ������Ϊ "<<A[7]<<A[8]<<A[10]<<A[11]<<'H'<<endl;
    //Э������
    cout<<B[4]<<' '<<B[5]<<' '<<B[6]<<' '<<B[7]<<"........................................ ����";
    cout<<"Э������Ϊ "<<A[13]<<A[14]<<A[16]<<A[17]<<'H'<<endl;
    //Ӳ������
    cout<<B[8]<<' '<<B[9]<<".................................................. ����";
    cout<<"Ӳ������Ϊ "<<H2D(B[8]+B[9])<<endl;
    //Э�鳤��
    cout<<B[10]<<' '<<B[11]<<".................................................. ����";
    cout<<"Э�鳤��Ϊ "<<H2D(B[10]+B[11])<<endl;
    //����
    cout<<B[12]<<' '<<B[13]<<' '<<B[14]<<' '<<B[15]<<"........................................ ����";
    cout<<"����Ϊ "<<A[25]<<A[26]<<A[28]<<A[29]<<'H'<<endl;
    //����վӲ����ַ
    cout<<B[16]<<' '<<B[17]<<' '<<B[18]<<' '<<B[19]<<' '<<B[20]<<' '<<B[21]<<' '<<B[22]<<' '<<B[23]<<' '<<B[24]<<' '<<B[25]<<' '<<B[26]<<' '<<B[27]<<" ����";
    cout<<"����վӲ����ַΪ "<<A[31]<<A[32]<<A[34]<<A[35]<<A[37]<<A[38]<<A[40]<<A[41]<<A[43]<<A[44]<<A[46]<<A[47]<<'H'<<endl;
    //����վIP��ַ
    cout<<B[28]<<' '<<B[29]<<' '<<B[30]<<' '<<B[31]<<' '<<B[32]<<' '<<B[33]<<' '<<B[34]<<' '<<B[35]<<".................... ����";
    cout<<"����վIP��ַΪ "<<A[49]<<A[50]<<A[52]<<A[53]<<A[81]<<A[82]<<A[84]<<A[85]<<'H'<<endl;
    //Ŀ��վӲ����ַ
    cout<<B[36]<<' '<<B[37]<<' '<<B[38]<<' '<<B[39]<<' '<<B[40]<<' '<<B[41]<<' '<<B[42]<<' '<<B[43]<<' '<<B[44]<<' '<<B[45]<<' '<<B[46]<<' '<<B[47]<<" ����";
    cout<<"����վӲ����ַΪ "<<A[87]<<A[88]<<A[90]<<A[91]<<A[93]<<A[94]<<A[96]<<A[97]<<A[99]<<A[101]<<A[102]<<A[103]<<'H'<<endl;
    //Ŀ��վIP��ַ
    cout<<B[48]<<' '<<B[49]<<' '<<B[50]<<' '<<B[51]<<' '<<B[52]<<' '<<B[53]<<' '<<B[54]<<' '<<B[55]<<".................... ����";
    cout<<"Ŀ��վIP��ַΪ "<<A[105]<<A[106]<<A[108]<<A[109]<<A[111]<<A[112]<<A[114]<<A[115]<<'H'<<endl;
    cout<<endl;
    return 0;
}