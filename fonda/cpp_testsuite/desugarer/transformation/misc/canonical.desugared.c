#include <stdbool.h>

extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_2;
extern const bool __static_condition_default_0;
void __static_initializer_default() {
__static_renaming("__x_1", "x");
__static_renaming("__y_3", "y");

__static_condition_renaming("__static_condition_default_0", "(defined A) && (defined B)");
__static_condition_renaming("__static_condition_default_2", "(defined A) && !(defined B)");

};

long int  __x_1;
long int  __y_3;

