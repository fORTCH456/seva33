#include <iostream>
using namespace std;

int main()
{
    //����������� ���������
    setlocale(LC_ALL, "Ru");


    //������� �� ����� 1 

    /*
    //���������� ����������
    int n;
    int sum = 0;

    cout << "������� ����� n\n";
    //���������� ��������� ������ �� �������
    cin >> n;

    //����
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    //����� ����������
    cout << "C���� ����� �� 1 �� n = ";
    cout << sum;
    */



    //������� �� ����� 2

    /*
        //���������� ����������
        int n;
        int i = 1;
        int facto = 1;

        cout << "������� ����� n\n";
        //���������� ��������� ������ �� �������
        cin >> n;

        //����� ���� while
        while (n >= i)
        {

            facto *= i;
            i++;

        }

        //����� ����������
        cout << "��������� ����� n = ";
        cout << facto;
    */

    //������� �� ����� 3
    /*
    //���������� ����������
    int n;
    std::cout << "������� ����� n\n";
    //���������� ��������� ������ �� �������
    std::cin >> n;

    // ����
    for (int i = 1; i <= n; i++)

        //��������� ��������
        i % 2 == 0 ? std::cout << i << " ������\n" : std::cout << i << " ��������\n";
    */



    //������� �� ����� 4

    /*
    //���������� ����������
    int n;
    cout << "������� ����� n\n";
    //���������� ��������� ������ �� �������
    cin >> n;

    // ����
    while (n >= 1)
    {
        cout << n << " ";
        n--;
    }
    */



    //������� �� ����� 5

    /*
    //���������� ����������
    int n;

    cout << "������� ����� n\n";

    //���������� ��������� ������ �� �������
    cin >> n;

    // ���� ������� ���������� ������ ���������
    for (int i = 1; i <= 10; i++)
    {
        //��������� ���� ������� ������� ������������ ���� �����
        while (true)
        {
            int product = n * i;
            cout << n << " * " << i << " = " << product << endl;
            break;
        }
    */


    //������� �� ����� 6

    /*//���������� ����������
    int n;

    cout << "������� ����� �������� \n";

    //���������� ��������� ������ �� �������
    cin >> n;

    // ���� ���������� ����� ��������
    for (int i = 1; i <= n; i++)
    {

        int fi = (1/sqrt(5))*(pow((1+sqrt(5))/2,i)- pow((1 - sqrt(5)) / 2, i));
        //����� ����������
        cout << "fi"<<i<<" = " << fi << endl;
    }
    */



    //������� �� ����� 7

    /*//���������� ����������
    string n;
    int sum=0;

    cout << "������� ����� \n";

    //���������� ��������� ������ �� �������
    cin >> n;


    // ���� ���������� ����� �����
    for (int i = 0; i < n.length(); i++)
    {
        char a = n[i];
        int number = a - 48; // �������������� ������� � ����� �����
        sum += number;
        cout << " + " << a;
    }
    cout << " = " << sum << endl;
    */



    //������� �� ����� 8

   /*//���������� ����������
   string n;


   cout << "������� ����� �� �������� \n";

   //���������� ��������� ������ �� �������
   cin >> n;


   // ���� ��� ��������������� ������
   for (int i = n.length(); i>=0; i--)
   {
       char a = n[i];


       cout << a;
   }
   */



   //������� �� ����� 9

   /*
   //���������� ����������
   int n;
   bool sostav = true;
   cout << "������� �����\n";
   cin >> n;

   // �������� �� ������������ ������
   if (n == 0 || n < 0 ||n ==1)
   {
       cout << "�������� ������";
   }
   else
   {
       //���� �������� �� ��������� �����
       for (int i = 2; i <= (sqrt(abs(n))); i++) {

           if (n % i == 0) {
               sostav = false;
               break;
           }
       }
       // ����� ���������� � ����������� �� �������� ���������� sostav
       if (sostav)
           cout << "����� �������" << endl;
       else
           cout << "����� ���������" << endl;
   */



   //������� �� ����� 10

   /*
   //���������� ����������
   string n;
   bool sim = true;
   int j;


   cout << "������� ����� \n";

   //���������� ��������� ������ �� �������
   cin >> n;
   // ������������� ���������� j
   j = n.length() - 1;

   // ���� ����������� ����������� �� �����
   for (int i = 0; j>i; i++,j--)
   {

       char a = n[i];
       char b = n[j];
       //���� ��������������� ������� �� ����������� �� ���������� sim ��������� �������� false
       if (a != b)
       {
           sim = false;
           break;
       }

   }
   //����� ���������� � ����������� �� �������� ���������� sim
   if (sim == true)
   {
       cout << "����� ������������";
   }
   else if(sim == false)
   {
       cout << "����� ��������������";
   }
   */

   //������� �� ���������� ���������� � �������� 1

   /*
   //���������� ����������
   int n;
   cout << "������� ����� n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   //����� ����������
   if (n % 2 == 0)
       cout << "����� ������";
   else
       cout << "����� ��������";
   */


   //������� �� ���������� ���������� � �������� 2

   /*
   * //���������� ����������
   int n;
   cout << "������� ����� n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   //����������� n ������������ ������������� ��� ����� 0
   if (n > 0)
       cout << "����� �������������";
   else if (n < 0)
       cout << "����� �������������";
   else
       cout << "����� ����� ����";
   */



   //������� �� ���������� ���������� � �������� 3

   /*
   * //���������� ����������
   int n;
   cout << "������� ����� n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   // ��������� �������� ����������� ������ �� ����� 10
   n > 10 ? cout << "n ������ 10" : cout << "n ������ 10";
   */


   //������� �� ���������� ���������� � �������� 4

   /*
    //���������� ����������
   int n;

   cout << "������� ����� n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   // ��������� �������� ����������� ������ �� ����� 5
   n % 5 == 0 ? cout << "n ������ 5" : cout << "n �� ������ 5";
   */


   //������� �� ���������� ���������� � �������� 5

   /*
   //���������� ����������
   int n;
   cout << "������� ���\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   //�������� �� ���������� ���
   if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
       cout << "��� ����������";
   else
       cout << "���  ������������";
   */


   //������� �� ���������� ���������� � �������� 6

   /*
   //���������� ����������
   int n;
   cout << "������� �����\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   //�������� ������ �������� �� ����� � �������� �� 1 �� 100
   if (n > 1 && n < 100)
       cout << "����� �������� � ���������� �� 1 �� 100";
   else
       cout << "����� �� �������� � ���������� �� 1 �� 100";
   */



   //������� �� ���������� ���������� � �������� 7

   /*
   //���������� ����������
   int n;
   cout << "������� ����� ��� ������ n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   //��������� ����� ������ � ����� �������������� �������� ���
   switch (n)
   {
       case 1:
           cout << "������� ����������� ";
       break;
       case 2:
           cout << "������� �������";
       break;
       case 3:
           cout << "������� �����";
       break;
       case 4:
           cout << "������� �������";
       break;
       case 5:
           cout << "������� �������";
       break;
       case 6:
           cout << "������� �������";
       break;
       case 7:
           cout << "������� �����������";
       break;
       default:
           cout << "������ ������� �� ���������";
       break;
   }
   */



   //������� �� ���������� ���������� � �������� 8

   /*
   //���������� ����������
   int n;
   cout << "������� ����� ������ n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   //��������� ����� ������ � ����� �������������� �������� ������
   switch (n)
   {
   case 1:
       cout << "������� ������ ";
       break;
   case 2:
       cout << "������� �������";
       break;
   case 3:
       cout << "������� ����";
       break;
   case 4:
       cout << "������� ������";
       break;
   case 5:
       cout << "������� ���";
       break;
   case 6:
       cout << "������� ����";
       break;
   case 7:
       cout << "������� ����";
       break;
   case 8:
       cout << "������� ������";
       break;
   case 9:
       cout << "������� ��������";
       break;
   case 10:
       cout << "������� �������";
       break;
   case 11:
       cout << "������� ������";
       break;
   case 12:
       cout << "������� �������";
       break;
   default:
       cout << "������ ������� �� ���������";
       break;
   }
   */


   //������� �� ���������� ���������� � �������� 9

   /*
   //���������� ����������
   int n;
   cout << "������� ����� n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   //�������� �� �������� � ��������������� �����
   if (n % 2 == 0 && n>0)
       cout << "����� ������ � �������������";
   else
       cout << "����� ��� �������� ��� �������������";
   */


   //������� �� ���������� ���������� � �������� 10

   /*
   //���������� ����������
   int n;
   cout << "������� ����� n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   //�������� ����� �� ���������� � �� ������ �� ��� ����
   if (n % 2 != 0 || n < 0)
       cout << "����� ��� �������� ��� �������������";
   else
       cout << "����� ������������� � ������";

   */



   //������� �� �������������� ���������� 1

   /*
   //���������� ����������
   int n;
   cout << "������� ����� n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   // �������� �� �������� � �� �� ������ �� ����� � ��������
   if(n > 10 && n < 20 && n % 2 == 0)
       cout << "������ � ��������� �� 10 �� 20 � ��� ������ ";
   else
       cout << "������ �� � ��������� �� 10 �� 20 ��� ��� �������� ";
   */



   //������� �� �������������� ���������� 2

   /*
   //���������� ����������
   int n;
   cout << "������� ����� n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   // �������� �� �������� � �� �� ������ �� ����� � ��������
   n > 0 && n % 2 == 0 ? cout << "����� ������������� � ������" : cout << "����� ������������� � ��������";
   */


   //������� �� �������������� ���������� 3

   /*
   //���������� ����������
    char n;
   cout << "������� ���� ������ A, B, C, D, F \n";

   //���������� ��������� ������ �� �������
   cin >> n;

   // �������� ������
   switch (n)
   {
   case 'A':
       cout << "A - ������� ";
       break;
   case 'B':
       cout << "B - ������ ";
       break;
   case 'C':
       cout << "C - �����������������";
       break;
   case 'D':
       cout << "D - �����";
       break;
   case 'F':
       cout << "F - ������";
       break;
   default:
       cout << "������ � ������ ";
       break;
   }*/


   //������� �� �������������� ���������� 4

   /*
   //���������� ����������
   int n;
   cout << "������� ����� n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   // �������� �� ������������� � ��������� 3
   if (n > 0)
   {
       if(n%3==0)
       {
           cout << "����� ������������� � ������� �� 3";
       }
       else
       {
           cout << "����� �� ������� �� 3";
       }
   }
   else
   {
       cout << "����� �������������";
   }

   */



   //������� �� �������������� ���������� 5

   /*
    //���������� ����������
   int n;
   cout << "������� ����� n\n";

   //���������� ��������� ������ �� �������
   cin >> n;

   // �������� �� ���������� � ��������� � �� ��������
   if (n > 1 && n < 100 && n % 2 != 0)
   {
       cout << "����� � ��������� �� 1 �� 100 � ��� ��������";
   }
   else
   {
       cout << "����� ���� �� � ��������� �� 1 �� 100 ���� ��� ������";
   }
   */


   //��������������� ������� 1

   /*
   srand(time(0)); // ��������� ��������� ����� ����� ����� �� �����������
   int a = rand() % 100 + 1;

   int b; // ����� ������

   cout << "� ������� ����� �� 1 �� 100" << endl;

   while (true) { // ���� ����� �� �������
       cout << "����� �����: ";
       cin >> b;

       if (b < a) {
           cout << "��� ����� ������. �������� ��� ���." << endl;
       }
       else if (b > a) {
           cout << "��� ����� ������. �������� ��� ���." << endl;
       }
       else {
           cout << "�� ������" << endl;
           break; // ����� �� �����, ��� ��� ����� �������
       }
   }
   */


   //��������������� ������� 2

   /*
   double result;
   double n1, n2;
   char oper;

   cout << "������� ����� n1\n" << endl;
   cin >> n1;
   cout << "������� �������������� �������� + - * /\n" << endl;
   cin >> oper;
   cout << "������� ����� n2\n" << endl;
   cin >> n2;

   switch (oper)
   {
   case '+':
       result = n1 + n2;
       break;
   case '-':
       result = n1 - n2;
       break;
   case '*':
       result = n1 * n2;
       break;
   case '/':
       if (n2 == 0) {
           cout << "�� 0 ������ ������";
           break;
       }
       else {
       result = n1 / n2;
       break;
   }
   default:
       cout << "������ � ������";
       break;
   }
   cout << "��������� �������� = " << result;
   */



   //��������������� ������� 3

   /*
   int a;

   cout << "������� ��� �������: ";
   cin >> a;

   if (a < 13) {
       cout << "�� �������." << endl;
   } else if (a < 19) {
       cout << "�� ���������." << endl;
   } else if (a < 65) {
       cout << "�� ��������." << endl;
   } else {
       cout << "�� �������." << endl;
   */


   //��������������� ������� 3

       /*
       //���������� ����������
       string password;
       string specialchars = "@$#&/";
       bool prav = false;

       cout << "������� ������. ������ ������ ���������:\n"
           << " 8 �������� � ������\n"
           << " �����\n"
           << " ����������� ������� (& $ # @ /)\n";
       cin >> password;
       // �������� �� �� ���� �� � ������ 8 ��������
       if (password.length() >= 8)
       {
           //���� ��� ���� ����� ������ ������ ���������� �������� �� �� ����������� ��������
           for (int i = 0; i <= password.length(); i++)
           {
               // �������� �� �� ���� �� � ������ �����
               if (isdigit(password[i]))

               {
                   // �������� �� �� ���� �� � ������ ����������� �������
                   if ((password.find('@')) != string::npos || (password.find('$')) != string::npos || (password.find('#')) != string::npos || (password.find('&')) != string::npos || (password.find('/')) != string::npos)
                   {
                       prav = true;
                   }
               }
           }
           //���� ���������� ��������� � �������� ������ �� ����� �������� ���� �����������
           if (prav == true)
           {
               cout << "�� ������� ������� ������";
           }
           //���� ���������� �������� �� �������� ����
           else if (prav == false)
           {

               cout << "������ ������ ��������� 8 �������� � ��������� ����� � ����� ����������� �������(& $ # @ /)";

           }

       }
       */



       //��������������� ������� 5

       /*
       double s1, s2, s3;

       cout << "������� ����� ������ �������: ";
       cin >> s1;

       cout << "������� ����� ������ �������: ";
       cin >> s2;

       cout << "������� ����� ������� �������: ";
       cin >> s3;

       // ��������� ������� ������������� ������������:
       if ((s1 + s2 > s3) && (s1 + s3 > s2) && (s2 + s3 > s1)) {
       cout << "����������� � ������ ��������� ����� ������������." << endl;
       } else {
       cout << "����������� � ������ ��������� �� ����� ������������." << endl;
       }
       */

}