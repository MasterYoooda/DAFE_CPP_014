#pragma once

#include"Variable.h"
#include"Token_stream.h"

class Calculator{
public:
    void calculate();
private:
    Symbol_table s_table;
    Token_stream ts;
    double expression();
    double primary();
    double term();
    double declaration(Token let_or_const);
    double statement();
    void clean_up_mess();
    void printHelp();

};
