
#include <bits/stdc++.h>
using namespace std;

unsigned long long hash_func(string s){
    const unsigned long long P = 131;
    const unsigned long long SALT = 0x9e3779b97f4a7c15;

    unsigned long long h = SALT;

    for(char c : s){
        h = h * P + c;
        h ^= (h << 7);
        h ^= (h >> 3);
    }

    return h;
}

vector<unsigned long long> load_answers(){
    vector<unsigned long long> hashes;

    ifstream fin("answer.txt");

    unsigned long long x;

    while(fin >> x)
        hashes.push_back(x);

    return hashes;
}

bool check(string guess, int level){
    vector<unsigned long long> hashes = load_answers();

    if(level < 1 || level > hashes.size())
        return false;

    return hash_func(guess) == hashes[level - 1];
}

int main(){

    
    int level;
    string guess;

    cout << "Enter level: ";
    cin >> level;

    cout << "Enter guess: ";
    cin >> guess;


    if(check(guess, level))
        cout << "CORRECT\n";
    else
        cout << "WRONG\n";

    return 0;
}

