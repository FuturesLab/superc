#include <stdbool.h>

extern void __static_parse_error(char *msg);
extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

void __static_initializer_default() {
__static_renaming("__y_0", "y");
__static_renaming("__x_1", "x");


};
enum bob {
__A_2 =  __y_0  + 2,
};

int  __y_0= 7;// L1
enum bob ;// L3
enum bob  __x_1;// L5
enum bob ;// L8

