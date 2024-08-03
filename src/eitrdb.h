#ifndef EITRDB_H
#define EITRDB_H

#include<string>

class EitrDB{
    static Database createDB(std::string &dbName);
};

#endif