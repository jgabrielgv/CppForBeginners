#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <iomanip>
#include <string>

using namespace std;

using std::setw;

int count5;
extern void write_extern();

void print_pointers()
{
    const int MAX = 3;
    int var[MAX] = {10, 100, 200};
    int *ptr;
    // let us have array address in pointer.
    ptr = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;
        // point to the next location
        ptr++;
    }
}

void str_functions(void)
{
    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;
    // copy str1 into str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;
    // concatenates str1 and str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;
    // total length of str3 after concatenation
    len = str3.size();
    cout << "str3.size() : " << len << endl;
}

int *getRandom()
{
    static int r[10];
    // set the seed
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i)
    {
        r[i] = rand();
        cout << r[i] << endl;
    }
    return r;
}

int main()
{
    count5 = 15;

    int age = 20;
    cout << "Size of char : " << sizeof(char) << " and cost: " << cos(5) << endl;

    enum color
    {
        red,
        green = 5,
        blue
    };
    color c = blue;
    cout << "Value of blue: " << c << endl;

    write_extern();

    srand((unsigned)time(NULL));

    int j = 0;
    for (int i = 0; i < 3; i++)
    {
        j = rand();
        cout << "Random Number: " << j << endl;
    }

    double balance[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Element" << setw(13) << "Value" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << setw(7) << i << setw(13) << balance[i] << endl;
    }

    double *p;
    double b2[3] = {5, 72, 2};
    p = b2 + 1;
    cout << "P: " << p[0] << endl;

    cout << "String Functions:" << endl;

    char char1[] = "Testing testo";
    char char2[] = "Added";
    char char3[] = "ing";
    char char4[] = "Testing testo";

    strcpy(char1, char2); //copies values one string into another
    cout << "Appends at the beginning: " << char1 << endl;
    strcat(char1, char2); //concates at the end of the string
    cout << "Append at the end: " << char1 << endl;
    cout << "Len: " << strlen(char1) << endl; //returns the length of the string s1
    cout << "Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2" << strcmp(char1, char2) << endl;
    //Returns 0 if s1 and s2 are the same; less than 0 if s1<s2; greater than 0 if s1>s2.
    cout << "First occurrence: " << strchr(char2, 'e') << endl;         //Returns a pointer to the first occurrence of character ch in string s1.
    cout << "First string occurence: " << strstr(char4, char3) << endl; //Returns a pointer to the first occurrence of string s2 in string s1.
    //cout << "First string occurence again: " << std::strstr(char1, char3) << endl;//Returns a pointer to the first occurrence of string s2 in string s1.

    str_functions();
    print_pointers();

    int *p1;
    p1 = getRandom();
    for (int i = 0; i < 10; i++)
    {
        cout << "*(p + )" << i << ") : ";
        cout << *(p1 + i) << endl;
    }

    string str4 = "Hello";
    string str5 = "World";
    string str6;

    str6 = str4;
    cout << "str6: " << str6 << endl;

    str6 = str4 + str5;
    cout << "Str4 + str5: " << str6 << endl;

    int len = str6.size();
    cout << "str6.size() : " << len << endl;

    int var1;
    char var2[10];

    cout << "Address of var1 variable: ";
    cout << &var1 << endl;

    


    return 0;
}