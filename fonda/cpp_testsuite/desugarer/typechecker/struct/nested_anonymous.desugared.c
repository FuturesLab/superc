#include <stdbool.h>

extern void __static_parse_error(char *msg);
extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

void __static_initializer_default() {
__static_renaming("__head_7", "head");
__static_renaming("__tail_8", "tail");
__static_renaming("__current_9", "current");
__static_renaming("__main_10", "main");


};
struct ____anonymous_tag_0_1 {
char  __p_2;// L3
};
struct __list_4 {
struct ____anonymous_tag_0_1  __data_5;// L2
struct __forward_tag_reference_3  (* __next_6);// L0
};

struct __forward_tag_reference_3 { // generated union of struct variations
union {
struct __list_4 __list_4;
};
};

struct __list_4 ;// L1
int  __main_10 () {

{
{



struct __list_4  __head_7;// L9

struct __list_4  __tail_8;// L10

 __head_7  . __data_5 . __p_2 = 'a' ; // L12
 __head_7  . __next_6 = &  __tail_8  ; // L13
 __tail_8  . __data_5 . __p_2 = 'b' ; // L14
 __tail_8  . __next_6 = 0 ; // L15
struct __list_4  (* __current_9)= &  __head_7 ;// L17

while ( 0 !=  __current_9  )// L18
{

{
{



 __current_9  -> __data_5 . __p_2 = 'a' ; // L19
 __current_9  =  __current_9  -> __next_6 ; // L20
}
}
}
return 0 ;// L23
}
}


}

