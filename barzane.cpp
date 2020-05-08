
#include <iostream>
#include "../../include/Lexer.h"
#include "../../include/Parser.h"

int main() {
    string text = "x : number; x = 5; print x;\ny: boolean;";;
    Lexer lexer = Lexer(text);
    // cout << lexer;

    Parser parser = Parser(lexer);
    parser.display();

    return 0;
}
