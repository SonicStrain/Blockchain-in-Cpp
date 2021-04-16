#include <bits/stdc++.h>
#include "sha256.h"

class Block{
    std::string previousHash;
    std::vector<std::string> transactions;
    std::string blockHash;

    public:

    Block(std::string previousHash,std::vector<std::string> transactions){
        this->previousHash = previousHash;
        this->transactions = transactions;

        std::string passValue = "";
        long noOfTransactions = (long)transactions.size();

        for(long i=0;i<noOfTransactions;i++){
            passValue += this->transactions[i];
        }

        passValue += previousHash;

        this->blockHash = sha256(passValue);
    }

    std::string getBlockHash(){
        return this->blockHash;
    }

    std::string getPreviousHash(){
        return this->previousHash;
    }

};


