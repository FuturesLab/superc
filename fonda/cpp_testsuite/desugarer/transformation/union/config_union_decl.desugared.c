#include <stdbool.h>

extern void __static_parse_error(char *msg);
extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_9;
extern const bool __static_condition_default_10;
void __static_initializer_default() {
__static_renaming("__usedUnion_6", "usedUnion");
__static_renaming("__usedUnion_7", "usedUnion");
__static_renaming("__main_8", "main");

__static_condition_renaming("__static_condition_default_9", "A");
__static_condition_renaming("__static_condition_default_10", "!A");

};
union __intCharFloat_0 {
int  __integer_1;// L3
char  __character_2;// L4
float  __floating_3;// L5
};
union __intCharFloat_4 {
char  __integer_5;// L9
};

union __intCharFloat_0 ;// L2
union __intCharFloat_4 ;// L8
int  (__main_8) (void  ) {

{
{



union __intCharFloat_0  __usedUnion_6;// L14

union __intCharFloat_4  __usedUnion_7;// L14

if (__static_condition_default_9) {
 __usedUnion_6  . __integer_1 = 1 ; // L16
}
if (__static_condition_default_10) {
 __usedUnion_7  . __integer_5 = 1 ; // L16
}
return 0 ;// L18
}
}


}

