#include <include/ion.h>
#include <ast/ast.h>

using namespace Ion;
int main(){
    IonParser parser("test/test.py");
    parser.set_debug_level(1);
    parser.parse();
    auto node = parser.getTree();
    return 0;
}