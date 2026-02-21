#include <iostream>
#include <string>

using namespace std;

/*
    Polymorphism

    8. Virtual Destructors
*/


/*
    Here's a simplified C++ code example that demonstrates the use of virtual destructors in a database operation scenario. 
    In this example, we have a base class DatabaseConnection representing a generic database connection. 
    We then create derived classes for specific database systems (e.g., MySQL, PostgreSQL), each with its own constructor, 
    destructor, and overridden methods for connecting to and disconnecting from the database.
*/

class DatabaseConnection {
    public:
        DatabaseConnection(const string& dbName) : dbName_(dbName) {
            cout << "Connecting to database: " << dbName_ << endl;
        }

        ~DatabaseConnection() {
            cout << "Disconnecting from database: " << dbName_ << endl;
        }

        virtual void ExecuteQuery(const string& query) const {
            cout << "Executing query: " << query << endl;
        }

        string getDbName() const {
            return this->dbName_;
        }

    private:
        string dbName_;
};


class MySQLConnection : public DatabaseConnection {
    public:
        MySQLConnection(const string& dbName) : DatabaseConnection(dbName) {
            cout << "Using MySQL driver for database: " << dbName << endl;
        }

        ~MySQLConnection() {
            cout << "Closing MySQL connection for database: " << getDbName() << endl;
        }

        void ExecuteQuery(const string& query) const override {
            cout << "Executing MySQL query: " << query << endl;
        }
};

class PostgreSQLConnection : public DatabaseConnection {
    public:
        PostgreSQLConnection(const string& dbName) : DatabaseConnection(dbName) {
            cout << "Using PostgreSQL driver for database: " << dbName << endl;
        }

        ~PostgreSQLConnection() {
            cout << "Closing PostgreSQL connection for database: " << getDbName() << endl;
        }

        void ExecuteQuery(const string& query) const override {
            cout << "Executing PostgreSQL query: " << query << endl;
        }
};


int main() {

    system("clear");

    // Create and use database connections
    DatabaseConnection *mysqlConn = new MySQLConnection("mydb_mysql");
    DatabaseConnection *postgresConn = new PostgreSQLConnection("mydb_postgres");


    DatabaseConnection *connections[] = {mysqlConn, postgresConn};

    cout << "-------" << endl;

    // There is a mistake in the video, we need to print it.
    cout << connections[0]->getDbName() << endl;

    cout << "-------" << endl;

    mysqlConn->ExecuteQuery("SELECT * FROM users");
    postgresConn->ExecuteQuery("SELECT * FROM products");

    cout << "-------" << endl;

    delete mysqlConn;    // Calls MySQLConnection's destructor
    delete postgresConn; // Calls PostgreSQLConnection's destructor

}