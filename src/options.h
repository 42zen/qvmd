#ifndef OPTIONS_H
#define OPTIONS_H

typedef struct {
    char    *qvm_filename;
    char    *map_filename;
    char    *output_filename;
    char    output_asm;
    char    disassemble;
} opt_t;

opt_t   *opt_parse(int argc, char **argv);

#endif
