#include <soci/soci.h>
#include <soci/sqlite3/soci-sqlite3.h>
#include <iostream>
#include <string>

using namespace soci;

backend_factory const &backEnd = *soci::factory_sqlite3();
std::string connectString("./ledger.db");

int main()
{
    
    soci::session sql(backEnd, connectString);


    std::string id;
    sql << "SELECT LedgerSeq, LedgerHash, PrevHash, AccountSetHash, TransSetHash, TotalCoins,ClosingTime, PrevClosingTime, CloseTimeRes, CloseFlags  from Ledgers order by LedgerSeq desc limit 11", into(id);
    
    std::cout << "id : " << id << std::endl;

    {
        
    }
}
