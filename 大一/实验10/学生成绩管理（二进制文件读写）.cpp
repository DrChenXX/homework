#include  <iostream>
using  namespace  std;

/*
        ����ṹ��student���ڱ�ʾѧ���Ļ�����Ϣ����������ṹ
*/
struct  student
{
        int  no;                                                                                                                                          //  ѧ��
        char  name[20],  sex;                                                                                              //  �����Լ��Ա�,  ��˼�������name[20]�޸�Ϊ*name������������������ʺϱ���Ĵ���ʽ��
        int  age;                                                                                                                                      //  ����
        float  chinese,  computer;                                                                                  //  ��ʾ���ſγ̵ĳɼ�
        student  *next;
        bool  operator<(const  student  &another)  const            //  ���������  <  (С��)�����ڽṹ�����֮��ıȽϣ���LinkSort�бȽ�����������ڵ��С
        {
                return  chinese + computer < another.chinese + another.computer;
        }
};

student*  ReadFile(FILE  *fp,  student  *head,  int  &n);            //  �Ӷ������ļ�(�ļ�ָ��Ϊfp)�н��������ݶ��룬�洢����headΪͷָ���������
void  display(student  *head);                                                                                    //  ������ʾ���������
void  WriteFile(FILE  *fp,  student  *head);                                                //  ����headΪͷָ��������е�����д��������ļ�(�ļ�ָ��Ϊfp)
student*  input(student  *head,  int  &n);                                                      //  �����µ����ݣ������������ӵ�����ĩβ
student*  LinkSort(student  *head,  const  int  &n);                        //  ʵ�ֶ���������򣬰��ܳɼ��Ӵ�С���У�ð������
void  swapNode(student  *s,  student  *q);                                              //  ʵ�ֶ�����ڵ�����ݽ�������������,  �ں���LinkSort�е���

int  main()
{
        int  n  =  0;                                                                                                                                                        //  �������n�����ڴ洢ѧ������
        student  *head  =  NULL;                                                                                                          //  ����ͷָ��
        FILE  *fp;

        fp  =  fopen("grade.bin","rb");                                                    //  �򿪶������ļ������ڶ�д�Լ���Ӽ�¼  
        head  =  ReadFile(fp,head,n);
        display(head);
        fclose(fp);

        head  =  input(head,  n);
        head  =  LinkSort(head,  n);

        fp  =  fopen("grade.bin",  "wb");
        WriteFile(fp,  head);
        fclose(fp);

        return  0;
}

student*  ReadFile(FILE*  fp,  student*  head,  int  &n)              //������������fread���������ݿ飬��������ǳ�����                                                
{
        student  *q  =  head;
        if  (head)
                while(q->next)  q  =  q->next;

        while(1)
        {
                student  *p  =  new  student;                                                                          //  ���ڴ洢��������ݿ�
                if  (!fread(p, sizeof(student),1,fp))                                                                        //  ���ļ�fp�ж����СΪsizeof(student)�����ݿ飬�������ڴ滺����p֮��,  fread�����ض�����ֽ��������Ϊ0����������ļ�
                {
                        delete  p;
                        break;
                }
                p->next  =  NULL;
                if  (!head)
                        head  =  p;
                else
                        q->next  =  p;

                q  =  p;
                n++;
        }

        return  head;
}

void  WriteFile(FILE  *fp,  student  *head)                              //������������fwrite����д���ݿ飬��������ǳ�����              
{
        while(head)
        {
                fwrite(head,sizeof(*head),1,fp);                          //  ��������head�е�����(���ݿ�)д���ļ���
                head  =  head->next;
        }
}


void  display(student*  head)
{
        student  *p  =  head;
        while(p)
        {
            cout << "No: " << p->no << endl;
			cout << "Name: " << p->name << endl;
			cout << "Sex: " << p->sex << endl;
			cout << "Age: " << p->age << endl;
			cout << "Scores: " << p->chinese << " " << p->computer << endl;
			cout << endl;
			p = p->next;
		}
}

student*  input(student*  head,  int  &n)
{

        student  *q  =  head;

        if  (head)
                while(q->next)  q  =  q->next;

        while(1)
        {
                printf("Input  continue(y/n)?");
                if  (getchar()  !=  'y')
                        break;

                student  *p  =  new  student;

                printf("No:  ");
                scanf("%d",  &p->no);
                getchar();
                printf("Name:  ");
                gets(p->name);
                printf("Sex(M/F):  ");
                p->sex  =  getchar();
                printf("Age:  ");
                scanf("%d",  &p->age);
                printf("Chinese  score:  ");
                scanf("%f",  &p->chinese);
                printf("Computer  score:  ");
                scanf("%f",  &p->computer);
                p->next  =  NULL;
                getchar();

                if  (!head)
                        head  =  p;
                else
                        q->next  =  p;

                q  =  p;
                n++;
        }

        return  head;
}

student*  LinkSort(student*  head,  const  int  &n)
{
        student  *p;
        for(int  i  =  1;  i  <=  n  -  1;  i++)
        {
                p  =  head;
                for(int  j  =  1;  j  <=  n  -  i;  j++)
                {
                        if  (*p  <  *p->next)
                        {
                                swapNode(p,p->next);                                                        //  �����ڵ�ֵ
                        }
                        p  =  p->next;
                }
        }

        return  head;
}

void  swapNode(student*  s,  student*  q)
{
        student  *snext  =  s->next,  *qnext  =  q->next,  tmp;
        tmp  =  *s;
        *s  =  *q;
        *q  =  tmp;
        s->next  =  snext;
        q->next  =  qnext;
} 
