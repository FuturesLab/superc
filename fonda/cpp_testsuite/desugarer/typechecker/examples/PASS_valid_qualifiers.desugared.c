#include <stdbool.h>

extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

void __static_initializer_default() {
__static_renaming("__main_0", "main");
__static_renaming("__a_1", "a");
__static_renaming("__b_2", "b");
__static_renaming("__c_3", "c");
__static_renaming("__d_4", "d");
__static_renaming("__e_5", "e");
__static_renaming("__f_6", "f");
__static_renaming("__g_7", "g");
__static_renaming("__h_8", "h");
__static_renaming("__i_9", "i");


};

int  __main_0 (void  ) {
{
static const int  __a_1;
extern const char  __b_2;
auto const float  __c_3;
auto volatile double  __d_4;
const volatile long  __e_5;
static volatile long long  __f_6;
extern volatile long double  __g_7;
register const float  __h_8;
register volatile int  __i_9;
}


}

