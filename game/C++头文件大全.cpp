#include<bits/stdc++.h>
using namespace std;
int main()
{
/*c++ͷ�ļ�: 

#include <bits/stdc++.h>   //����ͷ�ļ�������˵��ͷ�ļ�����ĳЩc++ �в���ʹ�� 

#include <algorithm>������ //STLͨ���㷨

#include <bitset>����������//STLλ������

#include <complex>�������� //������

#include <deque>���������� //STL˫�˶�������

#include <exception>������ //�쳣������

#include <functional>������//STL�������㺯���������������

#include <list>������������//STL�����б�����

#include <map>������������ //STL ӳ������

#include <ios>������������ //�������룯���֧��

#include <iosfwd>����������//���룯���ϵͳʹ�õ�ǰ������

#include <istream>�������� //����������

#include <ostream>�������� //���������

#include <queue>���������� //STL��������

#include <set>������������ //STL ��������

#include <sstream>�������� //�����ַ�������

#include <stack>���������� //STL��ջ����������
��
#include <stdexcept>������ //��׼�쳣��

#include <streambuf>������ //�ײ����룯���֧��

#include <string>����������//�ַ�����

#include <utility>�������� //STLͨ��ģ����

#include <vector>����������//STL��̬��������

#include <assert.h>��������//�趨�����

#include <ctype.h>�������� //�ַ�����

#include <errno.h>�������� //���������

#include <float.h>�������� //����������

#include <fstream.h>������ //�ļ����룯���

#include <iomanip.h>������ //���������룯���

#include <iostream.h>������//���������룯���

#include <limits.h>��������//�����������������ֵ����

#include <locale.h>��������//���屾�ػ�����

#include <math.h>����������//������ѧ����

#include <stdio.h>�������� //�������룯�������

#include <stdlib.h>��������//������������ڴ���亯��

#include <string.h>��������//�ַ�������

#include <strstrea.h>������//������������룯���

#include <time.h>����������//�������ʱ��ĺ���

#include <wchar.h>�������� //���ַ��������룯���

#include <wctype.h>��������//���ַ�����

����: 

���ຯ��,���ں�����Ϊctype.h

int isalpha(int ch) ��ch����ĸ('A'-'Z','a'-'z')���ط�0ֵ,���򷵻�0

int isalnum(int ch) ��ch����ĸ('A'-'Z','a'-'z')������('0'-'9') ���ط�0ֵ,���򷵻�0

int isascii(int ch) ��ch���ַ�(ASCII���е�0-127)���ط�0ֵ,���򷵻�0

int iscntrl(int ch) ��ch�������ַ�(0x7F)����ͨ�����ַ�(0x00-0x1F) ���ط�0ֵ,���򷵻�0

int isdigit(int ch) ��ch������('0'-'9')���ط�0ֵ,���򷵻�0

int isgraph(int ch) ��ch�ǿɴ�ӡ�ַ�(�����ո�)(0x21-0x7E)���ط�0ֵ,���򷵻�0

int islower(int ch) ��ch��Сд��ĸ('a'-'z')���ط�0ֵ,���򷵻�0

int isprint(int ch) ��ch�ǿɴ�ӡ�ַ�(���ո�)(0x20-0x7E)���ط�0ֵ,���򷵻�0

int ispunct(int ch) ��ch�Ǳ���ַ�(0x00-0x1F)���ط�0ֵ,���򷵻�0

int isspace(int ch)  ��ch�ǿո�(''),ˮƽ�Ʊ��('\t'),�س���('\r'), ��ֽ����('\f'),��ֱ�Ʊ��('\v'),���з�('\n')���ط�0ֵ,���򷵻�0

int isupper(int ch) ��ch�Ǵ�д��ĸ('A'-'Z')���ط�0ֵ,���򷵻�0

int isxdigit(int ch)��ch��16������('0'-'9','A'-'F','a'-'f')���ط�0ֵ, ���򷵻�0

int tolower(int ch) ��ch�Ǵ�д��ĸ('A'-'Z')������Ӧ��Сд��ĸ('a'-'z')

int toupper(int ch) ��ch��Сд��ĸ('a'-'z')������Ӧ�Ĵ�д��ĸ('A'-'Z')

��ѧ����,���ں�����Ϊmath.h��stdlib.h��string.h��float.h

int     abs(inti)                   �������Ͳ���i�ľ���ֵ

double  cabs(struct complexznum)     ���ظ���znum�ľ���ֵ

double  fabs(doublex)                ����˫���Ȳ���x�ľ���ֵ

long   labs(longn)                  ���س����Ͳ���n�ľ���ֵ

double   exp(doublex)                ����ָ������ex��ֵ

double frexp(double value,int*eptr)  ����value=x*2n��x��ֵ,n������eptr��

double ldexp(double value,intexp);   ����value*2exp��ֵ

double   log(doublex)                ����logex��ֵ

double log10(doublex)                ����log10x��ֵ

double   pow(double x,doubley)       ����xy��ֵ

double pow10(intp)                   ����10p��ֵ

double  sqrt(doublex)                ����+��x��ֵ

double  acos(doublex)                ����x�ķ�����cos-1(x)ֵ,xΪ����

double  asin(doublex)                ����x�ķ�����sin-1(x)ֵ,xΪ����

double  atan(doublex)                ����x�ķ�����tan-1(x)ֵ,xΪ����

double atan2(double y,doublex)       ����y/x�ķ�����tan-1(x)ֵ,y��xΪ����

double   cos(doublex)                ����x������cos(x)ֵ,xΪ����

double   sin(doublex)                ����x������sin(x)ֵ,xΪ����

double   tan(doublex)                ����x������tan(x)ֵ,xΪ����

double  cosh(doublex)                ����x��˫������cosh(x)ֵ,xΪ����

double  sinh(doublex)                ����x��˫������sinh(x)ֵ,xΪ����

double  tanh(doublex)                ����x��˫������tanh(x)ֵ,xΪ����

double hypot(double x,doubley)       ����ֱ��������б�ߵĳ���(z), x��yΪֱ�Ǳߵĳ���,z2=x2+y2

double  ceil(doublex)                ���ز�С��x����С����

double floor(doublex)                ���ز�����x���������

void   srand(unsignedseed)           ��ʼ�������������

int    rand()                        ����һ������������������

double  poly(double x,int n,double c[])�Ӳ�������һ������ʽ

double  modf(double value,double *iptr)��˫������value�ֽ��β���ͽ�

double  fmod(double x,doubley)       ����x/y������

double frexp(double value,int*eptr)   ��˫������value�ֳ�β���ͽ�

double  atof(char*nptr)              ���ַ���nptrת���ɸ��������������������

double  atoi(char*nptr)              ���ַ���nptrת���������������������

double  atol(char*nptr)              ���ַ���nptrת���ɳ������������������

char   *ecvt(double value,intndigit,int *decpt,int *sign) ��������valueת�����ַ��������ظ��ַ���

char   *fcvt(double value,intndigit,int *decpt,int *sign) ��������valueת�����ַ��������ظ��ַ���

char   *gcvt(double value,intndigit,char *buf) ����valueת�����ַ���������buf��,������buf��ָ��

char  *ultoa(unsigned long value,char*string,int radix) ���޷���������valueת�����ַ��������ظ��ַ���,radixΪת��ʱ���û���

char   *ltoa(long value,char*string,int radix) ����������valueת�����ַ��������ظ��ַ���,radixΪת��ʱ���û���

char   *itoa(int value,char*string,int radix) ������valueת�����ַ�������string,radixΪת��ʱ���û���

double atof(char *nptr) ���ַ���nptrת����˫������,�����������,���󷵻�0

int   atoi(char *nptr) ���ַ���nptrת����������,  �����������,���󷵻�0

long   atol(char *nptr)���ַ���nptrת���ɳ�������,�����������,���󷵻�0

double strtod(char *str,char **endptr)���ַ���strת����˫������,�����������,

long   strtol(char *str,char**endptr,int base)���ַ���strת���ɳ�������, �����������,

int         matherr(struct exception *e) �û��޸���ѧ���󷵻���Ϣ����(û�б�Ҫʹ��)

double      _matherr(_mexcep why,char *fun,double*arg1p, double *arg2p,double retval)�û��޸���ѧ���󷵻���Ϣ����(û�б�Ҫʹ��)

unsigned int _clear87()  �������״̬�ֲ�����ԭ���ĸ���״̬

void        _fpreset()   ���³�ʹ��������ѧ�����

unsigned int _status87()  ���ظ���״̬��

Ŀ¼����,���ں�����Ϊdir.h��dos.h

int    chdir(char *path)ʹָ����Ŀ¼path����:"C:\\WPS"����ɵ�ǰ�Ĺ���Ŀ¼,�� ������0

int findfirst(char *pathname,struct ffblk *ffblk,intattrib)����ָ�����ļ�,�ɹ�����0

��������pathnameΪָ����Ŀ¼�����ļ���,��"C:\\WPS\\TXT"

    ��������ffblkΪָ���ı����ļ���Ϣ��һ���ṹ,��������:

   ����������������������������������������

    ��structffblk                       ��

   ��{                                  ��

    �� charff_reserved[21]; ��

    �� charff_attrib;      ��

    ��int ff_ftime;       ��

    ��int ff_fdate;       ��

    �� longff_fsize;       ��

    �� charff_name[13];       ��

   ��}                                  ��

   ����������������������������������������

    attribΪ�ļ�����,�������ַ�����

   ���������������������ש�����������������

   ��FA_RDONLY ֻ���ļ���FA_LABEL  ���ũ�

   ��FA_HIDDEN �����ļ���FA_DIREC  Ŀ¼ ��

   ��FA_SYSTEM ϵͳ�ļ���FA_ARCH  ����  ��

   ���������������������ߩ�����������������

    ��:

    structffblk ff;

   findfirst("*.wps",&ff,FA_RDONLY);

 

int   findnext(struct ffblk*ffblk)     ȡƥ��finddirst���ļ�,�ɹ�����0

void  fumerge(char *path,char *drive,char*dir,char *name,char *ext)

      �˺���ͨ���̷�drive(C:��A:��),·��dir(\TC��\BC\LIB��),

      �ļ���name(TC��WPS��),��չ��ext(.EXE��.COM��)���һ���ļ���

      ����path��.

int   fnsplit(char *path,char*drive,char *dir,char *name,char *ext)

      �˺������ļ���path�ֽ���̷�drive(C:��A:��),·��dir(\TC��\BC\LIB��),

      �ļ���name(TC��WPS��),��չ��ext(.EXE��.COM��),���ֱ������Ӧ�ı�����.

int   getcurdir(int drive,char*direc) �˺�������ָ���������ĵ�ǰ����Ŀ¼����

       drive ָ����������(0=��ǰ,1=A,2=B,3=C��)

       direc����ָ����������ǰ����·���ı���     �ɹ�����0

char *getcwd(char *buf,iint n) �˺���ȡ��ǰ����Ŀ¼������buf��,ֱ��n����

     �ڳ�ΪΪֹ.���󷵻�NULL

int   getdisk()ȡ��ǰ����ʹ�õ�������,����һ������(0=A,1=B,2=C��)

int   setdisk(int drive)����Ҫʹ�õ�������drive(0=A,1=B,2=C��),

      ���ؿ�ʹ������������

int   mkdir(char*pathname)  ����һ���µ�Ŀ¼pathname,�ɹ�����0

int   rmdir(char*pathname)  ɾ��һ��Ŀ¼pathname,�ɹ�����0

char *mktemp(char *template) ����һ����ǰĿ¼��û�е��ļ���������template��

char *searchpath(char *pathname) ����MSDOS�ҳ��ļ�filename����·��,

     ,�˺���ʹ��DOS��PATH����,δ�ҵ��ļ�����NULL

���̺���,���ں�����Ϊstdlib.h��process.h

void  abort()�˺���ͨ�����þ��г��ڴ���3��_exitдһ����ֹ��Ϣ��stderr��

       ���쳣��ֹ�����޷���ֵ

int   exec��װ���������������

int   execl( char *pathname,char *arg0,char *arg1,��,char *argn,NULL)

int   execle( char*pathname,char *arg0,char *arg1,��,char *argn,NULL,char *envp[])

int   execlp( char*pathname,char *arg0,char *arg1,��,NULL)

int   execlpe(char*pathname,char *arg0,char *arg1,��,NULL,char *envp[])

int   execv( char *pathname,char *argv[])

int   execve( char*pathname,char *argv[],char *envp[])

int   execvp( char*pathname,char *argv[])

int   execvpe(char*pathname,char *argv[],char *envp[])

        exec������װ�벢���г���pathname����������

         arg0(arg1,arg2,argv[],envp[])���ݸ��ӳ���,������-1

      ��exec��������,��׺l��v��p��e��ӵ�exec��

      ��ָ���ĺ���������ĳ�ֲ�������

     �к�׺  pʱ��������������DOS��PATH���������ӳ����ļ���

             lʱ�������б����ݵĲ��������̶���

             vʱ�������б����ݵĲ����������̶���

             eʱ����������ָ������envp������ı��ӽ��̵Ļ�����

                  �޺�׺eʱ���ӽ���ʹ�õ�ǰ����Ļ�����

 

void  _exit(int status)��ֹ��ǰ����,���������ֳ�

void  exit(int status)��ֹ��ǰ����,�ر������ļ�,д�����������(�ȴ����),

                      �������κμĴ�����"���ں���",�޷���ֵ

 

int   spawn�������ӳ���

int  spawnl(  int mode,char *pathname,char *arg0,char*arg1,��,char *argn,NULL)

int   spawnle( int mode,char*pathname,char *arg0,char *arg1,��, char*argn,NULL,char *envp[])

int   spawnlp( int mode,char*pathname,char *arg0,char *arg1,��, char*argn,NULL)

int   spawnlpe(int mode,char*pathname,char *arg0,char *arg1,��, char*argn,NULL,char *envp[])

int  spawnv(  int mode,char *pathname,char *argv[])

int   spawnve( int mode,char*pathname,char *argv[],char *envp[])

int   spawnvp( int mode,char*pathname,char *argv[])

int   spawnvpe(int mode,char*pathname,char *argv[],char *envp[])

      spawn��������modeģʽ�������ӳ���pathname,��������

       arg0(arg1,arg2,argv[],envp[])���ݸ��ӳ���.������-1

      modeΪ����ģʽ

       modeΪ P_WAIT  ��ʾ���ӳ���������󷵻ر�����

              P_NOWAIT ��ʾ���ӳ�������ʱͬʱ���б�����(������)

              P_OVERLAY��ʾ�ڱ������˳��������ӳ���

       ��spawn��������,��׺l��v��p��e��ӵ�spawn��

       ��ָ���ĺ���������ĳ�ֲ�������

       �к�׺ pʱ, ��������DOS��PATH�����ӳ����ļ�

              lʱ, �������ݵĲ��������̶�.

              vʱ, �������ݵĲ����������̶�.

              eʱ, ָ������envp���Դ��ݸ��ӳ���,����ı��ӳ������л���.

                 ���޺�׺eʱ,�ӳ���ʹ�ñ�����Ļ���.

 

int   system(char *command)��MSDOS����command���ݸ�DOSִ��

ת���ӳ���,������Ϊmath.h��stdlib.h��ctype.h��float.h

char   *ecvt(double value,intndigit,int *decpt,int *sign)

        ��������valueת�����ַ��������ظ��ַ���

char   *fcvt(double value,intndigit,int *decpt,int *sign)

        ��������valueת�����ַ��������ظ��ַ���

char   *gcvt(double value,intndigit,char *buf)

        ����valueת�����ַ���������buf��,������buf��ָ��

char  *ultoa(unsigned long value,char*string,int radix)

        ���޷���������valueת�����ַ��������ظ��ַ���,radixΪת��ʱ���û���

char   *ltoa(long value,char*string,int radix)

        ����������valueת�����ַ��������ظ��ַ���,radixΪת��ʱ���û���

char   *itoa(int value,char*string,int radix)

        ������valueת�����ַ�������string,radixΪת��ʱ���û���

double atof(char *nptr) ���ַ���nptrת����˫������,�����������,���󷵻�0

int   atoi(char *nptr) ���ַ���nptrת����������,  �����������,���󷵻�0

long   atol(char *nptr)���ַ���nptrת���ɳ�������,�����������,���󷵻�0

double strtod(char *str,char **endptr)���ַ���strת����˫������,�����������,

long   strtol(char *str,char**endptr,int base)���ַ���strת���ɳ�������,

                                              �����������,

int   toascii(int c)   ����c��Ӧ��ASCII

int   tolower(int ch) ��ch�Ǵ�д��ĸ('A'-'Z')������Ӧ��Сд��ĸ('a'-'z')

int   _tolower(intch)  ����ch��Ӧ��Сд��ĸ('a'-'z')

int   toupper(int ch) ��ch��Сд��ĸ('a'-'z')������Ӧ�Ĵ�д��ĸ('A'-'Z')

int   _toupper(intch)  ����ch��Ӧ�Ĵ�д��ĸ('A'-'Z')

��Ϻ���,���ں�����Ϊassert.h��math.h

void   assert(int test)һ����չ��if��������ĺ꣬���test����ʧ�ܣ�

       ����ʾһ����Ϣ���쳣��ֹ����,�޷���ֵ

void   perror(char *string)����������ʾ���һ�εĴ�����Ϣ����ʽ���£�

       �ַ���string:������Ϣ

char   *strerror(char *str)�������������һ�εĴ�����Ϣ,��ʽ����:

       �ַ���str:������Ϣ

int   matherr(struct exception *e)

       �û��޸���ѧ���󷵻���Ϣ����(û�б�Ҫʹ��)

double _matherr(_mexcep why,char *fun,double *arg1p,

               double *arg2p,double retval)

       �û��޸���ѧ���󷵻���Ϣ����(û�б�Ҫʹ��)

 

��������ӳ���,������Ϊio.h��conio.h��stat.h��dos.h��stdio.h��signal.h

int  kbhit()   ����������������õİ���

int   fgetchar()�ӿ���̨(����)��һ���ַ�����ʾ����Ļ��

int  getch()   �ӿ���̨(����)��һ���ַ�������ʾ����Ļ��

int  putch()   �����̨(����)дһ���ַ�

int  getchar()  �ӿ���̨(����)��һ���ַ�����ʾ����Ļ��

int  putchar()  �����̨(����)дһ���ַ�

int  getche()  �ӿ���̨(����)��һ���ַ�����ʾ����Ļ��

int   ungetch(int c)���ַ�c�˻ظ�����̨(����)

char *cgets(char *string) �ӿ���̨(����)�����ַ�������string��

int   scanf(char*format[,argument��])�ӿ���̨����һ���ַ���,�ֱ�Ը�����������

      ��ֵ,ʹ��BIOS�������

int   vscanf(char*format,Valist param)�ӿ���̨����һ���ַ���,�ֱ�Ը�����������

      ��ֵ,ʹ��BIOS�������,������Valist param��ȡ��

int   cscanf(char*format[,argument��])�ӿ���̨����һ���ַ���,�ֱ�Ը�����������

      ��ֵ,ֱ�ӶԿ���̨������,������ʾ������ʾʱ�ַ�ʱ��Ϊֱ��дƵ��ʽ��ʾ

int   sscanf(char *string,char*format[,argument,��])ͨ���ַ���string,�ֱ�Ը���

      �������и�ֵ

int   vsscanf(char*string,char *format,Vlist param)ͨ���ַ���string,�ֱ�Ը���

      �������и�ֵ,������Vlist param��ȡ��

int   puts(char*string)  ����һ���ַ���string������̨(��ʾ��),

      ʹ��BIOS�������

void  cputs(char *string)����һ���ַ���string������̨(��ʾ��),

      ֱ�ӶԿ���̨������,������ʾ����Ϊֱ��дƵ��ʽ��ʾ

int   printf(char*format[,argument,��]) ���͸�ʽ���ַ������������̨(��ʾ��)

      ʹ��BIOS�������

int   vprintf(char*format,Valist param) ���͸�ʽ���ַ������������̨(��ʾ��)

      ʹ��BIOS�������,������Valist param��ȡ��

int   cprintf(char*format[,argument,��]) ���͸�ʽ���ַ������������̨(��ʾ��),

      ֱ�ӶԿ���̨������,������ʾ����Ϊֱ��дƵ��ʽ��ʾ

int   vcprintf(char*format,Valist param)���͸�ʽ���ַ������������̨(��ʾ��),

      ֱ�ӶԿ���̨������,������ʾ����Ϊֱ��дƵ��ʽ��ʾ,

      ������Valist param��ȡ��

int   sprintf(char*string,char *format[,argument,��])

       ���ַ���string����������дΪ��ʽ������ַ���

int   vsprintf(char*string,char *format,Valist param)

       ���ַ���string����������дΪ��ʽ������ַ���,������Valist param��ȡ��

int   rename(char*oldname,char *newname)���ļ�oldname�����Ƹ�Ϊnewname

int   ioctl(int handle,intcmd[,int *argdx,int argcx])

       ��������������������/����豸�ģ�����±�

       ���������Щ���������������������������������������������������������

       ��cmdֵ������                                                   ��

       ���������੤��������������������������������������������������������

       ��  0  ��ȡ���豸��Ϣ                                           ��

       ��  1  �������豸��Ϣ                                           ��

       ��  2  ����argcx�ֽڶ�����argdx��ָ�ĵ�ַ                       ��

       ��  3  ����argdx��ָ�ĵ�ַдargcx�ֽ�                           ��

       ��  4  ������handle�����豸��(0=��ǰ,1=A,��)֮��,����cmd=2ʱһ�� ��

       ��  5  ������handle�����豸��(0=��ǰ,1=A,��)֮��,����cmd=3ʱһ�� ��

       ��  6  ��ȡ����״̬                                             ��

       ��  7  ��ȡ���״̬                                             ��

       ��  8  �����Կɻ���;ֻ����DOS3.x                               ��

       ��  11  ���÷����ͻ���������;ֻ��DOS3.x                       ��

       ���������ة���������������������������������������������������������

int   (*ssignal(intsig,int(*action)())()ִ������ź�(û��Ҫʹ��)

int   gsignal(intsig)                  ִ������ź�(û��Ҫʹ��)

 

int   _open(char *pathname,intaccess)Ϊ����д��һ���ļ�,

       ����access��ȷ���Ƕ��ļ�����д�ļ�,accessֵ���±�

       ���������������Щ�����������������������������������������

       ��accessֵ   ������                                   ��

       ���������������੤����������������������������������������

       ��O_RDONLY   �����ļ�                                 ��

       ��O_WRONLY   ��д�ļ�                                 ��

       ��O_RDWR     ������Ҳд                               ��

       ��O_NOINHERIT�����ļ�û�д��ݸ��ӳ���,�򱻰���        ��

       ��O_DENYALL  ��ֻ����ǰ��������ȡ���ļ�           ��

       ��O_DENYWRITE��ֻ������κ������򿪵��ļ���           ��

       ��O_DENYREAD ��ֻ������κ������򿪵��ļ�д           ��

       ��O_DENYNONE ��������������򿪵��ļ�                 ��

       ���������������ة�����������������������������������������

int   open(char *pathname,intaccess[,int permiss])Ϊ����д��һ���ļ�,

       ����access��ȷ���Ƕ��ļ�����д�ļ�,accessֵ���±�

       �����������Щ�����������������������������������������

       ��accessֵ������                                   ��

       �����������੤����������������������������������������

       ��O_RDONLY�����ļ�                                 ��

       ��O_WRONLY��д�ļ�                                 ��

       ��O_RDWR ������Ҳд                               ��

       ��O_NDELAY��û��ʹ��;��UNIXϵͳ����                ��

       ��O_APPEND������Ҳд,��ÿ��д�������ļ�β���      ��

       ��O_CREAT �����ļ�����,�˱�־����;��������,�����ļ� ��

       ��O_TRUNC�����ļ�����,�򳤶ȱ���Ϊ0,���Բ���      ��

       ��O_EXCL ��δ��;��UNIXϵͳ����                    ��

       ��O_BINARY���˱�־����ʾ�ظ����Զ����Ʒ�ʽ���ļ�  ��

       ��O_TEXT  ���˱�־��������ʾ�ظ������ı���ʽ���ļ���

       �����������ة�����������������������������������������

       permissΪ�ļ�����,��Ϊ����ֵ:

        S_IWRITE����д  S_IREAD����� S_IREAD|S_IWRITE�������д

int   creat(char *filename,intpermiss)  ����һ�����ļ�filename�����趨

      ��д�ԡ�permissΪ�ļ���д�ԣ�����Ϊ����ֵ

       S_IWRITE����д  S_IREAD����� S_IREAD|S_IWRITE�������д

int  _creat(char *filename,intattrib)  ����һ�����ļ�filename�����趨�ļ�

     ���ԡ�attribΪ�ļ����ԣ�����Ϊ����ֵ

       FA_RDONLYֻ��  FA_HIDDEN���� FA_SYSTEMϵͳ

int   creatnew(char*filenamt,int attrib) ����һ�����ļ�filename�����趨�ļ�

      ���ԡ�attribΪ�ļ����ԣ�����Ϊ����ֵ

        FA_RDONLYֻ��  FA_HIDDEN���� FA_SYSTEMϵͳ

int   creattemp(char*filenamt,int attrib) ����һ�����ļ�filename�����趨�ļ�

      ���ԡ�attribΪ�ļ����ԣ�����Ϊ����ֵ

        FA_RDONLYֻ��  FA_HIDDEN���� FA_SYSTEMϵͳ

int   read(int handle,void*buf,int nbyte)���ļ���Ϊhandle���ļ��ж�nbyte���ַ�

      ����buf��

int  _read(int handle,void *buf,intnbyte)���ļ���Ϊhandle���ļ��ж�nbyte���ַ�

      ����buf��,ֱ�ӵ���MSDOS���в���.

int   write(int handle,void*buf,int nbyte)��buf�е�nbyte���ַ�д���ļ���

      Ϊhandle���ļ���

int  _write(int handle,void *buf,intnbyte)��buf�е�nbyte���ַ�д���ļ���

      Ϊhandle���ļ���

int   dup(int handle)����һ���ļ�����ָ��handle,�������ָ��

int   dup2(int handle,intnewhandle) ����һ���ļ�����ָ��handle��newhandle

int   eof(int*handle)����ļ��Ƿ����,��������1,���򷵻�0

long  filelength(int handle)�����ļ����ȣ�handleΪ�ļ���

int   setmode(inthandle,unsigned mode)�����������趨�ļ���Ϊhandle���ļ��Ĵ�

      ����ʽ

int   getftime(inthandle,struct ftime *ftime) ��ȡ�ļ���Ϊhandle���ļ���ʱ�䣬

       �����ļ�ʱ�����ftime�ṹ�У��ɹ�����0,ftime�ṹ���£�

       ��������������������������������������

       ��structftime                     ��

       ��{                                ��

       �� unsigned ft_tsec:5;      ��

       �� unsigned ft_min:6;       ��

       �� unsigned ft_hour:5;      ��

       �� unsigned ft_day:5;       ��

       �� unsignedft_month:4;      ��

       �� unsigned ft_year:1;   ��

       ��}                                ��

       ��������������������������������������

int   setftime(inthandle,struct ftime *ftime) ��д�ļ���Ϊhandle���ļ�ʱ��,

      ��ʱ���ڽṹftime��.�ɹ�����0.�ṹftime����:

       ��������������������������������������

       ��structftime                     ��

       ��{                                ��

       �� unsigned ft_tsec:5;      ��

       �� unsigned ft_min:6;       ��

       �� unsigned ft_hour:5;      ��

       �� unsigned ft_day:5;       ��

       �� unsignedft_month:4;      ��

       �� unsigned ft_year:1;   ��

       ��}                                ��

       ��������������������������������������

long  lseek(int handle,long offset,intfromwhere) ���������ļ���Ϊhandle���ļ�

       ��ָ���Ƶ�fromwhere��ĵ�offset���ֽڴ�.

        SEEK_SET �ļ�����   SEEK_CUR��ǰλ��   SEEK_END �ļ�β

long  tell(int handle)�����������ļ���Ϊhandle���ļ�ָ��,���ֽڱ�ʾ

int   isatty(inthandle)����������ȡ�豸handle������

int   lock(int handle,longoffset,long length)  ���ļ�����������

int   unlock(int handle,longoffset,long length) �򿪶��ļ�����ķ���

int   close(int handle)�ر�handle����ʾ���ļ�����,handle�Ǵ�_creat��creat��

       creatnew��creattemp��dup��dup2��_open��open�е�һ�������û�õ��ļ�����

       �ɹ�����0���򷵻�-1,������UNIXϵͳ

int  _close(int handle)�ر�handle����ʾ���ļ�����,handle�Ǵ�_creat��creat��

      creatnew��creattemp��dup��dup2��_open��open�е�һ�������û�õ��ļ�����

      �ɹ�����0���򷵻�-1,ֻ������MSDOSϵͳ

 

FILE *fopen(char *filename,char *type)��һ���ļ�filename,�򿪷�ʽΪtype��

       ����������ļ�ָ�룬type��Ϊ�����ַ������Ϻ�׺

     �������Щ��������Щ��������������Щ�����������������

     ��type����д��  ���ı�/2�����ļ�������/�򿪾��ļ� ��

     �������੤�������੤�������������੤����������������

     ��r  ����     ���ı�         ���򿪾ɵ��ļ�    ��

     ��w  ��д     ���ı�         �������ļ�       ��

     ��a  �����   ���ı�         ���оʹ������©�

     ��r+  ����/д  ��������       ����           ��

     ��w+  ����/д  ��������       �������ļ�       ��

     ��a+  ����/��ө�������       ���оʹ������©�

     �������ة��������ة��������������ة�����������������

     �ɼӵĺ�׺Ϊt��b����b��ʾ�ļ��Զ�������ʽ���в�����tû��Ҫʹ��

     ��: ����������������������������������������

         ��#include<stdio.h>                  ��

         ��main()                             ��

         ��{                                  ��

         �� FILE*fp;                         ��

         �� fp=fopen("C:\\WPS\\WPS.EXE","r+b");��

         ����������������������������������������

FILE *fdopen(int ahndle,char *type)

FILE *freopen(char *filename,char *type,FILE *stream)

int   getc(FILE*stream)  ����stream�ж�һ���ַ�������������ַ�

int   putc(int ch,FILE*stream)����streamд��һ���ַ�ch

int   getw(FILE *stream)����stream����һ�����������󷵻�EOF

int   putw(int w,FILE*stream)����streamд��һ������

int   ungetc(char c,FILE*stream) ���ַ�c�˻ظ���stream����һ�ζ������ַ�����c

int   fgetc(FILE *stream)����stream����һ���ַ�������������ַ�

int   fputc(int ch,FILE*stream) ���ַ�chд����stream��

char *fgets(char *string,int n,FILE *stream)����stream�ж�n���ַ�����string��

int   fputs(char *string,FILE*stream) ���ַ���stringд����stream��

int   fread(void *ptr,intsize,int nitems,FILE *stream) ����stream�ж���nitems

      ������Ϊsize���ַ�������ptr��

int   fwrite(void *ptr,intsize,int nitems,FILE *stream) ����stream��д��nitems

      ������Ϊsize���ַ���,�ַ�����ptr��

int   fscanf(FILE *stream,char*format[,argument,��]) �Ը�ʽ����ʽ����stream��

      ����һ���ַ���

int   vfscanf(FILE*stream,char *format,Valist param) �Ը�ʽ����ʽ����stream��

      ����һ���ַ���,������Valist param��ȡ��

int   fprintf(FILE*stream,char *format[,argument,��]) �Ը�ʽ����ʽ��һ���ַ�

      ��д��ָ������stream

int   vfprintf(FILE*stream,char *format,Valist param) �Ը�ʽ����ʽ��һ���ַ�

      ��д��ָ������stream,������Valist param��ȡ��

int   fseek(FILE *stream,longoffset,int fromwhere) �������ļ�ָ���Ƶ�fromwhere

      ��ָλ�õ����offset���ֽڴ�,fromwhere����Ϊ����ֵ:

      SEEK_SET �ļ�����   SEEK_CUR��ǰλ��   SEEK_END �ļ�β

long  ftell(FILE *stream) �������ض�λ��stream�еĵ�ǰ�ļ�ָ��λ��,���ֽڱ�ʾ

int   rewind(FILE *stream)����ǰ�ļ�ָ��stream�Ƶ��ļ���ͷ

int   feof(FILE *stream)�����stream�ϵ��ļ�ָ���Ƿ��ڽ���λ��

int   fileno(FILE *stream)ȡ��stream�ϵ��ļ������������ļ�����

int   ferror(FILE *stream)�����stream���Ƿ��ж�д�������д���ͷ���1

void  clearerr(FILE *stream)�����stream�ϵĶ�д����

void  setbuf(FILE *stream,char *buf)����streamָ��һ��������buf

void  setvbuf(FILE *stream,char *buf,inttype,unsigned size)

      ����streamָ��һ��������buf,��СΪsize,����Ϊtype,type��ֵ���±�

     ���������Щ���������������������������������������������������������������

     ��typeֵ������                                                         ��

     ���������੤��������������������������������������������������������������

     ��_IOFBF���ļ�����ȫ������,���������ǿ�ʱ,��һ�������������ͼ������������

     ��     ������.�����ʱ,�ڰ��κ�����д���ļ�֮ǰ,����ȫ��仺����.     ��

     ��_IOLBF���ļ����л�����.��������Ϊ��ʱ,��һ�������������Ȼ��ͼ����������

     ��     ������.Ȼ�������ʱ,ÿ�����з�д���ļ�,�������ͱ���ϴ��.       ��

     ��_IONBF���ļ����޻����.buf��size�����Ǳ����Ե�.ÿ�����������ֱ�Ӵ��� ��

     ��     ������,ÿ���������������������д���ļ���.                     ��

     ���������ة���������������������������������������������������������������

int   fclose(FILE *stream)�ر�һ�������������ļ����豸(����LPT1)

int  fcloseall()         �ر����г�stdin��stdout�����

int   fflush(FILE *stream)�ر�һ���������Ի�����������

       �����Զ����������������ݶ��뻺������

       ��д��������������������д�������ɹ�����0

int  fflushall()         �ر������������������ԵĻ�����������

       �����Զ����������������ݶ��뻺������

       ��д��������������������д�������ɹ�����0

 

int   access(char*filename,int amode) ����������ļ�filename�������ļ�������,

       ���������Դ���amode�У�amode������λ����Ϲ���

         06���Զ���д      04���Զ�  02����д  01ִ��(���Ե�)   00�ļ�����

     ���filename��һ��Ŀ¼,������ֻȷ��Ŀ¼�Ƿ����

     ����ִ�гɹ�����0,���򷵻�-1

int   chmod(char *filename,intpermiss) �����������趨�ļ�filename������

       permiss����Ϊ����ֵ

          S_IWRITE����д  S_IREAD����� S_IREAD|S_IWRITE�������д

int  _chmod(char *filename,int func[,intattrib]);

      ���������ڶ�ȡ���趨�ļ�filename�����ԣ�

      ��func=0ʱ�����������ļ������ԣ���func=1ʱ�������趨�ļ�������

      ��Ϊ�趨�ļ����ԣ�attrib����Ϊ���г���֮һ

      FA_RDONLYֻ��  FA_HIDDEN���� FA_SYSTEMϵͳ 

�ӿ��ӳ���,���ں�����Ϊ:dos.h��bios.h

unsigned sleep(unsigned seconds)��ͣseconds΢��(�ٷ�֮һ��)

int     unlink(char *filename)ɾ���ļ�filename

unsigned FP_OFF(void far *farptr)����������ȡԶָ��farptr��ƫ����

unsigned FP_SEG(void far *farptr)����������û��Զָ��farptr�Ķ�ֵ

void far *MK_FP(unsigned seg,unsignedoff)���ݶ�seg��ƫ����off����һ��farָ��

unsigned getpsp()ȡ�����ǰ׺�Ķε�ַ,�����������ַ

char *parsfnm(char *cmdline,struct fcb *fcbptr,int option)

      ��������һ���ַ���,ͨ��,��һ���ļ�����˵,����cmdline��ָ��һ��������.

      �ļ����Ƿ���һ��FCB����Ϊһ��������,�ļ�������չ��.FCB����fcbptr��ָ

      ����.option������DOS����ϵͳ����ʱ,AL�ı���ֵ.

 

int   absread(int drive,intnsects,int sectno,void *buffer)����������Ϊ���ض���

      ��������,driveΪ��������(0=A,1=B��),nsectsΪҪ����������,sectnoΪ��ʼ����

      ��������,bufferΪ�����������ݵı���ռ�

int   abswrite(int drive,intnsects,int sectno,void *buffer)����������Ϊд�ض���

      ��������,driveΪ��������(0=A,1=B��),nsectsΪҪд��������,sectnoΪ��ʼ����

      ��������,bufferΪ������д���ݵ����ڿռ�

void  getdfree(int drive,struct dfree*dfreep)����������ȡ���̵����ɿռ�,

      driveΪ���̺�(0=��ǰ,1=A��).�������������Ե���dfreepָ���dfree�ṹ��.

      dfree�ṹ����:

      ������������������������������������������

      ��structdfree                         ��

      ��{                                    ��

      �� unsigned df_avail;    ��

      �� unsigned df_total;    ��

      �� unsigned df_bsec;  ��

      �� unsigned df_sclus;   ��

      ��}                                    ��

      ������������������������������������������

char far*getdta()            ȡ����ת����ַDTA

void     setdta(char far *dta)���ô���ת����ַDTA

void  getfat(int drive,fatinfo *fatblkp)

      ����������ָ��������drive(0=��ǰ,1=A,2=B��)���ļ��������Ϣ

      ������ṹfatblkp��,�ṹ����:

      ����������������������������������������

      ��structfatinfo                     ��

      ��{                                  ��

      �� char fi_sclus;    ��

      �� char fi_fatid; ��

      �� int  fi_nclus;       ��

      �� int  fi_bysec;   ��

      ��}                                  ��

      ����������������������������������������

void  getfatd(struct fatinfo *fatblkp)���������ص�ǰ���������ļ��������Ϣ,

      ������ṹfatblkp��,�ṹ����:          

      ����������������������������������������

      ��structfatinfo                     ��

      ��{                                  ��

      �� char fi_sclus;    ��

      �� char fi_fatid; ��

      �� int  fi_nclus;       ��

      �� int  fi_bysec;   ��

      ��}                                  ��

      ����������������������������������������

 

int   bdos(int dosfun,unsigneddosdx,unsigned dosal)��������MSDOSϵͳ���е���,

      dosdxΪ�Ĵ���dx��ֵ,dosalΪ�Ĵ���al��ֵ,dosfunΪ���ܺ�

int   bdosptr(int dosfun,void*argument,unsiigned dosal)��������MSDOSϵͳ���е���,

      argumentΪ�Ĵ���dx��ֵ,dosalΪ�Ĵ���al��ֵ,dosfunΪ���ܺ�

int   int86(int intr_num,unionREGS *inregs,union REGS *outregs)

      ִ��intr_num���ж�,�û�����ļĴ���ֵ���ڽṹinregs��,

      ִ����󽫷��صļĴ���ֵ���ڽṹoutregs��.

int   int86x(intintr_num,union REGS *inregs,union REGS *outregs,

            struct SREGS *segregs)ִ��intr_num���ж�,�û�����ļĴ���ֵ����

      �ṹinregs�кͽṹsegregs��,ִ����󽫷��صļĴ���ֵ���ڽṹoutregs��.

int   intdos(union REGS*inregs,union REGS *outregs)

      ������ִ��DOS�ж�0x21������һ��ָ����DOS����,�û�����ļĴ���ֵ

      ���ڽṹinregs��,ִ������������صļĴ���ֵ���ڽṹoutregs��

int   intdosx(union REGS*inregs,union REGS *outregs,struct SREGS *segregs)

      ������ִ��DOS�ж�0x21������һ��ָ����DOS����,�û�����ļĴ���ֵ

      ���ڽṹinregs��segregs��,ִ������������صļĴ���ֵ���ڽṹoutregs��

void  intr(int intr_num,struct REGPACK*preg)��������һ�����õ�8086����жϽӿ�

      ���ܲ���һ���ɲ���intr_numָ����8086����ж�.������ִ������ж�ǰ,

      �ӽṹpreg�����û�����ĸ��Ĵ���ֵ�������Ĵ���.����ж���ɺ�,

      ��������ǰ�����Ĵ�����ֵ���Ƶ��ṹpreg��.��������:

      intr_num ��ִ�е��жϺ�

      pregΪ�����û�����ļĴ���ֵ�Ľṹ,�ṹ����

      ������������������������������������������������

      ��structREGPACK                             ��

      ��{                                          ��

      �� unsignedr_ax,r_bx,r_cx,r_dx;             ��

      �� unsigned r_bp,r_si,r_di,r_ds,r_es,r_flags; ��

      ��}                                          ��

      ������������������������������������������������

      ����ִ�����,���µļĴ���ֵ���ڽṹpreg��

void  keep(int status,intsize)��status״̬����MSDOS,�������Ա������ڴ���,��ռ

      �ÿռ���size����.

void  ctrlbrk(int (*fptr)())�����жϺ�Ķ��жϵĴ������.

void  disable() ��ֹ�����ж�

void  enable()  �������ж�

void  geninterrupt(intintr_num)ִ����intr_num��ָ��������ж�

void  interrupt(* getvect(int intr_num))()�����жϺ�Ϊintr_num���жϴ������,

      ����: old_int_10h=getvect(0x10);

void  setvect(int intr_num,void interrupt(*isr)()) �����жϺ�Ϊintr_num����

      �ϴ������Ϊisr,����: setvect(0x10,new_int_10h);

void  harderr(int (*fptr)()) ����һ��Ӳ�����������,

      ÿ�����ִ���ʱ�͵���fptr��ָ�ĳ���

void  hardresume(int rescode)Ӳ����������

void  hardretn(int errcode) Ӳ����������

int   inport(int prot)��ָ��������˿ڶ���һ����,�����������

int   inportb(intport)��ָ��������˿ڶ���һ���ֽ�,����������ֽ�

void  outport(int port,int word)����wordд��ָ��������˿�port

void  outportb(int port,charbyte)���ֽ�byteд��ָ��������˿�port

int   peek(intsegment,unsigned offset) ��������segment:offset����һ����

char  peekb(int segment,unsignedoffset)��������segment:offset����һ���ֽ�

void  poke(int segment,int offset,char value)����valueд��segment:offset��

void  pokeb(int segment,int offset,int value)���ֽ�valueд��segment:offset��

int   randbrd(struct fcb*fcbptr,int reccnt)

      �������ô�fcbptr��ָ��FCB��reccnt����¼.

int   randbwr(struct fcb*fcbptr,int reccnt)

      ������fcbptr��ָ��FCB�е�reccnt����¼д��������

void  segread(struct SREGS*segtbl)�����ѶμĴ����ĵ�ǰֵ�Ž��ṹsegtbl��

int  getverify()        ȡ�����־�ĵ�ǰ״̬(0=����ر�,1=�����)

void  setverify(int value)���õ�ǰ����״̬,

      valueΪ0��ʾ�رռ���,Ϊ1��ʾ�򿪼���

int  getcbrk()���������ؿ����жϼ��ĵ�ǰ����

int   setcbrk(intvalue)�������������ÿ����жϼ��Ϊ��ͨ��Ͽ�

      ��value=0ʱ,Ϊ�Ͽ����.��value=1ʱ,Ϊ�ӿ����

 

int   dosexterr(struct DOSERR*eblkp)ȡ��չ����.��DOS���ִ����,�˺����������

      ������Ϣ����eblkp��ָ��DOSERR�ṹ��.�ýṹ��������:

     ��������������������������������

     ��structDOSERR              ��

     ��{                          ��

     �� int  exterror; ��

     �� char class;   ��

     �� char action;     ��

     �� char locus;   ��

     ��}                          ��

     ��������������������������������

int   bioscom(int cmd,chartype,int port) ��������������ݵ�ͨѶ����,

       cmd����Ϊ����ֵ:

       0��ͨѶ����Ϊ�ֽ�byteֵ    1 �����ַ�ͨ��ͨѶ�����

       2��ͨѶ�߽����ַ�          3 ����ͨѶ�ĵ�ǰ״̬

       portΪͨѶ�˿�,port=0ʱͨѶ�˿�ΪCOM1,port=1ʱͨѶ�˿�ΪCOM2,�Դ�����

       byteΪ���ͻ��������ʱ�Ĳ���,Ϊ����λ�����:

       ���������Щ����������Щ������Щ����������Щ������Щ�����������

       ��byteֵ������     ��byteֵ������     ��byteֵ������     ��               ��

       ���������੤���������੤�����੤���������੤�����੤����������

       ��0x02  ��7����λ  ��0x03  ��8����λ  ��0x00  ��1ֹͣλ  ��               ��

       ��0x04  ��2ֹͣλ  ��0x00  ������ż�� ��0x08 ��������ż�ԩ�               ��

       ��0x18  ��ż����ż�ԩ�0x00 ��110����   ��0x20 ��150����  ��               ��

       ��0x40  ��300����  ��0x60  ��600����  ��0x80  ��1200���� ��               ��

       ��0xA0  ��2400���� ��0xC0  ��4800���� ��0xE0  ��9600���� ��               ��

       ���������ة����������ة������ة����������ة������ة�����������

       ����:0xE0|0x08|0x00|0x03����ʾ��ͨѶ��Ϊ9600����,������ż��,1ֹͣλ,

            8����λ.

       ��������ֵΪһ��16λ����,��������:

       ��15λ ��ʱ

       ��14λ ������λ�Ĵ�����

       ��13λ ���͹̶��Ĵ�����

       ��12λ �жϼ��

       ��11λ ֡����

       ��10λ ��ż����

       �� 9λ �������д���

       �� 8λ ���ݾ���

       �� 7λ �������źż��

       �� 6λ ����ָʾ��

       �� 5λ �������þ���

       �� 4λ �������

       �� 3λ �Ľ������źż����

       �� 2λ �½��߻��μ����

       �� 1λ ���������þ���

       �� 0λ ���������

 

int   biosdisk(int cmd,intdrive,int head,int track,

              int sector,int nsects,void *buffer)

      ��������������������һ���Ĳ���,cmdΪ���ܺ�,

      driveΪ��������(0=A,1=B,0x80=C,0x81=D,0x82=E��).cmd��Ϊ����ֵ:

       0 ���������ϵͳ.��ǿ����������������ִ��Ӳ��λ.����������������.

       1 ��������Ӳ�̲���״̬.����������������

       2 ��һ�����������������ڴ�.����ʼ��������head��track��sector������

         ��������nsects��������ÿ������512���ֽڵ����ݶ���buffer

       3 ���ڴ������д��һ������������д��ʼ��������head��track��sector

         ��������������nsects��������д������buffer�У�ÿ����512���ֽڡ�

       4 ����һ��������������ʼ������head��track��sector��������������

         nsects������

       5 ��ʽ��һ���ŵ����ôŵ���head��track������bufferָ��д��ָ��track��

         ��������ͷ����һ����

         ����cmdֵֻ��������XT��AT΢����

       6 ��ʽ��һ���ŵ������û�������־��

       7 ��ʽ��ָ���ŵ��ϵ���������ͷ��

       8 ���ص�ǰ��������������������Ϣ����д��buffer��(���ĸ��ֽڱ�ʾ)��

       9 ��ʼ��һ�����������ԡ�

      10 ִ��һ�����Ķ���ÿ��������512��4�������ֽ�

      11 ִ��һ������д��ÿ������д512��4�������ֽ�

      12 ִ��һ�����̲���

      13 ������̸�λ

      14 ������������

      15 д����������

      16 ���ָ�����������Ƿ����

      17 ����������

      18 ������RAM���

      19 ���������

      20 �������ڲ���

      ��������������λ��ϳɵ�״̬�ֽڣ�

      0x00 �����ɹ�

      0x01 ��������

      0x02 ��ַ����Ҳ���

      0x04 ��¼�Ҳ���

      0x05 ����ʧ��

      0x07 ���������ʧ��

      0x09 ��ͼDMA����64K����

      0x0B ��黵�Ĵ��̱��

      0x10 ����ECC�ڴ����϶�

      0x11 ECCУ�������ݴ���ע�������Ǵ���

      0x20 ������ʧЧ

      0x40 ����ʧ��

      0x80 ��Ӧ������ʧ��

      0xBB �����޶������

      0xFF ��������ʧ��

 

int   biodquip()����豸����������һ�ֽڣ����ֽ�ÿһλ��ʾһ����Ϣ�����£�

      ��15λ ��ӡ����

      ��14λ ��ӡ����

      ��13λ δʹ��

      ��12λ ������ϷI/O

      ��11λ RS232�˿ں�

      �� 8λ δʹ��

      �� 7λ ����̺�

      �� 6λ ����̺�,

             00Ϊ1��������,01Ϊ2��������,10Ϊ3��������,11Ϊ4��������

      �� 5λ ��ʼ��

      �� 4λ ��ʾ��ģʽ

             00Ϊδʹ�ã�01Ϊ40x25BW��ɫ��ʾ��

             10Ϊ80x25BW��ɫ��ʾ����11Ϊ80x25BW��ɫ��ʾ��

      �� 3λ ĸǤ��

      �� 2λ �������������,00Ϊ16K,01Ϊ32K,10Ϊ48K,11Ϊ64K

      �� 1λ ���㹲�ô�����

      �� 0λ �����������

 

int   bioskey(intcmd)����������ִ�и��ּ��̲�������cmdȷ��������

      cmd��Ϊ����ֵ��

      0 �����ü����ϵ���һ����������8λΪ��0,��ΪASCII�ַ�������8λΪ0,

        �򷵻������˵ļ��̴��롣

      1 ���Լ����Ƿ�����ڶ�������0��ʾû�м����ã����򷵻���һ���ü�ֵ֮��

        �ü�����һֱ�������´ε��þߵ�cmdֵΪ0��bioskey�����ص�ֵ��

      2 ���ص�ǰ�ļ���״̬���ɷ���������ÿһ��λ��ʾ�����±�

       �������Щ����������������������Щ�����������������������

       �� λ��Ϊ0ʱ����            ��Ϊ1ʱ����            ��

       �������੤���������������������੤����������������������

       �� 7 ������״̬             ����д״̬             ��

       �� 6 ����д״̬             ��Сд״̬             ��

       �� 5  ������״̬��NumLock���� �����״̬��NumLock��Ϩ ��

       �� 4 ��ScrollLock����       ��ScrollLock��Ϩ       ��

       �� 3 ��Alt����              ��Altδ����            ��

       �� 2 ��Ctrl����             ��Ctrlδ����           ��

       �� 1 ����Shift����          ����Shiftδ����        ��

       �� 0 ����Shift����          ����Shiftδ����        ��

       �������ة����������������������ة�����������������������

int  biosmemory()�����ڴ��С,��KΪ��λ.

int   biosprint(int cmd,intbyte,int port)���ƴ�ӡ��������/���.

      portΪ��ӡ����,0ΪLPT1,1ΪLPT2,2ΪLPT3��

      cmd����Ϊ����ֵ:

        0 ��ӡ�ַ�,���ַ�byte�͵���ӡ��

        1 ��ӡ���˿ڳ�ʼ��

        2 ����ӡ��״̬

      ��������ֵ������λֵ��ɱ�ʾ��ǰ��ӡ��״̬

        0x01 �豸ʱ�䳬ʱ

        0x08 ����/�������

        0x10 ѡ���

        0x20 ��ֽ

        0x40 �Ͽ�

        0x80 ��æµ

 

int   biostime(int cmd,longnewtime)��ʱ������,cmdΪ���ܺ�,��Ϊ����ֵ

       0 �������ؼ�ʱ���ĵ�ǰֵ

       1 ����ʱ����Ϊ��ֵnewtime

 

struct country *country(int countrycmode,struct country*countryp)

      ��������������ĳһ���ҵ������Ϣ,������,ʱ��,���ҵ�.

      ��countryp=-1ʱ,��ǰ�Ĺ�����Ϊcountrycodeֵ(����Ϊ��0).����,��countryp

      ��ָ���country�ṹ�����еĹ��������Ϣ���:

      (1)��ǰ�Ĺ���(��countrycodeΪ0��2)��countrycode�������Ĺ���.

      �ṹcountry��������:

     ��������������������������������������������

     ��structcountry                         ��

     ��{                                      ��

     �� int co_date;            ��

     �� charco_curr[5];         ��

     �� charco_thsep[2];       ��

     �� charco_desep[2];          ��

     �� charco_dtsep[2];       ��

     �� charco_tmsep[2];       ��

     �� charco_currstyle;       ��

     �� charco_digits;          ��

     �� int (far *co_case)(); ��

     �� charco_dasep;          ��

     �� charco_fill[10];        ��

     ��}                                      ��

     ��������������������������������������������

      co_date��ֵ����������ڸ�ʽ��:

       0 ������    1������    2 ������

      co_currstrle��ֵ������Ļ�����ʾ��ʽ��

       0 ���ҷ�������ֵǰ,�м��޿ո�

       1 ���ҷ�������ֵ��,�м��޿ո�

       2 ���ҷ�������ֵǰ,�м��пո�

       3 ���ҷ�������ֵ��,�м��пո�

��������,���ں�����Ϊstring.h��mem.h

mem��������������

void *memccpy(void *destin,void *source,unsigned charch,unsigned n)

void *memchr(void *s,char ch,unsigned n)

void *memcmp(void *s1,void *s2,unsigned n)

int   memicmp(void *s1,void*s2,unsigned n)

void *memmove(void *destin,void *source,unsigned n)

void *memcpy(void *destin,void *source,unsigned n)

void *memset(void *s,char ch,unsigned n)

��Щ����,mem��ϵ�е����г�Ա��������������.��������Щ������,������n�ֽڳ�.

memcpy��source����һ��n�ֽڵĿ鵽destin.���Դ���Ŀ����ص�,��ѡ���Ʒ���,

  ������ȷ�ظ��Ƹ��ǵ��ֽ�.

memmove��memcpy��ͬ.

memset��s�������ֽ������ֽ�ch��.s����ĳ�����n����.

memcmp�Ƚ�������n�ֽڳ��������ַ���s1��s2.Щ�������޷����ַ��Ƚ��ֽ�,���,

  memcmp("0xFF","\x7F",1)����ֵ����0.

memicmp�Ƚ�s1��s2��ǰn���ֽ�,�����ַ���д��Сд.

memccpy��source�����ֽڵ�destin.����һ�����ͷ���������һ���:

  (1)�ַ�ch��ѡ���Ƶ�destin.

  (2)n���ֽ��Ѹ��Ƶ�destin.

memchr���ַ�ch����s�����ǰn���ֽ�.

����ֵ:memmove��memcpy����destin

      memset����s��ֵ

      memcmp��memicmp���Щ���s1<s2����ֵС��0

                       ������s1=s2����ֵ����0

                       ������s1>s2����ֵ����0

      memccpy��������ch,�򷵻�ֱ�Ӹ���ch����destin�е��ֽڵ�һ��ָ��;

             ���򷵻�NULL

      memchr������s�����ȳ���ch��һ��ָ��;�����s�����в�����ch,�ͷ���NULL.

 

void  movedata(int segsrc,int offsrc,

              int segdest,int offdest,

              unsigned numbytes)

      ��������Դ��ַ(segsrc:offsrc)����numbytes���ֽ�

      ���Ƶ�Ŀ���ַ(segdest:offdest)

void  movemem(void *source,void*destin,unsigned len)

      ��������source������һ�鳤len�ֽڵ����ݵ�destin.��Դ��ַ��Ŀ���ַ�ַ���

      �ص�,��ѡ���Ʒ���,�Ա���ȷ�ĸ�������.

void  setmem(void *addr,int len,char value)

      ��������addr��ָ�Ŀ�ĵ�һ���ֽ������ֽ�value��.

 

str���ַ�����������

char   stpcpy(char *dest,constchar *src)

       ���ַ���src���Ƶ�dest

char   strcat(char *dest,constchar *src)

       ���ַ���src��ӵ�destĩβ

char   strchr(const char*s,int c)

       �����������ַ�c���ַ���s�е�һ�γ��ֵ�λ��

int   strcmp(const char *s1,const char *s2)

       �Ƚ��ַ���s1��s2�Ĵ�С,������s1-s2

char   strcpy(char *dest,constchar *src)

       ���ַ���src���Ƶ�dest

size_t strcspn(const char *s1,const char *s2)

       ɨ��s1,������s1����,��s2��Ҳ�е��ַ�����

char   strdup(const char*s)

       ���ַ���s���Ƶ���������ĵ�Ԫ

int   stricmp(const char *s1,const char *s2)

       �Ƚ��ַ���s1��s2,������s1-s2

size_t strlen(const char *s)

       �����ַ���s�ĳ���

char   strlwr(char *s)

       ���ַ���s�еĴ�д��ĸȫ��ת����Сд��ĸ,������ת������ַ���

char   strncat(char*dest,const char *src,size_t maxlen)

       ���ַ���src�����maxlen���ַ����Ƶ��ַ���dest��

int   strncmp(const char *s1,const char *s2,size_t maxlen)

       �Ƚ��ַ���s1��s2�е�ǰmaxlen���ַ�

char   strncpy(char*dest,const char *src,size_t maxlen)

       ����src�е�ǰmaxlen���ַ���dest��

int   strnicmp(const char *s1,const char *s2,size_t maxlen)

       �Ƚ��ַ���s1��s2�е�ǰmaxlen���ַ�

char   strnset(char *s,intch,size_t n)

       ���ַ���s��ǰn���ַ�����ch��

char   strpbrk(const char*s1,const char *s2)

       ɨ���ַ���s1,��������s1��s2�о��е��ַ�����

char   strrchr(const char*s,int c)

       ɨ��������һ�������ַ�c��һ���ַ���s

char   strrev(char *s)

       ���ַ���s�е��ַ�ȫ���ߵ�˳����������,���������к���ַ���

char   strset(char *s,intch)

       ��һ���ַ���s�е������ַ�����һ���������ַ�ch

size_t strspn(const char *s1,const char *s2)

       ɨ���ַ���s1,��������s1��s2�о��е��ַ�����

char   strstr(const char*s1,const char *s2)

       ɨ���ַ���s2,�����ص�һ�γ���s1��λ��

char   strtok(char *s1,constchar *s2)

       �����ַ���s1,���ַ���s1�����ַ���s2�ж���Ķ�������ָ�

char   strupr(char *s)

       ���ַ���s�е�Сд��ĸȫ��ת���ɴ�д��ĸ,������ת������ַ���

 

���������ӳ���,���ں�����Ϊdos.h��alloc.h��malloc.h��stdlib.h��process.h

int   allocmem(unsigned size,unsigned *seg)����DOS������е��ڴ�,

       sizeΪ�����ڴ��С,segΪ�������ڴ�ָ��

int   freemem(unsigned seg)�ͷ���ǰ��allocmem������ڴ�,segΪָ�����ڴ�ָ��

int   setblock(int seg,int newsize)�����������޸���������ڴ泤��,

       segΪ�ѷ����ڴ���ڴ�ָ��,newsizeΪ�µĳ���

 

int   brk(void *endds)

       �����������ı��������ó�������ݶεĿռ�����,�µĿռ������ַΪendds

char  *sbrk(int incr)

       �������������ӷ�������ó�������ݶεĿռ�����,����incr���ֽڵĿռ�

 

unsigned long coreleft() ����������δ�õĴ洢���ĳ���,���ֽ�Ϊ��λ

void  *calloc(unsigned nelem,unsignedelsize)����nelem������Ϊelsize���ڴ�ռ�

       �������������ڴ��ָ��

void  *malloc(unsignedsize)����size���ֽڵ��ڴ�ռ�,�������������ڴ��ָ��

void   free(void*ptr)�ͷ���ǰ��������ڴ�,��Ҫ�ͷŵ��ڴ��ָ��Ϊptr

void  *realloc(void *ptr,unsignednewsize)�ı��ѷ����ڴ�Ĵ�С,ptrΪ�ѷ�������

       �������ָ��,newsizeΪ�µĳ���,���ط���õ��ڴ�ָ��.

 

long   farcoreleft()����������Զ����δ�õĴ洢���ĳ���,���ֽ�Ϊ��λ

void far *farcalloc(unsigned long units,unsigned longunitsz)

          ��Զ�ѷ���units������Ϊunitsz���ڴ�ռ�,�������������ڴ��ָ��

void  *farmalloc(unsigned longsize)����size���ֽڵ��ڴ�ռ�,

      �����ط�����ڴ�ָ��

void   farfree(void far*block)�ͷ���ǰ��Զ�ѷ�����ڴ�ռ�,

       ��Ҫ�ͷŵ�Զ���ڴ��ָ��Ϊblock

void far *farrealloc(void far *block,unsigned longnewsize)�ı��ѷ����Զ����

          ��Ĵ�С,blockΪ�ѷ������ڴ������ָ��,newzieΪ�µĳ���,���ط����

          ���ڴ�ָ��

ʱ�����ں���,������Ϊtime.h��dos.h

��ʱ�����ں�����,��Ҫ�õ��Ľṹ�����¼���:

��ʱ����������ṹtm

������������������������������������������������

��structtm                                  ��

��{                                          ��

�� int tm_sec;                   ��

�� int tm_min;                   ��

�� int tm_hour;                  ��

�� int tm_mday;                ��

�� int tm_mon;                 ��

�� int tm_year;             ��

�� int tm_wday;        ��

�� int tm_yday;    ��

�� int tm_isdst; ��

��}                                          ��

������������������������������������������������

��������ṹdate

����������������������������������

��structdate                  ��

��{                            ��

�� int da_year; ��

�� char da_day;       ��

�� char da_mon;   ��

��}                            ��

����������������������������������

ʱ������ṹtime

������������������������������������

��structtime                    ��

��{                              ��

�� unsigned char ti_min;  ��

�� unsigned char ti_hour; ��

�� unsigned charti_hund;        ��

�� unsigned char ti_sec;   ��

��                               ��

������������������������������������

char     *ctime(long *clock)

           ��������clock��ָ��ʱ��(���ɺ���time���ص�ʱ��)ת�������и�ʽ��

           �ַ���:Mon Nov 21 11:31:54 1983\n\0

char     *asctime(struct tm *tm)

           ��������ָ����tm�ṹ���ʱ��ת�������и�ʽ���ַ���:

           Mon Nov 21 11:31:54 1983\n\0

double    difftime(time_t time2,time_t time1)

           ����ṹtime2��time1֮���ʱ����(����Ϊ��λ)

struct tm *gmtime(long *clock)��������clock��ָ��ʱ��(���ɺ���time���ص�ʱ��)

           ת���ɸ�������ʱ��,����tm�ṹ��ʽ����

struct tm *localtime(long*clock)��������clock��ָ��ʱ��(�纯��time���ص�ʱ��)

           ת���ɵ��ر�׼ʱ��,����tm�ṹ��ʽ����

void      tzset()�������ṩ�˶�UNIX����ϵͳ�ļ�����

long      dostounix(struct date *dateptr,struct time *timeptr)

           ��������dateptr��ָ������,timeptr��ָ��ʱ��ת����UNIX��ʽ,������

           �Ը�������ʱ��1970��1��1���賿�����ڵ�����

void      unixtodos(long utime,struct date *dateptr,struct time *timeptr)

           ���������Ը�������ʱ��1970��1��1���賿�����ڵ�����utimeת����

           DOS��ʽ���������û���ָ�Ľṹdateptr��timeptr��

void      getdate(struct date *dateblk)��������������ڵ�����д��ṹdateblk ���Թ��û�ʹ��

void      setdate(struct date *dateblk)��������������ڵ����ڸĳ��ɽṹdateblk��ָ��������

void      gettime(struct time*timep)��������������ڵ�ʱ��д��ṹtimep��, �Թ��û�ʹ��

void      settime(struct time*timep)��������������ڵ�ʱ���Ϊ �ɽṹtimep��ָ��ʱ��

long      time(long*tloc)�����������Ը�������ʱ��1970��1��1���賿���������� ��������,������ֵ����tloc��ָ�ĵ�Ԫ��.

int       stime(long*tp)��������tp��ָ��ʱ��(������time�����ص�ʱ��) д��������.    

������*/

	return 0; 
}
