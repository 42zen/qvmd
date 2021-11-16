
```
                    o=========================================o
                    |  _______             _______   ______   |
                    | (  ___  ) |\     /| (       ) (  __  \  |
                    | | (   ) | | )   ( | | () () | | (  \  ) |
                    | | |   | | | |   | | | || || | | |   ) | |
                    | | |   | | ( (   ) ) | |(_)| | | |   | | |
                    | | | /\| |  \ \_/ /  | |   | | | |   ) | |
                    | | (_\ \ |   \   /   | )   ( | | (__/  ) |
                    | (____\/_)    \_/    |/     \| (______/  |
                    |                                         |
                    o=========================================o
```

The intent of this project is to provide a disassembler and a decompiler for an old executable file format called QVM.
The QVM is a sort of sandbox to limit the damage of a malicious QVM program. Though not perfect, it certainly is much safer than full access to native machine language.
The QVM format was created for Quake3 but is used by Wolfenstein, Call of Duty, Medal of Honor, Tremulous, UrbanTerror and others.

# Features
* Parse the QVM file format and sections.
* Parse the opcodes from the QVM sections.
* Detect the functions, the jumppoints and the syscalls from the opcodes.
* Merge the opcodes to create microcodes.
* Detect the variables size and type.
* Handle function returns with a value.
* Handle function calls.
* Handle variadic functions with va_start and va_end.

# Compilation and installation
  - Change to the directory containing this readme.
  - Run 'make'.

# Documentations
  - <a href="https://www.icculus.org/~phaethon/q3mc/q3vm_specs.html">QVM Specifications</a>
  - <a href="https://github.com/ioquake/ioq3">IOQ3 Source Code</a>

# Author
  - Mathias Bochet aka <a href="https://github.com/19zen">zen</a>
