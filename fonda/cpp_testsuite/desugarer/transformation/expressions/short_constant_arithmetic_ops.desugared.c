#include <stdbool.h>

extern void __static_parse_error(char *msg);
extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

void __static_initializer_default() {
__static_renaming("__x_0", "x");
__static_renaming("__main_1", "main");


if (0)
{
__static_parse_error("Unable to parse");
}
};

int  __main_1 (void  ) {
{
int  __x_0;
 __x_0  = 3 + 5 ;

 __x_0  = 2 - 1 ;

 __x_0  = 6 * 4 ;

 __x_0  = 8 / 2 ;

 __x_0  = 10 % 5 ;

return 0 ;

}


}

