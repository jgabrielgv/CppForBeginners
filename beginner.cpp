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

void pointerToPointer()
{
    int var;
    int *ptr;
    int **pptr;
    var = 3000;
    // take the address of var
    ptr = &var;
    // take the address of ptr using address of operator &
    pptr = &ptr;
    // take the value using pptr
    cout << "Value of var :" << var << endl;
    cout << "Value available at *ptr :" << *ptr << endl;
    cout << "Value available at **pptr :" << **pptr << endl;
}

void stringFunctions()
{
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
}

void getSeconds(unsigned long *par);

double getAverage(int *arr, int size);

void swap(int &x, int &y);

double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};

double &setValues(int i)
{
    return vals[i]; // return a reference to the ith element
}

typedef struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Books;

/**struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};*/

void createBooks();

void printBooks(struct Books book);

typedef long int *pint32;

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

    stringFunctions();

    int *ip;
    int var = 20;

    ip = &var;

    cout << "Value of var varoable: " << var << endl;
    cout << "Adress stored in ip variable: " << ip << endl;
    cout << "Value of *ip variable: " << *ip << endl;

    int *ptr = NULL;
    cout << "The value of ptr is: " << ptr << endl;

    bool isNull = false;
    if (!ptr)
    {
        isNull = true;
    }
    cout << "Pointer is null: " << isNull << endl;

    const int MAX = 3;
    int var3[MAX] = {10, 100, 200};
    int *ptr1;

    ptr1 = var3;
    int var1Length = sizeof(var3) / sizeof(*var3);
    cout << "var1 length: " << var1Length << endl;

    for (int i = 0; i < var1Length; i++)
    {
        cout << "Address of var[" << i << "] = " << ptr1 << endl;
        cout << "Value of var[" << i << "] = " << *ptr1 << endl;
        // point to the next location
        ptr1++;
    }

    int var4[MAX] = {11, 12, 13};
    for (int i = 0; i < MAX; i++)
    {
        cout << "Before assign i: " << *var4 << endl;
        *var4 = i;
        cout << "After assign i: " << *var4 << endl;
    }

    int var5[MAX] = {25, 12, 17};
    *(var5 + 2) = 500;
    cout << "var5. Position 0: " << var5[0] << ". Position 1: " << *(var5 + 1) << ". Position 2: " << *(var5 + 2) << endl;

    int var6[MAX] = {65, 66, 67};
    int *ptr2[MAX];

    for (int i = 0; i < MAX; i++)
    {
        ptr2[i] = &var6[i]; //assign the address of integer
    }

    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of var[" << i << "] = " << *ptr2[i] << endl;
    }

    char *names[MAX] = {"Zara Ali", "Hina Ali", "Nuha Ali"};

    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of names[" << i << "] = " << names[i] << endl;
    }

    pointerToPointer();

    unsigned long sec;
    getSeconds(&sec);
    cout << "Number of seconds: " << sec << endl;

    // an int array with 5 elements.
    int balance2[5] = {1000, 2, 3, 17, 50};
    double avg;
    // pass pointer to the array as an argument.
    avg = getAverage(balance2, 5);
    // output the returned value
    cout << "Average value is: " << avg << endl;

    // declare simple variables
    int i2;
    double d;
    // declare reference variables
    int &r = i2;
    double &s = d;

    i2 = 5;
    cout << "Value of i : " << i2 << endl;
    cout << "Value of i reference : " << r << endl;
    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s << endl;

    // local variable declaration:
    int a = 100;
    int b = 200;
    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;
    /* calling a function to swap the values.*/
    swap(a, b);
    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;

    cout << "Value before change" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }
    setValues(1) = 20.23; // change 2nd element
    setValues(3) = 70.8;  // change 4th element
    cout << "Value after change" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "vals[" << i << "] = ";
        cout << vals[i] << endl;
    }

    // current date/time based on current system
    time_t now = time(0);
    // convert now to string form
    char *dt = ctime(&now);
    cout << "The local date and time is: " << dt << endl;
    // convert now to tm struct for UTC
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "The UTC date and time is:" << dt << endl;

    tm *ltm = localtime(&now);
    cout << "Year: " << 1900 + ltm->tm_year << endl;

    char name[50];
    cout << "Please enter your name: ";
    //cin >> name;
    cout << "Your name is: " << name << endl;

    cerr << "Error message: "
         << "Unable to read..." << endl;
    clog << "Error message: "
         << "Unable to read..." << endl;

    createBooks();

    pint32 x, y, z;

    return 0;
}

void getSeconds(unsigned long *par)
{
    //get the current number of seconds
    *par = time(NULL);
    return;
}

double getAverage(int *arr, int size)
{
    int i, sum = 0;
    double avg;
    for (i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    avg = double(sum) / size;
    return avg;
}

// function definition to swap the values.
void swap(int &x, int &y)
{
    int temp;
    temp = x; /* save the value at address x */
    x = y;    /* put y into x */
    y = temp; /* put x into y */
    return;
}

void createBooks()
{
    Books Book1, Book2; // Declare Book1 of type Book

    // book 1 specification
    strcpy(Book1.title, "Learn C++ Programming");
    strcpy(Book1.author, "Chand Miyan");
    strcpy(Book1.subject, "C++ Programming");
    Book1.book_id = 6495407;
    // book 2 specification
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Yakit Singha");
    strcpy(Book2.subject, "Telecom");
    Book2.book_id = 6495700;

    printBooks(Book1);
    printBooks(Book2);

    struct Books *struct_pointer;
    struct_pointer = &Book1;
    cout << "Book 1 title only: " << struct_pointer->title << endl;
}

void printBooks(struct Books book)
{
    // Print Book2 info
    cout << "Book title : " << book.title << endl;
    cout << "Book author : " << book.author << endl;
    cout << "Book subject : " << book.subject << endl;
    cout << "Book d : " << book.book_id << endl;
}