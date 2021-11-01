#include "qvmd.h"

static void opt_init(opt_t *opt);
opt_t       *opt_parse(int argc, char **argv);
static void opt_print_usage(void);

static void opt_init(opt_t *opt)
{
    opt->qvm_filename = NULL;
    opt->map_filename = NULL;
    opt->output_filename = NULL;
    opt->output_asm = 0;
    opt->disassemble = 0;
}

opt_t *opt_parse(int argc, char **argv)
{
    static opt_t    opt;
    char            *ext = NULL;

    // initialize the options structure
    opt_init(&opt);

    // browse for all command line parameters
    for (int i = 1; i < argc; i++) {
        // check help parameter
        if (!strcmp(argv[i], "-h") || !strcmp(argv[i], "--help")) {
            // print the qvmd usage
            opt_print_usage();
            return NULL;
        }

        // check map parameter
        if (!strcmp(argv[i], "-m") || !strcmp(argv[i], "--map")) {
            if (i + 1 >= argc) {
                printf("Error: %s take a next parameter.\n", argv[i]);
                return NULL;
            }
            opt.map_filename = argv[++i];
            continue;
        }

        // check output parameter
        if (!strcmp(argv[i], "-o") || !strcmp(argv[i], "--output")) {
            if (i + 1 >= argc) {
                printf("Error: %s take a next parameter.\n", argv[i]);
                return NULL;
            }
            opt.output_filename = argv[++i];
            continue;
        }

        // check asm parameter
        if (!strcmp(argv[i], "-a") || !strcmp(argv[i], "--asm")) {
            opt.output_asm = 1;
            continue;
        }

        // check for unknown option
        if (opt.qvm_filename) {
            printf("Error: Unknown option %s.\n", argv[i]);
            return NULL;
        }

        // save the qvm filename
        opt.qvm_filename = argv[i];
    }

    // check if there was a qvm to load
    if (!opt.qvm_filename) {
        // print the qvmd usage
        opt_print_usage();
        return NULL;
    }

    // put the default output name if needed
    if (!opt.output_filename) {
        if (opt.output_asm)
            opt.output_filename = "a.asm";
        else
            opt.output_filename = "a.c";
    }
    else {
        // get the output extension
        ext = file_ext(opt.output_filename);
    }

    // set the disassemble option if needed
    if (opt.output_asm || (ext && (strstr(ext, "asm") || !strcmp(ext, ".s"))))
        opt.disassemble = 1;

    // return the options
    return &opt;
}

static void opt_print_usage(void)
{
    printf("Usage: qvmd [OPTIONS] <qvm filename>\n\n");
    printf("OPTIONS:\n");
    printf(" -o : --output  -- Select an output file.\n");
    printf(" -m : --map     -- Select a map file.\n");
    printf(" -a : --asm     -- Generate assembly instead of code.\n");
    printf(" -d : --debug   -- Enable debugging.\n");
}
