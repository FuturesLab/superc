#include <stdbool.h>

extern void __static_type_error(char *msg);
extern void __static_renaming(char *renaming, char *original);
extern void __static_condition_renaming(char *expression, char *renaming);

void __static_initializer_default();

extern const bool __static_condition_default_17;
extern const bool __static_condition_default_18;
extern const bool __static_condition_default_15;
extern const bool __static_condition_default_16;
extern const bool __static_condition_default_19;
void __static_initializer_default() {
__static_renaming("__foo_10", "foo");
__static_renaming("__foo_11", "foo");
__static_renaming("__foo_12", "foo");
__static_renaming("__foo_13", "foo");
__static_renaming("__foo_14", "foo");
__static_renaming("__main_20", "main");

__static_condition_renaming("__static_condition_default_15", "(declare-fun |(defined A)| () Bool)(declare-fun |(defined C)| () Bool)(declare-fun |(defined B)| () Bool)(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))  (or (and a!3 a!4 |(defined A)|) (and a!3 a!4 (not |(defined A)|)))))))(assert (not |(defined A)|))");
__static_condition_renaming("__static_condition_default_16", "(declare-fun |(defined A)| () Bool)(declare-fun |(defined C)| () Bool)(declare-fun |(defined B)| () Bool)(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                (not |(defined A)|))))  (not a!5))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                |(defined A)|)))  (or (and a!3 |(defined A)| |(defined C)|)      (and |(defined A)| |(defined B)| a!4)      (and |(defined A)| |(defined B)| |(defined C)|)      a!5))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (or (and a!3 a!4 |(defined A)|) (and a!3 a!4 (not |(defined A)|)))))  (not (and a!5            |(defined A)|            (or (and a!3 |(defined A)| |(defined C)|)                (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|)                (and a!5 |(defined A)|)))))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                |(defined A)|)))  (not (and |(defined A)|            |(defined B)|            |(defined C)|            (or (and a!3 |(defined A)| |(defined C)|)                (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|))            (or (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|))            (or (and a!3 |(defined A)| |(defined C)|)                (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|)                a!5))))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))  (or (and a!2 |(defined A)|)      (and a!2 (not |(defined A)|))      (and a!1 |(defined A)| |(defined C)|)))))(assert |(defined A)|)(assert |(defined C)|)(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (and (or (and a!2 |(defined A)|)                    (and a!2 (not |(defined A)|))                    (and a!1 |(defined A)| |(defined C)|))                |(defined A)|                |(defined C)|)))  (or a!3      (and |(defined A)| |(defined B)| a!4)      (and |(defined A)| |(defined B)| |(defined C)|))))))");
__static_condition_renaming("__static_condition_default_17", "(declare-fun |(defined A)| () Bool)(declare-fun |(defined C)| () Bool)(declare-fun |(defined B)| () Bool)(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                (not |(defined A)|))))  (not a!5))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (or (and a!3 a!4 |(defined A)|) (and a!3 a!4 (not |(defined A)|))))      (a!7 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|))))(let ((a!6 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|)               (and a!5 |(defined A)|))))(let ((a!8 (not (and |(defined A)|                     |(defined B)|                     |(defined C)|                     a!7                     (or (and |(defined A)| |(defined B)| a!4)                         (and |(defined A)| |(defined B)| |(defined C)|))                     a!6))))(let ((a!9 (and (not (and a!5 (not |(defined A)|)))                a!6                (not (and a!5 |(defined A)| a!6))                a!8                a!3                |(defined A)|                |(defined C)|                a!7)))  (not a!9)))))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                |(defined A)|)))  (or (and a!3 |(defined A)| |(defined C)|)      (and |(defined A)| |(defined B)| a!4)      (and |(defined A)| |(defined B)| |(defined C)|)      a!5))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (or (and a!3 a!4 |(defined A)|) (and a!3 a!4 (not |(defined A)|)))))  (not (and a!5            |(defined A)|            (or (and a!3 |(defined A)| |(defined C)|)                (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|)                (and a!5 |(defined A)|)))))))))(assert |(defined A)|)(assert |(defined B)|)(assert |(defined C)|)(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (and (or (and a!2 |(defined A)|)                    (and a!2 (not |(defined A)|))                    (and a!1 |(defined A)| |(defined C)|))                |(defined A)|                |(defined C)|)))  (or a!3      (and |(defined A)| |(defined B)| a!4)      (and |(defined A)| |(defined B)| |(defined C)|))))))(assert (let ((a!1 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))  (or (and |(defined A)| |(defined B)| a!1)      (and |(defined A)| |(defined B)| |(defined C)|))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                |(defined A)|)))  (not (and a!3            |(defined A)|            |(defined C)|            (or (and a!3 |(defined A)| |(defined C)|)                (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|)                a!5)            (or (and a!3 |(defined A)| |(defined C)|)                (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|)))))))))");
__static_condition_renaming("__static_condition_default_18", "(declare-fun |(defined A)| () Bool)(declare-fun |(defined C)| () Bool)(declare-fun |(defined B)| () Bool)(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                (not |(defined A)|))))  (not a!5))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (or (and a!3 a!4 |(defined A)|) (and a!3 a!4 (not |(defined A)|))))      (a!7 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|))))(let ((a!6 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|)               (and a!5 |(defined A)|))))(let ((a!8 (not (and |(defined A)|                     |(defined B)|                     |(defined C)|                     a!7                     (or (and |(defined A)| |(defined B)| a!4)                         (and |(defined A)| |(defined B)| |(defined C)|))                     a!6))))(let ((a!9 (and (not (and a!5 (not |(defined A)|)))                a!6                (not (and a!5 |(defined A)| a!6))                a!8                a!3                |(defined A)|                |(defined C)|                a!7)))  (not a!9)))))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (or (and a!3 a!4 |(defined A)|) (and a!3 a!4 (not |(defined A)|))))      (a!7 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|))))(let ((a!6 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|)               (and a!5 |(defined A)|))))(let ((a!8 (not (and |(defined A)|                     |(defined B)|                     |(defined C)|                     a!7                     (or (and |(defined A)| |(defined B)| a!4)                         (and |(defined A)| |(defined B)| |(defined C)|))                     a!6))))(let ((a!9 (and (not (and a!5 (not |(defined A)|)))                a!6                (not (and a!5 |(defined A)| a!6))                a!8                a!3                |(defined A)|                |(defined C)|                a!7)))(let ((a!10 (and (not (and a!5 (not |(defined A)|)))                 (not a!9)                 a!6                 (not (and a!5 |(defined A)| a!6))                 |(defined A)|                 |(defined B)|                 |(defined C)|                 a!7                 (or (and |(defined A)| |(defined B)| a!4)                     (and |(defined A)| |(defined B)| |(defined C)|))                 (not (and a!3 |(defined A)| |(defined C)| a!6 a!7)))))  (not a!10))))))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                |(defined A)|)))  (or (and a!3 |(defined A)| |(defined C)|)      (and |(defined A)| |(defined B)| a!4)      (and |(defined A)| |(defined B)| |(defined C)|)      a!5))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (or (and a!3 a!4 |(defined A)|) (and a!3 a!4 (not |(defined A)|)))))  (not (and a!5            |(defined A)|            (or (and a!3 |(defined A)| |(defined C)|)                (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|)                (and a!5 |(defined A)|)))))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                |(defined A)|)))  (not (and |(defined A)|            |(defined B)|            |(defined C)|            (or (and a!3 |(defined A)| |(defined C)|)                (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|))            (or (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|))            (or (and a!3 |(defined A)| |(defined C)|)                (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|)                a!5))))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                |(defined A)|)))  (not (and a!3            |(defined A)|            |(defined C)|            (or (and a!3 |(defined A)| |(defined C)|)                (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|)                a!5)            (or (and a!3 |(defined A)| |(defined C)|)                (and |(defined A)| |(defined B)| a!4)                (and |(defined A)| |(defined B)| |(defined C)|)))))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (and (or (and a!2 |(defined A)|)                    (and a!2 (not |(defined A)|))                    (and a!1 |(defined A)| |(defined C)|))                |(defined A)|                |(defined C)|)))  (or a!3      (and |(defined A)| |(defined B)| a!4)      (and |(defined A)| |(defined B)| |(defined C)|))))))");
__static_condition_renaming("__static_condition_default_19", "(declare-fun |(defined A)| () Bool)(declare-fun |(defined C)| () Bool)(declare-fun |(defined B)| () Bool)(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                (not |(defined A)|))))  (not a!5))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (or (and a!3 a!4 |(defined A)|) (and a!3 a!4 (not |(defined A)|))))      (a!7 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|))))(let ((a!6 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|)               (and a!5 |(defined A)|))))(let ((a!8 (not (and |(defined A)|                     |(defined B)|                     |(defined C)|                     a!7                     (or (and |(defined A)| |(defined B)| a!4)                         (and |(defined A)| |(defined B)| |(defined C)|))                     a!6))))(let ((a!9 (and (not (and a!5 (not |(defined A)|)))                a!6                (not (and a!5 |(defined A)| a!6))                a!8                a!3                |(defined A)|                |(defined C)|                a!7)))  (not a!9)))))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (or (and a!3 a!4 |(defined A)|) (and a!3 a!4 (not |(defined A)|))))      (a!7 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|))))(let ((a!6 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|)               (and a!5 |(defined A)|))))(let ((a!8 (not (and |(defined A)|                     |(defined B)|                     |(defined C)|                     a!7                     (or (and |(defined A)| |(defined B)| a!4)                         (and |(defined A)| |(defined B)| |(defined C)|))                     a!6))))(let ((a!9 (and (not (and a!5 (not |(defined A)|)))                a!6                (not (and a!5 |(defined A)| a!6))                a!8                a!3                |(defined A)|                |(defined C)|                a!7)))(let ((a!10 (and (not (and a!5 (not |(defined A)|)))                 (not a!9)                 a!6                 (not (and a!5 |(defined A)| a!6))                 |(defined A)|                 |(defined B)|                 |(defined C)|                 a!7                 (or (and |(defined A)| |(defined B)| a!4)                     (and |(defined A)| |(defined B)| |(defined C)|))                 (not (and a!3 |(defined A)| |(defined C)| a!6 a!7)))))  (not a!10))))))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (or (and a!3 a!4 |(defined A)|) (and a!3 a!4 (not |(defined A)|))))      (a!7 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|))))(let ((a!6 (or (and a!3 |(defined A)| |(defined C)|)               (and |(defined A)| |(defined B)| a!4)               (and |(defined A)| |(defined B)| |(defined C)|)               (and a!5 |(defined A)|))))(let ((a!8 (not (and |(defined A)|                     |(defined B)|                     |(defined C)|                     a!7                     (or (and |(defined A)| |(defined B)| a!4)                         (and |(defined A)| |(defined B)| |(defined C)|))                     a!6))))(let ((a!9 (and (not (and a!5 (not |(defined A)|)))                a!6                (not (and a!5 |(defined A)| a!6))                a!8                a!3                |(defined A)|                |(defined C)|                a!7)))(let ((a!10 (and (not (and a!5 (not |(defined A)|)))                 (not a!9)                 a!6                 (not (and a!5 |(defined A)| a!6))                 |(defined A)|                 |(defined B)|                 |(defined C)|                 a!7                 (or (and |(defined A)| |(defined B)| a!4)                     (and |(defined A)| |(defined B)| |(defined C)|))                 (not (and a!3 |(defined A)| |(defined C)| a!6 a!7)))))(let ((a!11 (and (not (and a!5 (not |(defined A)|)))                 (not a!9)                 (not a!10)                 a!6                 (not (and a!5 |(defined A)| a!6))                 a!8                 (not (and a!3 |(defined A)| |(defined C)| a!6 a!7))                 a!7)))  (not a!11)))))))))))(assert (let ((a!1 (or (and |(defined A)| (not (and |(defined A)| |(defined B)|)))               (not |(defined A)|)))      (a!4 (or (not |(defined A)|)               (and |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!2 (or (and a!1 (not |(defined A)|))               (and a!1 |(defined A)| (not (and |(defined A)| |(defined C)|))))))(let ((a!3 (or (and a!2 |(defined A)|)               (and a!2 (not |(defined A)|))               (and a!1 |(defined A)| |(defined C)|))))(let ((a!5 (and (or (and a!3 a!4 |(defined A)|)                    (and a!3 a!4 (not |(defined A)|)))                |(defined A)|)))  (or (and a!3 |(defined A)| |(defined C)|)      (and |(defined A)| |(defined B)| a!4)      (and |(defined A)| |(defined B)| |(defined C)|)      a!5))))))");

};

int  __foo_10 (int  __w_7) {

if (__static_condition_default_15) {
{
return 0 ;

}

}

}
int  __foo_11 (int  __y_1, int  __z_5, int  __w_9) {

if (__static_condition_default_16) {
{
return 0 ;

}

}

}
int  __foo_12 (int  __x_0, int  __y_2, int  __z_4, int  __w_9) {

if (__static_condition_default_17) {
{
return 0 ;

}

}

}
int  __foo_13 (int  __z_3, int  __w_9) {

if (__static_condition_default_18) {
{
return 0 ;

}

}

}
int  __foo_14 (int  __z_6, int  __w_8) {

if (__static_condition_default_19) {
{
return 0 ;

}

}

}
int  __main_20 () {
{
return 0 ;

}


}

