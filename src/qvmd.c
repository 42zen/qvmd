#include "qvmd.h"

int main(int argc, char **argv)
{
    opt_t   *opt;
    qvm_t   *qvm;

    // remove the printf buffer
    setbuf(stdout, NULL);

    // parse the options from command line
    if (!(opt = opt_parse(argc, argv)))
        return 1;

    // load the qvm
    if (!(qvm = qvm_load(opt->qvm_filename, opt->map_filename)))
        return 1;

    // disassemble the qvm
    if (opt->disassemble)
        qvm_disassemble(qvm, opt->output_filename);

    // decompile the qvm
    if (!opt->disassemble)
        qvm_decompile(qvm, opt->output_filename);

    // free the qvm
    qvm_free(qvm);

    // success
    return 0;
}
