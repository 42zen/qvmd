#ifndef TYPES_H
#define TYPES_H

typedef struct qvm_type_s   qvm_type_t;

typedef enum {
    T_CHAR,
    T_SHORT,
    T_INT,
    T_CHAR_ARRAY,
    T_MAX
} qvm_type_id_e;

typedef enum {
    TF_NONE,
    TF_ARRAY,
    TF_MAX
} qvm_type_flags_e;

typedef struct qvm_type_s {
    int             id;
    char            *name;
    char            *pretty_name;
    unsigned int    size;
    unsigned int    flags;
} qvm_type_t;

qvm_type_t  *type_from_var(qvm_variable_t *var);

#endif
