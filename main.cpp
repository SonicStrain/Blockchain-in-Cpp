#include <bits/stdc++.h>
#include <string>
#include <vector>
#include "sha256.h"
#include "block.h"
using namespace std;


int main(){

    vector <string> transactions;

    transactions.push_back("He gave me 10 coins");
    transactions.push_back("I gave him 5 coins;");

    string IBH = sha256("Initial Block Hash");

    //cout << IBH << "\n";

    Block genesisBlock = Block(IBH,transactions);
    //cout << genesisBlock.getBlockHash() << endl;

    //the next block
    transactions.clear();
    //lets add some new transaction
    transactions.push_back("Sagen paid 10 coins to person1");
    transactions.push_back("Person1 paid 20 coins to Sagen");

    //generate the Block
    Block block1 = Block(genesisBlock.getBlockHash(),transactions);
    cout << block1.getBlockHash() << endl;

    return 0;
}