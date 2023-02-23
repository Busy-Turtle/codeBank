#include <iostream>
#include <mysql/mysql.h>
using namespace std;

void errorcheck(MYSQL* con)
{
    fprintf(stderr, "%s\n", mysql_error(con));
    mysql_close(con);
    exit(1);
}

int main(){

    MYSQL* con = mysql_init(NULL);

    if(con == NULL){
        fprintf(stderr, "%s\n", mysql_error(con));
        exit(1);
    }

    if(mysql_real_connect(con,"localhost","root","iot123",NULL,3306,NULL,0))
        cout << "connect done!!" << endl;
    else 
        cout << "connect failed..." << endl;

    if (mysql_query(con, "USE LOL_CHAR")){
        errorcheck(con);
    }
    if (mysql_query(con, "CREATE TABLE AD(Name TEXT, Role TEXT, Grade CHAR, Rp INT)")) {
        //errorcheck(con);
    }
    if (mysql_query(con, "CREATE TABLE AP(Name TEXT, Role TEXT, Grade CHAR, Rp INT)")) {
        //errorcheck(con);
    }
    if (mysql_query(con, "INSERT INTO AD VALUES('Zedd','근딜','A',4800)")){
        errorcheck(con);
    }
    if (mysql_query(con, "INSERT INTO AD VALUES('Yasuo','근딜','F',6400)")){
        errorcheck(con);
    }
    if (mysql_query(con, "INSERT INTO AD VALUES('Mis.Fortune','원딜','B',1350)")){
        errorcheck(con);
    }
    if (mysql_query(con, "INSERT INTO AD VALUES('Ashe','원딜','A',420)")){
        errorcheck(con);
    }
    if (mysql_query(con, "INSERT INTO AD VALUES('Sion','탱커','C',1350)")){
        errorcheck(con);
    }    
    if (mysql_query(con, "INSERT INTO AD VALUES('Bbobbi','탱커','B',420)")){
        errorcheck(con);
    }

    mysql_close(con);
    cout << "^_^" << endl;  
    return 0;
}