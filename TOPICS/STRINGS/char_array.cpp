#include<iostream>
using namespace std;

int getlength(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0' ; i++)
    {
        /* code */
        count++;

    }
    return count;
}


char lower(char ch){
    if (ch>= 'a' && ch<= 'z') || (ch>= '0' && ch<= '9')
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

void reverses(char name[], int n){

    int s = 0;
    int e = n-1;

    while (s<e)
    {
        swap(name[s++], name[e--]);
    }


}

bool check( char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        if (a[e] != a[e])
        {
            return 0;

        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
    /* code */
    char name[20];
    cin>> name;
    cout<< name << endl;
    int len = getlength(name);
    cout<< getlength(name)<< endl;
    reverses(name, len);
    cout<< name << endl;
    cout<< check(name, len);
    return 0;
}
