#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m;

    //insertion

    //Ist
    pair<string, int> p = make_pair("ankit", 3);
    m.insert(p);
    //2nd
    pair<string, int> q("kapoor", 2);
    m.insert(q);
    //3rd
    m["is"] = 1;
    m["is"] = 3;

    //search
    cout<< m["ankit"] << endl;
    cout<< m.at("kapoor") << endl;

    // cout<< m.at("unknown") << endl; //it will give error as there will be no entry for unknown 
    cout<< m["unknown"] << endl; // it will create an new entry

    cout<< m.size() << endl;

    // to check the presense
    cout<< m.count("bro") << endl;

    // erase function
    m.erase("is");
    cout << m.size() << endl;

    // for loop
    for (auto i:m)
    {
        cout<< i.first << " " << i.second << endl;
    }

    // using iterator
    unordered_map<string, int> :: iterator it = m.begin();

    while (it!=m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }
    
    return 0;
}
