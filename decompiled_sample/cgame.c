/*
	QVM Decompiler 1.0 by zen

	Name: sample/cgame.qvm
	Opcodes Count: 105045
	Functions Count: 522
	Syscalls Count: 70
	Globals Count: 837
	Calls Restored: 94.34
*/

int		global_0 = 0;
int		forceModelModificationCount = -1; // Used by: CG_UpdateCvars, CG_RegisterCvars
char	global_8[36] = "\x15\x00\x00\x00\x25\x00\x00\x00\x2c\x00\x00\x00\x35\x00\x00\x00\x45\x00\x00\x00\x4e\x00\x00\x00\x57\x00\x00\x00\x64\x00\x00\x00\x71\x00\x00\x00";
char	cvarTable[1328] = "\xbc\x9e\x00\x00\xfa\x3b\x00\x00\xf8\x3b\x00\x00\x00\x00\x00\x00\xcc\x9f\x00\x00\xea\x3b\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x1c\xa5\x00\x00\xdd\x3b\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x8c\x9b\x00\x00\xd2\x3b\x00\x00\xcd\x3b\x00\x00\x01\x00\x00\x00\x9c\x9c\x00\x00\xc6\x3b\x00\x00\xc3\x3b\x00\x00\x01\x00\x00\x00\x0c\xa4\x00\x00\xb7\x3b\x00\x00\xb3\x3b\x00\x00\x01\x00\x00\x00\x4c\xca\x00\x00\xa8\x3b\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x3c\xc9\x00\x00\xa0\x3b\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x2c\xb7\x00\x00\x96\x3b\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x3c\xb8\x00\x00\x88\x3b\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x2c\xc8\x00\x00\x7b\x3b\x00\x00\xf8\x3b\x00\x00\x01\x00\x00\x00\x1c\xc7\x00\x00\x70\x3b\x00\x00\xf8\x3b\x00\x00\x01\x00\x00\x00\x0c\xc6\x00\x00\x60\x3b\x00\x00\xf8\x3b\x00\x00\x01\x00\x00\x00\xfc\xc4\x00\x00\x51\x3b\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\xec\xc3\x00\x00\x44\x3b\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\xdc\xc2\x00\x00\x31\x3b\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x3c\x96\x00\x00\x21\x3b\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\xcc\xc1\x00\x00\x10\x3b\x00\x00\x0e\x3b\x00\x00\x01\x00\x00\x00\xbc\xc0\x00\x00\xf8\x3a\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\xac\xbf\x00\x00\xe9\x3a\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x5c\xba\x00\x00\xd8\x3a\x00\x00\xd5\x3a\x00\x00\x01\x00\x00\x00\x4c\xb9\x00\x00\xc2\x3a\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x7c\xbc\x00\x00\xb4\x3a\x00\x00\xf8\x3b\x00\x00\x01\x00\x00\x00\x6c\xbb\x00\x00\xa6\x3a\x00\x00\xf8\x3b\x00\x00\x01\x00\x00\x00\x6c\xaa\x00\x00\x99\x3a\x00\x00\x94\x3a\x00\x00\x01\x00\x00\x00\xac\x9d\x00\x00\x85\x3a\x00\x00\xf8\x3b\x00\x00\x01\x00\x00\x00\x7c\xab\x00\x00\x7c\x3a\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x4c\x97\x00\x00\x6f\x3a\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\xdc\xb1\x00\x00\x5e\x3a\x00\x00\x5a\x3a\x00\x00\x01\x00\x00\x00\x4c\xa8\x00\x00\x52\x3a\x00\x00\xf8\x3b\x00\x00\x00\x02\x00\x00\x3c\xa7\x00\x00\x4a\x3a\x00\x00\xf8\x3b\x00\x00\x00\x02\x00\x00\x2c\xa6\x00\x00\x42\x3a\x00\x00\xf8\x3b\x00\x00\x00\x02\x00\x00\xbc\xd1\x00\x00\x34\x3a\x00\x00\x32\x3a\x00\x00\x00\x02\x00\x00\xac\xd0\x00\x00\x26\x3a\x00\x00\x20\x3a\x00\x00\x01\x00\x00\x00\x9c\xcf\x00\x00\x15\x3a\x00\x00\x0f\x3a\x00\x00\x01\x00\x00\x00\x8c\xce\x00\x00\x06\x3a\x00\x00\x0f\x3a\x00\x00\x00\x02\x00\x00\x7c\xcd\x00\x00\xfa\x39\x00\x00\x20\x3a\x00\x00\x01\x00\x00\x00\x6c\xcc\x00\x00\xef\x39\x00\x00\x20\x3a\x00\x00\x01\x00\x00\x00\x5c\xcb\x00\x00\xe1\x39\x00\x00\xdd\x39\x00\x00\x00\x02\x00\x00\x1c\xb6\x00\x00\xd0\x39\x00\x00\xe8\x3b\x00\x00\x00\x02\x00\x00\x0c\xb5\x00\x00\xc3\x39\x00\x00\xf8\x3b\x00\x00\x00\x02\x00\x00\xfc\xb3\x00\x00\xb2\x39\x00\x00\xf8\x3b\x00\x00\x00\x02\x00\x00\xec\xb2\x00\x00\xa3\x39\x00\x00\xf8\x3b\x00\x00\x00\x02\x00\x00\xcc\xb0\x00\x00\x95\x39\x00\x00\xb3\x3b\x00\x00\x00\x00\x00\x00\xbc\xaf\x00\x00\x88\x39\x00\x00\xf8\x3b\x00\x00\x00\x00\x00\x00\xac\xae\x00\x00\x77\x39\x00\x00\xf8\x3b\x00\x00\x00\x02\x00\x00\x9c\xad\x00\x00\x6b\x39\x00\x00\xf8\x3b\x00\x00\x00\x00\x00\x00\x8c\xac\x00\x00\x5e\x39\x00\x00\xe8\x3b\x00\x00\x00\x02\x00\x00\xfc\xa2\x00\x00\x4e\x39\x00\x00\x4a\x39\x00\x00\x00\x02\x00\x00\xec\xa1\x00\x00\x3b\x39\x00\x00\xe8\x3b\x00\x00\x00\x02\x00\x00\xdc\xa0\x00\x00\x2b\x39\x00\x00\xb3\x3b\x00\x00\x00\x02\x00\x00\x7c\x9a\x00\x00\x17\x39\x00\x00\x14\x39\x00\x00\x00\x02\x00\x00\x6c\x99\x00\x00\x00\x39\x00\x00\xf8\x3b\x00\x00\x00\x02\x00\x00\x5c\x98\x00\x00\xf1\x38\x00\x00\xf8\x3b\x00\x00\x00\x00\x00\x00\x1c\x94\x00\x00\xe1\x38\x00\x00\xdc\x38\x00\x00\x01\x00\x00\x00\x0c\x93\x00\x00\xca\x38\x00\x00\xf8\x3b\x00\x00\x01\x00\x00\x00\xec\x90\x00\x00\xbc\x38\x00\x00\xf8\x3b\x00\x00\x01\x00\x00\x00\xac\x8c\x00\x00\xac\x38\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x9c\x8b\x00\x00\x9c\x38\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x9c\xbe\x00\x00\x89\x38\x00\x00\xf8\x3b\x00\x00\x01\x00\x00\x00\x8c\xbd\x00\x00\x7d\x38\x00\x00\xf8\x3b\x00\x00\x42\x00\x00\x00\xfc\x91\x00\x00\x74\x38\x00\x00\xf8\x3b\x00\x00\x00\x00\x00\x00\x8c\x8a\x00\x00\x66\x38\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x7c\x89\x00\x00\x55\x38\x00\x00\xf8\x3b\x00\x00\x01\x00\x00\x00\xdc\x8f\x00\x00\x45\x38\x00\x00\xf8\x3b\x00\x00\x00\x00\x00\x00\xcc\x8e\x00\x00\x3b\x38\x00\x00\xf8\x3b\x00\x00\x40\x00\x00\x00\xbc\x8d\x00\x00\x31\x38\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x2c\x95\x00\x00\x1c\x38\x00\x00\xf8\x3b\x00\x00\x08\x00\x00\x00\x2c\x84\x00\x00\x0d\x38\x00\x00\xf8\x3b\x00\x00\x00\x02\x00\x00\x1c\x83\x00\x00\xf9\x37\x00\x00\xf6\x37\x00\x00\x01\x00\x00\x00\x0c\x82\x00\x00\xe2\x37\x00\x00\xe8\x3b\x00\x00\x00\x00\x00\x00\xfc\x80\x00\x00\xcc\x37\x00\x00\xf8\x3b\x00\x00\x00\x00\x00\x00\xec\x7f\x00\x00\xc2\x37\x00\x00\xe8\x3b\x00\x00\x00\x00\x00\x00\x6c\x88\x00\x00\xb4\x37\x00\x00\xe8\x3b\x00\x00\x03\x00\x00\x00\x5c\x87\x00\x00\xa3\x37\x00\x00\xf8\x3b\x00\x00\x03\x00\x00\x00\xdc\x7e\x00\x00\x94\x37\x00\x00\xf8\x3b\x00\x00\x00\x02\x00\x00\x4c\x86\x00\x00\x88\x37\x00\x00\xf8\x3b\x00\x00\x08\x00\x00\x00\x3c\x85\x00\x00\x7d\x37\x00\x00\x7b\x37\x00\x00\x08\x00\x00\x00\xcc\x7d\x00\x00\x66\x37\x00\x00\xf8\x3b\x00\x00\x01\x00\x00\x00\xbc\x7c\x00\x00\x5b\x37\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\xac\x7b\x00\x00\x4e\x37\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x9c\x7a\x00\x00\x41\x37\x00\x00\xe8\x3b\x00\x00\x01\x00\x00\x00\x8c\x79\x00\x00\x30\x37\x00\x00\x2c\x37\x00\x00\x01\x00\x00\x00";
int		cvarTableSize = 83; // Used by: CG_UpdateCvars, CG_RegisterCvars
char	global_560[44] = "\xc3\x2d\x00\x00\xac\x2d\x00\x00\x95\x2d\x00\x00\x7c\x2d\x00\x00\x64\x2d\x00\x00\x4c\x2d\x00\x00\x35\x2d\x00\x00\x1c\x2d\x00\x00\x03\x2d\x00\x00\xeb\x2c\x00\x00\xd2\x2c\x00\x00";
char	bg_itemlist[1924] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x78\x50\x00\x00\x60\x50\x00\x00\x40\x50\x00\x00\x19\x50\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x07\x50\x00\x00\xfb\x4f\x00\x00\x05\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\xe9\x4f\x00\x00\xd1\x4f\x00\x00\xad\x4f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x9a\x4f\x00\x00\x94\x4f\x00\x00\x32\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x84\x4f\x00\x00\xd1\x4f\x00\x00\x60\x4f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x50\x4f\x00\x00\x44\x4f\x00\x00\x64\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x32\x4f\x00\x00\x19\x4f\x00\x00\xf2\x4e\x00\x00\xca\x4e\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xb8\x4e\x00\x00\xaf\x4e\x00\x00\x05\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\xa3\x4e\x00\x00\x8a\x4e\x00\x00\x62\x4e\x00\x00\x39\x4e\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x26\x4e\x00\x00\x1c\x4e\x00\x00\x19\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x0a\x4e\x00\x00\xf1\x4d\x00\x00\xca\x4d\x00\x00\xa2\x4d\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x92\x4d\x00\x00\x88\x4d\x00\x00\x32\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x77\x4d\x00\x00\x5e\x4d\x00\x00\x38\x4d\x00\x00\x11\x4d\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x4d\x00\x00\xf4\x4c\x00\x00\x64\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\xe4\x4c\x00\x00\xce\x4c\x00\x00\xa8\x4c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x93\x4c\x00\x00\x8a\x4c\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x7b\x4c\x00\x00\xce\x4c\x00\x00\x57\x4c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x43\x4c\x00\x00\x3b\x4c\x00\x00\x0a\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x29\x4c\x00\x00\xce\x4c\x00\x00\xff\x4b\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe8\x4b\x00\x00\xdd\x4b\x00\x00\x28\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\xc6\x4b\x00\x00\xce\x4c\x00\x00\xa0\x4b\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x8c\x4b\x00\x00\x7b\x4b\x00\x00\x0a\x00\x00\x00\x01\x00\x00\x00\x04\x00\x00\x00\x89\x50\x00\x00\x35\x4b\x00\x00\x1f\x4b\x00\x00\xce\x4c\x00\x00\xfb\x4a\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe8\x4a\x00\x00\xd8\x4a\x00\x00\x0a\x00\x00\x00\x01\x00\x00\x00\x05\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\xc7\x4a\x00\x00\xce\x4c\x00\x00\x9f\x4a\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x89\x4a\x00\x00\x7b\x4a\x00\x00\x64\x00\x00\x00\x01\x00\x00\x00\x06\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x6c\x4a\x00\x00\xce\x4c\x00\x00\x48\x4a\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x34\x4a\x00\x00\x2c\x4a\x00\x00\x0a\x00\x00\x00\x01\x00\x00\x00\x07\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x1b\x4a\x00\x00\xce\x4c\x00\x00\xf9\x49\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe6\x49\x00\x00\xdb\x49\x00\x00\x32\x00\x00\x00\x01\x00\x00\x00\x08\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\xd0\x49\x00\x00\xce\x4c\x00\x00\xb4\x49\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xa4\x49\x00\x00\x9d\x49\x00\x00\x14\x00\x00\x00\x01\x00\x00\x00\x09\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x88\x49\x00\x00\xce\x4c\x00\x00\x64\x49\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x50\x49\x00\x00\x41\x49\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x0a\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x35\x49\x00\x00\x1e\x49\x00\x00\xfb\x48\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe7\x48\x00\x00\xe0\x48\x00\x00\x0a\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\xd3\x48\x00\x00\x1e\x49\x00\x00\xad\x48\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x96\x48\x00\x00\x8e\x48\x00\x00\x32\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x80\x48\x00\x00\x1e\x49\x00\x00\x5d\x48\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x49\x48\x00\x00\x40\x48\x00\x00\x05\x00\x00\x00\x02\x00\x00\x00\x04\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x35\x48\x00\x00\x1e\x49\x00\x00\x13\x48\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x48\x00\x00\xfa\x47\x00\x00\x1e\x00\x00\x00\x02\x00\x00\x00\x08\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\xeb\x47\x00\x00\x1e\x49\x00\x00\xc6\x47\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xb0\x47\x00\x00\xa6\x47\x00\x00\x3c\x00\x00\x00\x02\x00\x00\x00\x06\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x99\x47\x00\x00\x1e\x49\x00\x00\x77\x47\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x64\x47\x00\x00\x5c\x47\x00\x00\x05\x00\x00\x00\x02\x00\x00\x00\x05\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x51\x47\x00\x00\x1e\x49\x00\x00\x2e\x47\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1a\x47\x00\x00\x14\x47\x00\x00\x0a\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x0b\x47\x00\x00\x1e\x49\x00\x00\xec\x46\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xdc\x46\x00\x00\xd3\x46\x00\x00\x0f\x00\x00\x00\x02\x00\x00\x00\x09\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\xbf\x46\x00\x00\xa6\x46\x00\x00\x7e\x46\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x6d\x46\x00\x00\x59\x46\x00\x00\x3c\x00\x00\x00\x06\x00\x00\x00\x01\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x49\x46\x00\x00\xa6\x46\x00\x00\x25\x46\x00\x00\xfa\x45\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xed\x45\x00\x00\xe6\x45\x00\x00\x3c\x00\x00\x00\x06\x00\x00\x00\x02\x00\x00\x00\x89\x50\x00\x00\xcb\x45\x00\x00\xc1\x45\x00\x00\xa6\x45\x00\x00\x85\x45\x00\x00\x5f\x45\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x54\x45\x00\x00\x48\x45\x00\x00\x1e\x00\x00\x00\x05\x00\x00\x00\x01\x00\x00\x00\x89\x50\x00\x00\x18\x45\x00\x00\x0c\x45\x00\x00\xf4\x44\x00\x00\xd1\x44\x00\x00\xa9\x44\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x98\x44\x00\x00\x8c\x44\x00\x00\x1e\x00\x00\x00\x05\x00\x00\x00\x02\x00\x00\x00\x89\x50\x00\x00\x5c\x44\x00\x00\x51\x44\x00\x00\x3b\x44\x00\x00\x19\x44\x00\x00\xf2\x43\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe6\x43\x00\x00\xe0\x43\x00\x00\x1e\x00\x00\x00\x05\x00\x00\x00\x03\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\xd5\x43\x00\x00\xb8\x43\x00\x00\x96\x43\x00\x00\x6f\x43\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x63\x43\x00\x00\x56\x43\x00\x00\x1e\x00\x00\x00\x05\x00\x00\x00\x04\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x4b\x43\x00\x00\x2e\x43\x00\x00\x0c\x43\x00\x00\xe5\x42\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xd9\x42\x00\x00\xcc\x42\x00\x00\x1e\x00\x00\x00\x05\x00\x00\x00\x05\x00\x00\x00\x89\x50\x00\x00\xb6\x42\x00\x00\xaa\x42\x00\x00\x93\x42\x00\x00\x70\x42\x00\x00\x48\x42\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3b\x42\x00\x00\x34\x42\x00\x00\x3c\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x00\x89\x50\x00\x00\x93\x42\x00\x00\x23\x42\x00\x00\x00\x00\x00\x00\x0b\x42\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xfa\x41\x00\x00\xf1\x41\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x07\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\xdf\x41\x00\x00\x00\x00\x00\x00\xc7\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xb6\x41\x00\x00\xac\x41\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x08\x00\x00\x00\x89\x50\x00\x00\x89\x50\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";
int		bg_numItems = 36; // Used by: CG_RegisterItemVisuals, CG_EntityEvent, CG_Item, BG_CanItemBeGrabbed, BG_FindItemForHoldable, BG_FindItemForPowerup, CG_RegisterGraphics, CG_RegisterSounds
char	global_d14[84] = "\x4e\x10\x00\x00\x62\x0f\x00\x00\x66\x0f\x00\x00\x7d\x0f\x00\x00\x96\x0f\x00\x00\xd5\x0f\x00\x00\x3f\x10\x00\x00\x55\x10\x00\x00\xd9\x0f\x00\x00\x73\x10\x00\x00\x73\x10\x00\x00\x7c\x10\x00\x00\x1c\x11\x00\x00\xc2\x10\x00\x00\x84\x11\x00\x00\x05\x12\x00\x00\x05\x12\x00\x00\x21\x12\x00\x00\x7c\x12\x00\x00\x2a\x12\x00\x00\xb3\x12\x00\x00";
char	eventnames[332] = "\xcf\x40\x00\x00\xc3\x40\x00\x00\xb1\x40\x00\x00\xa3\x40\x00\x00\x97\x40\x00\x00\x8f\x40\x00\x00\x85\x40\x00\x00\x7b\x40\x00\x00\x70\x40\x00\x00\x65\x40\x00\x00\x57\x40\x00\x00\x48\x40\x00\x00\x3c\x40\x00\x00\x30\x40\x00\x00\x28\x40\x00\x00\x19\x40\x00\x00\x0a\x40\x00\x00\xfb\x3f\x00\x00\xec\x3f\x00\x00\xdd\x3f\x00\x00\xc7\x3f\x00\x00\xbd\x3f\x00\x00\xac\x3f\x00\x00\x9d\x3f\x00\x00\x90\x3f\x00\x00\x83\x3f\x00\x00\x76\x3f\x00\x00\x69\x3f\x00\x00\x5c\x3f\x00\x00\x4f\x3f\x00\x00\x42\x3f\x00\x00\x35\x3f\x00\x00\x28\x3f\x00\x00\x1b\x3f\x00\x00\x0d\x3f\x00\x00\xff\x3e\x00\x00\xf1\x3e\x00\x00\xe3\x3e\x00\x00\xd5\x3e\x00\x00\xc7\x3e\x00\x00\xb7\x3e\x00\x00\xab\x3e\x00\x00\x95\x3e\x00\x00\x7e\x3e\x00\x00\x6c\x3e\x00\x00\x5b\x3e\x00\x00\x4b\x3e\x00\x00\x36\x3e\x00\x00\x22\x3e\x00\x00\x0f\x3e\x00\x00\x00\x3e\x00\x00\xf0\x3d\x00\x00\xda\x3d\x00\x00\xcd\x3d\x00\x00\xc2\x3d\x00\x00\xb8\x3d\x00\x00\xb0\x3d\x00\x00\xa6\x3d\x00\x00\x9c\x3d\x00\x00\x92\x3d\x00\x00\x86\x3d\x00\x00\x76\x3d\x00\x00\x60\x3d\x00\x00\x4f\x3d\x00\x00\x41\x3d\x00\x00\x34\x3d\x00\x00\x1c\x3d\x00\x00\x02\x3d\x00\x00\xf6\x3c\x00\x00\xe4\x3c\x00\x00\xd5\x3c\x00\x00\xc5\x3c\x00\x00\xbb\x3c\x00\x00\xaa\x3c\x00\x00\x9c\x3c\x00\x00\x88\x3c\x00\x00\x7f\x3c\x00\x00\x72\x3c\x00\x00\x66\x3c\x00\x00\x54\x3c\x00\x00\x43\x3c\x00\x00\x30\x3c\x00\x00\x20\x3c\x00\x00";
int		pm_stopspeed = 1120403456; // Used by: PM_NoclipMove, PM_Friction
int		pm_duckScale = 1048576000; // Used by: PM_WalkMove
int		pm_swimScale = 1056964608; // Used by: PM_WalkMove, PM_WaterMove
int		pm_accelerate = 1092616192; // Used by: PM_NoclipMove, PM_WalkMove
int		pm_airaccelerate = 1065353216; // Used by: PM_WalkMove, PM_AirMove
int		pm_wateraccelerate = 1082130432; // Used by: PM_WaterMove
int		pm_flyaccelerate = 1090519040; // Used by: PM_FlyMove
int		pm_friction = 1086324736; // Used by: PM_NoclipMove, PM_Friction
int		pm_waterfriction = 1065353216; // Used by: PM_Friction
int		pm_flightfriction = 1077936128; // Used by: PM_Friction
int		pm_spectatorfriction = 1084227584; // Used by: PM_Friction
int		c_pmove = 0; // Used by: PM_StepSlideMove, PM_GroundTrace, PM_GroundTraceMissed, PM_CorrectAllSolid
char	global_ee4[40] = "\xbc\x2f\x00\x00\xcb\x2f\x00\x00\xc6\x2f\x00\x00\xd0\x2f\x00\x00\xd5\x2f\x00\x00\xc1\x2f\x00\x00\xdf\x2f\x00\x00\xda\x2f\x00\x00\xe4\x2f\x00\x00\xe9\x2f\x00\x00";
int		randSeed = 0; // Used by: srand
char	global_f10[124] = "\xc9\x49\x00\x00\xfb\x49\x00\x00\x9c\x4a\x00\x00\xf5\x4a\x00\x00\x13\x4b\x00\x00\x73\x4b\x00\x00\xde\x4b\x00\x00\x00\x4c\x00\x00\x68\x50\x00\x00\x23\x4f\x00\x00\x39\x4c\x00\x00\x8b\x4e\x00\x00\x3c\x4e\x00\x00\xda\x4e\x00\x00\x43\x50\x00\x00\x39\x4c\x00\x00\x43\x50\x00\x00\x43\x50\x00\x00\x43\x50\x00\x00\x43\x50\x00\x00\xaf\x4f\x00\x00\xb3\x4c\x00\x00\x7b\x4f\x00\x00\x43\x50\x00\x00\x43\x50\x00\x00\x49\x4f\x00\x00\x43\x50\x00\x00\x34\x4d\x00\x00\x43\x50\x00\x00\x34\x50\x00\x00\xbb\x4d\x00\x00";
char	commands[168] = "\x85\x52\x00\x00\x00\x41\x01\x00\x7b\x52\x00\x00\x75\x40\x01\x00\x71\x52\x00\x00\x12\x41\x01\x00\x67\x52\x00\x00\x28\x41\x01\x00\x5e\x52\x00\x00\x45\x41\x01\x00\x55\x52\x00\x00\x5b\x41\x01\x00\x4d\x52\x00\x00\xd8\x57\x00\x00\x45\x52\x00\x00\xf0\x57\x00\x00\x3d\x52\x00\x00\x12\x58\x00\x00\x37\x52\x00\x00\xea\x45\x01\x00\x31\x52\x00\x00\xfa\x45\x01\x00\x2a\x52\x00\x00\xac\x57\x00\x00\x21\x52\x00\x00\xc2\x57\x00\x00\x18\x52\x00\x00\x3d\x67\x01\x00\x0f\x52\x00\x00\x93\x67\x01\x00\x08\x52\x00\x00\xe9\x67\x01\x00\x03\x52\x00\x00\x7a\x57\x00\x00\xf7\x51\x00\x00\x20\x58\x00\x00\xe9\x51\x00\x00\x4b\x58\x00\x00\xde\x51\x00\x00\x76\x58\x00\x00\xd1\x51\x00\x00\x8d\x07\x01\x00";
int		drawTeamOverlayModificationCount = -1; // Used by: CG_UpdateCvars
char	global_1038[176] = "\xba\x59\x00\x00\xde\x59\x00\x00\x02\x5a\x00\x00\x26\x5a\x00\x00\x00\x00\x80\x3f\xd7\xa3\x30\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\xcd\xcc\x4c\x3e\xcd\xcc\x4c\x3e\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\xcd\xcc\x4c\x3e\x00\x00\x80\x3f\xcd\xcc\x4c\x3e\x00\x00\x80\x3f\x00\x00\x80\x3f\xcd\xcc\x4c\x3e\xcd\xcc\x4c\x3e\x00\x00\x80\x3f\x00\x00\x80\x3f\xcd\xcc\x4c\x3e\xcd\xcc\x4c\x3e\x00\x00\x80\x3f\xcd\xcc\x4c\x3e\xcd\xcc\x4c\x3e\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x33\x33\x33\x3f\x33\x33\x33\x3f\x33\x33\x33\x3f\x00\x00\x80\x3f";
char	propMap[1536] = "\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x0b\x00\x00\x00\x7a\x00\x00\x00\x07\x00\x00\x00\x9a\x00\x00\x00\xb5\x00\x00\x00\x0e\x00\x00\x00\x37\x00\x00\x00\x7a\x00\x00\x00\x11\x00\x00\x00\x4f\x00\x00\x00\x7a\x00\x00\x00\x12\x00\x00\x00\x65\x00\x00\x00\x7a\x00\x00\x00\x17\x00\x00\x00\x99\x00\x00\x00\x7a\x00\x00\x00\x12\x00\x00\x00\x09\x00\x00\x00\x5d\x00\x00\x00\x07\x00\x00\x00\xcf\x00\x00\x00\x7a\x00\x00\x00\x08\x00\x00\x00\xe6\x00\x00\x00\x7a\x00\x00\x00\x09\x00\x00\x00\xb1\x00\x00\x00\x7a\x00\x00\x00\x12\x00\x00\x00\x1e\x00\x00\x00\x98\x00\x00\x00\x12\x00\x00\x00\x55\x00\x00\x00\xb5\x00\x00\x00\x07\x00\x00\x00\x22\x00\x00\x00\x5d\x00\x00\x00\x0b\x00\x00\x00\x6e\x00\x00\x00\xb5\x00\x00\x00\x06\x00\x00\x00\x82\x00\x00\x00\x98\x00\x00\x00\x0e\x00\x00\x00\x16\x00\x00\x00\x40\x00\x00\x00\x11\x00\x00\x00\x29\x00\x00\x00\x40\x00\x00\x00\x0c\x00\x00\x00\x3a\x00\x00\x00\x40\x00\x00\x00\x11\x00\x00\x00\x4e\x00\x00\x00\x40\x00\x00\x00\x12\x00\x00\x00\x62\x00\x00\x00\x40\x00\x00\x00\x13\x00\x00\x00\x78\x00\x00\x00\x40\x00\x00\x00\x12\x00\x00\x00\x8d\x00\x00\x00\x40\x00\x00\x00\x12\x00\x00\x00\xcc\x00\x00\x00\x40\x00\x00\x00\x10\x00\x00\x00\xa2\x00\x00\x00\x40\x00\x00\x00\x11\x00\x00\x00\xb6\x00\x00\x00\x40\x00\x00\x00\x12\x00\x00\x00\x3b\x00\x00\x00\xb5\x00\x00\x00\x07\x00\x00\x00\x23\x00\x00\x00\xb5\x00\x00\x00\x07\x00\x00\x00\xcb\x00\x00\x00\x98\x00\x00\x00\x0e\x00\x00\x00\x38\x00\x00\x00\x5d\x00\x00\x00\x0e\x00\x00\x00\xe4\x00\x00\x00\x98\x00\x00\x00\x0e\x00\x00\x00\xb1\x00\x00\x00\xb5\x00\x00\x00\x12\x00\x00\x00\x1c\x00\x00\x00\x7a\x00\x00\x00\x16\x00\x00\x00\x05\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x1b\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x30\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x45\x00\x00\x00\x04\x00\x00\x00\x11\x00\x00\x00\x5a\x00\x00\x00\x04\x00\x00\x00\x0d\x00\x00\x00\x6a\x00\x00\x00\x04\x00\x00\x00\x0d\x00\x00\x00\x79\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x8f\x00\x00\x00\x04\x00\x00\x00\x11\x00\x00\x00\xa4\x00\x00\x00\x04\x00\x00\x00\x08\x00\x00\x00\xaf\x00\x00\x00\x04\x00\x00\x00\x10\x00\x00\x00\xc3\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\xd8\x00\x00\x00\x04\x00\x00\x00\x0c\x00\x00\x00\xe6\x00\x00\x00\x04\x00\x00\x00\x17\x00\x00\x00\x06\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x1b\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x30\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x44\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x5a\x00\x00\x00\x22\x00\x00\x00\x11\x00\x00\x00\x6e\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x82\x00\x00\x00\x22\x00\x00\x00\x0e\x00\x00\x00\x92\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\xa6\x00\x00\x00\x22\x00\x00\x00\x13\x00\x00\x00\xb9\x00\x00\x00\x22\x00\x00\x00\x1d\x00\x00\x00\xd7\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\xea\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x05\x00\x00\x00\x40\x00\x00\x00\x0e\x00\x00\x00\x3c\x00\x00\x00\x98\x00\x00\x00\x07\x00\x00\x00\x6a\x00\x00\x00\x97\x00\x00\x00\x0d\x00\x00\x00\x53\x00\x00\x00\x98\x00\x00\x00\x07\x00\x00\x00\x80\x00\x00\x00\x7a\x00\x00\x00\x11\x00\x00\x00\x04\x00\x00\x00\x98\x00\x00\x00\x15\x00\x00\x00\x86\x00\x00\x00\xb5\x00\x00\x00\x05\x00\x00\x00\x05\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x1b\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x30\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x45\x00\x00\x00\x04\x00\x00\x00\x11\x00\x00\x00\x5a\x00\x00\x00\x04\x00\x00\x00\x0d\x00\x00\x00\x6a\x00\x00\x00\x04\x00\x00\x00\x0d\x00\x00\x00\x79\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x8f\x00\x00\x00\x04\x00\x00\x00\x11\x00\x00\x00\xa4\x00\x00\x00\x04\x00\x00\x00\x08\x00\x00\x00\xaf\x00\x00\x00\x04\x00\x00\x00\x10\x00\x00\x00\xc3\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\xd8\x00\x00\x00\x04\x00\x00\x00\x0c\x00\x00\x00\xe6\x00\x00\x00\x04\x00\x00\x00\x17\x00\x00\x00\x06\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x1b\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x30\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x44\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x5a\x00\x00\x00\x22\x00\x00\x00\x11\x00\x00\x00\x6e\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x82\x00\x00\x00\x22\x00\x00\x00\x0e\x00\x00\x00\x92\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\xa6\x00\x00\x00\x22\x00\x00\x00\x13\x00\x00\x00\xb9\x00\x00\x00\x22\x00\x00\x00\x1d\x00\x00\x00\xd7\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\xea\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x05\x00\x00\x00\x40\x00\x00\x00\x0e\x00\x00\x00\x99\x00\x00\x00\x98\x00\x00\x00\x0d\x00\x00\x00\x0b\x00\x00\x00\xb5\x00\x00\x00\x05\x00\x00\x00\xb4\x00\x00\x00\x98\x00\x00\x00\x0d\x00\x00\x00\x4f\x00\x00\x00\x5d\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff";
char	propMapB[496] = "\x0b\x00\x00\x00\x0c\x00\x00\x00\x21\x00\x00\x00\x31\x00\x00\x00\x0c\x00\x00\x00\x1f\x00\x00\x00\x55\x00\x00\x00\x0c\x00\x00\x00\x1f\x00\x00\x00\x78\x00\x00\x00\x0c\x00\x00\x00\x1e\x00\x00\x00\x9c\x00\x00\x00\x0c\x00\x00\x00\x15\x00\x00\x00\xb7\x00\x00\x00\x0c\x00\x00\x00\x15\x00\x00\x00\xcf\x00\x00\x00\x0c\x00\x00\x00\x20\x00\x00\x00\x0d\x00\x00\x00\x37\x00\x00\x00\x1e\x00\x00\x00\x31\x00\x00\x00\x37\x00\x00\x00\x0d\x00\x00\x00\x42\x00\x00\x00\x37\x00\x00\x00\x1d\x00\x00\x00\x65\x00\x00\x00\x37\x00\x00\x00\x1f\x00\x00\x00\x87\x00\x00\x00\x37\x00\x00\x00\x15\x00\x00\x00\x9e\x00\x00\x00\x37\x00\x00\x00\x28\x00\x00\x00\xcc\x00\x00\x00\x37\x00\x00\x00\x20\x00\x00\x00\x0c\x00\x00\x00\x61\x00\x00\x00\x1f\x00\x00\x00\x30\x00\x00\x00\x61\x00\x00\x00\x1f\x00\x00\x00\x52\x00\x00\x00\x61\x00\x00\x00\x1e\x00\x00\x00\x76\x00\x00\x00\x61\x00\x00\x00\x1e\x00\x00\x00\x99\x00\x00\x00\x61\x00\x00\x00\x1e\x00\x00\x00\xb9\x00\x00\x00\x61\x00\x00\x00\x19\x00\x00\x00\xd5\x00\x00\x00\x61\x00\x00\x00\x1e\x00\x00\x00\x0b\x00\x00\x00\x8b\x00\x00\x00\x20\x00\x00\x00\x2a\x00\x00\x00\x8b\x00\x00\x00\x33\x00\x00\x00\x5d\x00\x00\x00\x8b\x00\x00\x00\x20\x00\x00\x00\x7e\x00\x00\x00\x8b\x00\x00\x00\x1f\x00\x00\x00\x9e\x00\x00\x00\x8b\x00\x00\x00\x19\x00\x00\x00\x92\x00\x00\x00\x6f\x9d\x00\x00\x77\x9d\x00\x00\x7f\x9d\x00\x00\x87\x9d\x00\x00\x8f\x9d\x00\x00\x97\x9d\x00\x00\x9f\x9d\x00\x00\xa7\x9d\x00\x00\xbd\x9d\x00\x00\xbd\x9d\x00\x00\xbd\x9d\x00\x00\xaf\x9d\x00\x00\xb7\x9d\x00\x00\xb6\x9f\x00\x00\xbb\x9f\x00\x00\xc0\x9f\x00\x00\xb1\x9f\x00\x00\xcf\x9f\x00\x00\xac\x9f\x00\x00\xa7\x9f\x00\x00\xc5\x9f\x00\x00\xca\x9f\x00\x00\x0b\xa1\x00\x00\x01\xa1\x00\x00\x06\xa1\x00\x00\x10\xa1\x00\x00\x18\xa1\x00\x00\x20\xa1\x00\x00\x28\xa1\x00\x00\x30\xa1\x00\x00\x38\xa1\x00\x00\x40\xa1\x00\x00\x45\xa1\x00\x00\x4a\xa1\x00\x00\x4a\xa1\x00\x00\x5a\xa1\x00\x00\x5a\xa1\x00\x00\x5a\xa1\x00\x00\x5a\xa1\x00\x00\x52\xa1\x00\x00\x5a\xa1\x00\x00\x5a\xa1\x00\x00\x5a\xa1\x00\x00\x5a\xa1\x00\x00\xfc\xa0\x00\x00";
char	global_18d8[12] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f"; // Used by: CG_EntityEvent
char	global_18e4[376] = "\xf8\xa3\x00\x00\x28\xa4\x00\x00\x50\xa4\x00\x00\x78\xa4\x00\x00\xa0\xa4\x00\x00\x52\xa5\x00\x00\x52\xa5\x00\x00\x52\xa5\x00\x00\x52\xa5\x00\x00\xc8\xa4\x00\x00\xed\xa4\x00\x00\x1c\xa5\x00\x00\xbb\xa5\x00\x00\x16\xa6\x00\x00\x5c\xa6\x00\x00\x75\xa6\x00\x00\x8e\xa6\x00\x00\xa7\xa6\x00\x00\xca\xa6\x00\x00\x44\xa7\x00\x00\x9f\xa7\x00\x00\xb6\xa7\x00\x00\xcf\xa7\x00\x00\xe0\xa7\x00\x00\xf1\xa7\x00\x00\x02\xa8\x00\x00\x13\xa8\x00\x00\x24\xa8\x00\x00\x35\xa8\x00\x00\x46\xa8\x00\x00\x57\xa8\x00\x00\x68\xa8\x00\x00\x79\xa8\x00\x00\x8a\xa8\x00\x00\x9b\xa8\x00\x00\xac\xa8\x00\x00\xbd\xa8\x00\x00\xce\xa8\x00\x00\xdf\xa8\x00\x00\x47\xa9\x00\x00\x2e\xa9\x00\x00\xf0\xa8\x00\x00\x0f\xa9\x00\x00\x67\xa9\x00\x00\x5e\xab\x00\x00\xb6\xab\x00\x00\x17\xac\x00\x00\x2a\xab\x00\x00\x00\xab\x00\x00\xb9\xa9\x00\x00\xe3\xa9\x00\x00\x10\xaa\x00\x00\x38\xaa\x00\x00\x4d\xab\x00\x00\x82\xae\x00\x00\x2d\xad\x00\x00\x4d\xad\x00\x00\x4d\xad\x00\x00\x4d\xad\x00\x00\xa3\xad\x00\x00\xb4\xad\x00\x00\xdd\xad\x00\x00\x06\xae\x00\x00\x2f\xae\x00\x00\x9a\xa9\x00\x00\x82\xae\x00\x00\x82\xae\x00\x00\x82\xae\x00\x00\x82\xae\x00\x00\x82\xae\x00\x00\x82\xae\x00\x00\x82\xae\x00\x00\x82\xae\x00\x00\x71\xae\x00\x00\x59\xae\x00\x00\x39\xa6\x00\x00\x37\xac\x00\x00\x4e\xac\x00\x00\x65\xac\x00\x00\x82\xac\x00\x00\x9f\xac\x00\x00\xd2\xac\x00\x00\x93\xae\x00\x00\x93\xae\x00\x00\x05\xad\x00\x00\x0d\xad\x00\x00\x15\xad\x00\x00\x1d\xad\x00\x00\x25\xad\x00\x00\x84\xb2\x00\x00\x8e\xb2\x00\x00\x89\xb2\x00\x00\x93\xb2\x00\x00\x98\xb2\x00\x00";
char	global_1a5c[12] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f"; // Used by: CG_AddScorePlum
char	global_1a68[36] = "\x54\xbe\x00\x00\x1e\xbe\x00\x00\x16\xbe\x00\x00\x26\xbe\x00\x00\x2e\xbe\x00\x00\x3e\xbe\x00\x00\x36\xbe\x00\x00\x46\xbe\x00\x00\x4e\xbe\x00\x00";
char	shaderAnimNames[128] = "\x1c\x61\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";
char	shaderAnimCounts[128] = "\x17\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";
char	shaderAnimSTRatio[128] = "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";
int		cl_numparticles = 1024; // Used by: CG_ClearParticles
int		initparticles = 0; // Used by: CG_AddParticles, CG_ClearParticles
int		roll = 0;
char	cg_customSoundNames[160] = "\x92\x67\x00\x00\x86\x67\x00\x00\x7a\x67\x00\x00\x6f\x67\x00\x00\x61\x67\x00\x00\x53\x67\x00\x00\x45\x67\x00\x00\x36\x67\x00\x00\x28\x67\x00\x00\x1e\x67\x00\x00\x13\x67\x00\x00\x08\x67\x00\x00\xfd\x66\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x16\x00\x00\x00\x2d\x00\x00\x00\xea\xff\xff\xff\x00\x00\x00\x00\x16\x00\x00\x00\xd3\xff\xff\xff\xea\xff\xff\xff";
char	global_1cb8[12] = "\x00\x00\x70\xc1\x00\x00\x70\xc1\x00\x00\x00\x00"; // Used by: CG_PlayerShadow
char	global_1cc4[12] = "\x00\x00\x70\x41\x00\x00\x70\x41\x00\x00\x00\x40"; // Used by: CG_PlayerShadow
char	global_1cd0[140] = "\xd4\x18\x01\x00\xd4\x18\x01\x00\xd4\x18\x01\x00\xe7\x18\x01\x00\xd4\x18\x01\x00\x00\x00\x80\xc0\x00\x00\x80\xc0\x00\x00\x80\xc0\x00\x00\x80\x40\x00\x00\x80\x40\x00\x00\x80\x40\xac\x58\x01\x00\xbe\x59\x01\x00\x1e\x5a\x01\x00\xba\x5a\x01\x00\x47\x5a\x01\x00\xde\x58\x01\x00\x52\x5b\x01\x00\x06\x5b\x01\x00\xa2\x5b\x01\x00\x57\x59\x01\x00\x96\x6a\x01\x00\x82\x6a\x01\x00\x89\x69\x01\x00\xa4\x69\x01\x00\x5e\x69\x01\x00\x40\x6a\x01\x00\x55\x6a\x01\x00\x6a\x6a\x01\x00\x3b\x6c\x01\x00\x3b\x6c\x01\x00\x4b\x6c\x01\x00\x4b\x6c\x01\x00\x3b\x6c\x01\x00\x3b\x6c\x01\x00";
int		vec3_origin = 0; // Used by: AnglesToAxis, ByteToDir, CG_ClipMoveToEntities, CG_DamageFeedback, CG_Portal, PM_NoclipMove
int		global_1d60 = 0; // Used by: AnglesToAxis, CG_DamageFeedback, CG_Portal
int		global_1d64 = 0; // Used by: AnglesToAxis, CG_DamageFeedback, CG_Portal
char	axisDefault[36] = "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f";
char	colorBlack[16] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f";
char	colorRed[16] = "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f";
char	colorGreen[16] = "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f";
char	colorBlue[16] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f";
char	colorYellow[16] = "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f";
char	colorMagenta[16] = "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f";
char	colorCyan[16] = "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f";
char	colorWhite[16] = "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f";
char	colorLtGrey[16] = "\x00\x00\x40\x3f\x00\x00\x40\x3f\x00\x00\x40\x3f\x00\x00\x80\x3f";
char	colorMdGrey[16] = "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f";
char	colorDkGrey[16] = "\x00\x00\x80\x3e\x00\x00\x80\x3e\x00\x00\x80\x3e\x00\x00\x80\x3f";
char	g_color_table[128] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f";
char	bytedirs[1948] = "\x4f\x96\x06\xbf\x00\x00\x00\x00\x44\xc4\x59\x3f\xf0\xbe\xe2\xbe\xab\x96\x74\x3e\x6d\x3b\x5d\x3f\xf6\x29\x97\xbe\x00\x00\x00\x00\x9a\x96\x74\x3f\x7a\x37\x9e\xbe\x00\x00\x00\x3f\xbd\x1b\x4f\x3f\xea\x5b\x26\xbe\x5f\x96\x86\x3e\x68\x78\x73\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x44\xc4\x59\x3f\x4f\x96\x06\x3f\xf6\x29\x17\xbe\xef\x70\x37\x3f\x12\x85\x2e\x3f\xf6\x29\x17\x3e\xef\x70\x37\x3f\x12\x85\x2e\x3f\x00\x00\x00\x00\x4f\x96\x06\x3f\x44\xc4\x59\x3f\x7a\x37\x9e\x3e\x00\x00\x00\x3f\xbd\x1b\x4f\x3f\x4f\x96\x06\x3f\x00\x00\x00\x00\x44\xc4\x59\x3f\xf6\x29\x97\x3e\x00\x00\x00\x00\x9a\x96\x74\x3f\xf0\xbe\xe2\x3e\xab\x96\x74\x3e\x6d\x3b\x5d\x3f\xea\x5b\x26\x3e\x5f\x96\x86\x3e\x68\x78\x73\x3f\x12\x85\x2e\xbf\xf6\x29\x17\x3e\xef\x70\x37\x3f\xbd\x1b\x4f\xbf\x7a\x37\x9e\x3e\x00\x00\x00\x3f\x14\x79\x16\xbf\x33\xc4\xd9\x3e\x49\x2d\x30\x3f\x44\xc4\x59\xbf\x4f\x96\x06\x3f\x00\x00\x00\x00\x6d\x3b\x5d\xbf\xf0\xbe\xe2\x3e\xab\x96\x74\x3e\xef\x70\x37\xbf\x12\x85\x2e\x3f\xf6\x29\x17\x3e\x49\x2d\x30\xbf\x14\x79\x16\x3f\x33\xc4\xd9\x3e\x00\x00\x00\xbf\xbd\x1b\x4f\x3f\x7a\x37\x9e\x3e\xab\x96\x74\xbe\x6d\x3b\x5d\x3f\xf0\xbe\xe2\x3e\x33\xc4\xd9\xbe\x49\x2d\x30\x3f\x14\x79\x16\x3f\xef\x70\x37\xbf\x12\x85\x2e\x3f\xf6\x29\x17\xbe\x00\x00\x00\xbf\xbd\x1b\x4f\x3f\x7a\x37\x9e\xbe\x4f\x96\x06\xbf\x44\xc4\x59\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x44\xc4\x59\x3f\x4f\x96\x06\xbf\xab\x96\x74\xbe\x6d\x3b\x5d\x3f\xf0\xbe\xe2\xbe\x00\x00\x00\x00\x9a\x96\x74\x3f\xf6\x29\x97\xbe\x5f\x96\x86\xbe\x68\x78\x73\x3f\xea\x5b\x26\xbe\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x9a\x96\x74\x3f\xf6\x29\x97\x3e\x5f\x96\x86\xbe\x68\x78\x73\x3f\xea\x5b\x26\x3e\xab\x96\x74\x3e\x6d\x3b\x5d\x3f\xf0\xbe\xe2\x3e\x5f\x96\x86\x3e\x68\x78\x73\x3f\xea\x5b\x26\x3e\x00\x00\x00\x3f\xbd\x1b\x4f\x3f\x7a\x37\x9e\x3e\xab\x96\x74\x3e\x6d\x3b\x5d\x3f\xf0\xbe\xe2\xbe\x5f\x96\x86\x3e\x68\x78\x73\x3f\xea\x5b\x26\xbe\x00\x00\x00\x3f\xbd\x1b\x4f\x3f\x7a\x37\x9e\xbe\x44\xc4\x59\x3f\x4f\x96\x06\x3f\x00\x00\x00\x00\xef\x70\x37\x3f\x12\x85\x2e\x3f\xf6\x29\x17\x3e\xef\x70\x37\x3f\x12\x85\x2e\x3f\xf6\x29\x17\xbe\x4f\x96\x06\x3f\x44\xc4\x59\x3f\x00\x00\x00\x00\x33\xc4\xd9\x3e\x49\x2d\x30\x3f\x14\x79\x16\x3f\x6d\x3b\x5d\x3f\xf0\xbe\xe2\x3e\xab\x96\x74\x3e\x49\x2d\x30\x3f\x14\x79\x16\x3f\x33\xc4\xd9\x3e\xbd\x1b\x4f\x3f\x7a\x37\x9e\x3e\x00\x00\x00\x3f\x12\x85\x2e\x3f\xf6\x29\x17\x3e\xef\x70\x37\x3f\x14\x79\x16\x3f\x33\xc4\xd9\x3e\x49\x2d\x30\x3f\x9a\x96\x74\x3f\xf6\x29\x97\x3e\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x68\x78\x73\x3f\xea\x5b\x26\x3e\x5f\x96\x86\x3e\x44\xc4\x59\x3f\x4f\x96\x06\xbf\x00\x00\x00\x00\x9a\x96\x74\x3f\xf6\x29\x97\xbe\x00\x00\x00\x00\x6d\x3b\x5d\x3f\xf0\xbe\xe2\xbe\xab\x96\x74\x3e\x68\x78\x73\x3f\xea\x5b\x26\xbe\x5f\x96\x86\x3e\xbd\x1b\x4f\x3f\x7a\x37\x9e\xbe\x00\x00\x00\x3f\x12\x85\x2e\x3f\xf6\x29\x17\xbe\xef\x70\x37\x3f\x44\xc4\x59\x3f\x00\x00\x00\x00\x4f\x96\x06\x3f\x6d\x3b\x5d\x3f\xf0\xbe\xe2\x3e\xab\x96\x74\xbe\xbd\x1b\x4f\x3f\x7a\x37\x9e\x3e\x00\x00\x00\xbf\x68\x78\x73\x3f\xea\x5b\x26\x3e\x5f\x96\x86\xbe\x4f\x96\x06\x3f\x00\x00\x00\x00\x44\xc4\x59\xbf\x12\x85\x2e\x3f\xf6\x29\x17\x3e\xef\x70\x37\xbf\x12\x85\x2e\x3f\xf6\x29\x17\xbe\xef\x70\x37\xbf\x44\xc4\x59\x3f\x00\x00\x00\x00\x4f\x96\x06\xbf\xbd\x1b\x4f\x3f\x7a\x37\x9e\xbe\x00\x00\x00\xbf\x6d\x3b\x5d\x3f\xf0\xbe\xe2\xbe\xab\x96\x74\xbe\x68\x78\x73\x3f\xea\x5b\x26\xbe\x5f\x96\x86\xbe\xf6\x29\x17\x3e\xef\x70\x37\x3f\x12\x85\x2e\xbf\x7a\x37\x9e\x3e\x00\x00\x00\x3f\xbd\x1b\x4f\xbf\x33\xc4\xd9\x3e\x49\x2d\x30\x3f\x14\x79\x16\xbf\xf0\xbe\xe2\x3e\xab\x96\x74\x3e\x6d\x3b\x5d\xbf\x14\x79\x16\x3f\x33\xc4\xd9\x3e\x49\x2d\x30\xbf\x49\x2d\x30\x3f\x14\x79\x16\x3f\x33\xc4\xd9\xbe\xf6\x29\x17\xbe\xef\x70\x37\x3f\x12\x85\x2e\xbf\x7a\x37\x9e\xbe\x00\x00\x00\x3f\xbd\x1b\x4f\xbf\x00\x00\x00\x00\x4f\x96\x06\x3f\x44\xc4\x59\xbf\x4f\x96\x06\xbf\x00\x00\x00\x00\x44\xc4\x59\xbf\xf0\xbe\xe2\xbe\xab\x96\x74\x3e\x6d\x3b\x5d\xbf\xf6\x29\x97\xbe\x00\x00\x00\x00\x9a\x96\x74\xbf\xea\x5b\x26\xbe\x5f\x96\x86\x3e\x68\x78\x73\xbf\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xbf\xf6\x29\x97\x3e\x00\x00\x00\x00\x9a\x96\x74\xbf\xea\x5b\x26\x3e\x5f\x96\x86\x3e\x68\x78\x73\xbf\xf0\xbe\xe2\xbe\xab\x96\x74\xbe\x6d\x3b\x5d\xbf\x7a\x37\x9e\xbe\x00\x00\x00\xbf\xbd\x1b\x4f\xbf\xea\x5b\x26\xbe\x5f\x96\x86\xbe\x68\x78\x73\xbf\x00\x00\x00\x00\x44\xc4\x59\xbf\x4f\x96\x06\xbf\xf6\x29\x17\xbe\xef\x70\x37\xbf\x12\x85\x2e\xbf\xf6\x29\x17\x3e\xef\x70\x37\xbf\x12\x85\x2e\xbf\x00\x00\x00\x00\x4f\x96\x06\xbf\x44\xc4\x59\xbf\x7a\x37\x9e\x3e\x00\x00\x00\xbf\xbd\x1b\x4f\xbf\xf0\xbe\xe2\x3e\xab\x96\x74\xbe\x6d\x3b\x5d\xbf\xea\x5b\x26\x3e\x5f\x96\x86\xbe\x68\x78\x73\xbf\xab\x96\x74\x3e\x6d\x3b\x5d\xbf\xf0\xbe\xe2\xbe\x00\x00\x00\x3f\xbd\x1b\x4f\xbf\x7a\x37\x9e\xbe\x33\xc4\xd9\x3e\x49\x2d\x30\xbf\x14\x79\x16\xbf\xef\x70\x37\x3f\x12\x85\x2e\xbf\xf6\x29\x17\xbe\x49\x2d\x30\x3f\x14\x79\x16\xbf\x33\xc4\xd9\xbe\x14\x79\x16\x3f\x33\xc4\xd9\xbe\x49\x2d\x30\xbf\x00\x00\x00\x00\x9a\x96\x74\xbf\xf6\x29\x97\xbe\x00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x00\x00\x5f\x96\x86\x3e\x68\x78\x73\xbf\xea\x5b\x26\xbe\x00\x00\x00\x00\x44\xc4\x59\xbf\x4f\x96\x06\x3f\x00\x00\x00\x00\x9a\x96\x74\xbf\xf6\x29\x97\x3e\xab\x96\x74\x3e\x6d\x3b\x5d\xbf\xf0\xbe\xe2\x3e\x5f\x96\x86\x3e\x68\x78\x73\xbf\xea\x5b\x26\x3e\x00\x00\x00\x3f\xbd\x1b\x4f\xbf\x7a\x37\x9e\x3e\xef\x70\x37\x3f\x12\x85\x2e\xbf\xf6\x29\x17\x3e\x4f\x96\x06\x3f\x44\xc4\x59\xbf\x00\x00\x00\x00\xab\x96\x74\xbe\x6d\x3b\x5d\xbf\xf0\xbe\xe2\xbe\x00\x00\x00\xbf\xbd\x1b\x4f\xbf\x7a\x37\x9e\xbe\x5f\x96\x86\xbe\x68\x78\x73\xbf\xea\x5b\x26\xbe\x44\xc4\x59\xbf\x4f\x96\x06\xbf\x00\x00\x00\x00\xef\x70\x37\xbf\x12\x85\x2e\xbf\xf6\x29\x17\xbe\xef\x70\x37\xbf\x12\x85\x2e\xbf\xf6\x29\x17\x3e\x4f\x96\x06\xbf\x44\xc4\x59\xbf\x00\x00\x00\x00\x00\x00\x00\xbf\xbd\x1b\x4f\xbf\x7a\x37\x9e\x3e\xab\x96\x74\xbe\x6d\x3b\x5d\xbf\xf0\xbe\xe2\x3e\x5f\x96\x86\xbe\x68\x78\x73\xbf\xea\x5b\x26\x3e\x6d\x3b\x5d\xbf\xf0\xbe\xe2\xbe\xab\x96\x74\x3e\xbd\x1b\x4f\xbf\x7a\x37\x9e\xbe\x00\x00\x00\x3f\x49\x2d\x30\xbf\x14\x79\x16\xbf\x33\xc4\xd9\x3e\x12\x85\x2e\xbf\xf6\x29\x17\xbe\xef\x70\x37\x3f\xf0\xbe\xe2\xbe\xab\x96\x74\xbe\x6d\x3b\x5d\x3f\x14\x79\x16\xbf\x33\xc4\xd9\xbe\x49\x2d\x30\x3f\x7a\x37\x9e\xbe\x00\x00\x00\xbf\xbd\x1b\x4f\x3f\xf6\x29\x17\xbe\xef\x70\x37\xbf\x12\x85\x2e\x3f\x33\xc4\xd9\xbe\x49\x2d\x30\xbf\x14\x79\x16\x3f\xea\x5b\x26\xbe\x5f\x96\x86\xbe\x68\x78\x73\x3f\xf0\xbe\xe2\x3e\xab\x96\x74\xbe\x6d\x3b\x5d\x3f\xea\x5b\x26\x3e\x5f\x96\x86\xbe\x68\x78\x73\x3f\x7a\x37\x9e\x3e\x00\x00\x00\xbf\xbd\x1b\x4f\x3f\xf6\x29\x17\x3e\xef\x70\x37\xbf\x12\x85\x2e\x3f\x00\x00\x00\x00\x4f\x96\x06\xbf\x44\xc4\x59\x3f\x33\xc4\xd9\x3e\x49\x2d\x30\xbf\x14\x79\x16\x3f\x14\x79\x16\x3f\x33\xc4\xd9\xbe\x49\x2d\x30\x3f\x49\x2d\x30\x3f\x14\x79\x16\xbf\x33\xc4\xd9\x3e\x9a\x96\x74\xbf\xf6\x29\x97\x3e\x00\x00\x00\x00\x68\x78\x73\xbf\xea\x5b\x26\x3e\x5f\x96\x86\x3e\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x00\x00\x44\xc4\x59\xbf\x00\x00\x00\x00\x4f\x96\x06\x3f\x9a\x96\x74\xbf\xf6\x29\x97\xbe\x00\x00\x00\x00\x68\x78\x73\xbf\xea\x5b\x26\xbe\x5f\x96\x86\x3e\x6d\x3b\x5d\xbf\xf0\xbe\xe2\x3e\xab\x96\x74\xbe\x68\x78\x73\xbf\xea\x5b\x26\x3e\x5f\x96\x86\xbe\xbd\x1b\x4f\xbf\x7a\x37\x9e\x3e\x00\x00\x00\xbf\x6d\x3b\x5d\xbf\xf0\xbe\xe2\xbe\xab\x96\x74\xbe\x68\x78\x73\xbf\xea\x5b\x26\xbe\x5f\x96\x86\xbe\xbd\x1b\x4f\xbf\x7a\x37\x9e\xbe\x00\x00\x00\xbf\x12\x85\x2e\xbf\xf6\x29\x17\x3e\xef\x70\x37\xbf\x12\x85\x2e\xbf\xf6\x29\x17\xbe\xef\x70\x37\xbf\x44\xc4\x59\xbf\x00\x00\x00\x00\x4f\x96\x06\xbf\x49\x2d\x30\xbf\x14\x79\x16\x3f\x33\xc4\xd9\xbe\x14\x79\x16\xbf\x33\xc4\xd9\x3e\x49\x2d\x30\xbf\x33\xc4\xd9\xbe\x49\x2d\x30\x3f\x14\x79\x16\xbf\x33\xc4\xd9\xbe\x49\x2d\x30\xbf\x14\x79\x16\xbf\x14\x79\x16\xbf\x33\xc4\xd9\xbe\x49\x2d\x30\xbf\x49\x2d\x30\xbf\x14\x79\x16\xbf\x33\xc4\xd9\xbe\x00\x00\x00\x00";
int		global_2658 = 0; // Used by: Info_ValueForKey
char	lit_265c[9908];
char	lit_4d10[10844];
char	cg_pmove_msec[272];
char	cg_hudFiles[272];
char	cg_trueLightning[8];
int		bss_7994; // Used by: CG_LightningBolt
char	bss_7998[260];
char	cg_oldPlasma[12];
int		bss_7aa8; // Used by: CG_PlasmaTrail
char	bss_7aac[256];
char	cg_oldRocket[12];
int		bss_7bb8; // Used by: CG_MissileHitWall
char	bss_7bbc[256];
char	cg_oldRail[12];
int		bss_7cc8; // Used by: CG_RailTrail
char	bss_7ccc[256];
char	cg_noProjectileTrail[12];
int		bss_7dd8; // Used by: CG_PlasmaTrail, CG_RocketTrail, CG_BubbleTrail
char	bss_7ddc[256];
char	cg_cameraMode[12];
int		bss_7ee8; // Used by: CG_OffsetThirdPersonView, CG_Player
char	bss_7eec[256];
char	cg_timescale[8];
int		bss_7ff4; // Used by: CG_DrawActiveFrame
char	bss_7ff8[260];
char	cg_timescaleFadeSpeed[8];
int		bss_8104; // Used by: CG_DrawActiveFrame
char	bss_8108[260];
char	cg_timescaleFadeEnd[8];
int		bss_8214; // Used by: CG_DrawActiveFrame
char	bss_8218[260];
char	cg_cameraOrbitDelay[12];
int		bss_8328; // Used by: CG_CalcViewValues
char	bss_832c[256];
char	cg_cameraOrbit[8];
int		bss_8434; // Used by: CG_CalcViewValues, CG_StartOrbit_f
int		bss_8438; // Used by: CG_CalcViewValues
char	bss_843c[256];
char	pmove_msec[12];
int		bss_8548; // Used by: CG_PredictPlayerState
char	bss_854c[256];
char	pmove_fixed[12];
int		bss_8658; // Used by: CG_PredictPlayerState
char	bss_865c[256];
char	cg_smoothClients[12];
int		bss_8768; // Used by: CG_CalcEntityLerpPositions
char	bss_876c[256];
char	cg_scorePlum[12];
int		bss_8878; // Used by: CG_ScorePlum
char	bss_887c[256];
char	cg_teamChatsOnly[12];
int		bss_8988; // Used by: CG_ServerCommand
char	bss_898c[256];
char	cg_drawFriend[12];
int		bss_8a98; // Used by: CG_PlayerSprites
char	bss_8a9c[256];
char	cg_deferPlayers[12];
int		bss_8ba8; // Used by: CG_NewClientInfo
char	bss_8bac[256];
char	cg_predictItems[12];
int		bss_8cb8; // Used by: CG_TouchItem
char	bss_8cbc[256];
char	cg_blood[12];
int		bss_8dc8; // Used by: CG_DamageBlendBlob, CG_BigExplode, CG_GibPlayer, CG_Bleed
char	bss_8dcc[256];
char	cg_paused[12];
int		bss_8ed8; // Used by: CG_DrawOldScoreboard
char	bss_8edc[256];
char	cg_buildScript[12];
int		bss_8fe8; // Used by: CG_NewClientInfo, CG_LoadClientInfo, CG_RegisterGraphics, CG_RegisterSounds
char	bss_8fec[256];
int		cg_forceModel;
int		bss_90f0; // Used by: CG_UpdateCvars, CG_RegisterCvars
int		bss_90f4;
int		bss_90f8; // Used by: CG_NewClientInfo
char	bss_90fc[256];
char	cg_stats[12];
int		bss_9208; // Used by: CG_DrawActiveFrame
char	bss_920c[256];
char	cg_teamChatHeight[12];
int		bss_9318; // Used by: CG_AddToTeamChat, CG_DrawTeamInfo
char	bss_931c[256];
char	cg_teamChatTime[12];
int		bss_9428; // Used by: CG_AddToTeamChat, CG_DrawTeamInfo
char	bss_942c[256];
char	cg_synchronousClients[12];
int		bss_9538; // Used by: CG_TransitionSnapshot, CG_PredictPlayerState, CG_EntityEvent, CG_DrawLagometer
char	bss_953c[256];
char	cg_drawAttacker[12];
int		bss_9648; // Used by: CG_DrawUpperRight
char	bss_964c[256];
char	cg_lagometer[12];
int		bss_9758; // Used by: CG_DrawLagometer
char	bss_975c[256];
char	cg_thirdPerson[12];
int		bss_9868; // Used by: CG_DrawActiveFrame
char	bss_986c[256];
char	cg_thirdPersonAngle[8];
int		bss_9974; // Used by: CG_OffsetThirdPersonView
char	bss_9978[260];
char	cg_thirdPersonRange[8];
int		bss_9a84; // Used by: CG_OffsetThirdPersonView
char	bss_9a88[260];
char	cg_zoomFov[8];
int		bss_9b94; // Used by: CG_CalcFov
char	bss_9b98[260];
char	cg_fov[8];
int		bss_9ca4; // Used by: CG_CalcFov
int		bss_9ca8; // Used by: CG_AddViewWeapon
char	bss_9cac[256];
char	cg_simpleItems[12];
int		bss_9db8; // Used by: CG_Item
char	bss_9dbc[256];
char	cg_ignore[272];
char	cg_autoswitch[12];
int		bss_9fd8; // Used by: CG_ItemPickup
char	bss_9fdc[256];
char	cg_tracerLength[8];
int		bss_a0e4; // Used by: CG_Tracer
char	bss_a0e8[260];
char	cg_tracerWidth[8];
int		bss_a1f4; // Used by: CG_Tracer
char	bss_a1f8[260];
char	cg_tracerChance[8];
int		bss_a304; // Used by: CG_Bullet
char	bss_a308[260];
char	cg_viewsize[12];
int		bss_a418; // Used by: CG_CalcVrect, CG_SizeDown_f, CG_SizeUp_f
char	bss_a41c[256];
char	cg_drawGun[12];
int		bss_a528; // Used by: CG_AddViewWeapon, CG_AddPlayerWeapon, CG_EntityEvent
char	bss_a52c[256];
char	cg_gun_z[8];
int		bss_a634; // Used by: CG_AddViewWeapon, CG_AddTestModel
char	bss_a638[260];
char	cg_gun_y[8];
int		bss_a744; // Used by: CG_AddViewWeapon, CG_AddTestModel
char	bss_a748[260];
char	cg_gun_x[8];
int		bss_a854; // Used by: CG_AddViewWeapon, CG_AddTestModel
char	bss_a858[260];
char	cg_gun_frame[12];
int		bss_a968; // Used by: CG_AddViewWeapon
char	bss_a96c[256];
char	cg_brassTime[12];
int		bss_aa78; // Used by: CG_FireWeapon, CG_ShotgunEjectBrass, CG_MachineGunEjectBrass
char	bss_aa7c[256];
char	cg_addMarks[12];
int		bss_ab88; // Used by: CG_AddMarks, CG_ImpactMark
char	bss_ab8c[256];
char	cg_footsteps[12];
int		bss_ac98; // Used by: CG_EntityEvent
char	bss_ac9c[256];
char	cg_showmiss[12];
int		bss_ada8; // Used by: CG_MapRestart, CG_PredictPlayerState, CG_CheckChangedPredictableEvents
char	bss_adac[256];
char	cg_noPlayerAnims[12];
int		bss_aeb8; // Used by: CG_PlayerAnimation
char	bss_aebc[256];
char	cg_nopredict[12];
int		bss_afc8; // Used by: CG_TransitionSnapshot, CG_PredictPlayerState, CG_EntityEvent, CG_DrawLagometer
char	bss_afcc[256];
char	cg_errorDecay[8];
int		bss_b0d4; // Used by: CG_CalcViewValues, CG_PredictPlayerState
int		bss_b0d8; // Used by: CG_PredictPlayerState
char	bss_b0dc[256];
char	cg_railTrailTime[8];
int		bss_b1e4; // Used by: CG_RailTrail
char	bss_b1e8[260];
char	cg_debugEvents[12];
int		bss_b2f8; // Used by: CG_EntityEvent
char	bss_b2fc[256];
char	cg_debugPosition[12];
int		bss_b408; // Used by: CG_ResetPlayerEntity
char	bss_b40c[256];
char	cg_debugAnim[12];
int		bss_b518; // Used by: CG_RunLerpFrame, CG_SetLerpFrameAnimation
char	bss_b51c[256];
char	cg_animSpeed[12];
int		bss_b628; // Used by: CG_RunLerpFrame
char	bss_b62c[256];
char	cg_draw2D[12];
int		bss_b738; // Used by: CG_Draw2D
char	bss_b73c[256];
char	cg_drawStatus[12];
int		bss_b848; // Used by: CG_DrawStatusBar
char	bss_b84c[256];
char	cg_crosshairHealth[12];
int		bss_b958; // Used by: CG_DrawCrosshair
char	bss_b95c[256];
char	cg_crosshairSize[8];
int		bss_ba64; // Used by: CG_DrawCrosshair3D, CG_DrawCrosshair
char	bss_ba68[260];
char	cg_crosshairY[12];
int		bss_bb78; // Used by: CG_DrawCrosshair
char	bss_bb7c[256];
char	cg_crosshairX[12];
int		bss_bc88; // Used by: CG_DrawCrosshair
char	bss_bc8c[256];
char	cg_teamOverlayUserinfo[272];
int		cg_drawTeamOverlay;
int		bss_bea0; // Used by: CG_UpdateCvars
int		bss_bea4;
int		bss_bea8; // Used by: CG_DrawLowerLeft, CG_DrawLowerRight, CG_DrawUpperRight, CG_DrawTeamOverlay, CG_UpdateCvars
char	bss_beac[256];
char	cg_drawRewards[12];
int		bss_bfb8; // Used by: CG_DrawReward
char	bss_bfbc[256];
char	cg_drawCrosshairNames[12];
int		bss_c0c8; // Used by: CG_DrawCrosshairNames
char	bss_c0cc[256];
char	cg_drawCrosshair[12];
int		bss_c1d8; // Used by: CG_DrawCrosshairNames, CG_DrawCrosshair3D, CG_DrawCrosshair
char	bss_c1dc[256];
char	cg_drawAmmoWarning[12];
int		bss_c2e8; // Used by: CG_DrawAmmoWarning
char	bss_c2ec[256];
char	cg_drawIcons[12];
int		bss_c3f8; // Used by: CG_DrawClientScore, CG_DrawStatusBar, CG_DrawFlagModel, CG_DrawHead, CG_Draw3DModel
char	bss_c3fc[256];
char	cg_draw3dIcons[12];
int		bss_c508; // Used by: CG_DrawStatusBar, CG_DrawFlagModel, CG_DrawHead, CG_Draw3DModel
char	bss_c50c[256];
char	cg_drawSnapshot[12];
int		bss_c618; // Used by: CG_DrawUpperRight
char	bss_c61c[256];
char	cg_drawFPS[12];
int		bss_c728; // Used by: CG_DrawUpperRight
char	bss_c72c[256];
char	cg_drawTimer[12];
int		bss_c838; // Used by: CG_DrawUpperRight
char	bss_c83c[256];
char	cg_gibs[12];
int		bss_c948; // Used by: CG_GibPlayer
char	bss_c94c[256];
char	cg_shadows[12];
int		bss_ca58; // Used by: CG_Player, CG_PlayerSplash, CG_PlayerShadow
char	bss_ca5c[256];
char	cg_swingSpeed[8];
int		bss_cb64; // Used by: CG_PlayerAngles
char	bss_cb68[260];
char	cg_bobroll[8];
int		bss_cc74; // Used by: CG_OffsetFirstPersonView
char	bss_cc78[260];
char	cg_bobpitch[8];
int		bss_cd84; // Used by: CG_OffsetFirstPersonView
char	bss_cd88[260];
char	cg_bobup[8];
int		bss_ce94; // Used by: CG_OffsetFirstPersonView
char	bss_ce98[260];
char	cg_runroll[8];
int		bss_cfa4; // Used by: CG_OffsetFirstPersonView
char	bss_cfa8[260];
char	cg_runpitch[8];
int		bss_d0b4; // Used by: CG_OffsetFirstPersonView
char	bss_d0b8[260];
char	cg_centertime[8];
int		bss_d1c4; // Used by: CG_DrawCenterString
char	bss_d1c8[260];
char	cg_items[6144];
char	cg_weapons[2112];
char	cg_entities[733184];
int		cg; // Used by: CG_DrawActiveFrame, CG_Grapple, CG_Missile
int		bss_c2310; // Used by: CG_DrawTeamVote, CG_DrawTeamInfo, CG_Init, CG_RegisterClients
int		bss_c2314; // Used by: CG_DrawActiveFrame, CG_TransitionSnapshot, CG_PredictPlayerState, CG_EntityEvent
int		bss_c2318; // Used by: CG_ServerCommand, CG_MapRestart, CG_Draw2D
int		bss_c231c; // Used by: CG_DrawOldScoreboard
int		bss_c2320; // Used by: CG_NewClientInfo, CG_Init
int		bss_c2324; // Used by: CG_MapRestart, CG_ConfigStringModified, CG_CheckLocalSounds
int		bss_c2328; // Used by: CG_ProcessSnapshots, CG_ReadNextSnapshot, CG_DrawSnapshot
int		bss_c232c; // Used by: CG_AddLagometerFrameInfo
int		bss_c2330; // Used by: CG_CalcMuzzlePoint, CG_Weapon_f, CG_PrevWeapon_f, CG_NextWeapon_f, CG_WeaponSelectable, CG_DrawWeaponSelect, CG_DrawActiveFrame, CG_PowerupTimerSounds, CG_OffsetFirstPersonView, CG_CalcVrect, CG_ProcessSnapshots, CG_ReadNextSnapshot, CG_SetNextSnap, CG_TransitionSnapshot, CG_SetInitialSnapshot, CG_ResetEntity, CG_DrawOldScoreboard, CG_DrawClientScore, CG_PredictPlayerState, CG_InterpolatePlayerState, CG_BuildSolidList, CG_TransitionPlayerState, CG_Respawn, CG_DamageFeedback, CG_CheckAmmo, CG_Player, CG_PlayerSprites, CG_PlayerFloatSprite, CG_AddParticleToScene, CG_CheckEvents, CG_EntityEvent, CG_UseItem, CG_Obituary, CG_AddPacketEntities, CG_CalcEntityLerpPositions, CG_InterpolateEntityPosition, CG_Item, CG_General, CG_Bleed, CG_ColorForHealth, CG_DrawActive, CG_Draw2D, CG_DrawFollow, CG_ScanForCrosshairEntity, CG_DrawCrosshair3D, CG_DrawCrosshair, CG_DrawDisconnect, CG_DrawHoldableItem, CG_DrawPickupItem, CG_DrawPowerups, CG_DrawScores, CG_DrawTeamOverlay, CG_DrawSnapshot, CG_DrawAttacker, CG_DrawStatusBar, CG_DrawStatusBarHead, CG_LastAttacker
int		bss_c2334; // Used by: CG_ProcessSnapshots, CG_SetNextSnap, CG_TransitionSnapshot, CG_PredictPlayerState, CG_InterpolatePlayerState, CG_BuildSolidList, CG_AddPacketEntities, CG_InterpolateEntityPosition
char	bss_c2338[107544];
int		bss_dc750; // Used by: CG_AddPacketEntities, CG_InterpolateEntityPosition
int		bss_dc754; // Used by: CG_TransitionSnapshot, CG_PredictPlayerState, CG_BuildSolidList, CG_TransitionPlayerState, CG_Respawn
int		bss_dc758; // Used by: CG_SetNextSnap, CG_PredictPlayerState, CG_InterpolatePlayerState, CG_BuildSolidList
int		bss_dc75c; // Used by: CG_DrawActiveFrame, CG_SwingAngles, CG_ReflectVelocity, CG_BloodTrail
int		bss_dc760; // Used by: CG_ShotgunFire, CG_FireWeapon, CG_OutOfAmmoChange, CG_Weapon_f, CG_PrevWeapon_f, CG_NextWeapon_f, CG_AddPlayerWeapon, CG_MachinegunSpinAngle, CG_CalculateWeaponPosition, CG_GrappleTrail, CG_PlasmaTrail, CG_RocketTrail, CG_RailTrail, CG_ShotgunEjectBrass, CG_MachineGunEjectBrass, CG_DrawActiveFrame, CG_PlayBufferedSounds, CG_PowerupTimerSounds, CG_CalcViewValues, CG_DamageBlendBlob, CG_CalcFov, CG_ZoomUp_f, CG_ZoomDown_f, CG_OffsetFirstPersonView, CG_StepOffset, CG_ProcessSnapshots, CG_ResetEntity, CG_AddToTeamChat, CG_DrawTourneyScoreboard, CG_PredictPlayerState, CG_TouchItem, CG_InterpolatePlayerState, CG_TransitionPlayerState, CG_CheckLocalSounds, CG_Respawn, CG_DamageFeedback, CG_ResetPlayerEntity, CG_AddRefEntityWithPowerups, CG_HasteTrail, CG_AddPainTwitch, CG_ClearLerpFrame, CG_RunLerpFrame, CG_ParticleMisc, CG_ParticleDust, CG_ParticleSparks, CG_ParticleBloodCloud, CG_BloodPool, CG_OilSlickRemove, CG_Particle_OilSlick, CG_Particle_OilParticle, CG_Particle_Bleed, CG_ParticleImpactSmokePuff, CG_ParticleExplosion, CG_ParticleBulletDebris, CG_ParticleSmoke, CG_ParticleBubble, CG_ParticleSnow, CG_ParticleSnowFlurry, CG_AddParticles, CG_AddParticleToScene, CG_ClearParticles, CG_AddMarks, CG_ImpactMark, CG_AddLocalEntities, CG_AddScorePlum, CG_AddSpriteExplosion, CG_AddExplosion, CG_AddFallScaleFade, CG_AddScaleFade, CG_AddMoveScaleFade, CG_AddFadeRGB, CG_AddFragment, CG_ReflectVelocity, CG_BloodTrail, CG_EntityEvent, CG_PainEvent, CG_ItemPickup, CG_UseItem, CG_AddPacketEntities, CG_CalcEntityLerpPositions, CG_Mover, CG_Missile, CG_Item, CG_Speaker, CG_LaunchExplode, CG_LaunchGib, CG_Bleed, CG_MakeExplosion, CG_ScorePlum, CG_SpawnEffect, CG_BubbleTrail, UI_DrawProportionalString, CG_FadeColor, CG_DrawWarmup, CG_DrawIntermission, CG_DrawTeamVote, CG_DrawVote, CG_ScanForCrosshairEntity, CG_DrawCrosshair3D, CG_DrawCrosshair, CG_CenterPrint, CG_DrawDisconnect, CG_AddLagometerFrameInfo, CG_DrawReward, CG_DrawTeamInfo, CG_DrawPowerups, CG_DrawTimer, CG_DrawAttacker, CG_DrawStatusBar, CG_DrawStatusBarHead, CG_DrawFlagModel, CG_Draw3DModel, CG_ScoresUp_f, CG_ScoresDown_f, CG_CrosshairPlayer
int		bss_dc764; // Used by: CG_DrawActiveFrame, CG_PowerupTimerSounds, CG_PredictPlayerState
int		bss_dc768; // Used by: CG_PredictPlayerState, CG_ClipMoveToEntities
int		bss_dc76c; // Used by: CG_MapRestart, CG_CheckLocalSounds
int		bss_dc770; // Used by: CG_MapRestart, CG_CheckLocalSounds
int		bss_dc774; // Used by: CG_TransitionSnapshot, CG_MapRestart, CG_TransitionPlayerState
int		bss_dc778; // Used by: CG_AddViewWeapon, CG_AddPlayerWeapon, CG_DrawActiveFrame, CG_CalcViewValues, CG_Player, CG_PlayerFloatSprite, CG_EntityEvent, CG_DrawCrosshairNames, CG_DrawCrosshair3D, CG_DrawCrosshair
int		bss_dc77c; // Used by: CG_DrawActiveFrame, CG_CalcViewValues, CG_PredictPlayerState, CG_TouchTriggerPrediction
int		bss_dc780; // Used by: CG_PredictPlayerState
int		bss_dc784; // Used by: CG_CalcFov, CG_DrawOldScoreboard, CG_TouchTriggerPrediction
int		bss_dc788;
int		bss_dc78c; // Used by: CG_OffsetFirstPersonView
char	bss_dc790[16];
char	bss_dc7a0[12]; // Used by: CG_OffsetFirstPersonView
int		bss_dc7ac; // Used by: CG_DrawStatusBar
char	bss_dc7b0[20];
int		bss_dc7c4; // Used by: CG_PredictPlayerState
char	bss_dc7c8[32];
int		bss_dc7e8; // Used by: CG_AddViewWeapon
int		bss_dc7ec; // Used by: CG_PredictPlayerState
char	bss_dc7f0[28];
int		bss_dc80c; // Used by: CG_AddPlayerWeapon, CG_LightningBolt, CG_OffsetThirdPersonView, CG_EntityEvent, CG_ScorePlum
int		bss_dc810; // Used by: CG_DrawStatusBar
int		bss_dc814; // Used by: CG_DrawStatusBar
char	bss_dc818[12];
int		bss_dc824; // Used by: CG_OffsetFirstPersonView, CG_OffsetThirdPersonView
char	bss_dc828[16];
int		bss_dc838; // Used by: CG_DrawWeaponSelect, CG_OffsetThirdPersonView, CG_TouchTriggerPrediction, CG_DrawAttacker
char	bss_dc83c[12];
int		bss_dc848; // Used by: CG_OffsetThirdPersonView
char	bss_dc84c[56];
int		bss_dc884; // Used by: CG_TouchItem
char	bss_dc888[8];
int		bss_dc890; // Used by: CG_DrawAttacker
char	bss_dc894[64];
int		bss_dc8d4; // Used by: CG_DrawStatusBar
int		bss_dc8d8; // Used by: CG_DrawStatusBar
int		bss_dc8dc; // Used by: CG_DrawStatusBar
char	bss_dc8e0[96];
int		bss_dc940; // Used by: CG_TouchTriggerPrediction
int		bss_dc944;
int		bss_dc948; // Used by: CG_TouchTriggerPrediction
int		bss_dc94c; // Used by: CG_TouchTriggerPrediction
int		bss_dc950;
char	bss_dc954[716];
int		bss_dcc20; // Used by: CG_PredictPlayerState
int		bss_dcc24; // Used by: CG_CalcViewValues, CG_PredictPlayerState
int		bss_dcc28; // Used by: CG_CalcViewValues, CG_PredictPlayerState
int		bss_dcc2c; // Used by: CG_CalcViewValues, CG_PredictPlayerState
int		bss_dcc30; // Used by: CG_CalcViewValues, CG_PredictPlayerState
int		bss_dcc34; // Used by: CG_PredictPlayerState, CG_CheckChangedPredictableEvents
char	bss_dcc38[64];
int		bss_dcc78; // Used by: CG_StepOffset, CG_EntityEvent
int		bss_dcc7c; // Used by: CG_StepOffset, CG_EntityEvent
int		bss_dcc80; // Used by: CG_OffsetFirstPersonView, CG_TransitionPlayerState
int		bss_dcc84; // Used by: CG_OffsetFirstPersonView, CG_TransitionPlayerState
int		bss_dcc88; // Used by: CG_CalculateWeaponPosition, CG_OffsetFirstPersonView, CG_EntityEvent
int		bss_dcc8c; // Used by: CG_CalculateWeaponPosition, CG_OffsetFirstPersonView, CG_EntityEvent
int		bss_dcc90; // Used by: CG_OutOfAmmoChange, CG_Weapon_f, CG_PrevWeapon_f, CG_NextWeapon_f, CG_DrawWeaponSelect, CG_DrawActiveFrame, CG_Respawn, CG_ItemPickup, CG_Init
int		bss_dcc94; // Used by: CG_AddPacketEntities, CG_Item
int		bss_dcc98; // Used by: CG_AddPacketEntities
int		bss_dcc9c; // Used by: CG_AddPacketEntities
char	bss_dcca0[36];
int		bss_dccc4; // Used by: CG_AddPacketEntities, CG_Item
int		bss_dccc8; // Used by: CG_AddPacketEntities
int		bss_dcccc; // Used by: CG_AddPacketEntities
char	bss_dccd0[36];
int		bss_dccf4; // Used by: CG_CalcVrect, CG_TileClear, CG_DrawCrosshair
int		bss_dccf8; // Used by: CG_CalcVrect, CG_TileClear, CG_DrawCrosshair
int		bss_dccfc; // Used by: CG_CalcFov, CG_CalcVrect, CG_TileClear, CG_DrawCrosshair
int		bss_dcd00; // Used by: CG_CalcFov, CG_CalcVrect, CG_TileClear, CG_DrawCrosshair
int		bss_dcd04; // Used by: CG_CalcFov, CG_DrawCrosshair3D
int		bss_dcd08; // Used by: CG_CalcFov
int		bss_dcd0c; // Used by: CG_AddViewWeapon, CG_CalculateWeaponPosition, CG_CalcViewValues, CG_DamageBlendBlob, CG_OffsetThirdPersonView, CG_AddTestModel, CG_TestModel_f, CG_AddScorePlum, CG_AddFallScaleFade, CG_AddScaleFade, CG_AddMoveScaleFade, CG_ScanForCrosshairEntity, CG_DrawCrosshair3D, CG_Viewpos_f
int		bss_dcd10; // Used by: CG_CalcViewValues, CG_DamageBlendBlob, CG_OffsetThirdPersonView, CG_TestModel_f, CG_AddScorePlum, CG_AddFallScaleFade, CG_AddScaleFade, CG_AddMoveScaleFade, CG_DrawCrosshair3D, CG_Viewpos_f
int		bss_dcd14; // Used by: CG_CalcViewValues, CG_DamageBlendBlob, CG_OffsetThirdPersonView, CG_TestModel_f, CG_AddScorePlum, CG_AddFallScaleFade, CG_AddScaleFade, CG_AddMoveScaleFade, CG_DrawCrosshair3D, CG_Viewpos_f
int		bss_dcd18; // Used by: CG_AddViewWeapon, CG_DamageBlendBlob, CG_OffsetFirstPersonView, CG_AddTestModel, CG_TestModel_f, CG_DamageFeedback, CG_AddParticles, CG_ScanForCrosshairEntity, CG_DrawCrosshair3D
int		bss_dcd1c; // Used by: CG_AddViewWeapon, CG_DamageBlendBlob, CG_OffsetFirstPersonView, CG_TestModel_f, CG_DamageFeedback, CG_ScanForCrosshairEntity, CG_DrawCrosshair3D
int		bss_dcd20; // Used by: CG_AddViewWeapon, CG_DamageBlendBlob, CG_OffsetFirstPersonView, CG_TestModel_f, CG_DamageFeedback, CG_ScanForCrosshairEntity, CG_DrawCrosshair3D
int		bss_dcd24; // Used by: CG_Tracer, CG_AddViewWeapon, CG_DamageBlendBlob, CG_OffsetFirstPersonView, CG_AddTestModel, CG_DamageFeedback, CG_AddParticles, CG_EntityEvent
int		bss_dcd28; // Used by: CG_Tracer, CG_AddViewWeapon, CG_DamageBlendBlob, CG_OffsetFirstPersonView, CG_DamageFeedback, CG_EntityEvent
int		bss_dcd2c; // Used by: CG_Tracer, CG_AddViewWeapon, CG_DamageBlendBlob, CG_OffsetFirstPersonView, CG_DamageFeedback, CG_EntityEvent
int		bss_dcd30; // Used by: CG_Tracer, CG_AddViewWeapon, CG_DamageBlendBlob, CG_AddTestModel, CG_DamageFeedback, CG_AddParticles
int		bss_dcd34; // Used by: CG_Tracer, CG_AddViewWeapon, CG_DamageBlendBlob, CG_DamageFeedback
int		bss_dcd38; // Used by: CG_Tracer, CG_AddViewWeapon, CG_DamageBlendBlob, CG_DamageFeedback
char	bss_dcd3c[296]; // Used by: CG_DrawActiveFrame
int		bss_dce64; // Used by: CG_CalculateWeaponPosition, CG_CalcViewValues, CG_OffsetThirdPersonView
int		bss_dce68; // Used by: CG_OffsetThirdPersonView, CG_TestModel_f, CG_Viewpos_f
int		bss_dce6c;
int		bss_dce70; // Used by: CG_CalcFov, CG_ZoomUp_f, CG_ZoomDown_f
int		bss_dce74; // Used by: CG_CalcFov, CG_ZoomUp_f, CG_ZoomDown_f
int		bss_dce78; // Used by: CG_DrawActiveFrame, CG_CalcFov
char	bss_dce7c[1024]; // Used by: CG_DrawActiveFrame, CG_DrawInformation, CG_Init
int		bss_dd27c; // Used by: CG_DrawTourneyScoreboard, CG_ScoresDown_f
int		bss_dd280; // Used by: CG_ParseScores, CG_DrawOldScoreboard, CG_TeamScoreboard, CG_ScoresDown_f
int		bss_dd284;
int		bss_dd288; // Used by: CG_ParseScores, CG_DrawTourneyScoreboard, CG_DrawOldScoreboard
int		bss_dd28c; // Used by: CG_ParseScores, CG_DrawTourneyScoreboard, CG_DrawOldScoreboard
char	bss_dd290[3840];
int		bss_de190; // Used by: CG_DrawOldScoreboard, CG_Draw2D, CG_ScoresUp_f, CG_ScoresDown_f
int		bss_de194; // Used by: CG_Draw2D, CG_DrawIntermission
int		bss_de198; // Used by: CG_DrawOldScoreboard, CG_DrawIntermission, CG_ScoresUp_f
char	bss_de19c[32]; // Used by: CG_DrawOldScoreboard
char	bss_de1bc[1024]; // Used by: CG_BuildSpectatorString
int		bss_de5bc; // Used by: CG_BuildSpectatorString
int		bss_de5c0; // Used by: CG_BuildSpectatorString
char	bss_de5c4[20];
int		bss_de5d8; // Used by: CG_DrawCenterString, CG_CenterPrint
int		bss_de5dc; // Used by: CG_DrawCenterString, CG_CenterPrint
int		bss_de5e0; // Used by: CG_DrawCenterString, CG_CenterPrint
char	bss_de5e4[1024];
int		bss_de9e4; // Used by: CG_DrawCenterString, CG_CenterPrint
int		bss_de9e8; // Used by: CG_CheckAmmo, CG_DrawAmmoWarning
int		bss_de9ec; // Used by: CG_DrawCrosshairNames, CG_ScanForCrosshairEntity, CG_CrosshairPlayer
int		bss_de9f0; // Used by: CG_DrawCrosshairNames, CG_ScanForCrosshairEntity, CG_CrosshairPlayer
int		bss_de9f4; // Used by: CG_EntityEvent, CG_DrawPowerups
int		bss_de9f8; // Used by: CG_EntityEvent, CG_DrawPowerups
int		bss_de9fc; // Used by: CG_DamageFeedback, CG_DrawAttacker, CG_LastAttacker
int		bss_dea00;
int		bss_dea04; // Used by: CG_MapRestart, pushReward, CG_DrawReward
int		bss_dea08; // Used by: CG_MapRestart, CG_DrawReward
int		bss_dea0c; // Used by: CG_DrawReward
char	bss_dea10[36];
int		bss_dea34; // Used by: CG_DrawReward
char	bss_dea38[36];
int		bss_dea5c; // Used by: CG_DrawReward
char	bss_dea60[36];
int		bss_dea84; // Used by: CG_PlayBufferedSounds, CG_AddBufferedSound
int		bss_dea88; // Used by: CG_PlayBufferedSounds, CG_AddBufferedSound
int		bss_dea8c; // Used by: CG_PlayBufferedSounds
char	bss_dea90[80];
int		bss_deae0; // Used by: CG_MapRestart, CG_SetConfigValues, CG_ParseWarmup, CG_DrawOldScoreboard, CG_CheckLocalSounds, CG_DrawWarmup
int		bss_deae4; // Used by: CG_ParseWarmup, CG_DrawWarmup
int		bss_deae8; // Used by: CG_ItemPickup, CG_DrawPickupItem
int		bss_deaec; // Used by: CG_DrawWeaponSelect, CG_ItemPickup, CG_DrawPickupItem
int		bss_deaf0; // Used by: CG_ItemPickup, CG_DrawCrosshair3D, CG_DrawCrosshair
int		bss_deaf4; // Used by: CG_OutOfAmmoChange, CG_Weapon_f, CG_PrevWeapon_f, CG_NextWeapon_f, CG_DrawWeaponSelect, CG_Respawn, CG_ItemPickup
char	bss_deaf8[8];
int		bss_deb00; // Used by: CG_DamageBlendBlob, CG_OffsetFirstPersonView, CG_DamageFeedback, CG_DrawStatusBarHead
int		bss_deb04; // Used by: CG_DamageBlendBlob, CG_DamageFeedback, CG_DrawStatusBarHead
int		bss_deb08; // Used by: CG_DamageBlendBlob, CG_DamageFeedback
int		bss_deb0c; // Used by: CG_DamageBlendBlob, CG_DamageFeedback
int		bss_deb10;
int		bss_deb14; // Used by: CG_DrawStatusBarHead
int		bss_deb18; // Used by: CG_DrawStatusBarHead
int		bss_deb1c; // Used by: CG_DrawStatusBarHead
int		bss_deb20; // Used by: CG_DrawStatusBarHead
int		bss_deb24; // Used by: CG_DrawStatusBarHead
int		bss_deb28; // Used by: CG_DrawStatusBarHead
int		bss_deb2c; // Used by: CG_DamageFeedback
int		bss_deb30; // Used by: CG_OffsetFirstPersonView, CG_DamageFeedback
int		bss_deb34; // Used by: CG_OffsetFirstPersonView, CG_DamageFeedback
int		bss_deb38; // Used by: CG_CalculateWeaponPosition, CG_CalcViewValues, CG_OffsetFirstPersonView
int		bss_deb3c; // Used by: CG_CalculateWeaponPosition, CG_CalcViewValues, CG_OffsetFirstPersonView
int		bss_deb40; // Used by: CG_CalculateWeaponPosition, CG_CalcViewValues, CG_OffsetFirstPersonView
int		bss_deb44; // Used by: CG_CalcViewValues
int		bss_deb48;
int		bss_deb4c; // Used by: CG_TestGun_f
int		bss_deb50; // Used by: CG_DrawActiveFrame, CG_AddTestModel, CG_TestGun_f, CG_TestModel_f
char	bss_deb54[16];
char	bss_deb64[12]; // Used by: CG_AddTestModel
char	bss_deb70[12]; // Used by: CG_AddTestModel
char	bss_deb7c[12]; // Used by: CG_AddTestModel
int		bss_deb88;
int		bss_deb8c; // Used by: CG_AddTestModel, CG_TestModel_f
int		bss_deb90; // Used by: CG_TestModel_f
int		bss_deb94; // Used by: CG_TestModel_f
int		bss_deb98; // Used by: CG_TestModelPrevFrame_f, CG_TestModelNextFrame_f, CG_TestModel_f
char	bss_deb9c[12];
int		bss_deba8; // Used by: CG_TestModel_f
int		bss_debac; // Used by: CG_TestModel_f
int		bss_debb0; // Used by: CG_TestModelPrevSkin_f, CG_TestModelNextSkin_f
char	bss_debb4[96];
int		bss_dec14; // Used by: CG_AddViewWeapon, CG_AddTestModel, CG_TestGun_f, CG_TestModel_f
char	cgs[31388];
int		bss_e66b4; // Used by: CG_ShotgunFire, CG_DamageBlendBlob, CG_AddParticleToScene, CG_SmokePuff
char	bss_e66b8[12];
int		bss_e66c4; // Used by: CG_CalcVrect, CG_DrawInformation, CG_TileClear, CG_DrawCrosshair3D, CG_Init
int		bss_e66c8; // Used by: CG_CalcVrect, CG_DrawInformation, CG_TileClear, CG_Init
char	bss_e66cc[20];
int		bss_e66e0; // Used by: UI_DrawProportionalString2, UI_DrawBannerString2, CG_DrawSides, CG_AdjustFrom640, CG_Init
int		bss_e66e4; // Used by: UI_DrawProportionalString2, UI_DrawBannerString2, CG_DrawTopBottom, CG_AdjustFrom640, CG_Init
int		bss_e66e8; // Used by: UI_DrawProportionalString2, UI_DrawBannerString2
int		bss_e66ec; // Used by: CG_ExecuteNewServerCommands, CG_DrawSnapshot, CG_Init
int		bss_e66f0; // Used by: CG_ReadNextSnapshot, CG_Init
int		bss_e66f4; // Used by: CG_DrawLagometer, CG_RegisterCvars
int		bss_e66f8; // Used by: CG_ServerCommand, CG_ConfigStringModified, CG_SetConfigValues, CG_ParseServerinfo, CG_DrawTourneyScoreboard, CG_DrawOldScoreboard, CG_DrawClientScore, CG_TouchItem, CG_CheckLocalSounds, CG_PlayerSprites, CG_NewClientInfo, CG_SetDeferredClientInfo, CG_ScanForExistingClientInfo, CG_LoadClientInfo, CG_FindClientHeadFile, CG_FindClientModelFile, CG_DrawInformation, CG_LoadingClient, CG_Obituary, CG_TeamBase, CG_Draw2D, CG_DrawWarmup, CG_DrawIntermission, CG_DrawSpectator, CG_DrawLowerLeft, CG_DrawLowerRight, CG_DrawScores, CG_DrawUpperRight, CG_RegisterGraphics, CG_RegisterSounds
int		bss_e66fc; // Used by: CG_CalcFov, CG_ParseServerinfo, CG_PredictPlayerState
int		bss_e6700; // Used by: CG_ParseServerinfo
int		bss_e6704; // Used by: CG_ParseServerinfo, CG_CheckLocalSounds, CG_DrawScores
int		bss_e6708; // Used by: CG_ParseServerinfo, CG_DrawScores
int		bss_e670c; // Used by: CG_ParseServerinfo, CG_CheckLocalSounds
int		bss_e6710; // Used by: CG_ParseServerinfo, CG_DrawClientScore, CG_LoadDeferredPlayers, CG_SetDeferredClientInfo, CG_ScanForExistingClientInfo, CG_DrawWarmup
char	bss_e6714[192];
int		bss_e67d4; // Used by: CG_MapRestart, CG_ConfigStringModified, CG_DrawVote
int		bss_e67d8; // Used by: CG_ConfigStringModified, CG_DrawVote
int		bss_e67dc; // Used by: CG_ConfigStringModified, CG_DrawVote
int		bss_e67e0; // Used by: CG_ConfigStringModified, CG_DrawVote
char	bss_e67e4[3104];
int		bss_e7404; // Used by: CG_ConfigStringModified, CG_SetConfigValues, CG_CheckLocalSounds, CG_DrawTimer, CG_Init
int		bss_e7408; // Used by: CG_ConfigStringModified, CG_SetConfigValues, CG_CheckLocalSounds, CG_DrawScores
int		bss_e740c; // Used by: CG_ConfigStringModified, CG_SetConfigValues, CG_CheckLocalSounds, CG_DrawScores
int		bss_e7410; // Used by: CG_ConfigStringModified, CG_SetConfigValues, CG_DrawScores, CG_Init
int		bss_e7414; // Used by: CG_ConfigStringModified, CG_SetConfigValues, CG_DrawScores, CG_Init
int		bss_e7418; // Used by: CG_Init
char	bss_e741c[2052];
int		bss_e7c20; // Used by: CG_RegisterGraphics
char	bss_e7c24[115880];
int		bss_1040cc; // Used by: CG_AddToTeamChat, CG_DrawTeamInfo
int		bss_1040d0; // Used by: CG_AddToTeamChat, CG_DrawTeamInfo
char	bss_1040d4[88];
int		bss_10412c; // Used by: CG_DrawChar, CG_Init
int		bss_104130; // Used by: UI_DrawProportionalString, CG_Init
int		bss_104134; // Used by: UI_DrawProportionalString, CG_Init
int		bss_104138; // Used by: UI_DrawBannerString2, CG_Init
int		bss_10413c; // Used by: CG_DrawTopBottom, CG_DrawSides, CG_FillRect, CG_DrawLagometer, CG_Init
int		bss_104140; // Used by: CG_PlayerPowerups, CG_DrawFlagModel, CG_RegisterGraphics
int		bss_104144; // Used by: CG_PlayerPowerups, CG_DrawFlagModel, CG_RegisterGraphics
int		bss_104148; // Used by: CG_PlayerPowerups, CG_DrawFlagModel
int		bss_10414c; // Used by: CG_RegisterGraphics
int		bss_104150; // Used by: CG_RegisterGraphics
int		bss_104154; // Used by: CG_RegisterGraphics
int		bss_104158; // Used by: CG_RegisterGraphics
int		bss_10415c; // Used by: CG_RegisterGraphics
int		bss_104160; // Used by: CG_RegisterGraphics
char	bss_104164[16];
int		bss_104174; // Used by: CG_PlayerFlag
int		bss_104178; // Used by: CG_PlayerFlag
int		bss_10417c; // Used by: CG_PlayerPowerups
int		bss_104180; // Used by: CG_PlayerPowerups
int		bss_104184; // Used by: CG_PlayerPowerups
int		bss_104188; // Used by: CG_TeamBase
int		bss_10418c; // Used by: CG_TeamBase
int		bss_104190; // Used by: CG_TeamBase
int		bss_104194; // Used by: CG_DrawStatusBar, CG_RegisterGraphics
int		bss_104198; // Used by: CG_DrawStatusBar, CG_RegisterGraphics
int		bss_10419c; // Used by: CG_DrawTeamInfo, CG_DrawTeamOverlay, CG_DrawTeamBackground, CG_RegisterGraphics
int		bss_1041a0; // Used by: CG_DrawTeamOverlay, CG_DrawHead, CG_RegisterGraphics
int		bss_1041a4; // Used by: CG_GibPlayer, CG_RegisterGraphics
int		bss_1041a8; // Used by: CG_GibPlayer, CG_RegisterGraphics
int		bss_1041ac; // Used by: CG_GibPlayer, CG_RegisterGraphics
int		bss_1041b0; // Used by: CG_GibPlayer, CG_RegisterGraphics
int		bss_1041b4; // Used by: CG_GibPlayer, CG_RegisterGraphics
int		bss_1041b8; // Used by: CG_GibPlayer, CG_RegisterGraphics
int		bss_1041bc; // Used by: CG_GibPlayer, CG_RegisterGraphics
int		bss_1041c0; // Used by: CG_GibPlayer, CG_RegisterGraphics
int		bss_1041c4; // Used by: CG_GibPlayer, CG_RegisterGraphics
int		bss_1041c8; // Used by: CG_GibPlayer, CG_RegisterGraphics
int		bss_1041cc; // Used by: CG_BigExplode, CG_RegisterGraphics
int		bss_1041d0; // Used by: CG_MachineGunEjectBrass, CG_RegisterGraphics
int		bss_1041d4; // Used by: CG_ShotgunEjectBrass, CG_RegisterGraphics
int		bss_1041d8; // Used by: CG_RegisterWeapon, CG_PlasmaTrail, CG_RailTrail
int		bss_1041dc; // Used by: CG_RegisterWeapon, CG_RailTrail
int		bss_1041e0; // Used by: CG_LightningBolt, CG_RegisterWeapon, CG_GrappleTrail
int		bss_1041e4; // Used by: CG_PlayerSprites, CG_RegisterGraphics
int		bss_1041e8; // Used by: CG_PlayerSprites, CG_RegisterGraphics
int		bss_1041ec; // Used by: CG_PlayerSprites, CG_RegisterGraphics
int		bss_1041f0; // Used by: CG_DrawWeaponSelect, CG_DrawScores, CG_RegisterGraphics
int		bss_1041f4; // Used by: CG_DamageBlendBlob, CG_RegisterGraphics
int		bss_1041f8; // Used by: CG_Tracer, CG_ParticleSparks, CG_ParticleBulletDebris, CG_RegisterGraphics
char	bss_1041fc[40];
int		bss_104224; // Used by: CG_DrawLagometer, CG_RegisterGraphics
int		bss_104228; // Used by: CG_TileClear, CG_RegisterGraphics
int		bss_10422c; // Used by: CG_DrawWeaponSelect, CG_RegisterGraphics
int		bss_104230; // Used by: CG_RocketTrail, CG_ParticleDust, CG_ParticleBloodCloud, CG_EntityEvent, CG_RegisterGraphics
int		bss_104234; // Used by: CG_SmokePuff, CG_RegisterGraphics
int		bss_104238; // Used by: CG_ShotgunFire, CG_RegisterGraphics
int		bss_10423c; // Used by: CG_Missile, CG_RegisterGraphics
int		bss_104240; // Used by: CG_NewParticleArea, CG_BubbleTrail, CG_RegisterGraphics
int		bss_104244; // Used by: CG_BloodTrail, CG_RegisterGraphics
char	bss_104248[44];
int		bss_104274; // Used by: CG_PlayerShadow, CG_RegisterGraphics
int		bss_104278; // Used by: CG_RegisterGraphics
int		bss_10427c; // Used by: CG_RegisterGraphics
int		bss_104280; // Used by: CG_RegisterGraphics
int		bss_104284; // Used by: CG_RegisterGraphics
int		bss_104288; // Used by: CG_RegisterGraphics
int		bss_10428c; // Used by: CG_PlayerSplash, CG_RegisterGraphics
int		bss_104290; // Used by: CG_FragmentBounceMark, CG_RegisterGraphics
int		bss_104294; // Used by: CG_MissileHitWall, CG_RegisterGraphics
int		bss_104298; // Used by: CG_MissileHitWall, CG_FragmentBounceMark, CG_RegisterGraphics
int		bss_10429c; // Used by: CG_MissileHitWall, CG_RegisterGraphics
int		bss_1042a0; // Used by: CG_MissileHitWall, CG_AddMarks, CG_RegisterGraphics
int		bss_1042a4; // Used by: CG_AddRefEntityWithPowerups, CG_RegisterGraphics
int		bss_1042a8; // Used by: CG_AddRefEntityWithPowerups, CG_RegisterGraphics
int		bss_1042ac; // Used by: CG_AddWeaponWithPowerups, CG_RegisterGraphics
int		bss_1042b0; // Used by: CG_AddWeaponWithPowerups, CG_AddRefEntityWithPowerups, CG_RegisterGraphics
int		bss_1042b4; // Used by: CG_AddRefEntityWithPowerups, CG_RegisterGraphics
int		bss_1042b8; // Used by: CG_AddRefEntityWithPowerups, CG_RegisterGraphics
int		bss_1042bc; // Used by: CG_AddWeaponWithPowerups, CG_RegisterGraphics
int		bss_1042c0; // Used by: CG_HasteTrail, CG_RegisterGraphics
int		bss_1042c4; // Used by: CG_MissileHitWall, CG_RegisterGraphics
int		bss_1042c8; // Used by: CG_MissileHitWall, CG_RegisterGraphics
int		bss_1042cc; // Used by: CG_MissileHitWall, CG_RegisterGraphics
int		bss_1042d0; // Used by: CG_LightningBolt, CG_RegisterWeapon
int		bss_1042d4; // Used by: CG_MissileHitWall, CG_RegisterWeapon
int		bss_1042d8; // Used by: CG_MissileHitWall, CG_RegisterWeapon
int		bss_1042dc; // Used by: CG_MissileHitWall, CG_RegisterWeapon
int		bss_1042e0; // Used by: CG_MissileHitWall, CG_RegisterWeapon
int		bss_1042e4; // Used by: CG_MissileHitWall, CG_RegisterWeapon
int		bss_1042e8; // Used by: CG_MissileHitWall, CG_RegisterWeapon
int		bss_1042ec; // Used by: CG_Bleed, CG_RegisterGraphics
int		bss_1042f0; // Used by: CG_SpawnEffect, CG_RegisterGraphics
int		bss_1042f4; // Used by: CG_SpawnEffect, CG_RegisterGraphics
int		bss_1042f8; // Used by: CG_DrawOldScoreboard, CG_RegisterGraphics
int		bss_1042fc; // Used by: CG_DrawOldScoreboard, CG_RegisterGraphics
int		bss_104300; // Used by: CG_DrawOldScoreboard, CG_RegisterGraphics
int		bss_104304; // Used by: CG_DrawOldScoreboard, CG_RegisterGraphics
int		bss_104308; // Used by: CG_CheckLocalSounds, CG_PlayerSprites, CG_RegisterGraphics
int		bss_10430c; // Used by: CG_CheckLocalSounds, CG_PlayerSprites, CG_RegisterGraphics
int		bss_104310; // Used by: CG_CheckLocalSounds, CG_PlayerSprites, CG_RegisterGraphics
int		bss_104314; // Used by: CG_CheckLocalSounds, CG_PlayerSprites, CG_RegisterGraphics
int		bss_104318; // Used by: CG_CheckLocalSounds, CG_PlayerSprites, CG_RegisterGraphics
int		bss_10431c; // Used by: CG_CheckLocalSounds, CG_PlayerSprites, CG_RegisterGraphics
int		bss_104320; // Used by: CG_FireWeapon, CG_EntityEvent, CG_RegisterSounds
int		bss_104324; // Used by: CG_Tracer, CG_RegisterSounds
int		bss_104328; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_10432c; // Used by: CG_UseItem, CG_RegisterSounds
int		bss_104330; // Used by: CG_PowerupTimerSounds, CG_RegisterSounds
char	bss_104334[112];
int		bss_1043a4; // Used by: CG_MissileHitWall, CG_RegisterWeapon
int		bss_1043a8; // Used by: CG_MissileHitWall, CG_RegisterWeapon
int		bss_1043ac; // Used by: CG_MissileHitWall, CG_RegisterWeapon
int		bss_1043b0; // Used by: CG_MissileHitWall, CG_RegisterSounds
int		bss_1043b4; // Used by: CG_MissileHitWall, CG_RegisterSounds
int		bss_1043b8; // Used by: CG_MissileHitWall, CG_RegisterSounds
int		bss_1043bc; // Used by: CG_MissileHitWall, CG_RegisterSounds
int		bss_1043c0; // Used by: CG_MissileHitWall, CG_RegisterSounds
int		bss_1043c4; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1043c8; // Used by: CG_FragmentBounceSound, CG_RegisterSounds
int		bss_1043cc; // Used by: CG_FragmentBounceSound, CG_RegisterSounds
int		bss_1043d0; // Used by: CG_FragmentBounceSound, CG_RegisterSounds
int		bss_1043d4; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1043d8; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1043dc; // Used by: CG_CheckAmmo, CG_RegisterSounds
int		bss_1043e0; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1043e4; // Used by: CG_ServerCommand, CG_DrawTeamVote, CG_DrawVote, CG_RegisterSounds
int		bss_1043e8; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1043ec;
int		bss_1043f0; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1043f4; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_1043f8; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_1043fc; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_104400; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_104404; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_104408; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_10440c; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
char	bss_104410[8];
int		bss_104418; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_10441c; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_104420; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_104424; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_104428; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_10442c; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_104430; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
char	bss_104434[12];
int		bss_104440; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_104444; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_104448; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
char	bss_10444c[12];
int		bss_104458; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_10445c; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_104460; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_104464; // Used by: CG_PlayerPowerups, CG_RegisterSounds
int		bss_104468; // Used by: CG_UseItem, CG_RegisterSounds
int		bss_10446c; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_104470; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_104474; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_104478; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_10447c; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_104480; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_104484; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_104488; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_10448c; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_104490; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_104494; // Used by: CG_RegisterSounds
int		bss_104498; // Used by: CG_RegisterSounds
int		bss_10449c; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1044a0; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1044a4; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1044a8; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1044ac; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_1044b0; // Used by: CG_CheckLocalSounds, CG_RegisterSounds
int		bss_1044b4; // Used by: CG_DrawWarmup, CG_RegisterSounds
int		bss_1044b8; // Used by: CG_DrawWarmup, CG_RegisterSounds
int		bss_1044bc; // Used by: CG_DrawWarmup, CG_RegisterSounds
int		bss_1044c0; // Used by: CG_MapRestart, CG_RegisterSounds
int		bss_1044c4; // Used by: CG_ParseWarmup, CG_RegisterSounds
int		bss_1044c8; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1044cc; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1044d0; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1044d4; // Used by: CG_EntityEvent, CG_RegisterSounds
int		bss_1044d8; // Used by: CG_EntityEvent, CG_RegisterSounds
char	bss_1044dc[16];
int		pml; // Used by: PM_WalkMove, PM_GrappleMove, PM_CheckWaterJump
int		bss_1044f0; // Used by: PM_WalkMove, PM_GrappleMove, PM_CheckWaterJump
int		bss_1044f4; // Used by: PM_WalkMove, PM_GrappleMove, PM_AirMove, PM_CheckWaterJump
char	bss_1044f8[8];
int		bss_104500; // Used by: PM_WalkMove, PM_AirMove
char	bss_104504[12];
int		bss_104510; // Used by: PM_SlideMove, PmoveSingle, PM_NoclipMove, PM_WalkMove, PM_WaterJumpMove, PM_Accelerate, PM_Friction
int		bss_104514; // Used by: PmoveSingle, PM_DropTimers, PM_Weapon, PM_Footsteps
int		bss_104518; // Used by: PmoveSingle, PM_GroundTrace, PM_GroundTraceMissed, PM_CorrectAllSolid, PM_DeadMove, PM_CheckJump, PM_Friction
int		bss_10451c; // Used by: PM_SlideMove, PM_GroundTrace, PM_GroundTraceMissed, PM_CorrectAllSolid, PM_GrappleMove, PM_AirMove, PM_WaterMove, PM_CheckJump
char	bss_104520[24]; // Used by: PM_GroundTrace, PM_CorrectAllSolid
int		bss_104538; // Used by: PM_SlideMove, PM_WalkMove, PM_WaterMove
int		bss_10453c; // Used by: PM_WalkMove, PM_WaterMove
int		bss_104540; // Used by: PM_WalkMove, PM_WaterMove
char	bss_104544[8];
int		bss_10454c; // Used by: PM_CrashLand, PM_FootstepForSurface, PM_WalkMove, PM_Friction
char	bss_104550[8];
int		bss_104558; // Used by: PM_SlideMove
char	bss_10455c[8]; // Used by: PmoveSingle
int		bss_104564; // Used by: PM_CrashLand
char	bss_104568[8]; // Used by: PmoveSingle
int		bss_104570; // Used by: PM_GroundTrace, PM_CrashLand
int		bss_104574; // Used by: PmoveSingle, PM_WaterEvents
int		pm; // Used by: PM_StepSlideMove, PM_SlideMove, PmoveSingle, PM_DropTimers, PM_Animate, PM_Weapon, PM_TorsoAnimation, PM_FinishWeaponChange, PM_BeginWeaponChange, PM_WaterEvents, PM_Footsteps, PM_CheckDuck, PM_SetWaterLevel, PM_GroundTrace, PM_GroundTraceMissed, PM_CorrectAllSolid, PM_CrashLand, PM_NoclipMove, PM_DeadMove, PM_WalkMove, PM_GrappleMove, PM_AirMove, PM_FlyMove, PM_WaterMove, PM_WaterJumpMove, PM_CheckWaterJump, PM_CheckJump, PM_SetMovementDir, PM_CmdScale, PM_Accelerate, PM_Friction, PM_ForceLegsAnim, PM_ContinueTorsoAnim, PM_ContinueLegsAnim, PM_StartLegsAnim, PM_StartTorsoAnim, PM_AddTouchEnt, PM_AddEvent
char	bss_10457c[16];
int		bss_10458c; // Used by: CG_DrawFPS
int		bss_104590;
char	lagometer[512];
int		bss_104794; // Used by: CG_DrawLagometer, CG_AddLagometerFrameInfo
char	bss_104798[1024];
int		bss_104b98; // Used by: CG_DrawLagometer, CG_AddLagometerSnapshotInfo
char	teamChat2[256];
char	teamChat1[256];
char	systemChat[256];
int		numSortedTeamPlayers; // Used by: CG_ParseTeamInfo, CG_DrawTeamOverlay
char	sortedTeamPlayers[128];
int		bss_104f20; // Used by: CG_FadeColor
int		bss_104f24; // Used by: CG_FadeColor
int		bss_104f28; // Used by: CG_FadeColor
int		bss_104f2c; // Used by: CG_FadeColor
char	bss_104f30[8]; // Used by: CG_ScorePlum
int		bss_104f38; // Used by: CG_ScorePlum
char	bss_104f3c[64];
char	loadingItemIcons[104];
char	loadingPlayerIcons[64];
int		loadingItemIconCount; // Used by: CG_LoadingItem, CG_DrawLoadingIcons
int		loadingPlayerIconCount; // Used by: CG_LoadingClient, CG_DrawLoadingIcons
int		cg_freeLocalEntities; // Used by: CG_AllocLocalEntity, CG_FreeLocalEntity, CG_InitLocalEntities
int		cg_activeLocalEntities; // Used by: CG_AddLocalEntities, CG_AllocLocalEntity
int		bss_105034; // Used by: CG_AllocLocalEntity, CG_InitLocalEntities
char	bss_105038[284];
char	cg_localEntities[149504];
int		markTotal;
int		cg_freeMarkPolys; // Used by: CG_AllocMark, CG_FreeMarkPoly, CG_InitMarkPolys
int		cg_activeMarkPolys; // Used by: CG_AllocMark
int		bss_129960; // Used by: CG_AddMarks, CG_AllocMark, CG_InitMarkPolys
char	bss_129964[280];
char	cg_markPolys[73728];
int		oldtime; // Used by: CG_AddParticles, CG_ClearParticles
char	rup[12]; // Used by: CG_AddParticleToScene
char	rright[12]; // Used by: CG_AddParticleToScene
char	rforward[12];
int		vup; // Used by: CG_AddParticles, CG_AddParticleToScene
int		bss_13baa8; // Used by: CG_AddParticleToScene
int		bss_13baac; // Used by: CG_AddParticleToScene
int		vright; // Used by: CG_AddParticles, CG_AddParticleToScene
int		bss_13bab4; // Used by: CG_AddParticleToScene
int		bss_13bab8; // Used by: CG_AddParticleToScene
char	vforward[12]; // Used by: CG_AddParticles
char	particles[126976];
int		free_particles; // Used by: CG_ParticleMisc, CG_ParticleDust, CG_ParticleSparks, CG_ParticleBloodCloud, CG_BloodPool, CG_Particle_OilSlick, CG_Particle_OilParticle, CG_Particle_Bleed, CG_ParticleImpactSmokePuff, CG_ParticleExplosion, CG_ParticleBulletDebris, CG_ParticleSmoke, CG_ParticleBubble, CG_ParticleSnow, CG_ParticleSnowFlurry, CG_AddParticles, CG_ClearParticles
int		active_particles; // Used by: CG_ParticleMisc, CG_ParticleDust, CG_ParticleSparks, CG_ParticleBloodCloud, CG_BloodPool, CG_OilSlickRemove, CG_Particle_OilSlick, CG_Particle_OilParticle, CG_Particle_Bleed, CG_ParticleImpactSmokePuff, CG_SnowLink, CG_ParticleExplosion, CG_ParticleBulletDebris, CG_ParticleSmoke, CG_ParticleBubble, CG_ParticleSnow, CG_ParticleSnowFlurry, CG_AddParticles, CG_ClearParticles
int		numShaderAnims; // Used by: CG_ClearParticles
char	shaderAnims[8192];
char	cg_triggerEntities[1024];
int		cg_numTriggerEntities; // Used by: CG_TouchTriggerPrediction, CG_BuildSolidList
char	cg_solidEntities[1024];
int		cg_numSolidEntities; // Used by: CG_PointContents, CG_ClipMoveToEntities, CG_BuildSolidList
int		cg_pmove; // Used by: CG_PredictPlayerState
int		bss_15d2e0; // Used by: CG_PredictPlayerState
char	bss_15d2e4[20];
int		bss_15d2f8; // Used by: CG_PredictPlayerState
int		bss_15d2fc;
int		bss_15d300; // Used by: CG_PredictPlayerState
int		bss_15d304; // Used by: CG_PredictPlayerState
char	bss_15d308[172];
int		bss_15d3b4; // Used by: CG_PredictPlayerState
int		bss_15d3b8; // Used by: CG_PredictPlayerState
int		bss_15d3bc; // Used by: CG_PredictPlayerState
int		bss_15d3c0; // Used by: CG_PredictPlayerState
int		localClient; // Used by: CG_DrawOldScoreboard, CG_DrawClientScore
int		bss_15d3c8; // Used by: AngleVectors
int		bss_15d3cc; // Used by: AngleVectors
int		bss_15d3d0; // Used by: AngleVectors
int		bss_15d3d4; // Used by: AngleVectors
int		bss_15d3d8; // Used by: AngleVectors
int		bss_15d3dc; // Used by: AngleVectors
char	bss_15d3e0[88576];
int		com_tokenline; // Used by: COM_ParseExt, COM_GetCurrentParseLine, COM_BeginParseSession
int		com_lines; // Used by: COM_ParseExt, COM_GetCurrentParseLine, COM_BeginParseSession
char	com_parsename[1024];
char	com_token[56740]; // Used by: COM_ParseExt
char	bss_180f8c[9820];

/*
=================
vmMain

Address: 0x0
Stack Size: 0x24
Calls: CG_Error, CG_EventHandling, CG_MouseEvent, CG_KeyEvent, CG_LastAttacker, CG_CrosshairPlayer, CG_DrawActiveFrame, CG_ConsoleCommand, CG_Shutdown, CG_Init
=================
*/
int vmMain(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;

	local_14 = arg_0;
	if (local_14 < 0x0) goto jmp_7b;
	if (local_14 > 0x8) goto jmp_7b;
	goto *(int *)((local_14 << 0x2) + 0x8);
	CG_Init(arg_1, arg_2, arg_3);
	return 0x0;
	CG_Shutdown();
	return 0x0;
	local_18 = CG_ConsoleCommand();
	return local_18;
	CG_DrawActiveFrame(arg_1, arg_2, arg_3);
	return 0x0;
	local_1c = CG_CrosshairPlayer();
	return local_1c;
	local_20 = CG_LastAttacker();
	return local_20;
	CG_KeyEvent(arg_1, arg_2);
	return 0x0;
	CG_MouseEvent(arg_1, arg_2);
	return 0x0;
	CG_EventHandling(arg_1);
	return 0x0;
jmp_7b:
	CG_Error(0x3c04, arg_0);
	return 0xffffffff;
}

/*
=================
CG_RegisterCvars

Address: 0x87
Stack Size: 0x424
Calls: trap_Cvar_VariableStringBuffer, trap_Cvar_Register, atoi
Called by: CG_Init
=================
*/
void CG_RegisterCvars(void) {
	int		local_18;
	int		local_1c;
	char	local_20[1024];
	int		local_420;

	local_1c = 0x0;
	local_18 = 0x2c;
	goto jmp_b5;
jmp_90:
	trap_Cvar_Register(*(int *)local_18, *(int *)(local_18 + 0x4), *(int *)(local_18 + 0x8), *(int *)(local_18 + 0xc));
	local_1c = (local_1c + 0x1);
	local_18 = (local_18 + 0x10);
jmp_b5:
	if (local_1c < cvarTableSize) goto jmp_90;
	trap_Cvar_VariableStringBuffer(0x3721, local_20, 0x400);
	local_420 = atoi(local_20);
	bss_e66f4 = local_420;
	forceModelModificationCount = bss_90f0;
	trap_Cvar_Register(0x0, 0x371b, 0x3715, 0x3);
	trap_Cvar_Register(0x0, 0x370b, 0x3715, 0x3);
	trap_Cvar_Register(0x0, 0x3700, 0x3715, 0x3);
	trap_Cvar_Register(0x0, 0x36f1, 0x3715, 0x3);
}

/*
=================
CG_ForceModelChange

Address: 0xff
Stack Size: 0x18
Calls: CG_NewClientInfo, CG_ConfigString
Called by: CG_UpdateCvars
=================
*/
void CG_ForceModelChange(void) {
	int		local_c;
	int		local_10;
	int		local_14;

	local_c = 0x0;
jmp_103:
	local_14 = CG_ConfigString((local_c + 0x220));
	local_10 = local_14;
	if ((char)*(char *)local_10 != 0x0) goto jmp_118;
	goto jmp_11e;
jmp_118:
	CG_NewClientInfo(local_c);
jmp_11e:
	local_c = (local_c + 0x1);
	if (local_c < 0x40) goto jmp_103;
}

/*
=================
CG_UpdateCvars

Address: 0x12a
Stack Size: 0x18
Calls: trap_Cvar_Set, trap_Cvar_Update, CG_ForceModelChange
Called by: CG_DrawActiveFrame
=================
*/
void CG_UpdateCvars(void) {
	int		local_10;
	int		local_14;

	local_10 = 0x0;
	local_14 = 0x2c;
	goto jmp_146;
jmp_133:
	trap_Cvar_Update(*(int *)local_14);
	local_10 = (local_10 + 0x1);
	local_14 = (local_14 + 0x10);
jmp_146:
	if (local_10 < cvarTableSize) goto jmp_133;
	if (drawTeamOverlayModificationCount == bss_bea0) goto jmp_168;
	drawTeamOverlayModificationCount = bss_bea0;
	if (bss_bea8 <= 0x0) goto jmp_161;
	trap_Cvar_Set(0x387d, 0x3be8);
	goto jmp_168;
jmp_161:
	trap_Cvar_Set(0x387d, 0x3bf8);
jmp_168:
	if (forceModelModificationCount == bss_90f0) goto jmp_174;
	forceModelModificationCount = bss_90f0;
	CG_ForceModelChange();
jmp_174:
}

/*
=================
CG_CrosshairPlayer

Address: 0x176
Stack Size: 0x8
Called by: CG_TellTarget_f, CG_TargetCommand_f, vmMain
=================
*/
int CG_CrosshairPlayer(void) {

	if (bss_dc760 <= (bss_de9f0 + 0x3e8)) goto jmp_182;
	return 0xffffffff;
jmp_182:
	return bss_de9ec;
}

/*
=================
CG_LastAttacker

Address: 0x187
Stack Size: 0x8
Called by: CG_TellAttacker_f, vmMain
=================
*/
int CG_LastAttacker(void) {

	if (bss_de9fc != 0x0) goto jmp_190;
	return 0xffffffff;
jmp_190:
	return *(int *)(bss_c2330 + 0x13c);
}

/*
=================
CG_Printf

Address: 0x198
Stack Size: 0x41c
Calls: trap_Print, Q_vsnprintf
Called by: CG_DrawActiveFrame, CG_AddTestModel, CG_TestModelPrevSkin_f, CG_TestModelNextSkin_f, CG_TestModelPrevFrame_f, CG_TestModelNextFrame_f, CG_TestModel_f, CG_ReadNextSnapshot, CG_ServerCommand, CG_MapRestart, CG_PredictPlayerState, CG_CheckChangedPredictableEvents, CG_ResetPlayerEntity, CG_RunLerpFrame, CG_SetLerpFrameAnimation, CG_LoadDeferredPlayers, CG_NewClientInfo, CG_SetDeferredClientInfo, CG_ParseAnimationFile, CG_ParticleMisc, CG_BloodPool, CG_OilSlickRemove, CG_Particle_OilSlick, CG_Particle_OilParticle, CG_Particle_Bleed, CG_ParticleImpactSmokePuff, CG_ParticleSmoke, CG_ParticleBubble, CG_ParticleSnow, CG_ParticleSnowFlurry, CG_EntityEvent, CG_Obituary, CG_Viewpos_f
=================
*/
void CG_Printf(int arg_0, int arg_1) {
	int		local_18;
	char	local_1c[1024];

	local_18 = &arg_1;
	Q_vsnprintf(local_1c, 0x400, arg_0, local_18);
	local_18 = 0x0;
	trap_Print(local_1c);
}

/*
=================
CG_Error

Address: 0x1b3
Stack Size: 0x41c
Calls: trap_Error, Q_vsnprintf
Called by: CG_FireWeapon, CG_RegisterItemVisuals, CG_RegisterWeapon, CG_ProcessSnapshots, CG_TransitionSnapshot, CG_ParseTeamInfo, CG_Player, CG_PlayerAngles, CG_SetLerpFrameAnimation, CG_LoadClientInfo, CG_CustomSound, CG_ParticleExplosion, CG_ImpactMark, CG_FreeMarkPoly, CG_AddLocalEntities, CG_FreeLocalEntity, CG_EntityEvent, CG_Obituary, CG_AddCEntity, CG_InterpolateEntityPosition, CG_Item, CG_MakeExplosion, CG_Init, CG_ConfigString, CG_RegisterItemSounds, vmMain
=================
*/
void CG_Error(int arg_0, int arg_1) {
	int		local_18;
	char	local_1c[1024];

	local_18 = &arg_1;
	Q_vsnprintf(local_1c, 0x400, arg_0, local_18);
	local_18 = 0x0;
	trap_Error(local_1c);
}

/*
=================
Com_Error

Address: 0x1ce
Stack Size: 0x41c
Calls: trap_Error, Q_vsnprintf
Called by: Info_SetValueForKey_Big, Info_SetValueForKey, Info_RemoveKey_Big, Info_RemoveKey, Info_ValueForKey, Q_strcat, Q_strncpyz, COM_MatchToken, BG_EvaluateTrajectoryDelta, BG_EvaluateTrajectory, BG_CanItemBeGrabbed, BG_FindItemForWeapon, BG_FindItemForHoldable
=================
*/
void Com_Error(, int arg_1, int arg_2) {
	int		local_18;
	char	local_1c[1024];

	local_18 = &arg_2;
	Q_vsnprintf(local_1c, 0x400, arg_1, local_18);
	local_18 = 0x0;
	trap_Error(local_1c);
}

/*
=================
Com_Printf

Address: 0x1e9
Stack Size: 0x41c
Calls: trap_Print, Q_vsnprintf
Called by: Info_SetValueForKey_Big, Info_SetValueForKey, Com_sprintf, COM_ParseWarning, COM_ParseError, CG_DrawClientScore, CG_RegisterClientModelname, CG_RegisterClientSkin, CG_ParseAnimationFile, PM_StepSlideMove, PM_GroundTrace, PM_GroundTraceMissed, PM_CorrectAllSolid
=================
*/
void Com_Printf(int arg_0, int arg_1) {
	int		local_18;
	char	local_1c[1024];

	local_18 = &arg_1;
	Q_vsnprintf(local_1c, 0x400, arg_0, local_18);
	local_18 = 0x0;
	trap_Print(local_1c);
}

/*
=================
CG_Argv

Address: 0x204
Stack Size: 0x14
Calls: trap_Argv
Called by: CG_Weapon_f, CG_TestModel_f, CG_ServerCommand, CG_ConfigStringModified, CG_ParseTeamInfo, CG_ParseScores, CG_ConsoleCommand
=================
*/
int CG_Argv(int arg_0) {

	trap_Argv(arg_0, 0x736c, 0x400);
	return 0x736c;
}

/*
=================
CG_RegisterItemSounds

Address: 0x213
Stack Size: 0x74
Calls: memcpy, trap_S_RegisterSound, strcmp, CG_Error
Called by: CG_RegisterSounds
=================
*/
void CG_RegisterItemSounds(int arg_0) {
	int		local_14;
	char	local_18;
	char	local_19[3];
	char	local_1c[64];
	int		local_5c;
	char	local_60[8];
	char	local_68[8];
	int		local_70;

	*(int *)local_60 = ((0x34 * arg_0) + 0x58c);
	if (*(int *)(*(int *)local_60 + 0x4) == 0x0) goto jmp_22e;
	trap_S_RegisterSound(*(int *)(*(int *)local_60 + 0x4), 0x0);
jmp_22e:
	local_14 = *(int *)(*(int *)local_60 + 0x30);
	if (local_14 == 0x0) goto jmp_23f;
	if ((char)*(char *)local_14 != 0x0) goto jmp_2a8;
jmp_23f:
	goto jmp_2ae;
jmp_241:
	local_5c = local_14;
	goto jmp_24d;
jmp_247:
	local_14 = (local_14 + 0x1);
jmp_24d:
	*(int *)local_68 = (char)*(char *)local_14;
	if (*(int *)local_68 == 0x0) goto jmp_25b;
	if (*(int *)local_68 != 0x20) goto jmp_247;
jmp_25b:
	*(int *)&local_18 = (local_14 - local_5c);
	if (*(int *)&local_18 >= 0x40) goto jmp_26a;
	if (*(int *)&local_18 >= 0x5) goto jmp_275;
jmp_26a:
	CG_Error(0x36c8, *(int *)*(int *)local_60);
	goto jmp_2ae;
jmp_275:
	memcpy(local_1c, local_5c, *(int *)&local_18);
	*(char *)(*(int *)&local_18 + local_1c) = 0x0;
	if ((char)*(char *)local_14 == 0x0) goto jmp_292;
	local_14 = (local_14 + 0x1);
jmp_292:
	local_70 = strcmp((*(int *)&local_18 + local_19), 0x36c4);
	if (local_70 != 0x0) goto jmp_2a8;
	trap_S_RegisterSound(local_1c, 0x0);
jmp_2a8:
	if ((char)*(char *)local_14 != 0x0) goto jmp_241;
jmp_2ae:
}

/*
=================
CG_RegisterSounds

Address: 0x2b0
Stack Size: 0x238
Calls: trap_S_RegisterSound, CG_RegisterItemSounds, Q_strncpyz, CG_ConfigString, Com_sprintf
Called by: CG_Init
=================
*/
void CG_RegisterSounds(void) {
	int		local_18;
	char	local_1c[64];
	int		local_5c;
	char	local_60[260];
	int		local_164;
	int		local_168;
	int		local_16c;
	int		local_170;
	int		local_174;
	int		local_178;
	int		local_17c;
	int		local_180;
	int		local_184;
	int		local_188;
	int		local_18c;
	int		local_190;
	int		local_194;
	int		local_198;
	int		local_19c;
	int		local_1a0;
	int		local_1a4;
	int		local_1a8;
	int		local_1ac;
	int		local_1b0;
	int		local_1b4;
	int		local_1b8;
	int		local_1bc;
	int		local_1c0;
	int		local_1c4;
	int		local_1c8;
	int		local_1cc;
	int		local_1d0;
	int		local_1d4;
	int		local_1d8;
	int		local_1dc;
	int		local_1e0;
	int		local_1e4;
	int		local_1e8;
	int		local_1ec;
	int		local_1f0;
	int		local_1f4;
	int		local_1f8;
	int		local_1fc;
	int		local_200;
	int		local_204;
	int		local_208;
	int		local_20c;
	int		local_210;
	int		local_214;
	int		local_218;
	int		local_21c;
	int		local_220;
	int		local_224;
	int		local_228;
	int		local_22c;
	int		local_230;
	int		local_234;

	local_164 = trap_S_RegisterSound(0x36a8, 0x1);
	bss_1043f4 = local_164;
	local_168 = trap_S_RegisterSound(0x368c, 0x1);
	bss_1043f8 = local_168;
	local_16c = trap_S_RegisterSound(0x366c, 0x1);
	bss_1043fc = local_16c;
	local_170 = trap_S_RegisterSound(0x3652, 0x1);
	bss_104408 = local_170;
	local_174 = trap_S_RegisterSound(0x3637, 0x1);
	bss_104404 = local_174;
	local_178 = trap_S_RegisterSound(0x361c, 0x1);
	bss_104400 = local_178;
	local_17c = trap_S_RegisterSound(0x3603, 0x1);
	bss_1044b4 = local_17c;
	local_180 = trap_S_RegisterSound(0x35ec, 0x1);
	bss_1044b8 = local_180;
	local_184 = trap_S_RegisterSound(0x35d5, 0x1);
	bss_1044bc = local_184;
	local_188 = trap_S_RegisterSound(0x35bc, 0x1);
	bss_1044c0 = local_188;
	local_18c = trap_S_RegisterSound(0x35a1, 0x1);
	bss_1044c4 = local_18c;
	if (bss_e66f8 >= 0x3) goto jmp_33d;
	if (bss_8fe8 == 0x0) goto jmp_429;
jmp_33d:
	local_190 = trap_S_RegisterSound(0x3579, 0x1);
	bss_10446c = local_190;
	local_194 = trap_S_RegisterSound(0x355d, 0x1);
	bss_104478 = local_194;
	local_198 = trap_S_RegisterSound(0x3540, 0x1);
	bss_10447c = local_198;
	local_19c = trap_S_RegisterSound(0x3523, 0x1);
	bss_104480 = local_19c;
	local_1a0 = trap_S_RegisterSound(0x3503, 0x1);
	bss_104418 = local_1a0;
	local_1a4 = trap_S_RegisterSound(0x34e1, 0x1);
	bss_104470 = local_1a4;
	local_1a8 = trap_S_RegisterSound(0x34be, 0x1);
	bss_104474 = local_1a8;
	local_1ac = trap_S_RegisterSound(0x3579, 0x1);
	bss_104484 = local_1ac;
	local_1b0 = trap_S_RegisterSound(0x3496, 0x1);
	bss_104488 = local_1b0;
	local_1b4 = trap_S_RegisterSound(0x346f, 0x1);
	bss_10448c = local_1b4;
	local_1b8 = trap_S_RegisterSound(0x3448, 0x1);
	bss_104490 = local_1b8;
	local_1bc = trap_S_RegisterSound(0x3422, 0x1);
	bss_104494 = local_1bc;
	local_1c0 = trap_S_RegisterSound(0x33fc, 0x1);
	bss_104498 = local_1c0;
	if (bss_e66f8 == 0x4) goto jmp_3e1;
	if (bss_8fe8 == 0x0) goto jmp_411;
jmp_3e1:
	local_1c4 = trap_S_RegisterSound(0x33d8, 0x1);
	bss_10449c = local_1c4;
	local_1c8 = trap_S_RegisterSound(0x33b3, 0x1);
	bss_1044a0 = local_1c8;
	local_1cc = trap_S_RegisterSound(0x3391, 0x1);
	bss_1044a4 = local_1cc;
	local_1d0 = trap_S_RegisterSound(0x3370, 0x1);
	bss_1044a8 = local_1d0;
jmp_411:
	local_1c4 = trap_S_RegisterSound(0x3350, 0x1);
	bss_1044ac = local_1c4;
	local_1c8 = trap_S_RegisterSound(0x3330, 0x1);
	bss_1044b0 = local_1c8;
jmp_429:
	local_190 = trap_S_RegisterSound(0x330a, 0x0);
	bss_104324 = local_190;
	local_194 = trap_S_RegisterSound(0x32f1, 0x0);
	bss_104328 = local_194;
	local_198 = trap_S_RegisterSound(0x32d9, 0x0);
	bss_104330 = local_198;
	local_19c = trap_S_RegisterSound(0x32bd, 0x0);
	bss_10432c = local_19c;
	local_1a0 = trap_S_RegisterSound(0x32a3, 0x0);
	bss_1043c4 = local_1a0;
	local_1a4 = trap_S_RegisterSound(0x328a, 0x0);
	bss_1043c8 = local_1a4;
	local_1a8 = trap_S_RegisterSound(0x3271, 0x0);
	bss_1043cc = local_1a8;
	local_1ac = trap_S_RegisterSound(0x3258, 0x0);
	bss_1043d0 = local_1ac;
	local_1b0 = trap_S_RegisterSound(0x3241, 0x0);
	bss_1043d4 = local_1b0;
	local_1b4 = trap_S_RegisterSound(0x3229, 0x0);
	bss_1043d8 = local_1b4;
	local_1b8 = trap_S_RegisterSound(0x3210, 0x0);
	bss_1043e0 = local_1b8;
	local_1bc = trap_S_RegisterSound(0x31f7, 0x0);
	bss_1043dc = local_1bc;
	local_1c0 = trap_S_RegisterSound(0x31e1, 0x0);
	bss_1043e4 = local_1c0;
	local_1c4 = trap_S_RegisterSound(0x31ca, 0x0);
	bss_1043e8 = local_1c4;
	local_1c8 = trap_S_RegisterSound(0x31b3, 0x0);
	bss_10440c = local_1c8;
	local_1cc = trap_S_RegisterSound(0x3195, 0x1);
	bss_10441c = local_1cc;
	local_1d0 = trap_S_RegisterSound(0x3178, 0x1);
	bss_104420 = local_1d0;
	local_1d4 = trap_S_RegisterSound(0x315e, 0x1);
	bss_104424 = local_1d4;
	local_1d8 = trap_S_RegisterSound(0x313f, 0x1);
	bss_104428 = local_1d8;
	local_1dc = trap_S_RegisterSound(0x3125, 0x1);
	bss_10442c = local_1dc;
	local_1e0 = trap_S_RegisterSound(0x310a, 0x1);
	bss_104430 = local_1e0;
	local_1e4 = trap_S_RegisterSound(0x30ed, 0x1);
	bss_104440 = local_1e4;
	local_1e8 = trap_S_RegisterSound(0x30d1, 0x1);
	bss_104444 = local_1e8;
	local_1ec = trap_S_RegisterSound(0x30b5, 0x1);
	bss_104448 = local_1ec;
	local_1f0 = trap_S_RegisterSound(0x309c, 0x0);
	bss_104458 = local_1f0;
	local_1f4 = trap_S_RegisterSound(0x3082, 0x0);
	bss_10445c = local_1f4;
	local_1f8 = trap_S_RegisterSound(0x3069, 0x0);
	bss_104460 = local_1f8;
	local_1fc = trap_S_RegisterSound(0x3051, 0x0);
	bss_1043f0 = local_1fc;
	local_18 = 0x0;
jmp_57c:
	Com_sprintf(local_1c, 0x40, 0x302f, (local_18 + 0x1));
	local_200 = trap_S_RegisterSound(local_1c, 0x0);
	*(int *)((local_18 << 0x2) + 0x104334) = local_200;
	Com_sprintf(local_1c, 0x40, 0x300d, (local_18 + 0x1));
	local_204 = trap_S_RegisterSound(local_1c, 0x0);
	*(int *)((local_18 << 0x2) + 0x104344) = local_204;
	Com_sprintf(local_1c, 0x40, 0x2fea, (local_18 + 0x1));
	local_208 = trap_S_RegisterSound(local_1c, 0x0);
	*(int *)((local_18 << 0x2) + 0x104354) = local_208;
	Com_sprintf(local_1c, 0x40, 0x2fc8, (local_18 + 0x1));
	local_20c = trap_S_RegisterSound(local_1c, 0x0);
	*(int *)((local_18 << 0x2) + 0x104364) = local_20c;
	Com_sprintf(local_1c, 0x40, 0x2fa4, (local_18 + 0x1));
	local_210 = trap_S_RegisterSound(local_1c, 0x0);
	*(int *)((local_18 << 0x2) + 0x104374) = local_210;
	Com_sprintf(local_1c, 0x40, 0x2f80, (local_18 + 0x1));
	local_214 = trap_S_RegisterSound(local_1c, 0x0);
	*(int *)((local_18 << 0x2) + 0x104394) = local_214;
	Com_sprintf(local_1c, 0x40, 0x2f5d, (local_18 + 0x1));
	local_218 = trap_S_RegisterSound(local_1c, 0x0);
	*(int *)((local_18 << 0x2) + 0x104384) = local_218;
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x4) goto jmp_57c;
	local_200 = CG_ConfigString(0x1b);
	Q_strncpyz(local_60, local_200, 0x101);
	local_18 = 0x1;
	goto jmp_680;
jmp_674:
	CG_RegisterItemSounds(local_18);
	local_18 = (local_18 + 0x1);
jmp_680:
	if (local_18 < bg_numItems) goto jmp_674;
	local_18 = 0x1;
jmp_688:
	local_204 = CG_ConfigString((local_18 + 0x120));
	local_5c = local_204;
	if ((char)*(char *)local_5c != 0x0) goto jmp_69d;
	goto jmp_6c1;
jmp_69d:
	if ((char)*(char *)local_5c != 0x2a) goto jmp_6a5;
	goto jmp_6b7;
jmp_6a5:
	local_208 = trap_S_RegisterSound(local_5c, 0x0);
	*(int *)((local_18 << 0x2) + 0xe7820) = local_208;
jmp_6b7:
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x100) goto jmp_688;
jmp_6c1:
	local_204 = trap_S_RegisterSound(0x2f46, 0x0);
	bss_104464 = local_204;
	local_208 = trap_S_RegisterSound(0x2f2b, 0x0);
	bss_104468 = local_208;
	local_20c = trap_S_RegisterSound(0x2f13, 0x0);
	bss_104320 = local_20c;
	local_210 = trap_S_RegisterSound(0x2ef1, 0x0);
	bss_1043b0 = local_210;
	local_214 = trap_S_RegisterSound(0x2ecf, 0x0);
	bss_1043b4 = local_214;
	local_218 = trap_S_RegisterSound(0x2ead, 0x0);
	bss_1043b8 = local_218;
	local_21c = trap_S_RegisterSound(0x2e8b, 0x0);
	bss_1043bc = local_21c;
	local_220 = trap_S_RegisterSound(0x2e69, 0x0);
	bss_1043c0 = local_220;
	local_224 = trap_S_RegisterSound(0x2e53, 0x0);
	bss_1044c8 = local_224;
	local_228 = trap_S_RegisterSound(0x2e3a, 0x0);
	bss_1044cc = local_228;
	local_22c = trap_S_RegisterSound(0x2e21, 0x0);
	bss_1044d0 = local_22c;
	local_230 = trap_S_RegisterSound(0x2dfe, 0x0);
	bss_1044d4 = local_230;
	local_234 = trap_S_RegisterSound(0x2ddb, 0x0);
	bss_1044d8 = local_234;
}

/*
=================
CG_RegisterGraphics

Address: 0x75f
Stack Size: 0x260
Calls: trap_R_ModelBounds, trap_CM_NumInlineModels, trap_R_RegisterModel, trap_R_RegisterShaderNoMip, trap_R_RegisterShader, trap_R_LoadWorldMap, trap_R_ClearScene, memset, CG_ClearParticles, Com_sprintf, CG_RegisterItemVisuals, CG_LoadingItem, Q_strncpyz, CG_ConfigString, va, CG_LoadingString
Called by: CG_Init
=================
*/
void CG_RegisterGraphics(void) {
	int		local_18;
	char	local_1c[260];
	int		local_120;
	int		local_124;
	int		local_128;
	int		local_12c;
	int		local_130;
	int		local_134;
	int		local_138;
	int		local_13c;
	int		local_140;
	int		local_144;
	int		local_148;
	int		local_14c;
	int		local_150;
	int		local_154;
	int		local_158;
	int		local_15c;
	int		local_160;
	int		local_164;
	int		local_168;
	int		local_16c;
	int		local_170;
	int		local_174;
	int		local_178;
	int		local_17c;
	int		local_180;
	int		local_184;
	int		local_188;
	int		local_18c;
	int		local_190;
	int		local_194;
	int		local_198;
	int		local_19c;
	int		local_1a0;
	int		local_1a4;
	int		local_1a8;
	int		local_1ac;
	int		local_1b0;
	int		local_1b4;
	int		local_1b8;
	int		local_1bc;
	int		local_1c0;
	int		local_1c4;
	int		local_1c8;
	int		local_1cc;
	int		local_1d0;
	int		local_1d4;
	int		local_1d8;
	int		local_1dc;
	int		local_1e0;
	int		local_1e4;
	int		local_1e8;
	int		local_1ec;
	int		local_1f0;
	int		local_1f4;
	int		local_1f8;
	int		local_1fc;
	int		local_200;
	int		local_204;
	int		local_208;
	int		local_20c;
	int		local_210;
	int		local_214;
	int		local_218;
	int		local_21c;
	int		local_220;
	int		local_224;
	int		local_228;
	int		local_22c;
	int		local_230;
	char	local_234[8];
	char	local_23c[12];
	char	local_248[12];
	int		local_254;
	int		local_258;
	int		local_25c;

	memset(0xdccf4, 0x0, 0x170);
	trap_R_ClearScene();
	CG_LoadingString(0xe6714);
	trap_R_LoadWorldMap(0xe6714);
	CG_LoadingString(0x2cc7);
	local_18 = 0x0;
jmp_77e:
	local_120 = (local_18 << 0x2);
	local_124 = trap_R_RegisterShader(*(int *)(local_120 + 0x560));
	*(int *)(local_120 + 0x104248) = local_124;
	local_18 = (local_18 + 0x1);
	if (local_18 < 0xb) goto jmp_77e;
	local_120 = trap_R_RegisterShader(0x2cb3);
	bss_104278 = local_120;
	local_124 = trap_R_RegisterShader(0x2c9f);
	bss_10427c = local_124;
	local_128 = trap_R_RegisterShader(0x2c8b);
	bss_104280 = local_128;
	local_12c = trap_R_RegisterShader(0x2c77);
	bss_104284 = local_12c;
	local_130 = trap_R_RegisterShader(0x2c63);
	bss_104288 = local_130;
	local_134 = trap_R_RegisterShader(0x2c54);
	bss_1041f4 = local_134;
	local_138 = trap_R_RegisterShaderNoMip(0x2c43);
	bss_1041a0 = local_138;
	local_13c = trap_R_RegisterShaderNoMip(0x2c31);
	bss_1042f8 = local_13c;
	local_140 = trap_R_RegisterShaderNoMip(0x2c1f);
	bss_1042fc = local_140;
	local_144 = trap_R_RegisterShaderNoMip(0x2c0c);
	bss_104300 = local_144;
	local_148 = trap_R_RegisterShaderNoMip(0x2bfa);
	bss_104304 = local_148;
	local_14c = trap_R_RegisterShader(0x2bf0);
	bss_104230 = local_14c;
	local_150 = trap_R_RegisterShader(0x2bdf);
	bss_104234 = local_150;
	local_154 = trap_R_RegisterShader(0x2bce);
	bss_104238 = local_154;
	local_158 = trap_R_RegisterShader(0x2bbe);
	bss_10423c = local_158;
	local_15c = trap_R_RegisterShader(0x2bb3);
	bss_104244 = local_15c;
	local_160 = trap_R_RegisterShader(0x2ba9);
	bss_104224 = local_160;
	local_164 = trap_R_RegisterShader(0x2b9c);
	bss_1041ec = local_164;
	local_168 = trap_R_RegisterShader(0x2b90);
	bss_104240 = local_168;
	local_16c = trap_R_RegisterShader(0x2b80);
	bss_1041f8 = local_16c;
	local_170 = trap_R_RegisterShader(0x2b72);
	bss_1041f0 = local_170;
	local_18 = 0x0;
jmp_874:
	local_178 = va(0x2b5f, (local_18 + 0x61));
	local_17c = trap_R_RegisterShader(local_178);
	*(int *)((local_18 << 0x2) + 0x1041fc) = local_17c;
	local_18 = (local_18 + 0x1);
	if (local_18 < 0xa) goto jmp_874;
	local_174 = trap_R_RegisterShader(0x2b4f);
	bss_104228 = local_174;
	local_178 = trap_R_RegisterShader(0x2b42);
	bss_10422c = local_178;
	local_17c = trap_R_RegisterShader(0x2b34);
	bss_1042a4 = local_17c;
	local_180 = trap_R_RegisterShader(0x2b20);
	bss_1042ac = local_180;
	local_184 = trap_R_RegisterShader(0x2b0c);
	bss_1042b8 = local_184;
	local_188 = trap_R_RegisterShader(0x2af6);
	bss_1042bc = local_188;
	local_18c = trap_R_RegisterShader(0x2ae0);
	bss_1042b0 = local_18c;
	local_190 = trap_R_RegisterShader(0x2ad1);
	bss_1042b4 = local_190;
	local_194 = trap_R_RegisterShader(0x2ac2);
	bss_1042c0 = local_194;
	if (bss_e66f8 == 0x4) goto jmp_8fb;
	if (bss_8fe8 == 0x0) goto jmp_94b;
jmp_8fb:
	local_198 = trap_R_RegisterModel(0x2aaa);
	bss_104140 = local_198;
	local_19c = trap_R_RegisterModel(0x2a92);
	bss_104144 = local_19c;
	local_1a0 = trap_R_RegisterShaderNoMip(0x2a81);
	bss_10414c = local_1a0;
	local_1a4 = trap_R_RegisterShaderNoMip(0x2a70);
	bss_104150 = local_1a4;
	local_1a8 = trap_R_RegisterShaderNoMip(0x2a5f);
	bss_104154 = local_1a8;
	local_1ac = trap_R_RegisterShaderNoMip(0x2a4e);
	bss_104158 = local_1ac;
	local_1b0 = trap_R_RegisterShaderNoMip(0x2a3d);
	bss_10415c = local_1b0;
	local_1b4 = trap_R_RegisterShaderNoMip(0x2a2c);
	bss_104160 = local_1b4;
jmp_94b:
	if (bss_e66f8 >= 0x3) goto jmp_953;
	if (bss_8fe8 == 0x0) goto jmp_971;
jmp_953:
	local_198 = trap_R_RegisterShader(0x2a20);
	bss_1041e4 = local_198;
	local_19c = trap_R_RegisterShader(0x2a0e);
	bss_1042a8 = local_19c;
	local_1a0 = trap_R_RegisterShader(0x29fa);
	bss_10419c = local_1a0;
jmp_971:
	local_198 = trap_R_RegisterModel(0x29d6);
	bss_104194 = local_198;
	local_19c = trap_R_RegisterShaderNoMip(0x29c3);
	bss_104198 = local_19c;
	local_1a0 = trap_R_RegisterModel(0x29a0);
	bss_1041d0 = local_1a0;
	local_1a4 = trap_R_RegisterModel(0x297d);
	bss_1041d4 = local_1a4;
	local_1a8 = trap_R_RegisterModel(0x2965);
	bss_1041a4 = local_1a8;
	local_1ac = trap_R_RegisterModel(0x2951);
	bss_1041a8 = local_1ac;
	local_1b0 = trap_R_RegisterModel(0x293b);
	bss_1041ac = local_1b0;
	local_1b4 = trap_R_RegisterModel(0x2926);
	bss_1041b0 = local_1b4;
	local_1b8 = trap_R_RegisterModel(0x2911);
	bss_1041b4 = local_1b8;
	local_1bc = trap_R_RegisterModel(0x28f9);
	bss_1041b8 = local_1bc;
	local_1c0 = trap_R_RegisterModel(0x28df);
	bss_1041bc = local_1c0;
	local_1c4 = trap_R_RegisterModel(0x28cb);
	bss_1041c0 = local_1c4;
	local_1c8 = trap_R_RegisterModel(0x28b5);
	bss_1041c4 = local_1c8;
	local_1cc = trap_R_RegisterModel(0x289f);
	bss_1041c8 = local_1cc;
	local_1d0 = trap_R_RegisterModel(0x297d);
	bss_1041cc = local_1d0;
	local_1d4 = trap_R_RegisterShader(0x288e);
	bss_1041e8 = local_1d4;
	local_1d8 = trap_R_RegisterShader(0x287f);
	bss_1042ec = local_1d8;
	local_1dc = trap_R_RegisterModel(0x2864);
	bss_1042c4 = local_1dc;
	local_1e0 = trap_R_RegisterModel(0x2849);
	bss_1042c8 = local_1e0;
	local_1e4 = trap_R_RegisterModel(0x282e);
	bss_1042cc = local_1e4;
	local_1e8 = trap_R_RegisterModel(0x2818);
	bss_1042f0 = local_1e8;
	local_1ec = trap_R_RegisterShader(0x2809);
	bss_1042f4 = local_1ec;
	local_1f0 = trap_R_RegisterShaderNoMip(0x27f8);
	bss_104308 = local_1f0;
	local_1f4 = trap_R_RegisterShaderNoMip(0x27e8);
	bss_10430c = local_1f4;
	local_1f8 = trap_R_RegisterShaderNoMip(0x27d9);
	bss_104310 = local_1f8;
	local_1fc = trap_R_RegisterShaderNoMip(0x27cc);
	bss_104314 = local_1fc;
	local_200 = trap_R_RegisterShaderNoMip(0x27bf);
	bss_104318 = local_200;
	local_204 = trap_R_RegisterShaderNoMip(0x27b1);
	bss_10431c = local_204;
	memset(0xd2cc, 0x0, 0x1800);
	memset(0xeacc, 0x0, 0x840);
	local_208 = CG_ConfigString(0x1b);
	Q_strncpyz(local_1c, local_208, 0x101);
	local_18 = 0x1;
	goto jmp_ace;
jmp_ab0:
	if ((char)*(char *)(local_18 + local_1c) == 0x31) goto jmp_abc;
	if (bss_8fe8 == 0x0) goto jmp_ac8;
jmp_abc:
	CG_LoadingItem(local_18);
	CG_RegisterItemVisuals(local_18);
jmp_ac8:
	local_18 = (local_18 + 0x1);
jmp_ace:
	if (local_18 < bg_numItems) goto jmp_ab0;
	local_20c = trap_R_RegisterShader(0x279b);
	bss_104294 = local_20c;
	local_210 = trap_R_RegisterShader(0x2783);
	bss_104298 = local_210;
	local_214 = trap_R_RegisterShader(0x276c);
	bss_10429c = local_214;
	local_218 = trap_R_RegisterShader(0x2756);
	bss_1042a0 = local_218;
	local_21c = trap_R_RegisterShader(0x274b);
	bss_104274 = local_21c;
	local_220 = trap_R_RegisterShader(0x2746);
	bss_10428c = local_220;
	local_224 = trap_R_RegisterShader(0x273c);
	bss_104290 = local_224;
	local_228 = trap_CM_NumInlineModels();
	bss_e7c20 = local_228;
	local_18 = 0x1;
	goto jmp_b87;
jmp_b26:
	Com_sprintf(local_248, 0xa, 0x2738, local_18);
	local_254 = trap_R_RegisterModel(local_248);
	*(int *)((local_18 << 0x2) + 0xe7c24) = local_254;
	trap_R_ModelBounds(*(int *)((local_18 << 0x2) + 0xe7c24), &local_230, local_23c);
	local_22c = 0x0;
jmp_b53:
	local_258 = (local_22c << 0x2);
	local_25c = *(int *)(local_258 + &local_230);
	*(int *)(local_258 + ((0xc * local_18) + 0xe8024)) = (local_25c + (0x3f000000 * (*(int *)(local_258 + local_23c) - local_25c)));
	local_22c = (local_22c + 0x1);
	if (local_22c < 0x3) goto jmp_b53;
	local_18 = (local_18 + 0x1);
jmp_b87:
	if (local_18 < bss_e7c20) goto jmp_b26;
	local_18 = 0x1;
jmp_b8f:
	local_230 = CG_ConfigString((local_18 + 0x20));
	local_22c = local_230;
	if ((char)*(char *)local_22c != 0x0) goto jmp_ba4;
	goto jmp_bbe;
jmp_ba4:
	*(int *)local_234 = trap_R_RegisterModel(local_22c);
	*(int *)((local_18 << 0x2) + 0xe7420) = *(int *)local_234;
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x100) goto jmp_b8f;
jmp_bbe:
	CG_ClearParticles();
}

/*
=================
CG_BuildSpectatorString

Address: 0xbc3
Stack Size: 0x20
Calls: strlen, Q_strcat, va
Called by: CG_ConfigStringModified, CG_RegisterClients
=================
*/
void CG_BuildSpectatorString(void) {
	int		local_14;
	int		local_18;
	int		local_1c;

	*(char *)bss_de1bc = 0x0;
	local_14 = 0x0;
jmp_bca:
	local_18 = (0x6b4 * local_14);
	if (*(int *)(local_18 + 0xe8c24) == 0x0) goto jmp_bf5;
	if (*(int *)(local_18 + 0xe8c68) != 0x3) goto jmp_bf5;
	local_1c = va(0x2730, ((0x6b4 * local_14) + 0xe8c28));
	Q_strcat(0xde1bc, 0x400, local_1c);
jmp_bf5:
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x40) goto jmp_bca;
	local_18 = strlen(0xde1bc);
	local_14 = local_18;
	if (local_14 == bss_de5bc) goto jmp_c15;
	bss_de5bc = local_14;
	bss_de5c0 = 0xbf800000;
jmp_c15:
}

/*
=================
CG_RegisterClients

Address: 0xc17
Stack Size: 0x18
Calls: CG_BuildSpectatorString, CG_ConfigString, CG_NewClientInfo, CG_LoadingClient
Called by: CG_Init
=================
*/
void CG_RegisterClients(void) {
	int		local_c;
	int		local_10;
	int		local_14;

	CG_LoadingClient(bss_c2310);
	CG_NewClientInfo(bss_c2310);
	local_c = 0x0;
jmp_c27:
	if (bss_c2310 != local_c) goto jmp_c2e;
	goto jmp_c4f;
jmp_c2e:
	local_14 = CG_ConfigString((local_c + 0x220));
	local_10 = local_14;
	if ((char)*(char *)local_10 != 0x0) goto jmp_c43;
	goto jmp_c4f;
jmp_c43:
	CG_LoadingClient(local_c);
	CG_NewClientInfo(local_c);
jmp_c4f:
	local_c = (local_c + 0x1);
	if (local_c < 0x40) goto jmp_c27;
	CG_BuildSpectatorString();
}

/*
=================
CG_ConfigString

Address: 0xc5e
Stack Size: 0x14
Calls: CG_Error
Called by: CG_ConfigStringModified, CG_ShaderStateChanged, CG_SetConfigValues, CG_ParseWarmup, CG_ParseServerinfo, CG_DrawTourneyScoreboard, CG_NewClientInfo, CG_NewParticleArea, CG_DrawInformation, CG_LoadingClient, CG_EntityEvent, CG_Obituary, CG_DrawTeamOverlay, CG_DrawAttacker, CG_Init, CG_StartMusic, CG_RegisterClients, CG_RegisterGraphics, CG_RegisterSounds, CG_ForceModelChange
=================
*/
int CG_ConfigString(int arg_0) {

	arg_0 = arg_0;
	if (arg_0 < 0x0) goto jmp_c6b;
	if (arg_0 < 0x400) goto jmp_c73;
jmp_c6b:
	CG_Error(0x2711, arg_0);
jmp_c73:
	return (*(int *)((arg_0 << 0x2) + 0xdec18) + 0xdfc18);
}

/*
=================
CG_StartMusic

Address: 0xc7f
Stack Size: 0xa4
Calls: trap_S_StartBackgroundTrack, Q_strncpyz, COM_Parse, CG_ConfigString
Called by: CG_MapRestart, CG_ConfigStringModified, CG_Init
=================
*/
void CG_StartMusic(void) {
	int		local_14;
	char	local_18[64];
	char	local_58[64];
	int		local_98;
	int		local_9c;
	int		local_a0;

	local_98 = CG_ConfigString(0x2);
	local_14 = local_98;
	local_9c = COM_Parse(&local_14);
	Q_strncpyz(local_18, local_9c, 0x40);
	local_a0 = COM_Parse(&local_14);
	Q_strncpyz(local_58, local_a0, 0x40);
	trap_S_StartBackgroundTrack(local_18, local_58);
}

/*
=================
CG_Init

Address: 0xcb3
Stack Size: 0x40
Calls: trap_S_ClearLoopingSounds, trap_CM_LoadMap, trap_GetGameState, trap_GetGlconfig, trap_R_RegisterShaderNoMip, trap_R_RegisterShader, memset, CG_ShaderStateChanged, CG_StartMusic, CG_SetConfigValues, CG_InitMarkPolys, CG_InitLocalEntities, CG_RegisterClients, CG_RegisterGraphics, CG_RegisterSounds, CG_LoadingString, CG_ParseServerinfo, atoi, CG_Error, strcmp, CG_ConfigString, CG_InitConsoleCommands, CG_RegisterCvars
Called by: vmMain
=================
*/
void CG_Init(int arg_0, int arg_1, int arg_2) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;

	memset(0xdec18, 0x0, 0x258d4);
	memset(0xc230c, 0x0, 0x1c90c);
	memset(0xf30c, 0x0, 0xb3000);
	memset(0xeacc, 0x0, 0x840);
	memset(0xd2cc, 0x0, 0x1800);
	bss_c2310 = arg_2;
	bss_e66f0 = arg_0;
	bss_e66ec = arg_1;
	local_18 = trap_R_RegisterShader(0x2701);
	bss_10412c = local_18;
	local_1c = trap_R_RegisterShader(0x26fb);
	bss_10413c = local_1c;
	local_20 = trap_R_RegisterShaderNoMip(0x26e3);
	bss_104130 = local_20;
	local_24 = trap_R_RegisterShaderNoMip(0x26c7);
	bss_104134 = local_24;
	local_28 = trap_R_RegisterShaderNoMip(0x26af);
	bss_104138 = local_28;
	CG_RegisterCvars();
	CG_InitConsoleCommands();
	bss_dcc90 = 0x2;
	local_2c = 0xffffffff;
	bss_e7414 = local_2c;
	bss_e7410 = local_2c;
	bss_e7418 = 0xffffffff;
	trap_GetGlconfig(0xe3a9c);
	bss_e66e0 = ((float)bss_e66c4 / 0x44200000);
	bss_e66e4 = ((float)bss_e66c8 / 0x43f00000);
	trap_GetGameState(0xdec18);
	local_30 = CG_ConfigString(0x14);
	local_14 = local_30;
	local_34 = strcmp(local_14, 0x26a6);
	if (local_34 == 0x0) goto jmp_d6f;
	CG_Error(0x2683, 0x26a6, local_14);
jmp_d6f:
	local_38 = CG_ConfigString(0x15);
	local_14 = local_38;
	local_3c = atoi(local_14);
	bss_e7404 = local_3c;
	CG_ParseServerinfo();
	CG_LoadingString(0x2675);
	trap_CM_LoadMap(0xe6714);
	bss_c2320 = 0x1;
	CG_LoadingString(0x266e);
	CG_RegisterSounds();
	CG_LoadingString(0x2665);
	CG_RegisterGraphics();
	CG_LoadingString(0x265d);
	CG_RegisterClients();
	bss_c2320 = 0x0;
	CG_InitLocalEntities();
	CG_InitMarkPolys();
	*(char *)bss_dce7c = 0x0;
	CG_SetConfigValues();
	CG_StartMusic();
	CG_LoadingString(0x265c);
	CG_ShaderStateChanged();
	trap_S_ClearLoopingSounds(0x1);
}

/*
=================
CG_Shutdown

Address: 0xdcd
Stack Size: 0x8
Called by: vmMain
=================
*/
void CG_Shutdown(void) {

}

/*
=================
CG_EventHandling

Address: 0xdd0
Stack Size: 0x8
Called by: vmMain
=================
*/
void CG_EventHandling(void) {

}

/*
=================
CG_KeyEvent

Address: 0xdd3
Stack Size: 0x8
Called by: vmMain
=================
*/
void CG_KeyEvent(void) {

}

/*
=================
CG_MouseEvent

Address: 0xdd6
Stack Size: 0x8
Called by: vmMain
=================
*/
void CG_MouseEvent(void) {

}

/*
=================
BG_FindItemForPowerup

Address: 0xdd9
Stack Size: 0x10
Called by: CG_DrawPowerups, CG_DrawScores, CG_DrawTeamOverlay, CG_DrawFlagModel
=================
*/
int BG_FindItemForPowerup(int arg_0) {
	int		local_8;
	int		local_c;

	arg_0 = arg_0;
	local_8 = 0x0;
	goto jmp_e17;
jmp_de3:
	local_c = (0x34 * local_8);
	if (*(int *)(local_c + 0x5b0) == 0x5) goto jmp_dfe;
	if (*(int *)(local_c + 0x5b0) == 0x8) goto jmp_dfe;
	if (*(int *)(local_c + 0x5b0) != 0x7) goto jmp_e11;
jmp_dfe:
	if (*(int *)((0x34 * local_8) + 0x5b4) != arg_0) goto jmp_e11;
	return ((0x34 * local_8) + 0x58c);
jmp_e11:
	local_8 = (local_8 + 0x1);
jmp_e17:
	if (local_8 < bg_numItems) goto jmp_de3;
	return 0x0;
}

/*
=================
BG_FindItemForHoldable

Address: 0xe20
Stack Size: 0x18
Calls: Com_Error
Called by: CG_UseItem
=================
*/
int BG_FindItemForHoldable(int arg_0) {
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	local_10 = 0x0;
	goto jmp_e4e;
jmp_e2a:
	local_14 = (0x34 * local_10);
	if (*(int *)(local_14 + 0x5b0) != 0x6) goto jmp_e48;
	if (*(int *)(local_14 + 0x5b4) != arg_0) goto jmp_e48;
	return ((0x34 * local_10) + 0x58c);
jmp_e48:
	local_10 = (local_10 + 0x1);
jmp_e4e:
	if (local_10 < bg_numItems) goto jmp_e2a;
	Com_Error(0x1, 0x4195);
	return 0x0;
}

/*
=================
BG_FindItemForWeapon

Address: 0xe5e
Stack Size: 0x1c
Calls: Com_Error
=================
*/
int BG_FindItemForWeapon(int arg_0) {
	char	local_14[8];

	arg_0 = arg_0;
	*(int *)local_14 = 0x5c0;
	goto jmp_e82;
jmp_e68:
	if (*(int *)(*(int *)local_14 + 0x24) != 0x1) goto jmp_e7c;
	if (*(int *)(*(int *)local_14 + 0x28) != arg_0) goto jmp_e7c;
	return *(int *)local_14;
jmp_e7c:
	*(int *)local_14 = (*(int *)local_14 + 0x34);
jmp_e82:
	if (*(int *)*(int *)local_14 != 0x0) goto jmp_e68;
	Com_Error(0x1, 0x4174, arg_0);
	return 0x0;
}

/*
=================
BG_FindItem

Address: 0xe95
Stack Size: 0x18
Calls: Q_stricmp
=================
*/
int BG_FindItem(int arg_0) {
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	local_10 = 0x5c0;
	goto jmp_ebb;
jmp_e9f:
	local_14 = Q_stricmp(*(int *)(local_10 + 0x1c), arg_0);
	if (local_14 != 0x0) goto jmp_eb5;
	return local_10;
jmp_eb5:
	local_10 = (local_10 + 0x34);
jmp_ebb:
	if (*(int *)local_10 != 0x0) goto jmp_e9f;
	return 0x0;
}

/*
=================
BG_PlayerTouchesItem

Address: 0xec4
Stack Size: 0x38
Calls: BG_EvaluateTrajectory
Called by: CG_TouchItem
=================
*/
int BG_PlayerTouchesItem(int arg_0, int arg_1, int arg_2) {
	int		local_14;
	int		local_18;
	char	local_1c[8];
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	arg_0 = arg_0;
	BG_EvaluateTrajectory((arg_1 + 0xc), arg_2, &local_14);
	local_24 = (*(int *)(arg_0 + 0x14) - local_14);
	if (local_24 > 0x42300000) goto jmp_f1c;
	if (local_24 < 0xc2480000) goto jmp_f1c;
	local_28 = *(int *)(arg_0 + 0x18);
	local_2c = 0x42100000;
	if ((local_28 - local_18) > local_2c) goto jmp_f1c;
	local_30 = 0xc2100000;
	if ((local_28 - local_18) < local_30) goto jmp_f1c;
	local_34 = *(int *)(arg_0 + 0x1c);
	if ((local_34 - *(int *)local_1c) > local_2c) goto jmp_f1c;
	if ((local_34 - *(int *)local_1c) >= local_30) goto jmp_f20;
jmp_f1c:
	return 0x0;
jmp_f20:
	return 0x1;
}

/*
=================
BG_CanItemBeGrabbed

Address: 0xf24
Stack Size: 0x30
Calls: Com_Error
Called by: CG_TouchItem
=================
*/
int BG_CanItemBeGrabbed(int arg_0, int arg_1, int arg_2) {
	int		local_10;
	int		local_14;
	char	local_18[8];
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	arg_1 = arg_1;
	local_14 = *(int *)(arg_1 + 0xa0);
	if (local_14 < 0x1) goto jmp_f39;
	if (local_14 < bg_numItems) goto jmp_f40;
jmp_f39:
	Com_Error(0x1, 0x414c);
jmp_f40:
	local_10 = ((0x34 * *(int *)(arg_1 + 0xa0)) + 0x58c);
	*(int *)local_18 = *(int *)(local_10 + 0x24);
	if (*(int *)local_18 < 0x0) goto jmp_1055;
	if (*(int *)local_18 > 0x8) goto jmp_1055;
	goto *(int *)((*(int *)local_18 << 0x2) + 0xd14);
	return 0x1;
	if (*(int *)((*(int *)(local_10 + 0x28) << 0x2) + (arg_2 + 0x178)) < 0xc8) goto jmp_f79;
	return 0x0;
jmp_f79:
	return 0x1;
	local_20 = arg_2;
	if (*(int *)(local_20 + 0xc4) < (*(int *)(local_20 + 0xd0) << 0x1)) goto jmp_f92;
	return 0x0;
jmp_f92:
	return 0x1;
	local_24 = *(int *)(local_10 + 0x20);
	if (local_24 == 0x5) goto jmp_fa5;
	if (local_24 != 0x64) goto jmp_fbe;
jmp_fa5:
	local_28 = arg_2;
	if (*(int *)(local_28 + 0xb8) < (*(int *)(local_28 + 0xd0) << 0x1)) goto jmp_fba;
	return 0x0;
jmp_fba:
	return 0x1;
jmp_fbe:
	local_28 = arg_2;
	if (*(int *)(local_28 + 0xb8) < *(int *)(local_28 + 0xd0)) goto jmp_fd1;
	return 0x0;
jmp_fd1:
	return 0x1;
	return 0x1;
	if (arg_0 != 0x4) goto jmp_103b;
	if (*(int *)(arg_2 + 0x104) != 0x1) goto jmp_100c;
	local_2c = *(int *)(local_10 + 0x28);
	if (local_2c == 0x8) goto jmp_1008;
	if (local_2c != 0x7) goto jmp_ffa;
	if (*(int *)(arg_1 + 0xa4) != 0x0) goto jmp_1008;
jmp_ffa:
	if (*(int *)(local_10 + 0x28) != 0x7) goto jmp_103b;
	if (*(int *)(arg_2 + 0x158) == 0x0) goto jmp_103b;
jmp_1008:
	return 0x1;
jmp_100c:
	if (*(int *)(arg_2 + 0x104) != 0x2) goto jmp_103b;
	local_2c = *(int *)(local_10 + 0x28);
	if (local_2c == 0x7) goto jmp_1037;
	if (local_2c != 0x8) goto jmp_1029;
	if (*(int *)(arg_1 + 0xa4) != 0x0) goto jmp_1037;
jmp_1029:
	if (*(int *)(local_10 + 0x28) != 0x8) goto jmp_103b;
	if (*(int *)(arg_2 + 0x154) == 0x0) goto jmp_103b;
jmp_1037:
	return 0x1;
jmp_103b:
	return 0x0;
	if (*(int *)(arg_2 + 0xbc) == 0x0) goto jmp_104a;
	return 0x0;
jmp_104a:
	return 0x1;
	Com_Error(0x1, 0x4130);
jmp_1055:
	return 0x0;
}

/*
=================
BG_EvaluateTrajectory

Address: 0x1059
Stack Size: 0x68
Calls: sin, Com_Error
Called by: CG_GrappleTrail, CG_PlasmaTrail, CG_RocketTrail, CG_ClipMoveToEntities, CG_ResetPlayerEntity, CG_AddMoveScaleFade, CG_AddFragment, CG_BloodTrail, CG_CheckEvents, CG_CalcEntityLerpPositions, CG_InterpolateEntityPosition, CG_AdjustPositionForMover, BG_PlayerTouchesItem
=================
*/
void BG_EvaluateTrajectory(int arg_0, int arg_1, int arg_2) {
	int		local_14;
	int		local_18;
	char	local_1c[24];
	char	local_34[44];
	int		local_60;
	int		local_64;

	arg_0 = arg_0;
	*(int *)local_1c = *(int *)arg_0;
	if (*(int *)local_1c < 0x0) goto jmp_11e2;
	if (*(int *)local_1c > 0x5) goto jmp_11e2;
	goto *(int *)((*(int *)local_1c << 0x2) + 0xd38);
	block_copy((arg_0 + 0xc), arg_2, 0xc);
	goto jmp_11ed;
	local_14 = (0x3a83126f * (float)(arg_1 - *(int *)(arg_0 + 0x4)));
	*(int *)arg_2 = (*(int *)(arg_0 + 0xc) + (*(int *)(arg_0 + 0x18) * local_14));
	*(int *)(arg_2 + 0x4) = (*(int *)(arg_0 + 0x10) + (*(int *)(arg_0 + 0x1c) * local_14));
	*(int *)(arg_2 + 0x8) = (*(int *)(arg_0 + 0x14) + (*(int *)(arg_0 + 0x20) * local_14));
	goto jmp_11ed;
	local_14 = ((float)(arg_1 - *(int *)(arg_0 + 0x4)) / (float)*(int *)(arg_0 + 0x8));
	*(int *)local_34 = sin((0x40000000 * (0x40490fdb * local_14)));
	local_18 = *(int *)local_34;
	*(int *)arg_2 = (*(int *)(arg_0 + 0xc) + (*(int *)(arg_0 + 0x18) * local_18));
	*(int *)(arg_2 + 0x4) = (*(int *)(arg_0 + 0x10) + (*(int *)(arg_0 + 0x1c) * local_18));
	*(int *)(arg_2 + 0x8) = (*(int *)(arg_0 + 0x14) + (*(int *)(arg_0 + 0x20) * local_18));
	goto jmp_11ed;
	if (arg_1 <= (*(int *)(arg_0 + 0x4) + *(int *)(arg_0 + 0x8))) goto jmp_1137;
	arg_1 = (*(int *)(arg_0 + 0x4) + *(int *)(arg_0 + 0x8));
jmp_1137:
	local_14 = (0x3a83126f * (float)(arg_1 - *(int *)(arg_0 + 0x4)));
	if (local_14 >= 0x0) goto jmp_114b;
	local_14 = 0x0;
jmp_114b:
	*(int *)arg_2 = (*(int *)(arg_0 + 0xc) + (*(int *)(arg_0 + 0x18) * local_14));
	*(int *)(arg_2 + 0x4) = (*(int *)(arg_0 + 0x10) + (*(int *)(arg_0 + 0x1c) * local_14));
	*(int *)(arg_2 + 0x8) = (*(int *)(arg_0 + 0x14) + (*(int *)(arg_0 + 0x20) * local_14));
	goto jmp_11ed;
	local_14 = (0x3a83126f * (float)(arg_1 - *(int *)(arg_0 + 0x4)));
	*(int *)arg_2 = (*(int *)(arg_0 + 0xc) + (*(int *)(arg_0 + 0x18) * local_14));
	*(int *)(arg_2 + 0x4) = (*(int *)(arg_0 + 0x10) + (*(int *)(arg_0 + 0x1c) * local_14));
	*(int *)(arg_2 + 0x8) = (*(int *)(arg_0 + 0x14) + (*(int *)(arg_0 + 0x20) * local_14));
	local_60 = (arg_2 + 0x8);
	local_64 = local_14;
	*(int *)local_60 = (*(int *)local_60 - ((0x43c80000 * local_64) * local_64));
	goto jmp_11ed;
jmp_11e2:
	Com_Error(0x1, 0x4106, *(int *)arg_0);
jmp_11ed:
}

/*
=================
BG_EvaluateTrajectoryDelta

Address: 0x11ef
Stack Size: 0x40
Calls: cos, Com_Error
Called by: CG_ReflectVelocity, CG_Missile
=================
*/
void BG_EvaluateTrajectoryDelta(int arg_0, int arg_1, int arg_2) {
	int		local_14;
	int		local_18;
	char	local_1c[8];
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;

	*(int *)local_1c = *(int *)arg_0;
	if (*(int *)local_1c < 0x0) goto jmp_12de;
	if (*(int *)local_1c > 0x5) goto jmp_12de;
	goto *(int *)((*(int *)local_1c << 0x2) + 0xd50);
	local_24 = arg_2;
	local_28 = 0x0;
	*(int *)(local_24 + 0x8) = local_28;
	*(int *)(local_24 + 0x4) = local_28;
	*(int *)local_24 = local_28;
	goto jmp_12e9;
	block_copy((arg_0 + 0x18), arg_2, 0xc);
	goto jmp_12e9;
	local_2c = arg_0;
	local_18 = ((float)(arg_1 - *(int *)(local_2c + 0x4)) / (float)*(int *)(local_2c + 0x8));
	local_30 = cos((0x40000000 * (0x40490fdb * local_18)));
	local_14 = local_30;
	local_14 = (0x3f000000 * local_14);
	*(int *)arg_2 = (*(int *)(arg_0 + 0x18) * local_14);
	*(int *)(arg_2 + 0x4) = (*(int *)(arg_0 + 0x1c) * local_14);
	*(int *)(arg_2 + 0x8) = (*(int *)(arg_0 + 0x20) * local_14);
	goto jmp_12e9;
	local_34 = arg_0;
	if (arg_1 <= (*(int *)(local_34 + 0x4) + *(int *)(local_34 + 0x8))) goto jmp_12aa;
	local_38 = arg_2;
	local_3c = 0x0;
	*(int *)(local_38 + 0x8) = local_3c;
	*(int *)(local_38 + 0x4) = local_3c;
	*(int *)local_38 = local_3c;
	goto jmp_12e9;
jmp_12aa:
	block_copy((arg_0 + 0x18), arg_2, 0xc);
	goto jmp_12e9;
	local_38 = arg_0;
	local_18 = (0x3a83126f * (float)(arg_1 - *(int *)(local_38 + 0x4)));
	block_copy((local_38 + 0x18), arg_2, 0xc);
	local_3c = (arg_2 + 0x8);
	*(int *)local_3c = (*(int *)local_3c - (0x44480000 * local_18));
	goto jmp_12e9;
jmp_12de:
	Com_Error(0x1, 0x40d7, *(int *)arg_0);
jmp_12e9:
}

/*
=================
BG_AddPredictableEventToPlayerstate

Address: 0x12eb
Stack Size: 0x14
Called by: CG_TouchItem, PM_AddEvent, BG_TouchJumpPad
=================
*/
void BG_AddPredictableEventToPlayerstate(int arg_0, int arg_1, int arg_2) {
	int		local_10;

	arg_2 = arg_2;
	*(int *)(((*(int *)(arg_2 + 0x6c) & 0x1) << 0x2) + (arg_2 + 0x70)) = arg_0;
	*(int *)(((*(int *)(arg_2 + 0x6c) & 0x1) << 0x2) + (arg_2 + 0x78)) = arg_1;
	local_10 = (arg_2 + 0x6c);
	*(int *)local_10 = (*(int *)local_10 + 0x1);
}

/*
=================
BG_TouchJumpPad

Address: 0x1322
Stack Size: 0x30
Calls: BG_AddPredictableEventToPlayerstate, fabs, AngleNormalize180, vectoangles
Called by: CG_TouchTriggerPrediction
=================
*/
void BG_TouchJumpPad(int arg_0, int arg_1) {
	char	local_14[12];
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	if (*(int *)(arg_0 + 0x4) == 0x0) goto jmp_1334;
	goto jmp_1394;
jmp_1334:
	if (*(int *)(arg_0 + 0x150) == 0x0) goto jmp_133d;
	goto jmp_1394;
jmp_133d:
	if (*(int *)(arg_0 + 0x1c0) == *(int *)arg_1) goto jmp_1379;
	vectoangles((arg_1 + 0x68), local_14);
	local_28 = AngleNormalize180(*(int *)local_14);
	local_2c = fabs(local_28);
	local_20 = local_2c;
	if (local_20 >= 0x42340000) goto jmp_136b;
	local_24 = 0x0;
	goto jmp_136e;
jmp_136b:
	local_24 = 0x1;
jmp_136e:
	BG_AddPredictableEventToPlayerstate(0xd, local_24, arg_0);
jmp_1379:
	*(int *)(arg_0 + 0x1c0) = *(int *)arg_1;
	*(int *)(arg_0 + 0x1cc) = *(int *)(arg_0 + 0x1c8);
	block_copy((arg_1 + 0x68), (arg_0 + 0x20), 0xc);
jmp_1394:
}

/*
=================
BG_PlayerStateToEntityState

Address: 0x1396
Stack Size: 0x28
Called by: CG_SetNextSnap, CG_TransitionSnapshot, CG_SetInitialSnapshot, CG_AddPacketEntities
=================
*/
void BG_PlayerStateToEntityState(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[8];
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_c = *(int *)(arg_0 + 0x4);
	if (local_c == 0x5) goto jmp_13ae;
	if (local_c != 0x2) goto jmp_13b6;
jmp_13ae:
	*(int *)(arg_1 + 0x4) = 0xa;
	goto jmp_13cb;
jmp_13b6:
	if (*(int *)(arg_0 + 0xb8) > 0xffffffd8) goto jmp_13c5;
	*(int *)(arg_1 + 0x4) = 0xa;
	goto jmp_13cb;
jmp_13c5:
	*(int *)(arg_1 + 0x4) = 0x1;
jmp_13cb:
	*(int *)arg_1 = *(int *)(arg_0 + 0x8c);
	*(int *)(arg_1 + 0xc) = 0x1;
	block_copy((arg_0 + 0x14), (arg_1 + 0x18), 0xc);
	if (arg_2 == 0x0) goto jmp_1410;
	local_10 = (arg_1 + 0x18);
	*(int *)local_10 = (float)(int)*(int *)local_10;
	local_14 = (arg_1 + 0x1c);
	*(int *)local_14 = (float)(int)*(int *)local_14;
	*(int *)local_18 = (arg_1 + 0x20);
	*(int *)*(int *)local_18 = (float)(int)*(int *)*(int *)local_18;
jmp_1410:
	block_copy((arg_0 + 0x20), (arg_1 + 0x24), 0xc);
	*(int *)(arg_1 + 0x30) = 0x1;
	block_copy((arg_0 + 0x98), (arg_1 + 0x3c), 0xc);
	if (arg_2 == 0x0) goto jmp_1456;
	local_10 = (arg_1 + 0x3c);
	*(int *)local_10 = (float)(int)*(int *)local_10;
	local_14 = (arg_1 + 0x40);
	*(int *)local_14 = (float)(int)*(int *)local_14;
	*(int *)local_18 = (arg_1 + 0x44);
	*(int *)*(int *)local_18 = (float)(int)*(int *)*(int *)local_18;
jmp_1456:
	*(int *)(arg_1 + 0x84) = (float)*(int *)(arg_0 + 0x58);
	*(int *)(arg_1 + 0xc4) = *(int *)(arg_0 + 0x4c);
	*(int *)(arg_1 + 0xc8) = *(int *)(arg_0 + 0x54);
	*(int *)(arg_1 + 0xa8) = *(int *)(arg_0 + 0x8c);
	*(int *)(arg_1 + 0x8) = *(int *)(arg_0 + 0x68);
	if (*(int *)(arg_0 + 0xb8) > 0x0) goto jmp_14a0;
	local_10 = (arg_1 + 0x8);
	*(int *)local_10 = (*(int *)local_10 | 0x1);
	goto jmp_14ae;
jmp_14a0:
	local_10 = (arg_1 + 0x8);
	*(int *)local_10 = (*(int *)local_10 & 0xfffffffe);
jmp_14ae:
	if (*(int *)(arg_0 + 0x80) == 0x0) goto jmp_14cb;
	*(int *)(arg_1 + 0xb4) = *(int *)(arg_0 + 0x80);
	*(int *)(arg_1 + 0xb8) = *(int *)(arg_0 + 0x84);
	goto jmp_1530;
jmp_14cb:
	if (*(int *)(arg_0 + 0x1d0) >= *(int *)(arg_0 + 0x6c)) goto jmp_1530;
	if (*(int *)(arg_0 + 0x1d0) >= (*(int *)(arg_0 + 0x6c) - 0x2)) goto jmp_14ef;
	*(int *)(arg_0 + 0x1d0) = (*(int *)(arg_0 + 0x6c) - 0x2);
jmp_14ef:
	local_20 = (arg_0 + 0x1d0);
	local_14 = (*(int *)local_20 & 0x1);
	*(int *)(arg_1 + 0xb4) = (*(int *)((local_14 << 0x2) + (arg_0 + 0x70)) | ((*(int *)local_20 & 0x3) << 0x8));
	*(int *)(arg_1 + 0xb8) = *(int *)((local_14 << 0x2) + (arg_0 + 0x78));
	local_24 = (arg_0 + 0x1d0);
	*(int *)local_24 = (*(int *)local_24 + 0x1);
jmp_1530:
	*(int *)(arg_1 + 0xc0) = *(int *)(arg_0 + 0x90);
	*(int *)(arg_1 + 0x94) = *(int *)(arg_0 + 0x44);
	*(int *)(arg_1 + 0xbc) = 0x0;
	local_8 = 0x0;
jmp_154d:
	if (*(int *)((local_8 << 0x2) + (arg_0 + 0x138)) == 0x0) goto jmp_156a;
	local_14 = (arg_1 + 0xbc);
	*(int *)local_14 = (*(int *)local_14 | (0x1 << local_8));
jmp_156a:
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x10) goto jmp_154d;
	*(int *)(arg_1 + 0x9c) = *(int *)(arg_0 + 0x1bc);
	*(int *)(arg_1 + 0xcc) = *(int *)(arg_0 + 0x1b8);
}

/*
=================
BG_PlayerStateToEntityStateExtraPolate

Address: 0x158a
Stack Size: 0x28
=================
*/
void BG_PlayerStateToEntityStateExtraPolate(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[8];
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_c = *(int *)(arg_0 + 0x4);
	if (local_c == 0x5) goto jmp_15a2;
	if (local_c != 0x2) goto jmp_15aa;
jmp_15a2:
	*(int *)(arg_1 + 0x4) = 0xa;
	goto jmp_15bf;
jmp_15aa:
	if (*(int *)(arg_0 + 0xb8) > 0xffffffd8) goto jmp_15b9;
	*(int *)(arg_1 + 0x4) = 0xa;
	goto jmp_15bf;
jmp_15b9:
	*(int *)(arg_1 + 0x4) = 0x1;
jmp_15bf:
	*(int *)arg_1 = *(int *)(arg_0 + 0x8c);
	*(int *)(arg_1 + 0xc) = 0x3;
	block_copy((arg_0 + 0x14), (arg_1 + 0x18), 0xc);
	if (arg_3 == 0x0) goto jmp_1604;
	local_10 = (arg_1 + 0x18);
	*(int *)local_10 = (float)(int)*(int *)local_10;
	local_14 = (arg_1 + 0x1c);
	*(int *)local_14 = (float)(int)*(int *)local_14;
	*(int *)local_18 = (arg_1 + 0x20);
	*(int *)*(int *)local_18 = (float)(int)*(int *)*(int *)local_18;
jmp_1604:
	block_copy((arg_0 + 0x20), (arg_1 + 0x24), 0xc);
	*(int *)(arg_1 + 0x10) = arg_2;
	*(int *)(arg_1 + 0x14) = 0x32;
	*(int *)(arg_1 + 0x30) = 0x1;
	block_copy((arg_0 + 0x98), (arg_1 + 0x3c), 0xc);
	if (arg_3 == 0x0) goto jmp_1657;
	local_10 = (arg_1 + 0x3c);
	*(int *)local_10 = (float)(int)*(int *)local_10;
	local_14 = (arg_1 + 0x40);
	*(int *)local_14 = (float)(int)*(int *)local_14;
	*(int *)local_18 = (arg_1 + 0x44);
	*(int *)*(int *)local_18 = (float)(int)*(int *)*(int *)local_18;
jmp_1657:
	*(int *)(arg_1 + 0x84) = (float)*(int *)(arg_0 + 0x58);
	*(int *)(arg_1 + 0xc4) = *(int *)(arg_0 + 0x4c);
	*(int *)(arg_1 + 0xc8) = *(int *)(arg_0 + 0x54);
	*(int *)(arg_1 + 0xa8) = *(int *)(arg_0 + 0x8c);
	*(int *)(arg_1 + 0x8) = *(int *)(arg_0 + 0x68);
	if (*(int *)(arg_0 + 0xb8) > 0x0) goto jmp_16a1;
	local_10 = (arg_1 + 0x8);
	*(int *)local_10 = (*(int *)local_10 | 0x1);
	goto jmp_16af;
jmp_16a1:
	local_10 = (arg_1 + 0x8);
	*(int *)local_10 = (*(int *)local_10 & 0xfffffffe);
jmp_16af:
	if (*(int *)(arg_0 + 0x80) == 0x0) goto jmp_16cc;
	*(int *)(arg_1 + 0xb4) = *(int *)(arg_0 + 0x80);
	*(int *)(arg_1 + 0xb8) = *(int *)(arg_0 + 0x84);
	goto jmp_1731;
jmp_16cc:
	if (*(int *)(arg_0 + 0x1d0) >= *(int *)(arg_0 + 0x6c)) goto jmp_1731;
	if (*(int *)(arg_0 + 0x1d0) >= (*(int *)(arg_0 + 0x6c) - 0x2)) goto jmp_16f0;
	*(int *)(arg_0 + 0x1d0) = (*(int *)(arg_0 + 0x6c) - 0x2);
jmp_16f0:
	local_20 = (arg_0 + 0x1d0);
	local_14 = (*(int *)local_20 & 0x1);
	*(int *)(arg_1 + 0xb4) = (*(int *)((local_14 << 0x2) + (arg_0 + 0x70)) | ((*(int *)local_20 & 0x3) << 0x8));
	*(int *)(arg_1 + 0xb8) = *(int *)((local_14 << 0x2) + (arg_0 + 0x78));
	local_24 = (arg_0 + 0x1d0);
	*(int *)local_24 = (*(int *)local_24 + 0x1);
jmp_1731:
	*(int *)(arg_1 + 0xc0) = *(int *)(arg_0 + 0x90);
	*(int *)(arg_1 + 0x94) = *(int *)(arg_0 + 0x44);
	*(int *)(arg_1 + 0xbc) = 0x0;
	local_8 = 0x0;
jmp_174e:
	if (*(int *)((local_8 << 0x2) + (arg_0 + 0x138)) == 0x0) goto jmp_176b;
	local_14 = (arg_1 + 0xbc);
	*(int *)local_14 = (*(int *)local_14 | (0x1 << local_8));
jmp_176b:
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x10) goto jmp_174e;
	*(int *)(arg_1 + 0x9c) = *(int *)(arg_0 + 0x1bc);
	*(int *)(arg_1 + 0xcc) = *(int *)(arg_0 + 0x1b8);
}

/*
=================
PM_AddEvent

Address: 0x178b
Stack Size: 0x14
Calls: BG_AddPredictableEventToPlayerstate
Called by: PM_StepSlideMove, PM_Animate, PM_Weapon, PM_BeginWeaponChange, PM_WaterEvents, PM_Footsteps, PM_CrashLand, PM_CheckJump
=================
*/
void PM_AddEvent(int arg_0) {

	BG_AddPredictableEventToPlayerstate(arg_0, 0x0, *(int *)pm);
}

/*
=================
PM_AddTouchEnt

Address: 0x179a
Stack Size: 0x14
Called by: PM_SlideMove, PM_GroundTrace
=================
*/
void PM_AddTouchEnt(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;

	arg_0 = arg_0;
	if (arg_0 != 0x3fe) goto jmp_17a5;
	goto jmp_17f1;
jmp_17a5:
	if (*(int *)(pm + 0x30) != 0x20) goto jmp_17ae;
	goto jmp_17f1;
jmp_17ae:
	local_8 = 0x0;
	goto jmp_17c8;
jmp_17b3:
	if (*(int *)((local_8 << 0x2) + (pm + 0x34)) != arg_0) goto jmp_17c2;
	goto jmp_17f1;
jmp_17c2:
	local_8 = (local_8 + 0x1);
jmp_17c8:
	if (local_8 < *(int *)(pm + 0x30)) goto jmp_17b3;
	local_c = pm;
	*(int *)((*(int *)(local_c + 0x30) << 0x2) + (local_c + 0x34)) = arg_0;
	local_10 = (pm + 0x30);
	*(int *)local_10 = (*(int *)local_10 + 0x1);
jmp_17f1:
}

/*
=================
PM_StartTorsoAnim

Address: 0x17f3
Stack Size: 0x10
Called by: PM_Animate, PM_Weapon, PM_FinishWeaponChange, PM_BeginWeaponChange, PM_ContinueTorsoAnim
=================
*/
void PM_StartTorsoAnim(int arg_0) {
	int		local_8;
	int		local_c;

	if (*(int *)(*(int *)pm + 0x4) < 0x3) goto jmp_17fe;
	goto jmp_1817;
jmp_17fe:
	local_8 = (*(int *)pm + 0x54);
	local_c = 0x80;
	*(int *)local_8 = (((*(int *)local_8 & local_c) ^ local_c) | arg_0);
jmp_1817:
}

/*
=================
PM_StartLegsAnim

Address: 0x1819
Stack Size: 0x10
Called by: PM_ForceLegsAnim, PM_ContinueLegsAnim
=================
*/
void PM_StartLegsAnim(int arg_0) {
	int		local_8;
	int		local_c;

	if (*(int *)(*(int *)pm + 0x4) < 0x3) goto jmp_1824;
	goto jmp_1847;
jmp_1824:
	if (*(int *)(*(int *)pm + 0x48) <= 0x0) goto jmp_182e;
	goto jmp_1847;
jmp_182e:
	local_8 = (*(int *)pm + 0x4c);
	local_c = 0x80;
	*(int *)local_8 = (((*(int *)local_8 & local_c) ^ local_c) | arg_0);
jmp_1847:
}

/*
=================
PM_ContinueLegsAnim

Address: 0x1849
Stack Size: 0xc
Calls: PM_StartLegsAnim
Called by: PM_Footsteps
=================
*/
void PM_ContinueLegsAnim(int arg_0) {

	if ((*(int *)(*(int *)pm + 0x4c) & 0xffffff7f) != arg_0) goto jmp_1857;
	goto jmp_1867;
jmp_1857:
	if (*(int *)(*(int *)pm + 0x48) <= 0x0) goto jmp_1861;
	goto jmp_1867;
jmp_1861:
	PM_StartLegsAnim(arg_0);
jmp_1867:
}

/*
=================
PM_ContinueTorsoAnim

Address: 0x1869
Stack Size: 0xc
Calls: PM_StartTorsoAnim
Called by: PM_TorsoAnimation
=================
*/
void PM_ContinueTorsoAnim(int arg_0) {

	if ((*(int *)(*(int *)pm + 0x54) & 0xffffff7f) != arg_0) goto jmp_1877;
	goto jmp_1887;
jmp_1877:
	if (*(int *)(*(int *)pm + 0x50) <= 0x0) goto jmp_1881;
	goto jmp_1887;
jmp_1881:
	PM_StartTorsoAnim(arg_0);
jmp_1887:
}

/*
=================
PM_ForceLegsAnim

Address: 0x1889
Stack Size: 0xc
Calls: PM_StartLegsAnim
Called by: PM_GroundTrace, PM_GroundTraceMissed, PM_CrashLand, PM_CheckJump
=================
*/
void PM_ForceLegsAnim(int arg_0) {

	*(int *)(*(int *)pm + 0x48) = 0x0;
	PM_StartLegsAnim(arg_0);
}

/*
=================
PM_ClipVelocity

Address: 0x1899
Stack Size: 0x28
Called by: PM_StepSlideMove, PM_SlideMove, PM_WalkMove, PM_AirMove, PM_WaterMove
=================
*/
void PM_ClipVelocity(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_8;
	int		local_c;
	char	local_10[12];
	int		local_1c;
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	local_1c = 0x4;
	local_20 = 0x8;
	*(int *)local_10 = (((*(int *)arg_0 * *(int *)arg_1) + (*(int *)(arg_0 + local_1c) * *(int *)(arg_1 + local_1c))) + (*(int *)(arg_0 + local_20) * *(int *)(arg_1 + local_20)));
	if (*(int *)local_10 >= 0x0) goto jmp_18de;
	*(int *)local_10 = (*(int *)local_10 * arg_3);
	goto jmp_18e5;
jmp_18de:
	*(int *)local_10 = (*(int *)local_10 / arg_3);
jmp_18e5:
	local_8 = 0x0;
jmp_18e8:
	local_24 = (local_8 << 0x2);
	local_c = (*(int *)(local_24 + arg_1) * *(int *)local_10);
	*(int *)(local_24 + arg_2) = (*(int *)(local_24 + arg_0) - local_c);
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x3) goto jmp_18e8;
}

/*
=================
PM_Friction

Address: 0x1914
Stack Size: 0x3c
Calls: VectorLength
Called by: PM_WalkMove, PM_AirMove, PM_FlyMove, PM_WaterMove
=================
*/
void PM_Friction(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	char	local_1c[8];
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;

	local_c = (*(int *)pm + 0x20);
	block_copy(local_c, local_1c, 0xc);
	if (bss_104518 == 0x0) goto jmp_1927;
	local_24 = 0x0;
jmp_1927:
	local_2c = VectorLength(local_1c);
	local_14 = local_2c;
	if (local_14 >= 0x3f800000) goto jmp_1941;
	*(int *)local_c = 0x0;
	*(int *)(local_c + 0x4) = 0x0;
	goto jmp_1a05;
jmp_1941:
	local_18 = 0x0;
	if (*(int *)(pm + 0xd0) > 0x1) goto jmp_1984;
	local_30 = 0x0;
	if (bss_104518 == local_30) goto jmp_1984;
	if ((bss_10454c & 0x2) != local_30) goto jmp_1984;
	if ((*(int *)(*(int *)pm + 0xc) & 0x40) != 0x0) goto jmp_1984;
	if (local_14 >= pm_stopspeed) goto jmp_196f;
	local_34 = pm_stopspeed;
	goto jmp_1973;
jmp_196f:
	local_34 = local_14;
jmp_1973:
	local_28 = local_34;
	local_18 = (local_18 + ((local_28 * pm_friction) * bss_104510));
jmp_1984:
	if (*(int *)(pm + 0xd0) == 0x0) goto jmp_199f;
	local_18 = (local_18 + (((local_14 * pm_waterfriction) * (float)*(int *)(pm + 0xd0)) * bss_104510));
jmp_199f:
	if (*(int *)(*(int *)pm + 0x150) == 0x0) goto jmp_19b4;
	local_18 = (local_18 + ((local_14 * pm_flightfriction) * bss_104510));
jmp_19b4:
	if (*(int *)(*(int *)pm + 0x4) != 0x2) goto jmp_19c9;
	local_18 = (local_18 + ((local_14 * pm_spectatorfriction) * bss_104510));
jmp_19c9:
	local_10 = (local_14 - local_18);
	if (local_10 >= 0x0) goto jmp_19d7;
	local_10 = 0x0;
jmp_19d7:
	local_10 = (local_10 / local_14);
	*(int *)local_c = (*(int *)local_c * local_10);
	local_34 = (local_c + 0x4);
	*(int *)local_34 = (*(int *)local_34 * local_10);
	local_38 = (local_c + 0x8);
	*(int *)local_38 = (*(int *)local_38 * local_10);
jmp_1a05:
}

/*
=================
PM_Accelerate

Address: 0x1a07
Stack Size: 0x28
Called by: PM_NoclipMove, PM_WalkMove, PM_AirMove, PM_FlyMove, PM_WaterMove
=================
*/
void PM_Accelerate(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[8];
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	*(int *)local_18 = *(int *)pm;
	local_14 = (((*(int *)(*(int *)local_18 + 0x20) * *(int *)arg_0) + (*(int *)(*(int *)local_18 + 0x24) * *(int *)(arg_0 + 0x4))) + (*(int *)(*(int *)local_18 + 0x28) * *(int *)(arg_0 + 0x8)));
	local_10 = (arg_1 - local_14);
	if (local_10 > 0x0) goto jmp_1a41;
	goto jmp_1a81;
jmp_1a41:
	local_c = ((arg_2 * bss_104510) * arg_1);
	if (local_c <= local_10) goto jmp_1a54;
	local_c = local_10;
jmp_1a54:
	local_8 = 0x0;
jmp_1a57:
	local_20 = (local_8 << 0x2);
	local_24 = (local_20 + (*(int *)pm + 0x20));
	*(int *)local_24 = (*(int *)local_24 + (local_c * *(int *)(local_20 + arg_0)));
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x3) goto jmp_1a57;
jmp_1a81:
}

/*
=================
PM_CmdScale

Address: 0x1a83
Stack Size: 0x38
Calls: sqrt, abs
Called by: PM_NoclipMove, PM_WalkMove, PM_AirMove, PM_FlyMove, PM_WaterMove
=================
*/
int PM_CmdScale(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	arg_0 = arg_0;
	local_18 = abs((char)*(char *)(arg_0 + 0x15));
	local_c = local_18;
	local_1c = abs((char)*(char *)(arg_0 + 0x16));
	if (local_1c <= local_c) goto jmp_1ab6;
	local_20 = abs((char)*(char *)(arg_0 + 0x16));
	local_c = local_20;
jmp_1ab6:
	local_20 = abs((char)*(char *)(arg_0 + 0x17));
	if (local_20 <= local_c) goto jmp_1ad5;
	local_24 = abs((char)*(char *)(arg_0 + 0x17));
	local_c = local_24;
jmp_1ad5:
	if (local_c != 0x0) goto jmp_1add;
	return 0x0;
jmp_1add:
	local_28 = (char)*(char *)(arg_0 + 0x15);
	local_2c = (char)*(char *)(arg_0 + 0x16);
	local_30 = (char)*(char *)(arg_0 + 0x17);
	local_34 = sqrt((float)(((local_28 * local_28) + (local_2c * local_2c)) + (local_30 * local_30)));
	local_10 = local_34;
	local_14 = (((float)*(int *)(*(int *)pm + 0x34) * (float)local_c) / (0x42fe0000 * local_10));
	return local_14;
}

/*
=================
PM_SetMovementDir

Address: 0x1b27
Stack Size: 0x50
Called by: PM_WalkMove, PM_AirMove
=================
*/
void PM_SetMovementDir(void) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;

	local_8 = pm;
	local_c = 0x0;
	if ((char)*(char *)(local_8 + 0x19) != local_c) goto jmp_1b41;
	if ((char)*(char *)(local_8 + 0x1a) == local_c) goto jmp_1c51;
jmp_1b41:
	local_10 = pm;
	local_14 = 0x0;
	if ((char)*(char *)(local_10 + 0x1a) != local_14) goto jmp_1b63;
	if ((char)*(char *)(local_10 + 0x19) <= local_14) goto jmp_1b63;
	*(int *)(*(int *)pm + 0x58) = 0x0;
	goto jmp_1c71;
jmp_1b63:
	local_18 = pm;
	local_1c = 0x0;
	if ((char)*(char *)(local_18 + 0x1a) >= local_1c) goto jmp_1b85;
	if ((char)*(char *)(local_18 + 0x19) <= local_1c) goto jmp_1b85;
	*(int *)(*(int *)pm + 0x58) = 0x1;
	goto jmp_1c71;
jmp_1b85:
	local_20 = pm;
	local_24 = 0x0;
	if ((char)*(char *)(local_20 + 0x1a) >= local_24) goto jmp_1ba7;
	if ((char)*(char *)(local_20 + 0x19) != local_24) goto jmp_1ba7;
	*(int *)(*(int *)pm + 0x58) = 0x2;
	goto jmp_1c71;
jmp_1ba7:
	local_28 = pm;
	local_2c = 0x0;
	if ((char)*(char *)(local_28 + 0x1a) >= local_2c) goto jmp_1bc9;
	if ((char)*(char *)(local_28 + 0x19) >= local_2c) goto jmp_1bc9;
	*(int *)(*(int *)pm + 0x58) = 0x3;
	goto jmp_1c71;
jmp_1bc9:
	local_30 = pm;
	local_34 = 0x0;
	if ((char)*(char *)(local_30 + 0x1a) != local_34) goto jmp_1beb;
	if ((char)*(char *)(local_30 + 0x19) >= local_34) goto jmp_1beb;
	*(int *)(*(int *)pm + 0x58) = 0x4;
	goto jmp_1c71;
jmp_1beb:
	local_38 = pm;
	local_3c = 0x0;
	if ((char)*(char *)(local_38 + 0x1a) <= local_3c) goto jmp_1c0d;
	if ((char)*(char *)(local_38 + 0x19) >= local_3c) goto jmp_1c0d;
	*(int *)(*(int *)pm + 0x58) = 0x5;
	goto jmp_1c71;
jmp_1c0d:
	local_40 = pm;
	local_44 = 0x0;
	if ((char)*(char *)(local_40 + 0x1a) <= local_44) goto jmp_1c2f;
	if ((char)*(char *)(local_40 + 0x19) != local_44) goto jmp_1c2f;
	*(int *)(*(int *)pm + 0x58) = 0x6;
	goto jmp_1c71;
jmp_1c2f:
	local_48 = pm;
	local_4c = 0x0;
	if ((char)*(char *)(local_48 + 0x1a) <= local_4c) goto jmp_1c71;
	if ((char)*(char *)(local_48 + 0x19) <= local_4c) goto jmp_1c71;
	*(int *)(*(int *)pm + 0x58) = 0x7;
	goto jmp_1c71;
jmp_1c51:
	if (*(int *)(*(int *)pm + 0x58) != 0x2) goto jmp_1c62;
	*(int *)(*(int *)pm + 0x58) = 0x1;
	goto jmp_1c71;
jmp_1c62:
	if (*(int *)(*(int *)pm + 0x58) != 0x6) goto jmp_1c71;
	*(int *)(*(int *)pm + 0x58) = 0x7;
jmp_1c71:
}

/*
=================
PM_CheckJump

Address: 0x1c73
Stack Size: 0x14
Calls: PM_ForceLegsAnim, PM_AddEvent
Called by: PM_WalkMove
=================
*/
int PM_CheckJump(void) {
	int		local_c;
	int		local_10;

	if ((*(int *)(*(int *)pm + 0xc) & 0x200) == 0x0) goto jmp_1c82;
	return 0x0;
jmp_1c82:
	if ((char)*(char *)(pm + 0x1b) >= 0xa) goto jmp_1c8e;
	return 0x0;
jmp_1c8e:
	if ((*(int *)(*(int *)pm + 0xc) & 0x2) == 0x0) goto jmp_1ca2;
	*(char *)(pm + 0x1b) = 0x0;
	return 0x0;
jmp_1ca2:
	bss_10451c = 0x0;
	bss_104518 = 0x0;
	local_c = (*(int *)pm + 0xc);
	*(int *)local_c = (*(int *)local_c | 0x2);
	*(int *)(*(int *)pm + 0x44) = 0x3ff;
	*(int *)(*(int *)pm + 0x28) = 0x43870000;
	PM_AddEvent(0xe);
	if ((char)*(char *)(pm + 0x19) < 0x0) goto jmp_1ce8;
	PM_ForceLegsAnim(0x12);
	local_10 = (*(int *)pm + 0xc);
	*(int *)local_10 = (*(int *)local_10 & 0xfffffff7);
	goto jmp_1cfc;
jmp_1ce8:
	PM_ForceLegsAnim(0x14);
	local_10 = (*(int *)pm + 0xc);
	*(int *)local_10 = (*(int *)local_10 | 0x8);
jmp_1cfc:
	return 0x1;
}

/*
=================
PM_CheckWaterJump

Address: 0x1d00
Stack Size: 0x48
Calls: VectorNormalize
Called by: PM_WaterMove
=================
*/
int PM_CheckWaterJump(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;

	if (*(int *)(*(int *)pm + 0x10) == 0x0) goto jmp_1d0d;
	return 0x0;
jmp_1d0d:
	if (*(int *)(pm + 0xd0) == 0x2) goto jmp_1d18;
	return 0x0;
jmp_1d18:
	local_1c = pml;
	local_20 = bss_1044f0;
	local_24 = 0x0;
	VectorNormalize(&local_1c);
	local_2c = pm;
	local_30 = 0x41f00000;
	local_10 = (*(int *)(*(int *)local_2c + 0x14) + (local_30 * local_1c));
	local_14 = (*(int *)(*(int *)local_2c + 0x18) + (local_30 * local_20));
	local_18 = (*(int *)(*(int *)pm + 0x1c) + (0x41f00000 * local_24));
	local_18 = (local_18 + 0x40800000);
#define next_call_arg_0 "&local_10"
	local_34 = pm;
#define next_call_arg_1 "*(int *)(*(int *)local_34 + 0x8c)"
	local_38 = (*(*(int *)(local_34 + 0xe4)))();
	local_28 = local_38;
	if ((local_28 & 0x1) != 0x0) goto jmp_1d81;
	return 0x0;
jmp_1d81:
	local_18 = (local_18 + 0x41800000);
#define next_call_arg_0 "&local_10"
	local_3c = pm;
#define next_call_arg_1 "*(int *)(*(int *)local_3c + 0x8c)"
	local_40 = (*(*(int *)(local_3c + 0xe4)))();
	local_28 = local_40;
	if ((local_28 & 0x2010001) == 0x0) goto jmp_1daa;
	return 0x0;
jmp_1daa:
	*(int *)(*(int *)pm + 0x20) = (0x43480000 * pml);
	*(int *)(*(int *)pm + 0x24) = (0x43480000 * bss_1044f0);
	*(int *)(*(int *)pm + 0x28) = (0x43480000 * bss_1044f4);
	*(int *)(*(int *)pm + 0x28) = 0x43af0000;
	local_44 = (*(int *)pm + 0xc);
	*(int *)local_44 = (*(int *)local_44 | 0x100);
	*(int *)(*(int *)pm + 0x10) = 0x7d0;
	return 0x1;
}

/*
=================
PM_WaterJumpMove

Address: 0x1de9
Stack Size: 0x18
Calls: PM_StepSlideMove
Called by: PmoveSingle, PM_WaterMove
=================
*/
void PM_WaterJumpMove(void) {
	int		local_c;
	int		local_10;
	int		local_14;

	PM_StepSlideMove(0x1);
	local_c = *(int *)pm;
	local_10 = (local_c + 0x28);
	*(int *)local_10 = (*(int *)local_10 - ((float)*(int *)(local_c + 0x30) * bss_104510));
	if (*(int *)(*(int *)pm + 0x28) >= 0x0) goto jmp_1e28;
	local_14 = (*(int *)pm + 0xc);
	*(int *)local_14 = (*(int *)local_14 & 0xfffffe9f);
	*(int *)(*(int *)pm + 0x10) = 0x0;
jmp_1e28:
}

/*
=================
PM_WaterMove

Address: 0x1e2a
Stack Size: 0x64
Calls: PM_SlideMove, PM_ClipVelocity, VectorLength, PM_Accelerate, VectorNormalize, PM_CmdScale, PM_Friction, PM_WaterJumpMove, PM_CheckWaterJump
Called by: PmoveSingle, PM_WalkMove
=================
*/
void PM_WaterMove(void) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[12];
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;

	local_40 = PM_CheckWaterJump();
	if (local_40 == 0x0) goto jmp_1e38;
	PM_WaterJumpMove();
	goto jmp_1f5e;
jmp_1e38:
	PM_Friction();
	local_44 = PM_CmdScale((pm + 0x4));
	local_1c = local_44;
	if (local_1c != 0x0) goto jmp_1e5c;
	local_48 = 0x0;
	local_20 = local_48;
	local_24 = local_48;
	local_28 = 0xc2700000;
	goto jmp_1ea8;
jmp_1e5c:
	local_18 = 0x0;
jmp_1e5f:
	local_48 = (local_18 << 0x2);
	local_50 = pm;
	*(int *)(local_48 + &local_20) = (((local_1c * *(int *)(local_48 + 0x1044ec)) * (float)(char)*(char *)(local_50 + 0x19)) + ((local_1c * *(int *)(local_48 + 0x1044f8)) * (float)(char)*(char *)(local_50 + 0x1a)));
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x3) goto jmp_1e5f;
	local_28 = (local_28 + (local_1c * (float)(char)*(char *)(pm + 0x1b)));
jmp_1ea8:
	block_copy(&local_20, local_30, 0xc);
	local_48 = VectorNormalize(local_30);
	local_2c = local_48;
	if (local_2c <= ((float)*(int *)(*(int *)pm + 0x34) * pm_swimScale)) goto jmp_1ece;
	local_2c = ((float)*(int *)(*(int *)pm + 0x34) * pm_swimScale);
jmp_1ece:
	PM_Accelerate(local_30, local_2c, pm_wateraccelerate);
	if (bss_10451c == 0x0) goto jmp_1f59;
	local_4c = *(int *)pm;
	if ((((*(int *)(local_4c + 0x20) * bss_104538) + (*(int *)(local_4c + 0x24) * bss_10453c)) + (*(int *)(local_4c + 0x28) * bss_104540)) >= 0x0) goto jmp_1f59;
	local_50 = VectorLength((*(int *)pm + 0x20));
	local_3c = local_50;
	local_54 = (*(int *)pm + 0x20);
	PM_ClipVelocity(local_54, 0x104538, local_54, 0x3f8020c5);
	VectorNormalize((*(int *)pm + 0x20));
	local_58 = (*(int *)pm + 0x20);
	*(int *)local_58 = (*(int *)local_58 * local_3c);
	local_5c = (*(int *)pm + 0x24);
	*(int *)local_5c = (*(int *)local_5c * local_3c);
	local_60 = (*(int *)pm + 0x28);
	*(int *)local_60 = (*(int *)local_60 * local_3c);
jmp_1f59:
	PM_SlideMove(0x0);
jmp_1f5e:
}

/*
=================
PM_FlyMove

Address: 0x1f60
Stack Size: 0x48
Calls: PM_StepSlideMove, PM_Accelerate, VectorNormalize, PM_CmdScale, PM_Friction
Called by: PmoveSingle
=================
*/
void PM_FlyMove(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[12];
	int		local_34;
	int		local_38;
	char	local_3c[8];
	int		local_44;

	PM_Friction();
	local_38 = PM_CmdScale((pm + 0x4));
	local_18 = local_38;
	if (local_18 != 0x0) goto jmp_1f85;
	*(int *)local_3c = 0x0;
	local_1c = *(int *)local_3c;
	local_20 = *(int *)local_3c;
	local_24 = 0x0;
	goto jmp_1fd1;
jmp_1f85:
	local_14 = 0x0;
jmp_1f88:
	*(int *)local_3c = (local_14 << 0x2);
	local_44 = pm;
	*(int *)(*(int *)local_3c + &local_1c) = (((local_18 * *(int *)(*(int *)local_3c + 0x1044ec)) * (float)(char)*(char *)(local_44 + 0x19)) + ((local_18 * *(int *)(*(int *)local_3c + 0x1044f8)) * (float)(char)*(char *)(local_44 + 0x1a)));
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x3) goto jmp_1f88;
	local_24 = (local_24 + (local_18 * (float)(char)*(char *)(pm + 0x1b)));
jmp_1fd1:
	block_copy(&local_1c, local_28, 0xc);
	*(int *)local_3c = VectorNormalize(local_28);
	local_34 = *(int *)local_3c;
	PM_Accelerate(local_28, local_34, pm_flyaccelerate);
	PM_StepSlideMove(0x0);
}

/*
=================
PM_AirMove

Address: 0x1ff0
Stack Size: 0x6c
Calls: PM_StepSlideMove, PM_ClipVelocity, PM_Accelerate, VectorNormalize, PM_SetMovementDir, PM_CmdScale, PM_Friction
Called by: PmoveSingle, PM_WalkMove
=================
*/
void PM_AirMove(void) {
	int		local_18;
	char	local_1c[8];
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[12];
	int		local_3c;
	int		local_40;
	char	local_44[24];
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;

	PM_Friction();
	local_5c = pm;
	local_28 = (float)(char)*(char *)(local_5c + 0x19);
	local_2c = (float)(char)*(char *)(local_5c + 0x1a);
	block_copy((local_5c + 0x4), local_44, 0x18);
	local_60 = PM_CmdScale(local_44);
	local_40 = local_60;
	PM_SetMovementDir();
	bss_1044f4 = 0x0;
	bss_104500 = 0x0;
	VectorNormalize(0x1044ec);
	VectorNormalize(0x1044f8);
	local_18 = 0x0;
jmp_2030:
	local_64 = (local_18 << 0x2);
	*(int *)(local_64 + local_1c) = ((*(int *)(local_64 + 0x1044ec) * local_28) + (*(int *)(local_64 + 0x1044f8) * local_2c));
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x2) goto jmp_2030;
	local_24 = 0x0;
	block_copy(local_1c, local_30, 0xc);
	local_64 = VectorNormalize(local_30);
	local_3c = local_64;
	local_3c = (local_3c * local_40);
	PM_Accelerate(local_30, local_3c, pm_airaccelerate);
	if (bss_10451c == 0x0) goto jmp_2090;
	local_68 = (*(int *)pm + 0x20);
	PM_ClipVelocity(local_68, 0x104538, local_68, 0x3f8020c5);
jmp_2090:
	PM_StepSlideMove(0x1);
}

/*
=================
PM_GrappleMove

Address: 0x2097
Stack Size: 0x40
Calls: VectorNormalize, VectorLength
Called by: PmoveSingle
=================
*/
void PM_GrappleMove(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;

	local_28 = 0xc1800000;
	local_18 = (local_28 * pml);
	local_1c = (local_28 * bss_1044f0);
	local_20 = (0xc1800000 * bss_1044f4);
	local_2c = pm;
	local_18 = (*(int *)(*(int *)local_2c + 0x5c) + local_18);
	local_1c = (*(int *)(*(int *)local_2c + 0x60) + local_1c);
	local_20 = (*(int *)(*(int *)pm + 0x64) + local_20);
	local_30 = pm;
	local_c = (local_18 - *(int *)(*(int *)local_30 + 0x14));
	local_10 = (local_1c - *(int *)(*(int *)local_30 + 0x18));
	local_14 = (local_20 - *(int *)(*(int *)pm + 0x1c));
	local_34 = VectorLength(&local_c);
	local_24 = local_34;
	VectorNormalize(&local_c);
	if (local_24 > 0x42c80000) goto jmp_212b;
	local_38 = (0x41200000 * local_24);
	local_c = (local_c * local_38);
	local_10 = (local_10 * local_38);
	local_14 = (local_14 * (0x41200000 * local_24));
	goto jmp_2142;
jmp_212b:
	local_3c = 0x44480000;
	local_c = (local_3c * local_c);
	local_10 = (local_3c * local_10);
	local_14 = (0x44480000 * local_14);
jmp_2142:
	block_copy(&local_c, (*(int *)pm + 0x20), 0xc);
	bss_10451c = 0x0;
}

/*
=================
PM_WalkMove

Address: 0x214e
Stack Size: 0x9c
Calls: PM_StepSlideMove, VectorLength, PM_Accelerate, VectorNormalize, PM_ClipVelocity, PM_SetMovementDir, PM_CmdScale, PM_Friction, PM_AirMove, PM_CheckJump, PM_WaterMove
Called by: PmoveSingle
=================
*/
void PM_WalkMove(void) {
	int		local_18;
	char	local_1c[12];
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[12];
	int		local_44;
	char	local_48[24];
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;

	if (*(int *)(pm + 0xd0) <= 0x2) goto jmp_216e;
	if ((((pml * bss_104538) + (bss_1044f0 * bss_10453c)) + (bss_1044f4 * bss_104540)) <= 0x0) goto jmp_216e;
	PM_WaterMove();
	goto jmp_2350;
jmp_216e:
	local_64 = PM_CheckJump();
	if (local_64 == 0x0) goto jmp_2187;
	if (*(int *)(pm + 0xd0) <= 0x1) goto jmp_2182;
	PM_WaterMove();
	goto jmp_2350;
jmp_2182:
	PM_AirMove();
	goto jmp_2350;
jmp_2187:
	PM_Friction();
	local_68 = pm;
	local_28 = (float)(char)*(char *)(local_68 + 0x19);
	local_2c = (float)(char)*(char *)(local_68 + 0x1a);
	block_copy((local_68 + 0x4), local_48, 0x18);
	local_6c = PM_CmdScale(local_48);
	local_44 = local_6c;
	PM_SetMovementDir();
	bss_1044f4 = 0x0;
	bss_104500 = 0x0;
	local_70 = 0x1044ec;
	PM_ClipVelocity(local_70, 0x104538, local_70, 0x3f8020c5);
	PM_ClipVelocity(0x1044f8, 0x104538, 0x1044f8, 0x3f8020c5);
	VectorNormalize(0x1044ec);
	VectorNormalize(0x1044f8);
	local_18 = 0x0;
jmp_21e1:
	local_74 = (local_18 << 0x2);
	*(int *)(local_74 + local_1c) = ((*(int *)(local_74 + 0x1044ec) * local_28) + (*(int *)(local_74 + 0x1044f8) * local_2c));
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x3) goto jmp_21e1;
	block_copy(local_1c, local_38, 0xc);
	local_74 = VectorNormalize(local_38);
	local_30 = local_74;
	local_30 = (local_30 * local_44);
	if ((*(int *)(*(int *)pm + 0xc) & 0x1) == 0x0) goto jmp_223e;
	if (local_30 <= ((float)*(int *)(*(int *)pm + 0x34) * pm_duckScale)) goto jmp_223e;
	local_30 = ((float)*(int *)(*(int *)pm + 0x34) * pm_duckScale);
jmp_223e:
	if (*(int *)(pm + 0xd0) == 0x0) goto jmp_227c;
	local_7c = pm;
	local_78 = ((float)*(int *)(local_7c + 0xd0) / 0x40400000);
	local_80 = 0x3f800000;
	local_78 = (local_80 - ((local_80 - pm_swimScale) * local_78));
	if (local_30 <= ((float)*(int *)(*(int *)local_7c + 0x34) * local_78)) goto jmp_227c;
	local_30 = ((float)*(int *)(*(int *)pm + 0x34) * local_78);
jmp_227c:
	local_78 = 0x0;
	if ((bss_10454c & 0x2) != local_78) goto jmp_2291;
	if ((*(int *)(*(int *)pm + 0xc) & 0x40) == local_78) goto jmp_2297;
jmp_2291:
	local_60 = pm_airaccelerate;
	goto jmp_229b;
jmp_2297:
	local_60 = pm_accelerate;
jmp_229b:
	PM_Accelerate(local_38, local_30, local_60);
	local_7c = 0x0;
	if ((bss_10454c & 0x2) != local_7c) goto jmp_22bb;
	if ((*(int *)(*(int *)pm + 0xc) & 0x40) == local_7c) goto jmp_22d6;
jmp_22bb:
	local_80 = *(int *)pm;
	local_84 = (local_80 + 0x28);
	*(int *)local_84 = (*(int *)local_84 - ((float)*(int *)(local_80 + 0x30) * bss_104510));
jmp_22d6:
	local_80 = VectorLength((*(int *)pm + 0x20));
	local_34 = local_80;
	local_84 = (*(int *)pm + 0x20);
	PM_ClipVelocity(local_84, 0x104538, local_84, 0x3f8020c5);
	VectorNormalize((*(int *)pm + 0x20));
	local_88 = (*(int *)pm + 0x20);
	*(int *)local_88 = (*(int *)local_88 * local_34);
	local_8c = (*(int *)pm + 0x24);
	*(int *)local_8c = (*(int *)local_8c * local_34);
	local_90 = (*(int *)pm + 0x28);
	*(int *)local_90 = (*(int *)local_90 * local_34);
	local_94 = *(int *)pm;
	local_98 = 0x0;
	if (*(int *)(local_94 + 0x20) != local_98) goto jmp_234b;
	if (*(int *)(local_94 + 0x24) != local_98) goto jmp_234b;
	goto jmp_2350;
jmp_234b:
	PM_StepSlideMove(0x0);
jmp_2350:
}

/*
=================
PM_DeadMove

Address: 0x2352
Stack Size: 0x20
Calls: VectorNormalize, VectorLength
Called by: PmoveSingle
=================
*/
void PM_DeadMove(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	if (bss_104518 != 0x0) goto jmp_2359;
	goto jmp_23c9;
jmp_2359:
	local_10 = VectorLength((*(int *)pm + 0x20));
	local_c = local_10;
	local_c = (local_c - 0x41a00000);
	if (local_c > 0x0) goto jmp_2390;
	local_14 = *(int *)pm;
	local_18 = 0x0;
	*(int *)(local_14 + 0x28) = local_18;
	*(int *)(local_14 + 0x24) = local_18;
	*(int *)(local_14 + 0x20) = local_18;
	goto jmp_23c9;
jmp_2390:
	VectorNormalize((*(int *)pm + 0x20));
	local_14 = (*(int *)pm + 0x20);
	*(int *)local_14 = (*(int *)local_14 * local_c);
	local_18 = (*(int *)pm + 0x24);
	*(int *)local_18 = (*(int *)local_18 * local_c);
	local_1c = (*(int *)pm + 0x28);
	*(int *)local_1c = (*(int *)local_1c * local_c);
jmp_23c9:
}

/*
=================
PM_NoclipMove

Address: 0x23cb
Stack Size: 0x80
Calls: PM_Accelerate, VectorNormalize, PM_CmdScale, VectorLength
Called by: PmoveSingle
=================
*/
void PM_NoclipMove(void) {
	int		local_14;
	char	local_18[8];
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	char	local_34[12];
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;

	*(int *)(*(int *)pm + 0xa4) = 0x1a;
	local_54 = VectorLength((*(int *)pm + 0x20));
	local_2c = local_54;
	if (local_2c >= 0x3f800000) goto jmp_23ee;
	block_copy(&vec3_origin, (*(int *)pm + 0x20), 0xc);
	goto jmp_245c;
jmp_23ee:
	local_48 = 0x0;
	local_4c = (0x3fc00000 * pm_friction);
	if (local_2c >= pm_stopspeed) goto jmp_2402;
	local_58 = pm_stopspeed;
	goto jmp_2406;
jmp_2402:
	local_58 = local_2c;
jmp_2406:
	local_50 = local_58;
	local_48 = (local_48 + ((local_50 * local_4c) * bss_104510));
	local_30 = (local_2c - local_48);
	if (local_30 >= 0x0) goto jmp_2425;
	local_30 = 0x0;
jmp_2425:
	local_30 = (local_30 / local_2c);
	local_5c = (*(int *)pm + 0x20);
	*(int *)local_5c = (*(int *)local_5c * local_30);
	local_60 = (*(int *)pm + 0x24);
	*(int *)local_60 = (*(int *)local_60 * local_30);
	local_64 = (*(int *)pm + 0x28);
	*(int *)local_64 = (*(int *)local_64 * local_30);
jmp_245c:
	local_58 = PM_CmdScale((pm + 0x4));
	local_44 = local_58;
	local_5c = pm;
	local_24 = (float)(char)*(char *)(local_5c + 0x19);
	local_28 = (float)(char)*(char *)(local_5c + 0x1a);
	local_14 = 0x0;
jmp_2482:
	local_60 = (local_14 << 0x2);
	*(int *)(local_60 + local_18) = ((*(int *)(local_60 + 0x1044ec) * local_24) + (*(int *)(local_60 + 0x1044f8) * local_28));
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x3) goto jmp_2482;
	local_20 = (local_20 + (float)(char)*(char *)(pm + 0x1b));
	block_copy(local_18, local_34, 0xc);
	local_64 = VectorNormalize(local_34);
	local_40 = local_64;
	local_40 = (local_40 * local_44);
	PM_Accelerate(local_34, local_40, pm_accelerate);
	local_68 = *(int *)pm;
	local_6c = (local_68 + 0x14);
	*(int *)local_6c = (*(int *)local_6c + (*(int *)(local_68 + 0x20) * bss_104510));
	local_70 = *(int *)pm;
	local_74 = (local_70 + 0x18);
	*(int *)local_74 = (*(int *)local_74 + (*(int *)(local_70 + 0x24) * bss_104510));
	local_78 = *(int *)pm;
	local_7c = (local_78 + 0x1c);
	*(int *)local_7c = (*(int *)local_7c + (*(int *)(local_78 + 0x28) * bss_104510));
}

/*
=================
PM_FootstepForSurface

Address: 0x2523
Stack Size: 0x8
Called by: PM_Footsteps, PM_CrashLand
=================
*/
int PM_FootstepForSurface(void) {

	if ((bss_10454c & 0x2000) == 0x0) goto jmp_252e;
	return 0x0;
jmp_252e:
	if ((bss_10454c & 0x1000) == 0x0) goto jmp_2538;
	return 0x2;
jmp_2538:
	return 0x1;
}

/*
=================
PM_CrashLand

Address: 0x253c
Stack Size: 0x44
Calls: sqrt, PM_FootstepForSurface, PM_AddEvent, PM_ForceLegsAnim
Called by: PM_GroundTrace
=================
*/
void PM_CrashLand(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[8];
	char	local_38[8];
	int		local_40;

	if ((*(int *)(*(int *)pm + 0xc) & 0x8) == 0x0) goto jmp_254e;
	PM_ForceLegsAnim(0x15);
	goto jmp_2553;
jmp_254e:
	PM_ForceLegsAnim(0x13);
jmp_2553:
	*(int *)(*(int *)pm + 0x48) = 0x82;
	*(int *)local_30 = pm;
	local_24 = (*(int *)(*(int *)*(int *)local_30 + 0x1c) - bss_104564);
	local_14 = bss_104570;
	local_18 = (float)-*(int *)(*(int *)*(int *)local_30 + 0x30);
	local_1c = (local_18 / 0x40000000);
	local_10 = local_14;
	local_2c = -local_24;
	local_20 = ((local_10 * local_10) - ((0x40800000 * local_1c) * local_2c));
	if (local_20 >= 0x0) goto jmp_259b;
	goto jmp_263b;
jmp_259b:
	*(int *)local_38 = sqrt(local_20);
	local_28 = ((-local_10 - *(int *)local_38) / (0x40000000 * local_1c));
	local_c = (local_14 + (local_28 * local_18));
	local_c = (0x38d1b717 * (local_c * local_c));
	if ((*(int *)(*(int *)pm + 0xc) & 0x1) == 0x0) goto jmp_25d2;
	local_c = (0x40000000 * local_c);
jmp_25d2:
	if (*(int *)(pm + 0xd0) != 0x3) goto jmp_25db;
	goto jmp_263b;
jmp_25db:
	if (*(int *)(pm + 0xd0) != 0x2) goto jmp_25e8;
	local_c = (0x3e800000 * local_c);
jmp_25e8:
	if (*(int *)(pm + 0xd0) != 0x1) goto jmp_25f5;
	local_c = (0x3f000000 * local_c);
jmp_25f5:
	if (local_c >= 0x3f800000) goto jmp_25fb;
	goto jmp_263b;
jmp_25fb:
	if ((bss_10454c & 0x1) != 0x0) goto jmp_2634;
	if (local_c <= 0x42700000) goto jmp_260c;
	PM_AddEvent(0xc);
	goto jmp_2634;
jmp_260c:
	if (local_c <= 0x42200000) goto jmp_261f;
	if (*(int *)(*(int *)pm + 0xb8) <= 0x0) goto jmp_2634;
	PM_AddEvent(0xb);
	goto jmp_2634;
jmp_261f:
	if (local_c <= 0x40e00000) goto jmp_262a;
	PM_AddEvent(0xa);
	goto jmp_2634;
jmp_262a:
	local_40 = PM_FootstepForSurface();
	PM_AddEvent(local_40);
jmp_2634:
	*(int *)(*(int *)pm + 0x8) = 0x0;
jmp_263b:
}

/*
=================
PM_CorrectAllSolid

Address: 0x263d
Stack Size: 0x4c
Calls: Com_Printf
Called by: PM_GroundTrace
=================
*/
int PM_CorrectAllSolid(int arg_0) {
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;

	arg_0 = arg_0;
	if (*(int *)(pm + 0x20) == 0x0) goto jmp_2651;
	Com_Printf(0x50b4, c_pmove);
jmp_2651:
	local_38 = 0xffffffff;
jmp_2654:
	local_34 = 0xffffffff;
jmp_2657:
	local_30 = 0xffffffff;
jmp_265a:
	block_copy((*(int *)pm + 0x14), &local_24, 0xc);
	local_24 = (local_24 + (float)local_38);
	local_28 = (local_28 + (float)local_34);
	local_2c = (local_2c + (float)local_30);
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "&local_24"
	local_3c = pm;
#define next_call_arg_2 "(local_3c + 0xb4)"
#define next_call_arg_3 "(local_3c + 0xc0)"
#define next_call_arg_4 "&local_24"
#define next_call_arg_5 "*(int *)(*(int *)local_3c + 0x8c)"
#define next_call_arg_6 "*(int *)(local_3c + 0x1c)"
	(*(*(int *)(local_3c + 0xe0)))();
	if (*(int *)arg_0 != 0x0) goto jmp_26fd;
	local_40 = pm;
	local_24 = *(int *)(*(int *)local_40 + 0x14);
	local_28 = *(int *)(*(int *)local_40 + 0x18);
	local_2c = (*(int *)(*(int *)pm + 0x1c) - 0x3e800000);
#define next_call_arg_0 "arg_0"
	local_44 = pm;
	local_48 = *(int *)local_44;
#define next_call_arg_1 "(local_48 + 0x14)"
#define next_call_arg_2 "(local_44 + 0xb4)"
#define next_call_arg_3 "(local_44 + 0xc0)"
#define next_call_arg_4 "&local_24"
#define next_call_arg_5 "*(int *)(local_48 + 0x8c)"
#define next_call_arg_6 "*(int *)(local_44 + 0x1c)"
	(*(*(int *)(local_44 + 0xe0)))();
	block_copy(arg_0, bss_104520, 0x38);
	return 0x1;
jmp_26fd:
	local_30 = (local_30 + 0x1);
	if (local_30 <= 0x1) goto jmp_265a;
	local_34 = (local_34 + 0x1);
	if (local_34 <= 0x1) goto jmp_2657;
	local_38 = (local_38 + 0x1);
	if (local_38 <= 0x1) goto jmp_2654;
	*(int *)(*(int *)pm + 0x44) = 0x3ff;
	bss_10451c = 0x0;
	bss_104518 = 0x0;
	return 0x0;
}

/*
=================
PM_GroundTraceMissed

Address: 0x272c
Stack Size: 0x74
Calls: PM_ForceLegsAnim, Com_Printf
Called by: PM_GroundTrace
=================
*/
void PM_GroundTraceMissed(void) {
	char	local_24[8];
	int		local_2c;
	char	local_30[8];
	char	local_38[48];
	int		local_68;
	int		local_6c;
	int		local_70;

	if (*(int *)(*(int *)pm + 0x44) == 0x3ff) goto jmp_27b6;
	if (*(int *)(pm + 0x20) == 0x0) goto jmp_2744;
	Com_Printf(0x50ab, c_pmove);
jmp_2744:
	block_copy((*(int *)pm + 0x14), local_24, 0xc);
	local_2c = (local_2c - 0x42800000);
#define next_call_arg_0 "local_30"
	local_68 = pm;
	local_6c = *(int *)local_68;
#define next_call_arg_1 "(local_6c + 0x14)"
#define next_call_arg_2 "(local_68 + 0xb4)"
#define next_call_arg_3 "(local_68 + 0xc0)"
#define next_call_arg_4 "local_24"
#define next_call_arg_5 "*(int *)(local_6c + 0x8c)"
#define next_call_arg_6 "*(int *)(local_68 + 0x1c)"
	(*(*(int *)(local_68 + 0xe0)))();
	if (*(int *)local_38 != 0x3f800000) goto jmp_27b6;
	if ((char)*(char *)(pm + 0x19) < 0x0) goto jmp_27a2;
	PM_ForceLegsAnim(0x12);
	local_70 = (*(int *)pm + 0xc);
	*(int *)local_70 = (*(int *)local_70 & 0xfffffff7);
	goto jmp_27b6;
jmp_27a2:
	PM_ForceLegsAnim(0x14);
	local_70 = (*(int *)pm + 0xc);
	*(int *)local_70 = (*(int *)local_70 | 0x8);
jmp_27b6:
	*(int *)(*(int *)pm + 0x44) = 0x3ff;
	bss_10451c = 0x0;
	bss_104518 = 0x0;
}

/*
=================
PM_GroundTrace

Address: 0x27c5
Stack Size: 0x80
Calls: PM_AddTouchEnt, PM_CrashLand, PM_ForceLegsAnim, Com_Printf, PM_GroundTraceMissed, PM_CorrectAllSolid
Called by: PmoveSingle
=================
*/
void PM_GroundTrace(void) {
	char	local_24[8];
	char	local_2c[16];
	int		local_3c;
	int		local_40;
	char	local_44[20];
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;

	local_68 = pm;
	local_5c = *(int *)(*(int *)local_68 + 0x14);
	local_60 = *(int *)(*(int *)local_68 + 0x18);
	local_64 = (*(int *)(*(int *)pm + 0x1c) - 0x3e800000);
#define next_call_arg_0 "local_24"
	local_6c = pm;
	local_70 = *(int *)local_6c;
#define next_call_arg_1 "(local_70 + 0x14)"
#define next_call_arg_2 "(local_6c + 0xb4)"
#define next_call_arg_3 "(local_6c + 0xc0)"
#define next_call_arg_4 "&local_5c"
#define next_call_arg_5 "*(int *)(local_70 + 0x8c)"
#define next_call_arg_6 "*(int *)(local_6c + 0x1c)"
	(*(*(int *)(local_6c + 0xe0)))();
	block_copy(local_24, bss_104520, 0x38);
	if (*(int *)local_24 == 0x0) goto jmp_2826;
	local_74 = PM_CorrectAllSolid(local_24);
	if (local_74 != 0x0) goto jmp_2826;
	goto jmp_2938;
jmp_2826:
	if (*(int *)local_2c != 0x3f800000) goto jmp_2835;
	PM_GroundTraceMissed();
	bss_10451c = 0x0;
	bss_104518 = 0x0;
	goto jmp_2938;
jmp_2835:
	local_74 = *(int *)pm;
	local_78 = *(int *)(local_74 + 0x28);
	if (local_78 <= 0x0) goto jmp_28ae;
	if ((((*(int *)(local_74 + 0x20) * local_3c) + (*(int *)(local_74 + 0x24) * local_40)) + (local_78 * *(int *)local_44)) <= 0x41200000) goto jmp_28ae;
	if (*(int *)(pm + 0x20) == 0x0) goto jmp_286d;
	Com_Printf(0x509f, c_pmove);
jmp_286d:
	if ((char)*(char *)(pm + 0x19) < 0x0) goto jmp_288b;
	PM_ForceLegsAnim(0x12);
	local_7c = (*(int *)pm + 0xc);
	*(int *)local_7c = (*(int *)local_7c & 0xfffffff7);
	goto jmp_289f;
jmp_288b:
	PM_ForceLegsAnim(0x14);
	local_7c = (*(int *)pm + 0xc);
	*(int *)local_7c = (*(int *)local_7c | 0x8);
jmp_289f:
	*(int *)(*(int *)pm + 0x44) = 0x3ff;
	bss_10451c = 0x0;
	bss_104518 = 0x0;
	goto jmp_2938;
jmp_28ae:
	if (*(int *)local_44 >= 0x3f333333) goto jmp_28d0;
	if (*(int *)(pm + 0x20) == 0x0) goto jmp_28c1;
	Com_Printf(0x5095, c_pmove);
jmp_28c1:
	*(int *)(*(int *)pm + 0x44) = 0x3ff;
	bss_10451c = 0x1;
	bss_104518 = 0x0;
	goto jmp_2938;
jmp_28d0:
	bss_10451c = 0x1;
	bss_104518 = 0x1;
	if ((*(int *)(*(int *)pm + 0xc) & 0x100) == 0x0) goto jmp_28f6;
	local_7c = (*(int *)pm + 0xc);
	*(int *)local_7c = (*(int *)local_7c & 0xfffffedf);
	*(int *)(*(int *)pm + 0x10) = 0x0;
jmp_28f6:
	if (*(int *)(*(int *)pm + 0x44) != 0x3ff) goto jmp_292a;
	if (*(int *)(pm + 0x20) == 0x0) goto jmp_290d;
	Com_Printf(0x508c, c_pmove);
jmp_290d:
	PM_CrashLand();
	if (bss_104570 >= 0xc3480000) goto jmp_292a;
	local_7c = (*(int *)pm + 0xc);
	*(int *)local_7c = (*(int *)local_7c | 0x20);
	*(int *)(*(int *)pm + 0x10) = 0xfa;
jmp_292a:
	*(int *)(*(int *)pm + 0x44) = local_58;
	PM_AddTouchEnt(local_58);
jmp_2938:
}

/*
=================
PM_SetWaterLevel

Address: 0x293a
Stack Size: 0x48
Called by: PmoveSingle
=================
*/
void PM_SetWaterLevel(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;

	*(int *)(pm + 0xd0) = 0x0;
	*(int *)(pm + 0xcc) = 0x0;
	local_28 = pm;
	local_10 = *(int *)(*(int *)local_28 + 0x14);
	local_14 = *(int *)(*(int *)local_28 + 0x18);
	local_18 = ((*(int *)(*(int *)pm + 0x1c) + 0xc1c00000) + 0x3f800000);
#define next_call_arg_0 "&local_10"
	local_2c = pm;
#define next_call_arg_1 "*(int *)(*(int *)local_2c + 0x8c)"
	local_30 = (*(*(int *)(local_2c + 0xe4)))();
	local_1c = local_30;
	if ((local_1c & 0x38) == 0x0) goto jmp_2a0d;
	local_34 = pm;
	local_20 = (*(int *)(*(int *)local_34 + 0xa4) - 0xffffffe8);
	local_24 = (local_20 / 0x2);
	*(int *)(local_34 + 0xcc) = local_1c;
	*(int *)(pm + 0xd0) = 0x1;
	local_18 = ((*(int *)(*(int *)pm + 0x1c) + 0xc1c00000) + (float)local_24);
#define next_call_arg_0 "&local_10"
	local_38 = pm;
#define next_call_arg_1 "*(int *)(*(int *)local_38 + 0x8c)"
	local_3c = (*(*(int *)(local_38 + 0xe4)))();
	local_1c = local_3c;
	if ((local_1c & 0x38) == 0x0) goto jmp_2a0d;
	*(int *)(pm + 0xd0) = 0x2;
	local_18 = ((*(int *)(*(int *)pm + 0x1c) + 0xc1c00000) + (float)local_20);
#define next_call_arg_0 "&local_10"
	local_40 = pm;
#define next_call_arg_1 "*(int *)(*(int *)local_40 + 0x8c)"
	local_44 = (*(*(int *)(local_40 + 0xe4)))();
	local_1c = local_44;
	if ((local_1c & 0x38) == 0x0) goto jmp_2a0d;
	*(int *)(pm + 0xd0) = 0x3;
jmp_2a0d:
}

/*
=================
PM_CheckDuck

Address: 0x2a0f
Stack Size: 0x70
Called by: PmoveSingle
=================
*/
void PM_CheckDuck(void) {
	char	local_24[56];
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;

	if (*(int *)(*(int *)pm + 0x170) == 0x0) goto jmp_2a84;
	if ((*(int *)(*(int *)pm + 0xc) & 0x4000) == 0x0) goto jmp_2a48;
	*(int *)(pm + 0xb4) = 0xc2280000;
	*(int *)(pm + 0xb8) = 0xc2280000;
	*(int *)(pm + 0xbc) = 0xc2280000;
	*(int *)(pm + 0xc0) = 0x42280000;
	*(int *)(pm + 0xc4) = 0x42280000;
	*(int *)(pm + 0xc8) = 0x42280000;
	goto jmp_2a6c;
jmp_2a48:
	*(int *)(pm + 0xb4) = 0xc1700000;
	*(int *)(pm + 0xb8) = 0xc1700000;
	*(int *)(pm + 0xbc) = 0xc1c00000;
	*(int *)(pm + 0xc0) = 0x41700000;
	*(int *)(pm + 0xc4) = 0x41700000;
	*(int *)(pm + 0xc8) = 0x41800000;
jmp_2a6c:
	local_5c = (*(int *)pm + 0xc);
	*(int *)local_5c = (*(int *)local_5c | 0x1);
	*(int *)(*(int *)pm + 0xa4) = 0xc;
	goto jmp_2b5e;
jmp_2a84:
	local_5c = (*(int *)pm + 0xc);
	*(int *)local_5c = (*(int *)local_5c & 0xffffbfff);
	*(int *)(pm + 0xb4) = 0xc1700000;
	*(int *)(pm + 0xb8) = 0xc1700000;
	*(int *)(pm + 0xc0) = 0x41700000;
	*(int *)(pm + 0xc4) = 0x41700000;
	*(int *)(pm + 0xbc) = 0xc1c00000;
	if (*(int *)(*(int *)pm + 0x4) != 0x3) goto jmp_2ac8;
	*(int *)(pm + 0xc8) = 0xc1000000;
	*(int *)(*(int *)pm + 0xa4) = 0xfffffff0;
	goto jmp_2b5e;
jmp_2ac8:
	if ((char)*(char *)(pm + 0x1b) >= 0x0) goto jmp_2ae1;
	local_60 = (*(int *)pm + 0xc);
	*(int *)local_60 = (*(int *)local_60 | 0x1);
	goto jmp_2b38;
jmp_2ae1:
	if ((*(int *)(*(int *)pm + 0xc) & 0x1) == 0x0) goto jmp_2b38;
	*(int *)(pm + 0xc8) = 0x42000000;
#define next_call_arg_0 "local_24"
	local_60 = pm;
	local_64 = *(int *)local_60;
	local_68 = (local_64 + 0x14);
#define next_call_arg_1 "local_68"
#define next_call_arg_2 "(local_60 + 0xb4)"
#define next_call_arg_3 "(local_60 + 0xc0)"
#define next_call_arg_4 "local_68"
#define next_call_arg_5 "*(int *)(local_64 + 0x8c)"
#define next_call_arg_6 "*(int *)(local_60 + 0x1c)"
	(*(*(int *)(local_60 + 0xe0)))();
	if (*(int *)local_24 != 0x0) goto jmp_2b38;
	local_6c = (*(int *)pm + 0xc);
	*(int *)local_6c = (*(int *)local_6c & 0xfffffffe);
jmp_2b38:
	if ((*(int *)(*(int *)pm + 0xc) & 0x1) == 0x0) goto jmp_2b51;
	*(int *)(pm + 0xc8) = 0x41800000;
	*(int *)(*(int *)pm + 0xa4) = 0xc;
	goto jmp_2b5e;
jmp_2b51:
	*(int *)(pm + 0xc8) = 0x42000000;
	*(int *)(*(int *)pm + 0xa4) = 0x1a;
jmp_2b5e:
}

/*
=================
PM_Footsteps

Address: 0x2b60
Stack Size: 0x4c
Calls: sqrt, PM_AddEvent, PM_FootstepForSurface, PM_ContinueLegsAnim
Called by: PmoveSingle
=================
*/
void PM_Footsteps(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;

	local_18 = pm;
	local_1c = *(int *)local_18;
	local_20 = *(int *)(local_1c + 0x20);
	local_24 = *(int *)(local_1c + 0x24);
	local_28 = sqrt(((local_20 * local_20) + (local_24 * local_24)));
	*(int *)(local_18 + 0xd4) = local_28;
	if (*(int *)(*(int *)pm + 0x44) != 0x3ff) goto jmp_2bb2;
	if (*(int *)(*(int *)pm + 0x170) == 0x0) goto jmp_2ba4;
	PM_ContinueLegsAnim(0x17);
jmp_2ba4:
	if (*(int *)(pm + 0xd0) <= 0x1) goto jmp_2cde;
	PM_ContinueLegsAnim(0x11);
	goto jmp_2cde;
jmp_2bb2:
	local_2c = pm;
	local_30 = 0x0;
	if ((char)*(char *)(local_2c + 0x19) != local_30) goto jmp_2bf1;
	if ((char)*(char *)(local_2c + 0x1a) != local_30) goto jmp_2bf1;
	if (*(int *)(pm + 0xd4) >= 0x40a00000) goto jmp_2cde;
	*(int *)(*(int *)pm + 0x8) = 0x0;
	if ((*(int *)(*(int *)pm + 0xc) & 0x1) == 0x0) goto jmp_2bea;
	PM_ContinueLegsAnim(0x17);
	goto jmp_2cde;
jmp_2bea:
	PM_ContinueLegsAnim(0x16);
	goto jmp_2cde;
jmp_2bf1:
	local_34 = 0x0;
	local_14 = local_34;
	if ((*(int *)(*(int *)pm + 0xc) & 0x1) == local_34) goto jmp_2c1e;
	local_10 = 0x3f000000;
	if ((*(int *)(*(int *)pm + 0xc) & 0x10) == 0x0) goto jmp_2c17;
	PM_ContinueLegsAnim(0x20);
	goto jmp_2c5e;
jmp_2c17:
	PM_ContinueLegsAnim(0xd);
	goto jmp_2c5e;
jmp_2c1e:
	if ((*(int *)(pm + 0x14) & 0x10) != 0x0) goto jmp_2c45;
	local_10 = 0x3ecccccd;
	if ((*(int *)(*(int *)pm + 0xc) & 0x10) == 0x0) goto jmp_2c3b;
	PM_ContinueLegsAnim(0x10);
	goto jmp_2c40;
jmp_2c3b:
	PM_ContinueLegsAnim(0xf);
jmp_2c40:
	local_14 = 0x1;
	goto jmp_2c5e;
jmp_2c45:
	local_10 = 0x3e99999a;
	if ((*(int *)(*(int *)pm + 0xc) & 0x10) == 0x0) goto jmp_2c59;
	PM_ContinueLegsAnim(0x21);
	goto jmp_2c5e;
jmp_2c59:
	PM_ContinueLegsAnim(0xe);
jmp_2c5e:
	local_38 = pm;
	local_3c = 0x8;
	local_c = *(int *)(*(int *)local_38 + local_3c);
	*(int *)(*(int *)local_38 + local_3c) = ((int)((float)local_c + (local_10 * (float)bss_104514)) & 0xff);
	local_40 = 0x40;
	if ((((local_c + local_40) ^ (*(int *)(*(int *)pm + 0x8) + local_40)) & 0x80) == 0x0) goto jmp_2cde;
	if (*(int *)(pm + 0xd0) != 0x0) goto jmp_2cbb;
	local_44 = 0x0;
	if (local_14 == local_44) goto jmp_2cde;
	if (*(int *)(pm + 0x24) != local_44) goto jmp_2cde;
	local_48 = PM_FootstepForSurface();
	PM_AddEvent(local_48);
	goto jmp_2cde;
jmp_2cbb:
	if (*(int *)(pm + 0xd0) != 0x1) goto jmp_2cc9;
	PM_AddEvent(0x3);
	goto jmp_2cde;
jmp_2cc9:
	if (*(int *)(pm + 0xd0) != 0x2) goto jmp_2cd7;
	PM_AddEvent(0x5);
	goto jmp_2cde;
jmp_2cd7:
	if (*(int *)(pm + 0xd0) != 0x3) goto jmp_2cde;
jmp_2cde:
}

/*
=================
PM_WaterEvents

Address: 0x2ce0
Stack Size: 0x1c
Calls: PM_AddEvent
Called by: PmoveSingle
=================
*/
void PM_WaterEvents(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;

	local_c = 0x0;
	if (bss_104574 != local_c) goto jmp_2cf6;
	if (*(int *)(pm + 0xd0) == local_c) goto jmp_2cf6;
	PM_AddEvent(0xf);
jmp_2cf6:
	local_10 = 0x0;
	if (bss_104574 == local_10) goto jmp_2d0b;
	if (*(int *)(pm + 0xd0) != local_10) goto jmp_2d0b;
	PM_AddEvent(0x10);
jmp_2d0b:
	local_14 = 0x3;
	if (bss_104574 == local_14) goto jmp_2d20;
	if (*(int *)(pm + 0xd0) != local_14) goto jmp_2d20;
	PM_AddEvent(0x11);
jmp_2d20:
	local_18 = 0x3;
	if (bss_104574 != local_18) goto jmp_2d35;
	if (*(int *)(pm + 0xd0) == local_18) goto jmp_2d35;
	PM_AddEvent(0x12);
jmp_2d35:
}

/*
=================
PM_BeginWeaponChange

Address: 0x2d37
Stack Size: 0x14
Calls: PM_StartTorsoAnim, PM_AddEvent
Called by: PM_Weapon
=================
*/
void PM_BeginWeaponChange(int arg_0) {
	int		local_10;

	arg_0 = arg_0;
	if (arg_0 <= 0x0) goto jmp_2d44;
	if (arg_0 < 0xb) goto jmp_2d46;
jmp_2d44:
	goto jmp_2d7f;
jmp_2d46:
	if ((*(int *)(*(int *)pm + 0xc0) & (0x1 << arg_0)) != 0x0) goto jmp_2d55;
	goto jmp_2d7f;
jmp_2d55:
	if (*(int *)(*(int *)pm + 0x94) != 0x2) goto jmp_2d5f;
	goto jmp_2d7f;
jmp_2d5f:
	PM_AddEvent(0x16);
	*(int *)(*(int *)pm + 0x94) = 0x2;
	local_10 = (*(int *)pm + 0x2c);
	*(int *)local_10 = (*(int *)local_10 + 0xc8);
	PM_StartTorsoAnim(0x9);
jmp_2d7f:
}

/*
=================
PM_FinishWeaponChange

Address: 0x2d81
Stack Size: 0x18
Calls: PM_StartTorsoAnim
Called by: PM_Weapon
=================
*/
void PM_FinishWeaponChange(void) {
	char	local_c[8];
	int		local_14;

	*(int *)local_c = *(char *)(pm + 0x18);
	if (*(int *)local_c < 0x0) goto jmp_2d91;
	if (*(int *)local_c < 0xb) goto jmp_2d94;
jmp_2d91:
	*(int *)local_c = 0x0;
jmp_2d94:
	if ((*(int *)(*(int *)pm + 0xc0) & (0x1 << *(int *)local_c)) != 0x0) goto jmp_2da4;
	*(int *)local_c = 0x0;
jmp_2da4:
	*(int *)(*(int *)pm + 0x90) = *(int *)local_c;
	*(int *)(*(int *)pm + 0x94) = 0x1;
	local_14 = (*(int *)pm + 0x2c);
	*(int *)local_14 = (*(int *)local_14 + 0xfa);
	PM_StartTorsoAnim(0xa);
}

/*
=================
PM_TorsoAnimation

Address: 0x2dc9
Stack Size: 0xc
Calls: PM_ContinueTorsoAnim
Called by: PmoveSingle
=================
*/
void PM_TorsoAnimation(void) {

	if (*(int *)(*(int *)pm + 0x94) != 0x0) goto jmp_2de6;
	if (*(int *)(*(int *)pm + 0x90) != 0x1) goto jmp_2de1;
	PM_ContinueTorsoAnim(0xc);
	goto jmp_2de6;
jmp_2de1:
	PM_ContinueTorsoAnim(0xb);
jmp_2de6:
}

/*
=================
PM_Weapon

Address: 0x2de8
Stack Size: 0x28
Calls: PM_StartTorsoAnim, PM_FinishWeaponChange, PM_BeginWeaponChange, PM_AddEvent
Called by: PmoveSingle
=================
*/
void PM_Weapon(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	if ((*(int *)(*(int *)pm + 0xc) & 0x200) == 0x0) goto jmp_2df5;
	goto jmp_300c;
jmp_2df5:
	if (*(int *)(*(int *)pm + 0x104) != 0x3) goto jmp_2dff;
	goto jmp_300c;
jmp_2dff:
	if (*(int *)(*(int *)pm + 0xb8) > 0x0) goto jmp_2e10;
	*(int *)(*(int *)pm + 0x90) = 0x0;
	goto jmp_300c;
jmp_2e10:
	if ((*(int *)(pm + 0x14) & 0x4) == 0x0) goto jmp_2e6c;
	if ((*(int *)(*(int *)pm + 0xc) & 0x400) != 0x0) goto jmp_2e7b;
	local_10 = *(int *)pm;
	if (*(int *)((0x34 * *(int *)(local_10 + 0xbc)) + 0x5b4) != 0x2) goto jmp_2e43;
	if (*(int *)(local_10 + 0xb8) < (*(int *)(local_10 + 0xd0) + 0x19)) goto jmp_2e43;
	goto jmp_300c;
jmp_2e43:
	local_14 = (*(int *)pm + 0xc);
	*(int *)local_14 = (*(int *)local_14 | 0x400);
	PM_AddEvent((*(int *)((0x34 * *(int *)(*(int *)pm + 0xbc)) + 0x5b4) + 0x18));
	*(int *)(*(int *)pm + 0xbc) = 0x0;
	goto jmp_300c;
jmp_2e6c:
	local_10 = (*(int *)pm + 0xc);
	*(int *)local_10 = (*(int *)local_10 & 0xfffffbff);
jmp_2e7b:
	if (*(int *)(*(int *)pm + 0x2c) <= 0x0) goto jmp_2e93;
	local_10 = (*(int *)pm + 0x2c);
	*(int *)local_10 = (*(int *)local_10 - bss_104514);
jmp_2e93:
	local_10 = *(int *)pm;
	if (*(int *)(local_10 + 0x2c) <= 0x0) goto jmp_2ea6;
	if (*(int *)(local_10 + 0x94) == 0x3) goto jmp_2ebf;
jmp_2ea6:
	local_14 = pm;
	if (*(int *)(*(int *)local_14 + 0x90) == *(char *)(local_14 + 0x18)) goto jmp_2ebf;
	PM_BeginWeaponChange(*(char *)(pm + 0x18));
jmp_2ebf:
	if (*(int *)(*(int *)pm + 0x2c) <= 0x0) goto jmp_2ec9;
	goto jmp_300c;
jmp_2ec9:
	if (*(int *)(*(int *)pm + 0x94) != 0x2) goto jmp_2ed6;
	PM_FinishWeaponChange();
	goto jmp_300c;
jmp_2ed6:
	if (*(int *)(*(int *)pm + 0x94) != 0x1) goto jmp_2efb;
	*(int *)(*(int *)pm + 0x94) = 0x0;
	if (*(int *)(*(int *)pm + 0x90) != 0x1) goto jmp_2ef4;
	PM_StartTorsoAnim(0xc);
	goto jmp_300c;
jmp_2ef4:
	PM_StartTorsoAnim(0xb);
	goto jmp_300c;
jmp_2efb:
	if ((*(int *)(pm + 0x14) & 0x1) != 0x0) goto jmp_2f14;
	*(int *)(*(int *)pm + 0x2c) = 0x0;
	*(int *)(*(int *)pm + 0x94) = 0x0;
	goto jmp_300c;
jmp_2f14:
	if (*(int *)(*(int *)pm + 0x90) != 0x1) goto jmp_2f3a;
	if (*(int *)(pm + 0x28) != 0x0) goto jmp_2f33;
	*(int *)(*(int *)pm + 0x2c) = 0x0;
	*(int *)(*(int *)pm + 0x94) = 0x0;
	goto jmp_300c;
jmp_2f33:
	PM_StartTorsoAnim(0x8);
	goto jmp_2f3f;
jmp_2f3a:
	PM_StartTorsoAnim(0x7);
jmp_2f3f:
	*(int *)(*(int *)pm + 0x94) = 0x3;
	local_14 = *(int *)pm;
	if (*(int *)((*(int *)(local_14 + 0x90) << 0x2) + (local_14 + 0x178)) != 0x0) goto jmp_2f70;
	PM_AddEvent(0x15);
	local_18 = (*(int *)pm + 0x2c);
	*(int *)local_18 = (*(int *)local_18 + 0x1f4);
	goto jmp_300c;
jmp_2f70:
	local_18 = *(int *)pm;
	if (*(int *)((*(int *)(local_18 + 0x90) << 0x2) + (local_18 + 0x178)) == 0xffffffff) goto jmp_2f9f;
	local_1c = *(int *)pm;
	local_20 = ((*(int *)(local_1c + 0x90) << 0x2) + (local_1c + 0x178));
	*(int *)local_20 = (*(int *)local_20 - 0x1);
jmp_2f9f:
	PM_AddEvent(0x17);
	local_1c = *(int *)(*(int *)pm + 0x90);
	if (local_1c < 0x1) goto jmp_2fbc;
	if (local_1c > 0xa) goto jmp_2fbc;
	goto *(int *)((local_1c << 0x2) + 0xee0);
jmp_2fbc:
	local_c = 0x190;
	goto jmp_2fec;
	local_c = 0x32;
	goto jmp_2fec;
	local_c = 0x3e8;
	goto jmp_2fec;
	local_c = 0x64;
	goto jmp_2fec;
	local_c = 0x320;
	goto jmp_2fec;
	local_c = 0x320;
	goto jmp_2fec;
	local_c = 0x64;
	goto jmp_2fec;
	local_c = 0x5dc;
	goto jmp_2fec;
	local_c = 0xc8;
	goto jmp_2fec;
	local_c = 0x190;
jmp_2fec:
	if (*(int *)(*(int *)pm + 0x144) == 0x0) goto jmp_2ffc;
	local_c = (int)((float)local_c / 0x3fa66666);
jmp_2ffc:
	local_24 = (*(int *)pm + 0x2c);
	*(int *)local_24 = (*(int *)local_24 + local_c);
jmp_300c:
}

/*
=================
PM_Animate

Address: 0x300e
Stack Size: 0xc
Calls: PM_AddEvent, PM_StartTorsoAnim
Called by: PmoveSingle
=================
*/
void PM_Animate(void) {

	if ((*(int *)(pm + 0x14) & 0x8) == 0x0) goto jmp_3031;
	if (*(int *)(*(int *)pm + 0x50) != 0x0) goto jmp_3031;
	PM_StartTorsoAnim(0x6);
	*(int *)(*(int *)pm + 0x50) = 0x8f6;
	PM_AddEvent(0x4c);
jmp_3031:
}

/*
=================
PM_DropTimers

Address: 0x3033
Stack Size: 0xc
Called by: PmoveSingle
=================
*/
void PM_DropTimers(void) {
	int		local_8;

	if (*(int *)(*(int *)pm + 0x10) == 0x0) goto jmp_306d;
	if (bss_104514 < *(int *)(*(int *)pm + 0x10)) goto jmp_305d;
	local_8 = (*(int *)pm + 0xc);
	*(int *)local_8 = (*(int *)local_8 & 0xfffffe9f);
	*(int *)(*(int *)pm + 0x10) = 0x0;
	goto jmp_306d;
jmp_305d:
	local_8 = (*(int *)pm + 0x10);
	*(int *)local_8 = (*(int *)local_8 - bss_104514);
jmp_306d:
	if (*(int *)(*(int *)pm + 0x48) <= 0x0) goto jmp_3094;
	local_8 = (*(int *)pm + 0x48);
	*(int *)local_8 = (*(int *)local_8 - bss_104514);
	if (*(int *)(*(int *)pm + 0x48) >= 0x0) goto jmp_3094;
	*(int *)(*(int *)pm + 0x48) = 0x0;
jmp_3094:
	if (*(int *)(*(int *)pm + 0x50) <= 0x0) goto jmp_30bb;
	local_8 = (*(int *)pm + 0x50);
	*(int *)local_8 = (*(int *)local_8 - bss_104514);
	if (*(int *)(*(int *)pm + 0x50) >= 0x0) goto jmp_30bb;
	*(int *)(*(int *)pm + 0x50) = 0x0;
jmp_30bb:
}

/*
=================
PM_UpdateViewAngles

Address: 0x30bd
Stack Size: 0x24
Called by: CG_PredictPlayerState, CG_InterpolatePlayerState, PmoveSingle
=================
*/
void PM_UpdateViewAngles(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	char	local_10[12];
	int		local_1c;
	int		local_20;

	arg_0 = arg_0;
	arg_1 = arg_1;
	*(int *)local_10 = *(int *)(arg_0 + 0x4);
	if (*(int *)local_10 == 0x5) goto jmp_30d5;
	if (*(int *)local_10 != 0x6) goto jmp_30d7;
jmp_30d5:
	goto jmp_3163;
jmp_30d7:
	if (*(int *)(arg_0 + 0x4) == 0x2) goto jmp_30e7;
	if (*(int *)(arg_0 + 0xb8) > 0x0) goto jmp_30e7;
	goto jmp_3163;
jmp_30e7:
	local_8 = 0x0;
jmp_30ea:
	local_1c = (local_8 << 0x2);
	*(short *)&local_c = (*(int *)(local_1c + (arg_1 + 0x4)) + *(int *)(local_1c + (arg_0 + 0x38)));
	if (local_8 != 0x0) goto jmp_3149;
	if ((short)*(short *)&local_c <= 0x3e80) goto jmp_3129;
	local_20 = (local_8 << 0x2);
	*(int *)(local_20 + (arg_0 + 0x38)) = (0x3e80 - *(int *)(local_20 + (arg_1 + 0x4)));
	*(short *)&local_c = 0x3e80;
	goto jmp_3149;
jmp_3129:
	if ((short)*(short *)&local_c >= 0xffffc180) goto jmp_3149;
	local_20 = (local_8 << 0x2);
	*(int *)(local_20 + (arg_0 + 0x38)) = (0xffffc180 - *(int *)(local_20 + (arg_1 + 0x4)));
	*(short *)&local_c = 0xffffc180;
jmp_3149:
	*(int *)((local_8 << 0x2) + (arg_0 + 0x98)) = (0x3bb40000 * (float)(short)*(short *)&local_c);
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x3) goto jmp_30ea;
jmp_3163:
}

/*
=================
PmoveSingle

Address: 0x3165
Stack Size: 0x5c
Calls: trap_SnapVector, memset, PM_WaterEvents, PM_Footsteps, PM_TorsoAnimation, PM_Weapon, PM_Animate, PM_WalkMove, PM_WaterMove, PM_WaterJumpMove, PM_AirMove, PM_GrappleMove, PM_DeadMove, PM_GroundTrace, PM_SetWaterLevel, PM_NoclipMove, PM_DropTimers, PM_FlyMove, PM_CheckDuck, AngleVectors, PM_UpdateViewAngles, abs
Called by: Pmove
=================
*/
void PmoveSingle(int arg_0) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;

	arg_0 = arg_0;
	local_18 = 0x104578;
	*(int *)local_18 = arg_0;
	local_1c = 0xee0;
	*(int *)local_1c = (*(int *)local_1c + 0x1);
	*(int *)(*(int *)local_18 + 0x30) = 0x0;
	*(int *)(pm + 0xcc) = 0x0;
	*(int *)(pm + 0xd0) = 0x0;
	if (*(int *)(*(int *)pm + 0xb8) > 0x0) goto jmp_31a6;
	local_20 = (pm + 0x1c);
	*(int *)local_20 = (*(int *)local_20 & 0xfdffffff);
jmp_31a6:
	local_20 = abs((char)*(char *)(pm + 0x19));
	if (local_20 > 0x40) goto jmp_31c4;
	local_24 = abs((char)*(char *)(pm + 0x1a));
	if (local_24 <= 0x40) goto jmp_31d2;
jmp_31c4:
	local_28 = (pm + 0x14);
	*(int *)local_28 = (*(int *)local_28 & 0xffffffef);
jmp_31d2:
	if ((*(int *)(pm + 0x14) & 0x2) == 0x0) goto jmp_31ec;
	local_28 = (*(int *)pm + 0x68);
	*(int *)local_28 = (*(int *)local_28 | 0x1000);
	goto jmp_31fb;
jmp_31ec:
	local_28 = (*(int *)pm + 0x68);
	*(int *)local_28 = (*(int *)local_28 & 0xffffefff);
jmp_31fb:
	local_28 = pm;
	local_2c = *(int *)local_28;
	local_30 = 0x0;
	if ((*(int *)(local_2c + 0xc) & 0x200) != local_30) goto jmp_3250;
	local_34 = *(int *)(local_2c + 0x4);
	if (local_34 == 0x5) goto jmp_3250;
	local_38 = 0x1;
	if (local_34 == local_38) goto jmp_3250;
	if ((*(int *)(local_28 + 0x14) & local_38) == local_30) goto jmp_3250;
	if (*(int *)((*(int *)(local_2c + 0x90) << 0x2) + (local_2c + 0x178)) == local_30) goto jmp_3250;
	local_3c = (*(int *)pm + 0x68);
	*(int *)local_3c = (*(int *)local_3c | 0x100);
	goto jmp_325f;
jmp_3250:
	local_3c = (*(int *)pm + 0x68);
	*(int *)local_3c = (*(int *)local_3c & 0xfffffeff);
jmp_325f:
	local_3c = pm;
	local_40 = 0x0;
	if (*(int *)(*(int *)local_3c + 0xb8) <= local_40) goto jmp_3288;
	if ((*(int *)(local_3c + 0x14) & 0x5) != local_40) goto jmp_3288;
	local_44 = (*(int *)pm + 0xc);
	*(int *)local_44 = (*(int *)local_44 & 0xfffffdff);
jmp_3288:
	if ((*(int *)(arg_0 + 0x14) & 0x2) == 0x0) goto jmp_32a9;
	*(int *)(arg_0 + 0x14) = 0x2;
	*(char *)(arg_0 + 0x19) = 0x0;
	*(char *)(arg_0 + 0x1a) = 0x0;
	*(char *)(arg_0 + 0x1b) = 0x0;
jmp_32a9:
	memset(0x1044ec, 0x0, 0x8c);
	bss_104514 = (*(int *)(arg_0 + 0x4) - *(int *)*(int *)pm);
	if (bss_104514 >= 0x1) goto jmp_32c7;
	bss_104514 = 0x1;
	goto jmp_32ce;
jmp_32c7:
	if (bss_104514 <= 0xc8) goto jmp_32ce;
	bss_104514 = 0xc8;
jmp_32ce:
	*(int *)*(int *)pm = *(int *)(arg_0 + 0x4);
	block_copy((*(int *)pm + 0x14), bss_10455c, 0xc);
	block_copy((*(int *)pm + 0x20), bss_104568, 0xc);
	bss_104510 = (0x3a83126f * (float)bss_104514);
	local_44 = pm;
	PM_UpdateViewAngles(*(int *)local_44, (local_44 + 0x4));
	AngleVectors((*(int *)pm + 0x98), 0x1044ec, 0x1044f8, 0x104504);
	if ((char)*(char *)(pm + 0x1b) >= 0xa) goto jmp_3322;
	local_48 = (*(int *)pm + 0xc);
	*(int *)local_48 = (*(int *)local_48 & 0xfffffffd);
jmp_3322:
	if ((char)*(char *)(pm + 0x19) >= 0x0) goto jmp_333b;
	local_48 = (*(int *)pm + 0xc);
	*(int *)local_48 = (*(int *)local_48 | 0x10);
	goto jmp_336c;
jmp_333b:
	local_48 = pm;
	local_4c = (char)*(char *)(local_48 + 0x19);
	local_50 = 0x0;
	if (local_4c > local_50) goto jmp_335d;
	if (local_4c != local_50) goto jmp_336c;
	if ((char)*(char *)(local_48 + 0x1a) == local_50) goto jmp_336c;
jmp_335d:
	local_54 = (*(int *)pm + 0xc);
	*(int *)local_54 = (*(int *)local_54 & 0xffffffef);
jmp_336c:
	if (*(int *)(*(int *)pm + 0x4) < 0x3) goto jmp_3386;
	*(char *)(pm + 0x19) = 0x0;
	*(char *)(pm + 0x1a) = 0x0;
	*(char *)(pm + 0x1b) = 0x0;
jmp_3386:
	if (*(int *)(*(int *)pm + 0x4) != 0x2) goto jmp_3399;
	PM_CheckDuck();
	PM_FlyMove();
	PM_DropTimers();
	goto jmp_344c;
jmp_3399:
	if (*(int *)(*(int *)pm + 0x4) != 0x1) goto jmp_33a9;
	PM_NoclipMove();
	PM_DropTimers();
	goto jmp_344c;
jmp_33a9:
	local_54 = 0x4;
	if (*(int *)(*(int *)pm + local_54) != local_54) goto jmp_33b8;
	goto jmp_344c;
jmp_33b8:
	local_58 = *(int *)(*(int *)pm + 0x4);
	if (local_58 == 0x5) goto jmp_33c8;
	if (local_58 != 0x6) goto jmp_33ca;
jmp_33c8:
	goto jmp_344c;
jmp_33ca:
	PM_SetWaterLevel();
	bss_104574 = *(int *)(arg_0 + 0xd0);
	PM_CheckDuck();
	PM_GroundTrace();
	if (*(int *)(*(int *)pm + 0x4) != 0x3) goto jmp_33e5;
	PM_DeadMove();
jmp_33e5:
	PM_DropTimers();
	if (*(int *)(*(int *)pm + 0x150) == 0x0) goto jmp_33f5;
	PM_FlyMove();
	goto jmp_342e;
jmp_33f5:
	if ((*(int *)(*(int *)pm + 0xc) & 0x800) == 0x0) goto jmp_3407;
	PM_GrappleMove();
	PM_AirMove();
	goto jmp_342e;
jmp_3407:
	if ((*(int *)(*(int *)pm + 0xc) & 0x100) == 0x0) goto jmp_3416;
	PM_WaterJumpMove();
	goto jmp_342e;
jmp_3416:
	if (*(int *)(pm + 0xd0) <= 0x1) goto jmp_3422;
	PM_WaterMove();
	goto jmp_342e;
jmp_3422:
	if (bss_104518 == 0x0) goto jmp_342b;
	PM_WalkMove();
	goto jmp_342e;
jmp_342b:
	PM_AirMove();
jmp_342e:
	PM_Animate();
	PM_GroundTrace();
	PM_SetWaterLevel();
	PM_Weapon();
	PM_TorsoAnimation();
	PM_Footsteps();
	PM_WaterEvents();
	trap_SnapVector((*(int *)pm + 0x20));
jmp_344c:
}

/*
=================
Pmove

Address: 0x344e
Stack Size: 0x24
Calls: PmoveSingle
Called by: CG_PredictPlayerState
=================
*/
void Pmove(int arg_0) {
	char	local_c[8];
	int		local_14;
	char	local_18[12];

	arg_0 = arg_0;
	*(int *)local_c = *(int *)(arg_0 + 0x4);
	if (*(int *)local_c >= *(int *)*(int *)arg_0) goto jmp_3463;
	goto jmp_34d8;
jmp_3463:
	if (*(int *)local_c <= (*(int *)*(int *)arg_0 + 0x3e8)) goto jmp_3474;
	*(int *)*(int *)arg_0 = (*(int *)local_c - 0x3e8);
jmp_3474:
	local_14 = (*(int *)arg_0 + 0x1c8);
	*(int *)local_14 = ((*(int *)local_14 + 0x1) & 0x3f);
	goto jmp_34d1;
jmp_3487:
	*(int *)local_18 = (*(int *)local_c - *(int *)*(int *)arg_0);
	if (*(int *)(arg_0 + 0xd8) == 0x0) goto jmp_34a8;
	if (*(int *)local_18 <= *(int *)(arg_0 + 0xdc)) goto jmp_34af;
	*(int *)local_18 = *(int *)(arg_0 + 0xdc);
	goto jmp_34af;
jmp_34a8:
	if (*(int *)local_18 <= 0x42) goto jmp_34af;
	*(int *)local_18 = 0x42;
jmp_34af:
	*(int *)(arg_0 + 0x4) = (*(int *)*(int *)arg_0 + *(int *)local_18);
	PmoveSingle(arg_0);
	if ((*(int *)(*(int *)arg_0 + 0xc) & 0x2) == 0x0) goto jmp_34d1;
	*(char *)(arg_0 + 0x1b) = 0x14;
jmp_34d1:
	if (*(int *)*(int *)arg_0 != *(int *)local_c) goto jmp_3487;
jmp_34d8:
}

/*
=================
PM_SlideMove

Address: 0x34da
Stack Size: 0x154
Calls: VectorNormalize, CrossProduct, PM_AddTouchEnt, VectorNormalize2, PM_ClipVelocity
Called by: PM_StepSlideMove, PM_WaterMove
=================
*/
int PM_SlideMove(int arg_0) {
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[52];
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;
	int		local_a0;
	char	local_a4[8];
	int		local_ac;
	char	local_b0[12];
	int		local_bc;
	int		local_c0;
	char	local_c4[20];
	int		local_d8;
	int		local_dc;
	int		local_e0;
	int		local_e4;
	int		local_e8;
	int		local_ec;
	int		local_f0;
	int		local_f4;
	char	local_f8[8];
	int		local_100;
	int		local_104;
	int		local_108;
	int		local_10c;
	int		local_110;
	int		local_114;
	int		local_118;
	char	local_11c[8];
	int		local_124;
	int		local_128;
	int		local_12c;
	int		local_130;
	int		local_134;
	int		local_138;
	char	local_13c[8];
	int		local_144;
	int		local_148;
	int		local_14c;
	int		local_150;

	arg_0 = arg_0;
	local_f4 = 0x4;
	block_copy((*(int *)pm + 0x20), local_f8, 0xc);
	if (arg_0 == 0x0) goto jmp_3535;
	local_104 = pm;
	block_copy((*(int *)local_104 + 0x20), &local_98, 0xc);
	local_a0 = (local_a0 - ((float)*(int *)(*(int *)local_104 + 0x30) * bss_104510));
	local_108 = (*(int *)pm + 0x28);
	*(int *)local_108 = (0x3f000000 * (*(int *)local_108 + local_a0));
	local_100 = local_a0;
	if (bss_10451c == 0x0) goto jmp_3535;
	local_10c = (*(int *)pm + 0x20);
	PM_ClipVelocity(local_10c, 0x104538, local_10c, 0x3f8020c5);
jmp_3535:
	local_e0 = bss_104510;
	if (bss_10451c == 0x0) goto jmp_3545;
	local_84 = 0x1;
	block_copy(&bss_104538, &local_28, 0xc);
	goto jmp_3548;
jmp_3545:
	local_84 = 0x0;
jmp_3548:
	VectorNormalize2((*(int *)pm + 0x20), ((0xc * local_84) + &local_28));
	local_84 = (local_84 + 0x1);
	local_f0 = 0x0;
	goto jmp_38ba;
jmp_3563:
	local_104 = pm;
	local_108 = *(int *)local_104;
	local_e4 = (*(int *)(local_108 + 0x14) + (*(int *)(local_108 + 0x20) * local_e0));
	local_110 = *(int *)local_104;
	local_e8 = (*(int *)(local_110 + 0x18) + (*(int *)(local_110 + 0x24) * local_e0));
	local_114 = *(int *)pm;
	local_ec = (*(int *)(local_114 + 0x1c) + (*(int *)(local_114 + 0x28) * local_e0));
#define next_call_arg_0 "local_a4"
	local_118 = pm;
	*(int *)local_11c = *(int *)local_118;
#define next_call_arg_1 "(*(int *)local_11c + 0x14)"
#define next_call_arg_2 "(local_118 + 0xb4)"
#define next_call_arg_3 "(local_118 + 0xc0)"
#define next_call_arg_4 "&local_e4"
#define next_call_arg_5 "*(int *)(*(int *)local_11c + 0x8c)"
#define next_call_arg_6 "*(int *)(local_118 + 0x1c)"
	(*(*(int *)(local_118 + 0xe0)))();
	if (*(int *)local_a4 == 0x0) goto jmp_35e4;
	*(int *)(*(int *)pm + 0x28) = 0x0;
	return 0x1;
jmp_35e4:
	if (local_ac <= 0x0) goto jmp_35ef;
	block_copy(local_b0, (*(int *)pm + 0x14), 0xc);
jmp_35ef:
	if (local_ac != 0x3f800000) goto jmp_35f5;
	goto jmp_38bf;
jmp_35f5:
	PM_AddTouchEnt(local_d8);
	local_e0 = (local_e0 - (local_e0 * local_ac));
	if (local_84 < 0x5) goto jmp_362a;
	local_124 = *(int *)pm;
	local_128 = 0x0;
	*(int *)(local_124 + 0x28) = local_128;
	*(int *)(local_124 + 0x24) = local_128;
	*(int *)(local_124 + 0x20) = local_128;
	return 0x1;
jmp_362a:
	local_74 = 0x0;
	goto jmp_3689;
jmp_362f:
	local_124 = (0xc * local_74);
	if ((((local_bc * *(int *)(local_124 + &local_28)) + (local_c0 * *(int *)(local_124 + &local_2c))) + (*(int *)local_c4 * *(int *)(local_124 + local_30))) <= 0x3f7d70a4) goto jmp_3683;
	local_128 = (*(int *)pm + 0x20);
	*(int *)local_128 = (local_bc + *(int *)local_128);
	local_12c = (*(int *)pm + 0x24);
	*(int *)local_12c = (local_c0 + *(int *)local_12c);
	local_130 = (*(int *)pm + 0x28);
	*(int *)local_130 = (*(int *)local_c4 + *(int *)local_130);
	goto jmp_368e;
jmp_3683:
	local_74 = (local_74 + 0x1);
jmp_3689:
	if (local_74 < local_84) goto jmp_362f;
jmp_368e:
	if (local_74 >= local_84) goto jmp_3695;
	goto jmp_38b4;
jmp_3695:
	block_copy(&local_bc, ((0xc * local_84) + &local_28), 0xc);
	local_84 = (local_84 + 0x1);
	local_74 = 0x0;
	goto jmp_38af;
jmp_36a8:
	local_124 = *(int *)pm;
	local_128 = (0xc * local_74);
	local_dc = (((*(int *)(local_124 + 0x20) * *(int *)(local_128 + &local_28)) + (*(int *)(local_124 + 0x24) * *(int *)(local_128 + &local_2c))) + (*(int *)(local_124 + 0x28) * *(int *)(local_128 + local_30)));
	if (local_dc < 0x3dcccccd) goto jmp_36de;
	goto jmp_38a9;
jmp_36de:
	if (-local_dc <= bss_104558) goto jmp_36e9;
	bss_104558 = -local_dc;
jmp_36e9:
	PM_ClipVelocity((*(int *)pm + 0x20), ((0xc * local_74) + &local_28), &local_64, 0x3f8020c5);
	if (arg_0 == 0x0) goto jmp_3711;
	PM_ClipVelocity(&local_98, ((0xc * local_74) + &local_28), &local_8c, 0x3f8020c5);
jmp_3711:
	local_70 = 0x0;
	goto jmp_3894;
jmp_3716:
	if (local_70 != local_74) goto jmp_371d;
	goto jmp_388e;
jmp_371d:
	local_12c = (0xc * local_70);
	if ((((local_64 * *(int *)(local_12c + &local_28)) + (local_68 * *(int *)(local_12c + &local_2c))) + (local_6c * *(int *)(local_12c + local_30))) < 0x3dcccccd) goto jmp_3741;
	goto jmp_388e;
jmp_3741:
	PM_ClipVelocity(&local_64, ((0xc * local_70) + &local_28), &local_64, 0x3f8020c5);
	if (arg_0 == 0x0) goto jmp_3765;
	PM_ClipVelocity(&local_8c, ((0xc * local_70) + &local_28), &local_8c, 0x3f8020c5);
jmp_3765:
	local_130 = (0xc * local_74);
	if ((((local_64 * *(int *)(local_130 + &local_28)) + (local_68 * *(int *)(local_130 + &local_2c))) + (local_6c * *(int *)(local_130 + local_30))) < 0x0) goto jmp_3789;
	goto jmp_388e;
jmp_3789:
	local_134 = 0xc;
	CrossProduct(((local_134 * local_74) + &local_28), ((local_134 * local_70) + &local_28), &local_78);
	VectorNormalize(&local_78);
	local_138 = local_78;
	*(int *)local_13c = *(int *)pm;
	local_88 = (((local_138 * *(int *)(*(int *)local_13c + 0x20)) + (local_7c * *(int *)(*(int *)local_13c + 0x24))) + (local_80 * *(int *)(*(int *)local_13c + 0x28)));
	local_64 = (local_138 * local_88);
	local_68 = (local_7c * local_88);
	local_6c = (local_80 * local_88);
	if (arg_0 == 0x0) goto jmp_382d;
	local_144 = 0xc;
	CrossProduct(((local_144 * local_74) + &local_28), ((local_144 * local_70) + &local_28), &local_78);
	VectorNormalize(&local_78);
	local_148 = local_78;
	local_88 = (((local_148 * local_98) + (local_7c * local_9c)) + (local_80 * local_a0));
	local_8c = (local_148 * local_88);
	local_90 = (local_7c * local_88);
	local_94 = (local_80 * local_88);
jmp_382d:
	local_24 = 0x0;
	goto jmp_3889;
jmp_3832:
	if (local_24 == local_74) goto jmp_383c;
	if (local_24 != local_70) goto jmp_383e;
jmp_383c:
	goto jmp_3883;
jmp_383e:
	local_148 = (0xc * local_24);
	if ((((local_64 * *(int *)(local_148 + &local_28)) + (local_68 * *(int *)(local_148 + &local_2c))) + (local_6c * *(int *)(local_148 + local_30))) < 0x3dcccccd) goto jmp_3862;
	goto jmp_3883;
jmp_3862:
	local_14c = *(int *)pm;
	local_150 = 0x0;
	*(int *)(local_14c + 0x28) = local_150;
	*(int *)(local_14c + 0x24) = local_150;
	*(int *)(local_14c + 0x20) = local_150;
	return 0x1;
jmp_3883:
	local_24 = (local_24 + 0x1);
jmp_3889:
	if (local_24 < local_84) goto jmp_3832;
jmp_388e:
	local_70 = (local_70 + 0x1);
jmp_3894:
	if (local_70 < local_84) goto jmp_3716;
	block_copy(&local_64, (*(int *)pm + 0x20), 0xc);
	if (arg_0 == 0x0) goto jmp_38b4;
	block_copy(&local_8c, &local_98, 0xc);
	goto jmp_38b4;
jmp_38a9:
	local_74 = (local_74 + 0x1);
jmp_38af:
	if (local_74 < local_84) goto jmp_36a8;
jmp_38b4:
	local_f0 = (local_f0 + 0x1);
jmp_38ba:
	if (local_f0 < local_f4) goto jmp_3563;
jmp_38bf:
	if (arg_0 == 0x0) goto jmp_38ca;
	block_copy(&local_98, (*(int *)pm + 0x20), 0xc);
jmp_38ca:
	if (*(int *)(*(int *)pm + 0x10) == 0x0) goto jmp_38d9;
	block_copy(local_f8, (*(int *)pm + 0x20), 0xc);
jmp_38d9:
	if (local_f0 == 0x0) goto jmp_38e2;
	local_104 = 0x1;
	goto jmp_38e5;
jmp_38e2:
	local_104 = 0x0;
jmp_38e5:
	return local_104;
}

/*
=================
PM_StepSlideMove

Address: 0x38ea
Stack Size: 0xb0
Calls: PM_AddEvent, PM_ClipVelocity, Com_Printf, PM_SlideMove
Called by: PM_WalkMove, PM_AirMove, PM_FlyMove, PM_WaterJumpMove
=================
*/
void PM_StepSlideMove(int arg_0) {
	char	local_24[8];
	int		local_2c;
	char	local_30[8];
	int		local_38;
	int		local_3c;
	int		local_40;
	char	local_44[24];
	int		local_5c;
	int		local_60;
	int		local_64;
	char	local_68[8];
	int		local_70;
	char	local_74[8];
	int		local_7c;
	char	local_80[12];
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;
	int		local_a0;
	int		local_a4;
	int		local_a8;
	int		local_ac;

	local_90 = pm;
	block_copy((*(int *)local_90 + 0x14), local_68, 0xc);
	block_copy((*(int *)local_90 + 0x20), local_80, 0xc);
	local_94 = PM_SlideMove(arg_0);
	if (local_94 != 0x0) goto jmp_390a;
	goto jmp_3a6f;
jmp_390a:
	block_copy(local_68, local_74, 0xc);
	local_7c = (local_7c - 0x41900000);
#define next_call_arg_0 "local_24"
#define next_call_arg_1 "local_68"
	local_98 = pm;
#define next_call_arg_2 "(local_98 + 0xb4)"
#define next_call_arg_3 "(local_98 + 0xc0)"
#define next_call_arg_4 "local_74"
#define next_call_arg_5 "*(int *)(*(int *)local_98 + 0x8c)"
#define next_call_arg_6 "*(int *)(local_98 + 0x1c)"
	(*(*(int *)(local_98 + 0xe0)))();
	local_9c = 0x0;
	local_5c = local_9c;
	local_60 = local_9c;
	local_64 = 0x3f800000;
	if (*(int *)(*(int *)pm + 0x28) <= 0x0) goto jmp_396a;
	if (local_2c == 0x3f800000) goto jmp_3968;
	if ((((local_3c * local_5c) + (local_40 * local_60)) + (*(int *)local_44 * local_64)) >= 0x3f333333) goto jmp_396a;
jmp_3968:
	goto jmp_3a6f;
jmp_396a:
	block_copy(local_68, &local_5c, 0xc);
	local_64 = (local_64 + 0x41900000);
#define next_call_arg_0 "local_24"
#define next_call_arg_1 "local_68"
	local_a0 = pm;
#define next_call_arg_2 "(local_a0 + 0xb4)"
#define next_call_arg_3 "(local_a0 + 0xc0)"
#define next_call_arg_4 "&local_5c"
#define next_call_arg_5 "*(int *)(*(int *)local_a0 + 0x8c)"
#define next_call_arg_6 "*(int *)(local_a0 + 0x1c)"
	(*(*(int *)(local_a0 + 0xe0)))();
	if (*(int *)local_24 == 0x0) goto jmp_39b0;
	if (*(int *)(pm + 0x20) == 0x0) goto jmp_3a6f;
	Com_Printf(0x50cd, c_pmove);
	goto jmp_3a6f;
jmp_39b0:
	local_8c = (local_38 - local_70);
	block_copy(local_30, (*(int *)pm + 0x14), 0xc);
	block_copy(local_80, (*(int *)pm + 0x20), 0xc);
	PM_SlideMove(arg_0);
	block_copy((*(int *)pm + 0x14), local_74, 0xc);
	local_7c = (local_7c - local_8c);
#define next_call_arg_0 "local_24"
	local_a4 = pm;
	local_a8 = *(int *)local_a4;
#define next_call_arg_1 "(local_a8 + 0x14)"
#define next_call_arg_2 "(local_a4 + 0xb4)"
#define next_call_arg_3 "(local_a4 + 0xc0)"
#define next_call_arg_4 "local_74"
#define next_call_arg_5 "*(int *)(local_a8 + 0x8c)"
#define next_call_arg_6 "*(int *)(local_a4 + 0x1c)"
	(*(*(int *)(local_a4 + 0xe0)))();
	if (*(int *)local_24 != 0x0) goto jmp_3a13;
	block_copy(local_30, (*(int *)pm + 0x14), 0xc);
jmp_3a13:
	if (local_2c >= 0x3f800000) goto jmp_3a2b;
	local_ac = (*(int *)pm + 0x20);
	PM_ClipVelocity(local_ac, &local_3c, local_ac, 0x3f8020c5);
jmp_3a2b:
	local_ac = (*(int *)(*(int *)pm + 0x1c) - local_70);
	if (local_ac <= 0x40000000) goto jmp_3a60;
	if (local_ac >= 0x40e00000) goto jmp_3a45;
	PM_AddEvent(0x6);
	goto jmp_3a60;
jmp_3a45:
	if (local_ac >= 0x41300000) goto jmp_3a50;
	PM_AddEvent(0x7);
	goto jmp_3a60;
jmp_3a50:
	if (local_ac >= 0x41700000) goto jmp_3a5b;
	PM_AddEvent(0x8);
	goto jmp_3a60;
jmp_3a5b:
	PM_AddEvent(0x9);
jmp_3a60:
	if (*(int *)(pm + 0x20) == 0x0) goto jmp_3a6f;
	Com_Printf(0x50c1, c_pmove);
jmp_3a6f:
}

/*
=================
swapfunc

Address: 0x3a71
Stack Size: 0x20
Called by: qsort
=================
*/
void swapfunc(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	if (arg_3 > 0x1) goto jmp_3ab8;
	local_10 = (arg_2 >> 0x2);
	local_8 = arg_0;
	local_c = arg_1;
jmp_3a84:
	local_14 = *(int *)local_8;
	local_18 = local_8;
	local_8 = (local_18 + 0x4);
	*(int *)local_18 = *(int *)local_c;
	local_1c = local_c;
	local_c = (local_1c + 0x4);
	*(int *)local_1c = local_14;
	local_14 = (local_10 - 0x1);
	local_10 = local_14;
	if (local_14 > 0x0) goto jmp_3a84;
	goto jmp_3af6;
jmp_3ab8:
	local_10 = arg_2;
	local_8 = arg_0;
	local_c = arg_1;
jmp_3ac4:
	*(char *)&local_14 = *(char *)local_8;
	local_18 = local_8;
	local_8 = (local_18 + 0x1);
	*(char *)local_18 = *(char *)local_c;
	local_1c = local_c;
	local_c = (local_1c + 0x1);
	*(char *)local_1c = *(char *)&local_14;
	local_14 = (local_10 - 0x1);
	local_10 = local_14;
	if (local_14 > 0x0) goto jmp_3ac4;
jmp_3af6:
}

/*
=================
med3

Address: 0x3af8
Stack Size: 0x38
Called by: qsort
=================
*/
int med3(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	local_24 = (*(arg_3))(arg_0, arg_1);
	if (local_24 >= 0x0) goto jmp_3b50;
	local_28 = (*(arg_3))(arg_1, arg_2);
	if (local_28 >= 0x0) goto jmp_3b2d;
	local_14 = arg_1;
	goto jmp_3b4a;
jmp_3b2d:
	local_2c = (*(arg_3))(arg_0, arg_2);
	if (local_2c >= 0x0) goto jmp_3b42;
	local_18 = arg_2;
	goto jmp_3b46;
jmp_3b42:
	local_18 = arg_0;
jmp_3b46:
	local_14 = local_18;
jmp_3b4a:
	local_10 = local_14;
	goto jmp_3b86;
jmp_3b50:
	local_30 = (*(arg_3))(arg_1, arg_2);
	if (local_30 <= 0x0) goto jmp_3b65;
	local_1c = arg_1;
	goto jmp_3b82;
jmp_3b65:
	local_34 = (*(arg_3))(arg_0, arg_2);
	if (local_34 >= 0x0) goto jmp_3b7a;
	local_20 = arg_0;
	goto jmp_3b7e;
jmp_3b7a:
	local_20 = arg_2;
jmp_3b7e:
	local_1c = local_20;
jmp_3b82:
	local_10 = local_1c;
jmp_3b86:
	return local_10;
}

/*
=================
qsort

Address: 0x3b8b
Stack Size: 0x94
Calls: qsort, med3, swapfunc
Called by: qsort
=================
*/
void qsort(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	char	local_58[8];
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	char	local_84[8];
	char	local_8c[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
jmp_3b9c:
	local_4c = 0x3;
	local_50 = 0x0;
	if ((arg_0 & local_4c) != local_50) goto jmp_3bb2;
	if ((arg_2 & local_4c) == local_50) goto jmp_3bb7;
jmp_3bb2:
	local_44 = 0x2;
	goto jmp_3bc7;
jmp_3bb7:
	if (arg_2 != 0x4) goto jmp_3bc0;
	local_48 = 0x0;
	goto jmp_3bc3;
jmp_3bc0:
	local_48 = 0x1;
jmp_3bc3:
	local_44 = local_48;
jmp_3bc7:
	local_28 = local_44;
	local_34 = 0x0;
	if (arg_1 >= 0x7) goto jmp_3c41;
	local_38 = (arg_2 + arg_0);
	goto jmp_3c34;
jmp_3bdb:
	local_18 = local_38;
	goto jmp_3c16;
jmp_3be1:
	if (local_28 != 0x0) goto jmp_3bfd;
	local_54 = *(int *)local_18;
	*(int *)local_18 = *(int *)(local_18 - arg_2);
	*(int *)(local_18 - arg_2) = local_54;
	goto jmp_3c0f;
jmp_3bfd:
	swapfunc(local_18, (local_18 - arg_2), arg_2, local_28);
jmp_3c0f:
	local_18 = (local_18 - arg_2);
jmp_3c16:
	if (local_18 <= arg_0) goto jmp_3c2d;
	local_60 = (*(arg_3))((local_18 - arg_2), local_18);
	if (local_60 > 0x0) goto jmp_3be1;
jmp_3c2d:
	local_38 = (arg_2 + local_38);
jmp_3c34:
	if (local_38 < ((arg_1 * arg_2) + arg_0)) goto jmp_3bdb;
	goto jmp_3f46;
jmp_3c41:
	local_38 = (((arg_1 >> 0x1) * arg_2) + arg_0);
	if (arg_1 <= 0x7) goto jmp_3ce0;
	local_18 = arg_0;
	local_3c = (((arg_1 - 0x1) * arg_2) + arg_0);
	if (arg_1 <= 0x28) goto jmp_3ccc;
	local_40 = ((arg_1 >> 0x3) * arg_2);
#define next_call_arg_0 "local_18"
	local_64 = local_40;
#define next_call_arg_1 "(local_64 + local_18)"
#define next_call_arg_2 "((local_64 << 0x1) + local_18)"
#define next_call_arg_3 "arg_3"
	local_68 = med3();
	local_18 = local_68;
	local_70 = local_40;
	local_74 = med3((local_38 - local_70), local_38, (local_70 + local_38), arg_3);
	local_38 = local_74;
	local_7c = local_40;
	local_80 = med3((local_3c - (local_7c << 0x1)), (local_3c - local_7c), local_3c, arg_3);
	local_3c = local_80;
jmp_3ccc:
	local_60 = med3(local_18, local_38, local_3c, arg_3);
	local_38 = local_60;
jmp_3ce0:
	if (local_28 != 0x0) goto jmp_3cf6;
	*(int *)local_58 = *(int *)arg_0;
	*(int *)arg_0 = *(int *)local_38;
	*(int *)local_38 = *(int *)local_58;
	goto jmp_3d05;
jmp_3cf6:
	swapfunc(arg_0, local_38, arg_2, local_28);
jmp_3d05:
	local_60 = (arg_2 + arg_0);
	local_1c = local_60;
	local_2c = local_60;
	local_64 = (((arg_1 - 0x1) * arg_2) + arg_0);
	local_30 = local_64;
	local_20 = local_64;
	goto jmp_3d64;
jmp_3d2a:
	if (local_24 != 0x0) goto jmp_3d5d;
	local_34 = 0x1;
	if (local_28 != 0x0) goto jmp_3d47;
	local_68 = *(int *)local_2c;
	*(int *)local_2c = *(int *)local_1c;
	*(int *)local_1c = local_68;
	goto jmp_3d56;
jmp_3d47:
	swapfunc(local_2c, local_1c, arg_2, local_28);
jmp_3d56:
	local_2c = (arg_2 + local_2c);
jmp_3d5d:
	local_1c = (arg_2 + local_1c);
jmp_3d64:
	if (local_1c > local_20) goto jmp_3d7c;
	local_6c = (*(arg_3))(local_1c, arg_0);
	local_24 = local_6c;
	if (local_6c <= 0x0) goto jmp_3d2a;
jmp_3d7c:
	goto jmp_3db8;
jmp_3d7e:
	if (local_24 != 0x0) goto jmp_3db1;
	local_34 = 0x1;
	if (local_28 != 0x0) goto jmp_3d9b;
	local_70 = *(int *)local_20;
	*(int *)local_20 = *(int *)local_30;
	*(int *)local_30 = local_70;
	goto jmp_3daa;
jmp_3d9b:
	swapfunc(local_20, local_30, arg_2, local_28);
jmp_3daa:
	local_30 = (local_30 - arg_2);
jmp_3db1:
	local_20 = (local_20 - arg_2);
jmp_3db8:
	if (local_1c > local_20) goto jmp_3dd0;
	local_74 = (*(arg_3))(local_20, arg_0);
	local_24 = local_74;
	if (local_74 >= 0x0) goto jmp_3d7e;
jmp_3dd0:
	if (local_1c <= local_20) goto jmp_3dd7;
	goto jmp_3e0f;
jmp_3dd7:
	if (local_28 != 0x0) goto jmp_3ded;
	local_78 = *(int *)local_1c;
	*(int *)local_1c = *(int *)local_20;
	*(int *)local_20 = local_78;
	goto jmp_3dfc;
jmp_3ded:
	swapfunc(local_1c, local_20, arg_2, local_28);
jmp_3dfc:
	local_34 = 0x1;
	local_1c = (arg_2 + local_1c);
	local_20 = (local_20 - arg_2);
	goto jmp_3d64;
jmp_3e0f:
	if (local_34 != 0x0) goto jmp_3e82;
	local_38 = (arg_2 + arg_0);
	goto jmp_3e75;
jmp_3e1c:
	local_18 = local_38;
	goto jmp_3e57;
jmp_3e22:
	if (local_28 != 0x0) goto jmp_3e3e;
	local_68 = *(int *)local_18;
	*(int *)local_18 = *(int *)(local_18 - arg_2);
	*(int *)(local_18 - arg_2) = local_68;
	goto jmp_3e50;
jmp_3e3e:
	swapfunc(local_18, (local_18 - arg_2), arg_2, local_28);
jmp_3e50:
	local_18 = (local_18 - arg_2);
jmp_3e57:
	if (local_18 <= arg_0) goto jmp_3e6e;
	local_74 = (*(arg_3))((local_18 - arg_2), local_18);
	if (local_74 > 0x0) goto jmp_3e22;
jmp_3e6e:
	local_38 = (arg_2 + local_38);
jmp_3e75:
	if (local_38 < ((arg_1 * arg_2) + arg_0)) goto jmp_3e1c;
	goto jmp_3f46;
jmp_3e82:
	local_3c = ((arg_1 * arg_2) + arg_0);
	local_70 = local_2c;
	if ((local_70 - arg_0) >= (local_1c - local_70)) goto jmp_3ea4;
	local_68 = (local_2c - arg_0);
	goto jmp_3eab;
jmp_3ea4:
	local_68 = (local_1c - local_2c);
jmp_3eab:
	local_24 = local_68;
	if (local_24 <= 0x0) goto jmp_3ec5;
	swapfunc(arg_0, (local_1c - local_24), local_24, local_28);
jmp_3ec5:
	local_7c = local_30;
	if ((local_7c - local_20) >= ((local_3c - local_7c) - arg_2)) goto jmp_3ee0;
	local_78 = (local_30 - local_20);
	goto jmp_3eea;
jmp_3ee0:
	local_78 = ((local_3c - local_30) - arg_2);
jmp_3eea:
	local_24 = local_78;
	if (local_24 <= 0x0) goto jmp_3f04;
	swapfunc(local_1c, (local_3c - local_24), local_24, local_28);
jmp_3f04:
	*(int *)local_84 = (local_1c - local_2c);
	local_24 = *(int *)local_84;
	if (*(int *)local_84 <= arg_2) goto jmp_3f26;
	qsort(arg_0, (local_24 / arg_2), arg_2, arg_3);
jmp_3f26:
	*(int *)local_8c = (local_30 - local_20);
	local_24 = *(int *)local_8c;
	if (*(int *)local_8c <= arg_2) goto jmp_3f46;
	arg_0 = (local_3c - local_24);
	arg_1 = (local_24 / arg_2);
	goto jmp_3b9c;
jmp_3f46:
}

/*
=================
strlen

Address: 0x3f48
Stack Size: 0xc
Called by: Com_CharIsOneOfCharset, Info_SetValueForKey_Big, Info_SetValueForKey, Info_RemoveKey_Big, Info_RemoveKey, Info_ValueForKey, Com_TruncateLongString, Q_stristr, Q_strcat, Com_HexStrToInt, COM_CompareExtension, CG_DrawTourneyScoreboard, CG_DrawField, CG_BuildSpectatorString
=================
*/
int strlen(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	goto jmp_3f55;
jmp_3f4f:
	local_8 = (local_8 + 0x1);
jmp_3f55:
	if ((char)*(char *)local_8 != 0x0) goto jmp_3f4f;
	return (local_8 - arg_0);
}

/*
=================
strcat

Address: 0x3f63
Stack Size: 0x18
Called by: Info_SetValueForKey_Big, Info_SetValueForKey, CG_Obituary
=================
*/
int strcat(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	arg_1 = arg_1;
	local_8 = arg_0;
	goto jmp_3f74;
jmp_3f6e:
	local_8 = (local_8 + 0x1);
jmp_3f74:
	if ((char)*(char *)local_8 != 0x0) goto jmp_3f6e;
	goto jmp_3f9b;
jmp_3f7c:
	local_c = local_8;
	local_14 = 0x1;
	local_8 = (local_c + local_14);
	local_10 = arg_1;
	arg_1 = (local_10 + local_14);
	*(char *)local_c = *(char *)local_10;
jmp_3f9b:
	if ((char)*(char *)arg_1 != 0x0) goto jmp_3f7c;
	*(char *)local_8 = 0x0;
	return arg_0;
}

/*
=================
strcpy

Address: 0x3faa
Stack Size: 0x18
Called by: Info_SetValueForKey, CG_Obituary
=================
*/
int strcpy(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	arg_1 = arg_1;
	local_8 = arg_0;
	goto jmp_3fd4;
jmp_3fb5:
	local_c = local_8;
	local_14 = 0x1;
	local_8 = (local_c + local_14);
	local_10 = arg_1;
	arg_1 = (local_10 + local_14);
	*(char *)local_c = *(char *)local_10;
jmp_3fd4:
	if ((char)*(char *)arg_1 != 0x0) goto jmp_3fb5;
	*(char *)local_8 = 0x0;
	return arg_0;
}

/*
=================
strcmp

Address: 0x3fe3
Stack Size: 0x14
Called by: Info_RemoveKey_Big, Info_RemoveKey, COM_MatchToken, CG_ServerCommand, CG_CustomSound, CG_Init, CG_RegisterItemSounds
=================
*/
int strcmp(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	int		local_10;

	arg_0 = arg_0;
	arg_1 = arg_1;
	goto jmp_3fff;
jmp_3fee:
	local_8 = 0x1;
	arg_0 = (arg_0 + local_8);
	arg_1 = (arg_1 + local_8);
jmp_3fff:
	local_8 = (char)*(char *)arg_0;
	local_c = (char)*(char *)arg_1;
	if (local_8 != local_c) goto jmp_401d;
	local_10 = 0x0;
	if (local_8 == local_10) goto jmp_401d;
	if (local_c != local_10) goto jmp_3fee;
jmp_401d:
	return ((char)*(char *)arg_0 - (char)*(char *)arg_1);
}

/*
=================
strchr

Address: 0x4029
Stack Size: 0x8
Called by: Info_SetValueForKey_Big, Info_SetValueForKey, Info_Validate, Info_RemoveKey_Big, Info_RemoveKey, CG_NewClientInfo
=================
*/
int strchr(int arg_0, int arg_1) {

	arg_0 = arg_0;
	arg_1 = arg_1;
	goto jmp_4046;
jmp_4034:
	if ((char)*(char *)arg_0 != arg_1) goto jmp_4040;
	return arg_0;
jmp_4040:
	arg_0 = (arg_0 + 0x1);
jmp_4046:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_4034;
	if (arg_1 == 0x0) goto jmp_4054;
	return 0x0;
jmp_4054:
	return arg_0;
}

/*
=================
strrchr

Address: 0x4059
Stack Size: 0xc
Called by: COM_DefaultExtension, COM_StripExtension, COM_GetExtension, CG_LoadingClient
=================
*/
int strrchr(int arg_0, int arg_1) {
	int		local_8;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_8 = 0x0;
	goto jmp_4078;
jmp_4067:
	if ((char)*(char *)arg_0 != arg_1) goto jmp_4072;
	local_8 = arg_0;
jmp_4072:
	arg_0 = (arg_0 + 0x1);
jmp_4078:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_4067;
	if (arg_1 == 0x0) goto jmp_4087;
	return local_8;
jmp_4087:
	return arg_0;
}

/*
=================
strstr

Address: 0x408c
Stack Size: 0x10
Called by: CG_ShaderStateChanged
=================
*/
int strstr(int arg_0, int arg_1) {
	char	local_8[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	goto jmp_40d0;
jmp_4097:
	*(int *)local_8 = 0x0;
	goto jmp_40b3;
jmp_409c:
	if ((char)*(char *)(*(int *)local_8 + arg_0) == (char)*(char *)(*(int *)local_8 + arg_1)) goto jmp_40ad;
	goto jmp_40bc;
jmp_40ad:
	*(int *)local_8 = (*(int *)local_8 + 0x1);
jmp_40b3:
	if ((char)*(char *)(*(int *)local_8 + arg_1) != 0x0) goto jmp_409c;
jmp_40bc:
	if ((char)*(char *)(*(int *)local_8 + arg_1) != 0x0) goto jmp_40ca;
	return arg_0;
jmp_40ca:
	arg_0 = (arg_0 + 0x1);
jmp_40d0:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_4097;
	return 0x0;
}

/*
=================
tolower

Address: 0x40da
Stack Size: 0xc
Called by: Q_strlwr, Com_HexStrToInt, strtod
=================
*/
int tolower(int arg_0) {

	arg_0 = arg_0;
	if (arg_0 < 0x41) goto jmp_40ed;
	if (arg_0 > 0x5a) goto jmp_40ed;
	arg_0 = (arg_0 + 0x20);
jmp_40ed:
	return arg_0;
}

/*
=================
toupper

Address: 0x40f2
Stack Size: 0xc
Called by: Q_strupr
=================
*/
int toupper(int arg_0) {

	arg_0 = arg_0;
	if (arg_0 < 0x61) goto jmp_4105;
	if (arg_0 > 0x7a) goto jmp_4105;
	arg_0 = (arg_0 + 0xffffffe0);
jmp_4105:
	return arg_0;
}

/*
=================
memmove

Address: 0x410a
Stack Size: 0x10
Called by: Info_RemoveKey_Big, Info_RemoveKey
=================
*/
int memmove(int arg_0, int arg_1, int arg_2) {
	char	local_8[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	if (arg_2 == 0x0) goto jmp_4158;
	if (arg_0 <= arg_1) goto jmp_413c;
	*(int *)local_8 = arg_2;
jmp_4124:
	*(int *)local_8 = (*(int *)local_8 - 0x1);
	*(char *)(*(int *)local_8 + arg_0) = *(char *)(*(int *)local_8 + arg_1);
	if (*(int *)local_8 != 0x0) goto jmp_4124;
	goto jmp_4158;
jmp_413c:
	*(int *)local_8 = 0x0;
	goto jmp_4153;
jmp_4141:
	*(char *)(*(int *)local_8 + arg_0) = *(char *)(*(int *)local_8 + arg_1);
	*(int *)local_8 = (*(int *)local_8 + 0x1);
jmp_4153:
	if (*(int *)local_8 < arg_2) goto jmp_4141;
jmp_4158:
	return arg_0;
}

/*
=================
powN

Address: 0x415d
Stack Size: 0x18
Calls: powN
Called by: fmtfp, strtod, powN
=================
*/
int powN(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	arg_1 = arg_1;
	if (arg_1 < 0x0) goto jmp_4192;
	local_10 = 0x3f800000;
	goto jmp_4189;
jmp_416f:
	if ((arg_1 %% 0x2) != 0x1) goto jmp_417c;
	local_10 = (local_10 * arg_0);
jmp_417c:
	arg_0 = (arg_0 * arg_0);
	arg_1 = (arg_1 / 0x2);
jmp_4189:
	if (arg_1 > 0x0) goto jmp_416f;
	return local_10;
jmp_4192:
	if (arg_1 != 0x80000000) goto jmp_41aa;
	local_10 = powN(arg_0, (arg_1 + 0x1));
	return (local_10 / arg_0);
jmp_41aa:
	local_14 = powN(arg_0, -arg_1);
	return (0x3f800000 / local_14);
}

/*
=================
tan

Address: 0x41bc
Stack Size: 0x14
Calls: cos, sin
Called by: CG_CalcFov, CG_DrawCrosshair3D
=================
*/
int tan(int arg_0) {
	int		local_c;
	int		local_10;

	local_c = sin(arg_0);
	local_10 = cos(arg_0);
	return (local_c / local_10);
}

/*
=================
srand

Address: 0x41d3
Stack Size: 0x8
=================
*/
void srand(int arg_0) {

	randSeed = arg_0;
}

/*
=================
rand

Address: 0x41da
Stack Size: 0xc
Called by: CG_Bullet, CG_Tracer, CG_MissileHitWall, CG_FireWeapon, CG_AddPlayerWeapon, CG_LightningBolt, CG_PlasmaTrail, CG_ShotgunEjectBrass, CG_MachineGunEjectBrass, CG_PlayerPowerups, CG_ParticleMisc, CG_ParticleDust, CG_ParticleSparks, CG_ParticleBloodCloud, CG_BloodPool, CG_Particle_OilSlick, CG_Particle_OilParticle, CG_Particle_Bleed, CG_ParticleImpactSmokePuff, CG_ParticleExplosion, CG_ParticleSmoke, CG_ParticleBubble, CG_ParticleSnow, CG_ParticleSnowFlurry, CG_AddParticleToScene, CG_FragmentBounceSound, CG_FragmentBounceMark, CG_EntityEvent, CG_PainEvent, CG_Speaker, CG_BigExplode, CG_LaunchExplode, CG_GibPlayer, CG_LaunchGib, CG_Bleed, CG_MakeExplosion, CG_BubbleTrail, CG_DrawStatusBarHead
=================
*/
int rand(void) {
	int		local_8;

	local_8 = 0xf0c;
	*(int *)local_8 = ((0x10dcd * *(int *)local_8) + 0x1);
	return (*(int *)local_8 & 0x7fff);
}

/*
=================
atof

Address: 0x41f0
Stack Size: 0x2c
Called by: Parse1DMatrix, CG_TestModel_f, CG_ParseAnimationFile, CG_NewParticleArea, CG_DrawCrosshair3D
=================
*/
int atof(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	char	local_14[8];
	int		local_1c;
	char	local_20[12];

	arg_0 = arg_0;
	goto jmp_4207;
jmp_41f7:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_4201;
	return 0x0;
jmp_4201:
	arg_0 = (arg_0 + 0x1);
jmp_4207:
	if ((char)*(char *)arg_0 <= 0x20) goto jmp_41f7;
	*(int *)local_14 = (char)*(char *)arg_0;
	if (*(int *)local_14 == 0x2b) goto jmp_421d;
	if (*(int *)local_14 == 0x2d) goto jmp_4228;
	goto jmp_4233;
jmp_421d:
	arg_0 = (arg_0 + 0x1);
	local_10 = 0x3f800000;
	goto jmp_4236;
jmp_4228:
	arg_0 = (arg_0 + 0x1);
	local_10 = 0xbf800000;
	goto jmp_4236;
jmp_4233:
	local_10 = 0x3f800000;
jmp_4236:
	local_c = 0x0;
	local_8 = (char)*(char *)arg_0;
	if (local_8 == 0x2e) goto jmp_4271;
jmp_4243:
	local_1c = arg_0;
	arg_0 = (local_1c + 0x1);
	local_8 = (char)*(char *)local_1c;
	if (local_8 < 0x30) goto jmp_425b;
	if (local_8 <= 0x39) goto jmp_425d;
jmp_425b:
	goto jmp_4277;
jmp_425d:
	local_8 = (local_8 - 0x30);
	local_c = ((0x41200000 * local_c) + (float)local_8);
	goto jmp_4243;
	goto jmp_4277;
jmp_4271:
	arg_0 = (arg_0 + 0x1);
jmp_4277:
	if (local_8 != 0x2e) goto jmp_42b1;
	local_1c = 0x3dcccccd;
jmp_427e:
	*(int *)local_20 = arg_0;
	arg_0 = (*(int *)local_20 + 0x1);
	local_8 = (char)*(char *)*(int *)local_20;
	if (local_8 < 0x30) goto jmp_4296;
	if (local_8 <= 0x39) goto jmp_4298;
jmp_4296:
	goto jmp_42b1;
jmp_4298:
	local_8 = (local_8 - 0x30);
	local_c = (local_c + ((float)local_8 * local_1c));
	local_1c = (0x3dcccccd * local_1c);
	goto jmp_427e;
jmp_42b1:
	return (local_c * local_10);
}

/*
=================
_atof

Address: 0x42b9
Stack Size: 0x30
Called by: sscanf
=================
*/
int _atof(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[8];
	int		local_20;
	char	local_24[12];

	arg_0 = arg_0;
	local_8 = 0x30;
	local_c = *(int *)arg_0;
	goto jmp_42dd;
jmp_42c8:
	if ((char)*(char *)local_c != 0x0) goto jmp_42d7;
	*(int *)arg_0 = local_c;
	return 0x0;
jmp_42d7:
	local_c = (local_c + 0x1);
jmp_42dd:
	if ((char)*(char *)local_c <= 0x20) goto jmp_42c8;
	*(int *)local_18 = (char)*(char *)local_c;
	if (*(int *)local_18 == 0x2b) goto jmp_42f3;
	if (*(int *)local_18 == 0x2d) goto jmp_42fe;
	goto jmp_4309;
jmp_42f3:
	local_c = (local_c + 0x1);
	local_14 = 0x3f800000;
	goto jmp_430c;
jmp_42fe:
	local_c = (local_c + 0x1);
	local_14 = 0xbf800000;
	goto jmp_430c;
jmp_4309:
	local_14 = 0x3f800000;
jmp_430c:
	local_10 = 0x0;
	if ((char)*(char *)local_c == 0x2e) goto jmp_4341;
jmp_4315:
	local_20 = local_c;
	local_c = (local_20 + 0x1);
	local_8 = (char)*(char *)local_20;
	if (local_8 < 0x30) goto jmp_432d;
	if (local_8 <= 0x39) goto jmp_432f;
jmp_432d:
	goto jmp_4341;
jmp_432f:
	local_8 = (local_8 - 0x30);
	local_10 = ((0x41200000 * local_10) + (float)local_8);
	goto jmp_4315;
jmp_4341:
	if (local_8 != 0x2e) goto jmp_437b;
	local_20 = 0x3dcccccd;
jmp_4348:
	*(int *)local_24 = local_c;
	local_c = (*(int *)local_24 + 0x1);
	local_8 = (char)*(char *)*(int *)local_24;
	if (local_8 < 0x30) goto jmp_4360;
	if (local_8 <= 0x39) goto jmp_4362;
jmp_4360:
	goto jmp_437b;
jmp_4362:
	local_8 = (local_8 - 0x30);
	local_10 = (local_10 + ((float)local_8 * local_20));
	local_20 = (0x3dcccccd * local_20);
	goto jmp_4348;
jmp_437b:
	*(int *)arg_0 = local_c;
	return (local_10 * local_14);
}

/*
=================
strtod

Address: 0x4388
Stack Size: 0x50
Calls: powN, tolower, strtol, Q_stricmpn
Called by: Q_isanumber
=================
*/
int strtod(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_18 = 0x0;
	goto jmp_439c;
jmp_4396:
	arg_0 = (arg_0 + 0x1);
jmp_439c:
	local_1c = (char)*(char *)arg_0;
	if (local_1c == 0x20) goto jmp_4396;
	if (local_1c == 0xc) goto jmp_4396;
	if (local_1c == 0xa) goto jmp_4396;
	if (local_1c == 0xd) goto jmp_4396;
	if (local_1c == 0x9) goto jmp_4396;
	if (local_1c == 0xb) goto jmp_4396;
	local_20 = Q_stricmpn(arg_0, 0x511a, 0x3);
	if (local_20 != 0x0) goto jmp_4413;
	if (arg_1 == 0x0) goto jmp_43d4;
	*(int *)arg_1 = (arg_0 + 0x3);
jmp_43d4:
	if ((char)*(char *)(arg_0 + 0x3) != 0x28) goto jmp_440b;
	local_30 = strtol((arg_0 + 0x4), &local_2c, 0x0);
	local_28 = local_30;
	if ((char)*(char *)local_2c != 0x29) goto jmp_440b;
	local_24 = ((local_28 & 0x7fffff) | 0x7f800000);
	if (arg_1 == 0x0) goto jmp_4406;
	*(int *)arg_1 = (local_2c + 0x1);
jmp_4406:
	return local_24;
jmp_440b:
	local_24 = 0x7fffffff;
	return local_24;
jmp_4413:
	local_24 = Q_stricmpn(arg_0, 0x5116, 0x3);
	if (local_24 != 0x0) goto jmp_4454;
	local_28 = 0x7f800000;
	if (arg_1 != 0x0) goto jmp_442e;
	return local_28;
jmp_442e:
	local_2c = Q_stricmpn((arg_0 + 0x3), 0x5110, 0x5);
	if (local_2c != 0x0) goto jmp_4448;
	*(int *)arg_1 = (arg_0 + 0x8);
	goto jmp_444f;
jmp_4448:
	*(int *)arg_1 = (arg_0 + 0x3);
jmp_444f:
	return local_28;
jmp_4454:
	if ((char)*(char *)arg_0 != 0x2d) goto jmp_446a;
	local_28 = 0x1;
	arg_0 = (arg_0 + local_28);
	local_18 = local_28;
	goto jmp_4476;
jmp_446a:
	if ((char)*(char *)arg_0 != 0x2b) goto jmp_4476;
	arg_0 = (arg_0 + 0x1);
jmp_4476:
	local_28 = Q_stricmpn(arg_0, 0x510d, 0x2);
	if (local_28 != 0x0) goto jmp_4614;
	local_30 = (arg_0 + 0x1);
	local_2c = local_30;
	arg_0 = (arg_0 + 0x2);
	local_14 = 0x0;
	goto jmp_4514;
jmp_449a:
	local_34 = (char)*(char *)arg_0;
	if (local_34 < 0x30) goto jmp_44c2;
	if (local_34 > 0x39) goto jmp_44c2;
	local_38 = arg_0;
	arg_0 = (local_38 + 0x1);
	local_14 = ((0x41800000 * local_14) + (float)((char)*(char *)local_38 - 0x30));
	goto jmp_4514;
jmp_44c2:
	local_3c = (char)*(char *)arg_0;
	if (local_3c < 0x41) goto jmp_44ec;
	if (local_3c > 0x46) goto jmp_44ec;
	local_40 = arg_0;
	arg_0 = (local_40 + 0x1);
	local_14 = ((((0x41800000 * local_14) + 0x41200000) + (float)(char)*(char *)local_40) - 0x42820000);
	goto jmp_4514;
jmp_44ec:
	local_44 = (char)*(char *)arg_0;
	if (local_44 < 0x61) goto jmp_4516;
	if (local_44 > 0x66) goto jmp_4516;
	local_48 = arg_0;
	arg_0 = (local_48 + 0x1);
	local_14 = ((((0x41800000 * local_14) + 0x41200000) + (float)(char)*(char *)local_48) - 0x42c20000);
jmp_4514:
	goto jmp_449a;
jmp_4516:
	if ((local_2c + 0x1) >= arg_0) goto jmp_4521;
	local_2c = arg_0;
jmp_4521:
	if ((char)*(char *)arg_0 != 0x2e) goto jmp_45be;
	arg_0 = (arg_0 + 0x1);
	local_34 = 0x3d800000;
jmp_4530:
	local_38 = (char)*(char *)arg_0;
	if (local_38 < 0x30) goto jmp_4559;
	if (local_38 > 0x39) goto jmp_4559;
	local_3c = arg_0;
	arg_0 = (local_3c + 0x1);
	local_14 = (local_14 + (local_34 * (float)((char)*(char *)local_3c - 0x30)));
	goto jmp_45ad;
jmp_4559:
	local_40 = (char)*(char *)arg_0;
	if (local_40 < 0x41) goto jmp_4584;
	if (local_40 > 0x46) goto jmp_4584;
	local_44 = arg_0;
	arg_0 = (local_44 + 0x1);
	local_14 = (local_14 + (local_34 * (float)(((char)*(char *)local_44 + 0xa) - 0x41)));
	goto jmp_45ad;
jmp_4584:
	local_48 = (char)*(char *)arg_0;
	if (local_48 < 0x61) goto jmp_45b5;
	if (local_48 > 0x66) goto jmp_45b5;
	local_4c = arg_0;
	arg_0 = (local_4c + 0x1);
	local_14 = (local_14 + (local_34 * (float)(((char)*(char *)local_4c + 0xa) - 0x61)));
jmp_45ad:
	local_34 = (local_34 / 0x41800000);
	goto jmp_4530;
jmp_45b5:
	if (local_2c >= arg_0) goto jmp_45be;
	local_2c = arg_0;
jmp_45be:
	if (local_2c == local_30) goto jmp_4606;
	local_34 = tolower((char)*(char *)arg_0);
	if (local_34 != 0x70) goto jmp_4606;
	local_3c = strtol((arg_0 + 0x1), &local_2c, 0xa);
	local_38 = local_3c;
	if ((arg_0 + 0x1) != local_2c) goto jmp_45f6;
	if (arg_1 == 0x0) goto jmp_45f1;
	*(int *)arg_1 = arg_0;
jmp_45f1:
	return local_14;
jmp_45f6:
	local_40 = powN(0x40000000, local_38);
	local_14 = (local_14 * local_40);
jmp_4606:
	if (arg_1 == 0x0) goto jmp_460f;
	*(int *)arg_1 = local_2c;
jmp_460f:
	return local_14;
jmp_4614:
	local_2c = arg_0;
	local_30 = arg_0;
	local_14 = 0x0;
	goto jmp_4639;
jmp_4621:
	local_34 = arg_0;
	arg_0 = (local_34 + 0x1);
	local_14 = (((0x41200000 * local_14) + (float)(char)*(char *)local_34) - 0x42400000);
jmp_4639:
	local_38 = (char)*(char *)arg_0;
	if (local_38 < 0x30) goto jmp_4647;
	if (local_38 <= 0x39) goto jmp_4621;
jmp_4647:
	if (local_2c >= arg_0) goto jmp_4650;
	local_2c = arg_0;
jmp_4650:
	if ((char)*(char *)arg_0 != 0x2e) goto jmp_4699;
	arg_0 = (arg_0 + 0x1);
	local_3c = 0x3dcccccd;
	goto jmp_4680;
jmp_4661:
	local_40 = arg_0;
	arg_0 = (local_40 + 0x1);
	local_14 = (local_14 + ((float)((char)*(char *)local_40 - 0x30) * local_3c));
	local_3c = (local_3c / 0x41200000);
jmp_4680:
	local_44 = (char)*(char *)arg_0;
	if (local_44 < 0x30) goto jmp_468e;
	if (local_44 <= 0x39) goto jmp_4661;
jmp_468e:
	if ((local_2c + 0x1) >= arg_0) goto jmp_4699;
	local_2c = arg_0;
jmp_4699:
	if (local_30 == local_2c) goto jmp_46e1;
	local_3c = tolower((char)*(char *)arg_0);
	if (local_3c != 0x65) goto jmp_46e1;
	local_44 = strtol((arg_0 + 0x1), &local_2c, 0xa);
	local_40 = local_44;
	if ((arg_0 + 0x1) != local_2c) goto jmp_46d1;
	if (arg_1 == 0x0) goto jmp_46cc;
	*(int *)arg_1 = arg_0;
jmp_46cc:
	return local_14;
jmp_46d1:
	local_48 = powN(0x41200000, local_40);
	local_14 = (local_14 * local_48);
jmp_46e1:
	if (arg_1 == 0x0) goto jmp_46ea;
	*(int *)arg_1 = local_2c;
jmp_46ea:
	return local_14;
}

/*
=================
atoi

Address: 0x46ef
Stack Size: 0x24
Called by: CG_Weapon_f, CG_ConfigStringModified, CG_SetConfigValues, CG_ParseWarmup, CG_ParseServerinfo, CG_ParseTeamInfo, CG_ParseScores, CG_NewClientInfo, CG_ColorFromString, CG_ParseAnimationFile, CG_NewParticleArea, CG_DrawInformation, CG_StartOrbit_f, CG_TargetCommand_f, CG_Init, CG_RegisterCvars
=================
*/
int atoi(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	char	local_14[8];
	char	local_1c[8];

	arg_0 = arg_0;
	goto jmp_4706;
jmp_46f6:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_4700;
	return 0x0;
jmp_4700:
	arg_0 = (arg_0 + 0x1);
jmp_4706:
	if ((char)*(char *)arg_0 <= 0x20) goto jmp_46f6;
	*(int *)local_14 = (char)*(char *)arg_0;
	if (*(int *)local_14 == 0x2b) goto jmp_471c;
	if (*(int *)local_14 == 0x2d) goto jmp_472c;
	goto jmp_4737;
jmp_471c:
	*(int *)local_1c = 0x1;
	arg_0 = (arg_0 + *(int *)local_1c);
	local_10 = *(int *)local_1c;
	goto jmp_473a;
jmp_472c:
	arg_0 = (arg_0 + 0x1);
	local_10 = 0xffffffff;
	goto jmp_473a;
jmp_4737:
	local_10 = 0x1;
jmp_473a:
	local_c = 0x0;
jmp_473d:
	*(int *)local_1c = arg_0;
	arg_0 = (*(int *)local_1c + 0x1);
	local_8 = (char)*(char *)*(int *)local_1c;
	if (local_8 < 0x30) goto jmp_4755;
	if (local_8 <= 0x39) goto jmp_4757;
jmp_4755:
	goto jmp_4768;
jmp_4757:
	local_8 = (local_8 - 0x30);
	local_c = ((0xa * local_c) + local_8);
	goto jmp_473d;
jmp_4768:
	return (local_c * local_10);
}

/*
=================
_atoi

Address: 0x4770
Stack Size: 0x28
Called by: sscanf
=================
*/
int _atoi(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[8];
	char	local_20[8];

	local_c = *(int *)arg_0;
	goto jmp_4788;
jmp_4778:
	if ((char)*(char *)local_c != 0x0) goto jmp_4782;
	return 0x0;
jmp_4782:
	local_c = (local_c + 0x1);
jmp_4788:
	if ((char)*(char *)local_c <= 0x20) goto jmp_4778;
	*(int *)local_18 = (char)*(char *)local_c;
	if (*(int *)local_18 == 0x2b) goto jmp_479e;
	if (*(int *)local_18 == 0x2d) goto jmp_47ae;
	goto jmp_47b9;
jmp_479e:
	*(int *)local_20 = 0x1;
	local_c = (local_c + *(int *)local_20);
	local_14 = *(int *)local_20;
	goto jmp_47bc;
jmp_47ae:
	local_c = (local_c + 0x1);
	local_14 = 0xffffffff;
	goto jmp_47bc;
jmp_47b9:
	local_14 = 0x1;
jmp_47bc:
	local_10 = 0x0;
jmp_47bf:
	*(int *)local_20 = local_c;
	local_c = (*(int *)local_20 + 0x1);
	local_8 = (char)*(char *)*(int *)local_20;
	if (local_8 < 0x30) goto jmp_47d7;
	if (local_8 <= 0x39) goto jmp_47d9;
jmp_47d7:
	goto jmp_47ea;
jmp_47d9:
	local_8 = (local_8 - 0x30);
	local_10 = ((0xa * local_10) + local_8);
	goto jmp_47bf;
jmp_47ea:
	*(int *)arg_0 = local_c;
	return (local_10 * local_14);
}

/*
=================
strtol

Address: 0x47f7
Stack Size: 0x28
Called by: strtod
=================
*/
int strtol(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	char	local_c[8];
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	*(int *)local_c = 0x1;
	if (arg_1 == 0x0) goto jmp_4810;
	*(int *)arg_1 = arg_0;
jmp_4810:
	if (arg_2 < 0x0) goto jmp_481c;
	if (arg_2 == 0x1) goto jmp_481c;
	if (arg_2 <= 0x24) goto jmp_4826;
jmp_481c:
	return 0x0;
jmp_4820:
	arg_0 = (arg_0 + 0x1);
jmp_4826:
	local_14 = (char)*(char *)arg_0;
	if (local_14 == 0x20) goto jmp_4820;
	if (local_14 == 0xc) goto jmp_4820;
	if (local_14 == 0xa) goto jmp_4820;
	if (local_14 == 0xd) goto jmp_4820;
	if (local_14 == 0x9) goto jmp_4820;
	if (local_14 == 0xb) goto jmp_4820;
	if ((char)*(char *)arg_0 != 0x2d) goto jmp_4855;
	arg_0 = (arg_0 + 0x1);
	*(int *)local_c = 0x0;
	goto jmp_4861;
jmp_4855:
	if ((char)*(char *)arg_0 != 0x2b) goto jmp_4861;
	arg_0 = (arg_0 + 0x1);
jmp_4861:
	if ((char)*(char *)arg_0 != 0x30) goto jmp_48ad;
	arg_0 = (arg_0 + 0x1);
	if (arg_1 == 0x0) goto jmp_4876;
	*(int *)arg_1 = arg_0;
jmp_4876:
	local_18 = (char)*(char *)arg_0;
	if (local_18 == 0x78) goto jmp_4884;
	if (local_18 != 0x58) goto jmp_48a4;
jmp_4884:
	if (arg_2 == 0x0) goto jmp_4899;
	if (arg_2 == 0x10) goto jmp_4899;
	if (arg_1 == 0x0) goto jmp_4895;
	*(int *)arg_1 = arg_0;
jmp_4895:
	return 0x0;
jmp_4899:
	arg_0 = (arg_0 + 0x1);
	arg_2 = 0x10;
	goto jmp_48b4;
jmp_48a4:
	if (arg_2 != 0x0) goto jmp_48b4;
	arg_2 = 0x8;
	goto jmp_48b4;
jmp_48ad:
	if (arg_2 != 0x0) goto jmp_48b4;
	arg_2 = 0xa;
jmp_48b4:
	local_8 = 0x0;
	goto jmp_4932;
jmp_48b9:
	local_1c = (char)*(char *)arg_0;
	if (local_1c < 0x30) goto jmp_48d1;
	if (local_1c > 0x39) goto jmp_48d1;
	local_18 = ((char)*(char *)arg_0 - 0x30);
	goto jmp_4903;
jmp_48d1:
	local_20 = (char)*(char *)arg_0;
	if (local_20 < 0x61) goto jmp_48eb;
	if (local_20 > 0x7a) goto jmp_48eb;
	local_18 = (((char)*(char *)arg_0 + 0xa) - 0x61);
	goto jmp_4903;
jmp_48eb:
	local_24 = (char)*(char *)arg_0;
	if (local_24 < 0x41) goto jmp_4934;
	if (local_24 > 0x5a) goto jmp_4934;
	local_18 = (((char)*(char *)arg_0 + 0xa) - 0x41);
jmp_4903:
	if (local_18 < arg_2) goto jmp_490a;
	goto jmp_4934;
jmp_490a:
	if (local_8 >= ((local_18 + 0x80000000) / arg_2)) goto jmp_4919;
	local_8 = 0x80000000;
	goto jmp_4923;
jmp_4919:
	local_8 = ((local_8 * arg_2) - local_18);
jmp_4923:
	arg_0 = (arg_0 + 0x1);
	if (arg_1 == 0x0) goto jmp_4932;
	*(int *)arg_1 = arg_0;
jmp_4932:
	goto jmp_48b9;
jmp_4934:
	if (*(int *)local_c == 0x0) goto jmp_4946;
	if (local_8 != 0x80000000) goto jmp_4941;
	local_8 = 0x7fffffff;
	goto jmp_4946;
jmp_4941:
	local_8 = -local_8;
jmp_4946:
	return local_8;
}

/*
=================
abs

Address: 0x494b
Stack Size: 0xc
Called by: PmoveSingle, PM_CmdScale
=================
*/
int abs(int arg_0) {
	int		local_8;

	arg_0 = arg_0;
	if (arg_0 >= 0x0) goto jmp_495b;
	local_8 = -arg_0;
	goto jmp_495f;
jmp_495b:
	local_8 = arg_0;
jmp_495f:
	return local_8;
}

/*
=================
fabs

Address: 0x4964
Stack Size: 0xc
Called by: PerpendicularVector, RadiusFromBounds, CG_CalcViewValues, CG_PlayerFlag, CG_SwingAngles, BG_TouchJumpPad
=================
*/
int fabs(int arg_0) {
	int		local_8;

	arg_0 = arg_0;
	if (arg_0 >= 0x0) goto jmp_4974;
	local_8 = -arg_0;
	goto jmp_4978;
jmp_4974:
	local_8 = arg_0;
jmp_4978:
	return local_8;
}

/*
=================
dopr

Address: 0x497d
Stack Size: 0x13c
Calls: fmtstr, fmtfp, fmtint, dopr_outch
Called by: Q_vsnprintf
=================
*/
int dopr(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	char	local_58[8];
	int		local_60;
	int		local_64;
	char	local_68[8];
	char	local_70[8];
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	char	local_98[8];
	char	local_a0[8];
	int		local_a8;
	int		local_ac;
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;
	int		local_c4;
	int		local_c8;
	int		local_cc;
	int		local_d0;
	int		local_d4;
	int		local_d8;
	int		local_dc;
	int		local_e0;
	int		local_e4;
	int		local_e8;
	int		local_ec;
	int		local_f0;
	int		local_f4;
	int		local_f8;
	int		local_fc;
	int		local_100;
	int		local_104;
	int		local_108;
	int		local_10c;
	int		local_110;
	int		local_114;
	int		local_118;
	int		local_11c;
	int		local_120;
	int		local_124;
	int		local_128;
	int		local_12c;
	int		local_130;
	int		local_134;
	int		local_138;

	arg_2 = arg_2;
	*(int *)local_58 = 0x0;
	local_28 = *(int *)local_58;
	local_38 = *(int *)local_58;
	local_34 = *(int *)local_58;
	local_3c = *(int *)local_58;
	local_44 = *(int *)local_58;
	local_30 = 0xffffffff;
	local_54 = arg_2;
	arg_2 = (local_54 + 0x1);
	*(char *)&local_2c = *(char *)local_54;
	local_40 = *(int *)local_58;
	goto jmp_5068;
jmp_49b1:
	if ((char)*(char *)&local_2c != 0x0) goto jmp_49b9;
	local_28 = 0x8;
jmp_49b9:
	if (local_28 < 0x0) goto jmp_5068;
	if (local_28 > 0x8) goto jmp_5068;
	goto *(int *)((local_28 << 0x2) + 0xf10);
	if ((char)*(char *)&local_2c != 0x25) goto jmp_49d3;
	local_28 = 0x1;
	goto jmp_49ea;
jmp_49d3:
	local_60 = dopr_outch(arg_0, &local_44, arg_1, (char)*(char *)&local_2c);
	local_40 = (local_40 + local_60);
jmp_49ea:
	local_64 = arg_2;
	arg_2 = (local_64 + 0x1);
	*(char *)&local_2c = *(char *)local_64;
	goto jmp_5068;
	*(int *)local_68 = (char)*(char *)&local_2c;
	*(int *)local_70 = 0x20;
	if (*(int *)local_68 == *(int *)local_70) goto jmp_4a52;
	if (*(int *)local_68 == 0x23) goto jmp_4a69;
	if (*(int *)local_68 < *(int *)local_70) goto jmp_4a97;
	if (*(int *)local_68 == 0x2b) goto jmp_4a3b;
	if (*(int *)local_68 == 0x2d) goto jmp_4a1f;
	if (*(int *)local_68 == 0x30) goto jmp_4a80;
	goto jmp_4a97;
jmp_4a1f:
	local_7c = 0x1;
	local_3c = (local_3c | local_7c);
	local_78 = arg_2;
	arg_2 = (local_78 + local_7c);
	*(char *)&local_2c = *(char *)local_78;
	goto jmp_5068;
jmp_4a3b:
	local_3c = (local_3c | 0x2);
	local_80 = arg_2;
	arg_2 = (local_80 + 0x1);
	*(char *)&local_2c = *(char *)local_80;
	goto jmp_5068;
jmp_4a52:
	local_3c = (local_3c | 0x4);
	local_84 = arg_2;
	arg_2 = (local_84 + 0x1);
	*(char *)&local_2c = *(char *)local_84;
	goto jmp_5068;
jmp_4a69:
	local_3c = (local_3c | 0x8);
	local_88 = arg_2;
	arg_2 = (local_88 + 0x1);
	*(char *)&local_2c = *(char *)local_88;
	goto jmp_5068;
jmp_4a80:
	local_3c = (local_3c | 0x10);
	local_8c = arg_2;
	arg_2 = (local_8c + 0x1);
	*(char *)&local_2c = *(char *)local_8c;
	goto jmp_5068;
jmp_4a97:
	local_28 = 0x2;
	goto jmp_5068;
	local_78 = (char)*(char *)&local_2c;
	if (0x30 > local_78) goto jmp_4ac6;
	if (local_78 > 0x39) goto jmp_4ac6;
	local_38 = ((0xa * local_38) + ((char)*(char *)&local_2c - 0x30));
	local_7c = arg_2;
	arg_2 = (local_7c + 0x1);
	*(char *)&local_2c = *(char *)local_7c;
	goto jmp_5068;
jmp_4ac6:
	if ((char)*(char *)&local_2c != 0x2a) goto jmp_4af0;
	local_80 = (arg_3 + 0x4);
	arg_3 = local_80;
	local_38 = *(int *)(local_80 + 0xfffffffc);
	local_7c = arg_2;
	arg_2 = (local_7c + 0x1);
	*(char *)&local_2c = *(char *)local_7c;
	local_28 = 0x3;
	goto jmp_5068;
jmp_4af0:
	local_28 = 0x3;
	goto jmp_5068;
	if ((char)*(char *)&local_2c != 0x2e) goto jmp_4b0e;
	local_28 = 0x4;
	local_7c = arg_2;
	arg_2 = (local_7c + 0x1);
	*(char *)&local_2c = *(char *)local_7c;
	goto jmp_5068;
jmp_4b0e:
	local_28 = 0x5;
	goto jmp_5068;
	local_7c = (char)*(char *)&local_2c;
	if (0x30 > local_7c) goto jmp_4b44;
	if (local_7c > 0x39) goto jmp_4b44;
	if (local_30 >= 0x0) goto jmp_4b27;
	local_30 = 0x0;
jmp_4b27:
	local_30 = ((0xa * local_30) + ((char)*(char *)&local_2c - 0x30));
	local_80 = arg_2;
	arg_2 = (local_80 + 0x1);
	*(char *)&local_2c = *(char *)local_80;
	goto jmp_5068;
jmp_4b44:
	if ((char)*(char *)&local_2c != 0x2a) goto jmp_4b6e;
	local_84 = (arg_3 + 0x4);
	arg_3 = local_84;
	local_30 = *(int *)(local_84 + 0xfffffffc);
	local_80 = arg_2;
	arg_2 = (local_80 + 0x1);
	*(char *)&local_2c = *(char *)local_80;
	local_28 = 0x5;
	goto jmp_5068;
jmp_4b6e:
	local_28 = 0x5;
	goto jmp_5068;
	local_80 = (char)*(char *)&local_2c;
	local_88 = 0x68;
	if (local_80 == local_88) goto jmp_4b91;
	if (local_80 > local_88) goto jmp_4b8b;
	if (local_80 == 0x4c) goto jmp_4bbe;
	goto jmp_4bd0;
jmp_4b8b:
	if (local_80 == 0x6c) goto jmp_4baa;
	goto jmp_4bd0;
jmp_4b91:
	local_90 = 0x1;
	local_34 = local_90;
	local_8c = arg_2;
	arg_2 = (local_8c + local_90);
	*(char *)&local_2c = *(char *)local_8c;
	goto jmp_4bd0;
jmp_4baa:
	local_34 = 0x2;
	local_94 = arg_2;
	arg_2 = (local_94 + 0x1);
	*(char *)&local_2c = *(char *)local_94;
	goto jmp_4bd0;
jmp_4bbe:
	local_34 = 0x4;
	*(int *)local_98 = arg_2;
	arg_2 = (*(int *)local_98 + 0x1);
	*(char *)&local_2c = *(char *)*(int *)local_98;
jmp_4bd0:
	if (local_34 == 0x2) goto jmp_4bd9;
	local_28 = 0x7;
	goto jmp_5068;
jmp_4bd9:
	local_28 = 0x6;
	goto jmp_5068;
	local_8c = (char)*(char *)&local_2c;
	if (local_8c == 0x6c) goto jmp_4be9;
	goto jmp_4bfb;
jmp_4be9:
	local_34 = 0x3;
	local_90 = arg_2;
	arg_2 = (local_90 + 0x1);
	*(char *)&local_2c = *(char *)local_90;
jmp_4bfb:
	local_28 = 0x7;
	goto jmp_5068;
	local_90 = (char)*(char *)&local_2c;
	if (local_90 == 0x45) goto jmp_4e85;
	*(int *)local_98 = 0x47;
	if (local_90 == *(int *)local_98) goto jmp_4ed4;
	if (local_90 > *(int *)local_98) goto jmp_4c1c;
	if (local_90 == 0x25) goto jmp_501b;
	goto jmp_5043;
jmp_4c1c:
	*(int *)local_a0 = 0x58;
	if (local_90 == *(int *)local_a0) goto jmp_4db5;
	if (local_90 < *(int *)local_a0) goto jmp_5043;
	if (local_90 < 0x63) goto jmp_5043;
	if (local_90 > 0x78) goto jmp_5043;
	goto *(int *)((local_90 << 0x2) + 0xda8);
	if (local_34 != 0x1) goto jmp_4c51;
	local_a8 = (arg_3 + 0x4);
	arg_3 = local_a8;
	local_48 = (short)*(int *)(local_a8 + 0xfffffffc);
	goto jmp_4c90;
jmp_4c51:
	if (local_34 != 0x2) goto jmp_4c68;
	local_ac = (arg_3 + 0x4);
	arg_3 = local_ac;
	local_48 = *(int *)(local_ac + 0xfffffffc);
	goto jmp_4c90;
jmp_4c68:
	if (local_34 != 0x3) goto jmp_4c7f;
	local_b0 = (arg_3 + 0x4);
	arg_3 = local_b0;
	local_48 = *(int *)(local_b0 + 0xfffffffc);
	goto jmp_4c90;
jmp_4c7f:
	local_b4 = (arg_3 + 0x4);
	arg_3 = local_b4;
	local_48 = *(int *)(local_b4 + 0xfffffffc);
jmp_4c90:
	local_b8 = fmtint(arg_0, &local_44, arg_1, local_48, 0xa, local_38, local_30, local_3c);
	local_40 = (local_40 + local_b8);
	goto jmp_5043;
	local_3c = (local_3c | 0x40);
	if (local_34 != 0x1) goto jmp_4cd2;
	local_bc = (arg_3 + 0x4);
	arg_3 = local_bc;
	local_48 = (*(int *)(local_bc + 0xfffffffc) & 0xffff);
	goto jmp_4d11;
jmp_4cd2:
	if (local_34 != 0x2) goto jmp_4ce9;
	local_c0 = (arg_3 + 0x4);
	arg_3 = local_c0;
	local_48 = *(int *)(local_c0 + 0xfffffffc);
	goto jmp_4d11;
jmp_4ce9:
	if (local_34 != 0x3) goto jmp_4d00;
	local_c4 = (arg_3 + 0x4);
	arg_3 = local_c4;
	local_48 = *(int *)(local_c4 + 0xfffffffc);
	goto jmp_4d11;
jmp_4d00:
	local_c8 = (arg_3 + 0x4);
	arg_3 = local_c8;
	local_48 = *(int *)(local_c8 + 0xfffffffc);
jmp_4d11:
	local_cc = fmtint(arg_0, &local_44, arg_1, local_48, 0x8, local_38, local_30, local_3c);
	local_40 = (local_40 + local_cc);
	goto jmp_5043;
	local_3c = (local_3c | 0x40);
	if (local_34 != 0x1) goto jmp_4d53;
	local_d0 = (arg_3 + 0x4);
	arg_3 = local_d0;
	local_48 = (*(int *)(local_d0 + 0xfffffffc) & 0xffff);
	goto jmp_4d92;
jmp_4d53:
	if (local_34 != 0x2) goto jmp_4d6a;
	local_d4 = (arg_3 + 0x4);
	arg_3 = local_d4;
	local_48 = *(int *)(local_d4 + 0xfffffffc);
	goto jmp_4d92;
jmp_4d6a:
	if (local_34 != 0x3) goto jmp_4d81;
	local_d8 = (arg_3 + 0x4);
	arg_3 = local_d8;
	local_48 = *(int *)(local_d8 + 0xfffffffc);
	goto jmp_4d92;
jmp_4d81:
	local_dc = (arg_3 + 0x4);
	arg_3 = local_dc;
	local_48 = *(int *)(local_dc + 0xfffffffc);
jmp_4d92:
	local_e0 = fmtint(arg_0, &local_44, arg_1, local_48, 0xa, local_38, local_30, local_3c);
	local_40 = (local_40 + local_e0);
	goto jmp_5043;
jmp_4db5:
	local_3c = (local_3c | 0x20);
	local_3c = (local_3c | 0x40);
	if (local_34 != 0x1) goto jmp_4dda;
	local_e4 = (arg_3 + 0x4);
	arg_3 = local_e4;
	local_48 = (*(int *)(local_e4 + 0xfffffffc) & 0xffff);
	goto jmp_4e19;
jmp_4dda:
	if (local_34 != 0x2) goto jmp_4df1;
	local_e8 = (arg_3 + 0x4);
	arg_3 = local_e8;
	local_48 = *(int *)(local_e8 + 0xfffffffc);
	goto jmp_4e19;
jmp_4df1:
	if (local_34 != 0x3) goto jmp_4e08;
	local_ec = (arg_3 + 0x4);
	arg_3 = local_ec;
	local_48 = *(int *)(local_ec + 0xfffffffc);
	goto jmp_4e19;
jmp_4e08:
	local_f0 = (arg_3 + 0x4);
	arg_3 = local_f0;
	local_48 = *(int *)(local_f0 + 0xfffffffc);
jmp_4e19:
	local_f4 = fmtint(arg_0, &local_44, arg_1, local_48, 0x10, local_38, local_30, local_3c);
	local_40 = (local_40 + local_f4);
	goto jmp_5043;
	if (local_34 != 0x4) goto jmp_4e53;
	local_f8 = (arg_3 + 0x4);
	arg_3 = local_f8;
	local_4c = *(int *)(local_f8 + 0xfffffffc);
	goto jmp_4e64;
jmp_4e53:
	local_fc = (arg_3 + 0x4);
	arg_3 = local_fc;
	local_4c = *(int *)(local_fc + 0xfffffffc);
jmp_4e64:
	local_100 = fmtfp(arg_0, &local_44, arg_1, local_4c, local_38, local_30, local_3c);
	local_40 = (local_40 + local_100);
	goto jmp_5043;
jmp_4e85:
	local_3c = (local_3c | 0x20);
	if (local_34 != 0x4) goto jmp_4ea2;
	local_104 = (arg_3 + 0x4);
	arg_3 = local_104;
	local_4c = *(int *)(local_104 + 0xfffffffc);
	goto jmp_4eb3;
jmp_4ea2:
	local_108 = (arg_3 + 0x4);
	arg_3 = local_108;
	local_4c = *(int *)(local_108 + 0xfffffffc);
jmp_4eb3:
	local_10c = fmtfp(arg_0, &local_44, arg_1, local_4c, local_38, local_30, local_3c);
	local_40 = (local_40 + local_10c);
	goto jmp_5043;
jmp_4ed4:
	local_3c = (local_3c | 0x20);
	if (local_34 != 0x4) goto jmp_4ef1;
	local_110 = (arg_3 + 0x4);
	arg_3 = local_110;
	local_4c = *(int *)(local_110 + 0xfffffffc);
	goto jmp_4f02;
jmp_4ef1:
	local_114 = (arg_3 + 0x4);
	arg_3 = local_114;
	local_4c = *(int *)(local_114 + 0xfffffffc);
jmp_4f02:
	local_118 = fmtfp(arg_0, &local_44, arg_1, local_4c, local_38, local_30, local_3c);
	local_40 = (local_40 + local_118);
	goto jmp_5043;
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "&local_44"
#define next_call_arg_2 "arg_1"
	local_11c = (arg_3 + 0x4);
	arg_3 = local_11c;
#define next_call_arg_3 "(char)*(int *)(local_11c + 0xfffffffc)"
	local_120 = dopr_outch();
	local_40 = (local_40 + local_120);
	goto jmp_5043;
	local_124 = (arg_3 + 0x4);
	arg_3 = local_124;
	local_50 = *(int *)(local_124 + 0xfffffffc);
	local_128 = fmtstr(arg_0, &local_44, arg_1, local_50, local_3c, local_38, local_30);
	local_40 = (local_40 + local_128);
	goto jmp_5043;
	local_12c = (arg_3 + 0x4);
	arg_3 = local_12c;
	local_50 = *(int *)(local_12c + 0xfffffffc);
	local_130 = fmtint(arg_0, &local_44, arg_1, local_50, 0x10, local_38, local_30, local_3c);
	local_40 = (local_40 + local_130);
	goto jmp_5043;
	if (local_34 != 0x1) goto jmp_4fcb;
	local_138 = (arg_3 + 0x4);
	arg_3 = local_138;
	local_134 = *(int *)(local_138 + 0xfffffffc);
	*(short *)local_134 = local_44;
	goto jmp_5043;
jmp_4fcb:
	if (local_34 != 0x2) goto jmp_4fe7;
	local_138 = (arg_3 + 0x4);
	arg_3 = local_138;
	local_134 = *(int *)(local_138 + 0xfffffffc);
	*(int *)local_134 = local_44;
	goto jmp_5043;
jmp_4fe7:
	if (local_34 != 0x3) goto jmp_5003;
	local_138 = (arg_3 + 0x4);
	arg_3 = local_138;
	local_134 = *(int *)(local_138 + 0xfffffffc);
	*(int *)local_134 = local_44;
	goto jmp_5043;
jmp_5003:
	local_138 = (arg_3 + 0x4);
	arg_3 = local_138;
	local_134 = *(int *)(local_138 + 0xfffffffc);
	*(int *)local_134 = local_44;
	goto jmp_5043;
jmp_501b:
	local_134 = dopr_outch(arg_0, &local_44, arg_1, (char)*(char *)&local_2c);
	local_40 = (local_40 + local_134);
	goto jmp_5043;
	local_138 = arg_2;
	arg_2 = (local_138 + 0x1);
	*(char *)&local_2c = *(char *)local_138;
jmp_5043:
	local_a8 = arg_2;
	arg_2 = (local_a8 + 0x1);
	*(char *)&local_2c = *(char *)local_a8;
	local_ac = 0x0;
	local_28 = local_ac;
	local_38 = local_ac;
	local_34 = local_ac;
	local_3c = local_ac;
	local_30 = 0xffffffff;
jmp_5068:
	if (local_28 != 0x8) goto jmp_49b1;
	if (arg_1 == 0x0) goto jmp_5077;
	*(char *)(local_44 + arg_0) = 0x0;
jmp_5077:
	return local_40;
}

/*
=================
fmtstr

Address: 0x507c
Stack Size: 0x38
Calls: dopr_outch
Called by: dopr
=================
*/
int fmtstr(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) {
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[8];
	int		local_2c;
	int		local_30;
	int		local_34;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	arg_6 = arg_6;
	*(int *)local_24 = 0x0;
	local_1c = 0x0;
	if (arg_3 != 0x0) goto jmp_509e;
	arg_3 = 0x5106;
jmp_509e:
	local_20 = 0x0;
	goto jmp_50a9;
jmp_50a3:
	local_20 = (local_20 + 0x1);
jmp_50a9:
	if ((char)*(char *)(local_20 + arg_3) != 0x0) goto jmp_50a3;
	if (arg_6 < 0x0) goto jmp_50bf;
	if (arg_6 >= local_20) goto jmp_50bf;
	local_20 = arg_6;
jmp_50bf:
	local_18 = (arg_5 - local_20);
	if (local_18 >= 0x0) goto jmp_50cd;
	local_18 = 0x0;
jmp_50cd:
	if ((arg_4 & 0x1) == 0x0) goto jmp_50f6;
	local_18 = -local_18;
	goto jmp_50f6;
jmp_50da:
	local_2c = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_1c = (local_1c + local_2c);
	local_18 = (local_18 - 0x1);
jmp_50f6:
	if (local_18 > 0x0) goto jmp_50da;
	goto jmp_5125;
jmp_50fc:
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
	local_2c = arg_3;
	arg_3 = (local_2c + 0x1);
#define next_call_arg_3 "(char)*(char *)local_2c"
	local_30 = dopr_outch();
	local_1c = (local_1c + local_30);
	*(int *)local_24 = (*(int *)local_24 + 0x1);
jmp_5125:
	local_2c = 0x0;
	if ((char)*(char *)arg_3 == local_2c) goto jmp_5139;
	if (arg_6 < local_2c) goto jmp_50fc;
	if (*(int *)local_24 < arg_6) goto jmp_50fc;
jmp_5139:
	goto jmp_5157;
jmp_513b:
	local_34 = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_1c = (local_1c + local_34);
	local_18 = (local_18 + 0x1);
jmp_5157:
	if (local_18 < 0x0) goto jmp_513b;
	return local_1c;
}

/*
=================
fmtint

Address: 0x5160
Stack Size: 0x6c
Calls: dopr_outch
Called by: dopr
=================
*/
int fmtint(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[24];
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	char	local_50[12];
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_4 = arg_4;
	arg_6 = arg_6;
	arg_7 = arg_7;
	local_48 = 0x0;
	local_18 = 0x0;
	local_1c = 0x0;
	local_40 = 0x0;
	local_24 = 0x0;
	if (arg_6 >= 0x0) goto jmp_518f;
	arg_6 = 0x0;
jmp_518f:
	local_20 = arg_3;
	if ((arg_7 & 0x40) != 0x0) goto jmp_51bb;
	if (arg_3 >= 0x0) goto jmp_51a7;
	local_48 = 0x2d;
	local_20 = -arg_3;
	goto jmp_51bb;
jmp_51a7:
	if ((arg_7 & 0x2) == 0x0) goto jmp_51b2;
	local_48 = 0x2b;
	goto jmp_51bb;
jmp_51b2:
	if ((arg_7 & 0x4) == 0x0) goto jmp_51bb;
	local_48 = 0x20;
jmp_51bb:
	if ((arg_7 & 0x20) == 0x0) goto jmp_51c6;
	local_44 = 0x50f5;
	goto jmp_51c9;
jmp_51c6:
	local_44 = 0x50e4;
jmp_51c9:
	local_4c = local_18;
	local_18 = (local_4c + 0x1);
	*(char *)(local_4c + local_28) = *(char *)((local_20 %% arg_4) + local_44);
	local_20 = (local_20 / arg_4);
	if (local_20 == 0x0) goto jmp_51f0;
	if (local_18 < 0x18) goto jmp_51c9;
jmp_51f0:
	if (local_18 != 0x18) goto jmp_51fa;
	local_18 = (local_18 - 0x1);
jmp_51fa:
	*(char *)(local_18 + local_28) = 0x0;
	local_40 = (arg_6 - local_18);
	if (arg_6 <= local_18) goto jmp_5212;
	local_4c = arg_6;
	goto jmp_5216;
jmp_5212:
	local_4c = local_18;
jmp_5216:
	if (local_48 == 0x0) goto jmp_521f;
	*(int *)local_50 = 0x1;
	goto jmp_5222;
jmp_521f:
	*(int *)local_50 = 0x0;
jmp_5222:
	local_1c = ((arg_5 - local_4c) - *(int *)local_50);
	if (local_40 >= 0x0) goto jmp_5233;
	local_40 = 0x0;
jmp_5233:
	if (local_1c >= 0x0) goto jmp_523a;
	local_1c = 0x0;
jmp_523a:
	if ((arg_7 & 0x10) == 0x0) goto jmp_5256;
	if (local_40 <= local_1c) goto jmp_524b;
	local_5c = local_40;
	goto jmp_524f;
jmp_524b:
	local_5c = local_1c;
jmp_524f:
	local_40 = local_5c;
	local_1c = 0x0;
jmp_5256:
	if ((arg_7 & 0x1) == 0x0) goto jmp_527f;
	local_1c = -local_1c;
	goto jmp_527f;
jmp_5263:
	local_5c = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_24 = (local_24 + local_5c);
	local_1c = (local_1c - 0x1);
jmp_527f:
	if (local_1c > 0x0) goto jmp_5263;
	if (local_48 == 0x0) goto jmp_529f;
	local_5c = dopr_outch(arg_0, arg_1, arg_2, (char)local_48);
	local_24 = (local_24 + local_5c);
jmp_529f:
	if (local_40 <= 0x0) goto jmp_52ec;
	goto jmp_52c1;
jmp_52a5:
	local_60 = dopr_outch(arg_0, arg_1, arg_2, 0x30);
	local_24 = (local_24 + local_60);
	local_40 = (local_40 - 0x1);
jmp_52c1:
	if (local_40 > 0x0) goto jmp_52a5;
	goto jmp_52ec;
jmp_52c7:
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
	local_60 = (local_18 - 0x1);
	local_18 = local_60;
#define next_call_arg_3 "(char)*(char *)(local_60 + local_28)"
	local_64 = dopr_outch();
	local_24 = (local_24 + local_64);
jmp_52ec:
	if (local_18 > 0x0) goto jmp_52c7;
	goto jmp_530e;
jmp_52f2:
	local_68 = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_24 = (local_24 + local_68);
	local_1c = (local_1c + 0x1);
jmp_530e:
	if (local_1c < 0x0) goto jmp_52f2;
	return local_24;
}

/*
=================
abs_val

Address: 0x5317
Stack Size: 0xc
Called by: fmtfp
=================
*/
int abs_val(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	if (arg_0 >= 0x0) goto jmp_5325;
	local_8 = -arg_0;
jmp_5325:
	return local_8;
}

/*
=================
round

Address: 0x532a
Stack Size: 0x10
Called by: fmtfp
=================
*/
int round(int arg_0) {
	char	local_8[8];

	arg_0 = arg_0;
	*(int *)local_8 = (int)arg_0;
	arg_0 = (arg_0 - (float)*(int *)local_8);
	if (arg_0 < 0x3f000000) goto jmp_5346;
	*(int *)local_8 = (*(int *)local_8 + 0x1);
jmp_5346:
	return *(int *)local_8;
}

/*
=================
fmtfp

Address: 0x534b
Stack Size: 0xa0
Calls: dopr_outch, round, powN, abs_val
Called by: dopr
=================
*/
int fmtfp(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[20];
	int		local_44;
	char	local_48[20];
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_5 = arg_5;
	local_60 = 0x0;
	local_20 = 0x0;
	local_2c = 0x0;
	local_18 = 0x0;
	local_5c = 0x0;
	local_44 = 0x0;
	local_1c = 0x0;
	if (arg_5 >= 0x0) goto jmp_5378;
	arg_5 = 0x6;
jmp_5378:
	local_68 = abs_val(arg_3);
	local_64 = local_68;
	if (arg_3 >= 0x0) goto jmp_538c;
	local_60 = 0x2d;
	goto jmp_53a0;
jmp_538c:
	if ((arg_6 & 0x2) == 0x0) goto jmp_5397;
	local_60 = 0x2b;
	goto jmp_53a0;
jmp_5397:
	if ((arg_6 & 0x4) == 0x0) goto jmp_53a0;
	local_60 = 0x20;
jmp_53a0:
	local_24 = (int)local_64;
	if (arg_5 <= 0x9) goto jmp_53ac;
	arg_5 = 0x9;
jmp_53ac:
	local_6c = powN(0x41200000, arg_5);
	local_70 = round((local_6c * (local_64 - (float)local_24)));
	local_28 = local_70;
	local_74 = powN(0x41200000, arg_5);
	if ((float)local_28 < local_74) goto jmp_53ee;
	local_24 = (local_24 + 0x1);
	local_78 = powN(0x41200000, arg_5);
	local_28 = (int)((float)local_28 - local_78);
jmp_53ee:
	local_7c = local_20;
	local_20 = (local_7c + 0x1);
	if (local_44 == 0x0) goto jmp_5401;
	local_78 = 0x50f5;
	goto jmp_5404;
jmp_5401:
	local_78 = 0x50e4;
jmp_5404:
	*(char *)(local_7c + local_30) = *(char *)((local_24 %% 0xa) + local_78);
	local_24 = (local_24 / 0xa);
	if (local_24 == 0x0) goto jmp_541f;
	if (local_20 < 0x14) goto jmp_53ee;
jmp_541f:
	if (local_20 != 0x14) goto jmp_5429;
	local_20 = (local_20 - 0x1);
jmp_5429:
	*(char *)(local_20 + local_30) = 0x0;
jmp_542f:
	local_7c = local_2c;
	local_2c = (local_7c + 0x1);
	if (local_44 == 0x0) goto jmp_5442;
	local_78 = 0x50f5;
	goto jmp_5445;
jmp_5442:
	local_78 = 0x50e4;
jmp_5445:
	*(char *)(local_7c + local_48) = *(char *)((local_28 %% 0xa) + local_78);
	local_28 = (local_28 / 0xa);
	if (local_28 == 0x0) goto jmp_5460;
	if (local_2c < 0x14) goto jmp_542f;
jmp_5460:
	if (local_2c != 0x14) goto jmp_546a;
	local_2c = (local_2c - 0x1);
jmp_546a:
	*(char *)(local_2c + local_48) = 0x0;
	if (local_60 == 0x0) goto jmp_5479;
	local_78 = 0x1;
	goto jmp_547c;
jmp_5479:
	local_78 = 0x0;
jmp_547c:
	local_18 = ((((arg_4 - local_20) - arg_5) - 0x1) - local_78);
	local_5c = (arg_5 - local_2c);
	if (local_5c >= 0x0) goto jmp_5499;
	local_5c = 0x0;
jmp_5499:
	if (local_18 >= 0x0) goto jmp_54a0;
	local_18 = 0x0;
jmp_54a0:
	if ((arg_6 & 0x1) == 0x0) goto jmp_54ab;
	local_18 = -local_18;
jmp_54ab:
	local_7c = 0x0;
	if ((arg_6 & 0x10) == local_7c) goto jmp_551f;
	if (local_18 <= local_7c) goto jmp_551f;
	if (local_60 == 0x0) goto jmp_54fd;
	local_80 = dopr_outch(arg_0, arg_1, arg_2, (char)local_60);
	local_1c = (local_1c + local_80);
	local_18 = (local_18 - 0x1);
	local_60 = 0x0;
	goto jmp_54fd;
jmp_54e1:
	local_80 = dopr_outch(arg_0, arg_1, arg_2, 0x30);
	local_1c = (local_1c + local_80);
	local_18 = (local_18 - 0x1);
jmp_54fd:
	if (local_18 > 0x0) goto jmp_54e1;
	goto jmp_551f;
jmp_5503:
	local_80 = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_1c = (local_1c + local_80);
	local_18 = (local_18 - 0x1);
jmp_551f:
	if (local_18 > 0x0) goto jmp_5503;
	if (local_60 == 0x0) goto jmp_5566;
	local_80 = dopr_outch(arg_0, arg_1, arg_2, (char)local_60);
	local_1c = (local_1c + local_80);
	goto jmp_5566;
jmp_5541:
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
	local_84 = (local_20 - 0x1);
	local_20 = local_84;
#define next_call_arg_3 "(char)*(char *)(local_84 + local_30)"
	local_88 = dopr_outch();
	local_1c = (local_1c + local_88);
jmp_5566:
	if (local_20 > 0x0) goto jmp_5541;
	if (arg_5 <= 0x0) goto jmp_55f3;
	local_8c = dopr_outch(arg_0, arg_1, arg_2, 0x2e);
	local_1c = (local_1c + local_8c);
	goto jmp_559c;
jmp_5586:
	local_90 = dopr_outch(arg_0, arg_1, arg_2, 0x30);
	local_1c = (local_1c + local_90);
jmp_559c:
	local_94 = local_5c;
	local_5c = (local_94 - 0x1);
	if (local_94 > 0x0) goto jmp_5586;
	goto jmp_55d1;
jmp_55ac:
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
	local_98 = (local_2c - 0x1);
	local_2c = local_98;
#define next_call_arg_3 "(char)*(char *)(local_98 + local_48)"
	local_9c = dopr_outch();
	local_1c = (local_1c + local_9c);
jmp_55d1:
	if (local_2c > 0x0) goto jmp_55ac;
	goto jmp_55f3;
jmp_55d7:
	local_8c = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_1c = (local_1c + local_8c);
	local_18 = (local_18 + 0x1);
jmp_55f3:
	if (local_18 < 0x0) goto jmp_55d7;
	return local_1c;
}

/*
=================
dopr_outch

Address: 0x55fc
Stack Size: 0x10
Called by: fmtfp, fmtint, fmtstr, dopr
=================
*/
int dopr_outch(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_8;
	int		local_c;

	*(char *)&arg_3 = arg_3;
	if ((*(int *)arg_1 + 0x1) >= arg_2) goto jmp_5621;
	local_c = arg_1;
	local_8 = *(int *)local_c;
	*(int *)local_c = (local_8 + 0x1);
	*(char *)(local_8 + arg_0) = *(char *)&arg_3;
jmp_5621:
	return 0x1;
}

/*
=================
Q_vsnprintf

Address: 0x5625
Stack Size: 0x1c
Calls: dopr
Called by: va, Com_sprintf, COM_ParseWarning, COM_ParseError, Com_Printf, Com_Error, CG_Error, CG_Printf
=================
*/
int Q_vsnprintf(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_18;

	local_18 = dopr(arg_0, arg_1, arg_2, arg_3);
	return local_18;
}

/*
=================
sscanf

Address: 0x563b
Stack Size: 0x60
Calls: _atof, _atoi
=================
*/
int sscanf(int arg_0, int arg_1, int arg_2) {
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[8];
	int		local_20;
	char	local_24[8];
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;

	local_14 = &arg_2;
	*(int *)local_18 = 0x0;
	goto jmp_576c;
jmp_5644:
	if ((char)*(char *)arg_1 == 0x25) goto jmp_5652;
	arg_1 = (arg_1 + 0x1);
	goto jmp_576c;
jmp_5652:
	arg_1 = (arg_1 + 0x1);
	local_c = (char)*(char *)arg_1;
	if (local_c < 0x30) goto jmp_567a;
	if (local_c > 0x39) goto jmp_567a;
	local_20 = _atoi(&arg_1);
	local_10 = local_20;
	local_c = (char)*(char *)(arg_1 + 0xffffffff);
	goto jmp_5683;
jmp_567a:
	local_10 = 0x3ff;
	arg_1 = (arg_1 + 0x1);
jmp_5683:
	*(int *)local_24 = 0x64;
	if (local_c == *(int *)local_24) goto jmp_56a2;
	if (local_c == 0x66) goto jmp_56bc;
	if (local_c == 0x69) goto jmp_56a2;
	if (local_c < *(int *)local_24) goto jmp_576c;
	if (local_c == 0x73) goto jmp_56d6;
	if (local_c == 0x75) goto jmp_56a2;
	goto jmp_576c;
jmp_56a2:
	local_2c = (local_14 + 0x4);
	local_14 = local_2c;
	local_30 = _atoi(&arg_0);
	*(int *)*(int *)(local_2c + 0xfffffffc) = local_30;
	goto jmp_576c;
jmp_56bc:
	local_34 = (local_14 + 0x4);
	local_14 = local_34;
	local_38 = _atof(&arg_0);
	*(int *)*(int *)(local_34 + 0xfffffffc) = local_38;
	goto jmp_576c;
jmp_56d6:
	local_40 = (local_14 + 0x4);
	local_14 = local_40;
	local_3c = *(int *)(local_40 + 0xfffffffc);
	goto jmp_56ef;
jmp_56e9:
	arg_0 = (arg_0 + 0x1);
jmp_56ef:
	local_44 = (char)*(char *)arg_0;
	if (local_44 == 0x20) goto jmp_56e9;
	if (local_44 == 0xc) goto jmp_56e9;
	if (local_44 == 0xa) goto jmp_56e9;
	if (local_44 == 0xd) goto jmp_56e9;
	if (local_44 == 0x9) goto jmp_56e9;
	if (local_44 == 0xb) goto jmp_56e9;
	goto jmp_572e;
jmp_570f:
	local_48 = local_3c;
	local_50 = 0x1;
	local_3c = (local_48 + local_50);
	local_4c = arg_0;
	arg_0 = (local_4c + local_50);
	*(char *)local_48 = *(char *)local_4c;
jmp_572e:
	local_58 = (char)*(char *)arg_0;
	if (local_58 == 0x0) goto jmp_575e;
	if (local_58 == 0x20) goto jmp_575e;
	if (local_58 == 0xc) goto jmp_575e;
	if (local_58 == 0xa) goto jmp_575e;
	if (local_58 == 0xd) goto jmp_575e;
	if (local_58 == 0x9) goto jmp_575e;
	if (local_58 == 0xb) goto jmp_575e;
	local_54 = local_10;
	local_10 = (local_54 - 0x1);
	if (local_54 != 0x0) goto jmp_570f;
jmp_575e:
	local_5c = local_3c;
	local_3c = (local_5c + 0x1);
	*(char *)local_5c = 0x0;
jmp_576c:
	if ((char)*(char *)arg_1 != 0x0) goto jmp_5644;
	local_14 = 0x0;
	return *(int *)local_18;
}

/*
=================
CG_TargetCommand_f

Address: 0x577a
Stack Size: 0x28
Calls: trap_SendClientCommand, trap_Argv, va, atoi, CG_CrosshairPlayer
=================
*/
void CG_TargetCommand_f(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	local_1c = CG_CrosshairPlayer();
	local_14 = local_1c;
	if (local_14 != 0xffffffff) goto jmp_5789;
	goto jmp_57aa;
jmp_5789:
	trap_Argv(0x1, &local_18, 0x4);
	local_20 = atoi(&local_18);
	local_24 = va(0x5318, local_14, local_20);
	trap_SendClientCommand(local_24);
jmp_57aa:
}

/*
=================
CG_SizeUp_f

Address: 0x57ac
Stack Size: 0x14
Calls: trap_Cvar_Set, va
=================
*/
void CG_SizeUp_f(void) {
	int		local_10;

	local_10 = va(0x5309, (bss_a418 + 0xa));
	trap_Cvar_Set(0x530c, local_10);
}

/*
=================
CG_SizeDown_f

Address: 0x57c2
Stack Size: 0x14
Calls: trap_Cvar_Set, va
=================
*/
void CG_SizeDown_f(void) {
	int		local_10;

	local_10 = va(0x5309, (bss_a418 - 0xa));
	trap_Cvar_Set(0x530c, local_10);
}

/*
=================
CG_Viewpos_f

Address: 0x57d8
Stack Size: 0x1c
Calls: CG_Printf
=================
*/
void CG_Viewpos_f(void) {

	CG_Printf(0x52f8, (int)bss_dcd0c, (int)bss_dcd10, (int)bss_dcd14, (int)bss_dce68);
}

/*
=================
CG_ScoresDown_f

Address: 0x57f0
Stack Size: 0xc
Calls: trap_SendClientCommand
=================
*/
void CG_ScoresDown_f(void) {

	if ((bss_dd27c + 0x7d0) >= bss_dc760) goto jmp_580d;
	bss_dd27c = bss_dc760;
	trap_SendClientCommand(0x52f2);
	if (bss_de190 != 0x0) goto jmp_5810;
	bss_de190 = 0x1;
	bss_dd280 = 0x0;
	goto jmp_5810;
jmp_580d:
	bss_de190 = 0x1;
jmp_5810:
}

/*
=================
CG_ScoresUp_f

Address: 0x5812
Stack Size: 0x8
=================
*/
void CG_ScoresUp_f(void) {

	if (bss_de190 == 0x0) goto jmp_581e;
	bss_de190 = 0x0;
	bss_de198 = bss_dc760;
jmp_581e:
}

/*
=================
CG_TellTarget_f

Address: 0x5820
Stack Size: 0x124
Calls: trap_SendClientCommand, trap_Args, Com_sprintf, CG_CrosshairPlayer
=================
*/
void CG_TellTarget_f(void) {
	int		local_1c;
	char	local_20[128];
	char	local_a0[128];
	int		local_120;

	local_120 = CG_CrosshairPlayer();
	local_1c = local_120;
	if (local_1c != 0xffffffff) goto jmp_582f;
	goto jmp_5849;
jmp_582f:
	trap_Args(local_a0, 0x80);
	Com_sprintf(local_20, 0x80, 0x52e7, local_1c, local_a0);
	trap_SendClientCommand(local_20);
jmp_5849:
}

/*
=================
CG_TellAttacker_f

Address: 0x584b
Stack Size: 0x124
Calls: trap_SendClientCommand, trap_Args, Com_sprintf, CG_LastAttacker
=================
*/
void CG_TellAttacker_f(void) {
	int		local_1c;
	char	local_20[128];
	char	local_a0[128];
	int		local_120;

	local_120 = CG_LastAttacker();
	local_1c = local_120;
	if (local_1c != 0xffffffff) goto jmp_585a;
	goto jmp_5874;
jmp_585a:
	trap_Args(local_a0, 0x80);
	Com_sprintf(local_20, 0x80, 0x52e7, local_1c, local_a0);
	trap_SendClientCommand(local_20);
jmp_5874:
}

/*
=================
CG_StartOrbit_f

Address: 0x5876
Stack Size: 0x418
Calls: trap_Cvar_Set, trap_Cvar_VariableStringBuffer, atoi
=================
*/
void CG_StartOrbit_f(void) {
	char	local_14[1024];
	int		local_414;

	trap_Cvar_VariableStringBuffer(0x52dd, local_14, 0x400);
	local_414 = atoi(local_14);
	if (local_414 != 0x0) goto jmp_588c;
	goto jmp_58bc;
jmp_588c:
	if (bss_8434 == 0x0) goto jmp_58a0;
	trap_Cvar_Set(0x52ce, 0x52cc);
	trap_Cvar_Set(0x52bd, 0x52cc);
	goto jmp_58bc;
jmp_58a0:
	trap_Cvar_Set(0x52ce, 0x52bb);
	trap_Cvar_Set(0x52bd, 0x52b9);
	trap_Cvar_Set(0x52a5, 0x52cc);
	trap_Cvar_Set(0x5291, 0x528d);
jmp_58bc:
}

/*
=================
CG_ConsoleCommand

Address: 0x58be
Stack Size: 0x20
Calls: Q_stricmp, CG_Argv
Called by: vmMain
=================
*/
int CG_ConsoleCommand(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	local_18 = CG_Argv(0x0);
	local_14 = local_18;
	local_10 = 0x0;
	goto jmp_58f4;
jmp_58ce:
	local_1c = Q_stricmp(local_14, *(int *)((local_10 << 0x3) + 0xf8c));
	if (local_1c != 0x0) goto jmp_58ee;
	(*(*(int *)((local_10 << 0x3) + 0xf90)))();
	return 0x1;
jmp_58ee:
	local_10 = (local_10 + 0x1);
jmp_58f4:
	if (local_10 < 0x15) goto jmp_58ce;
	return 0x0;
}

/*
=================
CG_InitConsoleCommands

Address: 0x58fc
Stack Size: 0x10
Calls: trap_AddCommand
Called by: CG_Init
=================
*/
void CG_InitConsoleCommands(void) {
	int		local_c;

	local_c = 0x0;
	goto jmp_5913;
jmp_5902:
	trap_AddCommand(*(int *)((local_c << 0x3) + 0xf8c));
	local_c = (local_c + 0x1);
jmp_5913:
	if (local_c < 0x15) goto jmp_5902;
	trap_AddCommand(0x51cc);
	trap_AddCommand(0x51c8);
	trap_AddCommand(0x51bf);
	trap_AddCommand(0x51ba);
	trap_AddCommand(0x51b5);
	trap_AddCommand(0x51b1);
	trap_AddCommand(0x51a8);
	trap_AddCommand(0x51a1);
	trap_AddCommand(0x519b);
	trap_AddCommand(0x5196);
	trap_AddCommand(0x518f);
	trap_AddCommand(0x5184);
	trap_AddCommand(0x5179);
	trap_AddCommand(0x516f);
	trap_AddCommand(0x5168);
	trap_AddCommand(0x515d);
	trap_AddCommand(0x5154);
	trap_AddCommand(0x514f);
	trap_AddCommand(0x5142);
	trap_AddCommand(0x5139);
	trap_AddCommand(0x5133);
	trap_AddCommand(0x512a);
	trap_AddCommand(0x511e);
}

/*
=================
CG_DrawField

Address: 0x598c
Stack Size: 0x5c
Calls: CG_DrawPic, strlen, Com_sprintf
Called by: CG_DrawPowerups, CG_DrawStatusBar
=================
*/
void CG_DrawField(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[20];
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	if (arg_2 >= 0x1) goto jmp_59a3;
	goto jmp_5aca;
jmp_59a3:
	if (arg_2 <= 0x5) goto jmp_59aa;
	arg_2 = 0x5;
jmp_59aa:
	if (arg_2 < 0x1) goto jmp_5a48;
	if (arg_2 > 0x4) goto jmp_5a48;
	goto *(int *)((arg_2 << 0x2) + 0x1034);
	if (arg_3 <= 0x9) goto jmp_59c3;
	local_3c = 0x9;
	goto jmp_59c7;
jmp_59c3:
	local_3c = arg_3;
jmp_59c7:
	arg_3 = local_3c;
	if (arg_3 >= 0x0) goto jmp_59d4;
	local_40 = 0x0;
	goto jmp_59d8;
jmp_59d4:
	local_40 = arg_3;
jmp_59d8:
	arg_3 = local_40;
	goto jmp_5a48;
	if (arg_3 <= 0x63) goto jmp_59e7;
	local_44 = 0x63;
	goto jmp_59eb;
jmp_59e7:
	local_44 = arg_3;
jmp_59eb:
	arg_3 = local_44;
	if (arg_3 >= 0xfffffff7) goto jmp_59f8;
	local_48 = 0xfffffff7;
	goto jmp_59fc;
jmp_59f8:
	local_48 = arg_3;
jmp_59fc:
	arg_3 = local_48;
	goto jmp_5a48;
	if (arg_3 <= 0x3e7) goto jmp_5a0b;
	local_4c = 0x3e7;
	goto jmp_5a0f;
jmp_5a0b:
	local_4c = arg_3;
jmp_5a0f:
	arg_3 = local_4c;
	if (arg_3 >= 0xffffff9d) goto jmp_5a1c;
	local_50 = 0xffffff9d;
	goto jmp_5a20;
jmp_5a1c:
	local_50 = arg_3;
jmp_5a20:
	arg_3 = local_50;
	goto jmp_5a48;
	if (arg_3 <= 0x270f) goto jmp_5a2f;
	local_54 = 0x270f;
	goto jmp_5a33;
jmp_5a2f:
	local_54 = arg_3;
jmp_5a33:
	arg_3 = local_54;
	if (arg_3 >= 0xfffffc19) goto jmp_5a40;
	local_58 = 0xfffffc19;
	goto jmp_5a44;
jmp_5a40:
	local_58 = arg_3;
jmp_5a44:
	arg_3 = local_58;
jmp_5a48:
	Com_sprintf(local_28, 0x10, 0x54a0, arg_3);
	local_3c = strlen(local_28);
	local_20 = local_3c;
	if (local_20 <= arg_2) goto jmp_5a67;
	local_20 = arg_2;
jmp_5a67:
	arg_0 = (arg_0 + (((arg_2 - local_20) << 0x5) + 0x2));
	local_1c = local_28;
	goto jmp_5abb;
jmp_5a7a:
	if ((char)*(char *)local_1c != 0x2d) goto jmp_5a85;
	local_24 = 0xa;
	goto jmp_5a8d;
jmp_5a85:
	local_24 = ((char)*(char *)local_1c - 0x30);
jmp_5a8d:
	CG_DrawPic((float)arg_0, (float)arg_1, 0x42000000, 0x42400000, *(int *)((local_24 << 0x2) + 0x104248));
	arg_0 = (arg_0 + 0x20);
	local_40 = 0x1;
	local_1c = (local_1c + local_40);
	local_20 = (local_20 - local_40);
jmp_5abb:
	local_40 = 0x0;
	if ((char)*(char *)local_1c == local_40) goto jmp_5aca;
	if (local_20 != local_40) goto jmp_5a7a;
jmp_5aca:
}

/*
=================
CG_Draw3DModel

Address: 0x5acc
Stack Size: 0x218
Calls: trap_R_RenderScene, trap_R_AddRefEntityToScene, trap_R_ClearScene, memset, AxisClear, AnglesToAxis, CG_AdjustFrom640
Called by: CG_DrawStatusBar, CG_DrawFlagModel, CG_DrawHead
=================
*/
void CG_Draw3DModel(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[16];
	char	local_3c[36];
	int		local_60;
	char	local_64[292];
	int		local_188;
	int		local_18c;
	char	local_190[20];
	char	local_1a4[40];
	char	local_1cc[40];
	char	local_1f4[32];
	int		local_214;

	local_214 = 0x0;
	if (bss_c508 == local_214) goto jmp_5ada;
	if (bss_c3f8 != local_214) goto jmp_5adc;
jmp_5ada:
	goto jmp_5b43;
jmp_5adc:
	CG_AdjustFrom640(&arg_0, &arg_1, &arg_2, &arg_3);
	memset(&local_18, 0x0, 0x170);
	memset(&local_188, 0x0, 0x8c);
	AnglesToAxis(arg_7, local_1a4);
	block_copy(arg_6, local_1cc, 0xc);
	*(int *)local_190 = arg_4;
	*(int *)local_1f4 = arg_5;
	local_18c = 0x40;
	*(int *)local_64 = 0x1;
	AxisClear(local_3c);
	local_28 = 0x41f00000;
	*(int *)local_2c = 0x41f00000;
	local_18 = (int)arg_0;
	local_1c = (int)arg_1;
	local_20 = (int)arg_2;
	local_24 = (int)arg_3;
	local_60 = bss_dc760;
	trap_R_ClearScene();
	trap_R_AddRefEntityToScene(&local_188);
	trap_R_RenderScene(&local_18);
jmp_5b43:
}

/*
=================
CG_DrawHead

Address: 0x5b45
Stack Size: 0x60
Calls: trap_R_ModelBounds, CG_DrawPic, CG_Draw3DModel
Called by: CG_DrawClientScore, CG_DrawAttacker, CG_DrawStatusBarHead
=================
*/
void CG_DrawHead(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	char	local_54[12];

	local_28 = ((0x6b4 * arg_4) + 0xe8c24);
	if (bss_c508 == 0x0) goto jmp_5bca;
	local_50 = *(int *)(local_28 + 0x21c);
	if (local_50 != 0x0) goto jmp_5b5f;
	goto jmp_5bfc;
jmp_5b5f:
	trap_R_ModelBounds(local_50, &local_38, &local_44);
	local_34 = (0xbf000000 * (local_40 + local_4c));
	local_30 = (0x3f000000 * (local_3c + local_48));
	*(int *)local_54 = (0x3f333333 * (local_4c - local_40));
	local_2c = (*(int *)local_54 / 0x3e89374c);
	local_2c = (local_2c + *(int *)(local_28 + 0x1f8));
	local_30 = (local_30 + *(int *)(local_28 + 0x1fc));
	local_34 = (local_34 + *(int *)(local_28 + 0x200));
	CG_Draw3DModel(arg_0, arg_1, arg_2, arg_3, *(int *)(local_28 + 0x21c), *(int *)(local_28 + 0x220), &local_2c, arg_5);
	goto jmp_5be3;
jmp_5bca:
	if (bss_c3f8 == 0x0) goto jmp_5be3;
	CG_DrawPic(arg_0, arg_1, arg_2, arg_3, *(int *)(local_28 + 0x224));
jmp_5be3:
	if (*(int *)(local_28 + 0x1e8) == 0x0) goto jmp_5bfc;
	CG_DrawPic(arg_0, arg_1, arg_2, arg_3, bss_1041a0);
jmp_5bfc:
}

/*
=================
CG_DrawFlagModel

Address: 0x5bfe
Stack Size: 0x70
Calls: sin, trap_R_ModelBounds, CG_DrawPic, BG_FindItemForPowerup, CG_Draw3DModel
Called by: CG_DrawClientScore, CG_DrawStatusBarFlag
=================
*/
void CG_DrawFlagModel(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;

	local_64 = 0x0;
	if (arg_5 != local_64) goto jmp_5c90;
	if (bss_c508 == local_64) goto jmp_5c90;
	local_68 = 0x0;
	local_30 = local_68;
	local_2c = local_68;
	local_28 = local_68;
	local_58 = bss_104140;
	trap_R_ModelBounds(local_58, &local_40, &local_4c);
	local_3c = (0xbf000000 * (local_48 + local_54));
	local_38 = (0x3f000000 * (local_44 + local_50));
	local_5c = (0x3f000000 * (local_54 - local_48));
	local_34 = (local_5c / 0x3e89374c);
	local_6c = sin(((float)bss_dc760 / 0x44fa0000));
	local_2c = (0x42700000 * local_6c);
	if (arg_4 != 0x1) goto jmp_5c64;
	local_60 = bss_104140;
	goto jmp_5c76;
jmp_5c64:
	if (arg_4 != 0x2) goto jmp_5c6e;
	local_60 = bss_104144;
	goto jmp_5c76;
jmp_5c6e:
	if (arg_4 != 0x0) goto jmp_5ce1;
	local_60 = bss_104148;
jmp_5c76:
	CG_Draw3DModel(arg_0, arg_1, arg_2, arg_3, local_60, 0x0, &local_34, &local_28);
	goto jmp_5ce1;
jmp_5c90:
	if (bss_c3f8 == 0x0) goto jmp_5ce1;
	if (arg_4 != 0x1) goto jmp_5ca4;
	local_6c = BG_FindItemForPowerup(0x7);
	local_68 = local_6c;
	goto jmp_5cc2;
jmp_5ca4:
	if (arg_4 != 0x2) goto jmp_5cb4;
	local_6c = BG_FindItemForPowerup(0x8);
	local_68 = local_6c;
	goto jmp_5cc2;
jmp_5cb4:
	if (arg_4 != 0x0) goto jmp_5ce1;
	local_6c = BG_FindItemForPowerup(0x9);
	local_68 = local_6c;
jmp_5cc2:
	if (local_68 == 0x0) goto jmp_5ce1;
	CG_DrawPic(arg_0, arg_1, arg_2, arg_3, *(int *)((0x18 * ((local_68 - 0x58c) / 0x34)) + 0xd2e0));
jmp_5ce1:
}

/*
=================
CG_DrawStatusBarHead

Address: 0x5ce3
Stack Size: 0x5c
Calls: cos, CG_DrawHead, rand
Called by: CG_DrawStatusBar
=================
*/
void CG_DrawStatusBarHead(int arg_0) {
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;

	local_38 = 0x0;
	local_2c = local_38;
	local_28 = local_38;
	local_24 = local_38;
	if (bss_deb00 == 0x0) goto jmp_5d97;
	if (((float)bss_dc760 - bss_deb00) >= 0x43fa0000) goto jmp_5d97;
	local_20 = (((float)bss_dc760 - bss_deb00) / 0x43fa0000);
	local_3c = 0x42700000;
	local_40 = 0x3f000000;
	local_30 = (local_3c * (0x3fc00000 - (local_40 * local_20)));
	local_34 = (local_30 - local_3c);
	local_44 = local_34;
	arg_0 = (arg_0 - ((local_40 * local_44) + (local_40 * (bss_deb04 * local_44))));
	bss_deb24 = ((0x42340000 * bss_deb04) + 0x43340000);
	local_48 = rand();
	local_4c = cos((0x40490fdb * (0x40000000 * (((float)(local_48 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	bss_deb18 = ((0x41a00000 * local_4c) + 0x43340000);
	local_50 = rand();
	local_54 = cos((0x40490fdb * (0x40000000 * (((float)(local_50 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	bss_deb14 = (0x40a00000 * local_54);
	bss_deb28 = bss_dc760;
	local_58 = rand();
	bss_deb1c = (int)((float)(bss_dc760 + 0x64) + (0x44fa0000 * ((float)(local_58 & 0x7fff) / 0x46fffe00)));
	goto jmp_5dfb;
jmp_5d97:
	if (bss_dc760 < bss_deb1c) goto jmp_5df8;
	bss_deb24 = bss_deb18;
	bss_deb20 = bss_deb14;
	bss_deb28 = bss_deb1c;
	local_3c = rand();
	bss_deb1c = (int)((float)(bss_dc760 + 0x64) + (0x44fa0000 * ((float)(local_3c & 0x7fff) / 0x46fffe00)));
	local_40 = rand();
	local_44 = cos((0x40490fdb * (0x40000000 * (((float)(local_40 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	bss_deb18 = ((0x41a00000 * local_44) + 0x43340000);
	local_48 = rand();
	local_4c = cos((0x40490fdb * (0x40000000 * (((float)(local_48 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	bss_deb14 = (0x40a00000 * local_4c);
jmp_5df8:
	local_30 = 0x42700000;
jmp_5dfb:
	if (bss_deb28 <= bss_dc760) goto jmp_5e04;
	bss_deb28 = bss_dc760;
jmp_5e04:
	local_20 = ((float)(bss_dc760 - bss_deb28) / (float)(bss_deb1c - bss_deb28));
	local_20 = ((local_20 * local_20) * (0x40400000 - (0x40000000 * local_20)));
	local_28 = (bss_deb24 + ((bss_deb18 - bss_deb24) * local_20));
	local_24 = (bss_deb20 + ((bss_deb14 - bss_deb20) * local_20));
	CG_DrawHead(arg_0, (0x43f00000 - local_30), local_30, local_30, *(int *)(bss_c2330 + 0xb8), &local_24);
}

/*
=================
CG_DrawStatusBarFlag

Address: 0x5e56
Stack Size: 0x24
Calls: CG_DrawFlagModel
Called by: CG_DrawStatusBar
=================
*/
void CG_DrawStatusBarFlag(int arg_0, int arg_1) {
	int		local_20;

#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "0x43d80000"
	local_20 = 0x42400000;
#define next_call_arg_2 "local_20"
#define next_call_arg_3 "local_20"
#define next_call_arg_4 "arg_1"
#define next_call_arg_5 "0x0"
	CG_DrawFlagModel();
}

/*
=================
CG_DrawTeamBackground

Address: 0x5e6f
Stack Size: 0x30
Calls: trap_R_SetColor, CG_DrawPic
Called by: CG_DrawOldScoreboard, CG_DrawStatusBar
=================
*/
void CG_DrawTeamBackground(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	local_28 = arg_4;
	if (arg_5 != 0x1) goto jmp_5e83;
	local_1c = 0x3f800000;
	local_20 = 0x0;
	local_24 = 0x0;
	goto jmp_5e95;
jmp_5e83:
	if (arg_5 != 0x2) goto jmp_5eb5;
	local_2c = 0x0;
	local_1c = local_2c;
	local_20 = local_2c;
	local_24 = 0x3f800000;
jmp_5e95:
	trap_R_SetColor(&local_1c);
	CG_DrawPic((float)arg_0, (float)arg_1, (float)arg_2, (float)arg_3, bss_10419c);
	trap_R_SetColor(0x0);
jmp_5eb5:
}

/*
=================
CG_DrawStatusBar

Address: 0x5eb7
Stack Size: 0x78
Calls: trap_R_SetColor, sin, CG_ColorForHealth, CG_DrawPic, CG_DrawField, CG_DrawStatusBarFlag, CG_DrawStatusBarHead, CG_Draw3DModel, CG_DrawTeamBackground
Called by: CG_Draw2D
=================
*/
void CG_DrawStatusBar(void) {
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	char	local_4c[16];
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;

	if (bss_b848 != 0x0) goto jmp_5ebe;
	goto jmp_60b0;
jmp_5ebe:
	CG_DrawTeamBackground(0x0, 0x1a4, 0x280, 0x3c, 0x3ea8f5c3, *(int *)(bss_c2330 + 0x130));
	local_2c = ((0x2cc * *(int *)(bss_c2330 + 0xb8)) + 0xf30c);
	local_3c = (bss_c2330 + 0x2c);
	local_60 = 0x0;
	local_38 = local_60;
	local_34 = local_60;
	local_30 = local_60;
	local_64 = *(int *)(local_2c + 0xc0);
	local_68 = 0x0;
	if (local_64 == local_68) goto jmp_5f46;
	if (*(int *)((0x84 * local_64) + 0xeb18) == local_68) goto jmp_5f46;
	local_40 = 0x428c0000;
	local_44 = 0x0;
	local_48 = 0x0;
	local_6c = sin(((float)bss_dc760 / 0x447a0000));
	local_34 = ((0x41a00000 * local_6c) + 0x42b40000);
#define next_call_arg_0 "0x42c80000"
#define next_call_arg_1 "0x43d80000"
	local_70 = 0x42400000;
#define next_call_arg_2 "local_70"
#define next_call_arg_3 "local_70"
#define next_call_arg_4 "*(int *)((0x84 * *(int *)(local_2c + 0xc0)) + 0xeb18)"
#define next_call_arg_5 "0x0"
#define next_call_arg_6 "&local_40"
#define next_call_arg_7 "&local_30"
	CG_Draw3DModel();
jmp_5f46:
	CG_DrawStatusBarHead(0x438e8000);
	if (bss_dc8d4 == 0x0) goto jmp_5f58;
	CG_DrawStatusBarFlag(0x43a68000, 0x1);
	goto jmp_5f70;
jmp_5f58:
	if (bss_dc8d8 == 0x0) goto jmp_5f65;
	CG_DrawStatusBarFlag(0x43a68000, 0x2);
	goto jmp_5f70;
jmp_5f65:
	if (bss_dc8dc == 0x0) goto jmp_5f70;
	CG_DrawStatusBarFlag(0x43a68000, 0x0);
jmp_5f70:
	if (*(int *)(local_3c + 0xc4) == 0x0) goto jmp_5fa4;
	local_40 = 0x42b40000;
	local_44 = 0x0;
	local_48 = 0xc1200000;
	local_34 = ((float)(0x168 * (bss_dc760 & 0x7ff)) / 0x45000000);
#define next_call_arg_0 "0x43eb0000"
#define next_call_arg_1 "0x43d80000"
	local_6c = 0x42400000;
#define next_call_arg_2 "local_6c"
#define next_call_arg_3 "local_6c"
#define next_call_arg_4 "bss_104194"
#define next_call_arg_5 "0x0"
#define next_call_arg_6 "&local_40"
#define next_call_arg_7 "&local_30"
	CG_Draw3DModel();
jmp_5fa4:
	if (*(int *)(local_2c + 0xc0) == 0x0) goto jmp_601f;
	local_28 = *(int *)((*(int *)(local_2c + 0xc0) << 0x2) + (local_3c + 0x178));
	if (local_28 <= 0xffffffff) goto jmp_601f;
	if (bss_dc814 != 0x3) goto jmp_5fcb;
	if (bss_dc7ac <= 0x64) goto jmp_5fcb;
	local_5c = 0x2;
	goto jmp_5fd7;
jmp_5fcb:
	if (local_28 < 0x0) goto jmp_5fd4;
	local_5c = 0x0;
	goto jmp_5fd7;
jmp_5fd4:
	local_5c = 0x1;
jmp_5fd7:
	trap_R_SetColor(((local_5c << 0x4) + 0x1048));
	CG_DrawField(0x0, 0x1b0, 0x3, local_28);
	trap_R_SetColor(0x0);
	local_6c = 0x0;
	if (bss_c508 != local_6c) goto jmp_601f;
	if (bss_c3f8 == local_6c) goto jmp_601f;
	local_70 = *(int *)((0x84 * bss_dc810) + 0xeb14);
	if (local_70 == 0x0) goto jmp_601f;
#define next_call_arg_0 "0x42c80000"
#define next_call_arg_1 "0x43d80000"
	local_74 = 0x42400000;
#define next_call_arg_2 "local_74"
#define next_call_arg_3 "local_74"
#define next_call_arg_4 "local_70"
	CG_DrawPic();
jmp_601f:
	local_28 = *(int *)(local_3c + 0xb8);
	if (local_28 <= 0x64) goto jmp_6031;
	trap_R_SetColor(0x1078);
	goto jmp_6059;
jmp_6031:
	if (local_28 <= 0x19) goto jmp_603c;
	trap_R_SetColor(0x1048);
	goto jmp_6059;
jmp_603c:
	if (local_28 <= 0x0) goto jmp_6054;
	local_5c = ((bss_dc760 >> 0x8) & 0x1);
	trap_R_SetColor(((local_5c << 0x4) + 0x1048));
	goto jmp_6059;
jmp_6054:
	trap_R_SetColor(0x1058);
jmp_6059:
	CG_DrawField(0xb9, 0x1b0, 0x3, local_28);
	CG_ColorForHealth(local_4c);
	trap_R_SetColor(local_4c);
	local_28 = *(int *)(local_3c + 0xc4);
	if (local_28 <= 0x0) goto jmp_60b0;
	trap_R_SetColor(0x1048);
	CG_DrawField(0x172, 0x1b0, 0x3, local_28);
	trap_R_SetColor(0x0);
	local_6c = 0x0;
	if (bss_c508 != local_6c) goto jmp_60b0;
	if (bss_c3f8 == local_6c) goto jmp_60b0;
#define next_call_arg_0 "0x43eb0000"
#define next_call_arg_1 "0x43d80000"
	local_70 = 0x42400000;
#define next_call_arg_2 "local_70"
#define next_call_arg_3 "local_70"
#define next_call_arg_4 "bss_104198"
	CG_DrawPic();
jmp_60b0:
}

/*
=================
CG_DrawAttacker

Address: 0x60b2
Stack Size: 0x54
Calls: CG_DrawBigString, Q_PrintStrlen, Info_ValueForKey, CG_ConfigString, CG_DrawHead
Called by: CG_DrawUpperRight
=================
*/
int CG_DrawAttacker(int arg_0) {
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	char	local_3c[12];
	int		local_48;
	int		local_4c;
	int		local_50;

	arg_0 = arg_0;
	if (bss_dc838 > 0x0) goto jmp_60c0;
	return arg_0;
jmp_60c0:
	if (bss_de9fc != 0x0) goto jmp_60c9;
	return arg_0;
jmp_60c9:
	local_20 = bss_dc890;
	if (local_20 < 0x0) goto jmp_60dd;
	if (local_20 >= 0x40) goto jmp_60dd;
	if (local_20 != *(int *)(bss_c2330 + 0xb8)) goto jmp_60e2;
jmp_60dd:
	return arg_0;
jmp_60e2:
	if (*(int *)((0x6b4 * local_20) + 0xe8c24) != 0x0) goto jmp_60f3;
	bss_de9fc = 0x0;
	return arg_0;
jmp_60f3:
	local_38 = (bss_dc760 - bss_de9fc);
	if (local_38 <= 0x2710) goto jmp_6106;
	bss_de9fc = 0x0;
	return arg_0;
jmp_6106:
	local_24 = 0x42700000;
	local_28 = 0x0;
	local_2c = 0x43340000;
	local_30 = 0x0;
	CG_DrawHead((0x44200000 - local_24), arg_0, local_24, local_24, local_20, &local_28);
	local_48 = CG_ConfigString((local_20 + 0x220));
	*(int *)local_3c = local_48;
	local_4c = Info_ValueForKey(*(int *)local_3c, 0x549e);
	local_34 = local_4c;
	arg_0 = (arg_0 + local_24);
	local_50 = Q_PrintStrlen(local_34);
	CG_DrawBigString((0x280 - (local_50 << 0x4)), (int)arg_0, local_34, 0x3f000000);
	return ((arg_0 + 0x41800000) + 0x40000000);
}

/*
=================
CG_DrawSnapshot

Address: 0x616c
Stack Size: 0x28
Calls: CG_DrawBigString, CG_DrawStrlen, va
Called by: CG_DrawUpperRight
=================
*/
int CG_DrawSnapshot(int arg_0) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	local_20 = va(0x5487, *(int *)(bss_c2330 + 0x8), bss_c2328, bss_e66ec);
	local_18 = local_20;
	local_24 = CG_DrawStrlen(local_18);
	local_1c = (local_24 << 0x4);
	CG_DrawBigString((0x27b - local_1c), (int)(arg_0 + 0x40000000), local_18, 0x3f800000);
	return ((arg_0 + 0x41800000) + 0x40800000);
}

/*
=================
CG_DrawFPS

Address: 0x61ac
Stack Size: 0x50
Calls: trap_Milliseconds, CG_DrawBigString, CG_DrawStrlen, va
Called by: CG_DrawUpperRight
=================
*/
int CG_DrawFPS(int arg_0) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	char	local_34[8];
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;

	*(int *)local_34 = trap_Milliseconds();
	local_20 = *(int *)local_34;
	local_3c = 0x104590;
	local_24 = (local_20 - *(int *)local_3c);
	*(int *)local_3c = local_20;
	*(int *)(((bss_10458c %% 0x4) << 0x2) + 0x10457c) = local_24;
	local_40 = 0x10458c;
	*(int *)local_40 = (*(int *)local_40 + 0x1);
	if (*(int *)local_40 <= 0x4) goto jmp_623b;
	local_44 = 0x0;
	local_1c = local_44;
	local_18 = local_44;
jmp_61eb:
	local_1c = (local_1c + *(int *)((local_18 << 0x2) + 0x10457c));
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x4) goto jmp_61eb;
	if (local_1c != 0x0) goto jmp_6208;
	local_1c = 0x1;
jmp_6208:
	local_30 = (0xfa0 / local_1c);
	local_48 = va(0x5481, local_30);
	local_28 = local_48;
	local_4c = CG_DrawStrlen(local_28);
	local_2c = (local_4c << 0x4);
	CG_DrawBigString((0x27b - local_2c), (int)(arg_0 + 0x40000000), local_28, 0x3f800000);
jmp_623b:
	return ((arg_0 + 0x41800000) + 0x40800000);
}

/*
=================
CG_DrawTimer

Address: 0x6244
Stack Size: 0x50
Calls: CG_DrawBigString, CG_DrawStrlen, va
Called by: CG_DrawUpperRight
=================
*/
int CG_DrawTimer(int arg_0) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[8];
	char	local_34[12];
	char	local_40[8];
	int		local_48;
	int		local_4c;

	*(int *)local_2c = (bss_dc760 - bss_e7404);
	local_18 = (*(int *)local_2c / 0x3e8);
	*(int *)local_34 = 0x3c;
	local_20 = (local_18 / *(int *)local_34);
	local_18 = (local_18 - (*(int *)local_34 * local_20));
	*(int *)local_40 = 0xa;
	local_24 = (local_18 / *(int *)local_40);
	local_18 = (local_18 - (*(int *)local_40 * local_24));
	local_48 = va(0x5479, local_20, local_24, local_18);
	local_1c = local_48;
	local_4c = CG_DrawStrlen(local_1c);
	local_28 = (local_4c << 0x4);
	CG_DrawBigString((0x27b - local_28), (int)(arg_0 + 0x40000000), local_1c, 0x3f800000);
	return ((arg_0 + 0x41800000) + 0x40800000);
}

/*
=================
CG_DrawTeamOverlay

Address: 0x62b6
Stack Size: 0xc4
Calls: trap_R_RegisterShader, trap_R_SetColor, BG_FindItemForPowerup, Com_sprintf, CG_GetColorForHealth, CG_DrawStringExt, CG_DrawPic, CG_ConfigString, CG_DrawStrlen
Called by: CG_DrawLowerLeft, CG_DrawLowerRight, CG_DrawUpperRight
=================
*/
int CG_DrawTeamOverlay(int arg_0, int arg_1, int arg_2) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	char	local_68[16];
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;
	int		local_a0;
	char	local_a4[8];
	int		local_ac;
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;

	arg_0 = arg_0;
	arg_1 = arg_1;
	if (bss_bea8 != 0x0) goto jmp_62c8;
	return arg_0;
jmp_62c8:
	local_88 = 0x130;
	if (*(int *)(bss_c2330 + local_88) == 0x1) goto jmp_62e0;
	if (*(int *)(bss_c2330 + local_88) == 0x2) goto jmp_62e0;
	return arg_0;
jmp_62e0:
	local_90 = 0x0;
	local_78 = local_90;
	local_64 = local_90;
	if (numSortedTeamPlayers <= 0x8) goto jmp_62f4;
	local_8c = 0x8;
	goto jmp_62f8;
jmp_62f4:
	local_8c = numSortedTeamPlayers;
jmp_62f8:
	local_5c = local_8c;
	local_34 = 0x0;
	goto jmp_6340;
jmp_6301:
	local_30 = ((0x6b4 * *(int *)((local_34 << 0x2) + 0x104ea0)) + 0xe8c24);
	if (*(int *)local_30 == 0x0) goto jmp_633a;
	if (*(int *)(local_30 + 0x44) != *(int *)(bss_c2330 + 0x130)) goto jmp_633a;
	local_78 = (local_78 + 0x1);
	local_98 = CG_DrawStrlen((local_30 + 0x4));
	local_54 = local_98;
	if (local_54 <= local_64) goto jmp_633a;
	local_64 = local_54;
jmp_633a:
	local_34 = (local_34 + 0x1);
jmp_6340:
	if (local_34 < local_5c) goto jmp_6301;
	if (local_78 != 0x0) goto jmp_634e;
	return arg_0;
jmp_634e:
	if (local_64 <= 0xc) goto jmp_6355;
	local_64 = 0xc;
jmp_6355:
	local_58 = 0x0;
	local_34 = 0x1;
jmp_635b:
	local_94 = CG_ConfigString((local_34 + 0x260));
	local_40 = local_94;
	if (local_40 == 0x0) goto jmp_6386;
	if ((char)*(char *)local_40 == 0x0) goto jmp_6386;
	local_9c = CG_DrawStrlen(local_40);
	local_54 = local_9c;
	if (local_54 <= local_58) goto jmp_6386;
	local_58 = local_54;
jmp_6386:
	local_34 = (local_34 + 0x1);
	if (local_34 < 0x40) goto jmp_635b;
	if (local_58 <= 0x10) goto jmp_6397;
	local_58 = 0x10;
jmp_6397:
	local_7c = ((((local_64 + local_58) << 0x3) + 0x20) + 0x38);
	if (arg_1 == 0x0) goto jmp_63b0;
	local_60 = (0x280 - local_7c);
	goto jmp_63b3;
jmp_63b0:
	local_60 = 0x0;
jmp_63b3:
	local_80 = (local_78 << 0x3);
	if (arg_2 == 0x0) goto jmp_63c8;
	local_84 = (int)(arg_0 + (float)local_80);
	goto jmp_63d5;
jmp_63c8:
	arg_0 = (arg_0 - (float)local_80);
	local_84 = (int)arg_0;
jmp_63d5:
	if (*(int *)(bss_c2330 + 0x130) != 0x1) goto jmp_63ea;
	local_44 = 0x3f800000;
	local_48 = 0x0;
	local_4c = 0x0;
	local_50 = 0x3ea8f5c3;
	goto jmp_63fb;
jmp_63ea:
	local_94 = 0x0;
	local_44 = local_94;
	local_48 = local_94;
	local_4c = 0x3f800000;
	local_50 = 0x3ea8f5c3;
jmp_63fb:
	trap_R_SetColor(&local_44);
	CG_DrawPic((float)local_60, arg_0, (float)local_7c, (float)local_80, bss_10419c);
	trap_R_SetColor(0x0);
	local_34 = 0x0;
	goto jmp_65ee;
jmp_641f:
	local_30 = ((0x6b4 * *(int *)((local_34 << 0x2) + 0x104ea0)) + 0xe8c24);
	if (*(int *)local_30 == 0x0) goto jmp_65e8;
	if (*(int *)(local_30 + 0x44) != *(int *)(bss_c2330 + 0x130)) goto jmp_65e8;
	local_98 = 0x3f800000;
	local_50 = local_98;
	local_4c = local_98;
	local_48 = local_98;
	local_44 = local_98;
	local_9c = 0x8;
	local_38 = (local_60 + local_9c);
#define next_call_arg_0 "local_38"
#define next_call_arg_1 "(int)arg_0"
#define next_call_arg_2 "(local_30 + 0x4)"
#define next_call_arg_3 "&local_44"
	local_a0 = 0x0;
#define next_call_arg_4 "local_a0"
#define next_call_arg_5 "local_a0"
#define next_call_arg_6 "local_9c"
#define next_call_arg_7 "local_9c"
#define next_call_arg_8 "0xc"
	CG_DrawStringExt();
	if (local_58 == 0x0) goto jmp_64cf;
	*(int *)local_a4 = CG_ConfigString((*(int *)(local_30 + 0x70) + 0x260));
	local_40 = *(int *)local_a4;
	if (local_40 == 0x0) goto jmp_6499;
	if ((char)*(char *)local_40 != 0x0) goto jmp_649c;
jmp_6499:
	local_40 = 0x5471;
jmp_649c:
	local_ac = 0x10;
	local_38 = ((local_60 + local_ac) + (local_64 << 0x3));
#define next_call_arg_0 "local_38"
#define next_call_arg_1 "(int)arg_0"
#define next_call_arg_2 "local_40"
#define next_call_arg_3 "&local_44"
	local_b0 = 0x0;
#define next_call_arg_4 "local_b0"
#define next_call_arg_5 "local_b0"
	local_b4 = 0x8;
#define next_call_arg_6 "local_b4"
#define next_call_arg_7 "local_b4"
#define next_call_arg_8 "local_ac"
	CG_DrawStringExt();
jmp_64cf:
	CG_GetColorForHealth(*(int *)(local_30 + 0x74), *(int *)(local_30 + 0x78), &local_44);
	Com_sprintf(local_68, 0x10, 0x5469, *(int *)(local_30 + 0x74), *(int *)(local_30 + 0x78));
	local_ac = 0x3;
	local_38 = (((local_60 + 0x18) + (local_64 << local_ac)) + (local_58 << local_ac));
#define next_call_arg_0 "local_38"
#define next_call_arg_1 "(int)arg_0"
#define next_call_arg_2 "local_68"
#define next_call_arg_3 "&local_44"
	local_b0 = 0x0;
#define next_call_arg_4 "local_b0"
#define next_call_arg_5 "local_b0"
	local_b4 = 0x8;
#define next_call_arg_6 "local_b4"
#define next_call_arg_7 "local_b4"
#define next_call_arg_8 "local_b0"
	CG_DrawStringExt();
	local_38 = (local_38 + 0x18);
	if (*(int *)((0x84 * *(int *)(local_30 + 0x7c)) + 0xeb10) == 0x0) goto jmp_655f;
#define next_call_arg_0 "(float)local_38"
#define next_call_arg_1 "arg_0"
	local_b8 = 0x41000000;
#define next_call_arg_2 "local_b8"
#define next_call_arg_3 "local_b8"
#define next_call_arg_4 "*(int *)((0x84 * *(int *)(local_30 + 0x7c)) + 0xeb10)"
	CG_DrawPic();
	goto jmp_6575;
jmp_655f:
#define next_call_arg_0 "(float)local_38"
#define next_call_arg_1 "arg_0"
	local_b8 = 0x41000000;
#define next_call_arg_2 "local_b8"
#define next_call_arg_3 "local_b8"
#define next_call_arg_4 "bss_1041a0"
	CG_DrawPic();
jmp_6575:
	if (arg_1 == 0x0) goto jmp_657f;
	local_38 = local_60;
	goto jmp_6588;
jmp_657f:
	local_38 = ((local_60 + local_7c) - 0x8);
jmp_6588:
	local_2c = 0x0;
jmp_658b:
	if ((*(int *)(local_30 + 0x94) & (0x1 << local_2c)) == 0x0) goto jmp_65d8;
	local_b8 = BG_FindItemForPowerup(local_2c);
	local_3c = local_b8;
	if (local_3c == 0x0) goto jmp_65d8;
	local_bc = trap_R_RegisterShader(*(int *)(local_3c + 0x18));
#define next_call_arg_0 "(float)local_38"
#define next_call_arg_1 "arg_0"
	local_c0 = 0x41000000;
#define next_call_arg_2 "local_c0"
#define next_call_arg_3 "local_c0"
#define next_call_arg_4 "local_bc"
	CG_DrawPic();
	if (arg_1 == 0x0) goto jmp_65d2;
	local_38 = (local_38 - 0x8);
	goto jmp_65d8;
jmp_65d2:
	local_38 = (local_38 + 0x8);
jmp_65d8:
	local_2c = (local_2c + 0x1);
	if (local_2c <= 0xf) goto jmp_658b;
	arg_0 = (arg_0 + 0x41000000);
jmp_65e8:
	local_34 = (local_34 + 0x1);
jmp_65ee:
	if (local_34 < local_5c) goto jmp_641f;
	return (float)local_84;
}

/*
=================
CG_DrawUpperRight

Address: 0x65f9
Stack Size: 0x24
Calls: CG_DrawAttacker, CG_DrawTimer, CG_DrawFPS, CG_DrawSnapshot, CG_DrawTeamOverlay
Called by: CG_Draw2D
=================
*/
void CG_DrawUpperRight(int arg_0) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;

	local_14 = 0x0;
	if (bss_e66f8 < 0x3) goto jmp_6619;
	if (bss_bea8 != 0x1) goto jmp_6619;
#define next_call_arg_0 "local_14"
	local_18 = 0x1;
#define next_call_arg_1 "local_18"
#define next_call_arg_2 "local_18"
	local_1c = CG_DrawTeamOverlay();
	local_14 = local_1c;
jmp_6619:
	if (bss_c618 == 0x0) goto jmp_6628;
	local_18 = CG_DrawSnapshot(local_14);
	local_14 = local_18;
jmp_6628:
	local_18 = 0x0;
	if (bss_c728 == local_18) goto jmp_6648;
	local_1c = arg_0;
	if (local_1c == local_18) goto jmp_663d;
	if (local_1c != 0x2) goto jmp_6648;
jmp_663d:
	local_20 = CG_DrawFPS(local_14);
	local_14 = local_20;
jmp_6648:
	if (bss_c838 == 0x0) goto jmp_6657;
	local_20 = CG_DrawTimer(local_14);
	local_14 = local_20;
jmp_6657:
	if (bss_9648 == 0x0) goto jmp_6661;
	CG_DrawAttacker(local_14);
jmp_6661:
}

/*
=================
CG_DrawScores

Address: 0x6663
Stack Size: 0x78
Calls: BG_FindItemForPowerup, CG_DrawBigString, CG_DrawPic, CG_FillRect, CG_DrawStrlen, va
Called by: CG_DrawLowerRight
=================
*/
int CG_DrawScores(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	char	local_64[8];
	int		local_6c;
	int		local_70;
	int		local_74;

	arg_0 = arg_0;
	local_38 = bss_e7408;
	local_3c = bss_e740c;
	arg_0 = (arg_0 - 0x41c00000);
	local_40 = arg_0;
	if (bss_e66f8 < 0x3) goto jmp_682b;
	local_2c = 0x280;
	local_50 = 0x0;
	local_1c = local_50;
	local_20 = local_50;
	local_24 = 0x3f800000;
	local_28 = 0x3ea8f5c3;
	local_54 = va(0x5465, local_3c);
	local_34 = local_54;
	local_58 = CG_DrawStrlen(local_34);
	local_30 = ((local_58 << 0x4) + 0x8);
	local_2c = (local_2c - local_30);
	CG_FillRect((float)local_2c, (arg_0 - 0x40800000), (float)local_30, 0x41c00000, &local_1c);
	if (*(int *)(bss_c2330 + 0x130) != 0x2) goto jmp_66e5;
	CG_DrawPic((float)local_2c, (arg_0 - 0x40800000), (float)local_30, 0x41c00000, bss_1041f0);
jmp_66e5:
	CG_DrawBigString((local_2c + 0x4), (int)arg_0, local_34, 0x3f800000);
	if (bss_e66f8 != 0x4) goto jmp_6732;
	local_60 = BG_FindItemForPowerup(0x8);
	local_4c = local_60;
	if (local_4c == 0x0) goto jmp_6732;
	local_40 = ((arg_0 - 0x41800000) - 0x41000000);
	if (bss_e7414 < 0x0) goto jmp_6732;
	if (bss_e7414 > 0x2) goto jmp_6732;
	CG_DrawPic((float)local_2c, (local_40 - 0x40800000), (float)local_30, 0x41c00000, *(int *)((bss_e7414 << 0x2) + 0x104158));
jmp_6732:
	local_1c = 0x3f800000;
	local_20 = 0x0;
	local_24 = 0x0;
	local_28 = 0x3ea8f5c3;
	local_60 = va(0x5465, local_38);
	local_34 = local_60;
	*(int *)local_64 = CG_DrawStrlen(local_34);
	local_30 = ((*(int *)local_64 << 0x4) + 0x8);
	local_2c = (local_2c - local_30);
	CG_FillRect((float)local_2c, (arg_0 - 0x40800000), (float)local_30, 0x41c00000, &local_1c);
	if (*(int *)(bss_c2330 + 0x130) != 0x1) goto jmp_6791;
	CG_DrawPic((float)local_2c, (arg_0 - 0x40800000), (float)local_30, 0x41c00000, bss_1041f0);
jmp_6791:
	CG_DrawBigString((local_2c + 0x4), (int)arg_0, local_34, 0x3f800000);
	if (bss_e66f8 != 0x4) goto jmp_67de;
	local_6c = BG_FindItemForPowerup(0x7);
	local_4c = local_6c;
	if (local_4c == 0x0) goto jmp_67de;
	local_40 = ((arg_0 - 0x41800000) - 0x41000000);
	if (bss_e7410 < 0x0) goto jmp_67de;
	if (bss_e7410 > 0x2) goto jmp_67de;
	CG_DrawPic((float)local_2c, (local_40 - 0x40800000), (float)local_30, 0x41c00000, *(int *)((bss_e7410 << 0x2) + 0x10414c));
jmp_67de:
	if (bss_e66f8 < 0x4) goto jmp_67e8;
	local_48 = bss_e6708;
	goto jmp_67ec;
jmp_67e8:
	local_48 = bss_e6704;
jmp_67ec:
	if (local_48 == 0x0) goto jmp_69d6;
	local_6c = va(0x5465, local_48);
	local_34 = local_6c;
	local_70 = CG_DrawStrlen(local_34);
	local_74 = 0x4;
	local_30 = ((local_70 << local_74) + 0x8);
	local_2c = (local_2c - local_30);
	CG_DrawBigString((local_2c + local_74), (int)arg_0, local_34, 0x3f800000);
	goto jmp_69d6;
jmp_682b:
	local_2c = 0x280;
	local_44 = *(int *)(bss_c2330 + 0x124);
	if (*(int *)(bss_c2330 + 0x130) != 0x3) goto jmp_6841;
	local_54 = 0x1;
	goto jmp_6844;
jmp_6841:
	local_54 = 0x0;
jmp_6844:
	local_50 = local_54;
	if (local_38 == local_44) goto jmp_6851;
	local_3c = local_44;
jmp_6851:
	if (local_3c == 0xffffd8f1) goto jmp_68f7;
	local_58 = va(0x5465, local_3c);
	local_34 = local_58;
	local_5c = CG_DrawStrlen(local_34);
	local_30 = ((local_5c << 0x4) + 0x8);
	local_2c = (local_2c - local_30);
	if (local_50 != 0x0) goto jmp_68c1;
	local_60 = local_44;
	if (local_60 != local_3c) goto jmp_68c1;
	if (local_60 == local_38) goto jmp_68c1;
	local_1c = 0x3f800000;
	local_20 = 0x0;
	local_24 = 0x0;
	local_28 = 0x3ea8f5c3;
	CG_FillRect((float)local_2c, (arg_0 - 0x40800000), (float)local_30, 0x41c00000, &local_1c);
	CG_DrawPic((float)local_2c, (arg_0 - 0x40800000), (float)local_30, 0x41c00000, bss_1041f0);
	goto jmp_68e6;
jmp_68c1:
	*(int *)local_64 = 0x3f000000;
	local_1c = *(int *)local_64;
	local_20 = *(int *)local_64;
	local_24 = 0x3f000000;
	local_28 = 0x3ea8f5c3;
	CG_FillRect((float)local_2c, (arg_0 - 0x40800000), (float)local_30, 0x41c00000, &local_1c);
jmp_68e6:
	CG_DrawBigString((local_2c + 0x4), (int)arg_0, local_34, 0x3f800000);
jmp_68f7:
	if (local_38 == 0xffffd8f1) goto jmp_6999;
	local_58 = va(0x5465, local_38);
	local_34 = local_58;
	local_5c = CG_DrawStrlen(local_34);
	local_30 = ((local_5c << 0x4) + 0x8);
	local_2c = (local_2c - local_30);
	if (local_50 != 0x0) goto jmp_6963;
	if (local_44 != local_38) goto jmp_6963;
	local_60 = 0x0;
	local_1c = local_60;
	local_20 = local_60;
	local_24 = 0x3f800000;
	local_28 = 0x3ea8f5c3;
	CG_FillRect((float)local_2c, (arg_0 - 0x40800000), (float)local_30, 0x41c00000, &local_1c);
	CG_DrawPic((float)local_2c, (arg_0 - 0x40800000), (float)local_30, 0x41c00000, bss_1041f0);
	goto jmp_6988;
jmp_6963:
	local_60 = 0x3f000000;
	local_1c = local_60;
	local_20 = local_60;
	local_24 = 0x3f000000;
	local_28 = 0x3ea8f5c3;
	CG_FillRect((float)local_2c, (arg_0 - 0x40800000), (float)local_30, 0x41c00000, &local_1c);
jmp_6988:
	CG_DrawBigString((local_2c + 0x4), (int)arg_0, local_34, 0x3f800000);
jmp_6999:
	if (bss_e6704 == 0x0) goto jmp_69d6;
	local_58 = va(0x5465, bss_e6704);
	local_34 = local_58;
	local_5c = CG_DrawStrlen(local_34);
	local_60 = 0x4;
	local_30 = ((local_5c << local_60) + 0x8);
	local_2c = (local_2c - local_30);
	CG_DrawBigString((local_2c + local_60), (int)arg_0, local_34, 0x3f800000);
jmp_69d6:
	return (local_40 - 0x41000000);
}

/*
=================
CG_DrawPowerups

Address: 0x69dd
Stack Size: 0xf0
Calls: trap_R_RegisterShader, trap_R_SetColor, CG_DrawPic, CG_DrawField, BG_FindItemForPowerup
Called by: CG_DrawLowerRight
=================
*/
int CG_DrawPowerups(int arg_0) {
	int		local_1c;
	int		local_20;
	char	local_24[60];
	int		local_60;
	char	local_64[60];
	int		local_a0;
	int		local_a4;
	int		local_a8;
	int		local_ac;
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;
	int		local_c4;
	int		local_c8;
	int		local_cc;
	int		local_d0;
	int		local_d4;
	int		local_d8;
	int		local_dc;
	int		local_e0;
	char	local_e4[12];

	arg_0 = arg_0;
	local_b0 = (bss_c2330 + 0x2c);
	if (*(int *)(local_b0 + 0xb8) > 0x0) goto jmp_69f4;
	return arg_0;
jmp_69f4:
	local_c8 = 0x0;
	local_a4 = local_c8;
	local_ac = local_c8;
jmp_69ff:
	if (*(int *)((local_ac << 0x2) + (local_b0 + 0x138)) != 0x0) goto jmp_6a0d;
	goto jmp_6a97;
jmp_6a0d:
	if (*(int *)((local_ac << 0x2) + (local_b0 + 0x138)) != 0x7fffffff) goto jmp_6a1b;
	goto jmp_6a97;
jmp_6a1b:
	local_a8 = (*(int *)((local_ac << 0x2) + (local_b0 + 0x138)) - bss_dc760);
	if (local_a8 > 0x0) goto jmp_6a30;
	goto jmp_6a97;
jmp_6a30:
	local_a0 = 0x0;
	goto jmp_6a7a;
jmp_6a35:
	if (*(int *)((local_a0 << 0x2) + &local_20) < local_a8) goto jmp_6a74;
	local_1c = (local_a4 - 0x1);
	goto jmp_6a6d;
jmp_6a47:
	local_cc = (local_1c << 0x2);
	*(int *)(local_cc + local_64) = *(int *)(local_cc + &local_60);
	local_d0 = (local_1c << 0x2);
	*(int *)(local_d0 + local_24) = *(int *)(local_d0 + &local_20);
	local_1c = (local_1c - 0x1);
jmp_6a6d:
	if (local_1c >= local_a0) goto jmp_6a47;
	goto jmp_6a7f;
jmp_6a74:
	local_a0 = (local_a0 + 0x1);
jmp_6a7a:
	if (local_a0 < local_a4) goto jmp_6a35;
jmp_6a7f:
	*(int *)((local_a0 << 0x2) + &local_60) = local_ac;
	*(int *)((local_a0 << 0x2) + &local_20) = local_a8;
	local_a4 = (local_a4 + 0x1);
jmp_6a97:
	local_ac = (local_ac + 0x1);
	if (local_ac < 0x10) goto jmp_69ff;
	local_c4 = 0x210;
	local_ac = 0x0;
	goto jmp_6b94;
jmp_6aa9:
	local_cc = BG_FindItemForPowerup(*(int *)((local_ac << 0x2) + &local_60));
	local_b4 = local_cc;
	if (local_b4 == 0x0) goto jmp_6b8e;
	local_c0 = 0x1;
	arg_0 = (arg_0 - 0x42400000);
	trap_R_SetColor(((local_c0 << 0x4) + 0x1088));
#define next_call_arg_0 "local_c4"
#define next_call_arg_1 "(int)arg_0"
	local_d0 = 0x2;
#define next_call_arg_2 "local_d0"
#define next_call_arg_3 "(*(int *)((local_ac << local_d0) + &local_20) / 0x3e8)"
	CG_DrawField();
	local_d4 = 0x2;
	local_a8 = *(int *)((*(int *)((local_ac << local_d4) + &local_60) << local_d4) + (local_b0 + 0x138));
	if ((local_a8 - bss_dc760) < 0x1388) goto jmp_6b0f;
	trap_R_SetColor(0x0);
	goto jmp_6b37;
jmp_6b0f:
	local_bc = ((float)(local_a8 - bss_dc760) / 0x447a0000);
	local_bc = (local_bc - (float)(int)local_bc);
	*(int *)local_e4 = local_bc;
	local_e0 = local_bc;
	local_dc = local_bc;
	local_d8 = local_bc;
	trap_R_SetColor(&local_d8);
jmp_6b37:
	if (bss_de9f4 != *(int *)((local_ac << 0x2) + &local_60)) goto jmp_6b66;
	if ((bss_dc760 - bss_de9f8) >= 0xc8) goto jmp_6b66;
	local_d8 = 0x3f800000;
	local_bc = (local_d8 - (((float)bss_dc760 - (float)bss_de9f8) / 0x43480000));
	local_b8 = (0x42400000 * ((0x3f000000 * local_bc) + local_d8));
	goto jmp_6b69;
jmp_6b66:
	local_b8 = 0x42400000;
jmp_6b69:
	local_d8 = trap_R_RegisterShader(*(int *)(local_b4 + 0x18));
	CG_DrawPic((0x44200000 - local_b8), ((arg_0 + 0x41c00000) - (local_b8 / 0x40000000)), local_b8, local_b8, local_d8);
jmp_6b8e:
	local_ac = (local_ac + 0x1);
jmp_6b94:
	if (local_ac < local_a4) goto jmp_6aa9;
	trap_R_SetColor(0x0);
	return arg_0;
}

/*
=================
CG_DrawLowerRight

Address: 0x6ba3
Stack Size: 0x1c
Calls: CG_DrawPowerups, CG_DrawScores, CG_DrawTeamOverlay
Called by: CG_Draw2D
=================
*/
void CG_DrawLowerRight(void) {
	int		local_14;
	int		local_18;

	local_14 = 0x43d80000;
	if (bss_e66f8 < 0x3) goto jmp_6bbe;
	if (bss_bea8 != 0x2) goto jmp_6bbe;
	local_18 = CG_DrawTeamOverlay(local_14, 0x1, 0x0);
	local_14 = local_18;
jmp_6bbe:
	local_18 = CG_DrawScores(local_14);
	local_14 = local_18;
	CG_DrawPowerups(local_14);
}

/*
=================
CG_DrawPickupItem

Address: 0x6bd1
Stack Size: 0x2c
Calls: trap_R_SetColor, CG_DrawBigString, CG_DrawPic, CG_RegisterItemVisuals, CG_FadeColor
Called by: CG_DrawLowerLeft
=================
*/
int CG_DrawPickupItem(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	if (*(int *)(bss_c2330 + 0xe4) > 0x0) goto jmp_6be2;
	return arg_0;
jmp_6be2:
	arg_0 = (arg_0 - 0x30);
	local_1c = bss_deae8;
	if (local_1c == 0x0) goto jmp_6c42;
	local_24 = CG_FadeColor(bss_deaec, 0xbb8);
	local_20 = local_24;
	if (local_20 == 0x0) goto jmp_6c42;
	CG_RegisterItemVisuals(local_1c);
	trap_R_SetColor(local_20);
#define next_call_arg_0 "0x41000000"
#define next_call_arg_1 "(float)arg_0"
	local_28 = 0x42400000;
#define next_call_arg_2 "local_28"
#define next_call_arg_3 "local_28"
#define next_call_arg_4 "*(int *)((0x18 * local_1c) + 0xd2e0)"
	CG_DrawPic();
	CG_DrawBigString(0x40, (arg_0 + 0x10), *(int *)((0x34 * local_1c) + 0x5a8), *(int *)local_20);
	trap_R_SetColor(0x0);
jmp_6c42:
	return arg_0;
}

/*
=================
CG_DrawLowerLeft

Address: 0x6c47
Stack Size: 0x24
Calls: CG_DrawPickupItem, CG_DrawTeamOverlay
Called by: CG_Draw2D
=================
*/
void CG_DrawLowerLeft(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;

	local_14 = 0x43d80000;
	local_18 = 0x3;
	if (bss_e66f8 < local_18) goto jmp_6c6c;
	if (bss_bea8 != local_18) goto jmp_6c6c;
#define next_call_arg_0 "local_14"
	local_1c = 0x0;
#define next_call_arg_1 "local_1c"
#define next_call_arg_2 "local_1c"
	local_20 = CG_DrawTeamOverlay();
	local_14 = local_20;
jmp_6c6c:
	CG_DrawPickupItem((int)local_14);
}

/*
=================
CG_DrawTeamInfo

Address: 0x6c75
Stack Size: 0x5c
Calls: trap_R_SetColor, CG_DrawStringExt, CG_DrawPic
Called by: CG_Draw2D
=================
*/
void CG_DrawTeamInfo(void) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	char	local_50[8];
	int		local_58;

	if (bss_9318 >= 0x8) goto jmp_6c80;
	local_40 = bss_9318;
	goto jmp_6c83;
jmp_6c80:
	local_40 = 0x8;
jmp_6c83:
	if (local_40 > 0x0) goto jmp_6c89;
	goto jmp_6d69;
jmp_6c89:
	if (bss_1040d0 == bss_1040cc) goto jmp_6d69;
	if ((bss_dc760 - *(int *)(((bss_1040d0 %% local_40) << 0x2) + 0x1040ac)) <= bss_9428) goto jmp_6ca9;
	local_48 = 0x1040d0;
	*(int *)local_48 = (*(int *)local_48 + 0x1);
jmp_6ca9:
	local_44 = ((bss_1040cc - bss_1040d0) << 0x3);
	if (*(int *)((0x6b4 * bss_c2310) + 0xe8c68) != 0x1) goto jmp_6cc9;
	local_30 = 0x3f800000;
	local_34 = 0x0;
	local_38 = 0x0;
	local_3c = 0x3ea8f5c3;
	goto jmp_6cf1;
jmp_6cc9:
	if (*(int *)((0x6b4 * bss_c2310) + 0xe8c68) != 0x2) goto jmp_6ce5;
	local_48 = 0x0;
	local_30 = local_48;
	local_34 = local_48;
	local_38 = 0x3f800000;
	local_3c = 0x3ea8f5c3;
	goto jmp_6cf1;
jmp_6ce5:
	local_30 = 0x0;
	local_34 = 0x3f800000;
	local_38 = 0x0;
	local_3c = 0x3ea8f5c3;
jmp_6cf1:
	trap_R_SetColor(&local_30);
#define next_call_arg_0 "0x0"
	local_48 = local_44;
#define next_call_arg_1 "(float)(0x1a4 - local_48)"
#define next_call_arg_2 "0x44200000"
#define next_call_arg_3 "(float)local_48"
#define next_call_arg_4 "bss_10419c"
	CG_DrawPic();
	trap_R_SetColor(0x0);
	local_4c = 0x3f800000;
	local_38 = local_4c;
	local_34 = local_4c;
	local_30 = local_4c;
	local_3c = 0x3f800000;
	local_2c = (bss_1040cc - 0x1);
	goto jmp_6d64;
jmp_6d2d:
	*(int *)local_50 = 0x8;
#define next_call_arg_0 "*(int *)local_50"
#define next_call_arg_1 "(0x1a4 - ((bss_1040cc - local_2c) << 0x3))"
#define next_call_arg_2 "((0xf1 * (local_2c %% local_40)) + 0x103924)"
#define next_call_arg_3 "&local_30"
	local_58 = 0x0;
#define next_call_arg_4 "local_58"
#define next_call_arg_5 "local_58"
#define next_call_arg_6 "*(int *)local_50"
#define next_call_arg_7 "*(int *)local_50"
#define next_call_arg_8 "local_58"
	CG_DrawStringExt();
	local_2c = (local_2c - 0x1);
jmp_6d64:
	if (local_2c >= bss_1040d0) goto jmp_6d2d;
jmp_6d69:
}

/*
=================
CG_DrawHoldableItem

Address: 0x6d6b
Stack Size: 0x24
Calls: CG_DrawPic, CG_RegisterItemVisuals
Called by: CG_Draw2D
=================
*/
void CG_DrawHoldableItem(void) {
	int		local_1c;
	int		local_20;

	local_1c = *(int *)(bss_c2330 + 0xe8);
	if (local_1c == 0x0) goto jmp_6d95;
	CG_RegisterItemVisuals(local_1c);
#define next_call_arg_0 "0x44140000"
#define next_call_arg_1 "0x43580000"
	local_20 = 0x42400000;
#define next_call_arg_2 "local_20"
#define next_call_arg_3 "local_20"
#define next_call_arg_4 "*(int *)((0x18 * local_1c) + 0xd2e0)"
	CG_DrawPic();
jmp_6d95:
}

/*
=================
CG_DrawReward

Address: 0x6d97
Stack Size: 0x70
Calls: trap_R_SetColor, trap_S_StartLocalSound, CG_DrawStringExt, CG_DrawStrlen, Com_sprintf, CG_DrawPic, CG_FadeColor
Called by: CG_Draw2D
=================
*/
void CG_DrawReward(void) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	char	local_40[32];
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;

	if (bss_bfb8 != 0x0) goto jmp_6d9e;
	goto jmp_6ebe;
jmp_6d9e:
	local_60 = CG_FadeColor(bss_dea08, 0xbb8);
	local_3c = local_60;
	if (local_3c != 0x0) goto jmp_6e17;
	if (bss_dea04 <= 0x0) goto jmp_6ebe;
	local_2c = 0x0;
	goto jmp_6dee;
jmp_6db8:
	local_64 = (local_2c << 0x2);
	*(int *)(local_64 + 0xdea5c) = *(int *)(local_64 + 0xdea60);
	local_68 = (local_2c << 0x2);
	*(int *)(local_68 + 0xdea34) = *(int *)(local_68 + 0xdea38);
	local_6c = (local_2c << 0x2);
	*(int *)(local_6c + 0xdea0c) = *(int *)(local_6c + 0xdea10);
	local_2c = (local_2c + 0x1);
jmp_6dee:
	if (local_2c < bss_dea04) goto jmp_6db8;
	bss_dea08 = bss_dc760;
	local_64 = 0xdea04;
	*(int *)local_64 = (*(int *)local_64 - 0x1);
	local_68 = CG_FadeColor(bss_dea08, 0xbb8);
	local_3c = local_68;
	trap_S_StartLocalSound(bss_dea5c, 0x7);
jmp_6e17:
	trap_R_SetColor(local_3c);
	if (bss_dea0c < 0xa) goto jmp_6e7c;
	local_34 = 0x42600000;
	local_30 = 0x43940000;
#define next_call_arg_0 "local_30"
#define next_call_arg_1 "local_34"
	local_64 = 0x42300000;
#define next_call_arg_2 "local_64"
#define next_call_arg_3 "local_64"
#define next_call_arg_4 "bss_dea34"
	CG_DrawPic();
	Com_sprintf(local_40, 0x20, 0x5462, bss_dea0c);
	local_68 = CG_DrawStrlen(local_40);
	local_30 = (float)((0x280 - (local_68 << 0x3)) / 0x2);
#define next_call_arg_0 "(int)local_30"
#define next_call_arg_1 "(int)(local_34 + 0x42400000)"
#define next_call_arg_2 "local_40"
#define next_call_arg_3 "local_3c"
	local_6c = 0x0;
#define next_call_arg_4 "local_6c"
#define next_call_arg_5 "0x1"
#define next_call_arg_6 "0x8"
#define next_call_arg_7 "0x10"
#define next_call_arg_8 "local_6c"
	CG_DrawStringExt();
	goto jmp_6eb9;
jmp_6e7c:
	local_38 = bss_dea0c;
	local_34 = 0x42600000;
	local_30 = (float)(0x140 - ((0x30 * local_38) / 0x2));
	local_2c = 0x0;
	goto jmp_6eb4;
jmp_6e93:
#define next_call_arg_0 "local_30"
#define next_call_arg_1 "local_34"
	local_64 = 0x42300000;
#define next_call_arg_2 "local_64"
#define next_call_arg_3 "local_64"
#define next_call_arg_4 "bss_dea34"
	CG_DrawPic();
	local_30 = (local_30 + 0x42400000);
	local_2c = (local_2c + 0x1);
jmp_6eb4:
	if (local_2c < local_38) goto jmp_6e93;
jmp_6eb9:
	trap_R_SetColor(0x0);
jmp_6ebe:
}

/*
=================
CG_AddLagometerFrameInfo

Address: 0x6ec0
Stack Size: 0x10
Called by: CG_DrawActiveFrame
=================
*/
void CG_AddLagometerFrameInfo(void) {
	int		local_8;
	int		local_c;

	local_8 = (bss_dc760 - bss_c232c);
	*(int *)(((bss_104794 & 0x7f) << 0x2) + 0x104594) = local_8;
	local_c = 0x104794;
	*(int *)local_c = (*(int *)local_c + 0x1);
}

/*
=================
CG_AddLagometerSnapshotInfo

Address: 0x6ee0
Stack Size: 0xc
Called by: CG_ReadNextSnapshot
=================
*/
void CG_AddLagometerSnapshotInfo(int arg_0) {
	int		local_8;

	arg_0 = arg_0;
	if (arg_0 != 0x0) goto jmp_6f00;
	*(int *)(((bss_104b98 & 0x7f) << 0x2) + 0x104998) = 0xffffffff;
	local_8 = 0x104b98;
	*(int *)local_8 = (*(int *)local_8 + 0x1);
	goto jmp_6f25;
jmp_6f00:
	*(int *)(((bss_104b98 & 0x7f) << 0x2) + 0x104998) = *(int *)(arg_0 + 0x4);
	*(int *)(((bss_104b98 & 0x7f) << 0x2) + 0x104798) = *(int *)arg_0;
	local_8 = 0x104b98;
	*(int *)local_8 = (*(int *)local_8 + 0x1);
jmp_6f25:
}

/*
=================
CG_DrawDisconnect

Address: 0x6f27
Stack Size: 0x5c
Calls: trap_R_RegisterShader, trap_GetUserCmd, trap_GetCurrentCmdNumber, CG_DrawPic, CG_DrawBigString, CG_DrawStrlen
Called by: CG_DrawLagometer
=================
*/
void CG_DrawDisconnect(void) {
	char	local_1c[24];
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;

	local_48 = trap_GetCurrentCmdNumber();
	local_40 = ((local_48 - 0x40) + 0x1);
	trap_GetUserCmd(local_40, local_1c);
	local_4c = *(int *)local_1c;
	if (local_4c <= *(int *)(bss_c2330 + 0x2c)) goto jmp_6f4d;
	if (local_4c <= bss_dc760) goto jmp_6f4f;
jmp_6f4d:
	goto jmp_6f9b;
jmp_6f4f:
	local_34 = 0x544b;
	local_50 = CG_DrawStrlen(local_34);
	local_44 = (local_50 << 0x4);
	CG_DrawBigString((0x140 - (local_44 / 0x2)), 0x64, local_34, 0x3f800000);
	if (((bss_dc760 >> 0x9) & 0x1) == 0x0) goto jmp_6f7a;
	goto jmp_6f9b;
jmp_6f7a:
	local_38 = 0x44140000;
	local_3c = 0x43d80000;
	local_54 = trap_R_RegisterShader(0x543c);
#define next_call_arg_0 "local_38"
#define next_call_arg_1 "local_3c"
	local_58 = 0x42400000;
#define next_call_arg_2 "local_58"
#define next_call_arg_3 "local_58"
#define next_call_arg_4 "local_54"
	CG_DrawPic();
jmp_6f9b:
}

/*
=================
CG_DrawLagometer

Address: 0x6f9d
Stack Size: 0x78
Calls: trap_R_DrawStretchPic, trap_R_SetColor, CG_DrawBigString, CG_AdjustFrom640, CG_DrawPic, CG_DrawDisconnect
Called by: CG_Draw2D
=================
*/
void CG_DrawLagometer(void) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	char	local_68[8];
	int		local_70;
	int		local_74;

	local_60 = 0x0;
	if (bss_9758 == local_60) goto jmp_6fab;
	if (bss_e66f4 == local_60) goto jmp_6fb0;
jmp_6fab:
	CG_DrawDisconnect();
	goto jmp_71b8;
jmp_6fb0:
	local_58 = 0x250;
	local_5c = 0x1b0;
	trap_R_SetColor(0x0);
#define next_call_arg_0 "(float)local_58"
#define next_call_arg_1 "(float)local_5c"
	local_64 = 0x42400000;
#define next_call_arg_2 "local_64"
#define next_call_arg_3 "local_64"
#define next_call_arg_4 "bss_104224"
	CG_DrawPic();
	local_44 = (float)local_58;
	local_50 = (float)local_5c;
	*(int *)local_68 = 0x42400000;
	local_38 = *(int *)local_68;
	local_4c = *(int *)local_68;
	CG_AdjustFrom640(&local_44, &local_50, &local_38, &local_4c);
	local_40 = 0xffffffff;
	local_3c = (local_4c / 0x40400000);
	local_54 = (local_50 + local_3c);
	local_48 = (local_3c / 0x43960000);
	local_30 = 0x0;
	goto jmp_70b9;
jmp_700d:
	local_34 = (((bss_104794 - 0x1) - local_30) & 0x7f);
	local_2c = (float)*(int *)((local_34 << 0x2) + 0x104594);
	local_2c = (local_2c * local_48);
	if (local_2c <= 0x0) goto jmp_706e;
	if (local_40 == 0x1) goto jmp_7039;
	local_40 = 0x1;
	trap_R_SetColor(0x1e6c);
jmp_7039:
	if (local_2c <= local_3c) goto jmp_7042;
	local_2c = local_3c;
jmp_7042:
#define next_call_arg_0 "((local_44 + local_38) - (float)local_30)"
#define next_call_arg_1 "(local_54 - local_2c)"
#define next_call_arg_2 "0x3f800000"
#define next_call_arg_3 "local_2c"
	local_74 = 0x0;
#define next_call_arg_4 "local_74"
#define next_call_arg_5 "local_74"
#define next_call_arg_6 "local_74"
#define next_call_arg_7 "local_74"
#define next_call_arg_8 "bss_10413c"
	trap_R_DrawStretchPic();
	goto jmp_70b3;
jmp_706e:
	if (local_2c >= 0x0) goto jmp_70b3;
	if (local_40 == 0x2) goto jmp_707e;
	local_40 = 0x2;
	trap_R_SetColor(0x1e7c);
jmp_707e:
	local_2c = -local_2c;
	if (local_2c <= local_3c) goto jmp_708c;
	local_2c = local_3c;
jmp_708c:
#define next_call_arg_0 "((local_44 + local_38) - (float)local_30)"
#define next_call_arg_1 "local_54"
#define next_call_arg_2 "0x3f800000"
#define next_call_arg_3 "local_2c"
	local_70 = 0x0;
#define next_call_arg_4 "local_70"
#define next_call_arg_5 "local_70"
#define next_call_arg_6 "local_70"
#define next_call_arg_7 "local_70"
#define next_call_arg_8 "bss_10413c"
	trap_R_DrawStretchPic();
jmp_70b3:
	local_30 = (local_30 + 0x1);
jmp_70b9:
	if ((float)local_30 < local_38) goto jmp_700d;
	local_3c = (local_4c / 0x40000000);
	local_48 = (local_3c / 0x44610000);
	local_30 = 0x0;
	goto jmp_7190;
jmp_70d0:
	local_34 = (((bss_104b98 - 0x1) - local_30) & 0x7f);
	local_2c = (float)*(int *)((local_34 << 0x2) + 0x104998);
	if (local_2c <= 0x0) goto jmp_714d;
	if ((*(int *)((local_34 << 0x2) + 0x104798) & 0x1) == 0x0) goto jmp_7102;
	if (local_40 == 0x5) goto jmp_710e;
	local_40 = 0x5;
	trap_R_SetColor(0x1e6c);
	goto jmp_710e;
jmp_7102:
	if (local_40 == 0x3) goto jmp_710e;
	local_40 = 0x3;
	trap_R_SetColor(0x1e5c);
jmp_710e:
	local_2c = (local_2c * local_48);
	if (local_2c <= local_3c) goto jmp_711e;
	local_2c = local_3c;
jmp_711e:
#define next_call_arg_0 "((local_44 + local_38) - (float)local_30)"
#define next_call_arg_1 "((local_50 + local_4c) - local_2c)"
#define next_call_arg_2 "0x3f800000"
#define next_call_arg_3 "local_2c"
	local_74 = 0x0;
#define next_call_arg_4 "local_74"
#define next_call_arg_5 "local_74"
#define next_call_arg_6 "local_74"
#define next_call_arg_7 "local_74"
#define next_call_arg_8 "bss_10413c"
	trap_R_DrawStretchPic();
	goto jmp_718a;
jmp_714d:
	if (local_2c >= 0x0) goto jmp_718a;
	if (local_40 == 0x4) goto jmp_715d;
	local_40 = 0x4;
	trap_R_SetColor(0x1e4c);
jmp_715d:
#define next_call_arg_0 "((local_44 + local_38) - (float)local_30)"
#define next_call_arg_1 "((local_50 + local_4c) - local_3c)"
#define next_call_arg_2 "0x3f800000"
#define next_call_arg_3 "local_3c"
	local_74 = 0x0;
#define next_call_arg_4 "local_74"
#define next_call_arg_5 "local_74"
#define next_call_arg_6 "local_74"
#define next_call_arg_7 "local_74"
#define next_call_arg_8 "bss_10413c"
	trap_R_DrawStretchPic();
jmp_718a:
	local_30 = (local_30 + 0x1);
jmp_7190:
	if ((float)local_30 < local_38) goto jmp_70d0;
	trap_R_SetColor(0x0);
	local_70 = 0x0;
	if (bss_afc8 != local_70) goto jmp_71a8;
	if (bss_9538 == local_70) goto jmp_71b5;
jmp_71a8:
	CG_DrawBigString(local_58, local_5c, 0x5438, 0x3f800000);
jmp_71b5:
	CG_DrawDisconnect();
jmp_71b8:
}

/*
=================
CG_CenterPrint

Address: 0x71ba
Stack Size: 0x1c
Calls: Q_strncpyz
Called by: CG_ServerCommand, CG_MapRestart, CG_UseItem, CG_Obituary
=================
*/
void CG_CenterPrint(int arg_0, int arg_1, int arg_2) {
	int		local_14;
	int		local_18;

	Q_strncpyz(0xde5e4, arg_0, 0x400);
	bss_de5d8 = bss_dc760;
	bss_de5e0 = arg_1;
	bss_de5dc = arg_2;
	bss_de9e4 = 0x1;
	local_14 = 0xde5e4;
	goto jmp_71f0;
jmp_71d9:
	if ((char)*(char *)local_14 != 0xa) goto jmp_71ea;
	local_18 = 0xde9e4;
	*(int *)local_18 = (*(int *)local_18 + 0x1);
jmp_71ea:
	local_14 = (local_14 + 0x1);
jmp_71f0:
	if ((char)*(char *)local_14 != 0x0) goto jmp_71d9;
}

/*
=================
CG_DrawCenterString

Address: 0x71f8
Stack Size: 0x454
Calls: trap_R_SetColor, CG_DrawStringExt, CG_DrawStrlen, CG_FadeColor
Called by: CG_Draw2D, CG_DrawIntermission
=================
*/
void CG_DrawCenterString(void) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	char	local_48[1024];
	int		local_448;
	int		local_44c;
	int		local_450;

	if (bss_de5d8 != 0x0) goto jmp_71ff;
	goto jmp_72cc;
jmp_71ff:
	local_44 = CG_FadeColor(bss_de5d8, (int)(0x447a0000 * bss_d1c4));
	local_40 = local_44;
	if (local_40 != 0x0) goto jmp_7216;
	goto jmp_72cc;
jmp_7216:
	trap_R_SetColor(local_40);
	local_2c = 0xde5e4;
	local_34 = (bss_de5e0 - ((bss_de9e4 << 0x4) / 0x2));
	goto jmp_72c5;
jmp_722c:
	local_30 = 0x0;
jmp_722f:
	local_448 = (char)*(char *)(local_30 + local_2c);
	if (local_448 == 0x0) goto jmp_7240;
	if (local_448 != 0xa) goto jmp_7242;
jmp_7240:
	goto jmp_7257;
jmp_7242:
	*(char *)(local_30 + local_48) = *(char *)(local_30 + local_2c);
	local_30 = (local_30 + 0x1);
	if (local_30 < 0x32) goto jmp_722f;
jmp_7257:
	*(char *)(local_30 + local_48) = 0x0;
	local_448 = CG_DrawStrlen(local_48);
	local_3c = (bss_de5dc * local_448);
	local_38 = ((0x280 - local_3c) / 0x2);
#define next_call_arg_0 "local_38"
#define next_call_arg_1 "local_34"
#define next_call_arg_2 "local_48"
#define next_call_arg_3 "local_40"
	local_44c = 0x0;
#define next_call_arg_4 "local_44c"
#define next_call_arg_5 "0x1"
#define next_call_arg_6 "bss_de5dc"
#define next_call_arg_7 "(int)(0x3fc00000 * (float)bss_de5dc)"
#define next_call_arg_8 "local_44c"
	CG_DrawStringExt();
	local_34 = (int)((float)local_34 + (0x3fc00000 * (float)bss_de5dc));
	goto jmp_72a9;
jmp_72a3:
	local_2c = (local_2c + 0x1);
jmp_72a9:
	local_450 = (char)*(char *)local_2c;
	if (local_450 == 0x0) goto jmp_72b7;
	if (local_450 != 0xa) goto jmp_72a3;
jmp_72b7:
	if ((char)*(char *)local_2c != 0x0) goto jmp_72bf;
	goto jmp_72c7;
jmp_72bf:
	local_2c = (local_2c + 0x1);
jmp_72c5:
	goto jmp_722c;
jmp_72c7:
	trap_R_SetColor(0x0);
jmp_72cc:
}

/*
=================
CG_DrawCrosshair

Address: 0x72ce
Stack Size: 0x64
Calls: trap_R_DrawStretchPic, trap_R_SetColor, CG_AdjustFrom640, CG_ColorForHealth
Called by: CG_Draw2D
=================
*/
void CG_DrawCrosshair(void) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	char	local_48[8];
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;

	if (bss_c1d8 != 0x0) goto jmp_72d5;
	goto jmp_73aa;
jmp_72d5:
	if (*(int *)(bss_c2330 + 0x130) != 0x3) goto jmp_72de;
	goto jmp_73aa;
jmp_72de:
	if (bss_dc778 == 0x0) goto jmp_72e4;
	goto jmp_73aa;
jmp_72e4:
	if (bss_b958 == 0x0) goto jmp_72f4;
	CG_ColorForHealth(local_48);
	trap_R_SetColor(local_48);
	goto jmp_72f9;
jmp_72f4:
	trap_R_SetColor(0x0);
jmp_72f9:
	*(int *)local_48 = bss_ba64;
	local_30 = *(int *)local_48;
	local_2c = *(int *)local_48;
	local_34 = (float)(bss_dc760 - bss_deaf0);
	if (local_34 <= 0x0) goto jmp_732f;
	if (local_34 >= 0x43480000) goto jmp_732f;
	local_34 = (local_34 / 0x43480000);
	local_50 = (local_34 + 0x3f800000);
	local_2c = (local_2c * local_50);
	local_30 = (local_30 * local_50);
jmp_732f:
	local_3c = (float)bss_bc88;
	local_40 = (float)bss_bb78;
	CG_AdjustFrom640(&local_3c, &local_40, &local_2c, &local_30);
	local_38 = bss_c1d8;
	if (local_38 >= 0x0) goto jmp_734f;
	local_38 = 0x0;
jmp_734f:
	local_44 = *(int *)(((local_38 %% 0xa) << 0x2) + 0x1041fc);
	local_50 = 0x3f000000;
	local_54 = local_2c;
#define next_call_arg_0 "((local_3c + (float)bss_dccf4) + (local_50 * ((float)bss_dccfc - local_54)))"
	local_58 = local_30;
#define next_call_arg_1 "((local_40 + (float)bss_dccf8) + (local_50 * ((float)bss_dcd00 - local_58)))"
#define next_call_arg_2 "local_54"
#define next_call_arg_3 "local_58"
	local_5c = 0x0;
#define next_call_arg_4 "local_5c"
#define next_call_arg_5 "local_5c"
	local_60 = 0x3f800000;
#define next_call_arg_6 "local_60"
#define next_call_arg_7 "local_60"
#define next_call_arg_8 "local_44"
	trap_R_DrawStretchPic();
	trap_R_SetColor(0x0);
jmp_73aa:
}

/*
=================
CG_DrawCrosshair3D

Address: 0x73ac
Stack Size: 0x1ac
Calls: trap_R_AddRefEntityToScene, memset, trap_Cvar_VariableStringBuffer, CG_Trace, tan, atof
Called by: CG_DrawActive
=================
*/
void CG_DrawCrosshair3D(void) {
	int		local_24;
	char	local_28[64];
	char	local_68[44];
	char	local_94[20];
	char	local_a8[8];
	char	local_b0[128];
	int		local_130;
	int		local_134;
	int		local_138;
	int		local_13c;
	int		local_140;
	int		local_144;
	int		local_148;
	char	local_14c[8];
	int		local_154;
	char	local_158[44];
	int		local_184;
	int		local_188;
	int		local_18c;
	char	local_190[8];
	int		local_198;
	int		local_19c;
	char	local_1a0[8];
	int		local_1a8;

	if (bss_c1d8 != 0x0) goto jmp_73b3;
	goto jmp_74a7;
jmp_73b3:
	if (*(int *)(bss_c2330 + 0x130) != 0x3) goto jmp_73bc;
	goto jmp_74a7;
jmp_73bc:
	if (bss_dc778 == 0x0) goto jmp_73c2;
	goto jmp_74a7;
jmp_73c2:
	local_188 = bss_ba64;
	local_138 = (float)(bss_dc760 - bss_deaf0);
	if (local_138 <= 0x0) goto jmp_73e5;
	if (local_138 >= 0x43480000) goto jmp_73e5;
	local_138 = (local_138 / 0x43480000);
	local_188 = (local_188 * (local_138 + 0x3f800000));
jmp_73e5:
	local_148 = bss_c1d8;
	if (local_148 >= 0x0) goto jmp_73f0;
	local_148 = 0x0;
jmp_73f0:
	local_18c = *(int *)(((local_148 %% 0xa) << 0x2) + 0x1041fc);
	trap_Cvar_VariableStringBuffer(0x5430, local_b0, 0x80);
	local_198 = atof(local_b0);
	local_130 = local_198;
	trap_Cvar_VariableStringBuffer(0x541d, local_b0, 0x80);
	local_19c = atof(local_b0);
	*(int *)local_190 = (local_130 / local_19c);
	*(int *)local_1a0 = tan(((0x40490fdb * bss_dcd04) / 0x43b40000));
	local_184 = (local_130 * *(int *)local_1a0);
	local_134 = ((((float)bss_e66c4 * *(int *)local_190) * local_130) / (0x40000000 * local_184));
	local_13c = (bss_dcd0c + (bss_dcd18 * local_134));
	local_140 = (bss_dcd10 + (bss_dcd1c * local_134));
	local_144 = (bss_dcd14 + (bss_dcd20 * local_134));
#define next_call_arg_0 "local_14c"
#define next_call_arg_1 "0xdcd0c"
	local_1a8 = 0x0;
#define next_call_arg_2 "local_1a8"
#define next_call_arg_3 "local_1a8"
#define next_call_arg_4 "&local_13c"
#define next_call_arg_5 "0x0"
#define next_call_arg_6 "0x6000001"
	CG_Trace();
	memset(&local_24, 0x0, 0x8c);
	local_24 = 0x2;
	*(int *)local_28 = 0x18;
	block_copy(local_158, local_68, 0xc);
	*(int *)local_a8 = (((((local_188 / 0x44200000) * local_184) * local_154) * local_134) / local_130);
	*(int *)local_94 = local_18c;
	trap_R_AddRefEntityToScene(&local_24);
jmp_74a7:
}

/*
=================
CG_ScanForCrosshairEntity

Address: 0x74a9
Stack Size: 0x84
Calls: CG_PointContents, CG_Trace
Called by: CG_DrawCrosshairNames
=================
*/
void CG_ScanForCrosshairEntity(void) {
	char	local_24[12];
	char	local_30[40];
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;

	block_copy(&bss_dcd0c, &local_5c, 0xc);
	local_78 = 0x48000000;
	local_68 = (local_5c + (local_78 * bss_dcd18));
	local_6c = (local_60 + (local_78 * bss_dcd1c));
	local_70 = (local_64 + (0x48000000 * bss_dcd20));
#define next_call_arg_0 "local_24"
#define next_call_arg_1 "&local_5c"
	local_7c = 0x1d5c;
#define next_call_arg_2 "local_7c"
#define next_call_arg_3 "local_7c"
#define next_call_arg_4 "&local_68"
#define next_call_arg_5 "*(int *)(bss_c2330 + 0xb8)"
#define next_call_arg_6 "0x2000001"
	CG_Trace();
	if (local_58 < 0x40) goto jmp_74ed;
	goto jmp_7516;
jmp_74ed:
	local_80 = CG_PointContents(local_30, 0x0);
	local_74 = local_80;
	if ((local_74 & 0x40) == 0x0) goto jmp_7501;
	goto jmp_7516;
jmp_7501:
	if ((*(int *)((0x2cc * local_58) + 0xf3c8) & 0x10) == 0x0) goto jmp_750e;
	goto jmp_7516;
jmp_750e:
	bss_de9ec = local_58;
	bss_de9f0 = bss_dc760;
jmp_7516:
}

/*
=================
CG_DrawCrosshairNames

Address: 0x7518
Stack Size: 0x2c
Calls: trap_R_SetColor, CG_DrawBigString, CG_DrawStrlen, CG_FadeColor, CG_ScanForCrosshairEntity
Called by: CG_Draw2D
=================
*/
void CG_DrawCrosshairNames(void) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	if (bss_c1d8 != 0x0) goto jmp_751f;
	goto jmp_7579;
jmp_751f:
	if (bss_c0c8 != 0x0) goto jmp_7525;
	goto jmp_7579;
jmp_7525:
	if (bss_dc778 == 0x0) goto jmp_752b;
	goto jmp_7579;
jmp_752b:
	CG_ScanForCrosshairEntity();
	local_24 = CG_FadeColor(bss_de9f0, 0x3e8);
	local_18 = local_24;
	if (local_18 != 0x0) goto jmp_7546;
	trap_R_SetColor(0x0);
	goto jmp_7579;
jmp_7546:
	local_1c = ((0x6b4 * bss_de9ec) + 0xe8c28);
	local_28 = CG_DrawStrlen(local_1c);
	local_20 = (float)(local_28 << 0x4);
	CG_DrawBigString((int)(0x43a00000 - (local_20 / 0x40000000)), 0xaa, local_1c, (0x3f000000 * *(int *)(local_18 + 0xc)));
	trap_R_SetColor(0x0);
jmp_7579:
}

/*
=================
CG_DrawSpectator

Address: 0x757b
Stack Size: 0x18
Calls: CG_DrawBigString
Called by: CG_Draw2D
=================
*/
void CG_DrawSpectator(void) {

	CG_DrawBigString(0xf8, 0x1b8, 0x5413, 0x3f800000);
	if (bss_e66f8 != 0x1) goto jmp_7598;
	CG_DrawBigString(0xc8, 0x1cc, 0x5403, 0x3f800000);
	goto jmp_75a7;
jmp_7598:
	if (bss_e66f8 < 0x3) goto jmp_75a7;
	CG_DrawBigString(0x8, 0x1cc, 0x53db, 0x3f800000);
jmp_75a7:
}

/*
=================
CG_DrawVote

Address: 0x75a9
Stack Size: 0x28
Calls: trap_S_StartLocalSound, CG_DrawSmallString, va
Called by: CG_Draw2D
=================
*/
void CG_DrawVote(void) {
	int		local_1c;
	int		local_20;
	int		local_24;

	if (bss_e67d4 != 0x0) goto jmp_75b0;
	goto jmp_75f2;
jmp_75b0:
	if (bss_e67e0 == 0x0) goto jmp_75bf;
	bss_e67e0 = 0x0;
	trap_S_StartLocalSound(bss_1043e4, 0x6);
jmp_75bf:
	local_1c = ((0x7530 - (bss_dc760 - bss_e67d4)) / 0x3e8);
	if (local_1c >= 0x0) goto jmp_75d1;
	local_1c = 0x0;
jmp_75d1:
	local_24 = va(0x53c2, local_1c, 0xe67e4, bss_e67d8, bss_e67dc);
	local_20 = local_24;
	CG_DrawSmallString(0x0, 0x3a, local_20, 0x3f800000);
jmp_75f2:
}

/*
=================
CG_DrawTeamVote

Address: 0x75f4
Stack Size: 0x34
Calls: trap_S_StartLocalSound, CG_DrawSmallString, va
Called by: CG_Draw2D
=================
*/
void CG_DrawTeamVote(void) {
	int		local_1c;
	int		local_20;
	char	local_24[8];
	int		local_2c;
	int		local_30;

	if (*(int *)((0x6b4 * bss_c2310) + 0xe8c68) != 0x1) goto jmp_7603;
	local_1c = 0x0;
	goto jmp_760f;
jmp_7603:
	if (*(int *)((0x6b4 * bss_c2310) + 0xe8c68) != 0x2) goto jmp_767c;
	local_1c = 0x1;
jmp_760f:
	if (*(int *)((local_1c << 0x2) + 0xe6be4) != 0x0) goto jmp_761a;
	goto jmp_767c;
jmp_761a:
	if (*(int *)((local_1c << 0x2) + 0xe6bfc) == 0x0) goto jmp_7633;
	*(int *)((local_1c << 0x2) + 0xe6bfc) = 0x0;
	trap_S_StartLocalSound(bss_1043e4, 0x6);
jmp_7633:
	local_20 = ((0x7530 - (bss_dc760 - *(int *)((local_1c << 0x2) + 0xe6be4))) / 0x3e8);
	if (local_20 >= 0x0) goto jmp_764a;
	local_20 = 0x0;
jmp_764a:
#define next_call_arg_0 "0x53a5"
#define next_call_arg_1 "local_20"
#define next_call_arg_2 "((local_1c << 0xa) + 0xe6c04)"
	local_2c = (local_1c << 0x2);
#define next_call_arg_3 "*(int *)(local_2c + 0xe6bec)"
#define next_call_arg_4 "*(int *)(local_2c + 0xe6bf4)"
	local_30 = va();
	*(int *)local_24 = local_30;
	CG_DrawSmallString(0x0, 0x5a, *(int *)local_24, 0x3f800000);
jmp_767c:
}

/*
=================
CG_DrawScoreboard

Address: 0x767e
Stack Size: 0xc
Calls: CG_DrawOldScoreboard
Called by: CG_Draw2D, CG_DrawIntermission
=================
*/
int CG_DrawScoreboard(void) {
	int		local_8;

	local_8 = CG_DrawOldScoreboard();
	return local_8;
}

/*
=================
CG_DrawIntermission

Address: 0x7688
Stack Size: 0xc
Calls: CG_DrawScoreboard, CG_DrawCenterString
Called by: CG_Draw2D
=================
*/
void CG_DrawIntermission(void) {
	int		local_8;

	if (bss_e66f8 != 0x2) goto jmp_7692;
	CG_DrawCenterString();
	goto jmp_769e;
jmp_7692:
	bss_de198 = bss_dc760;
	local_8 = CG_DrawScoreboard();
	bss_de194 = local_8;
jmp_769e:
}

/*
=================
CG_DrawFollow

Address: 0x76a0
Stack Size: 0x50
Calls: CG_DrawStringExt, CG_DrawStrlen, CG_DrawBigString
Called by: CG_Draw2D
=================
*/
int CG_DrawFollow(void) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;

	if ((*(int *)(bss_c2330 + 0x38) & 0x1000) != 0x0) goto jmp_76ae;
	return 0x0;
jmp_76ae:
	local_44 = 0x3f800000;
	local_2c = local_44;
	local_30 = local_44;
	local_34 = 0x3f800000;
	local_38 = 0x3f800000;
	CG_DrawBigString(0xf8, 0x18, 0x539b, 0x3f800000);
	local_3c = ((0x6b4 * *(int *)(bss_c2330 + 0xb8)) + 0xe8c28);
	local_48 = CG_DrawStrlen(local_3c);
	local_40 = (0x3f000000 * (float)(0x280 - (local_48 << 0x5)));
#define next_call_arg_0 "(int)local_40"
#define next_call_arg_1 "0x28"
#define next_call_arg_2 "local_3c"
#define next_call_arg_3 "&local_2c"
	local_4c = 0x1;
#define next_call_arg_4 "local_4c"
#define next_call_arg_5 "local_4c"
#define next_call_arg_6 "0x20"
#define next_call_arg_7 "0x30"
#define next_call_arg_8 "0x0"
	CG_DrawStringExt();
	return 0x1;
}

/*
=================
CG_DrawAmmoWarning

Address: 0x7708
Stack Size: 0x24
Calls: CG_DrawBigString, CG_DrawStrlen
Called by: CG_Draw2D
=================
*/
void CG_DrawAmmoWarning(void) {
	int		local_18;
	int		local_1c;
	int		local_20;

	if (bss_c2e8 != 0x0) goto jmp_770f;
	goto jmp_773f;
jmp_770f:
	if (bss_de9e8 != 0x0) goto jmp_7715;
	goto jmp_773f;
jmp_7715:
	if (bss_de9e8 != 0x2) goto jmp_771e;
	local_18 = 0x538f;
	goto jmp_7721;
jmp_771e:
	local_18 = 0x537e;
jmp_7721:
	local_20 = CG_DrawStrlen(local_18);
	local_1c = (local_20 << 0x4);
	CG_DrawBigString((0x140 - (local_1c / 0x2)), 0x40, local_18, 0x3f800000);
jmp_773f:
}

/*
=================
CG_DrawWarmup

Address: 0x7741
Stack Size: 0x64
Calls: trap_S_StartLocalSound, CG_DrawStringExt, va, CG_DrawBigString, CG_DrawStrlen
Called by: CG_Draw2D
=================
*/
void CG_DrawWarmup(void) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	char	local_58[8];
	int		local_60;

	local_30 = bss_deae0;
	if (local_30 != 0x0) goto jmp_774c;
	goto jmp_793d;
jmp_774c:
	if (local_30 >= 0x0) goto jmp_7776;
	local_34 = 0x536a;
	local_48 = CG_DrawStrlen(local_34);
	local_3c = (local_48 << 0x4);
	CG_DrawBigString((0x140 - (local_3c / 0x2)), 0x18, local_34, 0x3f800000);
	bss_deae4 = 0x0;
	goto jmp_793d;
jmp_7776:
	if (bss_e66f8 != 0x1) goto jmp_782f;
	local_48 = 0x0;
	local_40 = local_48;
	local_44 = local_48;
	local_2c = 0x0;
	goto jmp_77bf;
jmp_778a:
	local_4c = (0x6b4 * local_2c);
	local_50 = 0x0;
	if (*(int *)(local_4c + 0xe8c24) == local_50) goto jmp_77b9;
	if (*(int *)(local_4c + 0xe8c68) != local_50) goto jmp_77b9;
	if (local_40 != 0x0) goto jmp_77b1;
	local_40 = ((0x6b4 * local_2c) + 0xe8c24);
	goto jmp_77b9;
jmp_77b1:
	local_44 = ((0x6b4 * local_2c) + 0xe8c24);
jmp_77b9:
	local_2c = (local_2c + 0x1);
jmp_77bf:
	if (local_2c < bss_e6710) goto jmp_778a;
	local_4c = 0x0;
	if (local_40 == local_4c) goto jmp_7890;
	if (local_44 == local_4c) goto jmp_7890;
#define next_call_arg_0 "0x5361"
	local_50 = 0x4;
#define next_call_arg_1 "(local_40 + local_50)"
#define next_call_arg_2 "(local_44 + local_50)"
	local_54 = va();
	local_34 = local_54;
	*(int *)local_58 = CG_DrawStrlen(local_34);
	local_3c = *(int *)local_58;
	if (local_3c <= 0x14) goto jmp_7801;
	local_38 = (0x280 / local_3c);
	goto jmp_7804;
jmp_7801:
	local_38 = 0x20;
jmp_7804:
#define next_call_arg_0 "(0x140 - ((local_3c * local_38) / 0x2))"
#define next_call_arg_1 "0x14"
#define next_call_arg_2 "local_34"
#define next_call_arg_3 "0x1dfc"
	local_60 = 0x0;
#define next_call_arg_4 "local_60"
#define next_call_arg_5 "0x1"
#define next_call_arg_6 "local_38"
#define next_call_arg_7 "(int)(0x3fc00000 * (float)local_38)"
#define next_call_arg_8 "local_60"
	CG_DrawStringExt();
	goto jmp_7890;
jmp_782f:
	if (bss_e66f8 != 0x0) goto jmp_7838;
	local_34 = 0x5354;
	goto jmp_784d;
jmp_7838:
	if (bss_e66f8 != 0x3) goto jmp_7841;
	local_34 = 0x5344;
	goto jmp_784d;
jmp_7841:
	if (bss_e66f8 != 0x4) goto jmp_784a;
	local_34 = 0x5333;
	goto jmp_784d;
jmp_784a:
	local_34 = 0x5332;
jmp_784d:
	local_48 = CG_DrawStrlen(local_34);
	local_3c = local_48;
	if (local_3c <= 0x14) goto jmp_7864;
	local_38 = (0x280 / local_3c);
	goto jmp_7867;
jmp_7864:
	local_38 = 0x20;
jmp_7867:
#define next_call_arg_0 "(0x140 - ((local_3c * local_38) / 0x2))"
#define next_call_arg_1 "0x19"
#define next_call_arg_2 "local_34"
#define next_call_arg_3 "0x1dfc"
	local_50 = 0x0;
#define next_call_arg_4 "local_50"
#define next_call_arg_5 "0x1"
#define next_call_arg_6 "local_38"
#define next_call_arg_7 "(int)(0x3f8ccccd * (float)local_38)"
#define next_call_arg_8 "local_50"
	CG_DrawStringExt();
jmp_7890:
	local_30 = ((local_30 - bss_dc760) / 0x3e8);
	if (local_30 >= 0x0) goto jmp_78a3;
	bss_deae0 = 0x0;
	local_30 = 0x0;
jmp_78a3:
	local_48 = va(0x5324, (local_30 + 0x1));
	local_34 = local_48;
	if (local_30 == bss_deae4) goto jmp_78e5;
	bss_deae4 = local_30;
	if (local_30 == 0x0) goto jmp_78c9;
	if (local_30 == 0x1) goto jmp_78d3;
	if (local_30 == 0x2) goto jmp_78dd;
	goto jmp_78e5;
jmp_78c9:
	trap_S_StartLocalSound(bss_1044bc, 0x7);
	goto jmp_78e5;
jmp_78d3:
	trap_S_StartLocalSound(bss_1044b8, 0x7);
	goto jmp_78e5;
jmp_78dd:
	trap_S_StartLocalSound(bss_1044b4, 0x7);
jmp_78e5:
	local_4c = bss_deae4;
	if (local_4c == 0x0) goto jmp_78f7;
	if (local_4c == 0x1) goto jmp_78fc;
	if (local_4c == 0x2) goto jmp_7901;
	goto jmp_7906;
jmp_78f7:
	local_38 = 0x1c;
	goto jmp_7909;
jmp_78fc:
	local_38 = 0x18;
	goto jmp_7909;
jmp_7901:
	local_38 = 0x14;
	goto jmp_7909;
jmp_7906:
	local_38 = 0x10;
jmp_7909:
	local_50 = CG_DrawStrlen(local_34);
	local_3c = local_50;
#define next_call_arg_0 "(0x140 - ((local_3c * local_38) / 0x2))"
#define next_call_arg_1 "0x46"
#define next_call_arg_2 "local_34"
#define next_call_arg_3 "0x1dfc"
	*(int *)local_58 = 0x0;
#define next_call_arg_4 "*(int *)local_58"
#define next_call_arg_5 "0x1"
#define next_call_arg_6 "local_38"
#define next_call_arg_7 "(int)(0x3fc00000 * (float)local_38)"
#define next_call_arg_8 "*(int *)local_58"
	CG_DrawStringExt();
jmp_793d:
}

/*
=================
CG_Draw2D

Address: 0x793f
Stack Size: 0x14
Calls: CG_DrawCenterString, CG_DrawScoreboard, CG_DrawWarmup, CG_DrawFollow, CG_DrawLowerLeft, CG_DrawLowerRight, CG_DrawUpperRight, CG_DrawLagometer, CG_DrawTeamVote, CG_DrawVote, CG_DrawTeamInfo, CG_DrawReward, CG_DrawHoldableItem, CG_DrawWeaponSelect, CG_DrawAmmoWarning, CG_DrawStatusBar, CG_DrawCrosshairNames, CG_DrawCrosshair, CG_DrawSpectator, CG_DrawIntermission
Called by: CG_DrawActive
=================
*/
void CG_Draw2D(int arg_0) {
	int		local_c;
	int		local_10;

	if (bss_c2318 == 0x0) goto jmp_7946;
	goto jmp_79cd;
jmp_7946:
	if (bss_b738 != 0x0) goto jmp_794c;
	goto jmp_79cd;
jmp_794c:
	if (*(int *)(bss_c2330 + 0x30) != 0x5) goto jmp_7958;
	CG_DrawIntermission();
	goto jmp_79cd;
jmp_7958:
	if (*(int *)(bss_c2330 + 0x130) != 0x3) goto jmp_796e;
	CG_DrawSpectator();
	if (arg_0 != 0x0) goto jmp_7969;
	CG_DrawCrosshair();
jmp_7969:
	CG_DrawCrosshairNames();
	goto jmp_7997;
jmp_796e:
	local_c = 0x0;
	if (bss_de190 != local_c) goto jmp_7997;
	if (*(int *)(bss_c2330 + 0xe4) <= local_c) goto jmp_7997;
	CG_DrawStatusBar();
	CG_DrawAmmoWarning();
	if (arg_0 != 0x0) goto jmp_798b;
	CG_DrawCrosshair();
jmp_798b:
	CG_DrawCrosshairNames();
	CG_DrawWeaponSelect();
	CG_DrawHoldableItem();
	CG_DrawReward();
jmp_7997:
	if (bss_e66f8 < 0x3) goto jmp_799e;
	CG_DrawTeamInfo();
jmp_799e:
	CG_DrawVote();
	CG_DrawTeamVote();
	CG_DrawLagometer();
	CG_DrawUpperRight(arg_0);
	CG_DrawLowerRight();
	CG_DrawLowerLeft();
	local_c = CG_DrawFollow();
	if (local_c != 0x0) goto jmp_79be;
	CG_DrawWarmup();
jmp_79be:
	local_10 = CG_DrawScoreboard();
	bss_de194 = local_10;
	if (bss_de194 != 0x0) goto jmp_79cd;
	CG_DrawCenterString();
jmp_79cd:
}

/*
=================
CG_DrawActive

Address: 0x79cf
Stack Size: 0xc
Calls: trap_R_RenderScene, CG_Draw2D, CG_DrawCrosshair3D, CG_TileClear, CG_DrawTourneyScoreboard, CG_DrawInformation
Called by: CG_DrawActiveFrame
=================
*/
void CG_DrawActive(int arg_0) {

	if (bss_c2330 != 0x0) goto jmp_79d9;
	CG_DrawInformation();
	goto jmp_7a03;
jmp_79d9:
	if (*(int *)(bss_c2330 + 0x130) != 0x3) goto jmp_79ee;
	if ((*(int *)(bss_c2330 + 0x38) & 0x2000) == 0x0) goto jmp_79ee;
	CG_DrawTourneyScoreboard();
	goto jmp_7a03;
jmp_79ee:
	CG_TileClear();
	if (arg_0 == 0x0) goto jmp_79f8;
	CG_DrawCrosshair3D();
jmp_79f8:
	trap_R_RenderScene(0xdccf4);
	CG_Draw2D(arg_0);
jmp_7a03:
}

/*
=================
CG_AdjustFrom640

Address: 0x7a05
Stack Size: 0x18
Called by: CG_DrawChar, CG_DrawPic, CG_DrawTopBottom, CG_DrawSides, CG_FillRect, CG_DrawCrosshair, CG_DrawLagometer, CG_Draw3DModel
=================
*/
void CG_AdjustFrom640(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	local_8 = arg_0;
	*(int *)local_8 = (*(int *)local_8 * bss_e66e0);
	local_c = arg_1;
	*(int *)local_c = (*(int *)local_c * bss_e66e4);
	local_10 = arg_2;
	*(int *)local_10 = (*(int *)local_10 * bss_e66e0);
	local_14 = arg_3;
	*(int *)local_14 = (*(int *)local_14 * bss_e66e4);
}

/*
=================
CG_FillRect

Address: 0x7a3c
Stack Size: 0x30
Calls: trap_R_DrawStretchPic, trap_R_SetColor, CG_AdjustFrom640
Called by: CG_DrawTourneyScoreboard, CG_DrawClientScore, CG_DrawScores
=================
*/
void CG_FillRect(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_2c;

	trap_R_SetColor(arg_4);
	CG_AdjustFrom640(&arg_0, &arg_1, &arg_2, &arg_3);
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "arg_3"
	local_2c = 0x0;
#define next_call_arg_4 "local_2c"
#define next_call_arg_5 "local_2c"
#define next_call_arg_6 "local_2c"
#define next_call_arg_7 "local_2c"
#define next_call_arg_8 "bss_10413c"
	trap_R_DrawStretchPic();
	trap_R_SetColor(0x0);
}

/*
=================
CG_DrawSides

Address: 0x7a76
Stack Size: 0x38
Calls: trap_R_DrawStretchPic, CG_AdjustFrom640
Called by: CG_DrawRect
=================
*/
void CG_DrawSides(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	char	local_2c[8];
	int		local_34;

	arg_4 = arg_4;
	CG_AdjustFrom640(&arg_0, &arg_1, &arg_2, &arg_3);
	arg_4 = (arg_4 * bss_e66e0);
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_4"
#define next_call_arg_3 "arg_3"
	*(int *)local_2c = 0x0;
#define next_call_arg_4 "*(int *)local_2c"
#define next_call_arg_5 "*(int *)local_2c"
#define next_call_arg_6 "*(int *)local_2c"
#define next_call_arg_7 "*(int *)local_2c"
#define next_call_arg_8 "bss_10413c"
	trap_R_DrawStretchPic();
#define next_call_arg_0 "((arg_0 + arg_2) - arg_4)"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_4"
#define next_call_arg_3 "arg_3"
	local_34 = 0x0;
#define next_call_arg_4 "local_34"
#define next_call_arg_5 "local_34"
#define next_call_arg_6 "local_34"
#define next_call_arg_7 "local_34"
#define next_call_arg_8 "bss_10413c"
	trap_R_DrawStretchPic();
}

/*
=================
CG_DrawTopBottom

Address: 0x7ad7
Stack Size: 0x38
Calls: trap_R_DrawStretchPic, CG_AdjustFrom640
Called by: CG_DrawRect
=================
*/
void CG_DrawTopBottom(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	char	local_2c[8];
	int		local_34;

	arg_4 = arg_4;
	CG_AdjustFrom640(&arg_0, &arg_1, &arg_2, &arg_3);
	arg_4 = (arg_4 * bss_e66e4);
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "arg_4"
	*(int *)local_2c = 0x0;
#define next_call_arg_4 "*(int *)local_2c"
#define next_call_arg_5 "*(int *)local_2c"
#define next_call_arg_6 "*(int *)local_2c"
#define next_call_arg_7 "*(int *)local_2c"
#define next_call_arg_8 "bss_10413c"
	trap_R_DrawStretchPic();
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "((arg_1 + arg_3) - arg_4)"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "arg_4"
	local_34 = 0x0;
#define next_call_arg_4 "local_34"
#define next_call_arg_5 "local_34"
#define next_call_arg_6 "local_34"
#define next_call_arg_7 "local_34"
#define next_call_arg_8 "bss_10413c"
	trap_R_DrawStretchPic();
}

/*
=================
CG_DrawRect

Address: 0x7b38
Stack Size: 0x20
Calls: trap_R_SetColor, CG_DrawSides, CG_DrawTopBottom
=================
*/
void CG_DrawRect(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {

	arg_4 = arg_4;
	trap_R_SetColor(arg_5);
	CG_DrawTopBottom(arg_0, arg_1, arg_2, arg_3, arg_4);
	CG_DrawSides(arg_0, (arg_1 + arg_4), arg_2, (arg_3 - (0x40000000 * arg_4)), arg_4);
	trap_R_SetColor(0x0);
}

/*
=================
CG_DrawPic

Address: 0x7b76
Stack Size: 0x34
Calls: trap_R_DrawStretchPic, CG_AdjustFrom640
Called by: CG_DrawWeaponSelect, CG_DrawOldScoreboard, CG_DrawClientScore, CG_DrawInformation, CG_DrawLoadingIcons, CG_DrawLagometer, CG_DrawDisconnect, CG_DrawReward, CG_DrawHoldableItem, CG_DrawTeamInfo, CG_DrawPickupItem, CG_DrawPowerups, CG_DrawScores, CG_DrawTeamOverlay, CG_DrawStatusBar, CG_DrawTeamBackground, CG_DrawFlagModel, CG_DrawHead, CG_DrawField
=================
*/
void CG_DrawPic(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_2c;
	int		local_30;

	CG_AdjustFrom640(&arg_0, &arg_1, &arg_2, &arg_3);
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "arg_3"
	local_2c = 0x0;
#define next_call_arg_4 "local_2c"
#define next_call_arg_5 "local_2c"
	local_30 = 0x3f800000;
#define next_call_arg_6 "local_30"
#define next_call_arg_7 "local_30"
#define next_call_arg_8 "arg_4"
	trap_R_DrawStretchPic();
}

/*
=================
CG_DrawChar

Address: 0x7ba8
Stack Size: 0x64
Calls: trap_R_DrawStretchPic, CG_AdjustFrom640
Called by: CG_DrawStringExt
=================
*/
void CG_DrawChar(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	char	local_4c[8];
	char	local_54[16];

	arg_4 = arg_4;
	arg_4 = (arg_4 & 0xff);
	if (arg_4 != 0x20) goto jmp_7bb9;
	goto jmp_7c1e;
jmp_7bb9:
	local_38 = (float)arg_0;
	local_3c = (float)arg_1;
	local_40 = (float)arg_2;
	local_44 = (float)arg_3;
	CG_AdjustFrom640(&local_38, &local_3c, &local_40, &local_44);
	local_48 = (arg_4 >> 0x4);
	*(int *)local_4c = (arg_4 & 0xf);
	*(int *)local_54 = 0x3d800000;
	local_2c = (*(int *)local_54 * (float)local_48);
	local_30 = (*(int *)local_54 * (float)*(int *)local_4c);
	local_34 = 0x3d800000;
	trap_R_DrawStretchPic(local_38, local_3c, local_40, local_44, local_30, local_2c, (local_30 + local_34), (local_2c + local_34), bss_10412c);
jmp_7c1e:
}

/*
=================
CG_DrawStringExt

Address: 0x7c20
Stack Size: 0x48
Calls: memcpy, trap_R_SetColor, CG_DrawChar, Q_IsColorString
Called by: CG_DrawTourneyScoreboard, CG_CenterGiantLine, CG_DrawSmallStringColor, CG_DrawSmallString, CG_DrawBigStringColor, CG_DrawBigString, CG_DrawWarmup, CG_DrawFollow, CG_DrawCenterString, CG_DrawReward, CG_DrawTeamInfo, CG_DrawTeamOverlay
=================
*/
void CG_DrawStringExt(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7, int arg_8) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;

	arg_1 = arg_1;
	arg_3 = arg_3;
	arg_4 = arg_4;
	arg_6 = arg_6;
	arg_7 = arg_7;
	arg_8 = arg_8;
	if (arg_8 > 0x0) goto jmp_7c40;
	arg_8 = 0x7fff;
jmp_7c40:
	if (arg_5 == 0x0) goto jmp_7cbf;
	local_38 = 0x0;
	local_30 = local_38;
	local_2c = local_38;
	local_28 = local_38;
	local_34 = *(int *)(arg_3 + 0xc);
	trap_R_SetColor(&local_28);
	local_1c = arg_2;
	local_20 = arg_0;
	local_24 = 0x0;
	goto jmp_7cb4;
jmp_7c6c:
	local_3c = Q_IsColorString(local_1c);
	if (local_3c == 0x0) goto jmp_7c7f;
	local_1c = (local_1c + 0x2);
	goto jmp_7cb4;
jmp_7c7f:
	local_40 = 0x2;
	CG_DrawChar((local_20 + local_40), (arg_1 + local_40), arg_6, arg_7, (char)*(char *)local_1c);
	local_44 = 0x1;
	local_24 = (local_24 + local_44);
	local_20 = (local_20 + arg_6);
	local_1c = (local_1c + local_44);
jmp_7cb4:
	if ((char)*(char *)local_1c == 0x0) goto jmp_7cbf;
	if (local_24 < arg_8) goto jmp_7c6c;
jmp_7cbf:
	local_1c = arg_2;
	local_20 = arg_0;
	local_24 = 0x0;
	trap_R_SetColor(arg_3);
	goto jmp_7d37;
jmp_7cd2:
	local_38 = Q_IsColorString(local_1c);
	if (local_38 == 0x0) goto jmp_7d0b;
	if (arg_4 != 0x0) goto jmp_7d03;
	memcpy(&local_28, (((((char)*(char *)(local_1c + 0x1) - 0x30) & 0x7) << 0x4) + 0x1e3c), 0x10);
	local_34 = *(int *)(arg_3 + 0xc);
	trap_R_SetColor(&local_28);
jmp_7d03:
	local_1c = (local_1c + 0x2);
	goto jmp_7d37;
jmp_7d0b:
	CG_DrawChar(local_20, arg_1, arg_6, arg_7, (char)*(char *)local_1c);
	local_20 = (local_20 + arg_6);
	local_3c = 0x1;
	local_24 = (local_24 + local_3c);
	local_1c = (local_1c + local_3c);
jmp_7d37:
	if ((char)*(char *)local_1c == 0x0) goto jmp_7d42;
	if (local_24 < arg_8) goto jmp_7cd2;
jmp_7d42:
	trap_R_SetColor(0x0);
}

/*
=================
CG_DrawBigString

Address: 0x7d49
Stack Size: 0x48
Calls: CG_DrawStringExt
Called by: CG_DrawOldScoreboard, CG_DrawClientScore, CG_DrawWarmup, CG_DrawAmmoWarning, CG_DrawFollow, CG_DrawSpectator, CG_DrawCrosshairNames, CG_DrawLagometer, CG_DrawDisconnect, CG_DrawPickupItem, CG_DrawScores, CG_DrawTimer, CG_DrawFPS, CG_DrawSnapshot, CG_DrawAttacker
=================
*/
void CG_DrawBigString(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;

	local_3c = 0x3f800000;
	local_34 = local_3c;
	local_30 = local_3c;
	local_2c = local_3c;
	local_38 = arg_3;
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "&local_2c"
	local_40 = 0x0;
#define next_call_arg_4 "local_40"
#define next_call_arg_5 "0x1"
	local_44 = 0x10;
#define next_call_arg_6 "local_44"
#define next_call_arg_7 "local_44"
#define next_call_arg_8 "local_40"
	CG_DrawStringExt();
}

/*
=================
CG_DrawBigStringColor

Address: 0x7d81
Stack Size: 0x34
Calls: CG_DrawStringExt
Called by: CG_DrawWeaponSelect, CG_DrawClientScore
=================
*/
void CG_DrawBigStringColor(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_2c;
	int		local_30;

#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "arg_3"
	local_2c = 0x1;
#define next_call_arg_4 "local_2c"
#define next_call_arg_5 "local_2c"
	local_30 = 0x10;
#define next_call_arg_6 "local_30"
#define next_call_arg_7 "local_30"
#define next_call_arg_8 "0x0"
	CG_DrawStringExt();
}

/*
=================
CG_DrawSmallString

Address: 0x7da7
Stack Size: 0x44
Calls: CG_DrawStringExt
Called by: CG_DrawTeamVote, CG_DrawVote
=================
*/
void CG_DrawSmallString(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;

	local_3c = 0x3f800000;
	local_34 = local_3c;
	local_30 = local_3c;
	local_2c = local_3c;
	local_38 = arg_3;
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "&local_2c"
	local_40 = 0x0;
#define next_call_arg_4 "local_40"
#define next_call_arg_5 "local_40"
#define next_call_arg_6 "0x8"
#define next_call_arg_7 "0x10"
#define next_call_arg_8 "local_40"
	CG_DrawStringExt();
}

/*
=================
CG_DrawSmallStringColor

Address: 0x7ddb
Stack Size: 0x30
Calls: CG_DrawStringExt
Called by: CG_DrawClientScore
=================
*/
void CG_DrawSmallStringColor(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_2c;

#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "arg_3"
#define next_call_arg_4 "0x1"
	local_2c = 0x0;
#define next_call_arg_5 "local_2c"
#define next_call_arg_6 "0x8"
#define next_call_arg_7 "0x10"
#define next_call_arg_8 "local_2c"
	CG_DrawStringExt();
}

/*
=================
CG_DrawStrlen

Address: 0x7dfc
Stack Size: 0x1c
Calls: Q_IsColorString
Called by: CG_DrawWeaponSelect, CG_CenterGiantLine, CG_DrawOldScoreboard, CG_DrawWarmup, CG_DrawAmmoWarning, CG_DrawFollow, CG_DrawCrosshairNames, CG_DrawCenterString, CG_DrawDisconnect, CG_DrawReward, CG_DrawScores, CG_DrawTeamOverlay, CG_DrawTimer, CG_DrawFPS, CG_DrawSnapshot
=================
*/
int CG_DrawStrlen(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;

	local_c = arg_0;
	local_10 = 0x0;
	goto jmp_7e2a;
jmp_7e06:
	local_14 = Q_IsColorString(local_c);
	if (local_14 == 0x0) goto jmp_7e19;
	local_c = (local_c + 0x2);
	goto jmp_7e2a;
jmp_7e19:
	local_18 = 0x1;
	local_10 = (local_10 + local_18);
	local_c = (local_c + local_18);
jmp_7e2a:
	if ((char)*(char *)local_c != 0x0) goto jmp_7e06;
	return local_10;
}

/*
=================
CG_TileClearBox

Address: 0x7e35
Stack Size: 0x58
Calls: trap_R_DrawStretchPic
Called by: CG_TileClear
=================
*/
void CG_TileClearBox(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[8];
	int		local_40;
	char	local_44[8];
	int		local_4c;
	int		local_50;
	int		local_54;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_40 = (float)arg_0;
	*(int *)local_44 = 0x42800000;
	local_2c = (local_40 / *(int *)local_44);
	local_4c = (float)arg_1;
	local_30 = (local_4c / *(int *)local_44);
	local_50 = arg_2;
	local_34 = ((float)(arg_0 + local_50) / *(int *)local_44);
	local_54 = arg_3;
	*(int *)local_38 = ((float)(arg_1 + local_54) / *(int *)local_44);
	trap_R_DrawStretchPic(local_40, local_4c, (float)local_50, (float)local_54, local_2c, local_30, local_34, *(int *)local_38, arg_4);
}

/*
=================
CG_TileClear

Address: 0x7e99
Stack Size: 0x54
Calls: CG_TileClearBox
Called by: CG_DrawActive
=================
*/
void CG_TileClear(void) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	char	local_34[8];
	int		local_3c;
	char	local_40[20];

	local_24 = bss_e66c4;
	local_30 = bss_e66c8;
	*(int *)local_34 = 0x0;
	if (bss_dccf4 != *(int *)local_34) goto jmp_7ebb;
	if (bss_dccf8 != *(int *)local_34) goto jmp_7ebb;
	if (bss_dccfc != local_24) goto jmp_7ebb;
	if (bss_dcd00 != local_30) goto jmp_7ebb;
	goto jmp_7f33;
jmp_7ebb:
	local_1c = bss_dccf8;
	local_3c = 0x1;
	local_20 = ((local_1c + bss_dcd00) - local_3c);
	local_28 = bss_dccf4;
	local_2c = ((local_28 + bss_dccfc) - local_3c);
	*(int *)local_40 = 0x0;
	CG_TileClearBox(*(int *)local_40, *(int *)local_40, local_24, local_1c, bss_104228);
	CG_TileClearBox(0x0, local_20, local_24, (local_30 - local_20), bss_104228);
	CG_TileClearBox(0x0, local_1c, local_28, ((local_20 - local_1c) + 0x1), bss_104228);
	CG_TileClearBox(local_2c, local_1c, (local_24 - local_2c), ((local_20 - local_1c) + 0x1), bss_104228);
jmp_7f33:
}

/*
=================
CG_FadeColor

Address: 0x7f35
Stack Size: 0x10
Called by: CG_DrawWeaponSelect, CG_DrawOldScoreboard, CG_DrawCrosshairNames, CG_DrawCenterString, CG_DrawReward, CG_DrawPickupItem
=================
*/
int CG_FadeColor(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;

	if (arg_0 != 0x0) goto jmp_7f3e;
	return 0x0;
jmp_7f3e:
	local_8 = (bss_dc760 - arg_0);
	if (local_8 < arg_1) goto jmp_7f4e;
	return 0x0;
jmp_7f4e:
	if ((arg_1 - local_8) >= 0xc8) goto jmp_7f63;
	bss_104f2c = ((0x3f800000 * (float)(arg_1 - local_8)) / 0x43480000);
	goto jmp_7f66;
jmp_7f63:
	bss_104f2c = 0x3f800000;
jmp_7f66:
	local_c = 0x3f800000;
	bss_104f28 = local_c;
	bss_104f24 = local_c;
	bss_104f20 = local_c;
	return 0x104f20;
}

/*
=================
CG_TeamColor

Address: 0x7f79
Stack Size: 0xc
=================
*/
int CG_TeamColor(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	if (local_8 == 0x1) goto jmp_7f8c;
	if (local_8 == 0x2) goto jmp_7f90;
	if (local_8 == 0x3) goto jmp_7f94;
	goto jmp_7f98;
jmp_7f8c:
	return 0x10a8;
jmp_7f90:
	return 0x10b8;
jmp_7f94:
	return 0x10d8;
jmp_7f98:
	return 0x10c8;
}

/*
=================
CG_GetColorForHealth

Address: 0x7f9c
Stack Size: 0x18
Called by: CG_ColorForHealth, CG_DrawTeamOverlay
=================
*/
void CG_GetColorForHealth(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	char	local_c[8];
	int		local_14;

	arg_0 = arg_0;
	arg_2 = arg_2;
	if (arg_0 > 0x0) goto jmp_7fc7;
	local_14 = 0x0;
	*(int *)(arg_2 + 0x8) = local_14;
	*(int *)(arg_2 + 0x4) = local_14;
	*(int *)arg_2 = local_14;
	*(int *)(arg_2 + 0xc) = 0x3f800000;
	goto jmp_8037;
jmp_7fc7:
	local_8 = arg_1;
	*(int *)local_c = (int)((0x3f28f5c3 * (float)arg_0) / 0x3eae147b);
	if (*(int *)local_c >= local_8) goto jmp_7fde;
	local_8 = *(int *)local_c;
jmp_7fde:
	arg_0 = (arg_0 + local_8);
	*(int *)arg_2 = 0x3f800000;
	*(int *)(arg_2 + 0xc) = 0x3f800000;
	if (arg_0 < 0x64) goto jmp_7ffb;
	*(int *)(arg_2 + 0x8) = 0x3f800000;
	goto jmp_8013;
jmp_7ffb:
	if (arg_0 >= 0x42) goto jmp_8007;
	*(int *)(arg_2 + 0x8) = 0x0;
	goto jmp_8013;
jmp_8007:
	*(int *)(arg_2 + 0x8) = ((float)(arg_0 - 0x42) / 0x42040000);
jmp_8013:
	if (arg_0 <= 0x3c) goto jmp_801f;
	*(int *)(arg_2 + 0x4) = 0x3f800000;
	goto jmp_8037;
jmp_801f:
	if (arg_0 >= 0x1e) goto jmp_802b;
	*(int *)(arg_2 + 0x4) = 0x0;
	goto jmp_8037;
jmp_802b:
	*(int *)(arg_2 + 0x4) = ((float)(arg_0 - 0x1e) / 0x41f00000);
jmp_8037:
}

/*
=================
CG_ColorForHealth

Address: 0x8039
Stack Size: 0x14
Calls: CG_GetColorForHealth
Called by: CG_DrawCrosshair, CG_DrawStatusBar
=================
*/
void CG_ColorForHealth(int arg_0) {

	CG_GetColorForHealth(*(int *)(bss_c2330 + 0xe4), *(int *)(bss_c2330 + 0xf0), arg_0);
}

/*
=================
UI_DrawBannerString2

Address: 0x804e
Stack Size: 0x68
Calls: trap_R_DrawStretchPic, trap_R_SetColor
Called by: UI_DrawBannerString
=================
*/
void UI_DrawBannerString2(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	char	local_5c[12];

	trap_R_SetColor(arg_3);
	local_34 = (((float)arg_0 * bss_e66e0) + bss_e66e8);
	local_50 = ((float)arg_1 * bss_e66e4);
	local_30 = arg_2;
	goto jmp_810b;
jmp_806e:
	*(char *)&local_2c = ((char)*(char *)local_30 & 0x7f);
	if (*(char *)&local_2c != 0x20) goto jmp_8085;
	local_34 = (local_34 + (0x41800000 * bss_e66e0));
	goto jmp_8105;
jmp_8085:
	local_54 = *(char *)&local_2c;
	if (local_54 < 0x41) goto jmp_8105;
	if (local_54 > 0x5a) goto jmp_8105;
	*(char *)&local_2c = (*(char *)&local_2c - 0x41);
	local_58 = (0xc * *(char *)&local_2c);
	*(int *)local_5c = 0x43800000;
	local_40 = ((float)*(int *)(local_58 + 0x16e8) / *(int *)local_5c);
	local_3c = ((float)*(int *)(local_58 + 0x16ec) / *(int *)local_5c);
	local_48 = ((float)*(int *)(local_58 + 0x16f0) / *(int *)local_5c);
	local_4c = 0x3e100000;
	local_38 = ((float)*(int *)(local_58 + 0x16f0) * bss_e66e0);
	local_44 = (0x42100000 * bss_e66e4);
	trap_R_DrawStretchPic(local_34, local_50, local_38, local_44, local_40, local_3c, (local_40 + local_48), (local_3c + local_4c), bss_104138);
	local_34 = (local_34 + (local_38 + (0x40800000 * bss_e66e0)));
jmp_8105:
	local_30 = (local_30 + 0x1);
jmp_810b:
	if ((char)*(char *)local_30 != 0x0) goto jmp_806e;
	trap_R_SetColor(0x0);
}

/*
=================
UI_DrawBannerString

Address: 0x8118
Stack Size: 0x44
Calls: UI_DrawBannerString2
=================
*/
void UI_DrawBannerString(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	char	local_34[8];
	int		local_3c;
	int		local_40;

	local_1c = arg_2;
	local_20 = 0x0;
	goto jmp_8150;
jmp_8122:
	local_18 = (char)*(char *)local_1c;
	if (local_18 != 0x20) goto jmp_8134;
	local_20 = (local_20 + 0xc);
	goto jmp_814a;
jmp_8134:
	if (local_18 < 0x41) goto jmp_814a;
	if (local_18 > 0x5a) goto jmp_814a;
	local_20 = (local_20 + (*(int *)((0xc * local_18) + 0x13e4) + 0x4));
jmp_814a:
	local_1c = (local_1c + 0x1);
jmp_8150:
	if ((char)*(char *)local_1c != 0x0) goto jmp_8122;
	local_20 = (local_20 - 0x4);
	*(int *)local_34 = (arg_3 & 0x7);
	if (*(int *)local_34 == 0x0) goto jmp_8182;
	if (*(int *)local_34 == 0x1) goto jmp_8170;
	if (*(int *)local_34 == 0x2) goto jmp_817b;
	goto jmp_8182;
jmp_8170:
	arg_0 = (arg_0 - (local_20 / 0x2));
	goto jmp_8182;
jmp_817b:
	arg_0 = (arg_0 - local_20);
jmp_8182:
	if ((arg_3 & 0x800) == 0x0) goto jmp_81b5;
	local_3c = 0x0;
	local_2c = local_3c;
	local_28 = local_3c;
	local_24 = local_3c;
	local_30 = *(int *)(arg_4 + 0xc);
	local_40 = 0x2;
	UI_DrawBannerString2((arg_0 + local_40), (arg_1 + local_40), arg_2, &local_24);
jmp_81b5:
	UI_DrawBannerString2(arg_0, arg_1, arg_2, arg_4);
}

/*
=================
UI_ProportionalStringWidth

Address: 0x81c6
Stack Size: 0x18
Called by: UI_DrawProportionalString
=================
*/
int UI_ProportionalStringWidth(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	local_8 = arg_0;
	local_14 = 0x0;
	goto jmp_81f8;
jmp_81d0:
	local_10 = ((char)*(char *)local_8 & 0x7f);
	local_c = *(int *)((0xc * local_10) + 0x10f0);
	if (local_c == 0xffffffff) goto jmp_81f2;
	local_14 = (local_14 + local_c);
	local_14 = (local_14 + 0x3);
jmp_81f2:
	local_8 = (local_8 + 0x1);
jmp_81f8:
	if ((char)*(char *)local_8 != 0x0) goto jmp_81d0;
	local_14 = (local_14 - 0x3);
	return local_14;
}

/*
=================
UI_DrawProportionalString2

Address: 0x8209
Stack Size: 0x68
Calls: trap_R_DrawStretchPic, trap_R_SetColor
Called by: UI_DrawProportionalString
=================
*/
void UI_DrawProportionalString2(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	char	local_58[16];

	arg_4 = arg_4;
	trap_R_SetColor(arg_3);
	local_38 = (((float)arg_0 * bss_e66e0) + bss_e66e8);
	local_50 = ((float)arg_1 * bss_e66e4);
	local_30 = arg_2;
	goto jmp_82cf;
jmp_822d:
	*(char *)&local_2c = ((char)*(char *)local_30 & 0x7f);
	if (*(char *)&local_2c != 0x20) goto jmp_8244;
	local_34 = ((0x41000000 * bss_e66e0) * arg_4);
	goto jmp_82ba;
jmp_8244:
	if (*(int *)((0xc * *(char *)&local_2c) + 0x10f0) == 0xffffffff) goto jmp_82b7;
	local_54 = (0xc * *(char *)&local_2c);
	*(int *)local_58 = 0x43800000;
	local_40 = ((float)*(int *)(local_54 + 0x10e8) / *(int *)local_58);
	local_3c = ((float)*(int *)(local_54 + 0x10ec) / *(int *)local_58);
	local_48 = ((float)*(int *)(local_54 + 0x10f0) / *(int *)local_58);
	local_4c = 0x3dd80000;
	local_34 = (((float)*(int *)(local_54 + 0x10f0) * bss_e66e0) * arg_4);
	local_44 = ((0x41d80000 * bss_e66e4) * arg_4);
	trap_R_DrawStretchPic(local_38, local_50, local_34, local_44, local_40, local_3c, (local_40 + local_48), (local_3c + local_4c), arg_5);
	goto jmp_82ba;
jmp_82b7:
	local_34 = 0x0;
jmp_82ba:
	local_38 = (local_38 + (local_34 + ((0x40400000 * bss_e66e0) * arg_4)));
	local_30 = (local_30 + 0x1);
jmp_82cf:
	if ((char)*(char *)local_30 != 0x0) goto jmp_822d;
	trap_R_SetColor(0x0);
}

/*
=================
UI_ProportionalSizeScale

Address: 0x82dc
Stack Size: 0x8
Called by: UI_DrawProportionalString
=================
*/
int UI_ProportionalSizeScale(int arg_0) {

	if ((arg_0 & 0x10) == 0x0) goto jmp_82e7;
	return 0x3f400000;
jmp_82e7:
	return 0x3f800000;
}

/*
=================
UI_DrawProportionalString

Address: 0x82eb
Stack Size: 0x54
Calls: sin, UI_DrawProportionalString2, UI_ProportionalStringWidth, UI_ProportionalSizeScale
Called by: CG_DrawInformation
=================
*/
void UI_DrawProportionalString(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	char	local_3c[8];
	int		local_44;
	char	local_48[8];
	int		local_50;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	arg_4 = arg_4;
	local_38 = UI_ProportionalSizeScale(arg_3);
	local_30 = local_38;
	*(int *)local_3c = (arg_3 & 0x7);
	if (*(int *)local_3c == 0x0) goto jmp_8351;
	if (*(int *)local_3c == 0x1) goto jmp_831f;
	if (*(int *)local_3c == 0x2) goto jmp_833a;
	goto jmp_8351;
jmp_831f:
	local_44 = UI_ProportionalStringWidth(arg_2);
	local_34 = (int)((float)local_44 * local_30);
	arg_0 = (arg_0 - (local_34 / 0x2));
	goto jmp_8351;
jmp_833a:
	*(int *)local_48 = UI_ProportionalStringWidth(arg_2);
	local_34 = (int)((float)*(int *)local_48 * local_30);
	arg_0 = (arg_0 - local_34);
jmp_8351:
	if ((arg_3 & 0x800) == 0x0) goto jmp_838a;
	local_44 = 0x0;
	local_28 = local_44;
	local_24 = local_44;
	local_20 = local_44;
	local_2c = *(int *)(arg_4 + 0xc);
	*(int *)local_48 = 0x2;
	UI_DrawProportionalString2((arg_0 + *(int *)local_48), (arg_1 + *(int *)local_48), arg_2, &local_20, local_30, bss_104130);
jmp_838a:
	if ((arg_3 & 0x2000) == 0x0) goto jmp_83cb;
	local_44 = 0x3f4ccccd;
	local_20 = (local_44 * *(int *)arg_4);
	local_24 = (local_44 * *(int *)(arg_4 + 0x4));
	local_28 = (0x3f4ccccd * *(int *)(arg_4 + 0x8));
	local_2c = *(int *)(arg_4 + 0xc);
	UI_DrawProportionalString2(arg_0, arg_1, arg_2, &local_20, local_30, bss_104130);
	goto jmp_845b;
jmp_83cb:
	if ((arg_3 & 0x4000) == 0x0) goto jmp_8446;
	local_44 = 0x3f4ccccd;
	local_20 = (local_44 * *(int *)arg_4);
	local_24 = (local_44 * *(int *)(arg_4 + 0x4));
	local_28 = (0x3f4ccccd * *(int *)(arg_4 + 0x8));
	local_2c = *(int *)(arg_4 + 0xc);
	UI_DrawProportionalString2(arg_0, arg_1, arg_2, arg_4, local_30, bss_104130);
	local_20 = *(int *)arg_4;
	local_24 = *(int *)(arg_4 + 0x4);
	local_28 = *(int *)(arg_4 + 0x8);
	local_50 = sin((float)(bss_dc760 / 0x4b));
	local_2c = ((0x3f000000 * local_50) + 0x3f000000);
	UI_DrawProportionalString2(arg_0, arg_1, arg_2, &local_20, local_30, bss_104134);
	goto jmp_845b;
jmp_8446:
	UI_DrawProportionalString2(arg_0, arg_1, arg_2, arg_4, local_30, bss_104130);
jmp_845b:
}

/*
=================
CG_BubbleTrail

Address: 0x845d
Stack Size: 0x6c
Calls: CG_AllocLocalEntity, rand, VectorNormalize
Called by: CG_Bullet, CG_ShotgunPellet, CG_RocketTrail
=================
*/
void CG_BubbleTrail(int arg_0, int arg_1, int arg_2) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[12];
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	char	local_44[8];
	int		local_4c;
	int		local_50;
	int		local_54;
	char	local_58[8];
	int		local_60;
	int		local_64;
	int		local_68;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	if (bss_7dd8 == 0x0) goto jmp_8470;
	goto jmp_85f9;
jmp_8470:
	block_copy(arg_0, &local_c, 0xc);
	local_18 = (*(int *)arg_1 - *(int *)arg_0);
	local_34 = 0x4;
	local_1c = (*(int *)(arg_1 + local_34) - *(int *)(arg_0 + local_34));
	local_38 = 0x8;
	local_20 = (*(int *)(arg_1 + local_38) - *(int *)(arg_0 + local_38));
	local_3c = VectorNormalize(&local_18);
	*(int *)local_28 = local_3c;
	local_40 = rand();
	local_24 = (local_40 %% (int)arg_2);
	*(int *)local_44 = (float)local_24;
	local_c = (local_c + (local_18 * *(int *)local_44));
	local_10 = (local_10 + (local_1c * *(int *)local_44));
	local_14 = (local_14 + (local_20 * (float)local_24));
	local_18 = (local_18 * arg_2);
	local_1c = (local_1c * arg_2);
	local_20 = (local_20 * arg_2);
	goto jmp_85f3;
jmp_84f2:
	local_54 = CG_AllocLocalEntity();
	local_4c = local_54;
	*(int *)(local_4c + 0xc) = 0x1;
	*(int *)(local_4c + 0x8) = 0x4;
	*(int *)(local_4c + 0x10) = bss_dc760;
	*(int *)local_58 = rand();
	*(int *)(local_4c + 0x14) = (int)((float)(bss_dc760 + 0x3e8) + (0x437a0000 * ((float)(*(int *)local_58 & 0x7fff) / 0x46fffe00)));
	*(int *)(local_4c + 0x1c) = (0x3f800000 / (float)(*(int *)(local_4c + 0x14) - *(int *)(local_4c + 0x10)));
	local_50 = (local_4c + 0x98);
	*(int *)(local_50 + 0x80) = ((float)bss_dc760 / 0x447a0000);
	*(int *)local_50 = 0x2;
	*(int *)(local_50 + 0x88) = 0x0;
	*(int *)(local_50 + 0x84) = 0x40400000;
	*(int *)(local_50 + 0x70) = bss_104240;
	*(char *)(local_50 + 0x74) = 0xff;
	*(char *)(local_50 + 0x75) = 0xff;
	*(char *)(local_50 + 0x76) = 0xff;
	*(char *)(local_50 + 0x77) = 0xff;
	*(int *)(local_4c + 0x78) = 0x3f800000;
	*(int *)(local_4c + 0x20) = 0x2;
	*(int *)(local_4c + 0x24) = bss_dc760;
	block_copy(&local_c, (local_4c + 0x2c), 0xc);
	local_60 = rand();
	*(int *)(local_4c + 0x38) = (0x40a00000 * (0x40000000 * (((float)(local_60 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_64 = rand();
	*(int *)(local_4c + 0x3c) = (0x40a00000 * (0x40000000 * (((float)(local_64 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_68 = rand();
	*(int *)(local_4c + 0x40) = ((0x40a00000 * (0x40000000 * (((float)(local_68 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x40c00000);
	local_c = (local_c + local_18);
	local_10 = (local_10 + local_1c);
	local_14 = (local_14 + local_20);
	local_24 = (int)((float)local_24 + arg_2);
jmp_85f3:
	if ((float)local_24 < *(int *)local_28) goto jmp_84f2;
jmp_85f9:
}

/*
=================
CG_SmokePuff

Address: 0x85fb
Stack Size: 0x40
Calls: Q_random, CG_AllocLocalEntity
Called by: CG_ShotgunFire, CG_RocketTrail, CG_HasteTrail, CG_BloodTrail, CG_EntityEvent
=================
*/
int CG_SmokePuff(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7, int arg_8, int arg_9, int arg_10, int arg_11) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;

	arg_8 = arg_8;
	local_14 = CG_AllocLocalEntity();
	local_c = local_14;
	*(int *)(local_c + 0xc) = arg_10;
	*(int *)(local_c + 0x7c) = arg_2;
	local_10 = (local_c + 0x98);
	local_18 = Q_random(0x1820);
	*(int *)(local_10 + 0x88) = (0x43b40000 * local_18);
	*(int *)(local_10 + 0x84) = arg_2;
	*(int *)(local_10 + 0x80) = ((float)arg_8 / 0x447a0000);
	*(int *)(local_c + 0x8) = 0x4;
	*(int *)(local_c + 0x10) = arg_8;
	*(int *)(local_c + 0x18) = arg_9;
	*(int *)(local_c + 0x14) = (int)((float)arg_8 + arg_7);
	if (arg_9 <= arg_8) goto jmp_8676;
	*(int *)(local_c + 0x1c) = (0x3f800000 / (float)(*(int *)(local_c + 0x14) - *(int *)(local_c + 0x18)));
	goto jmp_8689;
jmp_8676:
	*(int *)(local_c + 0x1c) = (0x3f800000 / (float)(*(int *)(local_c + 0x14) - *(int *)(local_c + 0x10)));
jmp_8689:
	*(int *)(local_c + 0x6c) = arg_3;
	*(int *)(local_c + 0x70) = arg_4;
	*(int *)(local_c + 0x74) = arg_5;
	*(int *)(local_c + 0x78) = arg_6;
	*(int *)(local_c + 0x20) = 0x2;
	*(int *)(local_c + 0x24) = arg_8;
	block_copy(arg_1, (local_c + 0x38), 0xc);
	block_copy(arg_0, (local_c + 0x2c), 0xc);
	block_copy(arg_0, (local_10 + 0x44), 0xc);
	*(int *)(local_10 + 0x70) = arg_11;
	if (bss_e66b4 != 0x3) goto jmp_86f3;
	*(int *)(local_10 + 0x70) = bss_104234;
	*(char *)(local_10 + 0x74) = 0xff;
	*(char *)(local_10 + 0x75) = 0xff;
	*(char *)(local_10 + 0x76) = 0xff;
	*(char *)(local_10 + 0x77) = 0xff;
	goto jmp_8774;
jmp_86f3:
	local_20 = (0x437f0000 * *(int *)(local_c + 0x6c));
	local_24 = 0x4f000000;
	if (local_20 < local_24) goto jmp_8710;
	local_1c = ((int)(local_20 - local_24) + 0x80000000);
	goto jmp_8715;
jmp_8710:
	local_1c = (int)local_20;
jmp_8715:
	*(char *)(local_10 + 0x74) = local_1c;
	local_2c = (0x437f0000 * *(int *)(local_c + 0x70));
	local_30 = 0x4f000000;
	if (local_2c < local_30) goto jmp_8739;
	local_28 = ((int)(local_2c - local_30) + 0x80000000);
	goto jmp_873e;
jmp_8739:
	local_28 = (int)local_2c;
jmp_873e:
	*(char *)(local_10 + 0x75) = local_28;
	local_38 = (0x437f0000 * *(int *)(local_c + 0x74));
	local_3c = 0x4f000000;
	if (local_38 < local_3c) goto jmp_8762;
	local_34 = ((int)(local_38 - local_3c) + 0x80000000);
	goto jmp_8767;
jmp_8762:
	local_34 = (int)local_38;
jmp_8767:
	*(char *)(local_10 + 0x76) = local_34;
	*(char *)(local_10 + 0x77) = 0xff;
jmp_8774:
	*(int *)local_10 = 0x2;
	*(int *)(local_10 + 0x84) = *(int *)(local_c + 0x7c);
	return local_c;
}

/*
=================
CG_SpawnEffect

Address: 0x8787
Stack Size: 0x28
Calls: AxisClear, CG_AllocLocalEntity
Called by: CG_EntityEvent
=================
*/
void CG_SpawnEffect(int arg_0) {
	int		local_c;
	int		local_10;
	char	local_14[12];
	int		local_20;
	int		local_24;

	*(int *)local_14 = CG_AllocLocalEntity();
	local_c = *(int *)local_14;
	*(int *)(local_c + 0xc) = 0x0;
	*(int *)(local_c + 0x8) = 0x6;
	*(int *)(local_c + 0x10) = bss_dc760;
	*(int *)(local_c + 0x14) = (bss_dc760 + 0x1f4);
	*(int *)(local_c + 0x1c) = (0x3f800000 / (float)(*(int *)(local_c + 0x14) - *(int *)(local_c + 0x10)));
	local_20 = 0x3f800000;
	*(int *)(local_c + 0x78) = local_20;
	*(int *)(local_c + 0x74) = local_20;
	*(int *)(local_c + 0x70) = local_20;
	*(int *)(local_c + 0x6c) = local_20;
	local_10 = (local_c + 0x98);
	*(int *)local_10 = 0x0;
	*(int *)(local_10 + 0x80) = ((float)bss_dc760 / 0x447a0000);
	*(int *)(local_10 + 0x70) = bss_1042f4;
	*(int *)(local_10 + 0x8) = bss_1042f0;
	AxisClear((local_10 + 0x1c));
	block_copy(arg_0, (local_10 + 0x44), 0xc);
	local_24 = (local_10 + 0x4c);
	*(int *)local_24 = (*(int *)local_24 - 0x41c00000);
}

/*
=================
CG_ScorePlum

Address: 0x881f
Stack Size: 0x44
Calls: AnglesToAxis, CG_AllocLocalEntity
Called by: CG_EntityEvent
=================
*/
void CG_ScorePlum(int arg_0, int arg_1, int arg_2) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[12];
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;

	arg_1 = arg_1;
	if (arg_0 != bss_dc80c) goto jmp_882d;
	if (bss_8878 != 0x0) goto jmp_882f;
jmp_882d:
	goto jmp_88ee;
jmp_882f:
	local_24 = CG_AllocLocalEntity();
	local_10 = local_24;
	*(int *)(local_10 + 0xc) = 0x0;
	*(int *)local_28 = 0x8;
	*(int *)(local_10 + *(int *)local_28) = *(int *)local_28;
	*(int *)(local_10 + 0x10) = bss_dc760;
	*(int *)(local_10 + 0x14) = (bss_dc760 + 0xfa0);
	*(int *)(local_10 + 0x1c) = (0x3f800000 / (float)(*(int *)(local_10 + 0x14) - *(int *)(local_10 + 0x10)));
	local_34 = 0x3f800000;
	*(int *)(local_10 + 0x78) = local_34;
	*(int *)(local_10 + 0x74) = local_34;
	*(int *)(local_10 + 0x70) = local_34;
	*(int *)(local_10 + 0x6c) = local_34;
	*(int *)(local_10 + 0x7c) = (float)arg_2;
	block_copy(arg_1, (local_10 + 0x2c), 0xc);
	local_38 = *(int *)(arg_1 + 0x8);
	local_3c = 0x41a00000;
	if (local_38 < (bss_104f38 - local_3c)) goto jmp_88c1;
	if (local_38 > (bss_104f38 + local_3c)) goto jmp_88c1;
	local_40 = (local_10 + 0x34);
	*(int *)local_40 = (*(int *)local_40 - 0x41a00000);
jmp_88c1:
	block_copy(arg_1, bss_104f30, 0xc);
	local_14 = (local_10 + 0x98);
	*(int *)local_14 = 0x2;
	*(int *)(local_14 + 0x84) = 0x41800000;
	local_40 = 0x0;
	local_20 = local_40;
	local_1c = local_40;
	local_18 = local_40;
	AnglesToAxis(&local_18, (local_14 + 0x1c));
jmp_88ee:
}

/*
=================
CG_MakeExplosion

Address: 0x88f0
Stack Size: 0x4c
Calls: RotateAroundDirection, AxisClear, CG_AllocLocalEntity, rand, CG_Error
Called by: CG_MissileHitWall
=================
*/
int CG_MakeExplosion(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;

	if (arg_4 > 0x0) goto jmp_88fd;
	CG_Error(0x54a3, arg_4);
jmp_88fd:
	local_34 = rand();
	local_2c = (local_34 & 0x3f);
	local_38 = CG_AllocLocalEntity();
	local_10 = local_38;
	if (arg_5 == 0x0) goto jmp_896b;
	*(int *)(local_10 + 0x8) = 0x2;
	local_3c = rand();
	*(int *)(local_10 + 0x120) = (float)(local_3c %% 0x168);
	local_40 = 0x41800000;
	local_44 = arg_1;
	local_20 = (local_40 * *(int *)local_44);
	local_24 = (local_40 * *(int *)(local_44 + 0x4));
	local_28 = (0x41800000 * *(int *)(arg_1 + 0x8));
	local_48 = arg_0;
	local_14 = (local_20 + *(int *)local_48);
	local_18 = (local_24 + *(int *)(local_48 + 0x4));
	local_1c = (local_28 + *(int *)(arg_0 + 0x8));
	goto jmp_89a0;
jmp_896b:
	*(int *)(local_10 + 0x8) = 0x1;
	block_copy(arg_0, &local_14, 0xc);
	if (arg_1 != 0x0) goto jmp_8983;
	AxisClear((local_10 + 0xb4));
	goto jmp_89a0;
jmp_8983:
	local_3c = rand();
	local_30 = (float)(local_3c %% 0x168);
	block_copy(arg_1, (local_10 + 0xb4), 0xc);
	RotateAroundDirection((local_10 + 0xb4), local_30);
jmp_89a0:
	*(int *)(local_10 + 0x10) = (bss_dc760 - local_2c);
	*(int *)(local_10 + 0x14) = (*(int *)(local_10 + 0x10) + arg_4);
	*(int *)(local_10 + 0x118) = ((float)*(int *)(local_10 + 0x10) / 0x447a0000);
	*(int *)(local_10 + 0xa0) = arg_2;
	*(int *)(local_10 + 0x108) = arg_3;
	block_copy(&local_14, (local_10 + 0xdc), 0xc);
	block_copy(&local_14, (local_10 + 0xec), 0xc);
	local_48 = 0x3f800000;
	*(int *)(local_10 + 0x74) = local_48;
	*(int *)(local_10 + 0x70) = local_48;
	*(int *)(local_10 + 0x6c) = local_48;
	return local_10;
}

/*
=================
CG_Bleed

Address: 0x89fb
Stack Size: 0x1c
Calls: rand, CG_AllocLocalEntity
Called by: CG_Bullet, CG_MissileHitPlayer
=================
*/
void CG_Bleed(int arg_0, int arg_1) {
	int		local_8;
	char	local_c[8];
	int		local_14;
	int		local_18;

	if (bss_8dc8 != 0x0) goto jmp_8a02;
	goto jmp_8a61;
jmp_8a02:
	*(int *)local_c = CG_AllocLocalEntity();
	local_8 = *(int *)local_c;
	*(int *)(local_8 + 0x8) = 0x1;
	*(int *)(local_8 + 0x10) = bss_dc760;
	*(int *)(local_8 + 0x14) = (*(int *)(local_8 + 0x10) + 0x1f4);
	block_copy(arg_0, (local_8 + 0xdc), 0xc);
	*(int *)(local_8 + 0x98) = 0x2;
	local_14 = rand();
	*(int *)(local_8 + 0x120) = (float)(local_14 %% 0x168);
	*(int *)(local_8 + 0x11c) = 0x41c00000;
	*(int *)(local_8 + 0x108) = bss_1042ec;
	if (arg_1 != *(int *)(bss_c2330 + 0xb8)) goto jmp_8a61;
	local_18 = (local_8 + 0x9c);
	*(int *)local_18 = (*(int *)local_18 | 0x2);
jmp_8a61:
}

/*
=================
CG_LaunchGib

Address: 0x8a63
Stack Size: 0x28
Calls: AxisCopy, rand, CG_AllocLocalEntity
Called by: CG_GibPlayer
=================
*/
void CG_LaunchGib(int arg_0, int arg_1, int arg_2) {
	int		local_10;
	int		local_14;
	char	local_18[8];
	char	local_20[8];

	*(int *)local_18 = CG_AllocLocalEntity();
	local_10 = *(int *)local_18;
	local_14 = (local_10 + 0x98);
	*(int *)(local_10 + 0x8) = 0x3;
	*(int *)(local_10 + 0x10) = bss_dc760;
	*(int *)local_20 = rand();
	*(int *)(local_10 + 0x14) = (int)((float)(*(int *)(local_10 + 0x10) + 0x1388) + (0x453b8000 * ((float)(*(int *)local_20 & 0x7fff) / 0x46fffe00)));
	block_copy(arg_0, (local_14 + 0x44), 0xc);
	AxisCopy(0x1d68, (local_14 + 0x1c));
	*(int *)(local_14 + 0x8) = arg_2;
	*(int *)(local_10 + 0x20) = 0x5;
	block_copy(arg_0, (local_10 + 0x2c), 0xc);
	block_copy(arg_1, (local_10 + 0x38), 0xc);
	*(int *)(local_10 + 0x24) = bss_dc760;
	*(int *)(local_10 + 0x68) = 0x3f19999a;
	*(int *)(local_10 + 0x94) = 0x1;
	*(int *)(local_10 + 0x90) = 0x2;
}

/*
=================
CG_GibPlayer

Address: 0x8ae2
Stack Size: 0xa8
Calls: CG_LaunchGib, rand
Called by: CG_EntityEvent
=================
*/
void CG_GibPlayer(int arg_0) {
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[12];
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;
	int		local_a0;
	int		local_a4;

	arg_0 = arg_0;
	if (bss_8dc8 != 0x0) goto jmp_8aed;
	goto jmp_8de3;
jmp_8aed:
	block_copy(arg_0, local_20, 0xc);
	local_2c = rand();
	local_14 = (0x437a0000 * (0x40000000 * (((float)(local_2c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_30 = rand();
	local_18 = (0x437a0000 * (0x40000000 * (((float)(local_30 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_34 = rand();
	local_1c = ((0x437a0000 * (0x40000000 * (((float)(local_34 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x437a0000);
	local_38 = rand();
	if ((local_38 & 0x1) == 0x0) goto jmp_8b42;
	CG_LaunchGib(local_20, &local_14, bss_1041c4);
	goto jmp_8b4c;
jmp_8b42:
	CG_LaunchGib(local_20, &local_14, bss_1041c8);
jmp_8b4c:
	if (bss_c948 != 0x0) goto jmp_8b52;
	goto jmp_8de3;
jmp_8b52:
	block_copy(arg_0, local_20, 0xc);
	local_3c = rand();
	local_14 = (0x437a0000 * (0x40000000 * (((float)(local_3c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_40 = rand();
	local_18 = (0x437a0000 * (0x40000000 * (((float)(local_40 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_44 = rand();
	local_1c = ((0x437a0000 * (0x40000000 * (((float)(local_44 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x437a0000);
	CG_LaunchGib(local_20, &local_14, bss_1041a4);
	block_copy(arg_0, local_20, 0xc);
	local_48 = rand();
	local_14 = (0x437a0000 * (0x40000000 * (((float)(local_48 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_4c = rand();
	local_18 = (0x437a0000 * (0x40000000 * (((float)(local_4c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_50 = rand();
	local_1c = ((0x437a0000 * (0x40000000 * (((float)(local_50 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x437a0000);
	CG_LaunchGib(local_20, &local_14, bss_1041a8);
	block_copy(arg_0, local_20, 0xc);
	local_54 = rand();
	local_14 = (0x437a0000 * (0x40000000 * (((float)(local_54 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_58 = rand();
	local_18 = (0x437a0000 * (0x40000000 * (((float)(local_58 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_5c = rand();
	local_1c = ((0x437a0000 * (0x40000000 * (((float)(local_5c & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x437a0000);
	CG_LaunchGib(local_20, &local_14, bss_1041ac);
	block_copy(arg_0, local_20, 0xc);
	local_60 = rand();
	local_14 = (0x437a0000 * (0x40000000 * (((float)(local_60 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_64 = rand();
	local_18 = (0x437a0000 * (0x40000000 * (((float)(local_64 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_68 = rand();
	local_1c = ((0x437a0000 * (0x40000000 * (((float)(local_68 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x437a0000);
	CG_LaunchGib(local_20, &local_14, bss_1041b0);
	block_copy(arg_0, local_20, 0xc);
	local_6c = rand();
	local_14 = (0x437a0000 * (0x40000000 * (((float)(local_6c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_70 = rand();
	local_18 = (0x437a0000 * (0x40000000 * (((float)(local_70 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_74 = rand();
	local_1c = ((0x437a0000 * (0x40000000 * (((float)(local_74 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x437a0000);
	CG_LaunchGib(local_20, &local_14, bss_1041b4);
	block_copy(arg_0, local_20, 0xc);
	local_78 = rand();
	local_14 = (0x437a0000 * (0x40000000 * (((float)(local_78 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_7c = rand();
	local_18 = (0x437a0000 * (0x40000000 * (((float)(local_7c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_80 = rand();
	local_1c = ((0x437a0000 * (0x40000000 * (((float)(local_80 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x437a0000);
	CG_LaunchGib(local_20, &local_14, bss_1041b8);
	block_copy(arg_0, local_20, 0xc);
	local_84 = rand();
	local_14 = (0x437a0000 * (0x40000000 * (((float)(local_84 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_88 = rand();
	local_18 = (0x437a0000 * (0x40000000 * (((float)(local_88 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_8c = rand();
	local_1c = ((0x437a0000 * (0x40000000 * (((float)(local_8c & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x437a0000);
	CG_LaunchGib(local_20, &local_14, bss_1041bc);
	block_copy(arg_0, local_20, 0xc);
	local_90 = rand();
	local_14 = (0x437a0000 * (0x40000000 * (((float)(local_90 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_94 = rand();
	local_18 = (0x437a0000 * (0x40000000 * (((float)(local_94 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_98 = rand();
	local_1c = ((0x437a0000 * (0x40000000 * (((float)(local_98 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x437a0000);
	CG_LaunchGib(local_20, &local_14, bss_1041c0);
	block_copy(arg_0, local_20, 0xc);
	local_9c = rand();
	local_14 = (0x437a0000 * (0x40000000 * (((float)(local_9c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_a0 = rand();
	local_18 = (0x437a0000 * (0x40000000 * (((float)(local_a0 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_a4 = rand();
	local_1c = ((0x437a0000 * (0x40000000 * (((float)(local_a4 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x437a0000);
	CG_LaunchGib(local_20, &local_14, bss_1041c0);
jmp_8de3:
}

/*
=================
CG_LaunchExplode

Address: 0x8de5
Stack Size: 0x28
Calls: AxisCopy, rand, CG_AllocLocalEntity
Called by: CG_BigExplode
=================
*/
void CG_LaunchExplode(int arg_0, int arg_1, int arg_2) {
	int		local_10;
	int		local_14;
	char	local_18[8];
	char	local_20[8];

	*(int *)local_18 = CG_AllocLocalEntity();
	local_10 = *(int *)local_18;
	local_14 = (local_10 + 0x98);
	*(int *)(local_10 + 0x8) = 0x3;
	*(int *)(local_10 + 0x10) = bss_dc760;
	*(int *)local_20 = rand();
	*(int *)(local_10 + 0x14) = (int)((float)(*(int *)(local_10 + 0x10) + 0x2710) + (0x45bb8000 * ((float)(*(int *)local_20 & 0x7fff) / 0x46fffe00)));
	block_copy(arg_0, (local_14 + 0x44), 0xc);
	AxisCopy(0x1d68, (local_14 + 0x1c));
	*(int *)(local_14 + 0x8) = arg_2;
	*(int *)(local_10 + 0x20) = 0x5;
	block_copy(arg_0, (local_10 + 0x2c), 0xc);
	block_copy(arg_1, (local_10 + 0x38), 0xc);
	*(int *)(local_10 + 0x24) = bss_dc760;
	*(int *)(local_10 + 0x68) = 0x3dcccccd;
	*(int *)(local_10 + 0x94) = 0x2;
	*(int *)(local_10 + 0x90) = 0x0;
}

/*
=================
CG_BigExplode

Address: 0x8e64
Stack Size: 0x70
Calls: CG_LaunchExplode, rand
=================
*/
void CG_BigExplode(int arg_0) {
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[12];
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;

	arg_0 = arg_0;
	if (bss_8dc8 != 0x0) goto jmp_8e6f;
	goto jmp_8ff2;
jmp_8e6f:
	block_copy(arg_0, local_20, 0xc);
	local_2c = rand();
	local_14 = (0x42c80000 * (0x40000000 * (((float)(local_2c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_30 = rand();
	local_18 = (0x42c80000 * (0x40000000 * (((float)(local_30 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_34 = rand();
	local_1c = ((0x42c80000 * (0x40000000 * (((float)(local_34 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x43160000);
	CG_LaunchExplode(local_20, &local_14, bss_1041cc);
	block_copy(arg_0, local_20, 0xc);
	local_38 = rand();
	local_14 = (0x42c80000 * (0x40000000 * (((float)(local_38 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_3c = rand();
	local_18 = (0x42c80000 * (0x40000000 * (((float)(local_3c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_40 = rand();
	local_1c = ((0x42c80000 * (0x40000000 * (((float)(local_40 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x43160000);
	CG_LaunchExplode(local_20, &local_14, bss_1041cc);
	block_copy(arg_0, local_20, 0xc);
	local_44 = rand();
	local_14 = (0x3fc00000 * (0x42c80000 * (0x40000000 * (((float)(local_44 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	local_48 = rand();
	local_18 = (0x3fc00000 * (0x42c80000 * (0x40000000 * (((float)(local_48 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	local_4c = rand();
	local_1c = ((0x42c80000 * (0x40000000 * (((float)(local_4c & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x43160000);
	CG_LaunchExplode(local_20, &local_14, bss_1041cc);
	block_copy(arg_0, local_20, 0xc);
	local_50 = rand();
	local_54 = 0x40000000;
	local_14 = (local_54 * (0x42c80000 * (local_54 * (((float)(local_50 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	local_58 = rand();
	local_5c = 0x40000000;
	local_18 = (local_5c * (0x42c80000 * (local_5c * (((float)(local_58 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	local_60 = rand();
	local_1c = ((0x42c80000 * (0x40000000 * (((float)(local_60 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x43160000);
	CG_LaunchExplode(local_20, &local_14, bss_1041cc);
	block_copy(arg_0, local_20, 0xc);
	local_64 = rand();
	local_14 = (0x40200000 * (0x42c80000 * (0x40000000 * (((float)(local_64 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	local_68 = rand();
	local_18 = (0x40200000 * (0x42c80000 * (0x40000000 * (((float)(local_68 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	local_6c = rand();
	local_1c = ((0x42c80000 * (0x40000000 * (((float)(local_6c & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x43160000);
	CG_LaunchExplode(local_20, &local_14, bss_1041cc);
jmp_8ff2:
}

/*
=================
CG_PositionEntityOnTag

Address: 0x8ff4
Stack Size: 0x74
Calls: trap_R_LerpTag, MatrixMultiply
Called by: CG_PlayerFlag
=================
*/
void CG_PositionEntityOnTag(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_20;
	char	local_24[12];
	char	local_30[40];
	int		local_58;
	int		local_5c;
	int		local_60;
	char	local_64[8];
	char	local_6c[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	trap_R_LerpTag(local_24, arg_2, *(int *)(arg_1 + 0x60), *(int *)(arg_1 + 0x50), (0x3f800000 - *(int *)(arg_1 + 0x64)), arg_3);
	local_58 = 0x44;
	block_copy((arg_1 + local_58), (arg_0 + local_58), 0xc);
	local_20 = 0x0;
jmp_902d:
	local_5c = (arg_0 + 0x44);
	*(int *)local_5c = (*(int *)local_5c + (*(int *)((0xc * local_20) + (arg_1 + 0x1c)) * *(int *)((local_20 << 0x2) + local_24)));
	*(int *)local_64 = (arg_0 + 0x48);
	*(int *)*(int *)local_64 = (*(int *)*(int *)local_64 + (*(int *)(((0xc * local_20) + (arg_1 + 0x1c)) + 0x4) * *(int *)((local_20 << 0x2) + local_24)));
	*(int *)local_6c = (arg_0 + 0x4c);
	*(int *)*(int *)local_6c = (*(int *)*(int *)local_6c + (*(int *)(((0xc * local_20) + (arg_1 + 0x1c)) + 0x8) * *(int *)((local_20 << 0x2) + local_24)));
	local_20 = (local_20 + 0x1);
	if (local_20 < 0x3) goto jmp_902d;
#define next_call_arg_0 "local_30"
	local_5c = 0x1c;
#define next_call_arg_1 "(arg_1 + local_5c)"
#define next_call_arg_2 "(arg_0 + local_5c)"
	MatrixMultiply();
	local_60 = 0x64;
	*(int *)(arg_0 + local_60) = *(int *)(arg_1 + local_60);
}

/*
=================
CG_PositionRotatedEntityOnTag

Address: 0x90bd
Stack Size: 0x98
Calls: trap_R_LerpTag, MatrixMultiply
Called by: CG_AddPlayerWeapon, CG_Player, CG_PlayerFlag, CG_Item
=================
*/
void CG_PositionRotatedEntityOnTag(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_20;
	char	local_24[12];
	char	local_30[36];
	char	local_54[40];
	int		local_7c;
	char	local_80[8];
	char	local_88[8];
	char	local_90[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	trap_R_LerpTag(local_24, arg_2, *(int *)(arg_1 + 0x60), *(int *)(arg_1 + 0x50), (0x3f800000 - *(int *)(arg_1 + 0x64)), arg_3);
	local_7c = 0x44;
	block_copy((arg_1 + local_7c), (arg_0 + local_7c), 0xc);
	local_20 = 0x0;
jmp_90f6:
	*(int *)local_80 = (arg_0 + 0x44);
	*(int *)*(int *)local_80 = (*(int *)*(int *)local_80 + (*(int *)((0xc * local_20) + (arg_1 + 0x1c)) * *(int *)((local_20 << 0x2) + local_24)));
	*(int *)local_88 = (arg_0 + 0x48);
	*(int *)*(int *)local_88 = (*(int *)*(int *)local_88 + (*(int *)(((0xc * local_20) + (arg_1 + 0x1c)) + 0x4) * *(int *)((local_20 << 0x2) + local_24)));
	*(int *)local_90 = (arg_0 + 0x4c);
	*(int *)*(int *)local_90 = (*(int *)*(int *)local_90 + (*(int *)(((0xc * local_20) + (arg_1 + 0x1c)) + 0x8) * *(int *)((local_20 << 0x2) + local_24)));
	local_20 = (local_20 + 0x1);
	if (local_20 < 0x3) goto jmp_90f6;
	MatrixMultiply((arg_0 + 0x1c), local_30, local_54);
#define next_call_arg_0 "local_54"
	*(int *)local_80 = 0x1c;
#define next_call_arg_1 "(arg_1 + *(int *)local_80)"
#define next_call_arg_2 "(arg_0 + *(int *)local_80)"
	MatrixMultiply();
}

/*
=================
CG_SetEntitySoundPosition

Address: 0x9183
Stack Size: 0x28
Calls: trap_S_UpdateEntityPosition
Called by: CG_CheckEvents, CG_EntityEffects
=================
*/
void CG_SetEntitySoundPosition(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	char	local_1c[8];
	int		local_24;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0xb0) != 0xffffff) goto jmp_91ce;
	*(int *)local_1c = ((0xc * *(int *)(arg_0 + 0xa0)) + 0xe8024);
	local_24 = *(int *)local_1c;
	local_10 = (*(int *)(arg_0 + 0x2b4) + *(int *)local_24);
	local_14 = (*(int *)(arg_0 + 0x2b8) + *(int *)(local_24 + 0x4));
	local_18 = (*(int *)(arg_0 + 0x2bc) + *(int *)(*(int *)local_1c + 0x8));
	trap_S_UpdateEntityPosition(*(int *)arg_0, &local_10);
	goto jmp_91da;
jmp_91ce:
	trap_S_UpdateEntityPosition(*(int *)arg_0, (arg_0 + 0x2b4));
jmp_91da:
}

/*
=================
CG_EntityEffects

Address: 0x91dc
Stack Size: 0x40
Calls: trap_R_AddLightToScene, trap_S_AddRealLoopingSound, trap_S_AddLoopingSound, CG_SetEntitySoundPosition
Called by: CG_AddCEntity
=================
*/
void CG_EntityEffects(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[8];
	int		local_34;
	int		local_38;
	int		local_3c;

	arg_0 = arg_0;
	CG_SetEntitySoundPosition(arg_0);
	if (*(int *)(arg_0 + 0x9c) == 0x0) goto jmp_9229;
	if (*(int *)(arg_0 + 0x4) == 0x7) goto jmp_9210;
	trap_S_AddLoopingSound(*(int *)arg_0, (arg_0 + 0x2b4), 0x1d5c, *(int *)((*(int *)(arg_0 + 0x9c) << 0x2) + 0xe7820));
	goto jmp_9229;
jmp_9210:
	trap_S_AddRealLoopingSound(*(int *)arg_0, (arg_0 + 0x2b4), 0x1d5c, *(int *)((*(int *)(arg_0 + 0x9c) << 0x2) + 0xe7820));
jmp_9229:
	if (*(int *)(arg_0 + 0x98) == 0x0) goto jmp_9286;
	local_1c = *(int *)(arg_0 + 0x98);
	local_34 = local_1c;
	local_38 = 0xff;
	local_3c = 0x437f0000;
	local_24 = ((float)(local_34 & local_38) / local_3c);
	local_28 = ((float)((local_34 >> 0x8) & local_38) / local_3c);
	*(int *)local_2c = ((float)((local_34 >> 0x10) & local_38) / local_3c);
	local_20 = (0x40800000 * (float)((local_34 >> 0x18) & local_38));
	trap_R_AddLightToScene((arg_0 + 0x2b4), local_20, local_24, local_28, *(int *)local_2c);
jmp_9286:
}

/*
=================
CG_General

Address: 0x9288
Stack Size: 0xa4
Calls: trap_R_AddRefEntityToScene, memset, AnglesToAxis
Called by: CG_AddCEntity
=================
*/
void CG_General(int arg_0) {
	int		local_14;
	int		local_18;
	char	local_1c[20];
	char	local_30[40];
	char	local_58[12];
	int		local_64;
	char	local_68[12];
	int		local_74;
	char	local_78[40];
	int		local_a0;

	arg_0 = arg_0;
	local_a0 = arg_0;
	if (*(int *)(local_a0 + 0xa0) != 0x0) goto jmp_929a;
	goto jmp_92e7;
jmp_929a:
	memset(&local_14, 0x0, 0x8c);
	local_64 = *(int *)(local_a0 + 0xac);
	local_74 = local_64;
	*(int *)local_78 = 0x0;
	block_copy((arg_0 + 0x2b4), local_58, 0xc);
	block_copy((arg_0 + 0x2b4), local_68, 0xc);
	*(int *)local_1c = *(int *)((*(int *)(local_a0 + 0xa0) << 0x2) + 0xe7420);
	if (*(int *)local_a0 != *(int *)(bss_c2330 + 0xb8)) goto jmp_92d8;
	local_18 = (local_18 | 0x2);
jmp_92d8:
	AnglesToAxis((arg_0 + 0x2c0), local_30);
	trap_R_AddRefEntityToScene(&local_14);
jmp_92e7:
}

/*
=================
CG_Speaker

Address: 0x92e9
Stack Size: 0x28
Calls: trap_S_StartSound, rand
Called by: CG_AddCEntity
=================
*/
void CG_Speaker(int arg_0) {
	char	local_1c[8];
	int		local_24;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0xa8) != 0x0) goto jmp_92f7;
	goto jmp_9346;
jmp_92f7:
	if (bss_dc760 >= *(int *)(arg_0 + 0x1bc)) goto jmp_9301;
	goto jmp_9346;
jmp_9301:
	trap_S_StartSound(0x0, *(int *)arg_0, 0x4, *(int *)((*(int *)(arg_0 + 0xb8) << 0x2) + 0xe7820));
	*(int *)local_1c = rand();
	local_24 = 0x64;
	*(int *)(arg_0 + 0x1bc) = (int)((float)(bss_dc760 + (local_24 * *(int *)(arg_0 + 0xac))) + ((float)(local_24 * *(int *)(arg_0 + 0xa8)) * (0x40000000 * (((float)(*(int *)local_1c & 0x7fff) / 0x46fffe00) - 0x3f000000))));
jmp_9346:
}

/*
=================
CG_Item

Address: 0x9348
Stack Size: 0x17c
Calls: cos, trap_R_AddRefEntityToScene, memset, CG_PositionRotatedEntityOnTag, AnglesToAxis, AxisCopy, CG_Error
Called by: CG_AddCEntity
=================
*/
void CG_Item(int arg_0) {
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[12];
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	char	local_5c[8];
	char	local_64[8];
	char	local_6c[28];
	int		local_88;
	char	local_8c;
	char	local_8d;
	char	local_8e;
	char	local_8f[13];
	char	local_9c[8];
	int		local_a4;
	int		local_a8;
	int		local_ac;
	int		local_b0;
	int		local_b4;
	char	local_b8[8];
	char	local_c0[8];
	int		local_c8;
	int		local_cc;
	int		local_d0;
	int		local_d4;
	char	local_d8[8];
	int		local_e0;
	int		local_e4;
	int		local_e8;
	int		local_ec;
	int		local_f0;
	int		local_f4;
	int		local_f8;
	char	local_fc[36];
	char	local_120[76];
	int		local_16c;
	int		local_170;
	int		local_174;
	int		local_178;

	arg_0 = arg_0;
	local_ac = arg_0;
	if (*(int *)(local_ac + 0xa0) < bg_numItems) goto jmp_9364;
	CG_Error(0x5510, *(int *)(local_ac + 0xa0));
jmp_9364:
	*(int *)local_c0 = 0x0;
	if (*(int *)(local_ac + 0xa0) == *(int *)local_c0) goto jmp_9379;
	if ((*(int *)(local_ac + 0x8) & 0x80) == *(int *)local_c0) goto jmp_937b;
jmp_9379:
	goto jmp_96b7;
jmp_937b:
	local_a4 = ((0x34 * *(int *)(local_ac + 0xa0)) + 0x58c);
	if (bss_9db8 == 0x0) goto jmp_93c5;
	if (*(int *)(local_a4 + 0x24) == 0x8) goto jmp_93c5;
	memset(&local_18, 0x0, 0x8c);
	local_18 = 0x2;
	block_copy((arg_0 + 0x2b4), local_5c, 0xc);
	*(int *)local_9c = 0x41600000;
	local_88 = *(int *)((0x18 * *(int *)(local_ac + 0xa0)) + 0xd2e0);
	local_8c = 0xff;
	local_8d = 0xff;
	local_8e = 0xff;
	*(char *)local_8f = 0xff;
	trap_R_AddRefEntityToScene(&local_18);
	goto jmp_96b7;
jmp_93c5:
	*(int *)local_b8 = ((0x3727c5ac * (float)*(int *)arg_0) + 0x3ba3d70a);
	local_c8 = cos(((float)(bss_dc760 + 0x3e8) * *(int *)local_b8));
	local_cc = (arg_0 + 0x2bc);
	*(int *)local_cc = (*(int *)local_cc + ((0x40800000 * local_c8) + 0x40800000));
	memset(&local_18, 0x0, 0x8c);
	if (*(int *)(local_a4 + 0x24) != 0x4) goto jmp_940e;
	block_copy(&bss_dccc4, (arg_0 + 0x2c0), 0xc);
	AxisCopy(0xdccd0, &local_34);
	goto jmp_941b;
jmp_940e:
	block_copy(&bss_dcc94, (arg_0 + 0x2c0), 0xc);
	AxisCopy(0xdcca0, &local_34);
jmp_941b:
	local_a8 = 0x0;
	if (*(int *)(local_a4 + 0x24) != 0x1) goto jmp_94b3;
	local_a8 = ((0x84 * *(int *)(local_a4 + 0x28)) + 0xeacc);
	local_d0 = (arg_0 + 0x2b4);
	*(int *)local_d0 = (*(int *)local_d0 - (((*(int *)(local_a8 + 0x18) * local_34) + (*(int *)(local_a8 + 0x1c) * local_40)) + (*(int *)(local_a8 + 0x20) * local_4c)));
	*(int *)local_d8 = (arg_0 + 0x2b8);
	*(int *)*(int *)local_d8 = (*(int *)*(int *)local_d8 - (((*(int *)(local_a8 + 0x18) * local_38) + (*(int *)(local_a8 + 0x1c) * local_44)) + (*(int *)(local_a8 + 0x20) * local_50)));
	local_e0 = (arg_0 + 0x2bc);
	*(int *)local_e0 = (*(int *)local_e0 - (((*(int *)(local_a8 + 0x18) * local_3c) + (*(int *)(local_a8 + 0x1c) * local_48)) + (*(int *)(local_a8 + 0x20) * local_54)));
	local_e8 = (arg_0 + 0x2bc);
	*(int *)local_e8 = (*(int *)local_e8 + 0x41000000);
jmp_94b3:
	if (*(int *)(local_a4 + 0x24) != 0x1) goto jmp_94e8;
	if (*(int *)(local_a4 + 0x28) != 0x7) goto jmp_94e8;
	local_d4 = ((0x6b4 * *(int *)(bss_c2330 + 0xb8)) + 0xe8c24);
	local_8c = *(char *)(local_d4 + 0x64);
	local_8d = *(char *)(local_d4 + 0x65);
	local_8e = *(char *)(local_d4 + 0x66);
	*(char *)local_8f = *(char *)(local_d4 + 0x67);
jmp_94e8:
	local_20 = *(int *)((0x18 * *(int *)(local_ac + 0xa0)) + 0xd2d0);
	block_copy((arg_0 + 0x2b4), local_5c, 0xc);
	block_copy((arg_0 + 0x2b4), local_6c, 0xc);
	local_58 = 0x0;
	local_b4 = (bss_dc760 - *(int *)(arg_0 + 0x1bc));
	if (local_b4 < 0x0) goto jmp_9560;
	if (local_b4 >= 0x3e8) goto jmp_9560;
	local_b0 = ((float)local_b4 / 0x447a0000);
	local_34 = (local_34 * local_b0);
	local_38 = (local_38 * local_b0);
	local_3c = (local_3c * local_b0);
	local_40 = (local_40 * local_b0);
	local_44 = (local_44 * local_b0);
	local_48 = (local_48 * local_b0);
	local_4c = (local_4c * local_b0);
	local_50 = (local_50 * local_b0);
	local_54 = (local_54 * local_b0);
	local_58 = 0x1;
	goto jmp_9563;
jmp_9560:
	local_b0 = 0x3f800000;
jmp_9563:
	*(int *)local_d8 = *(int *)(local_a4 + 0x24);
	if (*(int *)local_d8 == 0x1) goto jmp_9572;
	if (*(int *)local_d8 != 0x3) goto jmp_9578;
jmp_9572:
	local_1c = (local_1c | 0x1);
jmp_9578:
	if (*(int *)(local_a4 + 0x24) != 0x1) goto jmp_95b8;
	local_34 = (0x3fc00000 * local_34);
	local_38 = (0x3fc00000 * local_38);
	local_3c = (0x3fc00000 * local_3c);
	local_40 = (0x3fc00000 * local_40);
	local_44 = (0x3fc00000 * local_44);
	local_48 = (0x3fc00000 * local_48);
	local_4c = (0x3fc00000 * local_4c);
	local_50 = (0x3fc00000 * local_50);
	local_54 = (0x3fc00000 * local_54);
	local_58 = 0x1;
jmp_95b8:
	trap_R_AddRefEntityToScene(&local_18);
	if (*(int *)(local_a4 + 0x24) != 0x1) goto jmp_9617;
	if (local_a8 == 0x0) goto jmp_9617;
	if (*(int *)(local_a8 + 0x10) == 0x0) goto jmp_9617;
	memset(&local_e0, 0x0, 0x8c);
	local_e8 = *(int *)(local_a8 + 0x10);
	block_copy(local_24, &local_ec, 0xc);
	local_f8 = local_30;
	local_e4 = local_1c;
	local_170 = 0x0;
	local_178 = 0x0;
	local_16c = local_178;
	local_174 = local_178;
	AnglesToAxis(&local_16c, local_fc);
	CG_PositionRotatedEntityOnTag(&local_e0, &local_18, *(int *)(local_a8 + 0xc), 0x5505);
	*(int *)local_120 = local_58;
	trap_R_AddRefEntityToScene(&local_e0);
jmp_9617:
	if (bss_9db8 != 0x0) goto jmp_96b7;
	local_ec = 0x0;
	local_e8 = local_ec;
	local_e4 = local_ec;
	local_e0 = local_ec;
	local_f0 = *(int *)(local_a4 + 0x24);
	if (local_f0 == 0x4) goto jmp_9639;
	if (local_f0 != 0x5) goto jmp_96b7;
jmp_9639:
	local_f4 = *(int *)((0x18 * *(int *)(local_ac + 0xa0)) + 0xd2d4);
	local_20 = local_f4;
	if (local_f4 == 0x0) goto jmp_96b7;
	if (*(int *)(local_a4 + 0x24) != 0x5) goto jmp_9665;
	*(int *)local_64 = (*(int *)local_64 + 0x41400000);
	local_e4 = ((float)(0x168 * (bss_dc760 & 0x3ff)) / 0xc4800000);
jmp_9665:
	AnglesToAxis(&local_e0, &local_34);
	if (local_b0 == 0x3f800000) goto jmp_96b2;
	local_34 = (local_34 * local_b0);
	local_38 = (local_38 * local_b0);
	local_3c = (local_3c * local_b0);
	local_40 = (local_40 * local_b0);
	local_44 = (local_44 * local_b0);
	local_48 = (local_48 * local_b0);
	local_4c = (local_4c * local_b0);
	local_50 = (local_50 * local_b0);
	local_54 = (local_54 * local_b0);
	local_58 = 0x1;
jmp_96b2:
	trap_R_AddRefEntityToScene(&local_18);
jmp_96b7:
}

/*
=================
CG_Missile

Address: 0x96b9
Stack Size: 0xc4
Calls: trap_R_AddRefEntityToScene, memset, trap_S_AddLoopingSound, trap_R_AddLightToScene, CG_AddRefEntityWithPowerups, RotateAroundDirection, VectorNormalize2, BG_EvaluateTrajectoryDelta
Called by: CG_AddCEntity
=================
*/
void CG_Missile(int arg_0) {
	int		local_1c;
	int		local_20;
	char	local_24[20];
	char	local_38[8];
	char	local_40[32];
	char	local_60[16];
	char	local_70[20];
	char	local_84[8];
	char	local_8c[20];
	int		local_a0;
	int		local_a4;
	int		local_a8;
	char	local_ac[8];
	char	local_b4[16];

	arg_0 = arg_0;
	*(int *)local_ac = arg_0;
	if (*(int *)(*(int *)local_ac + 0xc0) < 0xb) goto jmp_96cf;
	*(int *)(*(int *)local_ac + 0xc0) = 0x0;
jmp_96cf:
	local_a8 = ((0x84 * *(int *)(*(int *)local_ac + 0xc0)) + 0xeacc);
	block_copy((*(int *)local_ac + 0x74), (arg_0 + 0x2c0), 0xc);
	if (*(int *)(local_a8 + 0x58) == 0x0) goto jmp_96f7;
	(*(*(int *)(local_a8 + 0x58)))(arg_0, local_a8);
jmp_96f7:
	if (*(int *)(local_a8 + 0x5c) == 0x0) goto jmp_971e;
	trap_R_AddLightToScene((arg_0 + 0x2b4), *(int *)(local_a8 + 0x5c), *(int *)(local_a8 + 0x60), *(int *)(local_a8 + 0x64), *(int *)(local_a8 + 0x68));
jmp_971e:
	if (*(int *)(local_a8 + 0x54) == 0x0) goto jmp_9746;
	BG_EvaluateTrajectoryDelta((arg_0 + 0xc), bss_dc760, local_b4);
	trap_S_AddLoopingSound(*(int *)arg_0, (arg_0 + 0x2b4), local_b4, *(int *)(local_a8 + 0x54));
jmp_9746:
	memset(&local_1c, 0x0, 0x8c);
	block_copy((arg_0 + 0x2b4), local_60, 0xc);
	block_copy((arg_0 + 0x2b4), local_70, 0xc);
	if (*(int *)(arg_0 + 0xc0) != 0x8) goto jmp_9776;
	local_1c = 0x2;
	local_a0 = 0x41800000;
	local_a4 = 0x0;
	*(int *)local_8c = bss_10423c;
	trap_R_AddRefEntityToScene(&local_1c);
	goto jmp_97c8;
jmp_9776:
	*(int *)local_84 = (cg & 0x1);
	*(int *)local_24 = *(int *)(local_a8 + 0x50);
	local_20 = (*(int *)(local_a8 + 0x6c) | 0x40);
	*(int *)local_b4 = VectorNormalize2((*(int *)local_ac + 0x24), local_38);
	if (*(int *)local_b4 != 0x0) goto jmp_979e;
	*(int *)local_40 = 0x3f800000;
jmp_979e:
	if (*(int *)(*(int *)local_ac + 0xc) == 0x0) goto jmp_97b2;
	RotateAroundDirection(local_38, (float)(bss_dc760 / 0x4));
	goto jmp_97be;
jmp_97b2:
	RotateAroundDirection(local_38, (float)*(int *)(*(int *)local_ac + 0x54));
jmp_97be:
	CG_AddRefEntityWithPowerups(&local_1c, *(int *)local_ac, 0x0);
jmp_97c8:
}

/*
=================
CG_Grapple

Address: 0x97ca
Stack Size: 0xb0
Calls: trap_R_AddRefEntityToScene, memset, VectorNormalize2, CG_GrappleTrail
Called by: CG_AddCEntity
=================
*/
void CG_Grapple(int arg_0) {
	int		local_14;
	int		local_18;
	char	local_1c[20];
	char	local_30[8];
	char	local_38[32];
	char	local_58[16];
	char	local_68[20];
	char	local_7c[36];
	int		local_a0;
	char	local_a4[8];
	int		local_ac;

	arg_0 = arg_0;
	local_a0 = arg_0;
	if (*(int *)(local_a0 + 0xc0) < 0xb) goto jmp_97e0;
	*(int *)(local_a0 + 0xc0) = 0x0;
jmp_97e0:
	*(int *)local_a4 = ((0x84 * *(int *)(local_a0 + 0xc0)) + 0xeacc);
	block_copy((local_a0 + 0x74), (arg_0 + 0x2c0), 0xc);
	CG_GrappleTrail(arg_0, *(int *)local_a4);
	memset(&local_14, 0x0, 0x8c);
	block_copy((arg_0 + 0x2b4), local_58, 0xc);
	block_copy((arg_0 + 0x2b4), local_68, 0xc);
	*(int *)local_7c = (cg & 0x1);
	*(int *)local_1c = *(int *)(*(int *)local_a4 + 0x50);
	local_18 = (*(int *)(*(int *)local_a4 + 0x6c) | 0x40);
	local_ac = VectorNormalize2((local_a0 + 0x24), local_30);
	if (local_ac != 0x0) goto jmp_983a;
	*(int *)local_38 = 0x3f800000;
jmp_983a:
	trap_R_AddRefEntityToScene(&local_14);
}

/*
=================
CG_Mover

Address: 0x9841
Stack Size: 0xa4
Calls: trap_R_AddRefEntityToScene, memset, AnglesToAxis
Called by: CG_AddCEntity
=================
*/
void CG_Mover(int arg_0) {
	int		local_14;
	int		local_18;
	char	local_1c[20];
	char	local_30[40];
	char	local_58[16];
	char	local_68[20];
	char	local_7c[36];
	int		local_a0;

	arg_0 = arg_0;
	local_a0 = arg_0;
	memset(&local_14, 0x0, 0x8c);
	block_copy((arg_0 + 0x2b4), local_58, 0xc);
	block_copy((arg_0 + 0x2b4), local_68, 0xc);
	AnglesToAxis((arg_0 + 0x2c0), local_30);
	local_18 = 0x40;
	*(int *)local_7c = ((bss_dc760 >> 0x6) & 0x1);
	if (*(int *)(local_a0 + 0xb0) != 0xffffff) goto jmp_9889;
	*(int *)local_1c = *(int *)((*(int *)(local_a0 + 0xa0) << 0x2) + 0xe7c24);
	goto jmp_9895;
jmp_9889:
	*(int *)local_1c = *(int *)((*(int *)(local_a0 + 0xa0) << 0x2) + 0xe7420);
jmp_9895:
	trap_R_AddRefEntityToScene(&local_14);
	if (*(int *)(local_a0 + 0xa4) == 0x0) goto jmp_98b5;
	*(int *)local_7c = 0x0;
	*(int *)local_1c = *(int *)((*(int *)(local_a0 + 0xa4) << 0x2) + 0xe7420);
	trap_R_AddRefEntityToScene(&local_14);
jmp_98b5:
}

/*
=================
CG_Beam

Address: 0x98b7
Stack Size: 0xa4
Calls: trap_R_AddRefEntityToScene, memset, AxisClear
Called by: CG_EntityEvent, CG_AddCEntity
=================
*/
void CG_Beam(int arg_0) {
	int		local_14;
	char	local_18[24];
	char	local_30[40];
	char	local_58[16];
	char	local_68[56];
	int		local_a0;

	local_a0 = arg_0;
	memset(&local_14, 0x0, 0x8c);
	block_copy((local_a0 + 0x18), local_58, 0xc);
	block_copy((local_a0 + 0x68), local_68, 0xc);
	AxisClear(local_30);
	local_14 = 0x3;
	*(int *)local_18 = 0x40;
	trap_R_AddRefEntityToScene(&local_14);
}

/*
=================
CG_Portal

Address: 0x98e3
Stack Size: 0xa4
Calls: trap_R_AddRefEntityToScene, memset, CrossProduct, PerpendicularVector, ByteToDir
Called by: CG_AddCEntity
=================
*/
void CG_Portal(int arg_0) {
	char	local_14[28];
	char	local_30[12];
	int		local_3c;
	int		local_40;
	int		local_44;
	char	local_48[16];
	char	local_58[12];
	int		local_64;
	char	local_68[12];
	char	local_74[8];
	char	local_7c[36];
	int		local_a0;

	local_a0 = arg_0;
	memset(local_14, 0x0, 0x8c);
	block_copy((arg_0 + 0x2b4), local_58, 0xc);
	block_copy((local_a0 + 0x68), local_68, 0xc);
	ByteToDir(*(int *)(local_a0 + 0xb8), local_30);
	PerpendicularVector(&local_3c, local_30);
	local_3c = (vec3_origin - local_3c);
	local_40 = (global_1d60 - local_40);
	local_44 = (global_1d64 - local_44);
	CrossProduct(local_30, &local_3c, local_48);
	*(int *)local_14 = 0x7;
	*(int *)local_74 = *(int *)(local_a0 + 0xbc);
	local_64 = *(int *)(local_a0 + 0xac);
	*(int *)local_7c = (int)(0x43b40000 * ((float)*(int *)(local_a0 + 0xa8) / 0x43800000));
	trap_R_AddRefEntityToScene(local_14);
}

/*
=================
CG_CreateRotationMatrix

Address: 0x9952
Stack Size: 0x1c
Calls: VectorInverse, AngleVectors
Called by: CG_AdjustPositionForMover
=================
*/
void CG_CreateRotationMatrix(int arg_0, int arg_1) {

	arg_1 = arg_1;
	AngleVectors(arg_0, arg_1, (arg_1 + 0xc), (arg_1 + 0x18));
	VectorInverse((arg_1 + 0xc));
}

/*
=================
CG_TransposeMatrix

Address: 0x9974
Stack Size: 0x20
Called by: CG_AdjustPositionForMover
=================
*/
void CG_TransposeMatrix(int arg_0, int arg_1) {
	int		local_8;
	char	local_c[8];
	int		local_14;
	char	local_18[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	*(int *)local_c = 0x0;
jmp_9980:
	local_8 = 0x0;
jmp_9983:
	local_14 = 0x2;
	*(int *)local_18 = 0xc;
	*(int *)((local_8 << local_14) + ((*(int *)local_18 * *(int *)local_c) + arg_1)) = *(int *)((*(int *)local_c << local_14) + ((*(int *)local_18 * local_8) + arg_0));
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x3) goto jmp_9983;
	*(int *)local_c = (*(int *)local_c + 0x1);
	if (*(int *)local_c < 0x3) goto jmp_9980;
}

/*
=================
CG_RotatePoint

Address: 0x99bd
Stack Size: 0x24
Called by: CG_AdjustPositionForMover
=================
*/
void CG_RotatePoint(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	char	local_10[20];

	arg_0 = arg_0;
	arg_1 = arg_1;
	block_copy(arg_0, &local_8, 0xc);
	*(int *)arg_0 = (((*(int *)arg_1 * local_8) + (*(int *)(arg_1 + 0x4) * local_c)) + (*(int *)(arg_1 + 0x8) * *(int *)local_10));
	*(int *)(arg_0 + 0x4) = (((*(int *)(arg_1 + 0xc) * local_8) + (*(int *)(arg_1 + 0x10) * local_c)) + (*(int *)(arg_1 + 0x14) * *(int *)local_10));
	*(int *)(arg_0 + 0x8) = (((*(int *)(arg_1 + 0x18) * local_8) + (*(int *)(arg_1 + 0x1c) * local_c)) + (*(int *)(arg_1 + 0x20) * *(int *)local_10));
}

/*
=================
CG_AdjustPositionForMover

Address: 0x9a25
Stack Size: 0xe8
Calls: CG_RotatePoint, CG_TransposeMatrix, CG_CreateRotationMatrix, BG_EvaluateTrajectory
Called by: CG_PredictPlayerState, CG_CalcEntityLerpPositions
=================
*/
void CG_AdjustPositionForMover(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	char	local_84[36];
	char	local_a8[40];
	char	local_d0[8];
	int		local_d8;
	int		local_dc;
	int		local_e0;
	int		local_e4;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_4 = arg_4;
	arg_5 = arg_5;
	arg_6 = arg_6;
	if (arg_1 <= 0x0) goto jmp_9a42;
	if (arg_1 < 0x3fe) goto jmp_9a4e;
jmp_9a42:
	block_copy(arg_0, arg_4, 0xc);
	block_copy(arg_5, arg_6, 0xc);
	goto jmp_9b84;
jmp_9a4e:
	local_44 = ((0x2cc * arg_1) + 0xf30c);
	*(int *)local_d0 = 0x4;
	if (*(int *)(local_44 + *(int *)local_d0) == *(int *)local_d0) goto jmp_9a6e;
	block_copy(arg_0, arg_4, 0xc);
	block_copy(arg_5, arg_6, 0xc);
	goto jmp_9b84;
jmp_9a6e:
	BG_EvaluateTrajectory((local_44 + 0xc), arg_2, &local_20);
	BG_EvaluateTrajectory((local_44 + 0x30), arg_2, &local_6c);
	BG_EvaluateTrajectory((local_44 + 0xc), arg_3, &local_60);
	BG_EvaluateTrajectory((local_44 + 0x30), arg_3, &local_78);
	local_14 = (local_60 - local_20);
	local_18 = (local_64 - local_24);
	local_1c = (local_68 - local_28);
	local_2c = (local_78 - local_6c);
	local_30 = (local_7c - local_70);
	local_34 = (local_80 - local_74);
	CG_CreateRotationMatrix(&local_2c, local_a8);
	CG_TransposeMatrix(local_a8, local_84);
	local_38 = (*(int *)arg_0 - local_20);
	local_3c = (*(int *)(arg_0 + 0x4) - local_24);
	local_40 = (*(int *)(arg_0 + 0x8) - local_28);
	block_copy(&local_38, &local_54, 0xc);
	CG_RotatePoint(&local_54, local_84);
	local_48 = (local_54 - local_38);
	local_4c = (local_58 - local_3c);
	local_50 = (local_5c - local_40);
	local_14 = (local_14 + local_48);
	local_18 = (local_18 + local_4c);
	local_1c = (local_1c + local_50);
	*(int *)arg_4 = (*(int *)arg_0 + local_14);
	local_d8 = 0x4;
	*(int *)(arg_4 + local_d8) = (*(int *)(arg_0 + local_d8) + local_18);
	local_dc = 0x8;
	*(int *)(arg_4 + local_dc) = (*(int *)(arg_0 + local_dc) + local_1c);
	*(int *)arg_6 = (*(int *)arg_5 + local_2c);
	local_e0 = 0x4;
	*(int *)(arg_6 + local_e0) = (*(int *)(arg_5 + local_e0) + local_30);
	local_e4 = 0x8;
	*(int *)(arg_6 + local_e4) = (*(int *)(arg_5 + local_e4) + local_34);
jmp_9b84:
}

/*
=================
CG_InterpolateEntityPosition

Address: 0x9b86
Stack Size: 0x40
Calls: LerpAngle, BG_EvaluateTrajectory, CG_Error
Called by: CG_CalcEntityLerpPositions
=================
*/
void CG_InterpolateEntityPosition(int arg_0) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;

	arg_0 = arg_0;
	if (bss_c2334 != 0x0) goto jmp_9b94;
	CG_Error(0x54d4);
jmp_9b94:
	local_2c = bss_dc750;
	BG_EvaluateTrajectory((arg_0 + 0xc), *(int *)(bss_c2330 + 0x8), &local_14);
	BG_EvaluateTrajectory((arg_0 + 0xdc), *(int *)(bss_c2334 + 0x8), &local_20);
	local_30 = local_14;
	*(int *)(arg_0 + 0x2b4) = (local_30 + (local_2c * (local_20 - local_30)));
	*(int *)(arg_0 + 0x2b8) = (local_18 + (local_2c * (local_24 - local_18)));
	*(int *)(arg_0 + 0x2bc) = (local_1c + (local_2c * (local_28 - local_1c)));
	BG_EvaluateTrajectory((arg_0 + 0x30), *(int *)(bss_c2330 + 0x8), &local_14);
	BG_EvaluateTrajectory((arg_0 + 0x100), *(int *)(bss_c2334 + 0x8), &local_20);
	local_34 = LerpAngle(local_14, local_20, local_2c);
	*(int *)(arg_0 + 0x2c0) = local_34;
	local_38 = LerpAngle(local_18, local_24, local_2c);
	*(int *)(arg_0 + 0x2c4) = local_38;
	local_3c = LerpAngle(local_1c, local_28, local_2c);
	*(int *)(arg_0 + 0x2c8) = local_3c;
}

/*
=================
CG_CalcEntityLerpPositions

Address: 0x9c4a
Stack Size: 0x40
Calls: CG_AdjustPositionForMover, BG_EvaluateTrajectory, CG_InterpolateEntityPosition
Called by: CG_AddPacketEntities, CG_AddCEntity
=================
*/
void CG_CalcEntityLerpPositions(int arg_0) {
	int		local_38;
	int		local_3c;

	arg_0 = arg_0;
	if (bss_8768 != 0x0) goto jmp_9c64;
	if (*(int *)arg_0 >= 0x40) goto jmp_9c64;
	*(int *)(arg_0 + 0xc) = 0x1;
	*(int *)(arg_0 + 0xdc) = 0x1;
jmp_9c64:
	if (*(int *)(arg_0 + 0x1a0) == 0x0) goto jmp_9c7a;
	if (*(int *)(arg_0 + 0xc) != 0x1) goto jmp_9c7a;
	CG_InterpolateEntityPosition(arg_0);
	goto jmp_9ce3;
jmp_9c7a:
	if (*(int *)(arg_0 + 0x1a0) == 0x0) goto jmp_9c95;
	if (*(int *)(arg_0 + 0xc) != 0x3) goto jmp_9c95;
	if (*(int *)arg_0 >= 0x40) goto jmp_9c95;
	CG_InterpolateEntityPosition(arg_0);
	goto jmp_9ce3;
jmp_9c95:
	BG_EvaluateTrajectory((arg_0 + 0xc), bss_dc760, (arg_0 + 0x2b4));
	BG_EvaluateTrajectory((arg_0 + 0x30), bss_dc760, (arg_0 + 0x2c0));
	if (arg_0 == 0xdc954) goto jmp_9ce3;
	local_38 = (arg_0 + 0x2b4);
#define next_call_arg_0 "local_38"
#define next_call_arg_1 "*(int *)(arg_0 + 0x94)"
#define next_call_arg_2 "*(int *)(bss_c2330 + 0x8)"
#define next_call_arg_3 "bss_dc760"
#define next_call_arg_4 "local_38"
	local_3c = (arg_0 + 0x2c0);
#define next_call_arg_5 "local_3c"
#define next_call_arg_6 "local_3c"
	CG_AdjustPositionForMover();
jmp_9ce3:
}

/*
=================
CG_TeamBase

Address: 0x9ce5
Stack Size: 0xa0
Calls: trap_R_AddRefEntityToScene, memset, AnglesToAxis
Called by: CG_AddCEntity
=================
*/
void CG_TeamBase(int arg_0) {
	char	local_14[8];
	int		local_1c;
	char	local_20[16];
	char	local_30[40];
	char	local_58[72];

	if (bss_e66f8 != 0x4) goto jmp_9d2f;
	memset(local_14, 0x0, 0x8c);
	*(int *)local_14 = 0x0;
	block_copy((arg_0 + 0x2b4), local_20, 0xc);
	block_copy((arg_0 + 0x2b4), local_58, 0xc);
	AnglesToAxis((arg_0 + 0x74), local_30);
	if (*(int *)(arg_0 + 0xa0) != 0x1) goto jmp_9d19;
	local_1c = bss_104188;
	goto jmp_9d2a;
jmp_9d19:
	if (*(int *)(arg_0 + 0xa0) != 0x2) goto jmp_9d26;
	local_1c = bss_10418c;
	goto jmp_9d2a;
jmp_9d26:
	local_1c = bss_104190;
jmp_9d2a:
	trap_R_AddRefEntityToScene(local_14);
jmp_9d2f:
}

/*
=================
CG_AddCEntity

Address: 0x9d31
Stack Size: 0x18
Calls: CG_TeamBase, CG_Grapple, CG_Speaker, CG_Portal, CG_Beam, CG_Mover, CG_Missile, CG_Item, CG_Player, CG_General, CG_Error, CG_EntityEffects, CG_CalcEntityLerpPositions
Called by: CG_AddPacketEntities
=================
*/
void CG_AddCEntity(int arg_0) {
	char	local_10[8];

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x4) < 0xd) goto jmp_9d3f;
	goto jmp_9dbd;
jmp_9d3f:
	CG_CalcEntityLerpPositions(arg_0);
	CG_EntityEffects(arg_0);
	*(int *)local_10 = *(int *)(arg_0 + 0x4);
	if (*(int *)local_10 < 0x0) goto jmp_9d62;
	if (*(int *)local_10 > 0xc) goto jmp_9d62;
	goto *(int *)((*(int *)local_10 << 0x2) + 0x1824);
jmp_9d62:
	CG_Error(0x54c0, *(int *)(arg_0 + 0x4));
	goto jmp_9dbd;
	CG_General(arg_0);
	goto jmp_9dbd;
	CG_Player(arg_0);
	goto jmp_9dbd;
	CG_Item(arg_0);
	goto jmp_9dbd;
	CG_Missile(arg_0);
	goto jmp_9dbd;
	CG_Mover(arg_0);
	goto jmp_9dbd;
	CG_Beam(arg_0);
	goto jmp_9dbd;
	CG_Portal(arg_0);
	goto jmp_9dbd;
	CG_Speaker(arg_0);
	goto jmp_9dbd;
	CG_Grapple(arg_0);
	goto jmp_9dbd;
	CG_TeamBase(arg_0);
jmp_9dbd:
}

/*
=================
CG_AddPacketEntities

Address: 0x9dbf
Stack Size: 0x28
Calls: CG_CalcEntityLerpPositions, CG_AddCEntity, BG_PlayerStateToEntityState, AnglesToAxis
Called by: CG_DrawActiveFrame
=================
*/
void CG_AddPacketEntities(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	if (bss_c2334 == 0x0) goto jmp_9df0;
	local_24 = 0x8;
	local_20 = (*(int *)(bss_c2334 + local_24) - *(int *)(bss_c2330 + local_24));
	if (local_20 != 0x0) goto jmp_9ddf;
	bss_dc750 = 0x0;
	goto jmp_9df3;
jmp_9ddf:
	bss_dc750 = ((float)(bss_dc760 - *(int *)(bss_c2330 + 0x8)) / (float)local_20);
	goto jmp_9df3;
jmp_9df0:
	bss_dc750 = 0x0;
jmp_9df3:
	bss_dcc94 = 0x0;
	bss_dcc98 = ((float)(0x168 * (bss_dc760 & 0x7ff)) / 0x45000000);
	bss_dcc9c = 0x0;
	bss_dccc4 = 0x0;
	bss_dccc8 = ((float)(0x168 * (bss_dc760 & 0x3ff)) / 0x44800000);
	bss_dcccc = 0x0;
	AnglesToAxis(0xdcc94, 0xdcca0);
	AnglesToAxis(0xdccc4, 0xdccd0);
	local_1c = 0xdc780;
	BG_PlayerStateToEntityState(local_1c, 0xdc954, 0x0);
	CG_AddCEntity(0xdc954);
	CG_CalcEntityLerpPositions(((0x2cc * *(int *)(bss_c2330 + 0xb8)) + 0xf30c));
	local_14 = 0x0;
	goto jmp_9e63;
jmp_9e47:
	local_18 = ((0x2cc * *(int *)((0xd0 * local_14) + (bss_c2330 + 0x204))) + 0xf30c);
	CG_AddCEntity(local_18);
	local_14 = (local_14 + 0x1);
jmp_9e63:
	if (local_14 < *(int *)(bss_c2330 + 0x200)) goto jmp_9e47;
}

/*
=================
CG_PlaceString

Address: 0x9e6d
Stack Size: 0x28
Calls: Com_sprintf, va
Called by: CG_DrawOldScoreboard, CG_Obituary
=================
*/
int CG_PlaceString(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	if ((arg_0 & 0x4000) == 0x0) goto jmp_9e83;
	arg_0 = (arg_0 & 0xffffbfff);
	local_20 = 0x5d23;
	goto jmp_9e86;
jmp_9e83:
	local_20 = 0x5d22;
jmp_9e86:
	if (arg_0 != 0x1) goto jmp_9e8f;
	local_1c = 0x5d1a;
	goto jmp_9f08;
jmp_9e8f:
	if (arg_0 != 0x2) goto jmp_9e98;
	local_1c = 0x5d12;
	goto jmp_9f08;
jmp_9e98:
	if (arg_0 != 0x3) goto jmp_9ea1;
	local_1c = 0x5d0a;
	goto jmp_9f08;
jmp_9ea1:
	if (arg_0 != 0xb) goto jmp_9eaa;
	local_1c = 0x5d05;
	goto jmp_9f08;
jmp_9eaa:
	if (arg_0 != 0xc) goto jmp_9eb3;
	local_1c = 0x5d00;
	goto jmp_9f08;
jmp_9eb3:
	if (arg_0 != 0xd) goto jmp_9ebc;
	local_1c = 0x5cfb;
	goto jmp_9f08;
jmp_9ebc:
	if ((arg_0 %% 0xa) != 0x1) goto jmp_9ed1;
	local_24 = va(0x5cf6, arg_0);
	local_1c = local_24;
	goto jmp_9f08;
jmp_9ed1:
	if ((arg_0 %% 0xa) != 0x2) goto jmp_9ee6;
	local_24 = va(0x5cf1, arg_0);
	local_1c = local_24;
	goto jmp_9f08;
jmp_9ee6:
	if ((arg_0 %% 0xa) != 0x3) goto jmp_9efb;
	local_24 = va(0x5cec, arg_0);
	local_1c = local_24;
	goto jmp_9f08;
jmp_9efb:
	local_24 = va(0x5ce7, arg_0);
	local_1c = local_24;
jmp_9f08:
	Com_sprintf(0x104f3c, 0x40, 0x5ce2, local_20, local_1c);
	return 0x104f3c;
}

/*
=================
CG_Obituary

Address: 0x9f1b
Stack Size: 0xa4
Calls: strcpy, CG_CenterPrint, va, CG_PlaceString, CG_Printf, strcat, Q_strncpyz, Info_ValueForKey, CG_ConfigString, CG_Error
Called by: CG_EntityEvent
=================
*/
void CG_Obituary(int arg_0) {
	int		local_1c;
	int		local_20;
	char	local_24[32];
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	char	local_54[32];
	int		local_74;
	int		local_78;
	char	local_7c[16];
	int		local_8c;
	char	local_90[8];
	int		local_98;
	int		local_9c;
	int		local_a0;

	arg_0 = arg_0;
	local_20 = *(int *)(arg_0 + 0x8c);
	local_1c = *(int *)(arg_0 + 0x90);
	local_48 = *(int *)(arg_0 + 0xb8);
	if (local_20 < 0x0) goto jmp_9f3d;
	if (local_20 < 0x40) goto jmp_9f42;
jmp_9f3d:
	CG_Error(0x5cc1);
jmp_9f42:
	local_78 = ((0x6b4 * local_20) + 0xe8c24);
	if (local_1c < 0x0) goto jmp_9f52;
	if (local_1c < 0x40) goto jmp_9f5a;
jmp_9f52:
	local_1c = 0x3fe;
	local_50 = 0x0;
	goto jmp_9f67;
jmp_9f5a:
	local_8c = CG_ConfigString((local_1c + 0x220));
	local_50 = local_8c;
jmp_9f67:
	local_8c = CG_ConfigString((local_20 + 0x220));
	local_4c = local_8c;
	if (local_4c != 0x0) goto jmp_9f7a;
	goto jmp_a179;
jmp_9f7a:
	*(int *)local_90 = Info_ValueForKey(local_4c, 0x5cbf);
	Q_strncpyz(local_24, *(int *)local_90, 0x1e);
	strcat(local_24, 0x5cbc);
	local_74 = 0x5d22;
	if (local_48 < 0xe) goto jmp_9fcf;
	if (local_48 > 0x16) goto jmp_9fcf;
	goto *(int *)((local_48 << 0x2) + 0x1820);
	local_44 = 0x5cb3;
	goto jmp_9fd2;
	local_44 = 0x5caa;
	goto jmp_9fd2;
	local_44 = 0x5c9d;
	goto jmp_9fd2;
	local_44 = 0x5c8c;
	goto jmp_9fd2;
	local_44 = 0x5c85;
	goto jmp_9fd2;
	local_44 = 0x5c66;
	goto jmp_9fd2;
	local_44 = 0x5c58;
	goto jmp_9fd2;
	local_44 = 0x5c41;
	goto jmp_9fd2;
jmp_9fcf:
	local_44 = 0x0;
jmp_9fd2:
	if (local_1c != local_20) goto jmp_a058;
	*(int *)local_7c = *(int *)(local_78 + 0x208);
	local_9c = 0x5;
	if (local_48 == local_9c) goto jmp_9ff9;
	if (local_48 == 0x7) goto jmp_a010;
	if (local_48 == 0x9) goto jmp_a027;
	if (local_48 < local_9c) goto jmp_a043;
	if (local_48 == 0xd) goto jmp_a03e;
	goto jmp_a043;
jmp_9ff9:
	if (*(int *)local_7c != 0x1) goto jmp_a002;
	local_44 = 0x5c26;
	goto jmp_a058;
jmp_a002:
	if (*(int *)local_7c != 0x2) goto jmp_a00b;
	local_44 = 0x5c0b;
	goto jmp_a058;
jmp_a00b:
	local_44 = 0x5bf0;
	goto jmp_a058;
jmp_a010:
	if (*(int *)local_7c != 0x1) goto jmp_a019;
	local_44 = 0x5be0;
	goto jmp_a058;
jmp_a019:
	if (*(int *)local_7c != 0x2) goto jmp_a022;
	local_44 = 0x5bd1;
	goto jmp_a058;
jmp_a022:
	local_44 = 0x5bc1;
	goto jmp_a058;
jmp_a027:
	if (*(int *)local_7c != 0x1) goto jmp_a030;
	local_44 = 0x5bb2;
	goto jmp_a058;
jmp_a030:
	if (*(int *)local_7c != 0x2) goto jmp_a039;
	local_44 = 0x5ba4;
	goto jmp_a058;
jmp_a039:
	local_44 = 0x5b95;
	goto jmp_a058;
jmp_a03e:
	local_44 = 0x5b76;
	goto jmp_a058;
jmp_a043:
	if (*(int *)local_7c != 0x1) goto jmp_a04c;
	local_44 = 0x5b67;
	goto jmp_a058;
jmp_a04c:
	if (*(int *)local_7c != 0x2) goto jmp_a055;
	local_44 = 0x5b59;
	goto jmp_a058;
jmp_a055:
	local_44 = 0x5b4a;
jmp_a058:
	if (local_44 == 0x0) goto jmp_a068;
	CG_Printf(0x5b42, local_24, local_44);
	goto jmp_a179;
jmp_a068:
	if (local_1c != *(int *)(bss_c2330 + 0xb8)) goto jmp_a0ad;
	if (bss_e66f8 >= 0x3) goto jmp_a097;
	local_9c = CG_PlaceString((*(int *)(bss_c2330 + 0x12c) + 0x1));
	local_a0 = va(0x5b22, local_24, local_9c, *(int *)(bss_c2330 + 0x124));
	local_98 = local_a0;
	goto jmp_a0a3;
jmp_a097:
	local_9c = va(0x5b13, local_24);
	local_98 = local_9c;
jmp_a0a3:
	CG_CenterPrint(local_98, 0x90, 0x10);
jmp_a0ad:
	if (local_50 != 0x0) goto jmp_a0bd;
	local_1c = 0x3fe;
	strcpy(local_54, 0x5b0c);
	goto jmp_a0e8;
jmp_a0bd:
	local_98 = Info_ValueForKey(local_50, 0x5cbf);
	Q_strncpyz(local_54, local_98, 0x1e);
	strcat(local_54, 0x5cbc);
	if (local_20 != *(int *)(bss_c2330 + 0xb8)) goto jmp_a0e8;
	Q_strncpyz(0xde19c, local_54, 0x20);
jmp_a0e8:
	if (local_1c == 0x3fe) goto jmp_a172;
	if (local_48 < 0x1) goto jmp_a15a;
	if (local_48 > 0x17) goto jmp_a15a;
	goto *(int *)((local_48 << 0x2) + 0x1878);
	local_44 = 0x5afe;
	goto jmp_a15d;
	local_44 = 0x5aee;
	goto jmp_a15d;
	local_44 = 0x5ad9;
	goto jmp_a15d;
	local_44 = 0x5ac6;
	goto jmp_a15d;
	local_44 = 0x5ac2;
	local_74 = 0x5ab7;
	goto jmp_a15d;
	local_44 = 0x5aa7;
	local_74 = 0x5a9b;
	goto jmp_a15d;
	local_44 = 0x5ac2;
	local_74 = 0x5a91;
	goto jmp_a15d;
	local_44 = 0x5a83;
	local_74 = 0x5a91;
	goto jmp_a15d;
	local_44 = 0x5a75;
	local_74 = 0x5a68;
	goto jmp_a15d;
	local_44 = 0x5a75;
	local_74 = 0x5a68;
	goto jmp_a15d;
	local_44 = 0x5a5a;
	goto jmp_a15d;
	local_44 = 0x5a46;
	goto jmp_a15d;
	local_44 = 0x5a37;
	local_74 = 0x5a30;
	goto jmp_a15d;
	local_44 = 0x5a20;
	local_74 = 0x5a0e;
	goto jmp_a15d;
jmp_a15a:
	local_44 = 0x5a00;
jmp_a15d:
	if (local_44 == 0x0) goto jmp_a172;
	CG_Printf(0x59f4, local_24, local_44, local_54, local_74);
	goto jmp_a179;
jmp_a172:
	CG_Printf(0x59ea, local_24);
jmp_a179:
}

/*
=================
CG_UseItem

Address: 0xa17b
Stack Size: 0x38
Calls: trap_S_StartSound, va, BG_FindItemForHoldable, CG_CenterPrint
Called by: CG_EntityEvent
=================
*/
void CG_UseItem(int arg_0) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[8];
	int		local_30;
	int		local_34;

	local_1c = arg_0;
	local_18 = ((*(int *)(local_1c + 0xb4) & 0xfffffcff) - 0x18);
	if (local_18 < 0x0) goto jmp_a193;
	if (local_18 <= 0x6) goto jmp_a196;
jmp_a193:
	local_18 = 0x0;
jmp_a196:
	if (*(int *)local_1c != *(int *)(bss_c2330 + 0xb8)) goto jmp_a1cf;
	if (local_18 != 0x0) goto jmp_a1ae;
	CG_CenterPrint(0x59db, 0x90, 0x10);
	goto jmp_a1cf;
jmp_a1ae:
	local_30 = BG_FindItemForHoldable(local_18);
	local_20 = local_30;
	local_34 = va(0x59d4, *(int *)(local_20 + 0x1c));
	CG_CenterPrint(local_34, 0x90, 0x10);
jmp_a1cf:
	if (local_18 == 0x0) goto jmp_a1dd;
	if (local_18 == 0x1) goto jmp_a21d;
	if (local_18 == 0x2) goto jmp_a1ed;
	goto jmp_a1dd;
jmp_a1dd:
	trap_S_StartSound(0x0, *(int *)local_1c, 0x5, bss_10432c);
	goto jmp_a21d;
jmp_a1ed:
	local_24 = *(int *)(arg_0 + 0xa8);
	local_34 = local_24;
	if (local_34 < 0x0) goto jmp_a20f;
	if (local_34 >= 0x40) goto jmp_a20f;
	*(int *)local_28 = ((0x6b4 * local_24) + 0xe8c24);
	*(int *)(*(int *)local_28 + 0x98) = bss_dc760;
jmp_a20f:
	trap_S_StartSound(0x0, *(int *)local_1c, 0x5, bss_104468);
jmp_a21d:
}

/*
=================
CG_ItemPickup

Address: 0xa21f
Stack Size: 0x8
Called by: CG_EntityEvent
=================
*/
void CG_ItemPickup(int arg_0) {

	bss_deae8 = arg_0;
	bss_deaec = bss_dc760;
	bss_deaf0 = bss_dc760;
	if (*(int *)((0x34 * arg_0) + 0x5b0) != 0x1) goto jmp_a24f;
	if (bss_9fd8 == 0x0) goto jmp_a24f;
	if (*(int *)((0x34 * arg_0) + 0x5b4) == 0x2) goto jmp_a24f;
	bss_deaf4 = bss_dc760;
	bss_dcc90 = *(int *)((0x34 * arg_0) + 0x5b4);
jmp_a24f:
}

/*
=================
CG_WaterLevel

Address: 0xa251
Stack Size: 0x48
Calls: CG_PointContents
Called by: CG_EntityEvent, CG_PainEvent
=================
*/
int CG_WaterLevel(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[12];
	int		local_3c;
	int		local_40;
	int		local_44;

	arg_0 = arg_0;
	local_20 = (*(int *)(arg_0 + 0xc4) & 0xffffff7f);
	if (local_20 == 0xd) goto jmp_a267;
	if (local_20 != 0x17) goto jmp_a26c;
jmp_a267:
	local_28 = 0xc;
	goto jmp_a26f;
jmp_a26c:
	local_28 = 0x1a;
jmp_a26f:
	local_24 = 0x0;
	local_10 = *(int *)(arg_0 + 0x2b4);
	local_14 = *(int *)(arg_0 + 0x2b8);
	local_18 = ((*(int *)(arg_0 + 0x2bc) + 0xc1c00000) + 0x3f800000);
	local_3c = CG_PointContents(&local_10, 0xffffffff);
	local_1c = local_3c;
	if ((local_1c & 0x38) == 0x0) goto jmp_a2f0;
	local_2c = (local_28 - 0xffffffe8);
	*(int *)local_30 = (local_2c / 0x2);
	local_24 = 0x1;
	local_18 = ((*(int *)(arg_0 + 0x2bc) + 0xc1c00000) + (float)*(int *)local_30);
	local_40 = CG_PointContents(&local_10, 0xffffffff);
	local_1c = local_40;
	if ((local_1c & 0x38) == 0x0) goto jmp_a2f0;
	local_24 = 0x2;
	local_18 = ((*(int *)(arg_0 + 0x2bc) + 0xc1c00000) + (float)local_2c);
	local_44 = CG_PointContents(&local_10, 0xffffffff);
	local_1c = local_44;
	if ((local_1c & 0x38) == 0x0) goto jmp_a2f0;
	local_24 = 0x3;
jmp_a2f0:
	return local_24;
}

/*
=================
CG_PainEvent

Address: 0xa2f5
Stack Size: 0x28
Calls: trap_S_StartSound, CG_CustomSound, rand, CG_WaterLevel
Called by: CG_CheckLocalSounds, CG_EntityEvent
=================
*/
void CG_PainEvent(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	if ((bss_dc760 - *(int *)(arg_0 + 0x254)) >= 0x1f4) goto jmp_a306;
	goto jmp_a39b;
jmp_a306:
	if (arg_1 >= 0x19) goto jmp_a30f;
	local_18 = 0x59c6;
	goto jmp_a324;
jmp_a30f:
	if (arg_1 >= 0x32) goto jmp_a318;
	local_18 = 0x59b8;
	goto jmp_a324;
jmp_a318:
	if (arg_1 >= 0x4b) goto jmp_a321;
	local_18 = 0x59aa;
	goto jmp_a324;
jmp_a321:
	local_18 = 0x599b;
jmp_a324:
	local_1c = CG_WaterLevel(arg_0);
	if (local_1c != 0x3) goto jmp_a36d;
	local_20 = rand();
	if ((local_20 & 0x1) == 0x0) goto jmp_a353;
	local_24 = CG_CustomSound(*(int *)arg_0, 0x5984);
	trap_S_StartSound(0x0, *(int *)arg_0, 0x3, local_24);
	goto jmp_a386;
jmp_a353:
	local_24 = CG_CustomSound(*(int *)arg_0, 0x596d);
	trap_S_StartSound(0x0, *(int *)arg_0, 0x3, local_24);
	goto jmp_a386;
jmp_a36d:
	local_20 = CG_CustomSound(*(int *)arg_0, local_18);
	trap_S_StartSound(0x0, *(int *)arg_0, 0x3, local_20);
jmp_a386:
	*(int *)(arg_0 + 0x254) = bss_dc760;
	local_20 = (arg_0 + 0x258);
	*(int *)local_20 = (*(int *)local_20 ^ 0x1);
jmp_a39b:
}

/*
=================
CG_EntityEvent

Address: 0xa39d
Stack Size: 0xa4
Calls: trap_S_StopLoopingSound, trap_S_RegisterSound, trap_S_StartSound, CG_Error, CG_Beam, CG_GibPlayer, CG_Obituary, va, CG_WaterLevel, CG_PainEvent, CG_AddBufferedSound, CG_ConfigString, CG_ShotgunFire, CG_Bullet, CG_RailTrail, CG_MissileHitWall, CG_MissileHitPlayer, ByteToDir, CG_ScorePlum, CG_SpawnEffect, CG_UseItem, CG_FireWeapon, CG_OutOfAmmoChange, CG_ItemPickup, CG_SmokePuff, CG_CustomSound, rand, CG_Printf
Called by: CG_CheckChangedPredictableEvents, CG_CheckPlayerstateEvents, CG_CheckEvents
=================
*/
void CG_EntityEvent(int arg_0, int arg_1) {
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	char	local_48[12];
	char	local_54[12];
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;
	int		local_a0;

	arg_0 = arg_0;
	local_38 = arg_0;
	local_40 = (*(int *)(local_38 + 0xb4) & 0xfffffcff);
	if (bss_b2f8 == 0x0) goto jmp_a3bf;
	CG_Printf(0x5959, *(int *)local_38, local_40);
jmp_a3bf:
	if (local_40 != 0x0) goto jmp_a3ce;
	if (bss_b2f8 == 0x0) goto jmp_ae93;
	CG_Printf(0x594e);
	goto jmp_ae93;
jmp_a3ce:
	local_3c = *(int *)(local_38 + 0xa8);
	if (local_3c < 0x0) goto jmp_a3dd;
	if (local_3c < 0x40) goto jmp_a3e0;
jmp_a3dd:
	local_3c = 0x0;
jmp_a3e0:
	local_44 = ((0x6b4 * local_3c) + 0xe8c24);
	if (local_40 < 0x1) goto jmp_ae82;
	if (local_40 > 0x4c) goto jmp_ae82;
	goto *(int *)((local_40 << 0x2) + 0x18e0);
	if (bss_b2f8 == 0x0) goto jmp_a401;
	CG_Printf(0x5941);
jmp_a401:
	if (bss_ac98 == 0x0) goto jmp_ae93;
	local_60 = rand();
	trap_S_StartSound(0x0, *(int *)local_38, 0x5, *(int *)(((local_60 & 0x3) << 0x2) + ((*(int *)(local_44 + 0x204) << 0x4) + 0x104334)));
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a431;
	CG_Printf(0x592e);
jmp_a431:
	if (bss_ac98 == 0x0) goto jmp_ae93;
	local_60 = rand();
	trap_S_StartSound(0x0, *(int *)local_38, 0x5, *(int *)(((local_60 & 0x3) << 0x2) + 0x104384));
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a459;
	CG_Printf(0x591f);
jmp_a459:
	if (bss_ac98 == 0x0) goto jmp_ae93;
	local_60 = rand();
	trap_S_StartSound(0x0, *(int *)local_38, 0x5, *(int *)(((local_60 & 0x3) << 0x2) + 0x104394));
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a481;
	CG_Printf(0x5912);
jmp_a481:
	if (bss_ac98 == 0x0) goto jmp_ae93;
	local_60 = rand();
	trap_S_StartSound(0x0, *(int *)local_38, 0x5, *(int *)(((local_60 & 0x3) << 0x2) + 0x104394));
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a4a9;
	CG_Printf(0x5909);
jmp_a4a9:
	if (bss_ac98 == 0x0) goto jmp_ae93;
	local_60 = rand();
	trap_S_StartSound(0x0, *(int *)local_38, 0x5, *(int *)(((local_60 & 0x3) << 0x2) + 0x104394));
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a4d1;
	CG_Printf(0x58fa);
jmp_a4d1:
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_1043e8);
	if (local_3c != bss_dc80c) goto jmp_ae93;
	bss_dcc88 = 0xc1000000;
	bss_dcc8c = bss_dc760;
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a4f6;
	CG_Printf(0x58ea);
jmp_a4f6:
	local_60 = CG_CustomSound(*(int *)local_38, 0x599b);
	trap_S_StartSound(0x0, *(int *)local_38, 0x3, local_60);
	if (local_3c != bss_dc80c) goto jmp_ae93;
	bss_dcc88 = 0xc1800000;
	bss_dcc8c = bss_dc760;
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a525;
	CG_Printf(0x58dd);
jmp_a525:
	local_64 = CG_CustomSound(*(int *)local_38, 0x58d2);
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, local_64);
	*(int *)(arg_0 + 0x254) = bss_dc760;
	if (local_3c != bss_dc80c) goto jmp_ae93;
	bss_dcc88 = 0xc1c00000;
	bss_dcc8c = bss_dc760;
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a55b;
	CG_Printf(0x58c9);
jmp_a55b:
	if (local_3c == bss_dc80c) goto jmp_a562;
	goto jmp_ae93;
jmp_a562:
	local_74 = 0x0;
	if (bss_c2314 != local_74) goto jmp_a57e;
	if ((*(int *)(bss_c2330 + 0x38) & 0x1000) != local_74) goto jmp_a57e;
	if (bss_afc8 != local_74) goto jmp_a57e;
	if (bss_9538 == local_74) goto jmp_a580;
jmp_a57e:
	goto jmp_ae93;
jmp_a580:
	local_68 = (bss_dc760 - bss_dcc7c);
	if (local_68 >= 0xc8) goto jmp_a599;
	local_6c = ((bss_dcc78 * (float)(0xc8 - local_68)) / 0x43480000);
	goto jmp_a59c;
jmp_a599:
	local_6c = 0x0;
jmp_a59c:
	local_70 = (((local_40 << 0x2) - 0x18) + 0x4);
	bss_dcc78 = (local_6c + (float)local_70);
	if (bss_dcc78 <= 0x42000000) goto jmp_a5b5;
	bss_dcc78 = 0x42000000;
jmp_a5b5:
	bss_dcc7c = bss_dc760;
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a5c4;
	CG_Printf(0x58bc);
jmp_a5c4:
	block_copy(global_18d8, &local_68, 0xc);
#define next_call_arg_0 "(arg_0 + 0x2b4)"
#define next_call_arg_1 "&local_68"
#define next_call_arg_2 "0x42000000"
	local_74 = 0x3f800000;
#define next_call_arg_3 "local_74"
#define next_call_arg_4 "local_74"
#define next_call_arg_5 "local_74"
#define next_call_arg_6 "0x3ea8f5c3"
#define next_call_arg_7 "0x447a0000"
#define next_call_arg_8 "bss_dc760"
#define next_call_arg_9 "0x0"
#define next_call_arg_10 "0x1"
#define next_call_arg_11 "bss_104230"
	CG_SmokePuff();
	trap_S_StartSound((arg_0 + 0x2b4), 0xffffffff, 0x3, bss_1043f0);
	local_68 = CG_CustomSound(*(int *)local_38, 0x58b1);
	trap_S_StartSound(0x0, *(int *)local_38, 0x3, local_68);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a61f;
	CG_Printf(0x58a8);
jmp_a61f:
	local_6c = CG_CustomSound(*(int *)local_38, 0x58b1);
	trap_S_StartSound(0x0, *(int *)local_38, 0x3, local_6c);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a642;
	CG_Printf(0x589e);
jmp_a642:
	local_70 = CG_CustomSound(*(int *)local_38, 0x5893);
	trap_S_StartSound(0x0, *(int *)local_38, 0x3, local_70);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a665;
	CG_Printf(0x5883);
jmp_a665:
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_104458);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a67e;
	CG_Printf(0x5873);
jmp_a67e:
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_10445c);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a697;
	CG_Printf(0x5863);
jmp_a697:
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_104460);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a6b0;
	CG_Printf(0x5853);
jmp_a6b0:
	local_74 = CG_CustomSound(*(int *)local_38, 0x5849);
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, local_74);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a6d3;
	CG_Printf(0x5839);
jmp_a6d3:
	local_78 = *(int *)(local_38 + 0xb8);
	local_80 = local_78;
	if (local_80 < 0x1) goto jmp_a6e7;
	if (local_80 < bg_numItems) goto jmp_a6e9;
jmp_a6e7:
	goto jmp_ae93;
jmp_a6e9:
	local_7c = ((0x34 * local_78) + 0x58c);
	local_84 = *(int *)(local_7c + 0x24);
	if (local_84 == 0x5) goto jmp_a700;
	if (local_84 != 0x8) goto jmp_a710;
jmp_a700:
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_1044d0);
	goto jmp_a733;
jmp_a710:
	if (*(int *)(local_7c + 0x24) != 0x7) goto jmp_a719;
	goto jmp_a733;
jmp_a719:
	local_88 = trap_S_RegisterSound(*(int *)(local_7c + 0x4), 0x0);
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, local_88);
jmp_a733:
	if (*(int *)local_38 != *(int *)(bss_c2330 + 0xb8)) goto jmp_ae93;
	CG_ItemPickup(local_78);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a74d;
	CG_Printf(0x5822);
jmp_a74d:
	local_78 = *(int *)(local_38 + 0xb8);
	local_80 = local_78;
	if (local_80 < 0x1) goto jmp_a761;
	if (local_80 < bg_numItems) goto jmp_a763;
jmp_a761:
	goto jmp_ae93;
jmp_a763:
	local_7c = ((0x34 * local_78) + 0x58c);
	if (*(int *)(local_7c + 0x4) == 0x0) goto jmp_a78e;
	local_84 = trap_S_RegisterSound(*(int *)(local_7c + 0x4), 0x0);
	trap_S_StartSound(0x0, *(int *)(bss_c2330 + 0xb8), 0x0, local_84);
jmp_a78e:
	if (*(int *)local_38 != *(int *)(bss_c2330 + 0xb8)) goto jmp_ae93;
	CG_ItemPickup(local_78);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a7a8;
	CG_Printf(0x5817);
jmp_a7a8:
	if (*(int *)local_38 != *(int *)(bss_c2330 + 0xb8)) goto jmp_ae93;
	CG_OutOfAmmoChange();
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a7bf;
	CG_Printf(0x5805);
jmp_a7bf:
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_104328);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a7d8;
	CG_Printf(0x57f5);
jmp_a7d8:
	CG_FireWeapon(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a7e9;
	CG_Printf(0x57e7);
jmp_a7e9:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a7fa;
	CG_Printf(0x57d9);
jmp_a7fa:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a80b;
	CG_Printf(0x57cb);
jmp_a80b:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a81c;
	CG_Printf(0x57bd);
jmp_a81c:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a82d;
	CG_Printf(0x57af);
jmp_a82d:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a83e;
	CG_Printf(0x57a1);
jmp_a83e:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a84f;
	CG_Printf(0x5793);
jmp_a84f:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a860;
	CG_Printf(0x5785);
jmp_a860:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a871;
	CG_Printf(0x5777);
jmp_a871:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a882;
	CG_Printf(0x5769);
jmp_a882:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a893;
	CG_Printf(0x575a);
jmp_a893:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a8a4;
	CG_Printf(0x574b);
jmp_a8a4:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a8b5;
	CG_Printf(0x573c);
jmp_a8b5:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a8c6;
	CG_Printf(0x572d);
jmp_a8c6:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a8d7;
	CG_Printf(0x571e);
jmp_a8d7:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a8e8;
	CG_Printf(0x570f);
jmp_a8e8:
	CG_UseItem(arg_0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a8f9;
	CG_Printf(0x56f8);
jmp_a8f9:
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_1043d4);
	CG_SpawnEffect(arg_1);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a918;
	CG_Printf(0x56e0);
jmp_a918:
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_1043d8);
	CG_SpawnEffect(arg_1);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a937;
	CG_Printf(0x56d3);
jmp_a937:
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_1043e0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a950;
	CG_Printf(0x56c2);
jmp_a950:
	*(int *)(arg_0 + 0x1bc) = bss_dc760;
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_1043e0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a970;
	CG_Printf(0x56af);
jmp_a970:
	local_78 = rand();
	if ((local_78 & 0x1) == 0x0) goto jmp_a98a;
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_1044d4);
	goto jmp_ae93;
jmp_a98a:
	trap_S_StartSound(0x0, *(int *)local_38, 0x0, bss_1044d8);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a9a3;
	CG_Printf(0x56a1);
jmp_a9a3:
	CG_ScorePlum(*(int *)(arg_0 + 0x8c), (arg_0 + 0x2b4), *(int *)(arg_0 + 0x54));
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a9c2;
	CG_Printf(0x5691);
jmp_a9c2:
	ByteToDir(*(int *)(local_38 + 0xb8), local_48);
	CG_MissileHitPlayer(*(int *)(local_38 + 0xc0), arg_1, local_48, *(int *)(local_38 + 0x8c));
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_a9ec;
	CG_Printf(0x5680);
jmp_a9ec:
	ByteToDir(*(int *)(local_38 + 0xb8), local_48);
#define next_call_arg_0 "*(int *)(local_38 + 0xc0)"
	local_84 = 0x0;
#define next_call_arg_1 "local_84"
#define next_call_arg_2 "arg_1"
#define next_call_arg_3 "local_48"
#define next_call_arg_4 "local_84"
	CG_MissileHitWall();
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_aa19;
	CG_Printf(0x5669);
jmp_aa19:
	ByteToDir(*(int *)(local_38 + 0xb8), local_48);
	CG_MissileHitWall(*(int *)(local_38 + 0xc0), 0x0, arg_1, local_48, 0x1);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_aa41;
	CG_Printf(0x565b);
jmp_aa41:
	*(int *)(arg_0 + 0xc0) = 0x7;
	if (*(int *)(local_38 + 0xa8) != *(int *)(bss_c2330 + 0xb8)) goto jmp_aac6;
	if (bss_dc778 != 0x0) goto jmp_aac6;
	if (bss_a528 != 0x2) goto jmp_aa8f;
	local_88 = (local_38 + 0x68);
	*(int *)local_88 = (*(int *)local_88 + (0x41000000 * bss_dcd24));
	local_8c = (local_38 + 0x6c);
	*(int *)local_8c = (*(int *)local_8c + (0x41000000 * bss_dcd28));
	local_90 = (local_38 + 0x70);
	*(int *)local_90 = (*(int *)local_90 + (0x41000000 * bss_dcd2c));
	goto jmp_aac6;
jmp_aa8f:
	if (bss_a528 != 0x3) goto jmp_aac6;
	local_94 = (local_38 + 0x68);
	*(int *)local_94 = (*(int *)local_94 + (0x40800000 * bss_dcd24));
	local_98 = (local_38 + 0x6c);
	*(int *)local_98 = (*(int *)local_98 + (0x40800000 * bss_dcd28));
	local_9c = (local_38 + 0x70);
	*(int *)local_9c = (*(int *)local_9c + (0x40800000 * bss_dcd2c));
jmp_aac6:
	CG_RailTrail(local_44, (local_38 + 0x68), (local_38 + 0x18));
	if (*(int *)(local_38 + 0xb8) == 0xff) goto jmp_ae93;
	ByteToDir(*(int *)(local_38 + 0xb8), local_48);
	CG_MissileHitWall(*(int *)(local_38 + 0xc0), *(int *)(local_38 + 0xa8), arg_1, local_48, 0x0);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ab09;
	CG_Printf(0x5647);
jmp_ab09:
	ByteToDir(*(int *)(local_38 + 0xb8), local_48);
	CG_Bullet((local_38 + 0x18), *(int *)(local_38 + 0x8c), local_48, 0x0, 0x3fe);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ab33;
	CG_Printf(0x5632);
jmp_ab33:
	CG_Bullet((local_38 + 0x18), *(int *)(local_38 + 0x8c), local_48, 0x1, *(int *)(local_38 + 0xb8));
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ab56;
	CG_Printf(0x5626);
jmp_ab56:
	CG_ShotgunFire(local_38);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ab67;
	CG_Printf(0x5614);
jmp_ab67:
	if (*(int *)((*(int *)(local_38 + 0xb8) << 0x2) + 0xe7820) == 0x0) goto jmp_ab8b;
	trap_S_StartSound(0x0, *(int *)local_38, 0x3, *(int *)((*(int *)(local_38 + 0xb8) << 0x2) + 0xe7820));
	goto jmp_ae93;
jmp_ab8b:
	local_94 = CG_ConfigString((*(int *)(local_38 + 0xb8) + 0x120));
	*(int *)local_54 = local_94;
	local_98 = CG_CustomSound(*(int *)local_38, *(int *)local_54);
	trap_S_StartSound(0x0, *(int *)local_38, 0x3, local_98);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_abbf;
	CG_Printf(0x5603);
jmp_abbf:
	if (*(int *)((*(int *)(local_38 + 0xb8) << 0x2) + 0xe7820) == 0x0) goto jmp_abea;
#define next_call_arg_0 "0x0"
	local_94 = 0xb8;
#define next_call_arg_1 "*(int *)(bss_c2330 + local_94)"
#define next_call_arg_2 "0x0"
#define next_call_arg_3 "*(int *)((*(int *)(local_38 + local_94) << 0x2) + 0xe7820)"
	trap_S_StartSound();
	goto jmp_ae93;
jmp_abea:
	local_94 = CG_ConfigString((*(int *)(local_38 + 0xb8) + 0x120));
	*(int *)local_54 = local_94;
	local_98 = CG_CustomSound(*(int *)local_38, *(int *)local_54);
	trap_S_StartSound(0x0, *(int *)(bss_c2330 + 0xb8), 0x0, local_98);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ac20;
	CG_Printf(0x55ed);
jmp_ac20:
	local_94 = *(int *)(local_38 + 0xb8);
	if (local_94 < 0x0) goto jmp_ae93;
	if (local_94 > 0xc) goto jmp_ae93;
	goto *(int *)((local_94 << 0x2) + 0x1a14);
	if (*(int *)(bss_c2330 + 0x130) != 0x1) goto jmp_ac46;
	CG_AddBufferedSound(bss_104484);
	goto jmp_ae93;
jmp_ac46:
	CG_AddBufferedSound(bss_104488);
	goto jmp_ae93;
	if (*(int *)(bss_c2330 + 0x130) != 0x2) goto jmp_ac5d;
	CG_AddBufferedSound(bss_104484);
	goto jmp_ae93;
jmp_ac5d:
	CG_AddBufferedSound(bss_104488);
	goto jmp_ae93;
	if (*(int *)(bss_c2330 + 0x130) != 0x1) goto jmp_ac74;
	CG_AddBufferedSound(bss_10448c);
	goto jmp_ac7a;
jmp_ac74:
	CG_AddBufferedSound(bss_104490);
jmp_ac7a:
	CG_AddBufferedSound(bss_1044a0);
	goto jmp_ae93;
	if (*(int *)(bss_c2330 + 0x130) != 0x2) goto jmp_ac91;
	CG_AddBufferedSound(bss_10448c);
	goto jmp_ac97;
jmp_ac91:
	CG_AddBufferedSound(bss_104490);
jmp_ac97:
	CG_AddBufferedSound(bss_10449c);
	goto jmp_ae93;
	local_9c = 0x0;
	if (*(int *)(bss_c2330 + 0x184) != local_9c) goto jmp_acb2;
	if (*(int *)(bss_c2330 + 0x188) == local_9c) goto jmp_acb4;
jmp_acb2:
	goto jmp_ae93;
jmp_acb4:
	if (*(int *)(bss_c2330 + 0x130) != 0x2) goto jmp_acc3;
	CG_AddBufferedSound(bss_1044a4);
	goto jmp_ae93;
jmp_acc3:
	if (*(int *)(bss_c2330 + 0x130) != 0x1) goto jmp_ae93;
	CG_AddBufferedSound(bss_1044a8);
	goto jmp_ae93;
	local_a0 = 0x0;
	if (*(int *)(bss_c2330 + 0x180) != local_a0) goto jmp_ace5;
	if (*(int *)(bss_c2330 + 0x188) == local_a0) goto jmp_ace7;
jmp_ace5:
	goto jmp_ae93;
jmp_ace7:
	if (*(int *)(bss_c2330 + 0x130) != 0x1) goto jmp_acf6;
	CG_AddBufferedSound(bss_1044a4);
	goto jmp_ae93;
jmp_acf6:
	if (*(int *)(bss_c2330 + 0x130) != 0x2) goto jmp_ae93;
	CG_AddBufferedSound(bss_1044a8);
	goto jmp_ae93;
	CG_AddBufferedSound(bss_104470);
	goto jmp_ae93;
	CG_AddBufferedSound(bss_104474);
	goto jmp_ae93;
	CG_AddBufferedSound(bss_104478);
	goto jmp_ae93;
	CG_AddBufferedSound(bss_10447c);
	goto jmp_ae93;
	CG_AddBufferedSound(bss_104480);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ad36;
	CG_Printf(0x55e4);
jmp_ad36:
	if (*(int *)arg_0 == *(int *)(bss_c2330 + 0xb8)) goto jmp_ae93;
	CG_PainEvent(arg_0, *(int *)(local_38 + 0xb8));
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ad56;
	CG_Printf(0x55d9);
jmp_ad56:
	local_94 = CG_WaterLevel(arg_0);
	if (local_94 != 0x3) goto jmp_ad7b;
	local_98 = CG_CustomSound(*(int *)local_38, 0x55ce);
	trap_S_StartSound(0x0, *(int *)local_38, 0x3, local_98);
	goto jmp_ae93;
jmp_ad7b:
	local_98 = va(0x55c1, ((local_40 - 0x39) + 0x1));
	local_9c = CG_CustomSound(*(int *)local_38, local_98);
	trap_S_StartSound(0x0, *(int *)local_38, 0x3, local_9c);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_adac;
	CG_Printf(0x55b4);
jmp_adac:
	CG_Obituary(local_38);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_adbd;
	CG_Printf(0x55a3);
jmp_adbd:
	if (*(int *)local_38 != *(int *)(bss_c2330 + 0xb8)) goto jmp_adcd;
	bss_de9f4 = 0x1;
	bss_de9f8 = bss_dc760;
jmp_adcd:
	trap_S_StartSound(0x0, *(int *)local_38, 0x4, bss_104320);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ade6;
	CG_Printf(0x558c);
jmp_ade6:
	if (*(int *)local_38 != *(int *)(bss_c2330 + 0xb8)) goto jmp_adf6;
	bss_de9f4 = 0x2;
	bss_de9f8 = bss_dc760;
jmp_adf6:
	trap_S_StartSound(0x0, *(int *)local_38, 0x4, bss_1044cc);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ae0f;
	CG_Printf(0x557a);
jmp_ae0f:
	if (*(int *)local_38 != *(int *)(bss_c2330 + 0xb8)) goto jmp_ae1f;
	bss_de9f4 = 0x5;
	bss_de9f8 = bss_dc760;
jmp_ae1f:
	trap_S_StartSound(0x0, *(int *)local_38, 0x4, bss_1044c8);
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ae38;
	CG_Printf(0x556b);
jmp_ae38:
	if ((*(int *)(local_38 + 0x8) & 0x200) != 0x0) goto jmp_ae4f;
	trap_S_StartSound(0x0, *(int *)local_38, 0x5, bss_1043c4);
jmp_ae4f:
	CG_GibPlayer((arg_0 + 0x2b4));
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ae62;
	CG_Printf(0x5556);
jmp_ae62:
	trap_S_StopLoopingSound(*(int *)local_38);
	*(int *)(local_38 + 0x9c) = 0x0;
	goto jmp_ae93;
	if (bss_b2f8 == 0x0) goto jmp_ae7a;
	CG_Printf(0x5547);
jmp_ae7a:
	CG_Beam(arg_0);
	goto jmp_ae93;
jmp_ae82:
	if (bss_b2f8 == 0x0) goto jmp_ae8b;
	CG_Printf(0x553e);
jmp_ae8b:
	CG_Error(0x552c, local_40);
jmp_ae93:
}

/*
=================
CG_CheckEvents

Address: 0xae95
Stack Size: 0x1c
Calls: CG_EntityEvent, CG_SetEntitySoundPosition, BG_EvaluateTrajectory
Called by: CG_SetInitialSnapshot, CG_TransitionEntity
=================
*/
void CG_CheckEvents(int arg_0) {

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x4) <= 0xd) goto jmp_aecf;
	if (*(int *)(arg_0 + 0x1ac) == 0x0) goto jmp_aeaa;
	goto jmp_af15;
jmp_aeaa:
	if ((*(int *)(arg_0 + 0x8) & 0x10) == 0x0) goto jmp_aebb;
	*(int *)arg_0 = *(int *)(arg_0 + 0x8c);
jmp_aebb:
	*(int *)(arg_0 + 0x1ac) = 0x1;
	*(int *)(arg_0 + 0xb4) = (*(int *)(arg_0 + 0x4) - 0xd);
	goto jmp_aef1;
jmp_aecf:
	if (*(int *)(arg_0 + 0xb4) != *(int *)(arg_0 + 0x1ac)) goto jmp_aedc;
	goto jmp_af15;
jmp_aedc:
	*(int *)(arg_0 + 0x1ac) = *(int *)(arg_0 + 0xb4);
	if ((*(int *)(arg_0 + 0xb4) & 0xfffffcff) != 0x0) goto jmp_aef1;
	goto jmp_af15;
jmp_aef1:
	BG_EvaluateTrajectory((arg_0 + 0xc), *(int *)(bss_c2330 + 0x8), (arg_0 + 0x2b4));
	CG_SetEntitySoundPosition(arg_0);
	CG_EntityEvent(arg_0, (arg_0 + 0x2b4));
jmp_af15:
}

/*
=================
CG_DrawLoadingIcons

Address: 0xaf17
Stack Size: 0x30
Calls: CG_DrawPic
Called by: CG_DrawInformation
=================
*/
void CG_DrawLoadingIcons(void) {
	int		local_1c;
	int		local_20;
	char	local_24[8];
	int		local_2c;

	local_1c = 0x0;
	goto jmp_af4a;
jmp_af1d:
	*(int *)local_24 = ((0x4e * local_1c) + 0x10);
	local_20 = 0x11c;
#define next_call_arg_0 "(float)*(int *)local_24"
#define next_call_arg_1 "(float)local_20"
	local_2c = 0x42800000;
#define next_call_arg_2 "local_2c"
#define next_call_arg_3 "local_2c"
#define next_call_arg_4 "*(int *)((local_1c << 0x2) + 0x104fe4)"
	CG_DrawPic();
	local_1c = (local_1c + 0x1);
jmp_af4a:
	if (local_1c < loadingPlayerIconCount) goto jmp_af1d;
	local_1c = 0x0;
	goto jmp_af8d;
jmp_af54:
	local_20 = 0x168;
	if (local_1c < 0xd) goto jmp_af61;
	local_20 = (local_20 + 0x28);
jmp_af61:
	*(int *)local_24 = ((0x30 * (local_1c %% 0xd)) + 0x10);
#define next_call_arg_0 "(float)*(int *)local_24"
#define next_call_arg_1 "(float)local_20"
	local_2c = 0x42000000;
#define next_call_arg_2 "local_2c"
#define next_call_arg_3 "local_2c"
#define next_call_arg_4 "*(int *)((local_1c << 0x2) + 0x104f7c)"
	CG_DrawPic();
	local_1c = (local_1c + 0x1);
jmp_af8d:
	if (local_1c < loadingItemIconCount) goto jmp_af54;
}

/*
=================
CG_LoadingString

Address: 0xaf94
Stack Size: 0x14
Calls: trap_UpdateScreen, Q_strncpyz
Called by: CG_LoadingClient, CG_LoadingItem, CG_Init, CG_RegisterGraphics
=================
*/
void CG_LoadingString(int arg_0) {

	Q_strncpyz(0xdce7c, arg_0, 0x400);
	trap_UpdateScreen();
}

/*
=================
CG_LoadingItem

Address: 0xafa4
Stack Size: 0x1c
Calls: trap_R_RegisterShaderNoMip, CG_LoadingString
Called by: CG_RegisterGraphics
=================
*/
void CG_LoadingItem(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;

	local_c = ((0x34 * arg_0) + 0x58c);
	if (*(int *)(local_c + 0x18) == 0x0) goto jmp_afda;
	if (loadingItemIconCount >= 0x1a) goto jmp_afda;
	local_14 = 0x105024;
	local_10 = *(int *)local_14;
	*(int *)local_14 = (local_10 + 0x1);
	local_18 = trap_R_RegisterShaderNoMip(*(int *)(local_c + 0x18));
	*(int *)((local_10 << 0x2) + 0x104f7c) = local_18;
jmp_afda:
	CG_LoadingString(*(int *)(local_c + 0x1c));
}

/*
=================
CG_LoadingClient

Address: 0xafe5
Stack Size: 0xf8
Calls: trap_S_RegisterSound, trap_R_RegisterShaderNoMip, CG_LoadingString, va, Q_CleanStr, Com_sprintf, strrchr, Q_strncpyz, Info_ValueForKey, CG_ConfigString
Called by: CG_RegisterClients
=================
*/
void CG_LoadingClient(int arg_0) {
	char	local_1c[64];
	int		local_5c;
	int		local_60;
	char	local_64[64];
	char	local_a4[64];
	int		local_e4;
	int		local_e8;
	int		local_ec;
	int		local_f0;
	int		local_f4;

	local_e4 = CG_ConfigString((arg_0 + 0x220));
	local_5c = local_e4;
	if (loadingPlayerIconCount >= 0x10) goto jmp_b0a9;
	local_e8 = Info_ValueForKey(local_5c, 0x5ef0);
	Q_strncpyz(local_64, local_e8, 0x40);
	local_ec = strrchr(local_64, 0x2f);
	local_60 = local_ec;
	if (local_60 == 0x0) goto jmp_b02a;
	local_f0 = local_60;
	local_60 = (local_f0 + 0x1);
	*(char *)local_f0 = 0x0;
	goto jmp_b02d;
jmp_b02a:
	local_60 = 0x5ee8;
jmp_b02d:
	Com_sprintf(local_a4, 0x40, 0x5eca, local_64, local_60);
	local_f0 = trap_R_RegisterShaderNoMip(local_a4);
	*(int *)((loadingPlayerIconCount << 0x2) + 0x104fe4) = local_f0;
	if (*(int *)((loadingPlayerIconCount << 0x2) + 0x104fe4) != 0x0) goto jmp_b070;
	Com_sprintf(local_a4, 0x40, 0x5ea1, local_64, local_60);
	local_f4 = trap_R_RegisterShaderNoMip(local_a4);
	*(int *)((loadingPlayerIconCount << 0x2) + 0x104fe4) = local_f4;
jmp_b070:
	if (*(int *)((loadingPlayerIconCount << 0x2) + 0x104fe4) != 0x0) goto jmp_b095;
	Com_sprintf(local_a4, 0x40, 0x5eca, 0x5e9b, 0x5ee8);
	local_f4 = trap_R_RegisterShaderNoMip(local_a4);
	*(int *)((loadingPlayerIconCount << 0x2) + 0x104fe4) = local_f4;
jmp_b095:
	if (*(int *)((loadingPlayerIconCount << 0x2) + 0x104fe4) == 0x0) goto jmp_b0a9;
	local_f4 = 0x105028;
	*(int *)local_f4 = (*(int *)local_f4 + 0x1);
jmp_b0a9:
	local_e8 = Info_ValueForKey(local_5c, 0x5e99);
	Q_strncpyz(local_1c, local_e8, 0x40);
	Q_CleanStr(local_1c);
	if (bss_e66f8 != 0x2) goto jmp_b0d5;
	local_ec = va(0x5e7c, local_1c);
	trap_S_RegisterSound(local_ec, 0x1);
jmp_b0d5:
	CG_LoadingString(local_1c);
}

/*
=================
CG_DrawInformation

Address: 0xb0dc
Stack Size: 0x490
Calls: trap_Cvar_VariableStringBuffer, trap_R_DrawStretchPic, trap_R_RegisterShader, trap_R_SetColor, trap_R_RegisterShaderNoMip, Q_CleanStr, Q_strncpyz, atoi, UI_DrawProportionalString, CG_DrawLoadingIcons, CG_DrawPic, va, Info_ValueForKey, CG_ConfigString
Called by: CG_DrawActiveFrame, CG_DrawActive
=================
*/
void CG_DrawInformation(void) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	char	local_3c[1024];
	int		local_43c;
	int		local_440;
	int		local_444;
	int		local_448;
	int		local_44c;
	int		local_450;
	int		local_454;
	int		local_458;
	int		local_45c;
	int		local_460;
	int		local_464;
	int		local_468;
	int		local_46c;
	int		local_470;
	char	local_474[8];
	int		local_47c;
	int		local_480;
	int		local_484;
	int		local_488;
	int		local_48c;

	local_448 = CG_ConfigString(0x0);
	local_38 = local_448;
	local_44c = CG_ConfigString(0x1);
	local_440 = local_44c;
	local_450 = Info_ValueForKey(local_38, 0x5e74);
	local_2c = local_450;
	local_454 = va(0x5e62, local_2c);
	local_458 = trap_R_RegisterShaderNoMip(local_454);
	local_43c = local_458;
	if (local_43c != 0x0) goto jmp_b120;
	local_45c = trap_R_RegisterShaderNoMip(0x5e4e);
	local_43c = local_45c;
jmp_b120:
	trap_R_SetColor(0x0);
	local_45c = 0x0;
	CG_DrawPic(local_45c, local_45c, 0x44200000, 0x43f00000, local_43c);
	local_460 = trap_R_RegisterShader(0x5e3e);
	local_444 = local_460;
	local_464 = 0x0;
	trap_R_DrawStretchPic(local_464, local_464, (float)bss_e66c4, (float)bss_e66c8, local_464, local_464, 0x40200000, 0x40000000, local_444);
	CG_DrawLoadingIcons();
	if ((char)*(char *)bss_dce7c == 0x0) goto jmp_b183;
	local_468 = va(0x5e30, 0xdce7c);
	UI_DrawProportionalString(0x140, 0x60, local_468, 0x811, 0x1dfc);
	goto jmp_b190;
jmp_b183:
	UI_DrawProportionalString(0x140, 0x60, 0x5e1b, 0x811, 0x1dfc);
jmp_b190:
	local_30 = 0x94;
	trap_Cvar_VariableStringBuffer(0x5e10, local_3c, 0x400);
	local_468 = atoi(local_3c);
	if (local_468 != 0x0) goto jmp_b224;
	local_46c = Info_ValueForKey(local_38, 0x5e04);
	Q_strncpyz(local_3c, local_46c, 0x400);
	Q_CleanStr(local_3c);
	UI_DrawProportionalString(0x140, local_30, local_3c, 0x811, 0x1dfc);
	local_30 = (local_30 + 0x1b);
	local_470 = Info_ValueForKey(local_440, 0x5dfc);
	local_2c = local_470;
	if ((char)*(char *)local_2c != 0x31) goto jmp_b1f9;
	UI_DrawProportionalString(0x140, local_30, 0x5df0, 0x811, 0x1dfc);
	local_30 = (local_30 + 0x1b);
jmp_b1f9:
	*(int *)local_474 = CG_ConfigString(0x4);
	local_2c = *(int *)local_474;
	if ((char)*(char *)local_2c == 0x0) goto jmp_b21e;
	UI_DrawProportionalString(0x140, local_30, local_2c, 0x811, 0x1dfc);
	local_30 = (local_30 + 0x1b);
jmp_b21e:
	local_30 = (local_30 + 0xa);
jmp_b224:
	local_46c = CG_ConfigString(0x3);
	local_2c = local_46c;
	if ((char)*(char *)local_2c == 0x0) goto jmp_b249;
	UI_DrawProportionalString(0x140, local_30, local_2c, 0x811, 0x1dfc);
	local_30 = (local_30 + 0x1b);
jmp_b249:
	local_470 = Info_ValueForKey(local_440, 0x5de6);
	local_2c = local_470;
	if ((char)*(char *)local_2c != 0x31) goto jmp_b270;
	UI_DrawProportionalString(0x140, local_30, 0x5dd3, 0x811, 0x1dfc);
	local_30 = (local_30 + 0x1b);
jmp_b270:
	*(int *)local_474 = bss_e66f8;
	if (*(int *)local_474 < 0x0) goto jmp_b29d;
	if (*(int *)local_474 > 0x4) goto jmp_b29d;
	goto *(int *)((*(int *)local_474 << 0x2) + 0x1a48);
	local_2c = 0x5dc6;
	goto jmp_b2a0;
	local_2c = 0x5db8;
	goto jmp_b2a0;
	local_2c = 0x5dad;
	goto jmp_b2a0;
	local_2c = 0x5d9d;
	goto jmp_b2a0;
	local_2c = 0x5d8c;
	goto jmp_b2a0;
jmp_b29d:
	local_2c = 0x5d7b;
jmp_b2a0:
	UI_DrawProportionalString(0x140, local_30, local_2c, 0x811, 0x1dfc);
	local_30 = (local_30 + 0x1b);
	local_47c = Info_ValueForKey(local_38, 0x5d71);
	local_480 = atoi(local_47c);
	local_34 = local_480;
	if (local_34 == 0x0) goto jmp_b2eb;
	local_484 = va(0x5d64, local_34);
	UI_DrawProportionalString(0x140, local_30, local_484, 0x811, 0x1dfc);
	local_30 = (local_30 + 0x1b);
jmp_b2eb:
	if (bss_e66f8 >= 0x4) goto jmp_b325;
	local_484 = Info_ValueForKey(local_38, 0x5d5a);
	local_488 = atoi(local_484);
	local_34 = local_488;
	if (local_34 == 0x0) goto jmp_b325;
	local_48c = va(0x5d4d, local_34);
	UI_DrawProportionalString(0x140, local_30, local_48c, 0x811, 0x1dfc);
	local_30 = (local_30 + 0x1b);
jmp_b325:
	if (bss_e66f8 < 0x4) goto jmp_b359;
	local_484 = Info_ValueForKey(local_38, 0x5d40);
	local_488 = atoi(local_484);
	local_34 = local_488;
	if (local_34 == 0x0) goto jmp_b359;
	local_48c = va(0x5d30, local_34);
	UI_DrawProportionalString(0x140, local_30, local_48c, 0x811, 0x1dfc);
jmp_b359:
}

/*
=================
CG_InitLocalEntities

Address: 0xb35b
Stack Size: 0x20
Calls: memset
Called by: CG_MapRestart, CG_Init
=================
*/
void CG_InitLocalEntities(void) {
	int		local_14;
	int		local_18;
	int		local_1c;

	memset(0x105154, 0x0, 0x24800);
	bss_105034 = 0x105030;
	local_18 = 0x105030;
	*(int *)local_18 = local_18;
	cg_freeLocalEntities = 0x105154;
	local_14 = 0x0;
jmp_b376:
	local_1c = (0x124 * local_14);
	*(int *)(local_1c + 0x105158) = (local_1c + 0x105278);
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x1ff) goto jmp_b376;
}

/*
=================
CG_FreeLocalEntity

Address: 0xb391
Stack Size: 0x18
Calls: CG_Error
Called by: CG_AddLocalEntities, CG_AddScorePlum, CG_AddFallScaleFade, CG_AddScaleFade, CG_AddMoveScaleFade, CG_AddFragment, CG_AllocLocalEntity
=================
*/
void CG_FreeLocalEntity(int arg_0) {
	char	local_10[8];

	arg_0 = arg_0;
	if (*(int *)arg_0 != 0x0) goto jmp_b3a0;
	CG_Error(0x5f07);
jmp_b3a0:
	*(int *)local_10 = 0x4;
	*(int *)(*(int *)arg_0 + *(int *)local_10) = *(int *)(arg_0 + *(int *)local_10);
	*(int *)*(int *)(arg_0 + 0x4) = *(int *)arg_0;
	*(int *)(arg_0 + 0x4) = cg_freeLocalEntities;
	cg_freeLocalEntities = arg_0;
}

/*
=================
CG_AllocLocalEntity

Address: 0xb3c6
Stack Size: 0x20
Calls: memset, CG_FreeLocalEntity
Called by: CG_PlasmaTrail, CG_RailTrail, CG_ShotgunEjectBrass, CG_MachineGunEjectBrass, CG_LaunchExplode, CG_LaunchGib, CG_Bleed, CG_MakeExplosion, CG_ScorePlum, CG_SpawnEffect, CG_SmokePuff, CG_BubbleTrail
=================
*/
int CG_AllocLocalEntity(void) {
	int		local_14;
	int		local_18;
	int		local_1c;

	if (cg_freeLocalEntities != 0x0) goto jmp_b3d1;
	CG_FreeLocalEntity(cg_activeLocalEntities);
jmp_b3d1:
	local_18 = 0x10502c;
	local_1c = *(int *)local_18;
	local_14 = local_1c;
	*(int *)local_18 = *(int *)(local_1c + 0x4);
	memset(local_14, 0x0, 0x124);
	*(int *)(local_14 + 0x4) = bss_105034;
	*(int *)local_14 = 0x105030;
	*(int *)bss_105034 = local_14;
	bss_105034 = local_14;
	return local_14;
}

/*
=================
CG_BloodTrail

Address: 0xb408
Stack Size: 0x64
Calls: CG_SmokePuff, BG_EvaluateTrajectory
Called by: CG_AddFragment
=================
*/
void CG_BloodTrail(int arg_0) {
	int		local_38;
	int		local_3c;
	char	local_40[12];
	int		local_4c;
	char	local_50[8];
	int		local_58;
	int		local_5c;
	int		local_60;

	arg_0 = arg_0;
	local_4c = 0x96;
	local_38 = (local_4c * (((bss_dc760 - bss_dc75c) + local_4c) / local_4c));
	*(int *)local_50 = (local_4c * (bss_dc760 / local_4c));
	goto jmp_b47a;
jmp_b42c:
	BG_EvaluateTrajectory((arg_0 + 0x20), local_38, local_40);
#define next_call_arg_0 "local_40"
#define next_call_arg_1 "0x1d5c"
#define next_call_arg_2 "0x41a00000"
	local_58 = 0x3f800000;
#define next_call_arg_3 "local_58"
#define next_call_arg_4 "local_58"
#define next_call_arg_5 "local_58"
#define next_call_arg_6 "local_58"
#define next_call_arg_7 "0x44fa0000"
#define next_call_arg_8 "local_38"
	local_5c = 0x0;
#define next_call_arg_9 "local_5c"
#define next_call_arg_10 "local_5c"
#define next_call_arg_11 "bss_104244"
	local_60 = CG_SmokePuff();
	local_3c = local_60;
	*(int *)(local_3c + 0x8) = 0x5;
	*(int *)(local_3c + 0x40) = 0x42200000;
	local_38 = (local_38 + local_4c);
jmp_b47a:
	if (local_38 <= *(int *)local_50) goto jmp_b42c;
}

/*
=================
CG_FragmentBounceMark

Address: 0xb481
Stack Size: 0x48
Calls: CG_ImpactMark, rand
Called by: CG_AddFragment
=================
*/
void CG_FragmentBounceMark(int arg_0, int arg_1) {
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;

	if (*(int *)(arg_0 + 0x90) != 0x2) goto jmp_b4d0;
	local_38 = rand();
	local_34 = ((local_38 & 0x1f) + 0x10);
	local_3c = rand();
#define next_call_arg_0 "bss_104290"
	local_40 = arg_1;
#define next_call_arg_1 "(local_40 + 0xc)"
#define next_call_arg_2 "(local_40 + 0x18)"
#define next_call_arg_3 "(0x43b40000 * ((float)(local_3c & 0x7fff) / 0x46fffe00))"
	local_44 = 0x3f800000;
#define next_call_arg_4 "local_44"
#define next_call_arg_5 "local_44"
#define next_call_arg_6 "local_44"
#define next_call_arg_7 "local_44"
#define next_call_arg_8 "0x1"
#define next_call_arg_9 "(float)local_34"
#define next_call_arg_10 "0x0"
	CG_ImpactMark();
	goto jmp_b51c;
jmp_b4d0:
	if (*(int *)(arg_0 + 0x90) != 0x1) goto jmp_b51c;
	local_38 = rand();
	local_34 = ((local_38 & 0xf) + 0x8);
	local_3c = rand();
#define next_call_arg_0 "bss_104298"
	local_40 = arg_1;
#define next_call_arg_1 "(local_40 + 0xc)"
#define next_call_arg_2 "(local_40 + 0x18)"
#define next_call_arg_3 "(0x43b40000 * ((float)(local_3c & 0x7fff) / 0x46fffe00))"
	local_44 = 0x3f800000;
#define next_call_arg_4 "local_44"
#define next_call_arg_5 "local_44"
#define next_call_arg_6 "local_44"
#define next_call_arg_7 "local_44"
#define next_call_arg_8 "0x1"
#define next_call_arg_9 "(float)local_34"
#define next_call_arg_10 "0x0"
	CG_ImpactMark();
jmp_b51c:
	*(int *)(arg_0 + 0x90) = 0x0;
}

/*
=================
CG_FragmentBounceSound

Address: 0xb524
Stack Size: 0x28
Calls: trap_S_StartSound, rand
Called by: CG_AddFragment
=================
*/
void CG_FragmentBounceSound(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	if (*(int *)(arg_0 + 0x94) != 0x1) goto jmp_b569;
	local_18 = rand();
	if ((local_18 & 0x1) == 0x0) goto jmp_b570;
	local_24 = rand();
	local_1c = (local_24 & 0x3);
	if (local_1c != 0x0) goto jmp_b54a;
	local_20 = bss_1043c8;
	goto jmp_b558;
jmp_b54a:
	if (local_1c != 0x1) goto jmp_b554;
	local_20 = bss_1043cc;
	goto jmp_b558;
jmp_b554:
	local_20 = bss_1043d0;
jmp_b558:
	trap_S_StartSound((arg_1 + 0xc), 0x3fe, 0x0, local_20);
	goto jmp_b570;
jmp_b569:
	if (*(int *)(arg_0 + 0x94) != 0x2) goto jmp_b570;
jmp_b570:
	*(int *)(arg_0 + 0x94) = 0x0;
}

/*
=================
CG_ReflectVelocity

Address: 0xb578
Stack Size: 0x54
Calls: BG_EvaluateTrajectoryDelta
Called by: CG_AddFragment
=================
*/
void CG_ReflectVelocity(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[8];
	char	local_30[8];
	char	local_38[8];
	char	local_40[8];
	char	local_48[8];
	int		local_50;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_24 = (int)((float)(bss_dc760 - bss_dc75c) + ((float)bss_dc75c * *(int *)(arg_1 + 0x8)));
	BG_EvaluateTrajectoryDelta((arg_0 + 0x20), local_24, &local_14);
	*(int *)local_28 = local_14;
	*(int *)local_30 = (arg_1 + 0x18);
	local_20 = (((*(int *)local_28 * *(int *)*(int *)local_30) + (local_18 * *(int *)(arg_1 + 0x1c))) + (local_1c * *(int *)(arg_1 + 0x20)));
	*(int *)(arg_0 + 0x38) = (*(int *)local_28 + (*(int *)*(int *)local_30 * (0xc0000000 * local_20)));
	*(int *)(arg_0 + 0x3c) = (local_18 + (*(int *)(arg_1 + 0x1c) * (0xc0000000 * local_20)));
	*(int *)(arg_0 + 0x40) = (local_1c + (*(int *)(arg_1 + 0x20) * (0xc0000000 * local_20)));
	*(int *)local_38 = (arg_0 + 0x38);
	*(int *)*(int *)local_38 = (*(int *)*(int *)local_38 * *(int *)(arg_0 + 0x68));
	*(int *)local_40 = (arg_0 + 0x3c);
	*(int *)*(int *)local_40 = (*(int *)*(int *)local_40 * *(int *)(arg_0 + 0x68));
	*(int *)local_48 = (arg_0 + 0x40);
	*(int *)*(int *)local_48 = (*(int *)*(int *)local_48 * *(int *)(arg_0 + 0x68));
	block_copy((arg_1 + 0xc), (arg_0 + 0x2c), 0xc);
	*(int *)(arg_0 + 0x24) = bss_dc760;
	if (*(int *)arg_1 != 0x0) goto jmp_b660;
	if (*(int *)(arg_1 + 0x20) <= 0x0) goto jmp_b666;
	local_50 = *(int *)(arg_0 + 0x40);
	if (local_50 < 0x42200000) goto jmp_b660;
	if (local_50 >= ((float)-bss_dc75c * local_50)) goto jmp_b666;
jmp_b660:
	*(int *)(arg_0 + 0x20) = 0x0;
jmp_b666:
}

/*
=================
CG_AddFragment

Address: 0xb668
Stack Size: 0x7c
Calls: trap_R_AddRefEntityToScene, CG_ReflectVelocity, CG_FragmentBounceSound, CG_FragmentBounceMark, CG_FreeLocalEntity, CG_PointContents, CG_BloodTrail, AnglesToAxis, CG_Trace, BG_EvaluateTrajectory
Called by: CG_AddLocalEntities
=================
*/
void CG_AddFragment(int arg_0) {
	char	local_24[8];
	int		local_2c;
	char	local_30[44];
	char	local_5c[12];
	int		local_68;
	char	local_6c[8];
	int		local_74;
	int		local_78;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x20) != 0x0) goto jmp_b6cf;
	local_68 = (*(int *)(arg_0 + 0x14) - bss_dc760);
	if (local_68 >= 0x3e8) goto jmp_b6c5;
	block_copy((arg_0 + 0xdc), (arg_0 + 0xa4), 0xc);
	local_74 = (arg_0 + 0x9c);
	*(int *)local_74 = (*(int *)local_74 | 0x80);
	local_78 = (arg_0 + 0xe4);
	*(int *)local_6c = *(int *)local_78;
	*(int *)local_78 = (*(int *)local_78 - (0x41800000 * (0x3f800000 - ((float)local_68 / 0x447a0000))));
	trap_R_AddRefEntityToScene((arg_0 + 0x98));
	*(int *)(arg_0 + 0xe4) = *(int *)local_6c;
	goto jmp_b76c;
jmp_b6c5:
	trap_R_AddRefEntityToScene((arg_0 + 0x98));
	goto jmp_b76c;
jmp_b6cf:
	BG_EvaluateTrajectory((arg_0 + 0x20), bss_dc760, local_5c);
#define next_call_arg_0 "local_24"
#define next_call_arg_1 "(arg_0 + 0xdc)"
	local_68 = 0x0;
#define next_call_arg_2 "local_68"
#define next_call_arg_3 "local_68"
#define next_call_arg_4 "local_5c"
#define next_call_arg_5 "0xffffffff"
#define next_call_arg_6 "0x1"
	CG_Trace();
	if (local_2c != 0x3f800000) goto jmp_b736;
	block_copy(local_5c, (arg_0 + 0xdc), 0xc);
	if ((*(int *)(arg_0 + 0xc) & 0x2) == 0x0) goto jmp_b71f;
	BG_EvaluateTrajectory((arg_0 + 0x44), bss_dc760, local_6c);
	AnglesToAxis(local_6c, (arg_0 + 0xb4));
jmp_b71f:
	trap_R_AddRefEntityToScene((arg_0 + 0x98));
	if (*(int *)(arg_0 + 0x94) != 0x1) goto jmp_b76c;
	CG_BloodTrail(arg_0);
	goto jmp_b76c;
jmp_b736:
	*(int *)local_6c = CG_PointContents(local_30, 0x0);
	if ((*(int *)local_6c & 0x80000000) == 0x0) goto jmp_b74c;
	CG_FreeLocalEntity(arg_0);
	goto jmp_b76c;
jmp_b74c:
	CG_FragmentBounceMark(arg_0, local_24);
	CG_FragmentBounceSound(arg_0, local_24);
	CG_ReflectVelocity(arg_0, local_24);
	trap_R_AddRefEntityToScene((arg_0 + 0x98));
jmp_b76c:
}

/*
=================
CG_AddFadeRGB

Address: 0xb76e
Stack Size: 0x48
Calls: trap_R_AddRefEntityToScene
Called by: CG_AddLocalEntities
=================
*/
void CG_AddFadeRGB(int arg_0) {
	int		local_c;
	int		local_10;
	char	local_14[8];
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;

	arg_0 = arg_0;
	local_c = (arg_0 + 0x98);
	local_10 = ((float)(*(int *)(arg_0 + 0x14) - bss_dc760) * *(int *)(arg_0 + 0x1c));
	local_10 = (0x437f0000 * local_10);
	local_1c = (*(int *)(arg_0 + 0x6c) * local_10);
	local_20 = 0x4f000000;
	if (local_1c < local_20) goto jmp_b7ae;
	*(int *)local_14 = ((int)(local_1c - local_20) + 0x80000000);
	goto jmp_b7b3;
jmp_b7ae:
	*(int *)local_14 = (int)local_1c;
jmp_b7b3:
	*(char *)(local_c + 0x74) = *(int *)local_14;
	local_28 = (*(int *)(arg_0 + 0x70) * local_10);
	local_2c = 0x4f000000;
	if (local_28 < local_2c) goto jmp_b7d8;
	local_24 = ((int)(local_28 - local_2c) + 0x80000000);
	goto jmp_b7dd;
jmp_b7d8:
	local_24 = (int)local_28;
jmp_b7dd:
	*(char *)(local_c + 0x75) = local_24;
	local_34 = (*(int *)(arg_0 + 0x74) * local_10);
	local_38 = 0x4f000000;
	if (local_34 < local_38) goto jmp_b802;
	local_30 = ((int)(local_34 - local_38) + 0x80000000);
	goto jmp_b807;
jmp_b802:
	local_30 = (int)local_34;
jmp_b807:
	*(char *)(local_c + 0x76) = local_30;
	local_40 = (*(int *)(arg_0 + 0x78) * local_10);
	local_44 = 0x4f000000;
	if (local_40 < local_44) goto jmp_b82c;
	local_3c = ((int)(local_40 - local_44) + 0x80000000);
	goto jmp_b831;
jmp_b82c:
	local_3c = (int)local_40;
jmp_b831:
	*(char *)(local_c + 0x77) = local_3c;
	trap_R_AddRefEntityToScene(local_c);
}

/*
=================
CG_AddMoveScaleFade

Address: 0xb840
Stack Size: 0x48
Calls: trap_R_AddRefEntityToScene, CG_FreeLocalEntity, VectorLength, BG_EvaluateTrajectory
Called by: CG_AddLocalEntities
=================
*/
void CG_AddMoveScaleFade(int arg_0) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[8];
	int		local_30;
	int		local_34;
	int		local_38;
	char	local_3c[8];
	int		local_44;

	arg_0 = arg_0;
	local_14 = (arg_0 + 0x98);
	local_30 = *(int *)(arg_0 + 0x18);
	if (local_30 <= *(int *)(arg_0 + 0x10)) goto jmp_b87c;
	if (bss_dc760 >= local_30) goto jmp_b87c;
	local_38 = *(int *)(arg_0 + 0x18);
	local_24 = (0x3f800000 - ((float)(local_38 - bss_dc760) / (float)(local_38 - *(int *)(arg_0 + 0x10))));
	goto jmp_b88d;
jmp_b87c:
	local_24 = ((float)(*(int *)(arg_0 + 0x14) - bss_dc760) * *(int *)(arg_0 + 0x1c));
jmp_b88d:
	local_38 = ((0x437f0000 * local_24) * *(int *)(arg_0 + 0x78));
	*(int *)local_3c = 0x4f000000;
	if (local_38 < *(int *)local_3c) goto jmp_b8ad;
	local_34 = ((int)(local_38 - *(int *)local_3c) + 0x80000000);
	goto jmp_b8b2;
jmp_b8ad:
	local_34 = (int)local_38;
jmp_b8b2:
	*(char *)(local_14 + 0x77) = local_34;
	if ((*(int *)(arg_0 + 0xc) & 0x1) != 0x0) goto jmp_b8d3;
	*(int *)(local_14 + 0x84) = ((*(int *)(arg_0 + 0x7c) * (0x3f800000 - local_24)) + 0x41000000);
jmp_b8d3:
	BG_EvaluateTrajectory((arg_0 + 0x20), bss_dc760, (local_14 + 0x44));
	local_18 = (*(int *)(local_14 + 0x44) - bss_dcd0c);
	local_1c = (*(int *)(local_14 + 0x48) - bss_dcd10);
	local_20 = (*(int *)(local_14 + 0x4c) - bss_dcd14);
	local_44 = VectorLength(&local_18);
	*(int *)local_28 = local_44;
	if (*(int *)local_28 >= *(int *)(arg_0 + 0x7c)) goto jmp_b91b;
	CG_FreeLocalEntity(arg_0);
	goto jmp_b921;
jmp_b91b:
	trap_R_AddRefEntityToScene(local_14);
jmp_b921:
}

/*
=================
CG_AddScaleFade

Address: 0xb923
Stack Size: 0x3c
Calls: trap_R_AddRefEntityToScene, CG_FreeLocalEntity, VectorLength
Called by: CG_AddLocalEntities
=================
*/
void CG_AddScaleFade(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[8];
	int		local_2c;
	char	local_30[8];
	int		local_38;

	arg_0 = arg_0;
	local_c = (arg_0 + 0x98);
	local_1c = ((float)(*(int *)(arg_0 + 0x14) - bss_dc760) * *(int *)(arg_0 + 0x1c));
	local_2c = ((0x437f0000 * local_1c) * *(int *)(arg_0 + 0x78));
	*(int *)local_30 = 0x4f000000;
	if (local_2c < *(int *)local_30) goto jmp_b95f;
	*(int *)local_24 = ((int)(local_2c - *(int *)local_30) + 0x80000000);
	goto jmp_b964;
jmp_b95f:
	*(int *)local_24 = (int)local_2c;
jmp_b964:
	*(char *)(local_c + 0x77) = *(int *)local_24;
	*(int *)(local_c + 0x84) = ((*(int *)(arg_0 + 0x7c) * (0x3f800000 - local_1c)) + 0x41000000);
	local_10 = (*(int *)(local_c + 0x44) - bss_dcd0c);
	local_14 = (*(int *)(local_c + 0x48) - bss_dcd10);
	local_18 = (*(int *)(local_c + 0x4c) - bss_dcd14);
	local_38 = VectorLength(&local_10);
	local_20 = local_38;
	if (local_20 >= *(int *)(arg_0 + 0x7c)) goto jmp_b9b4;
	CG_FreeLocalEntity(arg_0);
	goto jmp_b9ba;
jmp_b9b4:
	trap_R_AddRefEntityToScene(local_c);
jmp_b9ba:
}

/*
=================
CG_AddFallScaleFade

Address: 0xb9bc
Stack Size: 0x40
Calls: trap_R_AddRefEntityToScene, CG_FreeLocalEntity, VectorLength
Called by: CG_AddLocalEntities
=================
*/
void CG_AddFallScaleFade(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[8];
	int		local_2c;
	char	local_30[12];
	int		local_3c;

	arg_0 = arg_0;
	local_c = (arg_0 + 0x98);
	local_10 = ((float)(*(int *)(arg_0 + 0x14) - bss_dc760) * *(int *)(arg_0 + 0x1c));
	local_2c = ((0x437f0000 * local_10) * *(int *)(arg_0 + 0x78));
	*(int *)local_30 = 0x4f000000;
	if (local_2c < *(int *)local_30) goto jmp_b9f8;
	*(int *)local_24 = ((int)(local_2c - *(int *)local_30) + 0x80000000);
	goto jmp_b9fd;
jmp_b9f8:
	*(int *)local_24 = (int)local_2c;
jmp_b9fd:
	*(char *)(local_c + 0x77) = *(int *)local_24;
	*(int *)(local_c + 0x4c) = (*(int *)(arg_0 + 0x34) - ((0x3f800000 - local_10) * *(int *)(arg_0 + 0x40)));
	*(int *)(local_c + 0x84) = ((*(int *)(arg_0 + 0x7c) * (0x3f800000 - local_10)) + 0x41800000);
	local_14 = (*(int *)(local_c + 0x44) - bss_dcd0c);
	local_18 = (*(int *)(local_c + 0x48) - bss_dcd10);
	local_1c = (*(int *)(local_c + 0x4c) - bss_dcd14);
	local_3c = VectorLength(&local_14);
	local_20 = local_3c;
	if (local_20 >= *(int *)(arg_0 + 0x7c)) goto jmp_ba62;
	CG_FreeLocalEntity(arg_0);
	goto jmp_ba68;
jmp_ba62:
	trap_R_AddRefEntityToScene(local_c);
jmp_ba68:
}

/*
=================
CG_AddExplosion

Address: 0xba6a
Stack Size: 0x30
Calls: trap_R_AddLightToScene, trap_R_AddRefEntityToScene
Called by: CG_AddLocalEntities
=================
*/
void CG_AddExplosion(int arg_0) {
	int		local_1c;
	char	local_20[8];
	char	local_28[8];

	arg_0 = arg_0;
	local_1c = (arg_0 + 0x98);
	trap_R_AddRefEntityToScene(local_1c);
	if (*(int *)(arg_0 + 0x80) == 0x0) goto jmp_bad5;
	*(int *)local_28 = *(int *)(arg_0 + 0x10);
	*(int *)local_20 = ((float)(bss_dc760 - *(int *)local_28) / (float)(*(int *)(arg_0 + 0x14) - *(int *)local_28));
	if (*(int *)local_20 >= 0x3f000000) goto jmp_baa4;
	*(int *)local_20 = 0x3f800000;
	goto jmp_baae;
jmp_baa4:
	*(int *)local_20 = (0x3f800000 - (0x40000000 * (*(int *)local_20 - 0x3f000000)));
jmp_baae:
	*(int *)local_20 = (*(int *)(arg_0 + 0x80) * *(int *)local_20);
	trap_R_AddLightToScene((local_1c + 0x44), *(int *)local_20, *(int *)(arg_0 + 0x84), *(int *)(arg_0 + 0x88), *(int *)(arg_0 + 0x8c));
jmp_bad5:
}

/*
=================
CG_AddSpriteExplosion

Address: 0xbad7
Stack Size: 0xd0
Calls: trap_R_AddLightToScene, trap_R_AddRefEntityToScene
Called by: CG_AddLocalEntities
=================
*/
void CG_AddSpriteExplosion(int arg_0) {
	char	local_1c[68];
	char	local_60[48];
	char	local_90;
	char	local_91;
	char	local_92;
	char	local_93[13];
	char	local_a0[8];
	char	local_a8[8];
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	char	local_c0[8];
	char	local_c8[8];

	arg_0 = arg_0;
	block_copy((arg_0 + 0x98), local_1c, 0x8c);
	local_b0 = *(int *)(arg_0 + 0x14);
	*(int *)local_a8 = ((float)(local_b0 - bss_dc760) / (float)(local_b0 - *(int *)(arg_0 + 0x10)));
	if (*(int *)local_a8 <= 0x3f800000) goto jmp_bb02;
	*(int *)local_a8 = 0x3f800000;
jmp_bb02:
	local_90 = 0xff;
	local_91 = 0xff;
	local_92 = 0xff;
	local_b8 = (0x3ea8f5c3 * (0x437f0000 * *(int *)local_a8));
	local_bc = 0x4f000000;
	if (local_b8 < local_bc) goto jmp_bb27;
	local_b4 = ((int)(local_b8 - local_bc) + 0x80000000);
	goto jmp_bb2c;
jmp_bb27:
	local_b4 = (int)local_b8;
jmp_bb2c:
	*(char *)local_93 = local_b4;
	*(int *)local_1c = 0x2;
	*(int *)local_a0 = ((0x42280000 * (0x3f800000 - *(int *)local_a8)) + 0x41f00000);
	trap_R_AddRefEntityToScene(local_1c);
	if (*(int *)(arg_0 + 0x80) == 0x0) goto jmp_bb99;
	*(int *)local_c8 = *(int *)(arg_0 + 0x10);
	*(int *)local_c0 = ((float)(bss_dc760 - *(int *)local_c8) / (float)(*(int *)(arg_0 + 0x14) - *(int *)local_c8));
	if (*(int *)local_c0 >= 0x3f000000) goto jmp_bb6b;
	*(int *)local_c0 = 0x3f800000;
	goto jmp_bb75;
jmp_bb6b:
	*(int *)local_c0 = (0x3f800000 - (0x40000000 * (*(int *)local_c0 - 0x3f000000)));
jmp_bb75:
	*(int *)local_c0 = (*(int *)(arg_0 + 0x80) * *(int *)local_c0);
	trap_R_AddLightToScene(local_60, *(int *)local_c0, *(int *)(arg_0 + 0x84), *(int *)(arg_0 + 0x88), *(int *)(arg_0 + 0x8c));
jmp_bb99:
}

/*
=================
CG_AddScorePlum

Address: 0xbb9b
Stack Size: 0xc0
Calls: trap_R_AddRefEntityToScene, sin, CG_FreeLocalEntity, VectorLength, VectorNormalize, CrossProduct
Called by: CG_AddLocalEntities
=================
*/
void CG_AddScorePlum(int arg_0) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	char	local_3c[40];
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	char	local_84[12];
	char	local_90[8];
	int		local_98;
	int		local_9c;
	int		local_a0;
	int		local_a4;
	int		local_a8;
	int		local_ac;
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;

	arg_0 = arg_0;
	block_copy(global_1a5c, local_84, 0xc);
	local_1c = (arg_0 + 0x98);
	local_64 = ((float)(*(int *)(arg_0 + 0x14) - bss_dc760) * *(int *)(arg_0 + 0x1c));
	local_20 = (int)*(int *)(arg_0 + 0x7c);
	if (local_20 >= 0x0) goto jmp_bbda;
	*(char *)(local_1c + 0x74) = 0xff;
	*(char *)(local_1c + 0x75) = 0x11;
	*(char *)(local_1c + 0x76) = 0x11;
	goto jmp_bc30;
jmp_bbda:
	*(char *)(local_1c + 0x74) = 0xff;
	*(char *)(local_1c + 0x75) = 0xff;
	*(char *)(local_1c + 0x76) = 0xff;
	if (local_20 < 0x32) goto jmp_bbf8;
	*(char *)(local_1c + 0x75) = 0x0;
	goto jmp_bc30;
jmp_bbf8:
	if (local_20 < 0x14) goto jmp_bc0f;
	*(char *)&local_9c = 0x0;
	*(char *)(local_1c + 0x75) = *(char *)&local_9c;
	*(char *)(local_1c + 0x74) = *(char *)&local_9c;
	goto jmp_bc30;
jmp_bc0f:
	if (local_20 < 0xa) goto jmp_bc1b;
	*(char *)(local_1c + 0x76) = 0x0;
	goto jmp_bc30;
jmp_bc1b:
	if (local_20 < 0x2) goto jmp_bc30;
	*(char *)&local_9c = 0x0;
	*(char *)(local_1c + 0x76) = *(char *)&local_9c;
	*(char *)(local_1c + 0x74) = *(char *)&local_9c;
jmp_bc30:
	if (local_64 >= 0x3e800000) goto jmp_bc5c;
	local_9c = (0x447f0000 * local_64);
	local_a0 = 0x4f000000;
	if (local_9c < local_a0) goto jmp_bc4e;
	local_98 = ((int)(local_9c - local_a0) + 0x80000000);
	goto jmp_bc53;
jmp_bc4e:
	local_98 = (int)local_9c;
jmp_bc53:
	*(char *)(local_1c + 0x77) = local_98;
	goto jmp_bc62;
jmp_bc5c:
	*(char *)(local_1c + 0x77) = 0xff;
jmp_bc62:
	*(int *)(local_1c + 0x84) = 0x40800000;
	block_copy((arg_0 + 0x2c), &local_24, 0xc);
	local_2c = (local_2c + (0x42dc0000 - (0x42c80000 * local_64)));
	local_74 = (bss_dcd0c - local_24);
	local_78 = (bss_dcd10 - local_28);
	local_7c = (bss_dcd14 - local_2c);
	CrossProduct(&local_74, local_84, &local_30);
	VectorNormalize(&local_30);
	local_a4 = sin((0x40490fdb * (0x40000000 * local_64)));
	local_24 = (local_24 + (local_30 * ((0x41a00000 * local_a4) + 0xc1200000)));
	local_a8 = sin((0x40490fdb * (0x40000000 * local_64)));
	local_28 = (local_28 + (local_34 * ((0x41a00000 * local_a8) + 0xc1200000)));
	local_ac = sin((0x40490fdb * (0x40000000 * local_64)));
	local_2c = (local_2c + (local_38 * ((0x41a00000 * local_ac) + 0xc1200000)));
	local_68 = (local_24 - bss_dcd0c);
	local_6c = (local_28 - bss_dcd10);
	local_70 = (local_2c - bss_dcd14);
	local_b0 = VectorLength(&local_68);
	*(int *)local_90 = local_b0;
	if (*(int *)local_90 >= 0x41a00000) goto jmp_bd12;
	CG_FreeLocalEntity(arg_0);
	goto jmp_bdd4;
jmp_bd12:
	local_b4 = 0x0;
	local_80 = local_b4;
	if (local_20 >= local_b4) goto jmp_bd26;
	local_80 = 0x1;
	local_20 = -local_20;
jmp_bd26:
	local_14 = 0x0;
	goto jmp_bd42;
jmp_bd2b:
	*(int *)((local_14 << 0x2) + local_3c) = (local_20 %% 0xa);
	local_20 = (local_20 / 0xa);
	local_14 = (local_14 + 0x1);
jmp_bd42:
	local_b8 = 0x0;
	if (local_14 == local_b8) goto jmp_bd2b;
	if (local_20 != local_b8) goto jmp_bd2b;
	if (local_80 == 0x0) goto jmp_bd61;
	*(int *)((local_14 << 0x2) + local_3c) = 0xa;
	local_14 = (local_14 + 0x1);
jmp_bd61:
	local_18 = 0x0;
	goto jmp_bdcf;
jmp_bd66:
	*(int *)(local_1c + 0x44) = (local_24 + (local_30 * (0x41000000 * (((float)local_14 / 0x40000000) - (float)local_18))));
	*(int *)(local_1c + 0x48) = (local_28 + (local_34 * (0x41000000 * (((float)local_14 / 0x40000000) - (float)local_18))));
	*(int *)(local_1c + 0x4c) = (local_2c + (local_38 * (0x41000000 * (((float)local_14 / 0x40000000) - (float)local_18))));
	local_bc = 0x2;
	*(int *)(local_1c + 0x70) = *(int *)((*(int *)((((local_14 - 0x1) - local_18) << local_bc) + local_3c) << local_bc) + 0x104248);
	trap_R_AddRefEntityToScene(local_1c);
	local_18 = (local_18 + 0x1);
jmp_bdcf:
	if (local_18 < local_14) goto jmp_bd66;
jmp_bdd4:
}

/*
=================
CG_AddLocalEntities

Address: 0xbdd6
Stack Size: 0x24
Calls: CG_AddScorePlum, CG_AddScaleFade, CG_AddFallScaleFade, CG_AddFadeRGB, CG_AddMoveScaleFade, CG_AddFragment, CG_AddExplosion, CG_AddSpriteExplosion, CG_Error, CG_FreeLocalEntity
Called by: CG_DrawActiveFrame
=================
*/
void CG_AddLocalEntities(void) {
	int		local_10;
	char	local_14[8];
	char	local_1c[8];

	local_10 = cg_activeLocalEntities;
	goto jmp_be58;
jmp_bddd:
	*(int *)local_14 = *(int *)local_10;
	if (bss_dc760 < *(int *)(local_10 + 0x14)) goto jmp_bdf2;
	CG_FreeLocalEntity(local_10);
	goto jmp_be54;
jmp_bdf2:
	*(int *)local_1c = *(int *)(local_10 + 0x8);
	if (*(int *)local_1c < 0x0) goto jmp_be09;
	if (*(int *)local_1c > 0x8) goto jmp_be09;
	goto *(int *)((*(int *)local_1c << 0x2) + 0x1a68);
jmp_be09:
	CG_Error(0x5ef8, *(int *)(local_10 + 0x8));
	goto jmp_be54;
	CG_AddSpriteExplosion(local_10);
	goto jmp_be54;
	CG_AddExplosion(local_10);
	goto jmp_be54;
	CG_AddFragment(local_10);
	goto jmp_be54;
	CG_AddMoveScaleFade(local_10);
	goto jmp_be54;
	CG_AddFadeRGB(local_10);
	goto jmp_be54;
	CG_AddFallScaleFade(local_10);
	goto jmp_be54;
	CG_AddScaleFade(local_10);
	goto jmp_be54;
	CG_AddScorePlum(local_10);
jmp_be54:
	local_10 = *(int *)local_14;
jmp_be58:
	if (local_10 != 0x105030) goto jmp_bddd;
}

/*
=================
CG_InitMarkPolys

Address: 0xbe5e
Stack Size: 0x20
Calls: memset
Called by: CG_MapRestart, CG_Init
=================
*/
void CG_InitMarkPolys(void) {
	int		local_14;
	int		local_18;
	int		local_1c;

	memset(0x129a7c, 0x0, 0x12000);
	bss_129960 = 0x12995c;
	local_18 = 0x12995c;
	*(int *)local_18 = local_18;
	cg_freeMarkPolys = 0x129a7c;
	local_14 = 0x0;
jmp_be79:
	local_1c = (0x120 * local_14);
	*(int *)(local_1c + 0x129a80) = (local_1c + 0x129b9c);
	local_14 = (local_14 + 0x1);
	if (local_14 < 0xff) goto jmp_be79;
}

/*
=================
CG_FreeMarkPoly

Address: 0xbe94
Stack Size: 0x20
Calls: CG_Error
Called by: CG_AddMarks, CG_AllocMark
=================
*/
void CG_FreeMarkPoly(int arg_0) {
	char	local_10[8];
	char	local_18[8];

	arg_0 = arg_0;
	*(int *)local_10 = 0x0;
	if (*(int *)arg_0 == *(int *)local_10) goto jmp_beaa;
	if (*(int *)(arg_0 + 0x4) != *(int *)local_10) goto jmp_beaf;
jmp_beaa:
	CG_Error(0x5f4c);
jmp_beaf:
	*(int *)local_18 = 0x4;
	*(int *)(*(int *)arg_0 + *(int *)local_18) = *(int *)(arg_0 + *(int *)local_18);
	*(int *)*(int *)(arg_0 + 0x4) = *(int *)arg_0;
	*(int *)(arg_0 + 0x4) = cg_freeMarkPolys;
	cg_freeMarkPolys = arg_0;
}

/*
=================
CG_AllocMark

Address: 0xbed5
Stack Size: 0x24
Calls: memset, CG_FreeMarkPoly
Called by: CG_ImpactMark
=================
*/
int CG_AllocMark(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;

	if (cg_freeMarkPolys != 0x0) goto jmp_bef9;
	local_18 = *(int *)(cg_activeMarkPolys + 0x8);
	goto jmp_bee9;
jmp_bee3:
	CG_FreeMarkPoly(cg_activeMarkPolys);
jmp_bee9:
	local_1c = cg_activeMarkPolys;
	if (local_1c == 0x0) goto jmp_bef9;
	if (local_18 == *(int *)(local_1c + 0x8)) goto jmp_bee3;
jmp_bef9:
	local_1c = 0x129958;
	local_20 = *(int *)local_1c;
	local_14 = local_20;
	*(int *)local_1c = *(int *)(local_20 + 0x4);
	memset(local_14, 0x0, 0x120);
	*(int *)(local_14 + 0x4) = bss_129960;
	*(int *)local_14 = 0x12995c;
	*(int *)bss_129960 = local_14;
	bss_129960 = local_14;
	return local_14;
}

/*
=================
CG_ImpactMark

Address: 0xbf30
Stack Size: 0x17ec
Calls: memcpy, trap_R_AddPolyToScene, trap_CM_MarkFragments, CG_AllocMark, CrossProduct, RotatePointAroundVector, PerpendicularVector, VectorNormalize2, CG_Error
Called by: CG_MissileHitWall, CG_PlayerShadow, CG_FragmentBounceMark
=================
*/
void CG_ImpactMark(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7, int arg_8, int arg_9, int arg_10) {
	char	local_24[12];
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	char	local_58;
	char	local_59;
	char	local_5a;
	char	local_5b;
	char	local_5c[4608];
	char	local_125c[12];
	char	local_1268[12];
	char	local_1274[12];
	char	local_1280[12];
	int		local_128c;
	int		local_1290;
	int		local_1294;
	int		local_1298;
	char	local_129c[1024];
	char	local_169c[8];
	int		local_16a4;
	int		local_16a8;
	int		local_16ac;
	int		local_16b0;
	int		local_16b4;
	int		local_16b8;
	int		local_16bc;
	int		local_16c0;
	int		local_16c4;
	int		local_16c8;
	int		local_16cc;
	int		local_16d0;
	int		local_16d4;
	int		local_16d8;
	int		local_16dc;
	char	local_16e0[240];
	int		local_17d0;
	int		local_17d4;
	char	local_17d8[12];
	int		local_17e4;
	int		local_17e8;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_4 = arg_4;
	arg_5 = arg_5;
	arg_6 = arg_6;
	arg_7 = arg_7;
	arg_8 = arg_8;
	arg_9 = arg_9;
	arg_10 = arg_10;
	if (bss_ab88 != 0x0) goto jmp_bf5f;
	goto jmp_c218;
jmp_bf5f:
	if (arg_9 > 0x0) goto jmp_bf68;
	CG_Error(0x5f26);
jmp_bf68:
	VectorNormalize2(arg_2, local_24);
	PerpendicularVector(&local_30, local_24);
	RotatePointAroundVector(&local_3c, local_24, &local_30, arg_3);
	CrossProduct(local_24, &local_3c, &local_30);
	local_54 = (0x3f000000 / arg_9);
	local_50 = 0x0;
jmp_bf95:
	*(int *)local_169c = (local_50 << 0x2);
	*(int *)(*(int *)local_169c + local_125c) = ((*(int *)(*(int *)local_169c + arg_1) - (arg_9 * *(int *)(*(int *)local_169c + &local_30))) - (arg_9 * *(int *)(*(int *)local_169c + &local_3c)));
	local_16a4 = (local_50 << 0x2);
	*(int *)(local_16a4 + local_1268) = ((*(int *)(local_16a4 + arg_1) + (arg_9 * *(int *)(local_16a4 + &local_30))) - (arg_9 * *(int *)(local_16a4 + &local_3c)));
	local_16ac = (local_50 << 0x2);
	*(int *)(local_16ac + local_1274) = ((*(int *)(local_16ac + arg_1) + (arg_9 * *(int *)(local_16ac + &local_30))) + (arg_9 * *(int *)(local_16ac + &local_3c)));
	local_16b4 = (local_50 << 0x2);
	*(int *)(local_16b4 + local_1280) = ((*(int *)(local_16b4 + arg_1) - (arg_9 * *(int *)(local_16b4 + &local_30))) + (arg_9 * *(int *)(local_16b4 + &local_3c)));
	local_50 = (local_50 + 0x1);
	if (local_50 < 0x3) goto jmp_bf95;
	*(int *)local_169c = 0xc1a00000;
	local_1290 = (*(int *)local_169c * *(int *)arg_2);
	local_1294 = (*(int *)local_169c * *(int *)(arg_2 + 0x4));
	local_1298 = (0xc1a00000 * *(int *)(arg_2 + 0x8));
	local_16a4 = trap_CM_MarkFragments(0x4, local_125c, &local_1290, 0x180, local_5c, 0x80, local_129c);
	local_128c = local_16a4;
	local_16b0 = (0x437f0000 * arg_4);
	local_16b4 = 0x4f000000;
	if (local_16b0 < local_16b4) goto jmp_c079;
	local_16a8 = ((int)(local_16b0 - local_16b4) + 0x80000000);
	goto jmp_c07e;
jmp_c079:
	local_16a8 = (int)local_16b0;
jmp_c07e:
	local_58 = local_16a8;
	local_16b8 = (0x437f0000 * arg_5);
	local_16bc = 0x4f000000;
	if (local_16b8 < local_16bc) goto jmp_c09c;
	local_16ac = ((int)(local_16b8 - local_16bc) + 0x80000000);
	goto jmp_c0a1;
jmp_c09c:
	local_16ac = (int)local_16b8;
jmp_c0a1:
	local_59 = local_16ac;
	local_16c4 = (0x437f0000 * arg_6);
	local_16c8 = 0x4f000000;
	if (local_16c4 < local_16c8) goto jmp_c0bf;
	local_16c0 = ((int)(local_16c4 - local_16c8) + 0x80000000);
	goto jmp_c0c4;
jmp_c0bf:
	local_16c0 = (int)local_16c4;
jmp_c0c4:
	local_5a = local_16c0;
	local_16d0 = (0x437f0000 * arg_7);
	local_16d4 = 0x4f000000;
	if (local_16d0 < local_16d4) goto jmp_c0e2;
	local_16cc = ((int)(local_16d0 - local_16d4) + 0x80000000);
	goto jmp_c0e7;
jmp_c0e2:
	local_16cc = (int)local_16d0;
jmp_c0e7:
	local_5b = local_16cc;
	local_50 = 0x0;
	local_4c = local_129c;
	goto jmp_c213;
jmp_c0f3:
	if (*(int *)(local_4c + 0x4) <= 0xa) goto jmp_c100;
	*(int *)(local_4c + 0x4) = 0xa;
jmp_c100:
	local_48 = 0x0;
	local_16d8 = local_16e0;
	goto jmp_c18b;
jmp_c108:
	block_copy(((0xc * (*(int *)local_4c + local_48)) + local_5c), local_16d8, 0xc);
	local_17d0 = (*(int *)local_16d8 - *(int *)arg_1);
	local_17e4 = 0x4;
	local_17d4 = (*(int *)(local_16d8 + local_17e4) - *(int *)(arg_1 + local_17e4));
	local_17e8 = 0x8;
	*(int *)local_17d8 = (*(int *)(local_16d8 + local_17e8) - *(int *)(arg_1 + local_17e8));
	*(int *)(local_16d8 + 0xc) = (((((local_17d0 * local_30) + (local_17d4 * local_34)) + (*(int *)local_17d8 * local_38)) * local_54) + 0x3f000000);
	*(int *)(local_16d8 + 0x10) = (((((local_17d0 * local_3c) + (local_17d4 * local_40)) + (*(int *)local_17d8 * local_44)) * local_54) + 0x3f000000);
	*(int *)(local_16d8 + 0x14) = *(int *)&local_58;
	local_48 = (local_48 + 0x1);
	local_16d8 = (local_16d8 + 0x18);
jmp_c18b:
	if (local_48 < *(int *)(local_4c + 0x4)) goto jmp_c108;
	if (arg_10 == 0x0) goto jmp_c1a7;
	trap_R_AddPolyToScene(arg_0, *(int *)(local_4c + 0x4), local_16e0);
	goto jmp_c207;
jmp_c1a7:
	local_17d0 = CG_AllocMark();
	local_16dc = local_17d0;
	*(int *)(local_16dc + 0x8) = bss_dc760;
	*(int *)(local_16dc + 0x10) = arg_8;
	*(int *)(local_16dc + 0xc) = arg_0;
	*(int *)(local_16dc + 0x28) = *(int *)(local_4c + 0x4);
	*(int *)(local_16dc + 0x14) = arg_4;
	*(int *)(local_16dc + 0x18) = arg_5;
	*(int *)(local_16dc + 0x1c) = arg_6;
	*(int *)(local_16dc + 0x20) = arg_7;
	memcpy((local_16dc + 0x30), local_16e0, (0x18 * *(int *)(local_4c + 0x4)));
	local_17d4 = 0x129954;
	*(int *)local_17d4 = (*(int *)local_17d4 + 0x1);
jmp_c207:
	local_50 = (local_50 + 0x1);
	local_4c = (local_4c + 0x8);
jmp_c213:
	if (local_50 < local_128c) goto jmp_c0f3;
jmp_c218:
}

/*
=================
CG_AddMarks

Address: 0xc21a
Stack Size: 0x68
Calls: trap_R_AddPolyToScene, CG_FreeMarkPoly
Called by: CG_DrawActiveFrame
=================
*/
void CG_AddMarks(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[8];
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;

	if (bss_ab88 != 0x0) goto jmp_c221;
	goto jmp_c435;
jmp_c221:
	local_14 = bss_129960;
	goto jmp_c431;
jmp_c227:
	*(int *)local_24 = *(int *)(local_14 + 0x4);
	if (bss_dc760 <= (*(int *)(local_14 + 0x8) + 0x2710)) goto jmp_c240;
	CG_FreeMarkPoly(local_14);
	goto jmp_c42d;
jmp_c240:
	if (*(int *)(local_14 + 0xc) != bss_1042a0) goto jmp_c324;
	local_2c = 0x43e10000;
	local_1c = (int)(local_2c - (local_2c * ((float)(bss_dc760 - *(int *)(local_14 + 0x8)) / 0x453b8000)));
	if (local_1c >= 0xff) goto jmp_c324;
	if (local_1c >= 0x0) goto jmp_c26a;
	local_1c = 0x0;
jmp_c26a:
	if (*(char *)(local_14 + 0x44) == 0x0) goto jmp_c324;
	local_18 = 0x0;
	goto jmp_c31c;
jmp_c276:
	local_38 = 0x14;
	local_3c = (*(int *)(local_14 + local_38) * (float)local_1c);
	local_40 = 0x4f000000;
	if (local_3c < local_40) goto jmp_c299;
	local_30 = ((int)(local_3c - local_40) + 0x80000000);
	goto jmp_c29e;
jmp_c299:
	local_30 = (int)local_3c;
jmp_c29e:
	*(char *)(((0x18 * local_18) + (local_14 + 0x30)) + local_38) = local_30;
	local_4c = 0x18;
	local_50 = (*(int *)(local_14 + local_4c) * (float)local_1c);
	local_54 = 0x4f000000;
	if (local_50 < local_54) goto jmp_c2d0;
	local_44 = ((int)(local_50 - local_54) + 0x80000000);
	goto jmp_c2d5;
jmp_c2d0:
	local_44 = (int)local_50;
jmp_c2d5:
	*(char *)(((local_4c * local_18) + (local_14 + 0x30)) + 0x15) = local_44;
	local_60 = (*(int *)(local_14 + 0x1c) * (float)local_1c);
	local_64 = 0x4f000000;
	if (local_60 < local_64) goto jmp_c303;
	local_58 = ((int)(local_60 - local_64) + 0x80000000);
	goto jmp_c308;
jmp_c303:
	local_58 = (int)local_60;
jmp_c308:
	*(char *)(((0x18 * local_18) + (local_14 + 0x30)) + 0x16) = local_58;
	local_18 = (local_18 + 0x1);
jmp_c31c:
	if (local_18 < *(int *)(local_14 + 0x28)) goto jmp_c276;
jmp_c324:
	local_20 = ((*(int *)(local_14 + 0x8) + 0x2710) - bss_dc760);
	if (local_20 >= 0x3e8) goto jmp_c419;
	local_1c = ((0xff * local_20) / 0x3e8);
	if (*(int *)(local_14 + 0x10) == 0x0) goto jmp_c366;
	local_18 = 0x0;
	goto jmp_c35c;
jmp_c348:
	*(char *)(((0x18 * local_18) + (local_14 + 0x30)) + 0x17) = local_1c;
	local_18 = (local_18 + 0x1);
jmp_c35c:
	if (local_18 < *(int *)(local_14 + 0x28)) goto jmp_c348;
	goto jmp_c419;
jmp_c366:
	local_18 = 0x0;
	goto jmp_c411;
jmp_c36b:
	local_34 = 0x14;
	local_38 = (*(int *)(local_14 + local_34) * (float)local_1c);
	local_3c = 0x4f000000;
	if (local_38 < local_3c) goto jmp_c38e;
	local_2c = ((int)(local_38 - local_3c) + 0x80000000);
	goto jmp_c393;
jmp_c38e:
	local_2c = (int)local_38;
jmp_c393:
	*(char *)(((0x18 * local_18) + (local_14 + 0x30)) + local_34) = local_2c;
	local_48 = 0x18;
	local_4c = (*(int *)(local_14 + local_48) * (float)local_1c);
	local_50 = 0x4f000000;
	if (local_4c < local_50) goto jmp_c3c5;
	local_40 = ((int)(local_4c - local_50) + 0x80000000);
	goto jmp_c3ca;
jmp_c3c5:
	local_40 = (int)local_4c;
jmp_c3ca:
	*(char *)(((local_48 * local_18) + (local_14 + 0x30)) + 0x15) = local_40;
	local_5c = (*(int *)(local_14 + 0x1c) * (float)local_1c);
	local_60 = 0x4f000000;
	if (local_5c < local_60) goto jmp_c3f8;
	local_54 = ((int)(local_5c - local_60) + 0x80000000);
	goto jmp_c3fd;
jmp_c3f8:
	local_54 = (int)local_5c;
jmp_c3fd:
	*(char *)(((0x18 * local_18) + (local_14 + 0x30)) + 0x16) = local_54;
	local_18 = (local_18 + 0x1);
jmp_c411:
	if (local_18 < *(int *)(local_14 + 0x28)) goto jmp_c36b;
jmp_c419:
	trap_R_AddPolyToScene(*(int *)(local_14 + 0xc), *(int *)(local_14 + 0x28), (local_14 + 0x30));
jmp_c42d:
	local_14 = *(int *)local_24;
jmp_c431:
	if (local_14 != 0x12995c) goto jmp_c227;
jmp_c435:
}

/*
=================
CG_ClearParticles

Address: 0xc437
Stack Size: 0x30
Calls: trap_R_RegisterShader, memset, va
Called by: CG_MapRestart, CG_AddParticles, CG_RegisterGraphics
=================
*/
void CG_ClearParticles(void) {
	int		local_14;
	char	local_18[8];
	char	local_20[8];
	int		local_28;
	int		local_2c;

	memset(0x13bac8, 0x0, 0x1f000);
	free_particles = 0x13bac8;
	active_particles = 0x0;
	local_14 = 0x0;
	goto jmp_c469;
jmp_c44c:
	*(int *)local_18 = (0x7c * local_14);
	*(int *)(*(int *)local_18 + 0x13bac8) = (*(int *)local_18 + 0x13bb44);
	*(int *)((0x7c * local_14) + 0x13bb08) = 0x0;
	local_14 = (local_14 + 0x1);
jmp_c469:
	if (local_14 < cl_numparticles) goto jmp_c44c;
	*(int *)((0x7c * cl_numparticles) + 0x13ba4c) = 0x0;
	oldtime = (float)bss_dc760;
	local_14 = 0x0;
	goto jmp_c4c8;
jmp_c480:
	*(int *)local_18 = 0x0;
	goto jmp_c4b8;
jmp_c485:
#define next_call_arg_0 "0x6117"
	*(int *)local_20 = 0x2;
#define next_call_arg_1 "*(int *)((local_14 << *(int *)local_20) + 0x1a8c)"
#define next_call_arg_2 "(*(int *)local_18 + 0x1)"
	local_28 = va();
	local_2c = trap_R_RegisterShader(local_28);
	*(int *)((*(int *)local_18 << *(int *)local_20) + ((local_14 << 0x8) + 0x15aad4)) = local_2c;
	*(int *)local_18 = (*(int *)local_18 + 0x1);
jmp_c4b8:
	if (*(int *)local_18 < *(int *)((local_14 << 0x2) + 0x1b0c)) goto jmp_c485;
	local_14 = (local_14 + 0x1);
jmp_c4c8:
	if (*(int *)((local_14 << 0x2) + 0x1a8c) != 0x0) goto jmp_c480;
	numShaderAnims = local_14;
	initparticles = 0x1;
}

/*
=================
CG_AddParticleToScene

Address: 0xc4da
Stack Size: 0x1f4
Calls: trap_R_AddPolyToScene, floor, cos, sqrt, sin, AngleVectors, vectoangles, Distance, rand
Called by: CG_AddParticles
=================
*/
void CG_AddParticleToScene(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[8];
	int		local_30;
	int		local_34;
	char	local_38;
	char	local_39;
	char	local_3a;
	char	local_3b;
	int		local_3c;
	char	local_40[8];
	int		local_48;
	int		local_4c;
	char	local_50;
	char	local_51;
	char	local_52;
	char	local_53;
	int		local_54;
	char	local_58[8];
	int		local_60;
	int		local_64;
	char	local_68;
	char	local_69;
	char	local_6a;
	char	local_6b;
	int		local_6c;
	char	local_70[8];
	int		local_78;
	int		local_7c;
	char	local_80;
	char	local_81;
	char	local_82;
	char	local_83;
	char	local_84[12];
	int		local_90;
	int		local_94;
	char	local_98;
	char	local_99;
	char	local_9a;
	char	local_9b;
	char	local_9c[12];
	int		local_a8;
	int		local_ac;
	char	local_b0;
	char	local_b1;
	char	local_b2;
	char	local_b3;
	char	local_b4[12];
	int		local_c0;
	int		local_c4;
	char	local_c8;
	char	local_c9;
	char	local_ca;
	char	local_cb;
	int		local_cc;
	int		local_d0;
	int		local_d4;
	int		local_d8;
	int		local_dc;
	int		local_e0;
	int		local_e4;
	int		local_e8;
	int		local_ec;
	int		local_f0;
	int		local_f4;
	int		local_f8;
	int		local_fc;
	int		local_100;
	int		local_104;
	int		local_108;
	int		local_10c;
	int		local_110;
	int		local_114;
	int		local_118;
	int		local_11c;
	int		local_120;
	int		local_124;
	int		local_128;
	int		local_12c;
	int		local_130;
	int		local_134;
	int		local_138;
	int		local_13c;
	int		local_140;
	int		local_144;
	int		local_148;
	int		local_14c;
	int		local_150;
	int		local_154;
	int		local_158;
	int		local_15c;
	int		local_160;
	int		local_164;
	int		local_168;
	int		local_16c;
	int		local_170;
	int		local_174;
	int		local_178;
	int		local_17c;
	int		local_180;
	int		local_184;
	int		local_188;
	int		local_18c;
	int		local_190;
	int		local_194;
	int		local_198;
	int		local_19c;
	int		local_1a0;
	int		local_1a4;
	int		local_1a8;
	int		local_1ac;
	int		local_1b0;
	int		local_1b4;
	int		local_1b8;
	int		local_1bc;
	int		local_1c0;
	int		local_1c4;
	int		local_1c8;
	int		local_1cc;
	int		local_1d0;
	int		local_1d4;
	int		local_1d8;
	int		local_1dc;
	int		local_1e0;
	int		local_1e4;
	int		local_1e8;
	int		local_1ec;
	int		local_1f0;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_108 = *(int *)(arg_0 + 0x40);
	if (local_108 == 0x1) goto jmp_c4fe;
	if (local_108 == 0x5) goto jmp_c4fe;
	if (local_108 == 0xb) goto jmp_c4fe;
	if (local_108 == 0xd) goto jmp_c4fe;
	if (local_108 != 0xe) goto jmp_ca31;
jmp_c4fe:
	if (*(int *)(arg_0 + 0x40) == 0xb) goto jmp_c600;
	local_10c = *(int *)(arg_0 + 0x40);
	if (local_10c == 0xd) goto jmp_c514;
	if (local_10c != 0xe) goto jmp_c57f;
jmp_c514:
	if (*(int *)(arg_1 + 0x8) <= *(int *)(arg_0 + 0x5c)) goto jmp_c5f1;
	*(int *)(arg_0 + 0x4) = (float)bss_dc760;
	block_copy(arg_1, (arg_0 + 0xc), 0xc);
	local_110 = rand();
	*(int *)(arg_0 + 0x14) = (*(int *)(arg_0 + 0x58) + (0x40800000 * (0x40000000 * (((float)(local_110 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	if (*(int *)(arg_0 + 0x40) != 0xe) goto jmp_c5f1;
	local_118 = rand();
	*(int *)(arg_0 + 0x18) = (0x40800000 * (0x40000000 * (((float)(local_118 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_11c = rand();
	*(int *)(arg_0 + 0x1c) = (0x40800000 * (0x40000000 * (((float)(local_11c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	goto jmp_c5f1;
jmp_c57f:
	if (*(int *)(arg_1 + 0x8) >= *(int *)(arg_0 + 0x5c)) goto jmp_c5f1;
	*(int *)(arg_0 + 0x4) = (float)bss_dc760;
	block_copy(arg_1, (arg_0 + 0xc), 0xc);
	goto jmp_c5b3;
jmp_c59b:
	local_114 = (arg_0 + 0x14);
	*(int *)local_114 = (*(int *)local_114 + (*(int *)(arg_0 + 0x58) - *(int *)(arg_0 + 0x5c)));
jmp_c5b3:
	if (*(int *)(arg_0 + 0x14) < *(int *)(arg_0 + 0x5c)) goto jmp_c59b;
	if (*(int *)(arg_0 + 0x40) != 0x5) goto jmp_c5f1;
	local_114 = rand();
	*(int *)(arg_0 + 0x18) = (0x41800000 * (0x40000000 * (((float)(local_114 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_118 = rand();
	*(int *)(arg_0 + 0x1c) = (0x41800000 * (0x40000000 * (((float)(local_118 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
jmp_c5f1:
	if (*(int *)(arg_0 + 0x6c) != 0x0) goto jmp_c5fa;
	goto jmp_dc86;
jmp_c5fa:
	*(int *)(arg_0 + 0x38) = 0x3f800000;
jmp_c600:
	local_10c = Distance((bss_c2330 + 0x40), arg_1);
	if (local_10c <= 0x44800000) goto jmp_c612;
	goto jmp_dc86;
jmp_c612:
	local_110 = *(int *)(arg_0 + 0x40);
	if (local_110 == 0xd) goto jmp_c621;
	if (local_110 != 0xe) goto jmp_c873;
jmp_c621:
	local_118 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (vup * -*(int *)local_118));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * -*(int *)local_118));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * -*(int *)(arg_0 + 0x48)));
	local_11c = (arg_0 + 0x4c);
	local_18 = (local_18 + (vright * -*(int *)local_11c));
	local_1c = (local_1c + (bss_13bab4 * -*(int *)local_11c));
	local_20 = (local_20 + (bss_13bab8 * -*(int *)(arg_0 + 0x4c)));
	block_copy(&local_18, &local_24, 0xc);
	local_30 = 0x0;
	local_34 = 0x0;
	local_38 = 0xff;
	local_39 = 0xff;
	local_3a = 0xff;
	local_124 = (0x437f0000 * *(int *)(arg_0 + 0x38));
	local_128 = 0x4f000000;
	if (local_124 < local_128) goto jmp_c6af;
	local_120 = ((int)(local_124 - local_128) + 0x80000000);
	goto jmp_c6b4;
jmp_c6af:
	local_120 = (int)local_124;
jmp_c6b4:
	local_3b = local_120;
	local_130 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (vup * -*(int *)local_130));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * -*(int *)local_130));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * -*(int *)(arg_0 + 0x48)));
	local_134 = (arg_0 + 0x4c);
	local_18 = (local_18 + (vright * *(int *)local_134));
	local_1c = (local_1c + (bss_13bab4 * *(int *)local_134));
	local_20 = (local_20 + (bss_13bab8 * *(int *)(arg_0 + 0x4c)));
	block_copy(&local_18, &local_3c, 0xc);
	local_48 = 0x0;
	local_4c = 0x3f800000;
	local_50 = 0xff;
	local_51 = 0xff;
	local_52 = 0xff;
	local_13c = (0x437f0000 * *(int *)(arg_0 + 0x38));
	local_140 = 0x4f000000;
	if (local_13c < local_140) goto jmp_c743;
	local_138 = ((int)(local_13c - local_140) + 0x80000000);
	goto jmp_c748;
jmp_c743:
	local_138 = (int)local_13c;
jmp_c748:
	local_53 = local_138;
	local_148 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (vup * *(int *)local_148));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * *(int *)local_148));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * *(int *)(arg_0 + 0x48)));
	local_14c = (arg_0 + 0x4c);
	local_18 = (local_18 + (vright * *(int *)local_14c));
	local_1c = (local_1c + (bss_13bab4 * *(int *)local_14c));
	local_20 = (local_20 + (bss_13bab8 * *(int *)(arg_0 + 0x4c)));
	block_copy(&local_18, &local_54, 0xc);
	local_60 = 0x3f800000;
	local_64 = 0x3f800000;
	local_68 = 0xff;
	local_69 = 0xff;
	local_6a = 0xff;
	local_154 = (0x437f0000 * *(int *)(arg_0 + 0x38));
	local_158 = 0x4f000000;
	if (local_154 < local_158) goto jmp_c7d4;
	local_150 = ((int)(local_154 - local_158) + 0x80000000);
	goto jmp_c7d9;
jmp_c7d4:
	local_150 = (int)local_154;
jmp_c7d9:
	local_6b = local_150;
	local_160 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (vup * *(int *)local_160));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * *(int *)local_160));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * *(int *)(arg_0 + 0x48)));
	local_164 = (arg_0 + 0x4c);
	local_18 = (local_18 + (vright * -*(int *)local_164));
	local_1c = (local_1c + (bss_13bab4 * -*(int *)local_164));
	local_20 = (local_20 + (bss_13bab8 * -*(int *)(arg_0 + 0x4c)));
	block_copy(&local_18, &local_6c, 0xc);
	local_78 = 0x3f800000;
	local_7c = 0x0;
	local_80 = 0xff;
	local_81 = 0xff;
	local_82 = 0xff;
	local_16c = (0x437f0000 * *(int *)(arg_0 + 0x38));
	local_170 = 0x4f000000;
	if (local_16c < local_170) goto jmp_c868;
	local_168 = ((int)(local_16c - local_170) + 0x80000000);
	goto jmp_c86d;
jmp_c868:
	local_168 = (int)local_16c;
jmp_c86d:
	local_83 = local_168;
	goto jmp_dc4e;
jmp_c873:
	local_118 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (vup * -*(int *)local_118));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * -*(int *)local_118));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * -*(int *)(arg_0 + 0x48)));
	local_11c = (arg_0 + 0x4c);
	local_18 = (local_18 + (vright * -*(int *)local_11c));
	local_1c = (local_1c + (bss_13bab4 * -*(int *)local_11c));
	local_20 = (local_20 + (bss_13bab8 * -*(int *)(arg_0 + 0x4c)));
	block_copy(&local_18, local_84, 0xc);
	local_90 = 0x3f800000;
	local_94 = 0x0;
	local_98 = 0xff;
	local_99 = 0xff;
	local_9a = 0xff;
	local_124 = (0x437f0000 * *(int *)(arg_0 + 0x38));
	local_128 = 0x4f000000;
	if (local_124 < local_128) goto jmp_c901;
	local_120 = ((int)(local_124 - local_128) + 0x80000000);
	goto jmp_c906;
jmp_c901:
	local_120 = (int)local_124;
jmp_c906:
	local_9b = local_120;
	local_130 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (vup * *(int *)local_130));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * *(int *)local_130));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * *(int *)(arg_0 + 0x48)));
	local_134 = (arg_0 + 0x4c);
	local_18 = (local_18 + (vright * -*(int *)local_134));
	local_1c = (local_1c + (bss_13bab4 * -*(int *)local_134));
	local_20 = (local_20 + (bss_13bab8 * -*(int *)(arg_0 + 0x4c)));
	block_copy(&local_18, local_9c, 0xc);
	local_a8 = 0x0;
	local_ac = 0x0;
	local_b0 = 0xff;
	local_b1 = 0xff;
	local_b2 = 0xff;
	local_13c = (0x437f0000 * *(int *)(arg_0 + 0x38));
	local_140 = 0x4f000000;
	if (local_13c < local_140) goto jmp_c995;
	local_138 = ((int)(local_13c - local_140) + 0x80000000);
	goto jmp_c99a;
jmp_c995:
	local_138 = (int)local_13c;
jmp_c99a:
	local_b3 = local_138;
	local_148 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (vup * *(int *)local_148));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * *(int *)local_148));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * *(int *)(arg_0 + 0x48)));
	local_14c = (arg_0 + 0x4c);
	local_18 = (local_18 + (vright * *(int *)local_14c));
	local_1c = (local_1c + (bss_13bab4 * *(int *)local_14c));
	local_20 = (local_20 + (bss_13bab8 * *(int *)(arg_0 + 0x4c)));
	block_copy(&local_18, local_b4, 0xc);
	local_c0 = 0x0;
	local_c4 = 0x3f800000;
	local_c8 = 0xff;
	local_c9 = 0xff;
	local_ca = 0xff;
	local_154 = (0x437f0000 * *(int *)(arg_0 + 0x38));
	local_158 = 0x4f000000;
	if (local_154 < local_158) goto jmp_ca26;
	local_150 = ((int)(local_154 - local_158) + 0x80000000);
	goto jmp_ca2b;
jmp_ca26:
	local_150 = (int)local_154;
jmp_ca2b:
	local_cb = local_150;
	goto jmp_dc4e;
jmp_ca31:
	if (*(int *)(arg_0 + 0x40) != 0xf) goto jmp_ccb9;
	local_130 = 0x3f800000;
	local_d0 = local_130;
	local_d4 = local_130;
	local_d8 = 0x3f000000;
	local_138 = (arg_0 + 0x4);
	local_100 = ((float)bss_dc760 - *(int *)local_138);
	local_104 = (*(int *)(arg_0 + 0x8) - *(int *)local_138);
	local_e0 = (local_100 / local_104);
	local_13c = *(int *)(arg_0 + 0x4c);
	local_140 = local_e0;
	local_dc = (local_13c + (local_140 * (*(int *)(arg_0 + 0x54) - local_13c)));
	local_144 = *(int *)(arg_0 + 0x48);
	local_cc = (local_144 + (local_140 * (*(int *)(arg_0 + 0x50) - local_144)));
	if (*(int *)(arg_0 + 0x74) == 0x0) goto jmp_cabd;
	vectoangles(0xdcd18, &local_124);
	local_12c = (local_12c + (float)*(int *)(arg_0 + 0x74));
	AngleVectors(&local_124, 0x0, &local_118, &local_10c);
jmp_cabd:
	if (*(int *)(arg_0 + 0x74) == 0x0) goto jmp_cb15;
	local_14c = -local_cc;
	local_18 = (*(int *)arg_1 + (local_10c * local_14c));
	local_1c = (*(int *)(arg_1 + 0x4) + (local_110 * local_14c));
	local_20 = (*(int *)(arg_1 + 0x8) + (local_114 * -local_cc));
	local_150 = -local_dc;
	local_18 = (local_18 + (local_118 * local_150));
	local_1c = (local_1c + (local_11c * local_150));
	local_20 = (local_20 + (local_120 * -local_dc));
	goto jmp_cb64;
jmp_cb15:
	local_14c = -local_cc;
	local_18 = (*(int *)arg_1 + (vup * local_14c));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * local_14c));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * -local_cc));
	local_150 = -local_dc;
	local_18 = (local_18 + (vright * local_150));
	local_1c = (local_1c + (bss_13bab4 * local_150));
	local_20 = (local_20 + (bss_13bab8 * -local_dc));
jmp_cb64:
	block_copy(&local_18, &local_24, 0xc);
	local_30 = 0x0;
	local_34 = 0x0;
	local_38 = 0xff;
	local_39 = 0xff;
	local_3a = 0xff;
	local_3b = 0xff;
	if (*(int *)(arg_0 + 0x74) == 0x0) goto jmp_cba8;
	local_148 = (0x40000000 * local_cc);
	local_18 = (local_18 + (local_10c * local_148));
	local_1c = (local_1c + (local_110 * local_148));
	local_20 = (local_20 + (local_114 * (0x40000000 * local_cc)));
	goto jmp_cbce;
jmp_cba8:
	local_148 = (0x40000000 * local_cc);
	local_18 = (local_18 + (vup * local_148));
	local_1c = (local_1c + (bss_13baa8 * local_148));
	local_20 = (local_20 + (bss_13baac * (0x40000000 * local_cc)));
jmp_cbce:
	block_copy(&local_18, &local_3c, 0xc);
	local_48 = 0x0;
	local_4c = 0x3f800000;
	local_50 = 0xff;
	local_51 = 0xff;
	local_52 = 0xff;
	local_53 = 0xff;
	if (*(int *)(arg_0 + 0x74) == 0x0) goto jmp_cc12;
	local_148 = (0x40000000 * local_dc);
	local_18 = (local_18 + (local_118 * local_148));
	local_1c = (local_1c + (local_11c * local_148));
	local_20 = (local_20 + (local_120 * (0x40000000 * local_dc)));
	goto jmp_cc38;
jmp_cc12:
	local_148 = (0x40000000 * local_dc);
	local_18 = (local_18 + (vright * local_148));
	local_1c = (local_1c + (bss_13bab4 * local_148));
	local_20 = (local_20 + (bss_13bab8 * (0x40000000 * local_dc)));
jmp_cc38:
	block_copy(&local_18, &local_54, 0xc);
	local_60 = 0x3f800000;
	local_64 = 0x3f800000;
	local_68 = 0xff;
	local_69 = 0xff;
	local_6a = 0xff;
	local_6b = 0xff;
	if (*(int *)(arg_0 + 0x74) == 0x0) goto jmp_cc7c;
	local_148 = (0xc0000000 * local_cc);
	local_18 = (local_18 + (local_10c * local_148));
	local_1c = (local_1c + (local_110 * local_148));
	local_20 = (local_20 + (local_114 * (0xc0000000 * local_cc)));
	goto jmp_cca2;
jmp_cc7c:
	local_148 = (0xc0000000 * local_cc);
	local_18 = (local_18 + (vup * local_148));
	local_1c = (local_1c + (bss_13baa8 * local_148));
	local_20 = (local_20 + (bss_13baac * (0xc0000000 * local_cc)));
jmp_cca2:
	block_copy(&local_18, &local_6c, 0xc);
	local_78 = 0x3f800000;
	local_7c = 0x0;
	local_80 = 0xff;
	local_81 = 0xff;
	local_82 = 0xff;
	local_83 = 0xff;
	goto jmp_dc4e;
jmp_ccb9:
	local_10c = *(int *)(arg_0 + 0x40);
	if (local_10c == 0x3) goto jmp_ccc8;
	if (local_10c != 0xc) goto jmp_d361;
jmp_ccc8:
	local_110 = 0x40;
	if (*(int *)(arg_0 + local_110) != 0xc) goto jmp_cce6;
	local_114 = Distance((bss_c2330 + local_110), arg_1);
	if (local_114 <= 0x44800000) goto jmp_cce6;
	goto jmp_dc86;
jmp_cce6:
	if (*(int *)(arg_0 + 0x30) != 0x2) goto jmp_ccf8;
	local_d0 = 0x3e6147ae;
	local_d4 = 0x0;
	local_d8 = 0x0;
	goto jmp_cd49;
jmp_ccf8:
	if (*(int *)(arg_0 + 0x30) != 0x4) goto jmp_cd3b;
	local_124 = Distance((bss_c2330 + 0x40), arg_1);
	local_11c = local_124;
	if (local_11c != 0x0) goto jmp_cd16;
	local_11c = 0x3f800000;
jmp_cd16:
	local_120 = (0x45800000 / local_11c);
	local_118 = (0x3e800000 * local_120);
	if (local_118 <= 0x3f000000) goto jmp_cd29;
	local_118 = 0x3f000000;
jmp_cd29:
	local_128 = local_118;
	local_d0 = local_128;
	local_d4 = local_128;
	local_d8 = local_118;
	goto jmp_cd49;
jmp_cd3b:
	local_118 = 0x3f800000;
	local_d0 = local_118;
	local_d4 = local_118;
	local_d8 = 0x3f800000;
jmp_cd49:
	local_120 = (arg_0 + 0x4);
	local_100 = ((float)bss_dc760 - *(int *)local_120);
	local_104 = (*(int *)(arg_0 + 0x8) - *(int *)local_120);
	local_e0 = (local_100 / local_104);
	if ((float)bss_dc760 <= *(int *)(arg_0 + 0x60)) goto jmp_cdc2;
	local_128 = *(int *)(arg_0 + 0x60);
	local_e4 = (0x3f800000 - (((float)bss_dc760 - local_128) / (*(int *)(arg_0 + 0x8) - local_128)));
	if (*(int *)(arg_0 + 0x30) != 0x3) goto jmp_cdb6;
	local_130 = local_e4;
	local_12c = (local_130 * local_130);
	if (local_12c >= 0x0) goto jmp_cda6;
	local_12c = 0x0;
jmp_cda6:
	local_134 = local_12c;
	local_d0 = local_134;
	local_d4 = local_134;
	local_d8 = local_12c;
jmp_cdb6:
	local_e4 = (local_e4 * *(int *)(arg_0 + 0x38));
	goto jmp_cdcb;
jmp_cdc2:
	local_e4 = (0x3f800000 * *(int *)(arg_0 + 0x38));
jmp_cdcb:
	if (bss_e66b4 != 0x3) goto jmp_cdd2;
	local_e4 = 0x3f800000;
jmp_cdd2:
	if (local_e4 <= 0x3f800000) goto jmp_cdd9;
	local_e4 = 0x3f800000;
jmp_cdd9:
	local_128 = *(int *)(arg_0 + 0x4c);
	local_12c = local_e0;
	local_dc = (local_128 + (local_12c * (*(int *)(arg_0 + 0x54) - local_128)));
	local_130 = *(int *)(arg_0 + 0x48);
	local_cc = (local_130 + (local_12c * (*(int *)(arg_0 + 0x50) - local_130)));
	if (*(int *)(arg_0 + 0x40) == 0xc) goto jmp_ce45;
	vectoangles(0x13ba98, &local_134);
	local_144 = (arg_0 + 0x78);
	*(int *)local_144 = (*(int *)local_144 + *(int *)(arg_0 + 0x74));
	local_13c = (local_13c + (0x3dcccccd * (float)*(int *)(arg_0 + 0x78)));
	AngleVectors(&local_134, 0x0, &local_e8, &local_f4);
	goto jmp_ce4b;
jmp_ce45:
	block_copy(rright, &local_e8, 0xc);
	block_copy(rup, &local_f4, 0xc);
jmp_ce4b:
	if (*(int *)(arg_0 + 0x64) == 0x0) goto jmp_cea3;
	local_138 = -local_cc;
	local_18 = (*(int *)arg_1 + (local_f4 * local_138));
	local_1c = (*(int *)(arg_1 + 0x4) + (local_f8 * local_138));
	local_20 = (*(int *)(arg_1 + 0x8) + (local_fc * -local_cc));
	local_13c = -local_dc;
	local_18 = (local_18 + (local_e8 * local_13c));
	local_1c = (local_1c + (local_ec * local_13c));
	local_20 = (local_20 + (local_f0 * -local_dc));
	goto jmp_cf02;
jmp_cea3:
	local_138 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (vup * -*(int *)local_138));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * -*(int *)local_138));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * -*(int *)(arg_0 + 0x48)));
	local_13c = (arg_0 + 0x4c);
	local_18 = (local_18 + (vright * -*(int *)local_13c));
	local_1c = (local_1c + (bss_13bab4 * -*(int *)local_13c));
	local_20 = (local_20 + (bss_13bab8 * -*(int *)(arg_0 + 0x4c)));
jmp_cf02:
	block_copy(&local_18, &local_24, 0xc);
	local_30 = 0x0;
	local_34 = 0x0;
	local_138 = (0x437f0000 * local_d0);
	local_13c = 0x4f000000;
	if (local_138 < local_13c) goto jmp_cf25;
	local_134 = ((int)(local_138 - local_13c) + 0x80000000);
	goto jmp_cf2a;
jmp_cf25:
	local_134 = (int)local_138;
jmp_cf2a:
	local_38 = local_134;
	local_144 = (0x437f0000 * local_d4);
	local_148 = 0x4f000000;
	if (local_144 < local_148) goto jmp_cf48;
	local_140 = ((int)(local_144 - local_148) + 0x80000000);
	goto jmp_cf4d;
jmp_cf48:
	local_140 = (int)local_144;
jmp_cf4d:
	local_39 = local_140;
	local_150 = (0x437f0000 * local_d8);
	local_154 = 0x4f000000;
	if (local_150 < local_154) goto jmp_cf6b;
	local_14c = ((int)(local_150 - local_154) + 0x80000000);
	goto jmp_cf70;
jmp_cf6b:
	local_14c = (int)local_150;
jmp_cf70:
	local_3a = local_14c;
	local_15c = (0x437f0000 * local_e4);
	local_160 = 0x4f000000;
	if (local_15c < local_160) goto jmp_cf8e;
	local_158 = ((int)(local_15c - local_160) + 0x80000000);
	goto jmp_cf93;
jmp_cf8e:
	local_158 = (int)local_15c;
jmp_cf93:
	local_3b = local_158;
	if (*(int *)(arg_0 + 0x64) == 0x0) goto jmp_cfed;
	local_168 = -local_cc;
	local_18 = (*(int *)arg_1 + (local_f4 * local_168));
	local_1c = (*(int *)(arg_1 + 0x4) + (local_f8 * local_168));
	local_20 = (*(int *)(arg_1 + 0x8) + (local_fc * -local_cc));
	local_16c = local_dc;
	local_18 = (local_18 + (local_e8 * local_16c));
	local_1c = (local_1c + (local_ec * local_16c));
	local_20 = (local_20 + (local_f0 * local_dc));
	goto jmp_d049;
jmp_cfed:
	local_168 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (vup * -*(int *)local_168));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * -*(int *)local_168));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * -*(int *)(arg_0 + 0x48)));
	local_16c = (arg_0 + 0x4c);
	local_18 = (local_18 + (vright * *(int *)local_16c));
	local_1c = (local_1c + (bss_13bab4 * *(int *)local_16c));
	local_20 = (local_20 + (bss_13bab8 * *(int *)(arg_0 + 0x4c)));
jmp_d049:
	block_copy(&local_18, &local_3c, 0xc);
	local_48 = 0x0;
	local_4c = 0x3f800000;
	local_168 = (0x437f0000 * local_d0);
	local_16c = 0x4f000000;
	if (local_168 < local_16c) goto jmp_d06c;
	local_164 = ((int)(local_168 - local_16c) + 0x80000000);
	goto jmp_d071;
jmp_d06c:
	local_164 = (int)local_168;
jmp_d071:
	local_50 = local_164;
	local_174 = (0x437f0000 * local_d4);
	local_178 = 0x4f000000;
	if (local_174 < local_178) goto jmp_d08f;
	local_170 = ((int)(local_174 - local_178) + 0x80000000);
	goto jmp_d094;
jmp_d08f:
	local_170 = (int)local_174;
jmp_d094:
	local_51 = local_170;
	local_180 = (0x437f0000 * local_d8);
	local_184 = 0x4f000000;
	if (local_180 < local_184) goto jmp_d0b2;
	local_17c = ((int)(local_180 - local_184) + 0x80000000);
	goto jmp_d0b7;
jmp_d0b2:
	local_17c = (int)local_180;
jmp_d0b7:
	local_52 = local_17c;
	local_18c = (0x437f0000 * local_e4);
	local_190 = 0x4f000000;
	if (local_18c < local_190) goto jmp_d0d5;
	local_188 = ((int)(local_18c - local_190) + 0x80000000);
	goto jmp_d0da;
jmp_d0d5:
	local_188 = (int)local_18c;
jmp_d0da:
	local_53 = local_188;
	if (*(int *)(arg_0 + 0x64) == 0x0) goto jmp_d12e;
	local_18 = (*(int *)arg_1 + (local_f4 * local_cc));
	local_1c = (*(int *)(arg_1 + 0x4) + (local_f8 * local_cc));
	local_20 = (*(int *)(arg_1 + 0x8) + (local_fc * local_cc));
	local_19c = local_dc;
	local_18 = (local_18 + (local_e8 * local_19c));
	local_1c = (local_1c + (local_ec * local_19c));
	local_20 = (local_20 + (local_f0 * local_dc));
	goto jmp_d187;
jmp_d12e:
	local_198 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (vup * *(int *)local_198));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * *(int *)local_198));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * *(int *)(arg_0 + 0x48)));
	local_19c = (arg_0 + 0x4c);
	local_18 = (local_18 + (vright * *(int *)local_19c));
	local_1c = (local_1c + (bss_13bab4 * *(int *)local_19c));
	local_20 = (local_20 + (bss_13bab8 * *(int *)(arg_0 + 0x4c)));
jmp_d187:
	block_copy(&local_18, &local_54, 0xc);
	local_60 = 0x3f800000;
	local_64 = 0x3f800000;
	local_198 = (0x437f0000 * local_d0);
	local_19c = 0x4f000000;
	if (local_198 < local_19c) goto jmp_d1aa;
	local_194 = ((int)(local_198 - local_19c) + 0x80000000);
	goto jmp_d1af;
jmp_d1aa:
	local_194 = (int)local_198;
jmp_d1af:
	local_68 = local_194;
	local_1a4 = (0x437f0000 * local_d4);
	local_1a8 = 0x4f000000;
	if (local_1a4 < local_1a8) goto jmp_d1cd;
	local_1a0 = ((int)(local_1a4 - local_1a8) + 0x80000000);
	goto jmp_d1d2;
jmp_d1cd:
	local_1a0 = (int)local_1a4;
jmp_d1d2:
	local_69 = local_1a0;
	local_1b0 = (0x437f0000 * local_d8);
	local_1b4 = 0x4f000000;
	if (local_1b0 < local_1b4) goto jmp_d1f0;
	local_1ac = ((int)(local_1b0 - local_1b4) + 0x80000000);
	goto jmp_d1f5;
jmp_d1f0:
	local_1ac = (int)local_1b0;
jmp_d1f5:
	local_6a = local_1ac;
	local_1bc = (0x437f0000 * local_e4);
	local_1c0 = 0x4f000000;
	if (local_1bc < local_1c0) goto jmp_d213;
	local_1b8 = ((int)(local_1bc - local_1c0) + 0x80000000);
	goto jmp_d218;
jmp_d213:
	local_1b8 = (int)local_1bc;
jmp_d218:
	local_6b = local_1b8;
	if (*(int *)(arg_0 + 0x64) == 0x0) goto jmp_d26e;
	local_18 = (*(int *)arg_1 + (local_f4 * local_cc));
	local_1c = (*(int *)(arg_1 + 0x4) + (local_f8 * local_cc));
	local_20 = (*(int *)(arg_1 + 0x8) + (local_fc * local_cc));
	local_1cc = -local_dc;
	local_18 = (local_18 + (local_e8 * local_1cc));
	local_1c = (local_1c + (local_ec * local_1cc));
	local_20 = (local_20 + (local_f0 * -local_dc));
	goto jmp_d2ca;
jmp_d26e:
	local_1c8 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (vup * *(int *)local_1c8));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * *(int *)local_1c8));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * *(int *)(arg_0 + 0x48)));
	local_1cc = (arg_0 + 0x4c);
	local_18 = (local_18 + (vright * -*(int *)local_1cc));
	local_1c = (local_1c + (bss_13bab4 * -*(int *)local_1cc));
	local_20 = (local_20 + (bss_13bab8 * -*(int *)(arg_0 + 0x4c)));
jmp_d2ca:
	block_copy(&local_18, &local_6c, 0xc);
	local_78 = 0x3f800000;
	local_7c = 0x0;
	local_1c8 = (0x437f0000 * local_d0);
	local_1cc = 0x4f000000;
	if (local_1c8 < local_1cc) goto jmp_d2ed;
	local_1c4 = ((int)(local_1c8 - local_1cc) + 0x80000000);
	goto jmp_d2f2;
jmp_d2ed:
	local_1c4 = (int)local_1c8;
jmp_d2f2:
	local_80 = local_1c4;
	local_1d4 = (0x437f0000 * local_d4);
	local_1d8 = 0x4f000000;
	if (local_1d4 < local_1d8) goto jmp_d310;
	local_1d0 = ((int)(local_1d4 - local_1d8) + 0x80000000);
	goto jmp_d315;
jmp_d310:
	local_1d0 = (int)local_1d4;
jmp_d315:
	local_81 = local_1d0;
	local_1e0 = (0x437f0000 * local_d8);
	local_1e4 = 0x4f000000;
	if (local_1e0 < local_1e4) goto jmp_d333;
	local_1dc = ((int)(local_1e0 - local_1e4) + 0x80000000);
	goto jmp_d338;
jmp_d333:
	local_1dc = (int)local_1e0;
jmp_d338:
	local_82 = local_1dc;
	local_1ec = (0x437f0000 * local_e4);
	local_1f0 = 0x4f000000;
	if (local_1ec < local_1f0) goto jmp_d356;
	local_1e8 = ((int)(local_1ec - local_1f0) + 0x80000000);
	goto jmp_d35b;
jmp_d356:
	local_1e8 = (int)local_1ec;
jmp_d35b:
	local_83 = local_1e8;
	goto jmp_dc4e;
jmp_d361:
	if (*(int *)(arg_0 + 0x40) != 0x8) goto jmp_d5e8;
	local_128 = *(int *)(arg_0 + 0x38);
	if (bss_e66b4 != 0x3) goto jmp_d376;
	local_128 = 0x3f800000;
jmp_d376:
	if (*(int *)(arg_0 + 0x74) == 0x0) goto jmp_d39c;
	vectoangles(0xdcd18, &local_12c);
	local_134 = (local_134 + (float)*(int *)(arg_0 + 0x74));
	AngleVectors(&local_12c, 0x0, &local_110, &local_11c);
	goto jmp_d3a2;
jmp_d39c:
	block_copy(&vup, &local_11c, 0xc);
	block_copy(&vright, &local_110, 0xc);
jmp_d3a2:
	local_13c = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (local_11c * -*(int *)local_13c));
	local_1c = (*(int *)(arg_1 + 0x4) + (local_120 * -*(int *)local_13c));
	local_20 = (*(int *)(arg_1 + 0x8) + (local_124 * -*(int *)(arg_0 + 0x48)));
	local_140 = (arg_0 + 0x4c);
	local_18 = (local_18 + (local_110 * -*(int *)local_140));
	local_1c = (local_1c + (local_114 * -*(int *)local_140));
	local_20 = (local_20 + (local_118 * -*(int *)(arg_0 + 0x4c)));
	block_copy(&local_18, &local_24, 0xc);
	local_30 = 0x0;
	local_34 = 0x0;
	local_38 = 0x6f;
	local_39 = 0x13;
	local_3a = 0x9;
	local_148 = (0x437f0000 * local_128);
	local_14c = 0x4f000000;
	if (local_148 < local_14c) goto jmp_d42d;
	local_144 = ((int)(local_148 - local_14c) + 0x80000000);
	goto jmp_d432;
jmp_d42d:
	local_144 = (int)local_148;
jmp_d432:
	local_3b = local_144;
	local_154 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (local_11c * -*(int *)local_154));
	local_1c = (*(int *)(arg_1 + 0x4) + (local_120 * -*(int *)local_154));
	local_20 = (*(int *)(arg_1 + 0x8) + (local_124 * -*(int *)(arg_0 + 0x48)));
	local_158 = (arg_0 + 0x4c);
	local_18 = (local_18 + (local_110 * *(int *)local_158));
	local_1c = (local_1c + (local_114 * *(int *)local_158));
	local_20 = (local_20 + (local_118 * *(int *)(arg_0 + 0x4c)));
	block_copy(&local_18, &local_3c, 0xc);
	local_48 = 0x0;
	local_4c = 0x3f800000;
	local_50 = 0x6f;
	local_51 = 0x13;
	local_52 = 0x9;
	local_160 = (0x437f0000 * local_128);
	local_164 = 0x4f000000;
	if (local_160 < local_164) goto jmp_d4be;
	local_15c = ((int)(local_160 - local_164) + 0x80000000);
	goto jmp_d4c3;
jmp_d4be:
	local_15c = (int)local_160;
jmp_d4c3:
	local_53 = local_15c;
	local_16c = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (local_11c * *(int *)local_16c));
	local_1c = (*(int *)(arg_1 + 0x4) + (local_120 * *(int *)local_16c));
	local_20 = (*(int *)(arg_1 + 0x8) + (local_124 * *(int *)(arg_0 + 0x48)));
	local_170 = (arg_0 + 0x4c);
	local_18 = (local_18 + (local_110 * *(int *)local_170));
	local_1c = (local_1c + (local_114 * *(int *)local_170));
	local_20 = (local_20 + (local_118 * *(int *)(arg_0 + 0x4c)));
	block_copy(&local_18, &local_54, 0xc);
	local_60 = 0x3f800000;
	local_64 = 0x3f800000;
	local_68 = 0x6f;
	local_69 = 0x13;
	local_6a = 0x9;
	local_178 = (0x437f0000 * local_128);
	local_17c = 0x4f000000;
	if (local_178 < local_17c) goto jmp_d54c;
	local_174 = ((int)(local_178 - local_17c) + 0x80000000);
	goto jmp_d551;
jmp_d54c:
	local_174 = (int)local_178;
jmp_d551:
	local_6b = local_174;
	local_184 = (arg_0 + 0x48);
	local_18 = (*(int *)arg_1 + (local_11c * *(int *)local_184));
	local_1c = (*(int *)(arg_1 + 0x4) + (local_120 * *(int *)local_184));
	local_20 = (*(int *)(arg_1 + 0x8) + (local_124 * *(int *)(arg_0 + 0x48)));
	local_188 = (arg_0 + 0x4c);
	local_18 = (local_18 + (local_110 * -*(int *)local_188));
	local_1c = (local_1c + (local_114 * -*(int *)local_188));
	local_20 = (local_20 + (local_118 * -*(int *)(arg_0 + 0x4c)));
	block_copy(&local_18, &local_6c, 0xc);
	local_78 = 0x3f800000;
	local_7c = 0x0;
	local_80 = 0x6f;
	local_81 = 0x13;
	local_82 = 0x9;
	local_190 = (0x437f0000 * local_128);
	local_194 = 0x4f000000;
	if (local_190 < local_194) goto jmp_d5dd;
	local_18c = ((int)(local_190 - local_194) + 0x80000000);
	goto jmp_d5e2;
jmp_d5dd:
	local_18c = (int)local_190;
jmp_d5e2:
	local_83 = local_18c;
	goto jmp_dc4e;
jmp_d5e8:
	if (*(int *)(arg_0 + 0x40) != 0x9) goto jmp_d8d7;
	if (*(int *)(arg_0 + 0x30) != 0x2) goto jmp_d606;
	local_118 = 0x3f800000;
	local_d0 = local_118;
	local_d4 = local_118;
	local_d8 = 0x3f800000;
	goto jmp_d614;
jmp_d606:
	local_11c = 0x3f000000;
	local_d0 = local_11c;
	local_d4 = local_11c;
	local_d8 = 0x3f000000;
jmp_d614:
	local_124 = (arg_0 + 0x4);
	local_100 = ((float)bss_dc760 - *(int *)local_124);
	local_104 = (*(int *)(arg_0 + 0x8) - *(int *)local_124);
	local_e0 = (local_100 / local_104);
	local_128 = *(int *)(arg_0 + 0x4c);
	local_12c = local_e0;
	local_130 = (arg_0 + 0x54);
	local_dc = (local_128 + (local_12c * (*(int *)local_130 - local_128)));
	local_134 = *(int *)(arg_0 + 0x48);
	local_cc = (local_134 + (local_12c * (*(int *)(arg_0 + 0x50) - local_134)));
	if (local_dc <= *(int *)local_130) goto jmp_d678;
	local_dc = *(int *)(arg_0 + 0x54);
jmp_d678:
	if (local_cc <= *(int *)(arg_0 + 0x50)) goto jmp_d687;
	local_cc = *(int *)(arg_0 + 0x50);
jmp_d687:
	local_138 = sin(((0x40490fdb * (float)*(int *)(arg_0 + 0x74)) / 0x43340000));
	local_13c = sqrt(0x40000000);
	local_110 = ((local_cc * local_138) * local_13c);
	local_140 = cos(((0x40490fdb * (float)*(int *)(arg_0 + 0x74)) / 0x43340000));
	local_144 = sqrt(0x40000000);
	local_114 = ((local_dc * local_140) * local_144);
	block_copy(arg_1, &local_24, 0xc);
	local_24 = (local_24 - local_110);
	*(int *)local_28 = (*(int *)local_28 - local_114);
	local_30 = 0x0;
	local_34 = 0x0;
	local_14c = (0x437f0000 * local_d0);
	local_150 = 0x4f000000;
	if (local_14c < local_150) goto jmp_d6f7;
	local_148 = ((int)(local_14c - local_150) + 0x80000000);
	goto jmp_d6fc;
jmp_d6f7:
	local_148 = (int)local_14c;
jmp_d6fc:
	local_38 = local_148;
	local_158 = (0x437f0000 * local_d4);
	local_15c = 0x4f000000;
	if (local_158 < local_15c) goto jmp_d71a;
	local_154 = ((int)(local_158 - local_15c) + 0x80000000);
	goto jmp_d71f;
jmp_d71a:
	local_154 = (int)local_158;
jmp_d71f:
	local_39 = local_154;
	local_164 = (0x437f0000 * local_d8);
	local_168 = 0x4f000000;
	if (local_164 < local_168) goto jmp_d73d;
	local_160 = ((int)(local_164 - local_168) + 0x80000000);
	goto jmp_d742;
jmp_d73d:
	local_160 = (int)local_164;
jmp_d742:
	local_3a = local_160;
	local_3b = 0xff;
	block_copy(arg_1, &local_3c, 0xc);
	local_3c = (local_3c - local_114);
	*(int *)local_40 = (*(int *)local_40 + local_110);
	local_48 = 0x0;
	local_4c = 0x3f800000;
	local_170 = (0x437f0000 * local_d0);
	local_174 = 0x4f000000;
	if (local_170 < local_174) goto jmp_d77b;
	local_16c = ((int)(local_170 - local_174) + 0x80000000);
	goto jmp_d780;
jmp_d77b:
	local_16c = (int)local_170;
jmp_d780:
	local_50 = local_16c;
	local_17c = (0x437f0000 * local_d4);
	local_180 = 0x4f000000;
	if (local_17c < local_180) goto jmp_d79e;
	local_178 = ((int)(local_17c - local_180) + 0x80000000);
	goto jmp_d7a3;
jmp_d79e:
	local_178 = (int)local_17c;
jmp_d7a3:
	local_51 = local_178;
	local_188 = (0x437f0000 * local_d8);
	local_18c = 0x4f000000;
	if (local_188 < local_18c) goto jmp_d7c1;
	local_184 = ((int)(local_188 - local_18c) + 0x80000000);
	goto jmp_d7c6;
jmp_d7c1:
	local_184 = (int)local_188;
jmp_d7c6:
	local_52 = local_184;
	local_53 = 0xff;
	block_copy(arg_1, &local_54, 0xc);
	local_54 = (local_54 + local_110);
	*(int *)local_58 = (*(int *)local_58 + local_114);
	local_60 = 0x3f800000;
	local_64 = 0x3f800000;
	local_194 = (0x437f0000 * local_d0);
	local_198 = 0x4f000000;
	if (local_194 < local_198) goto jmp_d7ff;
	local_190 = ((int)(local_194 - local_198) + 0x80000000);
	goto jmp_d804;
jmp_d7ff:
	local_190 = (int)local_194;
jmp_d804:
	local_68 = local_190;
	local_1a0 = (0x437f0000 * local_d4);
	local_1a4 = 0x4f000000;
	if (local_1a0 < local_1a4) goto jmp_d822;
	local_19c = ((int)(local_1a0 - local_1a4) + 0x80000000);
	goto jmp_d827;
jmp_d822:
	local_19c = (int)local_1a0;
jmp_d827:
	local_69 = local_19c;
	local_1ac = (0x437f0000 * local_d8);
	local_1b0 = 0x4f000000;
	if (local_1ac < local_1b0) goto jmp_d845;
	local_1a8 = ((int)(local_1ac - local_1b0) + 0x80000000);
	goto jmp_d84a;
jmp_d845:
	local_1a8 = (int)local_1ac;
jmp_d84a:
	local_6a = local_1a8;
	local_6b = 0xff;
	block_copy(arg_1, &local_6c, 0xc);
	local_6c = (local_6c + local_114);
	*(int *)local_70 = (*(int *)local_70 - local_110);
	local_78 = 0x3f800000;
	local_7c = 0x0;
	local_1b8 = (0x437f0000 * local_d0);
	local_1bc = 0x4f000000;
	if (local_1b8 < local_1bc) goto jmp_d883;
	local_1b4 = ((int)(local_1b8 - local_1bc) + 0x80000000);
	goto jmp_d888;
jmp_d883:
	local_1b4 = (int)local_1b8;
jmp_d888:
	local_80 = local_1b4;
	local_1c4 = (0x437f0000 * local_d4);
	local_1c8 = 0x4f000000;
	if (local_1c4 < local_1c8) goto jmp_d8a6;
	local_1c0 = ((int)(local_1c4 - local_1c8) + 0x80000000);
	goto jmp_d8ab;
jmp_d8a6:
	local_1c0 = (int)local_1c4;
jmp_d8ab:
	local_81 = local_1c0;
	local_1d0 = (0x437f0000 * local_d8);
	local_1d4 = 0x4f000000;
	if (local_1d0 < local_1d4) goto jmp_d8c9;
	local_1cc = ((int)(local_1d0 - local_1d4) + 0x80000000);
	goto jmp_d8ce;
jmp_d8c9:
	local_1cc = (int)local_1d0;
jmp_d8ce:
	local_82 = local_1cc;
	local_83 = 0xff;
	goto jmp_dc4e;
jmp_d8d7:
	if (*(int *)(arg_0 + 0x40) != 0x2) goto jmp_d988;
	block_copy(arg_1, &local_24, 0xc);
	local_24 = (local_24 - *(int *)(arg_0 + 0x48));
	*(int *)local_28 = (*(int *)local_28 - *(int *)(arg_0 + 0x4c));
	local_30 = 0x0;
	local_34 = 0x0;
	local_38 = 0xff;
	local_39 = 0xff;
	local_3a = 0xff;
	local_3b = 0xff;
	block_copy(arg_1, &local_3c, 0xc);
	local_3c = (local_3c - *(int *)(arg_0 + 0x48));
	*(int *)local_40 = (*(int *)local_40 + *(int *)(arg_0 + 0x4c));
	local_48 = 0x0;
	local_4c = 0x3f800000;
	local_50 = 0xff;
	local_51 = 0xff;
	local_52 = 0xff;
	local_53 = 0xff;
	block_copy(arg_1, &local_54, 0xc);
	local_54 = (local_54 + *(int *)(arg_0 + 0x48));
	*(int *)local_58 = (*(int *)local_58 + *(int *)(arg_0 + 0x4c));
	local_60 = 0x3f800000;
	local_64 = 0x3f800000;
	local_68 = 0xff;
	local_69 = 0xff;
	local_6a = 0xff;
	local_6b = 0xff;
	block_copy(arg_1, &local_6c, 0xc);
	local_6c = (local_6c + *(int *)(arg_0 + 0x48));
	*(int *)local_70 = (*(int *)local_70 - *(int *)(arg_0 + 0x4c));
	local_78 = 0x3f800000;
	local_7c = 0x0;
	local_80 = 0xff;
	local_81 = 0xff;
	local_82 = 0xff;
	local_83 = 0xff;
	goto jmp_dc4e;
jmp_d988:
	if (*(int *)(arg_0 + 0x40) != 0x6) goto jmp_dc4e;
	local_140 = (arg_0 + 0x4);
	local_100 = ((float)bss_dc760 - *(int *)local_140);
	local_104 = (*(int *)(arg_0 + 0x8) - *(int *)local_140);
	local_e0 = (local_100 / local_104);
	if (local_e0 < 0x3f800000) goto jmp_d9b7;
	local_e0 = 0x3f7ff972;
jmp_d9b7:
	local_148 = *(int *)(arg_0 + 0x4c);
	local_14c = local_e0;
	local_dc = (local_148 + (local_14c * (*(int *)(arg_0 + 0x54) - local_148)));
	local_150 = *(int *)(arg_0 + 0x48);
	local_cc = (local_150 + (local_14c * (*(int *)(arg_0 + 0x50) - local_150)));
	local_154 = Distance((bss_c2330 + 0x40), arg_1);
	if (local_154 >= (local_dc / 0x3fc00000)) goto jmp_d9fe;
	goto jmp_dc86;
jmp_d9fe:
	local_158 = (arg_0 + 0x70);
	local_128 = *(int *)local_158;
	local_15c = floor((local_e0 * (float)*(int *)((*(int *)local_158 << 0x2) + 0x1b0c)));
	local_12c = (int)local_15c;
	*(int *)(arg_0 + 0x44) = *(int *)((local_12c << 0x2) + ((local_128 << 0x8) + 0x15aad4));
	if (*(int *)(arg_0 + 0x74) == 0x0) goto jmp_da54;
	vectoangles(0xdcd18, &local_130);
	local_138 = (local_138 + (float)*(int *)(arg_0 + 0x74));
	AngleVectors(&local_130, 0x0, &local_11c, &local_110);
jmp_da54:
	if (*(int *)(arg_0 + 0x74) == 0x0) goto jmp_daac;
	local_164 = -local_cc;
	local_18 = (*(int *)arg_1 + (local_110 * local_164));
	local_1c = (*(int *)(arg_1 + 0x4) + (local_114 * local_164));
	local_20 = (*(int *)(arg_1 + 0x8) + (local_118 * -local_cc));
	local_168 = -local_dc;
	local_18 = (local_18 + (local_11c * local_168));
	local_1c = (local_1c + (local_120 * local_168));
	local_20 = (local_20 + (local_124 * -local_dc));
	goto jmp_dafb;
jmp_daac:
	local_164 = -local_cc;
	local_18 = (*(int *)arg_1 + (vup * local_164));
	local_1c = (*(int *)(arg_1 + 0x4) + (bss_13baa8 * local_164));
	local_20 = (*(int *)(arg_1 + 0x8) + (bss_13baac * -local_cc));
	local_168 = -local_dc;
	local_18 = (local_18 + (vright * local_168));
	local_1c = (local_1c + (bss_13bab4 * local_168));
	local_20 = (local_20 + (bss_13bab8 * -local_dc));
jmp_dafb:
	block_copy(&local_18, &local_24, 0xc);
	local_30 = 0x0;
	local_34 = 0x0;
	local_38 = 0xff;
	local_39 = 0xff;
	local_3a = 0xff;
	local_3b = 0xff;
	if (*(int *)(arg_0 + 0x74) == 0x0) goto jmp_db3f;
	local_160 = (0x40000000 * local_cc);
	local_18 = (local_18 + (local_110 * local_160));
	local_1c = (local_1c + (local_114 * local_160));
	local_20 = (local_20 + (local_118 * (0x40000000 * local_cc)));
	goto jmp_db65;
jmp_db3f:
	local_160 = (0x40000000 * local_cc);
	local_18 = (local_18 + (vup * local_160));
	local_1c = (local_1c + (bss_13baa8 * local_160));
	local_20 = (local_20 + (bss_13baac * (0x40000000 * local_cc)));
jmp_db65:
	block_copy(&local_18, &local_3c, 0xc);
	local_48 = 0x0;
	local_4c = 0x3f800000;
	local_50 = 0xff;
	local_51 = 0xff;
	local_52 = 0xff;
	local_53 = 0xff;
	if (*(int *)(arg_0 + 0x74) == 0x0) goto jmp_dba9;
	local_160 = (0x40000000 * local_dc);
	local_18 = (local_18 + (local_11c * local_160));
	local_1c = (local_1c + (local_120 * local_160));
	local_20 = (local_20 + (local_124 * (0x40000000 * local_dc)));
	goto jmp_dbcf;
jmp_dba9:
	local_160 = (0x40000000 * local_dc);
	local_18 = (local_18 + (vright * local_160));
	local_1c = (local_1c + (bss_13bab4 * local_160));
	local_20 = (local_20 + (bss_13bab8 * (0x40000000 * local_dc)));
jmp_dbcf:
	block_copy(&local_18, &local_54, 0xc);
	local_60 = 0x3f800000;
	local_64 = 0x3f800000;
	local_68 = 0xff;
	local_69 = 0xff;
	local_6a = 0xff;
	local_6b = 0xff;
	if (*(int *)(arg_0 + 0x74) == 0x0) goto jmp_dc13;
	local_160 = (0xc0000000 * local_cc);
	local_18 = (local_18 + (local_110 * local_160));
	local_1c = (local_1c + (local_114 * local_160));
	local_20 = (local_20 + (local_118 * (0xc0000000 * local_cc)));
	goto jmp_dc39;
jmp_dc13:
	local_160 = (0xc0000000 * local_cc);
	local_18 = (local_18 + (vup * local_160));
	local_1c = (local_1c + (bss_13baa8 * local_160));
	local_20 = (local_20 + (bss_13baac * (0xc0000000 * local_cc)));
jmp_dc39:
	block_copy(&local_18, &local_6c, 0xc);
	local_78 = 0x3f800000;
	local_7c = 0x0;
	local_80 = 0xff;
	local_81 = 0xff;
	local_82 = 0xff;
	local_83 = 0xff;
jmp_dc4e:
	if (*(int *)(arg_0 + 0x44) != 0x0) goto jmp_dc57;
	goto jmp_dc86;
jmp_dc57:
	local_110 = *(int *)(arg_0 + 0x40);
	if (local_110 == 0x1) goto jmp_dc6a;
	if (local_110 == 0x5) goto jmp_dc6a;
	if (local_110 != 0xb) goto jmp_dc79;
jmp_dc6a:
	trap_R_AddPolyToScene(*(int *)(arg_0 + 0x44), 0x3, local_84);
	goto jmp_dc86;
jmp_dc79:
	trap_R_AddPolyToScene(*(int *)(arg_0 + 0x44), 0x4, &local_24);
jmp_dc86:
}

/*
=================
CG_AddParticles

Address: 0xdc88
Stack Size: 0x74
Calls: CG_AddParticleToScene, AngleVectors, vectoangles, CG_ClearParticles
Called by: CG_DrawActiveFrame
=================
*/
void CG_AddParticles(void) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	char	local_40[8];
	int		local_48;
	int		local_4c;
	char	local_50[8];
	int		local_58;
	char	local_5c[24];

	if (initparticles != 0x0) goto jmp_dc90;
	CG_ClearParticles();
jmp_dc90:
	block_copy(&bss_dcd18, vforward, 0xc);
	block_copy(&bss_dcd24, &vright, 0xc);
	block_copy(&bss_dcd30, &vup, 0xc);
	vectoangles(0xdcd18, local_40);
	local_4c = 0x1c14;
	*(int *)local_4c = (*(int *)local_4c + (0x3dcccccd * ((float)bss_dc760 - oldtime)));
	local_48 = (local_48 + (0x3f666666 * *(int *)local_4c));
	AngleVectors(local_40, 0x13ba98, 0x13ba8c, 0x13ba80);
	oldtime = (float)bss_dc760;
	*(int *)local_50 = 0x0;
	local_3c = *(int *)local_50;
	local_34 = *(int *)local_50;
	local_18 = active_particles;
	goto jmp_de7b;
jmp_dcdd:
	local_38 = *(int *)local_18;
	local_1c = (0x3a83126f * ((float)bss_dc760 - *(int *)(local_18 + 0x4)));
	local_20 = (*(int *)(local_18 + 0x38) + (local_1c * *(int *)(local_18 + 0x3c)));
	if (local_20 > 0x0) goto jmp_dd20;
	*(int *)local_18 = free_particles;
	free_particles = local_18;
	*(int *)(local_18 + 0x40) = 0x0;
	*(int *)(local_18 + 0x30) = 0x0;
	*(int *)(local_18 + 0x38) = 0x0;
	goto jmp_de77;
jmp_dd20:
	local_58 = *(int *)(local_18 + 0x40);
	if (local_58 == 0x3) goto jmp_dd37;
	if (local_58 == 0x6) goto jmp_dd37;
	if (local_58 == 0x8) goto jmp_dd37;
	if (local_58 != 0xc) goto jmp_dd5d;
jmp_dd37:
	if ((float)bss_dc760 <= *(int *)(local_18 + 0x8)) goto jmp_dd5d;
	*(int *)local_18 = free_particles;
	free_particles = local_18;
	*(int *)(local_18 + 0x40) = 0x0;
	*(int *)(local_18 + 0x30) = 0x0;
	*(int *)(local_18 + 0x38) = 0x0;
	goto jmp_de77;
jmp_dd5d:
	if (*(int *)(local_18 + 0x40) != 0xb) goto jmp_dd8a;
	if ((float)bss_dc760 <= *(int *)(local_18 + 0x8)) goto jmp_dd8a;
	*(int *)local_18 = free_particles;
	free_particles = local_18;
	*(int *)(local_18 + 0x40) = 0x0;
	*(int *)(local_18 + 0x30) = 0x0;
	*(int *)(local_18 + 0x38) = 0x0;
	goto jmp_de77;
jmp_dd8a:
	if (*(int *)(local_18 + 0x40) != 0xa) goto jmp_ddb7;
	if ((float)bss_dc760 <= *(int *)(local_18 + 0x8)) goto jmp_ddb7;
	*(int *)local_18 = free_particles;
	free_particles = local_18;
	*(int *)(local_18 + 0x40) = 0x0;
	*(int *)(local_18 + 0x30) = 0x0;
	*(int *)(local_18 + 0x38) = 0x0;
	goto jmp_de77;
jmp_ddb7:
	*(int *)local_5c = *(int *)(local_18 + 0x40);
	if (*(int *)local_5c == 0x7) goto jmp_ddc6;
	if (*(int *)local_5c != 0xf) goto jmp_ddf8;
jmp_ddc6:
	if (*(int *)(local_18 + 0x8) >= 0x0) goto jmp_ddf8;
	CG_AddParticleToScene(local_18, (local_18 + 0xc), local_20);
	*(int *)local_18 = free_particles;
	free_particles = local_18;
	*(int *)(local_18 + 0x40) = 0x0;
	*(int *)(local_18 + 0x30) = 0x0;
	*(int *)(local_18 + 0x38) = 0x0;
	goto jmp_de77;
jmp_ddf8:
	*(int *)local_18 = 0x0;
	if (local_34 != 0x0) goto jmp_de0a;
	local_34 = local_18;
	local_3c = local_18;
	goto jmp_de13;
jmp_de0a:
	*(int *)local_34 = local_18;
	local_34 = local_18;
jmp_de13:
	if (local_20 <= 0x3f800000) goto jmp_de1a;
	local_20 = 0x3f800000;
jmp_de1a:
	local_24 = (local_1c * local_1c);
	local_28 = ((*(int *)(local_18 + 0xc) + (*(int *)(local_18 + 0x18) * local_1c)) + (*(int *)(local_18 + 0x24) * local_24));
	local_2c = ((*(int *)(local_18 + 0x10) + (*(int *)(local_18 + 0x1c) * local_1c)) + (*(int *)(local_18 + 0x28) * local_24));
	local_30 = ((*(int *)(local_18 + 0x14) + (*(int *)(local_18 + 0x20) * local_1c)) + (*(int *)(local_18 + 0x2c) * local_24));
	CG_AddParticleToScene(local_18, &local_28, local_20);
jmp_de77:
	local_18 = local_38;
jmp_de7b:
	if (local_18 != 0x0) goto jmp_dcdd;
	active_particles = local_3c;
}

/*
=================
CG_ParticleSnowFlurry

Address: 0xde85
Stack Size: 0x50
Calls: rand, CG_Printf
=================
*/
void CG_ParticleSnowFlurry(int arg_0, int arg_1) {
	int		local_c;
	int		local_10;
	char	local_14[12];
	char	local_20[8];
	char	local_28[8];
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;

	arg_1 = arg_1;
	local_10 = 0x1;
	if (arg_0 != 0x0) goto jmp_de96;
	CG_Printf(0x60ef);
jmp_de96:
	if (free_particles != 0x0) goto jmp_de9c;
	goto jmp_e004;
jmp_de9c:
	*(int *)local_14 = 0x15aac8;
	local_c = *(int *)*(int *)local_14;
	*(int *)*(int *)local_14 = *(int *)local_c;
	*(int *)local_c = active_particles;
	active_particles = local_c;
	*(int *)(local_c + 0x4) = (float)bss_dc760;
	*(int *)(local_c + 0x30) = 0x0;
	*(int *)(local_c + 0x38) = 0x3f666666;
	*(int *)(local_c + 0x3c) = 0x0;
	*(int *)(local_c + 0x58) = *(int *)(arg_1 + 0x68);
	*(int *)(local_c + 0x5c) = *(int *)(arg_1 + 0x6c);
	*(int *)(local_c + 0x8) = (float)(bss_dc760 + *(int *)(arg_1 + 0x54));
	*(int *)(local_c + 0x60) = (float)(bss_dc760 + *(int *)(arg_1 + 0x58));
	*(int *)(local_c + 0x44) = arg_0;
	*(int *)local_20 = rand();
	if ((*(int *)local_20 %% 0x64) <= 0x5a) goto jmp_df22;
	*(int *)(local_c + 0x48) = 0x42000000;
	*(int *)(local_c + 0x4c) = 0x42000000;
	*(int *)(local_c + 0x38) = 0x3dcccccd;
	goto jmp_df2e;
jmp_df22:
	*(int *)(local_c + 0x48) = 0x3f800000;
	*(int *)(local_c + 0x4c) = 0x3f800000;
jmp_df2e:
	*(int *)(local_c + 0x20) = 0xc1a00000;
	*(int *)(local_c + 0x40) = 0xb;
	if (local_10 == 0x0) goto jmp_df44;
	*(int *)(local_c + 0x20) = 0xc1200000;
jmp_df44:
	block_copy((arg_1 + 0x5c), (local_c + 0xc), 0xc);
	*(int *)local_28 = 0x0;
	*(int *)(local_c + 0x1c) = *(int *)local_28;
	*(int *)(local_c + 0x18) = *(int *)local_28;
	local_30 = 0x0;
	*(int *)(local_c + 0x2c) = local_30;
	*(int *)(local_c + 0x28) = local_30;
	*(int *)(local_c + 0x24) = local_30;
	local_34 = rand();
	local_38 = (local_c + 0x18);
	*(int *)local_38 = (*(int *)local_38 + ((0x42000000 * *(int *)(arg_1 + 0x74)) + (0x41800000 * (0x40000000 * (((float)(local_34 & 0x7fff) / 0x46fffe00) - 0x3f000000)))));
	local_3c = rand();
	local_40 = (local_c + 0x1c);
	*(int *)local_40 = (*(int *)local_40 + ((0x42000000 * *(int *)(arg_1 + 0x78)) + (0x41800000 * (0x40000000 * (((float)(local_3c & 0x7fff) / 0x46fffe00) - 0x3f000000)))));
	local_44 = (local_c + 0x20);
	*(int *)local_44 = (*(int *)local_44 + *(int *)(arg_1 + 0x7c));
	if (local_10 == 0x0) goto jmp_e004;
	local_48 = rand();
	*(int *)(local_c + 0x24) = (0x41800000 * (0x40000000 * (((float)(local_48 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_4c = rand();
	*(int *)(local_c + 0x28) = (0x41800000 * (0x40000000 * (((float)(local_4c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
jmp_e004:
}

/*
=================
CG_ParticleSnow

Address: 0xe006
Stack Size: 0x50
Calls: rand, CG_Printf
Called by: CG_NewParticleArea
=================
*/
void CG_ParticleSnow(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_c;
	char	local_10[12];
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[12];
	char	local_3c[8];
	int		local_44;
	int		local_48;
	int		local_4c;

	if (arg_0 != 0x0) goto jmp_e010;
	CG_Printf(0x60cd);
jmp_e010:
	if (free_particles != 0x0) goto jmp_e016;
	goto jmp_e15f;
jmp_e016:
	*(int *)local_10 = 0x15aac8;
	local_c = *(int *)*(int *)local_10;
	*(int *)*(int *)local_10 = *(int *)local_c;
	*(int *)local_c = active_particles;
	active_particles = local_c;
	*(int *)(local_c + 0x4) = (float)bss_dc760;
	*(int *)(local_c + 0x30) = 0x0;
	*(int *)(local_c + 0x38) = 0x3ecccccd;
	*(int *)(local_c + 0x3c) = 0x0;
	*(int *)(local_c + 0x58) = *(int *)(arg_1 + 0x8);
	*(int *)(local_c + 0x5c) = *(int *)(arg_2 + 0x8);
	*(int *)(local_c + 0x44) = arg_0;
	*(int *)(local_c + 0x48) = 0x3f800000;
	*(int *)(local_c + 0x4c) = 0x3f800000;
	*(int *)(local_c + 0x20) = 0xc2480000;
	if (arg_3 == 0x0) goto jmp_e086;
	*(int *)(local_c + 0x40) = 0x5;
	*(int *)(local_c + 0x20) = 0xc2820000;
	goto jmp_e08c;
jmp_e086:
	*(int *)(local_c + 0x40) = 0x1;
jmp_e08c:
	block_copy(arg_1, (local_c + 0xc), 0xc);
	local_1c = rand();
	local_20 = (local_c + 0xc);
	*(int *)local_20 = (*(int *)local_20 + ((0x40000000 * (((float)(local_1c & 0x7fff) / 0x46fffe00) - 0x3f000000)) * arg_4));
	local_24 = rand();
	local_28 = (local_c + 0x10);
	*(int *)local_28 = (*(int *)local_28 + ((0x40000000 * (((float)(local_24 & 0x7fff) / 0x46fffe00) - 0x3f000000)) * arg_4));
	local_2c = rand();
	*(int *)local_30 = (local_c + 0x14);
	*(int *)*(int *)local_30 = (*(int *)*(int *)local_30 + ((0x40000000 * (((float)(local_2c & 0x7fff) / 0x46fffe00) - 0x3f000000)) * (*(int *)(local_c + 0x58) - *(int *)(local_c + 0x5c))));
	*(int *)local_3c = 0x0;
	*(int *)(local_c + 0x1c) = *(int *)local_3c;
	*(int *)(local_c + 0x18) = *(int *)local_3c;
	local_44 = 0x0;
	*(int *)(local_c + 0x2c) = local_44;
	*(int *)(local_c + 0x28) = local_44;
	*(int *)(local_c + 0x24) = local_44;
	if (arg_3 == 0x0) goto jmp_e152;
	local_48 = rand();
	*(int *)(local_c + 0x18) = (0x41800000 * (0x40000000 * (((float)(local_48 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_4c = rand();
	*(int *)(local_c + 0x1c) = (0x41800000 * (0x40000000 * (((float)(local_4c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
jmp_e152:
	*(int *)(local_c + 0x68) = arg_5;
	*(int *)(local_c + 0x6c) = 0x1;
jmp_e15f:
}

/*
=================
CG_ParticleBubble

Address: 0xe161
Stack Size: 0x5c
Calls: rand, CG_Printf
Called by: CG_NewParticleArea
=================
*/
void CG_ParticleBubble(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_c;
	int		local_10;
	char	local_14[12];
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	char	local_3c[12];
	char	local_48[8];
	int		local_50;
	int		local_54;
	int		local_58;

	if (arg_0 != 0x0) goto jmp_e16b;
	CG_Printf(0x60cd);
jmp_e16b:
	if (free_particles != 0x0) goto jmp_e171;
	goto jmp_e2e3;
jmp_e171:
	*(int *)local_14 = 0x15aac8;
	local_c = *(int *)*(int *)local_14;
	*(int *)*(int *)local_14 = *(int *)local_c;
	*(int *)local_c = active_particles;
	active_particles = local_c;
	*(int *)(local_c + 0x4) = (float)bss_dc760;
	*(int *)(local_c + 0x30) = 0x0;
	*(int *)(local_c + 0x38) = 0x3ecccccd;
	*(int *)(local_c + 0x3c) = 0x0;
	*(int *)(local_c + 0x58) = *(int *)(arg_1 + 0x8);
	*(int *)(local_c + 0x5c) = *(int *)(arg_2 + 0x8);
	*(int *)(local_c + 0x44) = arg_0;
	local_20 = rand();
	local_10 = ((0x3f000000 * (0x40000000 * (((float)(local_20 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x3f800000);
	*(int *)(local_c + 0x48) = local_10;
	*(int *)(local_c + 0x4c) = local_10;
	local_24 = rand();
	*(int *)(local_c + 0x20) = ((0x41200000 * (0x40000000 * (((float)(local_24 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x42480000);
	if (arg_3 == 0x0) goto jmp_e20a;
	*(int *)(local_c + 0x40) = 0xe;
	*(int *)(local_c + 0x20) = 0x42820000;
	goto jmp_e210;
jmp_e20a:
	*(int *)(local_c + 0x40) = 0xd;
jmp_e210:
	block_copy(arg_1, (local_c + 0xc), 0xc);
	local_28 = rand();
	local_2c = (local_c + 0xc);
	*(int *)local_2c = (*(int *)local_2c + ((0x40000000 * (((float)(local_28 & 0x7fff) / 0x46fffe00) - 0x3f000000)) * arg_4));
	local_30 = rand();
	local_34 = (local_c + 0x10);
	*(int *)local_34 = (*(int *)local_34 + ((0x40000000 * (((float)(local_30 & 0x7fff) / 0x46fffe00) - 0x3f000000)) * arg_4));
	local_38 = rand();
	*(int *)local_3c = (local_c + 0x14);
	*(int *)*(int *)local_3c = (*(int *)*(int *)local_3c + ((0x40000000 * (((float)(local_38 & 0x7fff) / 0x46fffe00) - 0x3f000000)) * (*(int *)(local_c + 0x58) - *(int *)(local_c + 0x5c))));
	*(int *)local_48 = 0x0;
	*(int *)(local_c + 0x1c) = *(int *)local_48;
	*(int *)(local_c + 0x18) = *(int *)local_48;
	local_50 = 0x0;
	*(int *)(local_c + 0x2c) = local_50;
	*(int *)(local_c + 0x28) = local_50;
	*(int *)(local_c + 0x24) = local_50;
	if (arg_3 == 0x0) goto jmp_e2d6;
	local_54 = rand();
	*(int *)(local_c + 0x18) = (0x40800000 * (0x40000000 * (((float)(local_54 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_58 = rand();
	*(int *)(local_c + 0x1c) = (0x40800000 * (0x40000000 * (((float)(local_58 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
jmp_e2d6:
	*(int *)(local_c + 0x68) = arg_5;
	*(int *)(local_c + 0x6c) = 0x1;
jmp_e2e3:
}

/*
=================
CG_ParticleSmoke

Address: 0xe2e5
Stack Size: 0x34
Calls: rand, CG_Printf
=================
*/
void CG_ParticleSmoke(int arg_0, int arg_1) {
	int		local_c;
	char	local_10[16];
	char	local_20[8];
	int		local_28;
	int		local_2c;
	int		local_30;

	arg_1 = arg_1;
	if (arg_0 != 0x0) goto jmp_e2f3;
	CG_Printf(0x60b2);
jmp_e2f3:
	if (free_particles != 0x0) goto jmp_e2f9;
	goto jmp_e3eb;
jmp_e2f9:
	*(int *)local_10 = 0x15aac8;
	local_c = *(int *)*(int *)local_10;
	*(int *)*(int *)local_10 = *(int *)local_c;
	*(int *)local_c = active_particles;
	active_particles = local_c;
	*(int *)(local_c + 0x4) = (float)bss_dc760;
	*(int *)(local_c + 0x8) = (float)(bss_dc760 + *(int *)(arg_1 + 0x54));
	*(int *)(local_c + 0x60) = (float)(bss_dc760 + *(int *)(arg_1 + 0x58));
	*(int *)(local_c + 0x30) = 0x0;
	*(int *)(local_c + 0x38) = 0x3f800000;
	*(int *)(local_c + 0x3c) = 0x0;
	*(int *)(local_c + 0x58) = *(int *)(arg_1 + 0x64);
	*(int *)(local_c + 0x5c) = *(int *)(arg_1 + 0x70);
	*(int *)(local_c + 0x44) = arg_0;
	*(int *)(local_c + 0x64) = 0x0;
	*(int *)(local_c + 0x48) = 0x41000000;
	*(int *)(local_c + 0x4c) = 0x41000000;
	*(int *)(local_c + 0x50) = 0x42000000;
	*(int *)(local_c + 0x54) = 0x42000000;
	*(int *)(local_c + 0x40) = 0x3;
	block_copy((arg_1 + 0x5c), (local_c + 0xc), 0xc);
	*(int *)local_20 = 0x0;
	*(int *)(local_c + 0x1c) = *(int *)local_20;
	*(int *)(local_c + 0x18) = *(int *)local_20;
	local_28 = 0x0;
	*(int *)(local_c + 0x2c) = local_28;
	*(int *)(local_c + 0x28) = local_28;
	*(int *)(local_c + 0x24) = local_28;
	*(int *)(local_c + 0x20) = 0x40a00000;
	if (*(int *)(arg_1 + 0xac) != 0x1) goto jmp_e3d2;
	local_2c = (local_c + 0x20);
	*(int *)local_2c = (0xbf800000 * *(int *)local_2c);
jmp_e3d2:
	local_30 = rand();
	*(int *)(local_c + 0x74) = (int)((0x40800000 * (0x40000000 * (((float)(local_30 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x41000000);
jmp_e3eb:
}

/*
=================
CG_ParticleBulletDebris

Address: 0xe3ed
Stack Size: 0x24
=================
*/
void CG_ParticleBulletDebris(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	char	local_c[16];
	int		local_1c;
	int		local_20;

	arg_1 = arg_1;
	if (free_particles != 0x0) goto jmp_e3f8;
	goto jmp_e4b5;
jmp_e3f8:
	*(int *)local_c = 0x15aac8;
	local_8 = *(int *)*(int *)local_c;
	*(int *)*(int *)local_c = *(int *)local_8;
	*(int *)local_8 = active_particles;
	active_particles = local_8;
	*(int *)(local_8 + 0x4) = (float)bss_dc760;
	*(int *)(local_8 + 0x8) = (float)(bss_dc760 + arg_2);
	*(int *)(local_8 + 0x60) = (float)(bss_dc760 + (arg_2 / 0x2));
	*(int *)(local_8 + 0x30) = 0x3;
	*(int *)(local_8 + 0x38) = 0x3f800000;
	*(int *)(local_8 + 0x3c) = 0x0;
	*(int *)(local_8 + 0x48) = 0x3f000000;
	*(int *)(local_8 + 0x4c) = 0x3f000000;
	*(int *)(local_8 + 0x50) = 0x3f000000;
	*(int *)(local_8 + 0x54) = 0x3f000000;
	*(int *)(local_8 + 0x44) = bss_1041f8;
	*(int *)(local_8 + 0x40) = 0x3;
	block_copy(arg_0, (local_8 + 0xc), 0xc);
	*(int *)(local_8 + 0x18) = *(int *)arg_1;
	*(int *)(local_8 + 0x1c) = *(int *)(arg_1 + 0x4);
	*(int *)(local_8 + 0x20) = *(int *)(arg_1 + 0x8);
	local_1c = 0x0;
	*(int *)(local_8 + 0x2c) = local_1c;
	*(int *)(local_8 + 0x28) = local_1c;
	*(int *)(local_8 + 0x24) = local_1c;
	*(int *)(local_8 + 0x2c) = 0xc2700000;
	local_20 = (local_8 + 0x20);
	*(int *)local_20 = (*(int *)local_20 + 0xc1a00000);
jmp_e4b5:
}

/*
=================
CG_ParticleExplosion

Address: 0xe4b7
Stack Size: 0x2c
Calls: rand, Q_stricmp, CG_Error
Called by: CG_MissileHitWall
=================
*/
void CG_ParticleExplosion(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_10;
	int		local_14;
	char	local_18[12];
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	if (arg_0 >= 0xa) goto jmp_e4c5;
	CG_Error(0x606a);
jmp_e4c5:
	local_10 = 0x0;
	goto jmp_e4e5;
jmp_e4ca:
	*(int *)local_18 = Q_stricmp(arg_0, *(int *)((local_10 << 0x2) + 0x1a8c));
	if (*(int *)local_18 != 0x0) goto jmp_e4df;
	goto jmp_e4ee;
jmp_e4df:
	local_10 = (local_10 + 0x1);
jmp_e4e5:
	if (*(int *)((local_10 << 0x2) + 0x1a8c) != 0x0) goto jmp_e4ca;
jmp_e4ee:
	if (*(int *)((local_10 << 0x2) + 0x1a8c) != 0x0) goto jmp_e501;
	CG_Error(0x6037, arg_0);
	goto jmp_e5c9;
jmp_e501:
	if (free_particles != 0x0) goto jmp_e507;
	goto jmp_e5c9;
jmp_e507:
	*(int *)local_18 = 0x15aac8;
	local_14 = *(int *)*(int *)local_18;
	*(int *)*(int *)local_18 = *(int *)local_14;
	*(int *)local_14 = active_particles;
	active_particles = local_14;
	*(int *)(local_14 + 0x4) = (float)bss_dc760;
	*(int *)(local_14 + 0x38) = 0x3f000000;
	*(int *)(local_14 + 0x3c) = 0x0;
	if (arg_3 >= 0x0) goto jmp_e544;
	arg_3 = (0xffffffff * arg_3);
	*(int *)(local_14 + 0x74) = 0x0;
	goto jmp_e55b;
jmp_e544:
	local_24 = rand();
	*(int *)(local_14 + 0x74) = (int)(0x43330000 * (0x40000000 * (((float)(local_24 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
jmp_e55b:
	*(int *)(local_14 + 0x70) = local_10;
	*(int *)(local_14 + 0x4c) = (float)arg_4;
	*(int *)(local_14 + 0x48) = ((float)arg_4 * *(int *)((local_10 << 0x2) + 0x1b8c));
	*(int *)(local_14 + 0x50) = (float)arg_5;
	*(int *)(local_14 + 0x54) = ((float)arg_5 * *(int *)((local_10 << 0x2) + 0x1b8c));
	*(int *)(local_14 + 0x8) = (float)(bss_dc760 + arg_3);
	*(int *)(local_14 + 0x40) = 0x6;
	block_copy(arg_1, (local_14 + 0xc), 0xc);
	block_copy(arg_2, (local_14 + 0x18), 0xc);
	local_28 = 0x0;
	*(int *)(local_14 + 0x2c) = local_28;
	*(int *)(local_14 + 0x28) = local_28;
	*(int *)(local_14 + 0x24) = local_28;
jmp_e5c9:
}

/*
=================
CG_AddParticleShrapnel

Address: 0xe5cb
Stack Size: 0x8
=================
*/
void CG_AddParticleShrapnel(void) {

}

/*
=================
CG_NewParticleArea

Address: 0xe5ce
Stack Size: 0x7c
Calls: CG_ParticleSnow, CG_ParticleBubble, atof, atoi, COM_Parse, CG_ConfigString
=================
*/
int CG_NewParticleArea(int arg_0) {
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[12];
	char	local_38[12];
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;

	local_48 = 0x0;
	local_58 = CG_ConfigString(arg_0);
	local_28 = local_58;
	if ((char)*(char *)local_28 != 0x0) goto jmp_e5e7;
	return 0x0;
jmp_e5e7:
	local_5c = COM_Parse(&local_28);
	local_24 = local_5c;
	local_60 = atoi(local_24);
	local_44 = local_60;
	if (local_44 != 0x1) goto jmp_e605;
	local_48 = 0x43000000;
	goto jmp_e642;
jmp_e605:
	if (local_44 != 0x2) goto jmp_e60e;
	local_48 = 0x42800000;
	goto jmp_e642;
jmp_e60e:
	if (local_44 != 0x3) goto jmp_e617;
	local_48 = 0x42000000;
	goto jmp_e642;
jmp_e617:
	if (local_44 != 0x0) goto jmp_e620;
	local_48 = 0x43800000;
	goto jmp_e642;
jmp_e620:
	if (local_44 != 0x4) goto jmp_e629;
	local_48 = 0x41000000;
	goto jmp_e642;
jmp_e629:
	if (local_44 != 0x5) goto jmp_e632;
	local_48 = 0x41800000;
	goto jmp_e642;
jmp_e632:
	if (local_44 != 0x6) goto jmp_e63b;
	local_48 = 0x42000000;
	goto jmp_e642;
jmp_e63b:
	if (local_44 != 0x7) goto jmp_e642;
	local_48 = 0x42800000;
jmp_e642:
	local_20 = 0x0;
jmp_e645:
	local_64 = COM_Parse(&local_28);
	local_24 = local_64;
	local_68 = atof(local_24);
	*(int *)((local_20 << 0x2) + local_2c) = local_68;
	local_20 = (local_20 + 0x1);
	if (local_20 < 0x3) goto jmp_e645;
	local_20 = 0x0;
jmp_e66c:
	local_64 = COM_Parse(&local_28);
	local_24 = local_64;
	local_68 = atof(local_24);
	*(int *)((local_20 << 0x2) + local_38) = local_68;
	local_20 = (local_20 + 0x1);
	if (local_20 < 0x3) goto jmp_e66c;
	local_64 = COM_Parse(&local_28);
	local_24 = local_64;
	local_68 = atoi(local_24);
	local_50 = local_68;
	local_6c = COM_Parse(&local_28);
	local_24 = local_6c;
	local_70 = atoi(local_24);
	local_4c = local_70;
	local_74 = COM_Parse(&local_28);
	local_24 = local_74;
	local_78 = atoi(local_24);
	local_54 = local_78;
	local_20 = 0x0;
	goto jmp_e706;
jmp_e6d4:
	if (local_44 < 0x4) goto jmp_e6ed;
	CG_ParticleBubble(bss_104240, local_2c, local_38, local_4c, local_48, local_54);
	goto jmp_e700;
jmp_e6ed:
	CG_ParticleSnow(bss_104240, local_2c, local_38, local_4c, local_48, local_54);
jmp_e700:
	local_20 = (local_20 + 0x1);
jmp_e706:
	if (local_20 < local_50) goto jmp_e6d4;
	return 0x1;
}

/*
=================
CG_SnowLink

Address: 0xe70f
Stack Size: 0x18
=================
*/
void CG_SnowLink(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	local_10 = *(int *)(arg_0 + 0xac);
	local_8 = active_particles;
	goto jmp_e74f;
jmp_e71d:
	local_c = *(int *)local_8;
	local_14 = *(int *)(local_8 + 0x40);
	if (local_14 == 0x1) goto jmp_e731;
	if (local_14 != 0x5) goto jmp_e74b;
jmp_e731:
	if (*(int *)(local_8 + 0x68) != local_10) goto jmp_e74b;
	if (arg_1 == 0x0) goto jmp_e745;
	*(int *)(local_8 + 0x6c) = 0x1;
	goto jmp_e74b;
jmp_e745:
	*(int *)(local_8 + 0x6c) = 0x0;
jmp_e74b:
	local_8 = local_c;
jmp_e74f:
	if (local_8 != 0x0) goto jmp_e71d;
}

/*
=================
CG_ParticleImpactSmokePuff

Address: 0xe755
Stack Size: 0x30
Calls: rand, CG_Printf
=================
*/
void CG_ParticleImpactSmokePuff(int arg_0, int arg_1) {
	int		local_c;
	char	local_10[12];
	int		local_1c;
	int		local_20;
	char	local_24[12];

	if (arg_0 != 0x0) goto jmp_e75f;
	CG_Printf(0x600a);
jmp_e75f:
	if (free_particles != 0x0) goto jmp_e765;
	goto jmp_e83b;
jmp_e765:
	*(int *)local_10 = 0x15aac8;
	local_c = *(int *)*(int *)local_10;
	*(int *)*(int *)local_10 = *(int *)local_c;
	*(int *)local_c = active_particles;
	active_particles = local_c;
	*(int *)(local_c + 0x4) = (float)bss_dc760;
	*(int *)(local_c + 0x38) = 0x3e800000;
	*(int *)(local_c + 0x3c) = 0x0;
	local_1c = rand();
	*(int *)(local_c + 0x74) = (int)(0x43330000 * (0x40000000 * (((float)(local_1c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	*(int *)(local_c + 0x44) = arg_0;
	*(int *)(local_c + 0x8) = (float)(bss_dc760 + 0x3e8);
	*(int *)(local_c + 0x60) = (float)(bss_dc760 + 0x64);
	local_20 = rand();
	*(int *)(local_c + 0x4c) = (float)((local_20 %% 0x4) + 0x8);
	*(int *)local_24 = rand();
	*(int *)(local_c + 0x48) = (float)((*(int *)local_24 %% 0x4) + 0x8);
	*(int *)(local_c + 0x50) = (0x40000000 * *(int *)(local_c + 0x48));
	*(int *)(local_c + 0x54) = (0x40000000 * *(int *)(local_c + 0x4c));
	*(int *)(local_c + 0x8) = (float)(bss_dc760 + 0x1f4);
	*(int *)(local_c + 0x40) = 0xc;
	block_copy(arg_1, (local_c + 0xc), 0xc);
	*(int *)(local_c + 0x18) = 0x0;
	*(int *)(local_c + 0x1c) = 0x0;
	*(int *)(local_c + 0x20) = 0x41a00000;
	*(int *)(local_c + 0x24) = 0x0;
	*(int *)(local_c + 0x28) = 0x0;
	*(int *)(local_c + 0x2c) = 0x41a00000;
	*(int *)(local_c + 0x64) = 0x1;
jmp_e83b:
}

/*
=================
CG_Particle_Bleed

Address: 0xe83d
Stack Size: 0x30
Calls: rand, CG_Printf
=================
*/
void CG_Particle_Bleed(int arg_0, int arg_1, int arg_3, int arg_4) {
	int		local_c;
	char	local_10[12];
	char	local_1c[12];
	int		local_28;
	int		local_2c;

	if (arg_0 != 0x0) goto jmp_e847;
	CG_Printf(0x5fe6);
jmp_e847:
	if (free_particles != 0x0) goto jmp_e84d;
	goto jmp_e924;
jmp_e84d:
	*(int *)local_10 = 0x15aac8;
	local_c = *(int *)*(int *)local_10;
	*(int *)*(int *)local_10 = *(int *)local_c;
	*(int *)local_c = active_particles;
	active_particles = local_c;
	*(int *)(local_c + 0x4) = (float)bss_dc760;
	*(int *)(local_c + 0x38) = 0x3f800000;
	*(int *)(local_c + 0x3c) = 0x0;
	*(int *)(local_c + 0x74) = 0x0;
	*(int *)(local_c + 0x44) = arg_0;
	*(int *)(local_c + 0x8) = (float)(bss_dc760 + arg_4);
	if (arg_3 == 0x0) goto jmp_e89e;
	*(int *)(local_c + 0x60) = (float)bss_dc760;
	goto jmp_e8a8;
jmp_e89e:
	*(int *)(local_c + 0x60) = (float)(bss_dc760 + 0x64);
jmp_e8a8:
	*(int *)(local_c + 0x4c) = 0x40800000;
	*(int *)(local_c + 0x48) = 0x40800000;
	*(int *)local_1c = rand();
	*(int *)(local_c + 0x50) = (float)((*(int *)local_1c %% 0x3) + 0x4);
	*(int *)(local_c + 0x54) = *(int *)(local_c + 0x50);
	*(int *)(local_c + 0x40) = 0x3;
	block_copy(arg_1, (local_c + 0xc), 0xc);
	*(int *)(local_c + 0x18) = 0x0;
	*(int *)(local_c + 0x1c) = 0x0;
	*(int *)(local_c + 0x20) = 0xc1a00000;
	local_28 = 0x0;
	*(int *)(local_c + 0x2c) = local_28;
	*(int *)(local_c + 0x28) = local_28;
	*(int *)(local_c + 0x24) = local_28;
	*(int *)(local_c + 0x64) = 0x0;
	local_2c = rand();
	*(int *)(local_c + 0x74) = (local_2c %% 0xb3);
	*(int *)(local_c + 0x30) = 0x2;
	*(int *)(local_c + 0x38) = 0x3f400000;
jmp_e924:
}

/*
=================
CG_Particle_OilParticle

Address: 0xe926
Stack Size: 0x3c
Calls: rand, CG_Printf
=================
*/
void CG_Particle_OilParticle(int arg_0, int arg_1) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[20];
	int		local_34;
	int		local_38;

	arg_1 = arg_1;
	local_1c = 0x44bb8000;
	local_14 = bss_dc760;
	local_18 = (bss_dc760 + *(int *)(arg_1 + 0x54));
	local_10 = (0x3f800000 - ((float)local_14 / (float)local_18));
	if (arg_0 != 0x0) goto jmp_e950;
	CG_Printf(0x5fc4);
jmp_e950:
	if (free_particles != 0x0) goto jmp_e956;
	goto jmp_ea2f;
jmp_e956:
	*(int *)local_20 = 0x15aac8;
	local_c = *(int *)*(int *)local_20;
	*(int *)*(int *)local_20 = *(int *)local_c;
	*(int *)local_c = active_particles;
	active_particles = local_c;
	*(int *)(local_c + 0x4) = (float)bss_dc760;
	*(int *)(local_c + 0x38) = 0x3f800000;
	*(int *)(local_c + 0x3c) = 0x0;
	*(int *)(local_c + 0x74) = 0x0;
	*(int *)(local_c + 0x44) = arg_0;
	*(int *)(local_c + 0x8) = ((float)bss_dc760 + local_1c);
	*(int *)(local_c + 0x60) = *(int *)(local_c + 0x8);
	*(int *)(local_c + 0x4c) = 0x3f800000;
	*(int *)(local_c + 0x48) = 0x40400000;
	*(int *)(local_c + 0x50) = 0x40400000;
	*(int *)(local_c + 0x54) = 0x3f800000;
	*(int *)(local_c + 0x40) = 0x3;
	block_copy((arg_1 + 0x5c), (local_c + 0xc), 0xc);
	*(int *)(local_c + 0x18) = (*(int *)(arg_1 + 0x68) * (0x41800000 * local_10));
	*(int *)(local_c + 0x1c) = (*(int *)(arg_1 + 0x6c) * (0x41800000 * local_10));
	*(int *)(local_c + 0x20) = *(int *)(arg_1 + 0x70);
	*(int *)(local_c + 0x68) = 0x1;
	local_34 = 0x0;
	*(int *)(local_c + 0x2c) = local_34;
	*(int *)(local_c + 0x28) = local_34;
	*(int *)(local_c + 0x24) = local_34;
	*(int *)(local_c + 0x2c) = 0xc1a00000;
	*(int *)(local_c + 0x64) = 0x0;
	local_38 = rand();
	*(int *)(local_c + 0x74) = (local_38 %% 0xb3);
	*(int *)(local_c + 0x38) = 0x3f400000;
jmp_ea2f:
}

/*
=================
CG_Particle_OilSlick

Address: 0xea31
Stack Size: 0x3c
Calls: rand, CG_Printf
=================
*/
void CG_Particle_OilSlick(int arg_0, int arg_1) {
	int		local_c;
	char	local_10[20];
	int		local_24;
	int		local_28;
	char	local_2c[8];
	int		local_34;
	int		local_38;

	arg_1 = arg_1;
	if (arg_0 != 0x0) goto jmp_ea3f;
	CG_Printf(0x5fa5);
jmp_ea3f:
	if (free_particles != 0x0) goto jmp_ea45;
	goto jmp_eb75;
jmp_ea45:
	*(int *)local_10 = 0x15aac8;
	local_c = *(int *)*(int *)local_10;
	*(int *)*(int *)local_10 = *(int *)local_c;
	*(int *)local_c = active_particles;
	active_particles = local_c;
	*(int *)(local_c + 0x4) = (float)bss_dc760;
	if (*(int *)(arg_1 + 0x88) == 0x0) goto jmp_ea7b;
	*(int *)(local_c + 0x8) = ((float)bss_dc760 + *(int *)(arg_1 + 0x88));
	goto jmp_ea85;
jmp_ea7b:
	*(int *)(local_c + 0x8) = (float)(bss_dc760 + 0xea60);
jmp_ea85:
	*(int *)(local_c + 0x60) = *(int *)(local_c + 0x8);
	*(int *)(local_c + 0x38) = 0x3f800000;
	*(int *)(local_c + 0x3c) = 0x0;
	*(int *)(local_c + 0x74) = 0x0;
	*(int *)(local_c + 0x44) = arg_0;
	local_24 = 0x0;
	if (*(int *)(arg_1 + 0x80) != local_24) goto jmp_eabb;
	if (*(int *)(arg_1 + 0x84) == local_24) goto jmp_eae5;
jmp_eabb:
	*(int *)(local_c + 0x4c) = *(int *)(arg_1 + 0x80);
	*(int *)(local_c + 0x48) = *(int *)(arg_1 + 0x80);
	*(int *)(local_c + 0x50) = *(int *)(arg_1 + 0x84);
	*(int *)(local_c + 0x54) = *(int *)(arg_1 + 0x84);
	goto jmp_eafd;
jmp_eae5:
	*(int *)(local_c + 0x4c) = 0x41000000;
	*(int *)(local_c + 0x48) = 0x41000000;
	*(int *)(local_c + 0x50) = 0x41800000;
	*(int *)(local_c + 0x54) = 0x41800000;
jmp_eafd:
	*(int *)(local_c + 0x40) = 0x9;
	*(int *)(local_c + 0x68) = 0x1;
	block_copy((arg_1 + 0x5c), (local_c + 0xc), 0xc);
	local_28 = rand();
	*(int *)local_2c = (local_c + 0x14);
	*(int *)*(int *)local_2c = (*(int *)*(int *)local_2c + ((0x3f000000 * (0x40000000 * (((float)(local_28 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x3f0ccccd));
	*(int *)(local_c + 0x18) = 0x0;
	*(int *)(local_c + 0x1c) = 0x0;
	*(int *)(local_c + 0x20) = 0x0;
	local_34 = 0x0;
	*(int *)(local_c + 0x2c) = local_34;
	*(int *)(local_c + 0x28) = local_34;
	*(int *)(local_c + 0x24) = local_34;
	*(int *)(local_c + 0x64) = 0x0;
	local_38 = rand();
	*(int *)(local_c + 0x74) = (local_38 %% 0xb3);
	*(int *)(local_c + 0x38) = 0x3f400000;
jmp_eb75:
}

/*
=================
CG_OilSlickRemove

Address: 0xeb77
Stack Size: 0x20
Calls: CG_Printf
=================
*/
void CG_OilSlickRemove(void) {
	int		local_c;
	int		local_10;
	char	local_14[12];

	*(int *)local_14 = 0x1;
	if (*(int *)local_14 != 0x0) goto jmp_eb84;
	CG_Printf(0x5f8a);
jmp_eb84:
	local_c = active_particles;
	goto jmp_ebbc;
jmp_eb8a:
	local_10 = *(int *)local_c;
	if (*(int *)(local_c + 0x40) != 0x9) goto jmp_ebb8;
	if (*(int *)(local_c + 0x68) != *(int *)local_14) goto jmp_ebb8;
	*(int *)(local_c + 0x8) = (float)(bss_dc760 + 0x64);
	*(int *)(local_c + 0x60) = *(int *)(local_c + 0x8);
	*(int *)(local_c + 0x40) = 0xa;
jmp_ebb8:
	local_c = local_10;
jmp_ebbc:
	if (local_c != 0x0) goto jmp_eb8a;
}

/*
=================
ValidBloodPool

Address: 0xebc2
Stack Size: 0xec
Calls: CG_Trace, AngleVectors, vectoangles
Called by: CG_BloodPool
=================
*/
int ValidBloodPool(int arg_0) {
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	char	local_48[44];
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;
	int		local_a0;
	int		local_a4;
	int		local_a8;
	int		local_ac;
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	char	local_c0[12];
	int		local_cc;
	char	local_d0[8];
	int		local_d8;
	int		local_dc;
	int		local_e0;
	int		local_e4;
	int		local_e8;

	arg_0 = arg_0;
	local_cc = 0x10;
	local_bc = local_cc;
	local_9c = local_cc;
	*(int *)local_d0 = 0x0;
	local_84 = *(int *)local_d0;
	local_88 = *(int *)local_d0;
	local_8c = 0x3f800000;
	vectoangles(&local_84, local_c0);
	AngleVectors(local_c0, 0x0, &local_b0, &local_90);
	local_d8 = 0x3f000000;
	local_a4 = (*(int *)arg_0 + (local_d8 * local_84));
	local_a8 = (*(int *)(arg_0 + 0x4) + (local_d8 * local_88));
	local_ac = (*(int *)(arg_0 + 0x8) + (0x3f000000 * local_8c));
	local_a0 = (-local_bc / 0x2);
	goto jmp_ecd0;
jmp_ec22:
	local_dc = (float)local_a0;
	local_78 = (local_a4 + (local_b0 * local_dc));
	local_7c = (local_a8 + (local_b4 * local_dc));
	local_80 = (local_ac + (local_b8 * (float)local_a0));
	local_30 = (-local_9c / 0x2);
	goto jmp_ecc4;
jmp_ec4f:
	local_e0 = (float)local_30;
	local_24 = (local_78 + (local_90 * local_e0));
	local_28 = (local_7c + (local_94 * local_e0));
	local_2c = (local_80 + (local_98 * (float)local_30));
	local_e4 = 0xbf800000;
	local_34 = (local_24 + (local_e4 * local_84));
	local_38 = (local_28 + (local_e4 * local_88));
	local_3c = (local_2c + (0xbf800000 * local_8c));
#define next_call_arg_0 "&local_40"
#define next_call_arg_1 "&local_24"
	local_e8 = 0x0;
#define next_call_arg_2 "local_e8"
#define next_call_arg_3 "local_e8"
#define next_call_arg_4 "&local_34"
#define next_call_arg_5 "0xffffffff"
#define next_call_arg_6 "0x1"
	CG_Trace();
	if (local_74 >= 0x3fe) goto jmp_ecb1;
	return 0x0;
jmp_ecb1:
	if (local_44 != 0x0) goto jmp_ecb9;
	if (*(int *)local_48 < 0x3f800000) goto jmp_ecbd;
jmp_ecb9:
	return 0x0;
jmp_ecbd:
	local_30 = (local_30 + local_9c);
jmp_ecc4:
	if (local_30 < local_9c) goto jmp_ec4f;
	local_a0 = (local_a0 + local_bc);
jmp_ecd0:
	if (local_a0 < local_bc) goto jmp_ec22;
	return 0x1;
}

/*
=================
CG_BloodPool

Address: 0xecd9
Stack Size: 0x48
Calls: rand, ValidBloodPool, CG_Printf
=================
*/
void CG_BloodPool(, int arg_1, int arg_2) {
	int		local_c;
	int		local_10;
	char	local_14[12];
	int		local_20;
	int		local_24;
	char	local_28[16];
	char	local_38[8];
	int		local_40;
	int		local_44;

	if (arg_1 != 0x0) goto jmp_ece3;
	CG_Printf(0x5f6b);
jmp_ece3:
	if (free_particles != 0x0) goto jmp_ece9;
	goto jmp_edd5;
jmp_ece9:
	block_copy((arg_2 + 0xc), local_14, 0xc);
	local_24 = ValidBloodPool(local_14);
	local_20 = local_24;
	if (local_20 != 0x0) goto jmp_ecff;
	goto jmp_edd5;
jmp_ecff:
	*(int *)local_28 = 0x15aac8;
	local_c = *(int *)*(int *)local_28;
	*(int *)*(int *)local_28 = *(int *)local_c;
	*(int *)local_c = active_particles;
	active_particles = local_c;
	*(int *)(local_c + 0x4) = (float)bss_dc760;
	*(int *)(local_c + 0x8) = (float)(bss_dc760 + 0xbb8);
	*(int *)(local_c + 0x60) = *(int *)(local_c + 0x8);
	*(int *)(local_c + 0x38) = 0x3f800000;
	*(int *)(local_c + 0x3c) = 0x0;
	*(int *)(local_c + 0x74) = 0x0;
	*(int *)(local_c + 0x44) = arg_1;
	*(int *)local_38 = rand();
	local_10 = ((0x3f19999a * ((float)(*(int *)local_38 & 0x7fff) / 0x46fffe00)) + 0x3ecccccd);
	*(int *)(local_c + 0x4c) = (0x41000000 * local_10);
	*(int *)(local_c + 0x48) = (0x41000000 * local_10);
	*(int *)(local_c + 0x50) = (0x41800000 * local_10);
	*(int *)(local_c + 0x54) = (0x41800000 * local_10);
	*(int *)(local_c + 0x40) = 0x9;
	block_copy(local_14, (local_c + 0xc), 0xc);
	*(int *)(local_c + 0x18) = 0x0;
	*(int *)(local_c + 0x1c) = 0x0;
	*(int *)(local_c + 0x20) = 0x0;
	local_40 = 0x0;
	*(int *)(local_c + 0x2c) = local_40;
	*(int *)(local_c + 0x28) = local_40;
	*(int *)(local_c + 0x24) = local_40;
	*(int *)(local_c + 0x64) = 0x0;
	local_44 = rand();
	*(int *)(local_c + 0x74) = (local_44 %% 0xb3);
	*(int *)(local_c + 0x38) = 0x3f400000;
	*(int *)(local_c + 0x30) = 0x2;
jmp_edd5:
}

/*
=================
CG_ParticleBloodCloud

Address: 0xedd7
Stack Size: 0x78
Calls: rand, AngleVectors, vectoangles, VectorLength
=================
*/
void CG_ParticleBloodCloud(, int arg_1, int arg_2) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	char	local_44[12];
	int		local_50;
	char	local_54[8];
	char	local_5c[12];
	char	local_68[8];
	int		local_70;
	int		local_74;

	arg_1 = arg_1;
	local_3c = 0x0;
	local_50 = VectorLength(arg_2);
	local_40 = local_50;
	vectoangles(arg_2, local_44);
#define next_call_arg_0 "local_44"
#define next_call_arg_1 "&local_2c"
	*(int *)local_54 = 0x0;
#define next_call_arg_2 "*(int *)local_54"
#define next_call_arg_3 "*(int *)local_54"
	AngleVectors();
	local_28 = 0x42000000;
	if (local_40 == 0x0) goto jmp_ee10;
	local_3c = (local_40 / local_28);
jmp_ee10:
	if (local_3c >= 0x3f800000) goto jmp_ee17;
	local_3c = 0x3f800000;
jmp_ee17:
	block_copy(arg_1, &local_1c, 0xc);
	local_38 = 0x0;
	goto jmp_ef14;
jmp_ee20:
	local_1c = (local_1c + (local_2c * local_28));
	local_20 = (local_20 + (local_30 * local_28));
	local_24 = (local_24 + (local_34 * local_28));
	if (free_particles != 0x0) goto jmp_ee44;
	goto jmp_ef1a;
jmp_ee44:
	*(int *)local_5c = 0x15aac8;
	local_18 = *(int *)*(int *)local_5c;
	*(int *)*(int *)local_5c = *(int *)local_18;
	*(int *)local_18 = active_particles;
	active_particles = local_18;
	*(int *)(local_18 + 0x4) = (float)bss_dc760;
	*(int *)(local_18 + 0x38) = 0x3f800000;
	*(int *)(local_18 + 0x3c) = 0x0;
	*(int *)(local_18 + 0x74) = 0x0;
	*(int *)(local_18 + 0x44) = bss_104230;
	*(int *)local_68 = rand();
	*(int *)(local_18 + 0x8) = ((float)(bss_dc760 + 0x15e) + (0x42c80000 * (0x40000000 * (((float)(*(int *)local_68 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	*(int *)(local_18 + 0x60) = (float)bss_dc760;
	*(int *)(local_18 + 0x4c) = 0x42000000;
	*(int *)(local_18 + 0x48) = 0x42000000;
	*(int *)(local_18 + 0x50) = 0x42000000;
	*(int *)(local_18 + 0x54) = 0x42000000;
	*(int *)(local_18 + 0x40) = 0x3;
	block_copy(arg_1, (local_18 + 0xc), 0xc);
	*(int *)(local_18 + 0x18) = 0x0;
	*(int *)(local_18 + 0x1c) = 0x0;
	*(int *)(local_18 + 0x20) = 0xbf800000;
	local_70 = 0x0;
	*(int *)(local_18 + 0x2c) = local_70;
	*(int *)(local_18 + 0x28) = local_70;
	*(int *)(local_18 + 0x24) = local_70;
	*(int *)(local_18 + 0x64) = 0x0;
	local_74 = rand();
	*(int *)(local_18 + 0x74) = (local_74 %% 0xb3);
	*(int *)(local_18 + 0x30) = 0x2;
	*(int *)(local_18 + 0x38) = 0x3f400000;
	local_38 = (local_38 + 0x1);
jmp_ef14:
	if ((float)local_38 < local_3c) goto jmp_ee20;
jmp_ef1a:
}

/*
=================
CG_ParticleSparks

Address: 0xef1c
Stack Size: 0x50
Calls: rand
=================
*/
void CG_ParticleSparks(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_8;
	char	local_c[12];
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[8];
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;

	arg_1 = arg_1;
	if (free_particles != 0x0) goto jmp_ef27;
	goto jmp_f099;
jmp_ef27:
	*(int *)local_c = 0x15aac8;
	local_8 = *(int *)*(int *)local_c;
	*(int *)*(int *)local_c = *(int *)local_8;
	*(int *)local_8 = active_particles;
	active_particles = local_8;
	*(int *)(local_8 + 0x4) = (float)bss_dc760;
	*(int *)(local_8 + 0x8) = (float)(bss_dc760 + arg_2);
	*(int *)(local_8 + 0x60) = (float)(bss_dc760 + (arg_2 / 0x2));
	*(int *)(local_8 + 0x30) = 0x3;
	*(int *)(local_8 + 0x38) = 0x3ecccccd;
	*(int *)(local_8 + 0x3c) = 0x0;
	*(int *)(local_8 + 0x48) = 0x3f000000;
	*(int *)(local_8 + 0x4c) = 0x3f000000;
	*(int *)(local_8 + 0x50) = 0x3f000000;
	*(int *)(local_8 + 0x54) = 0x3f000000;
	*(int *)(local_8 + 0x44) = bss_1041f8;
	*(int *)(local_8 + 0x40) = 0x3;
	block_copy(arg_0, (local_8 + 0xc), 0xc);
	local_18 = rand();
	local_1c = (local_8 + 0xc);
	*(int *)local_1c = (*(int *)local_1c + ((0x40000000 * (((float)(local_18 & 0x7fff) / 0x46fffe00) - 0x3f000000)) * arg_3));
	local_20 = rand();
	*(int *)local_24 = (local_8 + 0x10);
	*(int *)*(int *)local_24 = (*(int *)*(int *)local_24 + ((0x40000000 * (((float)(local_20 & 0x7fff) / 0x46fffe00) - 0x3f000000)) * arg_4));
	*(int *)(local_8 + 0x18) = *(int *)arg_1;
	*(int *)(local_8 + 0x1c) = *(int *)(arg_1 + 0x4);
	*(int *)(local_8 + 0x20) = *(int *)(arg_1 + 0x8);
	local_2c = 0x0;
	*(int *)(local_8 + 0x2c) = local_2c;
	*(int *)(local_8 + 0x28) = local_2c;
	*(int *)(local_8 + 0x24) = local_2c;
	local_30 = rand();
	local_34 = (local_8 + 0x18);
	*(int *)local_34 = (*(int *)local_34 + (0x40800000 * (0x40000000 * (((float)(local_30 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	local_38 = rand();
	local_3c = (local_8 + 0x1c);
	*(int *)local_3c = (*(int *)local_3c + (0x40800000 * (0x40000000 * (((float)(local_38 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	local_40 = rand();
	local_44 = (local_8 + 0x20);
	*(int *)local_44 = (*(int *)local_44 + (((0x41200000 * (0x40000000 * (((float)(local_40 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x41a00000) * arg_5));
	local_48 = rand();
	*(int *)(local_8 + 0x24) = (0x40800000 * (0x40000000 * (((float)(local_48 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_4c = rand();
	*(int *)(local_8 + 0x28) = (0x40800000 * (0x40000000 * (((float)(local_4c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
jmp_f099:
}

/*
=================
CG_ParticleDust

Address: 0xf09b
Stack Size: 0x9c
Calls: rand, AngleVectors, vectoangles, VectorLength
=================
*/
void CG_ParticleDust(, int arg_1, int arg_2) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	char	local_44[16];
	int		local_54;
	int		local_58;
	int		local_5c;
	char	local_60[8];
	char	local_68[12];
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	char	local_8c[8];
	int		local_94;
	int		local_98;

	arg_2 = arg_2;
	local_40 = 0x0;
	*(int *)arg_2 = -*(int *)arg_2;
	local_54 = (arg_2 + 0x4);
	*(int *)local_54 = -*(int *)local_54;
	local_58 = (arg_2 + 0x8);
	*(int *)local_58 = -*(int *)local_58;
	local_5c = VectorLength(arg_2);
	local_38 = local_5c;
	vectoangles(arg_2, local_44);
#define next_call_arg_0 "local_44"
#define next_call_arg_1 "&local_2c"
	*(int *)local_60 = 0x0;
#define next_call_arg_2 "*(int *)local_60"
#define next_call_arg_3 "*(int *)local_60"
	AngleVectors();
	local_28 = 0x42000000;
	if (local_38 == 0x0) goto jmp_f0f5;
	local_40 = (local_38 / local_28);
jmp_f0f5:
	if (local_40 >= 0x3f800000) goto jmp_f0fc;
	local_40 = 0x3f800000;
jmp_f0fc:
	block_copy(arg_1, &local_1c, 0xc);
	local_3c = 0x0;
	goto jmp_f29e;
jmp_f105:
	local_1c = (local_1c + (local_2c * local_28));
	local_20 = (local_20 + (local_30 * local_28));
	local_24 = (local_24 + (local_34 * local_28));
	if (free_particles != 0x0) goto jmp_f129;
	goto jmp_f2a4;
jmp_f129:
	*(int *)local_68 = 0x15aac8;
	local_18 = *(int *)*(int *)local_68;
	*(int *)*(int *)local_68 = *(int *)local_18;
	*(int *)local_18 = active_particles;
	active_particles = local_18;
	*(int *)(local_18 + 0x4) = (float)bss_dc760;
	*(int *)(local_18 + 0x38) = 0x40a00000;
	*(int *)(local_18 + 0x3c) = 0x0;
	*(int *)(local_18 + 0x74) = 0x0;
	*(int *)(local_18 + 0x44) = bss_104230;
	if (local_38 == 0x0) goto jmp_f183;
	local_74 = rand();
	*(int *)(local_18 + 0x8) = ((float)(bss_dc760 + 0x1194) + (0x455ac000 * (0x40000000 * (((float)(local_74 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	goto jmp_f19f;
jmp_f183:
	local_78 = rand();
	*(int *)(local_18 + 0x8) = ((float)(bss_dc760 + 0x2ee) + (0x43fa0000 * (0x40000000 * (((float)(local_78 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
jmp_f19f:
	*(int *)(local_18 + 0x60) = (float)bss_dc760;
	*(int *)(local_18 + 0x4c) = 0x42000000;
	*(int *)(local_18 + 0x48) = 0x42000000;
	*(int *)(local_18 + 0x50) = 0x42c00000;
	*(int *)(local_18 + 0x54) = 0x42c00000;
	if (local_38 != 0x0) goto jmp_f1eb;
	local_7c = (local_18 + 0x4c);
	*(int *)local_7c = (0x3e4ccccd * *(int *)local_7c);
	local_80 = (local_18 + 0x48);
	*(int *)local_80 = (0x3e4ccccd * *(int *)local_80);
	*(int *)(local_18 + 0x50) = 0x41800000;
	*(int *)(local_18 + 0x54) = 0x41800000;
jmp_f1eb:
	*(int *)(local_18 + 0x40) = 0x3;
	block_copy(&local_1c, (local_18 + 0xc), 0xc);
	local_7c = rand();
	*(int *)(local_18 + 0x18) = (0x40c00000 * (0x40000000 * (((float)(local_7c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_80 = rand();
	*(int *)(local_18 + 0x1c) = (0x40c00000 * (0x40000000 * (((float)(local_80 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	local_84 = rand();
	*(int *)(local_18 + 0x20) = (0x41a00000 * ((float)(local_84 & 0x7fff) / 0x46fffe00));
	local_88 = rand();
	*(int *)(local_18 + 0x24) = (0x40400000 * (0x40000000 * (((float)(local_88 & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	*(int *)local_8c = rand();
	*(int *)(local_18 + 0x28) = (0x40400000 * (0x40000000 * (((float)(*(int *)local_8c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	*(int *)(local_18 + 0x2c) = 0xc1800000;
	local_94 = 0x0;
	*(int *)(local_18 + 0x2c) = local_94;
	*(int *)(local_18 + 0x28) = local_94;
	*(int *)(local_18 + 0x24) = local_94;
	*(int *)(local_18 + 0x64) = 0x0;
	local_98 = rand();
	*(int *)(local_18 + 0x74) = (local_98 %% 0xb3);
	*(int *)(local_18 + 0x38) = 0x3f400000;
	local_3c = (local_3c + 0x1);
jmp_f29e:
	if ((float)local_3c < local_40) goto jmp_f105;
jmp_f2a4:
}

/*
=================
CG_ParticleMisc

Address: 0xf2a6
Stack Size: 0x20
Calls: rand, CG_Printf
=================
*/
void CG_ParticleMisc(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_c;
	char	local_10[12];
	int		local_1c;

	arg_2 = arg_2;
	if (arg_0 != 0x0) goto jmp_f2b4;
	CG_Printf(0x600a);
jmp_f2b4:
	if (free_particles != 0x0) goto jmp_f2ba;
	goto jmp_f34d;
jmp_f2ba:
	*(int *)local_10 = 0x15aac8;
	local_c = *(int *)*(int *)local_10;
	*(int *)*(int *)local_10 = *(int *)local_c;
	*(int *)local_c = active_particles;
	active_particles = local_c;
	*(int *)(local_c + 0x4) = (float)bss_dc760;
	*(int *)(local_c + 0x38) = 0x3f800000;
	*(int *)(local_c + 0x3c) = 0x0;
	local_1c = rand();
	*(int *)(local_c + 0x74) = (local_1c %% 0xb3);
	*(int *)(local_c + 0x44) = arg_0;
	if (arg_3 <= 0x0) goto jmp_f30a;
	*(int *)(local_c + 0x8) = (float)(bss_dc760 + arg_3);
	goto jmp_f312;
jmp_f30a:
	*(int *)(local_c + 0x8) = (float)arg_3;
jmp_f312:
	*(int *)(local_c + 0x60) = (float)bss_dc760;
	*(int *)(local_c + 0x4c) = (float)arg_2;
	*(int *)(local_c + 0x48) = (float)arg_2;
	*(int *)(local_c + 0x50) = (float)arg_2;
	*(int *)(local_c + 0x54) = (float)arg_2;
	*(int *)(local_c + 0x40) = 0xf;
	block_copy(arg_1, (local_c + 0xc), 0xc);
	*(int *)(local_c + 0x64) = 0x0;
jmp_f34d:
}

/*
=================
CG_CustomSound

Address: 0xf34f
Stack Size: 0x20
Calls: trap_S_RegisterSound, CG_Error, strcmp
Called by: CG_EntityEvent, CG_PainEvent
=================
*/
int CG_CustomSound(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	if ((char)*(char *)arg_1 == 0x2a) goto jmp_f36c;
	local_18 = trap_S_RegisterSound(arg_1, 0x0);
	return local_18;
jmp_f36c:
	if (arg_0 < 0x0) goto jmp_f374;
	if (arg_0 < 0x40) goto jmp_f377;
jmp_f374:
	arg_0 = 0x0;
jmp_f377:
	local_14 = ((0x6b4 * arg_0) + 0xe8c24);
	local_10 = 0x0;
	goto jmp_f3aa;
jmp_f384:
	local_1c = strcmp(arg_1, *(int *)((local_10 << 0x2) + 0x1c18));
	if (local_1c != 0x0) goto jmp_f3a4;
	return *(int *)((local_10 << 0x2) + (local_14 + 0x634));
jmp_f3a4:
	local_10 = (local_10 + 0x1);
jmp_f3aa:
	if (local_10 >= 0x20) goto jmp_f3b7;
	if (*(int *)((local_10 << 0x2) + 0x1c18) != 0x0) goto jmp_f384;
jmp_f3b7:
	CG_Error(0x66e4, arg_1);
	return 0x0;
}

/*
=================
CG_ParseAnimationFile

Address: 0xf3c3
Stack Size: 0x4e8c
Calls: memcpy, trap_FS_Read, trap_FS_FCloseFile, trap_FS_FOpenFile, atoi, Com_Printf, atof, Q_stricmp, COM_Parse, CG_Printf
Called by: CG_RegisterClientModelname
=================
*/
int CG_ParseAnimationFile(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	char	local_34[20000];
	int		local_4e54;
	int		local_4e58;
	char	local_4e5c[8];
	int		local_4e64;
	int		local_4e68;
	int		local_4e6c;
	int		local_4e70;
	int		local_4e74;
	int		local_4e78;
	int		local_4e7c;
	int		local_4e80;
	int		local_4e84;
	int		local_4e88;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_1c = (arg_1 + 0x228);
	local_4e58 = trap_FS_FOpenFile(arg_0, &local_4e54, 0x0);
	local_30 = local_4e58;
	if (local_30 > 0x0) goto jmp_f3e9;
	return 0x0;
jmp_f3e9:
	if (local_30 < 0x4e1f) goto jmp_f3ff;
	CG_Printf(0x66d2, arg_0);
	trap_FS_FCloseFile(local_4e54);
	return 0x0;
jmp_f3ff:
	trap_FS_Read(local_34, local_30, local_4e54);
	*(char *)(local_30 + local_34) = 0x0;
	trap_FS_FCloseFile(local_4e54);
	local_20 = local_34;
	*(int *)local_4e5c = 0x0;
	local_2c = *(int *)local_4e5c;
	*(int *)(arg_1 + 0x204) = *(int *)local_4e5c;
	local_4e64 = 0x0;
	*(int *)(arg_1 + 0x200) = local_4e64;
	*(int *)(arg_1 + 0x1fc) = local_4e64;
	*(int *)(arg_1 + 0x1f8) = local_4e64;
	*(int *)(arg_1 + 0x208) = 0x0;
	*(int *)(arg_1 + 0x1f0) = 0x0;
	*(int *)(arg_1 + 0x1f4) = 0x0;
	goto jmp_f5e8;
jmp_f453:
	local_28 = local_20;
	local_4e68 = COM_Parse(&local_20);
	local_14 = local_4e68;
	if ((char)*(char *)local_14 != 0x0) goto jmp_f469;
	goto jmp_f5ea;
jmp_f469:
	local_4e6c = Q_stricmp(local_14, 0x66c8);
	if (local_4e6c != 0x0) goto jmp_f50b;
	local_4e70 = COM_Parse(&local_20);
	local_14 = local_4e70;
	if ((char)*(char *)local_14 != 0x0) goto jmp_f488;
	goto jmp_f5ea;
jmp_f488:
	local_4e74 = Q_stricmp(local_14, 0x66c0);
	if (local_4e74 == 0x0) goto jmp_f4a2;
	local_4e78 = Q_stricmp(local_14, 0x66b9);
	if (local_4e78 != 0x0) goto jmp_f4aa;
jmp_f4a2:
	*(int *)(arg_1 + 0x204) = 0x0;
	goto jmp_f5e8;
jmp_f4aa:
	local_4e7c = Q_stricmp(local_14, 0x66b4);
	if (local_4e7c != 0x0) goto jmp_f4bf;
	*(int *)(arg_1 + 0x204) = 0x1;
	goto jmp_f5e8;
jmp_f4bf:
	local_4e80 = Q_stricmp(local_14, 0x66ae);
	if (local_4e80 != 0x0) goto jmp_f4d4;
	*(int *)(arg_1 + 0x204) = 0x2;
	goto jmp_f5e8;
jmp_f4d4:
	local_4e84 = Q_stricmp(local_14, 0x66a9);
	if (local_4e84 != 0x0) goto jmp_f4e9;
	*(int *)(arg_1 + 0x204) = 0x3;
	goto jmp_f5e8;
jmp_f4e9:
	local_4e88 = Q_stricmp(local_14, 0x66a2);
	if (local_4e88 != 0x0) goto jmp_f4fe;
	*(int *)(arg_1 + 0x204) = 0x4;
	goto jmp_f5e8;
jmp_f4fe:
	CG_Printf(0x6684, arg_0, local_14);
	goto jmp_f5e8;
jmp_f50b:
	local_4e70 = Q_stricmp(local_14, 0x6679);
	if (local_4e70 != 0x0) goto jmp_f54c;
	local_18 = 0x0;
jmp_f51b:
	local_4e74 = COM_Parse(&local_20);
	local_14 = local_4e74;
	if ((char)*(char *)local_14 != 0x0) goto jmp_f52d;
	goto jmp_f5e8;
jmp_f52d:
	local_4e78 = atof(local_14);
	*(int *)((local_18 << 0x2) + (arg_1 + 0x1f8)) = local_4e78;
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x3) goto jmp_f51b;
	goto jmp_f5e8;
jmp_f54c:
	local_4e74 = Q_stricmp(local_14, 0x6675);
	if (local_4e74 != 0x0) goto jmp_f59f;
	local_4e78 = COM_Parse(&local_20);
	local_14 = local_4e78;
	if ((char)*(char *)local_14 != 0x0) goto jmp_f56b;
	goto jmp_f5ea;
jmp_f56b:
	local_4e7c = (char)*(char *)local_14;
	if (local_4e7c == 0x66) goto jmp_f579;
	if (local_4e7c != 0x46) goto jmp_f581;
jmp_f579:
	*(int *)(arg_1 + 0x208) = 0x1;
	goto jmp_f5e8;
jmp_f581:
	local_4e80 = (char)*(char *)local_14;
	if (local_4e80 == 0x6e) goto jmp_f58f;
	if (local_4e80 != 0x4e) goto jmp_f597;
jmp_f58f:
	*(int *)(arg_1 + 0x208) = 0x2;
	goto jmp_f5e8;
jmp_f597:
	*(int *)(arg_1 + 0x208) = 0x0;
	goto jmp_f5e8;
jmp_f59f:
	local_4e78 = Q_stricmp(local_14, 0x666b);
	if (local_4e78 != 0x0) goto jmp_f5b4;
	*(int *)(arg_1 + 0x1f0) = 0x1;
	goto jmp_f5e8;
jmp_f5b4:
	local_4e7c = Q_stricmp(local_14, 0x6660);
	if (local_4e7c != 0x0) goto jmp_f5c9;
	*(int *)(arg_1 + 0x1f4) = 0x1;
	goto jmp_f5e8;
jmp_f5c9:
	local_4e80 = (char)*(char *)local_14;
	if (local_4e80 < 0x30) goto jmp_f5dd;
	if (local_4e80 > 0x39) goto jmp_f5dd;
	local_20 = local_28;
	goto jmp_f5ea;
jmp_f5dd:
	Com_Printf(0x6646, local_14, arg_0);
jmp_f5e8:
	goto jmp_f453;
jmp_f5ea:
	local_18 = 0x0;
jmp_f5ed:
	local_4e68 = COM_Parse(&local_20);
	local_14 = local_4e68;
	if ((char)*(char *)local_14 != 0x0) goto jmp_f666;
	if (local_18 < 0x19) goto jmp_f777;
	if (local_18 > 0x1e) goto jmp_f777;
	*(int *)((0x1c * local_18) + local_1c) = *(int *)(local_1c + 0xa8);
	*(int *)(((0x1c * local_18) + local_1c) + 0xc) = *(int *)(local_1c + 0xb4);
	*(int *)(((0x1c * local_18) + local_1c) + 0x10) = *(int *)(local_1c + 0xb8);
	*(int *)(((0x1c * local_18) + local_1c) + 0x8) = *(int *)(local_1c + 0xb0);
	*(int *)(((0x1c * local_18) + local_1c) + 0x4) = *(int *)(local_1c + 0xac);
	*(int *)(((0x1c * local_18) + local_1c) + 0x14) = 0x0;
	*(int *)(((0x1c * local_18) + local_1c) + 0x18) = 0x0;
	goto jmp_f76d;
jmp_f666:
	local_4e6c = atoi(local_14);
	*(int *)((0x1c * local_18) + local_1c) = local_4e6c;
	if (local_18 != 0xd) goto jmp_f688;
	local_2c = (*(int *)(local_1c + 0x16c) - *(int *)(local_1c + 0xa8));
jmp_f688:
	if (local_18 < 0xd) goto jmp_f6a2;
	if (local_18 >= 0x19) goto jmp_f6a2;
	local_4e74 = ((0x1c * local_18) + local_1c);
	*(int *)local_4e74 = (*(int *)local_4e74 - local_2c);
jmp_f6a2:
	local_4e74 = COM_Parse(&local_20);
	local_14 = local_4e74;
	if ((char)*(char *)local_14 != 0x0) goto jmp_f6b4;
	goto jmp_f777;
jmp_f6b4:
	local_4e78 = atoi(local_14);
	*(int *)(((0x1c * local_18) + local_1c) + 0x4) = local_4e78;
	*(int *)(((0x1c * local_18) + local_1c) + 0x14) = 0x0;
	*(int *)(((0x1c * local_18) + local_1c) + 0x18) = 0x0;
	if (*(int *)(((0x1c * local_18) + local_1c) + 0x4) >= 0x0) goto jmp_f706;
	local_4e7c = (((0x1c * local_18) + local_1c) + 0x4);
	*(int *)local_4e7c = -*(int *)local_4e7c;
	*(int *)(((0x1c * local_18) + local_1c) + 0x14) = 0x1;
jmp_f706:
	local_4e7c = COM_Parse(&local_20);
	local_14 = local_4e7c;
	if ((char)*(char *)local_14 != 0x0) goto jmp_f718;
	goto jmp_f777;
jmp_f718:
	local_4e80 = atoi(local_14);
	*(int *)(((0x1c * local_18) + local_1c) + 0x8) = local_4e80;
	local_4e84 = COM_Parse(&local_20);
	local_14 = local_4e84;
	if ((char)*(char *)local_14 != 0x0) goto jmp_f73d;
	goto jmp_f777;
jmp_f73d:
	local_4e88 = atof(local_14);
	local_24 = local_4e88;
	if (local_24 != 0x0) goto jmp_f74f;
	local_24 = 0x3f800000;
jmp_f74f:
	*(int *)(((0x1c * local_18) + local_1c) + 0xc) = (int)(0x447a0000 / local_24);
	*(int *)(((0x1c * local_18) + local_1c) + 0x10) = (int)(0x447a0000 / local_24);
jmp_f76d:
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x1f) goto jmp_f5ed;
jmp_f777:
	if (local_18 == 0x1f) goto jmp_f787;
	CG_Printf(0x6624, arg_0);
	return 0x0;
jmp_f787:
	memcpy((local_1c + 0x380), (local_1c + 0x16c), 0x1c);
	*(int *)(local_1c + 0x394) = 0x1;
	memcpy((local_1c + 0x39c), (local_1c + 0x188), 0x1c);
	*(int *)(local_1c + 0x3b0) = 0x1;
	*(int *)(local_1c + 0x3b8) = 0x0;
	*(int *)(local_1c + 0x3bc) = 0x10;
	*(int *)(local_1c + 0x3c0) = 0x10;
	*(int *)(local_1c + 0x3c4) = 0x42;
	*(int *)(local_1c + 0x3c8) = 0x42;
	*(int *)(local_1c + 0x3cc) = 0x0;
	*(int *)(local_1c + 0x3d4) = 0x10;
	*(int *)(local_1c + 0x3d8) = 0x5;
	*(int *)(local_1c + 0x3dc) = 0x0;
	*(int *)(local_1c + 0x3e0) = 0x32;
	*(int *)(local_1c + 0x3e4) = 0x32;
	*(int *)(local_1c + 0x3e8) = 0x0;
	*(int *)(local_1c + 0x3f0) = 0x10;
	*(int *)(local_1c + 0x3f4) = 0x5;
	*(int *)(local_1c + 0x3f8) = 0x1;
	*(int *)(local_1c + 0x3fc) = 0x42;
	*(int *)(local_1c + 0x400) = 0x42;
	*(int *)(local_1c + 0x404) = 0x1;
	return 0x1;
}

/*
=================
CG_FileExists

Address: 0xf821
Stack Size: 0x1c
Calls: trap_FS_FOpenFile
Called by: CG_FindClientHeadFile, CG_FindClientModelFile
=================
*/
int CG_FileExists(int arg_0) {
	int		local_14;
	int		local_18;

	local_18 = trap_FS_FOpenFile(arg_0, 0x0, 0x0);
	local_14 = local_18;
	if (local_14 <= 0x0) goto jmp_f839;
	return 0x1;
jmp_f839:
	return 0x0;
}

/*
=================
CG_FindClientModelFile

Address: 0xf83d
Stack Size: 0x50
Calls: CG_FileExists, Com_sprintf
Called by: CG_RegisterClientSkin
=================
*/
int CG_FindClientModelFile(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7) {
	int		local_30;
	int		local_34;
	int		local_38;
	char	local_3c[8];
	int		local_44;
	char	local_48[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_3 = arg_3;
	arg_4 = arg_4;
	arg_5 = arg_5;
	arg_6 = arg_6;
	arg_7 = arg_7;
	if (bss_e66f8 < 0x3) goto jmp_f875;
	*(int *)local_3c = *(int *)(arg_2 + 0x44);
	if (*(int *)local_3c == 0x2) goto jmp_f86b;
	goto jmp_f870;
jmp_f86b:
	local_38 = 0x661f;
	goto jmp_f878;
jmp_f870:
	local_38 = 0x661b;
	goto jmp_f878;
jmp_f875:
	local_38 = 0x66c0;
jmp_f878:
	local_34 = 0x661a;
	goto jmp_f9af;
jmp_f87d:
	local_30 = 0x0;
jmp_f880:
	*(int *)local_3c = 0x0;
	if (local_30 != *(int *)local_3c) goto jmp_f8b5;
	if (arg_3 == 0x0) goto jmp_f8b5;
	if ((char)*(char *)arg_3 == *(int *)local_3c) goto jmp_f8b5;
	Com_sprintf(arg_0, arg_1, 0x65f8, local_34, arg_4, arg_3, arg_6, arg_5, local_38, arg_7);
	goto jmp_f8d2;
jmp_f8b5:
	Com_sprintf(arg_0, arg_1, 0x65d8, local_34, arg_4, arg_6, arg_5, local_38, arg_7);
jmp_f8d2:
	local_44 = CG_FileExists(arg_0);
	if (local_44 == 0x0) goto jmp_f8e1;
	return 0x1;
jmp_f8e1:
	if (bss_e66f8 < 0x3) goto jmp_f933;
	*(int *)local_48 = 0x0;
	if (local_30 != *(int *)local_48) goto jmp_f917;
	if (arg_3 == 0x0) goto jmp_f917;
	if ((char)*(char *)arg_3 == *(int *)local_48) goto jmp_f917;
	Com_sprintf(arg_0, arg_1, 0x65b9, local_34, arg_4, arg_3, arg_6, local_38, arg_7);
	goto jmp_f97f;
jmp_f917:
	Com_sprintf(arg_0, arg_1, 0x659c, local_34, arg_4, arg_6, local_38, arg_7);
	goto jmp_f97f;
jmp_f933:
	*(int *)local_48 = 0x0;
	if (local_30 != *(int *)local_48) goto jmp_f965;
	if (arg_3 == 0x0) goto jmp_f965;
	if ((char)*(char *)arg_3 == *(int *)local_48) goto jmp_f965;
	Com_sprintf(arg_0, arg_1, 0x65b9, local_34, arg_4, arg_3, arg_6, arg_5, arg_7);
	goto jmp_f97f;
jmp_f965:
	Com_sprintf(arg_0, arg_1, 0x659c, local_34, arg_4, arg_6, arg_5, arg_7);
jmp_f97f:
	*(int *)local_48 = CG_FileExists(arg_0);
	if (*(int *)local_48 == 0x0) goto jmp_f98e;
	return 0x1;
jmp_f98e:
	if (arg_3 == 0x0) goto jmp_f998;
	if ((char)*(char *)arg_3 != 0x0) goto jmp_f99a;
jmp_f998:
	goto jmp_f9a4;
jmp_f99a:
	local_30 = (local_30 + 0x1);
	if (local_30 < 0x2) goto jmp_f880;
jmp_f9a4:
	if ((char)*(char *)local_34 == 0x0) goto jmp_f9ac;
	goto jmp_f9b1;
jmp_f9ac:
	local_34 = 0x6590;
jmp_f9af:
	goto jmp_f87d;
jmp_f9b1:
	return 0x0;
}

/*
=================
CG_FindClientHeadFile

Address: 0xf9b5
Stack Size: 0x50
Calls: CG_FileExists, Com_sprintf
Called by: CG_RegisterClientModelname, CG_RegisterClientSkin
=================
*/
int CG_FindClientHeadFile(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6, int arg_7) {
	int		local_30;
	int		local_34;
	int		local_38;
	char	local_3c[8];
	int		local_44;
	char	local_48[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_3 = arg_3;
	arg_4 = arg_4;
	arg_5 = arg_5;
	arg_6 = arg_6;
	arg_7 = arg_7;
	if (bss_e66f8 < 0x3) goto jmp_f9ed;
	*(int *)local_3c = *(int *)(arg_2 + 0x44);
	if (*(int *)local_3c == 0x2) goto jmp_f9e3;
	goto jmp_f9e8;
jmp_f9e3:
	local_38 = 0x661f;
	goto jmp_f9f0;
jmp_f9e8:
	local_38 = 0x661b;
	goto jmp_f9f0;
jmp_f9ed:
	local_38 = 0x66c0;
jmp_f9f0:
	if ((char)*(char *)arg_4 != 0x2a) goto jmp_fa01;
	local_34 = 0x6589;
	arg_4 = (arg_4 + 0x1);
	goto jmp_fb38;
jmp_fa01:
	local_34 = 0x661a;
	goto jmp_fb38;
jmp_fa06:
	local_30 = 0x0;
jmp_fa09:
	*(int *)local_3c = 0x0;
	if (local_30 != *(int *)local_3c) goto jmp_fa3e;
	if (arg_3 == 0x0) goto jmp_fa3e;
	if ((char)*(char *)arg_3 == *(int *)local_3c) goto jmp_fa3e;
	Com_sprintf(arg_0, arg_1, 0x6567, local_34, arg_4, arg_5, arg_3, arg_6, local_38, arg_7);
	goto jmp_fa5b;
jmp_fa3e:
	Com_sprintf(arg_0, arg_1, 0x6547, local_34, arg_4, arg_5, arg_6, local_38, arg_7);
jmp_fa5b:
	local_44 = CG_FileExists(arg_0);
	if (local_44 == 0x0) goto jmp_fa6a;
	return 0x1;
jmp_fa6a:
	if (bss_e66f8 < 0x3) goto jmp_fabc;
	*(int *)local_48 = 0x0;
	if (local_30 != *(int *)local_48) goto jmp_faa0;
	if (arg_3 == 0x0) goto jmp_faa0;
	if ((char)*(char *)arg_3 == *(int *)local_48) goto jmp_faa0;
	Com_sprintf(arg_0, arg_1, 0x65b9, local_34, arg_4, arg_3, arg_6, local_38, arg_7);
	goto jmp_fb08;
jmp_faa0:
	Com_sprintf(arg_0, arg_1, 0x659c, local_34, arg_4, arg_6, local_38, arg_7);
	goto jmp_fb08;
jmp_fabc:
	*(int *)local_48 = 0x0;
	if (local_30 != *(int *)local_48) goto jmp_faee;
	if (arg_3 == 0x0) goto jmp_faee;
	if ((char)*(char *)arg_3 == *(int *)local_48) goto jmp_faee;
	Com_sprintf(arg_0, arg_1, 0x65b9, local_34, arg_4, arg_3, arg_6, arg_5, arg_7);
	goto jmp_fb08;
jmp_faee:
	Com_sprintf(arg_0, arg_1, 0x659c, local_34, arg_4, arg_6, arg_5, arg_7);
jmp_fb08:
	*(int *)local_48 = CG_FileExists(arg_0);
	if (*(int *)local_48 == 0x0) goto jmp_fb17;
	return 0x1;
jmp_fb17:
	if (arg_3 == 0x0) goto jmp_fb21;
	if ((char)*(char *)arg_3 != 0x0) goto jmp_fb23;
jmp_fb21:
	goto jmp_fb2d;
jmp_fb23:
	local_30 = (local_30 + 0x1);
	if (local_30 < 0x2) goto jmp_fa09;
jmp_fb2d:
	if ((char)*(char *)local_34 == 0x0) goto jmp_fb35;
	goto jmp_fb3a;
jmp_fb35:
	local_34 = 0x6589;
jmp_fb38:
	goto jmp_fa06;
jmp_fb3a:
	return 0x0;
}

/*
=================
CG_RegisterClientSkin

Address: 0xfb3e
Stack Size: 0x7c
Calls: trap_R_RegisterSkin, CG_FindClientHeadFile, Com_Printf, CG_FindClientModelFile
Called by: CG_RegisterClientModelname
=================
*/
int CG_RegisterClientSkin(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	char	local_28[64];
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_68 = CG_FindClientModelFile(local_28, 0x40, arg_0, arg_1, arg_2, arg_3, 0x6541, 0x653c);
	if (local_68 == 0x0) goto jmp_fb70;
	local_6c = trap_R_RegisterSkin(local_28);
	*(int *)(arg_0 + 0x210) = local_6c;
jmp_fb70:
	if (*(int *)(arg_0 + 0x210) != 0x0) goto jmp_fb7e;
	Com_Printf(0x6521, local_28);
jmp_fb7e:
	local_6c = CG_FindClientModelFile(local_28, 0x40, arg_0, arg_1, arg_2, arg_3, 0x651b, 0x653c);
	if (local_6c == 0x0) goto jmp_fba7;
	local_70 = trap_R_RegisterSkin(local_28);
	*(int *)(arg_0 + 0x218) = local_70;
jmp_fba7:
	if (*(int *)(arg_0 + 0x218) != 0x0) goto jmp_fbb5;
	Com_Printf(0x64fe, local_28);
jmp_fbb5:
	local_70 = CG_FindClientHeadFile(local_28, 0x40, arg_0, arg_1, arg_4, arg_5, 0x64f9, 0x653c);
	if (local_70 == 0x0) goto jmp_fbde;
	local_74 = trap_R_RegisterSkin(local_28);
	*(int *)(arg_0 + 0x220) = local_74;
jmp_fbde:
	if (*(int *)(arg_0 + 0x220) != 0x0) goto jmp_fbec;
	Com_Printf(0x64dd, local_28);
jmp_fbec:
	local_78 = 0x0;
	if (*(int *)(arg_0 + 0x210) == local_78) goto jmp_fc07;
	if (*(int *)(arg_0 + 0x218) == local_78) goto jmp_fc07;
	if (*(int *)(arg_0 + 0x220) != local_78) goto jmp_fc0b;
jmp_fc07:
	return 0x0;
jmp_fc0b:
	return 0x1;
}

/*
=================
CG_RegisterClientModelname

Address: 0xfc0f
Stack Size: 0xcc
Calls: trap_R_RegisterShaderNoMip, trap_R_RegisterModel, CG_FindClientHeadFile, CG_ParseAnimationFile, CG_RegisterClientSkin, Com_Printf, Com_sprintf
Called by: CG_LoadClientInfo
=================
*/
int CG_RegisterClientModelname(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	char	local_28[64];
	int		local_68;
	char	local_6c[64];
	int		local_ac;
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;
	int		local_c4;
	int		local_c8;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_3 = arg_3;
	arg_4 = arg_4;
	arg_5 = arg_5;
	if ((char)*(char *)arg_3 != 0x0) goto jmp_fc30;
	local_68 = arg_1;
	goto jmp_fc34;
jmp_fc30:
	local_68 = arg_3;
jmp_fc34:
	Com_sprintf(local_28, 0x40, 0x64c1, arg_1);
	local_ac = trap_R_RegisterModel(local_28);
	*(int *)(arg_0 + 0x20c) = local_ac;
	if (*(int *)(arg_0 + 0x20c) != 0x0) goto jmp_fc7f;
	Com_sprintf(local_28, 0x40, 0x649a, arg_1);
	local_b0 = trap_R_RegisterModel(local_28);
	*(int *)(arg_0 + 0x20c) = local_b0;
	if (*(int *)(arg_0 + 0x20c) != 0x0) goto jmp_fc7f;
	Com_Printf(0x647c, local_28);
	return 0x0;
jmp_fc7f:
	Com_sprintf(local_28, 0x40, 0x6460, arg_1);
	local_b0 = trap_R_RegisterModel(local_28);
	*(int *)(arg_0 + 0x214) = local_b0;
	if (*(int *)(arg_0 + 0x214) != 0x0) goto jmp_fcca;
	Com_sprintf(local_28, 0x40, 0x6439, arg_1);
	local_b4 = trap_R_RegisterModel(local_28);
	*(int *)(arg_0 + 0x214) = local_b4;
	if (*(int *)(arg_0 + 0x214) != 0x0) goto jmp_fcca;
	Com_Printf(0x647c, local_28);
	return 0x0;
jmp_fcca:
	if ((char)*(char *)local_68 != 0x2a) goto jmp_fce7;
#define next_call_arg_0 "local_28"
#define next_call_arg_1 "0x40"
#define next_call_arg_2 "0x641a"
	local_b4 = (arg_3 + 0x1);
#define next_call_arg_3 "local_b4"
#define next_call_arg_4 "local_b4"
	Com_sprintf();
	goto jmp_fcf3;
jmp_fce7:
	Com_sprintf(local_28, 0x40, 0x63ff, local_68);
jmp_fcf3:
	local_b4 = trap_R_RegisterModel(local_28);
	*(int *)(arg_0 + 0x21c) = local_b4;
	if (*(int *)(arg_0 + 0x21c) != 0x0) goto jmp_fd29;
	if ((char)*(char *)local_68 == 0x2a) goto jmp_fd29;
	Com_sprintf(local_28, 0x40, 0x641a, arg_3, arg_3);
	local_bc = trap_R_RegisterModel(local_28);
	*(int *)(arg_0 + 0x21c) = local_bc;
jmp_fd29:
	if (*(int *)(arg_0 + 0x21c) != 0x0) goto jmp_fd3b;
	Com_Printf(0x647c, local_28);
	return 0x0;
jmp_fd3b:
	local_b8 = CG_RegisterClientSkin(arg_0, arg_5, arg_1, arg_2, local_68, arg_4);
	if (local_b8 != 0x0) goto jmp_fdd7;
	if (arg_5 == 0x0) goto jmp_fdc2;
	if ((char)*(char *)arg_5 == 0x0) goto jmp_fdc2;
	Com_Printf(0x63ce, arg_5, arg_1, arg_2, local_68, arg_4);
	if (*(int *)(arg_0 + 0x44) != 0x2) goto jmp_fd87;
	Com_sprintf(local_6c, 0x40, 0x63ca, 0x63c3);
	goto jmp_fd92;
jmp_fd87:
	Com_sprintf(local_6c, 0x40, 0x63ca, 0x63bb);
jmp_fd92:
	local_c0 = CG_RegisterClientSkin(arg_0, local_6c, arg_1, arg_2, local_68, arg_4);
	if (local_c0 != 0x0) goto jmp_fdd7;
	Com_Printf(0x63ce, local_6c, arg_1, arg_2, local_68, arg_4);
	return 0x0;
jmp_fdc2:
	Com_Printf(0x638f, arg_1, arg_2, local_68, arg_4);
	return 0x0;
jmp_fdd7:
	Com_sprintf(local_28, 0x40, 0x636f, arg_1);
	local_bc = CG_ParseAnimationFile(local_28, arg_0);
	if (local_bc != 0x0) goto jmp_fe14;
	Com_sprintf(local_28, 0x40, 0x6344, arg_1);
	local_c0 = CG_ParseAnimationFile(local_28, arg_0);
	if (local_c0 != 0x0) goto jmp_fe14;
	Com_Printf(0x6322, local_28);
	return 0x0;
jmp_fe14:
	local_c0 = CG_FindClientHeadFile(local_28, 0x40, arg_0, arg_5, local_68, arg_4, 0x631d, 0x653c);
	if (local_c0 == 0x0) goto jmp_fe3f;
	local_c4 = trap_R_RegisterShaderNoMip(local_28);
	*(int *)(arg_0 + 0x224) = local_c4;
	goto jmp_fe68;
jmp_fe3f:
	local_c4 = CG_FindClientHeadFile(local_28, 0x40, arg_0, arg_5, local_68, arg_4, 0x631d, 0x6319);
	if (local_c4 == 0x0) goto jmp_fe68;
	local_c8 = trap_R_RegisterShaderNoMip(local_28);
	*(int *)(arg_0 + 0x224) = local_c8;
jmp_fe68:
	if (*(int *)(arg_0 + 0x224) != 0x0) goto jmp_fe73;
	return 0x0;
jmp_fe73:
	return 0x1;
}

/*
=================
CG_ColorFromString

Address: 0xfe77
Stack Size: 0x20
Calls: atoi
Called by: CG_NewClientInfo
=================
*/
void CG_ColorFromString(int arg_0, int arg_1) {
	char	local_c[8];
	int		local_14;
	char	local_18[8];

	arg_1 = arg_1;
	local_14 = 0x0;
	*(int *)(arg_1 + 0x8) = local_14;
	*(int *)(arg_1 + 0x4) = local_14;
	*(int *)arg_1 = local_14;
	*(int *)local_18 = atoi(arg_0);
	*(int *)local_c = *(int *)local_18;
	if (*(int *)local_c < 0x1) goto jmp_fea5;
	if (*(int *)local_c <= 0x7) goto jmp_feb7;
jmp_fea5:
	*(int *)arg_1 = 0x3f800000;
	*(int *)(arg_1 + 0x4) = 0x3f800000;
	*(int *)(arg_1 + 0x8) = 0x3f800000;
	goto jmp_fed9;
jmp_feb7:
	if ((*(int *)local_c & 0x1) == 0x0) goto jmp_fec3;
	*(int *)(arg_1 + 0x8) = 0x3f800000;
jmp_fec3:
	if ((*(int *)local_c & 0x2) == 0x0) goto jmp_fecf;
	*(int *)(arg_1 + 0x4) = 0x3f800000;
jmp_fecf:
	if ((*(int *)local_c & 0x4) == 0x0) goto jmp_fed9;
	*(int *)arg_1 = 0x3f800000;
jmp_fed9:
}

/*
=================
CG_LoadClientInfo

Address: 0xfedb
Stack Size: 0xb4
Calls: trap_S_RegisterSound, trap_R_LerpTag, CG_ResetPlayerEntity, va, Q_strncpyz, CG_Error, CG_RegisterClientModelname
Called by: CG_LoadDeferredPlayers, CG_NewClientInfo, CG_SetDeferredClientInfo
=================
*/
void CG_LoadClientInfo(int arg_0, int arg_1) {
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	char	local_34[68];
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	char	local_88[36];
	int		local_ac;
	int		local_b0;

	arg_0 = arg_0;
	arg_1 = arg_1;
	*(char *)local_34 = 0x0;
	local_28 = 0x1;
	local_78 = CG_RegisterClientModelname(arg_1, (arg_1 + 0xa8), (arg_1 + 0xe8), (arg_1 + 0x128), (arg_1 + 0x168), local_34);
	if (local_78 != 0x0) goto jmp_ffa2;
	if (bss_8fe8 == 0x0) goto jmp_ff2a;
	CG_Error(0x62e2, (arg_1 + 0xa8), (arg_1 + 0xe8), (arg_1 + 0x128), (arg_1 + 0x168), local_34);
jmp_ff2a:
	if (bss_e66f8 < 0x3) goto jmp_ff79;
	if (*(int *)(arg_1 + 0x44) != 0x2) goto jmp_ff40;
	Q_strncpyz(local_34, 0x63c3, 0x40);
	goto jmp_ff49;
jmp_ff40:
	Q_strncpyz(local_34, 0x63bb, 0x40);
jmp_ff49:
#define next_call_arg_0 "arg_1"
	local_80 = 0x62dc;
#define next_call_arg_1 "local_80"
	local_84 = (arg_1 + 0xe8);
#define next_call_arg_2 "local_84"
#define next_call_arg_3 "local_80"
#define next_call_arg_4 "local_84"
#define next_call_arg_5 "local_34"
	*(int *)local_88 = CG_RegisterClientModelname();
	if (*(int *)local_88 != 0x0) goto jmp_ff9f;
	CG_Error(0x62a7, 0x62dc, (arg_1 + 0xe8));
	goto jmp_ff9f;
jmp_ff79:
#define next_call_arg_0 "arg_1"
	local_7c = 0x62dc;
#define next_call_arg_1 "local_7c"
	local_80 = 0x66c0;
#define next_call_arg_2 "local_80"
#define next_call_arg_3 "local_7c"
#define next_call_arg_4 "local_80"
#define next_call_arg_5 "local_34"
	local_84 = CG_RegisterClientModelname();
	if (local_84 != 0x0) goto jmp_ff9f;
	CG_Error(0x6281, 0x62dc);
jmp_ff9f:
	local_28 = 0x0;
jmp_ffa2:
	*(int *)(arg_1 + 0x1ec) = 0x0;
	if (*(int *)(arg_1 + 0x214) == 0x0) goto jmp_ffd2;
#define next_call_arg_0 "&local_7c"
#define next_call_arg_1 "*(int *)(arg_1 + 0x214)"
	local_ac = 0x0;
#define next_call_arg_2 "local_ac"
#define next_call_arg_3 "local_ac"
#define next_call_arg_4 "0x3f800000"
#define next_call_arg_5 "0x6278"
	local_b0 = trap_R_LerpTag();
	if (local_b0 == 0x0) goto jmp_ffd2;
	*(int *)(arg_1 + 0x1ec) = 0x1;
jmp_ffd2:
	local_2c = (arg_1 + 0xa8);
	if (bss_e66f8 < 0x3) goto jmp_ffe1;
	local_7c = 0x62dc;
	goto jmp_ffe4;
jmp_ffe1:
	local_7c = 0x62dc;
jmp_ffe4:
	local_30 = local_7c;
	local_20 = 0x0;
jmp_ffeb:
	local_24 = *(int *)((local_20 << 0x2) + 0x1c18);
	if (local_24 != 0x0) goto jmp_fffa;
	goto jmp_10065;
jmp_fffa:
	*(int *)((local_20 << 0x2) + (arg_1 + 0x634)) = 0x0;
	if (local_28 == 0x0) goto jmp_1002c;
	local_80 = va(0x6265, local_2c, (local_24 + 0x1));
	local_84 = trap_S_RegisterSound(local_80, 0x0);
	*(int *)((local_20 << 0x2) + (arg_1 + 0x634)) = local_84;
jmp_1002c:
	if (*(int *)((local_20 << 0x2) + (arg_1 + 0x634)) != 0x0) goto jmp_1005b;
	local_80 = va(0x6265, local_30, (local_24 + 0x1));
	local_84 = trap_S_RegisterSound(local_80, 0x0);
	*(int *)((local_20 << 0x2) + (arg_1 + 0x634)) = local_84;
jmp_1005b:
	local_20 = (local_20 + 0x1);
	if (local_20 < 0x20) goto jmp_ffeb;
jmp_10065:
	*(int *)(arg_1 + 0x1e8) = 0x0;
	local_20 = 0x0;
jmp_1006e:
	local_80 = (0x2cc * local_20);
	if (*(int *)(local_80 + 0xf3b4) != arg_0) goto jmp_1008d;
	if (*(int *)(local_80 + 0xf310) != 0x1) goto jmp_1008d;
	CG_ResetPlayerEntity(((0x2cc * local_20) + 0xf30c));
jmp_1008d:
	local_20 = (local_20 + 0x1);
	if (local_20 < 0x400) goto jmp_1006e;
}

/*
=================
CG_CopyClientInfoModel

Address: 0x10099
Stack Size: 0x48
Calls: memcpy
Called by: CG_SetDeferredClientInfo, CG_ScanForExistingClientInfo
=================
*/
void CG_CopyClientInfoModel(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_14 = 0x1f8;
	block_copy((arg_0 + local_14), (arg_1 + local_14), 0xc);
	local_18 = 0x204;
	*(int *)(arg_1 + local_18) = *(int *)(arg_0 + local_18);
	local_1c = 0x208;
	*(int *)(arg_1 + local_1c) = *(int *)(arg_0 + local_1c);
	local_20 = 0x20c;
	*(int *)(arg_1 + local_20) = *(int *)(arg_0 + local_20);
	local_24 = 0x210;
	*(int *)(arg_1 + local_24) = *(int *)(arg_0 + local_24);
	local_28 = 0x214;
	*(int *)(arg_1 + local_28) = *(int *)(arg_0 + local_28);
	local_2c = 0x218;
	*(int *)(arg_1 + local_2c) = *(int *)(arg_0 + local_2c);
	local_30 = 0x21c;
	*(int *)(arg_1 + local_30) = *(int *)(arg_0 + local_30);
	local_34 = 0x220;
	*(int *)(arg_1 + local_34) = *(int *)(arg_0 + local_34);
	local_38 = 0x224;
	*(int *)(arg_1 + local_38) = *(int *)(arg_0 + local_38);
	local_3c = 0x1ec;
	*(int *)(arg_1 + local_3c) = *(int *)(arg_0 + local_3c);
	local_40 = 0x228;
	memcpy((arg_1 + local_40), (arg_0 + local_40), 0x40c);
	local_44 = 0x634;
	memcpy((arg_1 + local_44), (arg_0 + local_44), 0x80);
}

/*
=================
CG_ScanForExistingClientInfo

Address: 0x10170
Stack Size: 0x4c
Calls: CG_CopyClientInfoModel, Q_stricmp
Called by: CG_NewClientInfo
=================
*/
int CG_ScanForExistingClientInfo(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;

	arg_0 = arg_0;
	local_14 = 0x0;
	goto jmp_10249;
jmp_1017a:
	local_10 = ((0x6b4 * local_14) + 0xe8c24);
	if (*(int *)local_10 != 0x0) goto jmp_10189;
	goto jmp_10243;
jmp_10189:
	if (*(int *)(local_10 + 0x1e8) == 0x0) goto jmp_10192;
	goto jmp_10243;
jmp_10192:
	local_18 = 0xa8;
	local_1c = Q_stricmp((arg_0 + local_18), (local_10 + local_18));
	if (local_1c != 0x0) goto jmp_10243;
	local_20 = 0xe8;
	local_24 = Q_stricmp((arg_0 + local_20), (local_10 + local_20));
	if (local_24 != 0x0) goto jmp_10243;
	local_28 = 0x128;
	local_2c = Q_stricmp((arg_0 + local_28), (local_10 + local_28));
	if (local_2c != 0x0) goto jmp_10243;
	local_30 = 0x168;
	local_34 = Q_stricmp((arg_0 + local_30), (local_10 + local_30));
	if (local_34 != 0x0) goto jmp_10243;
	local_38 = 0x1c8;
	local_3c = Q_stricmp((arg_0 + local_38), (local_10 + local_38));
	if (local_3c != 0x0) goto jmp_10243;
	local_40 = 0x1a8;
	local_44 = Q_stricmp((arg_0 + local_40), (local_10 + local_40));
	if (local_44 != 0x0) goto jmp_10243;
	if (bss_e66f8 < 0x3) goto jmp_10230;
	local_48 = 0x44;
	if (*(int *)(arg_0 + local_48) != *(int *)(local_10 + local_48)) goto jmp_10243;
jmp_10230:
	*(int *)(arg_0 + 0x1e8) = 0x0;
	CG_CopyClientInfoModel(local_10, arg_0);
	return 0x1;
jmp_10243:
	local_14 = (local_14 + 0x1);
jmp_10249:
	if (local_14 < bss_e6710) goto jmp_1017a;
	return 0x0;
}

/*
=================
CG_SetDeferredClientInfo

Address: 0x10252
Stack Size: 0x34
Calls: CG_Printf, CG_CopyClientInfoModel, CG_LoadClientInfo, Q_stricmp
Called by: CG_NewClientInfo
=================
*/
void CG_SetDeferredClientInfo(int arg_0, int arg_1) {
	int		local_10;
	char	local_14[8];
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;

	arg_0 = arg_0;
	arg_1 = arg_1;
	*(int *)local_14 = 0x0;
	goto jmp_102d0;
jmp_10260:
	local_10 = ((0x6b4 * *(int *)local_14) + 0xe8c24);
	local_1c = 0x0;
	if (*(int *)local_10 == local_1c) goto jmp_10279;
	if (*(int *)(local_10 + 0x1e8) == local_1c) goto jmp_1027b;
jmp_10279:
	goto jmp_102ca;
jmp_1027b:
	local_20 = 0xe8;
	local_24 = Q_stricmp((arg_1 + local_20), (local_10 + local_20));
	if (local_24 != 0x0) goto jmp_102bd;
	local_28 = 0xa8;
	local_2c = Q_stricmp((arg_1 + local_28), (local_10 + local_28));
	if (local_2c != 0x0) goto jmp_102bd;
	if (bss_e66f8 < 0x3) goto jmp_102bf;
	local_30 = 0x44;
	if (*(int *)(arg_1 + local_30) == *(int *)(local_10 + local_30)) goto jmp_102bf;
jmp_102bd:
	goto jmp_102ca;
jmp_102bf:
	CG_LoadClientInfo(arg_0, arg_1);
	goto jmp_1038b;
jmp_102ca:
	*(int *)local_14 = (*(int *)local_14 + 0x1);
jmp_102d0:
	if (*(int *)local_14 < bss_e6710) goto jmp_10260;
	if (bss_e66f8 < 0x3) goto jmp_1034d;
	*(int *)local_14 = 0x0;
	goto jmp_1033d;
jmp_102de:
	local_10 = ((0x6b4 * *(int *)local_14) + 0xe8c24);
	local_1c = 0x0;
	if (*(int *)local_10 == local_1c) goto jmp_102f7;
	if (*(int *)(local_10 + 0x1e8) == local_1c) goto jmp_102f9;
jmp_102f7:
	goto jmp_10337;
jmp_102f9:
	local_20 = 0xe8;
	local_24 = Q_stricmp((arg_1 + local_20), (local_10 + local_20));
	if (local_24 != 0x0) goto jmp_10324;
	if (bss_e66f8 < 0x3) goto jmp_10326;
	local_28 = 0x44;
	if (*(int *)(arg_1 + local_28) == *(int *)(local_10 + local_28)) goto jmp_10326;
jmp_10324:
	goto jmp_10337;
jmp_10326:
	*(int *)(arg_1 + 0x1e8) = 0x1;
	CG_CopyClientInfoModel(local_10, arg_1);
	goto jmp_1038b;
jmp_10337:
	*(int *)local_14 = (*(int *)local_14 + 0x1);
jmp_1033d:
	if (*(int *)local_14 < bss_e6710) goto jmp_102de;
	CG_LoadClientInfo(arg_0, arg_1);
	goto jmp_1038b;
jmp_1034d:
	*(int *)local_14 = 0x0;
	goto jmp_10378;
jmp_10352:
	local_10 = ((0x6b4 * *(int *)local_14) + 0xe8c24);
	if (*(int *)local_10 != 0x0) goto jmp_10361;
	goto jmp_10372;
jmp_10361:
	*(int *)(arg_1 + 0x1e8) = 0x1;
	CG_CopyClientInfoModel(local_10, arg_1);
	goto jmp_1038b;
jmp_10372:
	*(int *)local_14 = (*(int *)local_14 + 0x1);
jmp_10378:
	if (*(int *)local_14 < bss_e6710) goto jmp_10352;
	CG_Printf(0x6238);
	CG_LoadClientInfo(arg_0, arg_1);
jmp_1038b:
}

/*
=================
CG_NewClientInfo

Address: 0x1038d
Stack Size: 0x7c8
Calls: trap_MemoryRemaining, trap_Cvar_VariableStringBuffer, memset, CG_LoadClientInfo, CG_Printf, CG_SetDeferredClientInfo, CG_ScanForExistingClientInfo, strchr, atoi, CG_ColorFromString, Q_strncpyz, Info_ValueForKey, CG_ConfigString
Called by: CG_ConfigStringModified, CG_RegisterClients, CG_ForceModelChange
=================
*/
void CG_NewClientInfo(int arg_0) {
	int		local_14;
	char	local_18[64];
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	char	local_78;
	char	local_79;
	char	local_7a;
	char	local_7b;
	char	local_7c;
	char	local_7d;
	char	local_7e;
	char	local_7f[21];
	int		local_94;
	int		local_98;
	int		local_9c;
	int		local_a0;
	char	local_a4[24];
	char	local_bc[64];
	char	local_fc[64];
	char	local_13c[64];
	char	local_17c[64];
	char	local_1bc[32];
	char	local_1dc[32];
	char	local_1fc[1228];
	int		local_6c8;
	int		local_6cc;
	int		local_6d0;
	int		local_6d4;
	int		local_6d8;
	int		local_6dc;
	int		local_6e0;
	int		local_6e4;
	int		local_6e8;
	int		local_6ec;
	int		local_6f0;
	int		local_6f4;
	int		local_6f8;
	int		local_6fc;
	int		local_700;
	int		local_704;
	int		local_708;
	int		local_70c;
	int		local_710;
	int		local_714;
	int		local_718;
	int		local_71c;
	int		local_720;
	int		local_724;
	int		local_728;
	int		local_72c;
	int		local_730;
	int		local_734;
	int		local_738;
	int		local_73c;
	int		local_740;
	int		local_744;
	int		local_748;
	int		local_74c;
	int		local_750;
	int		local_754;
	int		local_758;
	int		local_75c;
	int		local_760;
	int		local_764;
	int		local_768;
	int		local_76c;
	int		local_770;
	int		local_774;
	int		local_778;
	int		local_77c;
	int		local_780;
	int		local_784;
	int		local_788;
	char	local_78c[44];
	int		local_7b8;
	int		local_7bc;
	int		local_7c0;
	int		local_7c4;

	local_6d8 = arg_0;
	local_6d4 = ((0x6b4 * local_6d8) + 0xe8c24);
	local_6dc = CG_ConfigString((local_6d8 + 0x220));
	local_6cc = local_6dc;
	if ((char)*(char *)local_6cc != 0x0) goto jmp_103b9;
	memset(local_6d4, 0x0, 0x6b4);
	goto jmp_1078b;
jmp_103b9:
	memset(&local_14, 0x0, 0x6b4);
	local_6e0 = Info_ValueForKey(local_6cc, 0x6236);
	local_6c8 = local_6e0;
	Q_strncpyz(local_18, local_6c8, 0x40);
	local_6e4 = Info_ValueForKey(local_6cc, 0x6233);
	local_6c8 = local_6e4;
	CG_ColorFromString(local_6c8, &local_60);
	local_6ec = (0x437f0000 * local_60);
	local_6f0 = 0x4f000000;
	if (local_6ec < local_6f0) goto jmp_10408;
	local_6e8 = ((int)(local_6ec - local_6f0) + 0x80000000);
	goto jmp_1040d;
jmp_10408:
	local_6e8 = (int)local_6ec;
jmp_1040d:
	local_78 = local_6e8;
	local_6f8 = (0x437f0000 * local_64);
	local_6fc = 0x4f000000;
	if (local_6f8 < local_6fc) goto jmp_1042b;
	local_6f4 = ((int)(local_6f8 - local_6fc) + 0x80000000);
	goto jmp_10430;
jmp_1042b:
	local_6f4 = (int)local_6f8;
jmp_10430:
	local_79 = local_6f4;
	local_704 = (0x437f0000 * local_68);
	local_708 = 0x4f000000;
	if (local_704 < local_708) goto jmp_1044e;
	local_700 = ((int)(local_704 - local_708) + 0x80000000);
	goto jmp_10453;
jmp_1044e:
	local_700 = (int)local_704;
jmp_10453:
	local_7a = local_700;
	local_7b = 0xff;
	local_70c = Info_ValueForKey(local_6cc, 0x6230);
	local_6c8 = local_70c;
	CG_ColorFromString(local_6c8, &local_6c);
	local_714 = (0x437f0000 * local_6c);
	local_718 = 0x4f000000;
	if (local_714 < local_718) goto jmp_10489;
	local_710 = ((int)(local_714 - local_718) + 0x80000000);
	goto jmp_1048e;
jmp_10489:
	local_710 = (int)local_714;
jmp_1048e:
	local_7c = local_710;
	local_720 = (0x437f0000 * local_70);
	local_724 = 0x4f000000;
	if (local_720 < local_724) goto jmp_104ac;
	local_71c = ((int)(local_720 - local_724) + 0x80000000);
	goto jmp_104b1;
jmp_104ac:
	local_71c = (int)local_720;
jmp_104b1:
	local_7d = local_71c;
	local_72c = (0x437f0000 * local_74);
	local_730 = 0x4f000000;
	if (local_72c < local_730) goto jmp_104cf;
	local_728 = ((int)(local_72c - local_730) + 0x80000000);
	goto jmp_104d4;
jmp_104cf:
	local_728 = (int)local_72c;
jmp_104d4:
	local_7e = local_728;
	*(char *)local_7f = 0xff;
	local_734 = Info_ValueForKey(local_6cc, 0x622a);
	local_6c8 = local_734;
	local_738 = atoi(local_6c8);
	local_5c = local_738;
	local_73c = Info_ValueForKey(local_6cc, 0x6227);
	local_6c8 = local_73c;
	local_740 = atoi(local_6c8);
	local_94 = local_740;
	local_744 = Info_ValueForKey(local_6cc, 0x6225);
	local_6c8 = local_744;
	local_748 = atoi(local_6c8);
	local_98 = local_748;
	local_74c = Info_ValueForKey(local_6cc, 0x6223);
	local_6c8 = local_74c;
	local_750 = atoi(local_6c8);
	local_9c = local_750;
	local_754 = Info_ValueForKey(local_6cc, 0x6221);
	local_6c8 = local_754;
	local_758 = atoi(local_6c8);
	local_58 = local_758;
	local_75c = Info_ValueForKey(local_6cc, 0x621e);
	local_6c8 = local_75c;
	local_760 = atoi(local_6c8);
	local_a0 = local_760;
	local_764 = Info_ValueForKey(local_6cc, 0x621b);
	local_6c8 = local_764;
	local_768 = atoi(local_6c8);
	*(int *)local_a4 = local_768;
	local_76c = Info_ValueForKey(local_6cc, 0x6211);
	local_6c8 = local_76c;
	Q_strncpyz(local_1bc, local_6c8, 0x20);
	local_770 = Info_ValueForKey(local_6cc, 0x6206);
	local_6c8 = local_770;
	Q_strncpyz(local_1dc, local_6c8, 0x20);
	local_774 = Info_ValueForKey(local_6cc, 0x6200);
	local_6c8 = local_774;
	if (bss_90f8 == 0x0) goto jmp_1063c;
	if (bss_e66f8 < 0x3) goto jmp_105da;
	Q_strncpyz(local_bc, 0x62dc, 0x40);
	Q_strncpyz(local_fc, 0x66c0, 0x40);
	goto jmp_10619;
jmp_105da:
	trap_Cvar_VariableStringBuffer(0x6200, &local_778, 0x40);
	local_7bc = strchr(&local_778, 0x2f);
	local_7b8 = local_7bc;
	if (local_7bc != 0x0) goto jmp_105f8;
	local_7b8 = 0x66c0;
	goto jmp_10606;
jmp_105f8:
	local_7c0 = local_7b8;
	local_7b8 = (local_7c0 + 0x1);
	*(char *)local_7c0 = 0x0;
jmp_10606:
	Q_strncpyz(local_fc, local_7b8, 0x40);
	Q_strncpyz(local_bc, &local_778, 0x40);
jmp_10619:
	if (bss_e66f8 < 0x3) goto jmp_10671;
	local_7bc = strchr(local_6c8, 0x2f);
	local_6d0 = local_7bc;
	if (local_6d0 == 0x0) goto jmp_10671;
	Q_strncpyz(local_fc, (local_6d0 + 0x1), 0x40);
	goto jmp_10671;
jmp_1063c:
	Q_strncpyz(local_bc, local_6c8, 0x40);
	local_778 = strchr(local_bc, 0x2f);
	local_6d0 = local_778;
	if (local_6d0 != 0x0) goto jmp_10661;
	Q_strncpyz(local_fc, 0x66c0, 0x40);
	goto jmp_10671;
jmp_10661:
	Q_strncpyz(local_fc, (local_6d0 + 0x1), 0x40);
	*(char *)local_6d0 = 0x0;
jmp_10671:
	local_778 = Info_ValueForKey(local_6cc, 0x61f9);
	local_6c8 = local_778;
	if (bss_90f8 == 0x0) goto jmp_106fc;
	if (bss_e66f8 < 0x3) goto jmp_1069a;
	Q_strncpyz(local_13c, 0x62dc, 0x40);
	Q_strncpyz(local_17c, 0x66c0, 0x40);
	goto jmp_106d9;
jmp_1069a:
	trap_Cvar_VariableStringBuffer(0x61ef, &local_77c, 0x40);
	local_7c0 = strchr(&local_77c, 0x2f);
	local_7bc = local_7c0;
	if (local_7c0 != 0x0) goto jmp_106b8;
	local_7bc = 0x66c0;
	goto jmp_106c6;
jmp_106b8:
	local_7c4 = local_7bc;
	local_7bc = (local_7c4 + 0x1);
	*(char *)local_7c4 = 0x0;
jmp_106c6:
	Q_strncpyz(local_17c, local_7bc, 0x40);
	Q_strncpyz(local_13c, &local_77c, 0x40);
jmp_106d9:
	if (bss_e66f8 < 0x3) goto jmp_10731;
	local_7c0 = strchr(local_6c8, 0x2f);
	local_6d0 = local_7c0;
	if (local_6d0 == 0x0) goto jmp_10731;
	Q_strncpyz(local_17c, (local_6d0 + 0x1), 0x40);
	goto jmp_10731;
jmp_106fc:
	Q_strncpyz(local_13c, local_6c8, 0x40);
	local_77c = strchr(local_13c, 0x2f);
	local_6d0 = local_77c;
	if (local_6d0 != 0x0) goto jmp_10721;
	Q_strncpyz(local_17c, 0x66c0, 0x40);
	goto jmp_10731;
jmp_10721:
	Q_strncpyz(local_17c, (local_6d0 + 0x1), 0x40);
	*(char *)local_6d0 = 0x0;
jmp_10731:
	local_77c = CG_ScanForExistingClientInfo(&local_14);
	if (local_77c != 0x0) goto jmp_10784;
	local_788 = trap_MemoryRemaining();
	if (local_788 >= 0x3d0900) goto jmp_10748;
	local_784 = 0x1;
	goto jmp_1074b;
jmp_10748:
	local_784 = 0x0;
jmp_1074b:
	local_780 = local_784;
	*(int *)local_78c = 0x0;
	if (local_780 != *(int *)local_78c) goto jmp_10766;
	if (bss_8ba8 == *(int *)local_78c) goto jmp_1077c;
	if (bss_8fe8 != *(int *)local_78c) goto jmp_1077c;
	if (bss_c2320 != *(int *)local_78c) goto jmp_1077c;
jmp_10766:
	CG_SetDeferredClientInfo(arg_0, &local_14);
	if (local_780 == 0x0) goto jmp_10784;
	CG_Printf(0x61c9);
	*(int *)local_1fc = 0x0;
	goto jmp_10784;
jmp_1077c:
	CG_LoadClientInfo(arg_0, &local_14);
jmp_10784:
	local_14 = 0x1;
	block_copy(&local_14, local_6d4, 0x6b4);
jmp_1078b:
}

/*
=================
CG_LoadDeferredPlayers

Address: 0x1078d
Stack Size: 0x24
Calls: trap_MemoryRemaining, CG_LoadClientInfo, CG_Printf
Called by: CG_ServerCommand, CG_DrawOldScoreboard
=================
*/
void CG_LoadDeferredPlayers(void) {
	int		local_10;
	char	local_14[8];
	int		local_1c;
	int		local_20;

	*(int *)local_14 = 0x0;
	local_10 = 0xe8c24;
	goto jmp_107d1;
jmp_10796:
	local_1c = 0x0;
	if (*(int *)local_10 == local_1c) goto jmp_107c5;
	if (*(int *)(local_10 + 0x1e8) == local_1c) goto jmp_107c5;
	local_20 = trap_MemoryRemaining();
	if (local_20 >= 0x3d0900) goto jmp_107bc;
	CG_Printf(0x61c9);
	*(int *)(local_10 + 0x1e8) = 0x0;
	goto jmp_107c5;
jmp_107bc:
	CG_LoadClientInfo(*(int *)local_14, local_10);
jmp_107c5:
	*(int *)local_14 = (*(int *)local_14 + 0x1);
	local_10 = (local_10 + 0x6b4);
jmp_107d1:
	if (*(int *)local_14 < bss_e6710) goto jmp_10796;
}

/*
=================
CG_SetLerpFrameAnimation

Address: 0x107d8
Stack Size: 0x1c
Calls: CG_Printf, CG_Error
Called by: CG_ClearLerpFrame, CG_RunLerpFrame
=================
*/
void CG_SetLerpFrameAnimation(int arg_0, int arg_1, int arg_2) {
	char	local_10[12];

	arg_1 = arg_1;
	arg_2 = arg_2;
	*(int *)(arg_1 + 0x24) = arg_2;
	arg_2 = (arg_2 & 0xffffff7f);
	if (arg_2 < 0x0) goto jmp_107f6;
	if (arg_2 < 0x25) goto jmp_107fe;
jmp_107f6:
	CG_Error(0x61b0, arg_2);
jmp_107fe:
	*(int *)local_10 = ((0x1c * arg_2) + (arg_0 + 0x228));
	*(int *)(arg_1 + 0x28) = *(int *)local_10;
	*(int *)(arg_1 + 0x2c) = (*(int *)(arg_1 + 0xc) + *(int *)(*(int *)local_10 + 0x10));
	if (bss_b518 == 0x0) goto jmp_1082c;
	CG_Printf(0x61a6, arg_2);
jmp_1082c:
}

/*
=================
CG_RunLerpFrame

Address: 0x1082e
Stack Size: 0x44
Calls: CG_Printf, CG_SetLerpFrameAnimation
Called by: CG_PlayerFlag, CG_PlayerAnimation
=================
*/
void CG_RunLerpFrame(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_14;
	int		local_18;
	char	local_1c[8];
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[12];
	int		local_3c;
	int		local_40;

	arg_1 = arg_1;
	if (bss_b628 != 0x0) goto jmp_10854;
	local_24 = 0x0;
	*(int *)(arg_1 + 0x10) = local_24;
	local_28 = (int)local_24;
	*(int *)(arg_1 + 0x8) = local_28;
	*(int *)arg_1 = local_28;
	goto jmp_109f0;
jmp_10854:
	if (arg_2 != *(int *)(arg_1 + 0x24)) goto jmp_10863;
	if (*(int *)(arg_1 + 0x28) != 0x0) goto jmp_1086f;
jmp_10863:
	CG_SetLerpFrameAnimation(arg_0, arg_1, arg_2);
jmp_1086f:
	if (bss_dc760 < *(int *)(arg_1 + 0xc)) goto jmp_1099f;
	*(int *)arg_1 = *(int *)(arg_1 + 0x8);
	*(int *)(arg_1 + 0x4) = *(int *)(arg_1 + 0xc);
	local_14 = *(int *)(arg_1 + 0x28);
	if (*(int *)(local_14 + 0xc) != 0x0) goto jmp_10899;
	goto jmp_109f0;
jmp_10899:
	if (bss_dc760 >= *(int *)(arg_1 + 0x2c)) goto jmp_108ad;
	*(int *)(arg_1 + 0xc) = *(int *)(arg_1 + 0x2c);
	goto jmp_108c2;
jmp_108ad:
	*(int *)local_30 = 0xc;
	*(int *)(arg_1 + *(int *)local_30) = (*(int *)(arg_1 + 0x4) + *(int *)(local_14 + *(int *)local_30));
jmp_108c2:
	*(int *)local_30 = 0xc;
	local_18 = ((*(int *)(arg_1 + *(int *)local_30) - *(int *)(arg_1 + 0x2c)) / *(int *)(local_14 + *(int *)local_30));
	local_18 = (int)((float)local_18 * arg_3);
	*(int *)local_1c = *(int *)(local_14 + 0x4);
	if (*(int *)(local_14 + 0x18) == 0x0) goto jmp_108f7;
	*(int *)local_1c = (*(int *)local_1c << 0x1);
jmp_108f7:
	if (local_18 < *(int *)local_1c) goto jmp_10935;
	local_18 = (local_18 - *(int *)local_1c);
	if (*(int *)(local_14 + 0x8) == 0x0) goto jmp_10928;
	local_3c = (local_14 + 0x8);
	local_18 = (local_18 %% *(int *)local_3c);
	local_18 = (local_18 + (*(int *)(local_14 + 0x4) - *(int *)local_3c));
	goto jmp_10935;
jmp_10928:
	local_18 = (*(int *)local_1c - 0x1);
	*(int *)(arg_1 + 0xc) = bss_dc760;
jmp_10935:
	if (*(int *)(local_14 + 0x14) == 0x0) goto jmp_10951;
	*(int *)(arg_1 + 0x8) = (((*(int *)local_14 + *(int *)(local_14 + 0x4)) - 0x1) - local_18);
	goto jmp_10987;
jmp_10951:
	if (*(int *)(local_14 + 0x18) == 0x0) goto jmp_1097c;
	if (local_18 < *(int *)(local_14 + 0x4)) goto jmp_1097c;
	local_40 = *(int *)(local_14 + 0x4);
	*(int *)(arg_1 + 0x8) = (((*(int *)local_14 + local_40) - 0x1) - (local_18 %% local_40));
	goto jmp_10987;
jmp_1097c:
	*(int *)(arg_1 + 0x8) = (*(int *)local_14 + local_18);
jmp_10987:
	if (bss_dc760 <= *(int *)(arg_1 + 0xc)) goto jmp_1099f;
	*(int *)(arg_1 + 0xc) = bss_dc760;
	if (bss_b518 == 0x0) goto jmp_1099f;
	CG_Printf(0x6191);
jmp_1099f:
	if (*(int *)(arg_1 + 0xc) <= (bss_dc760 + 0xc8)) goto jmp_109b0;
	*(int *)(arg_1 + 0xc) = bss_dc760;
jmp_109b0:
	if (*(int *)(arg_1 + 0x4) <= bss_dc760) goto jmp_109bf;
	*(int *)(arg_1 + 0x4) = bss_dc760;
jmp_109bf:
	if (*(int *)(arg_1 + 0xc) != *(int *)(arg_1 + 0x4)) goto jmp_109d2;
	*(int *)(arg_1 + 0x10) = 0x0;
	goto jmp_109f0;
jmp_109d2:
	local_2c = *(int *)(arg_1 + 0x4);
	*(int *)(arg_1 + 0x10) = (0x3f800000 - ((float)(bss_dc760 - local_2c) / (float)(*(int *)(arg_1 + 0xc) - local_2c)));
jmp_109f0:
}

/*
=================
CG_ClearLerpFrame

Address: 0x109f2
Stack Size: 0x24
Calls: CG_SetLerpFrameAnimation
Called by: CG_ResetPlayerEntity
=================
*/
void CG_ClearLerpFrame(int arg_0, int arg_1, int arg_2) {
	char	local_18[8];
	int		local_20;

	arg_1 = arg_1;
	*(int *)local_18 = bss_dc760;
	*(int *)(arg_1 + 0x4) = *(int *)local_18;
	*(int *)(arg_1 + 0xc) = *(int *)local_18;
	CG_SetLerpFrameAnimation(arg_0, arg_1, arg_2);
	local_20 = *(int *)*(int *)(arg_1 + 0x28);
	*(int *)(arg_1 + 0x8) = local_20;
	*(int *)arg_1 = local_20;
}

/*
=================
CG_PlayerAnimation

Address: 0x10a2b
Stack Size: 0x2c
Calls: CG_RunLerpFrame
Called by: CG_Player
=================
*/
void CG_PlayerAnimation(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) {
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[8];

	arg_0 = arg_0;
	local_20 = *(int *)(arg_0 + 0xa8);
	if (bss_aeb8 == 0x0) goto jmp_10a54;
	*(int *)local_24 = 0x0;
	*(int *)arg_5 = *(int *)local_24;
	*(int *)arg_4 = *(int *)local_24;
	*(int *)arg_2 = *(int *)local_24;
	*(int *)arg_1 = *(int *)local_24;
	goto jmp_10ae7;
jmp_10a54:
	if ((*(int *)(arg_0 + 0xbc) & 0x8) == 0x0) goto jmp_10a62;
	local_1c = 0x3fc00000;
	goto jmp_10a65;
jmp_10a62:
	local_1c = 0x3f800000;
jmp_10a65:
	local_18 = ((0x6b4 * local_20) + 0xe8c24);
	if (*(int *)(arg_0 + 0x1dc) == 0x0) goto jmp_10a8f;
	if ((*(int *)(arg_0 + 0xc4) & 0xffffff7f) != 0x16) goto jmp_10a8f;
	CG_RunLerpFrame(local_18, (arg_0 + 0x1c4), 0x18, local_1c);
	goto jmp_10aa3;
jmp_10a8f:
	CG_RunLerpFrame(local_18, (arg_0 + 0x1c4), *(int *)(arg_0 + 0xc4), local_1c);
jmp_10aa3:
	*(int *)arg_1 = *(int *)(arg_0 + 0x1c4);
	*(int *)arg_2 = *(int *)(arg_0 + 0x1cc);
	*(int *)arg_3 = *(int *)(arg_0 + 0x1d4);
	CG_RunLerpFrame(local_18, (arg_0 + 0x1f4), *(int *)(arg_0 + 0xc8), local_1c);
	*(int *)arg_4 = *(int *)(arg_0 + 0x1f4);
	*(int *)arg_5 = *(int *)(arg_0 + 0x1fc);
	*(int *)arg_6 = *(int *)(arg_0 + 0x204);
jmp_10ae7:
}

/*
=================
CG_SwingAngles

Address: 0x10ae9
Stack Size: 0x2c
Calls: AngleMod, fabs, AngleSubtract
Called by: CG_PlayerFlag, CG_PlayerAngles
=================
*/
void CG_SwingAngles(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	arg_4 = arg_4;
	if (*(int *)arg_5 != 0x0) goto jmp_10b19;
	local_1c = AngleSubtract(*(int *)arg_4, arg_0);
	local_10 = local_1c;
	local_24 = arg_1;
	if (local_10 > local_24) goto jmp_10b15;
	if (local_10 >= -local_24) goto jmp_10b19;
jmp_10b15:
	*(int *)arg_5 = 0x1;
jmp_10b19:
	if (*(int *)arg_5 != 0x0) goto jmp_10b20;
	goto jmp_10bec;
jmp_10b20:
	local_1c = AngleSubtract(arg_0, *(int *)arg_4);
	local_10 = local_1c;
	local_20 = fabs(local_10);
	local_14 = local_20;
	if (local_14 >= (0x3f000000 * arg_1)) goto jmp_10b46;
	local_14 = 0x3f000000;
	goto jmp_10b53;
jmp_10b46:
	if (local_14 >= arg_1) goto jmp_10b50;
	local_14 = 0x3f800000;
	goto jmp_10b53;
jmp_10b50:
	local_14 = 0x40000000;
jmp_10b53:
	if (local_10 < 0x0) goto jmp_10b81;
	local_18 = (((float)bss_dc75c * local_14) * arg_3);
	if (local_18 < local_10) goto jmp_10b6f;
	local_18 = local_10;
	*(int *)arg_5 = 0x0;
jmp_10b6f:
	local_28 = AngleMod((*(int *)arg_4 + local_18));
	*(int *)arg_4 = local_28;
	goto jmp_10bae;
jmp_10b81:
	if (local_10 >= 0x0) goto jmp_10bae;
	local_18 = (((float)bss_dc75c * local_14) * -arg_3);
	if (local_18 > local_10) goto jmp_10b9e;
	local_18 = local_10;
	*(int *)arg_5 = 0x0;
jmp_10b9e:
	local_28 = AngleMod((*(int *)arg_4 + local_18));
	*(int *)arg_4 = local_28;
jmp_10bae:
	local_24 = AngleSubtract(arg_0, *(int *)arg_4);
	local_10 = local_24;
	if (local_10 <= arg_2) goto jmp_10bd5;
	local_28 = AngleMod((arg_0 - (arg_2 - 0x3f800000)));
	*(int *)arg_4 = local_28;
	goto jmp_10bec;
jmp_10bd5:
	if (local_10 >= -arg_2) goto jmp_10bec;
	local_28 = AngleMod((arg_0 + (arg_2 - 0x3f800000)));
	*(int *)arg_4 = local_28;
jmp_10bec:
}

/*
=================
CG_AddPainTwitch

Address: 0x10bee
Stack Size: 0x14
Called by: CG_PlayerAngles
=================
*/
void CG_AddPainTwitch(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	int		local_10;

	local_8 = (bss_dc760 - *(int *)(arg_0 + 0x254));
	if (local_8 < 0xc8) goto jmp_10bff;
	goto jmp_10c33;
jmp_10bff:
	local_c = (0x3f800000 - ((float)local_8 / 0x43480000));
	if (*(int *)(arg_0 + 0x258) == 0x0) goto jmp_10c22;
	local_10 = (arg_1 + 0x8);
	*(int *)local_10 = (*(int *)local_10 + (0x41a00000 * local_c));
	goto jmp_10c33;
jmp_10c22:
	local_10 = (arg_1 + 0x8);
	*(int *)local_10 = (*(int *)local_10 - (0x41a00000 * local_c));
jmp_10c33:
}

/*
=================
CG_PlayerAngles

Address: 0x10c35
Stack Size: 0xbc
Calls: AnglesSubtract, CG_AddPainTwitch, AnglesToAxis, VectorNormalize, CG_SwingAngles, CG_Error, AngleMod
Called by: CG_Player
=================
*/
void CG_PlayerAngles(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	char	local_3c[8];
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	char	local_6c[8];
	int		local_74;
	char	local_78[24];
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;
	int		local_a0;
	int		local_a4;
	char	local_a8[16];
	int		local_b8;

	arg_0 = arg_0;
	block_copy((arg_0 + 0x2c0), &local_38, 0xc);
	local_64 = AngleMod(*(int *)local_3c);
	*(int *)local_3c = local_64;
	local_68 = 0x0;
	local_34 = local_68;
	local_30 = local_68;
	local_2c = local_68;
	*(int *)local_6c = 0x0;
	local_28 = *(int *)local_6c;
	local_24 = *(int *)local_6c;
	local_20 = *(int *)local_6c;
	local_74 = 0xffffff7f;
	if ((*(int *)(arg_0 + 0xc4) & local_74) != 0x16) goto jmp_10c88;
	*(int *)local_78 = (*(int *)(arg_0 + 0xc8) & local_74);
	if (*(int *)local_78 == 0xb) goto jmp_10c9a;
	if (*(int *)local_78 == 0xc) goto jmp_10c9a;
jmp_10c88:
	*(int *)(arg_0 + 0x20c) = 0x1;
	*(int *)(arg_0 + 0x214) = 0x1;
	*(int *)(arg_0 + 0x1dc) = 0x1;
jmp_10c9a:
	if ((*(int *)(arg_0 + 0x8) & 0x1) == 0x0) goto jmp_10ca8;
	local_54 = 0x0;
	goto jmp_10cbd;
jmp_10ca8:
	local_54 = (int)*(int *)(arg_0 + 0x84);
	if (local_54 < 0x0) goto jmp_10cb8;
	if (local_54 <= 0x7) goto jmp_10cbd;
jmp_10cb8:
	CG_Error(0x6177);
jmp_10cbd:
	local_30 = (*(int *)local_3c + (float)*(int *)((local_54 << 0x2) + 0x1c98));
	local_24 = (*(int *)local_3c + (0x3e800000 * (float)*(int *)((local_54 << 0x2) + 0x1c98)));
	CG_SwingAngles(local_24, 0x41c80000, 0x42b40000, bss_cb64, (arg_0 + 0x208), (arg_0 + 0x20c));
	CG_SwingAngles(local_30, 0x42200000, 0x42b40000, bss_cb64, (arg_0 + 0x1d8), (arg_0 + 0x1dc));
	local_24 = *(int *)(arg_0 + 0x208);
	local_30 = *(int *)(arg_0 + 0x1d8);
	if (local_38 <= 0x43340000) goto jmp_10d23;
	local_5c = (0x3f400000 * (local_38 + 0xc3b40000));
	goto jmp_10d29;
jmp_10d23:
	local_5c = (0x3f400000 * local_38);
jmp_10d29:
	CG_SwingAngles(local_5c, 0x41700000, 0x41f00000, 0x3dcccccd, (arg_0 + 0x210), (arg_0 + 0x214));
	local_20 = *(int *)(arg_0 + 0x210);
	local_44 = *(int *)(arg_0 + 0xa8);
	if (local_44 < 0x0) goto jmp_10d67;
	if (local_44 >= 0x40) goto jmp_10d67;
	local_60 = ((0x6b4 * local_44) + 0xe8c24);
	if (*(int *)(local_60 + 0x1f4) == 0x0) goto jmp_10d67;
	local_20 = 0x0;
jmp_10d67:
	block_copy((arg_0 + 0x24), &local_48, 0xc);
	local_90 = VectorNormalize(&local_48);
	local_58 = local_90;
	if (local_58 == 0x0) goto jmp_10dc2;
	local_58 = (0x3d4ccccd * local_58);
	AnglesToAxis(&local_2c, &local_94);
	local_b8 = (local_58 * (((local_48 * local_a0) + (local_4c * local_a4)) + (local_50 * *(int *)local_a8)));
	local_34 = (local_34 - local_b8);
	local_b8 = (local_58 * (((local_48 * local_94) + (local_4c * local_98)) + (local_50 * local_9c)));
	local_2c = (local_2c + local_b8);
jmp_10dc2:
	local_44 = *(int *)(arg_0 + 0xa8);
	if (local_44 < 0x0) goto jmp_10def;
	if (local_44 >= 0x40) goto jmp_10def;
	local_60 = ((0x6b4 * local_44) + 0xe8c24);
	if (*(int *)(local_60 + 0x1f0) == 0x0) goto jmp_10def;
	local_30 = local_24;
	local_98 = 0x0;
	local_2c = local_98;
	local_34 = local_98;
jmp_10def:
	CG_AddPainTwitch(arg_0, &local_20);
	AnglesSubtract(&local_38, &local_20, &local_38);
	AnglesSubtract(&local_20, &local_2c, &local_20);
	AnglesToAxis(&local_2c, arg_1);
	AnglesToAxis(&local_20, arg_2);
	AnglesToAxis(&local_38, arg_3);
}

/*
=================
CG_HasteTrail

Address: 0x10e23
Stack Size: 0x60
Calls: CG_SmokePuff
Called by: CG_PlayerPowerups
=================
*/
void CG_HasteTrail(int arg_0) {
	char	local_38[8];
	int		local_40;
	int		local_44;
	char	local_48[8];
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x1b4) <= bss_dc760) goto jmp_10e32;
	goto jmp_10ea2;
jmp_10e32:
	local_44 = (*(int *)(arg_0 + 0x1e8) & 0xffffff7f);
	if (local_44 == 0xf) goto jmp_10e45;
	if (local_44 == 0x10) goto jmp_10e45;
	goto jmp_10ea2;
jmp_10e45:
	local_50 = (arg_0 + 0x1b4);
	*(int *)local_50 = (*(int *)local_50 + 0x64);
	if (*(int *)(arg_0 + 0x1b4) >= bss_dc760) goto jmp_10e62;
	*(int *)(arg_0 + 0x1b4) = bss_dc760;
jmp_10e62:
	block_copy((arg_0 + 0x2b4), local_38, 0xc);
	local_40 = (local_40 - 0x41800000);
#define next_call_arg_0 "local_38"
#define next_call_arg_1 "0x1d5c"
#define next_call_arg_2 "0x41000000"
	local_54 = 0x3f800000;
#define next_call_arg_3 "local_54"
#define next_call_arg_4 "local_54"
#define next_call_arg_5 "local_54"
#define next_call_arg_6 "local_54"
#define next_call_arg_7 "0x43fa0000"
#define next_call_arg_8 "bss_dc760"
	local_58 = 0x0;
#define next_call_arg_9 "local_58"
#define next_call_arg_10 "local_58"
#define next_call_arg_11 "bss_1042c0"
	local_5c = CG_SmokePuff();
	*(int *)local_48 = local_5c;
	*(int *)(*(int *)local_48 + 0x8) = 0x7;
jmp_10ea2:
}

/*
=================
CG_TrailItem

Address: 0x10ea4
Stack Size: 0xd4
Calls: trap_R_AddRefEntityToScene, memset, AnglesToAxis
Called by: CG_PlayerPowerups
=================
*/
void CG_TrailItem(int arg_0, int arg_1) {
	char	local_14[8];
	char	local_1c[20];
	char	local_30[40];
	int		local_58;
	int		local_5c;
	char	local_60[64];
	int		local_a0;
	int		local_a4;
	int		local_a8;
	int		local_ac;
	int		local_b0;
	char	local_b4[28];
	int		local_d0;

	arg_0 = arg_0;
	block_copy((arg_0 + 0x2c0), &local_a0, 0xc);
	local_d0 = 0x0;
	local_a0 = local_d0;
	local_a8 = local_d0;
	AnglesToAxis(&local_a0, &local_ac);
	memset(local_14, 0x0, 0x8c);
	local_58 = (*(int *)(arg_0 + 0x2b4) + (0xc1800000 * local_ac));
	local_5c = (*(int *)(arg_0 + 0x2b8) + (0xc1800000 * local_b0));
	*(int *)local_60 = (*(int *)(arg_0 + 0x2bc) + (0xc1800000 * *(int *)local_b4));
	*(int *)local_60 = (*(int *)local_60 + 0x41800000);
	local_a4 = (local_a4 + 0x42b40000);
	AnglesToAxis(&local_a0, local_30);
	*(int *)local_1c = arg_1;
	trap_R_AddRefEntityToScene(local_14);
}

/*
=================
CG_PlayerFlag

Address: 0x10f0c
Stack Size: 0x184
Calls: acos, trap_R_AddRefEntityToScene, memset, CG_PositionRotatedEntityOnTag, AnglesToAxis, CG_RunLerpFrame, CG_SwingAngles, fabs, VectorNormalize, CG_PositionEntityOnTag
Called by: CG_PlayerPowerups
=================
*/
void CG_PlayerFlag(int arg_0, int arg_1, int arg_2) {
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[12];
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	char	local_5c[80];
	int		local_ac;
	int		local_b0;
	int		local_b4;
	char	local_b8[12];
	int		local_c4;
	char	local_c8[52];
	char	local_fc[16];
	int		local_10c;
	char	local_110[8];
	char	local_118[32];
	int		local_138;
	int		local_13c;
	int		local_140;
	int		local_144;
	int		local_148;
	int		local_14c;
	int		local_150;
	int		local_154;
	int		local_158;
	int		local_15c;
	int		local_160;
	char	local_164[8];
	char	local_16c[12];
	int		local_178;
	char	local_17c[8];

	arg_0 = arg_0;
	arg_2 = arg_2;
	memset(&local_20, 0x0, 0x8c);
	local_28 = bss_104174;
	block_copy((arg_2 + 0xc), local_2c, 0xc);
	local_38 = *(int *)(arg_2 + 0x18);
	local_24 = *(int *)(arg_2 + 0x4);
	CG_PositionEntityOnTag(&local_20, arg_2, *(int *)(arg_2 + 0x8), 0x6278);
	trap_R_AddRefEntityToScene(&local_20);
	memset(&local_ac, 0x0, 0x8c);
	local_b4 = bss_104178;
	*(int *)local_118 = arg_1;
	block_copy((arg_2 + 0xc), local_b8, 0xc);
	local_c4 = *(int *)(arg_2 + 0x18);
	local_b0 = *(int *)(arg_2 + 0x4);
	*(int *)local_16c = 0x0;
	local_140 = *(int *)local_16c;
	local_13c = *(int *)local_16c;
	local_138 = *(int *)local_16c;
	local_158 = 0x0;
	local_150 = (*(int *)(arg_0 + 0xc4) & 0xffffff7f);
	if (local_150 == 0x16) goto jmp_10f93;
	if (local_150 != 0x17) goto jmp_10f98;
jmp_10f93:
	local_160 = 0x23;
	goto jmp_10fae;
jmp_10f98:
	if (local_150 == 0xe) goto jmp_10fa0;
	if (local_150 != 0xd) goto jmp_10fa8;
jmp_10fa0:
	local_160 = 0x23;
	local_158 = 0x1;
	goto jmp_10fae;
jmp_10fa8:
	local_160 = 0x22;
	local_158 = 0x1;
jmp_10fae:
	if (local_158 == 0x0) goto jmp_11064;
	block_copy((arg_0 + 0x24), &local_144, 0xc);
	local_14c = (local_14c + 0x42c80000);
	VectorNormalize(&local_144);
	local_154 = (((local_54 * local_144) + (local_58 * local_148)) + (*(int *)local_5c * local_14c));
	local_178 = fabs(local_154);
	if (local_178 >= 0x3f666666) goto jmp_11064;
	local_154 = (((local_3c * local_144) + (local_40 * local_148)) + (local_44 * local_14c));
	if (local_154 <= 0x3f800000) goto jmp_10ffd;
	local_154 = 0x3f800000;
	goto jmp_11004;
jmp_10ffd:
	if (local_154 >= 0xbf800000) goto jmp_11004;
	local_154 = 0xbf800000;
jmp_11004:
	*(int *)local_17c = acos(local_154);
	*(int *)local_164 = *(int *)local_17c;
	local_154 = (((local_48 * local_144) + (local_4c * local_148)) + (local_50 * local_14c));
	if (local_154 >= 0x0) goto jmp_11032;
	local_13c = (0x43b40000 - ((0x43340000 * *(int *)local_164) / 0x40490fdb));
	goto jmp_1103a;
jmp_11032:
	local_13c = ((0x43340000 * *(int *)local_164) / 0x40490fdb);
jmp_1103a:
	if (local_13c >= 0x0) goto jmp_11044;
	local_13c = (local_13c + 0x43b40000);
jmp_11044:
	if (local_13c <= 0x43b40000) goto jmp_1104e;
	local_13c = (local_13c - 0x43b40000);
jmp_1104e:
	CG_SwingAngles(local_13c, 0x41c80000, 0x42b40000, 0x3e19999a, (arg_0 + 0x238), (arg_0 + 0x23c));
jmp_11064:
	local_13c = *(int *)(arg_0 + 0x238);
	local_15c = ((0x6b4 * *(int *)(arg_0 + 0xa8)) + 0xe8c24);
	CG_RunLerpFrame(local_15c, (arg_0 + 0x224), local_160, 0x3f800000);
	local_10c = *(int *)(arg_0 + 0x224);
	*(int *)local_fc = *(int *)(arg_0 + 0x22c);
	*(int *)local_110 = *(int *)(arg_0 + 0x234);
	AnglesToAxis(&local_138, local_c8);
	CG_PositionRotatedEntityOnTag(&local_ac, &local_20, local_28, 0x6278);
	trap_R_AddRefEntityToScene(&local_ac);
}

/*
=================
CG_PlayerPowerups

Address: 0x110b5
Stack Size: 0x2c
Calls: trap_S_AddLoopingSound, trap_R_AddLightToScene, CG_HasteTrail, CG_TrailItem, CG_PlayerFlag, rand
Called by: CG_Player
=================
*/
void CG_PlayerPowerups(int arg_0, int arg_1) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	local_1c = *(int *)(arg_0 + 0xbc);
	if (local_1c != 0x0) goto jmp_110c7;
	goto jmp_111e4;
jmp_110c7:
	if ((local_1c & 0x2) == 0x0) goto jmp_110ec;
	local_24 = rand();
#define next_call_arg_0 "(arg_0 + 0x2b4)"
#define next_call_arg_1 "(float)((local_24 & 0x1f) + 0xc8)"
	local_28 = 0x3e4ccccd;
#define next_call_arg_2 "local_28"
#define next_call_arg_3 "local_28"
#define next_call_arg_4 "0x3f800000"
	trap_R_AddLightToScene();
jmp_110ec:
	if ((local_1c & 0x40) == 0x0) goto jmp_11103;
	trap_S_AddLoopingSound(*(int *)arg_0, (arg_0 + 0x2b4), 0x1d5c, bss_104464);
jmp_11103:
	local_20 = ((0x6b4 * *(int *)(arg_0 + 0xa8)) + 0xe8c24);
	if ((local_1c & 0x80) == 0x0) goto jmp_11151;
	if (*(int *)(local_20 + 0x1ec) == 0x0) goto jmp_11129;
	CG_PlayerFlag(arg_0, bss_10417c, arg_1);
	goto jmp_11132;
jmp_11129:
	CG_TrailItem(arg_0, bss_104140);
jmp_11132:
	local_24 = rand();
#define next_call_arg_0 "(arg_0 + 0x2b4)"
#define next_call_arg_1 "(float)((local_24 & 0x1f) + 0xc8)"
#define next_call_arg_2 "0x3f800000"
	local_28 = 0x3e4ccccd;
#define next_call_arg_3 "local_28"
#define next_call_arg_4 "local_28"
	trap_R_AddLightToScene();
jmp_11151:
	if ((local_1c & 0x100) == 0x0) goto jmp_11194;
	if (*(int *)(local_20 + 0x1ec) == 0x0) goto jmp_1116c;
	CG_PlayerFlag(arg_0, bss_104180, arg_1);
	goto jmp_11175;
jmp_1116c:
	CG_TrailItem(arg_0, bss_104144);
jmp_11175:
	local_24 = rand();
#define next_call_arg_0 "(arg_0 + 0x2b4)"
#define next_call_arg_1 "(float)((local_24 & 0x1f) + 0xc8)"
	local_28 = 0x3e4ccccd;
#define next_call_arg_2 "local_28"
#define next_call_arg_3 "local_28"
#define next_call_arg_4 "0x3f800000"
	trap_R_AddLightToScene();
jmp_11194:
	if ((local_1c & 0x200) == 0x0) goto jmp_111d8;
	if (*(int *)(local_20 + 0x1ec) == 0x0) goto jmp_111af;
	CG_PlayerFlag(arg_0, bss_104184, arg_1);
	goto jmp_111b8;
jmp_111af:
	CG_TrailItem(arg_0, bss_104148);
jmp_111b8:
	local_24 = rand();
#define next_call_arg_0 "(arg_0 + 0x2b4)"
#define next_call_arg_1 "(float)((local_24 & 0x1f) + 0xc8)"
	local_28 = 0x3f800000;
#define next_call_arg_2 "local_28"
#define next_call_arg_3 "local_28"
#define next_call_arg_4 "local_28"
	trap_R_AddLightToScene();
jmp_111d8:
	if ((local_1c & 0x8) == 0x0) goto jmp_111e4;
	CG_HasteTrail(arg_0);
jmp_111e4:
}

/*
=================
CG_PlayerFloatSprite

Address: 0x111e6
Stack Size: 0xa4
Calls: trap_R_AddRefEntityToScene, memset
Called by: CG_PlayerSprites
=================
*/
void CG_PlayerFloatSprite(int arg_0, int arg_1) {
	int		local_14;
	char	local_18[64];
	char	local_58[8];
	char	local_60[36];
	int		local_84;
	char	local_88;
	char	local_89;
	char	local_8a;
	char	local_8b[13];
	char	local_98[8];
	int		local_a0;

	if (*(int *)arg_0 != *(int *)(bss_c2330 + 0xb8)) goto jmp_111f9;
	if (bss_dc778 != 0x0) goto jmp_111f9;
	local_a0 = 0x2;
	goto jmp_111fc;
jmp_111f9:
	local_a0 = 0x0;
jmp_111fc:
	memset(&local_14, 0x0, 0x8c);
	block_copy((arg_0 + 0x2b4), local_58, 0xc);
	*(int *)local_60 = (*(int *)local_60 + 0x42400000);
	local_14 = 0x2;
	local_84 = arg_1;
	*(int *)local_98 = 0x41200000;
	*(int *)local_18 = local_a0;
	local_88 = 0xff;
	local_89 = 0xff;
	local_8a = 0xff;
	*(char *)local_8b = 0xff;
	trap_R_AddRefEntityToScene(&local_14);
}

/*
=================
CG_PlayerSprites

Address: 0x11232
Stack Size: 0x18
Calls: CG_PlayerFloatSprite
Called by: CG_Player
=================
*/
void CG_PlayerSprites(int arg_0) {
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	if ((*(int *)(arg_0 + 0x8) & 0x2000) == 0x0) goto jmp_1124b;
	CG_PlayerFloatSprite(arg_0, bss_1041ec);
	goto jmp_1130a;
jmp_1124b:
	if ((*(int *)(arg_0 + 0x8) & 0x1000) == 0x0) goto jmp_1125f;
	CG_PlayerFloatSprite(arg_0, bss_1041e8);
	goto jmp_1130a;
jmp_1125f:
	if ((*(int *)(arg_0 + 0x8) & 0x8000) == 0x0) goto jmp_11273;
	CG_PlayerFloatSprite(arg_0, bss_104308);
	goto jmp_1130a;
jmp_11273:
	local_14 = 0x8;
	if ((*(int *)(arg_0 + local_14) & local_14) == 0x0) goto jmp_1128c;
	CG_PlayerFloatSprite(arg_0, bss_10430c);
	goto jmp_1130a;
jmp_1128c:
	if ((*(int *)(arg_0 + 0x8) & 0x40) == 0x0) goto jmp_112a0;
	CG_PlayerFloatSprite(arg_0, bss_104310);
	goto jmp_1130a;
jmp_112a0:
	if ((*(int *)(arg_0 + 0x8) & 0x10000) == 0x0) goto jmp_112b4;
	CG_PlayerFloatSprite(arg_0, bss_104314);
	goto jmp_1130a;
jmp_112b4:
	if ((*(int *)(arg_0 + 0x8) & 0x20000) == 0x0) goto jmp_112c8;
	CG_PlayerFloatSprite(arg_0, bss_104318);
	goto jmp_1130a;
jmp_112c8:
	if ((*(int *)(arg_0 + 0x8) & 0x800) == 0x0) goto jmp_112dc;
	CG_PlayerFloatSprite(arg_0, bss_10431c);
	goto jmp_1130a;
jmp_112dc:
	local_10 = *(int *)((0x6b4 * *(int *)(arg_0 + 0xa8)) + 0xe8c68);
	if ((*(int *)(arg_0 + 0x8) & 0x1) != 0x0) goto jmp_1130a;
	if (*(int *)(bss_c2330 + 0x130) != local_10) goto jmp_1130a;
	if (bss_e66f8 < 0x3) goto jmp_1130a;
	if (bss_8a98 == 0x0) goto jmp_1130a;
	CG_PlayerFloatSprite(arg_0, bss_1041e4);
jmp_1130a:
}

/*
=================
CG_PlayerShadow

Address: 0x1130c
Stack Size: 0x9c
Calls: trap_CM_BoxTrace, CG_ImpactMark
Called by: CG_Player
=================
*/
int CG_PlayerShadow(int arg_0, int arg_1) {
	int		local_34;
	int		local_38;
	int		local_3c;
	char	local_40[8];
	int		local_48;
	char	local_4c[32];
	int		local_6c;
	char	local_70[8];
	int		local_78;
	char	local_7c[12];
	char	local_88[12];
	char	local_94[8];

	arg_0 = arg_0;
	block_copy(global_1cb8, local_7c, 0xc);
	block_copy(global_1cc4, local_88, 0xc);
	*(int *)arg_1 = 0x0;
	if (bss_ca58 != 0x0) goto jmp_11323;
	return 0x0;
jmp_11323:
	if ((*(int *)(arg_0 + 0xbc) & 0x10) == 0x0) goto jmp_11330;
	return 0x0;
jmp_11330:
	block_copy((arg_0 + 0x2b4), local_70, 0xc);
	local_78 = (local_78 - 0x43000000);
	trap_CM_BoxTrace(&local_34, (arg_0 + 0x2b4), local_70, local_7c, local_88, 0x0, 0x2010001);
	if (local_3c == 0x3f800000) goto jmp_11361;
	*(int *)local_94 = 0x0;
	if (local_38 != *(int *)local_94) goto jmp_11361;
	if (local_34 == *(int *)local_94) goto jmp_11365;
jmp_11361:
	return 0x0;
jmp_11365:
	*(int *)arg_1 = (local_48 + 0x3f800000);
	if (bss_ca58 == 0x1) goto jmp_11374;
	return 0x1;
jmp_11374:
	local_6c = (0x3f800000 - local_3c);
	CG_ImpactMark(bss_104274, local_40, local_4c, *(int *)(arg_0 + 0x1d8), local_6c, local_6c, local_6c, 0x3f800000, 0x0, 0x41c00000, 0x1);
	return 0x1;
}

/*
=================
CG_PlayerSplash

Address: 0x1139f
Stack Size: 0xe8
Calls: trap_R_AddPolyToScene, trap_CM_BoxTrace, CG_PointContents
Called by: CG_Player
=================
*/
void CG_PlayerSplash(int arg_0) {
	int		local_24;
	char	local_28[8];
	int		local_30;
	int		local_34;
	char	local_38;
	char	local_39;
	char	local_3a;
	char	local_3b;
	int		local_3c;
	char	local_40[8];
	int		local_48;
	int		local_4c;
	char	local_50;
	char	local_51;
	char	local_52;
	char	local_53;
	int		local_54;
	char	local_58[8];
	int		local_60;
	int		local_64;
	char	local_68;
	char	local_69;
	char	local_6a;
	char	local_6b;
	int		local_6c;
	char	local_70[8];
	int		local_78;
	int		local_7c;
	char	local_80;
	char	local_81;
	char	local_82;
	char	local_83;
	char	local_84[8];
	int		local_8c;
	char	local_90[44];
	char	local_bc[8];
	int		local_c4;
	char	local_c8[8];
	int		local_d0;
	int		local_d4;
	int		local_d8;
	int		local_dc;
	int		local_e0;
	int		local_e4;

	if (bss_ca58 != 0x0) goto jmp_113a6;
	goto jmp_11495;
jmp_113a6:
	block_copy((arg_0 + 0x2b4), local_c8, 0xc);
	local_d0 = (local_d0 - 0x41c00000);
	local_d8 = CG_PointContents(local_c8, 0x0);
	local_d4 = local_d8;
	if ((local_d4 & 0x38) != 0x0) goto jmp_113c6;
	goto jmp_11495;
jmp_113c6:
	block_copy((arg_0 + 0x2b4), local_bc, 0xc);
	local_c4 = (local_c4 + 0x42000000);
	local_dc = CG_PointContents(local_bc, 0x0);
	local_d4 = local_dc;
	if ((local_d4 & 0x39) == 0x0) goto jmp_113e6;
	goto jmp_11495;
jmp_113e6:
#define next_call_arg_0 "local_84"
#define next_call_arg_1 "local_bc"
#define next_call_arg_2 "local_c8"
	local_e0 = 0x0;
#define next_call_arg_3 "local_e0"
#define next_call_arg_4 "local_e0"
#define next_call_arg_5 "0x0"
#define next_call_arg_6 "0x38"
	trap_CM_BoxTrace();
	if (local_8c != 0x3f800000) goto jmp_11402;
	goto jmp_11495;
jmp_11402:
	block_copy(local_90, &local_24, 0xc);
	local_e4 = 0x42000000;
	local_24 = (local_24 - local_e4);
	*(int *)local_28 = (*(int *)local_28 - local_e4);
	local_30 = 0x0;
	local_34 = 0x0;
	local_38 = 0xff;
	local_39 = 0xff;
	local_3a = 0xff;
	local_3b = 0xff;
	block_copy(local_90, &local_3c, 0xc);
	local_3c = (local_3c - 0x42000000);
	*(int *)local_40 = (*(int *)local_40 + 0x42000000);
	local_48 = 0x0;
	local_4c = 0x3f800000;
	local_50 = 0xff;
	local_51 = 0xff;
	local_52 = 0xff;
	local_53 = 0xff;
	block_copy(local_90, &local_54, 0xc);
	local_54 = (local_54 + 0x42000000);
	*(int *)local_58 = (*(int *)local_58 + 0x42000000);
	local_60 = 0x3f800000;
	local_64 = 0x3f800000;
	local_68 = 0xff;
	local_69 = 0xff;
	local_6a = 0xff;
	local_6b = 0xff;
	block_copy(local_90, &local_6c, 0xc);
	local_6c = (local_6c + 0x42000000);
	*(int *)local_70 = (*(int *)local_70 - 0x42000000);
	local_78 = 0x3f800000;
	local_7c = 0x0;
	local_80 = 0xff;
	local_81 = 0xff;
	local_82 = 0xff;
	local_83 = 0xff;
	trap_R_AddPolyToScene(bss_10428c, 0x4, &local_24);
jmp_11495:
}

/*
=================
CG_AddRefEntityWithPowerups

Address: 0x11497
Stack Size: 0xc
Calls: trap_R_AddRefEntityToScene
Called by: CG_Player, CG_Missile
=================
*/
void CG_AddRefEntityWithPowerups(int arg_0, int arg_1, int arg_2) {

	if ((*(int *)(arg_1 + 0xbc) & 0x10) == 0x0) goto jmp_114b0;
	*(int *)(arg_0 + 0x70) = bss_1042b0;
	trap_R_AddRefEntityToScene(arg_0);
	goto jmp_1150d;
jmp_114b0:
	trap_R_AddRefEntityToScene(arg_0);
	if ((*(int *)(arg_1 + 0xbc) & 0x2) == 0x0) goto jmp_114d9;
	if (arg_2 != 0x1) goto jmp_114cc;
	*(int *)(arg_0 + 0x70) = bss_1042a8;
	goto jmp_114d3;
jmp_114cc:
	*(int *)(arg_0 + 0x70) = bss_1042a4;
jmp_114d3:
	trap_R_AddRefEntityToScene(arg_0);
jmp_114d9:
	if ((*(int *)(arg_1 + 0xbc) & 0x20) == 0x0) goto jmp_114f7;
	if (((bss_dc760 / 0x64) %% 0xa) != 0x1) goto jmp_114f7;
	*(int *)(arg_0 + 0x70) = bss_1042b4;
	trap_R_AddRefEntityToScene(arg_0);
jmp_114f7:
	if ((*(int *)(arg_1 + 0xbc) & 0x4) == 0x0) goto jmp_1150d;
	*(int *)(arg_0 + 0x70) = bss_1042b8;
	trap_R_AddRefEntityToScene(arg_0);
jmp_1150d:
}

/*
=================
CG_LightVerts

Address: 0x1150f
Stack Size: 0x70
Calls: trap_R_LightForPoint
=================
*/
int CG_LightVerts(int arg_0, int arg_1, int arg_2) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	char	local_44[8];
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	trap_R_LightForPoint(arg_2, &local_24, &local_3c, &local_30);
	local_1c = 0x0;
	goto jmp_1163e;
jmp_1152d:
	local_20 = (((*(int *)arg_0 * local_30) + (*(int *)(arg_0 + 0x4) * local_34)) + (*(int *)(arg_0 + 0x8) * local_38));
	if (local_20 > 0x0) goto jmp_115d3;
	local_50 = local_24;
	local_54 = 0x4f000000;
	if (local_50 < local_54) goto jmp_11563;
	local_4c = ((int)(local_50 - local_54) + 0x80000000);
	goto jmp_11568;
jmp_11563:
	local_4c = (int)local_50;
jmp_11568:
	*(char *)(((0x18 * local_1c) + arg_2) + 0x14) = local_4c;
	local_5c = local_28;
	local_60 = 0x4f000000;
	if (local_5c < local_60) goto jmp_1158c;
	local_58 = ((int)(local_5c - local_60) + 0x80000000);
	goto jmp_11591;
jmp_1158c:
	local_58 = (int)local_5c;
jmp_11591:
	*(char *)(((0x18 * local_1c) + arg_2) + 0x15) = local_58;
	local_68 = local_2c;
	local_6c = 0x4f000000;
	if (local_68 < local_6c) goto jmp_115b5;
	local_64 = ((int)(local_68 - local_6c) + 0x80000000);
	goto jmp_115ba;
jmp_115b5:
	local_64 = (int)local_68;
jmp_115ba:
	*(char *)(((0x18 * local_1c) + arg_2) + 0x16) = local_64;
	*(char *)(((0x18 * local_1c) + arg_2) + 0x17) = 0xff;
	goto jmp_11638;
jmp_115d3:
	local_18 = (int)(local_24 + (local_20 * local_3c));
	if (local_18 <= 0xff) goto jmp_115e5;
	local_18 = 0xff;
jmp_115e5:
	*(char *)(((0x18 * local_1c) + arg_2) + 0x14) = local_18;
	local_18 = (int)(local_28 + (local_20 * local_40));
	if (local_18 <= 0xff) goto jmp_11603;
	local_18 = 0xff;
jmp_11603:
	*(char *)(((0x18 * local_1c) + arg_2) + 0x15) = local_18;
	local_18 = (int)(local_2c + (local_20 * *(int *)local_44));
	if (local_18 <= 0xff) goto jmp_11621;
	local_18 = 0xff;
jmp_11621:
	*(char *)(((0x18 * local_1c) + arg_2) + 0x16) = local_18;
	*(char *)(((0x18 * local_1c) + arg_2) + 0x17) = 0xff;
jmp_11638:
	local_1c = (local_1c + 0x1);
jmp_1163e:
	if (local_1c < arg_1) goto jmp_1152d;
	return 0x1;
}

/*
=================
CG_Player

Address: 0x11647
Stack Size: 0x1e4
Calls: memset, CG_PlayerPowerups, CG_AddPlayerWeapon, CG_PositionRotatedEntityOnTag, CG_AddRefEntityWithPowerups, CG_PlayerSplash, CG_PlayerShadow, CG_PlayerSprites, CG_PlayerAnimation, CG_PlayerAngles, CG_Error
Called by: CG_AddCEntity
=================
*/
void CG_Player(int arg_0) {
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[12];
	int		local_3c;
	char	local_40[40];
	char	local_68[12];
	int		local_74;
	char	local_78[12];
	int		local_84;
	char	local_88[8];
	char	local_90[32];
	int		local_b0;
	int		local_b4;
	int		local_b8;
	char	local_bc[12];
	int		local_c8;
	char	local_cc[52];
	char	local_100[16];
	int		local_110;
	char	local_114[8];
	char	local_11c[32];
	int		local_13c;
	int		local_140;
	int		local_144;
	int		local_148;
	char	local_14c[12];
	int		local_158;
	char	local_15c[80];
	char	local_1ac[32];
	int		local_1cc;
	int		local_1d0;
	int		local_1d4;
	char	local_1d8[8];
	int		local_1e0;

	arg_0 = arg_0;
	local_1d0 = *(int *)(arg_0 + 0xa8);
	if (local_1d0 < 0x0) goto jmp_1165b;
	if (local_1d0 < 0x40) goto jmp_11660;
jmp_1165b:
	CG_Error(0x6158);
jmp_11660:
	local_13c = ((0x6b4 * local_1d0) + 0xe8c24);
	if (*(int *)local_13c != 0x0) goto jmp_1166f;
	goto jmp_117bf;
jmp_1166f:
	local_1cc = 0x0;
	if (*(int *)arg_0 != *(int *)(bss_c2330 + 0xb8)) goto jmp_1168a;
	if (bss_dc778 != 0x0) goto jmp_11684;
	local_1cc = 0x2;
	goto jmp_1168a;
jmp_11684:
	if (bss_7ee8 == 0x0) goto jmp_1168a;
	goto jmp_117bf;
jmp_1168a:
	memset(&local_24, 0x0, 0x8c);
	memset(&local_b0, 0x0, 0x8c);
	memset(&local_140, 0x0, 0x8c);
	CG_PlayerAngles(arg_0, local_40, local_cc, local_15c);
	CG_PlayerAnimation(arg_0, &local_84, &local_74, local_88, &local_110, local_100, local_114);
	CG_PlayerSprites(arg_0);
	local_1e0 = CG_PlayerShadow(arg_0, &local_1d4);
	*(int *)local_1d8 = local_1e0;
	CG_PlayerSplash(arg_0);
	if (bss_ca58 != 0x3) goto jmp_116ea;
	if (*(int *)local_1d8 == 0x0) goto jmp_116ea;
	local_1cc = (local_1cc | 0x100);
jmp_116ea:
	local_1cc = (local_1cc | 0x80);
	local_2c = *(int *)(local_13c + 0x20c);
	*(int *)local_90 = *(int *)(local_13c + 0x210);
	block_copy((arg_0 + 0x2b4), local_68, 0xc);
	block_copy((arg_0 + 0x2b4), local_30, 0xc);
	local_3c = local_1d4;
	local_28 = local_1cc;
	block_copy(local_68, local_78, 0xc);
	CG_AddRefEntityWithPowerups(&local_24, arg_0, *(int *)(local_13c + 0x44));
	if (local_2c != 0x0) goto jmp_11729;
	goto jmp_117bf;
jmp_11729:
	local_b8 = *(int *)(local_13c + 0x214);
	if (local_b8 != 0x0) goto jmp_11736;
	goto jmp_117bf;
jmp_11736:
	*(int *)local_11c = *(int *)(local_13c + 0x218);
	block_copy((arg_0 + 0x2b4), local_bc, 0xc);
	CG_PositionRotatedEntityOnTag(&local_b0, &local_24, *(int *)(local_13c + 0x20c), 0x614e);
	local_c8 = local_1d4;
	local_b4 = local_1cc;
	CG_AddRefEntityWithPowerups(&local_b0, arg_0, *(int *)(local_13c + 0x44));
	local_148 = *(int *)(local_13c + 0x21c);
	if (local_148 != 0x0) goto jmp_11775;
	goto jmp_117bf;
jmp_11775:
	*(int *)local_1ac = *(int *)(local_13c + 0x220);
	block_copy((arg_0 + 0x2b4), local_14c, 0xc);
	CG_PositionRotatedEntityOnTag(&local_140, &local_b0, *(int *)(local_13c + 0x214), 0x6145);
	local_158 = local_1d4;
	local_144 = local_1cc;
	CG_AddRefEntityWithPowerups(&local_140, arg_0, *(int *)(local_13c + 0x44));
	CG_AddPlayerWeapon(&local_b0, 0x0, arg_0, *(int *)(local_13c + 0x44));
	CG_PlayerPowerups(arg_0, &local_b0);
jmp_117bf:
}

/*
=================
CG_ResetPlayerEntity

Address: 0x117c1
Stack Size: 0x3c
Calls: memset, CG_Printf, BG_EvaluateTrajectory, CG_ClearLerpFrame
Called by: CG_ResetEntity, CG_LoadClientInfo
=================
*/
void CG_ResetPlayerEntity(int arg_0) {

	arg_0 = arg_0;
	*(int *)(arg_0 + 0x270) = 0xfffe7961;
	*(int *)(arg_0 + 0x28c) = 0x0;
	CG_ClearLerpFrame(((0x6b4 * *(int *)(arg_0 + 0xa8)) + 0xe8c24), (arg_0 + 0x1c4), *(int *)(arg_0 + 0xc4));
	CG_ClearLerpFrame(((0x6b4 * *(int *)(arg_0 + 0xa8)) + 0xe8c24), (arg_0 + 0x1f4), *(int *)(arg_0 + 0xc8));
	BG_EvaluateTrajectory((arg_0 + 0xc), bss_dc760, (arg_0 + 0x2b4));
	BG_EvaluateTrajectory((arg_0 + 0x30), bss_dc760, (arg_0 + 0x2c0));
	block_copy((arg_0 + 0x2b4), (arg_0 + 0x290), 0xc);
	block_copy((arg_0 + 0x2c0), (arg_0 + 0x29c), 0xc);
	memset((arg_0 + 0x1c4), 0x0, 0x30);
	*(int *)(arg_0 + 0x1d8) = *(int *)(arg_0 + 0x2a0);
	*(int *)(arg_0 + 0x1dc) = 0x0;
	*(int *)(arg_0 + 0x1e0) = 0x0;
	*(int *)(arg_0 + 0x1e4) = 0x0;
	memset((arg_0 + 0x1f4), 0x0, 0x30);
	*(int *)(arg_0 + 0x208) = *(int *)(arg_0 + 0x2a0);
	*(int *)(arg_0 + 0x20c) = 0x0;
	*(int *)(arg_0 + 0x210) = *(int *)(arg_0 + 0x29c);
	*(int *)(arg_0 + 0x214) = 0x0;
	if (bss_b408 == 0x0) goto jmp_1189b;
	CG_Printf(0x6128, *(int *)arg_0, *(int *)(arg_0 + 0x208));
jmp_1189b:
}

/*
=================
CG_CheckAmmo

Address: 0x1189d
Stack Size: 0x24
Calls: trap_S_StartLocalSound
Called by: CG_TransitionPlayerState
=================
*/
void CG_CheckAmmo(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	char	local_1c[8];

	local_18 = *(int *)(bss_c2330 + 0xec);
	local_14 = 0x0;
	local_10 = 0x2;
jmp_118ab:
	if ((local_18 & (0x1 << local_10)) != 0x0) goto jmp_118b6;
	goto jmp_11901;
jmp_118b6:
	if (*(int *)((local_10 << 0x2) + (bss_c2330 + 0x1a4)) >= 0x0) goto jmp_118c4;
	goto jmp_11901;
jmp_118c4:
	if (local_10 < 0x3) goto jmp_118e7;
	if (local_10 > 0x7) goto jmp_118e7;
	goto *(int *)((local_10 << 0x2) + 0x1cc4);
	local_14 = (local_14 + (0x3e8 * *(int *)((local_10 << 0x2) + (bss_c2330 + 0x1a4))));
	goto jmp_118f8;
jmp_118e7:
	local_14 = (local_14 + (0xc8 * *(int *)((local_10 << 0x2) + (bss_c2330 + 0x1a4))));
jmp_118f8:
	if (local_14 < 0x1388) goto jmp_11901;
	bss_de9e8 = 0x0;
	goto jmp_11928;
jmp_11901:
	local_10 = (local_10 + 0x1);
	if (local_10 < 0xb) goto jmp_118ab;
	*(int *)local_1c = bss_de9e8;
	if (local_14 != 0x0) goto jmp_11918;
	bss_de9e8 = 0x2;
	goto jmp_1191b;
jmp_11918:
	bss_de9e8 = 0x1;
jmp_1191b:
	if (bss_de9e8 == *(int *)local_1c) goto jmp_11928;
	trap_S_StartLocalSound(bss_1043dc, 0x6);
jmp_11928:
}

/*
=================
CG_DamageFeedback

Address: 0x1192a
Stack Size: 0x6c
Calls: VectorLength, AngleVectors
Called by: CG_TransitionPlayerState
=================
*/
void CG_DamageFeedback(int arg_0, int arg_1, int arg_2) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;

	bss_de9fc = bss_dc760;
	local_2c = *(int *)(bss_c2330 + 0xe4);
	if (local_2c >= 0x28) goto jmp_1193f;
	local_34 = 0x3f800000;
	goto jmp_11946;
jmp_1193f:
	local_34 = (0x42200000 / (float)local_2c);
jmp_11946:
	local_24 = ((float)arg_2 * local_34);
	if (local_24 >= 0x40a00000) goto jmp_11955;
	local_24 = 0x40a00000;
jmp_11955:
	if (local_24 <= 0x41200000) goto jmp_1195c;
	local_24 = 0x41200000;
jmp_1195c:
	local_54 = 0xff;
	if (arg_0 != local_54) goto jmp_11979;
	if (arg_1 != local_54) goto jmp_11979;
	bss_deb04 = 0x0;
	bss_deb08 = 0x0;
	bss_deb34 = 0x0;
	bss_deb30 = -local_24;
	goto jmp_11a43;
jmp_11979:
	local_58 = 0x43b40000;
	local_5c = 0x437f0000;
	local_50 = (local_58 * ((float)arg_1 / local_5c));
	local_4c = (local_58 * ((float)arg_0 / local_5c));
	local_38 = local_50;
	local_3c = local_4c;
	local_40 = 0x0;
#define next_call_arg_0 "&local_38"
#define next_call_arg_1 "&local_18"
	local_60 = 0x0;
#define next_call_arg_2 "local_60"
#define next_call_arg_3 "local_60"
	AngleVectors();
	local_18 = (vec3_origin - local_18);
	local_1c = (global_1d60 - local_1c);
	local_20 = (global_1d64 - local_20);
	local_64 = local_18;
	local_28 = (((local_64 * bss_dcd18) + (local_1c * bss_dcd1c)) + (local_20 * bss_dcd20));
	local_30 = (((local_64 * bss_dcd24) + (local_1c * bss_dcd28)) + (local_20 * bss_dcd2c));
	local_48 = (((local_64 * bss_dcd30) + (local_1c * bss_dcd34)) + (local_20 * bss_dcd38));
	local_18 = local_28;
	local_1c = local_30;
	local_20 = 0x0;
	local_68 = VectorLength(&local_18);
	local_44 = local_68;
	if (local_44 >= 0x3dcccccd) goto jmp_11a1e;
	local_44 = 0x3dcccccd;
jmp_11a1e:
	bss_deb34 = (local_24 * local_30);
	bss_deb30 = (-local_24 * local_28);
	if (local_28 > 0x3dcccccd) goto jmp_11a34;
	local_28 = 0x3dcccccd;
jmp_11a34:
	bss_deb04 = (-local_30 / local_28);
	bss_deb08 = (local_48 / local_44);
jmp_11a43:
	if (bss_deb04 <= 0x3f800000) goto jmp_11a4a;
	bss_deb04 = 0x3f800000;
jmp_11a4a:
	if (bss_deb04 >= 0xbf800000) goto jmp_11a51;
	bss_deb04 = 0xbf800000;
jmp_11a51:
	if (bss_deb08 <= 0x3f800000) goto jmp_11a58;
	bss_deb08 = 0x3f800000;
jmp_11a58:
	if (bss_deb08 >= 0xbf800000) goto jmp_11a5f;
	bss_deb08 = 0xbf800000;
jmp_11a5f:
	if (local_24 <= 0x41200000) goto jmp_11a66;
	local_24 = 0x41200000;
jmp_11a66:
	bss_deb0c = local_24;
	bss_deb2c = (float)(bss_dc760 + 0x1f4);
	bss_deb00 = (float)*(int *)(bss_c2330 + 0x8);
}

/*
=================
CG_Respawn

Address: 0x11a7b
Stack Size: 0x8
Called by: CG_SetInitialSnapshot, CG_TransitionPlayerState
=================
*/
void CG_Respawn(void) {

	bss_dc754 = 0x1;
	bss_deaf4 = bss_dc760;
	bss_dcc90 = *(int *)(bss_c2330 + 0xbc);
}

/*
=================
CG_CheckPlayerstateEvents

Address: 0x11a8c
Stack Size: 0x44
Calls: CG_EntityEvent
Called by: CG_TransitionPlayerState
=================
*/
void CG_CheckPlayerstateEvents(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[12];
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[8];
	int		local_40;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_1c = 0x80;
	*(int *)local_20 = *(int *)(arg_0 + local_1c);
	if (*(int *)local_20 == 0x0) goto jmp_11ad7;
	if (*(int *)local_20 == *(int *)(arg_1 + local_1c)) goto jmp_11ad7;
	local_14 = ((0x2cc * *(int *)(arg_0 + 0x8c)) + 0xf30c);
	*(int *)(local_14 + 0xb4) = *(int *)(arg_0 + 0x80);
	*(int *)(local_14 + 0xb8) = *(int *)(arg_0 + 0x84);
	CG_EntityEvent(local_14, (local_14 + 0x2b4));
jmp_11ad7:
	local_14 = 0xdc954;
	local_10 = (*(int *)(arg_0 + 0x6c) - 0x2);
	goto jmp_11b68;
jmp_11ae5:
	local_2c = *(int *)(arg_1 + 0x6c);
	if (local_10 >= local_2c) goto jmp_11b1b;
	local_30 = 0x2;
	if (local_10 <= (local_2c - local_30)) goto jmp_11b62;
	local_34 = ((local_10 & 0x1) << local_30);
	*(int *)local_38 = 0x70;
	if (*(int *)(local_34 + (arg_0 + *(int *)local_38)) == *(int *)(local_34 + (arg_1 + *(int *)local_38))) goto jmp_11b62;
jmp_11b1b:
	local_18 = *(int *)(((local_10 & 0x1) << 0x2) + (arg_0 + 0x70));
	*(int *)(local_14 + 0xb4) = local_18;
	*(int *)(local_14 + 0xb8) = *(int *)(((local_10 & 0x1) << 0x2) + (arg_0 + 0x78));
	CG_EntityEvent(local_14, (local_14 + 0x2b4));
	*(int *)(((local_10 & 0xf) << 0x2) + 0xdcc38) = local_18;
	local_40 = 0xdcc34;
	*(int *)local_40 = (*(int *)local_40 + 0x1);
jmp_11b62:
	local_10 = (local_10 + 0x1);
jmp_11b68:
	if (local_10 < *(int *)(arg_0 + 0x6c)) goto jmp_11ae5;
}

/*
=================
CG_CheckChangedPredictableEvents

Address: 0x11b72
Stack Size: 0x28
Calls: CG_Printf, CG_EntityEvent
=================
*/
void CG_CheckChangedPredictableEvents(int arg_0) {
	int		local_10;
	int		local_14;
	char	local_18[8];
	char	local_20[8];

	arg_0 = arg_0;
	local_14 = 0xdc954;
	local_10 = (*(int *)(arg_0 + 0x6c) - 0x2);
	goto jmp_11bf9;
jmp_11b85:
	if (local_10 < bss_dcc34) goto jmp_11b8c;
	goto jmp_11bf3;
jmp_11b8c:
	if (local_10 <= (bss_dcc34 - 0x10)) goto jmp_11bf3;
	*(int *)local_20 = 0x2;
	if (*(int *)(((local_10 & 0x1) << *(int *)local_20) + (arg_0 + 0x70)) == *(int *)(((local_10 & 0xf) << *(int *)local_20) + 0xdcc38)) goto jmp_11bf3;
	*(int *)local_18 = *(int *)(((local_10 & 0x1) << 0x2) + (arg_0 + 0x70));
	*(int *)(local_14 + 0xb4) = *(int *)local_18;
	*(int *)(local_14 + 0xb8) = *(int *)(((local_10 & 0x1) << 0x2) + (arg_0 + 0x78));
	CG_EntityEvent(local_14, (local_14 + 0x2b4));
	*(int *)(((local_10 & 0xf) << 0x2) + 0xdcc38) = *(int *)local_18;
	if (bss_ada8 == 0x0) goto jmp_11bf3;
	CG_Printf(0x67a0);
jmp_11bf3:
	local_10 = (local_10 + 0x1);
jmp_11bf9:
	if (local_10 < *(int *)(arg_0 + 0x6c)) goto jmp_11b85;
}

/*
=================
pushReward

Address: 0x11c03
Stack Size: 0xc
Called by: CG_CheckLocalSounds
=================
*/
void pushReward(int arg_0, int arg_1, int arg_2) {
	int		local_8;

	if (bss_dea04 >= 0x9) goto jmp_11c2e;
	local_8 = 0xdea04;
	*(int *)local_8 = (*(int *)local_8 + 0x1);
	*(int *)((bss_dea04 << 0x2) + 0xdea5c) = arg_0;
	*(int *)((bss_dea04 << 0x2) + 0xdea34) = arg_1;
	*(int *)((bss_dea04 << 0x2) + 0xdea0c) = arg_2;
jmp_11c2e:
}

/*
=================
CG_CheckLocalSounds

Address: 0x11c30
Stack Size: 0x64
Calls: trap_S_StartLocalSound, CG_AddBufferedSound, pushReward, CG_PainEvent
Called by: CG_TransitionPlayerState
=================
*/
void CG_CheckLocalSounds(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_20 = 0x104;
	if (*(int *)(arg_0 + local_20) == *(int *)(arg_1 + local_20)) goto jmp_11c4b;
	goto jmp_11fa2;
jmp_11c4b:
	local_24 = 0xfc;
	if (*(int *)(arg_0 + local_24) <= *(int *)(arg_1 + local_24)) goto jmp_11c65;
	trap_S_StartLocalSound(bss_10440c, 0x6);
	goto jmp_11c7d;
jmp_11c65:
	local_28 = 0xfc;
	if (*(int *)(arg_0 + local_28) >= *(int *)(arg_1 + local_28)) goto jmp_11c7d;
	trap_S_StartLocalSound(bss_104418, 0x6);
jmp_11c7d:
	local_2c = 0xb8;
	if (*(int *)(arg_0 + local_2c) >= (*(int *)(arg_1 + local_2c) - 0x1)) goto jmp_11ca1;
	if (*(int *)(arg_0 + 0xb8) <= 0x0) goto jmp_11ca1;
	CG_PainEvent(0xdc954, *(int *)(arg_0 + 0xb8));
jmp_11ca1:
	if (bss_c2324 == 0x0) goto jmp_11ca7;
	goto jmp_11fa2;
jmp_11ca7:
	local_14 = 0x0;
	local_30 = 0x130;
	if (*(int *)(arg_0 + local_30) == *(int *)(arg_1 + local_30)) goto jmp_11ccc;
	pushReward(bss_10446c, bss_10431c, *(int *)(arg_0 + 0x130));
	local_14 = 0x1;
jmp_11ccc:
	local_34 = 0x11c;
	if (*(int *)(arg_0 + local_34) == *(int *)(arg_1 + local_34)) goto jmp_11cf2;
	local_18 = bss_10441c;
	pushReward(local_18, bss_104308, *(int *)(arg_0 + 0x11c));
	local_14 = 0x1;
jmp_11cf2:
	local_38 = 0x120;
	if (*(int *)(arg_0 + local_38) == *(int *)(arg_1 + local_38)) goto jmp_11d18;
	local_18 = bss_104420;
	pushReward(local_18, bss_10430c, *(int *)(arg_0 + 0x120));
	local_14 = 0x1;
jmp_11d18:
	local_3c = 0x12c;
	if (*(int *)(arg_0 + local_3c) == *(int *)(arg_1 + local_3c)) goto jmp_11d3e;
	local_18 = bss_104428;
	pushReward(local_18, bss_104310, *(int *)(arg_0 + 0x12c));
	local_14 = 0x1;
jmp_11d3e:
	local_40 = 0x124;
	if (*(int *)(arg_0 + local_40) == *(int *)(arg_1 + local_40)) goto jmp_11d60;
	pushReward(bss_104430, bss_104314, *(int *)(arg_0 + 0x124));
	local_14 = 0x1;
jmp_11d60:
	local_44 = 0x128;
	if (*(int *)(arg_0 + local_44) == *(int *)(arg_1 + local_44)) goto jmp_11d82;
	pushReward(bss_10442c, bss_104318, *(int *)(arg_0 + 0x128));
	local_14 = 0x1;
jmp_11d82:
	local_48 = 0x10c;
	if (*(int *)(arg_0 + local_48) == *(int *)(arg_1 + local_48)) goto jmp_11dfc;
	local_4c = 0x10c;
	local_50 = 0x1;
	if ((*(int *)(arg_0 + local_4c) & local_50) == (*(int *)(arg_1 + local_4c) & local_50)) goto jmp_11db5;
	trap_S_StartLocalSound(bss_104424, 0x7);
	goto jmp_11df9;
jmp_11db5:
	local_54 = 0x10c;
	local_58 = 0x2;
	if ((*(int *)(arg_0 + local_54) & local_58) == (*(int *)(arg_1 + local_54) & local_58)) goto jmp_11dd8;
	trap_S_StartLocalSound(bss_104428, 0x7);
	goto jmp_11df9;
jmp_11dd8:
	local_5c = 0x10c;
	local_60 = 0x4;
	if ((*(int *)(arg_0 + local_5c) & local_60) == (*(int *)(arg_1 + local_5c) & local_60)) goto jmp_11df9;
	trap_S_StartLocalSound(bss_1044b0, 0x7);
jmp_11df9:
	local_14 = 0x1;
jmp_11dfc:
	if (bss_e66f8 <= 0x3) goto jmp_11e50;
	local_4c = 0x154;
	local_50 = *(int *)(arg_0 + local_4c);
	if (local_50 == *(int *)(arg_1 + local_4c)) goto jmp_11e18;
	if (local_50 != 0x0) goto jmp_11e48;
jmp_11e18:
	local_54 = 0x158;
	local_58 = *(int *)(arg_0 + local_54);
	if (local_58 == *(int *)(arg_1 + local_54)) goto jmp_11e30;
	if (local_58 != 0x0) goto jmp_11e48;
jmp_11e30:
	local_5c = 0x15c;
	local_60 = *(int *)(arg_0 + local_5c);
	if (local_60 == *(int *)(arg_1 + local_5c)) goto jmp_11e50;
	if (local_60 == 0x0) goto jmp_11e50;
jmp_11e48:
	trap_S_StartLocalSound(bss_1044ac, 0x7);
jmp_11e50:
	if (local_14 != 0x0) goto jmp_11e99;
	if (bss_deae0 != 0x0) goto jmp_11e99;
	local_4c = 0x100;
	if (*(int *)(arg_0 + local_4c) == *(int *)(arg_1 + local_4c)) goto jmp_11e99;
	if (bss_e66f8 >= 0x3) goto jmp_11e99;
	if (*(int *)(arg_0 + 0x100) != 0x0) goto jmp_11e7b;
	CG_AddBufferedSound(bss_104440);
	goto jmp_11e99;
jmp_11e7b:
	if (*(int *)(arg_0 + 0x100) != 0x4000) goto jmp_11e8a;
	CG_AddBufferedSound(bss_104444);
	goto jmp_11e99;
jmp_11e8a:
	if ((*(int *)(arg_1 + 0x100) & 0xffffbfff) != 0x0) goto jmp_11e99;
	CG_AddBufferedSound(bss_104448);
jmp_11e99:
	if (bss_e670c <= 0x0) goto jmp_11f18;
	local_4c = (bss_dc760 - bss_e7404);
	if ((bss_dc76c & 0x4) != 0x0) goto jmp_11eca;
	if (local_4c <= ((0x3e8 * (0x3c * bss_e670c)) + 0x7d0)) goto jmp_11eca;
	local_50 = 0xdc76c;
	*(int *)local_50 = (*(int *)local_50 | 0x7);
	trap_S_StartLocalSound(bss_1043fc, 0x7);
	goto jmp_11f18;
jmp_11eca:
	if ((bss_dc76c & 0x2) != 0x0) goto jmp_11ef0;
	if (local_4c <= ((0x3e8 * (0x3c * bss_e670c)) - 0xea60)) goto jmp_11ef0;
	local_50 = 0xdc76c;
	*(int *)local_50 = (*(int *)local_50 | 0x3);
	trap_S_StartLocalSound(bss_1043f4, 0x7);
	goto jmp_11f18;
jmp_11ef0:
	if (bss_e670c <= 0x5) goto jmp_11f18;
	if ((bss_dc76c & 0x1) != 0x0) goto jmp_11f18;
	if (local_4c <= ((0x3e8 * (0x3c * bss_e670c)) - 0x493e0)) goto jmp_11f18;
	local_50 = 0xdc76c;
	*(int *)local_50 = (*(int *)local_50 | 0x1);
	trap_S_StartLocalSound(bss_1043f8, 0x7);
jmp_11f18:
	if (bss_e6704 <= 0x0) goto jmp_11fa2;
	if (bss_e66f8 >= 0x4) goto jmp_11fa2;
	local_1c = bss_e7408;
	if (bss_e66f8 != 0x3) goto jmp_11f31;
	if (bss_e740c <= local_1c) goto jmp_11f31;
	local_1c = bss_e740c;
jmp_11f31:
	if ((bss_dc770 & 0x4) != 0x0) goto jmp_11f51;
	if (local_1c != (bss_e6704 - 0x1)) goto jmp_11f51;
	local_4c = 0xdc770;
	*(int *)local_4c = (*(int *)local_4c | 0x7);
	CG_AddBufferedSound(bss_104408);
	goto jmp_11fa2;
jmp_11f51:
	local_4c = 0x2;
	if (bss_e6704 <= local_4c) goto jmp_11f7b;
	if ((bss_dc770 & local_4c) != 0x0) goto jmp_11f7b;
	if (local_1c != (bss_e6704 - local_4c)) goto jmp_11f7b;
	local_50 = 0xdc770;
	*(int *)local_50 = (*(int *)local_50 | 0x3);
	CG_AddBufferedSound(bss_104404);
	goto jmp_11fa2;
jmp_11f7b:
	local_50 = 0x3;
	if (bss_e6704 <= local_50) goto jmp_11fa2;
	if ((bss_dc770 & 0x1) != 0x0) goto jmp_11fa2;
	if (local_1c != (bss_e6704 - local_50)) goto jmp_11fa2;
	local_54 = 0xdc770;
	*(int *)local_54 = (*(int *)local_54 | 0x1);
	CG_AddBufferedSound(bss_104400);
jmp_11fa2:
}

/*
=================
CG_TransitionPlayerState

Address: 0x11fa4
Stack Size: 0x2c
Calls: CG_CheckPlayerstateEvents, CG_CheckAmmo, CG_CheckLocalSounds, CG_Respawn, CG_DamageFeedback
Called by: CG_TransitionSnapshot, CG_PredictPlayerState
=================
*/
void CG_TransitionPlayerState(int arg_0, int arg_1) {
	char	local_14[8];
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	arg_1 = arg_1;
	*(int *)local_14 = 0x8c;
	if (*(int *)(arg_0 + *(int *)local_14) == *(int *)(arg_1 + *(int *)local_14)) goto jmp_11fc5;
	bss_dc754 = 0x1;
	block_copy(arg_0, arg_1, 0x1d4);
jmp_11fc5:
	local_1c = 0xa8;
	if (*(int *)(arg_0 + local_1c) == *(int *)(arg_1 + local_1c)) goto jmp_11ff1;
	if (*(int *)(arg_0 + 0xb4) == 0x0) goto jmp_11ff1;
	CG_DamageFeedback(*(int *)(arg_0 + 0xac), *(int *)(arg_0 + 0xb0), *(int *)(arg_0 + 0xb4));
jmp_11ff1:
	local_20 = 0x108;
	if (*(int *)(arg_0 + local_20) == *(int *)(arg_1 + local_20)) goto jmp_12004;
	CG_Respawn();
jmp_12004:
	if (bss_dc774 == 0x0) goto jmp_1200e;
	CG_Respawn();
	bss_dc774 = 0x0;
jmp_1200e:
	if (*(int *)(bss_c2330 + 0x30) == 0x5) goto jmp_12025;
	if (*(int *)(arg_0 + 0x104) == 0x3) goto jmp_12025;
	CG_CheckLocalSounds(arg_0, arg_1);
jmp_12025:
	CG_CheckAmmo();
	CG_CheckPlayerstateEvents(arg_0, arg_1);
	local_24 = 0xa4;
	if (*(int *)(arg_0 + local_24) == *(int *)(arg_1 + local_24)) goto jmp_12058;
	local_28 = 0xa4;
	bss_dcc80 = (float)(*(int *)(arg_0 + local_28) - *(int *)(arg_1 + local_28));
	bss_dcc84 = bss_dc760;
jmp_12058:
}

/*
=================
CG_BuildSolidList

Address: 0x1205a
Stack Size: 0x28
Called by: CG_SetNextSnap, CG_SetInitialSnapshot
=================
*/
void CG_BuildSolidList(void) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	local_18 = 0x0;
	cg_numSolidEntities = local_18;
	cg_numTriggerEntities = local_18;
	if (bss_c2334 == 0x0) goto jmp_1207d;
	local_1c = 0x0;
	if (bss_dc758 != local_1c) goto jmp_1207d;
	if (bss_dc754 != local_1c) goto jmp_1207d;
	local_14 = bss_c2334;
	goto jmp_12081;
jmp_1207d:
	local_14 = bss_c2330;
jmp_12081:
	local_10 = 0x0;
	goto jmp_120e4;
jmp_12086:
	local_8 = ((0x2cc * *(int *)((0xd0 * local_10) + (local_14 + 0x204))) + 0xf30c);
	local_c = local_8;
	local_20 = *(int *)(local_c + 0x4);
	if (local_20 == 0x2) goto jmp_120ad;
	if (local_20 == 0x8) goto jmp_120ad;
	if (local_20 != 0x9) goto jmp_120c3;
jmp_120ad:
	*(int *)((cg_numTriggerEntities << 0x2) + 0x15cad4) = local_8;
	local_24 = 0x15ced4;
	*(int *)local_24 = (*(int *)local_24 + 0x1);
	goto jmp_120de;
jmp_120c3:
	if (*(int *)(local_8 + 0x180) == 0x0) goto jmp_120de;
	*(int *)((cg_numSolidEntities << 0x2) + 0x15ced8) = local_8;
	local_24 = 0x15d2d8;
	*(int *)local_24 = (*(int *)local_24 + 0x1);
jmp_120de:
	local_10 = (local_10 + 0x1);
jmp_120e4:
	if (local_10 < *(int *)(local_14 + 0x200)) goto jmp_12086;
}

/*
=================
CG_ClipMoveToEntities

Address: 0x120ee
Stack Size: 0xc4
Calls: trap_CM_TransformedBoxTrace, trap_CM_TempBoxModel, trap_CM_InlineModel, BG_EvaluateTrajectory
Called by: CG_Trace
=================
*/
void CG_ClipMoveToEntities(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) {
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[44];
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	char	local_8c[12];
	char	local_98[12];
	int		local_a4;
	int		local_a8;
	int		local_ac;
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	arg_4 = arg_4;
	arg_5 = arg_5;
	arg_6 = arg_6;
	local_6c = 0x0;
	goto jmp_121fa;
jmp_12110:
	local_68 = *(int *)((local_6c << 0x2) + 0x15ced8);
	local_2c = local_68;
	if (*(int *)local_2c != arg_4) goto jmp_12125;
	goto jmp_121f4;
jmp_12125:
	if (*(int *)(local_2c + 0xb0) != 0xffffff) goto jmp_1214f;
	local_b0 = trap_CM_InlineModel(*(int *)(local_2c + 0xa0));
	local_70 = local_b0;
	block_copy((local_68 + 0x2c0), local_98, 0xc);
	BG_EvaluateTrajectory((local_68 + 0xc), bss_dc768, local_8c);
	goto jmp_121b1;
jmp_1214f:
	local_b0 = (local_2c + 0xb0);
	local_b4 = 0xff;
	local_a4 = (*(int *)local_b0 & local_b4);
	local_a8 = ((*(int *)local_b0 >> 0x8) & local_b4);
	local_ac = (((*(int *)local_b0 >> 0x10) & local_b4) - 0x20);
	local_b8 = (float)-local_a4;
	local_78 = local_b8;
	local_74 = local_b8;
	local_bc = (float)local_a4;
	local_84 = local_bc;
	local_80 = local_bc;
	local_7c = (float)-local_a8;
	local_88 = (float)local_ac;
	local_c0 = trap_CM_TempBoxModel(&local_74, &local_80);
	local_70 = local_c0;
	block_copy(&vec3_origin, local_98, 0xc);
	block_copy((local_68 + 0x2b4), local_8c, 0xc);
jmp_121b1:
	trap_CM_TransformedBoxTrace(&local_30, arg_0, arg_3, arg_1, arg_2, local_70, arg_5, local_8c, local_98);
	if (local_30 != 0x0) goto jmp_121d8;
	if (*(int *)local_38 >= *(int *)(arg_6 + 0x8)) goto jmp_121e3;
jmp_121d8:
	local_64 = *(int *)local_2c;
	block_copy(&local_30, arg_6, 0x38);
	goto jmp_121ed;
jmp_121e3:
	if (local_34 == 0x0) goto jmp_121ed;
	*(int *)(arg_6 + 0x4) = 0x1;
jmp_121ed:
	if (*(int *)arg_6 == 0x0) goto jmp_121f4;
	goto jmp_121ff;
jmp_121f4:
	local_6c = (local_6c + 0x1);
jmp_121fa:
	if (local_6c < cg_numSolidEntities) goto jmp_12110;
jmp_121ff:
}

/*
=================
CG_Trace

Address: 0x12201
Stack Size: 0x60
Calls: trap_CM_BoxTrace, CG_ClipMoveToEntities
Called by: CG_ShotgunPellet, CG_LightningBolt, CG_OffsetThirdPersonView, ValidBloodPool, CG_AddFragment, CG_ScanForCrosshairEntity, CG_DrawCrosshair3D
=================
*/
void CG_Trace(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) {
	char	local_24[8];
	char	local_2c[44];
	int		local_58;
	int		local_5c;

	trap_CM_BoxTrace(local_24, arg_1, arg_4, arg_2, arg_3, 0x0, arg_6);
	if (*(int *)local_2c == 0x3f800000) goto jmp_12221;
	local_5c = 0x3fe;
	goto jmp_12224;
jmp_12221:
	local_5c = 0x3ff;
jmp_12224:
	local_58 = local_5c;
	CG_ClipMoveToEntities(arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, local_24);
	block_copy(local_24, arg_0, 0x38);
}

/*
=================
CG_PointContents

Address: 0x12245
Stack Size: 0x3c
Calls: trap_CM_TransformedPointContents, trap_CM_InlineModel, trap_CM_PointContents
Called by: CG_Bullet, CG_ShotgunFire, CG_ShotgunPellet, CG_PlasmaTrail, CG_RocketTrail, CG_ShotgunEjectBrass, CG_MachineGunEjectBrass, CG_CalcFov, CG_PlayerSplash, CG_AddFragment, CG_WaterLevel, CG_ScanForCrosshairEntity
=================
*/
int CG_PointContents(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[8];
	int		local_38;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_2c = trap_CM_PointContents(arg_0, 0x0);
	local_28 = local_2c;
	local_20 = 0x0;
	goto jmp_122b3;
jmp_12260:
	local_1c = *(int *)((local_20 << 0x2) + 0x15ced8);
	local_18 = local_1c;
	if (*(int *)local_18 != arg_1) goto jmp_12275;
	goto jmp_122ad;
jmp_12275:
	if (*(int *)(local_18 + 0xb0) == 0xffffff) goto jmp_1227e;
	goto jmp_122ad;
jmp_1227e:
	*(int *)local_30 = trap_CM_InlineModel(*(int *)(local_18 + 0xa0));
	local_24 = *(int *)local_30;
	if (local_24 != 0x0) goto jmp_12292;
	goto jmp_122ad;
jmp_12292:
	local_38 = trap_CM_TransformedPointContents(arg_0, local_24, (local_1c + 0x2b4), (local_1c + 0x2c0));
	local_28 = (local_28 | local_38);
jmp_122ad:
	local_20 = (local_20 + 0x1);
jmp_122b3:
	if (local_20 < cg_numSolidEntities) goto jmp_12260;
	return local_28;
}

/*
=================
CG_InterpolatePlayerState

Address: 0x122bd
Stack Size: 0x60
Calls: trap_GetUserCmd, trap_GetCurrentCmdNumber, LerpAngle, PM_UpdateViewAngles
Called by: CG_PredictPlayerState
=================
*/
void CG_InterpolatePlayerState(int arg_0) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[8];
	int		local_34;
	char	local_38[8];
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;

	arg_0 = arg_0;
	local_20 = 0xdc780;
	local_18 = bss_c2330;
	local_1c = bss_c2334;
	block_copy((bss_c2330 + 0x2c), local_20, 0x1d4);
	if (arg_0 == 0x0) goto jmp_122f0;
	local_44 = trap_GetCurrentCmdNumber();
	local_40 = local_44;
	trap_GetUserCmd(local_40, &local_28);
	PM_UpdateViewAngles(local_20, &local_28);
jmp_122f0:
	if (bss_dc758 == 0x0) goto jmp_122f6;
	goto jmp_123f9;
jmp_122f6:
	if (local_1c == 0x0) goto jmp_1230a;
	*(int *)local_2c = 0x8;
	if (*(int *)(local_1c + *(int *)local_2c) > *(int *)(local_18 + *(int *)local_2c)) goto jmp_1230c;
jmp_1230a:
	goto jmp_123f9;
jmp_1230c:
	local_34 = 0x8;
	*(int *)local_38 = *(int *)(local_18 + local_34);
	local_24 = ((float)(bss_dc760 - *(int *)local_38) / (float)(*(int *)(local_1c + local_34) - *(int *)local_38));
	local_40 = 0x34;
	local_14 = *(int *)(local_1c + local_40);
	if (local_14 >= *(int *)(local_18 + local_40)) goto jmp_12344;
	local_14 = (local_14 + 0x100);
jmp_12344:
	local_44 = *(int *)(local_18 + 0x34);
	*(int *)(local_20 + 0x8) = (int)((float)local_44 + (local_24 * (float)(local_14 - local_44)));
	local_14 = 0x0;
jmp_12361:
	local_48 = (local_14 << 0x2);
	local_4c = 0x40;
	local_50 = *(int *)(local_48 + (local_18 + local_4c));
	*(int *)(local_48 + (local_20 + 0x14)) = (local_50 + (local_24 * (*(int *)(local_48 + (local_1c + local_4c)) - local_50)));
	if (arg_0 != 0x0) goto jmp_123c1;
	local_54 = (local_14 << 0x2);
	local_58 = 0xc4;
	local_5c = LerpAngle(*(int *)(local_54 + (local_18 + local_58)), *(int *)(local_54 + (local_1c + local_58)), local_24);
	*(int *)(local_54 + (local_20 + 0x98)) = local_5c;
jmp_123c1:
	local_54 = (local_14 << 0x2);
	local_58 = 0x4c;
	local_5c = *(int *)(local_54 + (local_18 + local_58));
	*(int *)(local_54 + (local_20 + 0x20)) = (local_5c + (local_24 * (*(int *)(local_54 + (local_1c + local_58)) - local_5c)));
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x3) goto jmp_12361;
jmp_123f9:
}

/*
=================
CG_TouchItem

Address: 0x123fb
Stack Size: 0x2c
Calls: BG_AddPredictableEventToPlayerstate, BG_CanItemBeGrabbed, BG_PlayerTouchesItem
Called by: CG_TouchTriggerPrediction
=================
*/
void CG_TouchItem(int arg_0) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	if (bss_8cb8 != 0x0) goto jmp_12406;
	goto jmp_124c1;
jmp_12406:
	local_18 = BG_PlayerTouchesItem(0xdc780, arg_0, bss_dc760);
	if (local_18 != 0x0) goto jmp_12418;
	goto jmp_124c1;
jmp_12418:
	if (*(int *)(arg_0 + 0x1bc) != bss_dc760) goto jmp_12422;
	goto jmp_124c1;
jmp_12422:
	local_1c = BG_CanItemBeGrabbed(bss_e66f8, arg_0, 0xdc780);
	if (local_1c != 0x0) goto jmp_12434;
	goto jmp_124c1;
jmp_12434:
	local_14 = ((0x34 * *(int *)(arg_0 + 0xa0)) + 0x58c);
	if (bss_e66f8 != 0x4) goto jmp_12470;
	if (bss_dc884 != 0x1) goto jmp_12457;
	if (*(int *)(local_14 + 0x24) != 0x8) goto jmp_12457;
	if (*(int *)(local_14 + 0x28) != 0x7) goto jmp_12457;
	goto jmp_124c1;
jmp_12457:
	if (bss_dc884 != 0x2) goto jmp_12470;
	local_28 = 0x8;
	if (*(int *)(local_14 + 0x24) != local_28) goto jmp_12470;
	if (*(int *)(local_14 + 0x28) != local_28) goto jmp_12470;
	goto jmp_124c1;
jmp_12470:
	BG_AddPredictableEventToPlayerstate(0x13, *(int *)(arg_0 + 0xa0), 0xdc780);
	local_20 = (arg_0 + 0x8);
	*(int *)local_20 = (*(int *)local_20 | 0x80);
	*(int *)(arg_0 + 0x1bc) = bss_dc760;
	if (*(int *)(local_14 + 0x24) != 0x1) goto jmp_124c1;
	local_24 = 0xdc840;
	*(int *)local_24 = (*(int *)local_24 | (0x1 << *(int *)(local_14 + 0x28)));
	if (*(int *)((*(int *)(local_14 + 0x28) << 0x2) + 0xdc8f8) != 0x0) goto jmp_124c1;
	*(int *)((*(int *)(local_14 + 0x28) << 0x2) + 0xdc8f8) = 0x1;
jmp_124c1:
}

/*
=================
CG_TouchTriggerPrediction

Address: 0x124c3
Stack Size: 0x7c
Calls: trap_CM_BoxTrace, trap_CM_InlineModel, BG_TouchJumpPad, CG_TouchItem
Called by: CG_PredictPlayerState
=================
*/
void CG_TouchTriggerPrediction(void) {
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[52];
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;

	if (bss_dc838 > 0x0) goto jmp_124ca;
	goto jmp_12574;
jmp_124ca:
	if (bss_dc784 != 0x2) goto jmp_124d3;
	local_70 = 0x1;
	goto jmp_124d6;
jmp_124d3:
	local_70 = 0x0;
jmp_124d6:
	local_6c = local_70;
	local_74 = 0x0;
	if (bss_dc784 == local_74) goto jmp_124e9;
	if (local_6c != local_74) goto jmp_124e9;
	goto jmp_12574;
jmp_124e9:
	local_28 = 0x0;
	goto jmp_12564;
jmp_124ee:
	local_30 = *(int *)((local_28 << 0x2) + 0x15cad4);
	local_24 = local_30;
	if (*(int *)(local_24 + 0x4) != 0x2) goto jmp_1250e;
	if (local_6c != 0x0) goto jmp_1250e;
	CG_TouchItem(local_30);
	goto jmp_1255e;
jmp_1250e:
	if (*(int *)(local_24 + 0xb0) == 0xffffff) goto jmp_12517;
	goto jmp_1255e;
jmp_12517:
	local_78 = trap_CM_InlineModel(*(int *)(local_24 + 0xa0));
	local_2c = local_78;
	if (local_2c != 0x0) goto jmp_1252b;
	goto jmp_1255e;
jmp_1252b:
	trap_CM_BoxTrace(&local_34, 0xdc794, 0xdc794, 0x15d390, 0x15d39c, local_2c, 0xffffffff);
	if (*(int *)local_38 != 0x0) goto jmp_12543;
	goto jmp_1255e;
jmp_12543:
	if (*(int *)(local_24 + 0x4) != 0x9) goto jmp_1254f;
	bss_dc77c = 0x1;
	goto jmp_1255e;
jmp_1254f:
	if (*(int *)(local_24 + 0x4) != 0x8) goto jmp_1255e;
	BG_TouchJumpPad(0xdc780, local_24);
jmp_1255e:
	local_28 = (local_28 + 0x1);
jmp_12564:
	if (local_28 < cg_numTriggerEntities) goto jmp_124ee;
	if (bss_dc94c == bss_dc948) goto jmp_12574;
	bss_dc94c = 0x0;
	bss_dc940 = 0x0;
jmp_12574:
}

/*
=================
CG_PredictPlayerState

Address: 0x12576
Stack Size: 0x280
Calls: trap_Cvar_Update, trap_Cvar_Set, trap_GetUserCmd, trap_GetCurrentCmdNumber, CG_TransitionPlayerState, CG_TouchTriggerPrediction, Pmove, VectorLength, VectorCompare, CG_AdjustPositionForMover, PM_UpdateViewAngles, CG_Printf, CG_InterpolatePlayerState
Called by: CG_DrawActiveFrame
=================
*/
void CG_PredictPlayerState(void) {
	int		local_24;
	char	local_28[20];
	int		local_3c;
	int		local_40;
	char	local_44[80];
	char	local_94[360];
	int		local_1fc;
	int		local_200;
	char	local_204[24];
	char	local_21c[24];
	int		local_234;
	int		local_238;
	int		local_23c;
	int		local_240;
	int		local_244;
	int		local_248;
	int		local_24c;
	int		local_250;
	int		local_254;
	int		local_258;
	int		local_25c;
	int		local_260;
	int		local_264;
	char	local_268[12];
	int		local_274;
	int		local_278;
	int		local_27c;

	bss_dc77c = 0x0;
	if (bss_dcc20 != 0x0) goto jmp_12587;
	bss_dcc20 = 0x1;
	block_copy((bss_c2330 + 0x2c), &bss_dc780, 0x1d4);
jmp_12587:
	local_234 = 0x0;
	if (bss_c2314 != local_234) goto jmp_12599;
	if ((*(int *)(bss_c2330 + 0x38) & 0x1000) == local_234) goto jmp_125a0;
jmp_12599:
	CG_InterpolatePlayerState(0x0);
	goto jmp_12826;
jmp_125a0:
	local_238 = 0x0;
	if (bss_afc8 != local_238) goto jmp_125ad;
	if (bss_9538 == local_238) goto jmp_125b4;
jmp_125ad:
	CG_InterpolatePlayerState(0x1);
	goto jmp_12826;
jmp_125b4:
	cg_pmove = 0xdc780;
	bss_15d3bc = 0x12201;
	bss_15d3c0 = 0x12245;
	if (*(int *)(cg_pmove + 0x4) != 0x3) goto jmp_125c9;
	bss_15d2f8 = 0x10001;
	goto jmp_125cc;
jmp_125c9:
	bss_15d2f8 = 0x2010001;
jmp_125cc:
	if (*(int *)(bss_c2330 + 0x130) != 0x3) goto jmp_125de;
	local_23c = 0x15d2f8;
	*(int *)local_23c = (*(int *)local_23c & 0xfdffffff);
jmp_125de:
	if ((bss_e66fc & 0x20) <= 0x0) goto jmp_125e9;
	local_23c = 0x1;
	goto jmp_125ec;
jmp_125e9:
	local_23c = 0x0;
jmp_125ec:
	bss_15d300 = local_23c;
	block_copy(&bss_dc780, local_28, 0x1d4);
	local_240 = trap_GetCurrentCmdNumber();
	local_1fc = local_240;
	local_24 = ((local_1fc - 0x40) + 0x1);
	trap_GetUserCmd(local_24, local_21c);
	local_244 = *(int *)local_21c;
	if (local_244 <= *(int *)(bss_c2330 + 0x2c)) goto jmp_12627;
	if (local_244 >= bss_dc760) goto jmp_12627;
	if (bss_ada8 == 0x0) goto jmp_12826;
	CG_Printf(0x686f);
	goto jmp_12826;
jmp_12627:
	trap_GetUserCmd(local_1fc, local_204);
	if (bss_c2334 == 0x0) goto jmp_1264f;
	local_248 = 0x0;
	if (bss_dc758 != local_248) goto jmp_1264f;
	if (bss_dc754 != local_248) goto jmp_1264f;
	block_copy((bss_c2334 + 0x2c), &bss_dc780, 0x1d4);
	bss_dc768 = *(int *)(bss_c2334 + 0x8);
	goto jmp_1265c;
jmp_1264f:
	block_copy((bss_c2330 + 0x2c), &bss_dc780, 0x1d4);
	bss_dc768 = *(int *)(bss_c2330 + 0x8);
jmp_1265c:
	if (bss_8548 >= 0x8) goto jmp_1266e;
	trap_Cvar_Set(0x6864, 0x6862);
	trap_Cvar_Update(0x853c);
	goto jmp_1267e;
jmp_1266e:
	if (bss_8548 <= 0x21) goto jmp_1267e;
	trap_Cvar_Set(0x6864, 0x685f);
	trap_Cvar_Update(0x853c);
jmp_1267e:
	bss_15d3b4 = bss_8658;
	bss_15d3b8 = bss_8548;
	local_200 = 0x0;
	local_24 = ((local_1fc - 0x40) + 0x1);
	goto jmp_127c6;
jmp_12693:
	trap_GetUserCmd(local_24, 0x15d2e0);
	if (bss_15d3b4 == 0x0) goto jmp_126a7;
	PM_UpdateViewAngles(cg_pmove, 0x15d2e0);
jmp_126a7:
	if (bss_15d2e0 > bss_dc780) goto jmp_126ae;
	goto jmp_127c0;
jmp_126ae:
	if (bss_15d2e0 <= *(int *)local_204) goto jmp_126b5;
	goto jmp_127c0;
jmp_126b5:
	if (bss_dc780 != *(int *)local_28) goto jmp_1279f;
	if (bss_dc754 == 0x0) goto jmp_126db;
	local_25c = 0x0;
	bss_dcc30 = local_25c;
	bss_dcc2c = local_25c;
	bss_dcc28 = local_25c;
	if (bss_ada8 == 0x0) goto jmp_126d6;
	CG_Printf(0x684b);
jmp_126d6:
	bss_dc754 = 0x0;
	goto jmp_1279f;
jmp_126db:
	CG_AdjustPositionForMover(0xdc794, bss_dc7c4, bss_dc768, bss_dc764, &local_25c, 0xdc818, local_268);
	if (bss_ada8 == 0x0) goto jmp_12704;
	local_274 = VectorCompare(&local_3c, &local_25c);
	if (local_274 != 0x0) goto jmp_12704;
	CG_Printf(0x6839);
jmp_12704:
	local_24c = (local_3c - local_25c);
	local_250 = (local_40 - local_260);
	local_254 = (*(int *)local_44 - local_264);
	local_274 = VectorLength(&local_24c);
	local_258 = local_274;
	if (local_258 <= 0x3dcccccd) goto jmp_1279f;
	if (bss_ada8 == 0x0) goto jmp_12733;
	CG_Printf(0x6824, local_258);
jmp_12733:
	if (bss_b0d8 == 0x0) goto jmp_12777;
	local_27c = (bss_dc760 - bss_dcc24);
	local_278 = ((bss_b0d4 - (float)local_27c) / bss_b0d4);
	if (local_278 >= 0x0) goto jmp_12750;
	local_278 = 0x0;
jmp_12750:
	if (local_278 <= 0x0) goto jmp_12760;
	if (bss_ada8 == 0x0) goto jmp_12760;
	CG_Printf(0x6807, local_278);
jmp_12760:
	bss_dcc28 = (bss_dcc28 * local_278);
	bss_dcc2c = (bss_dcc2c * local_278);
	bss_dcc30 = (bss_dcc30 * local_278);
	goto jmp_12786;
jmp_12777:
	local_278 = 0x0;
	bss_dcc30 = local_278;
	bss_dcc2c = local_278;
	bss_dcc28 = local_278;
jmp_12786:
	bss_dcc28 = (local_24c + bss_dcc28);
	bss_dcc2c = (local_250 + bss_dcc2c);
	bss_dcc30 = (local_254 + bss_dcc30);
	bss_dcc24 = bss_dc764;
jmp_1279f:
	bss_15d304 = 0x0;
	if (bss_15d3b4 == 0x0) goto jmp_127b5;
	bss_15d2e0 = ((((bss_15d2e0 + bss_8548) - 0x1) / bss_8548) * bss_8548);
jmp_127b5:
	Pmove(0x15d2dc);
	local_200 = 0x1;
	CG_TouchTriggerPrediction();
jmp_127c0:
	local_24 = (local_24 + 0x1);
jmp_127c6:
	if (local_24 <= local_1fc) goto jmp_12693;
	if (bss_ada8 <= 0x1) goto jmp_127da;
	CG_Printf(0x67fc, bss_15d2e0, bss_dc760);
jmp_127da:
	if (local_200 != 0x0) goto jmp_127e9;
	if (bss_ada8 == 0x0) goto jmp_12826;
	CG_Printf(0x67f1);
	goto jmp_12826;
jmp_127e9:
	CG_AdjustPositionForMover(0xdc794, bss_dc7c4, bss_dc768, bss_dc760, 0xdc794, 0xdc818, 0xdc818);
	if (bss_ada8 == 0x0) goto jmp_1280d;
	if (bss_dc7ec <= (*(int *)local_94 + 0x2)) goto jmp_1280d;
	CG_Printf(0x67d9);
jmp_1280d:
	CG_TransitionPlayerState(0xdc780, local_28);
	if (bss_ada8 == 0x0) goto jmp_12826;
	if (bss_dcc34 <= bss_dc7ec) goto jmp_12826;
	CG_Printf(0x67c2);
	bss_dcc34 = bss_dc7ec;
jmp_12826:
}

/*
=================
CG_DrawClientScore

Address: 0x12828
Stack Size: 0x460
Calls: CG_DrawBigStringColor, CG_DrawBigString, CG_FillRect, CG_DrawHead, CG_DrawSmallStringColor, Com_sprintf, CG_DrawPic, CG_DrawFlagModel, Com_Printf
Called by: CG_DrawOldScoreboard, CG_TeamScoreboard
=================
*/
void CG_DrawClientScore(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	char	local_34[1024];
	int		local_434;
	int		local_438;
	int		local_43c;
	int		local_440;
	int		local_444;
	int		local_448;
	int		local_44c;
	int		local_450;
	int		local_454;
	int		local_458;
	int		local_45c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_43c = *(int *)arg_1;
	if (local_43c < 0x0) goto jmp_1283f;
	if (local_43c < bss_e6710) goto jmp_1284a;
jmp_1283f:
	Com_Printf(0x695c, *(int *)arg_1);
	goto jmp_12b61;
jmp_1284a:
	local_30 = ((0x6b4 * *(int *)arg_1) + 0xe8c24);
	local_434 = 0x50;
	local_438 = 0x70;
	if ((*(int *)(local_30 + 0x94) & 0x200) == 0x0) goto jmp_128a6;
	if (arg_4 == 0x0) goto jmp_12887;
#define next_call_arg_0 "(float)local_434"
#define next_call_arg_1 "(float)(arg_0 - 0x8)"
	local_440 = 0x42000000;
#define next_call_arg_2 "local_440"
#define next_call_arg_3 "local_440"
	local_444 = 0x0;
#define next_call_arg_4 "local_444"
#define next_call_arg_5 "local_444"
	CG_DrawFlagModel();
	goto jmp_12a08;
jmp_12887:
#define next_call_arg_0 "(float)local_434"
#define next_call_arg_1 "(float)arg_0"
	local_440 = 0x41800000;
#define next_call_arg_2 "local_440"
#define next_call_arg_3 "local_440"
	local_444 = 0x0;
#define next_call_arg_4 "local_444"
#define next_call_arg_5 "local_444"
	CG_DrawFlagModel();
	goto jmp_12a08;
jmp_128a6:
	if ((*(int *)(local_30 + 0x94) & 0x80) == 0x0) goto jmp_128e9;
	if (arg_4 == 0x0) goto jmp_128cf;
#define next_call_arg_0 "(float)local_434"
#define next_call_arg_1 "(float)(arg_0 - 0x8)"
	local_440 = 0x42000000;
#define next_call_arg_2 "local_440"
#define next_call_arg_3 "local_440"
#define next_call_arg_4 "0x1"
#define next_call_arg_5 "0x0"
	CG_DrawFlagModel();
	goto jmp_12a08;
jmp_128cf:
#define next_call_arg_0 "(float)local_434"
#define next_call_arg_1 "(float)arg_0"
	local_440 = 0x41800000;
#define next_call_arg_2 "local_440"
#define next_call_arg_3 "local_440"
#define next_call_arg_4 "0x1"
#define next_call_arg_5 "0x0"
	CG_DrawFlagModel();
	goto jmp_12a08;
jmp_128e9:
	if ((*(int *)(local_30 + 0x94) & 0x100) == 0x0) goto jmp_1292c;
	if (arg_4 == 0x0) goto jmp_12912;
#define next_call_arg_0 "(float)local_434"
#define next_call_arg_1 "(float)(arg_0 - 0x8)"
	local_440 = 0x42000000;
#define next_call_arg_2 "local_440"
#define next_call_arg_3 "local_440"
#define next_call_arg_4 "0x2"
#define next_call_arg_5 "0x0"
	CG_DrawFlagModel();
	goto jmp_12a08;
jmp_12912:
#define next_call_arg_0 "(float)local_434"
#define next_call_arg_1 "(float)arg_0"
	local_440 = 0x41800000;
#define next_call_arg_2 "local_440"
#define next_call_arg_3 "local_440"
#define next_call_arg_4 "0x2"
#define next_call_arg_5 "0x0"
	CG_DrawFlagModel();
	goto jmp_12a08;
jmp_1292c:
	local_440 = *(int *)(local_30 + 0x48);
	if (local_440 <= 0x0) goto jmp_12987;
	if (local_440 > 0x5) goto jmp_12987;
	if (bss_c3f8 == 0x0) goto jmp_129c1;
	if (arg_4 == 0x0) goto jmp_12966;
#define next_call_arg_0 "(float)local_434"
#define next_call_arg_1 "(float)(arg_0 - 0x8)"
	local_444 = 0x42000000;
#define next_call_arg_2 "local_444"
#define next_call_arg_3 "local_444"
#define next_call_arg_4 "*(int *)((*(int *)(local_30 + 0x48) << 0x2) + 0x104274)"
	CG_DrawPic();
	goto jmp_129c1;
jmp_12966:
#define next_call_arg_0 "(float)local_434"
#define next_call_arg_1 "(float)arg_0"
	local_444 = 0x41800000;
#define next_call_arg_2 "local_444"
#define next_call_arg_3 "local_444"
#define next_call_arg_4 "*(int *)((*(int *)(local_30 + 0x48) << 0x2) + 0x104274)"
	CG_DrawPic();
	goto jmp_129c1;
jmp_12987:
	if (*(int *)(local_30 + 0x80) >= 0x64) goto jmp_129c1;
	Com_sprintf(local_34, 0x400, 0x6959, *(int *)(local_30 + 0x80));
	if (bss_e66f8 != 0x1) goto jmp_129b3;
	CG_DrawSmallStringColor(local_434, (arg_0 - 0x8), local_34, arg_2);
	goto jmp_129c1;
jmp_129b3:
	CG_DrawSmallStringColor(local_434, arg_0, local_34, arg_2);
jmp_129c1:
	if (bss_e66f8 != 0x1) goto jmp_12a08;
	Com_sprintf(local_34, 0x400, 0x6953, *(int *)(local_30 + 0x84), *(int *)(local_30 + 0x88));
	if (*(int *)(local_30 + 0x80) >= 0x64) goto jmp_129fa;
	if (*(int *)(local_30 + 0x48) != 0x0) goto jmp_129fa;
	CG_DrawSmallStringColor(local_434, (arg_0 + 0x8), local_34, arg_2);
	goto jmp_12a08;
jmp_129fa:
	CG_DrawSmallStringColor(local_434, arg_0, local_34, arg_2);
jmp_12a08:
	local_440 = 0x0;
	local_2c = local_440;
	local_28 = local_440;
	local_24 = local_440;
	local_28 = 0x43340000;
	if (arg_4 == 0x0) goto jmp_12a3c;
#define next_call_arg_0 "(float)local_438"
#define next_call_arg_1 "(float)(arg_0 - 0x10)"
	local_444 = 0x42400000;
#define next_call_arg_2 "local_444"
#define next_call_arg_3 "local_444"
#define next_call_arg_4 "*(int *)arg_1"
#define next_call_arg_5 "&local_24"
	CG_DrawHead();
	goto jmp_12a56;
jmp_12a3c:
#define next_call_arg_0 "(float)local_438"
#define next_call_arg_1 "(float)arg_0"
	local_444 = 0x41800000;
#define next_call_arg_2 "local_444"
#define next_call_arg_3 "local_444"
#define next_call_arg_4 "*(int *)arg_1"
#define next_call_arg_5 "&local_24"
	CG_DrawHead();
jmp_12a56:
	if (*(int *)(arg_1 + 0x8) != 0xffffffff) goto jmp_12a6d;
	Com_sprintf(local_34, 0x400, 0x6941, (local_30 + 0x4));
	goto jmp_12ab5;
jmp_12a6d:
	if (*(int *)(local_30 + 0x44) != 0x3) goto jmp_12a90;
	Com_sprintf(local_34, 0x400, 0x692f, *(int *)(arg_1 + 0x8), *(int *)(arg_1 + 0xc), (local_30 + 0x4));
	goto jmp_12ab5;
jmp_12a90:
#define next_call_arg_0 "local_34"
#define next_call_arg_1 "0x400"
#define next_call_arg_2 "0x6920"
	local_448 = 0x4;
#define next_call_arg_3 "*(int *)(arg_1 + local_448)"
#define next_call_arg_4 "*(int *)(arg_1 + 0x8)"
#define next_call_arg_5 "*(int *)(arg_1 + 0xc)"
#define next_call_arg_6 "(local_30 + local_448)"
	Com_sprintf();
jmp_12ab5:
	if (*(int *)arg_1 != *(int *)(bss_c2330 + 0xb8)) goto jmp_12b39;
	localClient = 0x1;
	local_458 = 0x3;
	if (*(int *)(bss_c2330 + 0x130) == local_458) goto jmp_12ad1;
	if (bss_e66f8 < local_458) goto jmp_12ad6;
jmp_12ad1:
	local_454 = 0xffffffff;
	goto jmp_12adf;
jmp_12ad6:
	local_454 = (*(int *)(bss_c2330 + 0x12c) & 0xffffbfff);
jmp_12adf:
	if (local_454 != 0x0) goto jmp_12af3;
	local_45c = 0x0;
	local_444 = local_45c;
	local_448 = local_45c;
	local_44c = 0x3f333333;
	goto jmp_12b24;
jmp_12af3:
	if (local_454 != 0x1) goto jmp_12b02;
	local_444 = 0x3f333333;
	local_448 = 0x0;
	local_44c = 0x0;
	goto jmp_12b24;
jmp_12b02:
	if (local_454 != 0x2) goto jmp_12b16;
	local_45c = 0x3f333333;
	local_444 = local_45c;
	local_448 = local_45c;
	local_44c = 0x0;
	goto jmp_12b24;
jmp_12b16:
	local_45c = 0x3f333333;
	local_444 = local_45c;
	local_448 = local_45c;
	local_44c = 0x3f333333;
jmp_12b24:
	local_450 = (0x3f333333 * arg_3);
	CG_FillRect(0x43300000, (float)arg_0, 0x44000000, 0x41880000, &local_444);
jmp_12b39:
	CG_DrawBigString(0xa0, arg_0, local_34, arg_3);
	if ((*(int *)(bss_c2330 + 0xf8) & (0x1 << *(int *)arg_1)) == 0x0) goto jmp_12b61;
	CG_DrawBigStringColor(local_434, arg_0, 0x691a, arg_2);
jmp_12b61:
}

/*
=================
CG_TeamScoreboard

Address: 0x12b63
Stack Size: 0x4c
Calls: CG_DrawClientScore
Called by: CG_DrawOldScoreboard
=================
*/
int CG_TeamScoreboard(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	char	local_44[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	arg_4 = arg_4;
	local_3c = 0x3f800000;
	local_34 = local_3c;
	local_30 = local_3c;
	local_2c = local_3c;
	local_38 = arg_2;
	local_40 = 0x0;
	local_1c = local_40;
	local_20 = local_40;
	goto jmp_12be2;
jmp_12b98:
	local_24 = ((0x3c * local_20) + 0xdd290);
	local_28 = ((0x6b4 * *(int *)local_24) + 0xe8c24);
	if (arg_1 == *(int *)(local_28 + 0x44)) goto jmp_12bb3;
	goto jmp_12bdc;
jmp_12bb3:
#define next_call_arg_0 "(arg_0 + (arg_4 * local_1c))"
#define next_call_arg_1 "local_24"
#define next_call_arg_2 "&local_2c"
#define next_call_arg_3 "arg_2"
	if (arg_4 != 0x28) goto jmp_12bcd;
	*(int *)local_44 = 0x1;
	goto jmp_12bd0;
jmp_12bcd:
	*(int *)local_44 = 0x0;
jmp_12bd0:
#define next_call_arg_4 "*(int *)local_44"
	CG_DrawClientScore();
	local_1c = (local_1c + 0x1);
jmp_12bdc:
	local_20 = (local_20 + 0x1);
jmp_12be2:
	if (local_20 >= bss_dd280) goto jmp_12bec;
	if (local_1c < arg_3) goto jmp_12b98;
jmp_12bec:
	return local_1c;
}

/*
=================
CG_DrawOldScoreboard

Address: 0x12bf1
Stack Size: 0x6c
Calls: CG_LoadDeferredPlayers, CG_DrawClientScore, CG_DrawTeamBackground, CG_TeamScoreboard, CG_DrawPic, CG_PlaceString, CG_DrawBigString, CG_DrawStrlen, va, CG_FadeColor
Called by: CG_DrawScoreboard
=================
*/
int CG_DrawOldScoreboard(void) {
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	char	local_64[8];

	if (bss_8ed8 == 0x0) goto jmp_12bfd;
	bss_c231c = 0x0;
	return 0x0;
jmp_12bfd:
	if (bss_e66f8 != 0x2) goto jmp_12c0c;
	if (bss_dc784 != 0x5) goto jmp_12c0c;
	bss_c231c = 0x0;
	return 0x0;
jmp_12c0c:
	local_54 = 0x0;
	if (bss_deae0 == local_54) goto jmp_12c1d;
	if (bss_de190 != local_54) goto jmp_12c1d;
	return 0x0;
jmp_12c1d:
	if (bss_de190 != 0x0) goto jmp_12c29;
	if (bss_dc784 == 0x3) goto jmp_12c29;
	if (bss_dc784 != 0x5) goto jmp_12c31;
jmp_12c29:
	local_2c = 0x3f800000;
	local_34 = 0x1dfc;
	goto jmp_12c51;
jmp_12c31:
	local_58 = CG_FadeColor(bss_de198, 0xc8);
	local_34 = local_58;
	if (local_34 != 0x0) goto jmp_12c4c;
	bss_c231c = 0x0;
	*(char *)bss_de19c = 0x0;
	return 0x0;
jmp_12c4c:
	local_2c = *(int *)local_34;
jmp_12c51:
	if ((char)*(char *)bss_de19c == 0x0) goto jmp_12c89;
	local_58 = va(0x690c, 0xde19c);
	local_3c = local_58;
	local_5c = CG_DrawStrlen(local_3c);
	local_48 = (local_5c << 0x4);
	local_44 = ((0x280 - local_48) / 0x2);
	local_24 = 0x28;
	CG_DrawBigString(local_44, local_24, local_3c, local_2c);
jmp_12c89:
	if (bss_e66f8 >= 0x3) goto jmp_12cdc;
	if (*(int *)(bss_c2330 + 0x130) == 0x3) goto jmp_12d3e;
	local_58 = CG_PlaceString((*(int *)(bss_c2330 + 0x12c) + 0x1));
	local_5c = va(0x68fb, local_58, *(int *)(bss_c2330 + 0x124));
	local_3c = local_5c;
	local_60 = CG_DrawStrlen(local_3c);
	local_48 = (local_60 << 0x4);
	local_44 = ((0x280 - local_48) / 0x2);
	local_24 = 0x3c;
	CG_DrawBigString(local_44, local_24, local_3c, local_2c);
	goto jmp_12d3e;
jmp_12cdc:
	if (bss_dd288 != bss_dd28c) goto jmp_12cf0;
	local_58 = va(0x68e6, bss_dd288);
	local_3c = local_58;
	goto jmp_12d17;
jmp_12cf0:
	if (bss_dd288 < bss_dd28c) goto jmp_12d07;
	local_58 = va(0x68d3, bss_dd288, bss_dd28c);
	local_3c = local_58;
	goto jmp_12d17;
jmp_12d07:
	local_58 = va(0x68bf, bss_dd28c, bss_dd288);
	local_3c = local_58;
jmp_12d17:
	local_58 = CG_DrawStrlen(local_3c);
	local_48 = (local_58 << 0x4);
	local_44 = ((0x280 - local_48) / 0x2);
	local_24 = 0x3c;
	CG_DrawBigString(local_44, local_24, local_3c, local_2c);
jmp_12d3e:
	local_24 = 0x56;
	CG_DrawPic(0x43300000, (float)local_24, 0x42800000, 0x42000000, bss_104300);
	CG_DrawPic(0x43840000, (float)local_24, 0x42800000, 0x42000000, bss_1042fc);
	CG_DrawPic(0x43ac0000, (float)local_24, 0x42800000, 0x42000000, bss_104304);
	CG_DrawPic(0x43d00000, (float)local_24, 0x42800000, 0x42000000, bss_1042f8);
	local_24 = 0x76;
	if (bss_dd280 <= 0x7) goto jmp_12d9b;
	local_38 = 0x11;
	local_58 = 0x10;
	local_28 = local_58;
	local_4c = 0x8;
	local_50 = local_58;
	goto jmp_12dac;
jmp_12d9b:
	local_38 = 0x7;
	local_28 = 0x28;
	local_58 = 0x10;
	local_4c = local_58;
	local_50 = local_58;
jmp_12dac:
	localClient = 0x0;
	if (bss_e66f8 < 0x3) goto jmp_12ef3;
	local_24 = (local_24 + (local_28 / 0x2));
	if (bss_dd288 < bss_dd28c) goto jmp_12e49;
	local_58 = CG_TeamScoreboard(local_24, 0x1, local_2c, local_38, local_28);
	local_30 = local_58;
	CG_DrawTeamBackground(0x0, (local_24 - local_4c), 0x280, ((local_30 * local_28) + local_50), 0x3ea8f5c3, 0x1);
	local_24 = (local_24 + ((local_30 * local_28) + 0x10));
	local_38 = (local_38 - local_30);
	*(int *)local_64 = CG_TeamScoreboard(local_24, 0x2, local_2c, local_38, local_28);
	local_40 = *(int *)local_64;
	CG_DrawTeamBackground(0x0, (local_24 - local_4c), 0x280, ((local_40 * local_28) + local_50), 0x3ea8f5c3, 0x2);
	local_24 = (local_24 + ((local_40 * local_28) + 0x10));
	local_38 = (local_38 - local_40);
	goto jmp_12ecf;
jmp_12e49:
	local_58 = CG_TeamScoreboard(local_24, 0x2, local_2c, local_38, local_28);
	local_30 = local_58;
	CG_DrawTeamBackground(0x0, (local_24 - local_4c), 0x280, ((local_30 * local_28) + local_50), 0x3ea8f5c3, 0x2);
	local_24 = (local_24 + ((local_30 * local_28) + 0x10));
	local_38 = (local_38 - local_30);
	*(int *)local_64 = CG_TeamScoreboard(local_24, 0x1, local_2c, local_38, local_28);
	local_40 = *(int *)local_64;
	CG_DrawTeamBackground(0x0, (local_24 - local_4c), 0x280, ((local_40 * local_28) + local_50), 0x3ea8f5c3, 0x1);
	local_24 = (local_24 + ((local_40 * local_28) + 0x10));
	local_38 = (local_38 - local_40);
jmp_12ecf:
	local_58 = CG_TeamScoreboard(local_24, 0x3, local_2c, local_38, local_28);
	local_30 = local_58;
	local_24 = (local_24 + ((local_30 * local_28) + 0x10));
	goto jmp_12f3a;
jmp_12ef3:
	local_58 = CG_TeamScoreboard(local_24, 0x0, local_2c, local_38, local_28);
	local_30 = local_58;
	local_24 = (local_24 + ((local_30 * local_28) + 0x10));
	*(int *)local_64 = CG_TeamScoreboard(local_24, 0x3, local_2c, (local_38 - local_30), local_28);
	local_40 = *(int *)local_64;
	local_24 = (local_24 + ((local_40 * local_28) + 0x10));
jmp_12f3a:
	if (localClient != 0x0) goto jmp_12f7f;
	local_20 = 0x0;
	goto jmp_12f7a;
jmp_12f43:
	if (*(int *)((0x3c * local_20) + 0xdd290) != *(int *)(bss_c2330 + 0xb8)) goto jmp_12f74;
#define next_call_arg_0 "local_24"
#define next_call_arg_1 "((0x3c * local_20) + 0xdd290)"
#define next_call_arg_2 "local_34"
#define next_call_arg_3 "local_2c"
	if (local_28 != 0x28) goto jmp_12f69;
	local_58 = 0x1;
	goto jmp_12f6c;
jmp_12f69:
	local_58 = 0x0;
jmp_12f6c:
#define next_call_arg_4 "local_58"
	CG_DrawClientScore();
	goto jmp_12f7f;
jmp_12f74:
	local_20 = (local_20 + 0x1);
jmp_12f7a:
	if (local_20 < bss_dd280) goto jmp_12f43;
jmp_12f7f:
	local_58 = 0xc231c;
	local_5c = (*(int *)local_58 + 0x1);
	*(int *)local_58 = local_5c;
	if (local_5c <= 0xa) goto jmp_12f95;
	CG_LoadDeferredPlayers();
jmp_12f95:
	return 0x1;
}

/*
=================
CG_CenterGiantLine

Address: 0x12f99
Stack Size: 0x4c
Calls: CG_DrawStringExt, CG_DrawStrlen
Called by: CG_DrawTourneyScoreboard
=================
*/
void CG_CenterGiantLine(int arg_0, int arg_1) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;

	local_40 = 0x3f800000;
	local_2c = local_40;
	local_30 = local_40;
	local_34 = 0x3f800000;
	local_38 = 0x3f800000;
	local_44 = CG_DrawStrlen(arg_1);
	local_3c = (0x3f000000 * (float)(0x280 - (local_44 << 0x5)));
#define next_call_arg_0 "(int)local_3c"
#define next_call_arg_1 "(int)arg_0"
#define next_call_arg_2 "arg_1"
#define next_call_arg_3 "&local_2c"
	local_48 = 0x1;
#define next_call_arg_4 "local_48"
#define next_call_arg_5 "local_48"
#define next_call_arg_6 "0x20"
#define next_call_arg_7 "0x30"
#define next_call_arg_8 "0x0"
	CG_DrawStringExt();
}

/*
=================
CG_DrawTourneyScoreboard

Address: 0x12fde
Stack Size: 0x9c
Calls: trap_SendClientCommand, strlen, CG_DrawStringExt, va, CG_CenterGiantLine, CG_ConfigString, CG_FillRect
Called by: CG_DrawActive
=================
*/
void CG_DrawTourneyScoreboard(void) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	char	local_64[8];
	char	local_6c[8];
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;

	if ((bss_dd27c + 0x7d0) >= bss_dc760) goto jmp_12fef;
	bss_dd27c = bss_dc760;
	trap_SendClientCommand(0x68b9);
jmp_12fef:
	local_58 = 0x0;
	local_3c = local_58;
	local_38 = local_58;
	local_34 = local_58;
	local_40 = 0x3f800000;
	local_5c = 0x0;
	CG_FillRect(local_5c, local_5c, 0x44200000, 0x43f00000, &local_34);
	local_60 = 0x3f800000;
	local_34 = local_60;
	local_38 = local_60;
	local_3c = 0x3f800000;
	local_40 = 0x3f800000;
	*(int *)local_64 = CG_ConfigString(0x4);
	local_30 = *(int *)local_64;
	if ((char)*(char *)local_30 != 0x0) goto jmp_13037;
	local_30 = 0x68ae;
jmp_13037:
	CG_CenterGiantLine(0x41000000, local_30);
	local_4c = (bss_dc760 / 0x3e8);
	*(int *)local_6c = 0x3c;
	local_50 = (local_4c / *(int *)local_6c);
	local_4c = (local_4c %% *(int *)local_6c);
	local_74 = 0xa;
	local_54 = (local_4c / local_74);
	local_4c = (local_4c %% local_74);
	local_78 = va(0x68a6, local_50, local_54, local_4c);
	local_30 = local_78;
	CG_CenterGiantLine(0x42800000, local_30);
	local_44 = 0xa0;
	if (bss_e66f8 < 0x3) goto jmp_13131;
#define next_call_arg_0 "0x8"
#define next_call_arg_1 "local_44"
#define next_call_arg_2 "0x689d"
#define next_call_arg_3 "&local_34"
	local_7c = 0x1;
#define next_call_arg_4 "local_7c"
#define next_call_arg_5 "local_7c"
#define next_call_arg_6 "0x20"
#define next_call_arg_7 "0x30"
#define next_call_arg_8 "0x0"
	CG_DrawStringExt();
	local_80 = va(0x6959, bss_dd288);
	local_30 = local_80;
	local_84 = strlen(local_30);
#define next_call_arg_0 "(0x278 - (local_84 << 0x5))"
#define next_call_arg_1 "local_44"
#define next_call_arg_2 "local_30"
#define next_call_arg_3 "&local_34"
	local_88 = 0x1;
#define next_call_arg_4 "local_88"
#define next_call_arg_5 "local_88"
#define next_call_arg_6 "0x20"
#define next_call_arg_7 "0x30"
#define next_call_arg_8 "0x0"
	CG_DrawStringExt();
	local_44 = (local_44 + 0x40);
#define next_call_arg_0 "0x8"
#define next_call_arg_1 "local_44"
#define next_call_arg_2 "0x6893"
#define next_call_arg_3 "&local_34"
	local_8c = 0x1;
#define next_call_arg_4 "local_8c"
#define next_call_arg_5 "local_8c"
#define next_call_arg_6 "0x20"
#define next_call_arg_7 "0x30"
#define next_call_arg_8 "0x0"
	CG_DrawStringExt();
	local_90 = va(0x6959, bss_dd28c);
	local_30 = local_90;
	local_94 = strlen(local_30);
#define next_call_arg_0 "(0x278 - (local_94 << 0x5))"
#define next_call_arg_1 "local_44"
#define next_call_arg_2 "local_30"
#define next_call_arg_3 "&local_34"
	local_98 = 0x1;
#define next_call_arg_4 "local_98"
#define next_call_arg_5 "local_98"
#define next_call_arg_6 "0x20"
#define next_call_arg_7 "0x30"
#define next_call_arg_8 "0x0"
	CG_DrawStringExt();
	goto jmp_131b2;
jmp_13131:
	local_48 = 0x0;
jmp_13134:
	local_2c = ((0x6b4 * local_48) + 0xe8c24);
	if (*(int *)local_2c != 0x0) goto jmp_13143;
	goto jmp_131a8;
jmp_13143:
	if (*(int *)(local_2c + 0x44) == 0x0) goto jmp_1314c;
	goto jmp_131a8;
jmp_1314c:
#define next_call_arg_0 "0x8"
#define next_call_arg_1 "local_44"
#define next_call_arg_2 "(local_2c + 0x4)"
#define next_call_arg_3 "&local_34"
	local_7c = 0x1;
#define next_call_arg_4 "local_7c"
#define next_call_arg_5 "local_7c"
#define next_call_arg_6 "0x20"
#define next_call_arg_7 "0x30"
#define next_call_arg_8 "0x0"
	CG_DrawStringExt();
	local_80 = va(0x6959, *(int *)(local_2c + 0x6c));
	local_30 = local_80;
	local_84 = strlen(local_30);
#define next_call_arg_0 "(0x278 - (local_84 << 0x5))"
#define next_call_arg_1 "local_44"
#define next_call_arg_2 "local_30"
#define next_call_arg_3 "&local_34"
	local_88 = 0x1;
#define next_call_arg_4 "local_88"
#define next_call_arg_5 "local_88"
#define next_call_arg_6 "0x20"
#define next_call_arg_7 "0x30"
#define next_call_arg_8 "0x0"
	CG_DrawStringExt();
	local_44 = (local_44 + 0x40);
jmp_131a8:
	local_48 = (local_48 + 0x1);
	if (local_48 < 0x40) goto jmp_13134;
jmp_131b2:
}

/*
=================
CG_ParseScores

Address: 0x131b4
Stack Size: 0xe8
Calls: memset, atoi, CG_Argv
Called by: CG_ServerCommand
=================
*/
void CG_ParseScores(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[8];
	int		local_38;
	char	local_3c[8];
	int		local_44;
	char	local_48[8];
	int		local_50;
	char	local_54[8];
	int		local_5c;
	char	local_60[8];
	int		local_68;
	int		local_6c;
	int		local_70;
	char	local_74[8];
	int		local_7c;
	char	local_80[8];
	int		local_88;
	char	local_8c[8];
	int		local_94;
	char	local_98[8];
	int		local_a0;
	int		local_a4;
	char	local_a8[8];
	int		local_b0;
	char	local_b4[8];
	int		local_bc;
	char	local_c0[8];
	int		local_c8;
	char	local_cc[8];
	int		local_d4;
	int		local_d8;
	int		local_dc;
	int		local_e0;
	int		local_e4;

	local_1c = CG_Argv(0x1);
	local_20 = atoi(local_1c);
	bss_dd280 = local_20;
	if (bss_dd280 <= 0x40) goto jmp_131cd;
	bss_dd280 = 0x40;
jmp_131cd:
	local_24 = CG_Argv(0x2);
	local_28 = atoi(local_24);
	bss_dd288 = local_28;
	local_2c = CG_Argv(0x3);
	*(int *)local_30 = atoi(local_2c);
	bss_dd28c = *(int *)local_30;
	memset(0xdd290, 0x0, 0xf00);
	local_14 = 0x0;
	goto jmp_133d1;
jmp_131fd:
	local_38 = CG_Argv(((0xe * local_14) + 0x4));
	*(int *)local_3c = atoi(local_38);
	*(int *)((0x3c * local_14) + 0xdd290) = *(int *)local_3c;
	local_44 = CG_Argv(((0xe * local_14) + 0x5));
	*(int *)local_48 = atoi(local_44);
	*(int *)((0x3c * local_14) + 0xdd294) = *(int *)local_48;
	local_50 = CG_Argv(((0xe * local_14) + 0x6));
	*(int *)local_54 = atoi(local_50);
	*(int *)((0x3c * local_14) + 0xdd298) = *(int *)local_54;
	local_5c = CG_Argv(((0xe * local_14) + 0x7));
	*(int *)local_60 = atoi(local_5c);
	*(int *)((0x3c * local_14) + 0xdd29c) = *(int *)local_60;
	local_68 = CG_Argv(((0xe * local_14) + 0x8));
	local_6c = atoi(local_68);
	*(int *)((0x3c * local_14) + 0xdd2a0) = local_6c;
	local_70 = CG_Argv(((0xe * local_14) + 0x9));
	*(int *)local_74 = atoi(local_70);
	local_18 = *(int *)local_74;
	local_7c = CG_Argv(((0xe * local_14) + 0xa));
	*(int *)local_80 = atoi(local_7c);
	*(int *)((0x3c * local_14) + 0xdd2a8) = *(int *)local_80;
	local_88 = CG_Argv(((0xe * local_14) + 0xb));
	*(int *)local_8c = atoi(local_88);
	*(int *)((0x3c * local_14) + 0xdd2ac) = *(int *)local_8c;
	local_94 = CG_Argv(((0xe * local_14) + 0xc));
	*(int *)local_98 = atoi(local_94);
	*(int *)((0x3c * local_14) + 0xdd2b0) = *(int *)local_98;
	local_a0 = CG_Argv(((0xe * local_14) + 0xd));
	local_a4 = atoi(local_a0);
	*(int *)((0x3c * local_14) + 0xdd2b4) = local_a4;
	*(int *)local_a8 = 0xe;
	local_b0 = CG_Argv(((*(int *)local_a8 * local_14) + *(int *)local_a8));
	*(int *)local_b4 = atoi(local_b0);
	*(int *)((0x3c * local_14) + 0xdd2b8) = *(int *)local_b4;
	local_bc = CG_Argv(((0xe * local_14) + 0xf));
	*(int *)local_c0 = atoi(local_bc);
	*(int *)((0x3c * local_14) + 0xdd2bc) = *(int *)local_c0;
	local_c8 = CG_Argv(((0xe * local_14) + 0x10));
	*(int *)local_cc = atoi(local_c8);
	*(int *)((0x3c * local_14) + 0xdd2c4) = *(int *)local_cc;
	local_d4 = CG_Argv(((0xe * local_14) + 0x11));
	local_d8 = atoi(local_d4);
	*(int *)((0x3c * local_14) + 0xdd2c0) = local_d8;
	local_dc = (0x3c * local_14);
	if (*(int *)(local_dc + 0xdd290) < 0x0) goto jmp_1338b;
	if (*(int *)(local_dc + 0xdd290) < 0x40) goto jmp_13393;
jmp_1338b:
	*(int *)((0x3c * local_14) + 0xdd290) = 0x0;
jmp_13393:
	local_e0 = (0x3c * local_14);
	*(int *)((0x6b4 * *(int *)(local_e0 + 0xdd290)) + 0xe8c90) = *(int *)(local_e0 + 0xdd294);
	*(int *)((0x6b4 * *(int *)((0x3c * local_14) + 0xdd290)) + 0xe8cb8) = local_18;
	local_e4 = (0x3c * local_14);
	*(int *)(local_e4 + 0xdd2c8) = *(int *)((0x6b4 * *(int *)(local_e4 + 0xdd290)) + 0xe8c68);
	local_14 = (local_14 + 0x1);
jmp_133d1:
	if (local_14 < bss_dd280) goto jmp_131fd;
}

/*
=================
CG_ParseTeamInfo

Address: 0x133d8
Stack Size: 0x5c
Calls: CG_Error, atoi, CG_Argv
Called by: CG_ServerCommand
=================
*/
void CG_ParseTeamInfo(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[8];
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;

	local_18 = CG_Argv(0x1);
	local_1c = atoi(local_18);
	numSortedTeamPlayers = local_1c;
	local_20 = numSortedTeamPlayers;
	if (local_20 < 0x0) goto jmp_133f6;
	if (local_20 <= 0x20) goto jmp_13400;
jmp_133f6:
	CG_Error(0x6ac0, numSortedTeamPlayers);
	goto jmp_134cd;
jmp_13400:
	local_14 = 0x0;
	goto jmp_134c8;
jmp_13405:
	local_24 = CG_Argv(((0x6 * local_14) + 0x2));
	*(int *)local_28 = atoi(local_24);
	local_10 = *(int *)local_28;
	if (local_10 < 0x0) goto jmp_13423;
	if (local_10 < 0x40) goto jmp_1342d;
jmp_13423:
	CG_Error(0x6a98, local_10);
	goto jmp_134cd;
jmp_1342d:
	*(int *)((local_14 << 0x2) + 0x104ea0) = local_10;
	local_30 = CG_Argv(((0x6 * local_14) + 0x3));
	local_34 = atoi(local_30);
	*(int *)((0x6b4 * local_10) + 0xe8c94) = local_34;
	local_38 = CG_Argv(((0x6 * local_14) + 0x4));
	local_3c = atoi(local_38);
	*(int *)((0x6b4 * local_10) + 0xe8c98) = local_3c;
	local_40 = CG_Argv(((0x6 * local_14) + 0x5));
	local_44 = atoi(local_40);
	*(int *)((0x6b4 * local_10) + 0xe8c9c) = local_44;
	local_48 = 0x6;
	local_4c = CG_Argv(((local_48 * local_14) + local_48));
	local_50 = atoi(local_4c);
	*(int *)((0x6b4 * local_10) + 0xe8ca0) = local_50;
	local_54 = CG_Argv(((0x6 * local_14) + 0x7));
	local_58 = atoi(local_54);
	*(int *)((0x6b4 * local_10) + 0xe8cb8) = local_58;
	local_14 = (local_14 + 0x1);
jmp_134c8:
	if (local_14 < numSortedTeamPlayers) goto jmp_13405;
jmp_134cd:
}

/*
=================
CG_ParseServerinfo

Address: 0x134cf
Stack Size: 0x6c
Calls: trap_Cvar_Set, Q_strncpyz, Com_sprintf, va, atoi, Info_ValueForKey, CG_ConfigString
Called by: CG_ConfigStringModified, CG_Init
=================
*/
void CG_ParseServerinfo(void) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;

	local_20 = CG_ConfigString(0x0);
	local_18 = local_20;
	local_24 = Info_ValueForKey(local_18, 0x6a8d);
	local_28 = atoi(local_24);
	bss_e66f8 = local_28;
	local_2c = va(0x6a8a, bss_e66f8);
	trap_Cvar_Set(0x6a8d, local_2c);
	local_30 = Info_ValueForKey(local_18, 0x6a82);
	local_34 = atoi(local_30);
	bss_e66fc = local_34;
	local_38 = Info_ValueForKey(local_18, 0x6a78);
	local_3c = atoi(local_38);
	bss_e6700 = local_3c;
	local_40 = Info_ValueForKey(local_18, 0x6a6e);
	local_44 = atoi(local_40);
	bss_e6704 = local_44;
	local_48 = Info_ValueForKey(local_18, 0x6a61);
	local_4c = atoi(local_48);
	bss_e6708 = local_4c;
	local_50 = Info_ValueForKey(local_18, 0x6a57);
	local_54 = atoi(local_50);
	bss_e670c = local_54;
	local_58 = Info_ValueForKey(local_18, 0x6a49);
	local_5c = atoi(local_58);
	bss_e6710 = local_5c;
	local_60 = Info_ValueForKey(local_18, 0x6a41);
	local_1c = local_60;
	Com_sprintf(0xe6714, 0x40, 0x6a35, local_1c);
	local_64 = Info_ValueForKey(local_18, 0x6a2b);
	Q_strncpyz(0xe6754, local_64, 0x40);
	trap_Cvar_Set(0x6a2b, 0xe6754);
	local_68 = Info_ValueForKey(local_18, 0x6a20);
	Q_strncpyz(0xe6794, local_68, 0x40);
	trap_Cvar_Set(0x6a20, 0xe6794);
}

/*
=================
CG_ParseWarmup

Address: 0x135c6
Stack Size: 0x28
Calls: trap_S_StartLocalSound, atoi, CG_ConfigString
Called by: CG_ConfigStringModified
=================
*/
void CG_ParseWarmup(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	local_18 = CG_ConfigString(0x5);
	local_14 = local_18;
	local_1c = atoi(local_14);
	local_10 = local_1c;
	bss_deae4 = 0xffffffff;
	local_20 = 0x0;
	if (local_10 != local_20) goto jmp_135ee;
	if (bss_deae0 == local_20) goto jmp_135ee;
	goto jmp_13603;
jmp_135ee:
	local_24 = 0x0;
	if (local_10 <= local_24) goto jmp_13603;
	if (bss_deae0 > local_24) goto jmp_13603;
	trap_S_StartLocalSound(bss_1044c4, 0x7);
jmp_13603:
	bss_deae0 = local_10;
}

/*
=================
CG_SetConfigValues

Address: 0x13609
Stack Size: 0x30
Calls: atoi, CG_ConfigString
Called by: CG_Init
=================
*/
void CG_SetConfigValues(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	local_10 = CG_ConfigString(0x6);
	local_14 = atoi(local_10);
	bss_e7408 = local_14;
	local_18 = CG_ConfigString(0x7);
	local_1c = atoi(local_18);
	bss_e740c = local_1c;
	local_20 = CG_ConfigString(0x15);
	local_24 = atoi(local_20);
	bss_e7404 = local_24;
	if (bss_e66f8 != 0x4) goto jmp_1365d;
	local_28 = CG_ConfigString(0x17);
	local_c = local_28;
	bss_e7410 = ((char)*(char *)local_c - 0x30);
	bss_e7414 = ((char)*(char *)(local_c + 0x1) - 0x30);
jmp_1365d:
	local_28 = CG_ConfigString(0x5);
	local_2c = atoi(local_28);
	bss_deae0 = local_2c;
}

/*
=================
CG_ShaderStateChanged

Address: 0x13670
Stack Size: 0xd0
Calls: trap_R_RemapShader, strncpy, strstr, CG_ConfigString
Called by: CG_ConfigStringModified, CG_Init
=================
*/
void CG_ShaderStateChanged(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[64];
	char	local_60[64];
	char	local_a0[16];
	int		local_b0;
	char	local_b4[12];
	char	local_c0[8];
	char	local_c8[8];

	local_b0 = CG_ConfigString(0x18);
	local_14 = local_b0;
	goto jmp_1371c;
jmp_1367d:
	*(int *)local_b4 = strstr(local_14, 0x6a1e);
	local_18 = *(int *)local_b4;
	if (local_18 == 0x0) goto jmp_13726;
	if ((char)*(char *)local_18 == 0x0) goto jmp_13726;
	strncpy(local_20, local_14, (local_18 - local_14));
	*(char *)((local_18 - local_14) + local_20) = 0x0;
	local_18 = (local_18 + 0x1);
	*(int *)local_c0 = strstr(local_18, 0x6a1c);
	local_1c = *(int *)local_c0;
	if (local_1c == 0x0) goto jmp_13726;
	if ((char)*(char *)local_1c == 0x0) goto jmp_13726;
	strncpy(local_60, local_18, (local_1c - local_18));
	*(char *)((local_1c - local_18) + local_60) = 0x0;
	local_1c = (local_1c + 0x1);
	*(int *)local_c8 = strstr(local_1c, 0x6a1a);
	local_14 = *(int *)local_c8;
	if (local_14 == 0x0) goto jmp_1371c;
	strncpy(local_a0, local_1c, (local_14 - local_1c));
	*(char *)((local_14 - local_1c) + local_a0) = 0x0;
	local_14 = (local_14 + 0x1);
	trap_R_RemapShader(local_20, local_60, local_a0);
jmp_1371c:
	if (local_14 == 0x0) goto jmp_13726;
	if ((char)*(char *)local_14 != 0x0) goto jmp_1367d;
jmp_13726:
}

/*
=================
CG_ConfigStringModified

Address: 0x13728
Stack Size: 0x44
Calls: trap_S_RegisterSound, trap_R_RegisterModel, trap_GetGameState, CG_ShaderStateChanged, CG_BuildSpectatorString, CG_NewClientInfo, Q_strncpyz, CG_ParseWarmup, CG_ParseServerinfo, CG_StartMusic, CG_ConfigString, atoi, CG_Argv
Called by: CG_ServerCommand
=================
*/
void CG_ConfigStringModified(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;

	local_1c = CG_Argv(0x1);
	local_20 = atoi(local_1c);
	local_14 = local_20;
	trap_GetGameState(0xdec18);
	local_24 = CG_ConfigString(local_14);
	local_18 = local_24;
	if (local_14 != 0x2) goto jmp_13753;
	CG_StartMusic();
	goto jmp_138e8;
jmp_13753:
	if (local_14 != 0x0) goto jmp_1375c;
	CG_ParseServerinfo();
	goto jmp_138e8;
jmp_1375c:
	if (local_14 != 0x5) goto jmp_13765;
	CG_ParseWarmup();
	goto jmp_138e8;
jmp_13765:
	if (local_14 != 0x6) goto jmp_13776;
	local_28 = atoi(local_18);
	bss_e7408 = local_28;
	goto jmp_138e8;
jmp_13776:
	if (local_14 != 0x7) goto jmp_13787;
	local_28 = atoi(local_18);
	bss_e740c = local_28;
	goto jmp_138e8;
jmp_13787:
	if (local_14 != 0x15) goto jmp_13798;
	local_28 = atoi(local_18);
	bss_e7404 = local_28;
	goto jmp_138e8;
jmp_13798:
	if (local_14 != 0x8) goto jmp_137ac;
	local_28 = atoi(local_18);
	bss_e67d4 = local_28;
	bss_e67e0 = 0x1;
	goto jmp_138e8;
jmp_137ac:
	if (local_14 != 0xa) goto jmp_137c0;
	local_28 = atoi(local_18);
	bss_e67d8 = local_28;
	bss_e67e0 = 0x1;
	goto jmp_138e8;
jmp_137c0:
	if (local_14 != 0xb) goto jmp_137d4;
	local_28 = atoi(local_18);
	bss_e67dc = local_28;
	bss_e67e0 = 0x1;
	goto jmp_138e8;
jmp_137d4:
	if (local_14 != 0x9) goto jmp_137e4;
	Q_strncpyz(0xe67e4, local_18, 0x400);
	goto jmp_138e8;
jmp_137e4:
	if (local_14 < 0xc) goto jmp_13806;
	if (local_14 > 0xd) goto jmp_13806;
	local_2c = atoi(local_18);
	*(int *)((local_14 << 0x2) + 0xe6bb4) = local_2c;
	*(int *)((local_14 << 0x2) + 0xe6bcc) = 0x1;
	goto jmp_138e8;
jmp_13806:
	if (local_14 < 0x10) goto jmp_13828;
	if (local_14 > 0x11) goto jmp_13828;
	local_30 = atoi(local_18);
	*(int *)((local_14 << 0x2) + 0xe6bac) = local_30;
	*(int *)((local_14 << 0x2) + 0xe6bbc) = 0x1;
	goto jmp_138e8;
jmp_13828:
	if (local_14 < 0x12) goto jmp_1384a;
	if (local_14 > 0x13) goto jmp_1384a;
	local_34 = atoi(local_18);
	*(int *)((local_14 << 0x2) + 0xe6bac) = local_34;
	*(int *)((local_14 << 0x2) + 0xe6bb4) = 0x1;
	goto jmp_138e8;
jmp_1384a:
	if (local_14 < 0xe) goto jmp_13863;
	if (local_14 > 0xf) goto jmp_13863;
	Q_strncpyz(((local_14 << 0xa) + 0xe3404), local_18, 0x400);
	goto jmp_138e8;
jmp_13863:
	if (local_14 != 0x16) goto jmp_13874;
	local_38 = atoi(local_18);
	bss_c2324 = local_38;
	goto jmp_138e8;
jmp_13874:
	if (local_14 < 0x20) goto jmp_1388e;
	if (local_14 >= 0x120) goto jmp_1388e;
	local_3c = trap_R_RegisterModel(local_18);
	*(int *)((local_14 << 0x2) + 0xe73a0) = local_3c;
	goto jmp_138e8;
jmp_1388e:
	if (local_14 < 0x120) goto jmp_138b0;
	if (local_14 >= 0x220) goto jmp_138b0;
	if ((char)*(char *)local_18 == 0x2a) goto jmp_138e8;
	local_40 = trap_S_RegisterSound(local_18, 0x0);
	*(int *)((local_14 << 0x2) + 0xe73a0) = local_40;
	goto jmp_138e8;
jmp_138b0:
	if (local_14 < 0x220) goto jmp_138c5;
	if (local_14 >= 0x260) goto jmp_138c5;
	CG_NewClientInfo((local_14 - 0x220));
	CG_BuildSpectatorString();
	goto jmp_138e8;
jmp_138c5:
	if (local_14 != 0x17) goto jmp_138e1;
	if (bss_e66f8 != 0x4) goto jmp_138e8;
	bss_e7410 = ((char)*(char *)local_18 - 0x30);
	bss_e7414 = ((char)*(char *)(local_18 + 0x1) - 0x30);
	goto jmp_138e8;
jmp_138e1:
	if (local_14 != 0x18) goto jmp_138e8;
	CG_ShaderStateChanged();
jmp_138e8:
}

/*
=================
CG_AddToTeamChat

Address: 0x138ea
Stack Size: 0x40
Calls: Q_IsColorString
Called by: CG_ServerCommand
=================
*/
void CG_AddToTeamChat(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;

	arg_0 = arg_0;
	if (bss_9318 >= 0x8) goto jmp_138f9;
	local_18 = bss_9318;
	goto jmp_138fc;
jmp_138f9:
	local_18 = 0x8;
jmp_138fc:
	local_20 = 0x0;
	if (local_18 <= local_20) goto jmp_13909;
	if (bss_9428 > local_20) goto jmp_13916;
jmp_13909:
	local_24 = 0x0;
	bss_1040d0 = local_24;
	bss_1040cc = local_24;
	goto jmp_13a50;
jmp_13916:
	local_10 = 0x0;
	local_c = ((0xf1 * (bss_1040cc %% local_18)) + 0x103924);
	*(char *)local_c = 0x0;
	local_1c = 0x37;
	local_14 = 0x0;
	goto jmp_13a20;
jmp_13930:
	if (local_10 <= 0x4f) goto jmp_139a0;
	if (local_14 == 0x0) goto jmp_13953;
	local_28 = (local_c - local_14);
	arg_0 = (arg_0 - local_28);
	arg_0 = (arg_0 + 0x1);
	local_c = (local_c - local_28);
jmp_13953:
	*(char *)local_c = 0x0;
	*(int *)(((bss_1040cc %% local_18) << 0x2) + 0x1040ac) = bss_dc760;
	local_24 = 0x1040cc;
	*(int *)local_24 = (*(int *)local_24 + 0x1);
	local_c = ((0xf1 * (bss_1040cc %% local_18)) + 0x103924);
	*(char *)local_c = 0x0;
	local_28 = local_c;
	local_c = (local_28 + 0x1);
	*(char *)local_28 = 0x5e;
	local_2c = local_c;
	local_c = (local_2c + 0x1);
	*(char *)local_2c = local_1c;
	local_10 = 0x0;
	local_14 = 0x0;
jmp_139a0:
	local_24 = Q_IsColorString(arg_0);
	if (local_24 == 0x0) goto jmp_139f1;
	local_28 = local_c;
	local_30 = 0x1;
	local_c = (local_28 + local_30);
	local_2c = arg_0;
	arg_0 = (local_2c + local_30);
	*(char *)local_28 = *(char *)local_2c;
	local_38 = arg_0;
	local_1c = (char)*(char *)local_38;
	local_34 = local_c;
	local_3c = 0x1;
	local_c = (local_34 + local_3c);
	arg_0 = (local_38 + local_3c);
	*(char *)local_34 = *(char *)local_38;
	goto jmp_13a20;
jmp_139f1:
	if ((char)*(char *)arg_0 != 0x20) goto jmp_139fb;
	local_14 = local_c;
jmp_139fb:
	local_28 = local_c;
	local_30 = 0x1;
	local_c = (local_28 + local_30);
	local_2c = arg_0;
	arg_0 = (local_2c + local_30);
	*(char *)local_28 = *(char *)local_2c;
	local_10 = (local_10 + 0x1);
jmp_13a20:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_13930;
	*(char *)local_c = 0x0;
	*(int *)(((bss_1040cc %% local_18) << 0x2) + 0x1040ac) = bss_dc760;
	local_24 = 0x1040cc;
	*(int *)local_24 = (*(int *)local_24 + 0x1);
	if ((bss_1040cc - bss_1040d0) <= local_18) goto jmp_13a50;
	bss_1040d0 = (bss_1040cc - local_18);
jmp_13a50:
}

/*
=================
CG_MapRestart

Address: 0x13a52
Stack Size: 0x14
Calls: trap_Cvar_Set, trap_S_StartLocalSound, trap_S_ClearLoopingSounds, CG_CenterPrint, CG_StartMusic, CG_ClearParticles, CG_InitMarkPolys, CG_InitLocalEntities, CG_Printf
Called by: CG_ServerCommand
=================
*/
void CG_MapRestart(void) {

	if (bss_ada8 == 0x0) goto jmp_13a5c;
	CG_Printf(0x6a0b);
jmp_13a5c:
	CG_InitLocalEntities();
	CG_InitMarkPolys();
	CG_ClearParticles();
	bss_dc770 = 0x0;
	bss_dc76c = 0x0;
	bss_dea08 = 0x0;
	bss_dea04 = 0x0;
	bss_c2324 = 0x0;
	bss_c2318 = 0x0;
	bss_e67d4 = 0x0;
	bss_dc774 = 0x1;
	CG_StartMusic();
	trap_S_ClearLoopingSounds(0x1);
	if (bss_deae0 != 0x0) goto jmp_13a9a;
	trap_S_StartLocalSound(bss_1044c0, 0x7);
	CG_CenterPrint(0x6a04, 0x78, 0x40);
jmp_13a9a:
	trap_Cvar_Set(0x69f5, 0x69f3);
}

/*
=================
CG_RemoveChatEscapeChar

Address: 0x13aa3
Stack Size: 0x1c
Called by: CG_ServerCommand
=================
*/
void CG_RemoveChatEscapeChar(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	char	local_14[8];

	arg_0 = arg_0;
	local_10 = 0x0;
	local_c = local_10;
	local_8 = local_10;
	goto jmp_13adc;
jmp_13ab5:
	if ((char)*(char *)(local_8 + arg_0) != 0x19) goto jmp_13ac0;
	goto jmp_13ad6;
jmp_13ac0:
	*(int *)local_14 = local_c;
	local_c = (*(int *)local_14 + 0x1);
	*(char *)(*(int *)local_14 + arg_0) = *(char *)(local_8 + arg_0);
jmp_13ad6:
	local_8 = (local_8 + 0x1);
jmp_13adc:
	if ((char)*(char *)(local_8 + arg_0) != 0x0) goto jmp_13ab5;
	*(char *)(local_c + arg_0) = 0x0;
}

/*
=================
CG_ServerCommand

Address: 0x13aee
Stack Size: 0x1a8
Calls: trap_R_RemapShader, trap_Argc, trap_S_StartLocalSound, CG_LoadDeferredPlayers, Q_stricmp, CG_MapRestart, CG_ParseTeamInfo, CG_ParseScores, CG_AddToTeamChat, CG_RemoveChatEscapeChar, Q_strncpyz, CG_Printf, CG_ConfigStringModified, CG_CenterPrint, strcmp, CG_Argv
Called by: CG_ExecuteNewServerCommands
=================
*/
void CG_ServerCommand(void) {
	int		local_14;
	char	local_18[152];
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;
	int		local_c4;
	int		local_c8;
	int		local_cc;
	int		local_d0;
	int		local_d4;
	int		local_d8;
	char	local_dc[64];
	char	local_11c[64];
	char	local_15c[64];
	int		local_19c;
	int		local_1a0;
	int		local_1a4;

	local_b0 = CG_Argv(0x0);
	local_14 = local_b0;
	if ((char)*(char *)local_14 != 0x0) goto jmp_13b01;
	goto jmp_13c76;
jmp_13b01:
	local_b4 = strcmp(local_14, 0x69f0);
	if (local_b4 != 0x0) goto jmp_13b20;
	local_b8 = CG_Argv(0x1);
	CG_CenterPrint(local_b8, 0x90, 0x10);
	goto jmp_13c76;
jmp_13b20:
	local_b8 = strcmp(local_14, 0x69ed);
	if (local_b8 != 0x0) goto jmp_13b32;
	CG_ConfigStringModified();
	goto jmp_13c76;
jmp_13b32:
	local_bc = strcmp(local_14, 0x69e7);
	if (local_bc != 0x0) goto jmp_13b4f;
	local_c0 = CG_Argv(0x1);
	CG_Printf(0x69e4, local_c0);
	goto jmp_13c76;
jmp_13b4f:
	local_c0 = strcmp(local_14, 0x69df);
	if (local_c0 != 0x0) goto jmp_13b8c;
	if (bss_e66f8 < 0x3) goto jmp_13b66;
	if (bss_8988 == 0x0) goto jmp_13b66;
	goto jmp_13c76;
jmp_13b66:
	trap_S_StartLocalSound(bss_1043e4, 0x6);
	local_c4 = CG_Argv(0x1);
	Q_strncpyz(local_18, local_c4, 0x96);
	CG_RemoveChatEscapeChar(local_18);
	CG_Printf(0x69db, local_18);
	goto jmp_13c76;
jmp_13b8c:
	local_c4 = strcmp(local_14, 0x69d5);
	if (local_c4 != 0x0) goto jmp_13bc4;
	trap_S_StartLocalSound(bss_1043e4, 0x6);
	local_c8 = CG_Argv(0x1);
	Q_strncpyz(local_18, local_c8, 0x96);
	CG_RemoveChatEscapeChar(local_18);
	CG_AddToTeamChat(local_18);
	CG_Printf(0x69db, local_18);
	goto jmp_13c76;
jmp_13bc4:
	local_c8 = strcmp(local_14, 0x69ce);
	if (local_c8 != 0x0) goto jmp_13bd6;
	CG_ParseScores();
	goto jmp_13c76;
jmp_13bd6:
	local_cc = strcmp(local_14, 0x69c8);
	if (local_cc != 0x0) goto jmp_13be8;
	CG_ParseTeamInfo();
	goto jmp_13c76;
jmp_13be8:
	local_d0 = strcmp(local_14, 0x69bc);
	if (local_d0 != 0x0) goto jmp_13bfa;
	CG_MapRestart();
	goto jmp_13c76;
jmp_13bfa:
	local_d4 = Q_stricmp(local_14, 0x69b0);
	if (local_d4 != 0x0) goto jmp_13c4a;
	local_d8 = trap_Argc();
	if (local_d8 != 0x4) goto jmp_13c76;
	local_19c = CG_Argv(0x1);
	Q_strncpyz(local_dc, local_19c, 0x40);
	local_1a0 = CG_Argv(0x2);
	Q_strncpyz(local_11c, local_1a0, 0x40);
	local_1a4 = CG_Argv(0x3);
	Q_strncpyz(local_15c, local_1a4, 0x40);
	trap_R_RemapShader(local_dc, local_11c, local_15c);
	goto jmp_13c76;
jmp_13c4a:
	local_d8 = strcmp(local_14, 0x69a4);
	if (local_d8 != 0x0) goto jmp_13c5c;
	CG_LoadDeferredPlayers();
	goto jmp_13c76;
jmp_13c5c:
	*(int *)local_dc = strcmp(local_14, 0x6994);
	if (*(int *)local_dc != 0x0) goto jmp_13c6e;
	bss_c2318 = 0x1;
	goto jmp_13c76;
jmp_13c6e:
	CG_Printf(0x6973, local_14);
jmp_13c76:
}

/*
=================
CG_ExecuteNewServerCommands

Address: 0x13c78
Stack Size: 0x18
Calls: trap_GetServerCommand, CG_ServerCommand
Called by: CG_TransitionSnapshot, CG_SetInitialSnapshot
=================
*/
void CG_ExecuteNewServerCommands(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	goto jmp_13c9c;
jmp_13c7f:
	local_c = 0xe66ec;
	local_10 = (*(int *)local_c + 0x1);
	*(int *)local_c = local_10;
	local_14 = trap_GetServerCommand(local_10);
	if (local_14 == 0x0) goto jmp_13c9c;
	CG_ServerCommand();
jmp_13c9c:
	if (bss_e66ec < arg_0) goto jmp_13c7f;
}

/*
=================
CG_ResetEntity

Address: 0x13ca3
Stack Size: 0x14
Calls: CG_ResetPlayerEntity
Called by: CG_SetInitialSnapshot, CG_TransitionEntity
=================
*/
void CG_ResetEntity(int arg_0) {

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x1c0) >= (bss_dc760 - 0x12c)) goto jmp_13cb8;
	*(int *)(arg_0 + 0x1ac) = 0x0;
jmp_13cb8:
	*(int *)(arg_0 + 0x1b4) = *(int *)(bss_c2330 + 0x8);
	block_copy((arg_0 + 0x5c), (arg_0 + 0x2b4), 0xc);
	block_copy((arg_0 + 0x74), (arg_0 + 0x2c0), 0xc);
	if (*(int *)(arg_0 + 0x4) != 0x1) goto jmp_13ce1;
	CG_ResetPlayerEntity(arg_0);
jmp_13ce1:
}

/*
=================
CG_TransitionEntity

Address: 0x13ce3
Stack Size: 0x10
Calls: CG_CheckEvents, CG_ResetEntity
Called by: CG_TransitionSnapshot
=================
*/
void CG_TransitionEntity(int arg_0) {

	arg_0 = arg_0;
	block_copy((arg_0 + 0xd0), arg_0, 0xd0);
	*(int *)(arg_0 + 0x1a4) = 0x1;
	if (*(int *)(arg_0 + 0x1a0) != 0x0) goto jmp_13d02;
	CG_ResetEntity(arg_0);
jmp_13d02:
	*(int *)(arg_0 + 0x1a0) = 0x0;
	CG_CheckEvents(arg_0);
}

/*
=================
CG_SetInitialSnapshot

Address: 0x13d10
Stack Size: 0x28
Calls: memcpy, CG_CheckEvents, CG_ResetEntity, CG_Respawn, CG_ExecuteNewServerCommands, CG_BuildSolidList, BG_PlayerStateToEntityState
Called by: CG_ProcessSnapshots
=================
*/
void CG_SetInitialSnapshot(int arg_0) {
	int		local_14;
	int		local_18;
	char	local_1c[12];

	arg_0 = arg_0;
	bss_c2330 = arg_0;
	BG_PlayerStateToEntityState((arg_0 + 0x2c), ((0x2cc * *(int *)(arg_0 + 0xb8)) + 0xf30c), 0x0);
	CG_BuildSolidList();
	CG_ExecuteNewServerCommands(*(int *)(arg_0 + 0xd208));
	CG_Respawn();
	local_18 = 0x0;
	goto jmp_13d7e;
jmp_13d41:
	*(int *)local_1c = ((0xd0 * local_18) + (bss_c2330 + 0x204));
	local_14 = ((0x2cc * *(int *)*(int *)local_1c) + 0xf30c);
	memcpy(local_14, *(int *)local_1c, 0xd0);
	*(int *)(local_14 + 0x1a0) = 0x0;
	*(int *)(local_14 + 0x1a4) = 0x1;
	CG_ResetEntity(local_14);
	CG_CheckEvents(local_14);
	local_18 = (local_18 + 0x1);
jmp_13d7e:
	if (local_18 < *(int *)(bss_c2330 + 0x200)) goto jmp_13d41;
}

/*
=================
CG_TransitionSnapshot

Address: 0x13d88
Stack Size: 0x34
Calls: CG_TransitionPlayerState, CG_TransitionEntity, BG_PlayerStateToEntityState, CG_ExecuteNewServerCommands, CG_Error
Called by: CG_ProcessSnapshots
=================
*/
void CG_TransitionSnapshot(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;

	if (bss_c2330 != 0x0) goto jmp_13d92;
	CG_Error(0x6c15);
jmp_13d92:
	if (bss_c2334 != 0x0) goto jmp_13d9b;
	CG_Error(0x6bed);
jmp_13d9b:
	CG_ExecuteNewServerCommands(*(int *)(bss_c2334 + 0xd208));
	if (bss_dc774 == 0x0) goto jmp_13da8;
jmp_13da8:
	local_14 = 0x0;
	goto jmp_13dc9;
jmp_13dad:
	local_18 = ((0x2cc * *(int *)((0xd0 * local_14) + (bss_c2330 + 0x204))) + 0xf30c);
	*(int *)(local_18 + 0x1a4) = 0x0;
	local_14 = (local_14 + 0x1);
jmp_13dc9:
	if (local_14 < *(int *)(bss_c2330 + 0x200)) goto jmp_13dad;
	local_1c = bss_c2330;
	bss_c2330 = bss_c2334;
	BG_PlayerStateToEntityState((bss_c2330 + 0x2c), ((0x2cc * *(int *)(bss_c2330 + 0xb8)) + 0xf30c), 0x0);
	*(int *)((0x2cc * *(int *)(bss_c2330 + 0xb8)) + 0xf4ac) = 0x0;
	local_14 = 0x0;
	goto jmp_13e23;
jmp_13dfd:
	local_18 = ((0x2cc * *(int *)((0xd0 * local_14) + (bss_c2330 + 0x204))) + 0xf30c);
	CG_TransitionEntity(local_18);
	*(int *)(local_18 + 0x1c0) = *(int *)(bss_c2330 + 0x8);
	local_14 = (local_14 + 0x1);
jmp_13e23:
	if (local_14 < *(int *)(bss_c2330 + 0x200)) goto jmp_13dfd;
	bss_c2334 = 0x0;
	if (local_1c == 0x0) goto jmp_13e7f;
	local_28 = 0x2c;
	local_20 = (local_1c + local_28);
	local_24 = (bss_c2330 + local_28);
	local_2c = 0x68;
	if (((*(int *)(local_24 + local_2c) ^ *(int *)(local_20 + local_2c)) & 0x4) == 0x0) goto jmp_13e5a;
	bss_dc754 = 0x1;
jmp_13e5a:
	local_30 = 0x0;
	if (bss_c2314 != local_30) goto jmp_13e76;
	if ((*(int *)(bss_c2330 + 0x38) & 0x1000) != local_30) goto jmp_13e76;
	if (bss_afc8 != local_30) goto jmp_13e76;
	if (bss_9538 == local_30) goto jmp_13e7f;
jmp_13e76:
	CG_TransitionPlayerState(local_24, local_20);
jmp_13e7f:
}

/*
=================
CG_SetNextSnap

Address: 0x13e81
Stack Size: 0x38
Calls: memcpy, CG_BuildSolidList, BG_PlayerStateToEntityState
Called by: CG_ProcessSnapshots
=================
*/
void CG_SetNextSnap(int arg_0) {
	int		local_14;
	int		local_18;
	char	local_1c[8];
	int		local_24;
	char	local_28[8];
	int		local_30;
	int		local_34;

	arg_0 = arg_0;
	bss_c2334 = arg_0;
	BG_PlayerStateToEntityState((arg_0 + 0x2c), ((0x2cc * *(int *)(arg_0 + 0xb8)) + 0xf3dc), 0x0);
	*(int *)((0x2cc * *(int *)(bss_c2330 + 0xb8)) + 0xf4ac) = 0x1;
	*(int *)local_1c = 0x0;
	goto jmp_13f08;
jmp_13eae:
	local_24 = 0xd0;
	local_18 = ((local_24 * *(int *)local_1c) + (arg_0 + 0x204));
	local_14 = ((0x2cc * *(int *)local_18) + 0xf30c);
	memcpy((local_14 + local_24), local_18, 0xd0);
	local_30 = 0x0;
	if (*(int *)(local_14 + 0x1a4) == local_30) goto jmp_13ef4;
	local_34 = 0x8;
	if (((*(int *)(local_14 + local_34) ^ *(int *)(local_18 + local_34)) & 0x4) == local_30) goto jmp_13efc;
jmp_13ef4:
	*(int *)(local_14 + 0x1a0) = 0x0;
	goto jmp_13f02;
jmp_13efc:
	*(int *)(local_14 + 0x1a0) = 0x1;
jmp_13f02:
	*(int *)local_1c = (*(int *)local_1c + 0x1);
jmp_13f08:
	if (*(int *)local_1c < *(int *)(arg_0 + 0x200)) goto jmp_13eae;
	if (bss_c2330 == 0x0) goto jmp_13f2d;
	local_24 = 0x94;
	if (((*(int *)(arg_0 + local_24) ^ *(int *)(bss_c2330 + local_24)) & 0x4) == 0x0) goto jmp_13f2d;
	bss_dc758 = 0x1;
	goto jmp_13f30;
jmp_13f2d:
	bss_dc758 = 0x0;
jmp_13f30:
	*(int *)local_28 = 0xb8;
	if (*(int *)(bss_c2334 + *(int *)local_28) == *(int *)(bss_c2330 + *(int *)local_28)) goto jmp_13f43;
	bss_dc758 = 0x1;
jmp_13f43:
	if (((*(int *)bss_c2334 ^ *(int *)bss_c2330) & 0x4) == 0x0) goto jmp_13f51;
	bss_dc758 = 0x1;
jmp_13f51:
	CG_BuildSolidList();
}

/*
=================
CG_ReadNextSnapshot

Address: 0x13f56
Stack Size: 0x28
Calls: trap_GetSnapshot, CG_AddLagometerSnapshotInfo, CG_Printf
Called by: CG_ProcessSnapshots
=================
*/
int CG_ReadNextSnapshot(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	if (bss_c2328 <= (bss_e66f0 + 0x3e8)) goto jmp_13fbc;
	CG_Printf(0x6bb4, bss_c2328, bss_e66f0);
	goto jmp_13fbc;
jmp_13f6b:
	if (bss_c2330 != 0xc2338) goto jmp_13f74;
	local_14 = 0xcf544;
	goto jmp_13f77;
jmp_13f74:
	local_14 = 0xc2338;
jmp_13f77:
	local_1c = 0xe66f0;
	*(int *)local_1c = (*(int *)local_1c + 0x1);
	local_20 = trap_GetSnapshot(bss_e66f0, local_14);
	local_18 = local_20;
	if (bss_c2330 == 0x0) goto jmp_13fa8;
	if (local_18 == 0x0) goto jmp_13fa8;
	local_24 = 0x8;
	if (*(int *)(local_14 + local_24) != *(int *)(bss_c2330 + local_24)) goto jmp_13fa8;
jmp_13fa8:
	if (local_18 == 0x0) goto jmp_13fb7;
	CG_AddLagometerSnapshotInfo(local_14);
	return local_14;
jmp_13fb7:
	CG_AddLagometerSnapshotInfo(0x0);
jmp_13fbc:
	if (bss_e66f0 < bss_c2328) goto jmp_13f6b;
	return 0x0;
}

/*
=================
CG_ProcessSnapshots

Address: 0x13fc5
Stack Size: 0x20
Calls: trap_GetCurrentSnapshotNumber, CG_TransitionSnapshot, CG_SetNextSnap, CG_SetInitialSnapshot, CG_ReadNextSnapshot, CG_Error
Called by: CG_DrawActiveFrame
=================
*/
void CG_ProcessSnapshots(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	trap_GetCurrentSnapshotNumber(&local_14, 0xc232c);
	if (local_14 == bss_c2328) goto jmp_13ffd;
	if (local_14 >= bss_c2328) goto jmp_13fdc;
	CG_Error(0x6b86);
jmp_13fdc:
	bss_c2328 = local_14;
	goto jmp_13ffd;
jmp_13fe2:
	local_18 = CG_ReadNextSnapshot();
	local_10 = local_18;
	if (local_10 != 0x0) goto jmp_13ff0;
	goto jmp_14073;
jmp_13ff0:
	if ((*(int *)local_10 & 0x2) != 0x0) goto jmp_13ffd;
	CG_SetInitialSnapshot(local_10);
jmp_13ffd:
	if (bss_c2330 == 0x0) goto jmp_13fe2;
jmp_14001:
	if (bss_c2334 != 0x0) goto jmp_1402e;
	local_18 = CG_ReadNextSnapshot();
	local_10 = local_18;
	if (local_10 != 0x0) goto jmp_14013;
	goto jmp_1404a;
jmp_14013:
	CG_SetNextSnap(local_10);
	local_1c = 0x8;
	if (*(int *)(bss_c2334 + local_1c) >= *(int *)(bss_c2330 + local_1c)) goto jmp_1402e;
	CG_Error(0x6b56);
jmp_1402e:
	local_18 = 0x8;
	if (bss_dc760 < *(int *)(bss_c2330 + local_18)) goto jmp_14045;
	if (bss_dc760 >= *(int *)(bss_c2334 + local_18)) goto jmp_14045;
	goto jmp_1404a;
jmp_14045:
	CG_TransitionSnapshot();
	goto jmp_14001;
jmp_1404a:
	if (bss_c2330 != 0x0) goto jmp_14053;
	CG_Error(0x6b31);
jmp_14053:
	if (bss_dc760 >= *(int *)(bss_c2330 + 0x8)) goto jmp_14062;
	bss_dc760 = *(int *)(bss_c2330 + 0x8);
jmp_14062:
	if (bss_c2334 == 0x0) goto jmp_14073;
	if (*(int *)(bss_c2334 + 0x8) > bss_dc760) goto jmp_14073;
	CG_Error(0x6af9);
jmp_14073:
}

/*
=================
CG_TestModel_f

Address: 0x14075
Stack Size: 0x38
Calls: trap_R_RegisterModel, trap_Argc, memset, AnglesToAxis, CG_Printf, atof, Q_strncpyz, CG_Argv
Called by: CG_TestGun_f
=================
*/
void CG_TestModel_f(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	bss_dec14 = 0x0;
	memset(0xdeb48, 0x0, 0x8c);
	local_20 = trap_Argc();
	if (local_20 >= 0x2) goto jmp_1408c;
	goto jmp_140fe;
jmp_1408c:
	local_24 = CG_Argv(0x1);
	Q_strncpyz(0xdebd4, local_24, 0x40);
	local_28 = trap_R_RegisterModel(0xdebd4);
	bss_deb50 = local_28;
	local_2c = trap_Argc();
	if (local_2c != 0x3) goto jmp_140c5;
	local_30 = CG_Argv(0x2);
	local_34 = atof(local_30);
	bss_debac = local_34;
	bss_deb98 = 0x1;
	bss_deba8 = 0x0;
jmp_140c5:
	if (bss_deb50 != 0x0) goto jmp_140d0;
	CG_Printf(0x6c7f);
	goto jmp_140fe;
jmp_140d0:
	bss_deb8c = (bss_dcd0c + (0x42c80000 * bss_dcd18));
	bss_deb90 = (bss_dcd10 + (0x42c80000 * bss_dcd1c));
	bss_deb94 = (bss_dcd14 + (0x42c80000 * bss_dcd20));
	local_14 = 0x0;
	local_18 = (bss_dce68 + 0x43340000);
	local_1c = 0x0;
	AnglesToAxis(&local_14, 0xdeb64);
jmp_140fe:
}

/*
=================
CG_TestGun_f

Address: 0x14100
Stack Size: 0x8
Calls: CG_TestModel_f
=================
*/
void CG_TestGun_f(void) {

	CG_TestModel_f();
	if (bss_deb50 != 0x0) goto jmp_1410a;
	goto jmp_14110;
jmp_1410a:
	bss_dec14 = 0x1;
	bss_deb4c = 0xd;
jmp_14110:
}

/*
=================
CG_TestModelNextFrame_f

Address: 0x14112
Stack Size: 0x14
Calls: CG_Printf
=================
*/
void CG_TestModelNextFrame_f(void) {
	int		local_10;

	local_10 = 0xdeb98;
	*(int *)local_10 = (*(int *)local_10 + 0x1);
	CG_Printf(0x6c75, bss_deb98);
}

/*
=================
CG_TestModelPrevFrame_f

Address: 0x14128
Stack Size: 0x14
Calls: CG_Printf
=================
*/
void CG_TestModelPrevFrame_f(void) {
	int		local_10;

	local_10 = 0xdeb98;
	*(int *)local_10 = (*(int *)local_10 - 0x1);
	if (bss_deb98 >= 0x0) goto jmp_1413b;
	bss_deb98 = 0x0;
jmp_1413b:
	CG_Printf(0x6c75, bss_deb98);
}

/*
=================
CG_TestModelNextSkin_f

Address: 0x14145
Stack Size: 0x14
Calls: CG_Printf
=================
*/
void CG_TestModelNextSkin_f(void) {
	int		local_10;

	local_10 = 0xdebb0;
	*(int *)local_10 = (*(int *)local_10 + 0x1);
	CG_Printf(0x6c6c, bss_debb0);
}

/*
=================
CG_TestModelPrevSkin_f

Address: 0x1415b
Stack Size: 0x14
Calls: CG_Printf
=================
*/
void CG_TestModelPrevSkin_f(void) {
	int		local_10;

	local_10 = 0xdebb0;
	*(int *)local_10 = (*(int *)local_10 - 0x1);
	if (bss_debb0 >= 0x0) goto jmp_1416e;
	bss_debb0 = 0x0;
jmp_1416e:
	CG_Printf(0x6c6c, bss_debb0);
}

/*
=================
CG_AddTestModel

Address: 0x14178
Stack Size: 0x2c
Calls: trap_R_AddRefEntityToScene, trap_R_RegisterModel, CG_Printf
Called by: CG_DrawActiveFrame
=================
*/
void CG_AddTestModel(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	local_10 = trap_R_RegisterModel(0xdebd4);
	bss_deb50 = local_10;
	if (bss_deb50 != 0x0) goto jmp_1418e;
	CG_Printf(0x6c7f);
	goto jmp_14201;
jmp_1418e:
	if (bss_dec14 == 0x0) goto jmp_141fc;
	block_copy(&bss_dcd0c, &bss_deb8c, 0xc);
	block_copy(&bss_dcd18, bss_deb64, 0xc);
	block_copy(&bss_dcd24, bss_deb70, 0xc);
	block_copy(&bss_dcd30, bss_deb7c, 0xc);
	local_c = 0x0;
jmp_141a1:
	local_14 = (local_c << 0x2);
	local_18 = (local_14 + 0xdeb8c);
	*(int *)local_18 = (*(int *)local_18 + (*(int *)(local_14 + 0xdcd18) * bss_a854));
	local_1c = (local_c << 0x2);
	local_20 = (local_1c + 0xdeb8c);
	*(int *)local_20 = (*(int *)local_20 + (*(int *)(local_1c + 0xdcd24) * bss_a744));
	local_24 = (local_c << 0x2);
	local_28 = (local_24 + 0xdeb8c);
	*(int *)local_28 = (*(int *)local_28 + (*(int *)(local_24 + 0xdcd30) * bss_a634));
	local_c = (local_c + 0x1);
	if (local_c < 0x3) goto jmp_141a1;
jmp_141fc:
	trap_R_AddRefEntityToScene(0xdeb48);
jmp_14201:
}

/*
=================
CG_CalcVrect

Address: 0x14203
Stack Size: 0x1c
Calls: trap_Cvar_Set
Called by: CG_CalcViewValues
=================
*/
void CG_CalcVrect(void) {
	int		local_10;
	int		local_14;
	int		local_18;

	if (*(int *)(bss_c2330 + 0x30) != 0x5) goto jmp_14210;
	local_10 = 0x64;
	goto jmp_14234;
jmp_14210:
	if (bss_a418 >= 0x1e) goto jmp_14220;
	trap_Cvar_Set(0x6c60, 0x6c5d);
	local_10 = 0x1e;
	goto jmp_14234;
jmp_14220:
	if (bss_a418 <= 0x64) goto jmp_14230;
	trap_Cvar_Set(0x6c60, 0x6c59);
	local_10 = 0x64;
	goto jmp_14234;
jmp_14230:
	local_10 = bss_a418;
jmp_14234:
	bss_dccfc = ((bss_e66c4 * local_10) / 0x64);
	local_14 = 0xdccfc;
	*(int *)local_14 = (*(int *)local_14 & 0xfffffffe);
	bss_dcd00 = ((bss_e66c8 * local_10) / 0x64);
	local_18 = 0xdcd00;
	*(int *)local_18 = (*(int *)local_18 & 0xfffffffe);
	bss_dccf4 = ((bss_e66c4 - bss_dccfc) / 0x2);
	bss_dccf8 = ((bss_e66c8 - bss_dcd00) / 0x2);
}

/*
=================
CG_OffsetThirdPersonView

Address: 0x14270
Stack Size: 0xe0
Calls: atan2, sqrt, sin, cos, CG_Trace, AngleVectors
Called by: CG_CalcViewValues
=================
*/
void CG_OffsetThirdPersonView(void) {
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	char	local_58[8];
	int		local_60;
	int		local_64;
	int		local_68;
	char	local_6c[8];
	int		local_74;
	char	local_78[44];
	char	local_a4[12];
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;
	char	local_c4[12];
	int		local_d0;
	int		local_d4;
	int		local_d8;
	int		local_dc;

	local_b0 = 0xdcd14;
	*(int *)local_b0 = (*(int *)local_b0 + (float)bss_dc824);
	block_copy(&bss_dce64, &local_54, 0xc);
	if (bss_dc838 > 0x0) goto jmp_1428f;
	*(int *)local_58 = (float)bss_dc848;
	bss_dce68 = (float)bss_dc848;
jmp_1428f:
	if (local_54 <= 0x42340000) goto jmp_14296;
	local_54 = 0x42340000;
jmp_14296:
#define next_call_arg_0 "&local_54"
#define next_call_arg_1 "&local_3c"
	local_b4 = 0x0;
#define next_call_arg_2 "local_b4"
#define next_call_arg_3 "local_b4"
	AngleVectors();
	local_b8 = 0x44000000;
	local_30 = (bss_dcd0c + (local_b8 * local_3c));
	local_34 = (bss_dcd10 + (local_b8 * local_40));
	local_38 = (bss_dcd14 + (0x44000000 * local_44));
	block_copy(&bss_dcd0c, &local_24, 0xc);
	local_2c = (local_2c + 0x41000000);
	local_bc = 0xdce64;
	*(int *)local_bc = (0x3f000000 * *(int *)local_bc);
	AngleVectors(0xdce64, &local_3c, &local_48, local_a4);
	local_c0 = cos((0x40490fdb * (bss_9974 / 0x43340000)));
	local_60 = local_c0;
	*(int *)local_c4 = sin((0x40490fdb * (bss_9974 / 0x43340000)));
	local_64 = *(int *)local_c4;
	local_24 = (local_24 + (local_3c * (-bss_9a84 * local_60)));
	local_28 = (local_28 + (local_40 * (-bss_9a84 * local_60)));
	local_2c = (local_2c + (local_44 * (-bss_9a84 * local_60)));
	local_24 = (local_24 + (local_48 * (-bss_9a84 * local_64)));
	local_28 = (local_28 + (local_4c * (-bss_9a84 * local_64)));
	local_2c = (local_2c + (local_50 * (-bss_9a84 * local_64)));
	if (bss_7ee8 != 0x0) goto jmp_14394;
	CG_Trace(local_6c, 0xdcd0c, 0x1ce4, 0x1cf0, &local_24, bss_dc80c, 0x1);
	if (local_74 == 0x3f800000) goto jmp_14394;
	block_copy(local_78, &local_24, 0xc);
	local_2c = (local_2c + (0x42000000 * (0x3f800000 - local_74)));
	CG_Trace(local_6c, 0xdcd0c, 0x1ce4, 0x1cf0, &local_24, bss_dc80c, 0x1);
	block_copy(local_78, &local_24, 0xc);
jmp_14394:
	block_copy(&local_24, &bss_dcd0c, 0xc);
	local_30 = (local_30 - bss_dcd0c);
	local_34 = (local_34 - bss_dcd10);
	local_38 = (local_38 - bss_dcd14);
	local_d0 = local_30;
	local_d4 = sqrt(((local_d0 * local_d0) + (local_34 * local_34)));
	local_68 = local_d4;
	if (local_68 >= 0x3f800000) goto jmp_143cb;
	local_68 = 0x3f800000;
jmp_143cb:
	local_d8 = atan2(local_38, local_68);
	bss_dce64 = (0xc2652ee1 * local_d8);
	local_dc = 0xdce68;
	*(int *)local_dc = (*(int *)local_dc - bss_9974);
}

/*
=================
CG_StepOffset

Address: 0x143e9
Stack Size: 0x10
Called by: CG_OffsetFirstPersonView
=================
*/
void CG_StepOffset(void) {
	int		local_8;
	int		local_c;

	local_8 = (bss_dc760 - bss_dcc7c);
	if (local_8 >= 0xc8) goto jmp_14409;
	local_c = 0xdcd14;
	*(int *)local_c = (*(int *)local_c - ((bss_dcc78 * (float)(0xc8 - local_8)) / 0x43480000));
jmp_14409:
}

/*
=================
CG_OffsetFirstPersonView

Address: 0x1440b
Stack Size: 0x54
Calls: CG_StepOffset
Called by: CG_CalcViewValues
=================
*/
void CG_OffsetFirstPersonView(void) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	char	local_3c[8];
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;

	if (*(int *)(bss_c2330 + 0x30) != 0x5) goto jmp_14415;
	goto jmp_145e8;
jmp_14415:
	local_1c = 0xdcd0c;
	local_c = 0xdce64;
	if (*(int *)(bss_c2330 + 0xe4) > 0x0) goto jmp_14449;
	*(int *)(local_c + 0x8) = 0x42200000;
	*(int *)local_c = 0xc1700000;
	*(int *)(local_c + 0x4) = (float)*(int *)(bss_c2330 + 0xf4);
	local_34 = (local_1c + 0x8);
	*(int *)local_34 = (*(int *)local_34 + (float)bss_dc824);
	goto jmp_145e8;
jmp_14449:
	if (bss_deb00 == 0x0) goto jmp_144ab;
	local_28 = ((float)bss_dc760 - bss_deb00);
	if (local_28 >= 0x42c80000) goto jmp_1447f;
	local_28 = (local_28 / 0x42c80000);
	*(int *)local_c = (*(int *)local_c + (local_28 * bss_deb30));
	local_38 = (local_c + 0x8);
	*(int *)local_38 = (*(int *)local_38 + (local_28 * bss_deb34));
	goto jmp_144ab;
jmp_1447f:
	local_28 = (0x3f800000 - ((local_28 - 0x42c80000) / 0x43c80000));
	if (local_28 <= 0x0) goto jmp_144ab;
	*(int *)local_c = (*(int *)local_c + (local_28 * bss_deb30));
	local_38 = (local_c + 0x8);
	*(int *)local_38 = (*(int *)local_38 + (local_28 * bss_deb34));
jmp_144ab:
	block_copy(bss_dc7a0, &local_10, 0xc);
	local_8 = (((local_10 * bss_dcd18) + (local_14 * bss_dcd1c)) + (local_18 * bss_dcd20));
	*(int *)local_c = (*(int *)local_c + (local_8 * bss_d0b4));
	local_8 = (((local_10 * bss_dcd24) + (local_14 * bss_dcd28)) + (local_18 * bss_dcd2c));
	local_38 = (local_c + 0x8);
	*(int *)local_38 = (*(int *)local_38 - (local_8 * bss_cfa4));
	if (bss_deb40 <= 0x43480000) goto jmp_144fc;
	*(int *)local_3c = bss_deb40;
	goto jmp_144ff;
jmp_144fc:
	*(int *)local_3c = 0x43480000;
jmp_144ff:
	local_24 = *(int *)local_3c;
	local_8 = ((bss_deb38 * bss_cd84) * local_24);
	if ((bss_dc78c & 0x1) == 0x0) goto jmp_14519;
	local_8 = (0x40400000 * local_8);
jmp_14519:
	*(int *)local_c = (*(int *)local_c + local_8);
	local_8 = ((bss_deb38 * bss_cc74) * local_24);
	if ((bss_dc78c & 0x1) == 0x0) goto jmp_14538;
	local_8 = (0x40400000 * local_8);
jmp_14538:
	if ((bss_deb3c & 0x1) == 0x0) goto jmp_14543;
	local_8 = -local_8;
jmp_14543:
	local_44 = (local_c + 0x8);
	*(int *)local_44 = (*(int *)local_44 + local_8);
	local_48 = (local_1c + 0x8);
	*(int *)local_48 = (*(int *)local_48 + (float)bss_dc824);
	local_2c = (bss_dc760 - bss_dcc84);
	if (local_2c >= 0x64) goto jmp_14581;
	local_4c = 0xdcd14;
	*(int *)local_4c = (*(int *)local_4c - ((bss_dcc80 * (float)(0x64 - local_2c)) / 0x42c80000));
jmp_14581:
	local_20 = ((bss_deb38 * bss_deb40) * bss_ce94);
	if (local_20 <= 0x40c00000) goto jmp_14592;
	local_20 = 0x40c00000;
jmp_14592:
	local_4c = (local_1c + 0x8);
	*(int *)local_4c = (*(int *)local_4c + local_20);
	local_8 = (float)(bss_dc760 - bss_dcc8c);
	if (local_8 >= 0x43160000) goto jmp_145c4;
	local_30 = (local_8 / 0x43160000);
	local_50 = 0xdcd14;
	*(int *)local_50 = (*(int *)local_50 + (bss_dcc88 * local_30));
	goto jmp_145e5;
jmp_145c4:
	if (local_8 >= 0x43e10000) goto jmp_145e5;
	local_8 = (local_8 - 0x43160000);
	local_30 = (0x3f800000 - (local_8 / 0x43960000));
	local_50 = 0xdcd14;
	*(int *)local_50 = (*(int *)local_50 + (bss_dcc88 * local_30));
jmp_145e5:
	CG_StepOffset();
jmp_145e8:
}

/*
=================
CG_ZoomDown_f

Address: 0x145ea
Stack Size: 0x8
=================
*/
void CG_ZoomDown_f(void) {

	if (bss_dce70 == 0x0) goto jmp_145f1;
	goto jmp_145f8;
jmp_145f1:
	bss_dce70 = 0x1;
	bss_dce74 = bss_dc760;
jmp_145f8:
}

/*
=================
CG_ZoomUp_f

Address: 0x145fa
Stack Size: 0x8
=================
*/
void CG_ZoomUp_f(void) {

	if (bss_dce70 != 0x0) goto jmp_14601;
	goto jmp_14608;
jmp_14601:
	bss_dce70 = 0x0;
	bss_dce74 = bss_dc760;
jmp_14608:
}

/*
=================
CG_CalcFov

Address: 0x1460a
Stack Size: 0x48
Calls: sin, atan2, CG_PointContents, tan
Called by: CG_CalcViewValues
=================
*/
int CG_CalcFov(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;

	if (bss_dc784 != 0x5) goto jmp_14614;
	local_10 = 0x42b40000;
	goto jmp_1468d;
jmp_14614:
	if ((bss_e66fc & 0x10) == 0x0) goto jmp_1461f;
	local_10 = 0x42b40000;
	goto jmp_14633;
jmp_1461f:
	local_10 = bss_9ca4;
	if (local_10 >= 0x3f800000) goto jmp_1462c;
	local_10 = 0x3f800000;
	goto jmp_14633;
jmp_1462c:
	if (local_10 <= 0x43200000) goto jmp_14633;
	local_10 = 0x43200000;
jmp_14633:
	local_18 = bss_9b94;
	if (local_18 >= 0x3f800000) goto jmp_14640;
	local_18 = 0x3f800000;
	goto jmp_14647;
jmp_14640:
	if (local_18 <= 0x43200000) goto jmp_14647;
	local_18 = 0x43200000;
jmp_14647:
	if (bss_dce70 == 0x0) goto jmp_1466e;
	local_2c = ((float)(bss_dc760 - bss_dce74) / 0x43160000);
	if (local_2c <= 0x3f800000) goto jmp_1465f;
	local_10 = local_18;
	goto jmp_1468d;
jmp_1465f:
	local_10 = (local_10 + (local_2c * (local_18 - local_10)));
	goto jmp_1468d;
jmp_1466e:
	local_2c = ((float)(bss_dc760 - bss_dce74) / 0x43160000);
	if (local_2c > 0x3f800000) goto jmp_1468d;
	local_34 = local_18;
	local_10 = (local_34 + (local_2c * (local_10 - local_34)));
jmp_1468d:
	local_34 = tan((0x40490fdb * (local_10 / 0x43b40000)));
	local_1c = ((float)bss_dccfc / local_34);
	local_38 = atan2((float)bss_dcd00, local_1c);
	local_14 = local_38;
	local_14 = ((0x43b40000 * local_14) / 0x40490fdb);
	local_3c = CG_PointContents(0xdcd0c, 0xffffffff);
	local_20 = local_3c;
	if ((local_20 & 0x38) == 0x0) goto jmp_146fa;
	local_30 = (0x40000000 * (0x40490fdb * (0x3ecccccd * ((float)bss_dc760 / 0x447a0000))));
	local_40 = sin(local_30);
	local_28 = (0x3f800000 * local_40);
	local_44 = local_28;
	local_10 = (local_10 + local_44);
	local_14 = (local_14 - local_44);
	local_24 = 0x1;
	goto jmp_146fd;
jmp_146fa:
	local_24 = 0x0;
jmp_146fd:
	bss_dcd04 = local_10;
	bss_dcd08 = local_14;
	if (bss_dce70 != 0x0) goto jmp_1470e;
	bss_dce78 = 0x3f800000;
	goto jmp_14714;
jmp_1470e:
	bss_dce78 = (bss_dcd08 / 0x42960000);
jmp_14714:
	return local_24;
}

/*
=================
CG_DamageBlendBlob

Address: 0x14719
Stack Size: 0xb8
Calls: trap_R_AddRefEntityToScene, memset
Called by: CG_DrawActiveFrame
=================
*/
void CG_DamageBlendBlob(void) {
	int		local_14;
	char	local_18[64];
	int		local_58;
	int		local_5c;
	char	local_60[36];
	int		local_84;
	char	local_88;
	char	local_89;
	char	local_8a;
	char	local_8b[13];
	char	local_98[8];
	int		local_a0;
	char	local_a4[8];
	int		local_ac;
	int		local_b0;
	int		local_b4;

	if (bss_8dc8 != 0x0) goto jmp_14720;
	goto jmp_147f7;
jmp_14720:
	if (bss_deb0c != 0x0) goto jmp_14726;
	goto jmp_147f7;
jmp_14726:
	if (bss_e66b4 != 0x3) goto jmp_1472c;
	goto jmp_147f7;
jmp_1472c:
	*(int *)local_a4 = 0x1f4;
	local_a0 = (int)((float)bss_dc760 - bss_deb00);
	if (local_a0 <= 0x0) goto jmp_14741;
	if (local_a0 < *(int *)local_a4) goto jmp_14743;
jmp_14741:
	goto jmp_147f7;
jmp_14743:
	memset(&local_14, 0x0, 0x8c);
	local_14 = 0x2;
	*(int *)local_18 = 0x4;
	local_58 = (bss_dcd0c + (0x41000000 * bss_dcd18));
	local_5c = (bss_dcd10 + (0x41000000 * bss_dcd1c));
	*(int *)local_60 = (bss_dcd14 + (0x41000000 * bss_dcd20));
	local_58 = (local_58 + (bss_dcd24 * (0xc1000000 * bss_deb04)));
	local_5c = (local_5c + (bss_dcd28 * (0xc1000000 * bss_deb04)));
	*(int *)local_60 = (*(int *)local_60 + (bss_dcd2c * (0xc1000000 * bss_deb04)));
	local_58 = (local_58 + (bss_dcd30 * (0x41000000 * bss_deb08)));
	local_5c = (local_5c + (bss_dcd34 * (0x41000000 * bss_deb08)));
	*(int *)local_60 = (*(int *)local_60 + (bss_dcd38 * (0x41000000 * bss_deb08)));
	*(int *)local_98 = (0x40400000 * bss_deb0c);
	local_84 = bss_1041f4;
	local_88 = 0xff;
	local_89 = 0xff;
	local_8a = 0xff;
	local_b0 = (0x43480000 * (0x3f800000 - ((float)local_a0 / (float)*(int *)local_a4)));
	local_b4 = 0x4f000000;
	if (local_b0 < local_b4) goto jmp_147e9;
	local_ac = ((int)(local_b0 - local_b4) + 0x80000000);
	goto jmp_147ee;
jmp_147e9:
	local_ac = (int)local_b0;
jmp_147ee:
	*(char *)local_8b = local_ac;
	trap_R_AddRefEntityToScene(&local_14);
jmp_147f7:
}

/*
=================
CG_CalcViewValues

Address: 0x147f9
Stack Size: 0x3c
Calls: sqrt, sin, memset, CG_OffsetFirstPersonView, CG_OffsetThirdPersonView, fabs, CG_CalcFov, AnglesToAxis, CG_CalcVrect
Called by: CG_DrawActiveFrame
=================
*/
int CG_CalcViewValues(void) {
	int		local_14;
	int		local_18;
	char	local_1c[8];
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;

	memset(0xdccf4, 0x0, 0x170);
	CG_CalcVrect();
	local_14 = 0xdc780;
	if (*(int *)(local_14 + 0x4) != 0x5) goto jmp_1482c;
	block_copy((local_14 + 0x14), &bss_dcd0c, 0xc);
	block_copy((local_14 + 0x98), &bss_dce64, 0xc);
	AnglesToAxis(0xdce64, 0xdcd18);
	local_18 = CG_CalcFov();
	return local_18;
jmp_1482c:
	bss_deb3c = ((*(int *)(local_14 + 0x8) & 0x80) >> 0x7);
	local_18 = sin((0x40490fdb * ((float)(*(int *)(local_14 + 0x8) & 0x7f) / 0x42fe0000)));
	*(int *)local_1c = fabs(local_18);
	bss_deb38 = *(int *)local_1c;
	local_24 = *(int *)(local_14 + 0x20);
	local_28 = *(int *)(local_14 + 0x24);
	local_2c = sqrt(((local_24 * local_24) + (local_28 * local_28)));
	bss_deb40 = local_2c;
	block_copy((local_14 + 0x14), &bss_dcd0c, 0xc);
	block_copy((local_14 + 0x98), &bss_dce64, 0xc);
	if (bss_8438 == 0x0) goto jmp_1489d;
	if (bss_dc760 <= bss_deb44) goto jmp_1489d;
	bss_deb44 = (bss_dc760 + bss_8328);
	local_30 = 0x9974;
	*(int *)local_30 = (*(int *)local_30 + bss_8434);
jmp_1489d:
	if (bss_b0d4 <= 0x0) goto jmp_148e2;
	local_34 = (bss_dc760 - bss_dcc24);
	local_30 = ((bss_b0d4 - (float)local_34) / bss_b0d4);
	local_38 = local_30;
	if (local_38 <= 0x0) goto jmp_148df;
	if (local_38 >= 0x3f800000) goto jmp_148df;
	bss_dcd0c = (bss_dcd0c + (bss_dcc28 * local_30));
	bss_dcd10 = (bss_dcd10 + (bss_dcc2c * local_30));
	bss_dcd14 = (bss_dcd14 + (bss_dcc30 * local_30));
	goto jmp_148e2;
jmp_148df:
	bss_dcc24 = 0x0;
jmp_148e2:
	if (bss_dc778 == 0x0) goto jmp_148eb;
	CG_OffsetThirdPersonView();
	goto jmp_148ee;
jmp_148eb:
	CG_OffsetFirstPersonView();
jmp_148ee:
	AnglesToAxis(0xdce64, 0xdcd18);
	if (bss_dc77c == 0x0) goto jmp_14904;
	local_30 = 0xdcd40;
	*(int *)local_30 = (*(int *)local_30 | 0x5);
jmp_14904:
	local_30 = CG_CalcFov();
	return local_30;
}

/*
=================
CG_PowerupTimerSounds

Address: 0x1490d
Stack Size: 0x28
Calls: trap_S_StartSound
Called by: CG_DrawActiveFrame
=================
*/
void CG_PowerupTimerSounds(void) {
	int		local_18;
	char	local_1c[8];
	int		local_24;

	*(int *)local_1c = 0x0;
jmp_14911:
	local_18 = *(int *)((*(int *)local_1c << 0x2) + (bss_c2330 + 0x164));
	if (local_18 > bss_dc760) goto jmp_14924;
	goto jmp_14951;
jmp_14924:
	if ((local_18 - bss_dc760) < 0x1388) goto jmp_1492d;
	goto jmp_14951;
jmp_1492d:
	local_24 = 0x3e8;
	if (((local_18 - bss_dc760) / local_24) == ((local_18 - bss_dc764) / local_24)) goto jmp_14951;
	trap_S_StartSound(0x0, *(int *)(bss_c2330 + 0xb8), 0x4, bss_104330);
jmp_14951:
	*(int *)local_1c = (*(int *)local_1c + 0x1);
	if (*(int *)local_1c < 0x10) goto jmp_14911;
}

/*
=================
CG_AddBufferedSound

Address: 0x1495d
Stack Size: 0xc
Called by: CG_CheckLocalSounds, CG_EntityEvent
=================
*/
void CG_AddBufferedSound(int arg_0) {
	int		local_8;

	if (arg_0 != 0x0) goto jmp_14964;
	goto jmp_14985;
jmp_14964:
	*(int *)((bss_dea84 << 0x2) + 0xdea90) = arg_0;
	bss_dea84 = ((bss_dea84 + 0x1) %% 0x14);
	if (bss_dea84 != bss_dea88) goto jmp_14985;
	local_8 = 0xdea88;
	*(int *)local_8 = (*(int *)local_8 + 0x1);
jmp_14985:
}

/*
=================
CG_PlayBufferedSounds

Address: 0x14987
Stack Size: 0x10
Calls: trap_S_StartLocalSound
Called by: CG_DrawActiveFrame
=================
*/
void CG_PlayBufferedSounds(void) {

	if (bss_dea8c >= bss_dc760) goto jmp_149be;
	if (bss_dea88 == bss_dea84) goto jmp_149be;
	if (*(int *)((bss_dea88 << 0x2) + 0xdea90) == 0x0) goto jmp_149be;
	trap_S_StartLocalSound(*(int *)((bss_dea88 << 0x2) + 0xdea90), 0x7);
	*(int *)((bss_dea88 << 0x2) + 0xdea90) = 0x0;
	bss_dea88 = ((bss_dea88 + 0x1) %% 0x14);
	bss_dea8c = (bss_dc760 + 0x2ee);
jmp_149be:
}

/*
=================
CG_DrawActiveFrame

Address: 0x149c0
Stack Size: 0x30
Calls: trap_Cvar_Set, trap_S_Respatialize, memcpy, trap_SetUserCmdValue, trap_R_ClearScene, trap_S_ClearLoopingSounds, CG_Printf, CG_DrawActive, va, CG_AddLagometerFrameInfo, CG_PowerupTimerSounds, CG_AddTestModel, CG_PlayBufferedSounds, CG_AddViewWeapon, CG_AddLocalEntities, CG_AddParticles, CG_AddMarks, CG_AddPacketEntities, CG_DamageBlendBlob, CG_CalcViewValues, CG_PredictPlayerState, CG_ProcessSnapshots, CG_DrawInformation, CG_UpdateCvars
Called by: vmMain
=================
*/
void CG_DrawActiveFrame(int arg_0, int arg_1, int arg_2) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	bss_dc760 = arg_0;
	bss_c2314 = arg_2;
	CG_UpdateCvars();
	if ((char)*(char *)bss_dce7c == 0x0) goto jmp_149d6;
	CG_DrawInformation();
	goto jmp_14afe;
jmp_149d6:
	trap_S_ClearLoopingSounds(0x0);
	trap_R_ClearScene();
	CG_ProcessSnapshots();
	if (bss_c2330 == 0x0) goto jmp_149ec;
	if ((*(int *)bss_c2330 & 0x2) == 0x0) goto jmp_149f1;
jmp_149ec:
	CG_DrawInformation();
	goto jmp_14afe;
jmp_149f1:
	trap_SetUserCmdValue(bss_dcc90, bss_dce78);
	local_1c = 0xc230c;
	*(int *)local_1c = (*(int *)local_1c + 0x1);
	CG_PredictPlayerState();
	if (*(int *)(bss_c2330 + 0x130) == 0x3) goto jmp_14a24;
	local_24 = 0x0;
	if (bss_9868 != local_24) goto jmp_14a1f;
	if (*(int *)(bss_c2330 + 0xe4) > local_24) goto jmp_14a24;
jmp_14a1f:
	local_20 = 0x1;
	goto jmp_14a27;
jmp_14a24:
	local_20 = 0x0;
jmp_14a27:
	bss_dc778 = local_20;
	local_28 = CG_CalcViewValues();
	local_18 = local_28;
	if (bss_dc778 != 0x0) goto jmp_14a3a;
	CG_DamageBlendBlob();
jmp_14a3a:
	if (bss_dc77c != 0x0) goto jmp_14a4a;
	CG_AddPacketEntities();
	CG_AddMarks();
	CG_AddParticles();
	CG_AddLocalEntities();
jmp_14a4a:
	CG_AddViewWeapon(0xdc780);
	CG_PlayBufferedSounds();
	if (bss_deb50 == 0x0) goto jmp_14a59;
	CG_AddTestModel();
jmp_14a59:
	*(int *)bss_dcd3c = bss_dc760;
	memcpy(0xdcd44, (bss_c2330 + 0xc), 0x20);
	CG_PowerupTimerSounds();
	trap_S_Respatialize(*(int *)(bss_c2330 + 0xb8), 0xdcd0c, 0xdcd18, local_18);
	if (arg_1 == 0x2) goto jmp_14a95;
	bss_dc75c = (bss_dc760 - bss_dc764);
	if (bss_dc75c >= 0x0) goto jmp_14a8e;
	bss_dc75c = 0x0;
jmp_14a8e:
	bss_dc764 = bss_dc760;
	CG_AddLagometerFrameInfo();
jmp_14a95:
	if (bss_7ff4 == bss_8214) goto jmp_14aec;
	if (bss_7ff4 >= bss_8214) goto jmp_14abc;
	local_2c = 0x7ff4;
	*(int *)local_2c = (*(int *)local_2c + ((bss_8104 * (float)bss_dc75c) / 0x447a0000));
	if (bss_7ff4 <= bss_8214) goto jmp_14ad7;
	bss_7ff4 = bss_8214;
	goto jmp_14ad7;
jmp_14abc:
	local_2c = 0x7ff4;
	*(int *)local_2c = (*(int *)local_2c - ((bss_8104 * (float)bss_dc75c) / 0x447a0000));
	if (bss_7ff4 >= bss_8214) goto jmp_14ad7;
	bss_7ff4 = bss_8214;
jmp_14ad7:
	if (bss_8104 == 0x0) goto jmp_14aec;
	local_2c = va(0x6c4c, bss_7ff4);
	trap_Cvar_Set(0x6c4f, local_2c);
jmp_14aec:
	CG_DrawActive(arg_1);
	if (bss_9208 == 0x0) goto jmp_14afe;
	CG_Printf(0x6c39, cg);
jmp_14afe:
}

/*
=================
CG_MachineGunEjectBrass

Address: 0x14b00
Stack Size: 0xa0
Calls: AxisCopy, CG_PointContents, AnglesToAxis, rand, CG_AllocLocalEntity
=================
*/
void CG_MachineGunEjectBrass(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	char	local_7c[8];
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;

	arg_0 = arg_0;
	local_6c = 0x3f800000;
	if (bss_aa78 > 0x0) goto jmp_14b0e;
	goto jmp_14cf1;
jmp_14b0e:
	local_70 = CG_AllocLocalEntity();
	local_10 = local_70;
	local_50 = (local_10 + 0x98);
	local_38 = 0x0;
	local_74 = rand();
	local_3c = ((0x42200000 * (0x40000000 * (((float)(local_74 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0xc2480000);
	local_78 = rand();
	local_40 = ((0x42480000 * (0x40000000 * (((float)(local_78 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x42c80000);
	*(int *)(local_10 + 0x8) = 0x3;
	*(int *)(local_10 + 0x10) = bss_dc760;
	*(int *)local_7c = rand();
	*(int *)(local_10 + 0x14) = (int)((float)(*(int *)(local_10 + 0x10) + bss_aa78) + ((float)(bss_aa78 / 0x4) * ((float)(*(int *)local_7c & 0x7fff) / 0x46fffe00)));
	*(int *)(local_10 + 0x20) = 0x5;
	local_84 = rand();
	*(int *)(local_10 + 0x24) = (bss_dc760 - (local_84 & 0xf));
	AnglesToAxis((arg_0 + 0x2c0), &local_14);
	local_44 = 0x41000000;
	local_48 = 0xc0800000;
	local_4c = 0x41c00000;
	local_88 = local_44;
	local_60 = (((local_88 * local_14) + (local_48 * local_20)) + (local_4c * local_2c));
	local_64 = (((local_88 * local_18) + (local_48 * local_24)) + (local_4c * local_30));
	local_68 = (((local_44 * local_1c) + (local_48 * local_28)) + (local_4c * local_34));
	*(int *)(local_50 + 0x44) = (*(int *)(arg_0 + 0x2b4) + local_60);
	*(int *)(local_50 + 0x48) = (*(int *)(arg_0 + 0x2b8) + local_64);
	*(int *)(local_50 + 0x4c) = (*(int *)(arg_0 + 0x2bc) + local_68);
	block_copy((local_50 + 0x44), (local_10 + 0x2c), 0xc);
	local_8c = CG_PointContents((local_50 + 0x44), 0xffffffff);
	if ((local_8c & 0x20) == 0x0) goto jmp_14c21;
	local_6c = 0x3dcccccd;
jmp_14c21:
	local_90 = local_38;
	local_54 = (((local_90 * local_14) + (local_3c * local_20)) + (local_40 * local_2c));
	local_58 = (((local_90 * local_18) + (local_3c * local_24)) + (local_40 * local_30));
	local_5c = (((local_38 * local_1c) + (local_3c * local_28)) + (local_40 * local_34));
	*(int *)(local_10 + 0x38) = (local_54 * local_6c);
	*(int *)(local_10 + 0x3c) = (local_58 * local_6c);
	*(int *)(local_10 + 0x40) = (local_5c * local_6c);
	AxisCopy(0x1d68, (local_50 + 0x1c));
	*(int *)(local_50 + 0x8) = bss_1041d0;
	*(int *)(local_10 + 0x68) = (0x3ecccccd * local_6c);
	*(int *)(local_10 + 0x44) = 0x2;
	*(int *)(local_10 + 0x48) = bss_dc760;
	local_94 = rand();
	*(int *)(local_10 + 0x50) = (float)(local_94 & 0x1f);
	local_98 = rand();
	*(int *)(local_10 + 0x54) = (float)(local_98 & 0x1f);
	local_9c = rand();
	*(int *)(local_10 + 0x58) = (float)(local_9c & 0x1f);
	*(int *)(local_10 + 0x5c) = 0x40000000;
	*(int *)(local_10 + 0x60) = 0x3f800000;
	*(int *)(local_10 + 0x64) = 0x0;
	*(int *)(local_10 + 0xc) = 0x2;
	*(int *)(local_10 + 0x94) = 0x2;
	*(int *)(local_10 + 0x90) = 0x0;
jmp_14cf1:
}

/*
=================
CG_ShotgunEjectBrass

Address: 0x14cf3
Stack Size: 0xa0
Calls: AxisCopy, CG_PointContents, AnglesToAxis, rand, CG_AllocLocalEntity
=================
*/
void CG_ShotgunEjectBrass(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	char	local_80[8];
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;

	arg_0 = arg_0;
	if (bss_aa78 > 0x0) goto jmp_14cfe;
	goto jmp_14f12;
jmp_14cfe:
	local_6c = 0x0;
jmp_14d01:
	local_70 = 0x3f800000;
	local_74 = CG_AllocLocalEntity();
	local_10 = local_74;
	local_50 = (local_10 + 0x98);
	local_78 = rand();
	local_38 = ((0x42700000 * (0x40000000 * (((float)(local_78 & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x42700000);
	if (local_6c != 0x0) goto jmp_14d42;
	local_7c = rand();
	local_3c = ((0x41200000 * (0x40000000 * (((float)(local_7c & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x42200000);
	goto jmp_14d57;
jmp_14d42:
	local_7c = rand();
	local_3c = ((0x41200000 * (0x40000000 * (((float)(local_7c & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0xc2200000);
jmp_14d57:
	local_7c = rand();
	local_40 = ((0x42480000 * (0x40000000 * (((float)(local_7c & 0x7fff) / 0x46fffe00) - 0x3f000000))) + 0x42c80000);
	*(int *)(local_10 + 0x8) = 0x3;
	*(int *)(local_10 + 0x10) = bss_dc760;
	*(int *)local_80 = rand();
	*(int *)(local_10 + 0x14) = (int)((float)(*(int *)(local_10 + 0x10) + (0x3 * bss_aa78)) + ((float)bss_aa78 * ((float)(*(int *)local_80 & 0x7fff) / 0x46fffe00)));
	*(int *)(local_10 + 0x20) = 0x5;
	*(int *)(local_10 + 0x24) = bss_dc760;
	AnglesToAxis((arg_0 + 0x2c0), &local_14);
	local_44 = 0x41000000;
	local_48 = 0x0;
	local_4c = 0x41c00000;
	local_88 = local_44;
	local_60 = (((local_88 * local_14) + (local_48 * local_20)) + (local_4c * local_2c));
	local_64 = (((local_88 * local_18) + (local_48 * local_24)) + (local_4c * local_30));
	local_68 = (((local_44 * local_1c) + (local_48 * local_28)) + (local_4c * local_34));
	*(int *)(local_50 + 0x44) = (*(int *)(arg_0 + 0x2b4) + local_60);
	*(int *)(local_50 + 0x48) = (*(int *)(arg_0 + 0x2b8) + local_64);
	*(int *)(local_50 + 0x4c) = (*(int *)(arg_0 + 0x2bc) + local_68);
	block_copy((local_50 + 0x44), (local_10 + 0x2c), 0xc);
	local_8c = CG_PointContents((local_50 + 0x44), 0xffffffff);
	if ((local_8c & 0x20) == 0x0) goto jmp_14e3b;
	local_70 = 0x3dcccccd;
jmp_14e3b:
	local_90 = local_38;
	local_54 = (((local_90 * local_14) + (local_3c * local_20)) + (local_40 * local_2c));
	local_58 = (((local_90 * local_18) + (local_3c * local_24)) + (local_40 * local_30));
	local_5c = (((local_38 * local_1c) + (local_3c * local_28)) + (local_40 * local_34));
	*(int *)(local_10 + 0x38) = (local_54 * local_70);
	*(int *)(local_10 + 0x3c) = (local_58 * local_70);
	*(int *)(local_10 + 0x40) = (local_5c * local_70);
	AxisCopy(0x1d68, (local_50 + 0x1c));
	*(int *)(local_50 + 0x8) = bss_1041d4;
	*(int *)(local_10 + 0x68) = 0x3e99999a;
	*(int *)(local_10 + 0x44) = 0x2;
	*(int *)(local_10 + 0x48) = bss_dc760;
	local_94 = rand();
	*(int *)(local_10 + 0x50) = (float)(local_94 & 0x1f);
	local_98 = rand();
	*(int *)(local_10 + 0x54) = (float)(local_98 & 0x1f);
	local_9c = rand();
	*(int *)(local_10 + 0x58) = (float)(local_9c & 0x1f);
	*(int *)(local_10 + 0x5c) = 0x3f800000;
	*(int *)(local_10 + 0x60) = 0x3f000000;
	*(int *)(local_10 + 0x64) = 0x0;
	*(int *)(local_10 + 0xc) = 0x2;
	*(int *)(local_10 + 0x94) = 0x2;
	*(int *)(local_10 + 0x90) = 0x0;
	local_6c = (local_6c + 0x1);
	if (local_6c < 0x2) goto jmp_14d01;
jmp_14f12:
}

/*
=================
CG_RailTrail

Address: 0x14f14
Stack Size: 0x298
Calls: RotatePointAroundVector, PerpendicularVector, VectorNormalize, AxisClear, CG_AllocLocalEntity
Called by: CG_EntityEvent
=================
*/
void CG_RailTrail(int arg_0, int arg_1, int arg_2) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	char	local_48[424];
	int		local_1f0;
	int		local_1f4;
	int		local_1f8;
	int		local_1fc;
	char	local_200[12];
	int		local_20c;
	int		local_210;
	char	local_214[12];
	int		local_220;
	int		local_224;
	int		local_228;
	int		local_22c;
	int		local_230;
	int		local_234;
	int		local_238;
	int		local_23c;
	int		local_240;
	int		local_244;
	int		local_248;
	int		local_24c;
	int		local_250;
	int		local_254;
	int		local_258;
	int		local_25c;
	char	local_260[12];
	int		local_26c;
	int		local_270;
	int		local_274;
	int		local_278;
	int		local_27c;
	int		local_280;
	int		local_284;
	int		local_288;
	int		local_28c;
	int		local_290;
	int		local_294;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	local_210 = (arg_1 + 0x8);
	*(int *)local_210 = (*(int *)local_210 - 0x40800000);
	*(int *)local_214 = CG_AllocLocalEntity();
	local_18 = *(int *)local_214;
	local_2c = (local_18 + 0x98);
	*(int *)(local_18 + 0x8) = 0x6;
	*(int *)(local_18 + 0x10) = bss_dc760;
	*(int *)(local_18 + 0x14) = (int)((float)bss_dc760 + bss_b1e4);
	*(int *)(local_18 + 0x1c) = (0x3f800000 / (float)(*(int *)(local_18 + 0x14) - *(int *)(local_18 + 0x10)));
	*(int *)(local_2c + 0x80) = ((float)bss_dc760 / 0x447a0000);
	*(int *)local_2c = 0x4;
	*(int *)(local_2c + 0x70) = bss_1041dc;
	block_copy(arg_1, (local_2c + 0x44), 0xc);
	block_copy(arg_2, (local_2c + 0x54), 0xc);
	local_224 = (0x437f0000 * *(int *)(arg_0 + 0x4c));
	local_228 = 0x4f000000;
	if (local_224 < local_228) goto jmp_14fa9;
	local_220 = ((int)(local_224 - local_228) + 0x80000000);
	goto jmp_14fae;
jmp_14fa9:
	local_220 = (int)local_224;
jmp_14fae:
	*(char *)(local_2c + 0x74) = local_220;
	local_230 = (0x437f0000 * *(int *)(arg_0 + 0x50));
	local_234 = 0x4f000000;
	if (local_230 < local_234) goto jmp_14fd2;
	local_22c = ((int)(local_230 - local_234) + 0x80000000);
	goto jmp_14fd7;
jmp_14fd2:
	local_22c = (int)local_230;
jmp_14fd7:
	*(char *)(local_2c + 0x75) = local_22c;
	local_23c = (0x437f0000 * *(int *)(arg_0 + 0x54));
	local_240 = 0x4f000000;
	if (local_23c < local_240) goto jmp_14ffb;
	local_238 = ((int)(local_23c - local_240) + 0x80000000);
	goto jmp_15000;
jmp_14ffb:
	local_238 = (int)local_23c;
jmp_15000:
	*(char *)(local_2c + 0x76) = local_238;
	*(char *)(local_2c + 0x77) = 0xff;
	*(int *)(local_18 + 0x6c) = (0x3f400000 * *(int *)(arg_0 + 0x4c));
	*(int *)(local_18 + 0x70) = (0x3f400000 * *(int *)(arg_0 + 0x50));
	*(int *)(local_18 + 0x74) = (0x3f400000 * *(int *)(arg_0 + 0x54));
	*(int *)(local_18 + 0x78) = 0x3f800000;
	AxisClear((local_2c + 0x1c));
	if (bss_7cc8 == 0x0) goto jmp_15061;
	local_244 = (local_2c + 0x4c);
	*(int *)local_244 = (*(int *)local_244 - 0x41000000);
	local_248 = (local_2c + 0x5c);
	*(int *)local_248 = (*(int *)local_248 - 0x41000000);
	goto jmp_152b3;
jmp_15061:
	block_copy(arg_1, &local_20, 0xc);
	local_30 = (*(int *)arg_2 - *(int *)arg_1);
	local_24c = 0x4;
	local_34 = (*(int *)(arg_2 + local_24c) - *(int *)(arg_1 + local_24c));
	local_250 = 0x8;
	local_38 = (*(int *)(arg_2 + local_250) - *(int *)(arg_1 + local_250));
	local_254 = VectorNormalize(&local_30);
	local_20c = local_254;
	PerpendicularVector(local_200, &local_30);
	local_1c = 0x0;
jmp_150a6:
	RotatePointAroundVector(((0xc * local_1c) + &local_40), &local_30, local_200, (float)(0xa * local_1c));
	local_1c = (local_1c + 0x1);
	if (local_1c < 0x24) goto jmp_150a6;
	local_258 = 0x41a00000;
	local_20 = (local_20 + (local_258 * local_30));
	local_24 = (local_24 + (local_258 * local_34));
	local_28 = (local_28 + (0x41a00000 * local_38));
	local_25c = 0x40a00000;
	local_30 = (local_25c * local_30);
	local_34 = (local_25c * local_34);
	local_38 = (0x40a00000 * local_38);
	local_1fc = 0xffffffff;
	local_3c = 0x12;
	local_1c = 0x0;
	goto jmp_152ad;
jmp_15106:
	if (local_1c == local_1fc) goto jmp_1528a;
	local_1fc = (local_1c + 0x5);
	*(int *)local_260 = CG_AllocLocalEntity();
	local_18 = *(int *)local_260;
	local_2c = (local_18 + 0x98);
	*(int *)(local_18 + 0xc) = 0x1;
	*(int *)(local_18 + 0x8) = 0x4;
	*(int *)(local_18 + 0x10) = bss_dc760;
	*(int *)(local_18 + 0x14) = ((bss_dc760 + (local_1c >> 0x1)) + 0x258);
	*(int *)(local_18 + 0x1c) = (0x3f800000 / (float)(*(int *)(local_18 + 0x14) - *(int *)(local_18 + 0x10)));
	*(int *)(local_2c + 0x80) = ((float)bss_dc760 / 0x447a0000);
	*(int *)local_2c = 0x2;
	*(int *)(local_2c + 0x84) = 0x3f8ccccd;
	*(int *)(local_2c + 0x70) = bss_1041d8;
	local_270 = (0x437f0000 * *(int *)(arg_0 + 0x58));
	local_274 = 0x4f000000;
	if (local_270 < local_274) goto jmp_1518b;
	local_26c = ((int)(local_270 - local_274) + 0x80000000);
	goto jmp_15190;
jmp_1518b:
	local_26c = (int)local_270;
jmp_15190:
	*(char *)(local_2c + 0x74) = local_26c;
	local_27c = (0x437f0000 * *(int *)(arg_0 + 0x5c));
	local_280 = 0x4f000000;
	if (local_27c < local_280) goto jmp_151b4;
	local_278 = ((int)(local_27c - local_280) + 0x80000000);
	goto jmp_151b9;
jmp_151b4:
	local_278 = (int)local_27c;
jmp_151b9:
	*(char *)(local_2c + 0x75) = local_278;
	local_288 = (0x437f0000 * *(int *)(arg_0 + 0x60));
	local_28c = 0x4f000000;
	if (local_288 < local_28c) goto jmp_151dd;
	local_284 = ((int)(local_288 - local_28c) + 0x80000000);
	goto jmp_151e2;
jmp_151dd:
	local_284 = (int)local_288;
jmp_151e2:
	*(char *)(local_2c + 0x76) = local_284;
	*(char *)(local_2c + 0x77) = 0xff;
	*(int *)(local_18 + 0x6c) = (0x3f400000 * *(int *)(arg_0 + 0x58));
	*(int *)(local_18 + 0x70) = (0x3f400000 * *(int *)(arg_0 + 0x5c));
	*(int *)(local_18 + 0x74) = (0x3f400000 * *(int *)(arg_0 + 0x60));
	*(int *)(local_18 + 0x78) = 0x3f800000;
	*(int *)(local_18 + 0x20) = 0x2;
	*(int *)(local_18 + 0x24) = bss_dc760;
	block_copy(&local_20, &local_1f0, 0xc);
	local_290 = 0x40800000;
	local_294 = (0xc * local_3c);
	local_1f0 = (local_1f0 + (local_290 * *(int *)(local_294 + &local_40)));
	local_1f4 = (local_1f4 + (local_290 * *(int *)(local_294 + &local_44)));
	local_1f8 = (local_1f8 + (0x40800000 * *(int *)((0xc * local_3c) + local_48)));
	block_copy(&local_1f0, (local_18 + 0x2c), 0xc);
	*(int *)(local_18 + 0x38) = (0x40c00000 * *(int *)((0xc * local_3c) + &local_40));
	*(int *)(local_18 + 0x3c) = (0x40c00000 * *(int *)((0xc * local_3c) + &local_44));
	*(int *)(local_18 + 0x40) = (0x40c00000 * *(int *)((0xc * local_3c) + local_48));
jmp_1528a:
	local_20 = (local_20 + local_30);
	local_24 = (local_24 + local_34);
	local_28 = (local_28 + local_38);
	local_3c = ((local_3c + 0x1) %% 0x24);
	local_1c = (local_1c + 0x5);
jmp_152ad:
	if ((float)local_1c < local_20c) goto jmp_15106;
jmp_152b3:
}

/*
=================
CG_RocketTrail

Address: 0x152b5
Stack Size: 0x9c
Calls: CG_SmokePuff, CG_BubbleTrail, CG_PointContents, BG_EvaluateTrajectory
Called by: CG_GrenadeTrail
=================
*/
void CG_RocketTrail(int arg_0, int arg_1) {
	int		local_38;
	char	local_3c[12];
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	char	local_64[12];
	int		local_70;
	int		local_74;
	char	local_78[12];
	int		local_84;
	char	local_88[8];
	int		local_90;
	int		local_94;
	int		local_98;

	arg_0 = arg_0;
	arg_1 = arg_1;
	if (bss_7dd8 == 0x0) goto jmp_152c4;
	goto jmp_153aa;
jmp_152c4:
	*(int *)local_78 = 0x0;
	local_54 = *(int *)local_78;
	local_58 = *(int *)local_78;
	local_5c = 0x0;
	local_4c = 0x32;
	local_50 = arg_0;
	local_70 = *(int *)(arg_0 + 0x1b4);
	local_38 = (local_4c * ((local_70 + local_4c) / local_4c));
	BG_EvaluateTrajectory((local_50 + 0xc), bss_dc760, local_64);
	local_84 = CG_PointContents(local_64, 0xffffffff);
	local_60 = local_84;
	if (*(int *)(local_50 + 0xc) != 0x0) goto jmp_15316;
	*(int *)(arg_0 + 0x1b4) = bss_dc760;
	goto jmp_153aa;
jmp_15316:
	BG_EvaluateTrajectory((local_50 + 0xc), *(int *)(arg_0 + 0x1b4), local_3c);
	*(int *)local_88 = CG_PointContents(local_3c, 0xffffffff);
	local_74 = *(int *)local_88;
	*(int *)(arg_0 + 0x1b4) = bss_dc760;
	if ((local_60 & 0x38) == 0x0) goto jmp_153a2;
	if (((local_60 & local_74) & 0x20) == 0x0) goto jmp_153aa;
	CG_BubbleTrail(local_3c, local_64, 0x41000000);
	goto jmp_153aa;
jmp_15353:
	BG_EvaluateTrajectory((local_50 + 0xc), local_38, local_3c);
#define next_call_arg_0 "local_3c"
#define next_call_arg_1 "&local_54"
#define next_call_arg_2 "*(int *)(arg_1 + 0x74)"
	local_90 = 0x3f800000;
#define next_call_arg_3 "local_90"
#define next_call_arg_4 "local_90"
#define next_call_arg_5 "local_90"
#define next_call_arg_6 "0x3ea8f5c3"
#define next_call_arg_7 "*(int *)(arg_1 + 0x78)"
#define next_call_arg_8 "local_38"
	local_94 = 0x0;
#define next_call_arg_9 "local_94"
#define next_call_arg_10 "local_94"
#define next_call_arg_11 "bss_104230"
	local_98 = CG_SmokePuff();
	local_48 = local_98;
	*(int *)(local_48 + 0x8) = 0x7;
	local_38 = (local_38 + local_4c);
jmp_153a2:
	if (local_38 <= *(int *)(arg_0 + 0x1b4)) goto jmp_15353;
jmp_153aa:
}

/*
=================
CG_PlasmaTrail

Address: 0x153ac
Stack Size: 0xdc
Calls: AxisCopy, CG_PointContents, AnglesToAxis, rand, CG_AllocLocalEntity, BG_EvaluateTrajectory
=================
*/
void CG_PlasmaTrail(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	char	local_94[8];
	int		local_9c;
	int		local_a0;
	int		local_a4;
	int		local_a8;
	int		local_ac;
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;
	int		local_c4;
	int		local_c8;
	int		local_cc;
	int		local_d0;
	int		local_d4;
	int		local_d8;

	arg_1 = arg_1;
	local_70 = 0x3f800000;
	local_84 = 0x0;
	if (bss_7dd8 != local_84) goto jmp_153c1;
	if (bss_7aa8 == local_84) goto jmp_153c3;
jmp_153c1:
	goto jmp_15663;
jmp_153c3:
	local_80 = arg_0;
	BG_EvaluateTrajectory((local_80 + 0xc), bss_dc760, &local_74);
	local_88 = CG_AllocLocalEntity();
	local_14 = local_88;
	local_3c = (local_14 + 0x98);
	local_8c = rand();
	local_40 = (0x42700000 - (0x42f00000 * (0x40000000 * (((float)(local_8c & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	local_90 = rand();
	local_44 = (0x42200000 - (0x42a00000 * (0x40000000 * (((float)(local_90 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	*(int *)local_94 = rand();
	local_48 = (0x42c80000 - (0x43480000 * (0x40000000 * (((float)(*(int *)local_94 & 0x7fff) / 0x46fffe00) - 0x3f000000))));
	*(int *)(local_14 + 0x8) = 0x4;
	*(int *)(local_14 + 0xc) = 0x2;
	*(int *)(local_14 + 0x94) = 0x0;
	*(int *)(local_14 + 0x90) = 0x0;
	*(int *)(local_14 + 0x10) = bss_dc760;
	*(int *)(local_14 + 0x14) = (*(int *)(local_14 + 0x10) + 0x258);
	*(int *)(local_14 + 0x20) = 0x5;
	*(int *)(local_14 + 0x24) = bss_dc760;
	AnglesToAxis((arg_0 + 0x2c0), &local_18);
	local_9c = 0x40000000;
	local_4c = local_9c;
	local_50 = local_9c;
	local_54 = 0x40000000;
	local_a0 = local_4c;
	local_64 = (((local_a0 * local_18) + (local_50 * local_24)) + (local_54 * local_30));
	local_68 = (((local_a0 * local_1c) + (local_50 * local_28)) + (local_54 * local_34));
	local_6c = (((local_4c * local_20) + (local_50 * local_2c)) + (local_54 * local_38));
	*(int *)(local_3c + 0x44) = (local_74 + local_64);
	*(int *)(local_3c + 0x48) = (local_78 + local_68);
	*(int *)(local_3c + 0x4c) = (local_7c + local_6c);
	block_copy((local_3c + 0x44), (local_14 + 0x2c), 0xc);
	local_a4 = CG_PointContents((local_3c + 0x44), 0xffffffff);
	if ((local_a4 & 0x20) == 0x0) goto jmp_154e9;
	local_70 = 0x3dcccccd;
jmp_154e9:
	local_a8 = local_40;
	local_58 = (((local_a8 * local_18) + (local_44 * local_24)) + (local_48 * local_30));
	local_5c = (((local_a8 * local_1c) + (local_44 * local_28)) + (local_48 * local_34));
	local_60 = (((local_40 * local_20) + (local_44 * local_2c)) + (local_48 * local_38));
	*(int *)(local_14 + 0x38) = (local_58 * local_70);
	*(int *)(local_14 + 0x3c) = (local_5c * local_70);
	*(int *)(local_14 + 0x40) = (local_60 * local_70);
	AxisCopy(0x1d68, (local_3c + 0x1c));
	*(int *)(local_3c + 0x80) = ((float)bss_dc760 / 0x447a0000);
	*(int *)local_3c = 0x2;
	*(int *)(local_3c + 0x84) = 0x3e800000;
	*(int *)(local_3c + 0x70) = bss_1041d8;
	*(int *)(local_14 + 0x68) = 0x3e99999a;
	local_b0 = (0x427c0000 * *(int *)(arg_1 + 0x28));
	local_b4 = 0x4f000000;
	if (local_b0 < local_b4) goto jmp_1558c;
	local_ac = ((int)(local_b0 - local_b4) + 0x80000000);
	goto jmp_15591;
jmp_1558c:
	local_ac = (int)local_b0;
jmp_15591:
	*(char *)(local_3c + 0x74) = local_ac;
	local_bc = (0x427c0000 * *(int *)(arg_1 + 0x2c));
	local_c0 = 0x4f000000;
	if (local_bc < local_c0) goto jmp_155b5;
	local_b8 = ((int)(local_bc - local_c0) + 0x80000000);
	goto jmp_155ba;
jmp_155b5:
	local_b8 = (int)local_bc;
jmp_155ba:
	*(char *)(local_3c + 0x75) = local_b8;
	local_c8 = (0x427c0000 * *(int *)(arg_1 + 0x30));
	local_cc = 0x4f000000;
	if (local_c8 < local_cc) goto jmp_155de;
	local_c4 = ((int)(local_c8 - local_cc) + 0x80000000);
	goto jmp_155e3;
jmp_155de:
	local_c4 = (int)local_c8;
jmp_155e3:
	*(char *)(local_3c + 0x76) = local_c4;
	*(char *)(local_3c + 0x77) = 0x3f;
	*(int *)(local_14 + 0x6c) = (0x3e4ccccd * *(int *)(arg_1 + 0x28));
	*(int *)(local_14 + 0x70) = (0x3e4ccccd * *(int *)(arg_1 + 0x2c));
	*(int *)(local_14 + 0x74) = (0x3e4ccccd * *(int *)(arg_1 + 0x30));
	*(int *)(local_14 + 0x78) = 0x3e800000;
	*(int *)(local_14 + 0x44) = 0x2;
	*(int *)(local_14 + 0x48) = bss_dc760;
	local_d0 = rand();
	*(int *)(local_14 + 0x50) = (float)(local_d0 & 0x1f);
	local_d4 = rand();
	*(int *)(local_14 + 0x54) = (float)(local_d4 & 0x1f);
	local_d8 = rand();
	*(int *)(local_14 + 0x58) = (float)(local_d8 & 0x1f);
	*(int *)(local_14 + 0x5c) = 0x3f800000;
	*(int *)(local_14 + 0x60) = 0x3f000000;
	*(int *)(local_14 + 0x64) = 0x0;
jmp_15663:
}

/*
=================
CG_GrappleTrail

Address: 0x15665
Stack Size: 0xd0
Calls: trap_R_AddRefEntityToScene, memset, AxisClear, Distance, AngleVectors, BG_EvaluateTrajectory
Called by: CG_Grapple
=================
*/
void CG_GrappleTrail(int arg_0) {
	char	local_18[28];
	char	local_34[40];
	int		local_5c;
	int		local_60;
	char	local_64[8];
	char	local_6c[28];
	int		local_88;
	char	local_8c;
	char	local_8d;
	char	local_8e;
	char	local_8f[21];
	int		local_a4;
	int		local_a8;
	int		local_ac;
	char	local_b0[12];
	int		local_bc;
	char	local_c0[12];
	int		local_cc;

	arg_0 = arg_0;
	local_bc = arg_0;
	BG_EvaluateTrajectory((local_bc + 0xc), bss_dc760, local_b0);
	*(int *)(arg_0 + 0x1b4) = bss_dc760;
	memset(local_18, 0x0, 0x8c);
	block_copy(((0x2cc * *(int *)(arg_0 + 0x8c)) + 0xf5c0), &local_5c, 0xc);
	*(int *)local_64 = (*(int *)local_64 + 0x41d00000);
	AngleVectors(((0x2cc * *(int *)(arg_0 + 0x8c)) + 0xf5cc), local_c0, 0x0, &local_a4);
	local_5c = (local_5c + (0xc0c00000 * local_a4));
	local_60 = (local_60 + (0xc0c00000 * local_a8));
	*(int *)local_64 = (*(int *)local_64 + (0xc0c00000 * local_ac));
	block_copy(local_b0, local_6c, 0xc);
	local_cc = Distance(&local_5c, local_6c);
	if (local_cc >= 0x42800000) goto jmp_156db;
	goto jmp_156f8;
jmp_156db:
	*(int *)local_18 = 0x6;
	local_88 = bss_1041e0;
	AxisClear(local_34);
	local_8c = 0xff;
	local_8d = 0xff;
	local_8e = 0xff;
	*(char *)local_8f = 0xff;
	trap_R_AddRefEntityToScene(local_18);
jmp_156f8:
}

/*
=================
CG_GrenadeTrail

Address: 0x156fa
Stack Size: 0x10
Calls: CG_RocketTrail
=================
*/
void CG_GrenadeTrail(int arg_0, int arg_1) {

	CG_RocketTrail(arg_0, arg_1);
}

/*
=================
CG_RegisterWeapon

Address: 0x15706
Stack Size: 0x14c
Calls: trap_S_RegisterSound, trap_R_RegisterShader, trap_R_ModelBounds, trap_R_RegisterModel, memset, Q_strcat, COM_StripExtension, CG_RegisterItemVisuals, CG_Error
Called by: CG_DrawWeaponSelect, CG_AddViewWeapon, CG_AddPlayerWeapon, CG_RegisterItemVisuals
=================
*/
void CG_RegisterWeapon(int arg_0) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[12];
	char	local_30[64];
	char	local_70[16];
	int		local_80;
	int		local_84;
	char	local_88[8];
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;
	int		local_a0;
	int		local_a4;
	int		local_a8;
	int		local_ac;
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;
	int		local_c4;
	int		local_c8;
	int		local_cc;
	int		local_d0;
	int		local_d4;
	int		local_d8;
	int		local_dc;
	int		local_e0;
	int		local_e4;
	int		local_e8;
	int		local_ec;
	int		local_f0;
	int		local_f4;
	int		local_f8;
	int		local_fc;
	int		local_100;
	int		local_104;
	int		local_108;
	int		local_10c;
	int		local_110;
	int		local_114;
	int		local_118;
	int		local_11c;
	int		local_120;
	int		local_124;
	int		local_128;
	int		local_12c;
	int		local_130;
	int		local_134;
	int		local_138;
	int		local_13c;
	int		local_140;
	int		local_144;
	int		local_148;

	arg_0 = arg_0;
	local_20 = ((0x84 * arg_0) + 0xeacc);
	if (arg_0 != 0x0) goto jmp_15719;
	goto jmp_15c1b;
jmp_15719:
	if (*(int *)local_20 == 0x0) goto jmp_15720;
	goto jmp_15c1b;
jmp_15720:
	memset(local_20, 0x0, 0x84);
	*(int *)local_20 = 0x1;
	local_18 = 0x5c0;
	goto jmp_15751;
jmp_15733:
	if (*(int *)(local_18 + 0x24) != 0x1) goto jmp_1574b;
	if (*(int *)(local_18 + 0x28) != arg_0) goto jmp_1574b;
	*(int *)(local_20 + 0x4) = local_18;
	goto jmp_15756;
jmp_1574b:
	local_18 = (local_18 + 0x34);
jmp_15751:
	if (*(int *)local_18 != 0x0) goto jmp_15733;
jmp_15756:
	if (*(int *)local_18 != 0x0) goto jmp_15763;
	CG_Error(0x714d, arg_0);
jmp_15763:
	CG_RegisterItemVisuals(((local_18 - 0x58c) / 0x34));
	local_80 = trap_R_RegisterModel(*(int *)(local_18 + 0x8));
	*(int *)(local_20 + 0xc) = local_80;
	trap_R_ModelBounds(*(int *)(local_20 + 0xc), local_24, local_70);
	local_14 = 0x0;
jmp_1578e:
	local_84 = (local_14 << 0x2);
	*(int *)local_88 = *(int *)(local_84 + local_24);
	*(int *)(local_84 + (local_20 + 0x18)) = (*(int *)local_88 + (0x3f000000 * (*(int *)(local_84 + local_70) - *(int *)local_88)));
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x3) goto jmp_1578e;
	local_84 = trap_R_RegisterShader(*(int *)(local_18 + 0x18));
	*(int *)(local_20 + 0x44) = local_84;
	*(int *)local_88 = trap_R_RegisterShader(*(int *)(local_18 + 0x18));
	*(int *)(local_20 + 0x48) = *(int *)local_88;
	local_1c = 0x5c0;
	goto jmp_157f8;
jmp_157e1:
	if (*(int *)(local_1c + 0x24) != 0x2) goto jmp_157f2;
	if (*(int *)(local_1c + 0x28) != arg_0) goto jmp_157f2;
	goto jmp_157fd;
jmp_157f2:
	local_1c = (local_1c + 0x34);
jmp_157f8:
	if (*(int *)local_1c != 0x0) goto jmp_157e1;
jmp_157fd:
	local_90 = 0x0;
	if (*(int *)local_1c == local_90) goto jmp_1581f;
	if (*(int *)(local_1c + 0x8) == local_90) goto jmp_1581f;
	local_94 = trap_R_RegisterModel(*(int *)(local_1c + 0x8));
	*(int *)(local_20 + 0x4c) = local_94;
jmp_1581f:
	COM_StripExtension(*(int *)(local_18 + 0x8), local_30, 0x40);
	Q_strcat(local_30, 0x40, 0x7142);
	local_94 = trap_R_RegisterModel(local_30);
	*(int *)(local_20 + 0x14) = local_94;
	COM_StripExtension(*(int *)(local_18 + 0x8), local_30, 0x40);
	Q_strcat(local_30, 0x40, 0x7136);
	local_98 = trap_R_RegisterModel(local_30);
	*(int *)(local_20 + 0x10) = local_98;
	COM_StripExtension(*(int *)(local_18 + 0x8), local_30, 0x40);
	Q_strcat(local_30, 0x40, 0x712c);
	local_9c = trap_R_RegisterModel(local_30);
	*(int *)(local_20 + 0x8) = local_9c;
	if (*(int *)(local_20 + 0x8) != 0x0) goto jmp_1589c;
	local_a0 = trap_R_RegisterModel(0x7103);
	*(int *)(local_20 + 0x8) = local_a0;
jmp_1589c:
	if (arg_0 < 0x1) goto jmp_15bfa;
	if (arg_0 > 0xa) goto jmp_15bfa;
	goto *(int *)((arg_0 << 0x2) + 0x1cf8);
	*(int *)(local_20 + 0x28) = 0x3f19999a;
	*(int *)(local_20 + 0x2c) = 0x3f19999a;
	*(int *)(local_20 + 0x30) = 0x3f800000;
	local_a4 = trap_S_RegisterSound(0x70e4, 0x0);
	*(int *)(local_20 + 0x80) = local_a4;
	local_a8 = trap_S_RegisterSound(0x70c4, 0x0);
	*(int *)(local_20 + 0x34) = local_a8;
	goto jmp_15c1b;
	*(int *)(local_20 + 0x28) = 0x3f19999a;
	*(int *)(local_20 + 0x2c) = 0x3f19999a;
	*(int *)(local_20 + 0x30) = 0x3f800000;
	local_ac = trap_S_RegisterSound(0x70a5, 0x0);
	*(int *)(local_20 + 0x7c) = local_ac;
	local_b0 = trap_S_RegisterSound(0x7082, 0x0);
	*(int *)(local_20 + 0x80) = local_b0;
	local_b4 = trap_S_RegisterSound(0x705e, 0x0);
	*(int *)(local_20 + 0x34) = local_b4;
	local_b8 = trap_R_RegisterShader(0x704d);
	bss_1041e0 = local_b8;
	local_bc = trap_R_RegisterModel(0x7031);
	bss_1042d0 = local_bc;
	local_c0 = trap_S_RegisterSound(0x700e, 0x0);
	bss_1043a4 = local_c0;
	local_c4 = trap_S_RegisterSound(0x6fea, 0x0);
	bss_1043a8 = local_c4;
	local_c8 = trap_S_RegisterSound(0x6fc6, 0x0);
	bss_1043ac = local_c8;
	goto jmp_15c1b;
	*(int *)(local_20 + 0x28) = 0x3f19999a;
	*(int *)(local_20 + 0x2c) = 0x3f19999a;
	*(int *)(local_20 + 0x30) = 0x3f800000;
	local_cc = trap_R_RegisterModel(0x6fa8);
	*(int *)(local_20 + 0x50) = local_cc;
	*(int *)(local_20 + 0x58) = 0x15665;
	*(int *)(local_20 + 0x5c) = 0x43480000;
	*(int *)(local_20 + 0x60) = 0x3f800000;
	*(int *)(local_20 + 0x64) = 0x3f400000;
	*(int *)(local_20 + 0x68) = 0x0;
	local_d0 = trap_S_RegisterSound(0x70a5, 0x0);
	*(int *)(local_20 + 0x7c) = local_d0;
	local_d4 = trap_S_RegisterSound(0x70e4, 0x0);
	*(int *)(local_20 + 0x80) = local_d4;
	local_d8 = trap_R_RegisterShader(0x704d);
	bss_1041e0 = local_d8;
	goto jmp_15c1b;
	*(int *)(local_20 + 0x28) = 0x3f800000;
	*(int *)(local_20 + 0x2c) = 0x3f800000;
	*(int *)(local_20 + 0x30) = 0x0;
	local_dc = trap_S_RegisterSound(0x6f82, 0x0);
	*(int *)(local_20 + 0x34) = local_dc;
	local_e0 = trap_S_RegisterSound(0x6f5c, 0x0);
	*(int *)(local_20 + 0x38) = local_e0;
	local_e4 = trap_S_RegisterSound(0x6f36, 0x0);
	*(int *)(local_20 + 0x3c) = local_e4;
	local_e8 = trap_S_RegisterSound(0x6f10, 0x0);
	*(int *)(local_20 + 0x40) = local_e8;
	*(int *)(local_20 + 0x70) = 0x14b00;
	local_ec = trap_R_RegisterShader(0x6f00);
	bss_1042dc = local_ec;
	goto jmp_15c1b;
	*(int *)(local_20 + 0x28) = 0x3f800000;
	*(int *)(local_20 + 0x2c) = 0x3f800000;
	*(int *)(local_20 + 0x30) = 0x0;
	local_f0 = trap_S_RegisterSound(0x6edd, 0x0);
	*(int *)(local_20 + 0x34) = local_f0;
	*(int *)(local_20 + 0x70) = 0x14cf3;
	goto jmp_15c1b;
	local_f4 = trap_R_RegisterModel(0x6fa8);
	*(int *)(local_20 + 0x50) = local_f4;
	local_f8 = trap_S_RegisterSound(0x6ebc, 0x0);
	*(int *)(local_20 + 0x54) = local_f8;
	*(int *)(local_20 + 0x58) = 0x152b5;
	*(int *)(local_20 + 0x5c) = 0x43480000;
	*(int *)(local_20 + 0x78) = 0x44fa0000;
	*(int *)(local_20 + 0x74) = 0x42800000;
	*(int *)(local_20 + 0x60) = 0x3f800000;
	*(int *)(local_20 + 0x64) = 0x3f400000;
	*(int *)(local_20 + 0x68) = 0x0;
	*(int *)(local_20 + 0x28) = 0x3f800000;
	*(int *)(local_20 + 0x2c) = 0x3f400000;
	*(int *)(local_20 + 0x30) = 0x0;
	local_fc = trap_S_RegisterSound(0x6e9a, 0x0);
	*(int *)(local_20 + 0x34) = local_fc;
	local_100 = trap_R_RegisterShader(0x6e8a);
	bss_1042e0 = local_100;
	goto jmp_15c1b;
	local_104 = trap_R_RegisterModel(0x6e71);
	*(int *)(local_20 + 0x50) = local_104;
	*(int *)(local_20 + 0x58) = 0x156fa;
	*(int *)(local_20 + 0x78) = 0x442f0000;
	*(int *)(local_20 + 0x74) = 0x42000000;
	*(int *)(local_20 + 0x28) = 0x3f800000;
	*(int *)(local_20 + 0x2c) = 0x3f333333;
	*(int *)(local_20 + 0x30) = 0x0;
	local_108 = trap_S_RegisterSound(0x6e4e, 0x0);
	*(int *)(local_20 + 0x34) = local_108;
	local_10c = trap_R_RegisterShader(0x6e3d);
	bss_1042e4 = local_10c;
	goto jmp_15c1b;
	*(int *)(local_20 + 0x58) = 0x153ac;
	local_110 = trap_S_RegisterSound(0x6e1d, 0x0);
	*(int *)(local_20 + 0x54) = local_110;
	*(int *)(local_20 + 0x28) = 0x3f19999a;
	*(int *)(local_20 + 0x2c) = 0x3f19999a;
	*(int *)(local_20 + 0x30) = 0x3f800000;
	local_114 = trap_S_RegisterSound(0x6dfb, 0x0);
	*(int *)(local_20 + 0x34) = local_114;
	local_118 = trap_R_RegisterShader(0x6deb);
	bss_1042d8 = local_118;
	local_11c = trap_R_RegisterShader(0x6de2);
	bss_1041d8 = local_11c;
	goto jmp_15c1b;
	local_120 = trap_S_RegisterSound(0x6dc1, 0x0);
	*(int *)(local_20 + 0x7c) = local_120;
	*(int *)(local_20 + 0x28) = 0x3f800000;
	*(int *)(local_20 + 0x2c) = 0x3f000000;
	*(int *)(local_20 + 0x30) = 0x0;
	local_124 = trap_S_RegisterSound(0x6d9e, 0x0);
	*(int *)(local_20 + 0x34) = local_124;
	local_128 = trap_R_RegisterShader(0x6d90);
	bss_1042d4 = local_128;
	local_12c = trap_R_RegisterShader(0x6de2);
	bss_1041d8 = local_12c;
	local_130 = trap_R_RegisterShader(0x6d87);
	bss_1041dc = local_130;
	goto jmp_15c1b;
	local_134 = trap_S_RegisterSound(0x6d69, 0x0);
	*(int *)(local_20 + 0x7c) = local_134;
	*(int *)(local_20 + 0x28) = 0x3f800000;
	*(int *)(local_20 + 0x2c) = 0x3f333333;
	*(int *)(local_20 + 0x30) = 0x3f800000;
	local_138 = trap_S_RegisterSound(0x6d4a, 0x0);
	*(int *)(local_20 + 0x34) = local_138;
	local_13c = trap_R_RegisterShader(0x6d3d);
	bss_1042e8 = local_13c;
	local_140 = trap_R_RegisterModel(0x6d25);
	*(int *)(local_20 + 0x50) = local_140;
	local_144 = trap_S_RegisterSound(0x6ebc, 0x0);
	*(int *)(local_20 + 0x54) = local_144;
	goto jmp_15c1b;
jmp_15bfa:
	*(int *)(local_20 + 0x28) = 0x3f800000;
	*(int *)(local_20 + 0x2c) = 0x3f800000;
	*(int *)(local_20 + 0x30) = 0x3f800000;
	local_148 = trap_S_RegisterSound(0x6e9a, 0x0);
	*(int *)(local_20 + 0x34) = local_148;
jmp_15c1b:
}

/*
=================
CG_RegisterItemVisuals

Address: 0x15c1d
Stack Size: 0x30
Calls: trap_R_RegisterShader, trap_R_RegisterModel, memset, CG_RegisterWeapon, CG_Error
Called by: CG_RegisterWeapon, CG_DrawHoldableItem, CG_DrawPickupItem, CG_RegisterGraphics
=================
*/
void CG_RegisterItemVisuals(int arg_0) {
	int		local_14;
	char	local_18[8];
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	arg_0 = arg_0;
	if (arg_0 < 0x0) goto jmp_15c2b;
	if (arg_0 < bg_numItems) goto jmp_15c38;
jmp_15c2b:
	CG_Error(0x6cee, arg_0, (bg_numItems - 0x1));
jmp_15c38:
	*(int *)local_18 = ((0x18 * arg_0) + 0xd2cc);
	if (*(int *)*(int *)local_18 == 0x0) goto jmp_15c47;
	goto jmp_15cbe;
jmp_15c47:
	local_14 = ((0x34 * arg_0) + 0x58c);
	memset(*(int *)local_18, 0x0, 0x18);
	*(int *)*(int *)local_18 = 0x1;
	local_20 = trap_R_RegisterModel(*(int *)(local_14 + 0x8));
	*(int *)(*(int *)local_18 + 0x4) = local_20;
	local_24 = trap_R_RegisterShader(*(int *)(local_14 + 0x18));
	*(int *)(*(int *)local_18 + 0x14) = local_24;
	if (*(int *)(local_14 + 0x24) != 0x1) goto jmp_15c8f;
	CG_RegisterWeapon(*(int *)(local_14 + 0x28));
jmp_15c8f:
	local_28 = *(int *)(local_14 + 0x24);
	if (local_28 == 0x5) goto jmp_15ca6;
	if (local_28 == 0x4) goto jmp_15ca6;
	if (local_28 == 0x3) goto jmp_15ca6;
	if (local_28 != 0x6) goto jmp_15cbe;
jmp_15ca6:
	if (*(int *)(local_14 + 0xc) == 0x0) goto jmp_15cbe;
	local_2c = trap_R_RegisterModel(*(int *)(local_14 + 0xc));
	*(int *)(*(int *)local_18 + 0x8) = local_2c;
jmp_15cbe:
}

/*
=================
CG_MapTorsoToWeaponFrame

Address: 0x15cc0
Stack Size: 0x20
Called by: CG_AddViewWeapon
=================
*/
int CG_MapTorsoToWeaponFrame(int arg_0, int arg_1) {
	char	local_c[8];
	char	local_14[8];
	int		local_1c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	*(int *)local_c = *(int *)(arg_0 + 0x324);
	if (arg_1 < *(int *)local_c) goto jmp_15ce9;
	if (arg_1 >= (*(int *)local_c + 0x9)) goto jmp_15ce9;
	return ((arg_1 - *(int *)(arg_0 + 0x324)) + 0x6);
jmp_15ce9:
	*(int *)local_14 = *(int *)(arg_0 + 0x2ec);
	if (arg_1 < *(int *)local_14) goto jmp_15d09;
	if (arg_1 >= (*(int *)local_14 + 0x6)) goto jmp_15d09;
	return ((arg_1 + 0x1) - *(int *)(arg_0 + 0x2ec));
jmp_15d09:
	local_1c = *(int *)(arg_0 + 0x308);
	if (arg_1 < local_1c) goto jmp_15d29;
	if (arg_1 >= (local_1c + 0x6)) goto jmp_15d29;
	return ((arg_1 + 0x1) - *(int *)(arg_0 + 0x308));
jmp_15d29:
	return 0x0;
}

/*
=================
CG_CalculateWeaponPosition

Address: 0x15d2d
Stack Size: 0x34
Calls: sin
Called by: CG_AddViewWeapon
=================
*/
void CG_CalculateWeaponPosition(int arg_0, int arg_1) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	char	local_1c[8];
	int		local_24;
	int		local_28;
	char	local_2c[8];

	arg_1 = arg_1;
	block_copy(&bss_dcd0c, arg_0, 0xc);
	block_copy(&bss_dce64, arg_1, 0xc);
	if ((bss_deb3c & 0x1) == 0x0) goto jmp_15d47;
	local_c = -bss_deb40;
	goto jmp_15d4b;
jmp_15d47:
	local_c = bss_deb40;
jmp_15d4b:
	local_18 = (arg_1 + 0x8);
	*(int *)local_18 = (*(int *)local_18 + (0x3ba3d70a * (local_c * bss_deb38)));
	*(int *)local_1c = (arg_1 + 0x4);
	*(int *)*(int *)local_1c = (*(int *)*(int *)local_1c + (0x3c23d70a * (local_c * bss_deb38)));
	*(int *)arg_1 = (*(int *)arg_1 + (0x3ba3d70a * (bss_deb40 * bss_deb38)));
	local_14 = (bss_dc760 - bss_dcc8c);
	if (local_14 >= 0x96) goto jmp_15da5;
	local_24 = (arg_0 + 0x8);
	*(int *)local_24 = (*(int *)local_24 + (((0x3e800000 * bss_dcc88) * (float)local_14) / 0x43160000));
	goto jmp_15dc2;
jmp_15da5:
	if (local_14 >= 0x1c2) goto jmp_15dc2;
	local_24 = (arg_0 + 0x8);
	*(int *)local_24 = (*(int *)local_24 + (((0x3e800000 * bss_dcc88) * (float)(0x1c2 - local_14)) / 0x43960000));
jmp_15dc2:
	local_c = (bss_deb40 + 0x42200000);
	local_24 = sin((0x3a83126f * (float)bss_dc760));
	local_10 = local_24;
	local_28 = (arg_1 + 0x8);
	*(int *)local_28 = (*(int *)local_28 + (0x3c23d70a * (local_c * local_10)));
	*(int *)local_2c = (arg_1 + 0x4);
	*(int *)*(int *)local_2c = (*(int *)*(int *)local_2c + (0x3c23d70a * (local_c * local_10)));
	*(int *)arg_1 = (*(int *)arg_1 + (0x3c23d70a * (local_c * local_10)));
}

/*
=================
CG_LightningBolt

Address: 0x15e0e
Stack Size: 0x144
Calls: trap_R_AddRefEntityToScene, memset, AnglesToAxis, rand, VectorNormalize, CG_Trace, AngleVectors
Called by: CG_AddViewWeapon, CG_AddPlayerWeapon
=================
*/
void CG_LightningBolt(int arg_0, int arg_1) {
	char	local_24[8];
	char	local_2c[20];
	char	local_40[40];
	int		local_68;
	int		local_6c;
	char	local_70[8];
	int		local_78;
	int		local_7c;
	char	local_80[20];
	char	local_94[28];
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;
	int		local_c4;
	char	local_c8[8];
	int		local_d0;
	int		local_d4;
	int		local_d8;
	char	local_dc[36];
	int		local_100;
	int		local_104;
	int		local_108;
	int		local_10c;
	int		local_110;
	int		local_114;
	int		local_118;
	int		local_11c;
	int		local_120;
	int		local_124;
	int		local_128;
	int		local_12c;
	int		local_130;
	int		local_134;
	int		local_138;
	int		local_13c;
	int		local_140;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0xc0) == 0x6) goto jmp_15e1c;
	goto jmp_15fde;
jmp_15e1c:
	memset(local_24, 0x0, 0x8c);
	if (*(int *)arg_0 != bss_dc80c) goto jmp_15ec8;
	if (bss_7994 == 0x0) goto jmp_15ec8;
	local_110 = 0x0;
jmp_15e32:
	local_124 = (local_110 << 0x2);
	local_120 = (*(int *)(local_124 + (arg_0 + 0x2c0)) - *(int *)(local_124 + 0xdce64));
	if (local_120 <= 0x43340000) goto jmp_15e52;
	local_120 = (local_120 - 0x43b40000);
jmp_15e52:
	if (local_120 >= 0xc3340000) goto jmp_15e5c;
	local_120 = (local_120 + 0x43b40000);
jmp_15e5c:
	local_128 = (local_110 << 0x2);
	*(int *)(local_128 + &local_114) = (*(int *)(local_128 + 0xdce64) + (local_120 * (0x3f800000 - bss_7994)));
	if (*(int *)((local_110 << 0x2) + &local_114) >= 0x0) goto jmp_15e8d;
	local_12c = ((local_110 << 0x2) + &local_114);
	*(int *)local_12c = (*(int *)local_12c + 0x43b40000);
jmp_15e8d:
	if (*(int *)((local_110 << 0x2) + &local_114) <= 0x43b40000) goto jmp_15ea6;
	local_12c = ((local_110 << 0x2) + &local_114);
	*(int *)local_12c = (*(int *)local_12c - 0x43b40000);
jmp_15ea6:
	local_110 = (local_110 + 0x1);
	if (local_110 < 0x3) goto jmp_15e32;
#define next_call_arg_0 "&local_114"
#define next_call_arg_1 "&local_bc"
	local_120 = 0x0;
#define next_call_arg_2 "local_120"
#define next_call_arg_3 "local_120"
	AngleVectors();
	block_copy((arg_0 + 0x2b4), &local_b0, 0xc);
	goto jmp_15ee1;
jmp_15ec8:
#define next_call_arg_0 "(arg_0 + 0x2c0)"
#define next_call_arg_1 "&local_bc"
	local_110 = 0x0;
#define next_call_arg_2 "local_110"
#define next_call_arg_3 "local_110"
	AngleVectors();
	block_copy((arg_0 + 0x2b4), &local_b0, 0xc);
jmp_15ee1:
	local_10c = (*(int *)(arg_0 + 0xc4) & 0xffffff7f);
	if (local_10c == 0xd) goto jmp_15ef2;
	if (local_10c != 0x17) goto jmp_15efa;
jmp_15ef2:
	local_b8 = (local_b8 + 0x41400000);
	goto jmp_15f00;
jmp_15efa:
	local_b8 = (local_b8 + 0x41d00000);
jmp_15f00:
	local_114 = 0x41600000;
	local_b0 = (local_b0 + (local_114 * local_bc));
	local_b4 = (local_b4 + (local_114 * local_c0));
	local_b8 = (local_b8 + (0x41600000 * local_c4));
	local_118 = 0x44400000;
	local_100 = (local_b0 + (local_118 * local_bc));
	local_104 = (local_b4 + (local_118 * local_c0));
	local_108 = (local_b8 + (0x44400000 * local_c4));
#define next_call_arg_0 "local_c8"
#define next_call_arg_1 "&local_b0"
	local_11c = 0x1d5c;
#define next_call_arg_2 "local_11c"
#define next_call_arg_3 "local_11c"
#define next_call_arg_4 "&local_100"
#define next_call_arg_5 "*(int *)arg_0"
#define next_call_arg_6 "0x6000001"
	CG_Trace();
	block_copy(&local_d4, &local_78, 0xc);
	block_copy(arg_1, &local_68, 0xc);
	*(int *)local_24 = 0x6;
	*(int *)local_94 = bss_1041e0;
	trap_R_AddRefEntityToScene(local_24);
	if (local_d0 >= 0x3f800000) goto jmp_15fde;
	local_120 = (local_78 - local_68);
	local_124 = (local_7c - local_6c);
	local_128 = (*(int *)local_80 - *(int *)local_70);
	VectorNormalize(&local_120);
	memset(local_24, 0x0, 0x8c);
	*(int *)local_2c = bss_1042d0;
	local_68 = (local_d4 + (0xc1800000 * local_120));
	local_6c = (local_d8 + (0xc1800000 * local_124));
	*(int *)local_70 = (*(int *)local_dc + (0xc1800000 * local_128));
	local_138 = rand();
	local_12c = (float)(local_138 %% 0x168);
	local_13c = rand();
	local_130 = (float)(local_13c %% 0x168);
	local_140 = rand();
	local_134 = (float)(local_140 %% 0x168);
	AnglesToAxis(&local_12c, local_40);
	trap_R_AddRefEntityToScene(local_24);
jmp_15fde:
}

/*
=================
CG_MachinegunSpinAngle

Address: 0x15fe0
Stack Size: 0x30
Calls: AngleMod
Called by: CG_AddPlayerWeapon
=================
*/
int CG_MachinegunSpinAngle(int arg_0) {
	int		local_c;
	int		local_10;
	char	local_14[8];
	char	local_1c[8];
	int		local_24;
	char	local_28[8];

	arg_0 = arg_0;
	local_c = (bss_dc760 - *(int *)(arg_0 + 0x268));
	if (*(int *)(arg_0 + 0x26c) == 0x0) goto jmp_16005;
	local_10 = (*(int *)(arg_0 + 0x264) + (0x3f666666 * (float)local_c));
	goto jmp_16027;
jmp_16005:
	if (local_c <= 0x3e8) goto jmp_1600c;
	local_c = 0x3e8;
jmp_1600c:
	*(int *)local_14 = (0x3f000000 * (((float)(0x3e8 - local_c) / 0x447a0000) + 0x3f666666));
	local_10 = (*(int *)(arg_0 + 0x264) + ((float)local_c * *(int *)local_14));
jmp_16027:
	if ((*(int *)(arg_0 + 0x8) & 0x100) != 0x0) goto jmp_16035;
	*(int *)local_1c = 0x1;
	goto jmp_16038;
jmp_16035:
	*(int *)local_1c = 0x0;
jmp_16038:
	if (*(int *)(arg_0 + 0x26c) != *(int *)local_1c) goto jmp_1606d;
	*(int *)(arg_0 + 0x268) = bss_dc760;
	local_24 = AngleMod(local_10);
	*(int *)(arg_0 + 0x264) = local_24;
	if ((*(int *)(arg_0 + 0x8) & 0x100) == 0x0) goto jmp_16063;
	*(int *)local_28 = 0x1;
	goto jmp_16066;
jmp_16063:
	*(int *)local_28 = 0x0;
jmp_16066:
	*(int *)(arg_0 + 0x26c) = *(int *)local_28;
jmp_1606d:
	return local_10;
}

/*
=================
CG_AddWeaponWithPowerups

Address: 0x16072
Stack Size: 0xc
Calls: trap_R_AddRefEntityToScene
Called by: CG_AddPlayerWeapon
=================
*/
void CG_AddWeaponWithPowerups(int arg_0, int arg_1) {

	if ((arg_1 & 0x10) == 0x0) goto jmp_16088;
	*(int *)(arg_0 + 0x70) = bss_1042b0;
	trap_R_AddRefEntityToScene(arg_0);
	goto jmp_160b4;
jmp_16088:
	trap_R_AddRefEntityToScene(arg_0);
	if ((arg_1 & 0x4) == 0x0) goto jmp_160a1;
	*(int *)(arg_0 + 0x70) = bss_1042bc;
	trap_R_AddRefEntityToScene(arg_0);
jmp_160a1:
	if ((arg_1 & 0x2) == 0x0) goto jmp_160b4;
	*(int *)(arg_0 + 0x70) = bss_1042ac;
	trap_R_AddRefEntityToScene(arg_0);
jmp_160b4:
}

/*
=================
CG_AddPlayerWeapon

Address: 0x160b6
Stack Size: 0x248
Calls: trap_R_AddLightToScene, trap_R_AddRefEntityToScene, trap_R_LerpTag, trap_S_AddLoopingSound, memset, CG_LightningBolt, rand, CG_PositionRotatedEntityOnTag, AnglesToAxis, CG_MachinegunSpinAngle, CG_AddWeaponWithPowerups, MatrixMultiply, CG_RegisterWeapon
Called by: CG_AddViewWeapon, CG_Player
=================
*/
void CG_AddPlayerWeapon(int arg_0, int arg_1, int arg_2) {
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[12];
	int		local_38;
	char	local_3c[40];
	int		local_64;
	int		local_68;
	char	local_6c[24];
	char	local_84[16];
	char	local_94;
	char	local_95;
	char	local_96;
	char	local_97[21];
	int		local_ac;
	int		local_b0;
	int		local_b4;
	char	local_b8[12];
	int		local_c4;
	char	local_c8[40];
	char	local_f0[48];
	char	local_120;
	char	local_121;
	char	local_122[22];
	int		local_138;
	int		local_13c;
	int		local_140;
	char	local_144[36];
	int		local_168;
	int		local_16c;
	int		local_170;
	int		local_174;
	int		local_178;
	int		local_17c;
	int		local_180;
	int		local_184;
	char	local_188[12];
	int		local_194;
	char	local_198[112];
	int		local_208;
	int		local_20c;
	int		local_210;
	char	local_214[8];
	int		local_21c;
	int		local_220;
	int		local_224;
	int		local_228;
	int		local_22c;
	int		local_230;
	int		local_234;
	int		local_238;
	int		local_23c;
	int		local_240;
	int		local_244;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	local_16c = *(int *)(arg_2 + 0xc0);
	CG_RegisterWeapon(local_16c);
	local_168 = ((0x84 * local_16c) + 0xeacc);
	memset(&local_20, 0x0, 0x8c);
	block_copy((arg_0 + 0xc), local_2c, 0xc);
	local_38 = *(int *)(arg_0 + 0x18);
	local_24 = *(int *)(arg_0 + 0x4);
	if (local_16c != 0x7) goto jmp_16161;
	local_20c = ((0x6b4 * *(int *)(arg_2 + 0xa8)) + 0xe8c24);
	if ((*(int *)(arg_2 + 0x260) + 0x5dc) <= bss_dc760) goto jmp_16145;
	local_210 = ((0xff * (bss_dc760 - *(int *)(arg_2 + 0x260))) / 0x5dc);
	local_94 = ((*(char *)(local_20c + 0x64) * local_210) >> 0x8);
	local_95 = ((*(char *)(local_20c + 0x65) * local_210) >> 0x8);
	local_96 = ((*(char *)(local_20c + 0x66) * local_210) >> 0x8);
	*(char *)local_97 = 0xff;
	goto jmp_16161;
jmp_16145:
	local_94 = *(char *)(local_20c + 0x64);
	local_95 = *(char *)(local_20c + 0x65);
	local_96 = *(char *)(local_20c + 0x66);
	*(char *)local_97 = *(char *)(local_20c + 0x67);
jmp_16161:
	local_28 = *(int *)(local_168 + 0xc);
	if (local_28 != 0x0) goto jmp_1616e;
	goto jmp_1648b;
jmp_1616e:
	if (arg_1 != 0x0) goto jmp_161c4;
	*(int *)(arg_2 + 0x25c) = 0x0;
	local_20c = 0x0;
	if ((*(int *)(arg_2 + 0x8) & 0x100) == local_20c) goto jmp_161a9;
	if (*(int *)(local_168 + 0x80) == local_20c) goto jmp_161a9;
	trap_S_AddLoopingSound(*(int *)arg_2, (arg_2 + 0x2b4), 0x1d5c, *(int *)(local_168 + 0x80));
	*(int *)(arg_2 + 0x25c) = 0x1;
	goto jmp_161c4;
jmp_161a9:
	if (*(int *)(local_168 + 0x7c) == 0x0) goto jmp_161c4;
	trap_S_AddLoopingSound(*(int *)arg_2, (arg_2 + 0x2b4), 0x1d5c, *(int *)(local_168 + 0x7c));
jmp_161c4:
	trap_R_LerpTag(&local_138, *(int *)(arg_0 + 0x8), *(int *)(arg_0 + 0x60), *(int *)(arg_0 + 0x50), (0x3f800000 - *(int *)(arg_0 + 0x64)), 0x6ce3);
	block_copy((arg_0 + 0x44), &local_64, 0xc);
	local_64 = (local_64 + (*(int *)(arg_0 + 0x1c) * local_138));
	local_68 = (local_68 + (*(int *)(arg_0 + 0x20) * local_138));
	*(int *)local_6c = (*(int *)local_6c + (*(int *)(arg_0 + 0x24) * local_138));
	if (arg_1 == 0x0) goto jmp_16246;
	if (bss_a528 != 0x2) goto jmp_16246;
	local_64 = (local_64 + (*(int *)(arg_0 + 0x28) * -local_13c));
	local_68 = (local_68 + (*(int *)(arg_0 + 0x2c) * -local_13c));
	*(int *)local_6c = (*(int *)local_6c + (*(int *)(arg_0 + 0x30) * -local_13c));
	goto jmp_16275;
jmp_16246:
	if (arg_1 == 0x0) goto jmp_1624e;
	if (bss_a528 == 0x3) goto jmp_16275;
jmp_1624e:
	local_64 = (local_64 + (*(int *)(arg_0 + 0x28) * local_13c));
	local_68 = (local_68 + (*(int *)(arg_0 + 0x2c) * local_13c));
	*(int *)local_6c = (*(int *)local_6c + (*(int *)(arg_0 + 0x30) * local_13c));
jmp_16275:
	local_64 = (local_64 + (*(int *)(arg_0 + 0x34) * local_140));
	local_68 = (local_68 + (*(int *)(arg_0 + 0x38) * local_140));
	*(int *)local_6c = (*(int *)local_6c + (*(int *)(arg_0 + 0x3c) * local_140));
	MatrixMultiply(local_144, (arg_0 + 0x1c), local_3c);
	*(int *)local_84 = *(int *)(arg_0 + 0x64);
	CG_AddWeaponWithPowerups(&local_20, *(int *)(arg_2 + 0xbc));
	if (*(int *)(local_168 + 0x10) == 0x0) goto jmp_16317;
	memset(&local_17c, 0x0, 0x8c);
	block_copy((arg_0 + 0xc), local_188, 0xc);
	local_194 = *(int *)(arg_0 + 0x18);
	local_180 = *(int *)(arg_0 + 0x4);
	local_184 = *(int *)(local_168 + 0x10);
	local_174 = 0x0;
	local_170 = 0x0;
	local_210 = CG_MachinegunSpinAngle(arg_2);
	local_178 = local_210;
	AnglesToAxis(&local_170, local_198);
	CG_PositionRotatedEntityOnTag(&local_17c, &local_20, *(int *)(local_168 + 0xc), 0x6cd8);
	CG_AddWeaponWithPowerups(&local_17c, *(int *)(arg_2 + 0xbc));
jmp_16317:
	*(int *)local_214 = 0xf30c;
	local_208 = ((0x2cc * *(int *)arg_2) + *(int *)local_214);
	if (((local_208 - *(int *)local_214) / 0x2cc) == *(int *)(arg_2 + 0xa8)) goto jmp_16335;
	local_208 = arg_2;
jmp_16335:
	if (local_16c == 0x6) goto jmp_16341;
	if (local_16c == 0x1) goto jmp_16341;
	if (local_16c != 0xa) goto jmp_1634c;
jmp_16341:
	if ((*(int *)(local_208 + 0x8) & 0x100) == 0x0) goto jmp_1634c;
	goto jmp_16358;
jmp_1634c:
	if ((bss_dc760 - *(int *)(arg_2 + 0x1a8)) <= 0x14) goto jmp_16358;
	goto jmp_1648b;
jmp_16358:
	memset(&local_ac, 0x0, 0x8c);
	block_copy((arg_0 + 0xc), local_b8, 0xc);
	local_c4 = *(int *)(arg_0 + 0x18);
	local_b0 = *(int *)(arg_0 + 0x4);
	local_b4 = *(int *)(local_168 + 0x14);
	if (local_b4 != 0x0) goto jmp_16382;
	goto jmp_1648b;
jmp_16382:
	local_174 = 0x0;
	local_170 = 0x0;
	local_21c = rand();
	local_178 = (0x41200000 * (0x40000000 * (((float)(local_21c & 0x7fff) / 0x46fffe00) - 0x3f000000)));
	AnglesToAxis(&local_170, local_c8);
	if (local_16c != 0x7) goto jmp_16423;
	local_220 = ((0x6b4 * *(int *)(arg_2 + 0xa8)) + 0xe8c24);
	local_228 = (0x437f0000 * *(int *)(local_220 + 0x4c));
	local_22c = 0x4f000000;
	if (local_228 < local_22c) goto jmp_163ce;
	local_224 = ((int)(local_228 - local_22c) + 0x80000000);
	goto jmp_163d3;
jmp_163ce:
	local_224 = (int)local_228;
jmp_163d3:
	local_120 = local_224;
	local_234 = (0x437f0000 * *(int *)(local_220 + 0x50));
	local_238 = 0x4f000000;
	if (local_234 < local_238) goto jmp_163f4;
	local_230 = ((int)(local_234 - local_238) + 0x80000000);
	goto jmp_163f9;
jmp_163f4:
	local_230 = (int)local_234;
jmp_163f9:
	local_121 = local_230;
	local_240 = (0x437f0000 * *(int *)(local_220 + 0x54));
	local_244 = 0x4f000000;
	if (local_240 < local_244) goto jmp_1641a;
	local_23c = ((int)(local_240 - local_244) + 0x80000000);
	goto jmp_1641f;
jmp_1641a:
	local_23c = (int)local_240;
jmp_1641f:
	*(char *)local_122 = local_23c;
jmp_16423:
	CG_PositionRotatedEntityOnTag(&local_ac, &local_20, *(int *)(local_168 + 0xc), 0x6cce);
	trap_R_AddRefEntityToScene(&local_ac);
	if (arg_1 != 0x0) goto jmp_16445;
	if (bss_dc778 != 0x0) goto jmp_16445;
	if (*(int *)arg_2 == bss_dc80c) goto jmp_1648b;
jmp_16445:
	CG_LightningBolt(local_208, local_f0);
	local_224 = 0x0;
	if (*(int *)(local_168 + 0x28) != local_224) goto jmp_16468;
	if (*(int *)(local_168 + 0x2c) != local_224) goto jmp_16468;
	if (*(int *)(local_168 + 0x30) == local_224) goto jmp_1648b;
jmp_16468:
	local_228 = rand();
	trap_R_AddLightToScene(local_f0, (float)((local_228 & 0x1f) + 0x12c), *(int *)(local_168 + 0x28), *(int *)(local_168 + 0x2c), *(int *)(local_168 + 0x30));
jmp_1648b:
}

/*
=================
CG_AddViewWeapon

Address: 0x1648d
Stack Size: 0xd0
Calls: memset, CG_AddPlayerWeapon, CG_MapTorsoToWeaponFrame, AnglesToAxis, CG_CalculateWeaponPosition, CG_RegisterWeapon, CG_LightningBolt
Called by: CG_DrawActiveFrame
=================
*/
void CG_AddViewWeapon(int arg_0) {
	int		local_18;
	int		local_1c;
	char	local_20[20];
	char	local_34[40];
	int		local_5c;
	int		local_60;
	int		local_64;
	char	local_68[16];
	int		local_78;
	char	local_7c[40];
	int		local_a4;
	int		local_a8;
	char	local_ac[12];
	int		local_b8;
	int		local_bc;
	int		local_c0;
	int		local_c4;
	int		local_c8;
	int		local_cc;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x104) != 0x3) goto jmp_1649b;
	goto jmp_165f4;
jmp_1649b:
	if (*(int *)(arg_0 + 0x4) != 0x5) goto jmp_164a4;
	goto jmp_165f4;
jmp_164a4:
	if (bss_dc778 == 0x0) goto jmp_164aa;
	goto jmp_165f4;
jmp_164aa:
	if (bss_a528 != 0x0) goto jmp_164e8;
	if ((bss_dc7e8 & 0x100) == 0x0) goto jmp_165f4;
	block_copy(&bss_dcd0c, &local_c0, 0xc);
	local_cc = 0xc1000000;
	local_c0 = (local_c0 + (local_cc * bss_dcd30));
	local_c4 = (local_c4 + (local_cc * bss_dcd34));
	local_c8 = (local_c8 + (0xc1000000 * bss_dcd38));
	CG_LightningBolt(((0x2cc * *(int *)(arg_0 + 0x8c)) + 0xf30c), &local_c0);
	goto jmp_165f4;
jmp_164e8:
	if (bss_dec14 == 0x0) goto jmp_164ee;
	goto jmp_165f4;
jmp_164ee:
	if (bss_9ca8 <= 0x5a) goto jmp_164fd;
	local_a4 = (0xbe4ccccd * (float)(bss_9ca8 - 0x5a));
	goto jmp_16500;
jmp_164fd:
	local_a4 = 0x0;
jmp_16500:
	local_a8 = 0xdc954;
	CG_RegisterWeapon(*(int *)(arg_0 + 0x90));
	local_b8 = ((0x84 * *(int *)(arg_0 + 0x90)) + 0xeacc);
	memset(&local_18, 0x0, 0x8c);
	CG_CalculateWeaponPosition(&local_5c, local_ac);
	local_5c = (local_5c + (bss_dcd18 * bss_a854));
	local_60 = (local_60 + (bss_dcd1c * bss_a854));
	local_64 = (local_64 + (bss_dcd20 * bss_a854));
	local_5c = (local_5c + (bss_dcd24 * bss_a744));
	local_60 = (local_60 + (bss_dcd28 * bss_a744));
	local_64 = (local_64 + (bss_dcd2c * bss_a744));
	local_5c = (local_5c + (bss_dcd30 * (bss_a634 + local_a4)));
	local_60 = (local_60 + (bss_dcd34 * (bss_a634 + local_a4)));
	local_64 = (local_64 + (bss_dcd38 * (bss_a634 + local_a4)));
	AnglesToAxis(local_ac, local_34);
	if (bss_a968 == 0x0) goto jmp_165a6;
	local_c0 = bss_a968;
	local_78 = local_c0;
	*(int *)local_68 = local_c0;
	*(int *)local_7c = 0x0;
	goto jmp_165da;
jmp_165a6:
	local_bc = ((0x6b4 * *(int *)(local_a8 + 0xa8)) + 0xe8c24);
	local_c4 = CG_MapTorsoToWeaponFrame(local_bc, *(int *)(local_a8 + 0x1fc));
	*(int *)local_68 = local_c4;
	local_c8 = CG_MapTorsoToWeaponFrame(local_bc, *(int *)(local_a8 + 0x1f4));
	local_78 = local_c8;
	*(int *)local_7c = *(int *)(local_a8 + 0x204);
jmp_165da:
	*(int *)local_20 = *(int *)(local_b8 + 0x8);
	local_1c = 0xd;
	CG_AddPlayerWeapon(&local_18, arg_0, 0xdc954, *(int *)(arg_0 + 0x104));
jmp_165f4:
}

/*
=================
CG_DrawWeaponSelect

Address: 0x165f6
Stack Size: 0x4c
Calls: trap_R_SetColor, CG_DrawBigStringColor, CG_DrawStrlen, CG_DrawPic, CG_RegisterWeapon, CG_FadeColor
Called by: CG_Draw2D
=================
*/
void CG_DrawWeaponSelect(void) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;

	if (bss_dc838 > 0x0) goto jmp_165fd;
	goto jmp_16716;
jmp_165fd:
	local_3c = CG_FadeColor(bss_deaf4, 0x578);
	local_30 = local_3c;
	if (local_30 != 0x0) goto jmp_16610;
	goto jmp_16716;
jmp_16610:
	trap_R_SetColor(local_30);
	bss_deaec = 0x0;
	local_28 = *(int *)(bss_c2330 + 0xec);
	local_2c = 0x0;
	local_1c = 0x1;
jmp_16626:
	if ((local_28 & (0x1 << local_1c)) == 0x0) goto jmp_16635;
	local_2c = (local_2c + 0x1);
jmp_16635:
	local_1c = (local_1c + 0x1);
	if (local_1c < 0x10) goto jmp_16626;
	local_20 = (0x140 - (0x14 * local_2c));
	local_24 = 0x17c;
	local_1c = 0x1;
jmp_1664d:
	if ((local_28 & (0x1 << local_1c)) != 0x0) goto jmp_16658;
	goto jmp_166c8;
jmp_16658:
	CG_RegisterWeapon(local_1c);
#define next_call_arg_0 "(float)local_20"
#define next_call_arg_1 "(float)local_24"
	local_40 = 0x42000000;
#define next_call_arg_2 "local_40"
#define next_call_arg_3 "local_40"
#define next_call_arg_4 "*(int *)((0x84 * local_1c) + 0xeb10)"
	CG_DrawPic();
	if (local_1c != bss_dcc90) goto jmp_1669f;
	local_44 = 0x4;
#define next_call_arg_0 "(float)(local_20 - local_44)"
#define next_call_arg_1 "(float)(local_24 - local_44)"
	local_48 = 0x42200000;
#define next_call_arg_2 "local_48"
#define next_call_arg_3 "local_48"
#define next_call_arg_4 "bss_1041f0"
	CG_DrawPic();
jmp_1669f:
	if (*(int *)((local_1c << 0x2) + (bss_c2330 + 0x1a4)) != 0x0) goto jmp_166c2;
#define next_call_arg_0 "(float)local_20"
#define next_call_arg_1 "(float)local_24"
	local_44 = 0x42000000;
#define next_call_arg_2 "local_44"
#define next_call_arg_3 "local_44"
#define next_call_arg_4 "bss_10422c"
	CG_DrawPic();
jmp_166c2:
	local_20 = (local_20 + 0x28);
jmp_166c8:
	local_1c = (local_1c + 0x1);
	if (local_1c < 0x10) goto jmp_1664d;
	if (*(int *)((0x84 * bss_dcc90) + 0xead0) == 0x0) goto jmp_16711;
	local_34 = *(int *)(*(int *)((0x84 * bss_dcc90) + 0xead0) + 0x1c);
	if (local_34 == 0x0) goto jmp_16711;
	local_40 = CG_DrawStrlen(local_34);
	local_38 = (local_40 << 0x4);
	local_20 = ((0x280 - local_38) / 0x2);
	CG_DrawBigStringColor(local_20, (local_24 - 0x16), local_34, local_30);
jmp_16711:
	trap_R_SetColor(0x0);
jmp_16716:
}

/*
=================
CG_WeaponSelectable

Address: 0x16718
Stack Size: 0x8
Called by: CG_OutOfAmmoChange, CG_PrevWeapon_f, CG_NextWeapon_f
=================
*/
int CG_WeaponSelectable(int arg_0) {

	if (*(int *)((arg_0 << 0x2) + (bss_c2330 + 0x1a4)) != 0x0) goto jmp_16729;
	return 0x0;
jmp_16729:
	if ((*(int *)(bss_c2330 + 0xec) & (0x1 << arg_0)) != 0x0) goto jmp_16739;
	return 0x0;
jmp_16739:
	return 0x1;
}

/*
=================
CG_NextWeapon_f

Address: 0x1673d
Stack Size: 0x1c
Calls: CG_WeaponSelectable
=================
*/
void CG_NextWeapon_f(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;

	if (bss_c2330 != 0x0) goto jmp_16744;
	goto jmp_16791;
jmp_16744:
	if ((*(int *)(bss_c2330 + 0x38) & 0x1000) == 0x0) goto jmp_1674f;
	goto jmp_16791;
jmp_1674f:
	bss_deaf4 = bss_dc760;
	local_10 = bss_dcc90;
	local_c = 0x0;
jmp_1675a:
	local_14 = 0xdcc90;
	*(int *)local_14 = (*(int *)local_14 + 0x1);
	if (bss_dcc90 != 0x10) goto jmp_1676c;
	bss_dcc90 = 0x0;
jmp_1676c:
	if (bss_dcc90 != 0x1) goto jmp_16772;
	goto jmp_1677f;
jmp_16772:
	local_18 = CG_WeaponSelectable(bss_dcc90);
	if (local_18 == 0x0) goto jmp_1677f;
	goto jmp_16789;
jmp_1677f:
	local_c = (local_c + 0x1);
	if (local_c < 0x10) goto jmp_1675a;
jmp_16789:
	if (local_c != 0x10) goto jmp_16791;
	bss_dcc90 = local_10;
jmp_16791:
}

/*
=================
CG_PrevWeapon_f

Address: 0x16793
Stack Size: 0x1c
Calls: CG_WeaponSelectable
=================
*/
void CG_PrevWeapon_f(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;

	if (bss_c2330 != 0x0) goto jmp_1679a;
	goto jmp_167e7;
jmp_1679a:
	if ((*(int *)(bss_c2330 + 0x38) & 0x1000) == 0x0) goto jmp_167a5;
	goto jmp_167e7;
jmp_167a5:
	bss_deaf4 = bss_dc760;
	local_10 = bss_dcc90;
	local_c = 0x0;
jmp_167b0:
	local_14 = 0xdcc90;
	*(int *)local_14 = (*(int *)local_14 - 0x1);
	if (bss_dcc90 != 0xffffffff) goto jmp_167c2;
	bss_dcc90 = 0xf;
jmp_167c2:
	if (bss_dcc90 != 0x1) goto jmp_167c8;
	goto jmp_167d5;
jmp_167c8:
	local_18 = CG_WeaponSelectable(bss_dcc90);
	if (local_18 == 0x0) goto jmp_167d5;
	goto jmp_167df;
jmp_167d5:
	local_c = (local_c + 0x1);
	if (local_c < 0x10) goto jmp_167b0;
jmp_167df:
	if (local_c != 0x10) goto jmp_167e7;
	bss_dcc90 = local_10;
jmp_167e7:
}

/*
=================
CG_Weapon_f

Address: 0x167e9
Stack Size: 0x1c
Calls: atoi, CG_Argv
=================
*/
void CG_Weapon_f(void) {
	int		local_c;
	int		local_10;
	char	local_14[8];

	if (bss_c2330 != 0x0) goto jmp_167f0;
	goto jmp_1682c;
jmp_167f0:
	if ((*(int *)(bss_c2330 + 0x38) & 0x1000) == 0x0) goto jmp_167fb;
	goto jmp_1682c;
jmp_167fb:
	local_10 = CG_Argv(0x1);
	*(int *)local_14 = atoi(local_10);
	local_c = *(int *)local_14;
	if (local_c < 0x1) goto jmp_16814;
	if (local_c <= 0xf) goto jmp_16816;
jmp_16814:
	goto jmp_1682c;
jmp_16816:
	bss_deaf4 = bss_dc760;
	if ((*(int *)(bss_c2330 + 0xec) & (0x1 << local_c)) != 0x0) goto jmp_16828;
	goto jmp_1682c;
jmp_16828:
	bss_dcc90 = local_c;
jmp_1682c:
}

/*
=================
CG_OutOfAmmoChange

Address: 0x1682e
Stack Size: 0x14
Calls: CG_WeaponSelectable
Called by: CG_EntityEvent
=================
*/
void CG_OutOfAmmoChange(void) {
	int		local_c;
	int		local_10;

	bss_deaf4 = bss_dc760;
	local_c = 0xf;
jmp_16836:
	local_10 = CG_WeaponSelectable(local_c);
	if (local_10 == 0x0) goto jmp_16847;
	bss_dcc90 = local_c;
	goto jmp_16851;
jmp_16847:
	local_c = (local_c - 0x1);
	if (local_c > 0x0) goto jmp_16836;
jmp_16851:
}

/*
=================
CG_FireWeapon

Address: 0x16853
Stack Size: 0x2c
Calls: trap_S_StartSound, rand, CG_Error
Called by: CG_EntityEvent
=================
*/
void CG_FireWeapon(int arg_0) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	local_20 = arg_0;
	if (*(int *)(local_20 + 0xc0) != 0x0) goto jmp_16865;
	goto jmp_16920;
jmp_16865:
	if (*(int *)(local_20 + 0xc0) < 0xb) goto jmp_16873;
	CG_Error(0x6ca1);
	goto jmp_16920;
jmp_16873:
	local_1c = ((0x84 * *(int *)(local_20 + 0xc0)) + 0xeacc);
	*(int *)(arg_0 + 0x1a8) = bss_dc760;
	if (*(int *)(local_20 + 0xc0) != 0x6) goto jmp_16895;
	if (*(int *)(arg_0 + 0x25c) == 0x0) goto jmp_16895;
	goto jmp_16920;
jmp_16895:
	if (*(int *)(local_20 + 0xc0) != 0x7) goto jmp_168a3;
	*(int *)(arg_0 + 0x260) = bss_dc760;
jmp_168a3:
	if ((*(int *)(arg_0 + 0xbc) & 0x2) == 0x0) goto jmp_168ba;
	trap_S_StartSound(0x0, *(int *)arg_0, 0x4, bss_104320);
jmp_168ba:
	local_18 = 0x0;
jmp_168bd:
	if (*(int *)((local_18 << 0x2) + (local_1c + 0x34)) != 0x0) goto jmp_168cb;
	goto jmp_168d5;
jmp_168cb:
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x4) goto jmp_168bd;
jmp_168d5:
	if (local_18 <= 0x0) goto jmp_1690b;
	local_24 = rand();
	local_18 = (local_24 %% local_18);
	if (*(int *)((local_18 << 0x2) + (local_1c + 0x34)) == 0x0) goto jmp_1690b;
#define next_call_arg_0 "0x0"
#define next_call_arg_1 "*(int *)local_20"
	local_28 = 0x2;
#define next_call_arg_2 "local_28"
#define next_call_arg_3 "*(int *)((local_18 << local_28) + (local_1c + 0x34))"
	trap_S_StartSound();
jmp_1690b:
	if (*(int *)(local_1c + 0x70) == 0x0) goto jmp_16920;
	if (bss_aa78 <= 0x0) goto jmp_16920;
	(*(*(int *)(local_1c + 0x70)))(arg_0);
jmp_16920:
}

/*
=================
CG_MissileHitWall

Address: 0x16922
Stack Size: 0xc8
Calls: trap_S_StartSound, CG_ImpactMark, CG_MakeExplosion, CG_ParticleExplosion, rand
Called by: CG_Bullet, CG_ShotgunPellet, CG_MissileHitPlayer, CG_EntityEvent
=================
*/
void CG_MissileHitWall(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;
	int		local_a0;
	int		local_a4;
	int		local_a8;
	int		local_ac;
	int		local_b0;
	int		local_b4;
	char	local_b8[8];
	int		local_c0;
	int		local_c4;

	local_84 = 0x0;
	local_44 = local_84;
	local_50 = local_84;
	local_60 = 0x0;
	local_88 = 0x3f800000;
	local_34 = local_88;
	local_38 = local_88;
	local_3c = 0x0;
	local_5c = 0x0;
	local_64 = 0x258;
	local_8c = arg_0;
	local_90 = 0x2;
	if (local_8c < local_90) goto jmp_1695e;
	if (local_8c > 0x9) goto jmp_1695e;
	goto *(int *)((local_8c << local_90) + 0x1d1c);
jmp_1695e:
	local_94 = rand();
	local_68 = (local_94 & 0x3);
	if (local_68 >= 0x2) goto jmp_16972;
	local_4c = bss_1043a8;
	goto jmp_16980;
jmp_16972:
	if (local_68 != 0x2) goto jmp_1697c;
	local_4c = bss_1043a4;
	goto jmp_16980;
jmp_1697c:
	local_4c = bss_1043ac;
jmp_16980:
	local_48 = bss_10429c;
	local_58 = 0x41400000;
	goto jmp_16ac7;
	local_44 = bss_1042cc;
	local_50 = bss_1042e4;
	local_4c = bss_1043bc;
	local_48 = bss_104298;
	local_58 = 0x42800000;
	local_60 = 0x43960000;
	local_5c = 0x1;
	goto jmp_16ac7;
	local_44 = bss_1042cc;
	local_50 = bss_1042e0;
	local_4c = bss_1043bc;
	local_48 = bss_104298;
	local_58 = 0x42800000;
	local_60 = 0x43960000;
	local_5c = 0x1;
	local_64 = 0x3e8;
	local_34 = 0x3f800000;
	local_38 = 0x3f400000;
	local_3c = 0x0;
	if (bss_7bb8 != 0x0) goto jmp_16ac7;
	local_98 = arg_2;
	local_9c = 0x41c00000;
	local_a0 = arg_3;
	local_6c = (*(int *)local_98 + (local_9c * *(int *)local_a0));
	local_a4 = 0x4;
	local_70 = (*(int *)(local_98 + local_a4) + (local_9c * *(int *)(local_a0 + local_a4)));
	local_a8 = 0x8;
	local_74 = (*(int *)(arg_2 + local_a8) + (0x41c00000 * *(int *)(arg_3 + local_a8)));
	local_ac = 0x42800000;
	local_b0 = arg_3;
	local_78 = (local_ac * *(int *)local_b0);
	local_7c = (local_ac * *(int *)(local_b0 + 0x4));
	local_80 = (0x42800000 * *(int *)(arg_3 + 0x8));
	CG_ParticleExplosion(0x6c98, &local_6c, &local_78, 0x578, 0x14, 0x1e);
	goto jmp_16ac7;
	local_44 = bss_1042c8;
	local_50 = bss_1042d4;
	local_4c = bss_1043c0;
	local_48 = bss_1042a0;
	local_58 = 0x41c00000;
	goto jmp_16ac7;
	local_44 = bss_1042c8;
	local_50 = bss_1042d8;
	local_4c = bss_1043c0;
	local_48 = bss_1042a0;
	local_58 = 0x41800000;
	goto jmp_16ac7;
	local_44 = bss_1042cc;
	local_50 = bss_1042e8;
	local_4c = bss_1043bc;
	local_48 = bss_104298;
	local_58 = 0x42000000;
	local_5c = 0x1;
	goto jmp_16ac7;
	local_44 = bss_1042c4;
	local_50 = bss_1042dc;
	local_48 = bss_104294;
	local_4c = 0x0;
	local_58 = 0x40800000;
	goto jmp_16ac7;
	local_44 = bss_1042c4;
	local_50 = bss_1042dc;
	local_48 = bss_104294;
	local_98 = rand();
	local_68 = (local_98 & 0x3);
	if (local_68 != 0x0) goto jmp_16ab6;
	local_4c = bss_1043b0;
	goto jmp_16ac4;
jmp_16ab6:
	if (local_68 != 0x1) goto jmp_16ac0;
	local_4c = bss_1043b4;
	goto jmp_16ac4;
jmp_16ac0:
	local_4c = bss_1043b8;
jmp_16ac4:
	local_58 = 0x41000000;
jmp_16ac7:
	if (local_4c == 0x0) goto jmp_16ad8;
	trap_S_StartSound(arg_2, 0x3fe, 0x0, local_4c);
jmp_16ad8:
	if (local_44 == 0x0) goto jmp_16b93;
	local_94 = CG_MakeExplosion(arg_2, arg_3, local_44, local_50, local_64, local_5c);
	local_40 = local_94;
	*(int *)(local_40 + 0x80) = local_60;
	block_copy(&local_34, (local_40 + 0x84), 0xc);
	if (arg_0 != 0x7) goto jmp_16b93;
	block_copy(((0x6b4 * arg_1) + 0xe8c70), (local_40 + 0x6c), 0xc);
	local_a0 = (0x437f0000 * *(int *)(local_40 + 0x6c));
	local_a4 = 0x4f000000;
	if (local_a0 < local_a4) goto jmp_16b2f;
	local_98 = ((int)(local_a0 - local_a4) + 0x80000000);
	goto jmp_16b34;
jmp_16b2f:
	local_98 = (int)local_a0;
jmp_16b34:
	*(char *)(local_40 + 0x10c) = local_98;
	local_b0 = (0x437f0000 * *(int *)(local_40 + 0x70));
	local_b4 = 0x4f000000;
	if (local_b0 < local_b4) goto jmp_16b58;
	local_a8 = ((int)(local_b0 - local_b4) + 0x80000000);
	goto jmp_16b5d;
jmp_16b58:
	local_a8 = (int)local_b0;
jmp_16b5d:
	*(char *)(local_40 + 0x10d) = local_a8;
	local_c0 = (0x437f0000 * *(int *)(local_40 + 0x74));
	local_c4 = 0x4f000000;
	if (local_c0 < local_c4) goto jmp_16b81;
	*(int *)local_b8 = ((int)(local_c0 - local_c4) + 0x80000000);
	goto jmp_16b86;
jmp_16b81:
	*(int *)local_b8 = (int)local_c0;
jmp_16b86:
	*(char *)(local_40 + 0x10e) = *(int *)local_b8;
	*(char *)(local_40 + 0x10f) = 0xff;
jmp_16b93:
	if (local_48 != bss_1042a0) goto jmp_16b9d;
	local_94 = 0x1;
	goto jmp_16ba0;
jmp_16b9d:
	local_94 = 0x0;
jmp_16ba0:
	local_54 = local_94;
	if (arg_0 != 0x7) goto jmp_16bea;
	local_98 = ((0x6b4 * arg_1) + 0xe8c70);
	local_9c = rand();
#define next_call_arg_0 "local_48"
#define next_call_arg_1 "arg_2"
#define next_call_arg_2 "arg_3"
#define next_call_arg_3 "(0x43b40000 * ((float)(local_9c & 0x7fff) / 0x46fffe00))"
	local_a0 = local_98;
#define next_call_arg_4 "*(int *)local_a0"
#define next_call_arg_5 "*(int *)(local_a0 + 0x4)"
#define next_call_arg_6 "*(int *)(local_a0 + 0x8)"
#define next_call_arg_7 "0x3f800000"
#define next_call_arg_8 "local_54"
#define next_call_arg_9 "local_58"
#define next_call_arg_10 "0x0"
	CG_ImpactMark();
	goto jmp_16c1b;
jmp_16bea:
	local_98 = rand();
#define next_call_arg_0 "local_48"
#define next_call_arg_1 "arg_2"
#define next_call_arg_2 "arg_3"
#define next_call_arg_3 "(0x43b40000 * ((float)(local_98 & 0x7fff) / 0x46fffe00))"
	local_9c = 0x3f800000;
#define next_call_arg_4 "local_9c"
#define next_call_arg_5 "local_9c"
#define next_call_arg_6 "local_9c"
#define next_call_arg_7 "local_9c"
#define next_call_arg_8 "local_54"
#define next_call_arg_9 "local_58"
#define next_call_arg_10 "0x0"
	CG_ImpactMark();
jmp_16c1b:
}

/*
=================
CG_MissileHitPlayer

Address: 0x16c1d
Stack Size: 0x20
Calls: CG_MissileHitWall, CG_Bleed
Called by: CG_ShotgunPellet, CG_EntityEvent
=================
*/
void CG_MissileHitPlayer(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_1c;

	CG_Bleed(arg_1, arg_3);
	local_1c = arg_0;
	if (local_1c < 0x4) goto jmp_16c4b;
	if (local_1c > 0x9) goto jmp_16c4b;
	goto *(int *)((local_1c << 0x2) + 0x1d34);
	CG_MissileHitWall(arg_0, 0x0, arg_1, arg_2, 0x2);
jmp_16c4b:
}

/*
=================
CG_ShotgunPellet

Address: 0x16c4d
Stack Size: 0xac
Calls: trap_CM_BoxTrace, CG_MissileHitWall, CG_MissileHitPlayer, CG_BubbleTrail, CG_PointContents, CG_Trace
Called by: CG_ShotgunPattern
=================
*/
void CG_ShotgunPellet(int arg_0, int arg_1, int arg_2) {
	char	local_24[12];
	char	local_30[12];
	char	local_3c[20];
	char	local_50[8];
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	char	local_70[12];
	char	local_7c[44];
	int		local_a8;

#define next_call_arg_0 "local_24"
#define next_call_arg_1 "arg_0"
	local_64 = 0x0;
#define next_call_arg_2 "local_64"
#define next_call_arg_3 "local_64"
#define next_call_arg_4 "arg_1"
#define next_call_arg_5 "arg_2"
#define next_call_arg_6 "0x6000001"
	CG_Trace();
	local_68 = CG_PointContents(arg_0, 0x0);
	local_5c = local_68;
	local_6c = CG_PointContents(local_30, 0x0);
	local_60 = local_6c;
	if (local_5c != local_60) goto jmp_16c97;
	if ((local_5c & 0x20) == 0x0) goto jmp_16ce8;
	CG_BubbleTrail(arg_0, local_30, 0x42000000);
	goto jmp_16ce8;
jmp_16c97:
	if ((local_5c & 0x20) == 0x0) goto jmp_16cc1;
#define next_call_arg_0 "local_70"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_0"
	local_a8 = 0x0;
#define next_call_arg_3 "local_a8"
#define next_call_arg_4 "local_a8"
#define next_call_arg_5 "0x0"
#define next_call_arg_6 "0x20"
	trap_CM_BoxTrace();
	CG_BubbleTrail(arg_0, local_7c, 0x42000000);
	goto jmp_16ce8;
jmp_16cc1:
	if ((local_60 & 0x20) == 0x0) goto jmp_16ce8;
#define next_call_arg_0 "local_70"
#define next_call_arg_1 "arg_0"
#define next_call_arg_2 "arg_1"
	local_a8 = 0x0;
#define next_call_arg_3 "local_a8"
#define next_call_arg_4 "local_a8"
#define next_call_arg_5 "0x0"
#define next_call_arg_6 "0x20"
	trap_CM_BoxTrace();
	CG_BubbleTrail(local_30, local_7c, 0x42000000);
jmp_16ce8:
	if ((*(int *)local_50 & 0x10) == 0x0) goto jmp_16cf0;
	goto jmp_16d36;
jmp_16cf0:
	if (*(int *)((0x2cc * local_58) + 0xf310) != 0x1) goto jmp_16d07;
	CG_MissileHitPlayer(0x3, local_30, local_3c, local_58);
	goto jmp_16d36;
jmp_16d07:
	if ((*(int *)local_50 & 0x10) == 0x0) goto jmp_16d0f;
	goto jmp_16d36;
jmp_16d0f:
	if ((*(int *)local_50 & 0x1000) == 0x0) goto jmp_16d24;
	CG_MissileHitWall(0x3, 0x0, local_30, local_3c, 0x1);
	goto jmp_16d36;
jmp_16d24:
#define next_call_arg_0 "0x3"
	*(int *)local_70 = 0x0;
#define next_call_arg_1 "*(int *)local_70"
#define next_call_arg_2 "local_30"
#define next_call_arg_3 "local_3c"
#define next_call_arg_4 "*(int *)local_70"
	CG_MissileHitWall();
jmp_16d36:
}

/*
=================
CG_ShotgunPattern

Address: 0x16d38
Stack Size: 0x68
Calls: CG_ShotgunPellet, Q_crandom, CrossProduct, PerpendicularVector, VectorNormalize2
Called by: CG_ShotgunFire
=================
*/
void CG_ShotgunPattern(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	char	local_54[8];
	char	local_5c[12];

	arg_0 = arg_0;
	arg_3 = arg_3;
	VectorNormalize2(arg_1, &local_28);
	PerpendicularVector(&local_34, &local_28);
	CrossProduct(&local_28, &local_34, &local_40);
	local_4c = 0x0;
jmp_16d5c:
	local_50 = Q_crandom(&arg_2);
	local_20 = (0x41800000 * (0x442f0000 * local_50));
	*(int *)local_54 = Q_crandom(&arg_2);
	local_24 = (0x41800000 * (0x442f0000 * *(int *)local_54));
	*(int *)local_5c = 0x48000000;
	local_14 = (*(int *)arg_0 + (*(int *)local_5c * local_28));
	local_18 = (*(int *)(arg_0 + 0x4) + (*(int *)local_5c * local_2c));
	local_1c = (*(int *)(arg_0 + 0x8) + (0x48000000 * local_30));
	local_14 = (local_14 + (local_34 * local_20));
	local_18 = (local_18 + (local_38 * local_20));
	local_1c = (local_1c + (local_3c * local_20));
	local_14 = (local_14 + (local_40 * local_24));
	local_18 = (local_18 + (local_44 * local_24));
	local_1c = (local_1c + (local_48 * local_24));
	CG_ShotgunPellet(arg_0, &local_14, arg_3);
	local_4c = (local_4c + 0x1);
	if (local_4c < 0xb) goto jmp_16d5c;
}

/*
=================
CG_ShotgunFire

Address: 0x16df2
Stack Size: 0x70
Calls: CG_ShotgunPattern, CG_SmokePuff, CG_PointContents, VectorNormalize
Called by: CG_EntityEvent
=================
*/
void CG_ShotgunFire(int arg_0) {
	int		local_38;
	int		local_3c;
	int		local_40;
	char	local_44[12];
	char	local_50[8];
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;

	arg_0 = arg_0;
	local_38 = (*(int *)(arg_0 + 0x68) - *(int *)(arg_0 + 0x18));
	local_3c = (*(int *)(arg_0 + 0x6c) - *(int *)(arg_0 + 0x1c));
	local_40 = (*(int *)(arg_0 + 0x70) - *(int *)(arg_0 + 0x20));
	VectorNormalize(&local_38);
	*(int *)local_50 = 0x42000000;
	local_38 = (*(int *)local_50 * local_38);
	local_3c = (*(int *)local_50 * local_3c);
	local_40 = (0x42000000 * local_40);
	local_38 = (*(int *)(arg_0 + 0x18) + local_38);
	local_3c = (*(int *)(arg_0 + 0x1c) + local_3c);
	local_40 = (*(int *)(arg_0 + 0x20) + local_40);
	if (bss_e66b4 == 0x3) goto jmp_16ea2;
	local_64 = CG_PointContents((arg_0 + 0x18), 0x0);
	*(int *)local_44 = local_64;
	if ((*(int *)local_44 & 0x20) != 0x0) goto jmp_16ea2;
	local_68 = 0x0;
	local_58 = local_68;
	local_5c = local_68;
	local_60 = 0x41000000;
#define next_call_arg_0 "&local_38"
#define next_call_arg_1 "&local_58"
#define next_call_arg_2 "0x42000000"
	local_6c = 0x3f800000;
#define next_call_arg_3 "local_6c"
#define next_call_arg_4 "local_6c"
#define next_call_arg_5 "local_6c"
#define next_call_arg_6 "0x3ea8f5c3"
#define next_call_arg_7 "0x44610000"
#define next_call_arg_8 "bss_dc760"
#define next_call_arg_9 "0x0"
#define next_call_arg_10 "0x1"
#define next_call_arg_11 "bss_104238"
	CG_SmokePuff();
jmp_16ea2:
	CG_ShotgunPattern((arg_0 + 0x18), (arg_0 + 0x68), *(int *)(arg_0 + 0xb8), *(int *)(arg_0 + 0x8c));
}

/*
=================
CG_Tracer

Address: 0x16ebd
Stack Size: 0x104
Calls: trap_S_StartSound, trap_R_AddPolyToScene, rand, VectorNormalize
Called by: CG_Bullet
=================
*/
void CG_Tracer(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c;
	char	local_2d;
	char	local_2e;
	char	local_2f;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	char	local_44;
	char	local_45;
	char	local_46;
	char	local_47;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	char	local_5c;
	char	local_5d;
	char	local_5e;
	char	local_5f;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	char	local_74;
	char	local_75;
	char	local_76;
	char	local_77;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;
	int		local_94;
	int		local_98;
	int		local_9c;
	int		local_a0;
	int		local_a4;
	int		local_a8;
	char	local_ac[8];
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;
	int		local_c4;
	char	local_c8[12];
	int		local_d4;
	int		local_d8;
	int		local_dc;
	char	local_e0[24];
	int		local_f8;
	int		local_fc;
	int		local_100;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_84 = (*(int *)arg_1 - *(int *)arg_0);
	local_d4 = 0x4;
	local_88 = (*(int *)(arg_1 + local_d4) - *(int *)(arg_0 + local_d4));
	local_d8 = 0x8;
	local_8c = (*(int *)(arg_1 + local_d8) - *(int *)(arg_0 + local_d8));
	local_dc = VectorNormalize(&local_84);
	local_bc = local_dc;
	if (local_bc >= 0x42c80000) goto jmp_16f03;
	goto jmp_170d5;
jmp_16f03:
	*(int *)local_e0 = rand();
	local_b8 = ((((float)(*(int *)local_e0 & 0x7fff) / 0x46fffe00) * (local_bc - 0x42700000)) + 0x42480000);
	local_b4 = (local_b8 + bss_a0e4);
	if (local_b4 <= local_bc) goto jmp_16f27;
	local_b4 = local_bc;
jmp_16f27:
	local_90 = (*(int *)arg_0 + (local_84 * local_b8));
	local_94 = (*(int *)(arg_0 + 0x4) + (local_88 * local_b8));
	local_98 = (*(int *)(arg_0 + 0x8) + (local_8c * local_b8));
	local_9c = (*(int *)arg_0 + (local_84 * local_b4));
	local_a0 = (*(int *)(arg_0 + 0x4) + (local_88 * local_b4));
	local_a4 = (*(int *)(arg_0 + 0x8) + (local_8c * local_b4));
	local_f8 = local_84;
	local_a8 = (((local_f8 * bss_dcd24) + (local_88 * bss_dcd28)) + (local_8c * bss_dcd2c));
	*(int *)local_ac = (((local_f8 * bss_dcd30) + (local_88 * bss_dcd34)) + (local_8c * bss_dcd38));
	local_78 = (bss_dcd24 * *(int *)local_ac);
	local_7c = (bss_dcd28 * *(int *)local_ac);
	local_80 = (bss_dcd2c * *(int *)local_ac);
	local_fc = -local_a8;
	local_78 = (local_78 + (bss_dcd30 * local_fc));
	local_7c = (local_7c + (bss_dcd34 * local_fc));
	local_80 = (local_80 + (bss_dcd38 * -local_a8));
	VectorNormalize(&local_78);
	local_18 = (local_9c + (local_78 * bss_a1f4));
	local_1c = (local_a0 + (local_7c * bss_a1f4));
	local_20 = (local_a4 + (local_80 * bss_a1f4));
	local_24 = 0x0;
	local_28 = 0x3f800000;
	local_2c = 0xff;
	local_2d = 0xff;
	local_2e = 0xff;
	local_2f = 0xff;
	local_30 = (local_9c + (local_78 * -bss_a1f4));
	local_34 = (local_a0 + (local_7c * -bss_a1f4));
	local_38 = (local_a4 + (local_80 * -bss_a1f4));
	local_3c = 0x3f800000;
	local_40 = 0x0;
	local_44 = 0xff;
	local_45 = 0xff;
	local_46 = 0xff;
	local_47 = 0xff;
	local_48 = (local_90 + (local_78 * -bss_a1f4));
	local_4c = (local_94 + (local_7c * -bss_a1f4));
	local_50 = (local_98 + (local_80 * -bss_a1f4));
	local_54 = 0x3f800000;
	local_58 = 0x3f800000;
	local_5c = 0xff;
	local_5d = 0xff;
	local_5e = 0xff;
	local_5f = 0xff;
	local_60 = (local_90 + (local_78 * bss_a1f4));
	local_64 = (local_94 + (local_7c * bss_a1f4));
	local_68 = (local_98 + (local_80 * bss_a1f4));
	local_6c = 0x0;
	local_70 = 0x0;
	local_74 = 0xff;
	local_75 = 0xff;
	local_76 = 0xff;
	local_77 = 0xff;
	trap_R_AddPolyToScene(bss_1041f8, 0x4, &local_18);
	local_100 = 0x3f000000;
	local_c0 = (local_100 * (local_90 + local_9c));
	local_c4 = (local_100 * (local_94 + local_a0));
	*(int *)local_c8 = (0x3f000000 * (local_98 + local_a4));
	trap_S_StartSound(&local_c0, 0x3fe, 0x0, bss_104324);
jmp_170d5:
}

/*
=================
CG_CalcMuzzlePoint

Address: 0x170d7
Stack Size: 0x40
Calls: AngleVectors
Called by: CG_Bullet
=================
*/
int CG_CalcMuzzlePoint(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;

	arg_1 = arg_1;
	if (arg_0 != *(int *)(bss_c2330 + 0xb8)) goto jmp_17142;
	block_copy((bss_c2330 + 0x40), arg_1, 0xc);
	local_2c = (arg_1 + 0x8);
	*(int *)local_2c = (*(int *)local_2c + (float)*(int *)(bss_c2330 + 0xd0));
#define next_call_arg_0 "(bss_c2330 + 0xc4)"
#define next_call_arg_1 "&local_18"
	local_30 = 0x0;
#define next_call_arg_2 "local_30"
#define next_call_arg_3 "local_30"
	AngleVectors();
	*(int *)arg_1 = (*(int *)arg_1 + (0x41600000 * local_18));
	local_38 = (arg_1 + 0x4);
	*(int *)local_38 = (*(int *)local_38 + (0x41600000 * local_1c));
	local_3c = (arg_1 + 0x8);
	*(int *)local_3c = (*(int *)local_3c + (0x41600000 * local_20));
	return 0x1;
jmp_17142:
	local_24 = ((0x2cc * arg_0) + 0xf30c);
	if (*(int *)(local_24 + 0x1a4) != 0x0) goto jmp_17155;
	return 0x0;
jmp_17155:
	block_copy((local_24 + 0x18), arg_1, 0xc);
#define next_call_arg_0 "(local_24 + 0x3c)"
#define next_call_arg_1 "&local_18"
	local_2c = 0x0;
#define next_call_arg_2 "local_2c"
#define next_call_arg_3 "local_2c"
	AngleVectors();
	local_28 = (*(int *)(local_24 + 0xc4) & 0xffffff7f);
	if (local_28 == 0xd) goto jmp_17180;
	if (local_28 != 0x17) goto jmp_17190;
jmp_17180:
	local_34 = (arg_1 + 0x8);
	*(int *)local_34 = (*(int *)local_34 + 0x41400000);
	goto jmp_1719e;
jmp_17190:
	local_34 = (arg_1 + 0x8);
	*(int *)local_34 = (*(int *)local_34 + 0x41d00000);
jmp_1719e:
	*(int *)arg_1 = (*(int *)arg_1 + (0x41600000 * local_18));
	local_38 = (arg_1 + 0x4);
	*(int *)local_38 = (*(int *)local_38 + (0x41600000 * local_1c));
	local_3c = (arg_1 + 0x8);
	*(int *)local_3c = (*(int *)local_3c + (0x41600000 * local_20));
	return 0x1;
}

/*
=================
CG_Bullet

Address: 0x171cf
Stack Size: 0x84
Calls: trap_CM_BoxTrace, CG_MissileHitWall, CG_Bleed, CG_Tracer, rand, CG_BubbleTrail, CG_PointContents, CG_CalcMuzzlePoint
Called by: CG_EntityEvent
=================
*/
void CG_Bullet(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	char	local_24[12];
	int		local_30;
	int		local_34;
	char	local_38[12];
	char	local_44[44];
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;

	if (arg_1 < 0x0) goto jmp_1727e;
	if (bss_a304 <= 0x0) goto jmp_1727e;
	local_70 = CG_CalcMuzzlePoint(arg_1, local_24);
	if (local_70 == 0x0) goto jmp_1727e;
	local_74 = CG_PointContents(local_24, 0x0);
	local_30 = local_74;
	local_78 = CG_PointContents(arg_0, 0x0);
	local_34 = local_78;
	local_7c = local_30;
	if (local_7c != local_34) goto jmp_17219;
	if ((local_7c & 0x20) == 0x0) goto jmp_17219;
	CG_BubbleTrail(local_24, arg_0, 0x42000000);
	goto jmp_17268;
jmp_17219:
	if ((local_30 & 0x20) == 0x0) goto jmp_17241;
#define next_call_arg_0 "local_38"
#define next_call_arg_1 "arg_0"
#define next_call_arg_2 "local_24"
	local_80 = 0x0;
#define next_call_arg_3 "local_80"
#define next_call_arg_4 "local_80"
#define next_call_arg_5 "0x0"
#define next_call_arg_6 "0x20"
	trap_CM_BoxTrace();
	CG_BubbleTrail(local_24, local_44, 0x42000000);
	goto jmp_17268;
jmp_17241:
	if ((local_34 & 0x20) == 0x0) goto jmp_17268;
#define next_call_arg_0 "local_38"
#define next_call_arg_1 "local_24"
#define next_call_arg_2 "arg_0"
	local_80 = 0x0;
#define next_call_arg_3 "local_80"
#define next_call_arg_4 "local_80"
#define next_call_arg_5 "0x0"
#define next_call_arg_6 "0x20"
	trap_CM_BoxTrace();
	CG_BubbleTrail(local_44, arg_0, 0x42000000);
jmp_17268:
	local_80 = rand();
	if (((float)(local_80 & 0x7fff) / 0x46fffe00) >= bss_a304) goto jmp_1727e;
	CG_Tracer(local_24, arg_0);
jmp_1727e:
	if (arg_3 == 0x0) goto jmp_1728d;
	CG_Bleed(arg_0, arg_4);
	goto jmp_172a1;
jmp_1728d:
#define next_call_arg_0 "0x2"
	local_70 = 0x0;
#define next_call_arg_1 "local_70"
#define next_call_arg_2 "arg_0"
#define next_call_arg_3 "arg_2"
#define next_call_arg_4 "local_70"
	CG_MissileHitWall();
jmp_172a1:
}

/*
=================
VectorCompare

Address: 0x172a3
Stack Size: 0x18
Called by: CG_PredictPlayerState
=================
*/
int VectorCompare(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	arg_1 = arg_1;
	if (*(int *)arg_0 != *(int *)arg_1) goto jmp_172d3;
	local_10 = 0x4;
	if (*(int *)(arg_0 + local_10) != *(int *)(arg_1 + local_10)) goto jmp_172d3;
	local_14 = 0x8;
	if (*(int *)(arg_0 + local_14) == *(int *)(arg_1 + local_14)) goto jmp_172d7;
jmp_172d3:
	return 0x0;
jmp_172d7:
	return 0x1;
}

/*
=================
VectorLength

Address: 0x172db
Stack Size: 0x20
Calls: sqrt
Called by: RadiusFromBounds, Distance, CG_PredictPlayerState, CG_DamageFeedback, CG_ParticleDust, CG_ParticleBloodCloud, CG_AddScorePlum, CG_AddFallScaleFade, CG_AddScaleFade, CG_AddMoveScaleFade, PM_NoclipMove, PM_DeadMove, PM_WalkMove, PM_GrappleMove, PM_WaterMove, PM_Friction
=================
*/
int VectorLength(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	arg_0 = arg_0;
	local_10 = *(int *)arg_0;
	local_14 = *(int *)(arg_0 + 0x4);
	local_18 = *(int *)(arg_0 + 0x8);
	local_1c = sqrt((((local_10 * local_10) + (local_14 * local_14)) + (local_18 * local_18)));
	return local_1c;
}

/*
=================
VectorLengthSquared

Address: 0x1730e
Stack Size: 0x18
=================
*/
int VectorLengthSquared(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	local_c = *(int *)arg_0;
	local_10 = *(int *)(arg_0 + 0x4);
	local_14 = *(int *)(arg_0 + 0x8);
	return (((local_c * local_c) + (local_10 * local_10)) + (local_14 * local_14));
}

/*
=================
Distance

Address: 0x1733a
Stack Size: 0x2c
Calls: VectorLength
Called by: CG_GrappleTrail, CG_AddParticleToScene
=================
*/
int Distance(int arg_0, int arg_1) {
	int		local_c;
	int		local_10;
	char	local_14[12];
	int		local_20;
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_c = (*(int *)arg_1 - *(int *)arg_0);
	local_20 = 0x4;
	local_10 = (*(int *)(arg_1 + local_20) - *(int *)(arg_0 + local_20));
	local_24 = 0x8;
	*(int *)local_14 = (*(int *)(arg_1 + local_24) - *(int *)(arg_0 + local_24));
	local_28 = VectorLength(&local_c);
	return local_28;
}

/*
=================
DistanceSquared

Address: 0x1737b
Stack Size: 0x28
=================
*/
int DistanceSquared(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	char	local_10[12];
	int		local_1c;
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_8 = (*(int *)arg_1 - *(int *)arg_0);
	local_1c = 0x4;
	local_c = (*(int *)(arg_1 + local_1c) - *(int *)(arg_0 + local_1c));
	local_20 = 0x8;
	*(int *)local_10 = (*(int *)(arg_1 + local_20) - *(int *)(arg_0 + local_20));
	local_24 = local_8;
	return (((local_24 * local_24) + (local_c * local_c)) + (*(int *)local_10 * *(int *)local_10));
}

/*
=================
VectorNormalizeFast

Address: 0x173c9
Stack Size: 0x30
Calls: Q_rsqrt
=================
*/
void VectorNormalizeFast(int arg_0) {
	char	local_c[8];
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[8];
	int		local_28;
	int		local_2c;

	arg_0 = arg_0;
	local_14 = *(int *)arg_0;
	local_18 = *(int *)(arg_0 + 0x4);
	local_1c = *(int *)(arg_0 + 0x8);
	*(int *)local_20 = Q_rsqrt((((local_14 * local_14) + (local_18 * local_18)) + (local_1c * local_1c)));
	*(int *)local_c = *(int *)local_20;
	*(int *)arg_0 = (*(int *)arg_0 * *(int *)local_c);
	local_28 = (arg_0 + 0x4);
	*(int *)local_28 = (*(int *)local_28 * *(int *)local_c);
	local_2c = (arg_0 + 0x8);
	*(int *)local_2c = (*(int *)local_2c * *(int *)local_c);
}

/*
=================
VectorInverse

Address: 0x17424
Stack Size: 0x14
Called by: CG_CreateRotationMatrix
=================
*/
void VectorInverse(int arg_0) {
	int		local_c;
	int		local_10;

	arg_0 = arg_0;
	*(int *)arg_0 = -*(int *)arg_0;
	local_c = (arg_0 + 0x4);
	*(int *)local_c = -*(int *)local_c;
	local_10 = (arg_0 + 0x8);
	*(int *)local_10 = -*(int *)local_10;
}

/*
=================
CrossProduct

Address: 0x1744c
Stack Size: 0x30
Called by: MakeNormalVectors, RotateAroundDirection, RotatePointAroundVector, PlaneFromPoints, CG_ShotgunPattern, CG_ImpactMark, CG_AddScorePlum, CG_Portal, PM_SlideMove
=================
*/
void CrossProduct(int arg_0, int arg_1, int arg_2) {
	char	local_c[8];
	char	local_14[8];
	char	local_1c[16];
	int		local_2c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	*(int *)local_c = 0x4;
	*(int *)local_14 = 0x8;
	*(int *)arg_2 = ((*(int *)(arg_0 + *(int *)local_c) * *(int *)(arg_1 + *(int *)local_14)) - (*(int *)(arg_0 + *(int *)local_14) * *(int *)(arg_1 + *(int *)local_c)));
	*(int *)local_1c = 0x8;
	*(int *)(arg_2 + 0x4) = ((*(int *)(arg_0 + *(int *)local_1c) * *(int *)arg_1) - (*(int *)arg_0 * *(int *)(arg_1 + *(int *)local_1c)));
	local_2c = 0x4;
	*(int *)(arg_2 + 0x8) = ((*(int *)arg_0 * *(int *)(arg_1 + local_2c)) - (*(int *)(arg_0 + local_2c) * *(int *)arg_1));
}

/*
=================
Q_rand

Address: 0x174b9
Stack Size: 0xc
Called by: Q_random
=================
*/
int Q_rand(int arg_0) {

	arg_0 = arg_0;
	*(int *)arg_0 = ((0x10dcd * *(int *)arg_0) + 0x1);
	return *(int *)arg_0;
}

/*
=================
Q_random

Address: 0x174ce
Stack Size: 0x10
Calls: Q_rand
Called by: Q_crandom, CG_SmokePuff
=================
*/
int Q_random(int arg_0) {
	int		local_c;

	local_c = Q_rand(arg_0);
	return ((float)(local_c & 0xffff) / 0x47800000);
}

/*
=================
Q_crandom

Address: 0x174e0
Stack Size: 0x10
Calls: Q_random
Called by: CG_ShotgunPattern
=================
*/
int Q_crandom(int arg_0) {
	int		local_c;

	local_c = Q_random(arg_0);
	return (0x40000000 * (local_c - 0x3f000000));
}

/*
=================
ClampChar

Address: 0x174f1
Stack Size: 0x8
=================
*/
int ClampChar(int arg_0) {

	arg_0 = arg_0;
	if (arg_0 >= 0xffffff80) goto jmp_174fe;
	return 0xffffff80;
jmp_174fe:
	if (arg_0 <= 0x7f) goto jmp_17506;
	return 0x7f;
jmp_17506:
	return (char)arg_0;
}

/*
=================
ClampShort

Address: 0x1750c
Stack Size: 0x8
=================
*/
int ClampShort(int arg_0) {

	arg_0 = arg_0;
	if (arg_0 >= 0xffff8000) goto jmp_17519;
	return 0xffff8000;
jmp_17519:
	if (arg_0 <= 0x7fff) goto jmp_17521;
	return 0x7fff;
jmp_17521:
	return (short)arg_0;
}

/*
=================
DirToByte

Address: 0x17527
Stack Size: 0x24
=================
*/
int DirToByte(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[8];
	int		local_20;

	arg_0 = arg_0;
	if (arg_0 != 0x0) goto jmp_17534;
	return 0x0;
jmp_17534:
	local_10 = 0x0;
	*(int *)local_18 = 0x0;
	local_14 = *(int *)local_18;
	local_8 = *(int *)local_18;
jmp_17542:
	local_20 = (0xc * local_8);
	local_c = (((*(int *)arg_0 * *(int *)(local_20 + 0x1ebc)) + (*(int *)(arg_0 + 0x4) * *(int *)(local_20 + 0x1ec0))) + (*(int *)(arg_0 + 0x8) * *(int *)(local_20 + 0x1ec4)));
	if (local_c <= local_10) goto jmp_17578;
	local_10 = local_c;
	local_14 = local_8;
jmp_17578:
	local_8 = (local_8 + 0x1);
	if (local_8 < 0xa2) goto jmp_17542;
	return local_14;
}

/*
=================
ByteToDir

Address: 0x17587
Stack Size: 0xc
Called by: CG_EntityEvent, CG_Portal
=================
*/
void ByteToDir(int arg_0, int arg_1) {

	arg_0 = arg_0;
	if (arg_0 < 0x0) goto jmp_17594;
	if (arg_0 < 0xa2) goto jmp_1759a;
jmp_17594:
	block_copy(&vec3_origin, arg_1, 0xc);
	goto jmp_175a3;
jmp_1759a:
	block_copy(((0xc * arg_0) + 0x1ebc), arg_1, 0xc);
jmp_175a3:
}

/*
=================
ColorBytes3

Address: 0x175a5
Stack Size: 0x30
=================
*/
int ColorBytes3(int arg_0, int arg_1, int arg_2) {
	char	local_8;
	char	local_9;
	short	local_a;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	local_14 = (0x437f0000 * arg_0);
	local_18 = 0x4f000000;
	if (local_14 < local_18) goto jmp_175c0;
	local_c = ((int)(local_14 - local_18) + 0x80000000);
	goto jmp_175c5;
jmp_175c0:
	local_c = (int)local_14;
jmp_175c5:
	local_8 = local_c;
	local_1c = (0x437f0000 * arg_1);
	local_20 = 0x4f000000;
	if (local_1c < local_20) goto jmp_175e3;
	local_10 = ((int)(local_1c - local_20) + 0x80000000);
	goto jmp_175e8;
jmp_175e3:
	local_10 = (int)local_1c;
jmp_175e8:
	local_9 = local_10;
	local_28 = (0x437f0000 * arg_2);
	local_2c = 0x4f000000;
	if (local_28 < local_2c) goto jmp_17606;
	local_24 = ((int)(local_28 - local_2c) + 0x80000000);
	goto jmp_1760b;
jmp_17606:
	local_24 = (int)local_28;
jmp_1760b:
	*(char *)&local_a = local_24;
	return *(int *)&local_8;
}

/*
=================
ColorBytes4

Address: 0x17614
Stack Size: 0x3c
=================
*/
int ColorBytes4(int arg_0, int arg_1, int arg_2, int arg_3) {
	char	local_8;
	char	local_9;
	char	local_a;
	char	local_b;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;

	local_14 = (0x437f0000 * arg_0);
	local_18 = 0x4f000000;
	if (local_14 < local_18) goto jmp_1762f;
	local_c = ((int)(local_14 - local_18) + 0x80000000);
	goto jmp_17634;
jmp_1762f:
	local_c = (int)local_14;
jmp_17634:
	local_8 = local_c;
	local_1c = (0x437f0000 * arg_1);
	local_20 = 0x4f000000;
	if (local_1c < local_20) goto jmp_17652;
	local_10 = ((int)(local_1c - local_20) + 0x80000000);
	goto jmp_17657;
jmp_17652:
	local_10 = (int)local_1c;
jmp_17657:
	local_9 = local_10;
	local_28 = (0x437f0000 * arg_2);
	local_2c = 0x4f000000;
	if (local_28 < local_2c) goto jmp_17675;
	local_24 = ((int)(local_28 - local_2c) + 0x80000000);
	goto jmp_1767a;
jmp_17675:
	local_24 = (int)local_28;
jmp_1767a:
	local_a = local_24;
	local_34 = (0x437f0000 * arg_3);
	local_38 = 0x4f000000;
	if (local_34 < local_38) goto jmp_17698;
	local_30 = ((int)(local_34 - local_38) + 0x80000000);
	goto jmp_1769d;
jmp_17698:
	local_30 = (int)local_34;
jmp_1769d:
	local_b = local_30;
	return *(int *)&local_8;
}

/*
=================
NormalizeColor

Address: 0x176a6
Stack Size: 0x18
=================
*/
int NormalizeColor(int arg_0, int arg_1) {
	char	local_8[8];
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	arg_1 = arg_1;
	*(int *)local_8 = *(int *)arg_0;
	if (*(int *)(arg_0 + 0x4) <= *(int *)local_8) goto jmp_176c3;
	*(int *)local_8 = *(int *)(arg_0 + 0x4);
jmp_176c3:
	if (*(int *)(arg_0 + 0x8) <= *(int *)local_8) goto jmp_176d2;
	*(int *)local_8 = *(int *)(arg_0 + 0x8);
jmp_176d2:
	if (*(int *)local_8 != 0x0) goto jmp_176ee;
	local_14 = 0x0;
	*(int *)(arg_1 + 0x8) = local_14;
	*(int *)(arg_1 + 0x4) = local_14;
	*(int *)arg_1 = local_14;
	goto jmp_1771b;
jmp_176ee:
	*(int *)arg_1 = (*(int *)arg_0 / *(int *)local_8);
	local_10 = 0x4;
	*(int *)(arg_1 + local_10) = (*(int *)(arg_0 + local_10) / *(int *)local_8);
	local_14 = 0x8;
	*(int *)(arg_1 + local_14) = (*(int *)(arg_0 + local_14) / *(int *)local_8);
jmp_1771b:
	return *(int *)local_8;
}

/*
=================
PlaneFromPoints

Address: 0x17720
Stack Size: 0x60
Calls: VectorNormalize, CrossProduct
=================
*/
int PlaneFromPoints(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[12];
	int		local_34;
	char	local_38[12];
	int		local_44;
	int		local_48;
	char	local_4c[12];
	int		local_58;
	int		local_5c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	local_14 = (*(int *)arg_2 - *(int *)arg_1);
	local_34 = 0x4;
	local_18 = (*(int *)(arg_2 + local_34) - *(int *)(arg_1 + local_34));
	*(int *)local_38 = 0x8;
	local_1c = (*(int *)(arg_2 + *(int *)local_38) - *(int *)(arg_1 + *(int *)local_38));
	local_20 = (*(int *)arg_3 - *(int *)arg_1);
	local_44 = 0x4;
	local_24 = (*(int *)(arg_3 + local_44) - *(int *)(arg_1 + local_44));
	local_48 = 0x8;
	*(int *)local_28 = (*(int *)(arg_3 + local_48) - *(int *)(arg_1 + local_48));
	CrossProduct(&local_20, &local_14, arg_0);
	*(int *)local_4c = VectorNormalize(arg_0);
	if (*(int *)local_4c != 0x0) goto jmp_177a4;
	return 0x0;
jmp_177a4:
	local_58 = 0x4;
	local_5c = 0x8;
	*(int *)(arg_0 + 0xc) = (((*(int *)arg_1 * *(int *)arg_0) + (*(int *)(arg_1 + local_58) * *(int *)(arg_0 + local_58))) + (*(int *)(arg_1 + local_5c) * *(int *)(arg_0 + local_5c)));
	return 0x1;
}

/*
=================
RotatePointAroundVector

Address: 0x177d6
Stack Size: 0x118
Calls: sin, cos, memset, memcpy, MatrixMultiply, CrossProduct, PerpendicularVector
Called by: RotateAroundDirection, CG_RailTrail, CG_ImpactMark
=================
*/
void RotatePointAroundVector(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[28];
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	char	local_64[8];
	int		local_6c;
	char	local_70[16];
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	char	local_90[8];
	int		local_98;
	int		local_9c;
	char	local_a0[8];
	int		local_a8;
	int		local_ac;
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	int		local_c0;
	int		local_c4;
	int		local_c8;
	int		local_cc;
	char	local_d0[40];
	int		local_f8;
	int		local_fc;
	int		local_100;
	int		local_104;
	char	local_108[8];
	char	local_110[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	local_a8 = *(int *)arg_1;
	local_ac = *(int *)(arg_1 + 0x4);
	local_b0 = *(int *)(arg_1 + 0x8);
	PerpendicularVector(&local_b4, arg_1);
	CrossProduct(&local_b4, &local_a8, &local_c4);
	local_3c = local_b4;
	local_48 = local_b8;
	local_54 = local_bc;
	local_40 = local_c4;
	local_4c = local_c8;
	local_58 = local_cc;
	local_44 = local_a8;
	local_50 = local_ac;
	local_5c = local_b0;
	memcpy(&local_84, &local_3c, 0x24);
	local_88 = local_48;
	local_8c = local_54;
	*(int *)local_90 = local_40;
	local_98 = local_58;
	local_9c = local_44;
	*(int *)local_a0 = local_50;
	memset(&local_60, 0x0, 0x24);
	local_f8 = 0x3f800000;
	local_80 = local_f8;
	*(int *)local_70 = local_f8;
	local_60 = local_f8;
	local_c0 = ((0x40490fdb * arg_3) / 0x43340000);
	local_fc = cos(local_c0);
	local_60 = local_fc;
	local_100 = sin(local_c0);
	*(int *)local_64 = local_100;
	local_104 = sin(local_c0);
	local_6c = -local_104;
	*(int *)local_108 = cos(local_c0);
	*(int *)local_70 = *(int *)local_108;
	MatrixMultiply(&local_3c, &local_60, local_d0);
	MatrixMultiply(local_d0, &local_84, &local_18);
	local_14 = 0x0;
jmp_178ae:
	*(int *)local_110 = (0xc * local_14);
	*(int *)((local_14 << 0x2) + arg_0) = (((*(int *)(*(int *)local_110 + &local_18) * *(int *)arg_2) + (*(int *)(*(int *)local_110 + &local_1c) * *(int *)(arg_2 + 0x4))) + (*(int *)(*(int *)local_110 + local_20) * *(int *)(arg_2 + 0x8)));
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x3) goto jmp_178ae;
}

/*
=================
RotateAroundDirection

Address: 0x178e9
Stack Size: 0x30
Calls: CrossProduct, RotatePointAroundVector, PerpendicularVector
Called by: CG_Missile, CG_MakeExplosion
=================
*/
void RotateAroundDirection(int arg_0, int arg_1) {
	char	local_1c[16];
	int		local_2c;

	arg_0 = arg_0;
	PerpendicularVector((arg_0 + 0xc), arg_0);
	if (arg_1 == 0x0) goto jmp_17915;
	local_2c = (arg_0 + 0xc);
	block_copy(local_2c, local_1c, 0xc);
	RotatePointAroundVector(local_2c, arg_0, local_1c, arg_1);
jmp_17915:
	CrossProduct(arg_0, (arg_0 + 0xc), (arg_0 + 0x18));
}

/*
=================
vectoangles

Address: 0x17927
Stack Size: 0x38
Calls: sqrt, atan2
Called by: CG_ParticleDust, CG_ParticleBloodCloud, ValidBloodPool, CG_AddParticles, CG_AddParticleToScene, BG_TouchJumpPad
=================
*/
void vectoangles(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	char	local_18[8];
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_20 = 0x0;
	if (*(int *)(arg_0 + 0x4) != local_20) goto jmp_1795a;
	if (*(int *)arg_0 != local_20) goto jmp_1795a;
	local_24 = 0x0;
	local_10 = local_24;
	if (*(int *)(arg_0 + 0x8) <= local_24) goto jmp_17955;
	local_14 = 0x42b40000;
	goto jmp_179cf;
jmp_17955:
	local_14 = 0x43870000;
	goto jmp_179cf;
jmp_1795a:
	if (*(int *)arg_0 == 0x0) goto jmp_17977;
	local_28 = atan2(*(int *)(arg_0 + 0x4), *(int *)arg_0);
	local_10 = ((0x43340000 * local_28) / 0x40490fdb);
	goto jmp_17986;
jmp_17977:
	if (*(int *)(arg_0 + 0x4) <= 0x0) goto jmp_17983;
	local_10 = 0x42b40000;
	goto jmp_17986;
jmp_17983:
	local_10 = 0x43870000;
jmp_17986:
	if (local_10 >= 0x0) goto jmp_17990;
	local_10 = (local_10 + 0x43b40000);
jmp_17990:
	local_28 = *(int *)arg_0;
	local_2c = *(int *)(arg_0 + 0x4);
	local_30 = sqrt(((local_28 * local_28) + (local_2c * local_2c)));
	*(int *)local_18 = local_30;
	local_34 = atan2(*(int *)(arg_0 + 0x8), *(int *)local_18);
	local_14 = ((0x43340000 * local_34) / 0x40490fdb);
	if (local_14 >= 0x0) goto jmp_179cf;
	local_14 = (local_14 + 0x43b40000);
jmp_179cf:
	*(int *)arg_1 = -local_14;
	*(int *)(arg_1 + 0x4) = local_10;
	*(int *)(arg_1 + 0x8) = 0x0;
}

/*
=================
AnglesToAxis

Address: 0x179e4
Stack Size: 0x28
Calls: AngleVectors
Called by: CG_AddViewWeapon, CG_AddPlayerWeapon, CG_LightningBolt, CG_PlasmaTrail, CG_ShotgunEjectBrass, CG_MachineGunEjectBrass, CG_CalcViewValues, CG_TestModel_f, CG_PlayerFlag, CG_TrailItem, CG_PlayerAngles, CG_AddFragment, CG_AddPacketEntities, CG_TeamBase, CG_Mover, CG_Item, CG_General, CG_ScorePlum, CG_Draw3DModel
=================
*/
void AnglesToAxis(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	char	local_20[8];

	arg_1 = arg_1;
	AngleVectors(arg_0, arg_1, &local_18, (arg_1 + 0x18));
	*(int *)(arg_1 + 0xc) = (vec3_origin - local_18);
	*(int *)(arg_1 + 0x10) = (global_1d60 - local_1c);
	*(int *)(arg_1 + 0x14) = (global_1d64 - *(int *)local_20);
}

/*
=================
AxisClear

Address: 0x17a19
Stack Size: 0x8
Called by: CG_GrappleTrail, CG_RailTrail, CG_Beam, CG_MakeExplosion, CG_SpawnEffect, CG_Draw3DModel
=================
*/
void AxisClear(int arg_0) {

	arg_0 = arg_0;
	*(int *)arg_0 = 0x3f800000;
	*(int *)(arg_0 + 0x4) = 0x0;
	*(int *)(arg_0 + 0x8) = 0x0;
	*(int *)(arg_0 + 0xc) = 0x0;
	*(int *)(arg_0 + 0x10) = 0x3f800000;
	*(int *)(arg_0 + 0x14) = 0x0;
	*(int *)(arg_0 + 0x18) = 0x0;
	*(int *)(arg_0 + 0x1c) = 0x0;
	*(int *)(arg_0 + 0x20) = 0x3f800000;
}

/*
=================
AxisCopy

Address: 0x17a54
Stack Size: 0x10
Called by: CG_PlasmaTrail, CG_ShotgunEjectBrass, CG_MachineGunEjectBrass, CG_Item, CG_LaunchExplode, CG_LaunchGib
=================
*/
void AxisCopy(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	block_copy(arg_0, arg_1, 0xc);
	local_8 = 0xc;
	block_copy((arg_0 + local_8), (arg_1 + local_8), 0xc);
	local_c = 0x18;
	block_copy((arg_0 + local_c), (arg_1 + local_c), 0xc);
}

/*
=================
ProjectPointOnPlane

Address: 0x17a80
Stack Size: 0x4c
Called by: PerpendicularVector
=================
*/
void ProjectPointOnPlane(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[8];
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[12];
	int		local_44;
	int		local_48;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	local_20 = *(int *)arg_2;
	local_24 = 0x4;
	local_28 = (arg_2 + local_24);
	local_2c = *(int *)local_28;
	local_30 = 0x8;
	local_34 = (arg_2 + local_30);
	*(int *)local_38 = *(int *)local_34;
	local_8 = (((local_20 * local_20) + (local_2c * local_2c)) + (*(int *)local_38 * *(int *)local_38));
	local_8 = (0x3f800000 / local_8);
	*(int *)local_18 = ((((*(int *)arg_2 * *(int *)arg_1) + (*(int *)local_28 * *(int *)(arg_1 + local_24))) + (*(int *)local_34 * *(int *)(arg_1 + local_30))) * local_8);
	local_c = (*(int *)arg_2 * local_8);
	local_10 = (*(int *)local_28 * local_8);
	local_14 = (*(int *)(arg_2 + 0x8) * local_8);
	*(int *)arg_0 = (*(int *)arg_1 - (*(int *)local_18 * local_c));
	local_44 = 0x4;
	*(int *)(arg_0 + local_44) = (*(int *)(arg_1 + local_44) - (*(int *)local_18 * local_10));
	local_48 = 0x8;
	*(int *)(arg_0 + local_48) = (*(int *)(arg_1 + local_48) - (*(int *)local_18 * local_14));
}

/*
=================
MakeNormalVectors

Address: 0x17b3d
Stack Size: 0x38
Calls: CrossProduct, VectorNormalize
=================
*/
void MakeNormalVectors(int arg_0, int arg_1, int arg_2) {
	char	local_14[12];
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	arg_0 = arg_0;
	arg_1 = arg_1;
	*(int *)(arg_1 + 0x4) = -*(int *)arg_0;
	*(int *)(arg_1 + 0x8) = *(int *)(arg_0 + 0x4);
	*(int *)arg_1 = *(int *)(arg_0 + 0x8);
	local_20 = 0x4;
	local_24 = 0x8;
	*(int *)local_14 = (((*(int *)arg_1 * *(int *)arg_0) + (*(int *)(arg_1 + local_20) * *(int *)(arg_0 + local_20))) + (*(int *)(arg_1 + local_24) * *(int *)(arg_0 + local_24)));
	*(int *)arg_1 = (*(int *)arg_1 + (*(int *)arg_0 * -*(int *)local_14));
	local_28 = 0x4;
	local_2c = (arg_1 + local_28);
	*(int *)local_2c = (*(int *)local_2c + (*(int *)(arg_0 + local_28) * -*(int *)local_14));
	local_30 = 0x8;
	local_34 = (arg_1 + local_30);
	*(int *)local_34 = (*(int *)local_34 + (*(int *)(arg_0 + local_30) * -*(int *)local_14));
	VectorNormalize(arg_1);
	CrossProduct(arg_1, arg_0, arg_2);
}

/*
=================
VectorRotate

Address: 0x17be4
Stack Size: 0x30
=================
*/
void VectorRotate(int arg_0, int arg_1, int arg_2) {
	int		local_10;
	int		local_14;
	char	local_18[12];
	char	local_24[12];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	local_10 = 0x4;
	local_14 = 0x8;
	*(int *)arg_2 = (((*(int *)arg_0 * *(int *)arg_1) + (*(int *)(arg_0 + local_10) * *(int *)(arg_1 + local_10))) + (*(int *)(arg_0 + local_14) * *(int *)(arg_1 + local_14)));
	*(int *)local_18 = 0x4;
	*(int *)(arg_2 + *(int *)local_18) = (((*(int *)arg_0 * *(int *)(arg_1 + 0xc)) + (*(int *)(arg_0 + *(int *)local_18) * *(int *)(arg_1 + 0x10))) + (*(int *)(arg_0 + 0x8) * *(int *)(arg_1 + 0x14)));
	*(int *)local_24 = 0x8;
	*(int *)(arg_2 + *(int *)local_24) = (((*(int *)arg_0 * *(int *)(arg_1 + 0x18)) + (*(int *)(arg_0 + 0x4) * *(int *)(arg_1 + 0x1c))) + (*(int *)(arg_0 + *(int *)local_24) * *(int *)(arg_1 + 0x20)));
}

/*
=================
Q_rsqrt

Address: 0x17c75
Stack Size: 0x20
Called by: VectorNormalizeFast
=================
*/
int Q_rsqrt(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[8];

	local_14 = 0x3fc00000;
	*(int *)local_18 = arg_0;
	local_10 = (0x3f000000 * *(int *)local_18);
	local_c = *(int *)local_18;
	local_c = (0x5f3759df - (local_c >> 0x1));
	local_8 = local_c;
	local_8 = (local_8 * (local_14 - ((local_10 * local_8) * local_8)));
	return local_8;
}

/*
=================
Q_fabs

Address: 0x17ca8
Stack Size: 0xc
=================
*/
int Q_fabs(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	local_8 = (local_8 & 0x7fffffff);
	return local_8;
}

/*
=================
LerpAngle

Address: 0x17cb8
Stack Size: 0x10
Called by: CG_InterpolatePlayerState, CG_InterpolateEntityPosition
=================
*/
int LerpAngle(int arg_0, int arg_1, int arg_2) {
	char	local_8[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	if ((arg_1 - arg_0) <= 0x43340000) goto jmp_17cce;
	arg_1 = (arg_1 - 0x43b40000);
jmp_17cce:
	if ((arg_1 - arg_0) >= 0xc3340000) goto jmp_17cdb;
	arg_1 = (arg_1 + 0x43b40000);
jmp_17cdb:
	*(int *)local_8 = (arg_0 + (arg_2 * (arg_1 - arg_0)));
	return *(int *)local_8;
}

/*
=================
AngleSubtract

Address: 0x17ced
Stack Size: 0xc
Called by: AnglesSubtract, CG_SwingAngles
=================
*/
int AngleSubtract(int arg_0, int arg_1) {
	int		local_8;

	local_8 = (arg_0 - arg_1);
	goto jmp_17cfd;
jmp_17cf7:
	local_8 = (local_8 - 0x43b40000);
jmp_17cfd:
	if (local_8 > 0x43340000) goto jmp_17cf7;
	goto jmp_17d09;
jmp_17d03:
	local_8 = (local_8 + 0x43b40000);
jmp_17d09:
	if (local_8 < 0xc3340000) goto jmp_17d03;
	return local_8;
}

/*
=================
AnglesSubtract

Address: 0x17d12
Stack Size: 0x24
Calls: AngleSubtract
Called by: CG_PlayerAngles
=================
*/
void AnglesSubtract(int arg_0, int arg_1, int arg_2) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	local_10 = AngleSubtract(*(int *)arg_0, *(int *)arg_1);
	*(int *)arg_2 = local_10;
	local_14 = 0x4;
	local_18 = AngleSubtract(*(int *)(arg_0 + local_14), *(int *)(arg_1 + local_14));
	*(int *)(arg_2 + local_14) = local_18;
	local_1c = 0x8;
	local_20 = AngleSubtract(*(int *)(arg_0 + local_1c), *(int *)(arg_1 + local_1c));
	*(int *)(arg_2 + local_1c) = local_20;
}

/*
=================
AngleMod

Address: 0x17d6c
Stack Size: 0x8
Called by: CG_MachinegunSpinAngle, CG_PlayerAngles, CG_SwingAngles
=================
*/
int AngleMod(int arg_0) {

	arg_0 = arg_0;
	arg_0 = (0x3bb40000 * (float)((int)(0x43360b61 * arg_0) & 0xffff));
	return arg_0;
}

/*
=================
AngleNormalize360

Address: 0x17d82
Stack Size: 0x8
Called by: AngleNormalize180
=================
*/
int AngleNormalize360(int arg_0) {

	return (0x3bb40000 * (float)((int)(0x43360b61 * arg_0) & 0xffff));
}

/*
=================
AngleNormalize180

Address: 0x17d90
Stack Size: 0x10
Calls: AngleNormalize360
Called by: AngleDelta, BG_TouchJumpPad
=================
*/
int AngleNormalize180(int arg_0) {
	int		local_c;

	arg_0 = arg_0;
	local_c = AngleNormalize360(arg_0);
	arg_0 = local_c;
	if (arg_0 <= 0x43340000) goto jmp_17daa;
	arg_0 = (arg_0 - 0x43b40000);
jmp_17daa:
	return arg_0;
}

/*
=================
AngleDelta

Address: 0x17daf
Stack Size: 0x10
Calls: AngleNormalize180
=================
*/
int AngleDelta(int arg_0, int arg_1) {
	int		local_c;

	local_c = AngleNormalize180((arg_0 - arg_1));
	return local_c;
}

/*
=================
SetPlaneSignbits

Address: 0x17dbf
Stack Size: 0x14
=================
*/
void SetPlaneSignbits(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;

	arg_0 = arg_0;
	local_10 = 0x0;
	local_c = local_10;
	local_8 = local_10;
jmp_17dcf:
	if (*(int *)((local_8 << 0x2) + arg_0) >= 0x0) goto jmp_17de2;
	local_c = (local_c | (0x1 << local_8));
jmp_17de2:
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x3) goto jmp_17dcf;
	*(char *)(arg_0 + 0x11) = local_c;
}

/*
=================
BoxOnPlaneSide

Address: 0x17df5
Stack Size: 0x44
=================
*/
int BoxOnPlaneSide(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	char	local_1c[12];
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	if (*(char *)(arg_2 + 0x10) >= 0x3) goto jmp_17e37;
	if (*(int *)(arg_2 + 0xc) > *(int *)((*(char *)(arg_2 + 0x10) << 0x2) + arg_0)) goto jmp_17e1e;
	return 0x1;
jmp_17e1e:
	if (*(int *)(arg_2 + 0xc) < *(int *)((*(char *)(arg_2 + 0x10) << 0x2) + arg_1)) goto jmp_17e33;
	return 0x2;
jmp_17e33:
	return 0x3;
jmp_17e37:
	*(int *)local_1c = 0x0;
	local_14 = *(int *)local_1c;
	local_10 = *(int *)local_1c;
	if (*(char *)(arg_2 + 0x11) >= 0x8) goto jmp_17ebc;
	local_8 = 0x0;
jmp_17e4c:
	local_c = ((*(char *)(arg_2 + 0x11) >> local_8) & 0x1);
	local_28 = 0x2;
	local_2c = ((local_c << local_28) + &local_10);
	local_30 = (local_8 << local_28);
	*(int *)local_2c = (*(int *)local_2c + (*(int *)(local_30 + arg_2) * *(int *)(local_30 + arg_1)));
	if (local_c != 0x0) goto jmp_17e88;
	local_34 = 0x1;
	goto jmp_17e8b;
jmp_17e88:
	local_34 = 0x0;
jmp_17e8b:
	local_38 = 0x2;
	local_3c = ((local_34 << local_38) + &local_10);
	local_40 = (local_8 << local_38);
	*(int *)local_3c = (*(int *)local_3c + (*(int *)(local_40 + arg_2) * *(int *)(local_40 + arg_0)));
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x3) goto jmp_17e4c;
jmp_17ebc:
	local_18 = 0x0;
	if (local_10 < *(int *)(arg_2 + 0xc)) goto jmp_17eca;
	local_18 = 0x1;
jmp_17eca:
	if (local_14 >= *(int *)(arg_2 + 0xc)) goto jmp_17ed8;
	local_18 = (local_18 | 0x2);
jmp_17ed8:
	return local_18;
}

/*
=================
RadiusFromBounds

Address: 0x17edd
Stack Size: 0x30
Calls: VectorLength, fabs
=================
*/
int RadiusFromBounds(int arg_0, int arg_1) {
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[12];
	int		local_24;
	int		local_28;
	int		local_2c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_c = 0x0;
jmp_17ee9:
	local_24 = fabs(*(int *)((local_c << 0x2) + arg_0));
	local_10 = local_24;
	local_28 = fabs(*(int *)((local_c << 0x2) + arg_1));
	local_14 = local_28;
	if (local_10 <= local_14) goto jmp_17f16;
	local_2c = local_10;
	goto jmp_17f1a;
jmp_17f16:
	local_2c = local_14;
jmp_17f1a:
	*(int *)((local_c << 0x2) + local_18) = local_2c;
	local_c = (local_c + 0x1);
	if (local_c < 0x3) goto jmp_17ee9;
	local_24 = VectorLength(local_18);
	return local_24;
}

/*
=================
ClearBounds

Address: 0x17f38
Stack Size: 0x18
=================
*/
void ClearBounds(int arg_0, int arg_1) {
	char	local_c[8];
	int		local_14;

	arg_0 = arg_0;
	arg_1 = arg_1;
	*(int *)local_c = 0x47c34f80;
	*(int *)(arg_0 + 0x8) = *(int *)local_c;
	*(int *)(arg_0 + 0x4) = *(int *)local_c;
	*(int *)arg_0 = *(int *)local_c;
	local_14 = 0xc7c34f80;
	*(int *)(arg_1 + 0x8) = local_14;
	*(int *)(arg_1 + 0x4) = local_14;
	*(int *)arg_1 = local_14;
}

/*
=================
AddPointToBounds

Address: 0x17f6f
Stack Size: 0x1c
=================
*/
void AddPointToBounds(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	if (*(int *)arg_0 >= *(int *)arg_1) goto jmp_17f89;
	*(int *)arg_1 = *(int *)arg_0;
jmp_17f89:
	if (*(int *)arg_0 <= *(int *)arg_2) goto jmp_17f96;
	*(int *)arg_2 = *(int *)arg_0;
jmp_17f96:
	local_8 = 0x4;
	if (*(int *)(arg_0 + local_8) >= *(int *)(arg_1 + local_8)) goto jmp_17fb5;
	local_c = 0x4;
	*(int *)(arg_1 + local_c) = *(int *)(arg_0 + local_c);
jmp_17fb5:
	local_c = 0x4;
	if (*(int *)(arg_0 + local_c) <= *(int *)(arg_2 + local_c)) goto jmp_17fd4;
	local_10 = 0x4;
	*(int *)(arg_2 + local_10) = *(int *)(arg_0 + local_10);
jmp_17fd4:
	local_10 = 0x8;
	if (*(int *)(arg_0 + local_10) >= *(int *)(arg_1 + local_10)) goto jmp_17ff3;
	local_14 = 0x8;
	*(int *)(arg_1 + local_14) = *(int *)(arg_0 + local_14);
jmp_17ff3:
	local_14 = 0x8;
	if (*(int *)(arg_0 + local_14) <= *(int *)(arg_2 + local_14)) goto jmp_18012;
	local_18 = 0x8;
	*(int *)(arg_2 + local_18) = *(int *)(arg_0 + local_18);
jmp_18012:
}

/*
=================
BoundsIntersect

Address: 0x18014
Stack Size: 0x20
=================
*/
int BoundsIntersect(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_10;
	char	local_14[12];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	if (*(int *)arg_1 < *(int *)arg_2) goto jmp_1806d;
	local_10 = 0x4;
	if (*(int *)(arg_1 + local_10) < *(int *)(arg_2 + local_10)) goto jmp_1806d;
	*(int *)local_14 = 0x8;
	if (*(int *)(arg_1 + *(int *)local_14) < *(int *)(arg_2 + *(int *)local_14)) goto jmp_1806d;
	if (*(int *)arg_0 > *(int *)arg_3) goto jmp_1806d;
	if (*(int *)(arg_0 + local_10) > *(int *)(arg_3 + local_10)) goto jmp_1806d;
	if (*(int *)(arg_0 + *(int *)local_14) <= *(int *)(arg_3 + *(int *)local_14)) goto jmp_18071;
jmp_1806d:
	return 0x0;
jmp_18071:
	return 0x1;
}

/*
=================
BoundsIntersectSphere

Address: 0x18075
Stack Size: 0x2c
=================
*/
int BoundsIntersectSphere(int arg_0, int arg_1, int arg_2, int arg_3) {
	char	local_c[16];
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	*(int *)local_c = *(int *)arg_2;
	if ((*(int *)local_c - arg_3) > *(int *)arg_1) goto jmp_180e3;
	if ((*(int *)local_c + arg_3) < *(int *)arg_0) goto jmp_180e3;
	local_1c = 0x4;
	local_20 = *(int *)(arg_2 + local_1c);
	if ((local_20 - arg_3) > *(int *)(arg_1 + local_1c)) goto jmp_180e3;
	if ((local_20 + arg_3) < *(int *)(arg_0 + local_1c)) goto jmp_180e3;
	local_24 = 0x8;
	local_28 = *(int *)(arg_2 + local_24);
	if ((local_28 - arg_3) > *(int *)(arg_1 + local_24)) goto jmp_180e3;
	if ((local_28 + arg_3) >= *(int *)(arg_0 + local_24)) goto jmp_180e7;
jmp_180e3:
	return 0x0;
jmp_180e7:
	return 0x1;
}

/*
=================
BoundsIntersectPoint

Address: 0x180eb
Stack Size: 0x28
=================
*/
int BoundsIntersectPoint(int arg_0, int arg_1, int arg_2) {
	char	local_c[12];
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	*(int *)local_c = *(int *)arg_2;
	if (*(int *)local_c > *(int *)arg_1) goto jmp_18143;
	if (*(int *)local_c < *(int *)arg_0) goto jmp_18143;
	local_18 = 0x4;
	local_1c = *(int *)(arg_2 + local_18);
	if (local_1c > *(int *)(arg_1 + local_18)) goto jmp_18143;
	if (local_1c < *(int *)(arg_0 + local_18)) goto jmp_18143;
	local_20 = 0x8;
	local_24 = *(int *)(arg_2 + local_20);
	if (local_24 > *(int *)(arg_1 + local_20)) goto jmp_18143;
	if (local_24 >= *(int *)(arg_0 + local_20)) goto jmp_18147;
jmp_18143:
	return 0x0;
jmp_18147:
	return 0x1;
}

/*
=================
VectorNormalize

Address: 0x1814b
Stack Size: 0x38
Calls: sqrt
Called by: PerpendicularVector, MakeNormalVectors, PlaneFromPoints, CG_Tracer, CG_ShotgunFire, CG_LightningBolt, CG_RailTrail, CG_PlayerFlag, CG_PlayerAngles, CG_AddScorePlum, CG_BubbleTrail, PM_SlideMove, PM_NoclipMove, PM_DeadMove, PM_WalkMove, PM_GrappleMove, PM_AirMove, PM_FlyMove, PM_WaterMove, PM_CheckWaterJump
=================
*/
int VectorNormalize(int arg_0) {
	int		local_c;
	char	local_10[8];
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[8];
	int		local_30;
	int		local_34;

	arg_0 = arg_0;
	local_18 = *(int *)arg_0;
	local_1c = *(int *)(arg_0 + 0x4);
	local_20 = *(int *)(arg_0 + 0x8);
	local_c = (((local_18 * local_18) + (local_1c * local_1c)) + (local_20 * local_20));
	if (local_c == 0x0) goto jmp_181b9;
	local_24 = sqrt(local_c);
	*(int *)local_10 = (0x3f800000 / local_24);
	*(int *)local_28 = *(int *)local_10;
	local_c = (local_c * *(int *)local_28);
	*(int *)arg_0 = (*(int *)arg_0 * *(int *)local_28);
	local_30 = (arg_0 + 0x4);
	*(int *)local_30 = (*(int *)local_30 * *(int *)local_10);
	local_34 = (arg_0 + 0x8);
	*(int *)local_34 = (*(int *)local_34 * *(int *)local_10);
jmp_181b9:
	return local_c;
}

/*
=================
VectorNormalize2

Address: 0x181be
Stack Size: 0x34
Calls: sqrt
Called by: CG_ShotgunPattern, CG_ImpactMark, CG_Grapple, CG_Missile, PM_SlideMove
=================
*/
int VectorNormalize2(int arg_0, int arg_1) {
	int		local_c;
	char	local_10[8];
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_18 = *(int *)arg_0;
	local_1c = *(int *)(arg_0 + 0x4);
	local_20 = *(int *)(arg_0 + 0x8);
	local_c = (((local_18 * local_18) + (local_1c * local_1c)) + (local_20 * local_20));
	if (local_c == 0x0) goto jmp_18238;
	local_24 = sqrt(local_c);
	*(int *)local_10 = (0x3f800000 / local_24);
	local_28 = *(int *)local_10;
	local_c = (local_c * local_28);
	*(int *)arg_1 = (*(int *)arg_0 * local_28);
	local_2c = 0x4;
	*(int *)(arg_1 + local_2c) = (*(int *)(arg_0 + local_2c) * *(int *)local_10);
	local_30 = 0x8;
	*(int *)(arg_1 + local_30) = (*(int *)(arg_0 + local_30) * *(int *)local_10);
	goto jmp_1824e;
jmp_18238:
	local_28 = 0x0;
	*(int *)(arg_1 + 0x8) = local_28;
	*(int *)(arg_1 + 0x4) = local_28;
	*(int *)arg_1 = local_28;
jmp_1824e:
	return local_c;
}

/*
=================
_VectorMA

Address: 0x18253
Stack Size: 0x10
=================
*/
void _VectorMA(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_8;
	int		local_c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	*(int *)arg_3 = (*(int *)arg_0 + (arg_1 * *(int *)arg_2));
	local_8 = 0x4;
	*(int *)(arg_3 + local_8) = (*(int *)(arg_0 + local_8) + (arg_1 * *(int *)(arg_2 + local_8)));
	local_c = 0x8;
	*(int *)(arg_3 + local_c) = (*(int *)(arg_0 + local_c) + (arg_1 * *(int *)(arg_2 + local_c)));
}

/*
=================
_DotProduct

Address: 0x182a5
Stack Size: 0x18
=================
*/
int _DotProduct(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_10 = 0x4;
	local_14 = 0x8;
	return (((*(int *)arg_0 * *(int *)arg_1) + (*(int *)(arg_0 + local_10) * *(int *)(arg_1 + local_10))) + (*(int *)(arg_0 + local_14) * *(int *)(arg_1 + local_14)));
}

/*
=================
_VectorSubtract

Address: 0x182da
Stack Size: 0x10
=================
*/
void _VectorSubtract(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	*(int *)arg_2 = (*(int *)arg_0 - *(int *)arg_1);
	local_8 = 0x4;
	*(int *)(arg_2 + local_8) = (*(int *)(arg_0 + local_8) - *(int *)(arg_1 + local_8));
	local_c = 0x8;
	*(int *)(arg_2 + local_c) = (*(int *)(arg_0 + local_c) - *(int *)(arg_1 + local_c));
}

/*
=================
_VectorAdd

Address: 0x1831f
Stack Size: 0x10
=================
*/
void _VectorAdd(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	*(int *)arg_2 = (*(int *)arg_0 + *(int *)arg_1);
	local_8 = 0x4;
	*(int *)(arg_2 + local_8) = (*(int *)(arg_0 + local_8) + *(int *)(arg_1 + local_8));
	local_c = 0x8;
	*(int *)(arg_2 + local_c) = (*(int *)(arg_0 + local_c) + *(int *)(arg_1 + local_c));
}

/*
=================
_VectorCopy

Address: 0x18364
Stack Size: 0x10
=================
*/
void _VectorCopy(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	*(int *)arg_1 = *(int *)arg_0;
	local_8 = 0x4;
	*(int *)(arg_1 + local_8) = *(int *)(arg_0 + local_8);
	local_c = 0x8;
	*(int *)(arg_1 + local_c) = *(int *)(arg_0 + local_c);
}

/*
=================
_VectorScale

Address: 0x18393
Stack Size: 0x10
=================
*/
void _VectorScale(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	*(int *)arg_2 = (*(int *)arg_0 * arg_1);
	local_8 = 0x4;
	*(int *)(arg_2 + local_8) = (*(int *)(arg_0 + local_8) * arg_1);
	local_c = 0x8;
	*(int *)(arg_2 + local_c) = (*(int *)(arg_0 + local_c) * arg_1);
}

/*
=================
Vector4Scale

Address: 0x183cf
Stack Size: 0x14
=================
*/
void Vector4Scale(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;
	int		local_10;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	*(int *)arg_2 = (*(int *)arg_0 * arg_1);
	local_8 = 0x4;
	*(int *)(arg_2 + local_8) = (*(int *)(arg_0 + local_8) * arg_1);
	local_c = 0x8;
	*(int *)(arg_2 + local_c) = (*(int *)(arg_0 + local_c) * arg_1);
	local_10 = 0xc;
	*(int *)(arg_2 + local_10) = (*(int *)(arg_0 + local_10) * arg_1);
}

/*
=================
Q_log2

Address: 0x1841d
Stack Size: 0x10
=================
*/
int Q_log2(int arg_0) {
	int		local_8;
	int		local_c;

	arg_0 = arg_0;
	local_8 = 0x0;
	goto jmp_1842d;
jmp_18427:
	local_8 = (local_8 + 0x1);
jmp_1842d:
	local_c = (arg_0 >> 0x1);
	arg_0 = local_c;
	if (local_c != 0x0) goto jmp_18427;
	return local_8;
}

/*
=================
MatrixMultiply

Address: 0x18440
Stack Size: 0x70
Called by: RotatePointAroundVector, CG_AddPlayerWeapon, CG_PositionRotatedEntityOnTag, CG_PositionEntityOnTag
=================
*/
void MatrixMultiply(int arg_0, int arg_1, int arg_2) {
	char	local_10[12];
	char	local_1c[12];
	char	local_28[12];
	char	local_34[12];
	char	local_40[12];
	char	local_4c[12];
	char	local_58[12];
	char	local_64[12];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	*(int *)arg_2 = (((*(int *)arg_0 * *(int *)arg_1) + (*(int *)(arg_0 + 0x4) * *(int *)(arg_1 + 0xc))) + (*(int *)(arg_0 + 0x8) * *(int *)(arg_1 + 0x18)));
	*(int *)local_10 = 0x4;
	*(int *)(arg_2 + *(int *)local_10) = (((*(int *)arg_0 * *(int *)(arg_1 + *(int *)local_10)) + (*(int *)(arg_0 + *(int *)local_10) * *(int *)(arg_1 + 0x10))) + (*(int *)(arg_0 + 0x8) * *(int *)(arg_1 + 0x1c)));
	*(int *)local_1c = 0x8;
	*(int *)(arg_2 + *(int *)local_1c) = (((*(int *)arg_0 * *(int *)(arg_1 + *(int *)local_1c)) + (*(int *)(arg_0 + 0x4) * *(int *)(arg_1 + 0x14))) + (*(int *)(arg_0 + *(int *)local_1c) * *(int *)(arg_1 + 0x20)));
	*(int *)local_28 = 0xc;
	*(int *)(arg_2 + *(int *)local_28) = (((*(int *)(arg_0 + *(int *)local_28) * *(int *)arg_1) + (*(int *)(arg_0 + 0x10) * *(int *)(arg_1 + *(int *)local_28))) + (*(int *)(arg_0 + 0x14) * *(int *)(arg_1 + 0x18)));
	*(int *)local_34 = 0x10;
	*(int *)(arg_2 + *(int *)local_34) = (((*(int *)(arg_0 + 0xc) * *(int *)(arg_1 + 0x4)) + (*(int *)(arg_0 + *(int *)local_34) * *(int *)(arg_1 + *(int *)local_34))) + (*(int *)(arg_0 + 0x14) * *(int *)(arg_1 + 0x1c)));
	*(int *)local_40 = 0x14;
	*(int *)(arg_2 + *(int *)local_40) = (((*(int *)(arg_0 + 0xc) * *(int *)(arg_1 + 0x8)) + (*(int *)(arg_0 + 0x10) * *(int *)(arg_1 + *(int *)local_40))) + (*(int *)(arg_0 + *(int *)local_40) * *(int *)(arg_1 + 0x20)));
	*(int *)local_4c = 0x18;
	*(int *)(arg_2 + *(int *)local_4c) = (((*(int *)(arg_0 + *(int *)local_4c) * *(int *)arg_1) + (*(int *)(arg_0 + 0x1c) * *(int *)(arg_1 + 0xc))) + (*(int *)(arg_0 + 0x20) * *(int *)(arg_1 + *(int *)local_4c)));
	*(int *)local_58 = 0x1c;
	*(int *)(arg_2 + *(int *)local_58) = (((*(int *)(arg_0 + 0x18) * *(int *)(arg_1 + 0x4)) + (*(int *)(arg_0 + *(int *)local_58) * *(int *)(arg_1 + 0x10))) + (*(int *)(arg_0 + 0x20) * *(int *)(arg_1 + *(int *)local_58)));
	*(int *)local_64 = 0x20;
	*(int *)(arg_2 + *(int *)local_64) = (((*(int *)(arg_0 + 0x18) * *(int *)(arg_1 + 0x8)) + (*(int *)(arg_0 + 0x1c) * *(int *)(arg_1 + 0x14))) + (*(int *)(arg_0 + *(int *)local_64) * *(int *)(arg_1 + *(int *)local_64)));
}

/*
=================
AngleVectors

Address: 0x185d9
Stack Size: 0x30
Calls: cos, sin
Called by: AnglesToAxis, CG_CalcMuzzlePoint, CG_LightningBolt, CG_GrappleTrail, CG_OffsetThirdPersonView, CG_DamageFeedback, CG_ParticleDust, CG_ParticleBloodCloud, ValidBloodPool, CG_AddParticles, CG_AddParticleToScene, CG_CreateRotationMatrix, PmoveSingle
=================
*/
void AngleVectors(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	arg_0 = arg_0;
	local_c = (0x3c8efa35 * *(int *)(arg_0 + 0x4));
	local_10 = sin(local_c);
	bss_15d3d0 = local_10;
	local_14 = cos(local_c);
	bss_15d3dc = local_14;
	local_c = (0x3c8efa35 * *(int *)arg_0);
	local_18 = sin(local_c);
	bss_15d3cc = local_18;
	local_1c = cos(local_c);
	bss_15d3d8 = local_1c;
	local_c = (0x3c8efa35 * *(int *)(arg_0 + 0x8));
	local_20 = sin(local_c);
	bss_15d3c8 = local_20;
	local_24 = cos(local_c);
	bss_15d3d4 = local_24;
	if (arg_1 == 0x0) goto jmp_18657;
	*(int *)arg_1 = (bss_15d3d8 * bss_15d3dc);
	*(int *)(arg_1 + 0x4) = (bss_15d3d8 * bss_15d3d0);
	*(int *)(arg_1 + 0x8) = -bss_15d3cc;
jmp_18657:
	if (arg_2 == 0x0) goto jmp_1869e;
	local_28 = 0xbf800000;
	*(int *)arg_2 = ((((local_28 * bss_15d3c8) * bss_15d3cc) * bss_15d3dc) + ((local_28 * bss_15d3d4) * -bss_15d3d0));
	local_2c = 0xbf800000;
	*(int *)(arg_2 + 0x4) = ((((local_2c * bss_15d3c8) * bss_15d3cc) * bss_15d3d0) + ((local_2c * bss_15d3d4) * bss_15d3dc));
	*(int *)(arg_2 + 0x8) = ((0xbf800000 * bss_15d3c8) * bss_15d3d8);
jmp_1869e:
	if (arg_3 == 0x0) goto jmp_186d3;
	*(int *)arg_3 = (((bss_15d3d4 * bss_15d3cc) * bss_15d3dc) + (-bss_15d3c8 * -bss_15d3d0));
	*(int *)(arg_3 + 0x4) = (((bss_15d3d4 * bss_15d3cc) * bss_15d3d0) + (-bss_15d3c8 * bss_15d3dc));
	*(int *)(arg_3 + 0x8) = (bss_15d3d4 * bss_15d3d8);
jmp_186d3:
}

/*
=================
PerpendicularVector

Address: 0x186d5
Stack Size: 0x3c
Calls: VectorNormalize, ProjectPointOnPlane, fabs
Called by: RotateAroundDirection, RotatePointAroundVector, CG_ShotgunPattern, CG_RailTrail, CG_ImpactMark, CG_Portal
=================
*/
void PerpendicularVector(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[8];
	int		local_38;

	arg_1 = arg_1;
	local_18 = 0x3f800000;
	local_2c = 0x0;
	local_1c = local_2c;
	local_14 = local_2c;
	goto jmp_18717;
jmp_186ea:
	*(int *)local_30 = fabs(*(int *)((local_14 << 0x2) + arg_1));
	if (*(int *)local_30 >= local_18) goto jmp_18711;
	local_1c = local_14;
	local_38 = fabs(*(int *)((local_14 << 0x2) + arg_1));
	local_18 = local_38;
jmp_18711:
	local_14 = (local_14 + 0x1);
jmp_18717:
	if (local_14 < 0x3) goto jmp_186ea;
	*(int *)local_30 = 0x0;
	local_28 = *(int *)local_30;
	local_24 = *(int *)local_30;
	local_20 = *(int *)local_30;
	*(int *)((local_1c << 0x2) + &local_20) = 0x3f800000;
	ProjectPointOnPlane(arg_0, &local_20, arg_1);
	VectorNormalize(arg_0);
}

/*
=================
Q_isnan

Address: 0x18745
Stack Size: 0xc
=================
*/
int Q_isnan(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	local_8 = (local_8 & 0x7fffffff);
	local_8 = (0x7f800000 - local_8);
	return (local_8 >> 0x1f);
}

/*
=================
Q_IsColorString

Address: 0x1875d
Stack Size: 0x18
Called by: Q_CleanStr, Q_PrintStrlen, CG_AddToTeamChat, CG_DrawStrlen, CG_DrawStringExt
=================
*/
int Q_IsColorString(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	if (arg_0 != 0x0) goto jmp_1876a;
	return 0x0;
jmp_1876a:
	if ((char)*(char *)arg_0 == 0x5e) goto jmp_18774;
	return 0x0;
jmp_18774:
	if ((char)*(char *)(arg_0 + 0x1) != 0x0) goto jmp_18780;
	return 0x0;
jmp_18780:
	if ((char)*(char *)(arg_0 + 0x1) >= 0x0) goto jmp_1878c;
	return 0x0;
jmp_1878c:
	local_c = (char)*(char *)(arg_0 + 0x1);
	if (local_c < 0x41) goto jmp_1879c;
	if (local_c <= 0x5a) goto jmp_187bc;
jmp_1879c:
	local_10 = (char)*(char *)(arg_0 + 0x1);
	if (local_10 < 0x61) goto jmp_187ac;
	if (local_10 <= 0x7a) goto jmp_187bc;
jmp_187ac:
	local_14 = (char)*(char *)(arg_0 + 0x1);
	if (local_14 < 0x30) goto jmp_187c1;
	if (local_14 > 0x39) goto jmp_187c1;
jmp_187bc:
	local_8 = 0x1;
	goto jmp_187c4;
jmp_187c1:
	local_8 = 0x0;
jmp_187c4:
	if (local_8 != 0x0) goto jmp_187cc;
	return 0x0;
jmp_187cc:
	return 0x1;
}

/*
=================
Com_Clamp

Address: 0x187d0
Stack Size: 0x8
=================
*/
int Com_Clamp(int arg_0, int arg_1, int arg_2) {

	arg_2 = arg_2;
	if (arg_2 >= arg_0) goto jmp_187df;
	return arg_0;
jmp_187df:
	if (arg_2 <= arg_1) goto jmp_187e9;
	return arg_1;
jmp_187e9:
	return arg_2;
}

/*
=================
COM_SkipPath

Address: 0x187ee
Stack Size: 0xc
=================
*/
int COM_SkipPath(int arg_0) {
	int		local_8;

	arg_0 = arg_0;
	local_8 = arg_0;
	goto jmp_1880b;
jmp_187f9:
	if ((char)*(char *)arg_0 != 0x2f) goto jmp_18805;
	local_8 = (arg_0 + 0x1);
jmp_18805:
	arg_0 = (arg_0 + 0x1);
jmp_1880b:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_187f9;
	return local_8;
}

/*
=================
COM_GetExtension

Address: 0x18816
Stack Size: 0x20
Calls: strrchr
=================
*/
int COM_GetExtension(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	local_18 = strrchr(arg_0, 0x2e);
	local_10 = local_18;
	if (local_10 == 0x0) goto jmp_18845;
	local_1c = strrchr(arg_0, 0x2f);
	local_14 = local_1c;
	if (local_1c == 0x0) goto jmp_1883e;
	if (local_14 >= local_10) goto jmp_18845;
jmp_1883e:
	return (local_10 + 0x1);
jmp_18845:
	return 0x736b;
}

/*
=================
COM_StripExtension

Address: 0x18849
Stack Size: 0x28
Calls: Q_strncpyz, strrchr
Called by: CG_RegisterWeapon
=================
*/
void COM_StripExtension(int arg_0, int arg_1, int arg_2) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	arg_2 = arg_2;
	local_1c = strrchr(arg_0, 0x2e);
	local_14 = local_1c;
	if (local_14 == 0x0) goto jmp_18896;
	local_20 = strrchr(arg_0, 0x2f);
	local_18 = local_20;
	if (local_20 == 0x0) goto jmp_18879;
	if (local_18 >= local_14) goto jmp_18896;
jmp_18879:
	if (arg_2 >= ((local_14 - arg_0) + 0x1)) goto jmp_18889;
	local_24 = arg_2;
	goto jmp_18892;
jmp_18889:
	local_24 = ((local_14 - arg_0) + 0x1);
jmp_18892:
	arg_2 = local_24;
jmp_18896:
	if (arg_0 != arg_1) goto jmp_188aa;
	if (arg_2 <= 0x1) goto jmp_188aa;
	*(char *)((arg_2 - 0x1) + arg_1) = 0x0;
	goto jmp_188b6;
jmp_188aa:
	Q_strncpyz(arg_1, arg_0, arg_2);
jmp_188b6:
}

/*
=================
COM_CompareExtension

Address: 0x188b8
Stack Size: 0x24
Calls: Q_stricmp, strlen
=================
*/
int COM_CompareExtension(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;

	local_18 = strlen(arg_0);
	local_10 = local_18;
	local_1c = strlen(arg_1);
	local_14 = local_1c;
	if (local_14 > local_10) goto jmp_188f0;
	arg_0 = ((local_10 - local_14) + arg_0);
	local_20 = Q_stricmp(arg_0, arg_1);
	if (local_20 != 0x0) goto jmp_188f0;
	return 0x1;
jmp_188f0:
	return 0x0;
}

/*
=================
COM_DefaultExtension

Address: 0x188f4
Stack Size: 0x24
Calls: Q_strcat, strrchr
=================
*/
void COM_DefaultExtension(int arg_0, int arg_1, int arg_2) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;

	local_1c = strrchr(arg_0, 0x2e);
	local_14 = local_1c;
	if (local_14 == 0x0) goto jmp_1891e;
	local_20 = strrchr(arg_0, 0x2f);
	local_18 = local_20;
	if (local_20 == 0x0) goto jmp_1891c;
	if (local_18 >= local_14) goto jmp_1891e;
jmp_1891c:
	goto jmp_1892a;
jmp_1891e:
	Q_strcat(arg_0, arg_1, arg_2);
jmp_1892a:
}

/*
=================
CopyShortSwap

Address: 0x1892c
Stack Size: 0x10
=================
*/
void CopyShortSwap(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;

	local_8 = arg_0;
	local_c = arg_1;
	*(char *)local_8 = *(char *)(local_c + 0x1);
	*(char *)(local_8 + 0x1) = *(char *)local_c;
}

/*
=================
CopyLongSwap

Address: 0x18947
Stack Size: 0x10
=================
*/
void CopyLongSwap(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;

	local_8 = arg_0;
	local_c = arg_1;
	*(char *)local_8 = *(char *)(local_c + 0x3);
	*(char *)(local_8 + 0x1) = *(char *)(local_c + 0x2);
	*(char *)(local_8 + 0x2) = *(char *)(local_c + 0x1);
	*(char *)(local_8 + 0x3) = *(char *)local_c;
}

/*
=================
ShortSwap

Address: 0x18976
Stack Size: 0x18
=================
*/
int ShortSwap(int arg_0) {
	char	local_8;
	char	local_9[3];
	int		local_c;
	int		local_10;
	int		local_14;

	*(short *)&arg_0 = arg_0;
	local_c = (short)*(short *)&arg_0;
	local_10 = 0xff;
	local_8 = (local_c & local_10);
	local_14 = 0x8;
	*(char *)local_9 = ((local_c >> local_14) & local_10);
	return (short)((local_8 << local_14) + *(char *)local_9);
}

/*
=================
ShortNoSwap

Address: 0x189a3
Stack Size: 0x8
=================
*/
int ShortNoSwap(int arg_0) {

	*(short *)&arg_0 = arg_0;
	return (short)*(short *)&arg_0;
}

/*
=================
LongSwap

Address: 0x189ae
Stack Size: 0x20
Called by: FloatSwap
=================
*/
int LongSwap(int arg_0) {
	char	local_8;
	char	local_9;
	char	local_a;
	char	local_b[5];
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	arg_0 = arg_0;
	local_10 = 0xff;
	local_8 = (arg_0 & local_10);
	local_14 = 0x8;
	local_9 = ((arg_0 >> local_14) & local_10);
	local_18 = 0x10;
	local_a = ((arg_0 >> local_18) & local_10);
	local_1c = 0x18;
	*(char *)local_b = ((arg_0 >> local_1c) & local_10);
	return ((((local_8 << local_1c) + (local_9 << local_18)) + (local_a << local_14)) + *(char *)local_b);
}

/*
=================
LongNoSwap

Address: 0x189fb
Stack Size: 0x8
=================
*/
int LongNoSwap(int arg_0) {

	return arg_0;
}

/*
=================
Long64Swap

Address: 0x18a01
Stack Size: 0x14
=================
*/
void Long64Swap(int arg_0, int arg_1) {
	char	local_8;
	char	local_9;
	char	local_a;
	char	local_b;
	char	local_c;
	char	local_d;
	char	local_e;
	char	local_f;
	int		local_10;

	local_10 = arg_1;
	local_8 = *(char *)(local_10 + 0x7);
	local_9 = *(char *)(local_10 + 0x6);
	local_a = *(char *)(arg_1 + 0x5);
	local_b = *(char *)(arg_1 + 0x4);
	local_c = *(char *)(arg_1 + 0x3);
	local_d = *(char *)(arg_1 + 0x2);
	local_e = *(char *)(arg_1 + 0x1);
	local_f = *(char *)arg_1;
	block_copy(&local_8, arg_0, 0x8);
}

/*
=================
Long64NoSwap

Address: 0x18a42
Stack Size: 0x8
=================
*/
void Long64NoSwap(int arg_0, int arg_1) {

	block_copy(arg_1, arg_0, 0x8);
}

/*
=================
FloatSwap

Address: 0x18a4a
Stack Size: 0x14
Calls: LongSwap
=================
*/
int FloatSwap(int arg_0) {
	int		local_c;
	int		local_10;

	local_c = *(int *)arg_0;
	local_10 = LongSwap(local_c);
	local_c = local_10;
	return local_c;
}

/*
=================
FloatNoSwap

Address: 0x18a60
Stack Size: 0x8
=================
*/
int FloatNoSwap(int arg_0) {

	return *(int *)arg_0;
}

/*
=================
COM_BeginParseSession

Address: 0x18a67
Stack Size: 0x18
Calls: Com_sprintf
=================
*/
void COM_BeginParseSession(int arg_0) {

	com_lines = 0x1;
	com_tokenline = 0x0;
	Com_sprintf(0x172de8, 0x400, 0x7368, arg_0);
}

/*
=================
COM_GetCurrentParseLine

Address: 0x18a7c
Stack Size: 0x8
Called by: COM_ParseWarning, COM_ParseError
=================
*/
int COM_GetCurrentParseLine(void) {

	if (com_tokenline == 0x0) goto jmp_18a86;
	return com_tokenline;
jmp_18a86:
	return com_lines;
}

/*
=================
COM_Parse

Address: 0x18a8b
Stack Size: 0x14
Calls: COM_ParseExt
Called by: Parse1DMatrix, COM_MatchToken, CG_ParseAnimationFile, CG_NewParticleArea, CG_StartMusic
=================
*/
int COM_Parse(int arg_0) {
	int		local_10;

	local_10 = COM_ParseExt(arg_0, 0x1);
	return local_10;
}

/*
=================
COM_ParseError

Address: 0x18a9a
Stack Size: 0x20
Calls: Com_Printf, COM_GetCurrentParseLine, Q_vsnprintf
=================
*/
void COM_ParseError(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;

	local_18 = &arg_1;
	Q_vsnprintf(0x15d3e0, 0x1000, arg_0, local_18);
	local_18 = 0x0;
	local_1c = COM_GetCurrentParseLine();
	Com_Printf(0x7350, 0x172de8, local_1c, 0x15d3e0);
}

/*
=================
COM_ParseWarning

Address: 0x18ac0
Stack Size: 0x20
Calls: Com_Printf, COM_GetCurrentParseLine, Q_vsnprintf
=================
*/
void COM_ParseWarning(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;

	local_18 = &arg_1;
	Q_vsnprintf(0x15e3e0, 0x1000, arg_0, local_18);
	local_18 = 0x0;
	local_1c = COM_GetCurrentParseLine();
	Com_Printf(0x7336, 0x172de8, local_1c, 0x15e3e0);
}

/*
=================
SkipWhitespace

Address: 0x18ae6
Stack Size: 0x14
Called by: COM_ParseExt
=================
*/
int SkipWhitespace(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	int		local_10;

	arg_0 = arg_0;
	arg_1 = arg_1;
	goto jmp_18b17;
jmp_18af1:
	if (local_8 != 0x0) goto jmp_18af9;
	return 0x0;
jmp_18af9:
	if (local_8 != 0xa) goto jmp_18b11;
	local_c = 0x172de4;
	local_10 = 0x1;
	*(int *)local_c = (*(int *)local_c + local_10);
	*(int *)arg_1 = local_10;
jmp_18b11:
	arg_0 = (arg_0 + 0x1);
jmp_18b17:
	local_c = (char)*(char *)arg_0;
	local_8 = local_c;
	if (local_c <= 0x20) goto jmp_18af1;
	return arg_0;
}

/*
=================
COM_Compress

Address: 0x18b2a
Stack Size: 0x38
=================
*/
int COM_Compress(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	local_14 = 0x0;
	local_18 = 0x0;
	local_1c = arg_0;
	local_10 = local_1c;
	local_8 = local_1c;
	if (local_8 == 0x0) goto jmp_18c89;
	goto jmp_18c77;
jmp_18b43:
	local_20 = 0x2f;
	if (local_c != local_20) goto jmp_18b6c;
	if ((char)*(char *)(local_8 + 0x1) != local_20) goto jmp_18b6c;
	goto jmp_18b5c;
jmp_18b56:
	local_8 = (local_8 + 0x1);
jmp_18b5c:
	local_24 = (char)*(char *)local_8;
	if (local_24 == 0x0) goto jmp_18b6a;
	if (local_24 != 0xa) goto jmp_18b56;
jmp_18b6a:
	goto jmp_18c77;
jmp_18b6c:
	if (local_c != 0x2f) goto jmp_18ba4;
	if ((char)*(char *)(local_8 + 0x1) != 0x2a) goto jmp_18ba4;
	goto jmp_18b80;
jmp_18b7a:
	local_8 = (local_8 + 0x1);
jmp_18b80:
	local_28 = (char)*(char *)local_8;
	if (local_28 == 0x0) goto jmp_18b96;
	if (local_28 != 0x2a) goto jmp_18b7a;
	if ((char)*(char *)(local_8 + 0x1) != 0x2f) goto jmp_18b7a;
jmp_18b96:
	if ((char)*(char *)local_8 == 0x0) goto jmp_18c77;
	local_8 = (local_8 + 0x2);
	goto jmp_18c77;
jmp_18ba4:
	if (local_c == 0xa) goto jmp_18bac;
	if (local_c != 0xd) goto jmp_18bbc;
jmp_18bac:
	local_28 = 0x1;
	local_14 = local_28;
	local_8 = (local_8 + local_28);
	goto jmp_18c77;
jmp_18bbc:
	if (local_c == 0x20) goto jmp_18bc4;
	if (local_c != 0x9) goto jmp_18bd4;
jmp_18bc4:
	local_2c = 0x1;
	local_18 = local_2c;
	local_8 = (local_8 + local_2c);
	goto jmp_18c77;
jmp_18bd4:
	if (local_14 == 0x0) goto jmp_18bf1;
	local_2c = local_10;
	local_10 = (local_2c + 0x1);
	*(char *)local_2c = 0xa;
	local_30 = 0x0;
	local_14 = local_30;
	local_18 = local_30;
jmp_18bf1:
	if (local_18 == 0x0) goto jmp_18c06;
	local_2c = local_10;
	local_10 = (local_2c + 0x1);
	*(char *)local_2c = 0x20;
	local_18 = 0x0;
jmp_18c06:
	if (local_c != 0x22) goto jmp_18c61;
	local_2c = local_10;
	local_10 = (local_2c + 0x1);
	*(char *)local_2c = local_c;
	local_8 = (local_8 + 0x1);
	goto jmp_18c44;
jmp_18c21:
	local_c = (char)*(char *)local_8;
	if (local_c == 0x0) goto jmp_18c46;
	if (local_c == 0x22) goto jmp_18c46;
	local_34 = local_10;
	local_10 = (local_34 + 0x1);
	*(char *)local_34 = local_c;
	local_8 = (local_8 + 0x1);
jmp_18c44:
	goto jmp_18c21;
jmp_18c46:
	if (local_c != 0x22) goto jmp_18c77;
	local_30 = local_10;
	local_10 = (local_30 + 0x1);
	*(char *)local_30 = local_c;
	local_8 = (local_8 + 0x1);
	goto jmp_18c77;
jmp_18c61:
	*(char *)local_10 = local_c;
	local_2c = 0x1;
	local_10 = (local_10 + local_2c);
	local_8 = (local_8 + local_2c);
jmp_18c77:
	local_20 = (char)*(char *)local_8;
	local_c = local_20;
	if (local_20 != 0x0) goto jmp_18b43;
	*(char *)local_10 = 0x0;
jmp_18c89:
	return (local_10 - arg_0);
}

/*
=================
COM_ParseExt

Address: 0x18c91
Stack Size: 0x38
Calls: SkipWhitespace
Called by: SkipBracedSection, COM_Parse
=================
*/
int COM_ParseExt(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_14 = 0x0;
	local_1c = 0x0;
	local_10 = *(int *)arg_0;
	local_20 = 0x0;
	local_18 = local_20;
	*(char *)com_token = 0x0;
	com_tokenline = local_20;
	if (local_10 != 0x0) goto jmp_18d70;
	*(int *)arg_0 = 0x0;
	return 0x1731e8;
jmp_18cbf:
	local_24 = SkipWhitespace(local_10, &local_1c);
	local_10 = local_24;
	if (local_10 != 0x0) goto jmp_18cd8;
	*(int *)arg_0 = 0x0;
	return 0x1731e8;
jmp_18cd8:
	local_28 = 0x0;
	if (local_1c == local_28) goto jmp_18cee;
	if (arg_1 != local_28) goto jmp_18cee;
	*(int *)arg_0 = local_10;
	return 0x1731e8;
jmp_18cee:
	local_14 = (char)*(char *)local_10;
	local_2c = 0x2f;
	if (local_14 != local_2c) goto jmp_18d23;
	if ((char)*(char *)(local_10 + 0x1) != local_2c) goto jmp_18d23;
	local_10 = (local_10 + 0x2);
	goto jmp_18d13;
jmp_18d0d:
	local_10 = (local_10 + 0x1);
jmp_18d13:
	local_30 = (char)*(char *)local_10;
	if (local_30 == 0x0) goto jmp_18d21;
	if (local_30 != 0xa) goto jmp_18d0d;
jmp_18d21:
	goto jmp_18d70;
jmp_18d23:
	if (local_14 != 0x2f) goto jmp_18d72;
	if ((char)*(char *)(local_10 + 0x1) != 0x2a) goto jmp_18d72;
	local_10 = (local_10 + 0x2);
	goto jmp_18d4e;
jmp_18d37:
	if ((char)*(char *)local_10 != 0xa) goto jmp_18d48;
	local_30 = 0x172de4;
	*(int *)local_30 = (*(int *)local_30 + 0x1);
jmp_18d48:
	local_10 = (local_10 + 0x1);
jmp_18d4e:
	local_34 = (char)*(char *)local_10;
	if (local_34 == 0x0) goto jmp_18d64;
	if (local_34 != 0x2a) goto jmp_18d37;
	if ((char)*(char *)(local_10 + 0x1) != 0x2f) goto jmp_18d37;
jmp_18d64:
	if ((char)*(char *)local_10 == 0x0) goto jmp_18d70;
	local_10 = (local_10 + 0x2);
jmp_18d70:
	goto jmp_18cbf;
jmp_18d72:
	com_tokenline = com_lines;
	if (local_14 != 0x22) goto jmp_18dcb;
	local_10 = (local_10 + 0x1);
	goto jmp_18dc9;
jmp_18d82:
	local_24 = local_10;
	local_10 = (local_24 + 0x1);
	local_14 = (char)*(char *)local_24;
	if (local_14 == 0x22) goto jmp_18d9a;
	if (local_14 != 0x0) goto jmp_18da9;
jmp_18d9a:
	*(char *)(local_18 + 0x1731e8) = 0x0;
	*(int *)arg_0 = local_10;
	return 0x1731e8;
jmp_18da9:
	if (local_14 != 0xa) goto jmp_18db8;
	local_2c = 0x172de4;
	*(int *)local_2c = (*(int *)local_2c + 0x1);
jmp_18db8:
	if (local_18 >= 0x3ff) goto jmp_18dc9;
	*(char *)(local_18 + 0x1731e8) = local_14;
	local_18 = (local_18 + 0x1);
jmp_18dc9:
	goto jmp_18d82;
jmp_18dcb:
	if (local_18 >= 0x3ff) goto jmp_18ddc;
	*(char *)(local_18 + 0x1731e8) = local_14;
	local_18 = (local_18 + 0x1);
jmp_18ddc:
	local_10 = (local_10 + 0x1);
	local_14 = (char)*(char *)local_10;
	if (local_14 > 0x20) goto jmp_18dcb;
	*(char *)(local_18 + 0x1731e8) = 0x0;
	*(int *)arg_0 = local_10;
	return 0x1731e8;
}

/*
=================
COM_MatchToken

Address: 0x18dfb
Stack Size: 0x24
Calls: Com_Error, strcmp, COM_Parse
Called by: Parse3DMatrix, Parse2DMatrix, Parse1DMatrix
=================
*/
void COM_MatchToken(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	int		local_20;

	local_1c = COM_Parse(arg_0);
	local_18 = local_1c;
	local_20 = strcmp(local_18, arg_1);
	if (local_20 == 0x0) goto jmp_18e22;
	Com_Error(0x1, 0x7321, local_18, arg_1);
jmp_18e22:
}

/*
=================
SkipBracedSection

Address: 0x18e24
Stack Size: 0x18
Calls: COM_ParseExt
=================
*/
int SkipBracedSection(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	arg_1 = arg_1;
jmp_18e2d:
	local_14 = COM_ParseExt(arg_0, 0x1);
	local_10 = local_14;
	if ((char)*(char *)(local_10 + 0x1) != 0x0) goto jmp_18e5c;
	if ((char)*(char *)local_10 != 0x7b) goto jmp_18e50;
	arg_1 = (arg_1 + 0x1);
	goto jmp_18e5c;
jmp_18e50:
	if ((char)*(char *)local_10 != 0x7d) goto jmp_18e5c;
	arg_1 = (arg_1 - 0x1);
jmp_18e5c:
	if (arg_1 == 0x0) goto jmp_18e65;
	if (*(int *)arg_0 != 0x0) goto jmp_18e2d;
jmp_18e65:
	if (arg_1 != 0x0) goto jmp_18e6e;
	local_14 = 0x1;
	goto jmp_18e71;
jmp_18e6e:
	local_14 = 0x0;
jmp_18e71:
	return local_14;
}

/*
=================
SkipRestOfLine

Address: 0x18e76
Stack Size: 0x18
=================
*/
void SkipRestOfLine(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	local_c = *(int *)arg_0;
	if ((char)*(char *)local_c != 0x0) goto jmp_18e95;
	goto jmp_18eb2;
jmp_18e84:
	if (local_8 != 0xa) goto jmp_18e95;
	local_10 = 0x172de4;
	*(int *)local_10 = (*(int *)local_10 + 0x1);
	goto jmp_18ead;
jmp_18e95:
	local_10 = local_c;
	local_c = (local_10 + 0x1);
	local_14 = (char)*(char *)local_10;
	local_8 = local_14;
	if (local_14 != 0x0) goto jmp_18e84;
jmp_18ead:
	*(int *)arg_0 = local_c;
jmp_18eb2:
}

/*
=================
Parse1DMatrix

Address: 0x18eb4
Stack Size: 0x20
Calls: atof, COM_Parse, COM_MatchToken
Called by: Parse2DMatrix
=================
*/
void Parse1DMatrix(int arg_0, int arg_1, int arg_2) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	COM_MatchToken(arg_0, 0x731f);
	local_10 = 0x0;
	goto jmp_18ef0;
jmp_18ece:
	local_18 = COM_Parse(arg_0);
	local_14 = local_18;
	local_1c = atof(local_14);
	*(int *)((local_10 << 0x2) + arg_2) = local_1c;
	local_10 = (local_10 + 0x1);
jmp_18ef0:
	if (local_10 < arg_1) goto jmp_18ece;
	COM_MatchToken(arg_0, 0x731d);
}

/*
=================
Parse2DMatrix

Address: 0x18eff
Stack Size: 0x1c
Calls: Parse1DMatrix, COM_MatchToken
Called by: Parse3DMatrix
=================
*/
void Parse2DMatrix(int arg_0, int arg_1, int arg_2, int arg_3) {
	char	local_14[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	COM_MatchToken(arg_0, 0x731f);
	*(int *)local_14 = 0x0;
	goto jmp_18f37;
jmp_18f1d:
	Parse1DMatrix(arg_0, arg_2, (((*(int *)local_14 * arg_2) << 0x2) + arg_3));
	*(int *)local_14 = (*(int *)local_14 + 0x1);
jmp_18f37:
	if (*(int *)local_14 < arg_1) goto jmp_18f1d;
	COM_MatchToken(arg_0, 0x731d);
}

/*
=================
Parse3DMatrix

Address: 0x18f46
Stack Size: 0x24
Calls: Parse2DMatrix, COM_MatchToken
=================
*/
void Parse3DMatrix(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	char	local_18[12];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	arg_4 = arg_4;
	COM_MatchToken(arg_0, 0x731f);
	*(int *)local_18 = 0x0;
	goto jmp_18f88;
jmp_18f68:
	Parse2DMatrix(arg_0, arg_2, arg_3, ((((*(int *)local_18 * arg_3) * arg_2) << 0x2) + arg_4));
	*(int *)local_18 = (*(int *)local_18 + 0x1);
jmp_18f88:
	if (*(int *)local_18 < arg_1) goto jmp_18f68;
	COM_MatchToken(arg_0, 0x731d);
}

/*
=================
Com_HexStrToInt

Address: 0x18f97
Stack Size: 0x30
Calls: tolower, strlen
=================
*/
int Com_HexStrToInt(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	arg_0 = arg_0;
	if (arg_0 != 0x0) goto jmp_18fa4;
	return 0xffffffff;
jmp_18fa4:
	if ((char)*(char *)arg_0 != 0x30) goto jmp_1902d;
	if ((char)*(char *)(arg_0 + 0x1) != 0x78) goto jmp_1902d;
	if ((char)*(char *)(arg_0 + 0x2) == 0x0) goto jmp_1902d;
	local_14 = 0x0;
	local_1c = strlen(arg_0);
	local_18 = local_1c;
	local_10 = 0x2;
	goto jmp_19023;
jmp_18fcd:
	local_14 = (local_14 << 0x4);
	local_24 = tolower((char)*(char *)(local_10 + arg_0));
	*(char *)&local_20 = local_24;
	local_28 = (char)*(char *)&local_20;
	if (local_28 < 0x30) goto jmp_18ff9;
	if (local_28 > 0x39) goto jmp_18ff9;
	*(char *)&local_20 = ((char)*(char *)&local_20 - 0x30);
	goto jmp_19015;
jmp_18ff9:
	local_2c = (char)*(char *)&local_20;
	if (local_2c < 0x61) goto jmp_19011;
	if (local_2c > 0x66) goto jmp_19011;
	*(char *)&local_20 = (((char)*(char *)&local_20 - 0x61) + 0xa);
	goto jmp_19015;
jmp_19011:
	return 0xffffffff;
jmp_19015:
	local_14 = (local_14 + (char)*(char *)&local_20);
	local_10 = (local_10 + 0x1);
jmp_19023:
	if (local_10 < local_18) goto jmp_18fcd;
	return local_14;
jmp_1902d:
	return 0xffffffff;
}

/*
=================
Q_isprint

Address: 0x19031
Stack Size: 0xc
=================
*/
int Q_isprint(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	if (local_8 < 0x20) goto jmp_19042;
	if (local_8 > 0x7e) goto jmp_19042;
	return 0x1;
jmp_19042:
	return 0x0;
}

/*
=================
Q_islower

Address: 0x19046
Stack Size: 0xc
=================
*/
int Q_islower(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	if (local_8 < 0x61) goto jmp_19057;
	if (local_8 > 0x7a) goto jmp_19057;
	return 0x1;
jmp_19057:
	return 0x0;
}

/*
=================
Q_isupper

Address: 0x1905b
Stack Size: 0xc
=================
*/
int Q_isupper(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	if (local_8 < 0x41) goto jmp_1906c;
	if (local_8 > 0x5a) goto jmp_1906c;
	return 0x1;
jmp_1906c:
	return 0x0;
}

/*
=================
Q_isalpha

Address: 0x19070
Stack Size: 0x10
=================
*/
int Q_isalpha(int arg_0) {

	arg_0 = arg_0;
	if (arg_0 < 0x61) goto jmp_1907d;
	if (arg_0 <= 0x7a) goto jmp_19085;
jmp_1907d:
	if (arg_0 < 0x41) goto jmp_19089;
	if (arg_0 > 0x5a) goto jmp_19089;
jmp_19085:
	return 0x1;
jmp_19089:
	return 0x0;
}

/*
=================
Q_isanumber

Address: 0x1908d
Stack Size: 0x20
Calls: strtod
=================
*/
int Q_isanumber(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	if ((char)*(char *)arg_0 != 0x0) goto jmp_19098;
	return 0x0;
jmp_19098:
	local_18 = strtod(arg_0, &local_10);
	local_14 = local_18;
	if ((char)*(char *)local_10 != 0x0) goto jmp_190b0;
	local_1c = 0x1;
	goto jmp_190b3;
jmp_190b0:
	local_1c = 0x0;
jmp_190b3:
	return local_1c;
}

/*
=================
Q_isintegral

Address: 0x190b8
Stack Size: 0x10
=================
*/
int Q_isintegral(int arg_0) {
	int		local_8;
	int		local_c;

	local_c = arg_0;
	if ((float)(int)local_c != local_c) goto jmp_190c9;
	local_8 = 0x1;
	goto jmp_190cc;
jmp_190c9:
	local_8 = 0x0;
jmp_190cc:
	return local_8;
}

/*
=================
Q_strncpyz

Address: 0x190d1
Stack Size: 0x14
Calls: strncpy, Com_Error
Called by: Com_TruncateLongString, Q_strcat, COM_StripExtension, CG_TestModel_f, CG_ServerCommand, CG_ConfigStringModified, CG_ParseServerinfo, CG_NewClientInfo, CG_LoadClientInfo, CG_DrawInformation, CG_LoadingClient, CG_LoadingString, CG_Obituary, CG_CenterPrint, CG_StartMusic, CG_RegisterGraphics, CG_RegisterSounds
=================
*/
void Q_strncpyz(int arg_0, int arg_1, int arg_2) {

	arg_0 = arg_0;
	arg_2 = arg_2;
	if (arg_0 != 0x0) goto jmp_190e5;
	Com_Error(0x0, 0x7307);
jmp_190e5:
	if (arg_1 != 0x0) goto jmp_190f0;
	Com_Error(0x0, 0x72f2);
jmp_190f0:
	if (arg_2 >= 0x1) goto jmp_190fb;
	Com_Error(0x0, 0x72d9);
jmp_190fb:
	strncpy(arg_0, arg_1, (arg_2 - 0x1));
	*(char *)((arg_2 - 0x1) + arg_0) = 0x0;
}

/*
=================
Q_stricmpn

Address: 0x19114
Stack Size: 0x2c
Called by: Q_stristr, Q_stricmp, strtod
=================
*/
int Q_stricmpn(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	char	local_1c[12];
	int		local_28;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	if (arg_0 != 0x0) goto jmp_19131;
	if (arg_1 != 0x0) goto jmp_1912d;
	return 0x0;
jmp_1912d:
	return 0xffffffff;
jmp_19131:
	if (arg_1 != 0x0) goto jmp_19139;
	return 0x1;
jmp_19139:
	local_10 = arg_0;
	*(int *)local_1c = 0x1;
	arg_0 = (local_10 + *(int *)local_1c);
	local_8 = (char)*(char *)local_10;
	local_14 = arg_1;
	arg_1 = (local_14 + *(int *)local_1c);
	local_c = (char)*(char *)local_14;
	local_18 = arg_2;
	arg_2 = (local_18 - *(int *)local_1c);
	if (local_18 != 0x0) goto jmp_19171;
	return 0x0;
jmp_19171:
	if (local_8 == local_c) goto jmp_191a9;
	if (local_8 < 0x61) goto jmp_19184;
	if (local_8 > 0x7a) goto jmp_19184;
	local_8 = (local_8 - 0x20);
jmp_19184:
	if (local_c < 0x61) goto jmp_19192;
	if (local_c > 0x7a) goto jmp_19192;
	local_c = (local_c - 0x20);
jmp_19192:
	if (local_8 == local_c) goto jmp_191a9;
	if (local_8 >= local_c) goto jmp_191a1;
	local_28 = 0xffffffff;
	goto jmp_191a4;
jmp_191a1:
	local_28 = 0x1;
jmp_191a4:
	return local_28;
jmp_191a9:
	if (local_8 != 0x0) goto jmp_19139;
	return 0x0;
}

/*
=================
Q_strncmp

Address: 0x191b1
Stack Size: 0x24
=================
*/
int Q_strncmp(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
jmp_191be:
	local_10 = arg_0;
	local_1c = 0x1;
	arg_0 = (local_10 + local_1c);
	local_8 = (char)*(char *)local_10;
	local_14 = arg_1;
	arg_1 = (local_14 + local_1c);
	local_c = (char)*(char *)local_14;
	local_18 = arg_2;
	arg_2 = (local_18 - local_1c);
	if (local_18 != 0x0) goto jmp_191f6;
	return 0x0;
jmp_191f6:
	if (local_8 == local_c) goto jmp_1920d;
	if (local_8 >= local_c) goto jmp_19205;
	local_20 = 0xffffffff;
	goto jmp_19208;
jmp_19205:
	local_20 = 0x1;
jmp_19208:
	return local_20;
jmp_1920d:
	if (local_8 != 0x0) goto jmp_191be;
	return 0x0;
}

/*
=================
Q_stricmp

Address: 0x19215
Stack Size: 0x20
Calls: Q_stricmpn
Called by: Info_ValueForKey, COM_CompareExtension, CG_ServerCommand, CG_SetDeferredClientInfo, CG_ScanForExistingClientInfo, CG_ParseAnimationFile, CG_ParticleExplosion, CG_ConsoleCommand, BG_FindItem
=================
*/
int Q_stricmp(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;
	int		local_1c;

	local_18 = 0x0;
	if (arg_0 == local_18) goto jmp_19235;
	if (arg_1 == local_18) goto jmp_19235;
	local_1c = Q_stricmpn(arg_0, arg_1, 0x1869f);
	local_14 = local_1c;
	goto jmp_19238;
jmp_19235:
	local_14 = 0xffffffff;
jmp_19238:
	return local_14;
}

/*
=================
Q_strlwr

Address: 0x1923d
Stack Size: 0x18
Calls: tolower
=================
*/
int Q_strlwr(int arg_0) {
	char	local_c[8];
	int		local_14;

	*(int *)local_c = arg_0;
	goto jmp_19258;
jmp_19244:
	local_14 = tolower((char)*(char *)*(int *)local_c);
	*(char *)*(int *)local_c = local_14;
	*(int *)local_c = (*(int *)local_c + 0x1);
jmp_19258:
	if ((char)*(char *)*(int *)local_c != 0x0) goto jmp_19244;
	return arg_0;
}

/*
=================
Q_strupr

Address: 0x19263
Stack Size: 0x18
Calls: toupper
=================
*/
int Q_strupr(int arg_0) {
	char	local_c[8];
	int		local_14;

	*(int *)local_c = arg_0;
	goto jmp_1927e;
jmp_1926a:
	local_14 = toupper((char)*(char *)*(int *)local_c);
	*(char *)*(int *)local_c = local_14;
	*(int *)local_c = (*(int *)local_c + 0x1);
jmp_1927e:
	if ((char)*(char *)*(int *)local_c != 0x0) goto jmp_1926a;
	return arg_0;
}

/*
=================
Q_strcat

Address: 0x19289
Stack Size: 0x20
Calls: Q_strncpyz, Com_Error, strlen
Called by: Com_TruncateLongString, COM_DefaultExtension, CG_RegisterWeapon, CG_BuildSpectatorString
=================
*/
void Q_strcat(int arg_0, int arg_1, int arg_2) {
	int		local_14;
	char	local_18[8];

	*(int *)local_18 = strlen(arg_0);
	local_14 = *(int *)local_18;
	if (local_14 < arg_1) goto jmp_192a1;
	Com_Error(0x0, 0x72bc);
jmp_192a1:
	Q_strncpyz((local_14 + arg_0), arg_2, (arg_1 - local_14));
}

/*
=================
Q_stristr

Address: 0x192b5
Stack Size: 0x38
Calls: Q_stricmpn, strlen
=================
*/
int Q_stristr(int arg_0, int arg_1) {
	char	local_14;
	char	local_15[3];
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_1c = arg_1;
	arg_1 = (local_1c + 0x1);
	*(char *)&local_20 = *(char *)local_1c;
	*(char *)local_15 = *(char *)&local_20;
	if ((char)*(char *)&local_20 == 0x0) goto jmp_19343;
	local_24 = (char)*(char *)local_15;
	if (local_24 < 0x61) goto jmp_192ea;
	if (local_24 > 0x7a) goto jmp_192ea;
	*(char *)local_15 = ((char)*(char *)local_15 - 0x20);
jmp_192ea:
	local_28 = strlen(arg_1);
	local_18 = local_28;
jmp_192f5:
	local_2c = arg_0;
	arg_0 = (local_2c + 0x1);
	*(char *)&local_30 = *(char *)local_2c;
	local_14 = *(char *)&local_30;
	if ((char)*(char *)&local_30 != 0x0) goto jmp_19311;
	return 0x0;
jmp_19311:
	local_34 = (char)local_14;
	if (local_34 < 0x61) goto jmp_19325;
	if (local_34 > 0x7a) goto jmp_19325;
	local_14 = ((char)local_14 - 0x20);
jmp_19325:
	if ((char)local_14 != (char)*(char *)local_15) goto jmp_192f5;
	local_2c = Q_stricmpn(arg_0, arg_1, local_18);
	if (local_2c != 0x0) goto jmp_192f5;
	arg_0 = (arg_0 + 0xffffffff);
jmp_19343:
	return arg_0;
}

/*
=================
Q_PrintStrlen

Address: 0x19348
Stack Size: 0x1c
Calls: Q_IsColorString
Called by: CG_DrawAttacker
=================
*/
int Q_PrintStrlen(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;

	if (arg_0 != 0x0) goto jmp_19351;
	return 0x0;
jmp_19351:
	local_10 = 0x0;
	local_c = arg_0;
	goto jmp_1937e;
jmp_1935a:
	local_14 = Q_IsColorString(local_c);
	if (local_14 == 0x0) goto jmp_1936d;
	local_c = (local_c + 0x2);
	goto jmp_1937e;
jmp_1936d:
	local_18 = 0x1;
	local_c = (local_c + local_18);
	local_10 = (local_10 + local_18);
jmp_1937e:
	if ((char)*(char *)local_c != 0x0) goto jmp_1935a;
	return local_10;
}

/*
=================
Q_CleanStr

Address: 0x19389
Stack Size: 0x28
Calls: Q_IsColorString
Called by: CG_DrawInformation, CG_LoadingClient
=================
*/
int Q_CleanStr(int arg_0) {
	int		local_c;
	int		local_10;
	char	local_14[8];
	char	local_1c[8];
	int		local_24;

	arg_0 = arg_0;
	local_c = arg_0;
	*(int *)local_14 = arg_0;
	goto jmp_193c8;
jmp_19398:
	*(int *)local_1c = Q_IsColorString(local_c);
	if (*(int *)local_1c == 0x0) goto jmp_193ab;
	local_c = (local_c + 0x1);
	goto jmp_193c2;
jmp_193ab:
	if (local_10 < 0x20) goto jmp_193c2;
	if (local_10 > 0x7e) goto jmp_193c2;
	local_24 = *(int *)local_14;
	*(int *)local_14 = (local_24 + 0x1);
	*(char *)local_24 = local_10;
jmp_193c2:
	local_c = (local_c + 0x1);
jmp_193c8:
	*(int *)local_1c = (char)*(char *)local_c;
	local_10 = *(int *)local_1c;
	if (*(int *)local_1c != 0x0) goto jmp_19398;
	*(char *)*(int *)local_14 = 0x0;
	return arg_0;
}

/*
=================
Q_CountChar

Address: 0x193df
Stack Size: 0xc
=================
*/
int Q_CountChar(int arg_0, int arg_1) {
	int		local_8;

	arg_0 = arg_0;
	*(char *)&arg_1 = arg_1;
	local_8 = 0x0;
	goto jmp_19401;
jmp_193ed:
	if ((char)*(char *)arg_0 != (char)*(char *)&arg_1) goto jmp_193fb;
	local_8 = (local_8 + 0x1);
jmp_193fb:
	arg_0 = (arg_0 + 0x1);
jmp_19401:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_193ed;
	return local_8;
}

/*
=================
Com_sprintf

Address: 0x1940c
Stack Size: 0x24
Calls: Com_Printf, Q_vsnprintf
Called by: Info_SetValueForKey_Big, Info_SetValueForKey, COM_BeginParseSession, CG_ParseServerinfo, CG_DrawClientScore, CG_RegisterClientModelname, CG_FindClientHeadFile, CG_FindClientModelFile, CG_LoadingClient, CG_PlaceString, CG_DrawReward, CG_DrawTeamOverlay, CG_DrawField, CG_TellAttacker_f, CG_TellTarget_f, CG_RegisterGraphics, CG_RegisterSounds
=================
*/
int Com_sprintf(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_18;
	int		local_1c;
	int		local_20;

	local_1c = &arg_3;
	local_20 = Q_vsnprintf(arg_0, arg_1, arg_2, local_1c);
	local_18 = local_20;
	local_1c = 0x0;
	if (local_18 < arg_1) goto jmp_19439;
	Com_Printf(0x7280, arg_1, (local_18 + 0x1));
jmp_19439:
	return local_18;
}

/*
=================
va

Address: 0x1943e
Stack Size: 0x2c
Calls: Q_vsnprintf
Called by: CG_DrawActiveFrame, CG_ParseServerinfo, CG_DrawTourneyScoreboard, CG_DrawOldScoreboard, CG_LoadClientInfo, CG_ClearParticles, CG_DrawInformation, CG_LoadingClient, CG_EntityEvent, CG_UseItem, CG_Obituary, CG_PlaceString, CG_DrawWarmup, CG_DrawTeamVote, CG_DrawVote, CG_DrawScores, CG_DrawTimer, CG_DrawFPS, CG_DrawSnapshot, CG_SizeDown_f, CG_SizeUp_f, CG_TargetCommand_f, CG_BuildSpectatorString, CG_RegisterGraphics
=================
*/
int va(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	local_20 = 0x2654;
	local_24 = *(int *)local_20;
	local_28 = 0x1;
	local_1c = ((0x7d00 * (local_24 & local_28)) + 0x15f3e0);
	*(int *)local_20 = (local_24 + local_28);
	local_18 = &arg_1;
	Q_vsnprintf(local_1c, 0x7d00, arg_0, local_18);
	local_18 = 0x0;
	return local_1c;
}

/*
=================
Com_TruncateLongString

Address: 0x19476
Stack Size: 0x1c
Calls: Q_strcat, Q_strncpyz, strlen
=================
*/
void Com_TruncateLongString(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;

	local_18 = strlen(arg_1);
	local_14 = local_18;
	if (local_14 > 0x40) goto jmp_19493;
	Q_strncpyz(arg_0, arg_1, 0x40);
	goto jmp_194b8;
jmp_19493:
	Q_strncpyz(arg_0, arg_1, 0x1d);
	Q_strcat(arg_0, 0x40, 0x727a);
	Q_strcat(arg_0, 0x40, ((local_14 + arg_1) + 0xffffffe3));
jmp_194b8:
}

/*
=================
Info_ValueForKey

Address: 0x194ba
Stack Size: 0x202c
Calls: Q_stricmp, Com_Error, strlen
Called by: CG_ParseServerinfo, CG_NewClientInfo, CG_DrawInformation, CG_LoadingClient, CG_Obituary, CG_DrawAttacker
=================
*/
int Info_ValueForKey(int arg_0, int arg_1) {
	int		local_10;
	char	local_14[8192];
	int		local_2014;
	int		local_2018;
	int		local_201c;
	int		local_2020;
	int		local_2024;
	int		local_2028;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_2014 = 0x0;
	if (arg_0 == local_2014) goto jmp_194d0;
	if (arg_1 != local_2014) goto jmp_194d4;
jmp_194d0:
	return 0x736b;
jmp_194d4:
	local_2018 = strlen(arg_0);
	if (local_2018 < 0x2000) goto jmp_194e6;
	Com_Error(0x1, 0x7254);
jmp_194e6:
	local_201c = 0x2658;
	*(int *)local_201c = (*(int *)local_201c ^ 0x1);
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_1959c;
	arg_0 = (arg_0 + 0x1);
	goto jmp_1959c;
jmp_194ff:
	local_10 = local_14;
	goto jmp_1952d;
jmp_19504:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_1950e;
	return 0x736b;
jmp_1950e:
	local_2020 = local_10;
	local_2028 = 0x1;
	local_10 = (local_2020 + local_2028);
	local_2024 = arg_0;
	arg_0 = (local_2024 + local_2028);
	*(char *)local_2020 = *(char *)local_2024;
jmp_1952d:
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_19504;
	*(char *)local_10 = 0x0;
	arg_0 = (arg_0 + 0x1);
	local_10 = ((global_2658 << 0xd) + 0x16ede0);
	goto jmp_19566;
jmp_19547:
	local_2020 = local_10;
	local_2028 = 0x1;
	local_10 = (local_2020 + local_2028);
	local_2024 = arg_0;
	arg_0 = (local_2024 + local_2028);
	*(char *)local_2020 = *(char *)local_2024;
jmp_19566:
	local_2020 = (char)*(char *)arg_0;
	if (local_2020 == 0x5c) goto jmp_19574;
	if (local_2020 != 0x0) goto jmp_19547;
jmp_19574:
	*(char *)local_10 = 0x0;
	local_2024 = Q_stricmp(arg_1, local_14);
	if (local_2024 != 0x0) goto jmp_1958e;
	return ((global_2658 << 0xd) + 0x16ede0);
jmp_1958e:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_19596;
	goto jmp_1959e;
jmp_19596:
	arg_0 = (arg_0 + 0x1);
jmp_1959c:
	goto jmp_194ff;
jmp_1959e:
	return 0x736b;
}

/*
=================
Info_NextPair

Address: 0x195a2
Stack Size: 0x1c
=================
*/
void Info_NextPair(int arg_0, int arg_1, int arg_2) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;

	arg_0 = arg_0;
	local_8 = *(int *)arg_0;
	if ((char)*(char *)local_8 != 0x5c) goto jmp_195b8;
	local_8 = (local_8 + 0x1);
jmp_195b8:
	*(char *)arg_1 = 0x0;
	*(char *)arg_2 = 0x0;
	local_c = arg_1;
	goto jmp_195f6;
jmp_195c6:
	if ((char)*(char *)local_8 != 0x0) goto jmp_195d7;
	*(char *)local_c = 0x0;
	*(int *)arg_0 = local_8;
	goto jmp_19642;
jmp_195d7:
	local_10 = local_c;
	local_18 = 0x1;
	local_c = (local_10 + local_18);
	local_14 = local_8;
	local_8 = (local_14 + local_18);
	*(char *)local_10 = *(char *)local_14;
jmp_195f6:
	if ((char)*(char *)local_8 != 0x5c) goto jmp_195c6;
	*(char *)local_c = 0x0;
	local_8 = (local_8 + 0x1);
	local_c = arg_2;
	goto jmp_1962b;
jmp_1960c:
	local_10 = local_c;
	local_18 = 0x1;
	local_c = (local_10 + local_18);
	local_14 = local_8;
	local_8 = (local_14 + local_18);
	*(char *)local_10 = *(char *)local_14;
jmp_1962b:
	local_10 = (char)*(char *)local_8;
	if (local_10 == 0x5c) goto jmp_19639;
	if (local_10 != 0x0) goto jmp_1960c;
jmp_19639:
	*(char *)local_c = 0x0;
	*(int *)arg_0 = local_8;
jmp_19642:
}

/*
=================
Info_RemoveKey

Address: 0x19644
Stack Size: 0x834
Calls: memmove, strcmp, strchr, Com_Error, strlen
Called by: Info_SetValueForKey
=================
*/
void Info_RemoveKey(int arg_0, int arg_1) {
	int		local_14;
	char	local_18[1024];
	int		local_418;
	char	local_41c[1024];
	int		local_81c;
	char	local_820[8];
	int		local_828;
	int		local_82c;
	int		local_830;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_81c = strlen(arg_0);
	if (local_81c < 0x400) goto jmp_1965f;
	Com_Error(0x1, 0x7230);
jmp_1965f:
	*(int *)local_820 = strchr(arg_1, 0x5c);
	if (*(int *)local_820 == 0x0) goto jmp_19724;
	goto jmp_19726;
jmp_1966e:
	local_418 = arg_0;
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_1967e;
	arg_0 = (arg_0 + 0x1);
jmp_1967e:
	local_14 = local_18;
	goto jmp_196aa;
jmp_19683:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_1968b;
	goto jmp_19726;
jmp_1968b:
	local_828 = local_14;
	local_830 = 0x1;
	local_14 = (local_828 + local_830);
	local_82c = arg_0;
	arg_0 = (local_82c + local_830);
	*(char *)local_828 = *(char *)local_82c;
jmp_196aa:
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_19683;
	*(char *)local_14 = 0x0;
	arg_0 = (arg_0 + 0x1);
	local_14 = local_41c;
	goto jmp_196e6;
jmp_196bf:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_196c7;
	goto jmp_19726;
jmp_196c7:
	local_828 = local_14;
	local_830 = 0x1;
	local_14 = (local_828 + local_830);
	local_82c = arg_0;
	arg_0 = (local_82c + local_830);
	*(char *)local_828 = *(char *)local_82c;
jmp_196e6:
	local_828 = (char)*(char *)arg_0;
	if (local_828 == 0x5c) goto jmp_196f4;
	if (local_828 != 0x0) goto jmp_196bf;
jmp_196f4:
	*(char *)local_14 = 0x0;
	local_82c = strcmp(arg_1, local_18);
	if (local_82c != 0x0) goto jmp_1971c;
	local_830 = strlen(arg_0);
	memmove(local_418, arg_0, (local_830 + 0x1));
	goto jmp_19726;
jmp_1971c:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_19724;
	goto jmp_19726;
jmp_19724:
	goto jmp_1966e;
jmp_19726:
}

/*
=================
Info_RemoveKey_Big

Address: 0x19728
Stack Size: 0x4034
Calls: memmove, strcmp, strchr, Com_Error, strlen
Called by: Info_SetValueForKey_Big
=================
*/
void Info_RemoveKey_Big(int arg_0, int arg_1) {
	int		local_14;
	char	local_18[8192];
	int		local_2018;
	char	local_201c[8192];
	int		local_401c;
	char	local_4020[8];
	int		local_4028;
	int		local_402c;
	int		local_4030;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_401c = strlen(arg_0);
	if (local_401c < 0x2000) goto jmp_19743;
	Com_Error(0x1, 0x7208);
jmp_19743:
	*(int *)local_4020 = strchr(arg_1, 0x5c);
	if (*(int *)local_4020 == 0x0) goto jmp_19808;
	goto jmp_1980a;
jmp_19752:
	local_2018 = arg_0;
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_19762;
	arg_0 = (arg_0 + 0x1);
jmp_19762:
	local_14 = local_18;
	goto jmp_1978e;
jmp_19767:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_1976f;
	goto jmp_1980a;
jmp_1976f:
	local_4028 = local_14;
	local_4030 = 0x1;
	local_14 = (local_4028 + local_4030);
	local_402c = arg_0;
	arg_0 = (local_402c + local_4030);
	*(char *)local_4028 = *(char *)local_402c;
jmp_1978e:
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_19767;
	*(char *)local_14 = 0x0;
	arg_0 = (arg_0 + 0x1);
	local_14 = local_201c;
	goto jmp_197ca;
jmp_197a3:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_197ab;
	goto jmp_1980a;
jmp_197ab:
	local_4028 = local_14;
	local_4030 = 0x1;
	local_14 = (local_4028 + local_4030);
	local_402c = arg_0;
	arg_0 = (local_402c + local_4030);
	*(char *)local_4028 = *(char *)local_402c;
jmp_197ca:
	local_4028 = (char)*(char *)arg_0;
	if (local_4028 == 0x5c) goto jmp_197d8;
	if (local_4028 != 0x0) goto jmp_197a3;
jmp_197d8:
	*(char *)local_14 = 0x0;
	local_402c = strcmp(arg_1, local_18);
	if (local_402c != 0x0) goto jmp_19800;
	local_4030 = strlen(arg_0);
	memmove(local_2018, arg_0, (local_4030 + 0x1));
	goto jmp_1980a;
jmp_19800:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_19808;
	goto jmp_1980a;
jmp_19808:
	goto jmp_19752;
jmp_1980a:
}

/*
=================
Info_Validate

Address: 0x1980c
Stack Size: 0x18
Calls: strchr
=================
*/
int Info_Validate(int arg_0) {
	int		local_10;
	int		local_14;

	local_10 = strchr(arg_0, 0x22);
	if (local_10 == 0x0) goto jmp_1981e;
	return 0x0;
jmp_1981e:
	local_14 = strchr(arg_0, 0x3b);
	if (local_14 == 0x0) goto jmp_1982f;
	return 0x0;
jmp_1982f:
	return 0x1;
}

/*
=================
Info_SetValueForKey

Address: 0x19833
Stack Size: 0x434
Calls: strcpy, strcat, Com_sprintf, Info_RemoveKey, Com_Printf, strchr, Com_Error, strlen
=================
*/
void Info_SetValueForKey(int arg_0, int arg_1, int arg_2) {
	int		local_1c;
	char	local_20[1024];
	int		local_420;
	int		local_424;
	int		local_428;
	int		local_42c;
	int		local_430;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	local_1c = 0x7204;
	local_420 = strlen(arg_0);
	if (local_420 < 0x400) goto jmp_1988f;
	Com_Error(0x1, 0x71db);
	goto jmp_1988f;
jmp_19857:
	local_424 = strchr(arg_1, (char)*(char *)local_1c);
	if (local_424 != 0x0) goto jmp_19877;
	local_428 = strchr(arg_2, (char)*(char *)local_1c);
	if (local_428 == 0x0) goto jmp_19889;
jmp_19877:
	Com_Printf(0x71aa, (char)*(char *)local_1c, arg_1, arg_2);
	goto jmp_198e9;
jmp_19889:
	local_1c = (local_1c + 0x1);
jmp_1988f:
	if ((char)*(char *)local_1c != 0x0) goto jmp_19857;
	Info_RemoveKey(arg_0, arg_1);
	if (arg_2 == 0x0) goto jmp_198ad;
	local_428 = strlen(arg_2);
	if (local_428 != 0x0) goto jmp_198af;
jmp_198ad:
	goto jmp_198e9;
jmp_198af:
	Com_sprintf(local_20, 0x400, 0x71a3, arg_1, arg_2);
	local_42c = strlen(local_20);
	local_430 = strlen(arg_0);
	if ((local_42c + local_430) < 0x400) goto jmp_198d9;
	Com_Printf(0x7186);
	goto jmp_198e9;
jmp_198d9:
	strcat(local_20, arg_0);
	strcpy(arg_0, local_20);
jmp_198e9:
}

/*
=================
Info_SetValueForKey_Big

Address: 0x198eb
Stack Size: 0x202c
Calls: strcat, Com_sprintf, Info_RemoveKey_Big, Com_Printf, strchr, Com_Error, strlen
=================
*/
void Info_SetValueForKey_Big(int arg_0, int arg_1, int arg_2) {
	int		local_1c;
	char	local_20[8192];
	int		local_2020;
	int		local_2024;
	int		local_2028;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	local_1c = 0x7204;
	local_2020 = strlen(arg_0);
	if (local_2020 < 0x2000) goto jmp_19947;
	Com_Error(0x1, 0x71db);
	goto jmp_19947;
jmp_1990f:
	local_2024 = strchr(arg_1, (char)*(char *)local_1c);
	if (local_2024 != 0x0) goto jmp_1992f;
	local_2028 = strchr(arg_2, (char)*(char *)local_1c);
	if (local_2028 == 0x0) goto jmp_19941;
jmp_1992f:
	Com_Printf(0x71aa, (char)*(char *)local_1c, arg_1, arg_2);
	goto jmp_1998e;
jmp_19941:
	local_1c = (local_1c + 0x1);
jmp_19947:
	if ((char)*(char *)local_1c != 0x0) goto jmp_1990f;
	Info_RemoveKey_Big(arg_0, arg_1);
	if (arg_2 != 0x0) goto jmp_1995c;
	goto jmp_1998e;
jmp_1995c:
	Com_sprintf(local_20, 0x2000, 0x71a3, arg_1, arg_2);
	local_2024 = strlen(local_20);
	local_2028 = strlen(arg_0);
	if ((local_2024 + local_2028) < 0x2000) goto jmp_19986;
	Com_Printf(0x7165);
	goto jmp_1998e;
jmp_19986:
	strcat(arg_0, local_20);
jmp_1998e:
}

/*
=================
Com_CharIsOneOfCharset

Address: 0x19990
Stack Size: 0x14
Calls: strlen
Called by: Com_SkipTokens, Com_SkipCharset
=================
*/
int Com_CharIsOneOfCharset(int arg_0, int arg_1) {
	int		local_c;
	int		local_10;

	*(char *)&arg_0 = arg_0;
	arg_1 = arg_1;
	local_c = 0x0;
	goto jmp_199b3;
jmp_1999e:
	if ((char)*(char *)(local_c + arg_1) != (char)*(char *)&arg_0) goto jmp_199ad;
	return 0x1;
jmp_199ad:
	local_c = (local_c + 0x1);
jmp_199b3:
	local_10 = strlen(arg_1);
	if (local_c < local_10) goto jmp_1999e;
	return 0x0;
}

/*
=================
Com_SkipCharset

Address: 0x199c3
Stack Size: 0x18
Calls: Com_CharIsOneOfCharset
=================
*/
int Com_SkipCharset(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;

	arg_1 = arg_1;
	local_10 = arg_0;
	goto jmp_199e4;
jmp_199ce:
	local_14 = Com_CharIsOneOfCharset((char)*(char *)local_10, arg_1);
	if (local_14 == 0x0) goto jmp_199e8;
	local_10 = (local_10 + 0x1);
jmp_199e4:
	if (local_10 != 0x0) goto jmp_199ce;
jmp_199e8:
	return local_10;
}

/*
=================
Com_SkipTokens

Address: 0x199ed
Stack Size: 0x24
Calls: Com_CharIsOneOfCharset
=================
*/
int Com_SkipTokens(int arg_0, int arg_1, int arg_2) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;

	arg_1 = arg_1;
	arg_2 = arg_2;
	local_14 = 0x0;
	local_10 = arg_0;
	goto jmp_19a41;
jmp_199ff:
	local_18 = local_10;
	local_10 = (local_18 + 0x1);
	local_1c = Com_CharIsOneOfCharset((char)*(char *)local_18, arg_2);
	if (local_1c == 0x0) goto jmp_19a39;
	local_14 = (local_14 + 0x1);
	goto jmp_19a27;
jmp_19a21:
	local_10 = (local_10 + 0x1);
jmp_19a27:
	local_20 = Com_CharIsOneOfCharset((char)*(char *)local_10, arg_2);
	if (local_20 != 0x0) goto jmp_19a21;
	goto jmp_19a41;
jmp_19a39:
	if ((char)*(char *)local_10 != 0x0) goto jmp_19a41;
	goto jmp_19a46;
jmp_19a41:
	if (local_14 < arg_1) goto jmp_199ff;
jmp_19a46:
	if (local_14 != arg_1) goto jmp_19a50;
	return local_10;
	goto jmp_19a53;
jmp_19a50:
	return arg_0;
jmp_19a53:
}

