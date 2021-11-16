#include "qvmd.h"

qvm_type_t  *type_from_var(qvm_variable_t *var);

qvm_type_t qvm_types[] = {
    {T_CHAR, "char", "char\t", 1, TF_NONE},
    {T_SHORT, "short", "short\t", 2, TF_NONE},
    {T_INT, "int", "int\t\t", 4, TF_NONE},
    {T_CHAR_ARRAY, "char", "char\t", 0, TF_ARRAY}
};

qvm_type_t *type_from_var(qvm_variable_t *var)
{
    // check the variable status
    if (var->status == VS_LITERAL || var->status == VS_LITERAL_TEXT)
        return &qvm_types[T_CHAR_ARRAY];

    // find the default type for this size
    switch (var->size) {
        case 1:
            return &qvm_types[T_CHAR];
        case 2:
            return &qvm_types[T_SHORT];
        case 4:
            return &qvm_types[T_INT];
        default:
            return &qvm_types[T_CHAR_ARRAY];
    }

    // error
    return NULL;
}
