/*
	QVM Decompiler 1.0 by zen

	Name: sample/ui.qvm
	Opcodes Count: 87240
	Functions Count: 605
	Syscalls Count: 59
	Globals Count: 4705
	Calls Restored: 97.96
*/

char	global_0[48] = "\x00\x00\x00\x00\x15\x00\x00\x00\x19\x00\x00\x00\x20\x00\x00\x00\x27\x00\x00\x00\x34\x00\x00\x00\x41\x00\x00\x00\x4b\x00\x00\x00\x54\x00\x00\x00\x5e\x00\x00\x00\x6a\x00\x00\x00\x74\x00\x00\x00";
char	cvarTable[784] = "\x24\xbb\x00\x00\x12\x35\x00\x00\x0f\x35\x00\x00\x01\x00\x00\x00\x14\xba\x00\x00\xfe\x34\x00\x00\xfc\x34\x00\x00\x01\x00\x00\x00\x04\xb9\x00\x00\xe7\x34\x00\x00\xfc\x34\x00\x00\x01\x00\x00\x00\xf4\xb7\x00\x00\xd2\x34\x00\x00\xcf\x34\x00\x00\x01\x00\x00\x00\xe4\xb6\x00\x00\xbd\x34\x00\x00\xfc\x34\x00\x00\x01\x00\x00\x00\xd4\xb5\x00\x00\xab\x34\x00\x00\x0f\x35\x00\x00\x01\x00\x00\x00\xc4\xb4\x00\x00\x9a\x34\x00\x00\x98\x34\x00\x00\x01\x00\x00\x00\xb4\xb3\x00\x00\x84\x34\x00\x00\x82\x34\x00\x00\x01\x00\x00\x00\xa4\xb2\x00\x00\x71\x34\x00\x00\x6e\x34\x00\x00\x01\x00\x00\x00\x94\xb1\x00\x00\x5e\x34\x00\x00\xfc\x34\x00\x00\x01\x00\x00\x00\x84\xb0\x00\x00\x51\x34\x00\x00\x50\x34\x00\x00\x50\x00\x00\x00\x74\xaf\x00\x00\x45\x34\x00\x00\x50\x34\x00\x00\x50\x00\x00\x00\x64\xae\x00\x00\x39\x34\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x54\xad\x00\x00\x2d\x34\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x44\xac\x00\x00\x21\x34\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x34\xab\x00\x00\x15\x34\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x24\xaa\x00\x00\x09\x34\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x14\xa9\x00\x00\xfe\x33\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x04\xa8\x00\x00\xf3\x33\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\xf4\xa6\x00\x00\xe9\x33\x00\x00\xe7\x33\x00\x00\x21\x00\x00\x00\xe4\xa5\x00\x00\xd8\x33\x00\x00\x50\x34\x00\x00\x40\x00\x00\x00\xd4\xa4\x00\x00\xc7\x33\x00\x00\x98\x34\x00\x00\x01\x00\x00\x00\xc4\xa3\x00\x00\xb4\x33\x00\x00\xfc\x34\x00\x00\x01\x00\x00\x00\xb4\xa2\x00\x00\xa2\x33\x00\x00\xa0\x33\x00\x00\x01\x00\x00\x00\xa4\xa1\x00\x00\x8d\x33\x00\x00\x98\x34\x00\x00\x01\x00\x00\x00\x94\xa0\x00\x00\x79\x33\x00\x00\x98\x34\x00\x00\x01\x00\x00\x00\x84\x9f\x00\x00\x6c\x33\x00\x00\x67\x33\x00\x00\x01\x00\x00\x00\x74\x9e\x00\x00\x56\x33\x00\x00\xa0\x33\x00\x00\x01\x00\x00\x00\x64\x9d\x00\x00\x40\x33\x00\x00\x98\x34\x00\x00\x01\x00\x00\x00\x54\x9c\x00\x00\x37\x33\x00\x00\x98\x34\x00\x00\x01\x00\x00\x00\x44\x9b\x00\x00\x2f\x33\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x34\x9a\x00\x00\x27\x33\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x24\x99\x00\x00\x1f\x33\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x14\x98\x00\x00\x17\x33\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x04\x97\x00\x00\x0f\x33\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\xf4\x95\x00\x00\x07\x33\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\xe4\x94\x00\x00\xff\x32\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\xd4\x93\x00\x00\xf7\x32\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\xc4\x92\x00\x00\xef\x32\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\xb4\x91\x00\x00\xe6\x32\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\xa4\x90\x00\x00\xdd\x32\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x94\x8f\x00\x00\xd4\x32\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x84\x8e\x00\x00\xcb\x32\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x74\x8d\x00\x00\xc2\x32\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x64\x8c\x00\x00\xb9\x32\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x54\x8b\x00\x00\xb0\x32\x00\x00\x50\x34\x00\x00\x01\x00\x00\x00\x44\x8a\x00\x00\xa0\x32\x00\x00\xfc\x34\x00\x00\x40\x00\x00\x00\x34\x89\x00\x00\x98\x32\x00\x00\x98\x34\x00\x00\x40\x00\x00\x00\x00\x00\x00\x00\x88\x32\x00\x00\x50\x34\x00\x00\x00\x00\x00\x00";
int		cvarTableSize = 49; // Used by: UI_UpdateCvars, UI_RegisterCvars
char	bg_itemlist[1924] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x7c\x49\x00\x00\x64\x49\x00\x00\x44\x49\x00\x00\x1d\x49\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x0b\x49\x00\x00\xff\x48\x00\x00\x05\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\xed\x48\x00\x00\xd5\x48\x00\x00\xb1\x48\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x9e\x48\x00\x00\x98\x48\x00\x00\x32\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x88\x48\x00\x00\xd5\x48\x00\x00\x64\x48\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x54\x48\x00\x00\x48\x48\x00\x00\x64\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x36\x48\x00\x00\x1d\x48\x00\x00\xf6\x47\x00\x00\xce\x47\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xbc\x47\x00\x00\xb3\x47\x00\x00\x05\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\xa7\x47\x00\x00\x8e\x47\x00\x00\x66\x47\x00\x00\x3d\x47\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x2a\x47\x00\x00\x20\x47\x00\x00\x19\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x0e\x47\x00\x00\xf5\x46\x00\x00\xce\x46\x00\x00\xa6\x46\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x96\x46\x00\x00\x8c\x46\x00\x00\x32\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x7b\x46\x00\x00\x62\x46\x00\x00\x3c\x46\x00\x00\x15\x46\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x04\x46\x00\x00\xf8\x45\x00\x00\x64\x00\x00\x00\x04\x00\x00\x00\x00\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\xe8\x45\x00\x00\xd2\x45\x00\x00\xac\x45\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x97\x45\x00\x00\x8e\x45\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x7f\x45\x00\x00\xd2\x45\x00\x00\x5b\x45\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x47\x45\x00\x00\x3f\x45\x00\x00\x0a\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x2d\x45\x00\x00\xd2\x45\x00\x00\x03\x45\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xec\x44\x00\x00\xe1\x44\x00\x00\x28\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\xca\x44\x00\x00\xd2\x45\x00\x00\xa4\x44\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x90\x44\x00\x00\x7f\x44\x00\x00\x0a\x00\x00\x00\x01\x00\x00\x00\x04\x00\x00\x00\x8d\x49\x00\x00\x39\x44\x00\x00\x23\x44\x00\x00\xd2\x45\x00\x00\xff\x43\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xec\x43\x00\x00\xdc\x43\x00\x00\x0a\x00\x00\x00\x01\x00\x00\x00\x05\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\xcb\x43\x00\x00\xd2\x45\x00\x00\xa3\x43\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x8d\x43\x00\x00\x7f\x43\x00\x00\x64\x00\x00\x00\x01\x00\x00\x00\x06\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x70\x43\x00\x00\xd2\x45\x00\x00\x4c\x43\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x38\x43\x00\x00\x30\x43\x00\x00\x0a\x00\x00\x00\x01\x00\x00\x00\x07\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x1f\x43\x00\x00\xd2\x45\x00\x00\xfd\x42\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xea\x42\x00\x00\xdf\x42\x00\x00\x32\x00\x00\x00\x01\x00\x00\x00\x08\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\xd4\x42\x00\x00\xd2\x45\x00\x00\xb8\x42\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xa8\x42\x00\x00\xa1\x42\x00\x00\x14\x00\x00\x00\x01\x00\x00\x00\x09\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x8c\x42\x00\x00\xd2\x45\x00\x00\x68\x42\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x54\x42\x00\x00\x45\x42\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x0a\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x39\x42\x00\x00\x22\x42\x00\x00\xff\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xeb\x41\x00\x00\xe4\x41\x00\x00\x0a\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\xd7\x41\x00\x00\x22\x42\x00\x00\xb1\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x9a\x41\x00\x00\x92\x41\x00\x00\x32\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x84\x41\x00\x00\x22\x42\x00\x00\x61\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x4d\x41\x00\x00\x44\x41\x00\x00\x05\x00\x00\x00\x02\x00\x00\x00\x04\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x39\x41\x00\x00\x22\x42\x00\x00\x17\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x04\x41\x00\x00\xfe\x40\x00\x00\x1e\x00\x00\x00\x02\x00\x00\x00\x08\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\xef\x40\x00\x00\x22\x42\x00\x00\xca\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xb4\x40\x00\x00\xaa\x40\x00\x00\x3c\x00\x00\x00\x02\x00\x00\x00\x06\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x9d\x40\x00\x00\x22\x42\x00\x00\x7b\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x68\x40\x00\x00\x60\x40\x00\x00\x05\x00\x00\x00\x02\x00\x00\x00\x05\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x55\x40\x00\x00\x22\x42\x00\x00\x32\x40\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x1e\x40\x00\x00\x18\x40\x00\x00\x0a\x00\x00\x00\x02\x00\x00\x00\x07\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x0f\x40\x00\x00\x22\x42\x00\x00\xf0\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xe0\x3f\x00\x00\xd7\x3f\x00\x00\x0f\x00\x00\x00\x02\x00\x00\x00\x09\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\xc3\x3f\x00\x00\xaa\x3f\x00\x00\x82\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x71\x3f\x00\x00\x5d\x3f\x00\x00\x3c\x00\x00\x00\x06\x00\x00\x00\x01\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x4d\x3f\x00\x00\xaa\x3f\x00\x00\x29\x3f\x00\x00\xfe\x3e\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xf1\x3e\x00\x00\xea\x3e\x00\x00\x3c\x00\x00\x00\x06\x00\x00\x00\x02\x00\x00\x00\x8d\x49\x00\x00\xcf\x3e\x00\x00\xc5\x3e\x00\x00\xaa\x3e\x00\x00\x89\x3e\x00\x00\x63\x3e\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x58\x3e\x00\x00\x4c\x3e\x00\x00\x1e\x00\x00\x00\x05\x00\x00\x00\x01\x00\x00\x00\x8d\x49\x00\x00\x1c\x3e\x00\x00\x10\x3e\x00\x00\xf8\x3d\x00\x00\xd5\x3d\x00\x00\xad\x3d\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x9c\x3d\x00\x00\x90\x3d\x00\x00\x1e\x00\x00\x00\x05\x00\x00\x00\x02\x00\x00\x00\x8d\x49\x00\x00\x60\x3d\x00\x00\x55\x3d\x00\x00\x3f\x3d\x00\x00\x1d\x3d\x00\x00\xf6\x3c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xea\x3c\x00\x00\xe4\x3c\x00\x00\x1e\x00\x00\x00\x05\x00\x00\x00\x03\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\xd9\x3c\x00\x00\xbc\x3c\x00\x00\x9a\x3c\x00\x00\x73\x3c\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x67\x3c\x00\x00\x5a\x3c\x00\x00\x1e\x00\x00\x00\x05\x00\x00\x00\x04\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x4f\x3c\x00\x00\x32\x3c\x00\x00\x10\x3c\x00\x00\xe9\x3b\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xdd\x3b\x00\x00\xd0\x3b\x00\x00\x1e\x00\x00\x00\x05\x00\x00\x00\x05\x00\x00\x00\x8d\x49\x00\x00\xba\x3b\x00\x00\xae\x3b\x00\x00\x97\x3b\x00\x00\x74\x3b\x00\x00\x4c\x3b\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x3b\x00\x00\x38\x3b\x00\x00\x3c\x00\x00\x00\x05\x00\x00\x00\x06\x00\x00\x00\x8d\x49\x00\x00\x97\x3b\x00\x00\x27\x3b\x00\x00\x00\x00\x00\x00\x0f\x3b\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xfe\x3a\x00\x00\xf5\x3a\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x07\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\xe3\x3a\x00\x00\x00\x00\x00\x00\xcb\x3a\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xba\x3a\x00\x00\xb0\x3a\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x08\x00\x00\x00\x8d\x49\x00\x00\x8d\x49\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";
int		bg_numItems = 36; // Used by: BG_CanItemBeGrabbed, BG_FindItemForHoldable, BG_FindItemForPowerup
char	global_acc[84] = "\x50\x03\x00\x00\x64\x02\x00\x00\x68\x02\x00\x00\x7f\x02\x00\x00\x98\x02\x00\x00\xd7\x02\x00\x00\x41\x03\x00\x00\x57\x03\x00\x00\xdb\x02\x00\x00\x75\x03\x00\x00\x75\x03\x00\x00\x7e\x03\x00\x00\x1e\x04\x00\x00\xc4\x03\x00\x00\x86\x04\x00\x00\x07\x05\x00\x00\x07\x05\x00\x00\x23\x05\x00\x00\x7e\x05\x00\x00\x2c\x05\x00\x00\xb5\x05\x00\x00";
char	eventnames[332] = "\xd3\x39\x00\x00\xc7\x39\x00\x00\xb5\x39\x00\x00\xa7\x39\x00\x00\x9b\x39\x00\x00\x93\x39\x00\x00\x89\x39\x00\x00\x7f\x39\x00\x00\x74\x39\x00\x00\x69\x39\x00\x00\x5b\x39\x00\x00\x4c\x39\x00\x00\x40\x39\x00\x00\x34\x39\x00\x00\x2c\x39\x00\x00\x1d\x39\x00\x00\x0e\x39\x00\x00\xff\x38\x00\x00\xf0\x38\x00\x00\xe1\x38\x00\x00\xcb\x38\x00\x00\xc1\x38\x00\x00\xb0\x38\x00\x00\xa1\x38\x00\x00\x94\x38\x00\x00\x87\x38\x00\x00\x7a\x38\x00\x00\x6d\x38\x00\x00\x60\x38\x00\x00\x53\x38\x00\x00\x46\x38\x00\x00\x39\x38\x00\x00\x2c\x38\x00\x00\x1f\x38\x00\x00\x11\x38\x00\x00\x03\x38\x00\x00\xf5\x37\x00\x00\xe7\x37\x00\x00\xd9\x37\x00\x00\xcb\x37\x00\x00\xbb\x37\x00\x00\xaf\x37\x00\x00\x99\x37\x00\x00\x82\x37\x00\x00\x70\x37\x00\x00\x5f\x37\x00\x00\x4f\x37\x00\x00\x3a\x37\x00\x00\x26\x37\x00\x00\x13\x37\x00\x00\x04\x37\x00\x00\xf4\x36\x00\x00\xde\x36\x00\x00\xd1\x36\x00\x00\xc6\x36\x00\x00\xbc\x36\x00\x00\xb4\x36\x00\x00\xaa\x36\x00\x00\xa0\x36\x00\x00\x96\x36\x00\x00\x8a\x36\x00\x00\x7a\x36\x00\x00\x64\x36\x00\x00\x53\x36\x00\x00\x45\x36\x00\x00\x38\x36\x00\x00\x20\x36\x00\x00\x06\x36\x00\x00\xfa\x35\x00\x00\xe8\x35\x00\x00\xd9\x35\x00\x00\xc9\x35\x00\x00\xbf\x35\x00\x00\xae\x35\x00\x00\xa0\x35\x00\x00\x8c\x35\x00\x00\x83\x35\x00\x00\x76\x35\x00\x00\x6a\x35\x00\x00\x58\x35\x00\x00\x47\x35\x00\x00\x34\x35\x00\x00\x24\x35\x00\x00";
int		randSeed = 0; // Used by: srand
char	global_c70[124] = "\xe5\x19\x00\x00\x17\x1a\x00\x00\xb8\x1a\x00\x00\x11\x1b\x00\x00\x2f\x1b\x00\x00\x8f\x1b\x00\x00\xfa\x1b\x00\x00\x1c\x1c\x00\x00\x84\x20\x00\x00\x3f\x1f\x00\x00\x55\x1c\x00\x00\xa7\x1e\x00\x00\x58\x1e\x00\x00\xf6\x1e\x00\x00\x5f\x20\x00\x00\x55\x1c\x00\x00\x5f\x20\x00\x00\x5f\x20\x00\x00\x5f\x20\x00\x00\x5f\x20\x00\x00\xcb\x1f\x00\x00\xcf\x1c\x00\x00\x97\x1f\x00\x00\x5f\x20\x00\x00\x5f\x20\x00\x00\x65\x1f\x00\x00\x5f\x20\x00\x00\x50\x1d\x00\x00\x5f\x20\x00\x00\x50\x20\x00\x00\xd7\x1d\x00\x00";
char	skillNames[24] = "\xd5\x4a\x00\x00\xc9\x4a\x00\x00\xba\x4a\x00\x00\xb1\x4a\x00\x00\xa6\x4a\x00\x00\x00\x00\x00\x00";
char	teamNames1[8] = "\xa1\x4a\x00\x00\x00\x00\x00\x00";
char	teamNames2[12] = "\x9d\x4a\x00\x00\x98\x4a\x00\x00\x00\x00\x00\x00";
char	propMap[1536] = "\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x08\x00\x00\x00\x0b\x00\x00\x00\x7a\x00\x00\x00\x07\x00\x00\x00\x9a\x00\x00\x00\xb5\x00\x00\x00\x0e\x00\x00\x00\x37\x00\x00\x00\x7a\x00\x00\x00\x11\x00\x00\x00\x4f\x00\x00\x00\x7a\x00\x00\x00\x12\x00\x00\x00\x65\x00\x00\x00\x7a\x00\x00\x00\x17\x00\x00\x00\x99\x00\x00\x00\x7a\x00\x00\x00\x12\x00\x00\x00\x09\x00\x00\x00\x5d\x00\x00\x00\x07\x00\x00\x00\xcf\x00\x00\x00\x7a\x00\x00\x00\x08\x00\x00\x00\xe6\x00\x00\x00\x7a\x00\x00\x00\x09\x00\x00\x00\xb1\x00\x00\x00\x7a\x00\x00\x00\x12\x00\x00\x00\x1e\x00\x00\x00\x98\x00\x00\x00\x12\x00\x00\x00\x55\x00\x00\x00\xb5\x00\x00\x00\x07\x00\x00\x00\x22\x00\x00\x00\x5d\x00\x00\x00\x0b\x00\x00\x00\x6e\x00\x00\x00\xb5\x00\x00\x00\x06\x00\x00\x00\x82\x00\x00\x00\x98\x00\x00\x00\x0e\x00\x00\x00\x16\x00\x00\x00\x40\x00\x00\x00\x11\x00\x00\x00\x29\x00\x00\x00\x40\x00\x00\x00\x0c\x00\x00\x00\x3a\x00\x00\x00\x40\x00\x00\x00\x11\x00\x00\x00\x4e\x00\x00\x00\x40\x00\x00\x00\x12\x00\x00\x00\x62\x00\x00\x00\x40\x00\x00\x00\x13\x00\x00\x00\x78\x00\x00\x00\x40\x00\x00\x00\x12\x00\x00\x00\x8d\x00\x00\x00\x40\x00\x00\x00\x12\x00\x00\x00\xcc\x00\x00\x00\x40\x00\x00\x00\x10\x00\x00\x00\xa2\x00\x00\x00\x40\x00\x00\x00\x11\x00\x00\x00\xb6\x00\x00\x00\x40\x00\x00\x00\x12\x00\x00\x00\x3b\x00\x00\x00\xb5\x00\x00\x00\x07\x00\x00\x00\x23\x00\x00\x00\xb5\x00\x00\x00\x07\x00\x00\x00\xcb\x00\x00\x00\x98\x00\x00\x00\x0e\x00\x00\x00\x38\x00\x00\x00\x5d\x00\x00\x00\x0e\x00\x00\x00\xe4\x00\x00\x00\x98\x00\x00\x00\x0e\x00\x00\x00\xb1\x00\x00\x00\xb5\x00\x00\x00\x12\x00\x00\x00\x1c\x00\x00\x00\x7a\x00\x00\x00\x16\x00\x00\x00\x05\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x1b\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x30\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x45\x00\x00\x00\x04\x00\x00\x00\x11\x00\x00\x00\x5a\x00\x00\x00\x04\x00\x00\x00\x0d\x00\x00\x00\x6a\x00\x00\x00\x04\x00\x00\x00\x0d\x00\x00\x00\x79\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x8f\x00\x00\x00\x04\x00\x00\x00\x11\x00\x00\x00\xa4\x00\x00\x00\x04\x00\x00\x00\x08\x00\x00\x00\xaf\x00\x00\x00\x04\x00\x00\x00\x10\x00\x00\x00\xc3\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\xd8\x00\x00\x00\x04\x00\x00\x00\x0c\x00\x00\x00\xe6\x00\x00\x00\x04\x00\x00\x00\x17\x00\x00\x00\x06\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x1b\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x30\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x44\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x5a\x00\x00\x00\x22\x00\x00\x00\x11\x00\x00\x00\x6e\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x82\x00\x00\x00\x22\x00\x00\x00\x0e\x00\x00\x00\x92\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\xa6\x00\x00\x00\x22\x00\x00\x00\x13\x00\x00\x00\xb9\x00\x00\x00\x22\x00\x00\x00\x1d\x00\x00\x00\xd7\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\xea\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x05\x00\x00\x00\x40\x00\x00\x00\x0e\x00\x00\x00\x3c\x00\x00\x00\x98\x00\x00\x00\x07\x00\x00\x00\x6a\x00\x00\x00\x97\x00\x00\x00\x0d\x00\x00\x00\x53\x00\x00\x00\x98\x00\x00\x00\x07\x00\x00\x00\x80\x00\x00\x00\x7a\x00\x00\x00\x11\x00\x00\x00\x04\x00\x00\x00\x98\x00\x00\x00\x15\x00\x00\x00\x86\x00\x00\x00\xb5\x00\x00\x00\x05\x00\x00\x00\x05\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x1b\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x30\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x45\x00\x00\x00\x04\x00\x00\x00\x11\x00\x00\x00\x5a\x00\x00\x00\x04\x00\x00\x00\x0d\x00\x00\x00\x6a\x00\x00\x00\x04\x00\x00\x00\x0d\x00\x00\x00\x79\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\x8f\x00\x00\x00\x04\x00\x00\x00\x11\x00\x00\x00\xa4\x00\x00\x00\x04\x00\x00\x00\x08\x00\x00\x00\xaf\x00\x00\x00\x04\x00\x00\x00\x10\x00\x00\x00\xc3\x00\x00\x00\x04\x00\x00\x00\x12\x00\x00\x00\xd8\x00\x00\x00\x04\x00\x00\x00\x0c\x00\x00\x00\xe6\x00\x00\x00\x04\x00\x00\x00\x17\x00\x00\x00\x06\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x1b\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x30\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x44\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x5a\x00\x00\x00\x22\x00\x00\x00\x11\x00\x00\x00\x6e\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x82\x00\x00\x00\x22\x00\x00\x00\x0e\x00\x00\x00\x92\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\xa6\x00\x00\x00\x22\x00\x00\x00\x13\x00\x00\x00\xb9\x00\x00\x00\x22\x00\x00\x00\x1d\x00\x00\x00\xd7\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\xea\x00\x00\x00\x22\x00\x00\x00\x12\x00\x00\x00\x05\x00\x00\x00\x40\x00\x00\x00\x0e\x00\x00\x00\x99\x00\x00\x00\x98\x00\x00\x00\x0d\x00\x00\x00\x0b\x00\x00\x00\xb5\x00\x00\x00\x05\x00\x00\x00\xb4\x00\x00\x00\x98\x00\x00\x00\x0d\x00\x00\x00\x4f\x00\x00\x00\x5d\x00\x00\x00\x11\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff";
char	propMapB[432] = "\x0b\x00\x00\x00\x0c\x00\x00\x00\x21\x00\x00\x00\x31\x00\x00\x00\x0c\x00\x00\x00\x1f\x00\x00\x00\x55\x00\x00\x00\x0c\x00\x00\x00\x1f\x00\x00\x00\x78\x00\x00\x00\x0c\x00\x00\x00\x1e\x00\x00\x00\x9c\x00\x00\x00\x0c\x00\x00\x00\x15\x00\x00\x00\xb7\x00\x00\x00\x0c\x00\x00\x00\x15\x00\x00\x00\xcf\x00\x00\x00\x0c\x00\x00\x00\x20\x00\x00\x00\x0d\x00\x00\x00\x37\x00\x00\x00\x1e\x00\x00\x00\x31\x00\x00\x00\x37\x00\x00\x00\x0d\x00\x00\x00\x42\x00\x00\x00\x37\x00\x00\x00\x1d\x00\x00\x00\x65\x00\x00\x00\x37\x00\x00\x00\x1f\x00\x00\x00\x87\x00\x00\x00\x37\x00\x00\x00\x15\x00\x00\x00\x9e\x00\x00\x00\x37\x00\x00\x00\x28\x00\x00\x00\xcc\x00\x00\x00\x37\x00\x00\x00\x20\x00\x00\x00\x0c\x00\x00\x00\x61\x00\x00\x00\x1f\x00\x00\x00\x30\x00\x00\x00\x61\x00\x00\x00\x1f\x00\x00\x00\x52\x00\x00\x00\x61\x00\x00\x00\x1e\x00\x00\x00\x76\x00\x00\x00\x61\x00\x00\x00\x1e\x00\x00\x00\x99\x00\x00\x00\x61\x00\x00\x00\x1e\x00\x00\x00\xb9\x00\x00\x00\x61\x00\x00\x00\x19\x00\x00\x00\xd5\x00\x00\x00\x61\x00\x00\x00\x1e\x00\x00\x00\x0b\x00\x00\x00\x8b\x00\x00\x00\x20\x00\x00\x00\x2a\x00\x00\x00\x8b\x00\x00\x00\x33\x00\x00\x00\x5d\x00\x00\x00\x8b\x00\x00\x00\x20\x00\x00\x00\x7e\x00\x00\x00\x8b\x00\x00\x00\x1f\x00\x00\x00\x9e\x00\x00\x00\x8b\x00\x00\x00\x19\x00\x00\x00\x8c\x34\x00\x00\x91\x34\x00\x00\xac\x34\x00\x00\x96\x34\x00\x00\xa1\x34\x00\x00\xb8\x34\x00\x00\xb8\x34\x00\x00\x3e\x3b\x00\x00\x3e\x3b\x00\x00\x3e\x3b\x00\x00\x3e\x3b\x00\x00\x3a\x3b\x00\x00\x3a\x3b\x00\x00\x3e\x3b\x00\x00\x3e\x3b\x00\x00\x3a\x3b\x00\x00\x3e\x3b\x00\x00\x3a\x3b\x00\x00\x3e\x3b\x00\x00\x3a\x3b\x00\x00\x3a\x3b\x00\x00\x3a\x3b\x00\x00\x3e\x3b\x00\x00\x3a\x3b\x00\x00\x3e\x3b\x00\x00\x3e\x3b\x00\x00\x3e\x3b\x00\x00\x3a\x3b\x00\x00\x3a\x3b\x00\x00\x3e\x3b\x00\x00";
char	cinematics[40] = "\xe1\x4d\x00\x00\xdb\x4d\x00\x00\xd5\x4d\x00\x00\xcf\x4d\x00\x00\xc9\x4d\x00\x00\xc3\x4d\x00\x00\xbd\x4d\x00\x00\xb7\x4d\x00\x00\xb1\x4d\x00\x00\xad\x4d\x00\x00";
char	passwordNeeded[24] = "\x01\x00\x00\x00\xf2\x46\x00\x00\x01\x47\x00\x00\x10\x47\x00\x00\x36\x47\x00\x00\x36\x47\x00\x00";
char	controls_binding_color[16] = "\x00\x00\x80\x3f\xf6\x28\xdc\x3e\x00\x00\x00\x00\x00\x00\x80\x3f";
char	g_bindings[1152] = "\x4b\x54\x00\x00\x3f\x54\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x09\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x36\x54\x00\x00\x2d\x54\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x0d\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x26\x54\x00\x00\x1b\x54\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x8a\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x12\x54\x00\x00\x05\x54\x00\x00\x03\x00\x00\x00\x02\x00\x00\x00\x84\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x53\x00\x00\xf5\x53\x00\x00\x04\x00\x00\x00\x03\x00\x00\x00\x85\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xeb\x53\x00\x00\xe1\x53\x00\x00\x05\x00\x00\x00\x06\x00\x00\x00\x2c\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xd6\x53\x00\x00\xcb\x53\x00\x00\x06\x00\x00\x00\x07\x00\x00\x00\x2e\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xc3\x53\x00\x00\xb9\x53\x00\x00\x07\x00\x00\x00\x04\x00\x00\x00\x20\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xaf\x53\x00\x00\xa1\x53\x00\x00\x08\x00\x00\x00\x05\x00\x00\x00\x63\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x9b\x53\x00\x00\x91\x53\x00\x00\x09\x00\x00\x00\x08\x00\x00\x00\x86\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x8a\x53\x00\x00\x7f\x53\x00\x00\x0a\x00\x00\x00\x09\x00\x00\x00\x87\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x77\x53\x00\x00\x67\x53\x00\x00\x0b\x00\x00\x00\x00\x00\x00\x00\x88\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x5f\x53\x00\x00\x57\x53\x00\x00\x0c\x00\x00\x00\x0a\x00\x00\x00\x8d\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x4d\x53\x00\x00\x43\x53\x00\x00\x0d\x00\x00\x00\x0b\x00\x00\x00\x8c\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x3c\x53\x00\x00\x31\x53\x00\x00\x0e\x00\x00\x00\x00\x00\x00\x00\x2f\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x26\x53\x00\x00\x1a\x53\x00\x00\x0f\x00\x00\x00\x00\x00\x00\x00\x90\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x14\x53\x00\x00\x0a\x53\x00\x00\x10\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x01\x53\x00\x00\xf8\x52\x00\x00\x11\x00\x00\x00\x0c\x00\x00\x00\x31\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xef\x52\x00\x00\xe4\x52\x00\x00\x12\x00\x00\x00\x0d\x00\x00\x00\x32\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xdb\x52\x00\x00\xd3\x52\x00\x00\x13\x00\x00\x00\x0e\x00\x00\x00\x33\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xca\x52\x00\x00\xb9\x52\x00\x00\x14\x00\x00\x00\x0f\x00\x00\x00\x34\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xb0\x52\x00\x00\xa0\x52\x00\x00\x15\x00\x00\x00\x10\x00\x00\x00\x35\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x97\x52\x00\x00\x8d\x52\x00\x00\x16\x00\x00\x00\x11\x00\x00\x00\x36\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x84\x52\x00\x00\x7c\x52\x00\x00\x17\x00\x00\x00\x12\x00\x00\x00\x37\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x73\x52\x00\x00\x68\x52\x00\x00\x18\x00\x00\x00\x13\x00\x00\x00\x38\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x5f\x52\x00\x00\x5b\x52\x00\x00\x19\x00\x00\x00\x14\x00\x00\x00\x39\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x53\x52\x00\x00\x4c\x52\x00\x00\x1a\x00\x00\x00\x16\x00\x00\x00\x89\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x43\x52\x00\x00\x37\x52\x00\x00\x1b\x00\x00\x00\x00\x00\x00\x00\x5b\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x2e\x52\x00\x00\x22\x52\x00\x00\x1c\x00\x00\x00\x00\x00\x00\x00\x5d\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x19\x52\x00\x00\x11\x52\x00\x00\x1d\x00\x00\x00\x17\x00\x00\x00\xb4\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x05\x52\x00\x00\x00\x52\x00\x00\x1e\x00\x00\x00\x19\x00\x00\x00\x74\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xf3\x51\x00\x00\xe7\x51\x00\x00\x1f\x00\x00\x00\x19\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xda\x51\x00\x00\xcc\x51\x00\x00\x20\x00\x00\x00\x19\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xbf\x51\x00\x00\xaf\x51\x00\x00\x21\x00\x00\x00\x19\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xa4\x51\x00\x00\x98\x51\x00\x00\x22\x00\x00\x00\x00\x00\x00\x00\x1b\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff";
char	g_configcvars[108] = "\x91\x51\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x89\x51\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x7b\x51\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x6f\x51\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x63\x51\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x55\x51\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x4c\x51\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x40\x51\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";
char	g_movement_controls[48] = "\x74\x23\x01\x00\xf4\x1d\x01\x00\xd8\x1b\x01\x00\x14\x1c\x01\x00\x50\x1c\x01\x00\x8c\x1c\x01\x00\xc8\x1c\x01\x00\x04\x1d\x01\x00\x40\x1d\x01\x00\x7c\x1d\x01\x00\xb8\x1d\x01\x00\x00\x00\x00\x00";
char	g_weapons_controls[56] = "\x4c\x20\x01\x00\xc4\x20\x01\x00\x88\x20\x01\x00\xf0\x23\x01\x00\x6c\x1e\x01\x00\x30\x1e\x01\x00\xa8\x1e\x01\x00\xe4\x1e\x01\x00\x20\x1f\x01\x00\x5c\x1f\x01\x00\x98\x1f\x01\x00\xd4\x1f\x01\x00\x10\x20\x01\x00\x00\x00\x00\x00";
char	g_looking_controls[48] = "\xe8\x22\x01\x00\x34\x23\x01\x00\xa8\x22\x01\x00\x00\x21\x01\x00\x3c\x21\x01\x00\x78\x21\x01\x00\xb4\x21\x01\x00\xf4\x21\x01\x00\x30\x22\x01\x00\x08\x2a\x01\x00\x48\x2a\x01\x00\x00\x00\x00\x00";
char	g_misc_controls[36] = "\xb4\x23\x01\x00\x30\x24\x01\x00\x6c\x22\x01\x00\xdc\x28\x01\x00\x18\x29\x01\x00\x54\x29\x01\x00\x90\x29\x01\x00\xcc\x29\x01\x00\x00\x00\x00\x00";
char	g_controls[392] = "\x04\x1a\x00\x00\x6c\x1a\x00\x00\x34\x1a\x00\x00\x9c\x1a\x00\x00\x52\x48\x00\x00\x57\x48\x00\x00\x5c\x48\x00\x00\x61\x48\x00\x00\x66\x48\x00\x00\x85\x48\x00\x00\x90\x48\x00\x00\x6b\x48\x00\x00\x78\x48\x00\x00\x9b\x48\x00\x00\xa0\x48\x00\x00\xa5\x48\x00\x00\xaa\x48\x00\x00\xaf\x48\x00\x00\xb4\x48\x00\x00\xb9\x48\x00\x00\xbe\x48\x00\x00\xc3\x48\x00\x00\xc8\x48\x00\x00\xcd\x48\x00\x00\xd2\x48\x00\x00\xd7\x48\x00\x00\xdc\x48\x00\x00\xe1\x48\x00\x00\xec\x48\x00\x00\xa8\x4a\x00\x00\xc0\x4a\x00\x00\xd8\x4a\x00\x00\xf0\x4a\x00\x00\x01\x52\x00\x00\x01\x52\x00\x00\x01\x52\x00\x00\x01\x52\x00\x00\x01\x52\x00\x00\x01\x52\x00\x00\x01\x52\x00\x00\x01\x52\x00\x00\x9d\x51\x00\x00\xa9\x51\x00\x00\xb5\x51\x00\x00\xc1\x51\x00\x00\xcd\x51\x00\x00\xdc\x51\x00\x00\xec\x51\x00\x00\xf8\x51\x00\x00\x3c\x57\x00\x00\x2f\x57\x00\x00\x21\x57\x00\x00\x12\x57\x00\x00\x07\x57\x00\x00\xf8\x56\x00\x00\xea\x56\x00\x00\xd9\x56\x00\x00\xcc\x56\x00\x00\xbf\x56\x00\x00\xad\x56\x00\x00\x9f\x56\x00\x00\x85\x56\x00\x00\x00\x00\x00\x00\x8c\x5a\x00\x00\x70\x5a\x00\x00\xa1\x5a\x00\x00\x9a\x5a\x00\x00\x91\x5a\x00\x00\x18\x5d\x00\x00\x4b\x5d\x00\x00\x20\x5d\x00\x00\x28\x5d\x00\x00\x30\x5d\x00\x00\x3c\x5d\x00\x00\x48\x5d\x00\x00\xc5\x69\x00\x00\xf3\x69\x00\x00\xf8\x69\x00\x00\xca\x69\x00\x00\xee\x69\x00\x00\xcf\x69\x00\x00\xd8\x69\x00\x00\xe3\x69\x00\x00\x02\x6a\x00\x00\xfd\x69\x00\x00\xd6\x6c\x00\x00\xba\x6c\x00\x00\xeb\x6c\x00\x00\xdb\x6c\x00\x00\xe4\x6c\x00\x00\x0e\x6f\x00\x00\x13\x6f\x00\x00\x18\x6f\x00\x00\x1d\x6f\x00\x00\x22\x6f\x00\x00\x2c\x6f\x00\x00\x27\x6f\x00\x00\x3c\x6f\x00\x00";
char	global_1c48[16] = "\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f"; // Used by: Main_MenuDraw
char	global_1c58[16] = "\xab\x78\x00\x00\xab\x78\x00\x00\xab\x78\x00\x00\xab\x78\x00\x00";
char	rate_items[68] = "\x42\x60\x00\x00\x3c\x60\x00\x00\x38\x60\x00\x00\x33\x60\x00\x00\x24\x60\x00\x00\x00\x00\x00\x00\x6d\x7b\x00\x00\x75\x7b\x00\x00\x7d\x7b\x00\x00\xc9\x7b\x00\x00\x85\x7b\x00\x00\xc6\x7b\x00\x00\x7d\x7d\x00\x00\x82\x7d\x00\x00\x87\x7d\x00\x00\x8c\x7d\x00\x00\x91\x7d\x00\x00";
char	playermodel_artlist[84] = "\x5b\x62\x00\x00\x4b\x62\x00\x00\x31\x62\x00\x00\x15\x62\x00\x00\x03\x62\x00\x00\xf1\x61\x00\x00\xd4\x61\x00\x00\xbf\x61\x00\x00\xaa\x61\x00\x00\x95\x61\x00\x00\x00\x00\x00\x00\x16\x89\x00\x00\x2a\x89\x00\x00\x3e\x89\x00\x00\x52\x89\x00\x00\x66\x89\x00\x00\x7a\x89\x00\x00\x8e\x89\x00\x00\xa2\x89\x00\x00\xb6\x89\x00\x00\xca\x89\x00\x00";
char	global_1d00[140] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; // Used by: UI_DrawPlayer
char	global_1d8c[140] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; // Used by: UI_DrawPlayer
char	global_1e18[140] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; // Used by: UI_DrawPlayer
char	global_1ea4[140] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; // Used by: UI_DrawPlayer
char	global_1f30[140] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; // Used by: UI_DrawPlayer
char	global_1fbc[140] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"; // Used by: UI_DrawPlayer
char	global_2048[12] = "\x00\x00\x80\xc1\x00\x00\x80\xc1\x00\x00\xc0\xc1"; // Used by: UI_DrawPlayer
char	global_2054[12] = "\x00\x00\x80\x41\x00\x00\x80\x41\x00\x00\x00\x42"; // Used by: UI_DrawPlayer
char	gamecodetoui[28] = "\x04\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x05\x00\x00\x00\x01\x00\x00\x00\x06\x00\x00\x00";
char	uitogamecode[28] = "\x04\x00\x00\x00\x06\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x01\x00\x00\x00\x05\x00\x00\x00\x07\x00\x00\x00";
char	handicap_items[84] = "\x08\x66\x00\x00\x05\x66\x00\x00\x02\x66\x00\x00\xff\x65\x00\x00\xfc\x65\x00\x00\xf9\x65\x00\x00\xf6\x65\x00\x00\xf3\x65\x00\x00\xf0\x65\x00\x00\xed\x65\x00\x00\xea\x65\x00\x00\xe7\x65\x00\x00\xe4\x65\x00\x00\xe1\x65\x00\x00\xde\x65\x00\x00\xdb\x65\x00\x00\xd8\x65\x00\x00\xd5\x65\x00\x00\xd2\x65\x00\x00\xd0\x65\x00\x00\x00\x00\x00\x00";
char	teamoverlay_names[68] = "\x05\x68\x00\x00\xf9\x67\x00\x00\xed\x67\x00\x00\xe2\x67\x00\x00\x00\x00\x00\x00\x82\xa6\x00\x00\x8d\xa6\x00\x00\x98\xa6\x00\x00\xaf\xa6\x00\x00\xc3\xa6\x00\x00\xce\xa6\x00\x00\xd9\xa6\x00\x00\xe4\xa6\x00\x00\xef\xa6\x00\x00\xfa\xa6\x00\x00\x05\xa7\x00\x00\x19\xa7\x00\x00";
char	menu_text_color[16] = "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f";
char	menu_dim_color[16] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x40\x3f";
char	color_black[16] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f";
int		color_white = 1065353216; // Used by: UI_SPLevelMenu_MenuDraw
int		global_2164 = 1065353216; // Used by: UI_SPLevelMenu_MenuDraw
int		global_2168 = 1065353216; // Used by: UI_SPLevelMenu_MenuDraw
int		global_216c = 1065353216; // Used by: UI_SPLevelMenu_MenuDraw
char	color_yellow[16] = "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f";
char	color_blue[16] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f";
char	color_lightOrange[16] = "\x00\x00\x80\x3f\x7b\x14\x2e\x3f\x00\x00\x00\x00\x00\x00\x80\x3f";
char	color_orange[16] = "\x00\x00\x80\x3f\xf6\x28\xdc\x3e\x00\x00\x00\x00\x00\x00\x80\x3f";
char	color_red[16] = "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f";
char	color_dim[16] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3e";
char	pulse_color[16] = "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f";
char	text_color_disabled[16] = "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f";
char	text_color_normal[16] = "\x00\x00\x80\x3f\xf6\x28\xdc\x3e\x00\x00\x00\x00\x00\x00\x80\x3f";
char	text_color_highlight[16] = "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f";
char	listbar_color[16] = "\x00\x00\x80\x3f\xf6\x28\xdc\x3e\x00\x00\x00\x00\x9a\x99\x99\x3e";
char	text_color_status[340] = "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x87\xb0\x00\x00\x87\xb0\x00\x00\x87\xb0\x00\x00\x87\xb0\x00\x00\x53\xb8\x00\x00\xfc\xba\x00\x00\x22\xb9\x00\x00\xee\xbb\x00\x00\xd5\xbc\x00\x00\x5b\xbc\x00\x00\x91\xb8\x00\x00\x6c\xbb\x00\x00\x94\xb9\x00\x00\xfc\xba\x00\x00\x6c\xbb\x00\x00\xee\xbb\x00\x00\x5b\xbc\x00\x00\xd5\xbc\x00\x00\xd5\xbc\x00\x00\xd5\xbc\x00\x00\xd5\xbc\x00\x00\xd5\xbc\x00\x00\x94\xb9\x00\x00\x22\xb9\x00\x00\x53\xb8\x00\x00\x91\xb8\x00\x00\x54\xbf\x00\x00\x34\xbf\x00\x00\x44\xbf\x00\x00\x3c\xbf\x00\x00\x4c\xbf\x00\x00\x5c\xbf\x00\x00\x64\xbf\x00\x00\x6c\xbf\x00\x00\x74\xbf\x00\x00\x7c\xbf\x00\x00\x94\xc1\x00\x00\xa4\xc1\x00\x00\x9c\xc1\x00\x00\x8c\xc1\x00\x00\x84\xc1\x00\x00\xac\xc1\x00\x00\xb4\xc1\x00\x00\xbc\xc1\x00\x00\xc4\xc1\x00\x00\xcc\xc1\x00\x00\x6a\xc3\x00\x00\x97\xc3\x00\x00\x4a\xc3\x00\x00\x8a\xc3\x00\x00\x5a\xc3\x00\x00\x97\xc3\x00\x00\x97\xc3\x00\x00\x7a\xc3\x00\x00\x91\xc4\x00\x00\xd8\xc4\x00\x00\x91\xc4\x00\x00\xd8\xc4\x00\x00\xd8\xc4\x00\x00\xd8\xc4\x00\x00\xd8\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00\xbc\xc4\x00\x00";
char	serverinfo_artlist[20] = "\xb4\x6b\x00\x00\xa2\x6b\x00\x00\x92\x6b\x00\x00\x82\x6b\x00\x00\x00\x00\x00\x00";
char	master_items[36] = "\x91\x71\x00\x00\x88\x71\x00\x00\x80\x71\x00\x00\x78\x71\x00\x00\x70\x71\x00\x00\x68\x71\x00\x00\x60\x71\x00\x00\x56\x71\x00\x00\x00\x00\x00\x00";
char	servertype_items[24] = "\x52\x71\x00\x00\x45\x71\x00\x00\x35\x71\x00\x00\x2a\x71\x00\x00\x19\x71\x00\x00\x00\x00\x00\x00";
char	sortkey_items[24] = "\x0d\x71\x00\x00\x04\x71\x00\x00\xf2\x70\x00\x00\xe8\x70\x00\x00\xde\x70\x00\x00\x00\x00\x00\x00";
char	gamenames[56] = "\xda\x70\x00\x00\xd6\x70\x00\x00\xd2\x70\x00\x00\xca\x70\x00\x00\xc6\x70\x00\x00\xb9\x70\x00\x00\xb0\x70\x00\x00\xa6\x70\x00\x00\x97\x70\x00\x00\x93\x70\x00\x00\x86\x70\x00\x00\x82\x70\x00\x00\x7e\x70\x00\x00\x00\x00\x00\x00";
char	netnames[16] = "\x79\x70\x00\x00\x74\x70\x00\x00\x6f\x70\x00\x00\x00\x00\x00\x00";
char	punkbuster_items[12] = "\x66\x70\x00\x00\x5e\x70\x00\x00\x00\x00\x00\x00";
char	punkbuster_msg[240] = "\x4b\x70\x00\x00\x34\x70\x00\x00\x24\x70\x00\x00\x18\x70\x00\x00\x00\x00\x00\x00\xa6\xcc\x00\x00\xbe\xcc\x00\x00\xd6\xcc\x00\x00\x1e\xcd\x00\x00\x4a\xcd\x00\x00\xa3\xcd\x00\x00\xa7\xcd\x00\x00\xa7\xcd\x00\x00\xa7\xcd\x00\x00\xa7\xcd\x00\x00\xa7\xcd\x00\x00\xa7\xcd\x00\x00\xab\xcd\x00\x00\x20\xd0\x00\x00\xfc\xcf\x00\x00\x05\xd0\x00\x00\x0e\xd0\x00\x00\x17\xd0\x00\x00\x78\xd6\x00\x00\x7d\xd6\x00\x00\x86\xd6\x00\x00\x8f\xd6\x00\x00\x98\xd6\x00\x00\xd8\xd7\x00\x00\xee\xd7\x00\x00\xee\xd7\x00\x00\xee\xd7\x00\x00\xee\xd7\x00\x00\xee\xd7\x00\x00\xee\xd7\x00\x00\x0e\xd8\x00\x00\xb1\xd8\x00\x00\xc7\xd8\x00\x00\xd9\xd8\x00\x00\xed\xd8\x00\x00\xff\xd8\x00\x00\x11\xd9\x00\x00\x1a\xd9\x00\x00\x23\xd9\x00\x00\x2c\xd9\x00\x00\x37\xd9\x00\x00\x3c\xd9\x00\x00\x41\xd9\x00\x00\x48\xd9\x00\x00\x4d\xd9\x00\x00\x55\xd9\x00\x00\x32\xde\x00\x00\x37\xde\x00\x00\x3c\xde\x00\x00\x41\xde\x00\x00\x46\xde\x00\x00\x59\xde\x00\x00\x59\xde\x00\x00\x4b\xde\x00\x00\x56\xde\x00\x00";
char	quality_items[16] = "\xc5\x73\x00\x00\xbe\x73\x00\x00\xb9\x73\x00\x00\x00\x00\x00\x00";
char	soundSystem_items[56] = "\xb5\x73\x00\x00\xae\x73\x00\x00\x00\x00\x00\x00\x2d\xe0\x00\x00\x35\xe0\x00\x00\xc6\xe0\x00\x00\x3d\xe0\x00\x00\xc6\xe0\x00\x00\xc6\xe0\x00\x00\xc6\xe0\x00\x00\xc6\xe0\x00\x00\xc6\xe0\x00\x00\x45\xe0\x00\x00\x4a\xe0\x00\x00";
char	specifyserver_artlist[28] = "\x94\x74\x00\x00\x82\x74\x00\x00\x72\x74\x00\x00\x62\x74\x00\x00\x51\x74\x00\x00\x40\x74\x00\x00\x00\x00\x00\x00";
char	ui_medalNames[24] = "\xef\x7a\x00\x00\xe4\x7a\x00\x00\xda\x7a\x00\x00\xd1\x7a\x00\x00\xcb\x7a\x00\x00\xc3\x7a\x00\x00";
char	ui_medalPicNames[24] = "\xa8\x7a\x00\x00\x8b\x7a\x00\x00\x6f\x7a\x00\x00\x54\x7a\x00\x00\x3c\x7a\x00\x00\x22\x7a\x00\x00";
char	ui_medalSounds[24] = "\x06\x7a\x00\x00\xe6\x79\x00\x00\xc7\x79\x00\x00\xab\x79\x00\x00\x92\x79\x00\x00\x77\x79\x00\x00";
char	medalLocations[44] = "\x90\x00\x00\x00\xc0\x01\x00\x00\x58\x00\x00\x00\xf8\x01\x00\x00\x20\x00\x00\x00\x30\x02\x00\x00\xd3\xfb\x00\x00\xd9\xfb\x00\x00\xdf\xfb\x00\x00\xe5\xfb\x00\x00\xeb\xfb\x00\x00";
char	gametype_items[20] = "\x41\x81\x00\x00\x31\x81\x00\x00\x26\x81\x00\x00\x15\x81\x00\x00\x00\x00\x00\x00";
char	gametype_remap[16] = "\x00\x00\x00\x00\x03\x00\x00\x00\x01\x00\x00\x00\x04\x00\x00\x00";
char	gametype_remap2[36] = "\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00\x60\x01\x01\x00\x74\x01\x01\x00\xa1\x01\x01\x00\x8b\x01\x01\x00";
char	dedicated_list[16] = "\xbc\x7f\x00\x00\xb8\x7f\x00\x00\xaf\x7f\x00\x00\x00\x00\x00\x00";
char	playerType_list[16] = "\xaa\x7f\x00\x00\xa6\x7f\x00\x00\xa1\x7f\x00\x00\x00\x00\x00\x00";
char	playerTeam_list[12] = "\x9c\x7f\x00\x00\x98\x7f\x00\x00\x00\x00\x00\x00";
char	botSkill_list[128] = "\x8e\x7f\x00\x00\x82\x7f\x00\x00\x73\x7f\x00\x00\x6a\x7f\x00\x00\x5f\x7f\x00\x00\x00\x00\x00\x00\x16\x07\x01\x00\x2a\x07\x01\x00\x16\x07\x01\x00\x3e\x07\x01\x00\x5b\x07\x01\x00\x56\x0a\x01\x00\x65\x0a\x01\x00\x3b\x0a\x01\x00\x46\x0a\x01\x00\x46\x0a\x01\x00\x4b\x0a\x01\x00\x5c\x0a\x01\x00\xad\x0c\x01\x00\xeb\x0c\x01\x00\xad\x0c\x01\x00\x29\x0d\x01\x00\x7d\x0d\x01\x00\xad\x19\x01\x00\xb9\x19\x01\x00\xc5\x19\x01\x00\xd1\x19\x01\x00\xba\x1a\x01\x00\xba\x1a\x01\x00\xba\x1a\x01\x00\xd2\x1a\x01\x00\xd2\x1a\x01\x00";
char	ctfOrders[32] = "\x1d\x83\x00\x00\x0d\x83\x00\x00\x03\x83\x00\x00\xf4\x82\x00\x00\xea\x82\x00\x00\xe3\x82\x00\x00\xce\x82\x00\x00\x00\x00\x00\x00";
char	ctfMessages[32] = "\xbe\x82\x00\x00\xab\x82\x00\x00\x9e\x82\x00\x00\x8c\x82\x00\x00\x7f\x82\x00\x00\x75\x82\x00\x00\x5d\x82\x00\x00\x00\x00\x00\x00";
char	teamOrders[28] = "\x1d\x83\x00\x00\x03\x83\x00\x00\x58\x82\x00\x00\xea\x82\x00\x00\xe3\x82\x00\x00\xce\x82\x00\x00\x00\x00\x00\x00";
char	teamMessages[28] = "\xbe\x82\x00\x00\x9e\x82\x00\x00\x50\x82\x00\x00\x7f\x82\x00\x00\x75\x82\x00\x00\x5d\x82\x00\x00\x00\x00\x00\x00";
char	driverinfo_artlist[20] = "\x1b\x87\x00\x00\x09\x87\x00\x00\xf9\x86\x00\x00\xe9\x86\x00\x00\x00\x00\x00\x00";
char	s_ivo_templates[240] = "\x06\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x04\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x03\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00";
char	builtinResolutions[52] = "\x8c\x86\x00\x00\x84\x86\x00\x00\x7c\x86\x00\x00\x74\x86\x00\x00\x6c\x86\x00\x00\x64\x86\x00\x00\x5b\x86\x00\x00\x52\x86\x00\x00\x48\x86\x00\x00\x3e\x86\x00\x00\x34\x86\x00\x00\x2c\x86\x00\x00\x00\x00\x00\x00";
char	knownRatios[64] = "\x25\x86\x00\x00\x21\x86\x00\x00\x1a\x86\x00\x00\x16\x86\x00\x00\x0f\x86\x00\x00\x0b\x86\x00\x00\x04\x86\x00\x00\xff\x85\x00\x00\xf8\x85\x00\x00\xf2\x85\x00\x00\xeb\x85\x00\x00\xe7\x85\x00\x00\xe0\x85\x00\x00\xdb\x85\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00";
int		resolutions = 10344; // Used by: GraphicsOptions_MenuInit, GraphicsOptions_GetResolutions, GraphicsOptions_GetAspectRatios
int		resolutionsDetected = 0; // Used by: GraphicsOptions_SetMenuItems, GraphicsOptions_ApplyChanges, GraphicsOptions_GetResolutions, GraphicsOptions_FindDetectedResolution, GraphicsOptions_FindBuiltinResolution
char	global_28e4[164] = "\xf4\x27\x01\x00\x0f\x28\x01\x00\x9e\x27\x01\x00\x7f\x27\x01\x00\xef\x27\x01\x00\x0f\x28\x01\x00\xf9\x27\x01\x00\x01\x28\x01\x00\x09\x28\x01\x00\x76\x27\x01\x00\xc2\x84\x00\x00\xbb\x84\x00\x00\x00\x00\x00\x00\xc2\x84\x00\x00\xb4\x84\x00\x00\xad\x84\x00\x00\x00\x00\x00\x00\x9b\x84\x00\x00\x8e\x84\x00\x00\x87\x84\x00\x00\x82\x84\x00\x00\x7a\x84\x00\x00\x73\x84\x00\x00\x00\x00\x00\x00\x6a\x84\x00\x00\x63\x84\x00\x00\x00\x00\x00\x00\xc2\x84\x00\x00\xb4\x84\x00\x00\xad\x84\x00\x00\x00\x00\x00\x00\x5a\x84\x00\x00\x50\x84\x00\x00\x00\x00\x00\x00\x4c\x84\x00\x00\x45\x84\x00\x00\x40\x84\x00\x00\x00\x00\x00\x00\x3c\x84\x00\x00\x39\x84\x00\x00\x00\x00\x00\x00";
int		vec3_origin = 0; // Used by: AnglesToAxis, ByteToDir
int		global_298c = 0; // Used by: AnglesToAxis
int		global_2990 = 0; // Used by: AnglesToAxis
char	axisDefault[36] = "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f";
char	colorBlack[16] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f";
char	colorRed[16] = "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f";
char	colorGreen[16] = "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f";
char	colorBlue[16] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f";
char	colorYellow[16] = "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f";
char	colorMagenta[16] = "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f";
char	colorCyan[16] = "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f";
int		colorWhite = 1065353216; // Used by: UI_DrawPlayer
int		global_2a2c = 1065353216; // Used by: UI_DrawPlayer
int		global_2a30 = 1065353216; // Used by: UI_DrawPlayer
int		global_2a34 = 1065353216; // Used by: UI_DrawPlayer
char	colorLtGrey[16] = "\x00\x00\x40\x3f\x00\x00\x40\x3f\x00\x00\x40\x3f\x00\x00\x80\x3f";
char	colorMdGrey[16] = "\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x00\x3f\x00\x00\x80\x3f";
char	colorDkGrey[16] = "\x00\x00\x80\x3e\x00\x00\x80\x3e\x00\x00\x80\x3e\x00\x00\x80\x3f";
char	g_color_table[128] = "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f";
char	bytedirs[1948] = "\x4f\x96\x06\xbf\x00\x00\x00\x00\x44\xc4\x59\x3f\xf0\xbe\xe2\xbe\xab\x96\x74\x3e\x6d\x3b\x5d\x3f\xf6\x29\x97\xbe\x00\x00\x00\x00\x9a\x96\x74\x3f\x7a\x37\x9e\xbe\x00\x00\x00\x3f\xbd\x1b\x4f\x3f\xea\x5b\x26\xbe\x5f\x96\x86\x3e\x68\x78\x73\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x44\xc4\x59\x3f\x4f\x96\x06\x3f\xf6\x29\x17\xbe\xef\x70\x37\x3f\x12\x85\x2e\x3f\xf6\x29\x17\x3e\xef\x70\x37\x3f\x12\x85\x2e\x3f\x00\x00\x00\x00\x4f\x96\x06\x3f\x44\xc4\x59\x3f\x7a\x37\x9e\x3e\x00\x00\x00\x3f\xbd\x1b\x4f\x3f\x4f\x96\x06\x3f\x00\x00\x00\x00\x44\xc4\x59\x3f\xf6\x29\x97\x3e\x00\x00\x00\x00\x9a\x96\x74\x3f\xf0\xbe\xe2\x3e\xab\x96\x74\x3e\x6d\x3b\x5d\x3f\xea\x5b\x26\x3e\x5f\x96\x86\x3e\x68\x78\x73\x3f\x12\x85\x2e\xbf\xf6\x29\x17\x3e\xef\x70\x37\x3f\xbd\x1b\x4f\xbf\x7a\x37\x9e\x3e\x00\x00\x00\x3f\x14\x79\x16\xbf\x33\xc4\xd9\x3e\x49\x2d\x30\x3f\x44\xc4\x59\xbf\x4f\x96\x06\x3f\x00\x00\x00\x00\x6d\x3b\x5d\xbf\xf0\xbe\xe2\x3e\xab\x96\x74\x3e\xef\x70\x37\xbf\x12\x85\x2e\x3f\xf6\x29\x17\x3e\x49\x2d\x30\xbf\x14\x79\x16\x3f\x33\xc4\xd9\x3e\x00\x00\x00\xbf\xbd\x1b\x4f\x3f\x7a\x37\x9e\x3e\xab\x96\x74\xbe\x6d\x3b\x5d\x3f\xf0\xbe\xe2\x3e\x33\xc4\xd9\xbe\x49\x2d\x30\x3f\x14\x79\x16\x3f\xef\x70\x37\xbf\x12\x85\x2e\x3f\xf6\x29\x17\xbe\x00\x00\x00\xbf\xbd\x1b\x4f\x3f\x7a\x37\x9e\xbe\x4f\x96\x06\xbf\x44\xc4\x59\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x44\xc4\x59\x3f\x4f\x96\x06\xbf\xab\x96\x74\xbe\x6d\x3b\x5d\x3f\xf0\xbe\xe2\xbe\x00\x00\x00\x00\x9a\x96\x74\x3f\xf6\x29\x97\xbe\x5f\x96\x86\xbe\x68\x78\x73\x3f\xea\x5b\x26\xbe\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x9a\x96\x74\x3f\xf6\x29\x97\x3e\x5f\x96\x86\xbe\x68\x78\x73\x3f\xea\x5b\x26\x3e\xab\x96\x74\x3e\x6d\x3b\x5d\x3f\xf0\xbe\xe2\x3e\x5f\x96\x86\x3e\x68\x78\x73\x3f\xea\x5b\x26\x3e\x00\x00\x00\x3f\xbd\x1b\x4f\x3f\x7a\x37\x9e\x3e\xab\x96\x74\x3e\x6d\x3b\x5d\x3f\xf0\xbe\xe2\xbe\x5f\x96\x86\x3e\x68\x78\x73\x3f\xea\x5b\x26\xbe\x00\x00\x00\x3f\xbd\x1b\x4f\x3f\x7a\x37\x9e\xbe\x44\xc4\x59\x3f\x4f\x96\x06\x3f\x00\x00\x00\x00\xef\x70\x37\x3f\x12\x85\x2e\x3f\xf6\x29\x17\x3e\xef\x70\x37\x3f\x12\x85\x2e\x3f\xf6\x29\x17\xbe\x4f\x96\x06\x3f\x44\xc4\x59\x3f\x00\x00\x00\x00\x33\xc4\xd9\x3e\x49\x2d\x30\x3f\x14\x79\x16\x3f\x6d\x3b\x5d\x3f\xf0\xbe\xe2\x3e\xab\x96\x74\x3e\x49\x2d\x30\x3f\x14\x79\x16\x3f\x33\xc4\xd9\x3e\xbd\x1b\x4f\x3f\x7a\x37\x9e\x3e\x00\x00\x00\x3f\x12\x85\x2e\x3f\xf6\x29\x17\x3e\xef\x70\x37\x3f\x14\x79\x16\x3f\x33\xc4\xd9\x3e\x49\x2d\x30\x3f\x9a\x96\x74\x3f\xf6\x29\x97\x3e\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x68\x78\x73\x3f\xea\x5b\x26\x3e\x5f\x96\x86\x3e\x44\xc4\x59\x3f\x4f\x96\x06\xbf\x00\x00\x00\x00\x9a\x96\x74\x3f\xf6\x29\x97\xbe\x00\x00\x00\x00\x6d\x3b\x5d\x3f\xf0\xbe\xe2\xbe\xab\x96\x74\x3e\x68\x78\x73\x3f\xea\x5b\x26\xbe\x5f\x96\x86\x3e\xbd\x1b\x4f\x3f\x7a\x37\x9e\xbe\x00\x00\x00\x3f\x12\x85\x2e\x3f\xf6\x29\x17\xbe\xef\x70\x37\x3f\x44\xc4\x59\x3f\x00\x00\x00\x00\x4f\x96\x06\x3f\x6d\x3b\x5d\x3f\xf0\xbe\xe2\x3e\xab\x96\x74\xbe\xbd\x1b\x4f\x3f\x7a\x37\x9e\x3e\x00\x00\x00\xbf\x68\x78\x73\x3f\xea\x5b\x26\x3e\x5f\x96\x86\xbe\x4f\x96\x06\x3f\x00\x00\x00\x00\x44\xc4\x59\xbf\x12\x85\x2e\x3f\xf6\x29\x17\x3e\xef\x70\x37\xbf\x12\x85\x2e\x3f\xf6\x29\x17\xbe\xef\x70\x37\xbf\x44\xc4\x59\x3f\x00\x00\x00\x00\x4f\x96\x06\xbf\xbd\x1b\x4f\x3f\x7a\x37\x9e\xbe\x00\x00\x00\xbf\x6d\x3b\x5d\x3f\xf0\xbe\xe2\xbe\xab\x96\x74\xbe\x68\x78\x73\x3f\xea\x5b\x26\xbe\x5f\x96\x86\xbe\xf6\x29\x17\x3e\xef\x70\x37\x3f\x12\x85\x2e\xbf\x7a\x37\x9e\x3e\x00\x00\x00\x3f\xbd\x1b\x4f\xbf\x33\xc4\xd9\x3e\x49\x2d\x30\x3f\x14\x79\x16\xbf\xf0\xbe\xe2\x3e\xab\x96\x74\x3e\x6d\x3b\x5d\xbf\x14\x79\x16\x3f\x33\xc4\xd9\x3e\x49\x2d\x30\xbf\x49\x2d\x30\x3f\x14\x79\x16\x3f\x33\xc4\xd9\xbe\xf6\x29\x17\xbe\xef\x70\x37\x3f\x12\x85\x2e\xbf\x7a\x37\x9e\xbe\x00\x00\x00\x3f\xbd\x1b\x4f\xbf\x00\x00\x00\x00\x4f\x96\x06\x3f\x44\xc4\x59\xbf\x4f\x96\x06\xbf\x00\x00\x00\x00\x44\xc4\x59\xbf\xf0\xbe\xe2\xbe\xab\x96\x74\x3e\x6d\x3b\x5d\xbf\xf6\x29\x97\xbe\x00\x00\x00\x00\x9a\x96\x74\xbf\xea\x5b\x26\xbe\x5f\x96\x86\x3e\x68\x78\x73\xbf\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xbf\xf6\x29\x97\x3e\x00\x00\x00\x00\x9a\x96\x74\xbf\xea\x5b\x26\x3e\x5f\x96\x86\x3e\x68\x78\x73\xbf\xf0\xbe\xe2\xbe\xab\x96\x74\xbe\x6d\x3b\x5d\xbf\x7a\x37\x9e\xbe\x00\x00\x00\xbf\xbd\x1b\x4f\xbf\xea\x5b\x26\xbe\x5f\x96\x86\xbe\x68\x78\x73\xbf\x00\x00\x00\x00\x44\xc4\x59\xbf\x4f\x96\x06\xbf\xf6\x29\x17\xbe\xef\x70\x37\xbf\x12\x85\x2e\xbf\xf6\x29\x17\x3e\xef\x70\x37\xbf\x12\x85\x2e\xbf\x00\x00\x00\x00\x4f\x96\x06\xbf\x44\xc4\x59\xbf\x7a\x37\x9e\x3e\x00\x00\x00\xbf\xbd\x1b\x4f\xbf\xf0\xbe\xe2\x3e\xab\x96\x74\xbe\x6d\x3b\x5d\xbf\xea\x5b\x26\x3e\x5f\x96\x86\xbe\x68\x78\x73\xbf\xab\x96\x74\x3e\x6d\x3b\x5d\xbf\xf0\xbe\xe2\xbe\x00\x00\x00\x3f\xbd\x1b\x4f\xbf\x7a\x37\x9e\xbe\x33\xc4\xd9\x3e\x49\x2d\x30\xbf\x14\x79\x16\xbf\xef\x70\x37\x3f\x12\x85\x2e\xbf\xf6\x29\x17\xbe\x49\x2d\x30\x3f\x14\x79\x16\xbf\x33\xc4\xd9\xbe\x14\x79\x16\x3f\x33\xc4\xd9\xbe\x49\x2d\x30\xbf\x00\x00\x00\x00\x9a\x96\x74\xbf\xf6\x29\x97\xbe\x00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x00\x00\x5f\x96\x86\x3e\x68\x78\x73\xbf\xea\x5b\x26\xbe\x00\x00\x00\x00\x44\xc4\x59\xbf\x4f\x96\x06\x3f\x00\x00\x00\x00\x9a\x96\x74\xbf\xf6\x29\x97\x3e\xab\x96\x74\x3e\x6d\x3b\x5d\xbf\xf0\xbe\xe2\x3e\x5f\x96\x86\x3e\x68\x78\x73\xbf\xea\x5b\x26\x3e\x00\x00\x00\x3f\xbd\x1b\x4f\xbf\x7a\x37\x9e\x3e\xef\x70\x37\x3f\x12\x85\x2e\xbf\xf6\x29\x17\x3e\x4f\x96\x06\x3f\x44\xc4\x59\xbf\x00\x00\x00\x00\xab\x96\x74\xbe\x6d\x3b\x5d\xbf\xf0\xbe\xe2\xbe\x00\x00\x00\xbf\xbd\x1b\x4f\xbf\x7a\x37\x9e\xbe\x5f\x96\x86\xbe\x68\x78\x73\xbf\xea\x5b\x26\xbe\x44\xc4\x59\xbf\x4f\x96\x06\xbf\x00\x00\x00\x00\xef\x70\x37\xbf\x12\x85\x2e\xbf\xf6\x29\x17\xbe\xef\x70\x37\xbf\x12\x85\x2e\xbf\xf6\x29\x17\x3e\x4f\x96\x06\xbf\x44\xc4\x59\xbf\x00\x00\x00\x00\x00\x00\x00\xbf\xbd\x1b\x4f\xbf\x7a\x37\x9e\x3e\xab\x96\x74\xbe\x6d\x3b\x5d\xbf\xf0\xbe\xe2\x3e\x5f\x96\x86\xbe\x68\x78\x73\xbf\xea\x5b\x26\x3e\x6d\x3b\x5d\xbf\xf0\xbe\xe2\xbe\xab\x96\x74\x3e\xbd\x1b\x4f\xbf\x7a\x37\x9e\xbe\x00\x00\x00\x3f\x49\x2d\x30\xbf\x14\x79\x16\xbf\x33\xc4\xd9\x3e\x12\x85\x2e\xbf\xf6\x29\x17\xbe\xef\x70\x37\x3f\xf0\xbe\xe2\xbe\xab\x96\x74\xbe\x6d\x3b\x5d\x3f\x14\x79\x16\xbf\x33\xc4\xd9\xbe\x49\x2d\x30\x3f\x7a\x37\x9e\xbe\x00\x00\x00\xbf\xbd\x1b\x4f\x3f\xf6\x29\x17\xbe\xef\x70\x37\xbf\x12\x85\x2e\x3f\x33\xc4\xd9\xbe\x49\x2d\x30\xbf\x14\x79\x16\x3f\xea\x5b\x26\xbe\x5f\x96\x86\xbe\x68\x78\x73\x3f\xf0\xbe\xe2\x3e\xab\x96\x74\xbe\x6d\x3b\x5d\x3f\xea\x5b\x26\x3e\x5f\x96\x86\xbe\x68\x78\x73\x3f\x7a\x37\x9e\x3e\x00\x00\x00\xbf\xbd\x1b\x4f\x3f\xf6\x29\x17\x3e\xef\x70\x37\xbf\x12\x85\x2e\x3f\x00\x00\x00\x00\x4f\x96\x06\xbf\x44\xc4\x59\x3f\x33\xc4\xd9\x3e\x49\x2d\x30\xbf\x14\x79\x16\x3f\x14\x79\x16\x3f\x33\xc4\xd9\xbe\x49\x2d\x30\x3f\x49\x2d\x30\x3f\x14\x79\x16\xbf\x33\xc4\xd9\x3e\x9a\x96\x74\xbf\xf6\x29\x97\x3e\x00\x00\x00\x00\x68\x78\x73\xbf\xea\x5b\x26\x3e\x5f\x96\x86\x3e\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x00\x00\x44\xc4\x59\xbf\x00\x00\x00\x00\x4f\x96\x06\x3f\x9a\x96\x74\xbf\xf6\x29\x97\xbe\x00\x00\x00\x00\x68\x78\x73\xbf\xea\x5b\x26\xbe\x5f\x96\x86\x3e\x6d\x3b\x5d\xbf\xf0\xbe\xe2\x3e\xab\x96\x74\xbe\x68\x78\x73\xbf\xea\x5b\x26\x3e\x5f\x96\x86\xbe\xbd\x1b\x4f\xbf\x7a\x37\x9e\x3e\x00\x00\x00\xbf\x6d\x3b\x5d\xbf\xf0\xbe\xe2\xbe\xab\x96\x74\xbe\x68\x78\x73\xbf\xea\x5b\x26\xbe\x5f\x96\x86\xbe\xbd\x1b\x4f\xbf\x7a\x37\x9e\xbe\x00\x00\x00\xbf\x12\x85\x2e\xbf\xf6\x29\x17\x3e\xef\x70\x37\xbf\x12\x85\x2e\xbf\xf6\x29\x17\xbe\xef\x70\x37\xbf\x44\xc4\x59\xbf\x00\x00\x00\x00\x4f\x96\x06\xbf\x49\x2d\x30\xbf\x14\x79\x16\x3f\x33\xc4\xd9\xbe\x14\x79\x16\xbf\x33\xc4\xd9\x3e\x49\x2d\x30\xbf\x33\xc4\xd9\xbe\x49\x2d\x30\x3f\x14\x79\x16\xbf\x33\xc4\xd9\xbe\x49\x2d\x30\xbf\x14\x79\x16\xbf\x14\x79\x16\xbf\x33\xc4\xd9\xbe\x49\x2d\x30\xbf\x49\x2d\x30\xbf\x14\x79\x16\xbf\x33\xc4\xd9\xbe\x00\x00\x00\x00";
int		global_3284 = 0; // Used by: Info_ValueForKey
char	lit_3288[9252];
char	lit_56ac[5402];
char	quake3worldMessage[7534];
char	ui_ioq3[272];
char	ui_cdkeychecked[12];
int		bss_8a50; // Used by: UI_MainMenu
char	bss_8a54[256];
char	ui_server16[272];
char	ui_server15[272];
char	ui_server14[272];
char	ui_server13[272];
char	ui_server12[272];
char	ui_server11[272];
char	ui_server10[272];
char	ui_server9[272];
char	ui_server8[272];
char	ui_server7[272];
char	ui_server6[272];
char	ui_server5[272];
char	ui_server4[272];
char	ui_server3[272];
char	ui_server2[272];
char	ui_server1[272];
char	ui_marks[272];
char	ui_drawCrosshairNames[272];
char	ui_drawCrosshair[272];
char	ui_brassTime[272];
char	ui_browserShowEmpty[12];
int		bss_a0a0; // Used by: ArenaServers_MenuInit
char	bss_a0a4[256];
char	ui_browserShowFull[12];
int		bss_a1b0; // Used by: ArenaServers_MenuInit
char	bss_a1b4[256];
char	ui_browserSortKey[12];
int		bss_a2c0; // Used by: ArenaServers_MenuInit
char	bss_a2c4[256];
char	ui_browserGameType[12];
int		bss_a3d0; // Used by: ArenaServers_MenuInit
char	bss_a3d4[256];
char	ui_browserMaster[12];
int		bss_a4e0; // Used by: ArenaServers_MenuInit
char	bss_a4e4[256];
char	ui_spSelection[272];
char	ui_spSkill[272];
char	ui_spVideos[272];
char	ui_spAwards[272];
char	ui_spScores5[272];
char	ui_spScores4[272];
char	ui_spScores3[272];
char	ui_spScores2[272];
char	ui_spScores1[272];
char	ui_botsFile[272];
char	ui_arenasFile[272];
char	ui_ctf_friendly[272];
char	ui_ctf_timelimit[272];
char	ui_ctf_capturelimit[272];
char	ui_team_friendly[272];
char	ui_team_timelimit[272];
char	ui_team_fraglimit[272];
char	ui_tourney_timelimit[272];
char	ui_tourney_fraglimit[272];
char	ui_ffa_timelimit[272];
char	ui_ffa_fraglimit[272];
char	addBotsMenuInfo[276];
int		bss_bd48; // Used by: UI_AddBotsMenu_Init
int		bss_bd4c; // Used by: UI_AddBotsMenu_Init
int		bss_bd50;
int		bss_bd54; // Used by: UI_AddBotsMenu_Init
char	bss_bd58[8];
int		bss_bd60; // Used by: UI_AddBotsMenu_Init
int		bss_bd64; // Used by: UI_AddBotsMenu_Init
char	bss_bd68[40];
int		bss_bd90; // Used by: UI_AddBotsMenu_Init
int		bss_bd94; // Used by: UI_AddBotsMenu_Init
int		bss_bd98; // Used by: UI_AddBotsMenu_Init
int		bss_bd9c; // Used by: UI_AddBotsMenu_Init
int		bss_bda0; // Used by: UI_AddBotsMenu_Init
int		bss_bda4;
int		bss_bda8; // Used by: UI_AddBotsMenu_Init
int		bss_bdac; // Used by: UI_AddBotsMenu_Init
char	bss_bdb0[24];
int		bss_bdc8; // Used by: UI_AddBotsMenu_Init
char	bss_bdcc[28];
int		bss_bde8; // Used by: UI_AddBotsMenu_Init
int		bss_bdec; // Used by: UI_AddBotsMenu_Init
int		bss_bdf0;
int		bss_bdf4; // Used by: UI_AddBotsMenu_Init
int		bss_bdf8; // Used by: UI_AddBotsMenu_Init
int		bss_bdfc;
int		bss_be00; // Used by: UI_AddBotsMenu_Init
int		bss_be04; // Used by: UI_AddBotsMenu_Init
char	bss_be08[24];
int		bss_be20; // Used by: UI_AddBotsMenu_Init
char	bss_be24[28];
int		bss_be40; // Used by: UI_AddBotsMenu_Init
int		bss_be44; // Used by: UI_AddBotsMenu_Init
int		bss_be48;
int		bss_be4c; // Used by: UI_AddBotsMenu_Init
int		bss_be50;
int		bss_be54; // Used by: UI_AddBotsMenu_Init
int		bss_be58; // Used by: UI_AddBotsMenu_Init
int		bss_be5c; // Used by: UI_AddBotsMenu_Init
char	bss_be60[24];
int		bss_be78; // Used by: UI_AddBotsMenu_Init
int		bss_be7c; // Used by: UI_AddBotsMenu_Init
char	bss_be80[8];
int		bss_be88; // Used by: UI_AddBotsMenu_Init
char	bss_be8c[12];
int		bss_be98; // Used by: UI_AddBotsMenu_Init
int		bss_be9c; // Used by: UI_AddBotsMenu_Init
int		bss_bea0;
int		bss_bea4; // Used by: UI_AddBotsMenu_Init
int		bss_bea8;
int		bss_beac; // Used by: UI_AddBotsMenu_Init
int		bss_beb0; // Used by: UI_AddBotsMenu_Init
int		bss_beb4; // Used by: UI_AddBotsMenu_Init
char	bss_beb8[24];
int		bss_bed0; // Used by: UI_AddBotsMenu_Init
int		bss_bed4; // Used by: UI_AddBotsMenu_Init
char	bss_bed8[8];
int		bss_bee0; // Used by: UI_AddBotsMenu_Init
char	bss_bee4[12];
int		bss_bef0; // Used by: UI_AddBotsMenu_Init
int		bss_bef4; // Used by: UI_AddBotsMenu_Init
char	bss_bef8[72];
int		bss_bf40; // Used by: UI_AddBotsMenu_Init
char	bss_bf44[432];
int		bss_c0f4; // Used by: UI_AddBotsMenu_Init
int		bss_c0f8; // Used by: UI_AddBotsMenu_Init
int		bss_c0fc; // Used by: UI_AddBotsMenu_Init
int		bss_c100; // Used by: UI_AddBotsMenu_Init
int		bss_c104; // Used by: UI_AddBotsMenu_Init
char	bss_c108[24];
int		bss_c120; // Used by: UI_AddBotsMenu_Init
char	bss_c124[16];
int		bss_c134; // Used by: UI_AddBotsMenu_Init, UI_AddBotsMenu_FightEvent
char	bss_c138[8];
int		bss_c140; // Used by: UI_AddBotsMenu_Init
char	bss_c144[16];
int		bss_c154; // Used by: UI_AddBotsMenu_Init
int		bss_c158; // Used by: UI_AddBotsMenu_Init
int		bss_c15c; // Used by: UI_AddBotsMenu_Init
int		bss_c160; // Used by: UI_AddBotsMenu_Init
int		bss_c164; // Used by: UI_AddBotsMenu_Init
char	bss_c168[24];
int		bss_c180; // Used by: UI_AddBotsMenu_Init
char	bss_c184[16];
int		bss_c194; // Used by: UI_AddBotsMenu_FightEvent
char	bss_c198[8];
int		bss_c1a0; // Used by: UI_AddBotsMenu_Init, UI_AddBotsMenu_FightEvent
char	bss_c1a4[16];
int		bss_c1b4; // Used by: UI_AddBotsMenu_Init
int		bss_c1b8; // Used by: UI_AddBotsMenu_Init
int		bss_c1bc; // Used by: UI_AddBotsMenu_Init
int		bss_c1c0; // Used by: UI_AddBotsMenu_Init
int		bss_c1c4; // Used by: UI_AddBotsMenu_Init
char	bss_c1c8[24];
int		bss_c1e0; // Used by: UI_AddBotsMenu_Init
int		bss_c1e4; // Used by: UI_AddBotsMenu_Init
char	bss_c1e8[8];
int		bss_c1f0; // Used by: UI_AddBotsMenu_Init
char	bss_c1f4[12];
int		bss_c200; // Used by: UI_AddBotsMenu_Init
int		bss_c204; // Used by: UI_AddBotsMenu_Init
int		bss_c208;
int		bss_c20c; // Used by: UI_AddBotsMenu_Init
int		bss_c210; // Used by: UI_AddBotsMenu_Init
int		bss_c214; // Used by: UI_AddBotsMenu_Init
int		bss_c218; // Used by: UI_AddBotsMenu_Init
int		bss_c21c; // Used by: UI_AddBotsMenu_Init
char	bss_c220[24];
int		bss_c238; // Used by: UI_AddBotsMenu_Init
int		bss_c23c; // Used by: UI_AddBotsMenu_Init
char	bss_c240[8];
int		bss_c248; // Used by: UI_AddBotsMenu_Init
char	bss_c24c[12];
int		bss_c258; // Used by: UI_AddBotsMenu_Init
int		bss_c25c; // Used by: UI_AddBotsMenu_Init
int		bss_c260;
int		bss_c264; // Used by: UI_AddBotsMenu_Init, UI_AddBotsMenu_GetSortedBotNums, UI_AddBotsMenu_DownEvent
int		bss_c268; // Used by: UI_AddBotsMenu_Init, UI_AddBotsMenu_FightEvent
int		bss_c26c; // Used by: UI_AddBotsMenu_Init, UI_AddBotsMenu_DownEvent, UI_AddBotsMenu_UpEvent, UI_AddBotsMenu_SetBotNames
int		bss_c270; // Used by: UI_AddBotsMenu_Init, UI_AddBotsMenu_BotEvent, UI_AddBotsMenu_FightEvent
char	bss_c274[6368];
int		uis; // Used by: UI_SwingAngles, UI_PlayerAnimation, UI_Refresh, UI_ConsoleCommand
int		bss_db58; // Used by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_Init, UI_SPPostgameMenu_MenuDraw, UI_SPPostgameMenu_MenuKey, UI_SPLevelMenu_MenuDraw, ArenaServers_StartRefresh, ArenaServers_DoRefresh, Bitmap_Draw, PlayerSettings_DrawPlayer, PlayerModel_DrawPlayer, Main_MenuDraw, Controls_DrawPlayer, UI_DisplayDownloadInfo, UI_Refresh, UI_ConsoleCommand, UI_DrawString, UI_DrawProportionalString
int		bss_db5c; // Used by: ScrollList_Key, Slider_Key, UI_InGameMenu, UI_CursorInRect, UI_Refresh, UI_MouseEvent
int		bss_db60; // Used by: UI_TeamOrdersMenu_Key, ScrollList_Key, UI_InGameMenu, UI_CursorInRect, UI_Refresh, UI_MouseEvent
int		bss_db64; // Used by: UI_SPPostgameMenu_f, UI_SPLevelMenu_f, UI_MainMenu, UI_InGameMenu, UI_CDKeyMenu_Init, UI_Init, UI_ForceMenuOff, UI_PopMenu, UI_PushMenu
int		bss_db68; // Used by: UI_Refresh, UI_Init, UI_MouseEvent, UI_KeyEvent, UI_IsFullscreen, UI_ForceMenuOff, UI_PopMenu, UI_PushMenu
char	bss_db6c[11304];
int		bss_10794; // Used by: DriverInfo_MenuDraw
int		bss_10798; // Used by: DriverInfo_MenuDraw
int		bss_1079c; // Used by: DriverInfo_MenuDraw
int		bss_107a0; // Used by: GraphicsOptions_MenuInit
int		bss_107a4; // Used by: GraphicsOptions_MenuInit, Menu_Cache
int		bss_107a8; // Used by: UI_DisplayOptionsMenu_Init
char	bss_107ac[8];
int		bss_107b4; // Used by: GraphicsOptions_GetResolutions, UI_Init
int		bss_107b8; // Used by: GraphicsOptions_GetResolutions, UI_Init
char	bss_107bc[20];
int		bss_107d0; // Used by: Menu_Draw, UI_Refresh
int		bss_107d4; // Used by: Menu_Cache, UI_DrawRect, UI_FillRect
int		bss_107d8; // Used by: Menu_Cache, UI_DrawConnectScreen, UI_Refresh
int		bss_107dc; // Used by: Menu_Cache, UI_Refresh
int		bss_107e0; // Used by: Menu_Cache, UI_DrawString2
int		bss_107e4; // Used by: Menu_Cache, UI_DrawProportionalString
int		bss_107e8; // Used by: Menu_Cache, UI_DrawProportionalString
int		bss_107ec; // Used by: Menu_Cache, UI_DrawBannerString2
int		bss_107f0; // Used by: Menu_Cache, UI_Refresh
int		bss_107f4; // Used by: Menu_Cache, RadioButton_Draw
int		bss_107f8; // Used by: Menu_Cache, RadioButton_Draw
int		bss_107fc; // Used by: UI_DrawPlayer, UI_AdjustFrom640, UI_Init, UI_MouseEvent, UI_DrawString2, UI_DrawProportionalString2, UI_DrawBannerString2
int		bss_10800; // Used by: UI_DrawPlayer, UI_AdjustFrom640, UI_Init, UI_DrawString2, UI_DrawProportionalString2, UI_DrawBannerString2
int		bss_10804; // Used by: UI_AdjustFrom640, UI_Init, UI_MouseEvent, UI_DrawString2, UI_DrawProportionalString2, UI_DrawBannerString2
int		bss_10808; // Used by: UI_SPPostgameMenu_MenuDraw, UI_MainMenu, Main_MenuDraw, UI_InitGameinfo, UI_CanShowTierVideo, UI_CinematicsMenu_Init, UI_CinematicsMenu_Event
int		bss_1080c; // Used by: UI_Refresh, UI_PopMenu, UI_PushMenu
int		m_entersound; // Used by: UI_Refresh, UI_PushMenu
char	cdkeyMenuInfo[276];
int		bss_10928; // Used by: UI_CDKeyMenu_Init
int		bss_1092c; // Used by: UI_CDKeyMenu_Init
int		bss_10930;
int		bss_10934; // Used by: UI_CDKeyMenu_Init
char	bss_10938[8];
int		bss_10940; // Used by: UI_CDKeyMenu_Init
int		bss_10944; // Used by: UI_CDKeyMenu_Init
char	bss_10948[40];
int		bss_10970; // Used by: UI_CDKeyMenu_Init
int		bss_10974; // Used by: UI_CDKeyMenu_Init
int		bss_10978; // Used by: UI_CDKeyMenu_Init
int		bss_1097c; // Used by: UI_CDKeyMenu_Init
int		bss_10980; // Used by: UI_CDKeyMenu_Init
int		bss_10984;
int		bss_10988; // Used by: UI_CDKeyMenu_Init
int		bss_1098c; // Used by: UI_CDKeyMenu_Init
char	bss_10990[24];
int		bss_109a8; // Used by: UI_CDKeyMenu_Init
char	bss_109ac[28];
int		bss_109c8; // Used by: UI_CDKeyMenu_Init
int		bss_109cc; // Used by: UI_CDKeyMenu_Init
int		bss_109d0;
int		bss_109d4; // Used by: UI_CDKeyMenu_Init
int		bss_109d8; // Used by: UI_CDKeyMenu_Init
int		bss_109dc;
int		bss_109e0; // Used by: UI_CDKeyMenu_Init
int		bss_109e4; // Used by: UI_CDKeyMenu_Init
char	bss_109e8[24];
int		bss_10a00; // Used by: UI_CDKeyMenu_Init
char	bss_10a04[8];
int		bss_10a0c; // Used by: UI_CDKeyMenu_Init
char	bss_10a10[8];
int		bss_10a18; // Used by: UI_CDKeyMenu_Init
char	bss_10a1c[256]; // Used by: UI_CDKeyMenu_Init, UI_CDKeyMenu_Event
int		bss_10b1c; // Used by: UI_CDKeyMenu_Init
int		bss_10b20; // Used by: UI_CDKeyMenu_Init
int		bss_10b24; // Used by: UI_CDKeyMenu_Init
int		bss_10b28; // Used by: UI_CDKeyMenu_Init
int		bss_10b2c; // Used by: UI_CDKeyMenu_Init
int		bss_10b30; // Used by: UI_CDKeyMenu_Init
char	bss_10b34[24];
int		bss_10b4c; // Used by: UI_CDKeyMenu_Init
int		bss_10b50; // Used by: UI_CDKeyMenu_Init
char	bss_10b54[8];
int		bss_10b5c; // Used by: UI_CDKeyMenu_Init
char	bss_10b60[12];
int		bss_10b6c; // Used by: UI_CDKeyMenu_Init
int		bss_10b70; // Used by: UI_CDKeyMenu_Init
int		bss_10b74;
int		bss_10b78; // Used by: UI_CDKeyMenu_Init
int		bss_10b7c; // Used by: UI_CDKeyMenu_Init
int		bss_10b80; // Used by: UI_CDKeyMenu_Init
int		bss_10b84; // Used by: UI_CDKeyMenu_Init
int		bss_10b88; // Used by: UI_CDKeyMenu_Init
char	bss_10b8c[24];
int		bss_10ba4; // Used by: UI_CDKeyMenu_Init
int		bss_10ba8; // Used by: UI_CDKeyMenu_Init
char	bss_10bac[8];
int		bss_10bb4; // Used by: UI_CDKeyMenu_Init
char	bss_10bb8[12];
int		bss_10bc4; // Used by: UI_CDKeyMenu_Init
int		bss_10bc8; // Used by: UI_CDKeyMenu_Init
int		bss_10bcc;
char	cinematicsMenuInfo[280];
int		bss_10ce8; // Used by: UI_CinematicsMenu_Init
int		bss_10cec;
int		bss_10cf0; // Used by: UI_CinematicsMenu_Init
char	bss_10cf4[8];
int		bss_10cfc; // Used by: UI_CinematicsMenu_Init
int		bss_10d00; // Used by: UI_CinematicsMenu_Init
char	bss_10d04[40];
int		bss_10d2c; // Used by: UI_CinematicsMenu_Init
int		bss_10d30; // Used by: UI_CinematicsMenu_Init
int		bss_10d34; // Used by: UI_CinematicsMenu_Init
int		bss_10d38; // Used by: UI_CinematicsMenu_Init
int		bss_10d3c; // Used by: UI_CinematicsMenu_Init
int		bss_10d40;
int		bss_10d44; // Used by: UI_CinematicsMenu_Init
int		bss_10d48; // Used by: UI_CinematicsMenu_Init
char	bss_10d4c[24];
int		bss_10d64; // Used by: UI_CinematicsMenu_Init
char	bss_10d68[28];
int		bss_10d84; // Used by: UI_CinematicsMenu_Init
int		bss_10d88; // Used by: UI_CinematicsMenu_Init
int		bss_10d8c;
int		bss_10d90; // Used by: UI_CinematicsMenu_Init
int		bss_10d94; // Used by: UI_CinematicsMenu_Init
int		bss_10d98;
int		bss_10d9c; // Used by: UI_CinematicsMenu_Init
int		bss_10da0; // Used by: UI_CinematicsMenu_Init
char	bss_10da4[24];
int		bss_10dbc; // Used by: UI_CinematicsMenu_Init
char	bss_10dc0[28];
int		bss_10ddc; // Used by: UI_CinematicsMenu_Init
int		bss_10de0; // Used by: UI_CinematicsMenu_Init
int		bss_10de4;
int		bss_10de8; // Used by: UI_CinematicsMenu_Init
int		bss_10dec;
int		bss_10df0; // Used by: UI_CinematicsMenu_Init
int		bss_10df4; // Used by: UI_CinematicsMenu_Init
int		bss_10df8; // Used by: UI_CinematicsMenu_Init
char	bss_10dfc[24];
int		bss_10e14; // Used by: UI_CinematicsMenu_Init
int		bss_10e18; // Used by: UI_CinematicsMenu_Init
char	bss_10e1c[8];
int		bss_10e24; // Used by: UI_CinematicsMenu_Init
int		bss_10e28; // Used by: UI_CinematicsMenu_Init
int		bss_10e2c; // Used by: UI_CinematicsMenu_Init
int		bss_10e30; // Used by: UI_CinematicsMenu_Init
int		bss_10e34;
int		bss_10e38; // Used by: UI_CinematicsMenu_Init
int		bss_10e3c; // Used by: UI_CinematicsMenu_Init
int		bss_10e40; // Used by: UI_CinematicsMenu_Init
char	bss_10e44[24];
int		bss_10e5c; // Used by: UI_CinematicsMenu_Init
int		bss_10e60; // Used by: UI_CinematicsMenu_Init
char	bss_10e64[8];
int		bss_10e6c; // Used by: UI_CinematicsMenu_Init
int		bss_10e70; // Used by: UI_CinematicsMenu_Init
int		bss_10e74; // Used by: UI_CinematicsMenu_Init
int		bss_10e78; // Used by: UI_CinematicsMenu_Init
int		bss_10e7c;
int		bss_10e80; // Used by: UI_CinematicsMenu_Init
int		bss_10e84; // Used by: UI_CinematicsMenu_Init
int		bss_10e88; // Used by: UI_CinematicsMenu_Init
char	bss_10e8c[24];
int		bss_10ea4; // Used by: UI_CinematicsMenu_Init
int		bss_10ea8; // Used by: UI_CinematicsMenu_Init
char	bss_10eac[8];
int		bss_10eb4; // Used by: UI_CinematicsMenu_Init
int		bss_10eb8; // Used by: UI_CinematicsMenu_Init
int		bss_10ebc; // Used by: UI_CinematicsMenu_Init
int		bss_10ec0; // Used by: UI_CinematicsMenu_Init
int		bss_10ec4;
int		bss_10ec8; // Used by: UI_CinematicsMenu_Init
int		bss_10ecc; // Used by: UI_CinematicsMenu_Init
int		bss_10ed0; // Used by: UI_CinematicsMenu_Init
char	bss_10ed4[24];
int		bss_10eec; // Used by: UI_CinematicsMenu_Init
int		bss_10ef0; // Used by: UI_CinematicsMenu_Init
char	bss_10ef4[8];
int		bss_10efc; // Used by: UI_CinematicsMenu_Init
int		bss_10f00; // Used by: UI_CinematicsMenu_Init
int		bss_10f04; // Used by: UI_CinematicsMenu_Init
int		bss_10f08; // Used by: UI_CinematicsMenu_Init
int		bss_10f0c;
int		bss_10f10; // Used by: UI_CinematicsMenu_Init
int		bss_10f14; // Used by: UI_CinematicsMenu_Init
int		bss_10f18; // Used by: UI_CinematicsMenu_Init
char	bss_10f1c[24];
int		bss_10f34; // Used by: UI_CinematicsMenu_Init
int		bss_10f38; // Used by: UI_CinematicsMenu_Init
char	bss_10f3c[8];
int		bss_10f44; // Used by: UI_CinematicsMenu_Init
int		bss_10f48; // Used by: UI_CinematicsMenu_Init
int		bss_10f4c; // Used by: UI_CinematicsMenu_Init
int		bss_10f50; // Used by: UI_CinematicsMenu_Init
int		bss_10f54;
int		bss_10f58; // Used by: UI_CinematicsMenu_Init
int		bss_10f5c; // Used by: UI_CinematicsMenu_Init
int		bss_10f60; // Used by: UI_CinematicsMenu_Init
char	bss_10f64[24];
int		bss_10f7c; // Used by: UI_CinematicsMenu_Init
int		bss_10f80; // Used by: UI_CinematicsMenu_Init
char	bss_10f84[8];
int		bss_10f8c; // Used by: UI_CinematicsMenu_Init
int		bss_10f90; // Used by: UI_CinematicsMenu_Init
int		bss_10f94; // Used by: UI_CinematicsMenu_Init
int		bss_10f98; // Used by: UI_CinematicsMenu_Init
int		bss_10f9c;
int		bss_10fa0; // Used by: UI_CinematicsMenu_Init
int		bss_10fa4; // Used by: UI_CinematicsMenu_Init
int		bss_10fa8; // Used by: UI_CinematicsMenu_Init
char	bss_10fac[24];
int		bss_10fc4; // Used by: UI_CinematicsMenu_Init
int		bss_10fc8; // Used by: UI_CinematicsMenu_Init
char	bss_10fcc[8];
int		bss_10fd4; // Used by: UI_CinematicsMenu_Init
int		bss_10fd8; // Used by: UI_CinematicsMenu_Init
int		bss_10fdc; // Used by: UI_CinematicsMenu_Init
int		bss_10fe0; // Used by: UI_CinematicsMenu_Init
int		bss_10fe4;
int		bss_10fe8; // Used by: UI_CinematicsMenu_Init
int		bss_10fec; // Used by: UI_CinematicsMenu_Init
int		bss_10ff0; // Used by: UI_CinematicsMenu_Init
char	bss_10ff4[24];
int		bss_1100c; // Used by: UI_CinematicsMenu_Init
int		bss_11010; // Used by: UI_CinematicsMenu_Init
char	bss_11014[8];
int		bss_1101c; // Used by: UI_CinematicsMenu_Init
int		bss_11020; // Used by: UI_CinematicsMenu_Init
int		bss_11024; // Used by: UI_CinematicsMenu_Init
int		bss_11028; // Used by: UI_CinematicsMenu_Init
int		bss_1102c;
int		bss_11030; // Used by: UI_CinematicsMenu_Init
int		bss_11034; // Used by: UI_CinematicsMenu_Init
int		bss_11038; // Used by: UI_CinematicsMenu_Init
char	bss_1103c[24];
int		bss_11054; // Used by: UI_CinematicsMenu_Init
int		bss_11058; // Used by: UI_CinematicsMenu_Init
char	bss_1105c[8];
int		bss_11064; // Used by: UI_CinematicsMenu_Init
int		bss_11068; // Used by: UI_CinematicsMenu_Init
int		bss_1106c; // Used by: UI_CinematicsMenu_Init
int		bss_11070; // Used by: UI_CinematicsMenu_Init
int		bss_11074;
int		bss_11078; // Used by: UI_CinematicsMenu_Init
int		bss_1107c; // Used by: UI_CinematicsMenu_Init
int		bss_11080; // Used by: UI_CinematicsMenu_Init
char	bss_11084[24];
int		bss_1109c; // Used by: UI_CinematicsMenu_Init
int		bss_110a0; // Used by: UI_CinematicsMenu_Init
char	bss_110a4[8];
int		bss_110ac; // Used by: UI_CinematicsMenu_Init
int		bss_110b0; // Used by: UI_CinematicsMenu_Init
int		bss_110b4; // Used by: UI_CinematicsMenu_Init
int		bss_110b8; // Used by: UI_CinematicsMenu_Init
int		bss_110bc; // Used by: UI_CinematicsMenu_Init
int		bss_110c0; // Used by: UI_CinematicsMenu_Init
int		bss_110c4; // Used by: UI_CinematicsMenu_Init
int		bss_110c8; // Used by: UI_CinematicsMenu_Init
char	bss_110cc[24];
int		bss_110e4; // Used by: UI_CinematicsMenu_Init
int		bss_110e8; // Used by: UI_CinematicsMenu_Init
char	bss_110ec[8];
int		bss_110f4; // Used by: UI_CinematicsMenu_Init
char	bss_110f8[12];
int		bss_11104; // Used by: UI_CinematicsMenu_Init
int		bss_11108; // Used by: UI_CinematicsMenu_Init
int		bss_1110c;
char	s_confirm[268];
int		bss_1121c; // Used by: UI_Message, UI_ConfirmMenu_Style
int		bss_11220; // Used by: UI_Message, UI_ConfirmMenu_Style
int		bss_11224; // Used by: UI_Message, UI_ConfirmMenu_Style
int		bss_11228; // Used by: UI_Message, UI_ConfirmMenu_Style
int		bss_1122c;
int		bss_11230; // Used by: UI_ConfirmMenu_Style
int		bss_11234;
int		bss_11238; // Used by: UI_ConfirmMenu_Style
int		bss_1123c; // Used by: UI_ConfirmMenu_Style
int		bss_11240; // Used by: UI_ConfirmMenu_Style
char	bss_11244[24];
int		bss_1125c; // Used by: UI_ConfirmMenu_Style
int		bss_11260; // Used by: UI_ConfirmMenu_Style
char	bss_11264[8];
int		bss_1126c; // Used by: UI_ConfirmMenu_Style
int		bss_11270; // Used by: UI_ConfirmMenu_Style
int		bss_11274; // Used by: UI_ConfirmMenu_Style
int		bss_11278; // Used by: UI_Message, UI_ConfirmMenu_Style
int		bss_1127c;
int		bss_11280; // Used by: UI_Message, UI_ConfirmMenu_Style
int		bss_11284; // Used by: UI_Message, UI_ConfirmMenu_Style
int		bss_11288; // Used by: UI_Message, UI_ConfirmMenu_Style
char	bss_1128c[24];
int		bss_112a4; // Used by: UI_Message, UI_ConfirmMenu_Style
int		bss_112a8; // Used by: UI_Message, UI_ConfirmMenu_Style
char	bss_112ac[8];
int		bss_112b4; // Used by: UI_Message, UI_ConfirmMenu_Style
int		bss_112b8; // Used by: UI_Message, UI_ConfirmMenu_Style
int		bss_112bc; // Used by: UI_Message, UI_ConfirmMenu_Style
int		bss_112c0; // Used by: UI_ConfirmMenu_Style, ConfirmMenu_Draw
int		bss_112c4; // Used by: UI_ConfirmMenu_Style, ConfirmMenu_Draw
int		bss_112c8; // Used by: UI_ConfirmMenu_Style, ConfirmMenu_Draw, MessageMenu_Draw
int		bss_112cc; // Used by: UI_ConfirmMenu_Style, ConfirmMenu_Event
int		bss_112d0; // Used by: UI_Message, UI_ConfirmMenu_Style, ConfirmMenu_Draw, MessageMenu_Draw
int		bss_112d4; // Used by: UI_Message, MessageMenu_Draw
char	lastLoadingText[1024]; // Used by: UI_DrawConnectScreen
int		lastConnState; // Used by: UI_DrawConnectScreen
char	passwordField[364];
int		s_controls; // Used by: Controls_MenuKey, Controls_Update
int		bss_1184c;
int		bss_11850; // Used by: Controls_Update
char	bss_11854[260];
int		bss_11958; // Used by: Controls_MenuInit
int		bss_1195c; // Used by: Controls_MenuInit
int		bss_11960; // Used by: Controls_MenuInit
int		bss_11964;
int		bss_11968; // Used by: Controls_MenuInit
char	bss_1196c[8];
int		bss_11974; // Used by: Controls_MenuInit
int		bss_11978; // Used by: Controls_MenuInit
char	bss_1197c[24];
int		bss_11994; // Used by: Controls_MenuInit
char	bss_11998[12];
int		bss_119a4; // Used by: Controls_MenuInit
int		bss_119a8; // Used by: Controls_MenuInit
int		bss_119ac; // Used by: Controls_MenuInit
int		bss_119b0; // Used by: Controls_MenuInit
int		bss_119b4; // Used by: Controls_MenuInit
int		bss_119b8;
int		bss_119bc; // Used by: Controls_MenuInit
int		bss_119c0; // Used by: Controls_MenuInit
char	bss_119c4[24];
int		bss_119dc; // Used by: Controls_MenuInit
char	bss_119e0[28];
int		bss_119fc; // Used by: Controls_MenuInit
int		bss_11a00; // Used by: Controls_MenuInit
int		bss_11a04;
int		bss_11a08; // Used by: Controls_MenuInit
int		bss_11a0c; // Used by: Controls_MenuInit
int		bss_11a10;
int		bss_11a14; // Used by: Controls_MenuInit
int		bss_11a18; // Used by: Controls_MenuInit
char	bss_11a1c[24];
int		bss_11a34; // Used by: Controls_MenuInit
char	bss_11a38[28];
int		bss_11a54; // Used by: Controls_MenuInit
int		bss_11a58; // Used by: Controls_MenuInit
int		bss_11a5c;
int		bss_11a60; // Used by: Controls_MenuInit
char	bss_11a64[8];
int		bss_11a6c; // Used by: Controls_MenuInit
int		bss_11a70; // Used by: Controls_MenuInit
char	bss_11a74[24];
int		bss_11a8c; // Used by: Controls_MenuInit
char	bss_11a90[8];
int		bss_11a98; // Used by: Controls_MenuInit
char	bss_11a9c[16];
int		bss_11aac; // Used by: Controls_MenuInit
int		bss_11ab0; // Used by: Controls_MenuInit
int		bss_11ab4;
int		bss_11ab8; // Used by: Controls_MenuInit
int		bss_11abc;
int		bss_11ac0; // Used by: Controls_MenuInit
int		bss_11ac4; // Used by: Controls_MenuInit
int		bss_11ac8; // Used by: Controls_MenuInit
char	bss_11acc[24];
int		bss_11ae4; // Used by: Controls_MenuInit
int		bss_11ae8; // Used by: Controls_MenuInit
char	bss_11aec[8];
int		bss_11af4; // Used by: Controls_MenuInit
int		bss_11af8; // Used by: Controls_MenuInit
int		bss_11afc; // Used by: Controls_MenuInit
int		bss_11b00; // Used by: Controls_MenuInit
int		bss_11b04;
int		bss_11b08; // Used by: Controls_MenuInit
int		bss_11b0c; // Used by: Controls_MenuInit
int		bss_11b10; // Used by: Controls_MenuInit
char	bss_11b14[24];
int		bss_11b2c; // Used by: Controls_MenuInit
int		bss_11b30; // Used by: Controls_MenuInit
char	bss_11b34[8];
int		bss_11b3c; // Used by: Controls_MenuInit
int		bss_11b40; // Used by: Controls_MenuInit
int		bss_11b44; // Used by: Controls_MenuInit
int		bss_11b48; // Used by: Controls_MenuInit
int		bss_11b4c;
int		bss_11b50; // Used by: Controls_MenuInit
int		bss_11b54; // Used by: Controls_MenuInit
int		bss_11b58; // Used by: Controls_MenuInit
char	bss_11b5c[24];
int		bss_11b74; // Used by: Controls_MenuInit
int		bss_11b78; // Used by: Controls_MenuInit
char	bss_11b7c[8];
int		bss_11b84; // Used by: Controls_MenuInit
int		bss_11b88; // Used by: Controls_MenuInit
int		bss_11b8c; // Used by: Controls_MenuInit
int		bss_11b90; // Used by: Controls_MenuInit
int		bss_11b94;
int		bss_11b98; // Used by: Controls_MenuInit
int		bss_11b9c; // Used by: Controls_MenuInit
int		bss_11ba0; // Used by: Controls_MenuInit
char	bss_11ba4[24];
int		bss_11bbc; // Used by: Controls_MenuInit
int		bss_11bc0; // Used by: Controls_MenuInit
char	bss_11bc4[8];
int		bss_11bcc; // Used by: Controls_MenuInit
int		bss_11bd0; // Used by: Controls_MenuInit
int		bss_11bd4; // Used by: Controls_MenuInit
int		bss_11bd8; // Used by: Controls_MenuInit
int		bss_11bdc;
int		bss_11be0; // Used by: Controls_MenuInit
char	bss_11be4[32];
int		bss_11c04; // Used by: Controls_MenuInit
int		bss_11c08; // Used by: Controls_MenuInit
int		bss_11c0c;
int		bss_11c10; // Used by: Controls_MenuInit
int		bss_11c14; // Used by: Controls_MenuInit
int		bss_11c18;
int		bss_11c1c; // Used by: Controls_MenuInit
char	bss_11c20[32];
int		bss_11c40; // Used by: Controls_MenuInit
int		bss_11c44; // Used by: Controls_MenuInit
int		bss_11c48;
int		bss_11c4c; // Used by: Controls_MenuInit
int		bss_11c50; // Used by: Controls_MenuInit
int		bss_11c54;
int		bss_11c58; // Used by: Controls_MenuInit
char	bss_11c5c[32];
int		bss_11c7c; // Used by: Controls_MenuInit
int		bss_11c80; // Used by: Controls_MenuInit
int		bss_11c84;
int		bss_11c88; // Used by: Controls_MenuInit
int		bss_11c8c; // Used by: Controls_MenuInit
int		bss_11c90;
int		bss_11c94; // Used by: Controls_MenuInit
char	bss_11c98[32];
int		bss_11cb8; // Used by: Controls_MenuInit
int		bss_11cbc; // Used by: Controls_MenuInit
int		bss_11cc0;
int		bss_11cc4; // Used by: Controls_MenuInit
int		bss_11cc8; // Used by: Controls_MenuInit
int		bss_11ccc;
int		bss_11cd0; // Used by: Controls_MenuInit
char	bss_11cd4[32];
int		bss_11cf4; // Used by: Controls_MenuInit
int		bss_11cf8; // Used by: Controls_MenuInit
int		bss_11cfc;
int		bss_11d00; // Used by: Controls_MenuInit
int		bss_11d04; // Used by: Controls_MenuInit
int		bss_11d08;
int		bss_11d0c; // Used by: Controls_MenuInit
char	bss_11d10[32];
int		bss_11d30; // Used by: Controls_MenuInit
int		bss_11d34; // Used by: Controls_MenuInit
int		bss_11d38;
int		bss_11d3c; // Used by: Controls_MenuInit
int		bss_11d40; // Used by: Controls_MenuInit
int		bss_11d44;
int		bss_11d48; // Used by: Controls_MenuInit
char	bss_11d4c[32];
int		bss_11d6c; // Used by: Controls_MenuInit
int		bss_11d70; // Used by: Controls_MenuInit
int		bss_11d74;
int		bss_11d78; // Used by: Controls_MenuInit
int		bss_11d7c; // Used by: Controls_MenuInit
int		bss_11d80;
int		bss_11d84; // Used by: Controls_MenuInit
char	bss_11d88[32];
int		bss_11da8; // Used by: Controls_MenuInit
int		bss_11dac; // Used by: Controls_MenuInit
int		bss_11db0;
int		bss_11db4; // Used by: Controls_MenuInit
int		bss_11db8; // Used by: Controls_MenuInit
int		bss_11dbc;
int		bss_11dc0; // Used by: Controls_MenuInit
char	bss_11dc4[32];
int		bss_11de4; // Used by: Controls_MenuInit
int		bss_11de8; // Used by: Controls_MenuInit
int		bss_11dec;
int		bss_11df0; // Used by: Controls_MenuInit
int		bss_11df4; // Used by: Controls_MenuInit
int		bss_11df8;
int		bss_11dfc; // Used by: Controls_MenuInit
char	bss_11e00[32];
int		bss_11e20; // Used by: Controls_MenuInit
int		bss_11e24; // Used by: Controls_MenuInit
int		bss_11e28;
int		bss_11e2c; // Used by: Controls_MenuInit
int		bss_11e30; // Used by: Controls_MenuInit
int		bss_11e34;
int		bss_11e38; // Used by: Controls_MenuInit
char	bss_11e3c[32];
int		bss_11e5c; // Used by: Controls_MenuInit
int		bss_11e60; // Used by: Controls_MenuInit
int		bss_11e64;
int		bss_11e68; // Used by: Controls_MenuInit
int		bss_11e6c; // Used by: Controls_MenuInit
int		bss_11e70;
int		bss_11e74; // Used by: Controls_MenuInit
char	bss_11e78[32];
int		bss_11e98; // Used by: Controls_MenuInit
int		bss_11e9c; // Used by: Controls_MenuInit
int		bss_11ea0;
int		bss_11ea4; // Used by: Controls_MenuInit
int		bss_11ea8; // Used by: Controls_MenuInit
int		bss_11eac;
int		bss_11eb0; // Used by: Controls_MenuInit
char	bss_11eb4[32];
int		bss_11ed4; // Used by: Controls_MenuInit
int		bss_11ed8; // Used by: Controls_MenuInit
int		bss_11edc;
int		bss_11ee0; // Used by: Controls_MenuInit
int		bss_11ee4; // Used by: Controls_MenuInit
int		bss_11ee8;
int		bss_11eec; // Used by: Controls_MenuInit
char	bss_11ef0[32];
int		bss_11f10; // Used by: Controls_MenuInit
int		bss_11f14; // Used by: Controls_MenuInit
int		bss_11f18;
int		bss_11f1c; // Used by: Controls_MenuInit
int		bss_11f20; // Used by: Controls_MenuInit
int		bss_11f24;
int		bss_11f28; // Used by: Controls_MenuInit
char	bss_11f2c[32];
int		bss_11f4c; // Used by: Controls_MenuInit
int		bss_11f50; // Used by: Controls_MenuInit
int		bss_11f54;
int		bss_11f58; // Used by: Controls_MenuInit
int		bss_11f5c; // Used by: Controls_MenuInit
int		bss_11f60;
int		bss_11f64; // Used by: Controls_MenuInit
char	bss_11f68[32];
int		bss_11f88; // Used by: Controls_MenuInit
int		bss_11f8c; // Used by: Controls_MenuInit
int		bss_11f90;
int		bss_11f94; // Used by: Controls_MenuInit
int		bss_11f98; // Used by: Controls_MenuInit
int		bss_11f9c;
int		bss_11fa0; // Used by: Controls_MenuInit
char	bss_11fa4[32];
int		bss_11fc4; // Used by: Controls_MenuInit
int		bss_11fc8; // Used by: Controls_MenuInit
int		bss_11fcc;
int		bss_11fd0; // Used by: Controls_MenuInit
int		bss_11fd4; // Used by: Controls_MenuInit
int		bss_11fd8;
int		bss_11fdc; // Used by: Controls_MenuInit
char	bss_11fe0[32];
int		bss_12000; // Used by: Controls_MenuInit
int		bss_12004; // Used by: Controls_MenuInit
int		bss_12008;
int		bss_1200c; // Used by: Controls_MenuInit
int		bss_12010; // Used by: Controls_MenuInit
int		bss_12014;
int		bss_12018; // Used by: Controls_MenuInit
char	bss_1201c[32];
int		bss_1203c; // Used by: Controls_MenuInit
int		bss_12040; // Used by: Controls_MenuInit
int		bss_12044;
int		bss_12048; // Used by: Controls_MenuInit
int		bss_1204c; // Used by: Controls_MenuInit
int		bss_12050;
int		bss_12054; // Used by: Controls_MenuInit
char	bss_12058[32];
int		bss_12078; // Used by: Controls_MenuInit
int		bss_1207c; // Used by: Controls_MenuInit
int		bss_12080;
int		bss_12084; // Used by: Controls_MenuInit
int		bss_12088; // Used by: Controls_MenuInit
int		bss_1208c;
int		bss_12090; // Used by: Controls_MenuInit
char	bss_12094[32];
int		bss_120b4; // Used by: Controls_MenuInit
int		bss_120b8; // Used by: Controls_MenuInit
int		bss_120bc;
int		bss_120c0; // Used by: Controls_MenuInit
int		bss_120c4; // Used by: Controls_MenuInit
int		bss_120c8;
int		bss_120cc; // Used by: Controls_MenuInit
char	bss_120d0[32];
int		bss_120f0; // Used by: Controls_MenuInit
int		bss_120f4; // Used by: Controls_MenuInit
int		bss_120f8;
int		bss_120fc; // Used by: Controls_MenuInit
int		bss_12100; // Used by: Controls_MenuInit
int		bss_12104;
int		bss_12108; // Used by: Controls_MenuInit
char	bss_1210c[32];
int		bss_1212c; // Used by: Controls_MenuInit
int		bss_12130; // Used by: Controls_MenuInit
int		bss_12134;
int		bss_12138; // Used by: Controls_MenuInit
int		bss_1213c; // Used by: Controls_MenuInit
int		bss_12140;
int		bss_12144; // Used by: Controls_MenuInit
char	bss_12148[32];
int		bss_12168; // Used by: Controls_MenuInit
int		bss_1216c; // Used by: Controls_MenuInit
int		bss_12170;
int		bss_12174; // Used by: Controls_MenuInit
int		bss_12178; // Used by: Controls_MenuInit
int		bss_1217c;
int		bss_12180; // Used by: Controls_MenuInit
char	bss_12184[32];
int		bss_121a4; // Used by: Controls_MenuInit
int		bss_121a8; // Used by: Controls_MenuInit
int		bss_121ac;
int		bss_121b0; // Used by: Controls_MenuInit
int		bss_121b4; // Used by: Controls_MenuInit
int		bss_121b8; // Used by: Controls_MenuInit
int		bss_121bc; // Used by: Controls_MenuInit
int		bss_121c0; // Used by: Controls_MenuInit
char	bss_121c4[28];
int		bss_121e0; // Used by: Controls_MenuInit
int		bss_121e4; // Used by: Controls_MenuInit
int		bss_121e8; // Used by: Controls_MenuInit
int		bss_121ec;
int		bss_121f0; // Used by: Controls_SetDefaults, Controls_SetConfig, Controls_GetConfig
int		bss_121f4; // Used by: Controls_MenuInit
int		bss_121f8;
int		bss_121fc; // Used by: Controls_MenuInit
char	bss_12200[32];
int		bss_12220; // Used by: Controls_MenuInit
int		bss_12224; // Used by: Controls_MenuInit
int		bss_12228;
int		bss_1222c; // Used by: Controls_MenuInit
int		bss_12230; // Used by: Controls_MenuInit
int		bss_12234;
int		bss_12238; // Used by: Controls_MenuInit
char	bss_1223c[32];
int		bss_1225c; // Used by: Controls_MenuInit
int		bss_12260; // Used by: Controls_MenuInit
int		bss_12264;
int		bss_12268; // Used by: Controls_MenuInit
int		bss_1226c; // Used by: Controls_MenuInit
int		bss_12270;
int		bss_12274; // Used by: Controls_MenuInit
char	bss_12278[32];
int		bss_12298; // Used by: Controls_MenuInit
int		bss_1229c; // Used by: Controls_MenuInit
int		bss_122a0;
int		bss_122a4; // Used by: Controls_MenuInit
int		bss_122a8; // Used by: Controls_MenuInit
int		bss_122ac; // Used by: Controls_MenuInit
int		bss_122b0; // Used by: Controls_MenuInit
int		bss_122b4; // Used by: Controls_MenuInit
char	bss_122b8[28];
int		bss_122d4; // Used by: Controls_MenuInit
int		bss_122d8; // Used by: Controls_MenuInit
int		bss_122dc; // Used by: Controls_MenuInit
int		bss_122e0;
int		bss_122e4; // Used by: Controls_SetDefaults, Controls_SetConfig, Controls_GetConfig
int		bss_122e8; // Used by: Controls_MenuInit
int		bss_122ec; // Used by: Controls_MenuInit
int		bss_122f0; // Used by: Controls_MenuInit
int		bss_122f4; // Used by: Controls_MenuInit
char	bss_122f8[28];
int		bss_12314; // Used by: Controls_MenuInit
int		bss_12318; // Used by: Controls_MenuInit
int		bss_1231c; // Used by: Controls_MenuInit
int		bss_12320;
int		bss_12324; // Used by: Controls_MenuInit
int		bss_12328; // Used by: Controls_MenuInit
int		bss_1232c; // Used by: Controls_SetDefaults, Controls_SetConfig, Controls_GetConfig
int		bss_12330;
int		bss_12334; // Used by: Controls_MenuInit
int		bss_12338; // Used by: Controls_MenuInit
int		bss_1233c; // Used by: Controls_MenuInit
int		bss_12340; // Used by: Controls_MenuInit
char	bss_12344[28];
int		bss_12360; // Used by: Controls_MenuInit
int		bss_12364; // Used by: Controls_MenuInit
int		bss_12368; // Used by: Controls_MenuInit
int		bss_1236c;
int		bss_12370; // Used by: Controls_SetDefaults, Controls_SetConfig, Controls_GetConfig
int		bss_12374; // Used by: Controls_MenuInit
int		bss_12378; // Used by: Controls_MenuInit
int		bss_1237c; // Used by: Controls_MenuInit
int		bss_12380; // Used by: Controls_MenuInit
char	bss_12384[28];
int		bss_123a0; // Used by: Controls_MenuInit
int		bss_123a4; // Used by: Controls_MenuInit
int		bss_123a8; // Used by: Controls_MenuInit
int		bss_123ac;
int		bss_123b0; // Used by: Controls_SetDefaults, Controls_SetConfig, Controls_GetConfig
int		bss_123b4; // Used by: Controls_MenuInit
int		bss_123b8;
int		bss_123bc; // Used by: Controls_MenuInit
char	bss_123c0[32];
int		bss_123e0; // Used by: Controls_MenuInit
int		bss_123e4; // Used by: Controls_MenuInit
int		bss_123e8;
int		bss_123ec; // Used by: Controls_MenuInit
int		bss_123f0; // Used by: Controls_MenuInit
int		bss_123f4; // Used by: Controls_MenuInit
int		bss_123f8; // Used by: Controls_MenuInit
int		bss_123fc; // Used by: Controls_MenuInit
char	bss_12400[28];
int		bss_1241c; // Used by: Controls_MenuInit
int		bss_12420; // Used by: Controls_MenuInit
int		bss_12424; // Used by: Controls_MenuInit
int		bss_12428;
int		bss_1242c; // Used by: Controls_SetDefaults, Controls_SetConfig, Controls_GetConfig
int		bss_12430; // Used by: Controls_MenuInit
int		bss_12434;
int		bss_12438; // Used by: Controls_MenuInit
char	bss_1243c[32];
int		bss_1245c; // Used by: Controls_MenuInit
int		bss_12460; // Used by: Controls_MenuInit
int		bss_12464;
int		bss_12468; // Used by: Controls_MenuInit
char	bss_1246c[1132];
int		bss_128d8; // Used by: Controls_MenuEvent, Controls_ResetDefaults_Action, Controls_MenuKey
int		bss_128dc; // Used by: Controls_MenuInit
int		bss_128e0;
int		bss_128e4; // Used by: Controls_MenuInit
char	bss_128e8[32];
int		bss_12908; // Used by: Controls_MenuInit
int		bss_1290c; // Used by: Controls_MenuInit
int		bss_12910;
int		bss_12914; // Used by: Controls_MenuInit
int		bss_12918; // Used by: Controls_MenuInit
int		bss_1291c;
int		bss_12920; // Used by: Controls_MenuInit
char	bss_12924[32];
int		bss_12944; // Used by: Controls_MenuInit
int		bss_12948; // Used by: Controls_MenuInit
int		bss_1294c;
int		bss_12950; // Used by: Controls_MenuInit
int		bss_12954; // Used by: Controls_MenuInit
int		bss_12958;
int		bss_1295c; // Used by: Controls_MenuInit
char	bss_12960[32];
int		bss_12980; // Used by: Controls_MenuInit
int		bss_12984; // Used by: Controls_MenuInit
int		bss_12988;
int		bss_1298c; // Used by: Controls_MenuInit
int		bss_12990; // Used by: Controls_MenuInit
int		bss_12994;
int		bss_12998; // Used by: Controls_MenuInit
char	bss_1299c[32];
int		bss_129bc; // Used by: Controls_MenuInit
int		bss_129c0; // Used by: Controls_MenuInit
int		bss_129c4;
int		bss_129c8; // Used by: Controls_MenuInit
int		bss_129cc; // Used by: Controls_MenuInit
int		bss_129d0;
int		bss_129d4; // Used by: Controls_MenuInit
char	bss_129d8[32];
int		bss_129f8; // Used by: Controls_MenuInit
int		bss_129fc; // Used by: Controls_MenuInit
int		bss_12a00;
int		bss_12a04; // Used by: Controls_MenuInit
int		bss_12a08; // Used by: Controls_MenuInit
int		bss_12a0c; // Used by: Controls_MenuInit
int		bss_12a10; // Used by: Controls_MenuInit
int		bss_12a14; // Used by: Controls_MenuInit
char	bss_12a18[28];
int		bss_12a34; // Used by: Controls_MenuInit
int		bss_12a38; // Used by: Controls_MenuInit
int		bss_12a3c; // Used by: Controls_MenuInit
int		bss_12a40;
int		bss_12a44; // Used by: Controls_SetDefaults, Controls_SetConfig, Controls_GetConfig
int		bss_12a48; // Used by: Controls_MenuInit
int		bss_12a4c; // Used by: Controls_MenuInit
int		bss_12a50; // Used by: Controls_MenuInit
int		bss_12a54; // Used by: Controls_MenuInit
char	bss_12a58[28];
int		bss_12a74; // Used by: Controls_MenuInit
int		bss_12a78; // Used by: Controls_MenuInit
int		bss_12a7c; // Used by: Controls_MenuInit
int		bss_12a80;
int		bss_12a84; // Used by: Controls_MenuInit
int		bss_12a88; // Used by: Controls_MenuInit
int		bss_12a8c; // Used by: Controls_SetDefaults, Controls_SetConfig, Controls_GetConfig
int		bss_12a90;
int		bss_12a94; // Used by: Controls_MenuInit, Controls_MenuEvent, Controls_Update
int		bss_12a98; // Used by: Controls_ActionEvent, Controls_MenuKey, Controls_DrawKeyBinding, Controls_Update
char	bss_12a9c[64];
int		bss_12adc; // Used by: Controls_UpdateModel
int		bss_12ae0; // Used by: Controls_UpdateModel
int		bss_12ae4; // Used by: Controls_UpdateModel
int		bss_12ae8; // Used by: Controls_UpdateModel
int		bss_12aec; // Used by: Controls_UpdateModel
int		bss_12af0; // Used by: Controls_UpdateModel
int		bss_12af4; // Used by: Controls_UpdateModel
int		bss_12af8; // Used by: Controls_UpdateModel
int		bss_12afc; // Used by: Controls_UpdateModel
int		bss_12b00; // Used by: Controls_UpdateModel
int		bss_12b04; // Used by: Controls_MenuInit
int		bss_12b08; // Used by: Controls_MenuInit
int		bss_12b0c; // Used by: Controls_MenuInit
int		bss_12b10; // Used by: Controls_MenuInit
int		bss_12b14; // Used by: Controls_MenuInit
char	bss_12b18[24];
int		bss_12b30; // Used by: Controls_MenuInit
int		bss_12b34; // Used by: Controls_MenuInit
char	bss_12b38[8];
int		bss_12b40; // Used by: Controls_MenuInit
char	bss_12b44[12];
int		bss_12b50; // Used by: Controls_MenuInit
int		bss_12b54; // Used by: Controls_MenuInit
int		bss_12b58;
int		bss_12b5c; // Used by: Controls_MenuInit
char	bss_12b60[8];
int		bss_12b68; // Used by: Controls_MenuInit
int		bss_12b6c; // Used by: Controls_MenuInit
char	bss_12b70[24];
int		bss_12b88; // Used by: Controls_MenuInit
char	bss_12b8c[12];
int		bss_12b98; // Used by: Controls_MenuInit
int		bss_12b9c; // Used by: Controls_MenuInit
int		bss_12ba0; // Used by: Controls_MenuInit
char	s_credits[268];
int		bss_12cb0; // Used by: UI_CreditMenu, UI_CreditMenu_Key
int		bss_12cb4; // Used by: UI_CreditMenu
int		bss_12cb8;
int		bss_12cbc; // Used by: UI_CreditMenu
int		bss_12cc0;
int		bss_12cc4; // Used by: UI_CreditMenu_Key
char	s_demos[276];
int		bss_12ddc; // Used by: Demos_MenuInit
int		bss_12de0; // Used by: Demos_MenuInit
int		bss_12de4;
int		bss_12de8; // Used by: Demos_MenuInit
char	bss_12dec[8];
int		bss_12df4; // Used by: Demos_MenuInit
int		bss_12df8; // Used by: Demos_MenuInit
char	bss_12dfc[40];
int		bss_12e24; // Used by: Demos_MenuInit
int		bss_12e28; // Used by: Demos_MenuInit
int		bss_12e2c; // Used by: Demos_MenuInit
int		bss_12e30; // Used by: Demos_MenuInit
int		bss_12e34; // Used by: Demos_MenuInit
int		bss_12e38;
int		bss_12e3c; // Used by: Demos_MenuInit
int		bss_12e40; // Used by: Demos_MenuInit
char	bss_12e44[24];
int		bss_12e5c; // Used by: Demos_MenuInit
char	bss_12e60[28];
int		bss_12e7c; // Used by: Demos_MenuInit
int		bss_12e80; // Used by: Demos_MenuInit
int		bss_12e84;
int		bss_12e88; // Used by: Demos_MenuInit
int		bss_12e8c; // Used by: Demos_MenuInit
int		bss_12e90;
int		bss_12e94; // Used by: Demos_MenuInit
int		bss_12e98; // Used by: Demos_MenuInit
char	bss_12e9c[24];
int		bss_12eb4; // Used by: Demos_MenuInit
char	bss_12eb8[28];
int		bss_12ed4; // Used by: Demos_MenuInit
int		bss_12ed8; // Used by: Demos_MenuInit
int		bss_12edc;
int		bss_12ee0; // Used by: Demos_MenuInit
int		bss_12ee4;
int		bss_12ee8; // Used by: Demos_MenuInit
int		bss_12eec; // Used by: Demos_MenuInit
int		bss_12ef0; // Used by: Demos_MenuInit
char	bss_12ef4[24];
int		bss_12f0c; // Used by: Demos_MenuInit
int		bss_12f10; // Used by: Demos_MenuInit
char	bss_12f14[12];
int		bss_12f20; // Used by: Demos_MenuEvent
int		bss_12f24; // Used by: Demos_MenuInit
int		bss_12f28;
int		bss_12f2c; // Used by: Demos_MenuInit, Demos_MenuEvent
int		bss_12f30; // Used by: Demos_MenuInit
int		bss_12f34; // Used by: Demos_MenuInit
int		bss_12f38; // Used by: Demos_MenuInit
int		bss_12f3c;
int		bss_12f40; // Used by: Demos_MenuInit
int		bss_12f44; // Used by: Demos_MenuInit
int		bss_12f48;
int		bss_12f4c; // Used by: Demos_MenuInit
int		bss_12f50; // Used by: Demos_MenuInit
char	bss_12f54[24];
int		bss_12f6c; // Used by: Demos_MenuInit
char	bss_12f70[28];
int		bss_12f8c; // Used by: Demos_MenuInit
int		bss_12f90; // Used by: Demos_MenuInit
int		bss_12f94;
int		bss_12f98; // Used by: Demos_MenuInit
int		bss_12f9c;
int		bss_12fa0; // Used by: Demos_MenuInit
int		bss_12fa4; // Used by: Demos_MenuInit
int		bss_12fa8; // Used by: Demos_MenuInit
char	bss_12fac[24];
int		bss_12fc4; // Used by: Demos_MenuInit
int		bss_12fc8; // Used by: Demos_MenuInit
char	bss_12fcc[8];
int		bss_12fd4; // Used by: Demos_MenuInit
char	bss_12fd8[12];
int		bss_12fe4; // Used by: Demos_MenuInit
int		bss_12fe8; // Used by: Demos_MenuInit
int		bss_12fec;
int		bss_12ff0; // Used by: Demos_MenuInit
int		bss_12ff4;
int		bss_12ff8; // Used by: Demos_MenuInit
int		bss_12ffc; // Used by: Demos_MenuInit
int		bss_13000; // Used by: Demos_MenuInit
char	bss_13004[24];
int		bss_1301c; // Used by: Demos_MenuInit
int		bss_13020; // Used by: Demos_MenuInit
char	bss_13024[8];
int		bss_1302c; // Used by: Demos_MenuInit
char	bss_13030[12];
int		bss_1303c; // Used by: Demos_MenuInit
int		bss_13040; // Used by: Demos_MenuInit
int		bss_13044;
int		bss_13048; // Used by: Demos_MenuInit
int		bss_1304c; // Used by: Demos_MenuInit
int		bss_13050; // Used by: Demos_MenuInit
int		bss_13054; // Used by: Demos_MenuInit
int		bss_13058; // Used by: Demos_MenuInit
char	bss_1305c[24];
int		bss_13074; // Used by: Demos_MenuInit
int		bss_13078; // Used by: Demos_MenuInit
char	bss_1307c[8];
int		bss_13084; // Used by: Demos_MenuInit
char	bss_13088[12];
int		bss_13094; // Used by: Demos_MenuInit
int		bss_13098; // Used by: Demos_MenuInit
int		bss_1309c;
int		bss_130a0; // Used by: Demos_MenuInit
int		bss_130a4; // Used by: Demos_MenuInit
int		bss_130a8; // Used by: Demos_MenuInit
int		bss_130ac; // Used by: Demos_MenuInit
int		bss_130b0; // Used by: Demos_MenuInit
char	bss_130b4[24];
int		bss_130cc; // Used by: Demos_MenuInit
int		bss_130d0; // Used by: Demos_MenuInit
char	bss_130d4[8];
int		bss_130dc; // Used by: Demos_MenuInit
char	bss_130e0[12];
int		bss_130ec; // Used by: Demos_MenuInit
int		bss_130f0; // Used by: Demos_MenuInit
int		bss_130f4;
int		bss_130f8; // Used by: Demos_MenuInit
char	bss_130fc[36864];
char	displayOptionsInfo[276];
int		bss_1c210; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c214; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c218;
int		bss_1c21c; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c220[8];
int		bss_1c228; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c22c; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c230[24];
int		bss_1c248; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c24c[12];
int		bss_1c258; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c25c; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c260; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c264; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c268; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c26c;
int		bss_1c270; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c274; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c278[24];
int		bss_1c290; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c294[28];
int		bss_1c2b0; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c2b4; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c2b8;
int		bss_1c2bc; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c2c0; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c2c4;
int		bss_1c2c8; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c2cc; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c2d0[24];
int		bss_1c2e8; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c2ec[28];
int		bss_1c308; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c30c; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c310;
int		bss_1c314; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c318;
int		bss_1c31c; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c320; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c324; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c328[24];
int		bss_1c340; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c344; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c348[8];
int		bss_1c350; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c354; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c358; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c35c; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c360;
int		bss_1c364; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c368; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c36c; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c370[24];
int		bss_1c388; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c38c; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c390[8];
int		bss_1c398; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c39c; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3a0; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3a4; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3a8;
int		bss_1c3ac; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3b0; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3b4; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c3b8[24];
int		bss_1c3d0; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3d4; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c3d8[8];
int		bss_1c3e0; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3e4; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3e8; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3ec; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3f0;
int		bss_1c3f4; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3f8; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c3fc; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c400[24];
int		bss_1c418; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c41c; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c420[8];
int		bss_1c428; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c42c; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c430; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c434; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c438; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c43c; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c440; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c444; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c448[24];
int		bss_1c460; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c464; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c468[8];
int		bss_1c470; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c474; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c478; // Used by: UI_DisplayOptionsMenu_Init, UI_DisplayOptionsMenu_Event
int		bss_1c47c;
int		bss_1c480; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c484; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c488; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c48c; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c490; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c494[24];
int		bss_1c4ac; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c4b0; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c4b4[8];
int		bss_1c4bc; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c4c0; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c4c4; // Used by: UI_DisplayOptionsMenu_Init, UI_DisplayOptionsMenu_Event
int		bss_1c4c8;
int		bss_1c4cc; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c4d0; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c4d4; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c4d8; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c4dc; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c4e0[24];
int		bss_1c4f8; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c4fc; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c500[8];
int		bss_1c508; // Used by: UI_DisplayOptionsMenu_Init
char	bss_1c50c[12];
int		bss_1c518; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c51c; // Used by: UI_DisplayOptionsMenu_Init
int		bss_1c520;
int		outOfMemory; // Used by: UI_LoadBotsFromFile, UI_LoadArenas, UI_InitMemory, UI_Alloc
int		allocPoint; // Used by: UI_InitMemory, UI_Alloc
char	memoryPool[131072];
int		ui_numSpecialSinglePlayerArenas; // Used by: UI_SPUnlock_f, UI_LoadArenas
int		ui_numSinglePlayerArenas; // Used by: UI_SPUnlock_f, UI_GetNumSPTiers, UI_GetNumSPArenas, UI_GetCurrentGame, UI_LoadArenas
char	ui_arenaInfos[4096];
int		ui_numArenas; // Used by: UI_GetNumArenas, UI_GetBestScore, UI_GetSpecialArenaInfo, UI_GetArenaInfoByMap, UI_GetArenaInfoByNumber, UI_LoadArenas
char	ui_botInfos[4096];
int		ui_numBots; // Used by: UI_GetNumBots, UI_GetBotInfoByName, UI_GetBotInfoByNumber, UI_LoadBots
char	s_ingame[276];
int		bss_3e650; // Used by: InGame_MenuInit
int		bss_3e654; // Used by: InGame_MenuInit
int		bss_3e658;
int		bss_3e65c; // Used by: InGame_MenuInit
int		bss_3e660; // Used by: InGame_MenuInit
int		bss_3e664;
int		bss_3e668; // Used by: InGame_MenuInit
int		bss_3e66c; // Used by: InGame_MenuInit
char	bss_3e670[24];
int		bss_3e688; // Used by: InGame_MenuInit
char	bss_3e68c[28];
int		bss_3e6a8; // Used by: InGame_MenuInit
int		bss_3e6ac; // Used by: InGame_MenuInit
int		bss_3e6b0;
int		bss_3e6b4; // Used by: InGame_MenuInit
int		bss_3e6b8;
int		bss_3e6bc; // Used by: InGame_MenuInit
int		bss_3e6c0; // Used by: InGame_MenuInit
int		bss_3e6c4; // Used by: InGame_MenuInit
char	bss_3e6c8[24];
int		bss_3e6e0; // Used by: InGame_MenuInit
int		bss_3e6e4; // Used by: InGame_MenuInit
char	bss_3e6e8[8];
int		bss_3e6f0; // Used by: InGame_MenuInit
int		bss_3e6f4; // Used by: InGame_MenuInit
int		bss_3e6f8; // Used by: InGame_MenuInit
int		bss_3e6fc; // Used by: InGame_MenuInit
int		bss_3e700;
int		bss_3e704; // Used by: InGame_MenuInit
int		bss_3e708; // Used by: InGame_MenuInit
int		bss_3e70c; // Used by: InGame_MenuInit
char	bss_3e710[24];
int		bss_3e728; // Used by: InGame_MenuInit
int		bss_3e72c; // Used by: InGame_MenuInit
char	bss_3e730[8];
int		bss_3e738; // Used by: InGame_MenuInit
int		bss_3e73c; // Used by: InGame_MenuInit
int		bss_3e740; // Used by: InGame_MenuInit
int		bss_3e744; // Used by: InGame_MenuInit
int		bss_3e748;
int		bss_3e74c; // Used by: InGame_MenuInit
int		bss_3e750; // Used by: InGame_MenuInit
int		bss_3e754; // Used by: InGame_MenuInit
char	bss_3e758[24];
int		bss_3e770; // Used by: InGame_MenuInit
int		bss_3e774; // Used by: InGame_MenuInit
char	bss_3e778[8];
int		bss_3e780; // Used by: InGame_MenuInit
int		bss_3e784; // Used by: InGame_MenuInit
int		bss_3e788; // Used by: InGame_MenuInit
int		bss_3e78c; // Used by: InGame_MenuInit
int		bss_3e790;
int		bss_3e794; // Used by: InGame_MenuInit
int		bss_3e798; // Used by: InGame_MenuInit
int		bss_3e79c; // Used by: InGame_MenuInit
char	bss_3e7a0[24];
int		bss_3e7b8; // Used by: InGame_MenuInit
int		bss_3e7bc; // Used by: InGame_MenuInit
char	bss_3e7c0[8];
int		bss_3e7c8; // Used by: InGame_MenuInit
int		bss_3e7cc; // Used by: InGame_MenuInit
int		bss_3e7d0; // Used by: InGame_MenuInit
int		bss_3e7d4; // Used by: InGame_MenuInit
int		bss_3e7d8;
int		bss_3e7dc; // Used by: InGame_MenuInit
int		bss_3e7e0; // Used by: InGame_MenuInit
int		bss_3e7e4; // Used by: InGame_MenuInit
char	bss_3e7e8[24];
int		bss_3e800; // Used by: InGame_MenuInit
int		bss_3e804; // Used by: InGame_MenuInit
char	bss_3e808[8];
int		bss_3e810; // Used by: InGame_MenuInit
int		bss_3e814; // Used by: InGame_MenuInit
int		bss_3e818; // Used by: InGame_MenuInit
int		bss_3e81c; // Used by: InGame_MenuInit
int		bss_3e820;
int		bss_3e824; // Used by: InGame_MenuInit
int		bss_3e828; // Used by: InGame_MenuInit
int		bss_3e82c; // Used by: InGame_MenuInit
char	bss_3e830[24];
int		bss_3e848; // Used by: InGame_MenuInit
int		bss_3e84c; // Used by: InGame_MenuInit
char	bss_3e850[8];
int		bss_3e858; // Used by: InGame_MenuInit
int		bss_3e85c; // Used by: InGame_MenuInit
int		bss_3e860; // Used by: InGame_MenuInit
int		bss_3e864; // Used by: InGame_MenuInit
int		bss_3e868;
int		bss_3e86c; // Used by: InGame_MenuInit
int		bss_3e870; // Used by: InGame_MenuInit
int		bss_3e874; // Used by: InGame_MenuInit
char	bss_3e878[24];
int		bss_3e890; // Used by: InGame_MenuInit
int		bss_3e894; // Used by: InGame_MenuInit
char	bss_3e898[8];
int		bss_3e8a0; // Used by: InGame_MenuInit
int		bss_3e8a4; // Used by: InGame_MenuInit
int		bss_3e8a8; // Used by: InGame_MenuInit
int		bss_3e8ac; // Used by: InGame_MenuInit
int		bss_3e8b0;
int		bss_3e8b4; // Used by: InGame_MenuInit
int		bss_3e8b8; // Used by: InGame_MenuInit
int		bss_3e8bc; // Used by: InGame_MenuInit
char	bss_3e8c0[24];
int		bss_3e8d8; // Used by: InGame_MenuInit
int		bss_3e8dc; // Used by: InGame_MenuInit
char	bss_3e8e0[8];
int		bss_3e8e8; // Used by: InGame_MenuInit
int		bss_3e8ec; // Used by: InGame_MenuInit
int		bss_3e8f0; // Used by: InGame_MenuInit
int		bss_3e8f4; // Used by: InGame_MenuInit
int		bss_3e8f8;
int		bss_3e8fc; // Used by: InGame_MenuInit
int		bss_3e900; // Used by: InGame_MenuInit
int		bss_3e904; // Used by: InGame_MenuInit
char	bss_3e908[24];
int		bss_3e920; // Used by: InGame_MenuInit
int		bss_3e924; // Used by: InGame_MenuInit
char	bss_3e928[8];
int		bss_3e930; // Used by: InGame_MenuInit
int		bss_3e934; // Used by: InGame_MenuInit
int		bss_3e938; // Used by: InGame_MenuInit
int		bss_3e93c; // Used by: InGame_MenuInit
int		bss_3e940;
int		bss_3e944; // Used by: InGame_MenuInit
int		bss_3e948; // Used by: InGame_MenuInit
int		bss_3e94c; // Used by: InGame_MenuInit
char	bss_3e950[24];
int		bss_3e968; // Used by: InGame_MenuInit
int		bss_3e96c; // Used by: InGame_MenuInit
char	bss_3e970[8];
int		bss_3e978; // Used by: InGame_MenuInit
int		bss_3e97c; // Used by: InGame_MenuInit
int		bss_3e980; // Used by: InGame_MenuInit
char	s_configs[276];
int		bss_3ea98; // Used by: LoadConfig_MenuInit
int		bss_3ea9c; // Used by: LoadConfig_MenuInit
int		bss_3eaa0;
int		bss_3eaa4; // Used by: LoadConfig_MenuInit
char	bss_3eaa8[8];
int		bss_3eab0; // Used by: LoadConfig_MenuInit
int		bss_3eab4; // Used by: LoadConfig_MenuInit
char	bss_3eab8[40];
int		bss_3eae0; // Used by: LoadConfig_MenuInit
int		bss_3eae4; // Used by: LoadConfig_MenuInit
int		bss_3eae8; // Used by: LoadConfig_MenuInit
int		bss_3eaec; // Used by: LoadConfig_MenuInit
int		bss_3eaf0; // Used by: LoadConfig_MenuInit
int		bss_3eaf4;
int		bss_3eaf8; // Used by: LoadConfig_MenuInit
int		bss_3eafc; // Used by: LoadConfig_MenuInit
char	bss_3eb00[24];
int		bss_3eb18; // Used by: LoadConfig_MenuInit
char	bss_3eb1c[28];
int		bss_3eb38; // Used by: LoadConfig_MenuInit
int		bss_3eb3c; // Used by: LoadConfig_MenuInit
int		bss_3eb40;
int		bss_3eb44; // Used by: LoadConfig_MenuInit
int		bss_3eb48; // Used by: LoadConfig_MenuInit
int		bss_3eb4c;
int		bss_3eb50; // Used by: LoadConfig_MenuInit
int		bss_3eb54; // Used by: LoadConfig_MenuInit
char	bss_3eb58[24];
int		bss_3eb70; // Used by: LoadConfig_MenuInit
char	bss_3eb74[28];
int		bss_3eb90; // Used by: LoadConfig_MenuInit
int		bss_3eb94; // Used by: LoadConfig_MenuInit
int		bss_3eb98;
int		bss_3eb9c; // Used by: LoadConfig_MenuInit
int		bss_3eba0;
int		bss_3eba4; // Used by: LoadConfig_MenuInit
int		bss_3eba8; // Used by: LoadConfig_MenuInit
int		bss_3ebac; // Used by: LoadConfig_MenuInit
char	bss_3ebb0[24];
int		bss_3ebc8; // Used by: LoadConfig_MenuInit
int		bss_3ebcc; // Used by: LoadConfig_MenuInit
char	bss_3ebd0[12];
int		bss_3ebdc; // Used by: LoadConfig_MenuEvent
int		bss_3ebe0; // Used by: LoadConfig_MenuInit
int		bss_3ebe4;
int		bss_3ebe8; // Used by: LoadConfig_MenuInit, LoadConfig_MenuEvent
int		bss_3ebec; // Used by: LoadConfig_MenuInit
int		bss_3ebf0; // Used by: LoadConfig_MenuInit
int		bss_3ebf4; // Used by: LoadConfig_MenuInit
int		bss_3ebf8;
int		bss_3ebfc; // Used by: LoadConfig_MenuInit
int		bss_3ec00; // Used by: LoadConfig_MenuInit
int		bss_3ec04;
int		bss_3ec08; // Used by: LoadConfig_MenuInit
int		bss_3ec0c; // Used by: LoadConfig_MenuInit
char	bss_3ec10[24];
int		bss_3ec28; // Used by: LoadConfig_MenuInit
char	bss_3ec2c[28];
int		bss_3ec48; // Used by: LoadConfig_MenuInit
int		bss_3ec4c; // Used by: LoadConfig_MenuInit
int		bss_3ec50;
int		bss_3ec54; // Used by: LoadConfig_MenuInit
int		bss_3ec58;
int		bss_3ec5c; // Used by: LoadConfig_MenuInit
int		bss_3ec60; // Used by: LoadConfig_MenuInit
int		bss_3ec64; // Used by: LoadConfig_MenuInit
char	bss_3ec68[24];
int		bss_3ec80; // Used by: LoadConfig_MenuInit
int		bss_3ec84; // Used by: LoadConfig_MenuInit
char	bss_3ec88[8];
int		bss_3ec90; // Used by: LoadConfig_MenuInit
char	bss_3ec94[12];
int		bss_3eca0; // Used by: LoadConfig_MenuInit
int		bss_3eca4; // Used by: LoadConfig_MenuInit
int		bss_3eca8;
int		bss_3ecac; // Used by: LoadConfig_MenuInit
int		bss_3ecb0;
int		bss_3ecb4; // Used by: LoadConfig_MenuInit
int		bss_3ecb8; // Used by: LoadConfig_MenuInit
int		bss_3ecbc; // Used by: LoadConfig_MenuInit
char	bss_3ecc0[24];
int		bss_3ecd8; // Used by: LoadConfig_MenuInit
int		bss_3ecdc; // Used by: LoadConfig_MenuInit
char	bss_3ece0[8];
int		bss_3ece8; // Used by: LoadConfig_MenuInit
char	bss_3ecec[12];
int		bss_3ecf8; // Used by: LoadConfig_MenuInit
int		bss_3ecfc; // Used by: LoadConfig_MenuInit
int		bss_3ed00;
int		bss_3ed04; // Used by: LoadConfig_MenuInit
int		bss_3ed08; // Used by: LoadConfig_MenuInit
int		bss_3ed0c; // Used by: LoadConfig_MenuInit
int		bss_3ed10; // Used by: LoadConfig_MenuInit
int		bss_3ed14; // Used by: LoadConfig_MenuInit
char	bss_3ed18[24];
int		bss_3ed30; // Used by: LoadConfig_MenuInit
int		bss_3ed34; // Used by: LoadConfig_MenuInit
char	bss_3ed38[8];
int		bss_3ed40; // Used by: LoadConfig_MenuInit
char	bss_3ed44[12];
int		bss_3ed50; // Used by: LoadConfig_MenuInit
int		bss_3ed54; // Used by: LoadConfig_MenuInit
int		bss_3ed58;
int		bss_3ed5c; // Used by: LoadConfig_MenuInit
int		bss_3ed60; // Used by: LoadConfig_MenuInit
int		bss_3ed64; // Used by: LoadConfig_MenuInit
int		bss_3ed68; // Used by: LoadConfig_MenuInit
int		bss_3ed6c; // Used by: LoadConfig_MenuInit
char	bss_3ed70[24];
int		bss_3ed88; // Used by: LoadConfig_MenuInit
int		bss_3ed8c; // Used by: LoadConfig_MenuInit
char	bss_3ed90[8];
int		bss_3ed98; // Used by: LoadConfig_MenuInit
char	bss_3ed9c[12];
int		bss_3eda8; // Used by: LoadConfig_MenuInit
int		bss_3edac; // Used by: LoadConfig_MenuInit
char	bss_3edb0[2564];
char	s_errorMessage[268];
int		bss_3f8c0; // Used by: UI_MainMenu
int		bss_3f8c4; // Used by: UI_MainMenu
int		bss_3f8c8; // Used by: UI_MainMenu
int		bss_3f8cc; // Used by: UI_MainMenu
int		bss_3f8d0; // Used by: UI_MainMenu
char	bss_3f8d4[4096];
char	s_main[268];
int		bss_409e0; // Used by: UI_MainMenu
int		bss_409e4;
int		bss_409e8; // Used by: UI_MainMenu
int		bss_409ec; // Used by: UI_MainMenu
int		bss_409f0; // Used by: UI_MainMenu
int		bss_409f4; // Used by: UI_MainMenu
int		bss_409f8;
int		bss_409fc; // Used by: UI_MainMenu
int		bss_40a00; // Used by: UI_MainMenu
int		bss_40a04; // Used by: UI_MainMenu
char	bss_40a08[24];
int		bss_40a20; // Used by: UI_MainMenu
int		bss_40a24; // Used by: UI_MainMenu
char	bss_40a28[8];
int		bss_40a30; // Used by: UI_MainMenu
int		bss_40a34; // Used by: UI_MainMenu
int		bss_40a38; // Used by: UI_MainMenu
int		bss_40a3c; // Used by: UI_MainMenu
int		bss_40a40;
int		bss_40a44; // Used by: UI_MainMenu
int		bss_40a48; // Used by: UI_MainMenu
int		bss_40a4c; // Used by: UI_MainMenu
char	bss_40a50[24];
int		bss_40a68; // Used by: UI_MainMenu
int		bss_40a6c; // Used by: UI_MainMenu
char	bss_40a70[8];
int		bss_40a78; // Used by: UI_MainMenu
int		bss_40a7c; // Used by: UI_MainMenu
int		bss_40a80; // Used by: UI_MainMenu
int		bss_40a84; // Used by: UI_MainMenu
int		bss_40a88;
int		bss_40a8c; // Used by: UI_MainMenu
int		bss_40a90; // Used by: UI_MainMenu
int		bss_40a94; // Used by: UI_MainMenu
char	bss_40a98[24];
int		bss_40ab0; // Used by: UI_MainMenu
int		bss_40ab4; // Used by: UI_MainMenu
char	bss_40ab8[8];
int		bss_40ac0; // Used by: UI_MainMenu
int		bss_40ac4; // Used by: UI_MainMenu
int		bss_40ac8; // Used by: UI_MainMenu
int		bss_40acc; // Used by: UI_MainMenu
int		bss_40ad0;
int		bss_40ad4; // Used by: UI_MainMenu
int		bss_40ad8; // Used by: UI_MainMenu
int		bss_40adc; // Used by: UI_MainMenu
char	bss_40ae0[24];
int		bss_40af8; // Used by: UI_MainMenu
int		bss_40afc; // Used by: UI_MainMenu
char	bss_40b00[8];
int		bss_40b08; // Used by: UI_MainMenu
int		bss_40b0c; // Used by: UI_MainMenu
int		bss_40b10; // Used by: UI_MainMenu
int		bss_40b14; // Used by: UI_MainMenu
int		bss_40b18;
int		bss_40b1c; // Used by: UI_MainMenu
int		bss_40b20; // Used by: UI_MainMenu
int		bss_40b24; // Used by: UI_MainMenu
char	bss_40b28[24];
int		bss_40b40; // Used by: UI_MainMenu
int		bss_40b44; // Used by: UI_MainMenu
char	bss_40b48[8];
int		bss_40b50; // Used by: UI_MainMenu
int		bss_40b54; // Used by: UI_MainMenu
int		bss_40b58; // Used by: UI_MainMenu
int		bss_40b5c; // Used by: UI_MainMenu
int		bss_40b60;
int		bss_40b64; // Used by: UI_MainMenu
int		bss_40b68; // Used by: UI_MainMenu
int		bss_40b6c; // Used by: UI_MainMenu
char	bss_40b70[24];
int		bss_40b88; // Used by: UI_MainMenu
int		bss_40b8c; // Used by: UI_MainMenu
char	bss_40b90[8];
int		bss_40b98; // Used by: UI_MainMenu
int		bss_40b9c; // Used by: UI_MainMenu
int		bss_40ba0; // Used by: UI_MainMenu
int		bss_40ba4; // Used by: UI_MainMenu
int		bss_40ba8;
int		bss_40bac; // Used by: UI_MainMenu
int		bss_40bb0; // Used by: UI_MainMenu
int		bss_40bb4; // Used by: UI_MainMenu
char	bss_40bb8[24];
int		bss_40bd0; // Used by: UI_MainMenu
int		bss_40bd4; // Used by: UI_MainMenu
char	bss_40bd8[8];
int		bss_40be0; // Used by: UI_MainMenu
int		bss_40be4; // Used by: UI_MainMenu
int		bss_40be8; // Used by: UI_MainMenu
int		bss_40bec; // Used by: UI_MainMenu
int		bss_40bf0;
int		bss_40bf4; // Used by: UI_MainMenu
int		bss_40bf8; // Used by: UI_MainMenu
int		bss_40bfc; // Used by: UI_MainMenu
char	bss_40c00[24];
int		bss_40c18; // Used by: UI_MainMenu
int		bss_40c1c; // Used by: UI_MainMenu
char	bss_40c20[8];
int		bss_40c28; // Used by: UI_MainMenu
int		bss_40c2c; // Used by: UI_MainMenu
int		bss_40c30; // Used by: UI_MainMenu
int		bss_40c34; // Used by: Main_MenuDraw, MainMenu_Cache
char	s_mods[276];
int		bss_40d4c; // Used by: UI_Mods_MenuInit
int		bss_40d50; // Used by: UI_Mods_MenuInit
int		bss_40d54;
int		bss_40d58; // Used by: UI_Mods_MenuInit
char	bss_40d5c[8];
int		bss_40d64; // Used by: UI_Mods_MenuInit
int		bss_40d68; // Used by: UI_Mods_MenuInit
char	bss_40d6c[40];
int		bss_40d94; // Used by: UI_Mods_MenuInit
int		bss_40d98; // Used by: UI_Mods_MenuInit
int		bss_40d9c; // Used by: UI_Mods_MenuInit
int		bss_40da0; // Used by: UI_Mods_MenuInit
int		bss_40da4; // Used by: UI_Mods_MenuInit
int		bss_40da8;
int		bss_40dac; // Used by: UI_Mods_MenuInit
int		bss_40db0; // Used by: UI_Mods_MenuInit
char	bss_40db4[24];
int		bss_40dcc; // Used by: UI_Mods_MenuInit
char	bss_40dd0[28];
int		bss_40dec; // Used by: UI_Mods_MenuInit
int		bss_40df0; // Used by: UI_Mods_MenuInit
int		bss_40df4;
int		bss_40df8; // Used by: UI_Mods_MenuInit
int		bss_40dfc; // Used by: UI_Mods_MenuInit
int		bss_40e00;
int		bss_40e04; // Used by: UI_Mods_MenuInit
int		bss_40e08; // Used by: UI_Mods_MenuInit
char	bss_40e0c[24];
int		bss_40e24; // Used by: UI_Mods_MenuInit
char	bss_40e28[28];
int		bss_40e44; // Used by: UI_Mods_MenuInit
int		bss_40e48; // Used by: UI_Mods_MenuInit
int		bss_40e4c;
int		bss_40e50; // Used by: UI_Mods_MenuInit
int		bss_40e54;
int		bss_40e58; // Used by: UI_Mods_MenuInit
int		bss_40e5c; // Used by: UI_Mods_MenuInit
int		bss_40e60; // Used by: UI_Mods_MenuInit
char	bss_40e64[24];
int		bss_40e7c; // Used by: UI_Mods_MenuInit
int		bss_40e80; // Used by: UI_Mods_MenuInit
char	bss_40e84[12];
int		bss_40e90; // Used by: UI_Mods_MenuEvent
int		bss_40e94; // Used by: UI_Mods_LoadMods, UI_Mods_ParseInfos
int		bss_40e98;
int		bss_40e9c; // Used by: UI_Mods_LoadMods, UI_Mods_ParseInfos
int		bss_40ea0; // Used by: UI_Mods_MenuInit
int		bss_40ea4; // Used by: UI_Mods_MenuInit
char	bss_40ea8[8];
int		bss_40eb0; // Used by: UI_Mods_MenuInit
int		bss_40eb4; // Used by: UI_Mods_MenuInit
int		bss_40eb8; // Used by: UI_Mods_MenuInit
int		bss_40ebc; // Used by: UI_Mods_MenuInit
int		bss_40ec0; // Used by: UI_Mods_MenuInit
char	bss_40ec4[24];
int		bss_40edc; // Used by: UI_Mods_MenuInit
int		bss_40ee0; // Used by: UI_Mods_MenuInit
char	bss_40ee4[8];
int		bss_40eec; // Used by: UI_Mods_MenuInit
char	bss_40ef0[12];
int		bss_40efc; // Used by: UI_Mods_MenuInit
int		bss_40f00; // Used by: UI_Mods_MenuInit
int		bss_40f04;
int		bss_40f08; // Used by: UI_Mods_MenuInit
int		bss_40f0c; // Used by: UI_Mods_MenuInit
int		bss_40f10; // Used by: UI_Mods_MenuInit
int		bss_40f14; // Used by: UI_Mods_MenuInit
int		bss_40f18; // Used by: UI_Mods_MenuInit
char	bss_40f1c[24];
int		bss_40f34; // Used by: UI_Mods_MenuInit
int		bss_40f38; // Used by: UI_Mods_MenuInit
char	bss_40f3c[8];
int		bss_40f44; // Used by: UI_Mods_MenuInit
char	bss_40f48[12];
int		bss_40f54; // Used by: UI_Mods_MenuInit
int		bss_40f58; // Used by: UI_Mods_MenuInit
char	bss_40f5c[4100];
int		bss_41f60; // Used by: UI_Mods_LoadMods, UI_Mods_ParseInfos
int		bss_41f64; // Used by: UI_Mods_LoadMods, UI_Mods_ParseInfos
int		bss_41f68; // Used by: UI_Mods_LoadMods
char	bss_41f6c[252];
int		bss_42068; // Used by: UI_Mods_LoadMods
char	bss_4206c[252];
char	networkOptionsInfo[276];
int		bss_4227c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42280; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42284;
int		bss_42288; // Used by: UI_NetworkOptionsMenu_Init
char	bss_4228c[8];
int		bss_42294; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42298; // Used by: UI_NetworkOptionsMenu_Init
char	bss_4229c[24];
int		bss_422b4; // Used by: UI_NetworkOptionsMenu_Init
char	bss_422b8[12];
int		bss_422c4; // Used by: UI_NetworkOptionsMenu_Init
int		bss_422c8; // Used by: UI_NetworkOptionsMenu_Init
int		bss_422cc; // Used by: UI_NetworkOptionsMenu_Init
int		bss_422d0; // Used by: UI_NetworkOptionsMenu_Init
int		bss_422d4; // Used by: UI_NetworkOptionsMenu_Init
int		bss_422d8;
int		bss_422dc; // Used by: UI_NetworkOptionsMenu_Init
int		bss_422e0; // Used by: UI_NetworkOptionsMenu_Init
char	bss_422e4[24];
int		bss_422fc; // Used by: UI_NetworkOptionsMenu_Init
char	bss_42300[28];
int		bss_4231c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42320; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42324;
int		bss_42328; // Used by: UI_NetworkOptionsMenu_Init
int		bss_4232c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42330;
int		bss_42334; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42338; // Used by: UI_NetworkOptionsMenu_Init
char	bss_4233c[24];
int		bss_42354; // Used by: UI_NetworkOptionsMenu_Init
char	bss_42358[28];
int		bss_42374; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42378; // Used by: UI_NetworkOptionsMenu_Init
int		bss_4237c;
int		bss_42380; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42384;
int		bss_42388; // Used by: UI_NetworkOptionsMenu_Init
int		bss_4238c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42390; // Used by: UI_NetworkOptionsMenu_Init
char	bss_42394[24];
int		bss_423ac; // Used by: UI_NetworkOptionsMenu_Init
int		bss_423b0; // Used by: UI_NetworkOptionsMenu_Init
char	bss_423b4[8];
int		bss_423bc; // Used by: UI_NetworkOptionsMenu_Init
int		bss_423c0; // Used by: UI_NetworkOptionsMenu_Init
int		bss_423c4; // Used by: UI_NetworkOptionsMenu_Init
int		bss_423c8; // Used by: UI_NetworkOptionsMenu_Init
int		bss_423cc;
int		bss_423d0; // Used by: UI_NetworkOptionsMenu_Init
int		bss_423d4; // Used by: UI_NetworkOptionsMenu_Init
int		bss_423d8; // Used by: UI_NetworkOptionsMenu_Init
char	bss_423dc[24];
int		bss_423f4; // Used by: UI_NetworkOptionsMenu_Init
int		bss_423f8; // Used by: UI_NetworkOptionsMenu_Init
char	bss_423fc[8];
int		bss_42404; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42408; // Used by: UI_NetworkOptionsMenu_Init
int		bss_4240c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42410; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42414;
int		bss_42418; // Used by: UI_NetworkOptionsMenu_Init
int		bss_4241c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42420; // Used by: UI_NetworkOptionsMenu_Init
char	bss_42424[24];
int		bss_4243c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42440; // Used by: UI_NetworkOptionsMenu_Init
char	bss_42444[8];
int		bss_4244c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42450; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42454; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42458; // Used by: UI_NetworkOptionsMenu_Init
int		bss_4245c;
int		bss_42460; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42464; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42468; // Used by: UI_NetworkOptionsMenu_Init
char	bss_4246c[24];
int		bss_42484; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42488; // Used by: UI_NetworkOptionsMenu_Init
char	bss_4248c[8];
int		bss_42494; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42498; // Used by: UI_NetworkOptionsMenu_Init
int		bss_4249c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_424a0; // Used by: UI_NetworkOptionsMenu_Init
int		bss_424a4; // Used by: UI_NetworkOptionsMenu_Init
int		bss_424a8; // Used by: UI_NetworkOptionsMenu_Init
int		bss_424ac; // Used by: UI_NetworkOptionsMenu_Init
int		bss_424b0; // Used by: UI_NetworkOptionsMenu_Init
char	bss_424b4[24];
int		bss_424cc; // Used by: UI_NetworkOptionsMenu_Init
int		bss_424d0; // Used by: UI_NetworkOptionsMenu_Init
char	bss_424d4[12];
int		bss_424e0; // Used by: UI_NetworkOptionsMenu_Init, UI_NetworkOptionsMenu_Event
char	bss_424e4[8];
int		bss_424ec; // Used by: UI_NetworkOptionsMenu_Init
char	bss_424f0[16];
int		bss_42500; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42504; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42508; // Used by: UI_NetworkOptionsMenu_Init
int		bss_4250c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42510; // Used by: UI_NetworkOptionsMenu_Init
char	bss_42514[24];
int		bss_4252c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42530; // Used by: UI_NetworkOptionsMenu_Init
char	bss_42534[8];
int		bss_4253c; // Used by: UI_NetworkOptionsMenu_Init
char	bss_42540[12];
int		bss_4254c; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42550; // Used by: UI_NetworkOptionsMenu_Init
int		bss_42554;
char	s_options[276];
int		bss_4266c; // Used by: Options_MenuInit
int		bss_42670; // Used by: Options_MenuInit
int		bss_42674;
int		bss_42678; // Used by: Options_MenuInit
char	bss_4267c[8];
int		bss_42684; // Used by: Options_MenuInit
int		bss_42688; // Used by: Options_MenuInit
char	bss_4268c[24];
int		bss_426a4; // Used by: Options_MenuInit
char	bss_426a8[12];
int		bss_426b4; // Used by: Options_MenuInit
int		bss_426b8; // Used by: Options_MenuInit
int		bss_426bc; // Used by: Options_MenuInit
int		bss_426c0; // Used by: Options_MenuInit
int		bss_426c4; // Used by: Options_MenuInit
int		bss_426c8;
int		bss_426cc; // Used by: Options_MenuInit
int		bss_426d0; // Used by: Options_MenuInit
char	bss_426d4[24];
int		bss_426ec; // Used by: Options_MenuInit
char	bss_426f0[28];
int		bss_4270c; // Used by: Options_MenuInit
int		bss_42710; // Used by: Options_MenuInit
int		bss_42714;
int		bss_42718; // Used by: Options_MenuInit
int		bss_4271c; // Used by: Options_MenuInit
int		bss_42720;
int		bss_42724; // Used by: Options_MenuInit
int		bss_42728; // Used by: Options_MenuInit
char	bss_4272c[24];
int		bss_42744; // Used by: Options_MenuInit
char	bss_42748[28];
int		bss_42764; // Used by: Options_MenuInit
int		bss_42768; // Used by: Options_MenuInit
int		bss_4276c;
int		bss_42770; // Used by: Options_MenuInit
int		bss_42774;
int		bss_42778; // Used by: Options_MenuInit
int		bss_4277c; // Used by: Options_MenuInit
int		bss_42780; // Used by: Options_MenuInit
char	bss_42784[24];
int		bss_4279c; // Used by: Options_MenuInit
int		bss_427a0; // Used by: Options_MenuInit
char	bss_427a4[8];
int		bss_427ac; // Used by: Options_MenuInit
int		bss_427b0; // Used by: Options_MenuInit
int		bss_427b4; // Used by: Options_MenuInit
int		bss_427b8; // Used by: Options_MenuInit
int		bss_427bc;
int		bss_427c0; // Used by: Options_MenuInit
int		bss_427c4; // Used by: Options_MenuInit
int		bss_427c8; // Used by: Options_MenuInit
char	bss_427cc[24];
int		bss_427e4; // Used by: Options_MenuInit
int		bss_427e8; // Used by: Options_MenuInit
char	bss_427ec[8];
int		bss_427f4; // Used by: Options_MenuInit
int		bss_427f8; // Used by: Options_MenuInit
int		bss_427fc; // Used by: Options_MenuInit
int		bss_42800; // Used by: Options_MenuInit
int		bss_42804;
int		bss_42808; // Used by: Options_MenuInit
int		bss_4280c; // Used by: Options_MenuInit
int		bss_42810; // Used by: Options_MenuInit
char	bss_42814[24];
int		bss_4282c; // Used by: Options_MenuInit
int		bss_42830; // Used by: Options_MenuInit
char	bss_42834[8];
int		bss_4283c; // Used by: Options_MenuInit
int		bss_42840; // Used by: Options_MenuInit
int		bss_42844; // Used by: Options_MenuInit
int		bss_42848; // Used by: Options_MenuInit
int		bss_4284c;
int		bss_42850; // Used by: Options_MenuInit
int		bss_42854; // Used by: Options_MenuInit
int		bss_42858; // Used by: Options_MenuInit
char	bss_4285c[24];
int		bss_42874; // Used by: Options_MenuInit
int		bss_42878; // Used by: Options_MenuInit
char	bss_4287c[8];
int		bss_42884; // Used by: Options_MenuInit
int		bss_42888; // Used by: Options_MenuInit
int		bss_4288c; // Used by: Options_MenuInit
int		bss_42890; // Used by: Options_MenuInit
int		bss_42894; // Used by: Options_MenuInit
int		bss_42898; // Used by: Options_MenuInit
int		bss_4289c; // Used by: Options_MenuInit
int		bss_428a0; // Used by: Options_MenuInit
char	bss_428a4[24];
int		bss_428bc; // Used by: Options_MenuInit
int		bss_428c0; // Used by: Options_MenuInit
char	bss_428c4[8];
int		bss_428cc; // Used by: Options_MenuInit
char	bss_428d0[12];
int		bss_428dc; // Used by: Options_MenuInit
int		bss_428e0; // Used by: Options_MenuInit
char	bss_428e4[100];
char	s_playermodel[272];
int		bss_42a58; // Used by: PlayerModel_MenuInit
int		bss_42a5c; // Used by: PlayerModel_MenuInit
int		bss_42a60; // Used by: PlayerModel_MenuInit
char	bss_42a64[2820];
int		bss_43568; // Used by: PlayerModel_MenuInit
int		bss_4356c; // Used by: PlayerModel_MenuInit
int		bss_43570;
int		bss_43574; // Used by: PlayerModel_MenuInit
int		bss_43578; // Used by: PlayerModel_MenuInit
char	bss_4357c[24];
int		bss_43594; // Used by: PlayerModel_MenuInit
char	bss_43598[28];
int		bss_435b4; // Used by: PlayerModel_MenuInit
int		bss_435b8; // Used by: PlayerModel_MenuInit
int		bss_435bc;
int		bss_435c0; // Used by: PlayerModel_MenuInit
int		bss_435c4; // Used by: PlayerModel_MenuInit
int		bss_435c8;
int		bss_435cc; // Used by: PlayerModel_MenuInit
int		bss_435d0; // Used by: PlayerModel_MenuInit
char	bss_435d4[24];
int		bss_435ec; // Used by: PlayerModel_MenuInit
char	bss_435f0[28];
int		bss_4360c; // Used by: PlayerModel_MenuInit
int		bss_43610; // Used by: PlayerModel_MenuInit
int		bss_43614;
int		bss_43618; // Used by: PlayerModel_MenuInit
int		bss_4361c; // Used by: PlayerModel_MenuInit
int		bss_43620;
int		bss_43624; // Used by: PlayerModel_MenuInit
int		bss_43628; // Used by: PlayerModel_MenuInit
char	bss_4362c[24];
int		bss_43644; // Used by: PlayerModel_MenuInit
char	bss_43648[28];
int		bss_43664; // Used by: PlayerModel_MenuInit
int		bss_43668; // Used by: PlayerModel_MenuInit
int		bss_4366c;
int		bss_43670; // Used by: PlayerModel_MenuInit
char	bss_43674[8];
int		bss_4367c; // Used by: PlayerModel_MenuInit
int		bss_43680; // Used by: PlayerModel_MenuInit
char	bss_43684[40];
int		bss_436ac; // Used by: PlayerModel_MenuInit
int		bss_436b0; // Used by: PlayerModel_MenuInit
int		bss_436b4; // Used by: PlayerModel_MenuInit
int		bss_436b8; // Used by: PlayerModel_MenuInit
int		bss_436bc; // Used by: PlayerModel_MenuInit
int		bss_436c0; // Used by: PlayerModel_MenuInit
int		bss_436c4; // Used by: PlayerModel_MenuInit
int		bss_436c8; // Used by: PlayerModel_MenuInit
char	bss_436cc[24];
int		bss_436e4; // Used by: PlayerModel_MenuInit
int		bss_436e8; // Used by: PlayerModel_MenuInit
char	bss_436ec[8];
int		bss_436f4; // Used by: PlayerModel_MenuInit
char	bss_436f8[12];
int		bss_43704; // Used by: PlayerModel_MenuInit
int		bss_43708; // Used by: PlayerModel_MenuInit
int		bss_4370c;
int		bss_43710; // Used by: PlayerModel_MenuInit
char	bss_43714[8];
int		bss_4371c; // Used by: PlayerModel_MenuInit
int		bss_43720; // Used by: PlayerModel_MenuInit
char	bss_43724[24];
int		bss_4373c; // Used by: PlayerModel_MenuInit
char	bss_43740[8];
int		bss_43748; // Used by: PlayerModel_MenuInit
char	bss_4374c[16];
int		bss_4375c; // Used by: PlayerModel_MenuInit
int		bss_43760; // Used by: PlayerModel_MenuInit
int		bss_43764;
int		bss_43768; // Used by: PlayerModel_MenuInit
int		bss_4376c; // Used by: PlayerModel_MenuInit
int		bss_43770;
int		bss_43774; // Used by: PlayerModel_MenuInit
int		bss_43778; // Used by: PlayerModel_MenuInit
char	bss_4377c[24];
int		bss_43794; // Used by: PlayerModel_MenuInit
char	bss_43798[28];
int		bss_437b4; // Used by: PlayerModel_MenuInit
int		bss_437b8; // Used by: PlayerModel_MenuInit
int		bss_437bc;
int		bss_437c0; // Used by: PlayerModel_MenuInit
int		bss_437c4;
int		bss_437c8; // Used by: PlayerModel_MenuInit
int		bss_437cc; // Used by: PlayerModel_MenuInit
int		bss_437d0; // Used by: PlayerModel_MenuInit
char	bss_437d4[24];
int		bss_437ec; // Used by: PlayerModel_MenuInit
int		bss_437f0; // Used by: PlayerModel_MenuInit
char	bss_437f4[8];
int		bss_437fc; // Used by: PlayerModel_MenuInit
char	bss_43800[12];
int		bss_4380c; // Used by: PlayerModel_MenuInit
int		bss_43810; // Used by: PlayerModel_MenuInit
int		bss_43814;
int		bss_43818; // Used by: PlayerModel_MenuInit
int		bss_4381c;
int		bss_43820; // Used by: PlayerModel_MenuInit
int		bss_43824; // Used by: PlayerModel_MenuInit
int		bss_43828; // Used by: PlayerModel_MenuInit
char	bss_4382c[24];
int		bss_43844; // Used by: PlayerModel_MenuInit
int		bss_43848; // Used by: PlayerModel_MenuInit
char	bss_4384c[8];
int		bss_43854; // Used by: PlayerModel_MenuInit
char	bss_43858[12];
int		bss_43864; // Used by: PlayerModel_MenuInit
int		bss_43868; // Used by: PlayerModel_MenuInit
int		bss_4386c;
int		bss_43870; // Used by: PlayerModel_MenuInit
char	bss_43874[8];
int		bss_4387c; // Used by: PlayerModel_MenuInit
int		bss_43880; // Used by: PlayerModel_MenuInit
char	bss_43884[24];
int		bss_4389c; // Used by: PlayerModel_MenuInit
char	bss_438a0[12];
int		bss_438ac; // Used by: PlayerModel_MenuInit, PlayerModel_SetMenuItems, PlayerModel_PicEvent
int		bss_438b0; // Used by: PlayerModel_MenuInit
int		bss_438b4; // Used by: PlayerModel_MenuInit
int		bss_438b8; // Used by: PlayerModel_MenuInit
char	bss_438bc[8];
int		bss_438c4; // Used by: PlayerModel_MenuInit
int		bss_438c8; // Used by: PlayerModel_MenuInit
char	bss_438cc[24];
int		bss_438e4; // Used by: PlayerModel_MenuInit
char	bss_438e8[12];
int		bss_438f4; // Used by: PlayerModel_MenuInit, PlayerModel_SetMenuItems, PlayerModel_PicEvent
int		bss_438f8; // Used by: PlayerModel_MenuInit
int		bss_438fc; // Used by: PlayerModel_MenuInit
int		bss_43900; // Used by: PlayerModel_MenuInit
char	bss_43904[8];
int		bss_4390c; // Used by: PlayerModel_MenuInit
int		bss_43910; // Used by: PlayerModel_MenuInit
char	bss_43914[24];
int		bss_4392c; // Used by: PlayerModel_MenuInit
char	bss_43930[12];
int		bss_4393c; // Used by: PlayerModel_MenuInit, PlayerModel_SetMenuItems
int		bss_43940; // Used by: PlayerModel_MenuInit
int		bss_43944; // Used by: PlayerModel_MenuInit
char	bss_43948[1132];
int		bss_43db4; // Used by: PlayerModel_Cache, PlayerModel_SetMenuItems, PlayerModel_BuildList, PlayerModel_MenuKey, PlayerModel_UpdateGrid
char	bss_43db8[32768];
int		bss_4bdb8; // Used by: PlayerModel_SetMenuItems, PlayerModel_BuildList, PlayerModel_PicEvent, PlayerModel_MenuKey, PlayerModel_MenuEvent, PlayerModel_UpdateGrid
int		bss_4bdbc; // Used by: PlayerModel_BuildList, PlayerModel_MenuKey, PlayerModel_MenuEvent, PlayerModel_UpdateGrid
char	bss_4bdc0[64];
int		bss_4be00; // Used by: UI_PlayerModelMenu, PlayerModel_SetMenuItems, PlayerModel_PicEvent, PlayerModel_UpdateGrid
int		jumpHeight; // Used by: UI_PlayerInfo_SetInfo, UI_DrawPlayer, UI_LegsSequencing
int		dp_realtime; // Used by: UI_PlayerInfo_SetInfo, UI_DrawPlayer, UI_MachinegunSpinAngle, UI_RunLerpFrame
char	s_playersettings[272];
int		bss_4bf1c; // Used by: PlayerSettings_MenuInit
int		bss_4bf20; // Used by: PlayerSettings_MenuInit
int		bss_4bf24; // Used by: PlayerSettings_MenuInit
int		bss_4bf28;
int		bss_4bf2c; // Used by: PlayerSettings_MenuInit
char	bss_4bf30[8];
int		bss_4bf38; // Used by: PlayerSettings_MenuInit
int		bss_4bf3c; // Used by: PlayerSettings_MenuInit
char	bss_4bf40[40];
int		bss_4bf68; // Used by: PlayerSettings_MenuInit
int		bss_4bf6c; // Used by: PlayerSettings_MenuInit
int		bss_4bf70; // Used by: PlayerSettings_MenuInit
int		bss_4bf74; // Used by: PlayerSettings_MenuInit
int		bss_4bf78; // Used by: PlayerSettings_MenuInit
int		bss_4bf7c;
int		bss_4bf80; // Used by: PlayerSettings_MenuInit
int		bss_4bf84; // Used by: PlayerSettings_MenuInit
char	bss_4bf88[24];
int		bss_4bfa0; // Used by: PlayerSettings_MenuInit
char	bss_4bfa4[28];
int		bss_4bfc0; // Used by: PlayerSettings_MenuInit
int		bss_4bfc4; // Used by: PlayerSettings_MenuInit
int		bss_4bfc8;
int		bss_4bfcc; // Used by: PlayerSettings_MenuInit
int		bss_4bfd0; // Used by: PlayerSettings_MenuInit
int		bss_4bfd4;
int		bss_4bfd8; // Used by: PlayerSettings_MenuInit
int		bss_4bfdc; // Used by: PlayerSettings_MenuInit
char	bss_4bfe0[24];
int		bss_4bff8; // Used by: PlayerSettings_MenuInit
char	bss_4bffc[28];
int		bss_4c018; // Used by: PlayerSettings_MenuInit
int		bss_4c01c; // Used by: PlayerSettings_MenuInit
int		bss_4c020;
int		bss_4c024; // Used by: PlayerSettings_MenuInit
char	bss_4c028[8];
int		bss_4c030; // Used by: PlayerSettings_MenuInit
int		bss_4c034; // Used by: PlayerSettings_MenuInit
char	bss_4c038[24];
int		bss_4c050; // Used by: PlayerSettings_MenuInit
char	bss_4c054[8];
int		bss_4c05c; // Used by: PlayerSettings_MenuInit
char	bss_4c060[16];
int		bss_4c070; // Used by: PlayerSettings_MenuInit
int		bss_4c074; // Used by: PlayerSettings_MenuInit
int		bss_4c078;
int		bss_4c07c; // Used by: PlayerSettings_MenuInit
char	bss_4c080[8];
int		bss_4c088; // Used by: PlayerSettings_MenuInit
int		bss_4c08c; // Used by: PlayerSettings_MenuInit
int		bss_4c090; // Used by: PlayerSettings_MenuInit
int		bss_4c094; // Used by: PlayerSettings_MenuInit
int		bss_4c098; // Used by: PlayerSettings_MenuInit
int		bss_4c09c; // Used by: PlayerSettings_MenuInit
char	bss_4c0a0[8];
int		bss_4c0a8; // Used by: PlayerSettings_MenuInit
char	bss_4c0ac[8];
int		bss_4c0b4; // Used by: PlayerSettings_MenuInit
char	bss_4c0b8[8];
int		bss_4c0c0; // Used by: PlayerSettings_MenuInit
char	bss_4c0c4[256];
int		bss_4c1c4; // Used by: PlayerSettings_MenuInit
int		bss_4c1c8; // Used by: PlayerSettings_MenuInit
int		bss_4c1cc;
int		bss_4c1d0; // Used by: PlayerSettings_MenuInit
int		bss_4c1d4; // Used by: PlayerSettings_MenuInit
int		bss_4c1d8; // Used by: PlayerSettings_MenuInit
int		bss_4c1dc; // Used by: PlayerSettings_MenuInit
int		bss_4c1e0; // Used by: PlayerSettings_MenuInit
int		bss_4c1e4; // Used by: PlayerSettings_MenuInit
int		bss_4c1e8; // Used by: PlayerSettings_MenuInit
char	bss_4c1ec[8];
int		bss_4c1f4; // Used by: PlayerSettings_MenuInit
char	bss_4c1f8[8];
int		bss_4c200; // Used by: PlayerSettings_MenuInit
int		bss_4c204;
int		bss_4c208; // Used by: PlayerSettings_MenuEvent, PlayerSettings_SetMenuItems, PlayerSettings_SaveChanges
int		bss_4c20c; // Used by: PlayerSettings_MenuInit
char	bss_4c210[24];
int		bss_4c228; // Used by: PlayerSettings_MenuInit
int		bss_4c22c;
int		bss_4c230; // Used by: PlayerSettings_MenuInit
int		bss_4c234; // Used by: PlayerSettings_MenuInit
int		bss_4c238; // Used by: PlayerSettings_MenuInit
int		bss_4c23c; // Used by: PlayerSettings_MenuInit
int		bss_4c240; // Used by: PlayerSettings_MenuInit
int		bss_4c244; // Used by: PlayerSettings_MenuInit
int		bss_4c248; // Used by: PlayerSettings_MenuInit
char	bss_4c24c[8];
int		bss_4c254; // Used by: PlayerSettings_MenuInit
char	bss_4c258[8];
int		bss_4c260; // Used by: PlayerSettings_MenuInit
int		bss_4c264;
int		bss_4c268; // Used by: PlayerSettings_SetMenuItems, PlayerSettings_SaveChanges
int		bss_4c26c; // Used by: PlayerSettings_MenuInit
char	bss_4c270[24];
int		bss_4c288; // Used by: PlayerSettings_MenuInit
int		bss_4c28c; // Used by: PlayerSettings_MenuInit
int		bss_4c290; // Used by: PlayerSettings_MenuInit
int		bss_4c294; // Used by: PlayerSettings_MenuInit
int		bss_4c298; // Used by: PlayerSettings_MenuInit
char	bss_4c29c[24];
int		bss_4c2b4; // Used by: PlayerSettings_MenuInit
int		bss_4c2b8; // Used by: PlayerSettings_MenuInit
char	bss_4c2bc[8];
int		bss_4c2c4; // Used by: PlayerSettings_MenuInit
char	bss_4c2c8[12];
int		bss_4c2d4; // Used by: PlayerSettings_MenuInit
int		bss_4c2d8; // Used by: PlayerSettings_MenuInit
int		bss_4c2dc;
int		bss_4c2e0; // Used by: PlayerSettings_MenuInit
int		bss_4c2e4; // Used by: PlayerSettings_MenuInit
int		bss_4c2e8; // Used by: PlayerSettings_MenuInit
int		bss_4c2ec; // Used by: PlayerSettings_MenuInit
int		bss_4c2f0; // Used by: PlayerSettings_MenuInit
char	bss_4c2f4[24];
int		bss_4c30c; // Used by: PlayerSettings_MenuInit
int		bss_4c310; // Used by: PlayerSettings_MenuInit
char	bss_4c314[8];
int		bss_4c31c; // Used by: PlayerSettings_MenuInit
char	bss_4c320[12];
int		bss_4c32c; // Used by: PlayerSettings_MenuInit
int		bss_4c330; // Used by: PlayerSettings_MenuInit
int		bss_4c334;
int		bss_4c338; // Used by: PlayerSettings_MenuInit
char	bss_4c33c[8];
int		bss_4c344; // Used by: PlayerSettings_MenuInit
int		bss_4c348; // Used by: PlayerSettings_MenuInit
char	bss_4c34c[24];
int		bss_4c364; // Used by: PlayerSettings_MenuInit
char	bss_4c368[28];
int		bss_4c384; // Used by: PlayerSettings_MenuInit
int		bss_4c388; // Used by: PlayerSettings_MenuInit
int		bss_4c38c;
int		bss_4c390; // Used by: PlayerSettings_Cache, PlayerSettings_DrawEffects
int		bss_4c394; // Used by: PlayerSettings_Cache
int		bss_4c398; // Used by: PlayerSettings_Cache
int		bss_4c39c; // Used by: PlayerSettings_Cache
int		bss_4c3a0; // Used by: PlayerSettings_Cache
int		bss_4c3a4; // Used by: PlayerSettings_Cache
int		bss_4c3a8; // Used by: PlayerSettings_Cache
int		bss_4c3ac; // Used by: PlayerSettings_Cache
char	bss_4c3b0[1200];
char	s_preferences[276];
int		bss_4c974; // Used by: Preferences_MenuInit
int		bss_4c978; // Used by: Preferences_MenuInit
int		bss_4c97c;
int		bss_4c980; // Used by: Preferences_MenuInit
char	bss_4c984[8];
int		bss_4c98c; // Used by: Preferences_MenuInit
int		bss_4c990; // Used by: Preferences_MenuInit
char	bss_4c994[40];
int		bss_4c9bc; // Used by: Preferences_MenuInit
int		bss_4c9c0; // Used by: Preferences_MenuInit
int		bss_4c9c4; // Used by: Preferences_MenuInit
int		bss_4c9c8; // Used by: Preferences_MenuInit
int		bss_4c9cc; // Used by: Preferences_MenuInit
int		bss_4c9d0;
int		bss_4c9d4; // Used by: Preferences_MenuInit
int		bss_4c9d8; // Used by: Preferences_MenuInit
char	bss_4c9dc[24];
int		bss_4c9f4; // Used by: Preferences_MenuInit
char	bss_4c9f8[28];
int		bss_4ca14; // Used by: Preferences_MenuInit
int		bss_4ca18; // Used by: Preferences_MenuInit
int		bss_4ca1c;
int		bss_4ca20; // Used by: Preferences_MenuInit
int		bss_4ca24; // Used by: Preferences_MenuInit
int		bss_4ca28;
int		bss_4ca2c; // Used by: Preferences_MenuInit
int		bss_4ca30; // Used by: Preferences_MenuInit
char	bss_4ca34[24];
int		bss_4ca4c; // Used by: Preferences_MenuInit
char	bss_4ca50[28];
int		bss_4ca6c; // Used by: Preferences_MenuInit
int		bss_4ca70; // Used by: Preferences_MenuInit
int		bss_4ca74;
int		bss_4ca78; // Used by: Preferences_MenuInit
int		bss_4ca7c; // Used by: Preferences_MenuInit
int		bss_4ca80; // Used by: Preferences_MenuInit
int		bss_4ca84; // Used by: Preferences_MenuInit
int		bss_4ca88; // Used by: Preferences_MenuInit
int		bss_4ca8c; // Used by: Preferences_MenuInit
int		bss_4ca90; // Used by: Preferences_MenuInit
int		bss_4ca94; // Used by: Preferences_MenuInit
int		bss_4ca98; // Used by: Preferences_MenuInit
char	bss_4ca9c[8];
int		bss_4caa4; // Used by: Preferences_MenuInit
int		bss_4caa8; // Used by: Preferences_MenuInit
int		bss_4caac;
int		bss_4cab0; // Used by: Preferences_MenuInit
int		bss_4cab4;
int		bss_4cab8; // Used by: Preferences_Event, Preferences_SetMenuItems
int		bss_4cabc; // Used by: Preferences_MenuInit
char	bss_4cac0[24];
int		bss_4cad8; // Used by: Preferences_MenuInit
int		bss_4cadc; // Used by: Preferences_MenuInit
int		bss_4cae0; // Used by: Preferences_MenuInit
int		bss_4cae4; // Used by: Preferences_MenuInit
int		bss_4cae8; // Used by: Preferences_MenuInit
char	bss_4caec[24];
int		bss_4cb04; // Used by: Preferences_MenuInit
int		bss_4cb08; // Used by: Preferences_MenuInit
char	bss_4cb0c[8];
int		bss_4cb14; // Used by: Preferences_Event, Preferences_SetMenuItems
int		bss_4cb18; // Used by: Preferences_MenuInit
int		bss_4cb1c; // Used by: Preferences_MenuInit
int		bss_4cb20; // Used by: Preferences_MenuInit
int		bss_4cb24; // Used by: Preferences_MenuInit
int		bss_4cb28; // Used by: Preferences_MenuInit
char	bss_4cb2c[24];
int		bss_4cb44; // Used by: Preferences_MenuInit
int		bss_4cb48; // Used by: Preferences_MenuInit
char	bss_4cb4c[8];
int		bss_4cb54; // Used by: Preferences_Event, Preferences_SetMenuItems
int		bss_4cb58; // Used by: Preferences_MenuInit
int		bss_4cb5c; // Used by: Preferences_MenuInit
int		bss_4cb60; // Used by: Preferences_MenuInit
int		bss_4cb64; // Used by: Preferences_MenuInit
int		bss_4cb68; // Used by: Preferences_MenuInit
char	bss_4cb6c[24];
int		bss_4cb84; // Used by: Preferences_MenuInit
int		bss_4cb88; // Used by: Preferences_MenuInit
char	bss_4cb8c[8];
int		bss_4cb94; // Used by: Preferences_Event, Preferences_SetMenuItems
int		bss_4cb98; // Used by: Preferences_MenuInit
int		bss_4cb9c; // Used by: Preferences_MenuInit
int		bss_4cba0; // Used by: Preferences_MenuInit
int		bss_4cba4; // Used by: Preferences_MenuInit
int		bss_4cba8; // Used by: Preferences_MenuInit
char	bss_4cbac[24];
int		bss_4cbc4; // Used by: Preferences_MenuInit
int		bss_4cbc8; // Used by: Preferences_MenuInit
char	bss_4cbcc[8];
int		bss_4cbd4; // Used by: Preferences_Event, Preferences_SetMenuItems
int		bss_4cbd8; // Used by: Preferences_MenuInit
int		bss_4cbdc; // Used by: Preferences_MenuInit
int		bss_4cbe0; // Used by: Preferences_MenuInit
int		bss_4cbe4; // Used by: Preferences_MenuInit
int		bss_4cbe8; // Used by: Preferences_MenuInit
char	bss_4cbec[24];
int		bss_4cc04; // Used by: Preferences_MenuInit
int		bss_4cc08; // Used by: Preferences_MenuInit
char	bss_4cc0c[8];
int		bss_4cc14; // Used by: Preferences_Event, Preferences_SetMenuItems
int		bss_4cc18; // Used by: Preferences_MenuInit
int		bss_4cc1c; // Used by: Preferences_MenuInit
int		bss_4cc20; // Used by: Preferences_MenuInit
int		bss_4cc24; // Used by: Preferences_MenuInit
int		bss_4cc28; // Used by: Preferences_MenuInit
char	bss_4cc2c[24];
int		bss_4cc44; // Used by: Preferences_MenuInit
int		bss_4cc48; // Used by: Preferences_MenuInit
char	bss_4cc4c[8];
int		bss_4cc54; // Used by: Preferences_Event, Preferences_SetMenuItems
int		bss_4cc58; // Used by: Preferences_MenuInit
int		bss_4cc5c; // Used by: Preferences_MenuInit
int		bss_4cc60; // Used by: Preferences_MenuInit
int		bss_4cc64; // Used by: Preferences_MenuInit
int		bss_4cc68; // Used by: Preferences_MenuInit
char	bss_4cc6c[24];
int		bss_4cc84; // Used by: Preferences_MenuInit
int		bss_4cc88; // Used by: Preferences_MenuInit
char	bss_4cc8c[8];
int		bss_4cc94; // Used by: Preferences_Event, Preferences_SetMenuItems
int		bss_4cc98; // Used by: Preferences_MenuInit
int		bss_4cc9c; // Used by: Preferences_MenuInit
int		bss_4cca0; // Used by: Preferences_MenuInit
int		bss_4cca4; // Used by: Preferences_MenuInit
int		bss_4cca8; // Used by: Preferences_MenuInit
char	bss_4ccac[24];
int		bss_4ccc4; // Used by: Preferences_MenuInit
int		bss_4ccc8; // Used by: Preferences_MenuInit
char	bss_4cccc[8];
int		bss_4ccd4; // Used by: Preferences_Event, Preferences_SetMenuItems
int		bss_4ccd8; // Used by: Preferences_MenuInit
int		bss_4ccdc; // Used by: Preferences_MenuInit
int		bss_4cce0; // Used by: Preferences_MenuInit
int		bss_4cce4; // Used by: Preferences_MenuInit
int		bss_4cce8; // Used by: Preferences_MenuInit
char	bss_4ccec[24];
int		bss_4cd04; // Used by: Preferences_MenuInit
int		bss_4cd08; // Used by: Preferences_MenuInit
char	bss_4cd0c[12];
int		bss_4cd18; // Used by: Preferences_Event, Preferences_SetMenuItems
char	bss_4cd1c[8];
int		bss_4cd24; // Used by: Preferences_MenuInit
char	bss_4cd28[16];
int		bss_4cd38; // Used by: Preferences_MenuInit
int		bss_4cd3c; // Used by: Preferences_MenuInit
int		bss_4cd40; // Used by: Preferences_MenuInit
int		bss_4cd44; // Used by: Preferences_MenuInit
int		bss_4cd48; // Used by: Preferences_MenuInit
char	bss_4cd4c[24];
int		bss_4cd64; // Used by: Preferences_MenuInit
int		bss_4cd68; // Used by: Preferences_MenuInit
char	bss_4cd6c[8];
int		bss_4cd74; // Used by: Preferences_Event, Preferences_SetMenuItems
int		bss_4cd78; // Used by: Preferences_MenuInit
int		bss_4cd7c; // Used by: Preferences_MenuInit
int		bss_4cd80; // Used by: Preferences_MenuInit
int		bss_4cd84; // Used by: Preferences_MenuInit
int		bss_4cd88; // Used by: Preferences_MenuInit
char	bss_4cd8c[24];
int		bss_4cda4; // Used by: Preferences_MenuInit
int		bss_4cda8; // Used by: Preferences_MenuInit
char	bss_4cdac[8];
int		bss_4cdb4; // Used by: Preferences_MenuInit
char	bss_4cdb8[12];
int		bss_4cdc4; // Used by: Preferences_MenuInit
int		bss_4cdc8; // Used by: Preferences_MenuInit
char	bss_4cdcc[44];
int		sliderButton_1; // Used by: Menu_Cache, Slider_Draw
int		sliderButton_0; // Used by: Menu_Cache, Slider_Draw
int		sliderBar; // Used by: Menu_Cache, Slider_Draw
int		weaponChangeSound; // Used by: Menu_Cache, UI_DrawPlayer
int		menu_null_sound; // Used by: UI_TeamOrdersMenu_Key, Menu_Cache, ScrollList_Key, ErrorMessage_Key, UI_KeyEvent
int		menu_buzz_sound; // Used by: Menu_Cache, ScrollList_Key, Slider_Key, PlayerModel_MenuKey, MenuField_Key
int		menu_out_sound; // Used by: Menu_Cache, Menu_DefaultKey, Controls_MenuKey, UI_PopMenu
int		menu_move_sound; // Used by: UI_TeamOrdersMenu_Key, ArenaServers_MenuKey, Menu_Cache, Menu_DefaultKey, Menu_ActivateItem, ScrollList_Key, SpinControl_Key, Slider_Key, RadioButton_Key, PlayerModel_MenuKey, UI_MouseEvent
int		menu_in_sound; // Used by: Menu_Cache, UI_Refresh
char	removeBotsMenuInfo[276];
int		bss_4cf30; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cf34; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cf38;
int		bss_4cf3c; // Used by: UI_RemoveBotsMenu_Init
char	bss_4cf40[8];
int		bss_4cf48; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cf4c; // Used by: UI_RemoveBotsMenu_Init
char	bss_4cf50[40];
int		bss_4cf78; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cf7c; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cf80; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cf84; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cf88; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cf8c;
int		bss_4cf90; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cf94; // Used by: UI_RemoveBotsMenu_Init
char	bss_4cf98[24];
int		bss_4cfb0; // Used by: UI_RemoveBotsMenu_Init
char	bss_4cfb4[28];
int		bss_4cfd0; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cfd4; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cfd8;
int		bss_4cfdc; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cfe0; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cfe4;
int		bss_4cfe8; // Used by: UI_RemoveBotsMenu_Init
int		bss_4cfec; // Used by: UI_RemoveBotsMenu_Init
char	bss_4cff0[24];
int		bss_4d008; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d00c[28];
int		bss_4d028; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d02c; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d030;
int		bss_4d034; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d038;
int		bss_4d03c; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d040; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d044; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d048[24];
int		bss_4d060; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d064; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d068[8];
int		bss_4d070; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d074[12];
int		bss_4d080; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d084; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d088;
int		bss_4d08c; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d090;
int		bss_4d094; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d098; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d09c; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d0a0[24];
int		bss_4d0b8; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d0bc; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d0c0[8];
int		bss_4d0c8; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d0cc[12];
int		bss_4d0d8; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d0dc; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d0e0[72];
int		bss_4d128; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d12c[432];
int		bss_4d2dc; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d2e0; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d2e4; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d2e8; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d2ec; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d2f0[24];
int		bss_4d308; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d30c; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d310[8];
int		bss_4d318; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d31c[12];
int		bss_4d328; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d32c; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d330;
int		bss_4d334; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d338; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d33c; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d340; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d344; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d348[24];
int		bss_4d360; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d364; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d368[8];
int		bss_4d370; // Used by: UI_RemoveBotsMenu_Init
char	bss_4d374[12];
int		bss_4d380; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d384; // Used by: UI_RemoveBotsMenu_Init
int		bss_4d388;
int		bss_4d38c; // Used by: UI_RemoveBotsMenu_Init, UI_RemoveBotsMenu_GetBots, UI_RemoveBotsMenu_DownEvent, UI_RemoveBotsMenu_SetBotNames
int		bss_4d390; // Used by: UI_RemoveBotsMenu_Init, UI_RemoveBotsMenu_DownEvent, UI_RemoveBotsMenu_UpEvent, UI_RemoveBotsMenu_DeleteEvent, UI_RemoveBotsMenu_SetBotNames
int		bss_4d394; // Used by: UI_RemoveBotsMenu_Init, UI_RemoveBotsMenu_BotEvent, UI_RemoveBotsMenu_DeleteEvent
char	bss_4d398[4320];
char	saveConfig[276];
int		bss_4e58c; // Used by: UI_SaveConfigMenu_Init
int		bss_4e590; // Used by: UI_SaveConfigMenu_Init
int		bss_4e594;
int		bss_4e598; // Used by: UI_SaveConfigMenu_Init
char	bss_4e59c[8];
int		bss_4e5a4; // Used by: UI_SaveConfigMenu_Init
int		bss_4e5a8; // Used by: UI_SaveConfigMenu_Init
char	bss_4e5ac[40];
int		bss_4e5d4; // Used by: UI_SaveConfigMenu_Init
int		bss_4e5d8; // Used by: UI_SaveConfigMenu_Init
int		bss_4e5dc; // Used by: UI_SaveConfigMenu_Init
int		bss_4e5e0; // Used by: UI_SaveConfigMenu_Init
int		bss_4e5e4; // Used by: UI_SaveConfigMenu_Init
int		bss_4e5e8;
int		bss_4e5ec; // Used by: UI_SaveConfigMenu_Init
int		bss_4e5f0; // Used by: UI_SaveConfigMenu_Init
char	bss_4e5f4[24];
int		bss_4e60c; // Used by: UI_SaveConfigMenu_Init
char	bss_4e610[28];
int		bss_4e62c; // Used by: UI_SaveConfigMenu_Init
int		bss_4e630; // Used by: UI_SaveConfigMenu_Init
int		bss_4e634;
int		bss_4e638; // Used by: UI_SaveConfigMenu_Init
char	bss_4e63c[8];
int		bss_4e644; // Used by: UI_SaveConfigMenu_Init
int		bss_4e648; // Used by: UI_SaveConfigMenu_Init
int		bss_4e64c; // Used by: UI_SaveConfigMenu_Init
int		bss_4e650; // Used by: UI_SaveConfigMenu_Init
int		bss_4e654; // Used by: UI_SaveConfigMenu_Init
int		bss_4e658; // Used by: UI_SaveConfigMenu_Init
char	bss_4e65c[8];
int		bss_4e664; // Used by: UI_SaveConfigMenu_Init
char	bss_4e668[8];
int		bss_4e670; // Used by: UI_SaveConfigMenu_Init
char	bss_4e674[8];
int		bss_4e67c; // Used by: UI_SaveConfigMenu_Init
char	bss_4e680[256]; // Used by: UI_SaveConfigMenu_SaveEvent
int		bss_4e780; // Used by: UI_SaveConfigMenu_Init
int		bss_4e784; // Used by: UI_SaveConfigMenu_Init
int		bss_4e788; // Used by: UI_SaveConfigMenu_Init
int		bss_4e78c; // Used by: UI_SaveConfigMenu_Init
int		bss_4e790; // Used by: UI_SaveConfigMenu_Init
int		bss_4e794; // Used by: UI_SaveConfigMenu_Init
char	bss_4e798[24];
int		bss_4e7b0; // Used by: UI_SaveConfigMenu_Init
int		bss_4e7b4; // Used by: UI_SaveConfigMenu_Init
char	bss_4e7b8[8];
int		bss_4e7c0; // Used by: UI_SaveConfigMenu_Init
char	bss_4e7c4[12];
int		bss_4e7d0; // Used by: UI_SaveConfigMenu_Init
int		bss_4e7d4; // Used by: UI_SaveConfigMenu_Init
int		bss_4e7d8;
int		bss_4e7dc; // Used by: UI_SaveConfigMenu_Init
int		bss_4e7e0; // Used by: UI_SaveConfigMenu_Init
int		bss_4e7e4; // Used by: UI_SaveConfigMenu_Init
int		bss_4e7e8; // Used by: UI_SaveConfigMenu_Init
int		bss_4e7ec; // Used by: UI_SaveConfigMenu_Init
char	bss_4e7f0[24];
int		bss_4e808; // Used by: UI_SaveConfigMenu_Init
int		bss_4e80c; // Used by: UI_SaveConfigMenu_Init
char	bss_4e810[8];
int		bss_4e818; // Used by: UI_SaveConfigMenu_Init
char	bss_4e81c[12];
int		bss_4e828; // Used by: UI_SaveConfigMenu_Init
int		bss_4e82c; // Used by: UI_SaveConfigMenu_Init
int		bss_4e830;
char	s_serverinfo[268];
int		bss_4e940; // Used by: UI_ServerInfoMenu
int		bss_4e944; // Used by: UI_ServerInfoMenu
int		bss_4e948; // Used by: UI_ServerInfoMenu
int		bss_4e94c; // Used by: UI_ServerInfoMenu
int		bss_4e950;
int		bss_4e954; // Used by: UI_ServerInfoMenu
char	bss_4e958[8];
int		bss_4e960; // Used by: UI_ServerInfoMenu
int		bss_4e964; // Used by: UI_ServerInfoMenu
char	bss_4e968[40];
int		bss_4e990; // Used by: UI_ServerInfoMenu
int		bss_4e994; // Used by: UI_ServerInfoMenu
int		bss_4e998; // Used by: UI_ServerInfoMenu
int		bss_4e99c; // Used by: UI_ServerInfoMenu
int		bss_4e9a0; // Used by: UI_ServerInfoMenu
int		bss_4e9a4;
int		bss_4e9a8; // Used by: UI_ServerInfoMenu
int		bss_4e9ac; // Used by: UI_ServerInfoMenu
char	bss_4e9b0[24];
int		bss_4e9c8; // Used by: UI_ServerInfoMenu
char	bss_4e9cc[28];
int		bss_4e9e8; // Used by: UI_ServerInfoMenu
int		bss_4e9ec; // Used by: UI_ServerInfoMenu
int		bss_4e9f0;
int		bss_4e9f4; // Used by: UI_ServerInfoMenu
int		bss_4e9f8; // Used by: UI_ServerInfoMenu
int		bss_4e9fc;
int		bss_4ea00; // Used by: UI_ServerInfoMenu
int		bss_4ea04; // Used by: UI_ServerInfoMenu
char	bss_4ea08[24];
int		bss_4ea20; // Used by: UI_ServerInfoMenu
char	bss_4ea24[28];
int		bss_4ea40; // Used by: UI_ServerInfoMenu
int		bss_4ea44; // Used by: UI_ServerInfoMenu
int		bss_4ea48;
int		bss_4ea4c; // Used by: UI_ServerInfoMenu
int		bss_4ea50; // Used by: UI_ServerInfoMenu
int		bss_4ea54; // Used by: UI_ServerInfoMenu
int		bss_4ea58; // Used by: UI_ServerInfoMenu
int		bss_4ea5c; // Used by: UI_ServerInfoMenu
char	bss_4ea60[24];
int		bss_4ea78; // Used by: UI_ServerInfoMenu
int		bss_4ea7c; // Used by: UI_ServerInfoMenu
char	bss_4ea80[8];
int		bss_4ea88; // Used by: UI_ServerInfoMenu
char	bss_4ea8c[12];
int		bss_4ea98; // Used by: UI_ServerInfoMenu
int		bss_4ea9c; // Used by: UI_ServerInfoMenu
int		bss_4eaa0;
int		bss_4eaa4; // Used by: UI_ServerInfoMenu
int		bss_4eaa8;
int		bss_4eaac; // Used by: UI_ServerInfoMenu
int		bss_4eab0; // Used by: UI_ServerInfoMenu
int		bss_4eab4; // Used by: UI_ServerInfoMenu
char	bss_4eab8[24];
int		bss_4ead0; // Used by: UI_ServerInfoMenu
int		bss_4ead4; // Used by: UI_ServerInfoMenu
char	bss_4ead8[8];
int		bss_4eae0; // Used by: UI_ServerInfoMenu
int		bss_4eae4; // Used by: UI_ServerInfoMenu
int		bss_4eae8; // Used by: UI_ServerInfoMenu
char	bss_4eaec[1024];
int		bss_4eeec; // Used by: UI_ServerInfoMenu, ServerInfo_MenuDraw
char	bss_4eef0[128];
int		g_fullservers; // Used by: ArenaServers_MenuInit, ArenaServers_Event, ArenaServers_StartRefresh, ArenaServers_UpdateMenu
int		g_emptyservers; // Used by: ArenaServers_MenuInit, ArenaServers_Event, ArenaServers_StartRefresh, ArenaServers_UpdateMenu
int		g_sortkey; // Used by: ArenaServers_MenuInit, ArenaServers_Sort, ArenaServers_Compare
int		g_gametype; // Used by: ArenaServers_MenuInit, ArenaServers_Event, ArenaServers_UpdateMenu
int		g_servertype; // Used by: ArenaServers_MenuInit, ArenaServers_MenuKey, ArenaServers_SetType, ArenaServers_StartRefresh, ArenaServers_DoRefresh, ArenaServers_Insert, ArenaServers_UpdateMenu, ArenaServers_SourceForLAN
int		g_numfavoriteservers; // Used by: ArenaServers_LoadFavorites, ArenaServers_Remove
char	g_favoriteserverlist[2432];
int		g_numlocalservers;
char	g_localserverlist[19456];
char	g_numglobalservers[24];
char	g_globalserverlist[116736];
char	g_arenaservers[268];
int		bss_70e30; // Used by: ArenaServers_MenuInit
int		bss_70e34; // Used by: ArenaServers_MenuInit
int		bss_70e38; // Used by: ArenaServers_MenuInit
int		bss_70e3c; // Used by: ArenaServers_MenuInit
int		bss_70e40;
int		bss_70e44; // Used by: ArenaServers_MenuInit
char	bss_70e48[8];
int		bss_70e50; // Used by: ArenaServers_MenuInit
int		bss_70e54; // Used by: ArenaServers_MenuInit
char	bss_70e58[24];
int		bss_70e70; // Used by: ArenaServers_MenuInit
char	bss_70e74[12];
int		bss_70e80; // Used by: ArenaServers_MenuInit
int		bss_70e84; // Used by: ArenaServers_MenuInit
int		bss_70e88; // Used by: ArenaServers_MenuInit
int		bss_70e8c; // Used by: ArenaServers_MenuInit
int		bss_70e90; // Used by: ArenaServers_MenuInit
int		bss_70e94; // Used by: ArenaServers_MenuInit
int		bss_70e98; // Used by: ArenaServers_MenuInit
int		bss_70e9c; // Used by: ArenaServers_MenuInit
char	bss_70ea0[24];
int		bss_70eb8; // Used by: ArenaServers_MenuInit
int		bss_70ebc; // Used by: ArenaServers_MenuInit
char	bss_70ec0[12];
int		bss_70ecc; // Used by: ArenaServers_MenuInit, ArenaServers_Event
char	bss_70ed0[8];
int		bss_70ed8; // Used by: ArenaServers_MenuInit
char	bss_70edc[16];
int		bss_70eec; // Used by: ArenaServers_MenuInit
int		bss_70ef0; // Used by: ArenaServers_MenuInit
int		bss_70ef4; // Used by: ArenaServers_MenuInit
int		bss_70ef8; // Used by: ArenaServers_MenuInit
int		bss_70efc; // Used by: ArenaServers_MenuInit
char	bss_70f00[24];
int		bss_70f18; // Used by: ArenaServers_MenuInit
int		bss_70f1c; // Used by: ArenaServers_MenuInit
char	bss_70f20[12];
int		bss_70f2c; // Used by: ArenaServers_MenuInit, ArenaServers_Event, ArenaServers_StartRefresh
char	bss_70f30[8];
int		bss_70f38; // Used by: ArenaServers_MenuInit
char	bss_70f3c[16];
int		bss_70f4c; // Used by: ArenaServers_MenuInit
int		bss_70f50; // Used by: ArenaServers_MenuInit
int		bss_70f54; // Used by: ArenaServers_MenuInit
int		bss_70f58; // Used by: ArenaServers_MenuInit
int		bss_70f5c; // Used by: ArenaServers_MenuInit
char	bss_70f60[24];
int		bss_70f78; // Used by: ArenaServers_MenuInit
int		bss_70f7c; // Used by: ArenaServers_MenuInit
char	bss_70f80[12];
int		bss_70f8c; // Used by: ArenaServers_MenuInit, ArenaServers_Event
char	bss_70f90[8];
int		bss_70f98; // Used by: ArenaServers_MenuInit
char	bss_70f9c[16];
int		bss_70fac; // Used by: ArenaServers_MenuInit
int		bss_70fb0; // Used by: ArenaServers_MenuInit
int		bss_70fb4; // Used by: ArenaServers_MenuInit
int		bss_70fb8; // Used by: ArenaServers_MenuInit
int		bss_70fbc; // Used by: ArenaServers_MenuInit
char	bss_70fc0[24];
int		bss_70fd8; // Used by: ArenaServers_MenuInit
int		bss_70fdc; // Used by: ArenaServers_MenuInit
char	bss_70fe0[8];
int		bss_70fe8; // Used by: ArenaServers_MenuInit, ArenaServers_Event
int		bss_70fec; // Used by: ArenaServers_MenuInit
int		bss_70ff0; // Used by: ArenaServers_MenuInit
int		bss_70ff4; // Used by: ArenaServers_MenuInit
int		bss_70ff8; // Used by: ArenaServers_MenuInit
int		bss_70ffc; // Used by: ArenaServers_MenuInit
char	bss_71000[24];
int		bss_71018; // Used by: ArenaServers_MenuInit
int		bss_7101c; // Used by: ArenaServers_MenuInit
char	bss_71020[8];
int		bss_71028; // Used by: ArenaServers_MenuInit, ArenaServers_Event
int		bss_7102c; // Used by: ArenaServers_MenuInit
int		bss_71030;
int		bss_71034; // Used by: ArenaServers_MenuInit
int		bss_71038; // Used by: ArenaServers_MenuInit
int		bss_7103c; // Used by: ArenaServers_MenuInit
char	bss_71040[24];
int		bss_71058; // Used by: ArenaServers_MenuInit
int		bss_7105c; // Used by: ArenaServers_MenuInit
char	bss_71060[12];
int		bss_7106c; // Used by: ArenaServers_Remove, ArenaServers_UpdateMenu, ArenaServers_UpdatePicture, ArenaServers_Go
int		bss_71070; // Used by: ArenaServers_Remove, ArenaServers_UpdateMenu, ArenaServers_UpdatePicture
int		bss_71074; // Used by: ArenaServers_UpdateMenu
int		bss_71078; // Used by: ArenaServers_MenuInit
int		bss_7107c; // Used by: ArenaServers_MenuInit
int		bss_71080; // Used by: ArenaServers_MenuInit
char	bss_71084[8];
int		bss_7108c; // Used by: ArenaServers_MenuInit
int		bss_71090; // Used by: ArenaServers_UpdatePicture
int		bss_71094;
int		bss_71098; // Used by: ArenaServers_MenuInit
int		bss_7109c; // Used by: ArenaServers_MenuInit
char	bss_710a0[24];
int		bss_710b8; // Used by: ArenaServers_MenuInit
char	bss_710bc[16];
int		bss_710cc; // Used by: ArenaServers_MenuInit
int		bss_710d0; // Used by: ArenaServers_UpdatePicture
int		bss_710d4;
int		bss_710d8; // Used by: ArenaServers_MenuInit
int		bss_710dc; // Used by: ArenaServers_MenuInit
int		bss_710e0;
int		bss_710e4; // Used by: ArenaServers_MenuInit
int		bss_710e8; // Used by: ArenaServers_MenuInit
int		bss_710ec;
int		bss_710f0; // Used by: ArenaServers_MenuInit
int		bss_710f4; // Used by: ArenaServers_MenuInit
char	bss_710f8[24];
int		bss_71110; // Used by: ArenaServers_MenuInit
int		bss_71114; // Used by: ArenaServers_MenuInit
char	bss_71118[24];
int		bss_71130; // Used by: ArenaServers_MenuInit
int		bss_71134; // Used by: ArenaServers_MenuInit
int		bss_71138;
int		bss_7113c; // Used by: ArenaServers_MenuInit
int		bss_71140;
int		bss_71144; // Used by: ArenaServers_MenuInit
int		bss_71148; // Used by: ArenaServers_MenuInit
int		bss_7114c; // Used by: ArenaServers_MenuInit
char	bss_71150[24];
int		bss_71168; // Used by: ArenaServers_MenuInit
int		bss_7116c; // Used by: ArenaServers_MenuInit
char	bss_71170[8];
int		bss_71178; // Used by: ArenaServers_MenuInit
char	bss_7117c[12];
int		bss_71188; // Used by: ArenaServers_MenuInit
int		bss_7118c; // Used by: ArenaServers_MenuInit
int		bss_71190;
int		bss_71194; // Used by: ArenaServers_MenuInit
int		bss_71198;
int		bss_7119c; // Used by: ArenaServers_MenuInit
int		bss_711a0; // Used by: ArenaServers_MenuInit
int		bss_711a4; // Used by: ArenaServers_MenuInit
char	bss_711a8[24];
int		bss_711c0; // Used by: ArenaServers_MenuInit
int		bss_711c4; // Used by: ArenaServers_MenuInit
char	bss_711c8[8];
int		bss_711d0; // Used by: ArenaServers_MenuInit
char	bss_711d4[12];
int		bss_711e0; // Used by: ArenaServers_MenuInit
int		bss_711e4; // Used by: ArenaServers_MenuInit
int		bss_711e8;
int		bss_711ec; // Used by: ArenaServers_MenuInit
char	bss_711f0[8];
int		bss_711f8; // Used by: ArenaServers_MenuInit
int		bss_711fc; // Used by: ArenaServers_MenuInit
char	bss_71200[40];
int		bss_71228; // Used by: ArenaServers_MenuInit, ArenaServers_SetType, ArenaServers_UpdateMenu
int		bss_7122c; // Used by: ArenaServers_MenuInit
int		bss_71230; // Used by: ArenaServers_MenuInit
int		bss_71234; // Used by: ArenaServers_MenuInit
char	bss_71238[8];
int		bss_71240; // Used by: ArenaServers_MenuInit
int		bss_71244; // Used by: ArenaServers_MenuInit
char	bss_71248[40];
int		bss_71270; // Used by: ArenaServers_MenuInit, ArenaServers_UpdateMenu
int		bss_71274; // Used by: ArenaServers_MenuInit
int		bss_71278; // Used by: ArenaServers_MenuInit
int		bss_7127c; // Used by: ArenaServers_MenuInit
int		bss_71280; // Used by: ArenaServers_MenuInit
int		bss_71284; // Used by: ArenaServers_MenuInit
int		bss_71288; // Used by: ArenaServers_MenuInit
int		bss_7128c; // Used by: ArenaServers_MenuInit
char	bss_71290[24];
int		bss_712a8; // Used by: ArenaServers_MenuInit
int		bss_712ac; // Used by: ArenaServers_MenuInit
char	bss_712b0[8];
int		bss_712b8; // Used by: ArenaServers_MenuInit
char	bss_712bc[12];
int		bss_712c8; // Used by: ArenaServers_MenuInit
int		bss_712cc; // Used by: ArenaServers_MenuInit
int		bss_712d0;
int		bss_712d4; // Used by: ArenaServers_MenuInit
int		bss_712d8; // Used by: ArenaServers_MenuInit
int		bss_712dc; // Used by: ArenaServers_MenuInit
int		bss_712e0; // Used by: ArenaServers_MenuInit
int		bss_712e4; // Used by: ArenaServers_MenuInit
char	bss_712e8[24];
int		bss_71300; // Used by: ArenaServers_MenuInit
int		bss_71304; // Used by: ArenaServers_MenuInit
char	bss_71308[8];
int		bss_71310; // Used by: ArenaServers_MenuInit
char	bss_71314[12];
int		bss_71320; // Used by: ArenaServers_MenuInit
int		bss_71324; // Used by: ArenaServers_MenuInit
int		bss_71328;
int		bss_7132c; // Used by: ArenaServers_MenuInit
int		bss_71330; // Used by: ArenaServers_MenuInit
int		bss_71334; // Used by: ArenaServers_MenuInit
int		bss_71338; // Used by: ArenaServers_MenuInit
int		bss_7133c; // Used by: ArenaServers_MenuInit
char	bss_71340[24];
int		bss_71358; // Used by: ArenaServers_MenuInit
int		bss_7135c; // Used by: ArenaServers_MenuInit
char	bss_71360[8];
int		bss_71368; // Used by: ArenaServers_MenuInit
char	bss_7136c[12];
int		bss_71378; // Used by: ArenaServers_MenuInit
int		bss_7137c; // Used by: ArenaServers_MenuInit
int		bss_71380;
int		bss_71384; // Used by: ArenaServers_MenuInit
int		bss_71388; // Used by: ArenaServers_MenuInit
int		bss_7138c; // Used by: ArenaServers_MenuInit
int		bss_71390; // Used by: ArenaServers_MenuInit
int		bss_71394; // Used by: ArenaServers_MenuInit
char	bss_71398[24];
int		bss_713b0; // Used by: ArenaServers_MenuInit
int		bss_713b4; // Used by: ArenaServers_MenuInit
char	bss_713b8[8];
int		bss_713c0; // Used by: ArenaServers_MenuInit
char	bss_713c4[12];
int		bss_713d0; // Used by: ArenaServers_MenuInit
int		bss_713d4; // Used by: ArenaServers_MenuInit
int		bss_713d8;
int		bss_713dc; // Used by: ArenaServers_MenuInit
int		bss_713e0; // Used by: ArenaServers_MenuInit
int		bss_713e4; // Used by: ArenaServers_MenuInit
int		bss_713e8; // Used by: ArenaServers_MenuInit
int		bss_713ec; // Used by: ArenaServers_MenuInit
char	bss_713f0[24];
int		bss_71408; // Used by: ArenaServers_MenuInit
int		bss_7140c; // Used by: ArenaServers_MenuInit
char	bss_71410[8];
int		bss_71418; // Used by: ArenaServers_MenuInit
char	bss_7141c[12];
int		bss_71428; // Used by: ArenaServers_MenuInit
int		bss_7142c; // Used by: ArenaServers_MenuInit
int		bss_71430;
int		bss_71434; // Used by: ArenaServers_MenuInit
int		bss_71438; // Used by: ArenaServers_MenuInit
int		bss_7143c; // Used by: ArenaServers_MenuInit
int		bss_71440; // Used by: ArenaServers_MenuInit
int		bss_71444; // Used by: ArenaServers_MenuInit
char	bss_71448[24];
int		bss_71460; // Used by: ArenaServers_MenuInit
int		bss_71464; // Used by: ArenaServers_MenuInit
char	bss_71468[8];
int		bss_71470; // Used by: ArenaServers_MenuInit
char	bss_71474[12];
int		bss_71480; // Used by: ArenaServers_MenuInit
int		bss_71484; // Used by: ArenaServers_MenuInit
char	bss_71488[11908];
int		bss_7430c; // Used by: ArenaServers_SetType, ArenaServers_StartRefresh, ArenaServers_DoRefresh, ArenaServers_StopRefresh, ArenaServers_Remove, ArenaServers_UpdateMenu
int		bss_74310; // Used by: ArenaServers_SetType, ArenaServers_Sort, ArenaServers_StartRefresh, ArenaServers_StopRefresh, ArenaServers_Insert, ArenaServers_UpdateMenu
int		bss_74314; // Used by: ArenaServers_SetType, ArenaServers_Sort, ArenaServers_StartRefresh, ArenaServers_StopRefresh, ArenaServers_Insert, ArenaServers_UpdateMenu
int		bss_74318; // Used by: ArenaServers_SetType, ArenaServers_StartRefresh, ArenaServers_DoRefresh, ArenaServers_StopRefresh, ArenaServers_Remove, ArenaServers_UpdateMenu
int		bss_7431c; // Used by: ArenaServers_MenuKey, ArenaServers_MenuDraw, ArenaServers_StartRefresh, ArenaServers_StopRefresh, ArenaServers_UpdateMenu
int		bss_74320; // Used by: ArenaServers_StartRefresh, ArenaServers_DoRefresh
int		bss_74324; // Used by: ArenaServers_SetType, ArenaServers_StartRefresh, ArenaServers_Insert
int		bss_74328; // Used by: ArenaServers_StartRefresh, ArenaServers_DoRefresh
char	bss_7432c[1024];
int		bss_7472c; // Used by: ArenaServers_SaveChanges, ArenaServers_DoRefresh, ArenaServers_LoadFavorites, ArenaServers_Remove
int		bss_74730; // Used by: ArenaServers_MenuInit
int		bss_74734; // Used by: ArenaServers_MenuInit
int		bss_74738; // Used by: ArenaServers_MenuInit
int		bss_7473c; // Used by: ArenaServers_MenuInit
int		bss_74740; // Used by: ArenaServers_MenuInit
char	bss_74744[24];
int		bss_7475c; // Used by: ArenaServers_MenuInit
int		bss_74760; // Used by: ArenaServers_MenuInit
char	bss_74764[12];
int		bss_74770; // Used by: ArenaServers_MenuInit, ArenaServers_Event, Punkbuster_ConfirmDisable, Punkbuster_ConfirmEnable
char	bss_74774[8];
int		bss_7477c; // Used by: ArenaServers_MenuInit
char	bss_74780[16];
int		bss_74790; // Used by: ArenaServers_MenuInit
int		bss_74794; // Used by: ArenaServers_MenuInit
int		bss_74798;
int		bss_7479c; // Used by: ArenaServers_MenuInit
int		bss_747a0; // Used by: ArenaServers_MenuInit
char	bss_747a4[24];
int		bss_747bc; // Used by: ArenaServers_MenuInit
char	bss_747c0[16];
int		bss_747d0; // Used by: ArenaServers_MenuInit
char	bss_747d4[8];
int		bss_747dc; // Used by: ArenaServers_MenuInit
int		bss_747e0; // Used by: ArenaServers_MenuInit
int		bss_747e4;
char	setupMenuInfo[276];
int		bss_748fc; // Used by: UI_SetupMenu_Init
int		bss_74900; // Used by: UI_SetupMenu_Init
int		bss_74904;
int		bss_74908; // Used by: UI_SetupMenu_Init
char	bss_7490c[8];
int		bss_74914; // Used by: UI_SetupMenu_Init
int		bss_74918; // Used by: UI_SetupMenu_Init
char	bss_7491c[40];
int		bss_74944; // Used by: UI_SetupMenu_Init
int		bss_74948; // Used by: UI_SetupMenu_Init
int		bss_7494c; // Used by: UI_SetupMenu_Init
int		bss_74950; // Used by: UI_SetupMenu_Init
int		bss_74954; // Used by: UI_SetupMenu_Init
int		bss_74958;
int		bss_7495c; // Used by: UI_SetupMenu_Init
int		bss_74960; // Used by: UI_SetupMenu_Init
char	bss_74964[24];
int		bss_7497c; // Used by: UI_SetupMenu_Init
char	bss_74980[28];
int		bss_7499c; // Used by: UI_SetupMenu_Init
int		bss_749a0; // Used by: UI_SetupMenu_Init
int		bss_749a4;
int		bss_749a8; // Used by: UI_SetupMenu_Init
int		bss_749ac; // Used by: UI_SetupMenu_Init
int		bss_749b0;
int		bss_749b4; // Used by: UI_SetupMenu_Init
int		bss_749b8; // Used by: UI_SetupMenu_Init
char	bss_749bc[24];
int		bss_749d4; // Used by: UI_SetupMenu_Init
char	bss_749d8[28];
int		bss_749f4; // Used by: UI_SetupMenu_Init
int		bss_749f8; // Used by: UI_SetupMenu_Init
int		bss_749fc;
int		bss_74a00; // Used by: UI_SetupMenu_Init
int		bss_74a04;
int		bss_74a08; // Used by: UI_SetupMenu_Init
int		bss_74a0c; // Used by: UI_SetupMenu_Init
int		bss_74a10; // Used by: UI_SetupMenu_Init
char	bss_74a14[24];
int		bss_74a2c; // Used by: UI_SetupMenu_Init
int		bss_74a30; // Used by: UI_SetupMenu_Init
char	bss_74a34[8];
int		bss_74a3c; // Used by: UI_SetupMenu_Init
int		bss_74a40; // Used by: UI_SetupMenu_Init
int		bss_74a44; // Used by: UI_SetupMenu_Init
int		bss_74a48; // Used by: UI_SetupMenu_Init
int		bss_74a4c;
int		bss_74a50; // Used by: UI_SetupMenu_Init
int		bss_74a54; // Used by: UI_SetupMenu_Init
int		bss_74a58; // Used by: UI_SetupMenu_Init
char	bss_74a5c[24];
int		bss_74a74; // Used by: UI_SetupMenu_Init
int		bss_74a78; // Used by: UI_SetupMenu_Init
char	bss_74a7c[8];
int		bss_74a84; // Used by: UI_SetupMenu_Init
int		bss_74a88; // Used by: UI_SetupMenu_Init
int		bss_74a8c; // Used by: UI_SetupMenu_Init
int		bss_74a90; // Used by: UI_SetupMenu_Init
int		bss_74a94;
int		bss_74a98; // Used by: UI_SetupMenu_Init
int		bss_74a9c; // Used by: UI_SetupMenu_Init
int		bss_74aa0; // Used by: UI_SetupMenu_Init
char	bss_74aa4[24];
int		bss_74abc; // Used by: UI_SetupMenu_Init
int		bss_74ac0; // Used by: UI_SetupMenu_Init
char	bss_74ac4[8];
int		bss_74acc; // Used by: UI_SetupMenu_Init
int		bss_74ad0; // Used by: UI_SetupMenu_Init
int		bss_74ad4; // Used by: UI_SetupMenu_Init
int		bss_74ad8; // Used by: UI_SetupMenu_Init
int		bss_74adc;
int		bss_74ae0; // Used by: UI_SetupMenu_Init
int		bss_74ae4; // Used by: UI_SetupMenu_Init
int		bss_74ae8; // Used by: UI_SetupMenu_Init
char	bss_74aec[24];
int		bss_74b04; // Used by: UI_SetupMenu_Init
int		bss_74b08; // Used by: UI_SetupMenu_Init
char	bss_74b0c[8];
int		bss_74b14; // Used by: UI_SetupMenu_Init
int		bss_74b18; // Used by: UI_SetupMenu_Init
int		bss_74b1c; // Used by: UI_SetupMenu_Init
int		bss_74b20; // Used by: UI_SetupMenu_Init
int		bss_74b24;
int		bss_74b28; // Used by: UI_SetupMenu_Init
int		bss_74b2c; // Used by: UI_SetupMenu_Init
int		bss_74b30; // Used by: UI_SetupMenu_Init
char	bss_74b34[24];
int		bss_74b4c; // Used by: UI_SetupMenu_Init
int		bss_74b50; // Used by: UI_SetupMenu_Init
char	bss_74b54[8];
int		bss_74b5c; // Used by: UI_SetupMenu_Init
int		bss_74b60; // Used by: UI_SetupMenu_Init
int		bss_74b64; // Used by: UI_SetupMenu_Init
int		bss_74b68; // Used by: UI_SetupMenu_Init
int		bss_74b6c;
int		bss_74b70; // Used by: UI_SetupMenu_Init
int		bss_74b74; // Used by: UI_SetupMenu_Init
int		bss_74b78; // Used by: UI_SetupMenu_Init
char	bss_74b7c[24];
int		bss_74b94; // Used by: UI_SetupMenu_Init
int		bss_74b98; // Used by: UI_SetupMenu_Init
char	bss_74b9c[8];
int		bss_74ba4; // Used by: UI_SetupMenu_Init
int		bss_74ba8; // Used by: UI_SetupMenu_Init
int		bss_74bac; // Used by: UI_SetupMenu_Init
int		bss_74bb0; // Used by: UI_SetupMenu_Init
int		bss_74bb4; // Used by: UI_SetupMenu_Init
int		bss_74bb8; // Used by: UI_SetupMenu_Init
int		bss_74bbc; // Used by: UI_SetupMenu_Init
int		bss_74bc0; // Used by: UI_SetupMenu_Init
char	bss_74bc4[24];
int		bss_74bdc; // Used by: UI_SetupMenu_Init
int		bss_74be0; // Used by: UI_SetupMenu_Init
char	bss_74be4[8];
int		bss_74bec; // Used by: UI_SetupMenu_Init
char	bss_74bf0[12];
int		bss_74bfc; // Used by: UI_SetupMenu_Init
int		bss_74c00; // Used by: UI_SetupMenu_Init
int		bss_74c04;
char	soundOptionsInfo[268];
int		bss_74d14; // Used by: UI_SoundOptionsMenu_Init
int		bss_74d18;
int		bss_74d1c; // Used by: UI_SoundOptionsMenu_Init
int		bss_74d20; // Used by: UI_SoundOptionsMenu_Init
int		bss_74d24;
int		bss_74d28; // Used by: UI_SoundOptionsMenu_Init
char	bss_74d2c[8];
int		bss_74d34; // Used by: UI_SoundOptionsMenu_Init
int		bss_74d38; // Used by: UI_SoundOptionsMenu_Init
char	bss_74d3c[24];
int		bss_74d54; // Used by: UI_SoundOptionsMenu_Init
char	bss_74d58[12];
int		bss_74d64; // Used by: UI_SoundOptionsMenu_Init
int		bss_74d68; // Used by: UI_SoundOptionsMenu_Init
int		bss_74d6c; // Used by: UI_SoundOptionsMenu_Init
int		bss_74d70; // Used by: UI_SoundOptionsMenu_Init
int		bss_74d74; // Used by: UI_SoundOptionsMenu_Init
int		bss_74d78;
int		bss_74d7c; // Used by: UI_SoundOptionsMenu_Init
int		bss_74d80; // Used by: UI_SoundOptionsMenu_Init
char	bss_74d84[24];
int		bss_74d9c; // Used by: UI_SoundOptionsMenu_Init
char	bss_74da0[28];
int		bss_74dbc; // Used by: UI_SoundOptionsMenu_Init
int		bss_74dc0; // Used by: UI_SoundOptionsMenu_Init
int		bss_74dc4;
int		bss_74dc8; // Used by: UI_SoundOptionsMenu_Init
int		bss_74dcc; // Used by: UI_SoundOptionsMenu_Init
int		bss_74dd0;
int		bss_74dd4; // Used by: UI_SoundOptionsMenu_Init
int		bss_74dd8; // Used by: UI_SoundOptionsMenu_Init
char	bss_74ddc[24];
int		bss_74df4; // Used by: UI_SoundOptionsMenu_Init
char	bss_74df8[28];
int		bss_74e14; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e18; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e1c;
int		bss_74e20; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e24;
int		bss_74e28; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e2c; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e30; // Used by: UI_SoundOptionsMenu_Init
char	bss_74e34[24];
int		bss_74e4c; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e50; // Used by: UI_SoundOptionsMenu_Init
char	bss_74e54[8];
int		bss_74e5c; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e60; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e64; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e68; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e6c;
int		bss_74e70; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e74; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e78; // Used by: UI_SoundOptionsMenu_Init
char	bss_74e7c[24];
int		bss_74e94; // Used by: UI_SoundOptionsMenu_Init
int		bss_74e98; // Used by: UI_SoundOptionsMenu_Init
char	bss_74e9c[8];
int		bss_74ea4; // Used by: UI_SoundOptionsMenu_Init
int		bss_74ea8; // Used by: UI_SoundOptionsMenu_Init
int		bss_74eac; // Used by: UI_SoundOptionsMenu_Init
int		bss_74eb0; // Used by: UI_SoundOptionsMenu_Init
int		bss_74eb4;
int		bss_74eb8; // Used by: UI_SoundOptionsMenu_Init
int		bss_74ebc; // Used by: UI_SoundOptionsMenu_Init
int		bss_74ec0; // Used by: UI_SoundOptionsMenu_Init
char	bss_74ec4[24];
int		bss_74edc; // Used by: UI_SoundOptionsMenu_Init
int		bss_74ee0; // Used by: UI_SoundOptionsMenu_Init
char	bss_74ee4[8];
int		bss_74eec; // Used by: UI_SoundOptionsMenu_Init
int		bss_74ef0; // Used by: UI_SoundOptionsMenu_Init
int		bss_74ef4; // Used by: UI_SoundOptionsMenu_Init
int		bss_74ef8; // Used by: UI_SoundOptionsMenu_Init
int		bss_74efc;
int		bss_74f00; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f04; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f08; // Used by: UI_SoundOptionsMenu_Init
char	bss_74f0c[24];
int		bss_74f24; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f28; // Used by: UI_SoundOptionsMenu_Init
char	bss_74f2c[8];
int		bss_74f34; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f38; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f3c; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f40; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f44; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f48; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f4c; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f50; // Used by: UI_SoundOptionsMenu_Init
char	bss_74f54[24];
int		bss_74f6c; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f70; // Used by: UI_SoundOptionsMenu_Init
char	bss_74f74[8];
int		bss_74f7c; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f80; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f84; // Used by: UI_SoundOptionsMenu_Init, SoundOptions_UpdateMenuItems, UI_SoundOptionsMenu_Event
int		bss_74f88;
int		bss_74f8c; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f90; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f94; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f98; // Used by: UI_SoundOptionsMenu_Init
int		bss_74f9c; // Used by: UI_SoundOptionsMenu_Init
char	bss_74fa0[24];
int		bss_74fb8; // Used by: UI_SoundOptionsMenu_Init
int		bss_74fbc; // Used by: UI_SoundOptionsMenu_Init
char	bss_74fc0[8];
int		bss_74fc8; // Used by: UI_SoundOptionsMenu_Init
int		bss_74fcc; // Used by: UI_SoundOptionsMenu_Init
int		bss_74fd0; // Used by: UI_SoundOptionsMenu_Init, SoundOptions_UpdateMenuItems, UI_SoundOptionsMenu_Event
int		bss_74fd4;
int		bss_74fd8; // Used by: UI_SoundOptionsMenu_Init
int		bss_74fdc; // Used by: UI_SoundOptionsMenu_Init
int		bss_74fe0; // Used by: UI_SoundOptionsMenu_Init
int		bss_74fe4; // Used by: UI_SoundOptionsMenu_Init
int		bss_74fe8; // Used by: UI_SoundOptionsMenu_Init
char	bss_74fec[24];
int		bss_75004; // Used by: UI_SoundOptionsMenu_Init
int		bss_75008; // Used by: UI_SoundOptionsMenu_Init
char	bss_7500c[12];
int		bss_75018; // Used by: UI_SoundOptionsMenu_Init, SoundOptions_UpdateMenuItems, UI_SoundOptionsMenu_Event
char	bss_7501c[8];
int		bss_75024; // Used by: UI_SoundOptionsMenu_Init
char	bss_75028[16];
int		bss_75038; // Used by: UI_SoundOptionsMenu_Init
int		bss_7503c; // Used by: UI_SoundOptionsMenu_Init
int		bss_75040; // Used by: UI_SoundOptionsMenu_Init
int		bss_75044; // Used by: UI_SoundOptionsMenu_Init
int		bss_75048; // Used by: UI_SoundOptionsMenu_Init
char	bss_7504c[24];
int		bss_75064; // Used by: UI_SoundOptionsMenu_Init
int		bss_75068; // Used by: UI_SoundOptionsMenu_Init
char	bss_7506c[12];
int		bss_75078; // Used by: UI_SoundOptionsMenu_Init, SoundOptions_UpdateMenuItems, UI_SoundOptionsMenu_Event
char	bss_7507c[8];
int		bss_75084; // Used by: UI_SoundOptionsMenu_Init
char	bss_75088[16];
int		bss_75098; // Used by: UI_SoundOptionsMenu_Init
int		bss_7509c; // Used by: UI_SoundOptionsMenu_Init
int		bss_750a0; // Used by: UI_SoundOptionsMenu_Init
int		bss_750a4; // Used by: UI_SoundOptionsMenu_Init
int		bss_750a8; // Used by: UI_SoundOptionsMenu_Init
char	bss_750ac[24];
int		bss_750c4; // Used by: UI_SoundOptionsMenu_Init
int		bss_750c8; // Used by: UI_SoundOptionsMenu_Init
char	bss_750cc[8];
int		bss_750d4; // Used by: UI_SoundOptionsMenu_Init
char	bss_750d8[12];
int		bss_750e4; // Used by: UI_SoundOptionsMenu_Init
int		bss_750e8; // Used by: UI_SoundOptionsMenu_Init
int		bss_750ec;
int		bss_750f0; // Used by: UI_SoundOptionsMenu_Init
int		bss_750f4; // Used by: UI_SoundOptionsMenu_Init
int		bss_750f8; // Used by: UI_SoundOptionsMenu_Init
int		bss_750fc; // Used by: UI_SoundOptionsMenu_Init
int		bss_75100; // Used by: UI_SoundOptionsMenu_Init
char	bss_75104[24];
int		bss_7511c; // Used by: UI_SoundOptionsMenu_Init
int		bss_75120; // Used by: UI_SoundOptionsMenu_Init
char	bss_75124[8];
int		bss_7512c; // Used by: UI_SoundOptionsMenu_Init
char	bss_75130[12];
int		bss_7513c; // Used by: UI_SoundOptionsMenu_Init
int		bss_75140; // Used by: UI_SoundOptionsMenu_Init
int		bss_75144;
int		bss_75148; // Used by: UI_SoundOptionsMenu_Init, SoundOptions_UpdateMenuItems, UI_SoundOptionsMenu_Event
int		bss_7514c; // Used by: UI_SoundOptionsMenu_Init, SoundOptions_UpdateMenuItems, UI_SoundOptionsMenu_Event
int		bss_75150; // Used by: UI_SoundOptionsMenu_Init, SoundOptions_UpdateMenuItems, UI_SoundOptionsMenu_Event
int		bss_75154; // Used by: UI_SoundOptionsMenu_Init, SoundOptions_UpdateMenuItems, UI_SoundOptionsMenu_Event
char	s_specifyserver[276];
int		bss_7526c; // Used by: SpecifyServer_MenuInit
int		bss_75270; // Used by: SpecifyServer_MenuInit
int		bss_75274;
int		bss_75278; // Used by: SpecifyServer_MenuInit
char	bss_7527c[8];
int		bss_75284; // Used by: SpecifyServer_MenuInit
int		bss_75288; // Used by: SpecifyServer_MenuInit
char	bss_7528c[40];
int		bss_752b4; // Used by: SpecifyServer_MenuInit
int		bss_752b8; // Used by: SpecifyServer_MenuInit
int		bss_752bc; // Used by: SpecifyServer_MenuInit
int		bss_752c0; // Used by: SpecifyServer_MenuInit
int		bss_752c4; // Used by: SpecifyServer_MenuInit
int		bss_752c8;
int		bss_752cc; // Used by: SpecifyServer_MenuInit
int		bss_752d0; // Used by: SpecifyServer_MenuInit
char	bss_752d4[24];
int		bss_752ec; // Used by: SpecifyServer_MenuInit
char	bss_752f0[28];
int		bss_7530c; // Used by: SpecifyServer_MenuInit
int		bss_75310; // Used by: SpecifyServer_MenuInit
int		bss_75314;
int		bss_75318; // Used by: SpecifyServer_MenuInit
int		bss_7531c; // Used by: SpecifyServer_MenuInit
int		bss_75320;
int		bss_75324; // Used by: SpecifyServer_MenuInit
int		bss_75328; // Used by: SpecifyServer_MenuInit
char	bss_7532c[24];
int		bss_75344; // Used by: SpecifyServer_MenuInit
char	bss_75348[28];
int		bss_75364; // Used by: SpecifyServer_MenuInit
int		bss_75368; // Used by: SpecifyServer_MenuInit
int		bss_7536c;
int		bss_75370; // Used by: SpecifyServer_MenuInit
int		bss_75374; // Used by: SpecifyServer_MenuInit
int		bss_75378;
int		bss_7537c; // Used by: SpecifyServer_MenuInit
int		bss_75380; // Used by: SpecifyServer_MenuInit
char	bss_75384[24];
int		bss_7539c; // Used by: SpecifyServer_MenuInit
char	bss_753a0[20];
int		bss_753b4; // Used by: SpecifyServer_MenuInit
char	bss_753b8[256]; // Used by: SpecifyServer_Event
int		bss_754b8; // Used by: SpecifyServer_MenuInit
int		bss_754bc; // Used by: SpecifyServer_MenuInit
int		bss_754c0; // Used by: SpecifyServer_MenuInit
int		bss_754c4;
int		bss_754c8; // Used by: SpecifyServer_MenuInit
int		bss_754cc; // Used by: SpecifyServer_MenuInit
char	bss_754d0[24];
int		bss_754e8; // Used by: SpecifyServer_MenuInit
char	bss_754ec[20];
int		bss_75500; // Used by: SpecifyServer_MenuInit
char	bss_75504[256]; // Used by: SpecifyServer_Event
int		bss_75604; // Used by: SpecifyServer_MenuInit
int		bss_75608; // Used by: SpecifyServer_MenuInit
int		bss_7560c; // Used by: SpecifyServer_MenuInit
int		bss_75610; // Used by: SpecifyServer_MenuInit
int		bss_75614; // Used by: SpecifyServer_MenuInit
int		bss_75618; // Used by: SpecifyServer_MenuInit
char	bss_7561c[24];
int		bss_75634; // Used by: SpecifyServer_MenuInit
int		bss_75638; // Used by: SpecifyServer_MenuInit
char	bss_7563c[8];
int		bss_75644; // Used by: SpecifyServer_MenuInit
char	bss_75648[12];
int		bss_75654; // Used by: SpecifyServer_MenuInit
int		bss_75658; // Used by: SpecifyServer_MenuInit
int		bss_7565c;
int		bss_75660; // Used by: SpecifyServer_MenuInit
int		bss_75664; // Used by: SpecifyServer_MenuInit
int		bss_75668; // Used by: SpecifyServer_MenuInit
int		bss_7566c; // Used by: SpecifyServer_MenuInit
int		bss_75670; // Used by: SpecifyServer_MenuInit
char	bss_75674[24];
int		bss_7568c; // Used by: SpecifyServer_MenuInit
int		bss_75690; // Used by: SpecifyServer_MenuInit
char	bss_75694[8];
int		bss_7569c; // Used by: SpecifyServer_MenuInit
char	bss_756a0[12];
int		bss_756ac; // Used by: SpecifyServer_MenuInit
int		bss_756b0; // Used by: SpecifyServer_MenuInit
int		bss_756b4;
int		maxTier; // Used by: UI_SPLevelMenu, UI_SPLevelMenu_RightArrowEvent, UI_SPLevelMenu_SetMenuItems
int		minTier; // Used by: UI_SPLevelMenu, UI_SPLevelMenu_LeftArrowEvent, UI_SPLevelMenu_SetMenuItems
int		finalTier; // Used by: UI_SPLevelMenu, UI_SPLevelMenu_LevelEvent, UI_SPLevelMenu_SetMenuItems
int		trainingTier; // Used by: UI_SPLevelMenu, UI_SPLevelMenu_LevelEvent, UI_SPLevelMenu_SetMenuItems
int		currentGame; // Used by: UI_SPLevelMenu, UI_SPLevelMenu_Init
int		currentSet; // Used by: UI_SPLevelMenu, UI_SPLevelMenu_Init, UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_NextEvent, UI_SPLevelMenu_SetMenuItems, UI_SPLevelMenu_SetMenuArena, UI_SPLevelMenu_SetBots
int		selectedArena; // Used by: UI_SPLevelMenu_Init, UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_BackEvent, UI_SPLevelMenu_NextEvent, UI_SPLevelMenu_LevelEvent, UI_SPLevelMenu_SetMenuItems
int		selectedArenaSet; // Used by: UI_SPLevelMenu_Init, UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_NextEvent, UI_SPLevelMenu_RightArrowEvent, UI_SPLevelMenu_LeftArrowEvent, UI_SPLevelMenu_LevelEvent, UI_SPLevelMenu_SetMenuItems, UI_SPLevelMenu_SetMenuArena, UI_SPLevelMenu_SetBots
char	levelMenuInfo[268];
int		bss_757e4; // Used by: UI_SPLevelMenu_Init
int		bss_757e8;
int		bss_757ec; // Used by: UI_SPLevelMenu_Init
int		bss_757f0; // Used by: UI_SPLevelMenu_Init
int		bss_757f4;
int		bss_757f8; // Used by: UI_SPLevelMenu_Init
char	bss_757fc[8];
int		bss_75804; // Used by: UI_SPLevelMenu_Init
int		bss_75808; // Used by: UI_SPLevelMenu_Init
char	bss_7580c[40];
int		bss_75834; // Used by: UI_SPLevelMenu_Init
int		bss_75838; // Used by: UI_SPLevelMenu_Init
int		bss_7583c; // Used by: UI_SPLevelMenu_Init
int		bss_75840; // Used by: UI_SPLevelMenu_Init
int		bss_75844; // Used by: UI_SPLevelMenu_Init
int		bss_75848; // Used by: UI_SPLevelMenu_Init
int		bss_7584c; // Used by: UI_SPLevelMenu_Init
int		bss_75850; // Used by: UI_SPLevelMenu_Init
char	bss_75854[24];
int		bss_7586c; // Used by: UI_SPLevelMenu_Init
int		bss_75870; // Used by: UI_SPLevelMenu_Init
char	bss_75874[8];
int		bss_7587c; // Used by: UI_SPLevelMenu_Init
char	bss_75880[12];
int		bss_7588c; // Used by: UI_SPLevelMenu_Init
int		bss_75890; // Used by: UI_SPLevelMenu_Init
int		bss_75894;
int		bss_75898; // Used by: UI_SPLevelMenu_Init
int		bss_7589c; // Used by: UI_SPLevelMenu_Init
int		bss_758a0; // Used by: UI_SPLevelMenu_Init
int		bss_758a4; // Used by: UI_SPLevelMenu_Init, UI_SPLevelMenu_SetMenuItems
int		bss_758a8; // Used by: UI_SPLevelMenu_Init
char	bss_758ac[24];
int		bss_758c4; // Used by: UI_SPLevelMenu_Init
int		bss_758c8; // Used by: UI_SPLevelMenu_Init
char	bss_758cc[24];
int		bss_758e4; // Used by: UI_SPLevelMenu_Init
int		bss_758e8; // Used by: UI_SPLevelMenu_Init
int		bss_758ec;
int		bss_758f0; // Used by: UI_SPLevelMenu_Init
int		bss_758f4; // Used by: UI_SPLevelMenu_Init
int		bss_758f8; // Used by: UI_SPLevelMenu_Init
int		bss_758fc; // Used by: UI_SPLevelMenu_Init
int		bss_75900; // Used by: UI_SPLevelMenu_Init
char	bss_75904[24];
int		bss_7591c; // Used by: UI_SPLevelMenu_Init
int		bss_75920; // Used by: UI_SPLevelMenu_Init
char	bss_75924[16];
int		bss_75934; // Used by: UI_SPLevelMenu_SetMenuItems
int		bss_75938;
int		bss_7593c; // Used by: UI_SPLevelMenu_Init
int		bss_75940; // Used by: UI_SPLevelMenu_Init
int		bss_75944;
int		bss_75948; // Used by: UI_SPLevelMenu_Init
int		bss_7594c; // Used by: UI_SPLevelMenu_Init
int		bss_75950; // Used by: UI_SPLevelMenu_Init
int		bss_75954; // Used by: UI_SPLevelMenu_Init
int		bss_75958; // Used by: UI_SPLevelMenu_Init
char	bss_7595c[24];
int		bss_75974; // Used by: UI_SPLevelMenu_Init
int		bss_75978; // Used by: UI_SPLevelMenu_Init
char	bss_7597c[16];
int		bss_7598c; // Used by: UI_SPLevelMenu_SetMenuItems
int		bss_75990;
int		bss_75994; // Used by: UI_SPLevelMenu_Init
int		bss_75998; // Used by: UI_SPLevelMenu_Init
int		bss_7599c;
int		bss_759a0; // Used by: UI_SPLevelMenu_Init
int		bss_759a4; // Used by: UI_SPLevelMenu_Init
int		bss_759a8; // Used by: UI_SPLevelMenu_Init
int		bss_759ac; // Used by: UI_SPLevelMenu_Init
int		bss_759b0; // Used by: UI_SPLevelMenu_Init
char	bss_759b4[24];
int		bss_759cc; // Used by: UI_SPLevelMenu_Init
int		bss_759d0; // Used by: UI_SPLevelMenu_Init
char	bss_759d4[16];
int		bss_759e4; // Used by: UI_SPLevelMenu_SetMenuItems
int		bss_759e8;
int		bss_759ec; // Used by: UI_SPLevelMenu_Init
int		bss_759f0; // Used by: UI_SPLevelMenu_Init
int		bss_759f4;
int		bss_759f8; // Used by: UI_SPLevelMenu_Init
int		bss_759fc; // Used by: UI_SPLevelMenu_Init
int		bss_75a00; // Used by: UI_SPLevelMenu_Init
int		bss_75a04; // Used by: UI_SPLevelMenu_Init
int		bss_75a08; // Used by: UI_SPLevelMenu_Init
char	bss_75a0c[24];
int		bss_75a24; // Used by: UI_SPLevelMenu_Init
int		bss_75a28; // Used by: UI_SPLevelMenu_Init
char	bss_75a2c[8];
int		bss_75a34; // Used by: UI_SPLevelMenu_Init
char	bss_75a38[12];
int		bss_75a44; // Used by: UI_SPLevelMenu_Init
int		bss_75a48; // Used by: UI_SPLevelMenu_Init
int		bss_75a4c;
int		bss_75a50; // Used by: UI_SPLevelMenu_Init
int		bss_75a54; // Used by: UI_SPLevelMenu_Init
int		bss_75a58; // Used by: UI_SPLevelMenu_Init
int		bss_75a5c; // Used by: UI_SPLevelMenu_Init
int		bss_75a60; // Used by: UI_SPLevelMenu_Init
char	bss_75a64[24];
int		bss_75a7c; // Used by: UI_SPLevelMenu_Init
int		bss_75a80; // Used by: UI_SPLevelMenu_Init
char	bss_75a84[16];
int		bss_75a94; // Used by: UI_SPLevelMenu_MenuDraw
int		bss_75a98;
int		bss_75a9c; // Used by: UI_SPLevelMenu_Init
int		bss_75aa0; // Used by: UI_SPLevelMenu_Init
char	bss_75aa4[532];
int		bss_75cb8; // Used by: UI_SPLevelMenu_Init
int		bss_75cbc; // Used by: UI_SPLevelMenu_Init
int		bss_75cc0; // Used by: UI_SPLevelMenu_Init
int		bss_75cc4; // Used by: UI_SPLevelMenu_Init
int		bss_75cc8; // Used by: UI_SPLevelMenu_Init
char	bss_75ccc[24];
int		bss_75ce4; // Used by: UI_SPLevelMenu_Init
int		bss_75ce8; // Used by: UI_SPLevelMenu_Init
char	bss_75cec[8];
int		bss_75cf4; // Used by: UI_SPLevelMenu_Init
char	bss_75cf8[12];
int		bss_75d04; // Used by: UI_SPLevelMenu_Init
int		bss_75d08; // Used by: UI_SPLevelMenu_Init
int		bss_75d0c;
int		bss_75d10; // Used by: UI_SPLevelMenu_Init
int		bss_75d14; // Used by: UI_SPLevelMenu_Init
int		bss_75d18; // Used by: UI_SPLevelMenu_Init
int		bss_75d1c; // Used by: UI_SPLevelMenu_Init
int		bss_75d20; // Used by: UI_SPLevelMenu_Init
char	bss_75d24[24];
int		bss_75d3c; // Used by: UI_SPLevelMenu_Init
int		bss_75d40; // Used by: UI_SPLevelMenu_Init
char	bss_75d44[8];
int		bss_75d4c; // Used by: UI_SPLevelMenu_Init
char	bss_75d50[12];
int		bss_75d5c; // Used by: UI_SPLevelMenu_Init
int		bss_75d60; // Used by: UI_SPLevelMenu_Init
int		bss_75d64;
int		bss_75d68; // Used by: UI_SPLevelMenu_Init
int		bss_75d6c; // Used by: UI_SPLevelMenu_Init
int		bss_75d70; // Used by: UI_SPLevelMenu_Init
int		bss_75d74; // Used by: UI_SPLevelMenu_Init
int		bss_75d78; // Used by: UI_SPLevelMenu_Init
char	bss_75d7c[24];
int		bss_75d94; // Used by: UI_SPLevelMenu_Init
int		bss_75d98; // Used by: UI_SPLevelMenu_Init
char	bss_75d9c[8];
int		bss_75da4; // Used by: UI_SPLevelMenu_Init
char	bss_75da8[12];
int		bss_75db4; // Used by: UI_SPLevelMenu_Init
int		bss_75db8; // Used by: UI_SPLevelMenu_Init
int		bss_75dbc;
int		bss_75dc0; // Used by: UI_SPLevelMenu_Init
int		bss_75dc4; // Used by: UI_SPLevelMenu_Init
int		bss_75dc8; // Used by: UI_SPLevelMenu_Init
int		bss_75dcc; // Used by: UI_SPLevelMenu_Init
int		bss_75dd0; // Used by: UI_SPLevelMenu_Init
char	bss_75dd4[24];
int		bss_75dec; // Used by: UI_SPLevelMenu_Init
int		bss_75df0; // Used by: UI_SPLevelMenu_Init
char	bss_75df4[8];
int		bss_75dfc; // Used by: UI_SPLevelMenu_Init
char	bss_75e00[12];
int		bss_75e0c; // Used by: UI_SPLevelMenu_Init
int		bss_75e10; // Used by: UI_SPLevelMenu_Init
int		bss_75e14;
int		bss_75e18; // Used by: UI_SPLevelMenu_Init
char	bss_75e1c[8];
int		bss_75e24; // Used by: UI_SPLevelMenu_Init
int		bss_75e28; // Used by: UI_SPLevelMenu_Init
char	bss_75e2c[24];
int		bss_75e44; // Used by: UI_SPLevelMenu_Init
char	bss_75e48[28];
int		bss_75e64; // Used by: UI_SPLevelMenu_Init
int		bss_75e68; // Used by: UI_SPLevelMenu_Init
int		bss_75e6c;
int		bss_75e70; // Used by: UI_SPLevelMenu_ReInit, UI_SPLevelMenu_MenuDraw
int		bss_75e74; // Used by: UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_NextEvent, UI_SPLevelMenu_LevelEvent, UI_SPLevelMenu_SetMenuItems, UI_SPLevelMenu_SetBots
int		bss_75e78; // Used by: UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_SetMenuItems
char	bss_75e7c[64];
char	bss_75ebc[64]; // Used by: UI_SPLevelMenu_SetMenuItems
char	bss_75efc[64]; // Used by: UI_SPLevelMenu_SetMenuItems
char	bss_75f3c[160]; // Used by: UI_SPLevelMenu_SetMenuItems
int		bss_75fdc; // Used by: UI_SPLevelMenu_Cache, UI_SPLevelMenu_MenuDraw
int		bss_75fe0; // Used by: UI_SPLevelMenu_Cache, UI_SPLevelMenu_MenuDraw
int		bss_75fe4; // Used by: UI_SPLevelMenu_Cache
int		bss_75fe8; // Used by: UI_SPLevelMenu_Cache
int		bss_75fec; // Used by: UI_SPLevelMenu_Cache
int		bss_75ff0; // Used by: UI_SPLevelMenu_Cache
int		bss_75ff4; // Used by: UI_SPLevelMenu_Cache
char	bss_75ff8[144];
int		bss_76088; // Used by: UI_SPLevelMenu_Init
char	bss_7608c[28];
int		bss_760a8; // Used by: UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_SetBots
char	bss_760ac[100];
char	arenainfo[1024];
char	postgameMenuInfo[268];
int		bss_7661c; // Used by: UI_SPPostgameMenu_Init
int		bss_76620; // Used by: UI_SPPostgameMenu_Init
int		bss_76624; // Used by: UI_SPPostgameMenu_Init
char	bss_76628[8];
int		bss_76630; // Used by: UI_SPPostgameMenu_Init
int		bss_76634; // Used by: UI_SPPostgameMenu_Init
int		bss_76638; // Used by: UI_SPPostgameMenu_Init
int		bss_7663c; // Used by: UI_SPPostgameMenu_Init
int		bss_76640; // Used by: UI_SPPostgameMenu_Init
char	bss_76644[24];
int		bss_7665c; // Used by: UI_SPPostgameMenu_Init
int		bss_76660; // Used by: UI_SPPostgameMenu_Init
char	bss_76664[8];
int		bss_7666c; // Used by: UI_SPPostgameMenu_Init
char	bss_76670[12];
int		bss_7667c; // Used by: UI_SPPostgameMenu_Init
int		bss_76680; // Used by: UI_SPPostgameMenu_Init
int		bss_76684;
int		bss_76688; // Used by: UI_SPPostgameMenu_Init
int		bss_7668c; // Used by: UI_SPPostgameMenu_Init
int		bss_76690; // Used by: UI_SPPostgameMenu_Init
int		bss_76694; // Used by: UI_SPPostgameMenu_Init
int		bss_76698; // Used by: UI_SPPostgameMenu_Init
char	bss_7669c[24];
int		bss_766b4; // Used by: UI_SPPostgameMenu_Init
int		bss_766b8; // Used by: UI_SPPostgameMenu_Init
char	bss_766bc[8];
int		bss_766c4; // Used by: UI_SPPostgameMenu_Init
char	bss_766c8[12];
int		bss_766d4; // Used by: UI_SPPostgameMenu_Init
int		bss_766d8; // Used by: UI_SPPostgameMenu_Init
int		bss_766dc;
int		bss_766e0; // Used by: UI_SPPostgameMenu_Init
int		bss_766e4; // Used by: UI_SPPostgameMenu_Init
int		bss_766e8; // Used by: UI_SPPostgameMenu_Init
int		bss_766ec; // Used by: UI_SPPostgameMenu_Init
int		bss_766f0; // Used by: UI_SPPostgameMenu_Init
char	bss_766f4[24];
int		bss_7670c; // Used by: UI_SPPostgameMenu_Init
int		bss_76710; // Used by: UI_SPPostgameMenu_Init
char	bss_76714[8];
int		bss_7671c; // Used by: UI_SPPostgameMenu_Init
char	bss_76720[12];
int		bss_7672c; // Used by: UI_SPPostgameMenu_Init
int		bss_76730; // Used by: UI_SPPostgameMenu_Init
int		bss_76734;
int		bss_76738; // Used by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_MenuDraw, UI_SPPostgameMenu_MenuKey
int		bss_7673c; // Used by: UI_SPPostgameMenu_Init, UI_SPPostgameMenu_MenuKey
int		bss_76740; // Used by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_MenuDraw, UI_SPPostgameMenu_MenuKey
int		bss_76744; // Used by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_MenuDraw
int		bss_76748; // Used by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_MenuDraw
char	bss_7674c[288];
int		bss_7686c; // Used by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_NextEvent
int		bss_76870; // Used by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_MenuDraw, UI_SPPostgameMenu_MenuDrawScoreLine
int		bss_76874; // Used by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_MenuDraw, UI_SPPostgameMenu_NextEvent
int		bss_76878; // Used by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_MenuDraw
char	bss_7687c[72];
int		bss_768c4; // Used by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_MenuDraw
int		bss_768c8; // Used by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_MenuDraw
char	skillMenuInfo[272];
int		bss_769dc; // Used by: UI_SPSkillMenu_Init
int		bss_769e0;
int		bss_769e4; // Used by: UI_SPSkillMenu_Init
int		bss_769e8;
int		bss_769ec; // Used by: UI_SPSkillMenu_Init
int		bss_769f0; // Used by: UI_SPSkillMenu_Init
int		bss_769f4;
int		bss_769f8; // Used by: UI_SPSkillMenu_Init
int		bss_769fc; // Used by: UI_SPSkillMenu_Init
char	bss_76a00[24];
int		bss_76a18; // Used by: UI_SPSkillMenu_Init
char	bss_76a1c[28];
int		bss_76a38; // Used by: UI_SPSkillMenu_Init
int		bss_76a3c; // Used by: UI_SPSkillMenu_Init
int		bss_76a40;
int		bss_76a44; // Used by: UI_SPSkillMenu_Init
char	bss_76a48[8];
int		bss_76a50; // Used by: UI_SPSkillMenu_Init
int		bss_76a54; // Used by: UI_SPSkillMenu_Init
char	bss_76a58[24];
int		bss_76a70; // Used by: UI_SPSkillMenu_Init
char	bss_76a74[12];
int		bss_76a80; // Used by: UI_SPSkillMenu_Init
int		bss_76a84; // Used by: UI_SPSkillMenu_Init
int		bss_76a88; // Used by: UI_SPSkillMenu_Init
int		bss_76a8c; // Used by: UI_SPSkillMenu_Init
int		bss_76a90;
int		bss_76a94; // Used by: UI_SPSkillMenu_Init
int		bss_76a98; // Used by: UI_SPSkillMenu_Init
int		bss_76a9c; // Used by: UI_SPSkillMenu_Init
char	bss_76aa0[24];
int		bss_76ab8; // Used by: UI_SPSkillMenu_Init
int		bss_76abc; // Used by: UI_SPSkillMenu_Init
char	bss_76ac0[8];
int		bss_76ac8; // Used by: UI_SPSkillMenu_Init
int		bss_76acc; // Used by: UI_SPSkillMenu_Init
int		bss_76ad0; // Used by: UI_SPSkillMenu_Init, SetSkillColor
int		bss_76ad4; // Used by: UI_SPSkillMenu_Init
int		bss_76ad8;
int		bss_76adc; // Used by: UI_SPSkillMenu_Init
int		bss_76ae0; // Used by: UI_SPSkillMenu_Init
int		bss_76ae4; // Used by: UI_SPSkillMenu_Init
char	bss_76ae8[24];
int		bss_76b00; // Used by: UI_SPSkillMenu_Init
int		bss_76b04; // Used by: UI_SPSkillMenu_Init
char	bss_76b08[8];
int		bss_76b10; // Used by: UI_SPSkillMenu_Init
int		bss_76b14; // Used by: UI_SPSkillMenu_Init
int		bss_76b18; // Used by: UI_SPSkillMenu_Init, SetSkillColor
int		bss_76b1c; // Used by: UI_SPSkillMenu_Init
int		bss_76b20;
int		bss_76b24; // Used by: UI_SPSkillMenu_Init
int		bss_76b28; // Used by: UI_SPSkillMenu_Init
int		bss_76b2c; // Used by: UI_SPSkillMenu_Init
char	bss_76b30[24];
int		bss_76b48; // Used by: UI_SPSkillMenu_Init
int		bss_76b4c; // Used by: UI_SPSkillMenu_Init
char	bss_76b50[8];
int		bss_76b58; // Used by: UI_SPSkillMenu_Init
int		bss_76b5c; // Used by: UI_SPSkillMenu_Init
int		bss_76b60; // Used by: UI_SPSkillMenu_Init, SetSkillColor
int		bss_76b64; // Used by: UI_SPSkillMenu_Init
int		bss_76b68;
int		bss_76b6c; // Used by: UI_SPSkillMenu_Init
int		bss_76b70; // Used by: UI_SPSkillMenu_Init
int		bss_76b74; // Used by: UI_SPSkillMenu_Init
char	bss_76b78[24];
int		bss_76b90; // Used by: UI_SPSkillMenu_Init
int		bss_76b94; // Used by: UI_SPSkillMenu_Init
char	bss_76b98[8];
int		bss_76ba0; // Used by: UI_SPSkillMenu_Init
int		bss_76ba4; // Used by: UI_SPSkillMenu_Init
int		bss_76ba8; // Used by: UI_SPSkillMenu_Init, SetSkillColor
int		bss_76bac; // Used by: UI_SPSkillMenu_Init
int		bss_76bb0;
int		bss_76bb4; // Used by: UI_SPSkillMenu_Init
int		bss_76bb8; // Used by: UI_SPSkillMenu_Init
int		bss_76bbc; // Used by: UI_SPSkillMenu_Init
char	bss_76bc0[24];
int		bss_76bd8; // Used by: UI_SPSkillMenu_Init
int		bss_76bdc; // Used by: UI_SPSkillMenu_Init
char	bss_76be0[8];
int		bss_76be8; // Used by: UI_SPSkillMenu_Init
int		bss_76bec; // Used by: UI_SPSkillMenu_Init
int		bss_76bf0; // Used by: UI_SPSkillMenu_Init, SetSkillColor
int		bss_76bf4; // Used by: UI_SPSkillMenu_Init
char	bss_76bf8[8];
int		bss_76c00; // Used by: UI_SPSkillMenu_Init
int		bss_76c04; // Used by: UI_SPSkillMenu_Init
char	bss_76c08[24];
int		bss_76c20; // Used by: UI_SPSkillMenu_Init
char	bss_76c24[20];
int		bss_76c38; // Used by: UI_SPSkillMenu_Init, UI_SPSkillMenu_SkillEvent
int		bss_76c3c;
int		bss_76c40; // Used by: UI_SPSkillMenu_Init
int		bss_76c44; // Used by: UI_SPSkillMenu_Init
int		bss_76c48;
int		bss_76c4c; // Used by: UI_SPSkillMenu_Init
int		bss_76c50; // Used by: UI_SPSkillMenu_Init
int		bss_76c54; // Used by: UI_SPSkillMenu_Init
int		bss_76c58; // Used by: UI_SPSkillMenu_Init
int		bss_76c5c; // Used by: UI_SPSkillMenu_Init
char	bss_76c60[24];
int		bss_76c78; // Used by: UI_SPSkillMenu_Init
int		bss_76c7c; // Used by: UI_SPSkillMenu_Init
char	bss_76c80[8];
int		bss_76c88; // Used by: UI_SPSkillMenu_Init
char	bss_76c8c[12];
int		bss_76c98; // Used by: UI_SPSkillMenu_Init
int		bss_76c9c; // Used by: UI_SPSkillMenu_Init
int		bss_76ca0;
int		bss_76ca4; // Used by: UI_SPSkillMenu_Init
int		bss_76ca8; // Used by: UI_SPSkillMenu_Init
int		bss_76cac; // Used by: UI_SPSkillMenu_Init
int		bss_76cb0; // Used by: UI_SPSkillMenu_Init
int		bss_76cb4; // Used by: UI_SPSkillMenu_Init
char	bss_76cb8[24];
int		bss_76cd0; // Used by: UI_SPSkillMenu_Init
int		bss_76cd4; // Used by: UI_SPSkillMenu_Init
char	bss_76cd8[8];
int		bss_76ce0; // Used by: UI_SPSkillMenu_Init
char	bss_76ce4[12];
int		bss_76cf0; // Used by: UI_SPSkillMenu_Init
int		bss_76cf4; // Used by: UI_SPSkillMenu_Init
int		bss_76cf8;
int		bss_76cfc; // Used by: UI_SPSkillMenu, UI_SPSkillMenu_FightEvent
int		bss_76d00; // Used by: UI_SPSkillMenu_Cache
int		bss_76d04; // Used by: UI_SPSkillMenu_Cache
int		bss_76d08; // Used by: UI_SPSkillMenu_Cache
int		bss_76d0c; // Used by: UI_SPSkillMenu_Cache
int		bss_76d10; // Used by: UI_SPSkillMenu_Cache
int		bss_76d14; // Used by: UI_SPSkillMenu_Init, UI_SPSkillMenu_Cache, UI_SPSkillMenu_SkillEvent
int		bss_76d18; // Used by: UI_SPSkillMenu_Cache, UI_SPSkillMenu_Key, UI_SPSkillMenu_BackEvent, UI_SPSkillMenu_SkillEvent
char	bss_76d1c[384];
char	botSelectInfo[276];
int		bss_76fb0; // Used by: UI_BotSelectMenu_Init
int		bss_76fb4; // Used by: UI_BotSelectMenu_Init
int		bss_76fb8;
int		bss_76fbc; // Used by: UI_BotSelectMenu_Init
char	bss_76fc0[8];
int		bss_76fc8; // Used by: UI_BotSelectMenu_Init
int		bss_76fcc; // Used by: UI_BotSelectMenu_Init
char	bss_76fd0[40];
int		bss_76ff8; // Used by: UI_BotSelectMenu_Init
int		bss_76ffc; // Used by: UI_BotSelectMenu_Init
int		bss_77000; // Used by: UI_BotSelectMenu_Init
char	bss_77004[3968];
int		bss_77f84; // Used by: UI_BotSelectMenu_Init
int		bss_77f88; // Used by: UI_BotSelectMenu_Init
int		bss_77f8c;
int		bss_77f90; // Used by: UI_BotSelectMenu_Init
int		bss_77f94; // Used by: UI_BotSelectMenu_Init
char	bss_77f98[24];
int		bss_77fb0; // Used by: UI_BotSelectMenu_Init
char	bss_77fb4[28];
int		bss_77fd0; // Used by: UI_BotSelectMenu_Init
int		bss_77fd4; // Used by: UI_BotSelectMenu_Init
int		bss_77fd8;
int		bss_77fdc; // Used by: UI_BotSelectMenu_Init
char	bss_77fe0[8];
int		bss_77fe8; // Used by: UI_BotSelectMenu_Init
int		bss_77fec; // Used by: UI_BotSelectMenu_Init
char	bss_77ff0[24];
int		bss_78008; // Used by: UI_BotSelectMenu_Init
int		bss_7800c; // Used by: UI_BotSelectMenu_Init
char	bss_78010[8];
int		bss_78018; // Used by: UI_BotSelectMenu_Init
char	bss_7801c[12];
int		bss_78028; // Used by: UI_BotSelectMenu_Init
int		bss_7802c; // Used by: UI_BotSelectMenu_Init
int		bss_78030;
int		bss_78034; // Used by: UI_BotSelectMenu_Init
char	bss_78038[8];
int		bss_78040; // Used by: UI_BotSelectMenu_Init
int		bss_78044; // Used by: UI_BotSelectMenu_Init
char	bss_78048[24];
int		bss_78060; // Used by: UI_BotSelectMenu_Init
int		bss_78064; // Used by: UI_BotSelectMenu_Init
char	bss_78068[8];
int		bss_78070; // Used by: UI_BotSelectMenu_Init
char	bss_78074[12];
int		bss_78080; // Used by: UI_BotSelectMenu_Init
int		bss_78084; // Used by: UI_BotSelectMenu_Init
int		bss_78088;
int		bss_7808c; // Used by: UI_BotSelectMenu_Init
int		bss_78090; // Used by: UI_BotSelectMenu_Init
int		bss_78094;
int		bss_78098; // Used by: UI_BotSelectMenu_Init
int		bss_7809c; // Used by: UI_BotSelectMenu_Init
char	bss_780a0[24];
int		bss_780b8; // Used by: UI_BotSelectMenu_Init
int		bss_780bc; // Used by: UI_BotSelectMenu_Init
char	bss_780c0[8];
int		bss_780c8; // Used by: UI_BotSelectMenu_Init
char	bss_780cc[12];
int		bss_780d8; // Used by: UI_BotSelectMenu_Init
int		bss_780dc; // Used by: UI_BotSelectMenu_Init
int		bss_780e0;
int		bss_780e4; // Used by: UI_BotSelectMenu_Init
int		bss_780e8; // Used by: UI_BotSelectMenu_Init
int		bss_780ec;
int		bss_780f0; // Used by: UI_BotSelectMenu_Init
int		bss_780f4; // Used by: UI_BotSelectMenu_Init
char	bss_780f8[24];
int		bss_78110; // Used by: UI_BotSelectMenu_Init
int		bss_78114; // Used by: UI_BotSelectMenu_Init
char	bss_78118[8];
int		bss_78120; // Used by: UI_BotSelectMenu_Init
char	bss_78124[12];
int		bss_78130; // Used by: UI_BotSelectMenu_Init
int		bss_78134; // Used by: UI_BotSelectMenu_Init
int		bss_78138;
int		bss_7813c; // Used by: UI_BotSelectMenu_Default, UI_BotSelectMenu_UpdateGrid, UI_BotSelectMenu_BuildList
int		bss_78140; // Used by: UI_BotSelectMenu_Init, UI_BotSelectMenu_BotEvent, UI_BotSelectMenu_RightEvent, UI_BotSelectMenu_LeftEvent, UI_BotSelectMenu_UpdateGrid, UI_BotSelectMenu_BuildList
int		bss_78144; // Used by: UI_BotSelectMenu_RightEvent, UI_BotSelectMenu_UpdateGrid, UI_BotSelectMenu_BuildList
int		bss_78148; // Used by: UI_BotSelectMenu_Init, UI_BotSelectMenu_SelectEvent, UI_BotSelectMenu_BotEvent, UI_BotSelectMenu_RightEvent, UI_BotSelectMenu_LeftEvent, UI_BotSelectMenu_Default, UI_BotSelectMenu_UpdateGrid
char	bss_7814c[5376];
char	s_serveroptions[276];
int		bss_79760; // Used by: ServerOptions_MenuInit
int		bss_79764; // Used by: ServerOptions_MenuInit
int		bss_79768;
int		bss_7976c; // Used by: ServerOptions_MenuInit
char	bss_79770[8];
int		bss_79778; // Used by: ServerOptions_MenuInit
int		bss_7977c; // Used by: ServerOptions_MenuInit
char	bss_79780[40];
int		bss_797a8; // Used by: ServerOptions_MenuInit
int		bss_797ac; // Used by: ServerOptions_MenuInit
int		bss_797b0; // Used by: ServerOptions_MenuInit
int		bss_797b4; // Used by: ServerOptions_MenuInit
int		bss_797b8; // Used by: ServerOptions_SetMenuItems
int		bss_797bc;
int		bss_797c0; // Used by: ServerOptions_MenuInit
int		bss_797c4; // Used by: ServerOptions_MenuInit
char	bss_797c8[24];
int		bss_797e0; // Used by: ServerOptions_MenuInit
char	bss_797e4[8];
int		bss_797ec; // Used by: ServerOptions_MenuInit
int		bss_797f0;
int		bss_797f4; // Used by: ServerOptions_MenuInit
char	bss_797f8[8];
int		bss_79800; // Used by: ServerOptions_MenuInit
int		bss_79804; // Used by: ServerOptions_MenuInit
int		bss_79808;
int		bss_7980c; // Used by: ServerOptions_MenuInit
char	bss_79810[8];
int		bss_79818; // Used by: ServerOptions_MenuInit
int		bss_7981c; // Used by: ServerOptions_MenuInit
char	bss_79820[24];
int		bss_79838; // Used by: ServerOptions_MenuInit
char	bss_7983c[12];
int		bss_79848; // Used by: ServerOptions_MenuInit
char	bss_7984c[12];
int		bss_79858; // Used by: ServerOptions_MenuInit
int		bss_7985c; // Used by: ServerOptions_MenuInit
int		bss_79860;
int		bss_79864; // Used by: ServerOptions_MenuInit
int		bss_79868; // Used by: ServerOptions_MenuInit
int		bss_7986c; // Used by: ServerOptions_MenuInit
int		bss_79870; // Used by: ServerOptions_MenuInit
int		bss_79874; // Used by: ServerOptions_MenuInit
char	bss_79878[24];
int		bss_79890; // Used by: ServerOptions_MenuInit
int		bss_79894; // Used by: ServerOptions_MenuInit
char	bss_79898[12];
int		bss_798a4; // Used by: ServerOptions_SetPlayerItems, ServerOptions_InitPlayerItems, ServerOptions_Start
char	bss_798a8[8];
int		bss_798b0; // Used by: ServerOptions_MenuInit
char	bss_798b4[16];
int		bss_798c4; // Used by: ServerOptions_MenuInit
int		bss_798c8; // Used by: ServerOptions_MenuInit
int		bss_798cc;
int		bss_798d0; // Used by: ServerOptions_MenuInit
int		bss_798d4; // Used by: ServerOptions_MenuInit
char	bss_798d8[24];
int		bss_798f0; // Used by: ServerOptions_MenuInit
int		bss_798f4;
int		bss_798f8; // Used by: ServerOptions_MenuInit
char	bss_798fc[12];
int		bss_79908; // Used by: ServerOptions_MenuInit
char	bss_7990c[256];
int		bss_79a0c; // Used by: ServerOptions_MenuInit
int		bss_79a10; // Used by: ServerOptions_MenuInit
int		bss_79a14; // Used by: ServerOptions_MenuInit
int		bss_79a18;
int		bss_79a1c; // Used by: ServerOptions_MenuInit
int		bss_79a20; // Used by: ServerOptions_MenuInit
char	bss_79a24[24];
int		bss_79a3c; // Used by: ServerOptions_MenuInit
int		bss_79a40;
int		bss_79a44; // Used by: ServerOptions_MenuInit
char	bss_79a48[12];
int		bss_79a54; // Used by: ServerOptions_MenuInit
char	bss_79a58[256];
int		bss_79b58; // Used by: ServerOptions_MenuInit
int		bss_79b5c; // Used by: ServerOptions_MenuInit
int		bss_79b60; // Used by: ServerOptions_MenuInit
int		bss_79b64;
int		bss_79b68; // Used by: ServerOptions_MenuInit
int		bss_79b6c; // Used by: ServerOptions_MenuInit
char	bss_79b70[24];
int		bss_79b88; // Used by: ServerOptions_MenuInit
int		bss_79b8c;
int		bss_79b90; // Used by: ServerOptions_MenuInit
char	bss_79b94[12];
int		bss_79ba0; // Used by: ServerOptions_MenuInit
char	bss_79ba4[256];
int		bss_79ca4; // Used by: ServerOptions_MenuInit
int		bss_79ca8; // Used by: ServerOptions_MenuInit
int		bss_79cac; // Used by: ServerOptions_MenuInit
int		bss_79cb0;
int		bss_79cb4; // Used by: ServerOptions_MenuInit
int		bss_79cb8; // Used by: ServerOptions_MenuInit
char	bss_79cbc[24];
int		bss_79cd4; // Used by: ServerOptions_MenuInit
char	bss_79cd8[12];
int		bss_79ce4; // Used by: ServerOptions_SetMenuItems, ServerOptions_Start
int		bss_79ce8; // Used by: ServerOptions_MenuInit
int		bss_79cec; // Used by: ServerOptions_MenuInit
int		bss_79cf0;
int		bss_79cf4; // Used by: ServerOptions_MenuInit
int		bss_79cf8; // Used by: ServerOptions_MenuInit
char	bss_79cfc[24];
int		bss_79d14; // Used by: ServerOptions_MenuInit
char	bss_79d18[20];
int		bss_79d2c; // Used by: ServerOptions_MenuInit
char	bss_79d30[256];
int		bss_79e30; // Used by: ServerOptions_MenuInit
int		bss_79e34; // Used by: ServerOptions_MenuInit
int		bss_79e38; // Used by: ServerOptions_MenuInit
int		bss_79e3c;
int		bss_79e40; // Used by: ServerOptions_MenuInit
int		bss_79e44; // Used by: ServerOptions_MenuInit
char	bss_79e48[24];
int		bss_79e60; // Used by: ServerOptions_MenuInit
char	bss_79e64[12];
int		bss_79e70; // Used by: ServerOptions_SetMenuItems, ServerOptions_Start
int		bss_79e74; // Used by: ServerOptions_MenuInit
int		bss_79e78; // Used by: ServerOptions_MenuInit
int		bss_79e7c;
int		bss_79e80; // Used by: ServerOptions_MenuInit
int		bss_79e84; // Used by: ServerOptions_MenuInit
char	bss_79e88[24];
int		bss_79ea0; // Used by: ServerOptions_MenuInit
char	bss_79ea4[16];
int		bss_79eb4; // Used by: ServerOptions_MenuInit, ServerOptions_Start
char	bss_79eb8[8];
int		bss_79ec0; // Used by: ServerOptions_MenuInit
char	bss_79ec4[16];
int		bss_79ed4; // Used by: ServerOptions_MenuInit
char	bss_79ed8[8];
int		bss_79ee0; // Used by: ServerOptions_MenuInit
int		bss_79ee4; // Used by: ServerOptions_MenuInit
char	bss_79ee8[24];
int		bss_79f00; // Used by: ServerOptions_MenuInit
char	bss_79f04[12];
int		bss_79f10; // Used by: ServerOptions_SetPlayerItems
int		bss_79f14; // Used by: ServerOptions_MenuInit
int		bss_79f18; // Used by: ServerOptions_MenuInit
char	bss_79f1c[64];
int		bss_79f5c; // Used by: ServerOptions_InitPlayerItems
char	bss_79f60[284];
int		bss_7a07c; // Used by: ServerOptions_InitBotNames
char	bss_7a080[92];
int		bss_7a0dc; // Used by: ServerOptions_InitBotNames
char	bss_7a0e0[92];
int		bss_7a13c; // Used by: ServerOptions_InitBotNames
char	bss_7a140[380];
int		bss_7a2bc; // Used by: ServerOptions_InitBotNames
char	bss_7a2c0[92];
int		bss_7a31c; // Used by: ServerOptions_InitBotNames
char	bss_7a320[92];
int		bss_7a37c; // Used by: ServerOptions_InitBotNames
char	bss_7a380[956];
int		bss_7a73c; // Used by: ServerOptions_Start
char	bss_7a740[1084];
int		bss_7ab7c; // Used by: ServerOptions_MenuInit
int		bss_7ab80; // Used by: ServerOptions_MenuInit
int		bss_7ab84; // Used by: ServerOptions_MenuInit
int		bss_7ab88; // Used by: ServerOptions_MenuInit
int		bss_7ab8c; // Used by: ServerOptions_MenuInit
char	bss_7ab90[24];
int		bss_7aba8; // Used by: ServerOptions_MenuInit
int		bss_7abac; // Used by: ServerOptions_MenuInit
char	bss_7abb0[8];
int		bss_7abb8; // Used by: ServerOptions_MenuInit
char	bss_7abbc[12];
int		bss_7abc8; // Used by: ServerOptions_MenuInit
int		bss_7abcc; // Used by: ServerOptions_MenuInit
int		bss_7abd0;
int		bss_7abd4; // Used by: ServerOptions_MenuInit
int		bss_7abd8; // Used by: ServerOptions_MenuInit
int		bss_7abdc; // Used by: ServerOptions_MenuInit
int		bss_7abe0; // Used by: ServerOptions_MenuInit
int		bss_7abe4; // Used by: ServerOptions_MenuInit
char	bss_7abe8[24];
int		bss_7ac00; // Used by: ServerOptions_MenuInit
int		bss_7ac04; // Used by: ServerOptions_MenuInit
int		bss_7ac08; // Used by: ServerOptions_MenuInit
int		bss_7ac0c;
int		bss_7ac10; // Used by: ServerOptions_MenuInit
char	bss_7ac14[12];
int		bss_7ac20; // Used by: ServerOptions_MenuInit
int		bss_7ac24; // Used by: ServerOptions_MenuInit
int		bss_7ac28;
int		bss_7ac2c; // Used by: ServerOptions_MenuInit
int		bss_7ac30; // Used by: ServerOptions_MenuInit
int		bss_7ac34; // Used by: ServerOptions_MenuInit
int		bss_7ac38; // Used by: ServerOptions_MenuInit
int		bss_7ac3c; // Used by: ServerOptions_MenuInit
char	bss_7ac40[24];
int		bss_7ac58; // Used by: ServerOptions_MenuInit
int		bss_7ac5c; // Used by: ServerOptions_MenuInit
char	bss_7ac60[8];
int		bss_7ac68; // Used by: ServerOptions_MenuInit
char	bss_7ac6c[12];
int		bss_7ac78; // Used by: ServerOptions_MenuInit
int		bss_7ac7c; // Used by: ServerOptions_MenuInit
int		bss_7ac80;
int		bss_7ac84; // Used by: ServerOptions_MenuInit, ServerOptions_InitPlayerItems
int		bss_7ac88; // Used by: ServerOptions_MenuInit, ServerOptions_SetMenuItems, ServerOptions_InitBotNames, ServerOptions_LevelshotDraw, ServerOptions_SetPlayerItems, ServerOptions_InitPlayerItems, ServerOptions_Start, BotAlreadySelected
char	bss_7ac8c[224];
int		bss_7ad6c; // Used by: UI_BotSelectMenu_SelectEvent, ServerOptions_LevelshotDraw
int		bss_7ad70; // Used by: ServerOptions_LevelshotDraw, ServerOptions_PlayerNameEvent, BotAlreadySelected
char	bss_7ad74[16];
int		bss_7ad84; // Used by: ServerOptions_MenuInit
int		bss_7ad88; // Used by: ServerOptions_MenuInit
int		bss_7ad8c; // Used by: ServerOptions_MenuInit
int		bss_7ad90; // Used by: ServerOptions_MenuInit
int		bss_7ad94; // Used by: ServerOptions_MenuInit
char	bss_7ad98[24];
int		bss_7adb0; // Used by: ServerOptions_MenuInit
char	bss_7adb4[16];
int		bss_7adc4; // Used by: ServerOptions_MenuInit, ServerOptions_Start
char	bss_7adc8[8];
int		bss_7add0; // Used by: ServerOptions_MenuInit
char	bss_7add4[16];
char	s_startserver[276];
int		bss_7aef8; // Used by: StartServer_MenuInit
int		bss_7aefc; // Used by: StartServer_MenuInit
int		bss_7af00;
int		bss_7af04; // Used by: StartServer_MenuInit
char	bss_7af08[8];
int		bss_7af10; // Used by: StartServer_MenuInit
int		bss_7af14; // Used by: StartServer_MenuInit
char	bss_7af18[40];
int		bss_7af40; // Used by: StartServer_MenuInit
int		bss_7af44; // Used by: StartServer_MenuInit
int		bss_7af48; // Used by: StartServer_MenuInit
int		bss_7af4c; // Used by: StartServer_MenuInit
int		bss_7af50; // Used by: StartServer_MenuInit
int		bss_7af54;
int		bss_7af58; // Used by: StartServer_MenuInit
int		bss_7af5c; // Used by: StartServer_MenuInit
char	bss_7af60[24];
int		bss_7af78; // Used by: StartServer_MenuInit
char	bss_7af7c[28];
int		bss_7af98; // Used by: StartServer_MenuInit
int		bss_7af9c; // Used by: StartServer_MenuInit
int		bss_7afa0;
int		bss_7afa4; // Used by: StartServer_MenuInit
int		bss_7afa8; // Used by: StartServer_MenuInit
int		bss_7afac;
int		bss_7afb0; // Used by: StartServer_MenuInit
int		bss_7afb4; // Used by: StartServer_MenuInit
char	bss_7afb8[24];
int		bss_7afd0; // Used by: StartServer_MenuInit
char	bss_7afd4[28];
int		bss_7aff0; // Used by: StartServer_MenuInit
int		bss_7aff4; // Used by: StartServer_MenuInit
int		bss_7aff8;
int		bss_7affc; // Used by: StartServer_MenuInit
int		bss_7b000; // Used by: StartServer_MenuInit
int		bss_7b004; // Used by: StartServer_MenuInit
int		bss_7b008; // Used by: StartServer_MenuInit
int		bss_7b00c; // Used by: StartServer_MenuInit
char	bss_7b010[24];
int		bss_7b028; // Used by: StartServer_MenuInit
int		bss_7b02c; // Used by: StartServer_MenuInit
char	bss_7b030[12];
int		bss_7b03c; // Used by: StartServer_MenuEvent, StartServer_GametypeEvent
char	bss_7b040[8];
int		bss_7b048; // Used by: StartServer_MenuInit
char	bss_7b04c[720];
int		bss_7b31c; // Used by: StartServer_MenuInit
int		bss_7b320; // Used by: StartServer_MenuInit
int		bss_7b324;
int		bss_7b328; // Used by: StartServer_MenuInit
int		bss_7b32c; // Used by: StartServer_MenuInit
char	bss_7b330[24];
int		bss_7b348; // Used by: StartServer_MenuInit
char	bss_7b34c[28];
int		bss_7b368; // Used by: StartServer_MenuInit
int		bss_7b36c; // Used by: StartServer_MenuInit
int		bss_7b370;
int		bss_7b374; // Used by: StartServer_MenuInit
int		bss_7b378;
int		bss_7b37c; // Used by: StartServer_MenuInit
int		bss_7b380; // Used by: StartServer_MenuInit
int		bss_7b384; // Used by: StartServer_MenuInit
char	bss_7b388[24];
int		bss_7b3a0; // Used by: StartServer_MenuInit
int		bss_7b3a4; // Used by: StartServer_MenuInit
char	bss_7b3a8[8];
int		bss_7b3b0; // Used by: StartServer_MenuInit
char	bss_7b3b4[12];
int		bss_7b3c0; // Used by: StartServer_MenuInit
int		bss_7b3c4; // Used by: StartServer_MenuInit
int		bss_7b3c8;
int		bss_7b3cc; // Used by: StartServer_MenuInit
int		bss_7b3d0;
int		bss_7b3d4; // Used by: StartServer_MenuInit
int		bss_7b3d8; // Used by: StartServer_MenuInit
int		bss_7b3dc; // Used by: StartServer_MenuInit
char	bss_7b3e0[24];
int		bss_7b3f8; // Used by: StartServer_MenuInit
int		bss_7b3fc; // Used by: StartServer_MenuInit
char	bss_7b400[8];
int		bss_7b408; // Used by: StartServer_MenuInit
char	bss_7b40c[12];
int		bss_7b418; // Used by: StartServer_MenuInit
int		bss_7b41c; // Used by: StartServer_MenuInit
int		bss_7b420;
int		bss_7b424; // Used by: StartServer_MenuInit
int		bss_7b428; // Used by: StartServer_MenuInit
int		bss_7b42c; // Used by: StartServer_MenuInit
int		bss_7b430; // Used by: StartServer_MenuInit
int		bss_7b434; // Used by: StartServer_MenuInit
char	bss_7b438[24];
int		bss_7b450; // Used by: StartServer_MenuInit
int		bss_7b454; // Used by: StartServer_MenuInit
char	bss_7b458[8];
int		bss_7b460; // Used by: StartServer_MenuInit
char	bss_7b464[12];
int		bss_7b470; // Used by: StartServer_MenuInit
int		bss_7b474; // Used by: StartServer_MenuInit
int		bss_7b478;
int		bss_7b47c; // Used by: StartServer_MenuInit
int		bss_7b480; // Used by: StartServer_MenuInit
int		bss_7b484; // Used by: StartServer_MenuInit
int		bss_7b488; // Used by: StartServer_MenuInit
int		bss_7b48c; // Used by: StartServer_MenuInit
char	bss_7b490[24];
int		bss_7b4a8; // Used by: StartServer_MenuInit
int		bss_7b4ac; // Used by: StartServer_MenuInit
char	bss_7b4b0[8];
int		bss_7b4b8; // Used by: StartServer_MenuInit
char	bss_7b4bc[12];
int		bss_7b4c8; // Used by: StartServer_MenuInit
int		bss_7b4cc; // Used by: StartServer_MenuInit
int		bss_7b4d0;
int		bss_7b4d4; // Used by: StartServer_MenuInit
char	bss_7b4d8[8];
int		bss_7b4e0; // Used by: StartServer_MenuInit
int		bss_7b4e4; // Used by: StartServer_MenuInit
char	bss_7b4e8[24];
int		bss_7b500; // Used by: StartServer_MenuInit
char	bss_7b504[12];
int		bss_7b510; // Used by: ServerOptions_SetMenuItems, StartServer_MenuInit, StartServer_Update
int		bss_7b514; // Used by: StartServer_MenuInit
int		bss_7b518; // Used by: StartServer_MenuInit
int		bss_7b51c; // Used by: StartServer_MenuInit
char	bss_7b520[8];
int		bss_7b528; // Used by: StartServer_MenuInit
int		bss_7b52c; // Used by: StartServer_MenuInit
char	bss_7b530[24];
int		bss_7b548; // Used by: StartServer_MenuInit
char	bss_7b54c[28];
int		bss_7b568; // Used by: StartServer_MenuInit
int		bss_7b56c; // Used by: StartServer_MenuInit
int		bss_7b570;
int		bss_7b574; // Used by: UI_StartServerMenu, StartServer_MenuEvent
int		bss_7b578; // Used by: ServerOptions_SetMenuItems, ServerOptions_Start, StartServer_GametypeEvent, StartServer_MapEvent, StartServer_Update
int		bss_7b57c; // Used by: StartServer_GametypeEvent, StartServer_Update
int		bss_7b580; // Used by: StartServer_LevelshotDraw, StartServer_MenuEvent, StartServer_GametypeEvent, StartServer_MapEvent, StartServer_Update
int		bss_7b584; // Used by: StartServer_MenuEvent, StartServer_GametypeEvent
char	bss_7b588[4096];
char	s_teammain[276];
int		bss_7c69c; // Used by: TeamMain_MenuInit
int		bss_7c6a0; // Used by: TeamMain_MenuInit
int		bss_7c6a4;
int		bss_7c6a8; // Used by: TeamMain_MenuInit
int		bss_7c6ac; // Used by: TeamMain_MenuInit
int		bss_7c6b0;
int		bss_7c6b4; // Used by: TeamMain_MenuInit
int		bss_7c6b8; // Used by: TeamMain_MenuInit
char	bss_7c6bc[24];
int		bss_7c6d4; // Used by: TeamMain_MenuInit
char	bss_7c6d8[28];
int		bss_7c6f4; // Used by: TeamMain_MenuInit
int		bss_7c6f8; // Used by: TeamMain_MenuInit
int		bss_7c6fc;
int		bss_7c700; // Used by: TeamMain_MenuInit
int		bss_7c704;
int		bss_7c708; // Used by: TeamMain_MenuInit
int		bss_7c70c; // Used by: TeamMain_MenuInit
int		bss_7c710; // Used by: TeamMain_MenuInit
char	bss_7c714[24];
int		bss_7c72c; // Used by: TeamMain_MenuInit
int		bss_7c730; // Used by: TeamMain_MenuInit
char	bss_7c734[8];
int		bss_7c73c; // Used by: TeamMain_MenuInit
int		bss_7c740; // Used by: TeamMain_MenuInit
int		bss_7c744; // Used by: TeamMain_MenuInit
int		bss_7c748; // Used by: TeamMain_MenuInit
int		bss_7c74c;
int		bss_7c750; // Used by: TeamMain_MenuInit
int		bss_7c754; // Used by: TeamMain_MenuInit
int		bss_7c758; // Used by: TeamMain_MenuInit
char	bss_7c75c[24];
int		bss_7c774; // Used by: TeamMain_MenuInit
int		bss_7c778; // Used by: TeamMain_MenuInit
char	bss_7c77c[8];
int		bss_7c784; // Used by: TeamMain_MenuInit
int		bss_7c788; // Used by: TeamMain_MenuInit
int		bss_7c78c; // Used by: TeamMain_MenuInit
int		bss_7c790; // Used by: TeamMain_MenuInit
int		bss_7c794;
int		bss_7c798; // Used by: TeamMain_MenuInit
int		bss_7c79c; // Used by: TeamMain_MenuInit
int		bss_7c7a0; // Used by: TeamMain_MenuInit
char	bss_7c7a4[24];
int		bss_7c7bc; // Used by: TeamMain_MenuInit
int		bss_7c7c0; // Used by: TeamMain_MenuInit
char	bss_7c7c4[8];
int		bss_7c7cc; // Used by: TeamMain_MenuInit
int		bss_7c7d0; // Used by: TeamMain_MenuInit
int		bss_7c7d4; // Used by: TeamMain_MenuInit
int		bss_7c7d8; // Used by: TeamMain_MenuInit
int		bss_7c7dc;
int		bss_7c7e0; // Used by: TeamMain_MenuInit
int		bss_7c7e4; // Used by: TeamMain_MenuInit
int		bss_7c7e8; // Used by: TeamMain_MenuInit
char	bss_7c7ec[24];
int		bss_7c804; // Used by: TeamMain_MenuInit
int		bss_7c808; // Used by: TeamMain_MenuInit
char	bss_7c80c[8];
int		bss_7c814; // Used by: TeamMain_MenuInit
int		bss_7c818; // Used by: TeamMain_MenuInit
int		bss_7c81c; // Used by: TeamMain_MenuInit
char	teamOrdersMenuInfo[272];
int		bss_7c930; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c934;
int		bss_7c938; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c93c;
int		bss_7c940; // Used by: UI_TeamOrdersMenu_Init
char	bss_7c944[8];
int		bss_7c94c; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c950; // Used by: UI_TeamOrdersMenu_Init
char	bss_7c954[40];
int		bss_7c97c; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c980; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c984; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c988; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c98c; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c990;
int		bss_7c994; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c998; // Used by: UI_TeamOrdersMenu_Init
char	bss_7c99c[24];
int		bss_7c9b4; // Used by: UI_TeamOrdersMenu_Init
char	bss_7c9b8[28];
int		bss_7c9d4; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c9d8; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c9dc;
int		bss_7c9e0; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c9e4;
int		bss_7c9e8; // Used by: UI_TeamOrdersMenu_SetList
int		bss_7c9ec; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c9f0; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c9f4; // Used by: UI_TeamOrdersMenu_Init
int		bss_7c9f8; // Used by: UI_TeamOrdersMenu_Init, UI_TeamOrdersMenu_SetList
int		bss_7c9fc; // Used by: UI_TeamOrdersMenu_Init
int		bss_7ca00; // Used by: UI_TeamOrdersMenu_SetList
char	bss_7ca04[8];
int		bss_7ca0c; // Used by: UI_TeamOrdersMenu_Init
int		bss_7ca10; // Used by: UI_TeamOrdersMenu_Init
int		bss_7ca14;
int		bss_7ca18; // Used by: UI_TeamOrdersMenu_Init
char	bss_7ca1c[8];
int		bss_7ca24; // Used by: UI_TeamOrdersMenu_SetList
int		bss_7ca28;
int		bss_7ca2c; // Used by: UI_TeamOrdersMenu_SetList
char	bss_7ca30[16];
int		bss_7ca40; // Used by: UI_TeamOrdersMenu_Init
int		bss_7ca44; // Used by: UI_TeamOrdersMenu_Init
int		bss_7ca48;
int		bss_7ca4c; // Used by: UI_TeamOrdersMenu_Init
int		bss_7ca50; // Used by: UI_TeamOrdersMenu_Init
char	bss_7ca54[24];
int		bss_7ca6c; // Used by: UI_TeamOrdersMenu_Init
int		bss_7ca70; // Used by: UI_TeamOrdersMenu_Init
char	bss_7ca74[8];
int		bss_7ca7c; // Used by: UI_TeamOrdersMenu_Init
char	bss_7ca80[12];
int		bss_7ca8c; // Used by: UI_TeamOrdersMenu_Init
int		bss_7ca90; // Used by: UI_TeamOrdersMenu_Init
int		bss_7ca94;
int		bss_7ca98; // Used by: UI_TeamOrdersMenu_f, UI_TeamOrdersMenu_BuildBotList, UI_TeamOrdersMenu_ListEvent
int		bss_7ca9c; // Used by: UI_TeamOrdersMenu_BuildBotList, UI_TeamOrdersMenu_SetList
int		bss_7caa0; // Used by: UI_TeamOrdersMenu_ListEvent
char	bss_7caa4[180];
char	currentResolution[20];
char	detectedResolutions[128];
char	resbuf[1024]; // Used by: GraphicsOptions_GetResolutions
char	resToRatio[128];
char	ratioToRes[128];
char	ratioBuf[256];
char	ratios[128];
char	s_graphicsoptions[268];
int		bss_7d378; // Used by: GraphicsOptions_MenuInit
int		bss_7d37c;
int		bss_7d380; // Used by: GraphicsOptions_MenuInit
int		bss_7d384; // Used by: GraphicsOptions_MenuInit
int		bss_7d388;
int		bss_7d38c; // Used by: GraphicsOptions_MenuInit
char	bss_7d390[8];
int		bss_7d398; // Used by: GraphicsOptions_MenuInit
int		bss_7d39c; // Used by: GraphicsOptions_MenuInit
char	bss_7d3a0[40];
int		bss_7d3c8; // Used by: GraphicsOptions_MenuInit
int		bss_7d3cc; // Used by: GraphicsOptions_MenuInit
int		bss_7d3d0; // Used by: GraphicsOptions_MenuInit
int		bss_7d3d4; // Used by: GraphicsOptions_MenuInit
int		bss_7d3d8; // Used by: GraphicsOptions_MenuInit
int		bss_7d3dc;
int		bss_7d3e0; // Used by: GraphicsOptions_MenuInit
int		bss_7d3e4; // Used by: GraphicsOptions_MenuInit
char	bss_7d3e8[24];
int		bss_7d400; // Used by: GraphicsOptions_MenuInit
char	bss_7d404[28];
int		bss_7d420; // Used by: GraphicsOptions_MenuInit
int		bss_7d424; // Used by: GraphicsOptions_MenuInit
int		bss_7d428;
int		bss_7d42c; // Used by: GraphicsOptions_MenuInit
int		bss_7d430; // Used by: GraphicsOptions_MenuInit
int		bss_7d434;
int		bss_7d438; // Used by: GraphicsOptions_MenuInit
int		bss_7d43c; // Used by: GraphicsOptions_MenuInit
char	bss_7d440[24];
int		bss_7d458; // Used by: GraphicsOptions_MenuInit
char	bss_7d45c[28];
int		bss_7d478; // Used by: GraphicsOptions_MenuInit
int		bss_7d47c; // Used by: GraphicsOptions_MenuInit
int		bss_7d480;
int		bss_7d484; // Used by: GraphicsOptions_MenuInit
int		bss_7d488;
int		bss_7d48c; // Used by: GraphicsOptions_MenuInit
int		bss_7d490; // Used by: GraphicsOptions_MenuInit
int		bss_7d494; // Used by: GraphicsOptions_MenuInit
char	bss_7d498[24];
int		bss_7d4b0; // Used by: GraphicsOptions_MenuInit
int		bss_7d4b4; // Used by: GraphicsOptions_MenuInit
char	bss_7d4b8[8];
int		bss_7d4c0; // Used by: GraphicsOptions_MenuInit
int		bss_7d4c4; // Used by: GraphicsOptions_MenuInit
int		bss_7d4c8; // Used by: GraphicsOptions_MenuInit
int		bss_7d4cc; // Used by: GraphicsOptions_MenuInit
int		bss_7d4d0;
int		bss_7d4d4; // Used by: GraphicsOptions_MenuInit
int		bss_7d4d8; // Used by: GraphicsOptions_MenuInit
int		bss_7d4dc; // Used by: GraphicsOptions_MenuInit
char	bss_7d4e0[24];
int		bss_7d4f8; // Used by: GraphicsOptions_MenuInit
int		bss_7d4fc; // Used by: GraphicsOptions_MenuInit
char	bss_7d500[8];
int		bss_7d508; // Used by: GraphicsOptions_MenuInit
int		bss_7d50c; // Used by: GraphicsOptions_MenuInit
int		bss_7d510; // Used by: GraphicsOptions_MenuInit
int		bss_7d514; // Used by: GraphicsOptions_MenuInit
int		bss_7d518;
int		bss_7d51c; // Used by: GraphicsOptions_MenuInit
int		bss_7d520; // Used by: GraphicsOptions_MenuInit
int		bss_7d524; // Used by: GraphicsOptions_MenuInit
char	bss_7d528[24];
int		bss_7d540; // Used by: GraphicsOptions_MenuInit
int		bss_7d544; // Used by: GraphicsOptions_MenuInit
char	bss_7d548[8];
int		bss_7d550; // Used by: GraphicsOptions_MenuInit
int		bss_7d554; // Used by: GraphicsOptions_MenuInit
int		bss_7d558; // Used by: GraphicsOptions_MenuInit
int		bss_7d55c; // Used by: GraphicsOptions_MenuInit
int		bss_7d560;
int		bss_7d564; // Used by: GraphicsOptions_MenuInit
int		bss_7d568; // Used by: GraphicsOptions_MenuInit
int		bss_7d56c; // Used by: GraphicsOptions_MenuInit
char	bss_7d570[24];
int		bss_7d588; // Used by: GraphicsOptions_MenuInit
int		bss_7d58c; // Used by: GraphicsOptions_MenuInit
char	bss_7d590[8];
int		bss_7d598; // Used by: GraphicsOptions_MenuInit
int		bss_7d59c; // Used by: GraphicsOptions_MenuInit
int		bss_7d5a0; // Used by: GraphicsOptions_MenuInit
int		bss_7d5a4; // Used by: GraphicsOptions_MenuInit
int		bss_7d5a8; // Used by: GraphicsOptions_MenuInit
int		bss_7d5ac; // Used by: GraphicsOptions_MenuInit
int		bss_7d5b0; // Used by: GraphicsOptions_MenuInit
int		bss_7d5b4; // Used by: GraphicsOptions_MenuInit
char	bss_7d5b8[24];
int		bss_7d5d0; // Used by: GraphicsOptions_MenuInit
int		bss_7d5d4; // Used by: GraphicsOptions_MenuInit
char	bss_7d5d8[12];
int		bss_7d5e4; // Used by: GraphicsOptions_Event, GraphicsOptions_CheckConfig
char	bss_7d5e8[8];
int		bss_7d5f0; // Used by: GraphicsOptions_MenuInit
char	bss_7d5f4[16];
int		bss_7d604; // Used by: GraphicsOptions_MenuInit
int		bss_7d608; // Used by: GraphicsOptions_MenuInit
int		bss_7d60c; // Used by: GraphicsOptions_MenuInit
int		bss_7d610; // Used by: GraphicsOptions_MenuInit
int		bss_7d614; // Used by: GraphicsOptions_MenuInit
char	bss_7d618[24];
int		bss_7d630; // Used by: GraphicsOptions_MenuInit
int		bss_7d634; // Used by: GraphicsOptions_MenuInit
char	bss_7d638[12];
int		bss_7d644; // Used by: GraphicsOptions_SetMenuItems, GraphicsOptions_Event
char	bss_7d648[8];
int		bss_7d650; // Used by: GraphicsOptions_MenuInit
char	bss_7d654[16];
int		bss_7d664; // Used by: GraphicsOptions_MenuInit
int		bss_7d668; // Used by: GraphicsOptions_MenuInit
int		bss_7d66c; // Used by: GraphicsOptions_MenuInit
int		bss_7d670; // Used by: GraphicsOptions_MenuInit
int		bss_7d674; // Used by: GraphicsOptions_MenuInit
char	bss_7d678[24];
int		bss_7d690; // Used by: GraphicsOptions_MenuInit
int		bss_7d694; // Used by: GraphicsOptions_MenuInit
char	bss_7d698[12];
int		bss_7d6a4; // Used by: GraphicsOptions_SetMenuItems, GraphicsOptions_Event, GraphicsOptions_ApplyChanges, GraphicsOptions_UpdateMenuItems, GraphicsOptions_CheckConfig, GraphicsOptions_GetInitialVideo
char	bss_7d6a8[8];
int		bss_7d6b0; // Used by: GraphicsOptions_MenuInit
char	bss_7d6b4[16];
int		bss_7d6c4; // Used by: GraphicsOptions_MenuInit
int		bss_7d6c8; // Used by: GraphicsOptions_MenuInit
int		bss_7d6cc;
int		bss_7d6d0; // Used by: GraphicsOptions_MenuInit
int		bss_7d6d4; // Used by: GraphicsOptions_MenuInit
char	bss_7d6d8[24];
int		bss_7d6f0; // Used by: GraphicsOptions_MenuInit
char	bss_7d6f4[16];
int		bss_7d704; // Used by: GraphicsOptions_MenuInit, GraphicsOptions_SetMenuItems, GraphicsOptions_Event, GraphicsOptions_UpdateMenuItems, GraphicsOptions_CheckConfig, GraphicsOptions_GetInitialVideo
char	bss_7d708[8];
int		bss_7d710; // Used by: GraphicsOptions_MenuInit
char	bss_7d714[16];
int		bss_7d724; // Used by: GraphicsOptions_MenuInit
int		bss_7d728; // Used by: GraphicsOptions_MenuInit
int		bss_7d72c;
int		bss_7d730; // Used by: GraphicsOptions_MenuInit
int		bss_7d734; // Used by: GraphicsOptions_MenuInit
char	bss_7d738[24];
int		bss_7d750; // Used by: GraphicsOptions_MenuInit
int		bss_7d754; // Used by: GraphicsOptions_MenuInit
char	bss_7d758[8];
int		bss_7d760; // Used by: GraphicsOptions_MenuInit
int		bss_7d764; // Used by: GraphicsOptions_MenuInit
int		bss_7d768; // Used by: GraphicsOptions_SetMenuItems, GraphicsOptions_TQEvent, GraphicsOptions_Event, GraphicsOptions_ApplyChanges, GraphicsOptions_UpdateMenuItems, GraphicsOptions_CheckConfig, GraphicsOptions_GetInitialVideo
int		bss_7d76c;
int		bss_7d770; // Used by: GraphicsOptions_MenuInit
int		bss_7d774; // Used by: GraphicsOptions_MenuInit
int		bss_7d778;
int		bss_7d77c; // Used by: GraphicsOptions_MenuInit
int		bss_7d780; // Used by: GraphicsOptions_MenuInit
char	bss_7d784[24];
int		bss_7d79c; // Used by: GraphicsOptions_MenuInit
char	bss_7d7a0[16];
int		bss_7d7b0; // Used by: GraphicsOptions_SetMenuItems, GraphicsOptions_Event, GraphicsOptions_ApplyChanges, GraphicsOptions_UpdateMenuItems, GraphicsOptions_CheckConfig, GraphicsOptions_GetInitialVideo
char	bss_7d7b4[8];
int		bss_7d7bc; // Used by: GraphicsOptions_MenuInit
char	bss_7d7c0[16];
int		bss_7d7d0; // Used by: GraphicsOptions_MenuInit
int		bss_7d7d4; // Used by: GraphicsOptions_MenuInit
int		bss_7d7d8;
int		bss_7d7dc; // Used by: GraphicsOptions_MenuInit
int		bss_7d7e0; // Used by: GraphicsOptions_MenuInit
char	bss_7d7e4[24];
int		bss_7d7fc; // Used by: GraphicsOptions_MenuInit
char	bss_7d800[16];
int		bss_7d810; // Used by: GraphicsOptions_SetMenuItems, GraphicsOptions_Event, GraphicsOptions_ApplyChanges, GraphicsOptions_UpdateMenuItems, GraphicsOptions_CheckConfig, GraphicsOptions_GetInitialVideo
char	bss_7d814[8];
int		bss_7d81c; // Used by: GraphicsOptions_MenuInit
char	bss_7d820[16];
int		bss_7d830; // Used by: GraphicsOptions_MenuInit
int		bss_7d834; // Used by: GraphicsOptions_MenuInit
int		bss_7d838;
int		bss_7d83c; // Used by: GraphicsOptions_MenuInit
int		bss_7d840; // Used by: GraphicsOptions_MenuInit
char	bss_7d844[24];
int		bss_7d85c; // Used by: GraphicsOptions_MenuInit
char	bss_7d860[16];
int		bss_7d870; // Used by: GraphicsOptions_SetMenuItems, GraphicsOptions_ApplyChanges, GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
char	bss_7d874[8];
int		bss_7d87c; // Used by: GraphicsOptions_MenuInit
char	bss_7d880[16];
int		bss_7d890; // Used by: GraphicsOptions_MenuInit
int		bss_7d894; // Used by: GraphicsOptions_MenuInit
int		bss_7d898;
int		bss_7d89c; // Used by: GraphicsOptions_MenuInit
int		bss_7d8a0; // Used by: GraphicsOptions_MenuInit
char	bss_7d8a4[24];
int		bss_7d8bc; // Used by: GraphicsOptions_MenuInit
char	bss_7d8c0[16];
int		bss_7d8d0; // Used by: GraphicsOptions_SetMenuItems, GraphicsOptions_Event, GraphicsOptions_ApplyChanges, GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
char	bss_7d8d4[8];
int		bss_7d8dc; // Used by: GraphicsOptions_MenuInit
char	bss_7d8e0[16];
int		bss_7d8f0; // Used by: GraphicsOptions_MenuInit
int		bss_7d8f4; // Used by: GraphicsOptions_MenuInit
int		bss_7d8f8;
int		bss_7d8fc; // Used by: GraphicsOptions_MenuInit
int		bss_7d900; // Used by: GraphicsOptions_MenuInit
char	bss_7d904[24];
int		bss_7d91c; // Used by: GraphicsOptions_MenuInit
char	bss_7d920[16];
int		bss_7d930; // Used by: GraphicsOptions_SetMenuItems, GraphicsOptions_Event, GraphicsOptions_ApplyChanges, GraphicsOptions_UpdateMenuItems, GraphicsOptions_CheckConfig, GraphicsOptions_GetInitialVideo
char	bss_7d934[8];
int		bss_7d93c; // Used by: GraphicsOptions_MenuInit
char	bss_7d940[16];
int		bss_7d950; // Used by: GraphicsOptions_MenuInit
int		bss_7d954; // Used by: GraphicsOptions_MenuInit
int		bss_7d958;
int		bss_7d95c; // Used by: GraphicsOptions_MenuInit
int		bss_7d960; // Used by: GraphicsOptions_MenuInit
char	bss_7d964[24];
int		bss_7d97c; // Used by: GraphicsOptions_MenuInit
char	bss_7d980[16];
int		bss_7d990; // Used by: GraphicsOptions_SetMenuItems, GraphicsOptions_Event, GraphicsOptions_ApplyChanges, GraphicsOptions_UpdateMenuItems, GraphicsOptions_CheckConfig, GraphicsOptions_GetInitialVideo
char	bss_7d994[8];
int		bss_7d99c; // Used by: GraphicsOptions_MenuInit
char	bss_7d9a0[16];
int		bss_7d9b0; // Used by: GraphicsOptions_MenuInit
int		bss_7d9b4; // Used by: GraphicsOptions_MenuInit
int		bss_7d9b8;
int		bss_7d9bc; // Used by: GraphicsOptions_MenuInit
int		bss_7d9c0; // Used by: GraphicsOptions_MenuInit
char	bss_7d9c4[24];
int		bss_7d9dc; // Used by: GraphicsOptions_MenuInit
char	bss_7d9e0[16];
int		bss_7d9f0; // Used by: GraphicsOptions_SetMenuItems, GraphicsOptions_Event, GraphicsOptions_ApplyChanges, GraphicsOptions_UpdateMenuItems, GraphicsOptions_CheckConfig, GraphicsOptions_GetInitialVideo
char	bss_7d9f4[8];
int		bss_7d9fc; // Used by: GraphicsOptions_MenuInit
char	bss_7da00[16];
int		bss_7da10; // Used by: GraphicsOptions_MenuInit
int		bss_7da14;
int		bss_7da18; // Used by: GraphicsOptions_MenuInit
int		bss_7da1c; // Used by: GraphicsOptions_MenuInit
int		bss_7da20; // Used by: GraphicsOptions_MenuInit
char	bss_7da24[24];
int		bss_7da3c; // Used by: GraphicsOptions_MenuInit
int		bss_7da40; // Used by: GraphicsOptions_MenuInit
char	bss_7da44[8];
int		bss_7da4c; // Used by: GraphicsOptions_MenuInit
int		bss_7da50; // Used by: GraphicsOptions_MenuInit
int		bss_7da54; // Used by: GraphicsOptions_MenuInit
int		bss_7da58; // Used by: GraphicsOptions_MenuInit
int		bss_7da5c; // Used by: GraphicsOptions_MenuInit
int		bss_7da60;
int		bss_7da64; // Used by: GraphicsOptions_MenuInit
int		bss_7da68; // Used by: GraphicsOptions_MenuInit
char	bss_7da6c[24];
int		bss_7da84; // Used by: GraphicsOptions_MenuInit
int		bss_7da88; // Used by: GraphicsOptions_MenuInit
char	bss_7da8c[8];
int		bss_7da94; // Used by: GraphicsOptions_MenuInit
char	bss_7da98[12];
int		bss_7daa4; // Used by: GraphicsOptions_MenuInit
int		bss_7daa8; // Used by: GraphicsOptions_MenuInit
int		bss_7daac;
int		bss_7dab0; // Used by: GraphicsOptions_MenuInit
int		bss_7dab4; // Used by: GraphicsOptions_MenuInit
int		bss_7dab8; // Used by: GraphicsOptions_MenuInit
int		bss_7dabc; // Used by: GraphicsOptions_MenuInit
int		bss_7dac0; // Used by: GraphicsOptions_MenuInit
char	bss_7dac4[24];
int		bss_7dadc; // Used by: GraphicsOptions_MenuInit
int		bss_7dae0; // Used by: GraphicsOptions_MenuInit
char	bss_7dae4[8];
int		bss_7daec; // Used by: GraphicsOptions_MenuInit
char	bss_7daf0[12];
int		bss_7dafc; // Used by: GraphicsOptions_MenuInit
int		bss_7db00; // Used by: GraphicsOptions_MenuInit
int		bss_7db04;
int		s_ivo; // Used by: GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
int		bss_7db0c; // Used by: GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
int		bss_7db10; // Used by: GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
int		bss_7db14; // Used by: GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
int		bss_7db18; // Used by: GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
int		bss_7db1c; // Used by: GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
int		bss_7db20; // Used by: GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
int		bss_7db24; // Used by: GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
int		bss_7db28; // Used by: GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
int		bss_7db2c; // Used by: GraphicsOptions_UpdateMenuItems, GraphicsOptions_GetInitialVideo
char	s_driverinfo[268];
int		bss_7dc3c; // Used by: UI_DriverInfo_Menu
char	bss_7dc40[8];
int		bss_7dc48; // Used by: UI_DriverInfo_Menu
int		bss_7dc4c;
int		bss_7dc50; // Used by: UI_DriverInfo_Menu
char	bss_7dc54[8];
int		bss_7dc5c; // Used by: UI_DriverInfo_Menu
int		bss_7dc60; // Used by: UI_DriverInfo_Menu
char	bss_7dc64[40];
int		bss_7dc8c; // Used by: UI_DriverInfo_Menu
int		bss_7dc90; // Used by: UI_DriverInfo_Menu
int		bss_7dc94; // Used by: UI_DriverInfo_Menu
int		bss_7dc98; // Used by: UI_DriverInfo_Menu
int		bss_7dc9c; // Used by: UI_DriverInfo_Menu
int		bss_7dca0; // Used by: UI_DriverInfo_Menu
int		bss_7dca4; // Used by: UI_DriverInfo_Menu
int		bss_7dca8; // Used by: UI_DriverInfo_Menu
char	bss_7dcac[24];
int		bss_7dcc4; // Used by: UI_DriverInfo_Menu
int		bss_7dcc8; // Used by: UI_DriverInfo_Menu
char	bss_7dccc[8];
int		bss_7dcd4; // Used by: UI_DriverInfo_Menu
char	bss_7dcd8[12];
int		bss_7dce4; // Used by: UI_DriverInfo_Menu
int		bss_7dce8; // Used by: UI_DriverInfo_Menu
int		bss_7dcec;
int		bss_7dcf0; // Used by: UI_DriverInfo_Menu
int		bss_7dcf4; // Used by: UI_DriverInfo_Menu
int		bss_7dcf8;
int		bss_7dcfc; // Used by: UI_DriverInfo_Menu
int		bss_7dd00; // Used by: UI_DriverInfo_Menu
char	bss_7dd04[24];
int		bss_7dd1c; // Used by: UI_DriverInfo_Menu
char	bss_7dd20[28];
int		bss_7dd3c; // Used by: UI_DriverInfo_Menu
int		bss_7dd40; // Used by: UI_DriverInfo_Menu
int		bss_7dd44;
int		bss_7dd48; // Used by: UI_DriverInfo_Menu
int		bss_7dd4c; // Used by: UI_DriverInfo_Menu
int		bss_7dd50;
int		bss_7dd54; // Used by: UI_DriverInfo_Menu
int		bss_7dd58; // Used by: UI_DriverInfo_Menu
char	bss_7dd5c[24];
int		bss_7dd74; // Used by: UI_DriverInfo_Menu
char	bss_7dd78[28];
int		bss_7dd94; // Used by: UI_DriverInfo_Menu
int		bss_7dd98; // Used by: UI_DriverInfo_Menu
char	bss_7dd9c[1284];
int		bss_7e2a0; // Used by: UI_DriverInfo_Menu, DriverInfo_MenuDraw
int		bss_7e2a4; // Used by: AngleVectors
int		bss_7e2a8; // Used by: AngleVectors
int		bss_7e2ac; // Used by: AngleVectors
int		bss_7e2b0; // Used by: AngleVectors
int		bss_7e2b4; // Used by: AngleVectors
int		bss_7e2b8; // Used by: AngleVectors
char	bss_7e2bc[88576];
int		com_tokenline; // Used by: COM_ParseExt, COM_GetCurrentParseLine, COM_BeginParseSession
int		com_lines; // Used by: COM_ParseExt, COM_GetCurrentParseLine, COM_BeginParseSession
char	com_parsename[1024];
char	com_token[53624]; // Used by: COM_ParseExt
char	bss_a123c[12936];

/*
=================
vmMain

Address: 0x0
Stack Size: 0x1c
Calls: UI_DrawConnectScreen, UI_ConsoleCommand, UI_SetActiveMenu, UI_IsFullscreen, UI_Refresh, UI_MouseEvent, UI_KeyEvent, UI_Shutdown, UI_Init
=================
*/
int vmMain(int arg_0, int arg_1, int arg_2) {
	int		local_10;
	int		local_14;
	int		local_18;

	local_10 = arg_0;
	if (local_10 < 0x0) goto jmp_78;
	if (local_10 > 0xa) goto jmp_78;
	goto *(int *)((local_10 << 0x2) + 0x4);
	return 0x4;
	UI_Init();
	return 0x0;
	UI_Shutdown();
	return 0x0;
	UI_KeyEvent(arg_1, arg_2);
	return 0x0;
	UI_MouseEvent(arg_1, arg_2);
	return 0x0;
	UI_Refresh(arg_1);
	return 0x0;
	local_14 = UI_IsFullscreen();
	return local_14;
	UI_SetActiveMenu(arg_1);
	return 0x0;
	local_18 = UI_ConsoleCommand(arg_1);
	return local_18;
	UI_DrawConnectScreen(arg_1);
	return 0x0;
	return 0x1;
jmp_78:
	return 0xffffffff;
}

/*
=================
UI_RegisterCvars

Address: 0x7c
Stack Size: 0x24
Calls: trap_Cvar_Register
Called by: UI_Init
=================
*/
void UI_RegisterCvars(void) {
	int		local_18;
	char	local_1c[8];

	*(int *)local_1c = 0x0;
	local_18 = 0x30;
	goto jmp_aa;
jmp_85:
	trap_Cvar_Register(*(int *)local_18, *(int *)(local_18 + 0x4), *(int *)(local_18 + 0x8), *(int *)(local_18 + 0xc));
	*(int *)local_1c = (*(int *)local_1c + 0x1);
	local_18 = (local_18 + 0x10);
jmp_aa:
	if (*(int *)local_1c < cvarTableSize) goto jmp_85;
}

/*
=================
UI_UpdateCvars

Address: 0xb1
Stack Size: 0x14
Calls: trap_Cvar_Update
Called by: UI_Refresh
=================
*/
void UI_UpdateCvars(void) {
	int		local_c;
	int		local_10;

	local_10 = 0x0;
	local_c = 0x30;
	goto jmp_d4;
jmp_ba:
	if (*(int *)local_c != 0x0) goto jmp_c1;
	goto jmp_c8;
jmp_c1:
	trap_Cvar_Update(*(int *)local_c);
jmp_c8:
	local_10 = (local_10 + 0x1);
	local_c = (local_c + 0x10);
jmp_d4:
	if (local_10 < cvarTableSize) goto jmp_ba;
}

/*
=================
BG_FindItemForPowerup

Address: 0xdb
Stack Size: 0x10
=================
*/
int BG_FindItemForPowerup(int arg_0) {
	int		local_8;
	int		local_c;

	arg_0 = arg_0;
	local_8 = 0x0;
	goto jmp_119;
jmp_e5:
	local_c = (0x34 * local_8);
	if (*(int *)(local_c + 0x368) == 0x5) goto jmp_100;
	if (*(int *)(local_c + 0x368) == 0x8) goto jmp_100;
	if (*(int *)(local_c + 0x368) != 0x7) goto jmp_113;
jmp_100:
	if (*(int *)((0x34 * local_8) + 0x36c) != arg_0) goto jmp_113;
	return ((0x34 * local_8) + 0x344);
jmp_113:
	local_8 = (local_8 + 0x1);
jmp_119:
	if (local_8 < bg_numItems) goto jmp_e5;
	return 0x0;
}

/*
=================
BG_FindItemForHoldable

Address: 0x122
Stack Size: 0x18
Calls: Com_Error
=================
*/
int BG_FindItemForHoldable(int arg_0) {
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	local_10 = 0x0;
	goto jmp_150;
jmp_12c:
	local_14 = (0x34 * local_10);
	if (*(int *)(local_14 + 0x368) != 0x6) goto jmp_14a;
	if (*(int *)(local_14 + 0x36c) != arg_0) goto jmp_14a;
	return ((0x34 * local_10) + 0x344);
jmp_14a:
	local_10 = (local_10 + 0x1);
jmp_150:
	if (local_10 < bg_numItems) goto jmp_12c;
	Com_Error(0x1, 0x3a99);
	return 0x0;
}

/*
=================
BG_FindItemForWeapon

Address: 0x160
Stack Size: 0x1c
Calls: Com_Error
=================
*/
int BG_FindItemForWeapon(int arg_0) {
	char	local_14[8];

	arg_0 = arg_0;
	*(int *)local_14 = 0x378;
	goto jmp_184;
jmp_16a:
	if (*(int *)(*(int *)local_14 + 0x24) != 0x1) goto jmp_17e;
	if (*(int *)(*(int *)local_14 + 0x28) != arg_0) goto jmp_17e;
	return *(int *)local_14;
jmp_17e:
	*(int *)local_14 = (*(int *)local_14 + 0x34);
jmp_184:
	if (*(int *)*(int *)local_14 != 0x0) goto jmp_16a;
	Com_Error(0x1, 0x3a78, arg_0);
	return 0x0;
}

/*
=================
BG_FindItem

Address: 0x197
Stack Size: 0x18
Calls: Q_stricmp
=================
*/
int BG_FindItem(int arg_0) {
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	local_10 = 0x378;
	goto jmp_1bd;
jmp_1a1:
	local_14 = Q_stricmp(*(int *)(local_10 + 0x1c), arg_0);
	if (local_14 != 0x0) goto jmp_1b7;
	return local_10;
jmp_1b7:
	local_10 = (local_10 + 0x34);
jmp_1bd:
	if (*(int *)local_10 != 0x0) goto jmp_1a1;
	return 0x0;
}

/*
=================
BG_PlayerTouchesItem

Address: 0x1c6
Stack Size: 0x38
Calls: BG_EvaluateTrajectory
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
	if (local_24 > 0x42300000) goto jmp_21e;
	if (local_24 < 0xc2480000) goto jmp_21e;
	local_28 = *(int *)(arg_0 + 0x18);
	local_2c = 0x42100000;
	if ((local_28 - local_18) > local_2c) goto jmp_21e;
	local_30 = 0xc2100000;
	if ((local_28 - local_18) < local_30) goto jmp_21e;
	local_34 = *(int *)(arg_0 + 0x1c);
	if ((local_34 - *(int *)local_1c) > local_2c) goto jmp_21e;
	if ((local_34 - *(int *)local_1c) >= local_30) goto jmp_222;
jmp_21e:
	return 0x0;
jmp_222:
	return 0x1;
}

/*
=================
BG_CanItemBeGrabbed

Address: 0x226
Stack Size: 0x30
Calls: Com_Error
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
	if (local_14 < 0x1) goto jmp_23b;
	if (local_14 < bg_numItems) goto jmp_242;
jmp_23b:
	Com_Error(0x1, 0x3a50);
jmp_242:
	local_10 = ((0x34 * *(int *)(arg_1 + 0xa0)) + 0x344);
	*(int *)local_18 = *(int *)(local_10 + 0x24);
	if (*(int *)local_18 < 0x0) goto jmp_357;
	if (*(int *)local_18 > 0x8) goto jmp_357;
	goto *(int *)((*(int *)local_18 << 0x2) + 0xacc);
	return 0x1;
	if (*(int *)((*(int *)(local_10 + 0x28) << 0x2) + (arg_2 + 0x178)) < 0xc8) goto jmp_27b;
	return 0x0;
jmp_27b:
	return 0x1;
	local_20 = arg_2;
	if (*(int *)(local_20 + 0xc4) < (*(int *)(local_20 + 0xd0) << 0x1)) goto jmp_294;
	return 0x0;
jmp_294:
	return 0x1;
	local_24 = *(int *)(local_10 + 0x20);
	if (local_24 == 0x5) goto jmp_2a7;
	if (local_24 != 0x64) goto jmp_2c0;
jmp_2a7:
	local_28 = arg_2;
	if (*(int *)(local_28 + 0xb8) < (*(int *)(local_28 + 0xd0) << 0x1)) goto jmp_2bc;
	return 0x0;
jmp_2bc:
	return 0x1;
jmp_2c0:
	local_28 = arg_2;
	if (*(int *)(local_28 + 0xb8) < *(int *)(local_28 + 0xd0)) goto jmp_2d3;
	return 0x0;
jmp_2d3:
	return 0x1;
	return 0x1;
	if (arg_0 != 0x4) goto jmp_33d;
	if (*(int *)(arg_2 + 0x104) != 0x1) goto jmp_30e;
	local_2c = *(int *)(local_10 + 0x28);
	if (local_2c == 0x8) goto jmp_30a;
	if (local_2c != 0x7) goto jmp_2fc;
	if (*(int *)(arg_1 + 0xa4) != 0x0) goto jmp_30a;
jmp_2fc:
	if (*(int *)(local_10 + 0x28) != 0x7) goto jmp_33d;
	if (*(int *)(arg_2 + 0x158) == 0x0) goto jmp_33d;
jmp_30a:
	return 0x1;
jmp_30e:
	if (*(int *)(arg_2 + 0x104) != 0x2) goto jmp_33d;
	local_2c = *(int *)(local_10 + 0x28);
	if (local_2c == 0x7) goto jmp_339;
	if (local_2c != 0x8) goto jmp_32b;
	if (*(int *)(arg_1 + 0xa4) != 0x0) goto jmp_339;
jmp_32b:
	if (*(int *)(local_10 + 0x28) != 0x8) goto jmp_33d;
	if (*(int *)(arg_2 + 0x154) == 0x0) goto jmp_33d;
jmp_339:
	return 0x1;
jmp_33d:
	return 0x0;
	if (*(int *)(arg_2 + 0xbc) == 0x0) goto jmp_34c;
	return 0x0;
jmp_34c:
	return 0x1;
	Com_Error(0x1, 0x3a34);
jmp_357:
	return 0x0;
}

/*
=================
BG_EvaluateTrajectory

Address: 0x35b
Stack Size: 0x68
Calls: sin, Com_Error
Called by: BG_PlayerTouchesItem
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
	if (*(int *)local_1c < 0x0) goto jmp_4e4;
	if (*(int *)local_1c > 0x5) goto jmp_4e4;
	goto *(int *)((*(int *)local_1c << 0x2) + 0xaf0);
	block_copy((arg_0 + 0xc), arg_2, 0xc);
	goto jmp_4ef;
	local_14 = (0x3a83126f * (float)(arg_1 - *(int *)(arg_0 + 0x4)));
	*(int *)arg_2 = (*(int *)(arg_0 + 0xc) + (*(int *)(arg_0 + 0x18) * local_14));
	*(int *)(arg_2 + 0x4) = (*(int *)(arg_0 + 0x10) + (*(int *)(arg_0 + 0x1c) * local_14));
	*(int *)(arg_2 + 0x8) = (*(int *)(arg_0 + 0x14) + (*(int *)(arg_0 + 0x20) * local_14));
	goto jmp_4ef;
	local_14 = ((float)(arg_1 - *(int *)(arg_0 + 0x4)) / (float)*(int *)(arg_0 + 0x8));
	*(int *)local_34 = sin((0x40000000 * (0x40490fdb * local_14)));
	local_18 = *(int *)local_34;
	*(int *)arg_2 = (*(int *)(arg_0 + 0xc) + (*(int *)(arg_0 + 0x18) * local_18));
	*(int *)(arg_2 + 0x4) = (*(int *)(arg_0 + 0x10) + (*(int *)(arg_0 + 0x1c) * local_18));
	*(int *)(arg_2 + 0x8) = (*(int *)(arg_0 + 0x14) + (*(int *)(arg_0 + 0x20) * local_18));
	goto jmp_4ef;
	if (arg_1 <= (*(int *)(arg_0 + 0x4) + *(int *)(arg_0 + 0x8))) goto jmp_439;
	arg_1 = (*(int *)(arg_0 + 0x4) + *(int *)(arg_0 + 0x8));
jmp_439:
	local_14 = (0x3a83126f * (float)(arg_1 - *(int *)(arg_0 + 0x4)));
	if (local_14 >= 0x0) goto jmp_44d;
	local_14 = 0x0;
jmp_44d:
	*(int *)arg_2 = (*(int *)(arg_0 + 0xc) + (*(int *)(arg_0 + 0x18) * local_14));
	*(int *)(arg_2 + 0x4) = (*(int *)(arg_0 + 0x10) + (*(int *)(arg_0 + 0x1c) * local_14));
	*(int *)(arg_2 + 0x8) = (*(int *)(arg_0 + 0x14) + (*(int *)(arg_0 + 0x20) * local_14));
	goto jmp_4ef;
	local_14 = (0x3a83126f * (float)(arg_1 - *(int *)(arg_0 + 0x4)));
	*(int *)arg_2 = (*(int *)(arg_0 + 0xc) + (*(int *)(arg_0 + 0x18) * local_14));
	*(int *)(arg_2 + 0x4) = (*(int *)(arg_0 + 0x10) + (*(int *)(arg_0 + 0x1c) * local_14));
	*(int *)(arg_2 + 0x8) = (*(int *)(arg_0 + 0x14) + (*(int *)(arg_0 + 0x20) * local_14));
	local_60 = (arg_2 + 0x8);
	local_64 = local_14;
	*(int *)local_60 = (*(int *)local_60 - ((0x43c80000 * local_64) * local_64));
	goto jmp_4ef;
jmp_4e4:
	Com_Error(0x1, 0x3a0a, *(int *)arg_0);
jmp_4ef:
}

/*
=================
BG_EvaluateTrajectoryDelta

Address: 0x4f1
Stack Size: 0x40
Calls: cos, Com_Error
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
	if (*(int *)local_1c < 0x0) goto jmp_5e0;
	if (*(int *)local_1c > 0x5) goto jmp_5e0;
	goto *(int *)((*(int *)local_1c << 0x2) + 0xb08);
	local_24 = arg_2;
	local_28 = 0x0;
	*(int *)(local_24 + 0x8) = local_28;
	*(int *)(local_24 + 0x4) = local_28;
	*(int *)local_24 = local_28;
	goto jmp_5eb;
	block_copy((arg_0 + 0x18), arg_2, 0xc);
	goto jmp_5eb;
	local_2c = arg_0;
	local_18 = ((float)(arg_1 - *(int *)(local_2c + 0x4)) / (float)*(int *)(local_2c + 0x8));
	local_30 = cos((0x40000000 * (0x40490fdb * local_18)));
	local_14 = local_30;
	local_14 = (0x3f000000 * local_14);
	*(int *)arg_2 = (*(int *)(arg_0 + 0x18) * local_14);
	*(int *)(arg_2 + 0x4) = (*(int *)(arg_0 + 0x1c) * local_14);
	*(int *)(arg_2 + 0x8) = (*(int *)(arg_0 + 0x20) * local_14);
	goto jmp_5eb;
	local_34 = arg_0;
	if (arg_1 <= (*(int *)(local_34 + 0x4) + *(int *)(local_34 + 0x8))) goto jmp_5ac;
	local_38 = arg_2;
	local_3c = 0x0;
	*(int *)(local_38 + 0x8) = local_3c;
	*(int *)(local_38 + 0x4) = local_3c;
	*(int *)local_38 = local_3c;
	goto jmp_5eb;
jmp_5ac:
	block_copy((arg_0 + 0x18), arg_2, 0xc);
	goto jmp_5eb;
	local_38 = arg_0;
	local_18 = (0x3a83126f * (float)(arg_1 - *(int *)(local_38 + 0x4)));
	block_copy((local_38 + 0x18), arg_2, 0xc);
	local_3c = (arg_2 + 0x8);
	*(int *)local_3c = (*(int *)local_3c - (0x44480000 * local_18));
	goto jmp_5eb;
jmp_5e0:
	Com_Error(0x1, 0x39db, *(int *)arg_0);
jmp_5eb:
}

/*
=================
BG_AddPredictableEventToPlayerstate

Address: 0x5ed
Stack Size: 0x14
Called by: BG_TouchJumpPad
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

Address: 0x624
Stack Size: 0x30
Calls: BG_AddPredictableEventToPlayerstate, fabs, AngleNormalize180, vectoangles
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
	if (*(int *)(arg_0 + 0x4) == 0x0) goto jmp_636;
	goto jmp_696;
jmp_636:
	if (*(int *)(arg_0 + 0x150) == 0x0) goto jmp_63f;
	goto jmp_696;
jmp_63f:
	if (*(int *)(arg_0 + 0x1c0) == *(int *)arg_1) goto jmp_67b;
	vectoangles((arg_1 + 0x68), local_14);
	local_28 = AngleNormalize180(*(int *)local_14);
	local_2c = fabs(local_28);
	local_20 = local_2c;
	if (local_20 >= 0x42340000) goto jmp_66d;
	local_24 = 0x0;
	goto jmp_670;
jmp_66d:
	local_24 = 0x1;
jmp_670:
	BG_AddPredictableEventToPlayerstate(0xd, local_24, arg_0);
jmp_67b:
	*(int *)(arg_0 + 0x1c0) = *(int *)arg_1;
	*(int *)(arg_0 + 0x1cc) = *(int *)(arg_0 + 0x1c8);
	block_copy((arg_1 + 0x68), (arg_0 + 0x20), 0xc);
jmp_696:
}

/*
=================
BG_PlayerStateToEntityState

Address: 0x698
Stack Size: 0x28
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
	if (local_c == 0x5) goto jmp_6b0;
	if (local_c != 0x2) goto jmp_6b8;
jmp_6b0:
	*(int *)(arg_1 + 0x4) = 0xa;
	goto jmp_6cd;
jmp_6b8:
	if (*(int *)(arg_0 + 0xb8) > 0xffffffd8) goto jmp_6c7;
	*(int *)(arg_1 + 0x4) = 0xa;
	goto jmp_6cd;
jmp_6c7:
	*(int *)(arg_1 + 0x4) = 0x1;
jmp_6cd:
	*(int *)arg_1 = *(int *)(arg_0 + 0x8c);
	*(int *)(arg_1 + 0xc) = 0x1;
	block_copy((arg_0 + 0x14), (arg_1 + 0x18), 0xc);
	if (arg_2 == 0x0) goto jmp_712;
	local_10 = (arg_1 + 0x18);
	*(int *)local_10 = (float)(int)*(int *)local_10;
	local_14 = (arg_1 + 0x1c);
	*(int *)local_14 = (float)(int)*(int *)local_14;
	*(int *)local_18 = (arg_1 + 0x20);
	*(int *)*(int *)local_18 = (float)(int)*(int *)*(int *)local_18;
jmp_712:
	block_copy((arg_0 + 0x20), (arg_1 + 0x24), 0xc);
	*(int *)(arg_1 + 0x30) = 0x1;
	block_copy((arg_0 + 0x98), (arg_1 + 0x3c), 0xc);
	if (arg_2 == 0x0) goto jmp_758;
	local_10 = (arg_1 + 0x3c);
	*(int *)local_10 = (float)(int)*(int *)local_10;
	local_14 = (arg_1 + 0x40);
	*(int *)local_14 = (float)(int)*(int *)local_14;
	*(int *)local_18 = (arg_1 + 0x44);
	*(int *)*(int *)local_18 = (float)(int)*(int *)*(int *)local_18;
jmp_758:
	*(int *)(arg_1 + 0x84) = (float)*(int *)(arg_0 + 0x58);
	*(int *)(arg_1 + 0xc4) = *(int *)(arg_0 + 0x4c);
	*(int *)(arg_1 + 0xc8) = *(int *)(arg_0 + 0x54);
	*(int *)(arg_1 + 0xa8) = *(int *)(arg_0 + 0x8c);
	*(int *)(arg_1 + 0x8) = *(int *)(arg_0 + 0x68);
	if (*(int *)(arg_0 + 0xb8) > 0x0) goto jmp_7a2;
	local_10 = (arg_1 + 0x8);
	*(int *)local_10 = (*(int *)local_10 | 0x1);
	goto jmp_7b0;
jmp_7a2:
	local_10 = (arg_1 + 0x8);
	*(int *)local_10 = (*(int *)local_10 & 0xfffffffe);
jmp_7b0:
	if (*(int *)(arg_0 + 0x80) == 0x0) goto jmp_7cd;
	*(int *)(arg_1 + 0xb4) = *(int *)(arg_0 + 0x80);
	*(int *)(arg_1 + 0xb8) = *(int *)(arg_0 + 0x84);
	goto jmp_832;
jmp_7cd:
	if (*(int *)(arg_0 + 0x1d0) >= *(int *)(arg_0 + 0x6c)) goto jmp_832;
	if (*(int *)(arg_0 + 0x1d0) >= (*(int *)(arg_0 + 0x6c) - 0x2)) goto jmp_7f1;
	*(int *)(arg_0 + 0x1d0) = (*(int *)(arg_0 + 0x6c) - 0x2);
jmp_7f1:
	local_20 = (arg_0 + 0x1d0);
	local_14 = (*(int *)local_20 & 0x1);
	*(int *)(arg_1 + 0xb4) = (*(int *)((local_14 << 0x2) + (arg_0 + 0x70)) | ((*(int *)local_20 & 0x3) << 0x8));
	*(int *)(arg_1 + 0xb8) = *(int *)((local_14 << 0x2) + (arg_0 + 0x78));
	local_24 = (arg_0 + 0x1d0);
	*(int *)local_24 = (*(int *)local_24 + 0x1);
jmp_832:
	*(int *)(arg_1 + 0xc0) = *(int *)(arg_0 + 0x90);
	*(int *)(arg_1 + 0x94) = *(int *)(arg_0 + 0x44);
	*(int *)(arg_1 + 0xbc) = 0x0;
	local_8 = 0x0;
jmp_84f:
	if (*(int *)((local_8 << 0x2) + (arg_0 + 0x138)) == 0x0) goto jmp_86c;
	local_14 = (arg_1 + 0xbc);
	*(int *)local_14 = (*(int *)local_14 | (0x1 << local_8));
jmp_86c:
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x10) goto jmp_84f;
	*(int *)(arg_1 + 0x9c) = *(int *)(arg_0 + 0x1bc);
	*(int *)(arg_1 + 0xcc) = *(int *)(arg_0 + 0x1b8);
}

/*
=================
BG_PlayerStateToEntityStateExtraPolate

Address: 0x88c
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
	if (local_c == 0x5) goto jmp_8a4;
	if (local_c != 0x2) goto jmp_8ac;
jmp_8a4:
	*(int *)(arg_1 + 0x4) = 0xa;
	goto jmp_8c1;
jmp_8ac:
	if (*(int *)(arg_0 + 0xb8) > 0xffffffd8) goto jmp_8bb;
	*(int *)(arg_1 + 0x4) = 0xa;
	goto jmp_8c1;
jmp_8bb:
	*(int *)(arg_1 + 0x4) = 0x1;
jmp_8c1:
	*(int *)arg_1 = *(int *)(arg_0 + 0x8c);
	*(int *)(arg_1 + 0xc) = 0x3;
	block_copy((arg_0 + 0x14), (arg_1 + 0x18), 0xc);
	if (arg_3 == 0x0) goto jmp_906;
	local_10 = (arg_1 + 0x18);
	*(int *)local_10 = (float)(int)*(int *)local_10;
	local_14 = (arg_1 + 0x1c);
	*(int *)local_14 = (float)(int)*(int *)local_14;
	*(int *)local_18 = (arg_1 + 0x20);
	*(int *)*(int *)local_18 = (float)(int)*(int *)*(int *)local_18;
jmp_906:
	block_copy((arg_0 + 0x20), (arg_1 + 0x24), 0xc);
	*(int *)(arg_1 + 0x10) = arg_2;
	*(int *)(arg_1 + 0x14) = 0x32;
	*(int *)(arg_1 + 0x30) = 0x1;
	block_copy((arg_0 + 0x98), (arg_1 + 0x3c), 0xc);
	if (arg_3 == 0x0) goto jmp_959;
	local_10 = (arg_1 + 0x3c);
	*(int *)local_10 = (float)(int)*(int *)local_10;
	local_14 = (arg_1 + 0x40);
	*(int *)local_14 = (float)(int)*(int *)local_14;
	*(int *)local_18 = (arg_1 + 0x44);
	*(int *)*(int *)local_18 = (float)(int)*(int *)*(int *)local_18;
jmp_959:
	*(int *)(arg_1 + 0x84) = (float)*(int *)(arg_0 + 0x58);
	*(int *)(arg_1 + 0xc4) = *(int *)(arg_0 + 0x4c);
	*(int *)(arg_1 + 0xc8) = *(int *)(arg_0 + 0x54);
	*(int *)(arg_1 + 0xa8) = *(int *)(arg_0 + 0x8c);
	*(int *)(arg_1 + 0x8) = *(int *)(arg_0 + 0x68);
	if (*(int *)(arg_0 + 0xb8) > 0x0) goto jmp_9a3;
	local_10 = (arg_1 + 0x8);
	*(int *)local_10 = (*(int *)local_10 | 0x1);
	goto jmp_9b1;
jmp_9a3:
	local_10 = (arg_1 + 0x8);
	*(int *)local_10 = (*(int *)local_10 & 0xfffffffe);
jmp_9b1:
	if (*(int *)(arg_0 + 0x80) == 0x0) goto jmp_9ce;
	*(int *)(arg_1 + 0xb4) = *(int *)(arg_0 + 0x80);
	*(int *)(arg_1 + 0xb8) = *(int *)(arg_0 + 0x84);
	goto jmp_a33;
jmp_9ce:
	if (*(int *)(arg_0 + 0x1d0) >= *(int *)(arg_0 + 0x6c)) goto jmp_a33;
	if (*(int *)(arg_0 + 0x1d0) >= (*(int *)(arg_0 + 0x6c) - 0x2)) goto jmp_9f2;
	*(int *)(arg_0 + 0x1d0) = (*(int *)(arg_0 + 0x6c) - 0x2);
jmp_9f2:
	local_20 = (arg_0 + 0x1d0);
	local_14 = (*(int *)local_20 & 0x1);
	*(int *)(arg_1 + 0xb4) = (*(int *)((local_14 << 0x2) + (arg_0 + 0x70)) | ((*(int *)local_20 & 0x3) << 0x8));
	*(int *)(arg_1 + 0xb8) = *(int *)((local_14 << 0x2) + (arg_0 + 0x78));
	local_24 = (arg_0 + 0x1d0);
	*(int *)local_24 = (*(int *)local_24 + 0x1);
jmp_a33:
	*(int *)(arg_1 + 0xc0) = *(int *)(arg_0 + 0x90);
	*(int *)(arg_1 + 0x94) = *(int *)(arg_0 + 0x44);
	*(int *)(arg_1 + 0xbc) = 0x0;
	local_8 = 0x0;
jmp_a50:
	if (*(int *)((local_8 << 0x2) + (arg_0 + 0x138)) == 0x0) goto jmp_a6d;
	local_14 = (arg_1 + 0xbc);
	*(int *)local_14 = (*(int *)local_14 | (0x1 << local_8));
jmp_a6d:
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x10) goto jmp_a50;
	*(int *)(arg_1 + 0x9c) = *(int *)(arg_0 + 0x1bc);
	*(int *)(arg_1 + 0xcc) = *(int *)(arg_0 + 0x1b8);
}

/*
=================
swapfunc

Address: 0xa8d
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

	if (arg_3 > 0x1) goto jmp_ad4;
	local_10 = (arg_2 >> 0x2);
	local_8 = arg_0;
	local_c = arg_1;
jmp_aa0:
	local_14 = *(int *)local_8;
	local_18 = local_8;
	local_8 = (local_18 + 0x4);
	*(int *)local_18 = *(int *)local_c;
	local_1c = local_c;
	local_c = (local_1c + 0x4);
	*(int *)local_1c = local_14;
	local_14 = (local_10 - 0x1);
	local_10 = local_14;
	if (local_14 > 0x0) goto jmp_aa0;
	goto jmp_b12;
jmp_ad4:
	local_10 = arg_2;
	local_8 = arg_0;
	local_c = arg_1;
jmp_ae0:
	*(char *)&local_14 = *(char *)local_8;
	local_18 = local_8;
	local_8 = (local_18 + 0x1);
	*(char *)local_18 = *(char *)local_c;
	local_1c = local_c;
	local_c = (local_1c + 0x1);
	*(char *)local_1c = *(char *)&local_14;
	local_14 = (local_10 - 0x1);
	local_10 = local_14;
	if (local_14 > 0x0) goto jmp_ae0;
jmp_b12:
}

/*
=================
med3

Address: 0xb14
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
	if (local_24 >= 0x0) goto jmp_b6c;
	local_28 = (*(arg_3))(arg_1, arg_2);
	if (local_28 >= 0x0) goto jmp_b49;
	local_14 = arg_1;
	goto jmp_b66;
jmp_b49:
	local_2c = (*(arg_3))(arg_0, arg_2);
	if (local_2c >= 0x0) goto jmp_b5e;
	local_18 = arg_2;
	goto jmp_b62;
jmp_b5e:
	local_18 = arg_0;
jmp_b62:
	local_14 = local_18;
jmp_b66:
	local_10 = local_14;
	goto jmp_ba2;
jmp_b6c:
	local_30 = (*(arg_3))(arg_1, arg_2);
	if (local_30 <= 0x0) goto jmp_b81;
	local_1c = arg_1;
	goto jmp_b9e;
jmp_b81:
	local_34 = (*(arg_3))(arg_0, arg_2);
	if (local_34 >= 0x0) goto jmp_b96;
	local_20 = arg_0;
	goto jmp_b9a;
jmp_b96:
	local_20 = arg_2;
jmp_b9a:
	local_1c = local_20;
jmp_b9e:
	local_10 = local_1c;
jmp_ba2:
	return local_10;
}

/*
=================
qsort

Address: 0xba7
Stack Size: 0x94
Calls: qsort, med3, swapfunc
Called by: UI_BotSelectMenu_BuildList, ArenaServers_Sort, ArenaServers_StopRefresh, ArenaServers_UpdateMenu, UI_AddBotsMenu_GetSortedBotNums, qsort
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
jmp_bb8:
	local_4c = 0x3;
	local_50 = 0x0;
	if ((arg_0 & local_4c) != local_50) goto jmp_bce;
	if ((arg_2 & local_4c) == local_50) goto jmp_bd3;
jmp_bce:
	local_44 = 0x2;
	goto jmp_be3;
jmp_bd3:
	if (arg_2 != 0x4) goto jmp_bdc;
	local_48 = 0x0;
	goto jmp_bdf;
jmp_bdc:
	local_48 = 0x1;
jmp_bdf:
	local_44 = local_48;
jmp_be3:
	local_28 = local_44;
	local_34 = 0x0;
	if (arg_1 >= 0x7) goto jmp_c5d;
	local_38 = (arg_2 + arg_0);
	goto jmp_c50;
jmp_bf7:
	local_18 = local_38;
	goto jmp_c32;
jmp_bfd:
	if (local_28 != 0x0) goto jmp_c19;
	local_54 = *(int *)local_18;
	*(int *)local_18 = *(int *)(local_18 - arg_2);
	*(int *)(local_18 - arg_2) = local_54;
	goto jmp_c2b;
jmp_c19:
	swapfunc(local_18, (local_18 - arg_2), arg_2, local_28);
jmp_c2b:
	local_18 = (local_18 - arg_2);
jmp_c32:
	if (local_18 <= arg_0) goto jmp_c49;
	local_60 = (*(arg_3))((local_18 - arg_2), local_18);
	if (local_60 > 0x0) goto jmp_bfd;
jmp_c49:
	local_38 = (arg_2 + local_38);
jmp_c50:
	if (local_38 < ((arg_1 * arg_2) + arg_0)) goto jmp_bf7;
	goto jmp_f62;
jmp_c5d:
	local_38 = (((arg_1 >> 0x1) * arg_2) + arg_0);
	if (arg_1 <= 0x7) goto jmp_cfc;
	local_18 = arg_0;
	local_3c = (((arg_1 - 0x1) * arg_2) + arg_0);
	if (arg_1 <= 0x28) goto jmp_ce8;
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
jmp_ce8:
	local_60 = med3(local_18, local_38, local_3c, arg_3);
	local_38 = local_60;
jmp_cfc:
	if (local_28 != 0x0) goto jmp_d12;
	*(int *)local_58 = *(int *)arg_0;
	*(int *)arg_0 = *(int *)local_38;
	*(int *)local_38 = *(int *)local_58;
	goto jmp_d21;
jmp_d12:
	swapfunc(arg_0, local_38, arg_2, local_28);
jmp_d21:
	local_60 = (arg_2 + arg_0);
	local_1c = local_60;
	local_2c = local_60;
	local_64 = (((arg_1 - 0x1) * arg_2) + arg_0);
	local_30 = local_64;
	local_20 = local_64;
	goto jmp_d80;
jmp_d46:
	if (local_24 != 0x0) goto jmp_d79;
	local_34 = 0x1;
	if (local_28 != 0x0) goto jmp_d63;
	local_68 = *(int *)local_2c;
	*(int *)local_2c = *(int *)local_1c;
	*(int *)local_1c = local_68;
	goto jmp_d72;
jmp_d63:
	swapfunc(local_2c, local_1c, arg_2, local_28);
jmp_d72:
	local_2c = (arg_2 + local_2c);
jmp_d79:
	local_1c = (arg_2 + local_1c);
jmp_d80:
	if (local_1c > local_20) goto jmp_d98;
	local_6c = (*(arg_3))(local_1c, arg_0);
	local_24 = local_6c;
	if (local_6c <= 0x0) goto jmp_d46;
jmp_d98:
	goto jmp_dd4;
jmp_d9a:
	if (local_24 != 0x0) goto jmp_dcd;
	local_34 = 0x1;
	if (local_28 != 0x0) goto jmp_db7;
	local_70 = *(int *)local_20;
	*(int *)local_20 = *(int *)local_30;
	*(int *)local_30 = local_70;
	goto jmp_dc6;
jmp_db7:
	swapfunc(local_20, local_30, arg_2, local_28);
jmp_dc6:
	local_30 = (local_30 - arg_2);
jmp_dcd:
	local_20 = (local_20 - arg_2);
jmp_dd4:
	if (local_1c > local_20) goto jmp_dec;
	local_74 = (*(arg_3))(local_20, arg_0);
	local_24 = local_74;
	if (local_74 >= 0x0) goto jmp_d9a;
jmp_dec:
	if (local_1c <= local_20) goto jmp_df3;
	goto jmp_e2b;
jmp_df3:
	if (local_28 != 0x0) goto jmp_e09;
	local_78 = *(int *)local_1c;
	*(int *)local_1c = *(int *)local_20;
	*(int *)local_20 = local_78;
	goto jmp_e18;
jmp_e09:
	swapfunc(local_1c, local_20, arg_2, local_28);
jmp_e18:
	local_34 = 0x1;
	local_1c = (arg_2 + local_1c);
	local_20 = (local_20 - arg_2);
	goto jmp_d80;
jmp_e2b:
	if (local_34 != 0x0) goto jmp_e9e;
	local_38 = (arg_2 + arg_0);
	goto jmp_e91;
jmp_e38:
	local_18 = local_38;
	goto jmp_e73;
jmp_e3e:
	if (local_28 != 0x0) goto jmp_e5a;
	local_68 = *(int *)local_18;
	*(int *)local_18 = *(int *)(local_18 - arg_2);
	*(int *)(local_18 - arg_2) = local_68;
	goto jmp_e6c;
jmp_e5a:
	swapfunc(local_18, (local_18 - arg_2), arg_2, local_28);
jmp_e6c:
	local_18 = (local_18 - arg_2);
jmp_e73:
	if (local_18 <= arg_0) goto jmp_e8a;
	local_74 = (*(arg_3))((local_18 - arg_2), local_18);
	if (local_74 > 0x0) goto jmp_e3e;
jmp_e8a:
	local_38 = (arg_2 + local_38);
jmp_e91:
	if (local_38 < ((arg_1 * arg_2) + arg_0)) goto jmp_e38;
	goto jmp_f62;
jmp_e9e:
	local_3c = ((arg_1 * arg_2) + arg_0);
	local_70 = local_2c;
	if ((local_70 - arg_0) >= (local_1c - local_70)) goto jmp_ec0;
	local_68 = (local_2c - arg_0);
	goto jmp_ec7;
jmp_ec0:
	local_68 = (local_1c - local_2c);
jmp_ec7:
	local_24 = local_68;
	if (local_24 <= 0x0) goto jmp_ee1;
	swapfunc(arg_0, (local_1c - local_24), local_24, local_28);
jmp_ee1:
	local_7c = local_30;
	if ((local_7c - local_20) >= ((local_3c - local_7c) - arg_2)) goto jmp_efc;
	local_78 = (local_30 - local_20);
	goto jmp_f06;
jmp_efc:
	local_78 = ((local_3c - local_30) - arg_2);
jmp_f06:
	local_24 = local_78;
	if (local_24 <= 0x0) goto jmp_f20;
	swapfunc(local_1c, (local_3c - local_24), local_24, local_28);
jmp_f20:
	*(int *)local_84 = (local_1c - local_2c);
	local_24 = *(int *)local_84;
	if (*(int *)local_84 <= arg_2) goto jmp_f42;
	qsort(arg_0, (local_24 / arg_2), arg_2, arg_3);
jmp_f42:
	*(int *)local_8c = (local_30 - local_20);
	local_24 = *(int *)local_8c;
	if (*(int *)local_8c <= arg_2) goto jmp_f62;
	arg_0 = (local_3c - local_24);
	arg_1 = (local_24 / arg_2);
	goto jmp_bb8;
jmp_f62:
}

/*
=================
strlen

Address: 0xf64
Stack Size: 0xc
Called by: Com_CharIsOneOfCharset, Info_SetValueForKey_Big, Info_SetValueForKey, Info_RemoveKey_Big, Info_RemoveKey, Info_ValueForKey, Com_TruncateLongString, Q_stristr, Q_strcat, Com_HexStrToInt, COM_CompareExtension, GraphicsOptions_SetMenuItems, UI_DriverInfo_Menu, ServerOptions_MenuInit, Prepname, SpecifyServer_Event, ArenaServers_StartRefresh, SpinControl_Init, Slider_Init, RadioButton_Init, Action_Init, Preferences_MenuInit, PlayerModel_SetMenuItems, PlayerModel_BuildList, PlayerModel_PicEvent, UI_Mods_LoadMods, UI_Mods_ParseInfos, MenuField_Init, MField_CharEvent, MField_KeyDownEvent, MField_Paste, MField_Draw, UI_MainMenu, UI_TeamArenaExists, Main_MenuDraw, LoadConfig_MenuInit, UI_LoadBots, UI_LoadArenas, UI_ParseInfos, Demos_MenuInit, UI_ReadableSize, UI_CDKeyMenu_PreValidateKey, UI_DrawString
=================
*/
int strlen(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	goto jmp_f71;
jmp_f6b:
	local_8 = (local_8 + 0x1);
jmp_f71:
	if ((char)*(char *)local_8 != 0x0) goto jmp_f6b;
	return (local_8 - arg_0);
}

/*
=================
strcat

Address: 0xf7f
Stack Size: 0x18
Called by: Info_SetValueForKey_Big, Info_SetValueForKey, ArenaServers_StartRefresh, Text_Draw, PlayerModel_SetMenuItems, PlayerModel_PicEvent, UI_LoadBots, UI_LoadArenas, Controls_DrawKeyBinding
=================
*/
int strcat(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	arg_1 = arg_1;
	local_8 = arg_0;
	goto jmp_f90;
jmp_f8a:
	local_8 = (local_8 + 0x1);
jmp_f90:
	if ((char)*(char *)local_8 != 0x0) goto jmp_f8a;
	goto jmp_fb7;
jmp_f98:
	local_c = local_8;
	local_14 = 0x1;
	local_8 = (local_c + local_14);
	local_10 = arg_1;
	arg_1 = (local_10 + local_14);
	*(char *)local_c = *(char *)local_10;
jmp_fb7:
	if ((char)*(char *)arg_1 != 0x0) goto jmp_f98;
	*(char *)local_8 = 0x0;
	return arg_0;
}

/*
=================
strcpy

Address: 0xfc6
Stack Size: 0x18
Called by: Info_SetValueForKey, ServerOptions_SetMenuItems, ServerOptions_InitBotNames, StartServer_Update, UI_SPLevelMenu_SetMenuArena, SpecifyServer_Event, ArenaServers_SetType, ArenaServers_StartRefresh, ArenaServers_DoRefresh, ArenaServers_LoadFavorites, ArenaServers_UpdateMenu, Text_Draw, PlayerSettings_DrawPlayer, LoadConfig_MenuInit, UI_LoadBots, UI_LoadArenas, UI_ParseInfos, Controls_DrawPlayer, Controls_DrawKeyBinding
=================
*/
int strcpy(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	arg_1 = arg_1;
	local_8 = arg_0;
	goto jmp_ff0;
jmp_fd1:
	local_c = local_8;
	local_14 = 0x1;
	local_8 = (local_c + local_14);
	local_10 = arg_1;
	arg_1 = (local_10 + local_14);
	*(char *)local_c = *(char *)local_10;
jmp_ff0:
	if ((char)*(char *)arg_1 != 0x0) goto jmp_fd1;
	*(char *)local_8 = 0x0;
	return arg_0;
}

/*
=================
strcmp

Address: 0xfff
Stack Size: 0x14
Called by: Info_RemoveKey_Big, Info_RemoveKey, COM_MatchToken, GraphicsOptions_GetResolutions, PlayerSettings_DrawPlayer, PlayerModel_BuildList, UI_ParseInfos, Controls_DrawPlayer, Controls_GetCvarValue, Controls_GetCvarDefault
=================
*/
int strcmp(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	int		local_10;

	arg_0 = arg_0;
	arg_1 = arg_1;
	goto jmp_101b;
jmp_100a:
	local_8 = 0x1;
	arg_0 = (arg_0 + local_8);
	arg_1 = (arg_1 + local_8);
jmp_101b:
	local_8 = (char)*(char *)arg_0;
	local_c = (char)*(char *)arg_1;
	if (local_8 != local_c) goto jmp_1039;
	local_10 = 0x0;
	if (local_8 == local_10) goto jmp_1039;
	if (local_c != local_10) goto jmp_100a;
jmp_1039:
	return ((char)*(char *)arg_0 - (char)*(char *)arg_1);
}

/*
=================
strchr

Address: 0x1045
Stack Size: 0x8
Called by: Info_SetValueForKey_Big, Info_SetValueForKey, Info_Validate, Info_RemoveKey_Big, Info_RemoveKey, GraphicsOptions_ApplyChanges, GraphicsOptions_GetResolutions, GraphicsOptions_GetAspectRatios, UI_RegisterClientModelname, PlayerModel_SetMenuItems
=================
*/
int strchr(int arg_0, int arg_1) {

	arg_0 = arg_0;
	arg_1 = arg_1;
	goto jmp_1062;
jmp_1050:
	if ((char)*(char *)arg_0 != arg_1) goto jmp_105c;
	return arg_0;
jmp_105c:
	arg_0 = (arg_0 + 0x1);
jmp_1062:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_1050;
	if (arg_1 == 0x0) goto jmp_1070;
	return 0x0;
jmp_1070:
	return arg_0;
}

/*
=================
strrchr

Address: 0x1075
Stack Size: 0xc
Called by: COM_DefaultExtension, COM_StripExtension, COM_GetExtension, ServerPlayerIcon, PlayerIcon
=================
*/
int strrchr(int arg_0, int arg_1) {
	int		local_8;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_8 = 0x0;
	goto jmp_1094;
jmp_1083:
	if ((char)*(char *)arg_0 != arg_1) goto jmp_108e;
	local_8 = arg_0;
jmp_108e:
	arg_0 = (arg_0 + 0x1);
jmp_1094:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_1083;
	if (arg_1 == 0x0) goto jmp_10a3;
	return local_8;
jmp_10a3:
	return arg_0;
}

/*
=================
strstr

Address: 0x10a8
Stack Size: 0x10
Called by: PlayerModel_SetMenuItems, PlayerModel_PicEvent, UI_LoadArenas
=================
*/
int strstr(int arg_0, int arg_1) {
	char	local_8[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	goto jmp_10ec;
jmp_10b3:
	*(int *)local_8 = 0x0;
	goto jmp_10cf;
jmp_10b8:
	if ((char)*(char *)(*(int *)local_8 + arg_0) == (char)*(char *)(*(int *)local_8 + arg_1)) goto jmp_10c9;
	goto jmp_10d8;
jmp_10c9:
	*(int *)local_8 = (*(int *)local_8 + 0x1);
jmp_10cf:
	if ((char)*(char *)(*(int *)local_8 + arg_1) != 0x0) goto jmp_10b8;
jmp_10d8:
	if ((char)*(char *)(*(int *)local_8 + arg_1) != 0x0) goto jmp_10e6;
	return arg_0;
jmp_10e6:
	arg_0 = (arg_0 + 0x1);
jmp_10ec:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_10b3;
	return 0x0;
}

/*
=================
tolower

Address: 0x10f6
Stack Size: 0xc
Called by: Q_strlwr, Com_HexStrToInt, MField_KeyDownEvent, strtod
=================
*/
int tolower(int arg_0) {

	arg_0 = arg_0;
	if (arg_0 < 0x41) goto jmp_1109;
	if (arg_0 > 0x5a) goto jmp_1109;
	arg_0 = (arg_0 + 0x20);
jmp_1109:
	return arg_0;
}

/*
=================
toupper

Address: 0x110e
Stack Size: 0xc
Called by: Q_strupr
=================
*/
int toupper(int arg_0) {

	arg_0 = arg_0;
	if (arg_0 < 0x61) goto jmp_1121;
	if (arg_0 > 0x7a) goto jmp_1121;
	arg_0 = (arg_0 + 0xffffffe0);
jmp_1121:
	return arg_0;
}

/*
=================
memmove

Address: 0x1126
Stack Size: 0x10
Called by: Info_RemoveKey_Big, Info_RemoveKey, MField_CharEvent, MField_KeyDownEvent
=================
*/
int memmove(int arg_0, int arg_1, int arg_2) {
	char	local_8[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	if (arg_2 == 0x0) goto jmp_1174;
	if (arg_0 <= arg_1) goto jmp_1158;
	*(int *)local_8 = arg_2;
jmp_1140:
	*(int *)local_8 = (*(int *)local_8 - 0x1);
	*(char *)(*(int *)local_8 + arg_0) = *(char *)(*(int *)local_8 + arg_1);
	if (*(int *)local_8 != 0x0) goto jmp_1140;
	goto jmp_1174;
jmp_1158:
	*(int *)local_8 = 0x0;
	goto jmp_116f;
jmp_115d:
	*(char *)(*(int *)local_8 + arg_0) = *(char *)(*(int *)local_8 + arg_1);
	*(int *)local_8 = (*(int *)local_8 + 0x1);
jmp_116f:
	if (*(int *)local_8 < arg_2) goto jmp_115d;
jmp_1174:
	return arg_0;
}

/*
=================
powN

Address: 0x1179
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
	if (arg_1 < 0x0) goto jmp_11ae;
	local_10 = 0x3f800000;
	goto jmp_11a5;
jmp_118b:
	if ((arg_1 %% 0x2) != 0x1) goto jmp_1198;
	local_10 = (local_10 * arg_0);
jmp_1198:
	arg_0 = (arg_0 * arg_0);
	arg_1 = (arg_1 / 0x2);
jmp_11a5:
	if (arg_1 > 0x0) goto jmp_118b;
	return local_10;
jmp_11ae:
	if (arg_1 != 0x80000000) goto jmp_11c6;
	local_10 = powN(arg_0, (arg_1 + 0x1));
	return (local_10 / arg_0);
jmp_11c6:
	local_14 = powN(arg_0, -arg_1);
	return (0x3f800000 / local_14);
}

/*
=================
tan

Address: 0x11d8
Stack Size: 0x14
Calls: cos, sin
Called by: UI_DrawPlayer
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

Address: 0x11ef
Stack Size: 0x8
=================
*/
void srand(int arg_0) {

	randSeed = arg_0;
}

/*
=================
rand

Address: 0x11f6
Stack Size: 0xc
Called by: UI_DrawPlayer
=================
*/
int rand(void) {
	int		local_8;

	local_8 = 0xc6c;
	*(int *)local_8 = ((0x10dcd * *(int *)local_8) + 0x1);
	return (*(int *)local_8 & 0x7fff);
}

/*
=================
atof

Address: 0x120c
Stack Size: 0x2c
Called by: Parse1DMatrix, UI_ParseAnimationFile
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
	goto jmp_1223;
jmp_1213:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_121d;
	return 0x0;
jmp_121d:
	arg_0 = (arg_0 + 0x1);
jmp_1223:
	if ((char)*(char *)arg_0 <= 0x20) goto jmp_1213;
	*(int *)local_14 = (char)*(char *)arg_0;
	if (*(int *)local_14 == 0x2b) goto jmp_1239;
	if (*(int *)local_14 == 0x2d) goto jmp_1244;
	goto jmp_124f;
jmp_1239:
	arg_0 = (arg_0 + 0x1);
	local_10 = 0x3f800000;
	goto jmp_1252;
jmp_1244:
	arg_0 = (arg_0 + 0x1);
	local_10 = 0xbf800000;
	goto jmp_1252;
jmp_124f:
	local_10 = 0x3f800000;
jmp_1252:
	local_c = 0x0;
	local_8 = (char)*(char *)arg_0;
	if (local_8 == 0x2e) goto jmp_128d;
jmp_125f:
	local_1c = arg_0;
	arg_0 = (local_1c + 0x1);
	local_8 = (char)*(char *)local_1c;
	if (local_8 < 0x30) goto jmp_1277;
	if (local_8 <= 0x39) goto jmp_1279;
jmp_1277:
	goto jmp_1293;
jmp_1279:
	local_8 = (local_8 - 0x30);
	local_c = ((0x41200000 * local_c) + (float)local_8);
	goto jmp_125f;
	goto jmp_1293;
jmp_128d:
	arg_0 = (arg_0 + 0x1);
jmp_1293:
	if (local_8 != 0x2e) goto jmp_12cd;
	local_1c = 0x3dcccccd;
jmp_129a:
	*(int *)local_20 = arg_0;
	arg_0 = (*(int *)local_20 + 0x1);
	local_8 = (char)*(char *)*(int *)local_20;
	if (local_8 < 0x30) goto jmp_12b2;
	if (local_8 <= 0x39) goto jmp_12b4;
jmp_12b2:
	goto jmp_12cd;
jmp_12b4:
	local_8 = (local_8 - 0x30);
	local_c = (local_c + ((float)local_8 * local_1c));
	local_1c = (0x3dcccccd * local_1c);
	goto jmp_129a;
jmp_12cd:
	return (local_c * local_10);
}

/*
=================
_atof

Address: 0x12d5
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
	goto jmp_12f9;
jmp_12e4:
	if ((char)*(char *)local_c != 0x0) goto jmp_12f3;
	*(int *)arg_0 = local_c;
	return 0x0;
jmp_12f3:
	local_c = (local_c + 0x1);
jmp_12f9:
	if ((char)*(char *)local_c <= 0x20) goto jmp_12e4;
	*(int *)local_18 = (char)*(char *)local_c;
	if (*(int *)local_18 == 0x2b) goto jmp_130f;
	if (*(int *)local_18 == 0x2d) goto jmp_131a;
	goto jmp_1325;
jmp_130f:
	local_c = (local_c + 0x1);
	local_14 = 0x3f800000;
	goto jmp_1328;
jmp_131a:
	local_c = (local_c + 0x1);
	local_14 = 0xbf800000;
	goto jmp_1328;
jmp_1325:
	local_14 = 0x3f800000;
jmp_1328:
	local_10 = 0x0;
	if ((char)*(char *)local_c == 0x2e) goto jmp_135d;
jmp_1331:
	local_20 = local_c;
	local_c = (local_20 + 0x1);
	local_8 = (char)*(char *)local_20;
	if (local_8 < 0x30) goto jmp_1349;
	if (local_8 <= 0x39) goto jmp_134b;
jmp_1349:
	goto jmp_135d;
jmp_134b:
	local_8 = (local_8 - 0x30);
	local_10 = ((0x41200000 * local_10) + (float)local_8);
	goto jmp_1331;
jmp_135d:
	if (local_8 != 0x2e) goto jmp_1397;
	local_20 = 0x3dcccccd;
jmp_1364:
	*(int *)local_24 = local_c;
	local_c = (*(int *)local_24 + 0x1);
	local_8 = (char)*(char *)*(int *)local_24;
	if (local_8 < 0x30) goto jmp_137c;
	if (local_8 <= 0x39) goto jmp_137e;
jmp_137c:
	goto jmp_1397;
jmp_137e:
	local_8 = (local_8 - 0x30);
	local_10 = (local_10 + ((float)local_8 * local_20));
	local_20 = (0x3dcccccd * local_20);
	goto jmp_1364;
jmp_1397:
	*(int *)arg_0 = local_c;
	return (local_10 * local_14);
}

/*
=================
strtod

Address: 0x13a4
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
	goto jmp_13b8;
jmp_13b2:
	arg_0 = (arg_0 + 0x1);
jmp_13b8:
	local_1c = (char)*(char *)arg_0;
	if (local_1c == 0x20) goto jmp_13b2;
	if (local_1c == 0xc) goto jmp_13b2;
	if (local_1c == 0xa) goto jmp_13b2;
	if (local_1c == 0xd) goto jmp_13b2;
	if (local_1c == 0x9) goto jmp_13b2;
	if (local_1c == 0xb) goto jmp_13b2;
	local_20 = Q_stricmpn(arg_0, 0x49c6, 0x3);
	if (local_20 != 0x0) goto jmp_142f;
	if (arg_1 == 0x0) goto jmp_13f0;
	*(int *)arg_1 = (arg_0 + 0x3);
jmp_13f0:
	if ((char)*(char *)(arg_0 + 0x3) != 0x28) goto jmp_1427;
	local_30 = strtol((arg_0 + 0x4), &local_2c, 0x0);
	local_28 = local_30;
	if ((char)*(char *)local_2c != 0x29) goto jmp_1427;
	local_24 = ((local_28 & 0x7fffff) | 0x7f800000);
	if (arg_1 == 0x0) goto jmp_1422;
	*(int *)arg_1 = (local_2c + 0x1);
jmp_1422:
	return local_24;
jmp_1427:
	local_24 = 0x7fffffff;
	return local_24;
jmp_142f:
	local_24 = Q_stricmpn(arg_0, 0x49c2, 0x3);
	if (local_24 != 0x0) goto jmp_1470;
	local_28 = 0x7f800000;
	if (arg_1 != 0x0) goto jmp_144a;
	return local_28;
jmp_144a:
	local_2c = Q_stricmpn((arg_0 + 0x3), 0x49bc, 0x5);
	if (local_2c != 0x0) goto jmp_1464;
	*(int *)arg_1 = (arg_0 + 0x8);
	goto jmp_146b;
jmp_1464:
	*(int *)arg_1 = (arg_0 + 0x3);
jmp_146b:
	return local_28;
jmp_1470:
	if ((char)*(char *)arg_0 != 0x2d) goto jmp_1486;
	local_28 = 0x1;
	arg_0 = (arg_0 + local_28);
	local_18 = local_28;
	goto jmp_1492;
jmp_1486:
	if ((char)*(char *)arg_0 != 0x2b) goto jmp_1492;
	arg_0 = (arg_0 + 0x1);
jmp_1492:
	local_28 = Q_stricmpn(arg_0, 0x49b9, 0x2);
	if (local_28 != 0x0) goto jmp_1630;
	local_30 = (arg_0 + 0x1);
	local_2c = local_30;
	arg_0 = (arg_0 + 0x2);
	local_14 = 0x0;
	goto jmp_1530;
jmp_14b6:
	local_34 = (char)*(char *)arg_0;
	if (local_34 < 0x30) goto jmp_14de;
	if (local_34 > 0x39) goto jmp_14de;
	local_38 = arg_0;
	arg_0 = (local_38 + 0x1);
	local_14 = ((0x41800000 * local_14) + (float)((char)*(char *)local_38 - 0x30));
	goto jmp_1530;
jmp_14de:
	local_3c = (char)*(char *)arg_0;
	if (local_3c < 0x41) goto jmp_1508;
	if (local_3c > 0x46) goto jmp_1508;
	local_40 = arg_0;
	arg_0 = (local_40 + 0x1);
	local_14 = ((((0x41800000 * local_14) + 0x41200000) + (float)(char)*(char *)local_40) - 0x42820000);
	goto jmp_1530;
jmp_1508:
	local_44 = (char)*(char *)arg_0;
	if (local_44 < 0x61) goto jmp_1532;
	if (local_44 > 0x66) goto jmp_1532;
	local_48 = arg_0;
	arg_0 = (local_48 + 0x1);
	local_14 = ((((0x41800000 * local_14) + 0x41200000) + (float)(char)*(char *)local_48) - 0x42c20000);
jmp_1530:
	goto jmp_14b6;
jmp_1532:
	if ((local_2c + 0x1) >= arg_0) goto jmp_153d;
	local_2c = arg_0;
jmp_153d:
	if ((char)*(char *)arg_0 != 0x2e) goto jmp_15da;
	arg_0 = (arg_0 + 0x1);
	local_34 = 0x3d800000;
jmp_154c:
	local_38 = (char)*(char *)arg_0;
	if (local_38 < 0x30) goto jmp_1575;
	if (local_38 > 0x39) goto jmp_1575;
	local_3c = arg_0;
	arg_0 = (local_3c + 0x1);
	local_14 = (local_14 + (local_34 * (float)((char)*(char *)local_3c - 0x30)));
	goto jmp_15c9;
jmp_1575:
	local_40 = (char)*(char *)arg_0;
	if (local_40 < 0x41) goto jmp_15a0;
	if (local_40 > 0x46) goto jmp_15a0;
	local_44 = arg_0;
	arg_0 = (local_44 + 0x1);
	local_14 = (local_14 + (local_34 * (float)(((char)*(char *)local_44 + 0xa) - 0x41)));
	goto jmp_15c9;
jmp_15a0:
	local_48 = (char)*(char *)arg_0;
	if (local_48 < 0x61) goto jmp_15d1;
	if (local_48 > 0x66) goto jmp_15d1;
	local_4c = arg_0;
	arg_0 = (local_4c + 0x1);
	local_14 = (local_14 + (local_34 * (float)(((char)*(char *)local_4c + 0xa) - 0x61)));
jmp_15c9:
	local_34 = (local_34 / 0x41800000);
	goto jmp_154c;
jmp_15d1:
	if (local_2c >= arg_0) goto jmp_15da;
	local_2c = arg_0;
jmp_15da:
	if (local_2c == local_30) goto jmp_1622;
	local_34 = tolower((char)*(char *)arg_0);
	if (local_34 != 0x70) goto jmp_1622;
	local_3c = strtol((arg_0 + 0x1), &local_2c, 0xa);
	local_38 = local_3c;
	if ((arg_0 + 0x1) != local_2c) goto jmp_1612;
	if (arg_1 == 0x0) goto jmp_160d;
	*(int *)arg_1 = arg_0;
jmp_160d:
	return local_14;
jmp_1612:
	local_40 = powN(0x40000000, local_38);
	local_14 = (local_14 * local_40);
jmp_1622:
	if (arg_1 == 0x0) goto jmp_162b;
	*(int *)arg_1 = local_2c;
jmp_162b:
	return local_14;
jmp_1630:
	local_2c = arg_0;
	local_30 = arg_0;
	local_14 = 0x0;
	goto jmp_1655;
jmp_163d:
	local_34 = arg_0;
	arg_0 = (local_34 + 0x1);
	local_14 = (((0x41200000 * local_14) + (float)(char)*(char *)local_34) - 0x42400000);
jmp_1655:
	local_38 = (char)*(char *)arg_0;
	if (local_38 < 0x30) goto jmp_1663;
	if (local_38 <= 0x39) goto jmp_163d;
jmp_1663:
	if (local_2c >= arg_0) goto jmp_166c;
	local_2c = arg_0;
jmp_166c:
	if ((char)*(char *)arg_0 != 0x2e) goto jmp_16b5;
	arg_0 = (arg_0 + 0x1);
	local_3c = 0x3dcccccd;
	goto jmp_169c;
jmp_167d:
	local_40 = arg_0;
	arg_0 = (local_40 + 0x1);
	local_14 = (local_14 + ((float)((char)*(char *)local_40 - 0x30) * local_3c));
	local_3c = (local_3c / 0x41200000);
jmp_169c:
	local_44 = (char)*(char *)arg_0;
	if (local_44 < 0x30) goto jmp_16aa;
	if (local_44 <= 0x39) goto jmp_167d;
jmp_16aa:
	if ((local_2c + 0x1) >= arg_0) goto jmp_16b5;
	local_2c = arg_0;
jmp_16b5:
	if (local_30 == local_2c) goto jmp_16fd;
	local_3c = tolower((char)*(char *)arg_0);
	if (local_3c != 0x65) goto jmp_16fd;
	local_44 = strtol((arg_0 + 0x1), &local_2c, 0xa);
	local_40 = local_44;
	if ((arg_0 + 0x1) != local_2c) goto jmp_16ed;
	if (arg_1 == 0x0) goto jmp_16e8;
	*(int *)arg_1 = arg_0;
jmp_16e8:
	return local_14;
jmp_16ed:
	local_48 = powN(0x41200000, local_40);
	local_14 = (local_14 * local_48);
jmp_16fd:
	if (arg_1 == 0x0) goto jmp_1706;
	*(int *)arg_1 = local_2c;
jmp_1706:
	return local_14;
}

/*
=================
atoi

Address: 0x170b
Stack Size: 0x24
Called by: GraphicsOptions_GetAspectRatios, UI_TeamOrdersMenu_f, UI_TeamOrdersMenu_BuildBotList, TeamMain_MenuInit, ServerOptions_Start, UI_SPPostgameMenu_f, UI_SPPostgameMenu_MenuDraw, UI_SPLevelMenu, UI_SPLevelMenu_Init, UI_SPLevelMenu_SetMenuItems, UI_SPArena_Start, ArenaServers_Insert, UI_RemoveBotsMenu_GetBots, UI_ParseAnimationFile, InGame_MenuInit, UI_GetCurrentGame, UI_CanShowTierVideo, UI_ShowTierVideo, UI_TierCompleted, UI_GetAwardLevel, UI_LogAwardData, UI_SetBestScore, UI_GetBestScore, UI_GetArenaInfoByNumber, UI_CinematicsMenu_f, UI_AddBotsMenu_Init
=================
*/
int atoi(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	char	local_14[8];
	char	local_1c[8];

	arg_0 = arg_0;
	goto jmp_1722;
jmp_1712:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_171c;
	return 0x0;
jmp_171c:
	arg_0 = (arg_0 + 0x1);
jmp_1722:
	if ((char)*(char *)arg_0 <= 0x20) goto jmp_1712;
	*(int *)local_14 = (char)*(char *)arg_0;
	if (*(int *)local_14 == 0x2b) goto jmp_1738;
	if (*(int *)local_14 == 0x2d) goto jmp_1748;
	goto jmp_1753;
jmp_1738:
	*(int *)local_1c = 0x1;
	arg_0 = (arg_0 + *(int *)local_1c);
	local_10 = *(int *)local_1c;
	goto jmp_1756;
jmp_1748:
	arg_0 = (arg_0 + 0x1);
	local_10 = 0xffffffff;
	goto jmp_1756;
jmp_1753:
	local_10 = 0x1;
jmp_1756:
	local_c = 0x0;
jmp_1759:
	*(int *)local_1c = arg_0;
	arg_0 = (*(int *)local_1c + 0x1);
	local_8 = (char)*(char *)*(int *)local_1c;
	if (local_8 < 0x30) goto jmp_1771;
	if (local_8 <= 0x39) goto jmp_1773;
jmp_1771:
	goto jmp_1784;
jmp_1773:
	local_8 = (local_8 - 0x30);
	local_c = ((0xa * local_c) + local_8);
	goto jmp_1759;
jmp_1784:
	return (local_c * local_10);
}

/*
=================
_atoi

Address: 0x178c
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
	goto jmp_17a4;
jmp_1794:
	if ((char)*(char *)local_c != 0x0) goto jmp_179e;
	return 0x0;
jmp_179e:
	local_c = (local_c + 0x1);
jmp_17a4:
	if ((char)*(char *)local_c <= 0x20) goto jmp_1794;
	*(int *)local_18 = (char)*(char *)local_c;
	if (*(int *)local_18 == 0x2b) goto jmp_17ba;
	if (*(int *)local_18 == 0x2d) goto jmp_17ca;
	goto jmp_17d5;
jmp_17ba:
	*(int *)local_20 = 0x1;
	local_c = (local_c + *(int *)local_20);
	local_14 = *(int *)local_20;
	goto jmp_17d8;
jmp_17ca:
	local_c = (local_c + 0x1);
	local_14 = 0xffffffff;
	goto jmp_17d8;
jmp_17d5:
	local_14 = 0x1;
jmp_17d8:
	local_10 = 0x0;
jmp_17db:
	*(int *)local_20 = local_c;
	local_c = (*(int *)local_20 + 0x1);
	local_8 = (char)*(char *)*(int *)local_20;
	if (local_8 < 0x30) goto jmp_17f3;
	if (local_8 <= 0x39) goto jmp_17f5;
jmp_17f3:
	goto jmp_1806;
jmp_17f5:
	local_8 = (local_8 - 0x30);
	local_10 = ((0xa * local_10) + local_8);
	goto jmp_17db;
jmp_1806:
	*(int *)arg_0 = local_c;
	return (local_10 * local_14);
}

/*
=================
strtol

Address: 0x1813
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
	if (arg_1 == 0x0) goto jmp_182c;
	*(int *)arg_1 = arg_0;
jmp_182c:
	if (arg_2 < 0x0) goto jmp_1838;
	if (arg_2 == 0x1) goto jmp_1838;
	if (arg_2 <= 0x24) goto jmp_1842;
jmp_1838:
	return 0x0;
jmp_183c:
	arg_0 = (arg_0 + 0x1);
jmp_1842:
	local_14 = (char)*(char *)arg_0;
	if (local_14 == 0x20) goto jmp_183c;
	if (local_14 == 0xc) goto jmp_183c;
	if (local_14 == 0xa) goto jmp_183c;
	if (local_14 == 0xd) goto jmp_183c;
	if (local_14 == 0x9) goto jmp_183c;
	if (local_14 == 0xb) goto jmp_183c;
	if ((char)*(char *)arg_0 != 0x2d) goto jmp_1871;
	arg_0 = (arg_0 + 0x1);
	*(int *)local_c = 0x0;
	goto jmp_187d;
jmp_1871:
	if ((char)*(char *)arg_0 != 0x2b) goto jmp_187d;
	arg_0 = (arg_0 + 0x1);
jmp_187d:
	if ((char)*(char *)arg_0 != 0x30) goto jmp_18c9;
	arg_0 = (arg_0 + 0x1);
	if (arg_1 == 0x0) goto jmp_1892;
	*(int *)arg_1 = arg_0;
jmp_1892:
	local_18 = (char)*(char *)arg_0;
	if (local_18 == 0x78) goto jmp_18a0;
	if (local_18 != 0x58) goto jmp_18c0;
jmp_18a0:
	if (arg_2 == 0x0) goto jmp_18b5;
	if (arg_2 == 0x10) goto jmp_18b5;
	if (arg_1 == 0x0) goto jmp_18b1;
	*(int *)arg_1 = arg_0;
jmp_18b1:
	return 0x0;
jmp_18b5:
	arg_0 = (arg_0 + 0x1);
	arg_2 = 0x10;
	goto jmp_18d0;
jmp_18c0:
	if (arg_2 != 0x0) goto jmp_18d0;
	arg_2 = 0x8;
	goto jmp_18d0;
jmp_18c9:
	if (arg_2 != 0x0) goto jmp_18d0;
	arg_2 = 0xa;
jmp_18d0:
	local_8 = 0x0;
	goto jmp_194e;
jmp_18d5:
	local_1c = (char)*(char *)arg_0;
	if (local_1c < 0x30) goto jmp_18ed;
	if (local_1c > 0x39) goto jmp_18ed;
	local_18 = ((char)*(char *)arg_0 - 0x30);
	goto jmp_191f;
jmp_18ed:
	local_20 = (char)*(char *)arg_0;
	if (local_20 < 0x61) goto jmp_1907;
	if (local_20 > 0x7a) goto jmp_1907;
	local_18 = (((char)*(char *)arg_0 + 0xa) - 0x61);
	goto jmp_191f;
jmp_1907:
	local_24 = (char)*(char *)arg_0;
	if (local_24 < 0x41) goto jmp_1950;
	if (local_24 > 0x5a) goto jmp_1950;
	local_18 = (((char)*(char *)arg_0 + 0xa) - 0x41);
jmp_191f:
	if (local_18 < arg_2) goto jmp_1926;
	goto jmp_1950;
jmp_1926:
	if (local_8 >= ((local_18 + 0x80000000) / arg_2)) goto jmp_1935;
	local_8 = 0x80000000;
	goto jmp_193f;
jmp_1935:
	local_8 = ((local_8 * arg_2) - local_18);
jmp_193f:
	arg_0 = (arg_0 + 0x1);
	if (arg_1 == 0x0) goto jmp_194e;
	*(int *)arg_1 = arg_0;
jmp_194e:
	goto jmp_18d5;
jmp_1950:
	if (*(int *)local_c == 0x0) goto jmp_1962;
	if (local_8 != 0x80000000) goto jmp_195d;
	local_8 = 0x7fffffff;
	goto jmp_1962;
jmp_195d:
	local_8 = -local_8;
jmp_1962:
	return local_8;
}

/*
=================
abs

Address: 0x1967
Stack Size: 0xc
=================
*/
int abs(int arg_0) {
	int		local_8;

	arg_0 = arg_0;
	if (arg_0 >= 0x0) goto jmp_1977;
	local_8 = -arg_0;
	goto jmp_197b;
jmp_1977:
	local_8 = arg_0;
jmp_197b:
	return local_8;
}

/*
=================
fabs

Address: 0x1980
Stack Size: 0xc
Called by: PerpendicularVector, RadiusFromBounds, UI_SwingAngles, Controls_SetConfig, BG_TouchJumpPad
=================
*/
int fabs(int arg_0) {
	int		local_8;

	arg_0 = arg_0;
	if (arg_0 >= 0x0) goto jmp_1990;
	local_8 = -arg_0;
	goto jmp_1994;
jmp_1990:
	local_8 = arg_0;
jmp_1994:
	return local_8;
}

/*
=================
dopr

Address: 0x1999
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
	goto jmp_2084;
jmp_19cd:
	if ((char)*(char *)&local_2c != 0x0) goto jmp_19d5;
	local_28 = 0x8;
jmp_19d5:
	if (local_28 < 0x0) goto jmp_2084;
	if (local_28 > 0x8) goto jmp_2084;
	goto *(int *)((local_28 << 0x2) + 0xc70);
	if ((char)*(char *)&local_2c != 0x25) goto jmp_19ef;
	local_28 = 0x1;
	goto jmp_1a06;
jmp_19ef:
	local_60 = dopr_outch(arg_0, &local_44, arg_1, (char)*(char *)&local_2c);
	local_40 = (local_40 + local_60);
jmp_1a06:
	local_64 = arg_2;
	arg_2 = (local_64 + 0x1);
	*(char *)&local_2c = *(char *)local_64;
	goto jmp_2084;
	*(int *)local_68 = (char)*(char *)&local_2c;
	*(int *)local_70 = 0x20;
	if (*(int *)local_68 == *(int *)local_70) goto jmp_1a6e;
	if (*(int *)local_68 == 0x23) goto jmp_1a85;
	if (*(int *)local_68 < *(int *)local_70) goto jmp_1ab3;
	if (*(int *)local_68 == 0x2b) goto jmp_1a57;
	if (*(int *)local_68 == 0x2d) goto jmp_1a3b;
	if (*(int *)local_68 == 0x30) goto jmp_1a9c;
	goto jmp_1ab3;
jmp_1a3b:
	local_7c = 0x1;
	local_3c = (local_3c | local_7c);
	local_78 = arg_2;
	arg_2 = (local_78 + local_7c);
	*(char *)&local_2c = *(char *)local_78;
	goto jmp_2084;
jmp_1a57:
	local_3c = (local_3c | 0x2);
	local_80 = arg_2;
	arg_2 = (local_80 + 0x1);
	*(char *)&local_2c = *(char *)local_80;
	goto jmp_2084;
jmp_1a6e:
	local_3c = (local_3c | 0x4);
	local_84 = arg_2;
	arg_2 = (local_84 + 0x1);
	*(char *)&local_2c = *(char *)local_84;
	goto jmp_2084;
jmp_1a85:
	local_3c = (local_3c | 0x8);
	local_88 = arg_2;
	arg_2 = (local_88 + 0x1);
	*(char *)&local_2c = *(char *)local_88;
	goto jmp_2084;
jmp_1a9c:
	local_3c = (local_3c | 0x10);
	local_8c = arg_2;
	arg_2 = (local_8c + 0x1);
	*(char *)&local_2c = *(char *)local_8c;
	goto jmp_2084;
jmp_1ab3:
	local_28 = 0x2;
	goto jmp_2084;
	local_78 = (char)*(char *)&local_2c;
	if (0x30 > local_78) goto jmp_1ae2;
	if (local_78 > 0x39) goto jmp_1ae2;
	local_38 = ((0xa * local_38) + ((char)*(char *)&local_2c - 0x30));
	local_7c = arg_2;
	arg_2 = (local_7c + 0x1);
	*(char *)&local_2c = *(char *)local_7c;
	goto jmp_2084;
jmp_1ae2:
	if ((char)*(char *)&local_2c != 0x2a) goto jmp_1b0c;
	local_80 = (arg_3 + 0x4);
	arg_3 = local_80;
	local_38 = *(int *)(local_80 + 0xfffffffc);
	local_7c = arg_2;
	arg_2 = (local_7c + 0x1);
	*(char *)&local_2c = *(char *)local_7c;
	local_28 = 0x3;
	goto jmp_2084;
jmp_1b0c:
	local_28 = 0x3;
	goto jmp_2084;
	if ((char)*(char *)&local_2c != 0x2e) goto jmp_1b2a;
	local_28 = 0x4;
	local_7c = arg_2;
	arg_2 = (local_7c + 0x1);
	*(char *)&local_2c = *(char *)local_7c;
	goto jmp_2084;
jmp_1b2a:
	local_28 = 0x5;
	goto jmp_2084;
	local_7c = (char)*(char *)&local_2c;
	if (0x30 > local_7c) goto jmp_1b60;
	if (local_7c > 0x39) goto jmp_1b60;
	if (local_30 >= 0x0) goto jmp_1b43;
	local_30 = 0x0;
jmp_1b43:
	local_30 = ((0xa * local_30) + ((char)*(char *)&local_2c - 0x30));
	local_80 = arg_2;
	arg_2 = (local_80 + 0x1);
	*(char *)&local_2c = *(char *)local_80;
	goto jmp_2084;
jmp_1b60:
	if ((char)*(char *)&local_2c != 0x2a) goto jmp_1b8a;
	local_84 = (arg_3 + 0x4);
	arg_3 = local_84;
	local_30 = *(int *)(local_84 + 0xfffffffc);
	local_80 = arg_2;
	arg_2 = (local_80 + 0x1);
	*(char *)&local_2c = *(char *)local_80;
	local_28 = 0x5;
	goto jmp_2084;
jmp_1b8a:
	local_28 = 0x5;
	goto jmp_2084;
	local_80 = (char)*(char *)&local_2c;
	local_88 = 0x68;
	if (local_80 == local_88) goto jmp_1bad;
	if (local_80 > local_88) goto jmp_1ba7;
	if (local_80 == 0x4c) goto jmp_1bda;
	goto jmp_1bec;
jmp_1ba7:
	if (local_80 == 0x6c) goto jmp_1bc6;
	goto jmp_1bec;
jmp_1bad:
	local_90 = 0x1;
	local_34 = local_90;
	local_8c = arg_2;
	arg_2 = (local_8c + local_90);
	*(char *)&local_2c = *(char *)local_8c;
	goto jmp_1bec;
jmp_1bc6:
	local_34 = 0x2;
	local_94 = arg_2;
	arg_2 = (local_94 + 0x1);
	*(char *)&local_2c = *(char *)local_94;
	goto jmp_1bec;
jmp_1bda:
	local_34 = 0x4;
	*(int *)local_98 = arg_2;
	arg_2 = (*(int *)local_98 + 0x1);
	*(char *)&local_2c = *(char *)*(int *)local_98;
jmp_1bec:
	if (local_34 == 0x2) goto jmp_1bf5;
	local_28 = 0x7;
	goto jmp_2084;
jmp_1bf5:
	local_28 = 0x6;
	goto jmp_2084;
	local_8c = (char)*(char *)&local_2c;
	if (local_8c == 0x6c) goto jmp_1c05;
	goto jmp_1c17;
jmp_1c05:
	local_34 = 0x3;
	local_90 = arg_2;
	arg_2 = (local_90 + 0x1);
	*(char *)&local_2c = *(char *)local_90;
jmp_1c17:
	local_28 = 0x7;
	goto jmp_2084;
	local_90 = (char)*(char *)&local_2c;
	if (local_90 == 0x45) goto jmp_1ea1;
	*(int *)local_98 = 0x47;
	if (local_90 == *(int *)local_98) goto jmp_1ef0;
	if (local_90 > *(int *)local_98) goto jmp_1c38;
	if (local_90 == 0x25) goto jmp_2037;
	goto jmp_205f;
jmp_1c38:
	*(int *)local_a0 = 0x58;
	if (local_90 == *(int *)local_a0) goto jmp_1dd1;
	if (local_90 < *(int *)local_a0) goto jmp_205f;
	if (local_90 < 0x63) goto jmp_205f;
	if (local_90 > 0x78) goto jmp_205f;
	goto *(int *)((local_90 << 0x2) + 0xb08);
	if (local_34 != 0x1) goto jmp_1c6d;
	local_a8 = (arg_3 + 0x4);
	arg_3 = local_a8;
	local_48 = (short)*(int *)(local_a8 + 0xfffffffc);
	goto jmp_1cac;
jmp_1c6d:
	if (local_34 != 0x2) goto jmp_1c84;
	local_ac = (arg_3 + 0x4);
	arg_3 = local_ac;
	local_48 = *(int *)(local_ac + 0xfffffffc);
	goto jmp_1cac;
jmp_1c84:
	if (local_34 != 0x3) goto jmp_1c9b;
	local_b0 = (arg_3 + 0x4);
	arg_3 = local_b0;
	local_48 = *(int *)(local_b0 + 0xfffffffc);
	goto jmp_1cac;
jmp_1c9b:
	local_b4 = (arg_3 + 0x4);
	arg_3 = local_b4;
	local_48 = *(int *)(local_b4 + 0xfffffffc);
jmp_1cac:
	local_b8 = fmtint(arg_0, &local_44, arg_1, local_48, 0xa, local_38, local_30, local_3c);
	local_40 = (local_40 + local_b8);
	goto jmp_205f;
	local_3c = (local_3c | 0x40);
	if (local_34 != 0x1) goto jmp_1cee;
	local_bc = (arg_3 + 0x4);
	arg_3 = local_bc;
	local_48 = (*(int *)(local_bc + 0xfffffffc) & 0xffff);
	goto jmp_1d2d;
jmp_1cee:
	if (local_34 != 0x2) goto jmp_1d05;
	local_c0 = (arg_3 + 0x4);
	arg_3 = local_c0;
	local_48 = *(int *)(local_c0 + 0xfffffffc);
	goto jmp_1d2d;
jmp_1d05:
	if (local_34 != 0x3) goto jmp_1d1c;
	local_c4 = (arg_3 + 0x4);
	arg_3 = local_c4;
	local_48 = *(int *)(local_c4 + 0xfffffffc);
	goto jmp_1d2d;
jmp_1d1c:
	local_c8 = (arg_3 + 0x4);
	arg_3 = local_c8;
	local_48 = *(int *)(local_c8 + 0xfffffffc);
jmp_1d2d:
	local_cc = fmtint(arg_0, &local_44, arg_1, local_48, 0x8, local_38, local_30, local_3c);
	local_40 = (local_40 + local_cc);
	goto jmp_205f;
	local_3c = (local_3c | 0x40);
	if (local_34 != 0x1) goto jmp_1d6f;
	local_d0 = (arg_3 + 0x4);
	arg_3 = local_d0;
	local_48 = (*(int *)(local_d0 + 0xfffffffc) & 0xffff);
	goto jmp_1dae;
jmp_1d6f:
	if (local_34 != 0x2) goto jmp_1d86;
	local_d4 = (arg_3 + 0x4);
	arg_3 = local_d4;
	local_48 = *(int *)(local_d4 + 0xfffffffc);
	goto jmp_1dae;
jmp_1d86:
	if (local_34 != 0x3) goto jmp_1d9d;
	local_d8 = (arg_3 + 0x4);
	arg_3 = local_d8;
	local_48 = *(int *)(local_d8 + 0xfffffffc);
	goto jmp_1dae;
jmp_1d9d:
	local_dc = (arg_3 + 0x4);
	arg_3 = local_dc;
	local_48 = *(int *)(local_dc + 0xfffffffc);
jmp_1dae:
	local_e0 = fmtint(arg_0, &local_44, arg_1, local_48, 0xa, local_38, local_30, local_3c);
	local_40 = (local_40 + local_e0);
	goto jmp_205f;
jmp_1dd1:
	local_3c = (local_3c | 0x20);
	local_3c = (local_3c | 0x40);
	if (local_34 != 0x1) goto jmp_1df6;
	local_e4 = (arg_3 + 0x4);
	arg_3 = local_e4;
	local_48 = (*(int *)(local_e4 + 0xfffffffc) & 0xffff);
	goto jmp_1e35;
jmp_1df6:
	if (local_34 != 0x2) goto jmp_1e0d;
	local_e8 = (arg_3 + 0x4);
	arg_3 = local_e8;
	local_48 = *(int *)(local_e8 + 0xfffffffc);
	goto jmp_1e35;
jmp_1e0d:
	if (local_34 != 0x3) goto jmp_1e24;
	local_ec = (arg_3 + 0x4);
	arg_3 = local_ec;
	local_48 = *(int *)(local_ec + 0xfffffffc);
	goto jmp_1e35;
jmp_1e24:
	local_f0 = (arg_3 + 0x4);
	arg_3 = local_f0;
	local_48 = *(int *)(local_f0 + 0xfffffffc);
jmp_1e35:
	local_f4 = fmtint(arg_0, &local_44, arg_1, local_48, 0x10, local_38, local_30, local_3c);
	local_40 = (local_40 + local_f4);
	goto jmp_205f;
	if (local_34 != 0x4) goto jmp_1e6f;
	local_f8 = (arg_3 + 0x4);
	arg_3 = local_f8;
	local_4c = *(int *)(local_f8 + 0xfffffffc);
	goto jmp_1e80;
jmp_1e6f:
	local_fc = (arg_3 + 0x4);
	arg_3 = local_fc;
	local_4c = *(int *)(local_fc + 0xfffffffc);
jmp_1e80:
	local_100 = fmtfp(arg_0, &local_44, arg_1, local_4c, local_38, local_30, local_3c);
	local_40 = (local_40 + local_100);
	goto jmp_205f;
jmp_1ea1:
	local_3c = (local_3c | 0x20);
	if (local_34 != 0x4) goto jmp_1ebe;
	local_104 = (arg_3 + 0x4);
	arg_3 = local_104;
	local_4c = *(int *)(local_104 + 0xfffffffc);
	goto jmp_1ecf;
jmp_1ebe:
	local_108 = (arg_3 + 0x4);
	arg_3 = local_108;
	local_4c = *(int *)(local_108 + 0xfffffffc);
jmp_1ecf:
	local_10c = fmtfp(arg_0, &local_44, arg_1, local_4c, local_38, local_30, local_3c);
	local_40 = (local_40 + local_10c);
	goto jmp_205f;
jmp_1ef0:
	local_3c = (local_3c | 0x20);
	if (local_34 != 0x4) goto jmp_1f0d;
	local_110 = (arg_3 + 0x4);
	arg_3 = local_110;
	local_4c = *(int *)(local_110 + 0xfffffffc);
	goto jmp_1f1e;
jmp_1f0d:
	local_114 = (arg_3 + 0x4);
	arg_3 = local_114;
	local_4c = *(int *)(local_114 + 0xfffffffc);
jmp_1f1e:
	local_118 = fmtfp(arg_0, &local_44, arg_1, local_4c, local_38, local_30, local_3c);
	local_40 = (local_40 + local_118);
	goto jmp_205f;
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "&local_44"
#define next_call_arg_2 "arg_1"
	local_11c = (arg_3 + 0x4);
	arg_3 = local_11c;
#define next_call_arg_3 "(char)*(int *)(local_11c + 0xfffffffc)"
	local_120 = dopr_outch();
	local_40 = (local_40 + local_120);
	goto jmp_205f;
	local_124 = (arg_3 + 0x4);
	arg_3 = local_124;
	local_50 = *(int *)(local_124 + 0xfffffffc);
	local_128 = fmtstr(arg_0, &local_44, arg_1, local_50, local_3c, local_38, local_30);
	local_40 = (local_40 + local_128);
	goto jmp_205f;
	local_12c = (arg_3 + 0x4);
	arg_3 = local_12c;
	local_50 = *(int *)(local_12c + 0xfffffffc);
	local_130 = fmtint(arg_0, &local_44, arg_1, local_50, 0x10, local_38, local_30, local_3c);
	local_40 = (local_40 + local_130);
	goto jmp_205f;
	if (local_34 != 0x1) goto jmp_1fe7;
	local_138 = (arg_3 + 0x4);
	arg_3 = local_138;
	local_134 = *(int *)(local_138 + 0xfffffffc);
	*(short *)local_134 = local_44;
	goto jmp_205f;
jmp_1fe7:
	if (local_34 != 0x2) goto jmp_2003;
	local_138 = (arg_3 + 0x4);
	arg_3 = local_138;
	local_134 = *(int *)(local_138 + 0xfffffffc);
	*(int *)local_134 = local_44;
	goto jmp_205f;
jmp_2003:
	if (local_34 != 0x3) goto jmp_201f;
	local_138 = (arg_3 + 0x4);
	arg_3 = local_138;
	local_134 = *(int *)(local_138 + 0xfffffffc);
	*(int *)local_134 = local_44;
	goto jmp_205f;
jmp_201f:
	local_138 = (arg_3 + 0x4);
	arg_3 = local_138;
	local_134 = *(int *)(local_138 + 0xfffffffc);
	*(int *)local_134 = local_44;
	goto jmp_205f;
jmp_2037:
	local_134 = dopr_outch(arg_0, &local_44, arg_1, (char)*(char *)&local_2c);
	local_40 = (local_40 + local_134);
	goto jmp_205f;
	local_138 = arg_2;
	arg_2 = (local_138 + 0x1);
	*(char *)&local_2c = *(char *)local_138;
jmp_205f:
	local_a8 = arg_2;
	arg_2 = (local_a8 + 0x1);
	*(char *)&local_2c = *(char *)local_a8;
	local_ac = 0x0;
	local_28 = local_ac;
	local_38 = local_ac;
	local_34 = local_ac;
	local_3c = local_ac;
	local_30 = 0xffffffff;
jmp_2084:
	if (local_28 != 0x8) goto jmp_19cd;
	if (arg_1 == 0x0) goto jmp_2093;
	*(char *)(local_44 + arg_0) = 0x0;
jmp_2093:
	return local_40;
}

/*
=================
fmtstr

Address: 0x2098
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
	if (arg_3 != 0x0) goto jmp_20ba;
	arg_3 = 0x49b2;
jmp_20ba:
	local_20 = 0x0;
	goto jmp_20c5;
jmp_20bf:
	local_20 = (local_20 + 0x1);
jmp_20c5:
	if ((char)*(char *)(local_20 + arg_3) != 0x0) goto jmp_20bf;
	if (arg_6 < 0x0) goto jmp_20db;
	if (arg_6 >= local_20) goto jmp_20db;
	local_20 = arg_6;
jmp_20db:
	local_18 = (arg_5 - local_20);
	if (local_18 >= 0x0) goto jmp_20e9;
	local_18 = 0x0;
jmp_20e9:
	if ((arg_4 & 0x1) == 0x0) goto jmp_2112;
	local_18 = -local_18;
	goto jmp_2112;
jmp_20f6:
	local_2c = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_1c = (local_1c + local_2c);
	local_18 = (local_18 - 0x1);
jmp_2112:
	if (local_18 > 0x0) goto jmp_20f6;
	goto jmp_2141;
jmp_2118:
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
	local_2c = arg_3;
	arg_3 = (local_2c + 0x1);
#define next_call_arg_3 "(char)*(char *)local_2c"
	local_30 = dopr_outch();
	local_1c = (local_1c + local_30);
	*(int *)local_24 = (*(int *)local_24 + 0x1);
jmp_2141:
	local_2c = 0x0;
	if ((char)*(char *)arg_3 == local_2c) goto jmp_2155;
	if (arg_6 < local_2c) goto jmp_2118;
	if (*(int *)local_24 < arg_6) goto jmp_2118;
jmp_2155:
	goto jmp_2173;
jmp_2157:
	local_34 = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_1c = (local_1c + local_34);
	local_18 = (local_18 + 0x1);
jmp_2173:
	if (local_18 < 0x0) goto jmp_2157;
	return local_1c;
}

/*
=================
fmtint

Address: 0x217c
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
	if (arg_6 >= 0x0) goto jmp_21ab;
	arg_6 = 0x0;
jmp_21ab:
	local_20 = arg_3;
	if ((arg_7 & 0x40) != 0x0) goto jmp_21d7;
	if (arg_3 >= 0x0) goto jmp_21c3;
	local_48 = 0x2d;
	local_20 = -arg_3;
	goto jmp_21d7;
jmp_21c3:
	if ((arg_7 & 0x2) == 0x0) goto jmp_21ce;
	local_48 = 0x2b;
	goto jmp_21d7;
jmp_21ce:
	if ((arg_7 & 0x4) == 0x0) goto jmp_21d7;
	local_48 = 0x20;
jmp_21d7:
	if ((arg_7 & 0x20) == 0x0) goto jmp_21e2;
	local_44 = 0x49a1;
	goto jmp_21e5;
jmp_21e2:
	local_44 = 0x4990;
jmp_21e5:
	local_4c = local_18;
	local_18 = (local_4c + 0x1);
	*(char *)(local_4c + local_28) = *(char *)((local_20 %% arg_4) + local_44);
	local_20 = (local_20 / arg_4);
	if (local_20 == 0x0) goto jmp_220c;
	if (local_18 < 0x18) goto jmp_21e5;
jmp_220c:
	if (local_18 != 0x18) goto jmp_2216;
	local_18 = (local_18 - 0x1);
jmp_2216:
	*(char *)(local_18 + local_28) = 0x0;
	local_40 = (arg_6 - local_18);
	if (arg_6 <= local_18) goto jmp_222e;
	local_4c = arg_6;
	goto jmp_2232;
jmp_222e:
	local_4c = local_18;
jmp_2232:
	if (local_48 == 0x0) goto jmp_223b;
	*(int *)local_50 = 0x1;
	goto jmp_223e;
jmp_223b:
	*(int *)local_50 = 0x0;
jmp_223e:
	local_1c = ((arg_5 - local_4c) - *(int *)local_50);
	if (local_40 >= 0x0) goto jmp_224f;
	local_40 = 0x0;
jmp_224f:
	if (local_1c >= 0x0) goto jmp_2256;
	local_1c = 0x0;
jmp_2256:
	if ((arg_7 & 0x10) == 0x0) goto jmp_2272;
	if (local_40 <= local_1c) goto jmp_2267;
	local_5c = local_40;
	goto jmp_226b;
jmp_2267:
	local_5c = local_1c;
jmp_226b:
	local_40 = local_5c;
	local_1c = 0x0;
jmp_2272:
	if ((arg_7 & 0x1) == 0x0) goto jmp_229b;
	local_1c = -local_1c;
	goto jmp_229b;
jmp_227f:
	local_5c = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_24 = (local_24 + local_5c);
	local_1c = (local_1c - 0x1);
jmp_229b:
	if (local_1c > 0x0) goto jmp_227f;
	if (local_48 == 0x0) goto jmp_22bb;
	local_5c = dopr_outch(arg_0, arg_1, arg_2, (char)local_48);
	local_24 = (local_24 + local_5c);
jmp_22bb:
	if (local_40 <= 0x0) goto jmp_2308;
	goto jmp_22dd;
jmp_22c1:
	local_60 = dopr_outch(arg_0, arg_1, arg_2, 0x30);
	local_24 = (local_24 + local_60);
	local_40 = (local_40 - 0x1);
jmp_22dd:
	if (local_40 > 0x0) goto jmp_22c1;
	goto jmp_2308;
jmp_22e3:
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
	local_60 = (local_18 - 0x1);
	local_18 = local_60;
#define next_call_arg_3 "(char)*(char *)(local_60 + local_28)"
	local_64 = dopr_outch();
	local_24 = (local_24 + local_64);
jmp_2308:
	if (local_18 > 0x0) goto jmp_22e3;
	goto jmp_232a;
jmp_230e:
	local_68 = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_24 = (local_24 + local_68);
	local_1c = (local_1c + 0x1);
jmp_232a:
	if (local_1c < 0x0) goto jmp_230e;
	return local_24;
}

/*
=================
abs_val

Address: 0x2333
Stack Size: 0xc
Called by: fmtfp
=================
*/
int abs_val(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	if (arg_0 >= 0x0) goto jmp_2341;
	local_8 = -arg_0;
jmp_2341:
	return local_8;
}

/*
=================
round

Address: 0x2346
Stack Size: 0x10
Called by: fmtfp
=================
*/
int round(int arg_0) {
	char	local_8[8];

	arg_0 = arg_0;
	*(int *)local_8 = (int)arg_0;
	arg_0 = (arg_0 - (float)*(int *)local_8);
	if (arg_0 < 0x3f000000) goto jmp_2362;
	*(int *)local_8 = (*(int *)local_8 + 0x1);
jmp_2362:
	return *(int *)local_8;
}

/*
=================
fmtfp

Address: 0x2367
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
	if (arg_5 >= 0x0) goto jmp_2394;
	arg_5 = 0x6;
jmp_2394:
	local_68 = abs_val(arg_3);
	local_64 = local_68;
	if (arg_3 >= 0x0) goto jmp_23a8;
	local_60 = 0x2d;
	goto jmp_23bc;
jmp_23a8:
	if ((arg_6 & 0x2) == 0x0) goto jmp_23b3;
	local_60 = 0x2b;
	goto jmp_23bc;
jmp_23b3:
	if ((arg_6 & 0x4) == 0x0) goto jmp_23bc;
	local_60 = 0x20;
jmp_23bc:
	local_24 = (int)local_64;
	if (arg_5 <= 0x9) goto jmp_23c8;
	arg_5 = 0x9;
jmp_23c8:
	local_6c = powN(0x41200000, arg_5);
	local_70 = round((local_6c * (local_64 - (float)local_24)));
	local_28 = local_70;
	local_74 = powN(0x41200000, arg_5);
	if ((float)local_28 < local_74) goto jmp_240a;
	local_24 = (local_24 + 0x1);
	local_78 = powN(0x41200000, arg_5);
	local_28 = (int)((float)local_28 - local_78);
jmp_240a:
	local_7c = local_20;
	local_20 = (local_7c + 0x1);
	if (local_44 == 0x0) goto jmp_241d;
	local_78 = 0x49a1;
	goto jmp_2420;
jmp_241d:
	local_78 = 0x4990;
jmp_2420:
	*(char *)(local_7c + local_30) = *(char *)((local_24 %% 0xa) + local_78);
	local_24 = (local_24 / 0xa);
	if (local_24 == 0x0) goto jmp_243b;
	if (local_20 < 0x14) goto jmp_240a;
jmp_243b:
	if (local_20 != 0x14) goto jmp_2445;
	local_20 = (local_20 - 0x1);
jmp_2445:
	*(char *)(local_20 + local_30) = 0x0;
jmp_244b:
	local_7c = local_2c;
	local_2c = (local_7c + 0x1);
	if (local_44 == 0x0) goto jmp_245e;
	local_78 = 0x49a1;
	goto jmp_2461;
jmp_245e:
	local_78 = 0x4990;
jmp_2461:
	*(char *)(local_7c + local_48) = *(char *)((local_28 %% 0xa) + local_78);
	local_28 = (local_28 / 0xa);
	if (local_28 == 0x0) goto jmp_247c;
	if (local_2c < 0x14) goto jmp_244b;
jmp_247c:
	if (local_2c != 0x14) goto jmp_2486;
	local_2c = (local_2c - 0x1);
jmp_2486:
	*(char *)(local_2c + local_48) = 0x0;
	if (local_60 == 0x0) goto jmp_2495;
	local_78 = 0x1;
	goto jmp_2498;
jmp_2495:
	local_78 = 0x0;
jmp_2498:
	local_18 = ((((arg_4 - local_20) - arg_5) - 0x1) - local_78);
	local_5c = (arg_5 - local_2c);
	if (local_5c >= 0x0) goto jmp_24b5;
	local_5c = 0x0;
jmp_24b5:
	if (local_18 >= 0x0) goto jmp_24bc;
	local_18 = 0x0;
jmp_24bc:
	if ((arg_6 & 0x1) == 0x0) goto jmp_24c7;
	local_18 = -local_18;
jmp_24c7:
	local_7c = 0x0;
	if ((arg_6 & 0x10) == local_7c) goto jmp_253b;
	if (local_18 <= local_7c) goto jmp_253b;
	if (local_60 == 0x0) goto jmp_2519;
	local_80 = dopr_outch(arg_0, arg_1, arg_2, (char)local_60);
	local_1c = (local_1c + local_80);
	local_18 = (local_18 - 0x1);
	local_60 = 0x0;
	goto jmp_2519;
jmp_24fd:
	local_80 = dopr_outch(arg_0, arg_1, arg_2, 0x30);
	local_1c = (local_1c + local_80);
	local_18 = (local_18 - 0x1);
jmp_2519:
	if (local_18 > 0x0) goto jmp_24fd;
	goto jmp_253b;
jmp_251f:
	local_80 = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_1c = (local_1c + local_80);
	local_18 = (local_18 - 0x1);
jmp_253b:
	if (local_18 > 0x0) goto jmp_251f;
	if (local_60 == 0x0) goto jmp_2582;
	local_80 = dopr_outch(arg_0, arg_1, arg_2, (char)local_60);
	local_1c = (local_1c + local_80);
	goto jmp_2582;
jmp_255d:
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
	local_84 = (local_20 - 0x1);
	local_20 = local_84;
#define next_call_arg_3 "(char)*(char *)(local_84 + local_30)"
	local_88 = dopr_outch();
	local_1c = (local_1c + local_88);
jmp_2582:
	if (local_20 > 0x0) goto jmp_255d;
	if (arg_5 <= 0x0) goto jmp_260f;
	local_8c = dopr_outch(arg_0, arg_1, arg_2, 0x2e);
	local_1c = (local_1c + local_8c);
	goto jmp_25b8;
jmp_25a2:
	local_90 = dopr_outch(arg_0, arg_1, arg_2, 0x30);
	local_1c = (local_1c + local_90);
jmp_25b8:
	local_94 = local_5c;
	local_5c = (local_94 - 0x1);
	if (local_94 > 0x0) goto jmp_25a2;
	goto jmp_25ed;
jmp_25c8:
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
	local_98 = (local_2c - 0x1);
	local_2c = local_98;
#define next_call_arg_3 "(char)*(char *)(local_98 + local_48)"
	local_9c = dopr_outch();
	local_1c = (local_1c + local_9c);
jmp_25ed:
	if (local_2c > 0x0) goto jmp_25c8;
	goto jmp_260f;
jmp_25f3:
	local_8c = dopr_outch(arg_0, arg_1, arg_2, 0x20);
	local_1c = (local_1c + local_8c);
	local_18 = (local_18 + 0x1);
jmp_260f:
	if (local_18 < 0x0) goto jmp_25f3;
	return local_1c;
}

/*
=================
dopr_outch

Address: 0x2618
Stack Size: 0x10
Called by: fmtfp, fmtint, fmtstr, dopr
=================
*/
int dopr_outch(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_8;
	int		local_c;

	*(char *)&arg_3 = arg_3;
	if ((*(int *)arg_1 + 0x1) >= arg_2) goto jmp_263d;
	local_c = arg_1;
	local_8 = *(int *)local_c;
	*(int *)local_c = (local_8 + 0x1);
	*(char *)(local_8 + arg_0) = *(char *)&arg_3;
jmp_263d:
	return 0x1;
}

/*
=================
Q_vsnprintf

Address: 0x2641
Stack Size: 0x1c
Calls: dopr
Called by: va, Com_sprintf, COM_ParseWarning, COM_ParseError, Com_Printf, Com_Error
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

Address: 0x2657
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
	goto jmp_2788;
jmp_2660:
	if ((char)*(char *)arg_1 == 0x25) goto jmp_266e;
	arg_1 = (arg_1 + 0x1);
	goto jmp_2788;
jmp_266e:
	arg_1 = (arg_1 + 0x1);
	local_c = (char)*(char *)arg_1;
	if (local_c < 0x30) goto jmp_2696;
	if (local_c > 0x39) goto jmp_2696;
	local_20 = _atoi(&arg_1);
	local_10 = local_20;
	local_c = (char)*(char *)(arg_1 + 0xffffffff);
	goto jmp_269f;
jmp_2696:
	local_10 = 0x3ff;
	arg_1 = (arg_1 + 0x1);
jmp_269f:
	*(int *)local_24 = 0x64;
	if (local_c == *(int *)local_24) goto jmp_26be;
	if (local_c == 0x66) goto jmp_26d8;
	if (local_c == 0x69) goto jmp_26be;
	if (local_c < *(int *)local_24) goto jmp_2788;
	if (local_c == 0x73) goto jmp_26f2;
	if (local_c == 0x75) goto jmp_26be;
	goto jmp_2788;
jmp_26be:
	local_2c = (local_14 + 0x4);
	local_14 = local_2c;
	local_30 = _atoi(&arg_0);
	*(int *)*(int *)(local_2c + 0xfffffffc) = local_30;
	goto jmp_2788;
jmp_26d8:
	local_34 = (local_14 + 0x4);
	local_14 = local_34;
	local_38 = _atof(&arg_0);
	*(int *)*(int *)(local_34 + 0xfffffffc) = local_38;
	goto jmp_2788;
jmp_26f2:
	local_40 = (local_14 + 0x4);
	local_14 = local_40;
	local_3c = *(int *)(local_40 + 0xfffffffc);
	goto jmp_270b;
jmp_2705:
	arg_0 = (arg_0 + 0x1);
jmp_270b:
	local_44 = (char)*(char *)arg_0;
	if (local_44 == 0x20) goto jmp_2705;
	if (local_44 == 0xc) goto jmp_2705;
	if (local_44 == 0xa) goto jmp_2705;
	if (local_44 == 0xd) goto jmp_2705;
	if (local_44 == 0x9) goto jmp_2705;
	if (local_44 == 0xb) goto jmp_2705;
	goto jmp_274a;
jmp_272b:
	local_48 = local_3c;
	local_50 = 0x1;
	local_3c = (local_48 + local_50);
	local_4c = arg_0;
	arg_0 = (local_4c + local_50);
	*(char *)local_48 = *(char *)local_4c;
jmp_274a:
	local_58 = (char)*(char *)arg_0;
	if (local_58 == 0x0) goto jmp_277a;
	if (local_58 == 0x20) goto jmp_277a;
	if (local_58 == 0xc) goto jmp_277a;
	if (local_58 == 0xa) goto jmp_277a;
	if (local_58 == 0xd) goto jmp_277a;
	if (local_58 == 0x9) goto jmp_277a;
	if (local_58 == 0xb) goto jmp_277a;
	local_54 = local_10;
	local_10 = (local_54 - 0x1);
	if (local_54 != 0x0) goto jmp_272b;
jmp_277a:
	local_5c = local_3c;
	local_3c = (local_5c + 0x1);
	*(char *)local_5c = 0x0;
jmp_2788:
	if ((char)*(char *)arg_1 != 0x0) goto jmp_2660;
	local_14 = 0x0;
	return *(int *)local_18;
}

/*
=================
UI_AddBotsMenu_FightEvent

Address: 0x2796
Stack Size: 0x2c
Calls: trap_Cmd_ExecuteText, va
=================
*/
void UI_AddBotsMenu_FightEvent(, int arg_1) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	if (arg_1 == 0x3) goto jmp_279d;
	goto jmp_27d6;
jmp_279d:
	local_1c = *(int *)((bss_c194 << 0x2) + bss_c1a0);
	local_20 = (bss_c134 + 0x1);
	local_24 = va(0x4ae4, ((bss_c270 << 0x5) + 0xd274), local_20, local_1c, bss_c268);
	trap_Cmd_ExecuteText(0x2, local_24);
	local_28 = 0xc268;
	*(int *)local_28 = (*(int *)local_28 + 0x5dc);
jmp_27d6:
}

/*
=================
UI_AddBotsMenu_BotEvent

Address: 0x27d8
Stack Size: 0x8
=================
*/
void UI_AddBotsMenu_BotEvent(int arg_0, int arg_1) {

	if (arg_1 == 0x3) goto jmp_27df;
	goto jmp_27f8;
jmp_27df:
	*(int *)((0x48 * bss_c270) + 0xbf40) = 0x21a0;
	bss_c270 = (*(int *)(arg_0 + 0x8) - 0x14);
	*(int *)((0x48 * bss_c270) + 0xbf40) = 0x2160;
jmp_27f8:
}

/*
=================
UI_AddBotsMenu_BackEvent

Address: 0x27fa
Stack Size: 0x8
Calls: UI_PopMenu
=================
*/
void UI_AddBotsMenu_BackEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_2801;
	goto jmp_2804;
jmp_2801:
	UI_PopMenu();
jmp_2804:
}

/*
=================
UI_AddBotsMenu_SetBotNames

Address: 0x2806
Stack Size: 0x24
Calls: Q_strncpyz, Info_ValueForKey, UI_GetBotInfoByNumber
Called by: UI_AddBotsMenu_Init, UI_AddBotsMenu_DownEvent, UI_AddBotsMenu_UpEvent
=================
*/
void UI_AddBotsMenu_SetBotNames(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;

	local_14 = 0x0;
jmp_280a:
	local_1c = UI_GetBotInfoByNumber(*(int *)(((bss_c26c + local_14) << 0x2) + 0xc274));
	local_18 = local_1c;
	local_20 = Info_ValueForKey(local_18, 0x4adf);
	Q_strncpyz(((local_14 << 0x5) + 0xd274), local_20, 0x20);
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x7) goto jmp_280a;
}

/*
=================
UI_AddBotsMenu_UpEvent

Address: 0x2841
Stack Size: 0xc
Calls: UI_AddBotsMenu_SetBotNames
=================
*/
void UI_AddBotsMenu_UpEvent(, int arg_1) {
	int		local_8;

	if (arg_1 == 0x3) goto jmp_2848;
	goto jmp_285a;
jmp_2848:
	if (bss_c26c <= 0x0) goto jmp_285a;
	local_8 = 0xc26c;
	*(int *)local_8 = (*(int *)local_8 - 0x1);
	UI_AddBotsMenu_SetBotNames();
jmp_285a:
}

/*
=================
UI_AddBotsMenu_DownEvent

Address: 0x285c
Stack Size: 0xc
Calls: UI_AddBotsMenu_SetBotNames
=================
*/
void UI_AddBotsMenu_DownEvent(, int arg_1) {
	int		local_8;

	if (arg_1 == 0x3) goto jmp_2863;
	goto jmp_2878;
jmp_2863:
	if ((bss_c26c + 0x7) >= bss_c264) goto jmp_2878;
	local_8 = 0xc26c;
	*(int *)local_8 = (*(int *)local_8 + 0x1);
	UI_AddBotsMenu_SetBotNames();
jmp_2878:
}

/*
=================
UI_AddBotsMenu_SortCompare

Address: 0x287a
Stack Size: 0x3c
Calls: Q_stricmp, Info_ValueForKey, UI_GetBotInfoByNumber
=================
*/
int UI_AddBotsMenu_SortCompare(int arg_0, int arg_1) {
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

	local_10 = *(int *)arg_0;
	local_14 = *(int *)arg_1;
	local_28 = UI_GetBotInfoByNumber(local_10);
	local_18 = local_28;
	local_2c = UI_GetBotInfoByNumber(local_14);
	local_1c = local_2c;
	local_30 = Info_ValueForKey(local_18, 0x4adf);
	local_20 = local_30;
	local_34 = Info_ValueForKey(local_1c, 0x4adf);
	local_24 = local_34;
	local_38 = Q_stricmp(local_20, local_24);
	return local_38;
}

/*
=================
UI_AddBotsMenu_GetSortedBotNums

Address: 0x28c4
Stack Size: 0x20
Calls: qsort
Called by: UI_AddBotsMenu_Init
=================
*/
void UI_AddBotsMenu_GetSortedBotNums(void) {
	char	local_18[8];

	*(int *)local_18 = 0x0;
	goto jmp_28d9;
jmp_28ca:
	*(int *)((*(int *)local_18 << 0x2) + 0xc274) = *(int *)local_18;
	*(int *)local_18 = (*(int *)local_18 + 0x1);
jmp_28d9:
	if (*(int *)local_18 < bss_c264) goto jmp_28ca;
	qsort(0xc274, bss_c264, 0x4, 0x287a);
}

/*
=================
UI_AddBotsMenu_Init

Address: 0x28ec
Stack Size: 0x43c
Calls: trap_Cvar_VariableValue, memset, trap_GetConfigString, Menu_AddItem, UI_AddBotsMenu_SetBotNames, UI_AddBotsMenu_GetSortedBotNums, Com_Clamp, UI_GetNumBots, UI_AddBots_Cache, atoi, Info_ValueForKey
Called by: UI_AddBotsMenu
=================
*/
void UI_AddBotsMenu_Init(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[1024];
	int		local_424;
	int		local_428;
	int		local_42c;
	int		local_430;
	int		local_434;
	int		local_438;

	trap_GetConfigString(0x0, local_24, 0x400);
	local_424 = Info_ValueForKey(local_24, 0x4a8d);
	local_428 = atoi(local_424);
	local_20 = local_428;
	memset(0xbc34, 0x0, 0x1720);
	bss_bd4c = 0x0;
	bss_bd48 = 0x1;
	bss_c268 = 0x3e8;
	UI_AddBots_Cache();
	local_42c = UI_GetNumBots();
	bss_c264 = local_42c;
	if (bss_c264 >= 0x7) goto jmp_2930;
	local_430 = bss_c264;
	goto jmp_2933;
jmp_2930:
	local_430 = 0x7;
jmp_2933:
	local_1c = local_430;
	bss_bd54 = 0xa;
	bss_bd60 = 0x140;
	bss_bd64 = 0x10;
	bss_bd90 = 0x4a84;
	bss_bd98 = 0x2160;
	bss_bd94 = 0x1;
	bss_bd9c = 0x6;
	bss_bda0 = 0x4a6f;
	bss_bdc8 = 0x4000;
	bss_bda8 = 0x57;
	bss_bdac = 0x4a;
	bss_bde8 = 0x1d2;
	bss_bdec = 0x14c;
	bss_bdf4 = 0x6;
	bss_bdf8 = 0x4a58;
	bss_be20 = 0x4000;
	bss_be00 = 0xc8;
	bss_be04 = 0x80;
	bss_be40 = 0x40;
	bss_be44 = 0x80;
	bss_be4c = 0x6;
	bss_be78 = 0x104;
	bss_be58 = 0xc8;
	bss_be5c = 0x80;
	bss_be54 = 0xd;
	bss_be7c = 0x2841;
	bss_be98 = 0x40;
	bss_be9c = 0x40;
	bss_be88 = 0x4a3f;
	bss_bea4 = 0x6;
	bss_bed0 = 0x104;
	bss_beb0 = 0xc8;
	bss_beb4 = 0xc0;
	bss_beac = 0xe;
	bss_bed4 = 0x285c;
	bss_bef0 = 0x40;
	bss_bef4 = 0x40;
	bss_bee0 = 0x4a26;
	local_14 = 0x0;
	local_18 = 0x78;
	goto jmp_2a0e;
jmp_29b1:
	*(int *)((0x48 * local_14) + 0xbefc) = 0x9;
	*(int *)((0x48 * local_14) + 0xbf28) = 0x104;
	*(int *)((0x48 * local_14) + 0xbf04) = (local_14 + 0x14);
	*(int *)((0x48 * local_14) + 0xbf08) = 0x108;
	*(int *)((0x48 * local_14) + 0xbf0c) = local_18;
	*(int *)((0x48 * local_14) + 0xbf2c) = 0x27d8;
	*(int *)((0x48 * local_14) + 0xbf38) = ((local_14 << 0x5) + 0xd274);
	*(int *)((0x48 * local_14) + 0xbf40) = 0x21a0;
	*(int *)((0x48 * local_14) + 0xbf3c) = 0x10;
	local_14 = (local_14 + 0x1);
	local_18 = (local_18 + 0x14);
jmp_2a0e:
	if (local_14 < local_1c) goto jmp_29b1;
	local_18 = (local_18 + 0xc);
	bss_c0f4 = 0x3;
	bss_c120 = 0x102;
	bss_c100 = 0x140;
	bss_c104 = local_18;
	bss_c0f8 = 0x4a1f;
	bss_c0fc = 0xf;
	bss_c140 = 0xcec;
	local_434 = trap_Cvar_VariableValue(0x4a15);
	local_438 = Com_Clamp(0x0, 0x40800000, (float)((int)local_434 - 0x1));
	bss_c134 = (int)local_438;
	local_18 = (local_18 + 0x10);
	bss_c154 = 0x3;
	bss_c180 = 0x102;
	bss_c160 = 0x140;
	bss_c164 = local_18;
	bss_c158 = 0x4a0e;
	bss_c15c = 0x10;
	if (local_20 < 0x3) goto jmp_2a6b;
	bss_c1a0 = 0xd0c;
	goto jmp_2a71;
jmp_2a6b:
	bss_c1a0 = 0xd04;
	bss_c180 = 0x2000;
jmp_2a71:
	bss_c1b4 = 0x6;
	bss_c1b8 = 0x49fc;
	bss_c1e0 = 0x104;
	bss_c1bc = 0xb;
	bss_c1e4 = 0x2796;
	bss_c1c0 = 0x140;
	bss_c1c4 = 0x140;
	bss_c200 = 0x80;
	bss_c204 = 0x40;
	bss_c1f0 = 0x49ea;
	bss_c20c = 0x6;
	bss_c210 = 0x49da;
	bss_c238 = 0x104;
	bss_c214 = 0xa;
	bss_c23c = 0x27fa;
	bss_c218 = 0xc0;
	bss_c21c = 0x140;
	bss_c258 = 0x80;
	bss_c25c = 0x40;
	bss_c248 = 0x49ca;
	bss_c26c = 0x0;
	bss_c270 = 0x0;
	bss_bf40 = 0x2160;
	UI_AddBotsMenu_GetSortedBotNums();
	UI_AddBotsMenu_SetBotNames();
	Menu_AddItem(0xbc34, 0xbd9c);
	Menu_AddItem(0xbc34, 0xbd54);
	Menu_AddItem(0xbc34, 0xbdf4);
	Menu_AddItem(0xbc34, 0xbe4c);
	Menu_AddItem(0xbc34, 0xbea4);
	local_14 = 0x0;
	goto jmp_2af6;
jmp_2ae4:
	Menu_AddItem(0xbc34, ((0x48 * local_14) + 0xbefc));
	local_14 = (local_14 + 0x1);
jmp_2af6:
	if (local_14 < local_1c) goto jmp_2ae4;
	Menu_AddItem(0xbc34, 0xc0f4);
	Menu_AddItem(0xbc34, 0xc154);
	Menu_AddItem(0xbc34, 0xc1b4);
	Menu_AddItem(0xbc34, 0xc20c);
}

/*
=================
UI_AddBots_Cache

Address: 0x2b19
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_Cache_f, UI_AddBotsMenu_Init
=================
*/
void UI_AddBots_Cache(void) {

	trap_R_RegisterShaderNoMip(0x49da);
	trap_R_RegisterShaderNoMip(0x49ca);
	trap_R_RegisterShaderNoMip(0x49fc);
	trap_R_RegisterShaderNoMip(0x49ea);
	trap_R_RegisterShaderNoMip(0x4a6f);
	trap_R_RegisterShaderNoMip(0x4a58);
	trap_R_RegisterShaderNoMip(0x4a3f);
	trap_R_RegisterShaderNoMip(0x4a26);
}

/*
=================
UI_AddBotsMenu

Address: 0x2b44
Stack Size: 0xc
Calls: UI_PushMenu, UI_AddBotsMenu_Init
Called by: InGame_Event
=================
*/
void UI_AddBotsMenu(void) {

	UI_AddBotsMenu_Init();
	UI_PushMenu(0xbc34);
}

/*
=================
Com_Error

Address: 0x2b4f
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

Address: 0x2b6a
Stack Size: 0x41c
Calls: trap_Print, Q_vsnprintf
Called by: Info_SetValueForKey_Big, Info_SetValueForKey, Com_sprintf, COM_ParseWarning, COM_ParseError, UI_RegisterClientModelname, UI_ParseAnimationFile, UI_ParseInfos, UI_SetActiveMenu
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
UI_ClampCvar

Address: 0x2b85
Stack Size: 0x8
Called by: Controls_GetConfig
=================
*/
int UI_ClampCvar(int arg_0, int arg_1, int arg_2) {

	arg_2 = arg_2;
	if (arg_2 >= arg_0) goto jmp_2b94;
	return arg_0;
jmp_2b94:
	if (arg_2 <= arg_1) goto jmp_2b9e;
	return arg_1;
jmp_2b9e:
	return arg_2;
}

/*
=================
UI_StartDemoLoop

Address: 0x2ba3
Stack Size: 0x10
Calls: trap_Cmd_ExecuteText
=================
*/
void UI_StartDemoLoop(void) {

	trap_Cmd_ExecuteText(0x2, 0x4be8);
}

/*
=================
UI_PushMenu

Address: 0x2bad
Stack Size: 0x20
Calls: trap_Key_SetCatcher, trap_Error, Menu_SetCursor
Called by: UI_GraphicsOptionsMenu, UI_DriverInfo_Menu, UI_TeamOrdersMenu, UI_TeamMainMenu, UI_BotSelectMenu, UI_ServerOptionsMenu, UI_StartServerMenu, UI_SPSkillMenu, UI_SPPostgameMenu_f, UI_SPLevelMenu, UI_SpecifyServerMenu, UI_SoundOptionsMenu, UI_SetupMenu, UI_ArenaServersMenu, UI_ServerInfoMenu, UI_SaveConfigMenu, UI_RemoveBotsMenu, UI_PreferencesMenu, UI_PlayerSettingsMenu, UI_PlayerModelMenu, UI_SystemConfigMenu, UI_NetworkOptionsMenu, UI_ModsMenu, UI_MainMenu, UI_LoadConfigMenu, UI_InGameMenu, UI_DisplayOptionsMenu, UI_DemosMenu, UI_CreditMenu, UI_ControlsMenu, UI_Message, UI_ConfirmMenu_Style, UI_CinematicsMenu, UI_CDKeyMenu, UI_AddBotsMenu
=================
*/
void UI_PushMenu(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	arg_0 = arg_0;
	local_10 = 0x0;
	goto jmp_2bcd;
jmp_2bb7:
	if (*(int *)((local_10 << 0x2) + 0xdb6c) != arg_0) goto jmp_2bc7;
	bss_db64 = local_10;
	goto jmp_2bd2;
jmp_2bc7:
	local_10 = (local_10 + 0x1);
jmp_2bcd:
	if (local_10 < bss_db64) goto jmp_2bb7;
jmp_2bd2:
	if (local_10 != bss_db64) goto jmp_2bf8;
	if (bss_db64 < 0x8) goto jmp_2be0;
	trap_Error(0x4bc7);
jmp_2be0:
	local_1c = 0xdb64;
	local_18 = *(int *)local_1c;
	*(int *)local_1c = (local_18 + 0x1);
	*(int *)((local_18 << 0x2) + 0xdb6c) = arg_0;
jmp_2bf8:
	bss_db68 = arg_0;
	*(int *)arg_0 = 0x0;
	*(int *)(arg_0 + 0x4) = 0x0;
	m_entersound = 0x1;
	trap_Key_SetCatcher(0x2);
	local_10 = 0x0;
	goto jmp_2c3f;
jmp_2c13:
	local_14 = *(int *)((local_10 << 0x2) + (arg_0 + 0xc));
	if ((*(int *)(local_14 + 0x2c) & 0x6800) != 0x0) goto jmp_2c39;
	*(int *)(arg_0 + 0x4) = 0xffffffff;
	Menu_SetCursor(arg_0, local_10);
	goto jmp_2c47;
jmp_2c39:
	local_10 = (local_10 + 0x1);
jmp_2c3f:
	if (local_10 < *(int *)(arg_0 + 0x8)) goto jmp_2c13;
jmp_2c47:
	bss_1080c = 0x1;
}

/*
=================
UI_PopMenu

Address: 0x2c4c
Stack Size: 0x14
Calls: trap_Error, trap_S_StartLocalSound, UI_ForceMenuOff
Called by: GraphicsOptions_Event, DriverInfo_Event, UI_TeamOrdersMenu_ListEvent, UI_TeamOrdersMenu_BackEvent, UI_BotSelectMenu_SelectEvent, UI_BotSelectMenu_BackEvent, ServerOptions_Event, StartServer_MenuEvent, UI_SPSkillMenu_BackEvent, UI_SPPostgameMenu_MenuDraw, UI_SPPostgameMenu_MenuEvent, UI_SPPostgameMenu_NextEvent, UI_SPPostgameMenu_AgainEvent, UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_BackEvent, UI_SPLevelMenu_ResetAction, SpecifyServer_Event, UI_SoundOptionsMenu_Event, UI_SetupMenu_Event, ArenaServers_Event, ServerInfo_Event, UI_SaveConfigMenu_SaveEvent, UI_SaveConfigMenu_BackEvent, UI_RemoveBotsMenu_BackEvent, Menu_DefaultKey, Preferences_Event, PlayerSettings_MenuEvent, PlayerModel_MenuEvent, Options_Event, UI_NetworkOptionsMenu_Event, UI_Mods_MenuEvent, MainMenu_ExitAction, LoadConfig_MenuEvent, InGame_Event, InGame_QuitAction, InGame_RestartAction, UI_DisplayOptionsMenu_Event, Demos_MenuEvent, Controls_MenuEvent, ConfirmMenu_Event, UI_CinematicsMenu_BackEvent, UI_CDKeyMenu_Event, UI_AddBotsMenu_BackEvent
=================
*/
void UI_PopMenu(void) {
	int		local_10;

	trap_S_StartLocalSound(menu_out_sound, 0x6);
	local_10 = 0xdb64;
	*(int *)local_10 = (*(int *)local_10 - 0x1);
	if (bss_db64 >= 0x0) goto jmp_2c69;
	trap_Error(0x4ba6);
jmp_2c69:
	if (bss_db64 == 0x0) goto jmp_2c7b;
	bss_db68 = *(int *)((bss_db64 << 0x2) + 0xdb68);
	bss_1080c = 0x1;
	goto jmp_2c7e;
jmp_2c7b:
	UI_ForceMenuOff();
jmp_2c7e:
}

/*
=================
UI_ForceMenuOff

Address: 0x2c80
Stack Size: 0x14
Calls: trap_Cvar_Set, trap_Key_ClearStates, trap_Key_SetCatcher, trap_Key_GetCatcher
Called by: TeamMain_MenuEvent, UI_SoundOptionsMenu_Event, Demos_MenuEvent, UI_SetActiveMenu, UI_PopMenu
=================
*/
void UI_ForceMenuOff(void) {
	int		local_10;

	bss_db64 = 0x0;
	bss_db68 = 0x0;
	local_10 = trap_Key_GetCatcher();
	trap_Key_SetCatcher((local_10 & 0xfffffffd));
	trap_Key_ClearStates();
	trap_Cvar_Set(0x4b9c, 0x4b9a);
}

/*
=================
UI_LerpColor

Address: 0x2c9f
Stack Size: 0x14
Called by: UI_DrawString
=================
*/
void UI_LerpColor(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_8;
	int		local_c;
	int		local_10;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	local_8 = 0x0;
jmp_2cb3:
	local_c = (local_8 << 0x2);
	local_10 = *(int *)(local_c + arg_0);
	*(int *)(local_c + arg_2) = (local_10 + (arg_3 * (*(int *)(local_c + arg_1) - local_10)));
	if (*(int *)((local_8 << 0x2) + arg_2) >= 0x0) goto jmp_2ceb;
	*(int *)((local_8 << 0x2) + arg_2) = 0x0;
	goto jmp_2cfe;
jmp_2ceb:
	if (*(int *)((local_8 << 0x2) + arg_2) <= 0x3f800000) goto jmp_2cfe;
	*(int *)((local_8 << 0x2) + arg_2) = 0x3f800000;
jmp_2cfe:
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x4) goto jmp_2cb3;
}

/*
=================
UI_DrawBannerString2

Address: 0x2d0a
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
	local_34 = (((float)arg_0 * bss_107fc) + bss_10804);
	local_50 = ((float)arg_1 * bss_10800);
	local_30 = arg_2;
	goto jmp_2dc7;
jmp_2d2a:
	*(char *)&local_2c = ((char)*(char *)local_30 & 0x7f);
	if (*(char *)&local_2c != 0x20) goto jmp_2d41;
	local_34 = (local_34 + (0x41800000 * bss_107fc));
	goto jmp_2dc1;
jmp_2d41:
	local_54 = *(char *)&local_2c;
	if (local_54 < 0x41) goto jmp_2dc1;
	if (local_54 > 0x5a) goto jmp_2dc1;
	*(char *)&local_2c = (*(char *)&local_2c - 0x41);
	local_58 = (0xc * *(char *)&local_2c);
	*(int *)local_5c = 0x43800000;
	local_40 = ((float)*(int *)(local_58 + 0x1318) / *(int *)local_5c);
	local_3c = ((float)*(int *)(local_58 + 0x131c) / *(int *)local_5c);
	local_48 = ((float)*(int *)(local_58 + 0x1320) / *(int *)local_5c);
	local_4c = 0x3e100000;
	local_38 = ((float)*(int *)(local_58 + 0x1320) * bss_107fc);
	local_44 = (0x42100000 * bss_10800);
	trap_R_DrawStretchPic(local_34, local_50, local_38, local_44, local_40, local_3c, (local_40 + local_48), (local_3c + local_4c), bss_107ec);
	local_34 = (local_34 + (local_38 + (0x40800000 * bss_107fc)));
jmp_2dc1:
	local_30 = (local_30 + 0x1);
jmp_2dc7:
	if ((char)*(char *)local_30 != 0x0) goto jmp_2d2a;
	trap_R_SetColor(0x0);
}

/*
=================
UI_DrawBannerString

Address: 0x2dd4
Stack Size: 0x44
Calls: UI_DrawBannerString2
Called by: BText_Draw
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
	goto jmp_2e0c;
jmp_2dde:
	local_18 = (char)*(char *)local_1c;
	if (local_18 != 0x20) goto jmp_2df0;
	local_20 = (local_20 + 0xc);
	goto jmp_2e06;
jmp_2df0:
	if (local_18 < 0x41) goto jmp_2e06;
	if (local_18 > 0x5a) goto jmp_2e06;
	local_20 = (local_20 + (*(int *)((0xc * local_18) + 0x1014) + 0x4));
jmp_2e06:
	local_1c = (local_1c + 0x1);
jmp_2e0c:
	if ((char)*(char *)local_1c != 0x0) goto jmp_2dde;
	local_20 = (local_20 - 0x4);
	*(int *)local_34 = (arg_3 & 0x7);
	if (*(int *)local_34 == 0x0) goto jmp_2e3e;
	if (*(int *)local_34 == 0x1) goto jmp_2e2c;
	if (*(int *)local_34 == 0x2) goto jmp_2e37;
	goto jmp_2e3e;
jmp_2e2c:
	arg_0 = (arg_0 - (local_20 / 0x2));
	goto jmp_2e3e;
jmp_2e37:
	arg_0 = (arg_0 - local_20);
jmp_2e3e:
	if ((arg_3 & 0x800) == 0x0) goto jmp_2e71;
	local_3c = 0x0;
	local_2c = local_3c;
	local_28 = local_3c;
	local_24 = local_3c;
	local_30 = *(int *)(arg_4 + 0xc);
	local_40 = 0x2;
	UI_DrawBannerString2((arg_0 + local_40), (arg_1 + local_40), arg_2, &local_24);
jmp_2e71:
	UI_DrawBannerString2(arg_0, arg_1, arg_2, arg_4);
}

/*
=================
UI_ProportionalStringWidth

Address: 0x2e82
Stack Size: 0x18
Called by: Prepname, PText_Init, UI_DisplayDownloadInfo, UI_Message, UI_ConfirmMenu_Style, UI_DrawProportionalString_AutoWrapped, UI_DrawProportionalString
=================
*/
int UI_ProportionalStringWidth(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	local_8 = arg_0;
	local_14 = 0x0;
	goto jmp_2eb4;
jmp_2e8c:
	local_10 = ((char)*(char *)local_8 & 0x7f);
	local_c = *(int *)((0xc * local_10) + 0xd20);
	if (local_c == 0xffffffff) goto jmp_2eae;
	local_14 = (local_14 + local_c);
	local_14 = (local_14 + 0x3);
jmp_2eae:
	local_8 = (local_8 + 0x1);
jmp_2eb4:
	if ((char)*(char *)local_8 != 0x0) goto jmp_2e8c;
	local_14 = (local_14 - 0x3);
	return local_14;
}

/*
=================
UI_DrawProportionalString2

Address: 0x2ec5
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
	local_34 = 0x0;
	trap_R_SetColor(arg_3);
	local_38 = (((float)arg_0 * bss_107fc) + bss_10804);
	local_50 = ((float)arg_1 * bss_10800);
	local_30 = arg_2;
	goto jmp_2f89;
jmp_2eec:
	*(char *)&local_2c = ((char)*(char *)local_30 & 0x7f);
	if (*(char *)&local_2c != 0x20) goto jmp_2f03;
	local_34 = ((0x41000000 * bss_107fc) * arg_4);
	goto jmp_2f74;
jmp_2f03:
	if (*(int *)((0xc * *(char *)&local_2c) + 0xd20) == 0xffffffff) goto jmp_2f74;
	local_54 = (0xc * *(char *)&local_2c);
	*(int *)local_58 = 0x43800000;
	local_40 = ((float)*(int *)(local_54 + 0xd18) / *(int *)local_58);
	local_3c = ((float)*(int *)(local_54 + 0xd1c) / *(int *)local_58);
	local_48 = ((float)*(int *)(local_54 + 0xd20) / *(int *)local_58);
	local_4c = 0x3dd80000;
	local_34 = (((float)*(int *)(local_54 + 0xd20) * bss_107fc) * arg_4);
	local_44 = ((0x41d80000 * bss_10800) * arg_4);
	trap_R_DrawStretchPic(local_38, local_50, local_34, local_44, local_40, local_3c, (local_40 + local_48), (local_3c + local_4c), arg_5);
jmp_2f74:
	local_38 = (local_38 + (local_34 + ((0x40400000 * bss_107fc) * arg_4)));
	local_30 = (local_30 + 0x1);
jmp_2f89:
	if ((char)*(char *)local_30 != 0x0) goto jmp_2eec;
	trap_R_SetColor(0x0);
}

/*
=================
UI_ProportionalSizeScale

Address: 0x2f96
Stack Size: 0x8
Called by: PText_Init, UI_DisplayDownloadInfo, UI_DrawProportionalString_AutoWrapped, UI_DrawProportionalString
=================
*/
int UI_ProportionalSizeScale(int arg_0) {

	if ((arg_0 & 0x10) == 0x0) goto jmp_2fa1;
	return 0x3f400000;
jmp_2fa1:
	return 0x3f800000;
}

/*
=================
UI_DrawProportionalString

Address: 0x2fa5
Stack Size: 0x54
Calls: sin, UI_DrawProportionalString2, UI_ProportionalStringWidth, UI_ProportionalSizeScale
Called by: UI_TeamOrdersMenu_ListDraw, UI_SPPostgameMenu_MenuDraw, UI_SPPostgameMenu_DrawAwardsPresentation, UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_ResetDraw, Setup_ResetDefaults_Draw, UI_SaveConfigMenu_SavenameDraw, PText_Draw, PlayerSettings_DrawEffects, PlayerSettings_DrawHandicap, PlayerSettings_DrawName, PlayerModel_DrawPlayer, Main_MenuDraw, UI_CreditMenu_Draw, UI_CreditMenu_Draw_ioq3, Controls_ResetDefaults_Draw, UI_DrawConnectScreen, UI_DisplayDownloadInfo, ConfirmMenu_Draw, MessageMenu_Draw, UI_CDKeyMenu_DrawKey, UI_DrawProportionalString_AutoWrapped
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
	if (arg_2 != 0x0) goto jmp_2fc0;
	goto jmp_311b;
jmp_2fc0:
	local_38 = UI_ProportionalSizeScale(arg_3);
	local_30 = local_38;
	*(int *)local_3c = (arg_3 & 0x7);
	if (*(int *)local_3c == 0x0) goto jmp_3011;
	if (*(int *)local_3c == 0x1) goto jmp_2fdf;
	if (*(int *)local_3c == 0x2) goto jmp_2ffa;
	goto jmp_3011;
jmp_2fdf:
	local_44 = UI_ProportionalStringWidth(arg_2);
	local_34 = (int)((float)local_44 * local_30);
	arg_0 = (arg_0 - (local_34 / 0x2));
	goto jmp_3011;
jmp_2ffa:
	*(int *)local_48 = UI_ProportionalStringWidth(arg_2);
	local_34 = (int)((float)*(int *)local_48 * local_30);
	arg_0 = (arg_0 - local_34);
jmp_3011:
	if ((arg_3 & 0x800) == 0x0) goto jmp_304a;
	local_44 = 0x0;
	local_28 = local_44;
	local_24 = local_44;
	local_20 = local_44;
	local_2c = *(int *)(arg_4 + 0xc);
	*(int *)local_48 = 0x2;
	UI_DrawProportionalString2((arg_0 + *(int *)local_48), (arg_1 + *(int *)local_48), arg_2, &local_20, local_30, bss_107e4);
jmp_304a:
	if ((arg_3 & 0x2000) == 0x0) goto jmp_308b;
	local_44 = 0x3f333333;
	local_20 = (local_44 * *(int *)arg_4);
	local_24 = (local_44 * *(int *)(arg_4 + 0x4));
	local_28 = (0x3f333333 * *(int *)(arg_4 + 0x8));
	local_2c = *(int *)(arg_4 + 0xc);
	UI_DrawProportionalString2(arg_0, arg_1, arg_2, &local_20, local_30, bss_107e4);
	goto jmp_311b;
jmp_308b:
	if ((arg_3 & 0x4000) == 0x0) goto jmp_3106;
	local_44 = 0x3f333333;
	local_20 = (local_44 * *(int *)arg_4);
	local_24 = (local_44 * *(int *)(arg_4 + 0x4));
	local_28 = (0x3f333333 * *(int *)(arg_4 + 0x8));
	local_2c = *(int *)(arg_4 + 0xc);
	UI_DrawProportionalString2(arg_0, arg_1, arg_2, arg_4, local_30, bss_107e4);
	local_20 = *(int *)arg_4;
	local_24 = *(int *)(arg_4 + 0x4);
	local_28 = *(int *)(arg_4 + 0x8);
	local_50 = sin((float)(bss_db58 / 0x4b));
	local_2c = ((0x3f000000 * local_50) + 0x3f000000);
	UI_DrawProportionalString2(arg_0, arg_1, arg_2, &local_20, local_30, bss_107e8);
	goto jmp_311b;
jmp_3106:
	UI_DrawProportionalString2(arg_0, arg_1, arg_2, arg_4, local_30, bss_107e4);
jmp_311b:
}

/*
=================
UI_DrawProportionalString_AutoWrapped

Address: 0x311d
Stack Size: 0x44c
Calls: UI_DrawProportionalString, UI_ProportionalStringWidth, Q_strncpyz, UI_ProportionalSizeScale
Called by: Main_MenuDraw, UI_DrawConnectScreen
=================
*/
void UI_DrawProportionalString_AutoWrapped(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	char	local_34[1028];
	int		local_438;
	char	local_43c[8];
	char	local_444[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_3 = arg_3;
	arg_4 = arg_4;
	arg_5 = arg_5;
	arg_6 = arg_6;
	if (arg_4 == 0x0) goto jmp_3144;
	if ((char)*(char *)arg_4 != 0x0) goto jmp_3146;
jmp_3144:
	goto jmp_3217;
jmp_3146:
	local_438 = UI_ProportionalSizeScale(arg_5);
	local_30 = local_438;
	Q_strncpyz(local_34, arg_4, 0x400);
	local_1c = local_34;
	local_20 = local_34;
	local_28 = local_34;
	goto jmp_3215;
jmp_3166:
	local_1c = (local_1c + 0x1);
	*(int *)local_43c = (char)*(char *)local_1c;
	if (*(int *)local_43c == 0x20) goto jmp_317a;
	if (*(int *)local_43c != 0x0) goto jmp_3166;
jmp_317a:
	*(char *)&local_24 = *(char *)local_1c;
	*(char *)local_1c = 0x0;
	*(int *)local_444 = UI_ProportionalStringWidth(local_28);
	local_2c = (int)((float)*(int *)local_444 * local_30);
	*(char *)local_1c = *(char *)&local_24;
	if (local_2c <= arg_2) goto jmp_31f8;
	if (local_28 != local_20) goto jmp_31a6;
	local_20 = local_1c;
jmp_31a6:
	*(char *)local_20 = 0x0;
	UI_DrawProportionalString(arg_0, arg_1, local_28, arg_5, arg_6);
	arg_1 = (arg_1 + arg_3);
	if ((char)*(char *)&local_24 != 0x0) goto jmp_31e8;
	local_20 = (local_20 + 0x1);
	if ((char)*(char *)local_20 == 0x0) goto jmp_3217;
	UI_DrawProportionalString(arg_0, arg_1, local_20, arg_5, arg_6);
	goto jmp_3217;
jmp_31e8:
	local_20 = (local_20 + 0x1);
	local_28 = local_20;
	local_1c = local_20;
	goto jmp_3215;
jmp_31f8:
	local_20 = local_1c;
	if ((char)*(char *)&local_24 != 0x0) goto jmp_3215;
	UI_DrawProportionalString(arg_0, arg_1, local_28, arg_5, arg_6);
	goto jmp_3217;
jmp_3215:
	goto jmp_3166;
jmp_3217:
}

/*
=================
UI_DrawString2

Address: 0x3219
Stack Size: 0x74
Calls: trap_R_DrawStretchPic, memcpy, trap_R_SetColor, Q_IsColorString
Called by: UI_DrawString
=================
*/
void UI_DrawString2(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	char	local_44[12];
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;
	char	local_68[12];

	arg_3 = arg_3;
	local_54 = 0x0;
	if (arg_1 >= -arg_5) goto jmp_3229;
	goto jmp_32f6;
jmp_3229:
	trap_R_SetColor(arg_3);
	local_34 = (((float)arg_0 * bss_107fc) + bss_10804);
	local_58 = ((float)arg_1 * bss_10800);
	local_38 = ((float)arg_4 * bss_107fc);
	local_5c = ((float)arg_5 * bss_10800);
	local_2c = arg_2;
	goto jmp_32eb;
jmp_3258:
	local_60 = Q_IsColorString(local_2c);
	if (local_60 == 0x0) goto jmp_3291;
	if (local_54 != 0x0) goto jmp_3289;
	memcpy(local_44, (((((char)*(char *)(local_2c + 0x1) - 0x30) & 0x7) << 0x4) + 0x2a68), 0x10);
	local_50 = *(int *)(arg_3 + 0xc);
	trap_R_SetColor(local_44);
jmp_3289:
	local_2c = (local_2c + 0x2);
	goto jmp_32eb;
jmp_3291:
	*(char *)&local_30 = ((char)*(char *)local_2c & 0xff);
	if ((char)*(char *)&local_30 == 0x20) goto jmp_32de;
	local_64 = 0x3d800000;
	*(int *)local_68 = (char)*(char *)&local_30;
	local_3c = (local_64 * (float)(*(int *)local_68 >> 0x4));
	local_40 = (local_64 * (float)(*(int *)local_68 & 0xf));
	trap_R_DrawStretchPic(local_34, local_58, local_38, local_5c, local_40, local_3c, (local_40 + local_64), (local_3c + local_64), bss_107e0);
jmp_32de:
	local_34 = (local_34 + local_38);
	local_2c = (local_2c + 0x1);
jmp_32eb:
	if ((char)*(char *)local_2c != 0x0) goto jmp_3258;
	trap_R_SetColor(0x0);
jmp_32f6:
}

/*
=================
UI_DrawString

Address: 0x32f8
Stack Size: 0x74
Calls: sin, UI_DrawString2, strlen, UI_LerpColor
Called by: DriverInfo_MenuDraw, PlayerName_Draw, ServerOptions_LevelshotDraw, ServerOptions_StatusBar, StartServer_LevelshotDraw, UI_SPPostgameMenu_MenuDrawScoreLine, UI_SPPostgameMenu_DrawAwardsMedals, UI_SPLevelMenu_MenuDraw, ServerInfo_MenuDraw, ScrollList_Draw, SpinControl_Draw, Slider_Draw, RadioButton_Draw, Action_Draw, Text_Draw, Crosshair_Draw, MenuField_Draw, MField_Draw, Main_MenuDraw, UI_CreditMenu_Draw, UI_CreditMenu_Draw_ioq3, Controls_StatusBar, Controls_DrawKeyBinding, UI_CDKeyMenu_DrawKey, UI_Refresh, UI_DrawChar
=================
*/
void UI_DrawString(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
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
	char	local_4c[16];
	int		local_5c;
	int		local_60;
	char	local_64[8];
	int		local_6c;
	int		local_70;

	arg_3 = arg_3;
	arg_4 = arg_4;
	if (arg_2 != 0x0) goto jmp_3307;
	goto jmp_3420;
jmp_3307:
	local_60 = 0x0;
	if ((arg_3 & 0x1000) == local_60) goto jmp_331c;
	if (((bss_db58 / 0xc8) & 0x1) == local_60) goto jmp_331c;
	goto jmp_3420;
jmp_331c:
	if ((arg_3 & 0x10) == 0x0) goto jmp_332a;
	local_20 = 0x8;
	local_24 = 0x10;
	goto jmp_3343;
jmp_332a:
	if ((arg_3 & 0x40) == 0x0) goto jmp_3338;
	local_20 = 0x20;
	local_24 = 0x30;
	goto jmp_3343;
jmp_3338:
	*(int *)local_64 = 0x10;
	local_20 = *(int *)local_64;
	local_24 = *(int *)local_64;
jmp_3343:
	if ((arg_3 & 0x4000) == 0x0) goto jmp_3390;
	*(int *)local_64 = 0x3f4ccccd;
	local_28 = (*(int *)local_64 * *(int *)arg_4);
	local_2c = (*(int *)local_64 * *(int *)(arg_4 + 0x4));
	local_30 = (0x3f4ccccd * *(int *)(arg_4 + 0x8));
	local_34 = (0x3f4ccccd * *(int *)(arg_4 + 0xc));
	local_6c = sin((float)(bss_db58 / 0x4b));
	UI_LerpColor(arg_4, &local_28, local_4c, ((0x3f000000 * local_6c) + 0x3f000000));
	local_38 = local_4c;
	goto jmp_3394;
jmp_3390:
	local_38 = arg_4;
jmp_3394:
	*(int *)local_64 = (arg_3 & 0x7);
	if (*(int *)local_64 == 0x1) goto jmp_33a4;
	if (*(int *)local_64 == 0x2) goto jmp_33bd;
	goto jmp_33d2;
jmp_33a4:
	local_6c = strlen(arg_2);
	local_5c = local_6c;
	arg_0 = (arg_0 - ((local_5c * local_20) / 0x2));
	goto jmp_33d2;
jmp_33bd:
	local_70 = strlen(arg_2);
	local_5c = local_70;
	arg_0 = (arg_0 - (local_5c * local_20));
jmp_33d2:
	if ((arg_3 & 0x800) == 0x0) goto jmp_340b;
	local_6c = 0x0;
	local_44 = local_6c;
	local_40 = local_6c;
	local_3c = local_6c;
	local_48 = *(int *)(local_38 + 0xc);
	local_70 = 0x2;
	UI_DrawString2((arg_0 + local_70), (arg_1 + local_70), arg_2, &local_3c, local_20, local_24);
jmp_340b:
	UI_DrawString2(arg_0, arg_1, arg_2, local_38, local_20, local_24);
jmp_3420:
}

/*
=================
UI_DrawChar

Address: 0x3422
Stack Size: 0x20
Calls: UI_DrawString
Called by: PlayerName_Draw, SpinControl_Draw, RadioButton_Draw, Action_Draw, Crosshair_Draw, PlayerSettings_DrawName, MenuField_Draw, MField_Draw, Controls_DrawKeyBinding, UI_CDKeyMenu_DrawKey
=================
*/
void UI_DrawChar(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	char	local_1c;
	char	local_1d[3];

	local_1c = arg_2;
	*(char *)local_1d = 0x0;
	UI_DrawString(arg_0, arg_1, &local_1c, arg_3, arg_4);
}

/*
=================
UI_IsFullscreen

Address: 0x343d
Stack Size: 0xc
Calls: trap_Key_GetCatcher
Called by: vmMain
=================
*/
int UI_IsFullscreen(void) {
	int		local_8;

	if (bss_db68 == 0x0) goto jmp_3454;
	local_8 = trap_Key_GetCatcher();
	if ((local_8 & 0x2) == 0x0) goto jmp_3454;
	return *(int *)(bss_db68 + 0x118);
jmp_3454:
	return 0x0;
}

/*
=================
NeedCDAction

Address: 0x3458
Stack Size: 0x10
Calls: trap_Cmd_ExecuteText
=================
*/
void NeedCDAction(int arg_0) {

	if (arg_0 != 0x0) goto jmp_3464;
	trap_Cmd_ExecuteText(0x2, 0x4b94);
jmp_3464:
}

/*
=================
NeedCDKeyAction

Address: 0x3466
Stack Size: 0x10
Calls: trap_Cmd_ExecuteText
=================
*/
void NeedCDKeyAction(int arg_0) {

	if (arg_0 != 0x0) goto jmp_3472;
	trap_Cmd_ExecuteText(0x2, 0x4b94);
jmp_3472:
}

/*
=================
UI_SetActiveMenu

Address: 0x3474
Stack Size: 0x1c
Calls: trap_Cvar_Set, Com_Printf, UI_InGameMenu, UI_ConfirmMenu, UI_MainMenu, UI_ForceMenuOff, Menu_Cache
Called by: vmMain
=================
*/
void UI_SetActiveMenu(int arg_0) {
	char	local_14[8];

	Menu_Cache();
	*(int *)local_14 = arg_0;
	if (*(int *)local_14 < 0x0) goto jmp_34b8;
	if (*(int *)local_14 > 0x6) goto jmp_34b8;
	goto *(int *)((*(int *)local_14 << 0x2) + 0x1450);
	UI_ForceMenuOff();
	goto jmp_34c0;
	UI_MainMenu();
	goto jmp_34c0;
	UI_ConfirmMenu(0x4b86, 0x0, 0x3458);
	goto jmp_34c0;
	UI_ConfirmMenu(0x4b7b, 0x0, 0x3466);
	goto jmp_34c0;
	trap_Cvar_Set(0x4b9c, 0x4b79);
	UI_InGameMenu();
	goto jmp_34c0;
jmp_34b8:
	Com_Printf(0x4b5a, arg_0);
jmp_34c0:
}

/*
=================
UI_KeyEvent

Address: 0x34c2
Stack Size: 0x20
Calls: trap_S_StartLocalSound, Menu_DefaultKey
Called by: vmMain
=================
*/
void UI_KeyEvent(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	char	local_18[8];

	if (bss_db68 != 0x0) goto jmp_34c9;
	goto jmp_3506;
jmp_34c9:
	if (arg_1 != 0x0) goto jmp_34cf;
	goto jmp_3506;
jmp_34cf:
	if (*(int *)(bss_db68 + 0x110) == 0x0) goto jmp_34e7;
	local_14 = (*(*(int *)(bss_db68 + 0x110)))(arg_0);
	local_10 = local_14;
	goto jmp_34f5;
jmp_34e7:
	*(int *)local_18 = Menu_DefaultKey(bss_db68, arg_0);
	local_10 = *(int *)local_18;
jmp_34f5:
	if (local_10 <= 0x0) goto jmp_3506;
	if (local_10 == menu_null_sound) goto jmp_3506;
	trap_S_StartLocalSound(local_10, 0x6);
jmp_3506:
}

/*
=================
UI_MouseEvent

Address: 0x3508
Stack Size: 0x2c
Calls: trap_S_StartLocalSound, Menu_SetCursor
Called by: UI_Refresh, vmMain
=================
*/
void UI_MouseEvent(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	if (bss_db68 != 0x0) goto jmp_350f;
	goto jmp_361e;
jmp_350f:
	local_18 = (int)(bss_10804 / bss_107fc);
	local_1c = 0xdb5c;
	*(int *)local_1c = (*(int *)local_1c + arg_0);
	if (bss_db5c >= -local_18) goto jmp_3530;
	bss_db5c = -local_18;
	goto jmp_353d;
jmp_3530:
	if (bss_db5c <= (local_18 + 0x280)) goto jmp_353d;
	bss_db5c = (local_18 + 0x280);
jmp_353d:
	local_20 = 0xdb60;
	*(int *)local_20 = (*(int *)local_20 + arg_1);
	if (bss_db60 >= 0x0) goto jmp_3552;
	bss_db60 = 0x0;
	goto jmp_3559;
jmp_3552:
	if (bss_db60 <= 0x1e0) goto jmp_3559;
	bss_db60 = 0x1e0;
jmp_3559:
	local_14 = 0x0;
	goto jmp_35f8;
jmp_355e:
	local_10 = *(int *)((local_14 << 0x2) + (bss_db68 + 0xc));
	if ((*(int *)(local_10 + 0x2c) & 0x6000) == 0x0) goto jmp_3575;
	goto jmp_35f2;
jmp_3575:
	if (bss_db5c < *(int *)(local_10 + 0x14)) goto jmp_3595;
	if (bss_db5c > *(int *)(local_10 + 0x1c)) goto jmp_3595;
	if (bss_db60 < *(int *)(local_10 + 0x18)) goto jmp_3595;
	if (bss_db60 <= *(int *)(local_10 + 0x20)) goto jmp_3597;
jmp_3595:
	goto jmp_35f2;
jmp_3597:
	if (*(int *)bss_db68 == local_14) goto jmp_35d9;
	Menu_SetCursor(bss_db68, local_14);
	local_28 = (*(int *)((*(int *)(bss_db68 + 0x4) << 0x2) + (bss_db68 + 0xc)) + 0x2c);
	*(int *)local_28 = (*(int *)local_28 & 0xfffffdff);
	if ((*(int *)(*(int *)((*(int *)bss_db68 << 0x2) + (bss_db68 + 0xc)) + 0x2c) & 0x100000) != 0x0) goto jmp_35d9;
	trap_S_StartLocalSound(menu_move_sound, 0x6);
jmp_35d9:
	local_28 = (*(int *)((*(int *)bss_db68 << 0x2) + (bss_db68 + 0xc)) + 0x2c);
	*(int *)local_28 = (*(int *)local_28 | 0x200);
	goto jmp_361e;
jmp_35f2:
	local_14 = (local_14 + 0x1);
jmp_35f8:
	if (local_14 < *(int *)(bss_db68 + 0x8)) goto jmp_355e;
	if (*(int *)(bss_db68 + 0x8) <= 0x0) goto jmp_361e;
	local_24 = (*(int *)((*(int *)bss_db68 << 0x2) + (bss_db68 + 0xc)) + 0x2c);
	*(int *)local_24 = (*(int *)local_24 & 0xfffffdff);
jmp_361e:
}

/*
=================
UI_Argv

Address: 0x3620
Stack Size: 0x14
Calls: trap_Argv
Called by: UI_SPPostgameMenu_f, UI_CinematicsMenu_f, UI_ConsoleCommand
=================
*/
int UI_Argv(int arg_0) {

	trap_Argv(arg_0, 0xd354, 0x400);
	return 0xd354;
}

/*
=================
UI_Cvar_VariableString

Address: 0x362f
Stack Size: 0x14
Calls: trap_Cvar_VariableStringBuffer
Called by: GraphicsOptions_SetMenuItems, ServerOptions_SetMenuItems, PlayerSettings_SetMenuItems, Controls_InitModel
=================
*/
int UI_Cvar_VariableString(int arg_0) {

	trap_Cvar_VariableStringBuffer(arg_0, 0xd754, 0x400);
	return 0xd754;
}

/*
=================
UI_Cache_f

Address: 0x363e
Stack Size: 0x8
Calls: UI_ModsMenu_Cache, UI_CDKeyMenu_Cache, UI_BotSelectMenu_Cache, UI_SetupMenu_Cache, UI_RemoveBots_Cache, UI_AddBots_Cache, TeamMain_Cache, UI_SPPostgameMenu_Cache, UI_SPSkillMenu_Cache, UI_SPLevelMenu_Cache, UI_NetworkOptionsMenu_Cache, UI_SoundOptionsMenu_Cache, UI_DisplayOptionsMenu_Cache, GraphicsOptions_Cache, DriverInfo_Cache, ServerOptions_Cache, StartServer_Cache, ArenaServers_Cache, SpecifyServer_Cache, ServerInfo_Cache, Preferences_Cache, UI_CinematicsMenu_Cache, Demos_Cache, Controls_Cache, PlayerSettings_Cache, PlayerModel_Cache, ConfirmMenu_Cache, InGame_Cache, MainMenu_Cache
Called by: UI_ConsoleCommand
=================
*/
void UI_Cache_f(void) {

	MainMenu_Cache();
	InGame_Cache();
	ConfirmMenu_Cache();
	PlayerModel_Cache();
	PlayerSettings_Cache();
	Controls_Cache();
	Demos_Cache();
	UI_CinematicsMenu_Cache();
	Preferences_Cache();
	ServerInfo_Cache();
	SpecifyServer_Cache();
	ArenaServers_Cache();
	StartServer_Cache();
	ServerOptions_Cache();
	DriverInfo_Cache();
	GraphicsOptions_Cache();
	UI_DisplayOptionsMenu_Cache();
	UI_SoundOptionsMenu_Cache();
	UI_NetworkOptionsMenu_Cache();
	UI_SPLevelMenu_Cache();
	UI_SPSkillMenu_Cache();
	UI_SPPostgameMenu_Cache();
	TeamMain_Cache();
	UI_AddBots_Cache();
	UI_RemoveBots_Cache();
	UI_SetupMenu_Cache();
	UI_BotSelectMenu_Cache();
	UI_CDKeyMenu_Cache();
	UI_ModsMenu_Cache();
}

/*
=================
UI_ConsoleCommand

Address: 0x3698
Stack Size: 0x3c
Calls: UI_CDKeyMenu_f, UI_SPUnlockMedals_f, UI_SPUnlock_f, UI_TeamOrdersMenu_f, UI_CinematicsMenu_f, UI_Cache_f, UI_SPPostgameMenu_f, UI_SPLevelMenu_f, Q_stricmp, Menu_Cache, UI_Argv
Called by: vmMain
=================
*/
int UI_ConsoleCommand(int arg_0) {
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

	local_14 = arg_0;
	uis = (local_14 - bss_db58);
	bss_db58 = local_14;
	local_18 = UI_Argv(0x0);
	local_10 = local_18;
	Menu_Cache();
	local_1c = Q_stricmp(local_10, 0x4b4e);
	if (local_1c != 0x0) goto jmp_36c9;
	UI_SPLevelMenu_f();
	return 0x1;
jmp_36c9:
	local_20 = Q_stricmp(local_10, 0x4b45);
	if (local_20 != 0x0) goto jmp_36dd;
	UI_SPPostgameMenu_f();
	return 0x1;
jmp_36dd:
	local_24 = Q_stricmp(local_10, 0x4b3c);
	if (local_24 != 0x0) goto jmp_36f1;
	UI_Cache_f();
	return 0x1;
jmp_36f1:
	local_28 = Q_stricmp(local_10, 0x4b2e);
	if (local_28 != 0x0) goto jmp_3705;
	UI_CinematicsMenu_f();
	return 0x1;
jmp_3705:
	local_2c = Q_stricmp(local_10, 0x4b20);
	if (local_2c != 0x0) goto jmp_3719;
	UI_TeamOrdersMenu_f();
	return 0x1;
jmp_3719:
	local_30 = Q_stricmp(local_10, 0x4b14);
	if (local_30 != 0x0) goto jmp_372d;
	UI_SPUnlock_f();
	return 0x1;
jmp_372d:
	local_34 = Q_stricmp(local_10, 0x4b09);
	if (local_34 != 0x0) goto jmp_3741;
	UI_SPUnlockMedals_f();
	return 0x1;
jmp_3741:
	local_38 = Q_stricmp(local_10, 0x4b00);
	if (local_38 != 0x0) goto jmp_3755;
	UI_CDKeyMenu_f();
	return 0x1;
jmp_3755:
	return 0x0;
}

/*
=================
UI_Shutdown

Address: 0x3759
Stack Size: 0x8
Called by: vmMain
=================
*/
void UI_Shutdown(void) {

}

/*
=================
UI_Init

Address: 0x375c
Stack Size: 0xc
Calls: trap_GetGlconfig, Menu_Cache, UI_InitGameinfo, UI_RegisterCvars
Called by: vmMain
=================
*/
void UI_Init(void) {

	UI_RegisterCvars();
	UI_InitGameinfo();
	trap_GetGlconfig(0xdb8c);
	bss_107fc = (0x3acccccd * (float)bss_107b4);
	bss_10800 = (0x3b088889 * (float)bss_107b8);
	if ((0x1e0 * bss_107b4) <= (0x280 * bss_107b8)) goto jmp_3792;
	bss_10804 = (0x3f000000 * ((float)bss_107b4 - (0x3faaaaab * (float)bss_107b8)));
	bss_107fc = bss_10800;
	goto jmp_3795;
jmp_3792:
	bss_10804 = 0x0;
jmp_3795:
	Menu_Cache();
	bss_db68 = 0x0;
	bss_db64 = 0x0;
}

/*
=================
UI_AdjustFrom640

Address: 0x37a0
Stack Size: 0x18
Called by: UI_DrawPlayer, Main_MenuDraw, UI_DrawRect, UI_FillRect, UI_DrawHandlePic, UI_DrawNamedPic
=================
*/
void UI_AdjustFrom640(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	local_8 = arg_0;
	*(int *)local_8 = ((*(int *)local_8 * bss_107fc) + bss_10804);
	local_c = arg_1;
	*(int *)local_c = (*(int *)local_c * bss_10800);
	local_10 = arg_2;
	*(int *)local_10 = (*(int *)local_10 * bss_107fc);
	local_14 = arg_3;
	*(int *)local_14 = (*(int *)local_14 * bss_10800);
}

/*
=================
UI_DrawNamedPic

Address: 0x37da
Stack Size: 0x3c
Calls: trap_R_DrawStretchPic, trap_R_RegisterShaderNoMip, UI_AdjustFrom640
Called by: UI_SPPostgameMenu_DrawAwardsMedals, ConfirmMenu_Draw, MessageMenu_Draw
=================
*/
void UI_DrawNamedPic(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;

	local_30 = trap_R_RegisterShaderNoMip(arg_4);
	local_2c = local_30;
	UI_AdjustFrom640(&arg_0, &arg_1, &arg_2, &arg_3);
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "arg_3"
	local_34 = 0x0;
#define next_call_arg_4 "local_34"
#define next_call_arg_5 "local_34"
	local_38 = 0x3f800000;
#define next_call_arg_6 "local_38"
#define next_call_arg_7 "local_38"
#define next_call_arg_8 "local_2c"
	trap_R_DrawStretchPic();
}

/*
=================
UI_DrawHandlePic

Address: 0x3817
Stack Size: 0x3c
Calls: trap_R_DrawStretchPic, UI_AdjustFrom640
Called by: StartServer_LevelshotDraw, UI_SPLevelMenu_MenuDraw, Slider_Draw, RadioButton_Draw, Bitmap_Draw, Crosshair_Draw, PlayerSettings_DrawEffects, UI_DrawConnectScreen, UI_Refresh
=================
*/
void UI_DrawHandlePic(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;

	if (arg_2 >= 0x0) goto jmp_3829;
	arg_2 = -arg_2;
	local_2c = 0x3f800000;
	local_30 = 0x0;
	goto jmp_382f;
jmp_3829:
	local_2c = 0x0;
	local_30 = 0x3f800000;
jmp_382f:
	if (arg_3 >= 0x0) goto jmp_3840;
	arg_3 = -arg_3;
	local_34 = 0x3f800000;
	local_38 = 0x0;
	goto jmp_3846;
jmp_3840:
	local_34 = 0x0;
	local_38 = 0x3f800000;
jmp_3846:
	UI_AdjustFrom640(&arg_0, &arg_1, &arg_2, &arg_3);
	trap_R_DrawStretchPic(arg_0, arg_1, arg_2, arg_3, local_2c, local_34, local_30, local_38, arg_4);
}

/*
=================
UI_FillRect

Address: 0x3871
Stack Size: 0x30
Calls: trap_R_DrawStretchPic, trap_R_SetColor, UI_AdjustFrom640
Called by: PlayerName_Draw, ServerOptions_LevelshotDraw, StartServer_LevelshotDraw, UI_SPLevelMenu_MenuDraw, UI_SaveConfigMenu_SavenameDraw, ScrollList_Draw, SpinControl_Draw, RadioButton_Draw, Crosshair_Draw, MenuField_Draw, Controls_DrawKeyBinding, UI_CDKeyMenu_DrawKey, UI_DrawTextBox
=================
*/
void UI_FillRect(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_2c;

	trap_R_SetColor(arg_4);
	UI_AdjustFrom640(&arg_0, &arg_1, &arg_2, &arg_3);
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "arg_3"
	local_2c = 0x0;
#define next_call_arg_4 "local_2c"
#define next_call_arg_5 "local_2c"
#define next_call_arg_6 "local_2c"
#define next_call_arg_7 "local_2c"
#define next_call_arg_8 "bss_107d4"
	trap_R_DrawStretchPic();
	trap_R_SetColor(0x0);
}

/*
=================
UI_DrawRect

Address: 0x38ab
Stack Size: 0x44
Calls: trap_R_DrawStretchPic, trap_R_SetColor, UI_AdjustFrom640
Called by: Menu_Draw, UI_DrawTextBox
=================
*/
void UI_DrawRect(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;

	trap_R_SetColor(arg_4);
	UI_AdjustFrom640(&arg_0, &arg_1, &arg_2, &arg_3);
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "0x3f800000"
	local_2c = 0x0;
#define next_call_arg_4 "local_2c"
#define next_call_arg_5 "local_2c"
#define next_call_arg_6 "local_2c"
#define next_call_arg_7 "local_2c"
#define next_call_arg_8 "bss_107d4"
	trap_R_DrawStretchPic();
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "0x3f800000"
#define next_call_arg_3 "arg_3"
	local_30 = 0x0;
#define next_call_arg_4 "local_30"
#define next_call_arg_5 "local_30"
#define next_call_arg_6 "local_30"
#define next_call_arg_7 "local_30"
#define next_call_arg_8 "bss_107d4"
	trap_R_DrawStretchPic();
#define next_call_arg_0 "arg_0"
	local_34 = 0x3f800000;
#define next_call_arg_1 "((arg_1 + arg_3) - local_34)"
#define next_call_arg_2 "arg_2"
#define next_call_arg_3 "local_34"
	local_38 = 0x0;
#define next_call_arg_4 "local_38"
#define next_call_arg_5 "local_38"
#define next_call_arg_6 "local_38"
#define next_call_arg_7 "local_38"
#define next_call_arg_8 "bss_107d4"
	trap_R_DrawStretchPic();
	local_3c = 0x3f800000;
#define next_call_arg_0 "((arg_0 + arg_2) - local_3c)"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "local_3c"
#define next_call_arg_3 "arg_3"
	local_40 = 0x0;
#define next_call_arg_4 "local_40"
#define next_call_arg_5 "local_40"
#define next_call_arg_6 "local_40"
#define next_call_arg_7 "local_40"
#define next_call_arg_8 "bss_107d4"
	trap_R_DrawStretchPic();
	trap_R_SetColor(0x0);
}

/*
=================
UI_SetColor

Address: 0x3958
Stack Size: 0xc
Calls: trap_R_SetColor
Called by: Slider_Draw, UI_DrawConnectScreen, UI_Refresh
=================
*/
void UI_SetColor(int arg_0) {

	trap_R_SetColor(arg_0);
}

/*
=================
UI_UpdateScreen

Address: 0x3961
Stack Size: 0x8
Calls: trap_UpdateScreen
=================
*/
void UI_UpdateScreen(void) {

	trap_UpdateScreen();
}

/*
=================
UI_Refresh

Address: 0x3967
Stack Size: 0x34
Calls: trap_S_StartLocalSound, trap_Key_GetCatcher, UI_DrawString, va, UI_SetColor, UI_MouseEvent, Menu_Draw, UI_DrawHandlePic, UI_UpdateCvars
Called by: vmMain
=================
*/
void UI_Refresh(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;

	local_1c = arg_0;
	uis = (local_1c - bss_db58);
	bss_db58 = local_1c;
	local_20 = trap_Key_GetCatcher();
	if ((local_20 & 0x2) != 0x0) goto jmp_3983;
	goto jmp_3a40;
jmp_3983:
	UI_UpdateCvars();
	if (bss_db68 == 0x0) goto jmp_39e9;
	if (*(int *)(bss_db68 + 0x118) == 0x0) goto jmp_39c0;
	if (*(int *)(bss_db68 + 0x11c) == 0x0) goto jmp_39ad;
	local_24 = 0x0;
	UI_DrawHandlePic(local_24, local_24, 0x44200000, 0x43f00000, bss_107d8);
	goto jmp_39c0;
jmp_39ad:
	local_24 = 0x0;
	UI_DrawHandlePic(local_24, local_24, 0x44200000, 0x43f00000, bss_107dc);
jmp_39c0:
	if (*(int *)(bss_db68 + 0x10c) == 0x0) goto jmp_39d0;
	(*(*(int *)(bss_db68 + 0x10c)))();
	goto jmp_39d6;
jmp_39d0:
	Menu_Draw(bss_db68);
jmp_39d6:
	if (bss_1080c == 0x0) goto jmp_39e9;
	local_24 = 0x0;
	UI_MouseEvent(local_24, local_24);
	bss_1080c = 0x0;
jmp_39e9:
	UI_SetColor(0x0);
	local_24 = 0x10;
#define next_call_arg_0 "(float)(bss_db5c - local_24)"
#define next_call_arg_1 "(float)(bss_db60 - local_24)"
	local_28 = 0x42000000;
#define next_call_arg_2 "local_28"
#define next_call_arg_3 "local_28"
#define next_call_arg_4 "bss_107f0"
	UI_DrawHandlePic();
	if (bss_107d0 == 0x0) goto jmp_3a31;
	local_2c = va(0x4af8, bss_db5c, bss_db60);
	local_30 = 0x0;
	UI_DrawString(local_30, local_30, local_2c, 0x10, 0x29c8);
jmp_3a31:
	if (m_entersound == 0x0) goto jmp_3a40;
	trap_S_StartLocalSound(menu_in_sound, 0x6);
	m_entersound = 0x0;
jmp_3a40:
}

/*
=================
UI_DrawTextBox

Address: 0x3a42
Stack Size: 0x34
Calls: UI_DrawRect, UI_FillRect
=================
*/
void UI_DrawTextBox(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;

	local_1c = 0x8;
#define next_call_arg_0 "(float)(arg_0 + local_1c)"
#define next_call_arg_1 "(float)(arg_1 + local_1c)"
	local_20 = 0x4;
	local_24 = 0x10;
#define next_call_arg_2 "(float)((arg_2 << local_20) + local_24)"
#define next_call_arg_3 "(float)((arg_3 << local_20) + local_24)"
#define next_call_arg_4 "0x29b8"
	UI_FillRect();
	local_28 = 0x8;
#define next_call_arg_0 "(float)(arg_0 + local_28)"
#define next_call_arg_1 "(float)(arg_1 + local_28)"
	local_2c = 0x4;
	local_30 = 0x10;
#define next_call_arg_2 "(float)((arg_2 << local_2c) + local_30)"
#define next_call_arg_3 "(float)((arg_3 << local_2c) + local_30)"
#define next_call_arg_4 "0x2a28"
	UI_DrawRect();
}

/*
=================
UI_CursorInRect

Address: 0x3aa5
Stack Size: 0x10
Called by: UI_TeamOrdersMenu_Key, ScrollList_Key
=================
*/
int UI_CursorInRect(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_8;
	int		local_c;

	local_8 = arg_0;
	if (bss_db5c < local_8) goto jmp_3ac8;
	local_c = arg_1;
	if (bss_db60 < local_c) goto jmp_3ac8;
	if (bss_db5c > (local_8 + arg_2)) goto jmp_3ac8;
	if (bss_db60 <= (local_c + arg_3)) goto jmp_3acc;
jmp_3ac8:
	return 0x0;
jmp_3acc:
	return 0x1;
}

/*
=================
UI_CDKeyMenu_Event

Address: 0x3ad0
Stack Size: 0x14
Calls: trap_SetCDKey, UI_PopMenu
=================
*/
void UI_CDKeyMenu_Event(int arg_0, int arg_1) {
	char	local_c[8];

	if (arg_1 == 0x3) goto jmp_3ad7;
	goto jmp_3afa;
jmp_3ad7:
	*(int *)local_c = *(int *)(arg_0 + 0x8);
	if (*(int *)local_c == 0xb) goto jmp_3ae8;
	if (*(int *)local_c == 0xc) goto jmp_3af7;
	goto jmp_3afa;
jmp_3ae8:
	if ((char)*(char *)bss_10a1c == 0x0) goto jmp_3af2;
	trap_SetCDKey(0x10a1c);
jmp_3af2:
	UI_PopMenu();
	goto jmp_3afa;
jmp_3af7:
	UI_PopMenu();
jmp_3afa:
}

/*
=================
UI_CDKeyMenu_PreValidateKey

Address: 0x3afc
Stack Size: 0x24
Calls: strlen
Called by: UI_CDKeyMenu_DrawKey
=================
*/
int UI_CDKeyMenu_PreValidateKey(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	char	local_1c[8];

	arg_0 = arg_0;
	local_10 = strlen(arg_0);
	if (local_10 == 0x10) goto jmp_3b3e;
	return 0x1;
jmp_3b10:
	local_14 = (char)*(char *)&local_c;
	*(int *)local_1c = 0x32;
	if (local_14 == *(int *)local_1c) goto jmp_3b3e;
	if (local_14 == 0x33) goto jmp_3b3e;
	if (local_14 == 0x37) goto jmp_3b3e;
	if (local_14 < *(int *)local_1c) goto jmp_3b3a;
	if (local_14 < 0x61) goto jmp_3b3a;
	if (local_14 > 0x77) goto jmp_3b3a;
	goto *(int *)((local_14 << 0x2) + 0x12e8);
jmp_3b3a:
	return 0xffffffff;
jmp_3b3e:
	local_14 = arg_0;
	arg_0 = (local_14 + 0x1);
	*(char *)&local_18 = *(char *)local_14;
	*(char *)&local_c = *(char *)&local_18;
	if ((char)*(char *)&local_18 != 0x0) goto jmp_3b10;
	return 0x0;
}

/*
=================
UI_CDKeyMenu_DrawKey

Address: 0x3b5a
Stack Size: 0x4c
Calls: trap_Key_GetOverstrikeMode, UI_DrawProportionalString, UI_CDKeyMenu_PreValidateKey, UI_DrawChar, UI_DrawString, UI_FillRect
=================
*/
void UI_CDKeyMenu_DrawKey(int arg_0) {
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

	local_1c = arg_0;
	if (*(int *)*(int *)(local_1c + 0x24) != *(int *)(local_1c + 0x28)) goto jmp_3b70;
	*(int *)local_3c = 0x1;
	goto jmp_3b73;
jmp_3b70:
	*(int *)local_3c = 0x0;
jmp_3b73:
	local_2c = *(int *)local_3c;
	local_44 = 0x0;
	local_20 = local_44;
	if (local_2c == local_44) goto jmp_3b88;
	local_34 = 0x2170;
	goto jmp_3b8b;
jmp_3b88:
	local_34 = 0x21a0;
jmp_3b8b:
	local_24 = 0xc0;
	local_28 = 0xe8;
	UI_FillRect((float)local_24, (float)local_28, 0x43800000, 0x41800000, 0x2210);
	UI_DrawString(local_24, local_28, (local_1c + 0x48), local_20, local_34);
	if (local_2c == 0x0) goto jmp_3bf0;
	local_48 = trap_Key_GetOverstrikeMode();
	if (local_48 == 0x0) goto jmp_3bc7;
	*(char *)&local_38 = 0xb;
	goto jmp_3bca;
jmp_3bc7:
	*(char *)&local_38 = 0xa;
jmp_3bca:
	local_20 = (local_20 & 0xffffbfff);
	local_20 = (local_20 | 0x1000);
	UI_DrawChar((local_24 + (*(int *)(local_1c + 0x3c) << 0x4)), local_28, (char)*(char *)&local_38, local_20, 0x2160);
jmp_3bf0:
	local_48 = UI_CDKeyMenu_PreValidateKey((local_1c + 0x48));
	local_30 = local_48;
	if (local_30 != 0x1) goto jmp_3c10;
	UI_DrawProportionalString(0x140, 0x178, 0x4ca6, 0x11, 0x2170);
	goto jmp_3c30;
jmp_3c10:
	if (local_30 != 0x0) goto jmp_3c23;
	UI_DrawProportionalString(0x140, 0x178, 0x4c7c, 0x11, 0x2160);
	goto jmp_3c30;
jmp_3c23:
	UI_DrawProportionalString(0x140, 0x178, 0x4c64, 0x11, 0x21b0);
jmp_3c30:
}

/*
=================
UI_CDKeyMenu_Init

Address: 0x3c32
Stack Size: 0x18
Calls: trap_VerifyCDKey, trap_GetCDKey, memset, trap_Cvar_Set, Menu_AddItem, UI_CDKeyMenu_Cache
Called by: UI_CDKeyMenu
=================
*/
void UI_CDKeyMenu_Init(void) {
	int		local_14;

	trap_Cvar_Set(0x4c54, 0x4c52);
	UI_CDKeyMenu_Cache();
	memset(0x10814, 0x0, 0x3bc);
	bss_10928 = 0x1;
	bss_1092c = 0x1;
	bss_10934 = 0xa;
	bss_10940 = 0x140;
	bss_10944 = 0x10;
	bss_10970 = 0x4c4b;
	bss_10978 = 0x2160;
	bss_10974 = 0x1;
	bss_1097c = 0x6;
	bss_10980 = 0x4c38;
	bss_109a8 = 0x4000;
	bss_10988 = 0x8e;
	bss_1098c = 0x76;
	bss_109c8 = 0x167;
	bss_109cc = 0x100;
	bss_109d4 = 0x4;
	bss_109d8 = 0x4c30;
	bss_10a00 = 0x40000;
	bss_109e0 = 0x118;
	bss_109e4 = 0xe8;
	bss_10a18 = 0x10;
	bss_10b1c = 0x10;
	bss_10a0c = 0x3b5a;
	bss_10b20 = 0x6;
	bss_10b24 = 0x4c1e;
	bss_10b4c = 0x110;
	bss_10b28 = 0xb;
	bss_10b50 = 0x3ad0;
	bss_10b2c = 0x280;
	bss_10b30 = 0x1a0;
	bss_10b6c = 0x80;
	bss_10b70 = 0x40;
	bss_10b5c = 0x4c0c;
	bss_10b78 = 0x6;
	bss_10b7c = 0x4bfc;
	bss_10ba4 = 0x104;
	bss_10b80 = 0xc;
	bss_10ba8 = 0x3ad0;
	bss_10b84 = 0x0;
	bss_10b88 = 0x1a0;
	bss_10bc4 = 0x80;
	bss_10bc8 = 0x40;
	bss_10bb4 = 0x4bec;
	Menu_AddItem(0x10814, 0x10934);
	Menu_AddItem(0x10814, 0x1097c);
	Menu_AddItem(0x10814, 0x109d4);
	Menu_AddItem(0x10814, 0x10b20);
	if (bss_db64 == 0x0) goto jmp_3cee;
	Menu_AddItem(0x10814, 0x10b78);
jmp_3cee:
	trap_GetCDKey(0x10a1c, (bss_10b1c + 0x1));
	local_14 = trap_VerifyCDKey(0x10a1c, 0x0);
	if (local_14 != 0x0) goto jmp_3d07;
	*(char *)bss_10a1c = 0x0;
jmp_3d07:
}

/*
=================
UI_CDKeyMenu_Cache

Address: 0x3d09
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_CDKeyMenu_Init, UI_Cache_f
=================
*/
void UI_CDKeyMenu_Cache(void) {

	trap_R_RegisterShaderNoMip(0x4c1e);
	trap_R_RegisterShaderNoMip(0x4c0c);
	trap_R_RegisterShaderNoMip(0x4bfc);
	trap_R_RegisterShaderNoMip(0x4bec);
	trap_R_RegisterShaderNoMip(0x4c38);
}

/*
=================
UI_CDKeyMenu

Address: 0x3d25
Stack Size: 0xc
Calls: UI_PushMenu, UI_CDKeyMenu_Init
Called by: UI_SetupMenu_Event, UI_MainMenu, UI_CDKeyMenu_f
=================
*/
void UI_CDKeyMenu(void) {

	UI_CDKeyMenu_Init();
	UI_PushMenu(0x10814);
}

/*
=================
UI_CDKeyMenu_f

Address: 0x3d30
Stack Size: 0x8
Calls: UI_CDKeyMenu
Called by: UI_ConsoleCommand
=================
*/
void UI_CDKeyMenu_f(void) {

	UI_CDKeyMenu();
}

/*
=================
UI_CinematicsMenu_BackEvent

Address: 0x3d36
Stack Size: 0x8
Calls: UI_PopMenu
=================
*/
void UI_CinematicsMenu_BackEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_3d3d;
	goto jmp_3d40;
jmp_3d3d:
	UI_PopMenu();
jmp_3d40:
}

/*
=================
UI_CinematicsMenu_Event

Address: 0x3d42
Stack Size: 0x1c
Calls: trap_Cmd_ExecuteText, trap_Cvar_Set, va
=================
*/
void UI_CinematicsMenu_Event(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	int		local_18;

	if (arg_1 == 0x3) goto jmp_3d49;
	goto jmp_3d8d;
jmp_3d49:
	local_10 = (*(int *)(arg_0 + 0x8) - 0xb);
	local_14 = va(0x4d94, local_10);
	trap_Cvar_Set(0x4da5, local_14);
	if (bss_10808 == 0x0) goto jmp_3d77;
	if (*(int *)(arg_0 + 0x8) != 0x14) goto jmp_3d77;
	trap_Cmd_ExecuteText(0x2, 0x4d6f);
	goto jmp_3d8d;
jmp_3d77:
	local_18 = va(0x4d51, *(int *)((local_10 << 0x2) + 0x14c8));
	trap_Cmd_ExecuteText(0x2, local_18);
jmp_3d8d:
}

/*
=================
UI_CinematicsMenu_Init

Address: 0x3d8f
Stack Size: 0x3c
Calls: memset, Menu_AddItem, UI_CanShowTierVideo, UI_CinematicsMenu_Cache
Called by: UI_CinematicsMenu
=================
*/
void UI_CinematicsMenu_Init(void) {
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

	UI_CinematicsMenu_Cache();
	memset(0x10bd0, 0x0, 0x540);
	bss_10ce8 = 0x1;
	bss_10cf0 = 0xa;
	bss_10cfc = 0x140;
	bss_10d00 = 0x10;
	bss_10d2c = 0x4d46;
	bss_10d34 = 0x2160;
	bss_10d30 = 0x1;
	bss_10d38 = 0x6;
	bss_10d3c = 0x4d34;
	bss_10d64 = 0x4000;
	bss_10d44 = 0x0;
	bss_10d48 = 0x4e;
	bss_10d84 = 0x100;
	bss_10d88 = 0x149;
	bss_10d90 = 0x6;
	bss_10d94 = 0x4d22;
	bss_10dbc = 0x4000;
	bss_10d9c = 0x178;
	bss_10da0 = 0x4c;
	bss_10ddc = 0x100;
	bss_10de0 = 0x14e;
	local_14 = 0x64;
	bss_10de8 = 0x9;
	bss_10e14 = 0x108;
	bss_10df4 = 0x140;
	bss_10df8 = local_14;
	bss_10df0 = 0xb;
	bss_10e18 = 0x3d42;
	bss_10e24 = 0x4d1a;
	bss_10e2c = 0x21b0;
	bss_10e28 = 0x1;
	local_14 = (local_14 + 0x1e);
	bss_10e30 = 0x9;
	bss_10e5c = 0x108;
	bss_10e3c = 0x140;
	bss_10e40 = local_14;
	bss_10e38 = 0xc;
	bss_10e60 = 0x3d42;
	bss_10e6c = 0x4d14;
	bss_10e74 = 0x21b0;
	bss_10e70 = 0x1;
	if (bss_10808 == 0x0) goto jmp_3e2b;
	local_18 = 0x10e5c;
	*(int *)local_18 = (*(int *)local_18 | 0x2000);
jmp_3e2b:
	local_14 = (local_14 + 0x1e);
	bss_10e78 = 0x9;
	bss_10ea4 = 0x108;
	bss_10e84 = 0x140;
	bss_10e88 = local_14;
	bss_10e80 = 0xd;
	bss_10ea8 = 0x3d42;
	bss_10eb4 = 0x4d0d;
	bss_10ebc = 0x21b0;
	bss_10eb8 = 0x1;
	local_18 = UI_CanShowTierVideo(0x1);
	if (local_18 != 0x0) goto jmp_3e62;
	local_1c = 0x10ea4;
	*(int *)local_1c = (*(int *)local_1c | 0x2000);
jmp_3e62:
	local_14 = (local_14 + 0x1e);
	bss_10ec0 = 0x9;
	bss_10eec = 0x108;
	bss_10ecc = 0x140;
	bss_10ed0 = local_14;
	bss_10ec8 = 0xe;
	bss_10ef0 = 0x3d42;
	bss_10efc = 0x4d06;
	bss_10f04 = 0x21b0;
	bss_10f00 = 0x1;
	local_1c = UI_CanShowTierVideo(0x2);
	if (local_1c != 0x0) goto jmp_3e99;
	local_20 = 0x10eec;
	*(int *)local_20 = (*(int *)local_20 | 0x2000);
jmp_3e99:
	local_14 = (local_14 + 0x1e);
	bss_10f08 = 0x9;
	bss_10f34 = 0x108;
	bss_10f14 = 0x140;
	bss_10f18 = local_14;
	bss_10f10 = 0xf;
	bss_10f38 = 0x3d42;
	bss_10f44 = 0x4cff;
	bss_10f4c = 0x21b0;
	bss_10f48 = 0x1;
	local_20 = UI_CanShowTierVideo(0x3);
	if (local_20 != 0x0) goto jmp_3ed0;
	local_24 = 0x10f34;
	*(int *)local_24 = (*(int *)local_24 | 0x2000);
jmp_3ed0:
	local_14 = (local_14 + 0x1e);
	bss_10f50 = 0x9;
	bss_10f7c = 0x108;
	bss_10f5c = 0x140;
	bss_10f60 = local_14;
	bss_10f58 = 0x10;
	bss_10f80 = 0x3d42;
	bss_10f8c = 0x4cf8;
	bss_10f94 = 0x21b0;
	bss_10f90 = 0x1;
	local_24 = UI_CanShowTierVideo(0x4);
	if (local_24 != 0x0) goto jmp_3f07;
	local_28 = 0x10f7c;
	*(int *)local_28 = (*(int *)local_28 | 0x2000);
jmp_3f07:
	local_14 = (local_14 + 0x1e);
	bss_10f98 = 0x9;
	bss_10fc4 = 0x108;
	bss_10fa4 = 0x140;
	bss_10fa8 = local_14;
	bss_10fa0 = 0x11;
	bss_10fc8 = 0x3d42;
	bss_10fd4 = 0x4cf1;
	bss_10fdc = 0x21b0;
	bss_10fd8 = 0x1;
	local_28 = UI_CanShowTierVideo(0x5);
	if (local_28 != 0x0) goto jmp_3f3e;
	local_2c = 0x10fc4;
	*(int *)local_2c = (*(int *)local_2c | 0x2000);
jmp_3f3e:
	local_14 = (local_14 + 0x1e);
	bss_10fe0 = 0x9;
	bss_1100c = 0x108;
	bss_10fec = 0x140;
	bss_10ff0 = local_14;
	bss_10fe8 = 0x12;
	bss_11010 = 0x3d42;
	bss_1101c = 0x4cea;
	bss_11024 = 0x21b0;
	bss_11020 = 0x1;
	local_2c = UI_CanShowTierVideo(0x6);
	if (local_2c != 0x0) goto jmp_3f75;
	local_30 = 0x1100c;
	*(int *)local_30 = (*(int *)local_30 | 0x2000);
jmp_3f75:
	local_14 = (local_14 + 0x1e);
	bss_11028 = 0x9;
	bss_11054 = 0x108;
	bss_11034 = 0x140;
	bss_11038 = local_14;
	bss_11030 = 0x13;
	bss_11058 = 0x3d42;
	bss_11064 = 0x4ce3;
	bss_1106c = 0x21b0;
	bss_11068 = 0x1;
	local_30 = UI_CanShowTierVideo(0x7);
	if (local_30 != 0x0) goto jmp_3fac;
	local_34 = 0x11054;
	*(int *)local_34 = (*(int *)local_34 | 0x2000);
jmp_3fac:
	local_14 = (local_14 + 0x1e);
	bss_11070 = 0x9;
	bss_1109c = 0x108;
	bss_1107c = 0x140;
	bss_11080 = local_14;
	bss_11078 = 0x14;
	bss_110a0 = 0x3d42;
	bss_110ac = 0x4cdf;
	bss_110b4 = 0x21b0;
	bss_110b0 = 0x1;
	local_34 = UI_CanShowTierVideo(0x8);
	if (local_34 != 0x0) goto jmp_3fe3;
	local_38 = 0x1109c;
	*(int *)local_38 = (*(int *)local_38 | 0x2000);
jmp_3fe3:
	bss_110b8 = 0x6;
	bss_110bc = 0x4ccf;
	bss_110e4 = 0x104;
	bss_110c0 = 0xa;
	bss_110e8 = 0x3d36;
	bss_110c4 = 0x0;
	bss_110c8 = 0x1a0;
	bss_11104 = 0x80;
	bss_11108 = 0x40;
	bss_110f4 = 0x4cbf;
	Menu_AddItem(0x10bd0, 0x10cf0);
	Menu_AddItem(0x10bd0, 0x10d38);
	Menu_AddItem(0x10bd0, 0x10d90);
	Menu_AddItem(0x10bd0, 0x10de8);
	Menu_AddItem(0x10bd0, 0x10e30);
	Menu_AddItem(0x10bd0, 0x10e78);
	Menu_AddItem(0x10bd0, 0x10ec0);
	Menu_AddItem(0x10bd0, 0x10f08);
	Menu_AddItem(0x10bd0, 0x10f50);
	Menu_AddItem(0x10bd0, 0x10f98);
	Menu_AddItem(0x10bd0, 0x10fe0);
	Menu_AddItem(0x10bd0, 0x11028);
	Menu_AddItem(0x10bd0, 0x11070);
	Menu_AddItem(0x10bd0, 0x110b8);
}

/*
=================
UI_CinematicsMenu_Cache

Address: 0x4065
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_CinematicsMenu_Init, UI_Cache_f
=================
*/
void UI_CinematicsMenu_Cache(void) {

	trap_R_RegisterShaderNoMip(0x4ccf);
	trap_R_RegisterShaderNoMip(0x4cbf);
	trap_R_RegisterShaderNoMip(0x4d34);
	trap_R_RegisterShaderNoMip(0x4d22);
}

/*
=================
UI_CinematicsMenu

Address: 0x407c
Stack Size: 0xc
Calls: UI_PushMenu, UI_CinematicsMenu_Init
Called by: Main_MenuEvent, UI_CinematicsMenu_f
=================
*/
void UI_CinematicsMenu(void) {

	UI_CinematicsMenu_Init();
	UI_PushMenu(0x10bd0);
}

/*
=================
UI_CinematicsMenu_f

Address: 0x4087
Stack Size: 0x1c
Calls: Menu_SetCursorToItem, UI_CinematicsMenu, atoi, UI_Argv
Called by: UI_ConsoleCommand
=================
*/
void UI_CinematicsMenu_f(void) {
	int		local_10;
	int		local_14;
	int		local_18;

	local_14 = UI_Argv(0x1);
	local_18 = atoi(local_14);
	local_10 = local_18;
	UI_CinematicsMenu();
	Menu_SetCursorToItem(0x10bd0, *(int *)((local_10 << 0x2) + 0x10be8));
}

/*
=================
ConfirmMenu_Event

Address: 0x40ab
Stack Size: 0x10
Calls: UI_PopMenu
Called by: ConfirmMenu_Key
=================
*/
void ConfirmMenu_Event(int arg_0, int arg_1) {
	int		local_c;

	if (arg_1 == 0x3) goto jmp_40b2;
	goto jmp_40cf;
jmp_40b2:
	UI_PopMenu();
	if (*(int *)(arg_0 + 0x8) != 0xa) goto jmp_40c1;
	local_c = 0x0;
	goto jmp_40c4;
jmp_40c1:
	local_c = 0x1;
jmp_40c4:
	if (bss_112cc == 0x0) goto jmp_40cf;
	(*(bss_112cc))(local_c);
jmp_40cf:
}

/*
=================
ConfirmMenu_Key

Address: 0x40d1
Stack Size: 0x30
Calls: Menu_DefaultKey, ConfirmMenu_Event
=================
*/
int ConfirmMenu_Key(int arg_0) {
	char	local_14[8];
	char	local_1c[8];
	char	local_24[8];
	int		local_2c;

	arg_0 = arg_0;
	*(int *)local_14 = 0x6e;
	if (arg_0 == *(int *)local_14) goto jmp_411c;
	if (arg_0 > *(int *)local_14) goto jmp_40f6;
	*(int *)local_1c = 0x4e;
	if (arg_0 == *(int *)local_1c) goto jmp_411c;
	if (arg_0 < *(int *)local_1c) goto jmp_412c;
	if (arg_0 == 0x59) goto jmp_4125;
	goto jmp_412c;
jmp_40f6:
	if (arg_0 == 0x86) goto jmp_4117;
	*(int *)local_24 = 0x87;
	if (arg_0 == *(int *)local_24) goto jmp_4117;
	if (arg_0 > *(int *)local_24) goto jmp_410d;
	if (arg_0 == 0x79) goto jmp_4125;
	goto jmp_412c;
jmp_410d:
	if (arg_0 == 0xa3) goto jmp_4117;
	if (arg_0 == 0xa5) goto jmp_4117;
	goto jmp_412c;
jmp_4117:
	arg_0 = 0x9;
	goto jmp_412c;
jmp_411c:
	ConfirmMenu_Event(0x11230, 0x3);
	goto jmp_412c;
jmp_4125:
	ConfirmMenu_Event(0x11278, 0x3);
jmp_412c:
	local_2c = Menu_DefaultKey(0x11110, arg_0);
	return local_2c;
}

/*
=================
MessageMenu_Draw

Address: 0x413a
Stack Size: 0x24
Calls: Menu_Draw, UI_DrawProportionalString, UI_DrawNamedPic
=================
*/
void MessageMenu_Draw(void) {
	int		local_1c;
	int		local_20;

	UI_DrawNamedPic(0x430e0000, 0x42ec0000, 0x43b38000, 0x43800000, 0x4dfb);
	local_20 = 0xbc;
	local_1c = 0x0;
	goto jmp_4172;
jmp_4150:
	UI_DrawProportionalString(0x140, local_20, *(int *)((local_1c << 0x2) + bss_112d4), bss_112d0, 0x21b0);
	local_20 = (local_20 + 0x12);
	local_1c = (local_1c + 0x1);
jmp_4172:
	if (*(int *)((local_1c << 0x2) + bss_112d4) != 0x0) goto jmp_4150;
	Menu_Draw(0x11110);
	if (bss_112c8 == 0x0) goto jmp_4189;
	(*(bss_112c8))();
jmp_4189:
}

/*
=================
ConfirmMenu_Draw

Address: 0x418b
Stack Size: 0x1c
Calls: Menu_Draw, UI_DrawProportionalString, UI_DrawNamedPic
=================
*/
void ConfirmMenu_Draw(void) {

	UI_DrawNamedPic(0x430e0000, 0x42ec0000, 0x43b38000, 0x43800000, 0x4dfb);
	UI_DrawProportionalString(0x140, 0xcc, bss_112c4, bss_112d0, 0x21b0);
	UI_DrawProportionalString(bss_112c0, 0x109, 0x4df9, 0x2000, 0x21b0);
	Menu_Draw(0x11110);
	if (bss_112c8 == 0x0) goto jmp_41c3;
	(*(bss_112c8))();
jmp_41c3:
}

/*
=================
ConfirmMenu_Cache

Address: 0x41c5
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_Message, UI_ConfirmMenu_Style, UI_Cache_f
=================
*/
void ConfirmMenu_Cache(void) {

	trap_R_RegisterShaderNoMip(0x4dfb);
}

/*
=================
UI_ConfirmMenu_Style

Address: 0x41cd
Stack Size: 0xc48
Calls: trap_GetClientState, memset, Menu_SetCursorToItem, UI_PushMenu, Menu_AddItem, UI_ProportionalStringWidth, ConfirmMenu_Cache
Called by: ArenaServers_Event, UI_ConfirmMenu
=================
*/
void UI_ConfirmMenu_Style(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_14;
	int		local_18;
	char	local_1c[3084];
	int		local_c28;
	int		local_c2c;
	int		local_c30;
	int		local_c34;
	int		local_c38;
	int		local_c3c;
	char	local_c40[8];

	memset(0x11110, 0x0, 0x1c8);
	ConfirmMenu_Cache();
	local_c38 = UI_ProportionalStringWidth(0x4df2);
	local_c28 = local_c38;
	local_c3c = UI_ProportionalStringWidth(0x4dee);
	local_c2c = (local_c3c + 0x3);
	*(int *)local_c40 = UI_ProportionalStringWidth(0x4df9);
	local_c30 = (*(int *)local_c40 + 0x3);
	local_14 = (0x140 - (local_c28 / 0x2));
	local_18 = (local_14 + local_c2c);
	local_c34 = (local_18 + local_c30);
	bss_112c0 = local_18;
	bss_112c4 = arg_0;
	bss_112c8 = arg_2;
	bss_112cc = arg_3;
	bss_112d0 = arg_1;
	bss_1121c = 0x418b;
	bss_11220 = 0x40d1;
	bss_11224 = 0x1;
	trap_GetClientState(local_1c);
	if (*(int *)local_1c < 0x5) goto jmp_423d;
	bss_11228 = 0x0;
	goto jmp_4240;
jmp_423d:
	bss_11228 = 0x1;
jmp_4240:
	bss_11278 = 0x9;
	bss_112a4 = 0x104;
	bss_112a8 = 0x40ab;
	bss_11280 = 0xb;
	bss_11284 = local_14;
	bss_11288 = 0x108;
	bss_112b4 = 0x4dee;
	bss_112bc = 0x21b0;
	bss_112b8 = 0x0;
	bss_11230 = 0x9;
	bss_1125c = 0x104;
	bss_11260 = 0x40ab;
	bss_11238 = 0xa;
	bss_1123c = local_c34;
	bss_11240 = 0x108;
	bss_1126c = 0x4deb;
	bss_11274 = 0x21b0;
	bss_11270 = 0x0;
	Menu_AddItem(0x11110, 0x11278);
	Menu_AddItem(0x11110, 0x11230);
	UI_PushMenu(0x11110);
	Menu_SetCursorToItem(0x11110, 0x11230);
}

/*
=================
UI_ConfirmMenu

Address: 0x4294
Stack Size: 0x18
Calls: UI_ConfirmMenu_Style
Called by: UI_SPLevelMenu_ResetEvent, UI_SetupMenu_Event, Main_MenuEvent, InGame_Event, Controls_MenuEvent, UI_SetActiveMenu
=================
*/
void UI_ConfirmMenu(int arg_0, int arg_1, int arg_2) {

	UI_ConfirmMenu_Style(arg_0, 0x2001, arg_1, arg_2);
}

/*
=================
UI_Message

Address: 0x42a5
Stack Size: 0xc2c
Calls: trap_GetClientState, memset, Menu_SetCursorToItem, UI_PushMenu, Menu_AddItem, UI_ProportionalStringWidth, ConfirmMenu_Cache
Called by: Punkbuster_ConfirmDisable
=================
*/
void UI_Message(int arg_0) {
	char	local_14[3084];
	int		local_c20;
	int		local_c24;
	int		local_c28;

	memset(0x11110, 0x0, 0x1c8);
	ConfirmMenu_Cache();
	local_c28 = UI_ProportionalStringWidth(0x4de8);
	local_c20 = local_c28;
	local_c24 = (0x140 - (local_c20 / 0x2));
	bss_112d4 = arg_0;
	bss_112d0 = 0x2011;
	bss_1121c = 0x413a;
	bss_11220 = 0x40d1;
	bss_11224 = 0x1;
	trap_GetClientState(local_14);
	if (*(int *)local_14 < 0x5) goto jmp_42e2;
	bss_11228 = 0x0;
	goto jmp_42e5;
jmp_42e2:
	bss_11228 = 0x1;
jmp_42e5:
	bss_11278 = 0x9;
	bss_112a4 = 0x104;
	bss_112a8 = 0x40ab;
	bss_11280 = 0xb;
	bss_11284 = local_c24;
	bss_11288 = 0x118;
	bss_112b4 = 0x4de8;
	bss_112bc = 0x21b0;
	bss_112b8 = 0x0;
	Menu_AddItem(0x11110, 0x11278);
	UI_PushMenu(0x11110);
	Menu_SetCursorToItem(0x11110, 0x11278);
}

/*
=================
UI_ReadableSize

Address: 0x4316
Stack Size: 0x28
Calls: strlen, Com_sprintf
Called by: UI_DisplayDownloadInfo
=================
*/
void UI_ReadableSize(int arg_0, int arg_1, int arg_2) {
	char	local_18[8];
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	arg_2 = arg_2;
	if (arg_2 <= 0x40000000) goto jmp_4362;
	Com_sprintf(arg_0, arg_1, 0x4f7a, (arg_2 / 0x40000000));
	*(int *)local_18 = strlen(arg_0);
	local_20 = strlen(arg_0);
#define next_call_arg_0 "(*(int *)local_18 + arg_0)"
#define next_call_arg_1 "(arg_1 - local_20)"
#define next_call_arg_2 "0x4f71"
	local_24 = 0x40000000;
#define next_call_arg_3 "((0x64 * (arg_2 %% local_24)) / local_24)"
	Com_sprintf();
	goto jmp_43c9;
jmp_4362:
	if (arg_2 <= 0x100000) goto jmp_43a5;
	Com_sprintf(arg_0, arg_1, 0x4f7a, (arg_2 / 0x100000));
	*(int *)local_18 = strlen(arg_0);
	local_20 = strlen(arg_0);
#define next_call_arg_0 "(*(int *)local_18 + arg_0)"
#define next_call_arg_1 "(arg_1 - local_20)"
#define next_call_arg_2 "0x4f68"
	local_24 = 0x100000;
#define next_call_arg_3 "((0x64 * (arg_2 %% local_24)) / local_24)"
	Com_sprintf();
	goto jmp_43c9;
jmp_43a5:
	if (arg_2 <= 0x400) goto jmp_43bb;
	Com_sprintf(arg_0, arg_1, 0x4f62, (arg_2 / 0x400));
	goto jmp_43c9;
jmp_43bb:
	Com_sprintf(arg_0, arg_1, 0x4f59, arg_2);
jmp_43c9:
}

/*
=================
UI_PrintTime

Address: 0x43cb
Stack Size: 0x24
Calls: Com_sprintf
Called by: UI_DisplayDownloadInfo
=================
*/
void UI_PrintTime(int arg_0, int arg_1, int arg_2) {
	int		local_20;

	arg_2 = arg_2;
	arg_2 = (arg_2 / 0x3e8);
	if (arg_2 <= 0xe10) goto jmp_43f8;
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "0x4f4c"
	local_20 = 0xe10;
#define next_call_arg_3 "(arg_2 / local_20)"
#define next_call_arg_4 "((arg_2 %% local_20) / 0x3c)"
	Com_sprintf();
	goto jmp_4426;
jmp_43f8:
	if (arg_2 <= 0x3c) goto jmp_4418;
#define next_call_arg_0 "arg_0"
#define next_call_arg_1 "arg_1"
#define next_call_arg_2 "0x4f3e"
	local_20 = 0x3c;
#define next_call_arg_3 "(arg_2 / local_20)"
#define next_call_arg_4 "(arg_2 %% local_20)"
	Com_sprintf();
	goto jmp_4426;
jmp_4418:
	Com_sprintf(arg_0, arg_1, 0x4f37, arg_2);
jmp_4426:
}

/*
=================
UI_DisplayDownloadInfo

Address: 0x4428
Stack Size: 0x174
Calls: trap_Cvar_VariableValue, UI_PrintTime, UI_ReadableSize, va, UI_DrawProportionalString, UI_ProportionalSizeScale, UI_ProportionalStringWidth
Called by: UI_DrawConnectScreen
=================
*/
void UI_DisplayDownloadInfo(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[64];
	char	local_70[64];
	int		local_b0;
	int		local_b4;
	int		local_b8;
	char	local_bc[64];
	char	local_fc[64];
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

	local_1c = 0x810;
	local_13c = trap_Cvar_VariableValue(0x4f27);
	local_28 = (int)local_13c;
	local_140 = trap_Cvar_VariableValue(0x4f16);
	local_2c = (int)local_140;
	local_144 = trap_Cvar_VariableValue(0x4f06);
	local_b0 = (int)local_144;
	local_148 = UI_ProportionalStringWidth(0x4e0e);
	local_14c = UI_ProportionalSizeScale(local_1c);
	local_20 = (int)((float)local_148 * local_14c);
	local_150 = UI_ProportionalStringWidth(0x4e1b);
	local_154 = UI_ProportionalSizeScale(local_1c);
	local_24 = (int)((float)local_150 * local_154);
	if (local_24 <= local_20) goto jmp_4482;
	local_20 = local_24;
jmp_4482:
	local_158 = UI_ProportionalStringWidth(0x4e30);
	local_15c = UI_ProportionalSizeScale(local_1c);
	local_24 = (int)((float)local_158 * local_15c);
	if (local_24 <= local_20) goto jmp_44a1;
	local_20 = local_24;
jmp_44a1:
	local_20 = (local_20 + 0x10);
	UI_DrawProportionalString(0x8, 0x80, 0x4e0e, local_1c, 0x2160);
	UI_DrawProportionalString(0x8, 0xa0, 0x4e1b, local_1c, 0x2160);
	UI_DrawProportionalString(0x8, 0xe0, 0x4e30, local_1c, 0x2160);
	if (local_28 <= 0x0) goto jmp_44ef;
	local_160 = va(0x4efc, arg_0, (int)((0x42c80000 * (float)local_2c) / (float)local_28));
	local_b8 = local_160;
	goto jmp_44f3;
jmp_44ef:
	local_b8 = arg_0;
jmp_44f3:
	UI_DrawProportionalString(local_20, 0x80, local_b8, local_1c, 0x2160);
	UI_ReadableSize(local_30, 0x40, local_2c);
	UI_ReadableSize(local_70, 0x40, local_28);
	if (local_2c < 0x1000) goto jmp_451f;
	if (local_b0 != 0x0) goto jmp_454a;
jmp_451f:
	UI_DrawProportionalString(local_20, 0xa0, 0x4ef1, local_1c, 0x2160);
	local_160 = va(0x4edf, local_30, local_70);
	UI_DrawProportionalString(local_20, 0xc0, local_160, local_1c, 0x2160);
	goto jmp_4636;
jmp_454a:
	if (((bss_db58 - local_b0) / 0x3e8) == 0x0) goto jmp_4561;
	local_b4 = (local_2c / ((bss_db58 - local_b0) / 0x3e8));
	goto jmp_4564;
jmp_4561:
	local_b4 = 0x0;
jmp_4564:
	UI_ReadableSize(local_bc, 0x40, local_b4);
	local_160 = 0x0;
	if (local_28 == local_160) goto jmp_45d3;
	if (local_b4 == local_160) goto jmp_45d3;
	local_164 = (local_28 / local_b4);
	local_168 = local_164;
	local_16c = 0x400;
	local_164 = (0x3e8 * (local_168 - (((local_2c / local_16c) * local_168) / (local_28 / local_16c))));
	UI_PrintTime(local_fc, 0x40, local_164);
	UI_DrawProportionalString(local_20, 0xa0, local_fc, local_1c, 0x2160);
	local_170 = va(0x4edf, local_30, local_70);
	UI_DrawProportionalString(local_20, 0xc0, local_170, local_1c, 0x2160);
	goto jmp_461a;
jmp_45d3:
	UI_DrawProportionalString(local_20, 0xa0, 0x4ef1, local_1c, 0x2160);
	if (local_28 == 0x0) goto jmp_4602;
	local_164 = va(0x4edf, local_30, local_70);
	UI_DrawProportionalString(local_20, 0xc0, local_164, local_1c, 0x2160);
	goto jmp_461a;
jmp_4602:
	local_164 = va(0x4ed3, local_30);
	UI_DrawProportionalString(local_20, 0xc0, local_164, local_1c, 0x2160);
jmp_461a:
	if (local_b4 == 0x0) goto jmp_4636;
	local_164 = va(0x4ecc, local_bc);
	UI_DrawProportionalString(local_20, 0xe0, local_164, local_1c, 0x2160);
jmp_4636:
}

/*
=================
UI_DrawConnectScreen

Address: 0x4638
Stack Size: 0x1454
Calls: trap_Cvar_VariableStringBuffer, trap_GetConfigString, trap_GetClientState, UI_DisplayDownloadInfo, UI_DrawProportionalString_AutoWrapped, UI_DrawProportionalString, va, Info_ValueForKey, UI_DrawHandlePic, UI_SetColor, Menu_Cache
Called by: vmMain
=================
*/
void UI_DrawConnectScreen(int arg_0) {
	int		local_24;
	char	local_28[8];
	char	local_30[1024];
	char	local_430[1024];
	char	local_830[1024];
	char	local_c30[1024];
	int		local_1030;
	int		local_1034;
	int		local_1038;
	int		local_103c;
	int		local_1040;
	char	local_1044[8];
	int		local_104c;
	int		local_1050;
	char	local_1054[1024];

	Menu_Cache();
	if (arg_0 != 0x0) goto jmp_4658;
	UI_SetColor(0x2160);
	local_1034 = 0x0;
	UI_DrawHandlePic(local_1034, local_1034, 0x44200000, 0x43f00000, bss_107d8);
jmp_4658:
	trap_GetClientState(&local_24);
	*(char *)local_c30 = 0x0;
	local_1034 = trap_GetConfigString(0x0, local_c30, 0x400);
	if (local_1034 == 0x0) goto jmp_468d;
	local_1038 = Info_ValueForKey(local_c30, 0x4eb9);
	local_103c = va(0x4ec1, local_1038);
	UI_DrawProportionalString(0x140, 0x10, local_103c, 0x821, 0x2160);
jmp_468d:
	local_1038 = va(0x4ea8, local_30);
	UI_DrawProportionalString(0x140, 0x40, local_1038, 0x811, 0x2130);
	local_103c = Info_ValueForKey(local_430, 0x4ea3);
	UI_DrawProportionalString(0x140, 0x1c0, local_103c, 0x811, 0x2130);
	if (local_24 >= 0x5) goto jmp_46ce;
	UI_DrawProportionalString_AutoWrapped(0x140, 0xc0, 0x276, 0x14, local_830, 0x811, 0x2130);
jmp_46ce:
	if (lastConnState <= local_24) goto jmp_46d6;
	*(char *)lastLoadingText = 0x0;
jmp_46d6:
	*(int *)local_1044 = local_24;
	lastConnState = *(int *)local_1044;
	local_1040 = *(int *)local_1044;
	if (local_1040 < 0x3) goto jmp_4736;
	if (local_1040 > 0x7) goto jmp_4736;
	goto *(int *)((local_1040 << 0x2) + 0x14e8);
	local_104c = va(0x4e8b, *(int *)local_28);
	local_1030 = local_104c;
	goto jmp_4728;
	local_1050 = va(0x4e72, *(int *)local_28);
	local_1030 = local_1050;
	goto jmp_4728;
	trap_Cvar_VariableStringBuffer(0x4e62, local_1054, 0x400);
	if ((char)*(char *)local_1054 == 0x0) goto jmp_4725;
	UI_DisplayDownloadInfo(local_1054);
	goto jmp_4736;
jmp_4725:
	local_1030 = 0x4e4c;
jmp_4728:
	UI_DrawProportionalString(0x140, 0x80, local_1030, 0x811, 0x2160);
jmp_4736:
}

/*
=================
UI_KeyConnect

Address: 0x4738
Stack Size: 0x10
Calls: trap_Cmd_ExecuteText
=================
*/
void UI_KeyConnect(int arg_0) {

	if (arg_0 != 0x1b) goto jmp_4744;
	trap_Cmd_ExecuteText(0x2, 0x4e40);
jmp_4744:
}

/*
=================
Controls_InitCvars

Address: 0x4746
Stack Size: 0x2c
Calls: trap_Cvar_SetValue, trap_Cvar_Reset, trap_Cvar_VariableValue
Called by: Controls_MenuInit
=================
*/
void Controls_InitCvars(void) {
	int		local_10;
	char	local_14[8];
	char	local_1c[8];
	char	local_24[8];

	local_10 = 0x1998;
	*(int *)local_14 = 0x0;
jmp_474d:
	if (*(int *)local_10 != 0x0) goto jmp_4754;
	goto jmp_4794;
jmp_4754:
	*(int *)local_1c = trap_Cvar_VariableValue(*(int *)local_10);
	*(int *)(local_10 + 0x8) = *(int *)local_1c;
	trap_Cvar_Reset(*(int *)local_10);
	*(int *)local_24 = trap_Cvar_VariableValue(*(int *)local_10);
	*(int *)(local_10 + 0x4) = *(int *)local_24;
	trap_Cvar_SetValue(*(int *)local_10, *(int *)(local_10 + 0x8));
	*(int *)local_14 = (*(int *)local_14 + 0x1);
	local_10 = (local_10 + 0xc);
	goto jmp_474d;
jmp_4794:
}

/*
=================
Controls_GetCvarDefault

Address: 0x4796
Stack Size: 0x1c
Calls: strcmp
Called by: Controls_SetDefaults
=================
*/
int Controls_GetCvarDefault(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;

	arg_0 = arg_0;
	local_10 = 0x1998;
	local_14 = 0x0;
jmp_47a1:
	if (*(int *)local_10 != 0x0) goto jmp_47aa;
	return 0x0;
jmp_47aa:
	local_18 = strcmp(*(int *)local_10, arg_0);
	if (local_18 != 0x0) goto jmp_47bb;
	goto jmp_47c9;
jmp_47bb:
	local_14 = (local_14 + 0x1);
	local_10 = (local_10 + 0xc);
	goto jmp_47a1;
jmp_47c9:
	return *(int *)(local_10 + 0x4);
}

/*
=================
Controls_GetCvarValue

Address: 0x47d1
Stack Size: 0x1c
Calls: strcmp
Called by: Controls_GetConfig
=================
*/
int Controls_GetCvarValue(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;

	arg_0 = arg_0;
	local_10 = 0x1998;
	local_14 = 0x0;
jmp_47dc:
	if (*(int *)local_10 != 0x0) goto jmp_47e5;
	return 0x0;
jmp_47e5:
	local_18 = strcmp(*(int *)local_10, arg_0);
	if (local_18 != 0x0) goto jmp_47f6;
	goto jmp_4804;
jmp_47f6:
	local_14 = (local_14 + 0x1);
	local_10 = (local_10 + 0xc);
	goto jmp_47dc;
jmp_4804:
	return *(int *)(local_10 + 0x8);
}

/*
=================
Controls_UpdateModel

Address: 0x480c
Stack Size: 0x38
Calls: UI_PlayerInfo_SetInfo
Called by: Controls_InitModel, Controls_ActionEvent, Controls_DrawPlayer
=================
*/
void Controls_UpdateModel(int arg_0) {
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	local_24 = 0x0;
	bss_12ae4 = local_24;
	bss_12ae0 = local_24;
	bss_12adc = local_24;
	local_28 = 0x0;
	bss_12af0 = local_28;
	bss_12aec = local_28;
	bss_12ae8 = local_28;
	bss_12ae0 = 0x43160000;
	bss_12aec = bss_12ae0;
	bss_12af4 = 0x16;
	bss_12af8 = 0xb;
	bss_12afc = 0xb;
	bss_12b00 = 0x0;
	local_2c = arg_0;
	if (local_2c < 0x1) goto jmp_48ef;
	if (local_2c > 0x19) goto jmp_48ef;
	goto *(int *)((local_2c << 0x2) + 0x1acc);
	bss_12af4 = 0xf;
	goto jmp_48ef;
	bss_12af4 = 0xe;
	goto jmp_48ef;
	bss_12af4 = 0x10;
	goto jmp_48ef;
	bss_12af4 = 0x12;
	goto jmp_48ef;
	bss_12af4 = 0x17;
	goto jmp_48ef;
	local_30 = 0x12ae0;
	*(int *)local_30 = (*(int *)local_30 + 0x42b40000);
	goto jmp_48ef;
	local_34 = 0x12ae0;
	*(int *)local_34 = (*(int *)local_34 - 0x42b40000);
	goto jmp_48ef;
	bss_12af4 = 0xe;
	bss_12aec = (bss_12ae0 + 0x42b40000);
	goto jmp_48ef;
	bss_12af4 = 0xe;
	bss_12aec = (bss_12ae0 - 0x42b40000);
	goto jmp_48ef;
	bss_12adc = 0xc2340000;
	goto jmp_48ef;
	bss_12adc = 0x42340000;
	goto jmp_48ef;
	bss_12afc = 0x1;
	goto jmp_48ef;
	bss_12afc = 0x2;
	goto jmp_48ef;
	bss_12afc = 0x3;
	goto jmp_48ef;
	bss_12afc = 0x4;
	goto jmp_48ef;
	bss_12afc = 0x5;
	goto jmp_48ef;
	bss_12afc = 0x6;
	goto jmp_48ef;
	bss_12afc = 0x7;
	goto jmp_48ef;
	bss_12afc = 0x8;
	goto jmp_48ef;
	bss_12afc = 0x9;
	goto jmp_48ef;
	bss_12afc = 0xa;
	goto jmp_48ef;
	bss_12af8 = 0x7;
	goto jmp_48ef;
	bss_12af8 = 0x6;
	goto jmp_48ef;
	bss_12af4 = 0x0;
	bss_12af8 = 0x0;
	bss_12afc = 0x0;
	goto jmp_48ef;
	bss_12b00 = 0x1;
jmp_48ef:
	UI_PlayerInfo_SetInfo(0x1246c, bss_12af4, bss_12af8, 0x12adc, 0x12ae8, bss_12afc, bss_12b00);
}

/*
=================
Controls_Update

Address: 0x4906
Stack Size: 0x68
Called by: Controls_MenuInit, Controls_ActionEvent, Controls_MenuEvent, Controls_ResetDefaults_Action, Controls_MenuKey
=================
*/
void Controls_Update(void) {
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
	int		local_50;
	int		local_54;
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;

	local_14 = 0x0;
jmp_490a:
	local_10 = *(int *)((local_14 << 0x2) + 0x1ac0);
	local_c = 0x0;
	goto jmp_492c;
jmp_4918:
	local_1c = (local_8 + 0x2c);
	*(int *)local_1c = (*(int *)local_1c | 0x5000);
	local_c = (local_c + 0x1);
jmp_492c:
	local_1c = *(int *)((local_c << 0x2) + local_10);
	local_8 = local_1c;
	if (local_1c != 0x0) goto jmp_4918;
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x4) goto jmp_490a;
	local_10 = *(int *)((bss_12a94 << 0x2) + 0x1ac0);
	local_c = 0x0;
	goto jmp_496a;
jmp_4956:
	local_1c = (local_8 + 0x2c);
	*(int *)local_1c = (*(int *)local_1c & 0xffff8fff);
	local_c = (local_c + 0x1);
jmp_496a:
	local_1c = *(int *)((local_c << 0x2) + local_10);
	local_8 = local_1c;
	if (local_1c != 0x0) goto jmp_4956;
	local_18 = ((0x1e0 - (local_c << 0x4)) / 0x2);
	local_c = 0x0;
	goto jmp_49c0;
jmp_498b:
	*(int *)(local_8 + 0xc) = 0x140;
	*(int *)(local_8 + 0x10) = local_18;
	*(int *)(local_8 + 0x14) = 0xa8;
	*(int *)(local_8 + 0x1c) = 0x1e8;
	*(int *)(local_8 + 0x18) = local_18;
	*(int *)(local_8 + 0x20) = (local_18 + 0x10);
	local_c = (local_c + 0x1);
	local_18 = (local_18 + 0x10);
jmp_49c0:
	local_20 = *(int *)((local_c << 0x2) + local_10);
	local_8 = local_20;
	if (local_20 != 0x0) goto jmp_498b;
	if (bss_12a98 == 0x0) goto jmp_4a19;
	local_14 = 0x0;
	goto jmp_49f4;
jmp_49db:
	local_24 = (*(int *)((local_14 << 0x2) + 0x11854) + 0x2c);
	*(int *)local_24 = (*(int *)local_24 | 0x2000);
	local_14 = (local_14 + 0x1);
jmp_49f4:
	if (local_14 < bss_11850) goto jmp_49db;
	local_24 = (*(int *)((s_controls << 0x2) + 0x11854) + 0x2c);
	*(int *)local_24 = (*(int *)local_24 & 0xffffdfff);
	local_28 = 0x12b88;
	*(int *)local_28 = (*(int *)local_28 & 0xffffdfff);
	goto jmp_4b06;
jmp_4a19:
	local_14 = 0x0;
	goto jmp_4a37;
jmp_4a1e:
	local_24 = (*(int *)((local_14 << 0x2) + 0x11854) + 0x2c);
	*(int *)local_24 = (*(int *)local_24 & 0xffffdfff);
	local_14 = (local_14 + 0x1);
jmp_4a37:
	if (local_14 < bss_11850) goto jmp_4a1e;
	local_24 = 0x11b2c;
	*(int *)local_24 = (*(int *)local_24 & 0xffffdf3f);
	local_28 = 0x11ae4;
	*(int *)local_28 = (*(int *)local_28 & 0xffffdf3f);
	local_2c = 0x11b74;
	*(int *)local_2c = (*(int *)local_2c & 0xffffdf3f);
	local_30 = 0x11bbc;
	*(int *)local_30 = (*(int *)local_30 & 0xffffdf3f);
	local_34 = 0x11b2c;
	*(int *)local_34 = (*(int *)local_34 | 0x100);
	local_38 = 0x11ae4;
	*(int *)local_38 = (*(int *)local_38 | 0x100);
	local_3c = 0x11b74;
	*(int *)local_3c = (*(int *)local_3c | 0x100);
	local_40 = 0x11bbc;
	*(int *)local_40 = (*(int *)local_40 | 0x100);
	local_44 = bss_12a94;
	if (local_44 < 0x0) goto jmp_4b06;
	if (local_44 > 0x3) goto jmp_4b06;
	goto *(int *)((local_44 << 0x2) + 0x1b34);
	local_48 = 0x11ae4;
	*(int *)local_48 = (*(int *)local_48 & 0xfffffeff);
	local_4c = 0x11ae4;
	*(int *)local_4c = (*(int *)local_4c | 0xc0);
	goto jmp_4b06;
	local_50 = 0x11b2c;
	*(int *)local_50 = (*(int *)local_50 & 0xfffffeff);
	local_54 = 0x11b2c;
	*(int *)local_54 = (*(int *)local_54 | 0xc0);
	goto jmp_4b06;
	local_58 = 0x11b74;
	*(int *)local_58 = (*(int *)local_58 & 0xfffffeff);
	local_5c = 0x11b74;
	*(int *)local_5c = (*(int *)local_5c | 0xc0);
	goto jmp_4b06;
	local_60 = 0x11bbc;
	*(int *)local_60 = (*(int *)local_60 & 0xfffffeff);
	local_64 = 0x11bbc;
	*(int *)local_64 = (*(int *)local_64 | 0xc0);
jmp_4b06:
}

/*
=================
Controls_DrawKeyBinding

Address: 0x4b08
Stack Size: 0x94
Calls: trap_Key_KeynumToStringBuf, UI_DrawChar, UI_DrawString, UI_FillRect, strcat, Q_strupr, strcpy, Menu_ItemAtCursor
=================
*/
void Controls_DrawKeyBinding(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[32];
	int		local_48;
	int		local_4c;
	int		local_50;
	char	local_54[32];
	char	local_74[8];
	int		local_7c;
	int		local_80;
	int		local_84;
	int		local_88;
	int		local_8c;
	int		local_90;

	local_1c = arg_0;
	local_20 = *(int *)(local_1c + 0xc);
	local_24 = *(int *)(local_1c + 0x10);
	local_7c = Menu_ItemAtCursor(*(int *)(local_1c + 0x24));
	if (local_1c != local_7c) goto jmp_4b2f;
	*(int *)local_74 = 0x1;
	goto jmp_4b32;
jmp_4b2f:
	*(int *)local_74 = 0x0;
jmp_4b32:
	local_4c = *(int *)local_74;
	local_48 = *(int *)((*(int *)(local_1c + 0x8) << 0x5) + 0x1530);
	if (local_48 != 0xffffffff) goto jmp_4b4f;
	strcpy(local_28, 0x513c);
	goto jmp_4b8b;
jmp_4b4f:
	trap_Key_KeynumToStringBuf(local_48, local_28, 0x20);
	Q_strupr(local_28);
	local_50 = *(int *)((*(int *)(local_1c + 0x8) << 0x5) + 0x1534);
	if (local_50 == 0xffffffff) goto jmp_4b8b;
	trap_Key_KeynumToStringBuf(local_50, local_54, 0x20);
	Q_strupr(local_54);
	strcat(local_28, 0x5137);
	strcat(local_28, local_54);
jmp_4b8b:
	if (local_4c == 0x0) goto jmp_4c44;
	local_84 = *(int *)(local_1c + 0x14);
#define next_call_arg_0 "(float)local_84"
	local_88 = *(int *)(local_1c + 0x18);
#define next_call_arg_1 "(float)local_88"
	local_8c = 0x1;
#define next_call_arg_2 "(float)((*(int *)(local_1c + 0x1c) - local_84) + local_8c)"
#define next_call_arg_3 "(float)((*(int *)(local_1c + 0x20) - local_88) + local_8c)"
#define next_call_arg_4 "0x2210"
	UI_FillRect();
	local_90 = 0x8;
	UI_DrawString((local_20 - local_90), local_24, *(int *)((*(int *)(local_1c + local_90) << 0x5) + 0x151c), 0x12, 0x2200);
	UI_DrawString((local_20 + 0x8), local_24, local_28, 0x4010, 0x2200);
	if (bss_12a98 == 0x0) goto jmp_4c19;
	UI_DrawChar(local_20, local_24, 0x3d, 0x1011, 0x2200);
	UI_DrawString(0x140, 0x180, 0x510e, 0x4011, 0x2a28);
	goto jmp_4caf;
jmp_4c19:
	UI_DrawChar(local_20, local_24, 0xd, 0x1011, 0x2200);
	UI_DrawString(0x140, 0x176, 0x50ef, 0x11, 0x2a28);
	UI_DrawString(0x140, 0x189, 0x50d6, 0x11, 0x2a28);
	goto jmp_4caf;
jmp_4c44:
	if ((*(int *)(local_1c + 0x2c) & 0x2000) == 0x0) goto jmp_4c7f;
	local_80 = 0x8;
	UI_DrawString((local_20 - local_80), local_24, *(int *)((*(int *)(local_1c + local_80) << 0x5) + 0x151c), 0x12, 0x21e0);
	UI_DrawString((local_20 + 0x8), local_24, local_28, 0x10, 0x21e0);
	goto jmp_4caf;
jmp_4c7f:
	local_80 = 0x8;
	UI_DrawString((local_20 - local_80), local_24, *(int *)((*(int *)(local_1c + local_80) << 0x5) + 0x151c), 0x12, 0x1508);
	UI_DrawString((local_20 + 0x8), local_24, local_28, 0x10, 0x1508);
jmp_4caf:
}

/*
=================
Controls_StatusBar

Address: 0x4cb1
Stack Size: 0x1c
Calls: UI_DrawString
=================
*/
void Controls_StatusBar(void) {

	UI_DrawString(0x140, 0x180, 0x50b4, 0x11, 0x2a28);
}

/*
=================
Controls_DrawPlayer

Address: 0x4cc1
Stack Size: 0x6c
Calls: trap_Cvar_VariableStringBuffer, UI_DrawPlayer, Controls_UpdateModel, strcpy, UI_PlayerInfo_SetModel, strcmp
=================
*/
void Controls_DrawPlayer(int arg_0) {
	int		local_20;
	char	local_24[64];
	char	local_64[8];

	trap_Cvar_VariableStringBuffer(0x50ae, local_24, 0x40);
	*(int *)local_64 = strcmp(local_24, 0x12a9c);
	if (*(int *)local_64 == 0x0) goto jmp_4cea;
	UI_PlayerInfo_SetModel(0x1246c, local_24);
	strcpy(0x12a9c, local_24);
	Controls_UpdateModel(0x0);
jmp_4cea:
	local_20 = arg_0;
	UI_DrawPlayer((float)*(int *)(local_20 + 0xc), (float)*(int *)(local_20 + 0x10), (float)*(int *)(local_20 + 0x4c), (float)*(int *)(local_20 + 0x50), 0x1246c, (bss_db58 / 0x2));
}

/*
=================
Controls_GetKeyAssignment

Address: 0x4d16
Stack Size: 0x12c
Calls: trap_Key_GetBindingBuf, Q_stricmp
Called by: Controls_GetConfig
=================
*/
void Controls_GetKeyAssignment(int arg_0, int arg_1) {
	int		local_14;
	char	local_18[256];
	char	local_118[8];
	int		local_120;
	int		local_124;
	int		local_128;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_120 = 0xffffffff;
	*(int *)(arg_1 + 0x4) = local_120;
	*(int *)arg_1 = local_120;
	local_124 = 0x0;
	*(int *)local_118 = local_124;
	local_14 = local_124;
jmp_4d39:
	trap_Key_GetBindingBuf(local_14, local_18, 0x100);
	if ((char)*(char *)local_18 != 0x0) goto jmp_4d4a;
	goto jmp_4d6d;
jmp_4d4a:
	local_128 = Q_stricmp(local_18, arg_0);
	if (local_128 != 0x0) goto jmp_4d6d;
	*(int *)((*(int *)local_118 << 0x2) + arg_1) = local_14;
	*(int *)local_118 = (*(int *)local_118 + 0x1);
	if (*(int *)local_118 != 0x2) goto jmp_4d6d;
	goto jmp_4d77;
jmp_4d6d:
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x100) goto jmp_4d39;
jmp_4d77:
}

/*
=================
Controls_GetConfig

Address: 0x4d79
Stack Size: 0x64
Calls: UI_ClampCvar, Controls_GetCvarValue, Controls_GetKeyAssignment
Called by: Controls_MenuInit
=================
*/
void Controls_GetConfig(void) {
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

	local_14 = 0x1518;
	local_20 = 0x0;
jmp_4d80:
	if (*(int *)(local_14 + 0x4) != 0x0) goto jmp_4d89;
	goto jmp_4dae;
jmp_4d89:
	Controls_GetKeyAssignment(*(int *)local_14, &local_18);
	*(int *)(local_14 + 0x18) = local_18;
	*(int *)(local_14 + 0x1c) = local_1c;
	local_20 = (local_20 + 0x1);
	local_14 = (local_14 + 0x20);
	goto jmp_4d80;
jmp_4dae:
	local_28 = Controls_GetCvarValue(0x5189);
	if (local_28 >= 0x0) goto jmp_4dbd;
	local_24 = 0x1;
	goto jmp_4dc0;
jmp_4dbd:
	local_24 = 0x0;
jmp_4dc0:
	bss_122e4 = local_24;
	local_2c = Controls_GetCvarValue(0x514c);
	local_30 = UI_ClampCvar(0x0, 0x3f800000, local_2c);
	bss_12370 = (int)local_30;
	local_34 = Controls_GetCvarValue(0x5191);
	local_38 = UI_ClampCvar(0x0, 0x3f800000, local_34);
	bss_123b0 = (int)local_38;
	local_3c = Controls_GetCvarValue(0x517b);
	local_40 = UI_ClampCvar(0x0, 0x3f800000, local_3c);
	bss_1242c = (int)local_40;
	local_44 = Controls_GetCvarValue(0x516f);
	local_48 = UI_ClampCvar(0x40000000, 0x41f00000, local_44);
	bss_1232c = local_48;
	local_4c = Controls_GetCvarValue(0x5163);
	local_50 = UI_ClampCvar(0x0, 0x3f800000, local_4c);
	bss_12a44 = (int)local_50;
	local_54 = Controls_GetCvarValue(0x5155);
	local_58 = UI_ClampCvar(0x3d4ccccd, 0x3f400000, local_54);
	bss_12a8c = local_58;
	local_5c = Controls_GetCvarValue(0x5140);
	local_60 = UI_ClampCvar(0x0, 0x3f800000, local_5c);
	bss_121f0 = (int)local_60;
}

/*
=================
Controls_SetConfig

Address: 0x4e5e
Stack Size: 0x28
Calls: trap_Cmd_ExecuteText, trap_Cvar_SetValue, trap_Cvar_VariableValue, trap_Key_SetBinding, fabs
Called by: Controls_MenuEvent, Controls_MenuKey
=================
*/
void Controls_SetConfig(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	local_10 = 0x1518;
	local_14 = 0x0;
jmp_4e65:
	if (*(int *)(local_10 + 0x4) != 0x0) goto jmp_4e6e;
	goto jmp_4ea4;
jmp_4e6e:
	if (*(int *)(local_10 + 0x18) == 0xffffffff) goto jmp_4e96;
	trap_Key_SetBinding(*(int *)(local_10 + 0x18), *(int *)local_10);
	if (*(int *)(local_10 + 0x1c) == 0xffffffff) goto jmp_4e96;
	trap_Key_SetBinding(*(int *)(local_10 + 0x1c), *(int *)local_10);
jmp_4e96:
	local_14 = (local_14 + 0x1);
	local_10 = (local_10 + 0x20);
	goto jmp_4e65;
jmp_4ea4:
	if (bss_122e4 == 0x0) goto jmp_4ec0;
	local_18 = trap_Cvar_VariableValue(0x5189);
	local_1c = fabs(local_18);
	trap_Cvar_SetValue(0x5189, -local_1c);
	goto jmp_4ed5;
jmp_4ec0:
	local_20 = trap_Cvar_VariableValue(0x5189);
	local_24 = fabs(local_20);
	trap_Cvar_SetValue(0x5189, local_24);
jmp_4ed5:
	trap_Cvar_SetValue(0x514c, (float)bss_12370);
	trap_Cvar_SetValue(0x5191, (float)bss_123b0);
	trap_Cvar_SetValue(0x517b, (float)bss_1242c);
	trap_Cvar_SetValue(0x516f, bss_1232c);
	trap_Cvar_SetValue(0x5163, (float)bss_12a44);
	trap_Cvar_SetValue(0x5155, bss_12a8c);
	trap_Cvar_SetValue(0x5140, (float)bss_121f0);
	trap_Cmd_ExecuteText(0x2, 0x50a2);
}

/*
=================
Controls_SetDefaults

Address: 0x4f1b
Stack Size: 0x38
Calls: Controls_GetCvarDefault
Called by: Controls_ResetDefaults_Action
=================
*/
void Controls_SetDefaults(void) {
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

	local_c = 0x1518;
	local_10 = 0x0;
jmp_4f22:
	if (*(int *)(local_c + 0x4) != 0x0) goto jmp_4f2b;
	goto jmp_4f4d;
jmp_4f2b:
	*(int *)(local_c + 0x18) = *(int *)(local_c + 0x10);
	*(int *)(local_c + 0x1c) = *(int *)(local_c + 0x14);
	local_10 = (local_10 + 0x1);
	local_c = (local_c + 0x20);
	goto jmp_4f22;
jmp_4f4d:
	local_18 = Controls_GetCvarDefault(0x5189);
	if (local_18 >= 0x0) goto jmp_4f5c;
	local_14 = 0x1;
	goto jmp_4f5f;
jmp_4f5c:
	local_14 = 0x0;
jmp_4f5f:
	bss_122e4 = local_14;
	local_1c = Controls_GetCvarDefault(0x514c);
	bss_12370 = (int)local_1c;
	local_20 = Controls_GetCvarDefault(0x5191);
	bss_123b0 = (int)local_20;
	local_24 = Controls_GetCvarDefault(0x517b);
	bss_1242c = (int)local_24;
	local_28 = Controls_GetCvarDefault(0x516f);
	bss_1232c = local_28;
	local_2c = Controls_GetCvarDefault(0x5163);
	bss_12a44 = (int)local_2c;
	local_30 = Controls_GetCvarDefault(0x5155);
	bss_12a8c = local_30;
	local_34 = Controls_GetCvarDefault(0x5140);
	bss_121f0 = (int)local_34;
}

/*
=================
Controls_MenuKey

Address: 0x4fb0
Stack Size: 0x3c
Calls: trap_Key_SetBinding, Menu_DefaultKey, Controls_Update, Controls_SetConfig
=================
*/
int Controls_MenuKey(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[8];
	char	local_30[8];
	int		local_38;

	arg_0 = arg_0;
	local_20 = 0x0;
	local_1c = local_20;
	if (bss_12a98 != local_20) goto jmp_5002;
	*(int *)local_28 = 0x8c;
	if (arg_0 == *(int *)local_28) goto jmp_4ff4;
	if (arg_0 > *(int *)local_28) goto jmp_4fe1;
	*(int *)local_30 = 0x1b;
	if (arg_0 == *(int *)local_30) goto jmp_4ff9;
	if (arg_0 < *(int *)local_30) goto jmp_5138;
	if (arg_0 == 0x7f) goto jmp_4ff4;
	goto jmp_5138;
jmp_4fe1:
	local_38 = 0xab;
	if (arg_0 == local_38) goto jmp_4ff4;
	if (arg_0 < local_38) goto jmp_5138;
	if (arg_0 == 0xb3) goto jmp_4ff9;
	goto jmp_5138;
jmp_4ff4:
	arg_0 = 0xffffffff;
	goto jmp_5028;
jmp_4ff9:
	if (bss_128d8 == 0x0) goto jmp_5138;
	Controls_SetConfig();
	goto jmp_5138;
jmp_5002:
	if ((arg_0 & 0x400) == 0x0) goto jmp_500a;
	goto jmp_5138;
jmp_500a:
	*(int *)local_28 = 0x1b;
	if (arg_0 == *(int *)local_28) goto jmp_501d;
	if (arg_0 < *(int *)local_28) goto jmp_5028;
	if (arg_0 == 0x60) goto jmp_5138;
	goto jmp_5028;
jmp_501d:
	bss_12a98 = 0x0;
	Controls_Update();
	return menu_out_sound;
jmp_5028:
	bss_128d8 = 0x1;
	if (arg_0 == 0xffffffff) goto jmp_5072;
	local_10 = 0x1518;
	local_14 = 0x0;
jmp_5035:
	if (*(int *)(local_10 + 0x4) != 0x0) goto jmp_503e;
	goto jmp_5072;
jmp_503e:
	if (*(int *)(local_10 + 0x1c) != arg_0) goto jmp_504c;
	*(int *)(local_10 + 0x1c) = 0xffffffff;
jmp_504c:
	if (*(int *)(local_10 + 0x18) != arg_0) goto jmp_5064;
	*(int *)(local_10 + 0x18) = *(int *)(local_10 + 0x1c);
	*(int *)(local_10 + 0x1c) = 0xffffffff;
jmp_5064:
	local_14 = (local_14 + 0x1);
	local_10 = (local_10 + 0x20);
	goto jmp_5035;
jmp_5072:
	local_18 = *(int *)(*(int *)((s_controls << 0x2) + 0x11854) + 0x8);
	local_10 = 0x1518;
	local_14 = 0x0;
jmp_5084:
	if (*(int *)(local_10 + 0x4) != 0x0) goto jmp_508d;
	goto jmp_5129;
jmp_508d:
	if (*(int *)(local_10 + 0x8) != local_18) goto jmp_511b;
	local_1c = 0x1;
	if (arg_0 != 0xffffffff) goto jmp_50ce;
	if (*(int *)(local_10 + 0x18) == 0xffffffff) goto jmp_50b4;
	trap_Key_SetBinding(*(int *)(local_10 + 0x18), 0x50a1);
	*(int *)(local_10 + 0x18) = 0xffffffff;
jmp_50b4:
	if (*(int *)(local_10 + 0x1c) == 0xffffffff) goto jmp_5129;
	trap_Key_SetBinding(*(int *)(local_10 + 0x1c), 0x50a1);
	*(int *)(local_10 + 0x1c) = 0xffffffff;
	goto jmp_5129;
jmp_50ce:
	if (*(int *)(local_10 + 0x18) != 0xffffffff) goto jmp_50de;
	*(int *)(local_10 + 0x18) = arg_0;
	goto jmp_5129;
jmp_50de:
	if (*(int *)(local_10 + 0x18) == arg_0) goto jmp_50f6;
	if (*(int *)(local_10 + 0x1c) != 0xffffffff) goto jmp_50f6;
	*(int *)(local_10 + 0x1c) = arg_0;
	goto jmp_5129;
jmp_50f6:
	trap_Key_SetBinding(*(int *)(local_10 + 0x18), 0x50a1);
	trap_Key_SetBinding(*(int *)(local_10 + 0x1c), 0x50a1);
	*(int *)(local_10 + 0x18) = arg_0;
	*(int *)(local_10 + 0x1c) = 0xffffffff;
	goto jmp_5129;
jmp_511b:
	local_14 = (local_14 + 0x1);
	local_10 = (local_10 + 0x20);
	goto jmp_5084;
jmp_5129:
	bss_12a98 = 0x0;
	if (local_1c == 0x0) goto jmp_5138;
	Controls_Update();
	return menu_out_sound;
jmp_5138:
	local_24 = Menu_DefaultKey(0x11848, arg_0);
	return local_24;
}

/*
=================
Controls_ResetDefaults_Action

Address: 0x5146
Stack Size: 0x8
Calls: Controls_Update, Controls_SetDefaults
=================
*/
void Controls_ResetDefaults_Action(int arg_0) {

	if (arg_0 != 0x0) goto jmp_514d;
	goto jmp_5156;
jmp_514d:
	bss_128d8 = 0x1;
	Controls_SetDefaults();
	Controls_Update();
jmp_5156:
}

/*
=================
Controls_ResetDefaults_Draw

Address: 0x5158
Stack Size: 0x1c
Calls: UI_DrawProportionalString
=================
*/
void Controls_ResetDefaults_Draw(void) {

	UI_DrawProportionalString(0x140, 0x164, 0x5084, 0x11, 0x2170);
	UI_DrawProportionalString(0x140, 0x17f, 0x5062, 0x11, 0x2170);
}

/*
=================
Controls_MenuEvent

Address: 0x5175
Stack Size: 0x20
Calls: UI_PopMenu, Controls_SetConfig, UI_ConfirmMenu, Controls_Update
=================
*/
void Controls_MenuEvent(int arg_0, int arg_1) {
	char	local_14[12];

	*(int *)local_14 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_14 < 0x23) goto jmp_5208;
	if (*(int *)local_14 > 0x2a) goto jmp_518d;
	goto *(int *)((*(int *)local_14 << 0x2) + 0x1ab8);
jmp_518d:
	if (*(int *)local_14 < 0x64) goto jmp_5208;
	if (*(int *)local_14 > 0x6b) goto jmp_5208;
	goto *(int *)((*(int *)local_14 << 0x2) + 0x19d4);
	if (arg_1 != 0x3) goto jmp_5208;
	bss_12a94 = 0x0;
	Controls_Update();
	goto jmp_5208;
	if (arg_1 != 0x3) goto jmp_5208;
	bss_12a94 = 0x1;
	Controls_Update();
	goto jmp_5208;
	if (arg_1 != 0x3) goto jmp_5208;
	bss_12a94 = 0x2;
	Controls_Update();
	goto jmp_5208;
	if (arg_1 != 0x3) goto jmp_5208;
	bss_12a94 = 0x3;
	Controls_Update();
	goto jmp_5208;
	if (arg_1 != 0x3) goto jmp_5208;
	UI_ConfirmMenu(0x5051, 0x5158, 0x5146);
	goto jmp_5208;
	if (arg_1 != 0x3) goto jmp_5208;
	if (bss_128d8 == 0x0) goto jmp_51e7;
	Controls_SetConfig();
jmp_51e7:
	UI_PopMenu();
	goto jmp_5208;
	if (arg_1 != 0x3) goto jmp_5208;
	Controls_SetConfig();
	UI_PopMenu();
	goto jmp_5208;
	if (arg_1 != 0x3) goto jmp_5208;
	UI_PopMenu();
	goto jmp_5208;
	if (arg_1 != 0x3) goto jmp_5208;
	bss_128d8 = 0x1;
jmp_5208:
}

/*
=================
Controls_ActionEvent

Address: 0x520a
Stack Size: 0xc
Calls: Controls_Update, Controls_UpdateModel
=================
*/
void Controls_ActionEvent(int arg_0, int arg_1) {

	if (arg_1 != 0x2) goto jmp_5216;
	Controls_UpdateModel(0x0);
	goto jmp_5238;
jmp_5216:
	if (arg_1 != 0x1) goto jmp_522a;
	Controls_UpdateModel(*(int *)((*(int *)(arg_0 + 0x8) << 0x5) + 0x1524));
	goto jmp_5238;
jmp_522a:
	if (arg_1 != 0x3) goto jmp_5238;
	if (bss_12a98 != 0x0) goto jmp_5238;
	bss_12a98 = 0x1;
	Controls_Update();
jmp_5238:
}

/*
=================
Controls_InitModel

Address: 0x523a
Stack Size: 0x18
Calls: memset, Controls_UpdateModel, UI_PlayerInfo_SetModel, UI_Cvar_VariableString
Called by: Controls_MenuInit
=================
*/
void Controls_InitModel(void) {
	int		local_14;

	memset(0x1246c, 0x0, 0x46c);
	local_14 = UI_Cvar_VariableString(0x50ae);
	UI_PlayerInfo_SetModel(0x1246c, local_14);
	Controls_UpdateModel(0x0);
}

/*
=================
Controls_InitWeapons

Address: 0x5259
Stack Size: 0x10
Calls: trap_R_RegisterModel
Called by: Controls_MenuInit
=================
*/
void Controls_InitWeapons(void) {
	int		local_c;

	local_c = 0x378;
	goto jmp_5277;
jmp_525f:
	if (*(int *)(local_c + 0x24) == 0x1) goto jmp_5268;
	goto jmp_5271;
jmp_5268:
	trap_R_RegisterModel(*(int *)(local_c + 0x8));
jmp_5271:
	local_c = (local_c + 0x34);
jmp_5277:
	if (*(int *)local_c != 0x0) goto jmp_525f;
}

/*
=================
Controls_MenuInit

Address: 0x527e
Stack Size: 0x14
Calls: trap_Cvar_VariableStringBuffer, memset, Controls_Update, Controls_InitWeapons, Controls_InitModel, Controls_GetConfig, Controls_InitCvars, Q_CleanStr, Menu_AddItem, Controls_Cache
Called by: UI_ControlsMenu
=================
*/
void Controls_MenuInit(void) {

	memset(0x11848, 0x0, 0x135c);
	Controls_Cache();
	bss_11958 = 0x4fb0;
	bss_1195c = 0x1;
	bss_11960 = 0x1;
	bss_11968 = 0xa;
	bss_11994 = 0x8;
	bss_11974 = 0x140;
	bss_11978 = 0x10;
	bss_119a4 = 0x5048;
	bss_119ac = 0x2160;
	bss_119a8 = 0x1;
	bss_119b0 = 0x6;
	bss_119b4 = 0x5036;
	bss_119dc = 0x4004;
	bss_119bc = 0x0;
	bss_119c0 = 0x4e;
	bss_119fc = 0x100;
	bss_11a00 = 0x149;
	bss_11a08 = 0x6;
	bss_11a0c = 0x5024;
	bss_11a34 = 0x4004;
	bss_11a14 = 0x178;
	bss_11a18 = 0x4c;
	bss_11a54 = 0x100;
	bss_11a58 = 0x14e;
	bss_11b00 = 0x9;
	bss_11b2c = 0x110;
	bss_11b08 = 0x65;
	bss_11b30 = 0x5175;
	bss_11b0c = 0x98;
	bss_11b10 = 0xba;
	bss_11b3c = 0x501f;
	bss_11b40 = 0x2;
	bss_11b44 = 0x21b0;
	bss_11ab8 = 0x9;
	bss_11ae4 = 0x110;
	bss_11ac0 = 0x64;
	bss_11ae8 = 0x5175;
	bss_11ac4 = 0x98;
	bss_11ac8 = 0xd5;
	bss_11af4 = 0x501a;
	bss_11af8 = 0x2;
	bss_11afc = 0x21b0;
	bss_11b48 = 0x9;
	bss_11b74 = 0x110;
	bss_11b50 = 0x66;
	bss_11b78 = 0x5175;
	bss_11b54 = 0x98;
	bss_11b58 = 0xf0;
	bss_11b84 = 0x5014;
	bss_11b88 = 0x2;
	bss_11b8c = 0x21b0;
	bss_11b90 = 0x9;
	bss_11bbc = 0x110;
	bss_11b98 = 0x67;
	bss_11bc0 = 0x5175;
	bss_11b9c = 0x98;
	bss_11ba0 = 0x10b;
	bss_11bcc = 0x500f;
	bss_11bd0 = 0x2;
	bss_11bd4 = 0x21b0;
	bss_12b04 = 0x6;
	bss_12b08 = 0x4fff;
	bss_12b30 = 0x104;
	bss_12b10 = 0x0;
	bss_12b14 = 0x1a0;
	bss_12b0c = 0x69;
	bss_12b34 = 0x5175;
	bss_12b50 = 0x80;
	bss_12b54 = 0x40;
	bss_12b40 = 0x4fef;
	bss_11a60 = 0x6;
	bss_11a8c = 0x4000;
	bss_11a98 = 0x4cc1;
	bss_11a6c = 0x190;
	bss_11a70 = 0xffffffd8;
	bss_11aac = 0x140;
	bss_11ab0 = 0x230;
	bss_11bd8 = 0x2;
	bss_11c04 = 0x3104;
	bss_11c08 = 0x520a;
	bss_11c10 = 0x4b08;
	bss_11be0 = 0x3;
	bss_11c14 = 0x2;
	bss_11c40 = 0x3104;
	bss_11c44 = 0x520a;
	bss_11c4c = 0x4b08;
	bss_11c1c = 0x4;
	bss_11c50 = 0x2;
	bss_11c7c = 0x3104;
	bss_11c80 = 0x520a;
	bss_11c88 = 0x4b08;
	bss_11c58 = 0x5;
	bss_11c8c = 0x2;
	bss_11cb8 = 0x3104;
	bss_11cbc = 0x520a;
	bss_11cc4 = 0x4b08;
	bss_11c94 = 0x6;
	bss_11cc8 = 0x2;
	bss_11cf4 = 0x3104;
	bss_11cf8 = 0x520a;
	bss_11d00 = 0x4b08;
	bss_11cd0 = 0x7;
	bss_11d04 = 0x2;
	bss_11d30 = 0x3104;
	bss_11d34 = 0x520a;
	bss_11d3c = 0x4b08;
	bss_11d0c = 0x8;
	bss_11d40 = 0x2;
	bss_11d6c = 0x3104;
	bss_11d70 = 0x520a;
	bss_11d78 = 0x4b08;
	bss_11d48 = 0x9;
	bss_11d7c = 0x2;
	bss_11da8 = 0x3104;
	bss_11dac = 0x520a;
	bss_11db4 = 0x4b08;
	bss_11d84 = 0xa;
	bss_11db8 = 0x2;
	bss_11de4 = 0x3104;
	bss_11de8 = 0x520a;
	bss_11df0 = 0x4b08;
	bss_11dc0 = 0xb;
	bss_11df4 = 0x2;
	bss_11e20 = 0x3104;
	bss_11e24 = 0x520a;
	bss_11e2c = 0x4b08;
	bss_11dfc = 0x2;
	bss_11e6c = 0x2;
	bss_11e98 = 0x3104;
	bss_11e9c = 0x520a;
	bss_11ea4 = 0x4b08;
	bss_11e74 = 0x11;
	bss_11e30 = 0x2;
	bss_11e5c = 0x3104;
	bss_11e60 = 0x520a;
	bss_11e68 = 0x4b08;
	bss_11e38 = 0x12;
	bss_11ea8 = 0x2;
	bss_11ed4 = 0x3104;
	bss_11ed8 = 0x520a;
	bss_11ee0 = 0x4b08;
	bss_11eb0 = 0x13;
	bss_11ee4 = 0x2;
	bss_11f10 = 0x3104;
	bss_11f14 = 0x520a;
	bss_11f1c = 0x4b08;
	bss_11eec = 0x14;
	bss_11f20 = 0x2;
	bss_11f4c = 0x3104;
	bss_11f50 = 0x520a;
	bss_11f58 = 0x4b08;
	bss_11f28 = 0x15;
	bss_11f5c = 0x2;
	bss_11f88 = 0x3104;
	bss_11f8c = 0x520a;
	bss_11f94 = 0x4b08;
	bss_11f64 = 0x16;
	bss_11f98 = 0x2;
	bss_11fc4 = 0x3104;
	bss_11fc8 = 0x520a;
	bss_11fd0 = 0x4b08;
	bss_11fa0 = 0x17;
	bss_11fd4 = 0x2;
	bss_12000 = 0x3104;
	bss_12004 = 0x520a;
	bss_1200c = 0x4b08;
	bss_11fdc = 0x18;
	bss_12010 = 0x2;
	bss_1203c = 0x3104;
	bss_12040 = 0x520a;
	bss_12048 = 0x4b08;
	bss_12018 = 0x19;
	bss_1204c = 0x2;
	bss_12078 = 0x3104;
	bss_1207c = 0x520a;
	bss_12084 = 0x4b08;
	bss_12054 = 0x1a;
	bss_12088 = 0x2;
	bss_120b4 = 0x3104;
	bss_120b8 = 0x520a;
	bss_120c0 = 0x4b08;
	bss_12090 = 0x1b;
	bss_120c4 = 0x2;
	bss_120f0 = 0x3104;
	bss_120f4 = 0x520a;
	bss_120fc = 0x4b08;
	bss_120cc = 0x1c;
	bss_12100 = 0x2;
	bss_1212c = 0x3104;
	bss_12130 = 0x520a;
	bss_12138 = 0x4b08;
	bss_12108 = 0xc;
	bss_1213c = 0x2;
	bss_12168 = 0x3104;
	bss_1216c = 0x520a;
	bss_12174 = 0x4b08;
	bss_12144 = 0xd;
	bss_12178 = 0x2;
	bss_121a4 = 0x3084;
	bss_121a8 = 0x520a;
	bss_121b0 = 0x4b08;
	bss_12180 = 0xe;
	bss_121b4 = 0x5;
	bss_121e0 = 0x2;
	bss_121c0 = 0x140;
	bss_121b8 = 0x4fe5;
	bss_121bc = 0x23;
	bss_121e4 = 0x5175;
	bss_121e8 = 0x4cb1;
	bss_121f4 = 0x2;
	bss_12220 = 0x3104;
	bss_12224 = 0x520a;
	bss_1222c = 0x4b08;
	bss_121fc = 0xf;
	bss_12230 = 0x2;
	bss_1225c = 0x3104;
	bss_12260 = 0x520a;
	bss_12268 = 0x4b08;
	bss_12238 = 0x10;
	bss_12430 = 0x2;
	bss_1245c = 0x3104;
	bss_12460 = 0x520a;
	bss_12468 = 0x4b08;
	bss_12438 = 0x1;
	bss_123b4 = 0x2;
	bss_123e0 = 0x3104;
	bss_123e4 = 0x520a;
	bss_123ec = 0x4b08;
	bss_123bc = 0x0;
	bss_122a8 = 0x5;
	bss_122d4 = 0x2;
	bss_122b4 = 0x140;
	bss_122ac = 0x4fd8;
	bss_122b0 = 0x24;
	bss_122d8 = 0x5175;
	bss_122dc = 0x4cb1;
	bss_12334 = 0x5;
	bss_12360 = 0x2;
	bss_12340 = 0x140;
	bss_12338 = 0x4fcb;
	bss_1233c = 0x2a;
	bss_12364 = 0x5175;
	bss_12368 = 0x4cb1;
	bss_12374 = 0x5;
	bss_123a0 = 0x2;
	bss_12380 = 0x140;
	bss_12378 = 0x4fc0;
	bss_1237c = 0x25;
	bss_123a4 = 0x5175;
	bss_123a8 = 0x4cb1;
	bss_123f0 = 0x5;
	bss_1241c = 0x2;
	bss_123fc = 0x140;
	bss_123f4 = 0x4fad;
	bss_123f8 = 0x26;
	bss_12420 = 0x5175;
	bss_12424 = 0x4cb1;
	bss_122e8 = 0x1;
	bss_122f4 = 0x140;
	bss_12314 = 0x2;
	bss_122ec = 0x4fa1;
	bss_122f0 = 0x27;
	bss_12318 = 0x5175;
	bss_12324 = 0x40000000;
	bss_12328 = 0x41f00000;
	bss_1231c = 0x4cb1;
	bss_1226c = 0x2;
	bss_12298 = 0x3104;
	bss_1229c = 0x520a;
	bss_122a4 = 0x4b08;
	bss_12274 = 0x1d;
	bss_128dc = 0x2;
	bss_12908 = 0x3104;
	bss_1290c = 0x520a;
	bss_12914 = 0x4b08;
	bss_128e4 = 0x1e;
	bss_12918 = 0x2;
	bss_12944 = 0x3104;
	bss_12948 = 0x520a;
	bss_12950 = 0x4b08;
	bss_12920 = 0x1f;
	bss_12954 = 0x2;
	bss_12980 = 0x3104;
	bss_12984 = 0x520a;
	bss_1298c = 0x4b08;
	bss_1295c = 0x20;
	bss_12990 = 0x2;
	bss_129bc = 0x3104;
	bss_129c0 = 0x520a;
	bss_129c8 = 0x4b08;
	bss_12998 = 0x21;
	bss_129cc = 0x2;
	bss_129f8 = 0x3104;
	bss_129fc = 0x520a;
	bss_12a04 = 0x4b08;
	bss_129d4 = 0x22;
	bss_12a08 = 0x5;
	bss_12a34 = 0x2;
	bss_12a14 = 0x140;
	bss_12a0c = 0x4f98;
	bss_12a10 = 0x28;
	bss_12a38 = 0x5175;
	bss_12a3c = 0x4cb1;
	bss_12a48 = 0x1;
	bss_12a54 = 0x140;
	bss_12a74 = 0x2;
	bss_12a4c = 0x4f85;
	bss_12a50 = 0x29;
	bss_12a78 = 0x5175;
	bss_12a84 = 0x3d4ccccd;
	bss_12a88 = 0x3f400000;
	bss_12a7c = 0x4cb1;
	bss_12b5c = 0x9;
	bss_12b88 = 0x4008;
	bss_12b68 = 0x140;
	bss_12b6c = 0x1b8;
	bss_12b98 = 0x11828;
	bss_12b9c = 0x1;
	bss_12ba0 = 0x21f0;
	Menu_AddItem(0x11848, 0x11968);
	Menu_AddItem(0x11848, 0x119b0);
	Menu_AddItem(0x11848, 0x11a08);
	Menu_AddItem(0x11848, 0x11a60);
	Menu_AddItem(0x11848, 0x12b5c);
	Menu_AddItem(0x11848, 0x11b00);
	Menu_AddItem(0x11848, 0x11ab8);
	Menu_AddItem(0x11848, 0x11b48);
	Menu_AddItem(0x11848, 0x11b90);
	Menu_AddItem(0x11848, 0x122e8);
	Menu_AddItem(0x11848, 0x12334);
	Menu_AddItem(0x11848, 0x122a8);
	Menu_AddItem(0x11848, 0x12100);
	Menu_AddItem(0x11848, 0x1213c);
	Menu_AddItem(0x11848, 0x12178);
	Menu_AddItem(0x11848, 0x121b4);
	Menu_AddItem(0x11848, 0x121f4);
	Menu_AddItem(0x11848, 0x12230);
	Menu_AddItem(0x11848, 0x12a08);
	Menu_AddItem(0x11848, 0x12a48);
	Menu_AddItem(0x11848, 0x12374);
	Menu_AddItem(0x11848, 0x11df4);
	Menu_AddItem(0x11848, 0x11bd8);
	Menu_AddItem(0x11848, 0x11c14);
	Menu_AddItem(0x11848, 0x11c50);
	Menu_AddItem(0x11848, 0x11c8c);
	Menu_AddItem(0x11848, 0x11cc8);
	Menu_AddItem(0x11848, 0x11d04);
	Menu_AddItem(0x11848, 0x11d40);
	Menu_AddItem(0x11848, 0x11d7c);
	Menu_AddItem(0x11848, 0x11db8);
	Menu_AddItem(0x11848, 0x1204c);
	Menu_AddItem(0x11848, 0x120c4);
	Menu_AddItem(0x11848, 0x12088);
	Menu_AddItem(0x11848, 0x123f0);
	Menu_AddItem(0x11848, 0x11e6c);
	Menu_AddItem(0x11848, 0x11e30);
	Menu_AddItem(0x11848, 0x11ea8);
	Menu_AddItem(0x11848, 0x11ee4);
	Menu_AddItem(0x11848, 0x11f20);
	Menu_AddItem(0x11848, 0x11f5c);
	Menu_AddItem(0x11848, 0x11f98);
	Menu_AddItem(0x11848, 0x11fd4);
	Menu_AddItem(0x11848, 0x12010);
	Menu_AddItem(0x11848, 0x123b4);
	Menu_AddItem(0x11848, 0x12430);
	Menu_AddItem(0x11848, 0x1226c);
	Menu_AddItem(0x11848, 0x128dc);
	Menu_AddItem(0x11848, 0x12918);
	Menu_AddItem(0x11848, 0x12954);
	Menu_AddItem(0x11848, 0x12990);
	Menu_AddItem(0x11848, 0x129cc);
	Menu_AddItem(0x11848, 0x12b04);
	trap_Cvar_VariableStringBuffer(0x4f80, bss_12b98, 0x10);
	Q_CleanStr(bss_12b98);
	Controls_InitCvars();
	Controls_GetConfig();
	Controls_InitModel();
	Controls_InitWeapons();
	bss_12a94 = 0x1;
	Controls_Update();
}

/*
=================
Controls_Cache

Address: 0x57df
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: Controls_MenuInit, UI_Cache_f
=================
*/
void Controls_Cache(void) {

	trap_R_RegisterShaderNoMip(0x4fff);
	trap_R_RegisterShaderNoMip(0x4fef);
	trap_R_RegisterShaderNoMip(0x5036);
	trap_R_RegisterShaderNoMip(0x5024);
}

/*
=================
UI_ControlsMenu

Address: 0x57f6
Stack Size: 0xc
Calls: UI_PushMenu, Controls_MenuInit
Called by: UI_SetupMenu_Event
=================
*/
void UI_ControlsMenu(void) {

	Controls_MenuInit();
	UI_PushMenu(0x11848);
}

/*
=================
UI_CreditMenu_Draw_ioq3

Address: 0x5801
Stack Size: 0x24
Calls: UI_DrawString, UI_DrawProportionalString
=================
*/
void UI_CreditMenu_Draw_ioq3(void) {
	int		local_1c;
	int		local_20;

	local_20 = 0x26;
	UI_DrawProportionalString(0x140, local_20, 0x566e, 0x11, 0x2160);
	local_20 = (int)((float)local_20 + 0x41e60a3d);
	local_1c = 0x0;
	goto jmp_5842;
jmp_5820:
	UI_DrawProportionalString(0x140, local_20, *(int *)((local_1c << 0x2) + 0x1b84), 0x11, 0x2160);
	local_20 = (int)((float)local_20 + 0x41e60a3d);
	local_1c = (local_1c + 0x1);
jmp_5842:
	if (*(int *)((local_1c << 0x2) + 0x1b84) != 0x0) goto jmp_5820;
	UI_DrawString(0x140, 0x1cb, 0x5655, 0x11, 0x21b0);
}

/*
=================
UI_CreditMenu_Key

Address: 0x585a
Stack Size: 0x14
Calls: trap_Cmd_ExecuteText
=================
*/
int UI_CreditMenu_Key(int arg_0) {
	int		local_10;

	if ((arg_0 & 0x400) == 0x0) goto jmp_5865;
	return 0x0;
jmp_5865:
	local_10 = 0x12cc4;
	*(int *)local_10 = (*(int *)local_10 + 0x1);
	if (bss_12cc4 != 0x1) goto jmp_5879;
	bss_12cb0 = 0x5801;
	goto jmp_5880;
jmp_5879:
	trap_Cmd_ExecuteText(0x2, 0x564f);
jmp_5880:
	return 0x0;
}

/*
=================
UI_CreditMenu_Draw

Address: 0x5884
Stack Size: 0x20
Calls: UI_DrawString, UI_DrawProportionalString
=================
*/
void UI_CreditMenu_Draw(void) {
	int		local_1c;

	local_1c = 0xc;
	UI_DrawProportionalString(0x140, local_1c, 0x563f, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41e60a3d);
	UI_DrawProportionalString(0x140, local_1c, 0x5633, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41a20000);
	UI_DrawProportionalString(0x140, local_1c, 0x560a, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41e60a3d);
	UI_DrawProportionalString(0x140, local_1c, 0x5606, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41a20000);
	UI_DrawProportionalString(0x140, local_1c, 0x55e9, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41a20000);
	UI_DrawProportionalString(0x140, local_1c, 0x55be, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41e60a3d);
	UI_DrawProportionalString(0x140, local_1c, 0x55b0, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41a20000);
	UI_DrawProportionalString(0x140, local_1c, 0x55a2, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41e60a3d);
	UI_DrawProportionalString(0x140, local_1c, 0x5595, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41a20000);
	UI_DrawProportionalString(0x140, local_1c, 0x5569, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41e60a3d);
	UI_DrawProportionalString(0x140, local_1c, 0x5565, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41a20000);
	UI_DrawProportionalString(0x140, local_1c, 0x5554, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41e60a3d);
	UI_DrawProportionalString(0x140, local_1c, 0x5533, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41a20000);
	UI_DrawProportionalString(0x140, local_1c, 0x5524, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41e60a3d);
	UI_DrawProportionalString(0x140, local_1c, 0x550e, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41a20000);
	UI_DrawProportionalString(0x140, local_1c, 0x5500, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41e60a3d);
	UI_DrawProportionalString(0x140, local_1c, 0x54e9, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41a20000);
	UI_DrawProportionalString(0x140, local_1c, 0x54df, 0x11, 0x2160);
	local_1c = (int)((float)local_1c + 0x41dab333);
	UI_DrawString(0x140, local_1c, 0x5498, 0x11, 0x21b0);
	local_1c = (local_1c + 0x10);
	UI_DrawString(0x140, local_1c, 0x5453, 0x11, 0x21b0);
}

/*
=================
UI_CreditMenu

Address: 0x5a38
Stack Size: 0x14
Calls: memset, UI_PushMenu
Called by: MainMenu_ExitAction, InGame_QuitAction
=================
*/
void UI_CreditMenu(void) {

	memset(0x12ba4, 0x0, 0x124);
	bss_12cb0 = 0x5884;
	bss_12cb4 = 0x585a;
	bss_12cbc = 0x1;
	UI_PushMenu(0x12ba4);
}

/*
=================
Demos_MenuEvent

Address: 0x5a52
Stack Size: 0x1c
Calls: trap_Cmd_ExecuteText, ScrollList_Key, UI_PopMenu, va, UI_ForceMenuOff
=================
*/
void Demos_MenuEvent(int arg_0, int arg_1) {
	char	local_10[8];
	int		local_18;

	if (arg_1 == 0x3) goto jmp_5a59;
	goto jmp_5aa1;
jmp_5a59:
	*(int *)local_10 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_10 < 0xa) goto jmp_5aa1;
	if (*(int *)local_10 > 0xe) goto jmp_5aa1;
	goto *(int *)((*(int *)local_10 << 0x2) + 0x1b94);
	UI_ForceMenuOff();
	local_18 = va(0x5847, *(int *)((bss_12f20 << 0x2) + bss_12f2c));
	trap_Cmd_ExecuteText(0x2, local_18);
	goto jmp_5aa1;
	UI_PopMenu();
	goto jmp_5aa1;
	ScrollList_Key(0x12ee0, 0x86);
	goto jmp_5aa1;
	ScrollList_Key(0x12ee0, 0x87);
jmp_5aa1:
}

/*
=================
Demos_MenuInit

Address: 0x5aa3
Stack Size: 0x74
Calls: trap_FS_GetFileList, trap_Cvar_VariableValue, memset, Menu_AddItem, strlen, Com_sprintf, Demos_Cache
Called by: UI_DemosMenu
=================
*/
void Demos_MenuInit(void) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[32];
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

	memset(0x12cc8, 0x0, 0x9434);
	Demos_Cache();
	bss_12de0 = 0x1;
	bss_12ddc = 0x1;
	bss_12de8 = 0xa;
	bss_12df4 = 0x140;
	bss_12df8 = 0x10;
	bss_12e24 = 0x5841;
	bss_12e2c = 0x2160;
	bss_12e28 = 0x1;
	bss_12e30 = 0x6;
	bss_12e34 = 0x582f;
	bss_12e5c = 0x4000;
	bss_12e3c = 0x0;
	bss_12e40 = 0x4e;
	bss_12e7c = 0x100;
	bss_12e80 = 0x149;
	bss_12e88 = 0x6;
	bss_12e8c = 0x581d;
	bss_12eb4 = 0x4000;
	bss_12e94 = 0x178;
	bss_12e98 = 0x4c;
	bss_12ed4 = 0x100;
	bss_12ed8 = 0x14e;
	bss_12f40 = 0x6;
	bss_12f44 = 0x5806;
	bss_12f6c = 0x4000;
	bss_12f4c = 0x100;
	bss_12f50 = 0x190;
	bss_12f8c = 0x80;
	bss_12f90 = 0x30;
	bss_12f98 = 0x6;
	bss_12fc4 = 0x904;
	bss_12fa4 = 0x100;
	bss_12fa8 = 0x190;
	bss_12fa0 = 0xe;
	bss_12fc8 = 0x5a52;
	bss_12fe4 = 0x40;
	bss_12fe8 = 0x30;
	bss_12fd4 = 0x57ec;
	bss_12ff0 = 0x6;
	bss_1301c = 0x904;
	bss_12ffc = 0x140;
	bss_13000 = 0x190;
	bss_12ff8 = 0xd;
	bss_13020 = 0x5a52;
	bss_1303c = 0x40;
	bss_13040 = 0x30;
	bss_1302c = 0x57d1;
	bss_13048 = 0x6;
	bss_1304c = 0x57c1;
	bss_13074 = 0x104;
	bss_13050 = 0xa;
	bss_13078 = 0x5a52;
	bss_13054 = 0x0;
	bss_13058 = 0x1a0;
	bss_13094 = 0x80;
	bss_13098 = 0x40;
	bss_13084 = 0x57b1;
	bss_130a0 = 0x6;
	bss_130a4 = 0x57a1;
	bss_130cc = 0x110;
	bss_130a8 = 0xb;
	bss_130d0 = 0x5a52;
	bss_130ac = 0x280;
	bss_130b0 = 0x1a0;
	bss_130ec = 0x80;
	bss_130f0 = 0x40;
	bss_130dc = 0x5791;
	bss_12ee0 = 0x8;
	bss_12f0c = 0x100;
	bss_12f10 = 0x5a52;
	bss_12ee8 = 0xc;
	bss_12eec = 0x76;
	bss_12ef0 = 0x82;
	bss_12f30 = 0x10;
	bss_12f34 = 0xe;
	bss_12f2c = 0x1b0fc;
	bss_12f38 = 0x3;
	local_54 = trap_Cvar_VariableValue(0x577e);
	local_4c = (int)local_54;
	local_58 = trap_Cvar_VariableValue(0x5771);
	local_50 = (int)local_58;
	if (local_50 != 0x0) goto jmp_5bbc;
	local_5c = trap_Cvar_VariableValue(0x5768);
	local_50 = (int)local_5c;
jmp_5bbc:
	if (local_4c != local_50) goto jmp_5bc4;
	local_4c = 0x0;
jmp_5bc4:
	Com_sprintf(local_2c, 0x20, 0x5762, 0x575e, local_50);
	local_60 = trap_FS_GetFileList(0x5758, local_2c, 0x130fc, 0x8000);
	bss_130f8 = local_60;
	local_1c = 0x130fc;
	local_64 = 0x0;
	local_20 = local_64;
	local_28 = local_64;
jmp_5bf0:
	if (bss_130f8 <= 0x400) goto jmp_5c1d;
	bss_130f8 = 0x400;
	goto jmp_5c1d;
jmp_5bf9:
	*(int *)((local_20 << 0x2) + bss_12f2c) = local_1c;
	local_68 = strlen(local_1c);
	local_24 = local_68;
	local_1c = ((local_24 + 0x1) + local_1c);
	local_20 = (local_20 + 0x1);
jmp_5c1d:
	if (local_20 < bss_130f8) goto jmp_5bf9;
	if (local_28 != 0x0) goto jmp_5c5a;
	if (local_4c <= 0x0) goto jmp_5c64;
	if (bss_130f8 >= 0x400) goto jmp_5c64;
	Com_sprintf(local_2c, 0x20, 0x5762, 0x575e, local_4c);
	local_6c = trap_FS_GetFileList(0x5758, local_2c, local_1c, (0x8000 - (local_1c - 0x130fc)));
	local_70 = 0x130f8;
	*(int *)local_70 = (*(int *)local_70 + local_6c);
jmp_5c5a:
	local_28 = (local_28 + 0x1);
	if (local_28 < 0x2) goto jmp_5bf0;
jmp_5c64:
	bss_12f24 = bss_130f8;
	if (bss_130f8 != 0x0) goto jmp_5c7e;
	*(int *)bss_12f2c = 0x5748;
	bss_12f24 = 0x1;
	local_68 = 0x130cc;
	*(int *)local_68 = (*(int *)local_68 | 0x5000);
jmp_5c7e:
	Menu_AddItem(0x12cc8, 0x12de8);
	Menu_AddItem(0x12cc8, 0x12e30);
	Menu_AddItem(0x12cc8, 0x12e88);
	Menu_AddItem(0x12cc8, 0x12ee0);
	Menu_AddItem(0x12cc8, 0x12f40);
	Menu_AddItem(0x12cc8, 0x12f98);
	Menu_AddItem(0x12cc8, 0x12ff0);
	Menu_AddItem(0x12cc8, 0x13048);
	Menu_AddItem(0x12cc8, 0x130a0);
}

/*
=================
Demos_Cache

Address: 0x5cbf
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: Demos_MenuInit, UI_Cache_f
=================
*/
void Demos_Cache(void) {

	trap_R_RegisterShaderNoMip(0x57c1);
	trap_R_RegisterShaderNoMip(0x57b1);
	trap_R_RegisterShaderNoMip(0x57a1);
	trap_R_RegisterShaderNoMip(0x5791);
	trap_R_RegisterShaderNoMip(0x582f);
	trap_R_RegisterShaderNoMip(0x581d);
	trap_R_RegisterShaderNoMip(0x5806);
	trap_R_RegisterShaderNoMip(0x57ec);
	trap_R_RegisterShaderNoMip(0x57d1);
}

/*
=================
UI_DemosMenu

Address: 0x5cef
Stack Size: 0xc
Calls: UI_PushMenu, Demos_MenuInit
Called by: Main_MenuEvent
=================
*/
void UI_DemosMenu(void) {

	Demos_MenuInit();
	UI_PushMenu(0x12cc8);
}

/*
=================
UI_DisplayOptionsMenu_Event

Address: 0x5cfa
Stack Size: 0x18
Calls: trap_Cvar_SetValue, UI_NetworkOptionsMenu, UI_SoundOptionsMenu, UI_GraphicsOptionsMenu, UI_PopMenu
=================
*/
void UI_DisplayOptionsMenu_Event(int arg_0, int arg_1) {
	char	local_10[8];

	if (arg_1 == 0x3) goto jmp_5d01;
	goto jmp_5d4b;
jmp_5d01:
	*(int *)local_10 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_10 < 0xa) goto jmp_5d4b;
	if (*(int *)local_10 > 0x10) goto jmp_5d4b;
	goto *(int *)((*(int *)local_10 << 0x2) + 0x1ba8);
	UI_PopMenu();
	UI_GraphicsOptionsMenu();
	goto jmp_5d4b;
	UI_PopMenu();
	UI_SoundOptionsMenu();
	goto jmp_5d4b;
	UI_PopMenu();
	UI_NetworkOptionsMenu();
	goto jmp_5d4b;
	trap_Cvar_SetValue(0x58e5, (bss_1c478 / 0x41200000));
	goto jmp_5d4b;
	trap_Cvar_SetValue(0x58d9, (0x41200000 * bss_1c4c4));
	goto jmp_5d4b;
	UI_PopMenu();
jmp_5d4b:
}

/*
=================
UI_DisplayOptionsMenu_Init

Address: 0x5d4d
Stack Size: 0x20
Calls: trap_Cvar_VariableValue, memset, Menu_AddItem, UI_DisplayOptionsMenu_Cache
Called by: UI_DisplayOptionsMenu
=================
*/
void UI_DisplayOptionsMenu_Init(void) {
	int		local_14;
	int		local_18;
	int		local_1c;

	memset(0x1c0fc, 0x0, 0x428);
	UI_DisplayOptionsMenu_Cache();
	bss_1c210 = 0x1;
	bss_1c214 = 0x1;
	bss_1c21c = 0xa;
	bss_1c248 = 0x8;
	bss_1c228 = 0x140;
	bss_1c22c = 0x10;
	bss_1c258 = 0x58cc;
	bss_1c260 = 0x2160;
	bss_1c25c = 0x1;
	bss_1c264 = 0x6;
	bss_1c268 = 0x58ba;
	bss_1c290 = 0x4000;
	bss_1c270 = 0x0;
	bss_1c274 = 0x4e;
	bss_1c2b0 = 0x100;
	bss_1c2b4 = 0x149;
	bss_1c2bc = 0x6;
	bss_1c2c0 = 0x58a8;
	bss_1c2e8 = 0x4000;
	bss_1c2c8 = 0x178;
	bss_1c2cc = 0x4c;
	bss_1c308 = 0x100;
	bss_1c30c = 0x14e;
	bss_1c314 = 0x9;
	bss_1c340 = 0x110;
	bss_1c31c = 0xa;
	bss_1c344 = 0x5cfa;
	bss_1c320 = 0xd8;
	bss_1c324 = 0xba;
	bss_1c350 = 0x589f;
	bss_1c354 = 0x2;
	bss_1c358 = 0x21b0;
	bss_1c35c = 0x9;
	bss_1c388 = 0x10;
	bss_1c364 = 0xb;
	bss_1c38c = 0x5cfa;
	bss_1c368 = 0xd8;
	bss_1c36c = 0xd5;
	bss_1c398 = 0x5897;
	bss_1c39c = 0x2;
	bss_1c3a0 = 0x21b0;
	bss_1c3a4 = 0x9;
	bss_1c3d0 = 0x110;
	bss_1c3ac = 0xc;
	bss_1c3d4 = 0x5cfa;
	bss_1c3b0 = 0xd8;
	bss_1c3b4 = 0xf0;
	bss_1c3e0 = 0x5891;
	bss_1c3e4 = 0x2;
	bss_1c3e8 = 0x21b0;
	bss_1c3ec = 0x9;
	bss_1c418 = 0x110;
	bss_1c3f4 = 0xd;
	bss_1c41c = 0x5cfa;
	bss_1c3f8 = 0xd8;
	bss_1c3fc = 0x10b;
	bss_1c428 = 0x5889;
	bss_1c42c = 0x2;
	bss_1c430 = 0x21b0;
	local_14 = 0xde;
	bss_1c434 = 0x1;
	bss_1c438 = 0x587d;
	bss_1c460 = 0x102;
	bss_1c464 = 0x5cfa;
	bss_1c43c = 0xe;
	bss_1c440 = 0x190;
	bss_1c444 = local_14;
	bss_1c470 = 0x40a00000;
	bss_1c474 = 0x41a00000;
	if (bss_107a8 != 0x0) goto jmp_5e39;
	local_18 = 0x1c460;
	*(int *)local_18 = (*(int *)local_18 | 0x2000);
jmp_5e39:
	local_14 = (local_14 + 0x12);
	bss_1c480 = 0x1;
	bss_1c484 = 0x5870;
	bss_1c4ac = 0x102;
	bss_1c4b0 = 0x5cfa;
	bss_1c488 = 0xf;
	bss_1c48c = 0x190;
	bss_1c490 = local_14;
	bss_1c4bc = 0x40400000;
	bss_1c4c0 = 0x41200000;
	bss_1c4cc = 0x6;
	bss_1c4d0 = 0x5860;
	bss_1c4f8 = 0x104;
	bss_1c4fc = 0x5cfa;
	bss_1c4d4 = 0x10;
	bss_1c4d8 = 0x0;
	bss_1c4dc = 0x1a0;
	bss_1c518 = 0x80;
	bss_1c51c = 0x40;
	bss_1c508 = 0x5850;
	Menu_AddItem(0x1c0fc, 0x1c21c);
	Menu_AddItem(0x1c0fc, 0x1c264);
	Menu_AddItem(0x1c0fc, 0x1c2bc);
	Menu_AddItem(0x1c0fc, 0x1c314);
	Menu_AddItem(0x1c0fc, 0x1c35c);
	Menu_AddItem(0x1c0fc, 0x1c3a4);
	Menu_AddItem(0x1c0fc, 0x1c3ec);
	Menu_AddItem(0x1c0fc, 0x1c434);
	Menu_AddItem(0x1c0fc, 0x1c480);
	Menu_AddItem(0x1c0fc, 0x1c4cc);
	local_18 = trap_Cvar_VariableValue(0x58e5);
	bss_1c478 = (0x41200000 * local_18);
	local_1c = trap_Cvar_VariableValue(0x58d9);
	bss_1c4c4 = (local_1c / 0x41200000);
}

/*
=================
UI_DisplayOptionsMenu_Cache

Address: 0x5ed9
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_DisplayOptionsMenu_Init, UI_Cache_f
=================
*/
void UI_DisplayOptionsMenu_Cache(void) {

	trap_R_RegisterShaderNoMip(0x58ba);
	trap_R_RegisterShaderNoMip(0x58a8);
	trap_R_RegisterShaderNoMip(0x5860);
	trap_R_RegisterShaderNoMip(0x5850);
}

/*
=================
UI_DisplayOptionsMenu

Address: 0x5ef0
Stack Size: 0x10
Calls: Menu_SetCursorToItem, UI_PushMenu, UI_DisplayOptionsMenu_Init
Called by: GraphicsOptions_Event, UI_SoundOptionsMenu_Event, Options_Event, UI_NetworkOptionsMenu_Event
=================
*/
void UI_DisplayOptionsMenu(void) {

	UI_DisplayOptionsMenu_Init();
	UI_PushMenu(0x1c0fc);
	Menu_SetCursorToItem(0x1c0fc, 0x1c35c);
}

/*
=================
UI_Alloc

Address: 0x5f02
Stack Size: 0x14
Called by: UI_ParseInfos
=================
*/
int UI_Alloc(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;

	if ((allocPoint + arg_0) <= 0x20000) goto jmp_5f11;
	outOfMemory = 0x1;
	return 0x0;
jmp_5f11:
	local_c = 0x1c528;
	local_10 = *(int *)local_c;
	local_8 = (local_10 + 0x1c52c);
	*(int *)local_c = (local_10 + ((arg_0 + 0x1f) & 0xffffffe0));
	return local_8;
}

/*
=================
UI_InitMemory

Address: 0x5f30
Stack Size: 0xc
Called by: UI_InitGameinfo
=================
*/
void UI_InitMemory(void) {
	int		local_8;

	local_8 = 0x0;
	allocPoint = local_8;
	outOfMemory = local_8;
}

/*
=================
UI_ParseInfos

Address: 0x5f3e
Stack Size: 0x838
Calls: UI_Alloc, va, strlen, Info_SetValueForKey, strcpy, Q_strncpyz, COM_ParseExt, Com_Printf, strcmp, COM_Parse
Called by: UI_LoadBotsFromFile, UI_LoadArenasFromFile
=================
*/
int UI_ParseInfos(int arg_0, int arg_1, int arg_2) {
	int		local_14;
	char	local_18[1024];
	char	local_418[1024];
	int		local_818;
	int		local_81c;
	int		local_820;
	int		local_824;
	int		local_828;
	int		local_82c;
	int		local_830;
	int		local_834;

	arg_1 = arg_1;
	arg_2 = arg_2;
	local_818 = 0x0;
	goto jmp_602d;
jmp_5f4c:
	local_81c = COM_Parse(&arg_0);
	local_14 = local_81c;
	if ((char)*(char *)local_14 != 0x0) goto jmp_5f5e;
	goto jmp_602f;
jmp_5f5e:
	local_820 = strcmp(local_14, 0x5bf6);
	if (local_820 == 0x0) goto jmp_5f72;
	Com_Printf(0x5bde);
	goto jmp_602f;
jmp_5f72:
	if (local_818 != arg_1) goto jmp_5f7e;
	Com_Printf(0x5bca);
	goto jmp_602f;
jmp_5f7e:
	*(char *)local_418 = 0x0;
	goto jmp_5fd9;
jmp_5f83:
	local_824 = COM_ParseExt(&arg_0, 0x1);
	local_14 = local_824;
	if ((char)*(char *)local_14 != 0x0) goto jmp_5f9c;
	Com_Printf(0x5bad);
	goto jmp_5fdb;
jmp_5f9c:
	local_828 = strcmp(local_14, 0x5bab);
	if (local_828 != 0x0) goto jmp_5fab;
	goto jmp_5fdb;
jmp_5fab:
	Q_strncpyz(local_18, local_14, 0x400);
	local_82c = COM_ParseExt(&arg_0, 0x0);
	local_14 = local_82c;
	if ((char)*(char *)local_14 != 0x0) goto jmp_5fcf;
	strcpy(local_14, 0x5ba4);
jmp_5fcf:
	Info_SetValueForKey(local_418, local_18, local_14);
jmp_5fd9:
	goto jmp_5f83;
jmp_5fdb:
	local_824 = strlen(local_418);
	local_828 = strlen(0x5b9e);
	local_82c = va(0x5b9b, 0x400);
	local_830 = strlen(local_82c);
	local_834 = UI_Alloc((((local_824 + local_828) + local_830) + 0x1));
	*(int *)((local_818 << 0x2) + arg_2) = local_834;
	if (*(int *)((local_818 << 0x2) + arg_2) == 0x0) goto jmp_602d;
	strcpy(*(int *)((local_818 << 0x2) + arg_2), local_418);
	local_818 = (local_818 + 0x1);
jmp_602d:
	goto jmp_5f4c;
jmp_602f:
	return local_818;
}

/*
=================
UI_LoadArenasFromFile

Address: 0x6034
Stack Size: 0x2030
Calls: trap_FS_Read, trap_FS_FCloseFile, trap_Print, trap_FS_FOpenFile, UI_ParseInfos, va
Called by: UI_LoadArenas
=================
*/
void UI_LoadArenasFromFile(int arg_0) {
	int		local_18;
	int		local_1c;
	char	local_20[8192];
	int		local_2020;
	int		local_2024;
	int		local_2028;
	int		local_202c;

	local_2020 = trap_FS_FOpenFile(arg_0, &local_1c, 0x0);
	local_18 = local_2020;
	if (local_1c != 0x0) goto jmp_6059;
	local_2024 = va(0x5b85, arg_0);
	trap_Print(local_2024);
	goto jmp_60b2;
jmp_6059:
	if (local_18 < 0x2000) goto jmp_6079;
	local_2024 = va(0x5b56, arg_0, local_18, 0x2000);
	trap_Print(local_2024);
	trap_FS_FCloseFile(local_1c);
	goto jmp_60b2;
jmp_6079:
	trap_FS_Read(local_20, local_18, local_1c);
	*(char *)(local_18 + local_20) = 0x0;
	trap_FS_FCloseFile(local_1c);
#define next_call_arg_0 "local_20"
	local_2024 = 0x3d534;
	local_2028 = *(int *)local_2024;
#define next_call_arg_1 "(0x400 - local_2028)"
#define next_call_arg_2 "((local_2028 << 0x2) + 0x3c534)"
	local_202c = UI_ParseInfos();
	*(int *)local_2024 = (local_2028 + local_202c);
jmp_60b2:
}

/*
=================
UI_LoadArenas

Address: 0x60b4
Stack Size: 0x11f8
Calls: trap_Print, trap_FS_GetFileList, trap_Cvar_Register, strstr, Info_ValueForKey, Info_SetValueForKey, va, strcat, strcpy, strlen, UI_LoadArenasFromFile
Called by: UI_InitGameinfo
=================
*/
void UI_LoadArenas(void) {
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[128];
	int		local_a4;
	int		local_a8;
	int		local_ac;
	int		local_b0;
	int		local_b4;
	int		local_b8;
	int		local_bc;
	char	local_c0[16];
	char	local_d0[256];
	char	local_1d0[4096];
	int		local_11d0;
	int		local_11d4;
	int		local_11d8;
	int		local_11dc;
	int		local_11e0;
	int		local_11e4;
	int		local_11e8;
	int		local_11ec;
	int		local_11f0;
	int		local_11f4;

	ui_numArenas = 0x0;
	trap_Cvar_Register(local_c0, 0x5b49, 0x5b48, 0x50);
	if ((char)*(char *)local_d0 == 0x0) goto jmp_60cf;
	UI_LoadArenasFromFile(local_d0);
	goto jmp_60d4;
jmp_60cf:
	UI_LoadArenasFromFile(0x5b35);
jmp_60d4:
	local_11d0 = trap_FS_GetFileList(0x5b2d, 0x5b26, local_1d0, 0x1000);
	local_b0 = local_11d0;
	local_20 = local_1d0;
	local_a4 = 0x0;
	goto jmp_611f;
jmp_60ec:
	local_11d4 = strlen(local_20);
	local_a8 = local_11d4;
	strcpy(local_24, 0x5b1d);
	strcat(local_24, local_20);
	UI_LoadArenasFromFile(local_24);
	local_11d4 = 0x1;
	local_a4 = (local_a4 + local_11d4);
	local_20 = ((local_a8 + local_11d4) + local_20);
jmp_611f:
	if (local_a4 < local_b0) goto jmp_60ec;
	local_11d8 = va(0x5b0b, ui_numArenas);
	trap_Print(local_11d8);
	if (outOfMemory == 0x0) goto jmp_613c;
	trap_Print(0x5ad2);
jmp_613c:
	local_18 = 0x0;
	goto jmp_6160;
jmp_6141:
	local_11dc = va(0x5acb, local_18);
	Info_SetValueForKey(*(int *)((local_18 << 0x2) + 0x3c534), 0x5ace, local_11dc);
	local_18 = (local_18 + 0x1);
jmp_6160:
	if (local_18 < ui_numArenas) goto jmp_6141;
	local_11dc = 0x0;
	ui_numSinglePlayerArenas = local_11dc;
	ui_numSpecialSinglePlayerArenas = local_11dc;
	local_18 = local_11dc;
	goto jmp_61d3;
jmp_6176:
	local_11e0 = Info_ValueForKey(*(int *)((local_18 << 0x2) + 0x3c534), 0x5ac6);
	local_1c = local_11e0;
	if ((char)*(char *)local_1c != 0x0) goto jmp_6190;
	goto jmp_61cd;
jmp_6190:
	local_11e4 = strstr(local_1c, 0x5abf);
	if (local_11e4 == 0x0) goto jmp_61cd;
	local_11e8 = Info_ValueForKey(*(int *)((local_18 << 0x2) + 0x3c534), 0x5ab7);
	local_ac = local_11e8;
	if ((char)*(char *)local_ac == 0x0) goto jmp_61c2;
	local_11ec = 0x3c52c;
	*(int *)local_11ec = (*(int *)local_11ec + 0x1);
	goto jmp_61cd;
jmp_61c2:
	local_11ec = 0x3c530;
	*(int *)local_11ec = (*(int *)local_11ec + 0x1);
jmp_61cd:
	local_18 = (local_18 + 0x1);
jmp_61d3:
	if (local_18 < ui_numArenas) goto jmp_6176;
	local_18 = (ui_numSinglePlayerArenas %% 0x4);
	if (local_18 == 0x0) goto jmp_61ff;
	local_11e0 = 0x3c530;
	*(int *)local_11e0 = (*(int *)local_11e0 - local_18);
	local_11e8 = va(0x5a86, local_18, 0x4);
	trap_Print(local_11e8);
jmp_61ff:
	local_11e0 = 0x0;
	local_b8 = local_11e0;
	local_bc = (local_b8 + ui_numSinglePlayerArenas);
	local_b4 = (local_bc + ui_numSpecialSinglePlayerArenas);
	local_18 = local_11e0;
	goto jmp_62ca;
jmp_621a:
	local_11e4 = Info_ValueForKey(*(int *)((local_18 << 0x2) + 0x3c534), 0x5ac6);
	local_1c = local_11e4;
	if ((char)*(char *)local_1c == 0x0) goto jmp_62a1;
	local_11e8 = strstr(local_1c, 0x5abf);
	if (local_11e8 == 0x0) goto jmp_62a1;
	local_11ec = Info_ValueForKey(*(int *)((local_18 << 0x2) + 0x3c534), 0x5ab7);
	local_ac = local_11ec;
	if ((char)*(char *)local_ac == 0x0) goto jmp_627c;
#define next_call_arg_0 "0x5acb"
	local_11f0 = local_bc;
	local_bc = (local_11f0 + 0x1);
#define next_call_arg_1 "local_11f0"
	local_11f4 = va();
	Info_SetValueForKey(*(int *)((local_18 << 0x2) + 0x3c534), 0x5ace, local_11f4);
	goto jmp_62c4;
jmp_627c:
#define next_call_arg_0 "0x5acb"
	local_11f0 = local_b8;
	local_b8 = (local_11f0 + 0x1);
#define next_call_arg_1 "local_11f0"
	local_11f4 = va();
	Info_SetValueForKey(*(int *)((local_18 << 0x2) + 0x3c534), 0x5ace, local_11f4);
	goto jmp_62c4;
jmp_62a1:
#define next_call_arg_0 "0x5acb"
	local_11e8 = local_b4;
	local_b4 = (local_11e8 + 0x1);
#define next_call_arg_1 "local_11e8"
	local_11ec = va();
	Info_SetValueForKey(*(int *)((local_18 << 0x2) + 0x3c534), 0x5ace, local_11ec);
jmp_62c4:
	local_18 = (local_18 + 0x1);
jmp_62ca:
	if (local_18 < ui_numArenas) goto jmp_621a;
}

/*
=================
UI_GetArenaInfoByNumber

Address: 0x62d1
Stack Size: 0x28
Calls: trap_Print, atoi, Info_ValueForKey, va
Called by: ServerOptions_SetMenuItems, ServerOptions_Start, StartServer_Cache, StartServer_LevelshotDraw, StartServer_GametypeEvent, StartServer_Update, UI_SPPostgameMenu_NextEvent, UI_SPLevelMenu_LevelEvent, UI_SPLevelMenu_SetMenuItems
=================
*/
int UI_GetArenaInfoByNumber(int arg_0) {
	int		local_10;
	char	local_14[8];
	char	local_1c[8];
	int		local_24;

	arg_0 = arg_0;
	if (arg_0 < 0x0) goto jmp_62df;
	if (arg_0 < ui_numArenas) goto jmp_62f2;
jmp_62df:
	*(int *)local_1c = va(0x5a6a, arg_0);
	trap_Print(*(int *)local_1c);
	return 0x0;
jmp_62f2:
	local_10 = 0x0;
	goto jmp_632b;
jmp_62f7:
	*(int *)local_1c = Info_ValueForKey(*(int *)((local_10 << 0x2) + 0x3c534), 0x5ace);
	*(int *)local_14 = *(int *)local_1c;
	if ((char)*(char *)*(int *)local_14 == 0x0) goto jmp_6325;
	local_24 = atoi(*(int *)local_14);
	if (local_24 != arg_0) goto jmp_6325;
	return *(int *)((local_10 << 0x2) + 0x3c534);
jmp_6325:
	local_10 = (local_10 + 0x1);
jmp_632b:
	if (local_10 < ui_numArenas) goto jmp_62f7;
	return 0x0;
}

/*
=================
UI_GetArenaInfoByMap

Address: 0x6334
Stack Size: 0x1c
Calls: Q_stricmp, Info_ValueForKey
Called by: ServerOptions_InitBotNames, UI_SPPostgameMenu_f
=================
*/
int UI_GetArenaInfoByMap(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;

	arg_0 = arg_0;
	local_10 = 0x0;
	goto jmp_636a;
jmp_633e:
	local_14 = Info_ValueForKey(*(int *)((local_10 << 0x2) + 0x3c534), 0x5a66);
	local_18 = Q_stricmp(local_14, arg_0);
	if (local_18 != 0x0) goto jmp_6364;
	return *(int *)((local_10 << 0x2) + 0x3c534);
jmp_6364:
	local_10 = (local_10 + 0x1);
jmp_636a:
	if (local_10 < ui_numArenas) goto jmp_633e;
	return 0x0;
}

/*
=================
UI_GetSpecialArenaInfo

Address: 0x6373
Stack Size: 0x1c
Calls: Q_stricmp, Info_ValueForKey
Called by: UI_SPPostgameMenu_f, UI_SPLevelMenu, UI_SPLevelMenu_ResetAction, UI_SPLevelMenu_SetMenuItems, UI_GetCurrentGame, UI_TierCompleted
=================
*/
int UI_GetSpecialArenaInfo(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;

	arg_0 = arg_0;
	local_10 = 0x0;
	goto jmp_63a9;
jmp_637d:
	local_14 = Info_ValueForKey(*(int *)((local_10 << 0x2) + 0x3c534), 0x5ab7);
	local_18 = Q_stricmp(local_14, arg_0);
	if (local_18 != 0x0) goto jmp_63a3;
	return *(int *)((local_10 << 0x2) + 0x3c534);
jmp_63a3:
	local_10 = (local_10 + 0x1);
jmp_63a9:
	if (local_10 < ui_numArenas) goto jmp_637d;
	return 0x0;
}

/*
=================
UI_LoadBotsFromFile

Address: 0x63b2
Stack Size: 0x2030
Calls: trap_FS_Read, trap_FS_FCloseFile, trap_Print, trap_FS_FOpenFile, UI_ParseInfos, va
Called by: UI_LoadBots
=================
*/
void UI_LoadBotsFromFile(int arg_0) {
	int		local_18;
	int		local_1c;
	char	local_20[8192];
	int		local_2020;
	int		local_2024;
	int		local_2028;
	int		local_202c;

	local_2020 = trap_FS_FOpenFile(arg_0, &local_1c, 0x0);
	local_18 = local_2020;
	if (local_1c != 0x0) goto jmp_63d7;
	local_2024 = va(0x5b85, arg_0);
	trap_Print(local_2024);
	goto jmp_6439;
jmp_63d7:
	if (local_18 < 0x2000) goto jmp_63f7;
	local_2024 = va(0x5b56, arg_0, local_18, 0x2000);
	trap_Print(local_2024);
	trap_FS_FCloseFile(local_1c);
	goto jmp_6439;
jmp_63f7:
	trap_FS_Read(local_20, local_18, local_1c);
	*(char *)(local_18 + local_20) = 0x0;
	trap_FS_FCloseFile(local_1c);
#define next_call_arg_0 "local_20"
	local_2024 = 0x3e538;
	local_2028 = *(int *)local_2024;
#define next_call_arg_1 "(0x400 - local_2028)"
#define next_call_arg_2 "((local_2028 << 0x2) + 0x3d538)"
	local_202c = UI_ParseInfos();
	*(int *)local_2024 = (local_2028 + local_202c);
	if (outOfMemory == 0x0) goto jmp_6439;
	trap_Print(0x5a2f);
jmp_6439:
}

/*
=================
UI_LoadBots

Address: 0x643b
Stack Size: 0x5c4
Calls: trap_Print, trap_FS_GetFileList, trap_Cvar_Register, va, strcat, strcpy, strlen, UI_LoadBotsFromFile
Called by: UI_InitGameinfo
=================
*/
void UI_LoadBots(void) {
	int		local_18;
	char	local_1c[128];
	int		local_9c;
	int		local_a0;
	int		local_a4;
	char	local_a8[16];
	char	local_b8[256];
	char	local_1b8[1024];
	int		local_5b8;
	int		local_5bc;
	int		local_5c0;

	ui_numBots = 0x0;
	trap_Cvar_Register(local_a8, 0x5a24, 0x5b48, 0x50);
	if ((char)*(char *)local_b8 == 0x0) goto jmp_6456;
	UI_LoadBotsFromFile(local_b8);
	goto jmp_645b;
jmp_6456:
	UI_LoadBotsFromFile(0x5a13);
jmp_645b:
	local_5b8 = trap_FS_GetFileList(0x5b2d, 0x5a0e, local_1b8, 0x400);
	local_a4 = local_5b8;
	local_18 = local_1b8;
	local_9c = 0x0;
	goto jmp_64a6;
jmp_6473:
	local_5bc = strlen(local_18);
	local_a0 = local_5bc;
	strcpy(local_1c, 0x5b1d);
	strcat(local_1c, local_18);
	UI_LoadBotsFromFile(local_1c);
	local_5bc = 0x1;
	local_9c = (local_9c + local_5bc);
	local_18 = ((local_a0 + local_5bc) + local_18);
jmp_64a6:
	if (local_9c < local_a4) goto jmp_6473;
	local_5c0 = va(0x59fe, ui_numBots);
	trap_Print(local_5c0);
}

/*
=================
UI_GetBotInfoByNumber

Address: 0x64bc
Stack Size: 0x18
Calls: trap_Print, va
Called by: UI_BotSelectMenu_Default, UI_BotSelectMenu_UpdateGrid, UI_BotSelectMenu_SortCompare, ServerOptions_InitBotNames, UI_SPLevelMenu_SetBots, UI_AddBotsMenu_SortCompare, UI_AddBotsMenu_SetBotNames
=================
*/
int UI_GetBotInfoByNumber(int arg_0) {
	int		local_14;

	arg_0 = arg_0;
	if (arg_0 < 0x0) goto jmp_64ca;
	if (arg_0 < ui_numBots) goto jmp_64dd;
jmp_64ca:
	local_14 = va(0x59e4, arg_0);
	trap_Print(local_14);
	return 0x0;
jmp_64dd:
	return *(int *)((arg_0 << 0x2) + 0x3d538);
}

/*
=================
UI_GetBotInfoByName

Address: 0x64e7
Stack Size: 0x20
Calls: Q_stricmp, Info_ValueForKey
Called by: ServerOptions_InitBotNames, UI_SPLevelMenu_SetBots
=================
*/
int UI_GetBotInfoByName(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	arg_0 = arg_0;
	local_10 = 0x0;
	goto jmp_6521;
jmp_64f1:
	local_18 = Info_ValueForKey(*(int *)((local_10 << 0x2) + 0x3d538), 0x59df);
	local_14 = local_18;
	local_1c = Q_stricmp(local_14, arg_0);
	if (local_1c != 0x0) goto jmp_651b;
	return *(int *)((local_10 << 0x2) + 0x3d538);
jmp_651b:
	local_10 = (local_10 + 0x1);
jmp_6521:
	if (local_10 < ui_numBots) goto jmp_64f1;
	return 0x0;
}

/*
=================
UI_GetBestScore

Address: 0x652a
Stack Size: 0x458
Calls: trap_Cvar_VariableStringBuffer, atoi, Info_ValueForKey, Com_sprintf, va
Called by: UI_SPLevelMenu_SetMenuArena, UI_GetCurrentGame, UI_TierCompleted
=================
*/
void UI_GetBestScore(int arg_0, int arg_1, int arg_2) {
	int		local_18;
	int		local_1c;
	char	local_20[16];
	int		local_30;
	char	local_34[1024];
	int		local_434;
	char	local_438[8];
	int		local_440;
	int		local_444;
	int		local_448;
	char	local_44c[12];

	arg_0 = arg_0;
	*(int *)local_438 = 0x0;
	if (arg_1 == *(int *)local_438) goto jmp_653c;
	if (arg_2 != *(int *)local_438) goto jmp_653e;
jmp_653c:
	goto jmp_65b8;
jmp_653e:
	if (arg_0 < 0x0) goto jmp_6547;
	if (arg_0 <= ui_numArenas) goto jmp_6549;
jmp_6547:
	goto jmp_65b8;
jmp_6549:
	local_440 = 0x0;
	local_30 = local_440;
	local_434 = local_440;
	local_1c = 0x1;
jmp_6557:
	local_444 = va(0x59d2, local_1c);
	trap_Cvar_VariableStringBuffer(local_444, local_34, 0x400);
	Com_sprintf(local_20, 0x10, 0x59ce, arg_0);
	local_448 = Info_ValueForKey(local_34, local_20);
	*(int *)local_44c = atoi(local_448);
	local_18 = *(int *)local_44c;
	if (local_18 < 0x1) goto jmp_6591;
	if (local_18 <= 0x8) goto jmp_6593;
jmp_6591:
	goto jmp_65a4;
jmp_6593:
	if (local_30 == 0x0) goto jmp_659c;
	if (local_18 > local_30) goto jmp_65a4;
jmp_659c:
	local_30 = local_18;
	local_434 = local_1c;
jmp_65a4:
	local_1c = (local_1c + 0x1);
	if (local_1c <= 0x5) goto jmp_6557;
	*(int *)arg_1 = local_30;
	*(int *)arg_2 = local_434;
jmp_65b8:
}

/*
=================
UI_SetBestScore

Address: 0x65ba
Stack Size: 0x454
Calls: trap_Cvar_Set, trap_Cvar_VariableStringBuffer, trap_Cvar_VariableValue, Info_SetValueForKey, atoi, Info_ValueForKey, Com_sprintf, va
Called by: UI_SPPostgameMenu_f
=================
*/
void UI_SetBestScore(int arg_0, int arg_1) {
	int		local_18;
	char	local_1c[16];
	char	local_2c[1024];
	char	local_42c[8];
	char	local_434[8];
	int		local_43c;
	int		local_440;
	char	local_444[8];
	int		local_44c;
	int		local_450;

	arg_1 = arg_1;
	if (arg_1 < 0x1) goto jmp_65c7;
	if (arg_1 <= 0x8) goto jmp_65c9;
jmp_65c7:
	goto jmp_663f;
jmp_65c9:
	*(int *)local_434 = trap_Cvar_VariableValue(0x59c4);
	local_18 = (int)*(int *)local_434;
	if (local_18 < 0x1) goto jmp_65dc;
	if (local_18 <= 0x5) goto jmp_65de;
jmp_65dc:
	goto jmp_663f;
jmp_65de:
	local_43c = va(0x59d2, local_18);
	trap_Cvar_VariableStringBuffer(local_43c, local_2c, 0x400);
	Com_sprintf(local_1c, 0x10, 0x59ce, arg_0);
	local_440 = Info_ValueForKey(local_2c, local_1c);
	*(int *)local_444 = atoi(local_440);
	*(int *)local_42c = *(int *)local_444;
	if (*(int *)local_42c == 0x0) goto jmp_661b;
	if (*(int *)local_42c > arg_1) goto jmp_661b;
	goto jmp_663f;
jmp_661b:
	local_44c = va(0x5acb, arg_1);
	Info_SetValueForKey(local_2c, local_1c, local_44c);
	local_450 = va(0x59d2, local_18);
	trap_Cvar_Set(local_450, local_2c);
jmp_663f:
}

/*
=================
UI_LogAwardData

Address: 0x6641
Stack Size: 0x438
Calls: trap_Cvar_Set, trap_Cvar_VariableStringBuffer, trap_Print, Info_SetValueForKey, atoi, Info_ValueForKey, Com_sprintf, va
Called by: UI_SPPostgameMenu_f
=================
*/
void UI_LogAwardData(int arg_0, int arg_1) {
	char	local_18[1024];
	char	local_418[16];
	int		local_428;
	int		local_42c;
	int		local_430;
	int		local_434;

	if (arg_1 != 0x0) goto jmp_6648;
	goto jmp_66a2;
jmp_6648:
	if (arg_0 <= 0x5) goto jmp_665d;
	local_42c = va(0x59a1, arg_0);
	trap_Print(local_42c);
	goto jmp_66a2;
jmp_665d:
	trap_Cvar_VariableStringBuffer(0x5996, local_18, 0x400);
	Com_sprintf(local_418, 0x10, 0x5992, arg_0);
	local_42c = Info_ValueForKey(local_18, local_418);
	local_430 = atoi(local_42c);
	local_428 = local_430;
	local_434 = va(0x5acb, (local_428 + arg_1));
	Info_SetValueForKey(local_18, local_418, local_434);
	trap_Cvar_Set(0x5996, local_18);
jmp_66a2:
}

/*
=================
UI_GetAwardLevel

Address: 0x66a4
Stack Size: 0x430
Calls: trap_Cvar_VariableStringBuffer, atoi, Info_ValueForKey, Com_sprintf
Called by: UI_SPPostgameMenu_f, UI_SPLevelMenu_Init
=================
*/
int UI_GetAwardLevel(int arg_0) {
	char	local_18[16];
	char	local_28[1024];
	int		local_428;
	int		local_42c;

	trap_Cvar_VariableStringBuffer(0x5996, local_28, 0x400);
	Com_sprintf(local_18, 0x10, 0x5992, arg_0);
	local_428 = Info_ValueForKey(local_28, local_18);
	local_42c = atoi(local_428);
	return local_42c;
}

/*
=================
UI_TierCompleted

Address: 0x66ce
Stack Size: 0x50
Calls: UI_GetBestScore, atoi, Info_ValueForKey, UI_GetSpecialArenaInfo, UI_GetNumSPTiers
Called by: UI_SPPostgameMenu_f
=================
*/
int UI_TierCompleted(int arg_0) {
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

	local_24 = (arg_0 / 0x4);
	local_14 = (local_24 << 0x2);
	local_30 = UI_GetNumSPTiers();
	if (local_24 != local_30) goto jmp_6739;
	local_34 = UI_GetSpecialArenaInfo(0x5989);
	*(int *)local_28 = local_34;
	local_38 = Info_ValueForKey(*(int *)local_28, 0x5ace);
	local_3c = atoi(local_38);
	if (arg_0 != local_3c) goto jmp_6707;
	return 0x0;
jmp_6707:
	local_40 = UI_GetSpecialArenaInfo(0x5983);
	*(int *)local_28 = local_40;
	local_44 = *(int *)local_28;
	if (local_44 == 0x0) goto jmp_672e;
	local_48 = Info_ValueForKey(local_44, 0x5ace);
	local_4c = atoi(local_48);
	if (arg_0 != local_4c) goto jmp_6735;
jmp_672e:
	return (local_24 + 0x1);
jmp_6735:
	return 0xffffffff;
jmp_6739:
	local_18 = 0x0;
jmp_673c:
	UI_GetBestScore(local_14, &local_1c, &local_20);
	if (local_1c == 0x1) goto jmp_674e;
	return 0xffffffff;
jmp_674e:
	local_34 = 0x1;
	local_18 = (local_18 + local_34);
	local_14 = (local_14 + local_34);
	if (local_18 < 0x4) goto jmp_673c;
	return (local_24 + 0x1);
}

/*
=================
UI_ShowTierVideo

Address: 0x676a
Stack Size: 0x434
Calls: trap_Cvar_Set, trap_Cvar_VariableStringBuffer, Info_SetValueForKey, va, atoi, Info_ValueForKey, Com_sprintf
Called by: UI_SPPostgameMenu_MenuDraw, UI_SPUnlock_f
=================
*/
int UI_ShowTierVideo(int arg_0) {
	char	local_18[1024];
	char	local_418[16];
	int		local_428;
	int		local_42c;
	int		local_430;

	if (arg_0 > 0x0) goto jmp_6773;
	return 0x0;
jmp_6773:
	trap_Cvar_VariableStringBuffer(0x5978, local_18, 0x400);
	Com_sprintf(local_418, 0x10, 0x5971, arg_0);
	local_428 = Info_ValueForKey(local_18, local_418);
	local_42c = atoi(local_428);
	if (local_42c == 0x0) goto jmp_679f;
	return 0x0;
jmp_679f:
	local_430 = va(0x5acb, 0x1);
	Info_SetValueForKey(local_18, local_418, local_430);
	trap_Cvar_Set(0x5978, local_18);
	return 0x1;
}

/*
=================
UI_CanShowTierVideo

Address: 0x67bc
Stack Size: 0x430
Calls: trap_Cvar_VariableStringBuffer, atoi, Info_ValueForKey, Com_sprintf
Called by: UI_CinematicsMenu_Init
=================
*/
int UI_CanShowTierVideo(int arg_0) {
	char	local_18[16];
	char	local_28[1024];
	int		local_428;
	int		local_42c;

	arg_0 = arg_0;
	if (arg_0 != 0x0) goto jmp_67c9;
	return 0x0;
jmp_67c9:
	if (bss_10808 == 0x0) goto jmp_67d5;
	if (arg_0 == 0x8) goto jmp_67d5;
	return 0x0;
jmp_67d5:
	trap_Cvar_VariableStringBuffer(0x5978, local_28, 0x400);
	Com_sprintf(local_18, 0x10, 0x5971, arg_0);
	local_428 = Info_ValueForKey(local_28, local_18);
	local_42c = atoi(local_428);
	if (local_42c == 0x0) goto jmp_6801;
	return 0x1;
jmp_6801:
	return 0x0;
}

/*
=================
UI_GetCurrentGame

Address: 0x6805
Stack Size: 0x34
Calls: UI_GetBestScore, atoi, Info_ValueForKey, UI_GetSpecialArenaInfo
Called by: UI_SPPostgameMenu_NextEvent, UI_SPLevelMenu
=================
*/
int UI_GetCurrentGame(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;

	local_18 = 0x0;
	local_24 = UI_GetSpecialArenaInfo(0x5989);
	local_20 = local_24;
	if (local_20 == 0x0) goto jmp_6846;
	local_28 = Info_ValueForKey(local_20, 0x5ace);
	local_2c = atoi(local_28);
	local_14 = local_2c;
	UI_GetBestScore(local_14, &local_18, &local_1c);
	local_30 = local_18;
	if (local_30 == 0x0) goto jmp_6841;
	if (local_30 <= 0x1) goto jmp_6846;
jmp_6841:
	return local_14;
jmp_6846:
	local_14 = 0x0;
	goto jmp_686c;
jmp_684b:
	UI_GetBestScore(local_14, &local_18, &local_1c);
	local_28 = local_18;
	if (local_28 == 0x0) goto jmp_6861;
	if (local_28 <= 0x1) goto jmp_6866;
jmp_6861:
	return local_14;
jmp_6866:
	local_14 = (local_14 + 0x1);
jmp_686c:
	if (local_14 < ui_numSinglePlayerArenas) goto jmp_684b;
	local_28 = UI_GetSpecialArenaInfo(0x5983);
	local_20 = local_28;
	if (local_20 != 0x0) goto jmp_6883;
	return 0xffffffff;
jmp_6883:
	local_2c = Info_ValueForKey(local_20, 0x5ace);
	local_30 = atoi(local_2c);
	return local_30;
}

/*
=================
UI_NewGame

Address: 0x6898
Stack Size: 0x10
Calls: trap_Cvar_Set
Called by: UI_SPLevelMenu_ResetAction
=================
*/
void UI_NewGame(void) {

	trap_Cvar_Set(0x5965, 0x5b48);
	trap_Cvar_Set(0x5959, 0x5b48);
	trap_Cvar_Set(0x594d, 0x5b48);
	trap_Cvar_Set(0x5941, 0x5b48);
	trap_Cvar_Set(0x5935, 0x5b48);
	trap_Cvar_Set(0x5996, 0x5b48);
	trap_Cvar_Set(0x5978, 0x5b48);
}

/*
=================
UI_GetNumArenas

Address: 0x68cc
Stack Size: 0x8
Called by: StartServer_Cache, StartServer_GametypeEvent
=================
*/
int UI_GetNumArenas(void) {

	return ui_numArenas;
}

/*
=================
UI_GetNumSPArenas

Address: 0x68d2
Stack Size: 0x8
Called by: UI_SPLevelMenu
=================
*/
int UI_GetNumSPArenas(void) {

	return ui_numSinglePlayerArenas;
}

/*
=================
UI_GetNumSPTiers

Address: 0x68d8
Stack Size: 0x8
Called by: UI_SPPostgameMenu_f, UI_SPPostgameMenu_NextEvent, UI_SPLevelMenu, UI_SPArena_Start, UI_TierCompleted
=================
*/
int UI_GetNumSPTiers(void) {

	return (ui_numSinglePlayerArenas / 0x4);
}

/*
=================
UI_GetNumBots

Address: 0x68e0
Stack Size: 0x8
Called by: UI_BotSelectMenu_BuildList, UI_AddBotsMenu_Init
=================
*/
int UI_GetNumBots(void) {

	return ui_numBots;
}

/*
=================
UI_SPUnlock_f

Address: 0x68e6
Stack Size: 0x430
Calls: trap_Print, trap_Cvar_Set, trap_Cvar_VariableStringBuffer, UI_SPLevelMenu_ReInit, UI_ShowTierVideo, Info_SetValueForKey, Com_sprintf
Called by: UI_ConsoleCommand
=================
*/
void UI_SPUnlock_f(void) {
	int		local_18;
	int		local_1c;
	char	local_20[16];
	char	local_30[1024];

	trap_Cvar_VariableStringBuffer(0x5965, local_30, 0x400);
	local_18 = 0x0;
	goto jmp_6910;
jmp_68f5:
	Com_sprintf(local_20, 0x10, 0x59ce, local_18);
	Info_SetValueForKey(local_30, local_20, 0x5933);
	local_18 = (local_18 + 0x1);
jmp_6910:
	if (local_18 < (ui_numSinglePlayerArenas + ui_numSpecialSinglePlayerArenas)) goto jmp_68f5;
	trap_Cvar_Set(0x5965, local_30);
	local_1c = 0x1;
jmp_6922:
	UI_ShowTierVideo(local_1c);
	local_1c = (local_1c + 0x1);
	if (local_1c <= 0x8) goto jmp_6922;
	trap_Print(0x590d);
	UI_SPLevelMenu_ReInit();
}

/*
=================
UI_SPUnlockMedals_f

Address: 0x693c
Stack Size: 0x42c
Calls: trap_Print, trap_Cvar_Set, trap_Cvar_VariableStringBuffer, Info_SetValueForKey, Com_sprintf
Called by: UI_ConsoleCommand
=================
*/
void UI_SPUnlockMedals_f(void) {
	int		local_18;
	char	local_1c[16];
	char	local_2c[1024];

	trap_Cvar_VariableStringBuffer(0x5996, local_2c, 0x400);
	local_18 = 0x0;
jmp_6949:
	Com_sprintf(local_1c, 0x10, 0x5992, local_18);
	Info_SetValueForKey(local_2c, local_1c, 0x5909);
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x6) goto jmp_6949;
	trap_Cvar_Set(0x5996, local_2c);
	trap_Print(0x58ed);
}

/*
=================
UI_InitGameinfo

Address: 0x6976
Stack Size: 0x8
Calls: UI_LoadBots, UI_LoadArenas, UI_InitMemory
Called by: UI_Init
=================
*/
void UI_InitGameinfo(void) {

	UI_InitMemory();
	UI_LoadArenas();
	UI_LoadBots();
	bss_10808 = 0x0;
}

/*
=================
InGame_RestartAction

Address: 0x6985
Stack Size: 0x10
Calls: trap_Cmd_ExecuteText, UI_PopMenu
=================
*/
void InGame_RestartAction(int arg_0) {

	if (arg_0 != 0x0) goto jmp_698c;
	goto jmp_6996;
jmp_698c:
	UI_PopMenu();
	trap_Cmd_ExecuteText(0x2, 0x5cbf);
jmp_6996:
}

/*
=================
InGame_QuitAction

Address: 0x6998
Stack Size: 0x8
Calls: UI_CreditMenu, UI_PopMenu
=================
*/
void InGame_QuitAction(int arg_0) {

	if (arg_0 != 0x0) goto jmp_699f;
	goto jmp_69a5;
jmp_699f:
	UI_PopMenu();
	UI_CreditMenu();
jmp_69a5:
}

/*
=================
InGame_Event

Address: 0x69a7
Stack Size: 0x1c
Calls: trap_Cmd_ExecuteText, UI_PopMenu, UI_TeamOrdersMenu, UI_RemoveBotsMenu, UI_AddBotsMenu, UI_ServerInfoMenu, UI_ConfirmMenu, UI_SetupMenu, UI_TeamMainMenu
=================
*/
void InGame_Event(int arg_0, int arg_1) {
	char	local_14[8];

	if (arg_1 == 0x3) goto jmp_69ae;
	goto jmp_6a05;
jmp_69ae:
	*(int *)local_14 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_14 < 0xa) goto jmp_6a05;
	if (*(int *)local_14 > 0x13) goto jmp_6a05;
	goto *(int *)((*(int *)local_14 << 0x2) + 0x1bc4);
	UI_TeamMainMenu();
	goto jmp_6a05;
	UI_SetupMenu();
	goto jmp_6a05;
	trap_Cmd_ExecuteText(0x2, 0x5cb3);
	goto jmp_6a05;
	UI_ConfirmMenu(0x5ca4, 0x0, 0x6985);
	goto jmp_6a05;
	UI_ConfirmMenu(0x5c99, 0x0, 0x6998);
	goto jmp_6a05;
	UI_ServerInfoMenu();
	goto jmp_6a05;
	UI_AddBotsMenu();
	goto jmp_6a05;
	UI_RemoveBotsMenu();
	goto jmp_6a05;
	UI_TeamOrdersMenu();
	goto jmp_6a05;
	UI_PopMenu();
jmp_6a05:
}

/*
=================
InGame_MenuInit

Address: 0x6a07
Stack Size: 0x1050
Calls: trap_GetConfigString, trap_GetClientState, trap_Cvar_VariableValue, memset, Menu_AddItem, atoi, Info_ValueForKey, InGame_Cache
Called by: UI_InGameMenu
=================
*/
void InGame_MenuInit(void) {
	int		local_14;
	char	local_18[8];
	char	local_20[3076];
	char	local_c24[1024];
	int		local_1024;
	int		local_1028;
	int		local_102c;
	int		local_1030;
	int		local_1034;
	int		local_1038;
	int		local_103c;
	int		local_1040;
	int		local_1044;
	int		local_1048;
	int		local_104c;

	memset(0x3e53c, 0x0, 0x448);
	InGame_Cache();
	bss_3e650 = 0x1;
	bss_3e654 = 0x0;
	bss_3e65c = 0x6;
	bss_3e688 = 0x4000;
	bss_3e660 = 0x5c84;
	bss_3e668 = 0x57;
	bss_3e66c = 0x4a;
	bss_3e6a8 = 0x1d2;
	bss_3e6ac = 0x14c;
	local_14 = 0x58;
	bss_3e6b4 = 0x9;
	bss_3e6e0 = 0x108;
	bss_3e6c0 = 0x140;
	bss_3e6c4 = local_14;
	bss_3e6bc = 0xa;
	bss_3e6e4 = 0x69a7;
	bss_3e6f0 = 0x5c7e;
	bss_3e6f8 = 0x21b0;
	bss_3e6f4 = 0x11;
	local_14 = (local_14 + 0x1c);
	bss_3e81c = 0x9;
	bss_3e848 = 0x108;
	bss_3e828 = 0x140;
	bss_3e82c = local_14;
	bss_3e824 = 0xb;
	bss_3e84c = 0x69a7;
	bss_3e858 = 0x5c75;
	bss_3e860 = 0x21b0;
	bss_3e85c = 0x11;
	local_1028 = trap_Cvar_VariableValue(0x5c6a);
	if (local_1028 == 0x0) goto jmp_6a8e;
	local_102c = trap_Cvar_VariableValue(0x5c5f);
	if (local_102c == 0x0) goto jmp_6a8e;
	local_1030 = trap_Cvar_VariableValue(0x5c54);
	if (local_1030 != 0x40000000) goto jmp_6a99;
jmp_6a8e:
	local_1034 = 0x3e848;
	*(int *)local_1034 = (*(int *)local_1034 | 0x2000);
jmp_6a99:
	local_14 = (local_14 + 0x1c);
	bss_3e864 = 0x9;
	bss_3e890 = 0x108;
	bss_3e870 = 0x140;
	bss_3e874 = local_14;
	bss_3e86c = 0xc;
	bss_3e894 = 0x69a7;
	bss_3e8a0 = 0x5c48;
	bss_3e8a8 = 0x21b0;
	bss_3e8a4 = 0x11;
	local_1034 = trap_Cvar_VariableValue(0x5c6a);
	if (local_1034 == 0x0) goto jmp_6ad9;
	local_1038 = trap_Cvar_VariableValue(0x5c5f);
	if (local_1038 == 0x0) goto jmp_6ad9;
	local_103c = trap_Cvar_VariableValue(0x5c54);
	if (local_103c != 0x40000000) goto jmp_6ae4;
jmp_6ad9:
	local_1040 = 0x3e890;
	*(int *)local_1040 = (*(int *)local_1040 | 0x2000);
jmp_6ae4:
	local_14 = (local_14 + 0x1c);
	bss_3e8ac = 0x9;
	bss_3e8d8 = 0x108;
	bss_3e8b8 = 0x140;
	bss_3e8bc = local_14;
	bss_3e8b4 = 0x13;
	bss_3e8dc = 0x69a7;
	bss_3e8e8 = 0x5c3c;
	bss_3e8f0 = 0x21b0;
	bss_3e8ec = 0x11;
	local_1040 = trap_Cvar_VariableValue(0x5c54);
	if (local_1040 >= 0x40400000) goto jmp_6b1d;
	local_1044 = 0x3e8d8;
	*(int *)local_1044 = (*(int *)local_1044 | 0x2000);
	goto jmp_6b50;
jmp_6b1d:
	trap_GetClientState(local_18);
	trap_GetConfigString((*(int *)local_20 + 0x220), local_c24, 0x400);
	local_1044 = Info_ValueForKey(local_c24, 0x5c3a);
	local_1048 = atoi(local_1044);
	local_1024 = local_1048;
	if (local_1024 != 0x3) goto jmp_6b50;
	local_104c = 0x3e8d8;
	*(int *)local_104c = (*(int *)local_104c | 0x2000);
jmp_6b50:
	local_14 = (local_14 + 0x1c);
	bss_3e6fc = 0x9;
	bss_3e728 = 0x108;
	bss_3e708 = 0x140;
	bss_3e70c = local_14;
	bss_3e704 = 0xd;
	bss_3e72c = 0x69a7;
	bss_3e738 = 0x5c34;
	bss_3e740 = 0x21b0;
	bss_3e73c = 0x11;
	local_14 = (local_14 + 0x1c);
	bss_3e744 = 0x9;
	bss_3e770 = 0x108;
	bss_3e750 = 0x140;
	bss_3e754 = local_14;
	bss_3e74c = 0xe;
	bss_3e774 = 0x69a7;
	bss_3e780 = 0x5c28;
	bss_3e788 = 0x21b0;
	bss_3e784 = 0x11;
	local_14 = (local_14 + 0x1c);
	bss_3e7d4 = 0x9;
	bss_3e800 = 0x108;
	bss_3e7e0 = 0x140;
	bss_3e7e4 = local_14;
	bss_3e7dc = 0x10;
	bss_3e804 = 0x69a7;
	bss_3e810 = 0x5c1a;
	bss_3e818 = 0x21b0;
	bss_3e814 = 0x11;
	local_1044 = trap_Cvar_VariableValue(0x5c6a);
	if (local_1044 != 0x0) goto jmp_6bcb;
	local_1048 = 0x3e800;
	*(int *)local_1048 = (*(int *)local_1048 | 0x2000);
jmp_6bcb:
	local_14 = (local_14 + 0x1c);
	bss_3e93c = 0x9;
	bss_3e968 = 0x108;
	bss_3e948 = 0x140;
	bss_3e94c = local_14;
	bss_3e944 = 0x12;
	bss_3e96c = 0x69a7;
	bss_3e978 = 0x5c0e;
	bss_3e980 = 0x21b0;
	bss_3e97c = 0x11;
	local_14 = (local_14 + 0x1c);
	bss_3e78c = 0x9;
	bss_3e7b8 = 0x108;
	bss_3e798 = 0x140;
	bss_3e79c = local_14;
	bss_3e794 = 0xf;
	bss_3e7bc = 0x69a7;
	bss_3e7c8 = 0x5c02;
	bss_3e7d0 = 0x21b0;
	bss_3e7cc = 0x11;
	local_14 = (local_14 + 0x1c);
	bss_3e8f4 = 0x9;
	bss_3e920 = 0x108;
	bss_3e900 = 0x140;
	bss_3e904 = local_14;
	bss_3e8fc = 0x11;
	bss_3e924 = 0x69a7;
	bss_3e930 = 0x5bf8;
	bss_3e938 = 0x21b0;
	bss_3e934 = 0x11;
	Menu_AddItem(0x3e53c, 0x3e65c);
	Menu_AddItem(0x3e53c, 0x3e6b4);
	Menu_AddItem(0x3e53c, 0x3e81c);
	Menu_AddItem(0x3e53c, 0x3e864);
	Menu_AddItem(0x3e53c, 0x3e8ac);
	Menu_AddItem(0x3e53c, 0x3e6fc);
	Menu_AddItem(0x3e53c, 0x3e744);
	Menu_AddItem(0x3e53c, 0x3e7d4);
	Menu_AddItem(0x3e53c, 0x3e93c);
	Menu_AddItem(0x3e53c, 0x3e78c);
	Menu_AddItem(0x3e53c, 0x3e8f4);
}

/*
=================
InGame_Cache

Address: 0x6c80
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: InGame_MenuInit, UI_Cache_f
=================
*/
void InGame_Cache(void) {

	trap_R_RegisterShaderNoMip(0x5c84);
}

/*
=================
UI_InGameMenu

Address: 0x6c88
Stack Size: 0xc
Calls: UI_PushMenu, InGame_MenuInit
Called by: UI_SetActiveMenu
=================
*/
void UI_InGameMenu(void) {

	bss_db64 = 0x0;
	bss_db5c = 0x13f;
	bss_db60 = 0x50;
	InGame_MenuInit();
	UI_PushMenu(0x3e53c);
}

/*
=================
LoadConfig_MenuEvent

Address: 0x6c9c
Stack Size: 0x1c
Calls: trap_Cmd_ExecuteText, ScrollList_Key, UI_PopMenu, va
=================
*/
void LoadConfig_MenuEvent(int arg_0, int arg_1) {
	char	local_10[8];
	int		local_18;

	if (arg_1 == 0x3) goto jmp_6ca3;
	goto jmp_6ceb;
jmp_6ca3:
	*(int *)local_10 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_10 < 0xa) goto jmp_6ceb;
	if (*(int *)local_10 > 0xe) goto jmp_6ceb;
	goto *(int *)((*(int *)local_10 << 0x2) + 0x1bec);
	local_18 = va(0x5da6, *(int *)((bss_3ebdc << 0x2) + bss_3ebe8));
	trap_Cmd_ExecuteText(0x2, local_18);
	UI_PopMenu();
	goto jmp_6ceb;
	UI_PopMenu();
	goto jmp_6ceb;
	ScrollList_Key(0x3eb9c, 0x86);
	goto jmp_6ceb;
	ScrollList_Key(0x3eb9c, 0x87);
jmp_6ceb:
}

/*
=================
LoadConfig_MenuInit

Address: 0x6ced
Stack Size: 0x30
Calls: trap_FS_GetFileList, memset, Menu_AddItem, Q_strupr, Q_stricmp, strlen, strcpy, UI_LoadConfig_Cache
Called by: UI_LoadConfigMenu
=================
*/
void LoadConfig_MenuInit(void) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	UI_LoadConfig_Cache();
	memset(0x3e984, 0x0, 0xe30);
	bss_3ea98 = 0x1;
	bss_3ea9c = 0x1;
	bss_3eaa4 = 0xa;
	bss_3eab0 = 0x140;
	bss_3eab4 = 0x10;
	bss_3eae0 = 0x5d9a;
	bss_3eae8 = 0x2160;
	bss_3eae4 = 0x1;
	bss_3eaec = 0x6;
	bss_3eaf0 = 0x5d88;
	bss_3eb18 = 0x4000;
	bss_3eaf8 = 0x0;
	bss_3eafc = 0x4e;
	bss_3eb38 = 0x100;
	bss_3eb3c = 0x149;
	bss_3eb44 = 0x6;
	bss_3eb48 = 0x5d76;
	bss_3eb70 = 0x4000;
	bss_3eb50 = 0x178;
	bss_3eb54 = 0x4c;
	bss_3eb90 = 0x100;
	bss_3eb94 = 0x14e;
	bss_3ebfc = 0x6;
	bss_3ec00 = 0x5d5f;
	bss_3ec28 = 0x4000;
	bss_3ec08 = 0x100;
	bss_3ec0c = 0x190;
	bss_3ec48 = 0x80;
	bss_3ec4c = 0x30;
	bss_3ec54 = 0x6;
	bss_3ec80 = 0x904;
	bss_3ec60 = 0x100;
	bss_3ec64 = 0x190;
	bss_3ec5c = 0xd;
	bss_3ec84 = 0x6c9c;
	bss_3eca0 = 0x40;
	bss_3eca4 = 0x30;
	bss_3ec90 = 0x5d45;
	bss_3ecac = 0x6;
	bss_3ecd8 = 0x904;
	bss_3ecb8 = 0x140;
	bss_3ecbc = 0x190;
	bss_3ecb4 = 0xe;
	bss_3ecdc = 0x6c9c;
	bss_3ecf8 = 0x40;
	bss_3ecfc = 0x30;
	bss_3ece8 = 0x5d2a;
	bss_3ed04 = 0x6;
	bss_3ed08 = 0x5d1a;
	bss_3ed30 = 0x104;
	bss_3ed0c = 0xa;
	bss_3ed34 = 0x6c9c;
	bss_3ed10 = 0x0;
	bss_3ed14 = 0x1a0;
	bss_3ed50 = 0x80;
	bss_3ed54 = 0x40;
	bss_3ed40 = 0x5d0a;
	bss_3ed5c = 0x6;
	bss_3ed60 = 0x5cfa;
	bss_3ed88 = 0x110;
	bss_3ed64 = 0xb;
	bss_3ed8c = 0x6c9c;
	bss_3ed68 = 0x280;
	bss_3ed6c = 0x1a0;
	bss_3eda8 = 0x80;
	bss_3edac = 0x40;
	bss_3ed98 = 0x5cea;
	bss_3eb9c = 0x8;
	bss_3ebc8 = 0x100;
	bss_3ebcc = 0x6c9c;
	bss_3eba4 = 0xc;
	bss_3eba8 = 0x76;
	bss_3ebac = 0x82;
	bss_3ebec = 0x10;
	bss_3ebf0 = 0xe;
	local_24 = trap_FS_GetFileList(0x5ce9, 0x5ce5, 0x3edb4, 0x800);
	bss_3ebe0 = local_24;
	bss_3ebe8 = 0x3f5b4;
	bss_3ebf4 = 0x3;
	if (bss_3ebe0 != 0x0) goto jmp_6e0c;
	strcpy(0x3edb4, 0x5cd5);
	bss_3ebe0 = 0x1;
	local_28 = 0x3ed88;
	*(int *)local_28 = (*(int *)local_28 | 0x5000);
	goto jmp_6e13;
jmp_6e0c:
	if (bss_3ebe0 <= 0x80) goto jmp_6e13;
	bss_3ebe0 = 0x80;
jmp_6e13:
	local_18 = 0x3edb4;
	local_20 = 0x0;
	goto jmp_6e60;
jmp_6e1b:
	*(int *)((local_20 << 0x2) + bss_3ebe8) = local_18;
	local_28 = strlen(local_18);
	local_1c = local_28;
	local_2c = Q_stricmp(((local_1c + local_18) + 0xfffffffc), 0x5cd0);
	if (local_2c != 0x0) goto jmp_6e4b;
	*(char *)((local_1c - 0x4) + local_18) = 0x0;
jmp_6e4b:
	Q_strupr(local_18);
	local_18 = ((local_1c + 0x1) + local_18);
	local_20 = (local_20 + 0x1);
jmp_6e60:
	if (local_20 < bss_3ebe0) goto jmp_6e1b;
	Menu_AddItem(0x3e984, 0x3eaa4);
	Menu_AddItem(0x3e984, 0x3eaec);
	Menu_AddItem(0x3e984, 0x3eb44);
	Menu_AddItem(0x3e984, 0x3eb9c);
	Menu_AddItem(0x3e984, 0x3ebfc);
	Menu_AddItem(0x3e984, 0x3ec54);
	Menu_AddItem(0x3e984, 0x3ecac);
	Menu_AddItem(0x3e984, 0x3ed04);
	Menu_AddItem(0x3e984, 0x3ed5c);
}

/*
=================
UI_LoadConfig_Cache

Address: 0x6ea6
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: LoadConfig_MenuInit
=================
*/
void UI_LoadConfig_Cache(void) {

	trap_R_RegisterShaderNoMip(0x5d1a);
	trap_R_RegisterShaderNoMip(0x5d0a);
	trap_R_RegisterShaderNoMip(0x5cfa);
	trap_R_RegisterShaderNoMip(0x5cea);
	trap_R_RegisterShaderNoMip(0x5d88);
	trap_R_RegisterShaderNoMip(0x5d76);
	trap_R_RegisterShaderNoMip(0x5d5f);
	trap_R_RegisterShaderNoMip(0x5d45);
	trap_R_RegisterShaderNoMip(0x5d2a);
}

/*
=================
UI_LoadConfigMenu

Address: 0x6ed6
Stack Size: 0xc
Calls: UI_PushMenu, LoadConfig_MenuInit
=================
*/
void UI_LoadConfigMenu(void) {

	LoadConfig_MenuInit();
	UI_PushMenu(0x3e984);
}

/*
=================
MainMenu_ExitAction

Address: 0x6ee1
Stack Size: 0x8
Calls: UI_CreditMenu, UI_PopMenu
=================
*/
void MainMenu_ExitAction(int arg_0) {

	if (arg_0 != 0x0) goto jmp_6ee8;
	goto jmp_6eee;
jmp_6ee8:
	UI_PopMenu();
	UI_CreditMenu();
jmp_6eee:
}

/*
=================
Main_MenuEvent

Address: 0x6ef0
Stack Size: 0x1c
Calls: trap_Cmd_ExecuteText, trap_Cvar_Set, UI_ConfirmMenu, UI_ModsMenu, UI_CinematicsMenu, UI_DemosMenu, UI_SetupMenu, UI_ArenaServersMenu, UI_SPLevelMenu
=================
*/
void Main_MenuEvent(int arg_0, int arg_1) {
	char	local_14[8];

	if (arg_1 == 0x3) goto jmp_6ef7;
	goto jmp_6f45;
jmp_6ef7:
	*(int *)local_14 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_14 < 0xa) goto jmp_6f45;
	if (*(int *)local_14 > 0x11) goto jmp_6f45;
	goto *(int *)((*(int *)local_14 << 0x2) + 0x1c00);
	UI_SPLevelMenu();
	goto jmp_6f45;
	UI_ArenaServersMenu();
	goto jmp_6f45;
	UI_SetupMenu();
	goto jmp_6f45;
	UI_DemosMenu();
	goto jmp_6f45;
	UI_CinematicsMenu();
	goto jmp_6f45;
	UI_ModsMenu();
	goto jmp_6f45;
	trap_Cvar_Set(0x5ed8, 0x5ecc);
	trap_Cmd_ExecuteText(0x2, 0x5ebf);
	goto jmp_6f45;
	UI_ConfirmMenu(0x5eb4, 0x0, 0x6ee1);
jmp_6f45:
}

/*
=================
MainMenu_Cache

Address: 0x6f47
Stack Size: 0x10
Calls: trap_R_RegisterModel
Called by: UI_MainMenu, UI_Cache_f
=================
*/
void MainMenu_Cache(void) {
	int		local_c;

	local_c = trap_R_RegisterModel(0x5e8f);
	bss_40c34 = local_c;
}

/*
=================
ErrorMessage_Key

Address: 0x6f54
Stack Size: 0x10
Calls: trap_Cvar_Set, UI_MainMenu
=================
*/
int ErrorMessage_Key(void) {

	trap_Cvar_Set(0x5e7e, 0x5e7d);
	UI_MainMenu();
	return menu_null_sound;
}

/*
=================
Main_MenuDraw

Address: 0x6f64
Stack Size: 0x268
Calls: trap_R_RenderScene, trap_R_AddRefEntityToScene, sin, trap_R_ClearScene, memset, UI_DrawString, UI_DrawProportionalString, Menu_Draw, UI_DrawProportionalString_AutoWrapped, strlen, AnglesToAxis, UI_AdjustFrom640, AxisClear
=================
*/
void Main_MenuDraw(void) {
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[16];
	char	local_48[36];
	int		local_6c;
	char	local_70[292];
	int		local_194;
	int		local_198;
	int		local_19c;
	char	local_1a0[16];
	char	local_1b0[40];
	char	local_1d8[16];
	char	local_1e8[56];
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
	char	local_24c[16];
	int		local_25c;
	int		local_260;
	int		local_264;

	block_copy(global_1c48, local_24c, 0x10);
	memset(&local_24, 0x0, 0x170);
	*(int *)local_70 = 0x1;
	AxisClear(local_48);
	local_25c = 0x0;
	local_23c = local_25c;
	local_240 = local_25c;
	local_244 = 0x44200000;
	local_248 = 0x42f00000;
	UI_AdjustFrom640(&local_23c, &local_240, &local_244, &local_248);
	local_24 = (int)local_23c;
	local_28 = (int)local_240;
	local_2c = (int)local_244;
	local_30 = (int)local_248;
	local_22c = 0x0;
	local_34 = (local_22c + 0x42700000);
	*(int *)local_38 = (local_22c + 0x419d8000);
	local_6c = bss_db58;
	local_220 = 0x43960000;
	local_224 = 0x0;
	local_228 = 0xc2000000;
	trap_R_ClearScene();
	memset(&local_194, 0x0, 0x8c);
	local_260 = sin(((float)bss_db58 / 0x459c4000));
	local_22c = (0x40a00000 * local_260);
	local_230 = 0x0;
	local_234 = (local_22c + 0x43340000);
	local_238 = 0x0;
	AnglesToAxis(&local_230, local_1b0);
	local_19c = bss_40c34;
	block_copy(&local_220, local_1d8, 0xc);
	block_copy(&local_220, local_1a0, 0xc);
	local_198 = 0xc0;
	block_copy(local_1d8, local_1e8, 0xc);
	trap_R_AddRefEntityToScene(&local_194);
	trap_R_RenderScene(&local_24);
	local_264 = strlen(0x3f8d4);
	if (local_264 == 0x0) goto jmp_702b;
	UI_DrawProportionalString_AutoWrapped(0x140, 0xc0, 0x258, 0x14, 0x3f8d4, 0x811, 0x2130);
	goto jmp_7030;
jmp_702b:
	Menu_Draw(0x408d4);
jmp_7030:
	if (bss_10808 == 0x0) goto jmp_7050;
	UI_DrawProportionalString(0x140, 0x174, 0x5e54, 0x11, local_24c);
	UI_DrawString(0x140, 0x190, 0x5e0f, 0x11, local_24c);
	goto jmp_705d;
jmp_7050:
	UI_DrawString(0x140, 0x1c2, 0x5e0f, 0x11, local_24c);
jmp_705d:
}

/*
=================
UI_TeamArenaExists

Address: 0x705f
Stack Size: 0x840
Calls: trap_FS_GetFileList, Q_stricmp, strlen
Called by: UI_MainMenu
=================
*/
int UI_TeamArenaExists(void) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[2048];
	int		local_82c;
	char	local_830[8];
	int		local_838;
	int		local_83c;

	local_82c = trap_FS_GetFileList(0x5e06, 0x5e7d, local_2c, 0x800);
	local_28 = local_82c;
	local_18 = local_2c;
	local_20 = 0x0;
	goto jmp_70b6;
jmp_7078:
	*(int *)local_830 = strlen(local_18);
	local_1c = (*(int *)local_830 + 0x1);
	local_24 = (local_1c + local_18);
	local_838 = Q_stricmp(local_18, 0x5ecc);
	if (local_838 != 0x0) goto jmp_709d;
	return 0x1;
jmp_709d:
	local_83c = strlen(local_24);
	local_18 = (((local_1c + local_83c) + 0x1) + local_18);
	local_20 = (local_20 + 0x1);
jmp_70b6:
	if (local_20 < local_28) goto jmp_7078;
	return 0x0;
}

/*
=================
UI_MainMenu

Address: 0x70bf
Stack Size: 0x3c
Calls: trap_Key_SetCatcher, trap_Cvar_VariableStringBuffer, memset, trap_VerifyCDKey, trap_GetCDKey, trap_Cvar_Set, Menu_AddItem, UI_TeamArenaExists, UI_PushMenu, strlen, MainMenu_Cache, UI_CDKeyMenu
Called by: ErrorMessage_Key, UI_SetActiveMenu
=================
*/
void UI_MainMenu(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[16];
	int		local_38;

	local_1c = 0x0;
	local_18 = 0x801;
	trap_Cvar_Set(0x5df8, 0x5df6);
	local_20 = 0x0;
	if (bss_10808 != local_20) goto jmp_70f2;
	if (bss_8a50 != local_20) goto jmp_70f2;
	trap_GetCDKey(&local_24, 0x11);
	local_38 = trap_VerifyCDKey(&local_24, 0x0);
	if (local_38 != 0x0) goto jmp_70f2;
	UI_CDKeyMenu();
	goto jmp_72b9;
jmp_70f2:
	memset(0x408d4, 0x0, 0x364);
	memset(0x3f7b4, 0x0, 0x1120);
	MainMenu_Cache();
	trap_Cvar_VariableStringBuffer(0x5e7e, 0x3f8d4, 0x1000);
	local_24 = strlen(0x3f8d4);
	if (local_24 == 0x0) goto jmp_7138;
	bss_3f8c0 = 0x6f64;
	bss_3f8c4 = 0x6f54;
	bss_3f8cc = 0x1;
	bss_3f8c8 = 0x1;
	bss_3f8d0 = 0x1;
	trap_Key_SetCatcher(0x2);
	bss_db64 = 0x0;
	UI_PushMenu(0x3f7b4);
	goto jmp_72b9;
jmp_7138:
	bss_409e0 = 0x6f64;
	bss_409ec = 0x1;
	bss_409e8 = 0x1;
	bss_409f0 = 0x1;
	local_14 = 0x86;
	bss_409f4 = 0x9;
	bss_40a20 = 0x108;
	bss_40a00 = 0x140;
	bss_40a04 = local_14;
	bss_409fc = 0xa;
	bss_40a24 = 0x6ef0;
	bss_40a30 = 0x5de8;
	bss_40a38 = 0x21b0;
	bss_40a34 = local_18;
	local_14 = (local_14 + 0x22);
	bss_40a3c = 0x9;
	bss_40a68 = 0x108;
	bss_40a48 = 0x140;
	bss_40a4c = local_14;
	bss_40a44 = 0xb;
	bss_40a6c = 0x6ef0;
	bss_40a78 = 0x5ddc;
	bss_40a80 = 0x21b0;
	bss_40a7c = local_18;
	local_14 = (local_14 + 0x22);
	bss_40a84 = 0x9;
	bss_40ab0 = 0x108;
	bss_40a90 = 0x140;
	bss_40a94 = local_14;
	bss_40a8c = 0xc;
	bss_40ab4 = 0x6ef0;
	bss_40ac0 = 0x5dd6;
	bss_40ac8 = 0x21b0;
	bss_40ac4 = local_18;
	local_14 = (local_14 + 0x22);
	bss_40acc = 0x9;
	bss_40af8 = 0x108;
	bss_40ad8 = 0x140;
	bss_40adc = local_14;
	bss_40ad4 = 0xd;
	bss_40afc = 0x6ef0;
	bss_40b08 = 0x5dd0;
	bss_40b10 = 0x21b0;
	bss_40b0c = local_18;
	local_14 = (local_14 + 0x22);
	bss_40b14 = 0x9;
	bss_40b40 = 0x108;
	bss_40b20 = 0x140;
	bss_40b24 = local_14;
	bss_40b1c = 0xe;
	bss_40b44 = 0x6ef0;
	bss_40b50 = 0x5dc5;
	bss_40b58 = 0x21b0;
	bss_40b54 = local_18;
	if (bss_10808 != 0x0) goto jmp_7222;
	*(int *)local_28 = UI_TeamArenaExists();
	if (*(int *)local_28 == 0x0) goto jmp_7222;
	local_1c = 0x1;
	local_14 = (local_14 + 0x22);
	bss_40b5c = 0x9;
	bss_40b88 = 0x108;
	bss_40b68 = 0x140;
	bss_40b6c = local_14;
	bss_40b64 = 0xf;
	bss_40b8c = 0x6ef0;
	bss_40b98 = 0x5dba;
	bss_40ba0 = 0x21b0;
	bss_40b9c = local_18;
jmp_7222:
	if (bss_10808 != 0x0) goto jmp_7249;
	local_14 = (local_14 + 0x22);
	bss_40ba4 = 0x9;
	bss_40bd0 = 0x108;
	bss_40bb0 = 0x140;
	bss_40bb4 = local_14;
	bss_40bac = 0x10;
	bss_40bd4 = 0x6ef0;
	bss_40be0 = 0x5db5;
	bss_40be8 = 0x21b0;
	bss_40be4 = local_18;
jmp_7249:
	local_14 = (local_14 + 0x22);
	bss_40bec = 0x9;
	bss_40c18 = 0x108;
	bss_40bf8 = 0x140;
	bss_40bfc = local_14;
	bss_40bf4 = 0x11;
	bss_40c1c = 0x6ef0;
	bss_40c28 = 0x5db0;
	bss_40c30 = 0x21b0;
	bss_40c2c = local_18;
	Menu_AddItem(0x408d4, 0x409f4);
	Menu_AddItem(0x408d4, 0x40a3c);
	Menu_AddItem(0x408d4, 0x40a84);
	Menu_AddItem(0x408d4, 0x40acc);
	Menu_AddItem(0x408d4, 0x40b14);
	if (local_1c == 0x0) goto jmp_729a;
	Menu_AddItem(0x408d4, 0x40b5c);
jmp_729a:
	if (bss_10808 != 0x0) goto jmp_72a5;
	Menu_AddItem(0x408d4, 0x40ba4);
jmp_72a5:
	Menu_AddItem(0x408d4, 0x40bec);
	trap_Key_SetCatcher(0x2);
	bss_db64 = 0x0;
	UI_PushMenu(0x408d4);
jmp_72b9:
}

/*
=================
MField_Draw

Address: 0x72bb
Stack Size: 0x440
Calls: trap_Key_GetOverstrikeMode, memcpy, trap_Error, UI_DrawChar, UI_DrawString, strlen
Called by: UI_SaveConfigMenu_SavenameDraw, MenuField_Draw
=================
*/
void MField_Draw(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4) {
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[1024];
	int		local_428;
	char	local_42c[8];
	int		local_434;
	int		local_438;
	int		local_43c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_3 = arg_3;
	local_1c = *(int *)(arg_0 + 0x8);
	local_434 = strlen((arg_0 + 0xc));
	local_20 = (local_434 + 0x1);
	if (local_20 > local_1c) goto jmp_72e8;
	local_24 = 0x0;
	goto jmp_7311;
jmp_72e8:
	if ((*(int *)(arg_0 + 0x4) + local_1c) <= local_20) goto jmp_730a;
	*(int *)(arg_0 + 0x4) = (local_20 - local_1c);
	if (*(int *)(arg_0 + 0x4) >= 0x0) goto jmp_730a;
	*(int *)(arg_0 + 0x4) = 0x0;
jmp_730a:
	local_24 = *(int *)(arg_0 + 0x4);
jmp_7311:
	if ((local_24 + local_1c) <= local_20) goto jmp_7320;
	local_1c = (local_20 - local_24);
jmp_7320:
	if (local_1c < 0x400) goto jmp_7329;
	trap_Error(0x5ee0);
jmp_7329:
	memcpy(local_28, (local_24 + (arg_0 + 0xc)), local_1c);
	*(char *)(local_1c + local_28) = 0x0;
	UI_DrawString(arg_1, arg_2, local_28, arg_3, arg_4);
	if ((arg_3 & 0x4000) != 0x0) goto jmp_7358;
	goto jmp_73e3;
jmp_7358:
	local_438 = trap_Key_GetOverstrikeMode();
	if (local_438 == 0x0) goto jmp_7365;
	*(int *)local_42c = 0xb;
	goto jmp_7368;
jmp_7365:
	*(int *)local_42c = 0xa;
jmp_7368:
	arg_3 = (arg_3 & 0xffffbfff);
	arg_3 = (arg_3 | 0x1000);
	if ((arg_3 & 0x10) == 0x0) goto jmp_737f;
	local_428 = 0x8;
	goto jmp_738d;
jmp_737f:
	if ((arg_3 & 0x40) == 0x0) goto jmp_738a;
	local_428 = 0x20;
	goto jmp_738d;
jmp_738a:
	local_428 = 0x10;
jmp_738d:
	if ((arg_3 & 0x1) == 0x0) goto jmp_73ab;
	local_43c = strlen(local_28);
	local_20 = local_43c;
	arg_1 = (arg_1 - ((local_20 * local_428) / 0x2));
	goto jmp_73c5;
jmp_73ab:
	if ((arg_3 & 0x2) == 0x0) goto jmp_73c5;
	local_43c = strlen(local_28);
	local_20 = local_43c;
	arg_1 = (arg_1 - (local_20 * local_428));
jmp_73c5:
	UI_DrawChar((arg_1 + ((*(int *)arg_0 - local_24) * local_428)), arg_2, *(int *)local_42c, (arg_3 & 0xfffffffc), arg_4);
jmp_73e3:
}

/*
=================
MField_Paste

Address: 0x73e5
Stack Size: 0x5c
Calls: trap_GetClipboardData, MField_CharEvent, strlen
Called by: MField_CharEvent, MField_KeyDownEvent
=================
*/
void MField_Paste(int arg_0) {
	int		local_10;
	char	local_14[64];
	int		local_54;
	int		local_58;

	arg_0 = arg_0;
	trap_GetClipboardData(local_14, 0x40);
	local_58 = strlen(local_14);
	local_54 = local_58;
	local_10 = 0x0;
	goto jmp_7413;
jmp_7400:
	MField_CharEvent(arg_0, (char)*(char *)(local_10 + local_14));
	local_10 = (local_10 + 0x1);
jmp_7413:
	if (local_10 < local_54) goto jmp_7400;
}

/*
=================
MField_KeyDownEvent

Address: 0x741a
Stack Size: 0x54
Calls: trap_Key_SetOverstrikeMode, trap_Key_GetOverstrikeMode, trap_Key_IsDown, tolower, memmove, strlen, MField_Paste
Called by: MenuField_Key
=================
*/
void MField_KeyDownEvent(int arg_0, int arg_1) {
	char	local_14[8];
	int		local_1c;
	char	local_20[12];
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[8];
	int		local_40;
	char	local_44[8];
	int		local_4c;
	int		local_50;

	arg_0 = arg_0;
	arg_1 = arg_1;
	if (arg_1 == 0x8b) goto jmp_742b;
	if (arg_1 != 0xaa) goto jmp_743d;
jmp_742b:
	local_1c = trap_Key_IsDown(0x8a);
	if (local_1c == 0x0) goto jmp_743d;
	MField_Paste(arg_0);
	goto jmp_756c;
jmp_743d:
	*(int *)local_20 = strlen((arg_0 + 0xc));
	*(int *)local_14 = *(int *)local_20;
	if (arg_1 == 0x8c) goto jmp_7452;
	if (arg_1 != 0xab) goto jmp_7479;
jmp_7452:
	if (*(int *)arg_0 >= *(int *)local_14) goto jmp_756c;
	local_2c = *(int *)arg_0;
	local_30 = (local_2c + (arg_0 + 0xc));
	memmove(local_30, (local_30 + 0x1), (*(int *)local_14 - local_2c));
	goto jmp_756c;
jmp_7479:
	if (arg_1 == 0x87) goto jmp_7481;
	if (arg_1 != 0xa5) goto jmp_74b7;
jmp_7481:
	if (*(int *)arg_0 >= *(int *)local_14) goto jmp_748f;
	*(int *)arg_0 = (*(int *)arg_0 + 0x1);
jmp_748f:
	local_30 = *(int *)arg_0;
	if (local_30 < (*(int *)(arg_0 + 0x4) + *(int *)(arg_0 + 0x8))) goto jmp_756c;
	if (local_30 > *(int *)local_14) goto jmp_756c;
	local_34 = (arg_0 + 0x4);
	*(int *)local_34 = (*(int *)local_34 + 0x1);
	goto jmp_756c;
jmp_74b7:
	if (arg_1 == 0x86) goto jmp_74bf;
	if (arg_1 != 0xa3) goto jmp_74e5;
jmp_74bf:
	if (*(int *)arg_0 <= 0x0) goto jmp_74cc;
	*(int *)arg_0 = (*(int *)arg_0 - 0x1);
jmp_74cc:
	if (*(int *)arg_0 >= *(int *)(arg_0 + 0x4)) goto jmp_756c;
	local_34 = (arg_0 + 0x4);
	*(int *)local_34 = (*(int *)local_34 - 0x1);
	goto jmp_756c;
jmp_74e5:
	if (arg_1 == 0x8f) goto jmp_7502;
	if (arg_1 == 0xa0) goto jmp_7502;
	local_34 = tolower(arg_1);
	if (local_34 != 0x61) goto jmp_750e;
	*(int *)local_38 = trap_Key_IsDown(0x89);
	if (*(int *)local_38 == 0x0) goto jmp_750e;
jmp_7502:
	*(int *)arg_0 = 0x0;
	*(int *)(arg_0 + 0x4) = 0x0;
	goto jmp_756c;
jmp_750e:
	if (arg_1 == 0x90) goto jmp_752b;
	if (arg_1 == 0xa6) goto jmp_752b;
	local_40 = tolower(arg_1);
	if (local_40 != 0x65) goto jmp_754e;
	*(int *)local_44 = trap_Key_IsDown(0x89);
	if (*(int *)local_44 == 0x0) goto jmp_754e;
jmp_752b:
	*(int *)arg_0 = *(int *)local_14;
	*(int *)(arg_0 + 0x4) = ((*(int *)local_14 - *(int *)(arg_0 + 0x8)) + 0x1);
	if (*(int *)(arg_0 + 0x4) >= 0x0) goto jmp_756c;
	*(int *)(arg_0 + 0x4) = 0x0;
	goto jmp_756c;
jmp_754e:
	if (arg_1 == 0x8b) goto jmp_7556;
	if (arg_1 != 0xaa) goto jmp_756c;
jmp_7556:
	local_50 = trap_Key_GetOverstrikeMode();
	if (local_50 != 0x0) goto jmp_7563;
	local_4c = 0x1;
	goto jmp_7566;
jmp_7563:
	local_4c = 0x0;
jmp_7566:
	trap_Key_SetOverstrikeMode(local_4c);
jmp_756c:
}

/*
=================
MField_CharEvent

Address: 0x756e
Stack Size: 0x38
Calls: trap_Key_GetOverstrikeMode, memmove, strlen, MField_Clear, MField_Paste
Called by: MenuField_Key, MField_Paste
=================
*/
void MField_CharEvent(int arg_0, int arg_1) {
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
	if (arg_1 != 0x16) goto jmp_7583;
	MField_Paste(arg_0);
	goto jmp_76d3;
jmp_7583:
	if (arg_1 != 0x3) goto jmp_758f;
	MField_Clear(arg_0);
	goto jmp_76d3;
jmp_758f:
	local_18 = strlen((arg_0 + 0xc));
	local_14 = local_18;
	if (arg_1 != 0x8) goto jmp_75e7;
	if (*(int *)arg_0 <= 0x0) goto jmp_76d3;
	local_20 = *(int *)arg_0;
	local_24 = (local_20 + (arg_0 + 0xc));
	memmove((local_24 + 0xffffffff), local_24, ((local_14 + 0x1) - local_20));
	*(int *)arg_0 = (*(int *)arg_0 - 0x1);
	if (*(int *)arg_0 >= *(int *)(arg_0 + 0x4)) goto jmp_76d3;
	local_30 = (arg_0 + 0x4);
	*(int *)local_30 = (*(int *)local_30 - 0x1);
	goto jmp_76d3;
jmp_75e7:
	if (arg_1 != 0x1) goto jmp_75f7;
	*(int *)arg_0 = 0x0;
	*(int *)(arg_0 + 0x4) = 0x0;
	goto jmp_76d3;
jmp_75f7:
	if (arg_1 != 0x5) goto jmp_761f;
	*(int *)arg_0 = local_14;
	*(int *)(arg_0 + 0x4) = ((*(int *)arg_0 - *(int *)(arg_0 + 0x8)) + 0x1);
	if (*(int *)(arg_0 + 0x4) >= 0x0) goto jmp_76d3;
	*(int *)(arg_0 + 0x4) = 0x0;
	goto jmp_76d3;
jmp_761f:
	if (arg_1 >= 0x20) goto jmp_7625;
	goto jmp_76d3;
jmp_7625:
	local_1c = trap_Key_GetOverstrikeMode();
	if (local_1c == 0x0) goto jmp_7648;
	local_24 = *(int *)arg_0;
	if (local_24 == 0xff) goto jmp_7646;
	local_28 = *(int *)(arg_0 + 0x10c);
	if (local_28 == 0x0) goto jmp_7684;
	if (local_24 < local_28) goto jmp_7684;
jmp_7646:
	goto jmp_76d3;
jmp_7648:
	if (local_14 == 0xff) goto jmp_765c;
	local_24 = *(int *)(arg_0 + 0x10c);
	if (local_24 == 0x0) goto jmp_765e;
	if (local_14 < local_24) goto jmp_765e;
jmp_765c:
	goto jmp_76d3;
jmp_765e:
	local_2c = *(int *)arg_0;
	local_30 = (local_2c + (arg_0 + 0xc));
	local_34 = 0x1;
	memmove((local_30 + local_34), local_30, ((local_14 + local_34) - local_2c));
jmp_7684:
	*(char *)(*(int *)arg_0 + (arg_0 + 0xc)) = arg_1;
	local_28 = *(int *)(arg_0 + 0x10c);
	if (local_28 == 0x0) goto jmp_76a2;
	if (*(int *)arg_0 >= (local_28 - 0x1)) goto jmp_76aa;
jmp_76a2:
	*(int *)arg_0 = (*(int *)arg_0 + 0x1);
jmp_76aa:
	if (*(int *)arg_0 < *(int *)(arg_0 + 0x8)) goto jmp_76c1;
	local_34 = (arg_0 + 0x4);
	*(int *)local_34 = (*(int *)local_34 + 0x1);
jmp_76c1:
	if (*(int *)arg_0 != (local_14 + 0x1)) goto jmp_76d3;
	*(char *)(*(int *)arg_0 + (arg_0 + 0xc)) = 0x0;
jmp_76d3:
}

/*
=================
MField_Clear

Address: 0x76d5
Stack Size: 0x8
Called by: MenuField_Init, MField_CharEvent
=================
*/
void MField_Clear(int arg_0) {

	arg_0 = arg_0;
	*(char *)(arg_0 + 0xc) = 0x0;
	*(int *)arg_0 = 0x0;
	*(int *)(arg_0 + 0x4) = 0x0;
}

/*
=================
MenuField_Init

Address: 0x76ec
Stack Size: 0x2c
Calls: strlen, MField_Clear
Called by: Menu_AddItem
=================
*/
void MenuField_Init(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[20];

	arg_0 = arg_0;
	MField_Clear((arg_0 + 0x3c));
	if ((*(int *)(arg_0 + 0x2c) & 0x2) == 0x0) goto jmp_770a;
	local_c = 0x8;
	local_14 = 0x10;
	goto jmp_7715;
jmp_770a:
	*(int *)local_18 = 0x10;
	local_c = *(int *)local_18;
	local_14 = *(int *)local_18;
jmp_7715:
	if (*(int *)(arg_0 + 0x4) == 0x0) goto jmp_7731;
	*(int *)local_18 = strlen(*(int *)(arg_0 + 0x4));
	local_10 = ((*(int *)local_18 + 0x1) * local_c);
	goto jmp_7734;
jmp_7731:
	local_10 = 0x0;
jmp_7734:
	*(int *)(arg_0 + 0x14) = (*(int *)(arg_0 + 0xc) - local_10);
	*(int *)(arg_0 + 0x18) = *(int *)(arg_0 + 0x10);
	*(int *)(arg_0 + 0x1c) = ((*(int *)(arg_0 + 0xc) + local_c) + (*(int *)(arg_0 + 0x44) * local_c));
	*(int *)(arg_0 + 0x20) = (*(int *)(arg_0 + 0x10) + local_14);
}

/*
=================
MenuField_Draw

Address: 0x7770
Stack Size: 0x50
Calls: MField_Draw, UI_DrawString, UI_DrawChar, UI_FillRect, Menu_ItemAtCursor
Called by: Menu_Draw
=================
*/
void MenuField_Draw(int arg_0) {
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

	arg_0 = arg_0;
	local_20 = *(int *)(arg_0 + 0xc);
	local_24 = *(int *)(arg_0 + 0x10);
	if ((*(int *)(arg_0 + 0x2c) & 0x2) == 0x0) goto jmp_7794;
	local_2c = 0x8;
	local_1c = 0x10;
	goto jmp_779a;
jmp_7794:
	local_2c = 0x10;
	local_1c = 0x20;
jmp_779a:
	*(int *)local_3c = Menu_ItemAtCursor(*(int *)(arg_0 + 0x24));
	if (arg_0 != *(int *)local_3c) goto jmp_77b4;
	*(int *)local_30 = 0x1;
	local_1c = (local_1c | 0x4000);
	goto jmp_77b7;
jmp_77b4:
	*(int *)local_30 = 0x0;
jmp_77b7:
	if ((*(int *)(arg_0 + 0x2c) & 0x2000) == 0x0) goto jmp_77c5;
	local_28 = 0x21e0;
	goto jmp_77d1;
jmp_77c5:
	if (*(int *)local_30 == 0x0) goto jmp_77ce;
	local_28 = 0x2200;
	goto jmp_77d1;
jmp_77ce:
	local_28 = 0x21f0;
jmp_77d1:
	if (*(int *)local_30 == 0x0) goto jmp_7820;
	local_44 = *(int *)(arg_0 + 0x14);
#define next_call_arg_0 "(float)local_44"
	local_48 = *(int *)(arg_0 + 0x18);
#define next_call_arg_1 "(float)local_48"
	local_4c = 0x1;
#define next_call_arg_2 "(float)((*(int *)(arg_0 + 0x1c) - local_44) + local_4c)"
#define next_call_arg_3 "(float)((*(int *)(arg_0 + 0x20) - local_48) + local_4c)"
#define next_call_arg_4 "0x2210"
	UI_FillRect();
	UI_DrawChar(local_20, local_24, 0xd, (local_1c | 0x1001), local_28);
jmp_7820:
	if (*(int *)(arg_0 + 0x4) == 0x0) goto jmp_7841;
	UI_DrawString((local_20 - local_2c), local_24, *(int *)(arg_0 + 0x4), (local_1c | 0x2), local_28);
jmp_7841:
	MField_Draw((arg_0 + 0x3c), (local_20 + local_2c), local_24, local_1c, local_28);
}

/*
=================
MenuField_Key

Address: 0x785a
Stack Size: 0x3c
Calls: MField_KeyDownEvent, MField_CharEvent, Q_isalpha, Q_isupper, Q_islower
Called by: Menu_DefaultKey
=================
*/
int MenuField_Key(int arg_0, int arg_1) {
	char	local_10[8];
	char	local_18[8];
	char	local_20[8];
	char	local_28[8];
	int		local_30;
	int		local_34;
	int		local_38;

	*(int *)local_10 = *(int *)arg_1;
	if (*(int *)local_10 == 0x84) goto jmp_7926;
	*(int *)local_18 = 0x85;
	if (*(int *)local_10 == *(int *)local_18) goto jmp_7926;
	if (*(int *)local_10 > *(int *)local_18) goto jmp_7884;
	*(int *)local_20 = 0x9;
	if (*(int *)local_10 == *(int *)local_20) goto jmp_7926;
	if (*(int *)local_10 < *(int *)local_20) goto jmp_78b1;
	if (*(int *)local_10 == 0xd) goto jmp_78ab;
	goto jmp_78b1;
jmp_7884:
	if (*(int *)local_10 == 0xa7) goto jmp_7926;
	*(int *)local_28 = 0xa9;
	if (*(int *)local_10 == *(int *)local_28) goto jmp_78ab;
	if (*(int *)local_10 > *(int *)local_28) goto jmp_789b;
	if (*(int *)local_10 == 0xa1) goto jmp_7926;
	goto jmp_78b1;
jmp_789b:
	if (*(int *)local_10 < 0xb9) goto jmp_78b1;
	if (*(int *)local_10 > 0xbc) goto jmp_78b1;
	goto *(int *)((*(int *)local_10 << 0x2) + 0x1974);
jmp_78ab:
	*(int *)arg_1 = 0x9;
	goto jmp_7926;
jmp_78b1:
	if ((*(int *)local_10 & 0x400) == 0x0) goto jmp_791b;
	*(int *)local_10 = (*(int *)local_10 & 0xfffffbff);
	if ((*(int *)(arg_0 + 0x2c) & 0x80000) == 0x0) goto jmp_78d9;
	local_30 = Q_islower(*(int *)local_10);
	if (local_30 == 0x0) goto jmp_78d9;
	*(int *)local_10 = (*(int *)local_10 - 0x20);
	goto jmp_790e;
jmp_78d9:
	if ((*(int *)(arg_0 + 0x2c) & 0x40000) == 0x0) goto jmp_78f5;
	local_34 = Q_isupper(*(int *)local_10);
	if (local_34 == 0x0) goto jmp_78f5;
	*(int *)local_10 = (*(int *)local_10 - 0xffffffe0);
	goto jmp_790e;
jmp_78f5:
	if ((*(int *)(arg_0 + 0x2c) & 0x20) == 0x0) goto jmp_790e;
	local_38 = Q_isalpha(*(int *)local_10);
	if (local_38 == 0x0) goto jmp_790e;
	return menu_buzz_sound;
jmp_790e:
	MField_CharEvent((arg_0 + 0x3c), *(int *)local_10);
	goto jmp_7926;
jmp_791b:
	MField_KeyDownEvent((arg_0 + 0x3c), *(int *)local_10);
jmp_7926:
	return 0x0;
}

/*
=================
UI_Mods_MenuEvent

Address: 0x792a
Stack Size: 0x18
Calls: trap_Cmd_ExecuteText, trap_Cvar_Set, UI_PopMenu
=================
*/
void UI_Mods_MenuEvent(int arg_0, int arg_1) {
	char	local_10[8];

	if (arg_1 == 0x3) goto jmp_7931;
	goto jmp_795e;
jmp_7931:
	*(int *)local_10 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_10 == 0xa) goto jmp_795b;
	if (*(int *)local_10 == 0xb) goto jmp_7942;
	goto jmp_795e;
jmp_7942:
	trap_Cvar_Set(0x5f9c, *(int *)((bss_40e90 << 0x2) + 0x42068));
	trap_Cmd_ExecuteText(0x2, 0x5f8f);
	UI_PopMenu();
	goto jmp_795e;
jmp_795b:
	UI_PopMenu();
jmp_795e:
}

/*
=================
UI_Mods_ParseInfos

Address: 0x7960
Stack Size: 0x28
Calls: strlen, Q_strncpyz
Called by: UI_Mods_LoadMods
=================
*/
void UI_Mods_ParseInfos(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;

	*(int *)((bss_40e94 << 0x2) + 0x42068) = bss_41f64;
	Q_strncpyz(bss_41f64, arg_0, 0x10);
	*(int *)((bss_40e94 << 0x2) + 0x41f68) = bss_41f60;
	Q_strncpyz(bss_41f60, arg_1, 0x30);
	*(int *)((bss_40e94 << 0x2) + bss_40e9c) = bss_41f60;
	local_14 = strlen(bss_41f60);
	local_18 = 0x41f60;
	*(int *)local_18 = ((local_14 + 0x1) + *(int *)local_18);
	local_1c = strlen(bss_41f64);
	local_20 = 0x41f64;
	*(int *)local_20 = ((local_1c + 0x1) + *(int *)local_20);
	local_24 = 0x40e94;
	*(int *)local_24 = (*(int *)local_24 + 0x1);
}

/*
=================
UI_Mods_LoadMods

Address: 0x79ca
Stack Size: 0x840
Calls: trap_Print, trap_FS_GetFileList, va, UI_Mods_ParseInfos, strlen
Called by: UI_Mods_MenuInit
=================
*/
void UI_Mods_LoadMods(void) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[2048];
	int		local_82c;
	int		local_830;
	char	local_834[8];
	int		local_83c;

	bss_40e9c = 0x41f68;
	bss_41f60 = 0x40f60;
	bss_41f64 = 0x41b60;
	bss_40e94 = 0x1;
	local_82c = 0x5f7f;
	bss_41f68 = local_82c;
	*(int *)bss_40e9c = local_82c;
	bss_42068 = 0x5f7e;
	local_830 = trap_FS_GetFileList(0x5f75, 0x5f7e, local_2c, 0x800);
	local_28 = local_830;
	local_18 = local_2c;
	local_24 = 0x0;
	goto jmp_7a34;
jmp_79fe:
	*(int *)local_834 = strlen(local_18);
	local_20 = (*(int *)local_834 + 0x1);
	local_1c = (local_20 + local_18);
	UI_Mods_ParseInfos(local_18, local_1c);
	local_83c = strlen(local_1c);
	local_18 = (((local_20 + local_83c) + 0x1) + local_18);
	local_24 = (local_24 + 0x1);
jmp_7a34:
	if (local_24 < local_28) goto jmp_79fe;
	*(int *)local_834 = va(0x5f65, bss_40e94);
	trap_Print(*(int *)local_834);
	if (bss_40e94 <= 0x40) goto jmp_7a4f;
	bss_40e94 = 0x40;
jmp_7a4f:
}

/*
=================
UI_Mods_MenuInit

Address: 0x7a51
Stack Size: 0x14
Calls: memset, Menu_AddItem, UI_Mods_LoadMods, UI_ModsMenu_Cache
Called by: UI_ModsMenu
=================
*/
void UI_Mods_MenuInit(void) {

	UI_ModsMenu_Cache();
	memset(0x40c38, 0x0, 0x1530);
	bss_40d4c = 0x1;
	bss_40d50 = 0x1;
	bss_40d58 = 0xa;
	bss_40d64 = 0x140;
	bss_40d68 = 0x10;
	bss_40d94 = 0x5f60;
	bss_40d9c = 0x2160;
	bss_40d98 = 0x1;
	bss_40da0 = 0x6;
	bss_40da4 = 0x5f4e;
	bss_40dcc = 0x4000;
	bss_40dac = 0x0;
	bss_40db0 = 0x4e;
	bss_40dec = 0x100;
	bss_40df0 = 0x149;
	bss_40df8 = 0x6;
	bss_40dfc = 0x5f3c;
	bss_40e24 = 0x4000;
	bss_40e04 = 0x178;
	bss_40e08 = 0x4c;
	bss_40e44 = 0x100;
	bss_40e48 = 0x14e;
	bss_40eb0 = 0x6;
	bss_40eb4 = 0x5f2c;
	bss_40edc = 0x104;
	bss_40eb8 = 0xa;
	bss_40ee0 = 0x792a;
	bss_40ebc = 0x0;
	bss_40ec0 = 0x1a0;
	bss_40efc = 0x80;
	bss_40f00 = 0x40;
	bss_40eec = 0x5f1c;
	bss_40f08 = 0x6;
	bss_40f0c = 0x5f0c;
	bss_40f34 = 0x110;
	bss_40f10 = 0xb;
	bss_40f38 = 0x792a;
	bss_40f14 = 0x280;
	bss_40f18 = 0x1a0;
	bss_40f54 = 0x80;
	bss_40f58 = 0x40;
	bss_40f44 = 0x5efc;
	bss_40e50 = 0x8;
	bss_40e7c = 0x108;
	bss_40e80 = 0x792a;
	bss_40e58 = 0xc;
	bss_40e5c = 0x140;
	bss_40e60 = 0x82;
	bss_40ea0 = 0x30;
	bss_40ea4 = 0xe;
	UI_Mods_LoadMods();
	Menu_AddItem(0x40c38, 0x40d58);
	Menu_AddItem(0x40c38, 0x40da0);
	Menu_AddItem(0x40c38, 0x40df8);
	Menu_AddItem(0x40c38, 0x40e50);
	Menu_AddItem(0x40c38, 0x40eb0);
	Menu_AddItem(0x40c38, 0x40f08);
}

/*
=================
UI_ModsMenu_Cache

Address: 0x7b23
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_Mods_MenuInit, UI_Cache_f
=================
*/
void UI_ModsMenu_Cache(void) {

	trap_R_RegisterShaderNoMip(0x5f2c);
	trap_R_RegisterShaderNoMip(0x5f1c);
	trap_R_RegisterShaderNoMip(0x5f0c);
	trap_R_RegisterShaderNoMip(0x5efc);
	trap_R_RegisterShaderNoMip(0x5f4e);
	trap_R_RegisterShaderNoMip(0x5f3c);
}

/*
=================
UI_ModsMenu

Address: 0x7b44
Stack Size: 0xc
Calls: UI_PushMenu, UI_Mods_MenuInit
Called by: Main_MenuEvent
=================
*/
void UI_ModsMenu(void) {

	UI_Mods_MenuInit();
	UI_PushMenu(0x40c38);
}

/*
=================
UI_NetworkOptionsMenu_Event

Address: 0x7b4f
Stack Size: 0x18
Calls: trap_Cvar_SetValue, UI_SoundOptionsMenu, UI_DisplayOptionsMenu, UI_GraphicsOptionsMenu, UI_PopMenu
=================
*/
void UI_NetworkOptionsMenu_Event(int arg_0, int arg_1) {
	char	local_10[8];

	if (arg_1 == 0x3) goto jmp_7b56;
	goto jmp_7bc9;
jmp_7b56:
	*(int *)local_10 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_10 < 0xa) goto jmp_7bc9;
	if (*(int *)local_10 > 0xf) goto jmp_7bc9;
	goto *(int *)((*(int *)local_10 << 0x2) + 0x1c58);
	UI_PopMenu();
	UI_GraphicsOptionsMenu();
	goto jmp_7bc9;
	UI_PopMenu();
	UI_DisplayOptionsMenu();
	goto jmp_7bc9;
	UI_PopMenu();
	UI_SoundOptionsMenu();
	goto jmp_7bc9;
	if (bss_424e0 != 0x0) goto jmp_7b92;
	trap_Cvar_SetValue(0x601f, 0x451c4000);
	goto jmp_7bc9;
jmp_7b92:
	if (bss_424e0 != 0x1) goto jmp_7b9f;
	trap_Cvar_SetValue(0x601f, 0x453b8000);
	goto jmp_7bc9;
jmp_7b9f:
	if (bss_424e0 != 0x2) goto jmp_7bac;
	trap_Cvar_SetValue(0x601f, 0x457a0000);
	goto jmp_7bc9;
jmp_7bac:
	if (bss_424e0 != 0x3) goto jmp_7bb9;
	trap_Cvar_SetValue(0x601f, 0x459c4000);
	goto jmp_7bc9;
jmp_7bb9:
	if (bss_424e0 != 0x4) goto jmp_7bc9;
	trap_Cvar_SetValue(0x601f, 0x46c35000);
	goto jmp_7bc9;
	UI_PopMenu();
jmp_7bc9:
}

/*
=================
UI_NetworkOptionsMenu_Init

Address: 0x7bcb
Stack Size: 0x20
Calls: trap_Cvar_VariableValue, memset, Menu_AddItem, UI_NetworkOptionsMenu_Cache
Called by: UI_NetworkOptionsMenu
=================
*/
void UI_NetworkOptionsMenu_Init(void) {
	int		local_14;
	int		local_18;
	int		local_1c;

	memset(0x42168, 0x0, 0x3f0);
	UI_NetworkOptionsMenu_Cache();
	bss_4227c = 0x1;
	bss_42280 = 0x1;
	bss_42288 = 0xa;
	bss_422b4 = 0x8;
	bss_42294 = 0x140;
	bss_42298 = 0x10;
	bss_422c4 = 0x6012;
	bss_422cc = 0x2160;
	bss_422c8 = 0x1;
	bss_422d0 = 0x6;
	bss_422d4 = 0x6000;
	bss_422fc = 0x4000;
	bss_422dc = 0x0;
	bss_422e0 = 0x4e;
	bss_4231c = 0x100;
	bss_42320 = 0x149;
	bss_42328 = 0x6;
	bss_4232c = 0x5fee;
	bss_42354 = 0x4000;
	bss_42334 = 0x178;
	bss_42338 = 0x4c;
	bss_42374 = 0x100;
	bss_42378 = 0x14e;
	bss_42380 = 0x9;
	bss_423ac = 0x110;
	bss_42388 = 0xa;
	bss_423b0 = 0x7b4f;
	bss_4238c = 0xd8;
	bss_42390 = 0xba;
	bss_423bc = 0x5fe5;
	bss_423c0 = 0x2;
	bss_423c4 = 0x21b0;
	bss_423c8 = 0x9;
	bss_423f4 = 0x110;
	bss_423d0 = 0xb;
	bss_423f8 = 0x7b4f;
	bss_423d4 = 0xd8;
	bss_423d8 = 0xd5;
	bss_42404 = 0x5fdd;
	bss_42408 = 0x2;
	bss_4240c = 0x21b0;
	bss_42410 = 0x9;
	bss_4243c = 0x110;
	bss_42418 = 0xc;
	bss_42440 = 0x7b4f;
	bss_4241c = 0xd8;
	bss_42420 = 0xf0;
	bss_4244c = 0x5fd7;
	bss_42450 = 0x2;
	bss_42454 = 0x21b0;
	bss_42458 = 0x9;
	bss_42484 = 0x10;
	bss_42460 = 0xd;
	bss_42488 = 0x7b4f;
	bss_42464 = 0xd8;
	bss_42468 = 0x10b;
	bss_42494 = 0x5fcf;
	bss_42498 = 0x2;
	bss_4249c = 0x21b0;
	local_18 = 0xde;
	bss_424a0 = 0x3;
	bss_424a4 = 0x5fc4;
	bss_424cc = 0x102;
	bss_424d0 = 0x7b4f;
	bss_424a8 = 0xe;
	bss_424ac = 0x190;
	bss_424b0 = local_18;
	bss_424ec = 0x1c68;
	bss_42500 = 0x6;
	bss_42504 = 0x5fb4;
	bss_4252c = 0x104;
	bss_42530 = 0x7b4f;
	bss_42508 = 0xf;
	bss_4250c = 0x0;
	bss_42510 = 0x1a0;
	bss_4254c = 0x80;
	bss_42550 = 0x40;
	bss_4253c = 0x5fa4;
	Menu_AddItem(0x42168, 0x42288);
	Menu_AddItem(0x42168, 0x422d0);
	Menu_AddItem(0x42168, 0x42328);
	Menu_AddItem(0x42168, 0x42380);
	Menu_AddItem(0x42168, 0x423c8);
	Menu_AddItem(0x42168, 0x42410);
	Menu_AddItem(0x42168, 0x42458);
	Menu_AddItem(0x42168, 0x424a0);
	Menu_AddItem(0x42168, 0x42500);
	local_1c = trap_Cvar_VariableValue(0x601f);
	local_14 = (int)local_1c;
	if (local_14 > 0x9c4) goto jmp_7d16;
	bss_424e0 = 0x0;
	goto jmp_7d34;
jmp_7d16:
	if (local_14 > 0xbb8) goto jmp_7d1f;
	bss_424e0 = 0x1;
	goto jmp_7d34;
jmp_7d1f:
	if (local_14 > 0xfa0) goto jmp_7d28;
	bss_424e0 = 0x2;
	goto jmp_7d34;
jmp_7d28:
	if (local_14 > 0x1388) goto jmp_7d31;
	bss_424e0 = 0x3;
	goto jmp_7d34;
jmp_7d31:
	bss_424e0 = 0x4;
jmp_7d34:
}

/*
=================
UI_NetworkOptionsMenu_Cache

Address: 0x7d36
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_NetworkOptionsMenu_Init, UI_Cache_f
=================
*/
void UI_NetworkOptionsMenu_Cache(void) {

	trap_R_RegisterShaderNoMip(0x6000);
	trap_R_RegisterShaderNoMip(0x5fee);
	trap_R_RegisterShaderNoMip(0x5fb4);
	trap_R_RegisterShaderNoMip(0x5fa4);
}

/*
=================
UI_NetworkOptionsMenu

Address: 0x7d4d
Stack Size: 0x10
Calls: Menu_SetCursorToItem, UI_PushMenu, UI_NetworkOptionsMenu_Init
Called by: GraphicsOptions_Event, UI_SoundOptionsMenu_Event, Options_Event, UI_DisplayOptionsMenu_Event
=================
*/
void UI_NetworkOptionsMenu(void) {

	UI_NetworkOptionsMenu_Init();
	UI_PushMenu(0x42168);
	Menu_SetCursorToItem(0x42168, 0x42458);
}

/*
=================
Options_Event

Address: 0x7d5f
Stack Size: 0x10
Calls: UI_PopMenu, UI_NetworkOptionsMenu, UI_SoundOptionsMenu, UI_DisplayOptionsMenu, UI_GraphicsOptionsMenu
=================
*/
void Options_Event(int arg_0, int arg_1) {
	char	local_8[8];

	if (arg_1 == 0x3) goto jmp_7d66;
	goto jmp_7d94;
jmp_7d66:
	*(int *)local_8 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_8 < 0xa) goto jmp_7d94;
	if (*(int *)local_8 > 0xe) goto jmp_7d94;
	goto *(int *)((*(int *)local_8 << 0x2) + 0x1c70);
	UI_GraphicsOptionsMenu();
	goto jmp_7d94;
	UI_DisplayOptionsMenu();
	goto jmp_7d94;
	UI_SoundOptionsMenu();
	goto jmp_7d94;
	UI_NetworkOptionsMenu();
	goto jmp_7d94;
	UI_PopMenu();
jmp_7d94:
}

/*
=================
SystemConfig_Cache

Address: 0x7d96
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: Options_MenuInit
=================
*/
void SystemConfig_Cache(void) {

	trap_R_RegisterShaderNoMip(0x60aa);
	trap_R_RegisterShaderNoMip(0x6098);
	trap_R_RegisterShaderNoMip(0x6088);
	trap_R_RegisterShaderNoMip(0x6078);
}

/*
=================
Options_MenuInit

Address: 0x7dad
Stack Size: 0xc24
Calls: trap_GetClientState, memset, Menu_AddItem, SystemConfig_Cache
Called by: UI_SystemConfigMenu
=================
*/
void Options_MenuInit(void) {
	int		local_14;
	char	local_18[3084];

	memset(0x42558, 0x0, 0x390);
	SystemConfig_Cache();
	bss_4266c = 0x1;
	trap_GetClientState(local_18);
	if (*(int *)local_18 < 0x5) goto jmp_7dcb;
	bss_42670 = 0x0;
	goto jmp_7dce;
jmp_7dcb:
	bss_42670 = 0x1;
jmp_7dce:
	bss_42678 = 0xa;
	bss_426a4 = 0x8;
	bss_42684 = 0x140;
	bss_42688 = 0x10;
	bss_426b4 = 0x606b;
	bss_426bc = 0x2160;
	bss_426b8 = 0x1;
	bss_426c0 = 0x6;
	bss_426c4 = 0x60aa;
	bss_426ec = 0x4000;
	bss_426cc = 0x8;
	bss_426d0 = 0x4c;
	bss_4270c = 0x100;
	bss_42710 = 0x14e;
	bss_42718 = 0x6;
	bss_4271c = 0x6098;
	bss_42744 = 0x4000;
	bss_42724 = 0x178;
	bss_42728 = 0x4c;
	bss_42764 = 0x100;
	bss_42768 = 0x14e;
	local_14 = 0xa8;
	bss_42770 = 0x9;
	bss_4279c = 0x108;
	bss_427a0 = 0x7d5f;
	bss_42778 = 0xa;
	bss_4277c = 0x140;
	bss_42780 = local_14;
	bss_427ac = 0x6062;
	bss_427b4 = 0x21b0;
	bss_427b0 = 0x1;
	local_14 = (local_14 + 0x22);
	bss_427b8 = 0x9;
	bss_427e4 = 0x108;
	bss_427e8 = 0x7d5f;
	bss_427c0 = 0xb;
	bss_427c4 = 0x140;
	bss_427c8 = local_14;
	bss_427f4 = 0x605a;
	bss_427fc = 0x21b0;
	bss_427f8 = 0x1;
	local_14 = (local_14 + 0x22);
	bss_42800 = 0x9;
	bss_4282c = 0x108;
	bss_42830 = 0x7d5f;
	bss_42808 = 0xc;
	bss_4280c = 0x140;
	bss_42810 = local_14;
	bss_4283c = 0x6054;
	bss_42844 = 0x21b0;
	bss_42840 = 0x1;
	local_14 = (local_14 + 0x22);
	bss_42848 = 0x9;
	bss_42874 = 0x108;
	bss_42878 = 0x7d5f;
	bss_42850 = 0xd;
	bss_42854 = 0x140;
	bss_42858 = local_14;
	bss_42884 = 0x604c;
	bss_4288c = 0x21b0;
	bss_42888 = 0x1;
	bss_42890 = 0x6;
	bss_42894 = 0x6088;
	bss_428bc = 0x104;
	bss_428c0 = 0x7d5f;
	bss_42898 = 0xe;
	bss_4289c = 0x0;
	bss_428a0 = 0x1a0;
	bss_428dc = 0x80;
	bss_428e0 = 0x40;
	bss_428cc = 0x6078;
	Menu_AddItem(0x42558, 0x42678);
	Menu_AddItem(0x42558, 0x426c0);
	Menu_AddItem(0x42558, 0x42718);
	Menu_AddItem(0x42558, 0x42770);
	Menu_AddItem(0x42558, 0x427b8);
	Menu_AddItem(0x42558, 0x42800);
	Menu_AddItem(0x42558, 0x42848);
	Menu_AddItem(0x42558, 0x42890);
}

/*
=================
UI_SystemConfigMenu

Address: 0x7eea
Stack Size: 0xc
Calls: UI_PushMenu, Options_MenuInit
=================
*/
void UI_SystemConfigMenu(void) {

	Options_MenuInit();
	UI_PushMenu(0x42558);
}

/*
=================
PlayerModel_UpdateGrid

Address: 0x7ef5
Stack Size: 0x24
Called by: PlayerModel_MenuInit, PlayerModel_MenuKey, PlayerModel_MenuEvent
=================
*/
void PlayerModel_UpdateGrid(void) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;

	local_c = (bss_4bdb8 << 0x4);
	local_8 = 0x0;
jmp_7eff:
	if (local_c >= bss_43db4) goto jmp_7f23;
	*(int *)((0x58 * local_8) + 0x42a6c) = ((local_c << 0x7) + 0x43db8);
	local_10 = ((0x58 * local_8) + 0x43014);
	*(int *)local_10 = (*(int *)local_10 & 0xffffbfff);
	goto jmp_7f3b;
jmp_7f23:
	*(int *)((0x58 * local_8) + 0x42a6c) = 0x0;
	local_10 = ((0x58 * local_8) + 0x43014);
	*(int *)local_10 = (*(int *)local_10 | 0x4000);
jmp_7f3b:
	local_10 = ((0x58 * local_8) + 0x42a94);
	*(int *)local_10 = (*(int *)local_10 & 0xffffffbf);
	*(int *)((0x58 * local_8) + 0x42aac) = 0x0;
	local_14 = ((0x58 * local_8) + 0x43014);
	*(int *)local_14 = (*(int *)local_14 | 0x100);
	local_10 = 0x1;
	local_8 = (local_8 + local_10);
	local_c = (local_c + local_10);
	if (local_8 < 0x10) goto jmp_7eff;
	if ((bss_4be00 / 0x10) != bss_4bdb8) goto jmp_7fa5;
	local_8 = (bss_4be00 %% 0x10);
	local_14 = ((0x58 * local_8) + 0x42a94);
	*(int *)local_14 = (*(int *)local_14 | 0x40);
	local_18 = ((0x58 * local_8) + 0x43014);
	*(int *)local_18 = (*(int *)local_18 & 0xfffffeff);
jmp_7fa5:
	if (bss_4bdbc <= 0x1) goto jmp_7fe6;
	if (bss_4bdb8 <= 0x0) goto jmp_7fba;
	local_14 = 0x437ec;
	*(int *)local_14 = (*(int *)local_14 & 0xffffbfff);
	goto jmp_7fc5;
jmp_7fba:
	local_18 = 0x437ec;
	*(int *)local_18 = (*(int *)local_18 | 0x4000);
jmp_7fc5:
	if (bss_4bdb8 >= (bss_4bdbc - 0x1)) goto jmp_7fd9;
	local_1c = 0x43844;
	*(int *)local_1c = (*(int *)local_1c & 0xffffbfff);
	goto jmp_7ffc;
jmp_7fd9:
	local_20 = 0x43844;
	*(int *)local_20 = (*(int *)local_20 | 0x4000);
	goto jmp_7ffc;
jmp_7fe6:
	local_14 = 0x437ec;
	*(int *)local_14 = (*(int *)local_14 | 0x4000);
	local_18 = 0x43844;
	*(int *)local_18 = (*(int *)local_18 | 0x4000);
jmp_7ffc:
}

/*
=================
PlayerModel_UpdateModel

Address: 0x7ffe
Stack Size: 0x44
Calls: memset, UI_PlayerInfo_SetInfo, UI_PlayerInfo_SetModel
Called by: PlayerModel_MenuInit, PlayerModel_PicEvent
=================
*/
void PlayerModel_UpdateModel(void) {
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;

	memset(0x43948, 0x0, 0x46c);
	local_28 = 0x43160000;
	local_3c = 0x0;
	local_24 = local_3c;
	local_2c = local_3c;
	local_40 = 0x0;
	local_38 = local_40;
	local_34 = local_40;
	local_30 = local_40;
	UI_PlayerInfo_SetModel(0x43948, 0x4bdc0);
	UI_PlayerInfo_SetInfo(0x43948, 0x16, 0xb, &local_24, &local_30, 0x2, 0x0);
}

/*
=================
PlayerModel_SaveChanges

Address: 0x803f
Stack Size: 0x10
Calls: trap_Cvar_Set
Called by: PlayerModel_MenuKey, PlayerModel_MenuEvent
=================
*/
void PlayerModel_SaveChanges(void) {

	trap_Cvar_Set(0x618f, 0x4bdc0);
	trap_Cvar_Set(0x6185, 0x4bdc0);
	trap_Cvar_Set(0x617a, 0x4bdc0);
	trap_Cvar_Set(0x616b, 0x4bdc0);
}

/*
=================
PlayerModel_MenuEvent

Address: 0x805e
Stack Size: 0x14
Calls: UI_PopMenu, PlayerModel_SaveChanges, PlayerModel_UpdateGrid
=================
*/
void PlayerModel_MenuEvent(int arg_0, int arg_1) {
	char	local_8[8];
	int		local_10;

	if (arg_1 == 0x3) goto jmp_8065;
	goto jmp_80ab;
jmp_8065:
	*(int *)local_8 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_8 == 0x64) goto jmp_807a;
	if (*(int *)local_8 == 0x65) goto jmp_808e;
	if (*(int *)local_8 == 0x66) goto jmp_80a5;
	goto jmp_80ab;
jmp_807a:
	if (bss_4bdb8 <= 0x0) goto jmp_80ab;
	local_10 = 0x4bdb8;
	*(int *)local_10 = (*(int *)local_10 - 0x1);
	PlayerModel_UpdateGrid();
	goto jmp_80ab;
jmp_808e:
	if (bss_4bdb8 >= (bss_4bdbc - 0x1)) goto jmp_80ab;
	local_10 = 0x4bdb8;
	*(int *)local_10 = (*(int *)local_10 + 0x1);
	PlayerModel_UpdateGrid();
	goto jmp_80ab;
jmp_80a5:
	PlayerModel_SaveChanges();
	UI_PopMenu();
jmp_80ab:
}

/*
=================
PlayerModel_MenuKey

Address: 0x80ad
Stack Size: 0x44
Calls: Menu_DefaultKey, PlayerModel_SaveChanges, PlayerModel_UpdateGrid, Menu_SetCursor, Menu_ItemAtCursor
=================
*/
int PlayerModel_MenuKey(int arg_0) {
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

	local_18 = arg_0;
	if (local_18 == 0x86) goto jmp_80e4;
	local_1c = 0x87;
	if (local_18 == local_1c) goto jmp_8144;
	if (local_18 > local_1c) goto jmp_80c9;
	if (arg_0 == 0x1b) goto jmp_81bb;
	goto jmp_81be;
jmp_80c9:
	local_20 = arg_0;
	local_24 = 0xa3;
	if (local_20 == local_24) goto jmp_80e4;
	if (local_20 == 0xa5) goto jmp_8144;
	if (local_20 < local_24) goto jmp_81be;
	if (arg_0 == 0xb3) goto jmp_81bb;
	goto jmp_81be;
jmp_80e4:
	local_28 = Menu_ItemAtCursor(0x42948);
	local_14 = local_28;
	local_10 = *(int *)(local_14 + 0x8);
	local_2c = local_10;
	if (local_2c < 0x0) goto jmp_81be;
	if (local_2c > 0xf) goto jmp_81be;
	if (local_10 <= 0x0) goto jmp_8119;
	local_30 = 0x42948;
	Menu_SetCursor(local_30, (*(int *)local_30 - 0x1));
	return menu_move_sound;
jmp_8119:
	if (bss_4bdb8 <= 0x0) goto jmp_813f;
	local_30 = 0x4bdb8;
	*(int *)local_30 = (*(int *)local_30 - 0x1);
	local_34 = 0x42948;
	Menu_SetCursor(local_34, (*(int *)local_34 + 0xf));
	PlayerModel_UpdateGrid();
	return menu_move_sound;
jmp_813f:
	return menu_buzz_sound;
jmp_8144:
	local_30 = Menu_ItemAtCursor(0x42948);
	local_14 = local_30;
	local_10 = *(int *)(local_14 + 0x8);
	local_34 = local_10;
	if (local_34 < 0x0) goto jmp_81be;
	if (local_34 > 0xf) goto jmp_81be;
	local_38 = local_10;
	if (local_38 >= 0xf) goto jmp_8189;
	if ((((bss_4bdb8 << 0x4) + local_38) + 0x1) >= bss_43db4) goto jmp_8189;
	local_3c = 0x42948;
	Menu_SetCursor(local_3c, (*(int *)local_3c + 0x1));
	return menu_move_sound;
jmp_8189:
	if (local_10 != 0xf) goto jmp_81b6;
	if (bss_4bdb8 >= (bss_4bdbc - 0x1)) goto jmp_81b6;
	local_3c = 0x4bdb8;
	*(int *)local_3c = (*(int *)local_3c + 0x1);
	local_40 = 0x42948;
	Menu_SetCursor(local_40, (*(int *)local_40 - 0xf));
	PlayerModel_UpdateGrid();
	return menu_move_sound;
jmp_81b6:
	return menu_buzz_sound;
jmp_81bb:
	PlayerModel_SaveChanges();
jmp_81be:
	local_28 = Menu_DefaultKey(0x42948, arg_0);
	return local_28;
}

/*
=================
PlayerModel_PicEvent

Address: 0x81cc
Stack Size: 0x44
Calls: trap_MemoryRemaining, PlayerModel_UpdateModel, Q_strupr, strcat, Q_strncpyz, strstr, strlen
=================
*/
void PlayerModel_PicEvent(int arg_0, int arg_1) {
	int		local_14;
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

	if (arg_1 == 0x3) goto jmp_81d3;
	goto jmp_82c5;
jmp_81d3:
	local_14 = 0x0;
jmp_81d6:
	local_28 = ((0x58 * local_14) + 0x42a94);
	*(int *)local_28 = (*(int *)local_28 & 0xffffffbf);
	local_2c = ((0x58 * local_14) + 0x43014);
	*(int *)local_2c = (*(int *)local_2c | 0x100);
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x10) goto jmp_81d6;
	local_14 = *(int *)(arg_0 + 0x8);
	local_28 = ((0x58 * local_14) + 0x42a94);
	*(int *)local_28 = (*(int *)local_28 | 0x40);
	local_2c = ((0x58 * local_14) + 0x43014);
	*(int *)local_2c = (*(int *)local_2c & 0xfffffeff);
	local_24 = ((bss_4bdb8 << 0x4) + local_14);
	local_30 = strlen(0x615b);
	local_1c = (local_30 + ((local_24 << 0x7) + 0x43db8));
	*(int *)local_34 = strstr(local_1c, 0x6155);
	local_18 = *(int *)local_34;
	if (local_18 == 0x0) goto jmp_82c5;
	Q_strncpyz(0x4bdc0, local_1c, ((local_18 - local_1c) + 0x1));
	strcat(0x4bdc0, (local_18 + 0x5));
	local_20 = (local_18 - local_1c);
	if (local_20 <= 0x10) goto jmp_827a;
	local_20 = 0x10;
jmp_827a:
	Q_strncpyz(bss_438ac, local_1c, local_20);
	Q_strupr(bss_438ac);
	local_3c = strlen((local_18 + 0x5));
	local_20 = (local_3c + 0x1);
	if (local_20 <= 0x10) goto jmp_82a2;
	local_20 = 0x10;
jmp_82a2:
	Q_strncpyz(bss_438f4, (local_18 + 0x5), local_20);
	Q_strupr(bss_438f4);
	bss_4be00 = local_24;
	local_40 = trap_MemoryRemaining();
	if (local_40 <= 0x500000) goto jmp_82c5;
	PlayerModel_UpdateModel();
jmp_82c5:
}

/*
=================
PlayerModel_DrawPlayer

Address: 0x82c7
Stack Size: 0x2c
Calls: trap_MemoryRemaining, UI_DrawPlayer, UI_DrawProportionalString
=================
*/
void PlayerModel_DrawPlayer(int arg_0) {
	int		local_20;
	char	local_24[8];

	local_20 = arg_0;
	*(int *)local_24 = trap_MemoryRemaining();
	if (*(int *)local_24 > 0x500000) goto jmp_82f3;
	UI_DrawProportionalString(*(int *)(local_20 + 0xc), (*(int *)(local_20 + 0x10) + (*(int *)(local_20 + 0x50) / 0x2)), 0x614a, 0x0, 0x21b0);
	goto jmp_8319;
jmp_82f3:
	UI_DrawPlayer((float)*(int *)(local_20 + 0xc), (float)*(int *)(local_20 + 0x10), (float)*(int *)(local_20 + 0x4c), (float)*(int *)(local_20 + 0x50), 0x43948, (bss_db58 / 0x2));
jmp_8319:
}

/*
=================
PlayerModel_BuildList

Address: 0x831b
Stack Size: 0x10b0
Calls: trap_S_RegisterSound, trap_FS_GetFileList, trap_Cvar_VariableValue, Com_sprintf, Q_stricmpn, COM_StripExtension, va, strcmp, strlen
Called by: PlayerModel_Cache
=================
*/
void PlayerModel_BuildList(void) {
	char	local_1c[64];
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	char	local_7c[2048];
	int		local_87c;
	char	local_880[2048];
	int		local_1080;
	int		local_1084;
	int		local_1088;
	int		local_108c;
	int		local_1090;
	int		local_1094;
	int		local_1098;
	int		local_109c;
	int		local_10a0;
	int		local_10a4;
	int		local_10a8;
	int		local_10ac;

	local_1080 = trap_Cvar_VariableValue(0x613a);
	local_70 = (int)local_1080;
	bss_4bdb8 = 0x0;
	bss_43db4 = 0x0;
	local_1084 = trap_FS_GetFileList(0x612b, 0x6129, local_880, 0x800);
	local_87c = local_1084;
	local_68 = local_880;
	local_78 = 0x0;
	goto jmp_8430;
jmp_8345:
	local_1088 = strlen(local_68);
	local_74 = local_1088;
	if (local_74 == 0x0) goto jmp_8368;
	if ((char)*(char *)((local_74 - 0x1) + local_68) != 0x2f) goto jmp_8368;
	*(char *)((local_74 - 0x1) + local_68) = 0x0;
jmp_8368:
	local_1090 = strcmp(local_68, 0x6127);
	if (local_1090 == 0x0) goto jmp_8382;
	local_1094 = strcmp(local_68, 0x6124);
	if (local_1094 != 0x0) goto jmp_8384;
jmp_8382:
	goto jmp_841c;
jmp_8384:
	local_1098 = va(0x6112, local_68);
	local_109c = trap_FS_GetFileList(local_1098, 0x610e, local_7c, 0x800);
	local_6c = local_109c;
	local_5c = local_7c;
	local_60 = 0x0;
	goto jmp_8413;
jmp_83a6:
	local_10a0 = strlen(local_5c);
	local_64 = local_10a0;
	COM_StripExtension(local_5c, local_1c, 0x40);
	local_10a4 = Q_stricmpn(local_1c, 0x6155, 0x5);
	if (local_10a4 != 0x0) goto jmp_83eb;
	local_10ac = 0x43db4;
	local_10a8 = *(int *)local_10ac;
	*(int *)local_10ac = (local_10a8 + 0x1);
	Com_sprintf(((local_10a8 << 0x7) + 0x43db8), 0x80, 0x60f9, local_68, local_1c);
jmp_83eb:
	if (local_70 == 0x0) goto jmp_83ff;
	local_10a8 = va(0x60d7, local_1c);
	trap_S_RegisterSound(local_10a8, 0x0);
jmp_83ff:
	local_10a0 = 0x1;
	local_60 = (local_60 + local_10a0);
	local_5c = ((local_64 + local_10a0) + local_5c);
jmp_8413:
	if (local_60 >= local_6c) goto jmp_841c;
	if (bss_43db4 < 0x100) goto jmp_83a6;
jmp_841c:
	local_1088 = 0x1;
	local_78 = (local_78 + local_1088);
	local_68 = ((local_74 + local_1088) + local_68);
jmp_8430:
	if (local_78 >= local_87c) goto jmp_8439;
	if (bss_43db4 < 0x100) goto jmp_8345;
jmp_8439:
	bss_4bdbc = (bss_43db4 / 0x10);
	if ((bss_43db4 %% 0x10) == 0x0) goto jmp_8450;
	local_108c = 0x4bdbc;
	*(int *)local_108c = (*(int *)local_108c + 0x1);
jmp_8450:
}

/*
=================
PlayerModel_SetMenuItems

Address: 0x8452
Stack Size: 0x78
Calls: trap_Cvar_VariableStringBuffer, Q_strupr, Q_stricmp, strcat, Q_strncpyz, strstr, strlen, Q_strcat, strchr, Q_CleanStr
Called by: PlayerModel_MenuInit
=================
*/
void PlayerModel_SetMenuItems(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[64];
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;

	trap_Cvar_VariableStringBuffer(0x60d2, bss_4393c, 0x10);
	Q_CleanStr(bss_4393c);
	trap_Cvar_VariableStringBuffer(0x618f, 0x4bdc0, 0x40);
	local_64 = strchr(0x4bdc0, 0x2f);
	if (local_64 != 0x0) goto jmp_8481;
	Q_strcat(0x4bdc0, 0x40, 0x60c9);
jmp_8481:
	local_18 = 0x0;
	goto jmp_852a;
jmp_8486:
	local_68 = strlen(0x615b);
	local_1c = (local_68 + ((local_18 << 0x7) + 0x43db8));
	local_6c = strstr(local_1c, 0x6155);
	local_14 = local_6c;
	if (local_14 == 0x0) goto jmp_8524;
	Q_strncpyz(local_24, local_1c, ((local_14 - local_1c) + 0x1));
	strcat(local_24, (local_14 + 0x5));
	local_70 = Q_stricmp(0x4bdc0, local_24);
	if (local_70 != 0x0) goto jmp_8524;
	bss_4be00 = local_18;
	bss_4bdb8 = (local_18 / 0x10);
	local_20 = (local_14 - local_1c);
	if (local_20 <= 0x10) goto jmp_84e6;
	local_20 = 0x10;
jmp_84e6:
	Q_strncpyz(bss_438ac, local_1c, local_20);
	Q_strupr(bss_438ac);
	local_74 = strlen((local_14 + 0x5));
	local_20 = (local_74 + 0x1);
	if (local_20 <= 0x10) goto jmp_850e;
	local_20 = 0x10;
jmp_850e:
	Q_strncpyz(bss_438f4, (local_14 + 0x5), local_20);
	Q_strupr(bss_438f4);
	goto jmp_852f;
jmp_8524:
	local_18 = (local_18 + 0x1);
jmp_852a:
	if (local_18 < bss_43db4) goto jmp_8486;
jmp_852f:
}

/*
=================
PlayerModel_MenuInit

Address: 0x8531
Stack Size: 0x30
Calls: memset, PlayerModel_UpdateModel, PlayerModel_UpdateGrid, PlayerModel_SetMenuItems, Menu_AddItem, PlayerModel_Cache
Called by: UI_PlayerModelMenu
=================
*/
void PlayerModel_MenuInit(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	memset(0x42948, 0x0, 0x94bc);
	PlayerModel_Cache();
	bss_42a58 = 0x80ad;
	bss_42a5c = 0x1;
	bss_42a60 = 0x1;
	bss_43670 = 0xa;
	bss_4367c = 0x140;
	bss_43680 = 0x10;
	bss_436ac = 0x60bc;
	bss_436b4 = 0x2160;
	bss_436b0 = 0x1;
	bss_43568 = 0x6;
	bss_4356c = 0x6203;
	bss_43594 = 0x4004;
	bss_43574 = 0x0;
	bss_43578 = 0x4e;
	bss_435b4 = 0x100;
	bss_435b8 = 0x149;
	bss_435c0 = 0x6;
	bss_435c4 = 0x61f1;
	bss_435ec = 0x4004;
	bss_435cc = 0x178;
	bss_435d0 = 0x4c;
	bss_4360c = 0x100;
	bss_43610 = 0x14e;
	bss_43618 = 0x6;
	bss_4361c = 0x61d4;
	bss_43644 = 0x4004;
	bss_43624 = 0x32;
	bss_43628 = 0x3b;
	bss_43664 = 0x112;
	bss_43668 = 0x112;
	local_1c = 0x3b;
	local_28 = 0x0;
	local_24 = local_28;
	local_14 = local_28;
	goto jmp_8696;
jmp_85a8:
	local_18 = 0x32;
	local_20 = 0x0;
jmp_85ae:
	*(int *)((0x58 * local_14) + 0x42a68) = 0x6;
	*(int *)((0x58 * local_14) + 0x42a94) = 0x4004;
	*(int *)((0x58 * local_14) + 0x42a74) = local_18;
	*(int *)((0x58 * local_14) + 0x42a78) = local_1c;
	*(int *)((0x58 * local_14) + 0x42ab4) = 0x40;
	*(int *)((0x58 * local_14) + 0x42ab8) = 0x40;
	*(int *)((0x58 * local_14) + 0x42aa4) = 0x6215;
	*(int *)((0x58 * local_14) + 0x42abc) = 0x29c8;
	*(int *)((0x58 * local_14) + 0x42fe8) = 0x6;
	*(int *)((0x58 * local_14) + 0x43014) = 0x8104;
	*(int *)((0x58 * local_14) + 0x42ff0) = local_14;
	*(int *)((0x58 * local_14) + 0x43018) = 0x81cc;
	*(int *)((0x58 * local_14) + 0x42ff4) = (local_18 - 0x10);
	*(int *)((0x58 * local_14) + 0x42ff8) = (local_1c - 0x10);
	*(int *)((0x58 * local_14) + 0x42ffc) = local_18;
	*(int *)((0x58 * local_14) + 0x43000) = local_1c;
	*(int *)((0x58 * local_14) + 0x43004) = (local_18 + 0x40);
	*(int *)((0x58 * local_14) + 0x43008) = (local_1c + 0x40);
	*(int *)((0x58 * local_14) + 0x43034) = 0x80;
	*(int *)((0x58 * local_14) + 0x43038) = 0x80;
	*(int *)((0x58 * local_14) + 0x43024) = 0x6231;
	*(int *)((0x58 * local_14) + 0x4303c) = 0x29c8;
	local_18 = (local_18 + 0x46);
	local_2c = 0x1;
	local_20 = (local_20 + local_2c);
	local_14 = (local_14 + local_2c);
	if (local_20 < 0x4) goto jmp_85ae;
	local_1c = (local_1c + 0x46);
	local_24 = (local_24 + 0x1);
jmp_8696:
	if (local_24 < 0x4) goto jmp_85a8;
	bss_43900 = 0x9;
	bss_4392c = 0x4008;
	bss_4390c = 0x140;
	bss_43910 = 0x1b8;
	bss_4393c = 0x428e8;
	bss_43940 = 0x1;
	bss_43944 = 0x21f0;
	bss_43870 = 0x9;
	bss_4389c = 0x4008;
	bss_4387c = 0x1f1;
	bss_43880 = 0x36;
	bss_438ac = 0x42908;
	bss_438b0 = 0x1;
	bss_438b4 = 0x21f0;
	bss_438b8 = 0x9;
	bss_438e4 = 0x4008;
	bss_438c4 = 0x1f1;
	bss_438c8 = 0x18a;
	bss_438f4 = 0x42928;
	bss_438f8 = 0x1;
	bss_438fc = 0x21f0;
	bss_43710 = 0x6;
	bss_4373c = 0x4000;
	bss_43748 = 0x82c7;
	bss_4371c = 0x190;
	bss_43720 = 0xffffffd8;
	bss_4375c = 0x140;
	bss_43760 = 0x230;
	bss_43768 = 0x6;
	bss_4376c = 0x61bf;
	bss_43794 = 0x4000;
	bss_43774 = 0x7d;
	bss_43778 = 0x154;
	bss_437b4 = 0x80;
	bss_437b8 = 0x20;
	bss_437c0 = 0x6;
	bss_437ec = 0x104;
	bss_437f0 = 0x805e;
	bss_437c8 = 0x64;
	bss_437cc = 0x7d;
	bss_437d0 = 0x154;
	bss_4380c = 0x40;
	bss_43810 = 0x20;
	bss_437fc = 0x61aa;
	bss_43818 = 0x6;
	bss_43844 = 0x104;
	bss_43848 = 0x805e;
	bss_43820 = 0x65;
	bss_43824 = 0xba;
	bss_43828 = 0x154;
	bss_43864 = 0x40;
	bss_43868 = 0x20;
	bss_43854 = 0x6195;
	bss_436b8 = 0x6;
	bss_436bc = 0x625b;
	bss_436e4 = 0x104;
	bss_436e8 = 0x805e;
	bss_436c0 = 0x66;
	bss_436c4 = 0x0;
	bss_436c8 = 0x1a0;
	bss_43704 = 0x80;
	bss_43708 = 0x40;
	bss_436f4 = 0x624b;
	Menu_AddItem(0x42948, 0x43670);
	Menu_AddItem(0x42948, 0x43568);
	Menu_AddItem(0x42948, 0x435c0);
	Menu_AddItem(0x42948, 0x43618);
	Menu_AddItem(0x42948, 0x43900);
	Menu_AddItem(0x42948, 0x43870);
	Menu_AddItem(0x42948, 0x438b8);
	local_24 = 0x0;
jmp_878b:
	Menu_AddItem(0x42948, ((0x58 * local_24) + 0x42a68));
	Menu_AddItem(0x42948, ((0x58 * local_24) + 0x42fe8));
	local_24 = (local_24 + 0x1);
	if (local_24 < 0x10) goto jmp_878b;
	Menu_AddItem(0x42948, 0x43710);
	Menu_AddItem(0x42948, 0x43768);
	Menu_AddItem(0x42948, 0x437c0);
	Menu_AddItem(0x42948, 0x43818);
	Menu_AddItem(0x42948, 0x436b8);
	PlayerModel_SetMenuItems();
	PlayerModel_UpdateGrid();
	PlayerModel_UpdateModel();
}

/*
=================
PlayerModel_Cache

Address: 0x87db
Stack Size: 0x10
Calls: trap_R_RegisterShaderNoMip, PlayerModel_BuildList
Called by: PlayerModel_MenuInit, UI_Cache_f
=================
*/
void PlayerModel_Cache(void) {
	int		local_c;

	local_c = 0x0;
	goto jmp_87f2;
jmp_87e1:
	trap_R_RegisterShaderNoMip(*(int *)((local_c << 0x2) + 0x1cac));
	local_c = (local_c + 0x1);
jmp_87f2:
	if (*(int *)((local_c << 0x2) + 0x1cac) != 0x0) goto jmp_87e1;
	PlayerModel_BuildList();
	local_c = 0x0;
	goto jmp_8813;
jmp_8803:
	trap_R_RegisterShaderNoMip(((local_c << 0x7) + 0x43db8));
	local_c = (local_c + 0x1);
jmp_8813:
	if (local_c < bss_43db4) goto jmp_8803;
}

/*
=================
UI_PlayerModelMenu

Address: 0x881a
Stack Size: 0x10
Calls: Menu_SetCursorToItem, UI_PushMenu, PlayerModel_MenuInit
Called by: PlayerSettings_MenuEvent
=================
*/
void UI_PlayerModelMenu(void) {

	PlayerModel_MenuInit();
	UI_PushMenu(0x42948);
	Menu_SetCursorToItem(0x42948, ((0x58 * (bss_4be00 %% 0x10)) + 0x42a68));
}

/*
=================
UI_PlayerInfo_SetWeapon

Address: 0x8833
Stack Size: 0x68
Calls: trap_R_RegisterModel, Q_strcat, COM_StripExtension
Called by: UI_PlayerInfo_SetInfo, UI_PlayerInfo_SetModel, UI_TorsoSequencing
=================
*/
void UI_PlayerInfo_SetWeapon(int arg_0, int arg_1) {
	int		local_14;
	char	local_18[64];
	int		local_58;
	int		local_5c;
	char	local_60[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	*(int *)(arg_0 + 0x428) = arg_1;
jmp_8843:
	*(int *)(arg_0 + 0x468) = arg_1;
	*(int *)(arg_0 + 0x3e4) = 0x0;
	*(int *)(arg_0 + 0x3e8) = 0x0;
	*(int *)(arg_0 + 0x3ec) = 0x0;
	if (arg_1 != 0x0) goto jmp_8862;
	goto jmp_89f0;
jmp_8862:
	local_14 = 0x378;
	goto jmp_8880;
jmp_8867:
	if (*(int *)(local_14 + 0x24) == 0x1) goto jmp_8870;
	goto jmp_887a;
jmp_8870:
	if (*(int *)(local_14 + 0x28) != arg_1) goto jmp_887a;
	goto jmp_8885;
jmp_887a:
	local_14 = (local_14 + 0x34);
jmp_8880:
	if (*(int *)local_14 != 0x0) goto jmp_8867;
jmp_8885:
	if (*(int *)local_14 == 0x0) goto jmp_889b;
	local_58 = trap_R_RegisterModel(*(int *)(local_14 + 0x8));
	*(int *)(arg_0 + 0x3e4) = local_58;
jmp_889b:
	if (*(int *)(arg_0 + 0x3e4) != 0x0) goto jmp_88b0;
	if (arg_1 != 0x2) goto jmp_88ab;
	arg_1 = 0x0;
	goto jmp_8843;
jmp_88ab:
	arg_1 = 0x2;
	goto jmp_8843;
jmp_88b0:
	if (arg_1 == 0x2) goto jmp_88bc;
	if (arg_1 == 0x1) goto jmp_88bc;
	if (arg_1 != 0x9) goto jmp_88df;
jmp_88bc:
	COM_StripExtension(*(int *)(local_14 + 0x8), local_18, 0x40);
	Q_strcat(local_18, 0x40, 0x6494);
	local_5c = trap_R_RegisterModel(local_18);
	*(int *)(arg_0 + 0x3e8) = local_5c;
jmp_88df:
	COM_StripExtension(*(int *)(local_14 + 0x8), local_18, 0x40);
	Q_strcat(local_18, 0x40, 0x6489);
	local_5c = trap_R_RegisterModel(local_18);
	*(int *)(arg_0 + 0x3ec) = local_5c;
	*(int *)local_60 = arg_1;
	if (*(int *)local_60 < 0x1) goto jmp_89de;
	if (*(int *)local_60 > 0xa) goto jmp_89de;
	goto *(int *)((*(int *)local_60 << 0x2) + 0x1cd4);
	*(int *)(arg_0 + 0x3f0) = 0x3f19999a;
	*(int *)(arg_0 + 0x3f4) = 0x3f19999a;
	*(int *)(arg_0 + 0x3f8) = 0x3f800000;
	goto jmp_89f0;
	*(int *)(arg_0 + 0x3f0) = 0x3f800000;
	*(int *)(arg_0 + 0x3f4) = 0x3f800000;
	*(int *)(arg_0 + 0x3f8) = 0x0;
	goto jmp_89f0;
	*(int *)(arg_0 + 0x3f0) = 0x3f800000;
	*(int *)(arg_0 + 0x3f4) = 0x3f800000;
	*(int *)(arg_0 + 0x3f8) = 0x0;
	goto jmp_89f0;
	*(int *)(arg_0 + 0x3f0) = 0x3f800000;
	*(int *)(arg_0 + 0x3f4) = 0x3f333333;
	*(int *)(arg_0 + 0x3f8) = 0x3f000000;
	goto jmp_89f0;
	*(int *)(arg_0 + 0x3f0) = 0x3f800000;
	*(int *)(arg_0 + 0x3f4) = 0x3f400000;
	*(int *)(arg_0 + 0x3f8) = 0x0;
	goto jmp_89f0;
	*(int *)(arg_0 + 0x3f0) = 0x3f19999a;
	*(int *)(arg_0 + 0x3f4) = 0x3f19999a;
	*(int *)(arg_0 + 0x3f8) = 0x3f800000;
	goto jmp_89f0;
	*(int *)(arg_0 + 0x3f0) = 0x3f800000;
	*(int *)(arg_0 + 0x3f4) = 0x3f000000;
	*(int *)(arg_0 + 0x3f8) = 0x0;
	goto jmp_89f0;
	*(int *)(arg_0 + 0x3f0) = 0x3f19999a;
	*(int *)(arg_0 + 0x3f4) = 0x3f19999a;
	*(int *)(arg_0 + 0x3f8) = 0x3f800000;
	goto jmp_89f0;
	*(int *)(arg_0 + 0x3f0) = 0x3f800000;
	*(int *)(arg_0 + 0x3f4) = 0x3f333333;
	*(int *)(arg_0 + 0x3f8) = 0x3f800000;
	goto jmp_89f0;
	*(int *)(arg_0 + 0x3f0) = 0x3f19999a;
	*(int *)(arg_0 + 0x3f4) = 0x3f19999a;
	*(int *)(arg_0 + 0x3f8) = 0x3f800000;
	goto jmp_89f0;
jmp_89de:
	*(int *)(arg_0 + 0x3f0) = 0x3f800000;
	*(int *)(arg_0 + 0x3f4) = 0x3f800000;
	*(int *)(arg_0 + 0x3f8) = 0x3f800000;
jmp_89f0:
}

/*
=================
UI_ForceLegsAnim

Address: 0x89f2
Stack Size: 0x10
Called by: UI_PlayerInfo_SetInfo, UI_LegsSequencing, UI_SetLegsAnim
=================
*/
void UI_ForceLegsAnim(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;

	local_8 = (arg_0 + 0x42c);
	local_c = 0x80;
	*(int *)local_8 = (((*(int *)local_8 & local_c) ^ local_c) | arg_1);
	if (arg_1 != 0x12) goto jmp_8a15;
	*(int *)(arg_0 + 0x450) = 0x3e8;
jmp_8a15:
}

/*
=================
UI_SetLegsAnim

Address: 0x8a17
Stack Size: 0x14
Calls: UI_ForceLegsAnim
Called by: UI_LegsSequencing
=================
*/
void UI_SetLegsAnim(int arg_0, int arg_1) {
	int		local_10;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x444) == 0x0) goto jmp_8a32;
	local_10 = (arg_0 + 0x444);
	arg_1 = *(int *)local_10;
	*(int *)local_10 = 0x0;
jmp_8a32:
	UI_ForceLegsAnim(arg_0, arg_1);
}

/*
=================
UI_ForceTorsoAnim

Address: 0x8a3d
Stack Size: 0x14
Called by: UI_PlayerInfo_SetInfo, UI_TorsoSequencing, UI_SetTorsoAnim
=================
*/
void UI_ForceTorsoAnim(int arg_0, int arg_1) {
	int		local_8;
	char	local_c[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_8 = (arg_0 + 0x430);
	*(int *)local_c = 0x80;
	*(int *)local_8 = (((*(int *)local_8 & *(int *)local_c) ^ *(int *)local_c) | arg_1);
	if (arg_1 != 0x6) goto jmp_8a68;
	*(int *)(arg_0 + 0x448) = 0x8fc;
jmp_8a68:
	if (arg_1 == 0x7) goto jmp_8a70;
	if (arg_1 != 0x8) goto jmp_8a76;
jmp_8a70:
	*(int *)(arg_0 + 0x448) = 0x1f4;
jmp_8a76:
}

/*
=================
UI_SetTorsoAnim

Address: 0x8a78
Stack Size: 0x14
Calls: UI_ForceTorsoAnim
Called by: UI_TorsoSequencing
=================
*/
void UI_SetTorsoAnim(int arg_0, int arg_1) {
	int		local_10;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x44c) == 0x0) goto jmp_8a93;
	local_10 = (arg_0 + 0x44c);
	arg_1 = *(int *)local_10;
	*(int *)local_10 = 0x0;
jmp_8a93:
	UI_ForceTorsoAnim(arg_0, arg_1);
}

/*
=================
UI_TorsoSequencing

Address: 0x8a9e
Stack Size: 0x20
Calls: UI_PlayerInfo_SetWeapon, UI_SetTorsoAnim, UI_ForceTorsoAnim
Called by: UI_PlayerAnimation
=================
*/
void UI_TorsoSequencing(int arg_0) {
	char	local_10[16];

	arg_0 = arg_0;
	*(int *)local_10 = (*(int *)(arg_0 + 0x430) & 0xffffff7f);
	if (*(int *)(arg_0 + 0x434) == *(int *)(arg_0 + 0x428)) goto jmp_8ac9;
	if (*(int *)local_10 == 0x9) goto jmp_8ac9;
	*(int *)(arg_0 + 0x448) = 0x12c;
	UI_ForceTorsoAnim(arg_0, 0x9);
jmp_8ac9:
	if (*(int *)(arg_0 + 0x448) <= 0x0) goto jmp_8ad2;
	goto jmp_8b1e;
jmp_8ad2:
	if (*(int *)local_10 != 0x6) goto jmp_8ae0;
	UI_SetTorsoAnim(arg_0, 0xb);
	goto jmp_8b1e;
jmp_8ae0:
	if (*(int *)local_10 == 0x7) goto jmp_8ae8;
	if (*(int *)local_10 != 0x8) goto jmp_8af2;
jmp_8ae8:
	UI_SetTorsoAnim(arg_0, 0xb);
	goto jmp_8b1e;
jmp_8af2:
	if (*(int *)local_10 != 0x9) goto jmp_8b12;
	UI_PlayerInfo_SetWeapon(arg_0, *(int *)(arg_0 + 0x434));
	*(int *)(arg_0 + 0x448) = 0x12c;
	UI_ForceTorsoAnim(arg_0, 0xa);
	goto jmp_8b1e;
jmp_8b12:
	if (*(int *)local_10 != 0xa) goto jmp_8b1e;
	UI_SetTorsoAnim(arg_0, 0xb);
jmp_8b1e:
}

/*
=================
UI_LegsSequencing

Address: 0x8b20
Stack Size: 0x1c
Calls: sin, UI_SetLegsAnim, UI_ForceLegsAnim
Called by: UI_PlayerAnimation
=================
*/
void UI_LegsSequencing(int arg_0) {
	char	local_10[8];
	int		local_18;

	arg_0 = arg_0;
	*(int *)local_10 = (*(int *)(arg_0 + 0x42c) & 0xffffff7f);
	if (*(int *)(arg_0 + 0x450) <= 0x0) goto jmp_8b52;
	if (*(int *)local_10 != 0x12) goto jmp_8b75;
	local_18 = sin(((0x40490fdb * (float)(0x3e8 - *(int *)(arg_0 + 0x450))) / 0x447a0000));
	jumpHeight = (0x42600000 * local_18);
	goto jmp_8b75;
jmp_8b52:
	if (*(int *)local_10 != 0x12) goto jmp_8b69;
	UI_ForceLegsAnim(arg_0, 0x13);
	*(int *)(arg_0 + 0x450) = 0x82;
	jumpHeight = 0x0;
	goto jmp_8b75;
jmp_8b69:
	if (*(int *)local_10 != 0x13) goto jmp_8b75;
	UI_SetLegsAnim(arg_0, 0x16);
jmp_8b75:
}

/*
=================
UI_PositionEntityOnTag

Address: 0x8b77
Stack Size: 0x74
Calls: trap_CM_LerpTag, MatrixMultiply
Called by: UI_DrawPlayer
=================
*/
void UI_PositionEntityOnTag(int arg_0, int arg_1, int arg_2, int arg_3) {
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
	trap_CM_LerpTag(local_24, arg_2, *(int *)(arg_1 + 0x60), *(int *)(arg_1 + 0x50), (0x3f800000 - *(int *)(arg_1 + 0x64)), arg_3);
	local_58 = 0x44;
	block_copy((arg_1 + local_58), (arg_0 + local_58), 0xc);
	local_20 = 0x0;
jmp_8bb0:
	local_5c = (arg_0 + 0x44);
	*(int *)local_5c = (*(int *)local_5c + (*(int *)((0xc * local_20) + (arg_1 + 0x1c)) * *(int *)((local_20 << 0x2) + local_24)));
	*(int *)local_64 = (arg_0 + 0x48);
	*(int *)*(int *)local_64 = (*(int *)*(int *)local_64 + (*(int *)(((0xc * local_20) + (arg_1 + 0x1c)) + 0x4) * *(int *)((local_20 << 0x2) + local_24)));
	*(int *)local_6c = (arg_0 + 0x4c);
	*(int *)*(int *)local_6c = (*(int *)*(int *)local_6c + (*(int *)(((0xc * local_20) + (arg_1 + 0x1c)) + 0x8) * *(int *)((local_20 << 0x2) + local_24)));
	local_20 = (local_20 + 0x1);
	if (local_20 < 0x3) goto jmp_8bb0;
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
UI_PositionRotatedEntityOnTag

Address: 0x8c40
Stack Size: 0x98
Calls: trap_CM_LerpTag, MatrixMultiply
Called by: UI_DrawPlayer
=================
*/
void UI_PositionRotatedEntityOnTag(int arg_0, int arg_1, int arg_2, int arg_3) {
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
	trap_CM_LerpTag(local_24, arg_2, *(int *)(arg_1 + 0x60), *(int *)(arg_1 + 0x50), (0x3f800000 - *(int *)(arg_1 + 0x64)), arg_3);
	local_7c = 0x44;
	block_copy((arg_1 + local_7c), (arg_0 + local_7c), 0xc);
	local_20 = 0x0;
jmp_8c79:
	*(int *)local_80 = (arg_0 + 0x44);
	*(int *)*(int *)local_80 = (*(int *)*(int *)local_80 + (*(int *)((0xc * local_20) + (arg_1 + 0x1c)) * *(int *)((local_20 << 0x2) + local_24)));
	*(int *)local_88 = (arg_0 + 0x48);
	*(int *)*(int *)local_88 = (*(int *)*(int *)local_88 + (*(int *)(((0xc * local_20) + (arg_1 + 0x1c)) + 0x4) * *(int *)((local_20 << 0x2) + local_24)));
	*(int *)local_90 = (arg_0 + 0x4c);
	*(int *)*(int *)local_90 = (*(int *)*(int *)local_90 + (*(int *)(((0xc * local_20) + (arg_1 + 0x1c)) + 0x8) * *(int *)((local_20 << 0x2) + local_24)));
	local_20 = (local_20 + 0x1);
	if (local_20 < 0x3) goto jmp_8c79;
	MatrixMultiply((arg_0 + 0x1c), local_30, local_54);
#define next_call_arg_0 "local_54"
	*(int *)local_80 = 0x1c;
#define next_call_arg_1 "(arg_1 + *(int *)local_80)"
#define next_call_arg_2 "(arg_0 + *(int *)local_80)"
	MatrixMultiply();
}

/*
=================
UI_SetLerpFrameAnimation

Address: 0x8d06
Stack Size: 0x1c
Calls: trap_Error, va
Called by: UI_RunLerpFrame
=================
*/
void UI_SetLerpFrameAnimation(int arg_0, int arg_1, int arg_2) {
	char	local_10[8];
	int		local_18;

	arg_1 = arg_1;
	arg_2 = arg_2;
	*(int *)(arg_1 + 0x24) = arg_2;
	arg_2 = (arg_2 & 0xffffff7f);
	if (arg_2 < 0x0) goto jmp_8d24;
	if (arg_2 < 0x1f) goto jmp_8d33;
jmp_8d24:
	local_18 = va(0x6470, arg_2);
	trap_Error(local_18);
jmp_8d33:
	*(int *)local_10 = ((0x1c * arg_2) + (arg_0 + 0x78));
	*(int *)(arg_1 + 0x28) = *(int *)local_10;
	*(int *)(arg_1 + 0x2c) = (*(int *)(arg_1 + 0xc) + *(int *)(*(int *)local_10 + 0x10));
}

/*
=================
UI_RunLerpFrame

Address: 0x8d57
Stack Size: 0x44
Calls: UI_SetLerpFrameAnimation
Called by: UI_PlayerAnimation
=================
*/
void UI_RunLerpFrame(int arg_0, int arg_1, int arg_2) {
	int		local_14;
	int		local_18;
	char	local_1c[16];
	int		local_2c;
	char	local_30[12];
	int		local_3c;
	int		local_40;

	arg_1 = arg_1;
	if (arg_2 != *(int *)(arg_1 + 0x24)) goto jmp_8d6b;
	if (*(int *)(arg_1 + 0x28) != 0x0) goto jmp_8d77;
jmp_8d6b:
	UI_SetLerpFrameAnimation(arg_0, arg_1, arg_2);
jmp_8d77:
	if (dp_realtime < *(int *)(arg_1 + 0xc)) goto jmp_8e95;
	*(int *)arg_1 = *(int *)(arg_1 + 0x8);
	*(int *)(arg_1 + 0x4) = *(int *)(arg_1 + 0xc);
	local_14 = *(int *)(arg_1 + 0x28);
	if (*(int *)(local_14 + 0xc) != 0x0) goto jmp_8da1;
	goto jmp_8ee6;
jmp_8da1:
	if (dp_realtime >= *(int *)(arg_1 + 0x2c)) goto jmp_8db5;
	*(int *)(arg_1 + 0xc) = *(int *)(arg_1 + 0x2c);
	goto jmp_8dca;
jmp_8db5:
	*(int *)local_30 = 0xc;
	*(int *)(arg_1 + *(int *)local_30) = (*(int *)(arg_1 + 0x4) + *(int *)(local_14 + *(int *)local_30));
jmp_8dca:
	*(int *)local_30 = 0xc;
	local_18 = ((*(int *)(arg_1 + *(int *)local_30) - *(int *)(arg_1 + 0x2c)) / *(int *)(local_14 + *(int *)local_30));
	*(int *)local_1c = *(int *)(local_14 + 0x4);
	if (*(int *)(local_14 + 0x18) == 0x0) goto jmp_8df6;
	*(int *)local_1c = (*(int *)local_1c << 0x1);
jmp_8df6:
	if (local_18 < *(int *)local_1c) goto jmp_8e34;
	local_18 = (local_18 - *(int *)local_1c);
	if (*(int *)(local_14 + 0x8) == 0x0) goto jmp_8e27;
	local_3c = (local_14 + 0x8);
	local_18 = (local_18 %% *(int *)local_3c);
	local_18 = (local_18 + (*(int *)(local_14 + 0x4) - *(int *)local_3c));
	goto jmp_8e34;
jmp_8e27:
	local_18 = (*(int *)local_1c - 0x1);
	*(int *)(arg_1 + 0xc) = dp_realtime;
jmp_8e34:
	if (*(int *)(local_14 + 0x14) == 0x0) goto jmp_8e50;
	*(int *)(arg_1 + 0x8) = (((*(int *)local_14 + *(int *)(local_14 + 0x4)) - 0x1) - local_18);
	goto jmp_8e86;
jmp_8e50:
	if (*(int *)(local_14 + 0x18) == 0x0) goto jmp_8e7b;
	if (local_18 < *(int *)(local_14 + 0x4)) goto jmp_8e7b;
	local_40 = *(int *)(local_14 + 0x4);
	*(int *)(arg_1 + 0x8) = (((*(int *)local_14 + local_40) - 0x1) - (local_18 %% local_40));
	goto jmp_8e86;
jmp_8e7b:
	*(int *)(arg_1 + 0x8) = (*(int *)local_14 + local_18);
jmp_8e86:
	if (dp_realtime <= *(int *)(arg_1 + 0xc)) goto jmp_8e95;
	*(int *)(arg_1 + 0xc) = dp_realtime;
jmp_8e95:
	if (*(int *)(arg_1 + 0xc) <= (dp_realtime + 0xc8)) goto jmp_8ea6;
	*(int *)(arg_1 + 0xc) = dp_realtime;
jmp_8ea6:
	if (*(int *)(arg_1 + 0x4) <= dp_realtime) goto jmp_8eb5;
	*(int *)(arg_1 + 0x4) = dp_realtime;
jmp_8eb5:
	if (*(int *)(arg_1 + 0xc) != *(int *)(arg_1 + 0x4)) goto jmp_8ec8;
	*(int *)(arg_1 + 0x10) = 0x0;
	goto jmp_8ee6;
jmp_8ec8:
	local_2c = *(int *)(arg_1 + 0x4);
	*(int *)(arg_1 + 0x10) = (0x3f800000 - ((float)(dp_realtime - local_2c) / (float)(*(int *)(arg_1 + 0xc) - local_2c)));
jmp_8ee6:
}

/*
=================
UI_PlayerAnimation

Address: 0x8ee8
Stack Size: 0x24
Calls: UI_TorsoSequencing, UI_RunLerpFrame, UI_LegsSequencing
Called by: UI_DrawPlayer
=================
*/
void UI_PlayerAnimation(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) {
	char	local_14[8];
	char	local_1c[8];

	arg_0 = arg_0;
	*(int *)local_14 = (arg_0 + 0x450);
	*(int *)*(int *)local_14 = (*(int *)*(int *)local_14 - uis);
	if (*(int *)(arg_0 + 0x450) >= 0x0) goto jmp_8f09;
	*(int *)(arg_0 + 0x450) = 0x0;
jmp_8f09:
	UI_LegsSequencing(arg_0);
	if (*(int *)(arg_0 + 0x20) == 0x0) goto jmp_8f2e;
	if ((*(int *)(arg_0 + 0x42c) & 0xffffff7f) != 0x16) goto jmp_8f2e;
	UI_RunLerpFrame(arg_0, (arg_0 + 0x8), 0x18);
	goto jmp_8f3f;
jmp_8f2e:
	UI_RunLerpFrame(arg_0, (arg_0 + 0x8), *(int *)(arg_0 + 0x42c));
jmp_8f3f:
	*(int *)arg_1 = *(int *)(arg_0 + 0x8);
	*(int *)arg_2 = *(int *)(arg_0 + 0x10);
	*(int *)arg_3 = *(int *)(arg_0 + 0x18);
	*(int *)local_1c = (arg_0 + 0x448);
	*(int *)*(int *)local_1c = (*(int *)*(int *)local_1c - uis);
	if (*(int *)(arg_0 + 0x448) >= 0x0) goto jmp_8f73;
	*(int *)(arg_0 + 0x448) = 0x0;
jmp_8f73:
	UI_TorsoSequencing(arg_0);
	UI_RunLerpFrame(arg_0, (arg_0 + 0x40), *(int *)(arg_0 + 0x430));
	*(int *)arg_4 = *(int *)(arg_0 + 0x40);
	*(int *)arg_5 = *(int *)(arg_0 + 0x48);
	*(int *)arg_6 = *(int *)(arg_0 + 0x50);
}

/*
=================
UI_SwingAngles

Address: 0x8fa4
Stack Size: 0x2c
Calls: AngleMod, fabs, AngleSubtract
Called by: UI_PlayerAngles
=================
*/
void UI_SwingAngles(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	arg_4 = arg_4;
	if (*(int *)arg_5 != 0x0) goto jmp_8fd4;
	local_1c = AngleSubtract(*(int *)arg_4, arg_0);
	local_10 = local_1c;
	local_24 = arg_1;
	if (local_10 > local_24) goto jmp_8fd0;
	if (local_10 >= -local_24) goto jmp_8fd4;
jmp_8fd0:
	*(int *)arg_5 = 0x1;
jmp_8fd4:
	if (*(int *)arg_5 != 0x0) goto jmp_8fdb;
	goto jmp_90a7;
jmp_8fdb:
	local_1c = AngleSubtract(arg_0, *(int *)arg_4);
	local_10 = local_1c;
	local_20 = fabs(local_10);
	local_14 = local_20;
	if (local_14 >= (0x3f000000 * arg_1)) goto jmp_9001;
	local_14 = 0x3f000000;
	goto jmp_900e;
jmp_9001:
	if (local_14 >= arg_1) goto jmp_900b;
	local_14 = 0x3f800000;
	goto jmp_900e;
jmp_900b:
	local_14 = 0x40000000;
jmp_900e:
	if (local_10 < 0x0) goto jmp_903c;
	local_18 = (((float)uis * local_14) * arg_3);
	if (local_18 < local_10) goto jmp_902a;
	local_18 = local_10;
	*(int *)arg_5 = 0x0;
jmp_902a:
	local_28 = AngleMod((*(int *)arg_4 + local_18));
	*(int *)arg_4 = local_28;
	goto jmp_9069;
jmp_903c:
	if (local_10 >= 0x0) goto jmp_9069;
	local_18 = (((float)uis * local_14) * -arg_3);
	if (local_18 > local_10) goto jmp_9059;
	local_18 = local_10;
	*(int *)arg_5 = 0x0;
jmp_9059:
	local_28 = AngleMod((*(int *)arg_4 + local_18));
	*(int *)arg_4 = local_28;
jmp_9069:
	local_24 = AngleSubtract(arg_0, *(int *)arg_4);
	local_10 = local_24;
	if (local_10 <= arg_2) goto jmp_9090;
	local_28 = AngleMod((arg_0 - (arg_2 - 0x3f800000)));
	*(int *)arg_4 = local_28;
	goto jmp_90a7;
jmp_9090:
	if (local_10 >= -arg_2) goto jmp_90a7;
	local_28 = AngleMod((arg_0 + (arg_2 - 0x3f800000)));
	*(int *)arg_4 = local_28;
jmp_90a7:
}

/*
=================
UI_MovedirAdjustment

Address: 0x90a9
Stack Size: 0x60
Calls: Q_fabs, AngleVectors
Called by: UI_PlayerAngles
=================
*/
int UI_MovedirAdjustment(int arg_0) {
	int		local_18;
	char	local_1c[8];
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
	int		local_5c;

	arg_0 = arg_0;
	local_24 = (*(int *)(arg_0 + 0x410) - *(int *)(arg_0 + 0x41c));
	local_28 = (*(int *)(arg_0 + 0x414) - *(int *)(arg_0 + 0x420));
	*(int *)local_2c = (*(int *)(arg_0 + 0x418) - *(int *)(arg_0 + 0x424));
#define next_call_arg_0 "&local_24"
#define next_call_arg_1 "&local_18"
	local_38 = 0x0;
#define next_call_arg_2 "local_38"
#define next_call_arg_3 "local_38"
	AngleVectors();
	local_3c = Q_fabs(local_18);
	if (local_3c >= 0x3c23d70a) goto jmp_90f3;
	local_18 = 0x0;
jmp_90f3:
	local_40 = Q_fabs(*(int *)local_1c);
	if (local_40 >= 0x3c23d70a) goto jmp_9101;
	*(int *)local_1c = 0x0;
jmp_9101:
	local_44 = 0x0;
	if (*(int *)local_1c != local_44) goto jmp_9112;
	if (local_18 <= local_44) goto jmp_9112;
	return 0x0;
jmp_9112:
	local_48 = 0x0;
	if (*(int *)local_1c >= local_48) goto jmp_9123;
	if (local_18 <= local_48) goto jmp_9123;
	return 0x41b00000;
jmp_9123:
	local_4c = 0x0;
	if (*(int *)local_1c >= local_4c) goto jmp_9134;
	if (local_18 != local_4c) goto jmp_9134;
	return 0x42340000;
jmp_9134:
	local_50 = 0x0;
	if (*(int *)local_1c >= local_50) goto jmp_9145;
	if (local_18 >= local_50) goto jmp_9145;
	return 0xc1b00000;
jmp_9145:
	local_54 = 0x0;
	if (*(int *)local_1c != local_54) goto jmp_9156;
	if (local_18 >= local_54) goto jmp_9156;
	return 0x0;
jmp_9156:
	local_58 = 0x0;
	if (*(int *)local_1c <= local_58) goto jmp_9167;
	if (local_18 >= local_58) goto jmp_9167;
	return 0x41b00000;
jmp_9167:
	local_5c = 0x0;
	if (*(int *)local_1c <= local_5c) goto jmp_9178;
	if (local_18 != local_5c) goto jmp_9178;
	return 0xc2340000;
jmp_9178:
	return 0xc1b00000;
}

/*
=================
UI_PlayerAngles

Address: 0x917c
Stack Size: 0x78
Calls: AnglesToAxis, AnglesSubtract, UI_SwingAngles, UI_MovedirAdjustment, AngleMod
Called by: UI_DrawPlayer
=================
*/
void UI_PlayerAngles(int arg_0, int arg_1, int arg_2, int arg_3) {
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[8];
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;
	int		local_4c;
	int		local_50;
	char	local_54[8];
	int		local_5c;
	char	local_60[20];
	int		local_74;

	arg_0 = arg_0;
	block_copy((arg_0 + 0x410), &local_2c, 0xc);
	local_4c = AngleMod(*(int *)local_30);
	*(int *)local_30 = local_4c;
	local_50 = 0x0;
	local_40 = local_50;
	local_3c = local_50;
	local_38 = local_50;
	*(int *)local_54 = 0x0;
	local_28 = *(int *)local_54;
	local_24 = *(int *)local_54;
	local_20 = *(int *)local_54;
	local_5c = 0xffffff7f;
	if ((*(int *)(arg_0 + 0x42c) & local_5c) != 0x16) goto jmp_91c7;
	if ((*(int *)(arg_0 + 0x430) & local_5c) == 0xb) goto jmp_91d9;
jmp_91c7:
	*(int *)(arg_0 + 0x58) = 0x1;
	*(int *)(arg_0 + 0x60) = 0x1;
	*(int *)(arg_0 + 0x20) = 0x1;
jmp_91d9:
	*(int *)local_60 = UI_MovedirAdjustment(arg_0);
	local_44 = *(int *)local_60;
	local_3c = (*(int *)local_30 + local_44);
	local_24 = (*(int *)local_30 + (0x3e800000 * local_44));
	UI_SwingAngles(local_24, 0x41c80000, 0x42b40000, 0x3e99999a, (arg_0 + 0x54), (arg_0 + 0x58));
	UI_SwingAngles(local_3c, 0x42200000, 0x42b40000, 0x3e99999a, (arg_0 + 0x1c), (arg_0 + 0x20));
	local_24 = *(int *)(arg_0 + 0x54);
	local_3c = *(int *)(arg_0 + 0x1c);
	if (local_2c <= 0x43340000) goto jmp_923c;
	local_48 = (0x3f400000 * (local_2c + 0xc3b40000));
	goto jmp_9242;
jmp_923c:
	local_48 = (0x3f400000 * local_2c);
jmp_9242:
	UI_SwingAngles(local_48, 0x41700000, 0x41f00000, 0x3dcccccd, (arg_0 + 0x5c), (arg_0 + 0x60));
	local_20 = *(int *)(arg_0 + 0x5c);
	if (*(int *)(arg_0 + 0x3e0) == 0x0) goto jmp_9269;
	local_20 = 0x0;
jmp_9269:
	if (*(int *)(arg_0 + 0x3dc) == 0x0) goto jmp_927f;
	local_3c = local_24;
	local_74 = 0x0;
	local_38 = local_74;
	local_40 = local_74;
jmp_927f:
	AnglesSubtract(&local_2c, &local_20, &local_2c);
	AnglesSubtract(&local_20, &local_38, &local_20);
	AnglesToAxis(&local_38, arg_1);
	AnglesToAxis(&local_20, arg_2);
	AnglesToAxis(&local_2c, arg_3);
}

/*
=================
UI_PlayerFloatSprite

Address: 0x92ab
Stack Size: 0xa0
Calls: trap_R_AddRefEntityToScene, memset
Called by: UI_DrawPlayer
=================
*/
void UI_PlayerFloatSprite(, int arg_1, int arg_2) {
	int		local_14;
	char	local_18[64];
	char	local_58[8];
	char	local_60[36];
	char	local_84[20];
	char	local_98[8];

	memset(&local_14, 0x0, 0x8c);
	block_copy(arg_1, local_58, 0xc);
	*(int *)local_60 = (*(int *)local_60 + 0x42400000);
	local_14 = 0x2;
	*(int *)local_84 = arg_2;
	*(int *)local_98 = 0x41200000;
	*(int *)local_18 = 0x0;
	trap_R_AddRefEntityToScene(&local_14);
}

/*
=================
UI_MachinegunSpinAngle

Address: 0x92d3
Stack Size: 0x2c
Calls: AngleMod
Called by: UI_DrawPlayer
=================
*/
int UI_MachinegunSpinAngle(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[8];
	int		local_20;
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	local_10 = (dp_realtime - *(int *)(arg_0 + 0x464));
	if (*(int *)(arg_0 + 0x45c) == 0x0) goto jmp_92f8;
	local_14 = (*(int *)(arg_0 + 0x460) + (0x3f666666 * (float)local_10));
	goto jmp_931a;
jmp_92f8:
	if (local_10 <= 0x3e8) goto jmp_92ff;
	local_10 = 0x3e8;
jmp_92ff:
	*(int *)local_18 = (0x3f000000 * (((float)(0x3e8 - local_10) / 0x447a0000) + 0x3f666666));
	local_14 = (*(int *)(arg_0 + 0x460) + ((float)local_10 * *(int *)local_18));
jmp_931a:
	local_c = (*(int *)(arg_0 + 0x430) & 0xffffff7f);
	if (local_c != 0x8) goto jmp_932a;
	local_c = 0x7;
jmp_932a:
	if (local_c == 0x7) goto jmp_9333;
	local_20 = 0x1;
	goto jmp_9336;
jmp_9333:
	local_20 = 0x0;
jmp_9336:
	if (*(int *)(arg_0 + 0x45c) != local_20) goto jmp_9366;
	*(int *)(arg_0 + 0x464) = dp_realtime;
	local_24 = AngleMod(local_14);
	*(int *)(arg_0 + 0x460) = local_24;
	if (local_c != 0x7) goto jmp_935c;
	local_28 = 0x1;
	goto jmp_935f;
jmp_935c:
	local_28 = 0x0;
jmp_935f:
	*(int *)(arg_0 + 0x45c) = local_28;
jmp_9366:
	return local_14;
}

/*
=================
UI_DrawPlayer

Address: 0x936b
Stack Size: 0x558
Calls: trap_R_RenderScene, trap_R_RegisterShaderNoMip, trap_R_AddLightToScene, trap_R_AddRefEntityToScene, trap_R_ClearScene, atan2, memset, trap_S_StartLocalSound, UI_PlayerFloatSprite, rand, AnglesToAxis, UI_MachinegunSpinAngle, UI_PositionEntityOnTag, UI_PositionRotatedEntityOnTag, UI_PlayerAnimation, UI_PlayerAngles, tan, AxisClear, UI_AdjustFrom640
Called by: PlayerSettings_DrawPlayer, PlayerModel_DrawPlayer, Controls_DrawPlayer
=================
*/
void UI_DrawPlayer(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) {
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[16];
	char	local_48[36];
	int		local_6c;
	char	local_70[292];
	int		local_194;
	int		local_198;
	int		local_19c;
	char	local_1a0[16];
	char	local_1b0[40];
	char	local_1d8[12];
	int		local_1e4;
	char	local_1e8[12];
	int		local_1f4;
	char	local_1f8[8];
	char	local_200[32];
	int		local_220;
	int		local_224;
	int		local_228;
	int		local_22c;
	int		local_230;
	int		local_234;
	char	local_238[16];
	char	local_248[52];
	char	local_27c[16];
	int		local_28c;
	char	local_290[8];
	char	local_298[32];
	int		local_2b8;
	int		local_2bc;
	int		local_2c0;
	char	local_2c4[16];
	char	local_2d4[80];
	char	local_324[32];
	int		local_344;
	int		local_348;
	int		local_34c;
	char	local_350[104];
	char	local_3b8;
	char	local_3b9;
	char	local_3ba;
	char	local_3bb[21];
	int		local_3d0;
	int		local_3d4;
	int		local_3d8;
	int		local_3dc;
	char	local_3e0[16];
	char	local_3f0[112];
	int		local_460;
	int		local_464;
	int		local_468;
	char	local_46c[56];
	char	local_4a4[48];
	char	local_4d4;
	char	local_4d5;
	char	local_4d6;
	char	local_4d7[21];
	int		local_4ec;
	int		local_4f0;
	int		local_4f4;
	int		local_4f8;
	int		local_4fc;
	int		local_500;
	int		local_504;
	char	local_508[8];
	char	local_510[8];
	int		local_518;
	int		local_51c;
	int		local_520;
	int		local_524;
	int		local_528;
	int		local_52c;
	int		local_530;
	int		local_534;
	int		local_538;
	int		local_53c;
	int		local_540;
	int		local_544;
	int		local_548;
	int		local_54c;
	int		local_550;
	int		local_554;

	arg_4 = arg_4;
	block_copy(global_1d00, &local_194, 0x8c);
	block_copy(global_1d8c, &local_22c, 0x8c);
	block_copy(global_1e18, &local_2b8, 0x8c);
	block_copy(global_1ea4, &local_344, 0x8c);
	block_copy(global_1f30, &local_3d4, 0x8c);
	block_copy(global_1fbc, &local_460, 0x8c);
	block_copy(global_2048, &local_4ec, 0xc);
	block_copy(global_2054, &local_4f8, 0xc);
	*(int *)local_510 = 0x0;
	if (*(int *)arg_4 == *(int *)local_510) goto jmp_93a9;
	if (*(int *)(arg_4 + 0x38) == *(int *)local_510) goto jmp_93a9;
	if (*(int *)(arg_4 + 0x70) == *(int *)local_510) goto jmp_93a9;
	if (*(int *)(arg_4 + 0x7c) != *(int *)local_510) goto jmp_93ab;
jmp_93a9:
	goto jmp_9818;
jmp_93ab:
	dp_realtime = arg_5;
	if (*(int *)(arg_4 + 0x43c) == 0xb) goto jmp_93f1;
	if (dp_realtime <= *(int *)(arg_4 + 0x440)) goto jmp_93f1;
	*(int *)(arg_4 + 0x434) = *(int *)(arg_4 + 0x43c);
	*(int *)(arg_4 + 0x438) = *(int *)(arg_4 + 0x43c);
	*(int *)(arg_4 + 0x43c) = 0xb;
	*(int *)(arg_4 + 0x440) = 0x0;
	if (*(int *)(arg_4 + 0x428) == *(int *)(arg_4 + 0x434)) goto jmp_93f1;
	trap_S_StartLocalSound(weaponChangeSound, 0x1);
jmp_93f1:
	UI_AdjustFrom640(&arg_0, &arg_1, &arg_2, &arg_3);
	arg_1 = (arg_1 - jumpHeight);
	memset(&local_24, 0x0, 0x170);
	memset(&local_194, 0x0, 0x8c);
	memset(&local_22c, 0x0, 0x8c);
	memset(&local_2b8, 0x0, 0x8c);
	*(int *)local_70 = 0x1;
	AxisClear(local_48);
	local_24 = (int)arg_0;
	local_28 = (int)arg_1;
	local_2c = (int)arg_2;
	local_30 = (int)arg_3;
	local_34 = (float)(int)(0x42b40000 * (((float)local_2c / bss_107fc) / 0x44200000));
	local_518 = tan((0x40490fdb * (local_34 / 0x43b40000)));
	*(int *)local_508 = (((float)local_2c / bss_107fc) / local_518);
	local_51c = atan2(((float)local_30 / bss_10800), *(int *)local_508);
	*(int *)local_38 = local_51c;
	*(int *)local_38 = (0x42e52ee1 * *(int *)local_38);
	local_504 = (0x3f333333 * (local_500 - local_4f4));
	local_520 = tan((0x3f000000 * ((0x40490fdb * local_34) / 0x43340000)));
	local_220 = (local_504 / local_520);
	local_224 = (0x3f000000 * (local_4f0 + local_4fc));
	local_228 = (0xbf000000 * (local_4f4 + local_500));
	local_6c = dp_realtime;
	trap_R_ClearScene();
	UI_PlayerAngles(arg_4, local_1b0, local_248, local_2d4);
	UI_PlayerAnimation(arg_4, &local_1f4, &local_1e4, local_1f8, &local_28c, local_27c, local_290);
	local_3d0 = 0xc0;
	local_19c = *(int *)arg_4;
	*(int *)local_200 = *(int *)(arg_4 + 0x4);
	block_copy(&local_220, local_1d8, 0xc);
	block_copy(&local_220, local_1a0, 0xc);
	local_198 = local_3d0;
	block_copy(local_1d8, local_1e8, 0xc);
	trap_R_AddRefEntityToScene(&local_194);
	if (local_19c != 0x0) goto jmp_94fa;
	goto jmp_9818;
jmp_94fa:
	local_234 = *(int *)(arg_4 + 0x38);
	if (local_234 != 0x0) goto jmp_9507;
	goto jmp_9818;
jmp_9507:
	*(int *)local_298 = *(int *)(arg_4 + 0x3c);
	block_copy(&local_220, local_238, 0xc);
	UI_PositionRotatedEntityOnTag(&local_22c, &local_194, *(int *)arg_4, 0x6466);
	local_230 = local_3d0;
	trap_R_AddRefEntityToScene(&local_22c);
	local_2c0 = *(int *)(arg_4 + 0x70);
	if (local_2c0 != 0x0) goto jmp_9534;
	goto jmp_9818;
jmp_9534:
	*(int *)local_324 = *(int *)(arg_4 + 0x74);
	block_copy(&local_220, local_2c4, 0xc);
	UI_PositionRotatedEntityOnTag(&local_2b8, &local_22c, *(int *)(arg_4 + 0x38), 0x645d);
	local_2bc = local_3d0;
	trap_R_AddRefEntityToScene(&local_2b8);
	if (*(int *)(arg_4 + 0x428) == 0x0) goto jmp_9631;
	memset(&local_344, 0x0, 0x8c);
	local_34c = *(int *)(arg_4 + 0x3e4);
	if (*(int *)(arg_4 + 0x428) != 0x7) goto jmp_9592;
	local_3b8 = *(char *)(arg_4 + 0x40c);
	local_3b9 = *(char *)(arg_4 + 0x40d);
	local_3ba = *(char *)(arg_4 + 0x40e);
	*(char *)local_3bb = *(char *)(arg_4 + 0x40f);
	goto jmp_9616;
jmp_9592:
	local_534 = colorWhite;
	local_538 = 0x4f000000;
	if (local_534 < local_538) goto jmp_95aa;
	local_524 = ((int)(local_534 - local_538) + 0x80000000);
	goto jmp_95af;
jmp_95aa:
	local_524 = (int)local_534;
jmp_95af:
	local_3b8 = local_524;
	local_53c = global_2a2c;
	local_540 = 0x4f000000;
	if (local_53c < local_540) goto jmp_95cb;
	local_528 = ((int)(local_53c - local_540) + 0x80000000);
	goto jmp_95d0;
jmp_95cb:
	local_528 = (int)local_53c;
jmp_95d0:
	local_3b9 = local_528;
	local_544 = global_2a30;
	local_548 = 0x4f000000;
	if (local_544 < local_548) goto jmp_95ec;
	local_52c = ((int)(local_544 - local_548) + 0x80000000);
	goto jmp_95f1;
jmp_95ec:
	local_52c = (int)local_544;
jmp_95f1:
	local_3ba = local_52c;
	local_54c = global_2a34;
	local_550 = 0x4f000000;
	if (local_54c < local_550) goto jmp_960d;
	local_530 = ((int)(local_54c - local_550) + 0x80000000);
	goto jmp_9612;
jmp_960d:
	local_530 = (int)local_54c;
jmp_9612:
	*(char *)local_3bb = local_530;
jmp_9616:
	block_copy(&local_220, local_350, 0xc);
	UI_PositionEntityOnTag(&local_344, &local_22c, *(int *)(arg_4 + 0x38), 0x6452);
	local_348 = local_3d0;
	trap_R_AddRefEntityToScene(&local_344);
jmp_9631:
	local_524 = *(int *)(arg_4 + 0x468);
	if (local_524 == 0x2) goto jmp_9644;
	if (local_524 == 0x1) goto jmp_9644;
	if (local_524 != 0x9) goto jmp_9687;
jmp_9644:
	memset(&local_3d4, 0x0, 0x8c);
	block_copy(&local_220, local_3e0, 0xc);
	local_3d8 = local_3d0;
	local_3dc = *(int *)(arg_4 + 0x3e8);
	local_52c = 0x0;
	local_528 = 0x0;
	local_534 = UI_MachinegunSpinAngle(arg_4);
	local_530 = local_534;
	AnglesToAxis(&local_528, local_3f0);
	UI_PositionRotatedEntityOnTag(&local_3d4, &local_344, *(int *)(arg_4 + 0x3e4), 0x6447);
	trap_R_AddRefEntityToScene(&local_3d4);
jmp_9687:
	if (dp_realtime > *(int *)(arg_4 + 0x3fc)) goto jmp_97a8;
	if (*(int *)(arg_4 + 0x3ec) == 0x0) goto jmp_976a;
	memset(&local_460, 0x0, 0x8c);
	local_468 = *(int *)(arg_4 + 0x3ec);
	if (*(int *)(arg_4 + 0x428) != 0x7) goto jmp_96cb;
	local_4d4 = *(char *)(arg_4 + 0x40c);
	local_4d5 = *(char *)(arg_4 + 0x40d);
	local_4d6 = *(char *)(arg_4 + 0x40e);
	*(char *)local_4d7 = *(char *)(arg_4 + 0x40f);
	goto jmp_974f;
jmp_96cb:
	local_538 = colorWhite;
	local_53c = 0x4f000000;
	if (local_538 < local_53c) goto jmp_96e3;
	local_528 = ((int)(local_538 - local_53c) + 0x80000000);
	goto jmp_96e8;
jmp_96e3:
	local_528 = (int)local_538;
jmp_96e8:
	local_4d4 = local_528;
	local_540 = global_2a2c;
	local_544 = 0x4f000000;
	if (local_540 < local_544) goto jmp_9704;
	local_52c = ((int)(local_540 - local_544) + 0x80000000);
	goto jmp_9709;
jmp_9704:
	local_52c = (int)local_540;
jmp_9709:
	local_4d5 = local_52c;
	local_548 = global_2a30;
	local_54c = 0x4f000000;
	if (local_548 < local_54c) goto jmp_9725;
	local_530 = ((int)(local_548 - local_54c) + 0x80000000);
	goto jmp_972a;
jmp_9725:
	local_530 = (int)local_548;
jmp_972a:
	local_4d6 = local_530;
	local_550 = global_2a34;
	local_554 = 0x4f000000;
	if (local_550 < local_554) goto jmp_9746;
	local_534 = ((int)(local_550 - local_554) + 0x80000000);
	goto jmp_974b;
jmp_9746:
	local_534 = (int)local_550;
jmp_974b:
	*(char *)local_4d7 = local_534;
jmp_974f:
	block_copy(&local_220, local_46c, 0xc);
	UI_PositionEntityOnTag(&local_460, &local_344, *(int *)(arg_4 + 0x3e4), 0x643d);
	local_464 = local_3d0;
	trap_R_AddRefEntityToScene(&local_460);
jmp_976a:
	local_52c = 0x0;
	if (*(int *)(arg_4 + 0x3f0) != local_52c) goto jmp_9785;
	if (*(int *)(arg_4 + 0x3f4) != local_52c) goto jmp_9785;
	if (*(int *)(arg_4 + 0x3f8) == local_52c) goto jmp_97a8;
jmp_9785:
	local_530 = rand();
	trap_R_AddLightToScene(local_4a4, (float)((local_530 & 0x1f) + 0xc8), *(int *)(arg_4 + 0x3f0), *(int *)(arg_4 + 0x3f4), *(int *)(arg_4 + 0x3f8));
jmp_97a8:
	if (*(int *)(arg_4 + 0x454) == 0x0) goto jmp_97c0;
	local_528 = trap_R_RegisterShaderNoMip(0x642c);
	UI_PlayerFloatSprite(arg_4, &local_220, local_528);
jmp_97c0:
	local_528 = 0x42c80000;
	local_220 = (local_220 - local_528);
	local_224 = (local_224 + local_528);
	local_228 = (local_228 + 0x42c80000);
#define next_call_arg_0 "&local_220"
#define next_call_arg_1 "0x43fa0000"
	local_52c = 0x3f800000;
#define next_call_arg_2 "local_52c"
#define next_call_arg_3 "local_52c"
#define next_call_arg_4 "local_52c"
	trap_R_AddLightToScene();
	local_530 = 0x42c80000;
	local_220 = (local_220 - local_530);
	local_224 = (local_224 - local_530);
	local_228 = (local_228 - 0x42c80000);
#define next_call_arg_0 "&local_220"
#define next_call_arg_1 "0x43fa0000"
#define next_call_arg_2 "0x3f800000"
	local_534 = 0x0;
#define next_call_arg_3 "local_534"
#define next_call_arg_4 "local_534"
	trap_R_AddLightToScene();
	trap_R_RenderScene(&local_24);
jmp_9818:
}

/*
=================
UI_RegisterClientSkin

Address: 0x981a
Stack Size: 0x70
Calls: trap_R_RegisterSkin, Com_sprintf
Called by: UI_RegisterClientModelname
=================
*/
int UI_RegisterClientSkin(int arg_0, int arg_1, int arg_2) {
	char	local_1c[64];
	int		local_5c;
	int		local_60;
	char	local_64[8];
	int		local_6c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	Com_sprintf(local_1c, 0x40, 0x640c, arg_1, arg_2);
	local_5c = trap_R_RegisterSkin(local_1c);
	*(int *)(arg_0 + 0x4) = local_5c;
	Com_sprintf(local_1c, 0x40, 0x63ec, arg_1, arg_2);
	local_60 = trap_R_RegisterSkin(local_1c);
	*(int *)(arg_0 + 0x3c) = local_60;
	Com_sprintf(local_1c, 0x40, 0x63cd, arg_1, arg_2);
	*(int *)local_64 = trap_R_RegisterSkin(local_1c);
	*(int *)(arg_0 + 0x74) = *(int *)local_64;
	local_6c = 0x0;
	if (*(int *)(arg_0 + 0x4) == local_6c) goto jmp_9896;
	if (*(int *)(arg_0 + 0x3c) == local_6c) goto jmp_9896;
	if (*(int *)(arg_0 + 0x74) != local_6c) goto jmp_989a;
jmp_9896:
	return 0x0;
jmp_989a:
	return 0x1;
}

/*
=================
UI_ParseAnimationFile

Address: 0x989e
Stack Size: 0x4e80
Calls: trap_FS_Read, trap_FS_FCloseFile, trap_FS_FOpenFile, memset, atof, atoi, Q_stricmp, COM_Parse, Com_Printf
Called by: UI_RegisterClientModelname
=================
*/
int UI_ParseAnimationFile(int arg_0, int arg_1) {
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
	int		local_4e5c;
	int		local_4e60;
	int		local_4e64;
	int		local_4e68;
	int		local_4e6c;
	int		local_4e70;
	int		local_4e74;
	int		local_4e78;
	int		local_4e7c;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_1c = (arg_1 + 0x78);
	memset(local_1c, 0x0, 0x364);
	*(int *)(arg_1 + 0x3dc) = 0x0;
	*(int *)(arg_1 + 0x3e0) = 0x0;
	local_4e58 = trap_FS_FOpenFile(arg_0, &local_4e54, 0x0);
	local_30 = local_4e58;
	if (local_30 > 0x0) goto jmp_98da;
	return 0x0;
jmp_98da:
	if (local_30 < 0x4e1f) goto jmp_98f0;
	Com_Printf(0x63bb, arg_0);
	trap_FS_FCloseFile(local_4e54);
	return 0x0;
jmp_98f0:
	trap_FS_Read(local_34, local_30, local_4e54);
	*(char *)(local_30 + local_34) = 0x0;
	trap_FS_FCloseFile(local_4e54);
	local_20 = local_34;
	local_2c = 0x0;
	goto jmp_99da;
jmp_990f:
	local_28 = local_20;
	local_4e5c = COM_Parse(&local_20);
	local_14 = local_4e5c;
	if ((char)*(char *)local_14 != 0x0) goto jmp_9925;
	goto jmp_99dc;
jmp_9925:
	local_4e60 = Q_stricmp(local_14, 0x63b1);
	if (local_4e60 != 0x0) goto jmp_9944;
	local_4e64 = COM_Parse(&local_20);
	local_14 = local_4e64;
	if ((char)*(char *)local_14 != 0x0) goto jmp_99da;
	goto jmp_99dc;
jmp_9944:
	local_4e64 = Q_stricmp(local_14, 0x63a6);
	if (local_4e64 != 0x0) goto jmp_9972;
	local_18 = 0x0;
jmp_9954:
	local_4e68 = COM_Parse(&local_20);
	local_14 = local_4e68;
	if ((char)*(char *)local_14 != 0x0) goto jmp_9966;
	goto jmp_99da;
jmp_9966:
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x3) goto jmp_9954;
	goto jmp_99da;
jmp_9972:
	local_4e68 = Q_stricmp(local_14, 0x63a2);
	if (local_4e68 != 0x0) goto jmp_9991;
	local_4e6c = COM_Parse(&local_20);
	local_14 = local_4e6c;
	if ((char)*(char *)local_14 != 0x0) goto jmp_99da;
	goto jmp_99dc;
jmp_9991:
	local_4e6c = Q_stricmp(local_14, 0x6398);
	if (local_4e6c != 0x0) goto jmp_99a6;
	*(int *)(arg_1 + 0x3dc) = 0x1;
	goto jmp_99da;
jmp_99a6:
	local_4e70 = Q_stricmp(local_14, 0x638d);
	if (local_4e70 != 0x0) goto jmp_99bb;
	*(int *)(arg_1 + 0x3e0) = 0x1;
	goto jmp_99da;
jmp_99bb:
	local_4e74 = (char)*(char *)local_14;
	if (local_4e74 < 0x30) goto jmp_99cf;
	if (local_4e74 > 0x39) goto jmp_99cf;
	local_20 = local_28;
	goto jmp_99dc;
jmp_99cf:
	Com_Printf(0x6373, local_14, arg_0);
jmp_99da:
	goto jmp_990f;
jmp_99dc:
	local_18 = 0x0;
jmp_99df:
	local_4e5c = COM_Parse(&local_20);
	local_14 = local_4e5c;
	if ((char)*(char *)local_14 != 0x0) goto jmp_9a58;
	if (local_18 < 0x19) goto jmp_9b69;
	if (local_18 > 0x1e) goto jmp_9b69;
	*(int *)((0x1c * local_18) + local_1c) = *(int *)(local_1c + 0xa8);
	*(int *)(((0x1c * local_18) + local_1c) + 0xc) = *(int *)(local_1c + 0xb4);
	*(int *)(((0x1c * local_18) + local_1c) + 0x10) = *(int *)(local_1c + 0xb8);
	*(int *)(((0x1c * local_18) + local_1c) + 0x8) = *(int *)(local_1c + 0xb0);
	*(int *)(((0x1c * local_18) + local_1c) + 0x4) = *(int *)(local_1c + 0xac);
	*(int *)(((0x1c * local_18) + local_1c) + 0x14) = 0x0;
	*(int *)(((0x1c * local_18) + local_1c) + 0x18) = 0x0;
	goto jmp_9b5f;
jmp_9a58:
	local_4e60 = atoi(local_14);
	*(int *)((0x1c * local_18) + local_1c) = local_4e60;
	if (local_18 != 0xd) goto jmp_9a7a;
	local_2c = (*(int *)(local_1c + 0x16c) - *(int *)(local_1c + 0xa8));
jmp_9a7a:
	if (local_18 < 0xd) goto jmp_9a94;
	if (local_18 >= 0x19) goto jmp_9a94;
	local_4e68 = ((0x1c * local_18) + local_1c);
	*(int *)local_4e68 = (*(int *)local_4e68 - local_2c);
jmp_9a94:
	local_4e68 = COM_Parse(&local_20);
	local_14 = local_4e68;
	if ((char)*(char *)local_14 != 0x0) goto jmp_9aa6;
	goto jmp_9b69;
jmp_9aa6:
	local_4e6c = atoi(local_14);
	*(int *)(((0x1c * local_18) + local_1c) + 0x4) = local_4e6c;
	*(int *)(((0x1c * local_18) + local_1c) + 0x14) = 0x0;
	*(int *)(((0x1c * local_18) + local_1c) + 0x18) = 0x0;
	if (*(int *)(((0x1c * local_18) + local_1c) + 0x4) >= 0x0) goto jmp_9af8;
	local_4e70 = (((0x1c * local_18) + local_1c) + 0x4);
	*(int *)local_4e70 = -*(int *)local_4e70;
	*(int *)(((0x1c * local_18) + local_1c) + 0x14) = 0x1;
jmp_9af8:
	local_4e70 = COM_Parse(&local_20);
	local_14 = local_4e70;
	if ((char)*(char *)local_14 != 0x0) goto jmp_9b0a;
	goto jmp_9b69;
jmp_9b0a:
	local_4e74 = atoi(local_14);
	*(int *)(((0x1c * local_18) + local_1c) + 0x8) = local_4e74;
	local_4e78 = COM_Parse(&local_20);
	local_14 = local_4e78;
	if ((char)*(char *)local_14 != 0x0) goto jmp_9b2f;
	goto jmp_9b69;
jmp_9b2f:
	local_4e7c = atof(local_14);
	local_24 = local_4e7c;
	if (local_24 != 0x0) goto jmp_9b41;
	local_24 = 0x3f800000;
jmp_9b41:
	*(int *)(((0x1c * local_18) + local_1c) + 0xc) = (int)(0x447a0000 / local_24);
	*(int *)(((0x1c * local_18) + local_1c) + 0x10) = (int)(0x447a0000 / local_24);
jmp_9b5f:
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x1f) goto jmp_99df;
jmp_9b69:
	if (local_18 == 0x1f) goto jmp_9b79;
	Com_Printf(0x6351, arg_0);
	return 0x0;
jmp_9b79:
	return 0x1;
}

/*
=================
UI_RegisterClientModelname

Address: 0x9b7d
Stack Size: 0xf4
Calls: trap_R_RegisterModel, UI_ParseAnimationFile, UI_RegisterClientSkin, Com_Printf, Com_sprintf, strchr, Q_strncpyz
Called by: UI_PlayerInfo_SetModel
=================
*/
int UI_RegisterClientModelname(int arg_0, int arg_1) {
	char	local_18[64];
	char	local_58[64];
	char	local_98[64];
	int		local_d8;
	int		local_dc;
	int		local_e0;
	int		local_e4;
	int		local_e8;
	int		local_ec;
	int		local_f0;

	arg_0 = arg_0;
	*(int *)(arg_0 + 0x38) = 0x0;
	*(int *)(arg_0 + 0x70) = 0x0;
	if ((char)*(char *)arg_1 != 0x0) goto jmp_9b98;
	return 0x0;
jmp_9b98:
	Q_strncpyz(local_58, arg_1, 0x40);
	local_dc = strchr(local_58, 0x2f);
	local_d8 = local_dc;
	if (local_d8 != 0x0) goto jmp_9bbd;
	Q_strncpyz(local_98, 0x6349, 0x40);
	goto jmp_9bcd;
jmp_9bbd:
	Q_strncpyz(local_98, (local_d8 + 0x1), 0x40);
	*(char *)local_d8 = 0x0;
jmp_9bcd:
	Com_sprintf(local_18, 0x40, 0x632d, local_58);
	local_e0 = trap_R_RegisterModel(local_18);
	*(int *)arg_0 = local_e0;
	if (*(int *)arg_0 != 0x0) goto jmp_9bf3;
	Com_Printf(0x630f, local_18);
	return 0x0;
jmp_9bf3:
	Com_sprintf(local_18, 0x40, 0x62f3, local_58);
	local_e4 = trap_R_RegisterModel(local_18);
	*(int *)(arg_0 + 0x38) = local_e4;
	if (*(int *)(arg_0 + 0x38) != 0x0) goto jmp_9c1d;
	Com_Printf(0x630f, local_18);
	return 0x0;
jmp_9c1d:
	Com_sprintf(local_18, 0x40, 0x62d8, local_58);
	local_e8 = trap_R_RegisterModel(local_18);
	*(int *)(arg_0 + 0x70) = local_e8;
	if (*(int *)(arg_0 + 0x70) != 0x0) goto jmp_9c47;
	Com_Printf(0x630f, local_18);
	return 0x0;
jmp_9c47:
	local_ec = UI_RegisterClientSkin(arg_0, local_58, local_98);
	if (local_ec != 0x0) goto jmp_9c72;
	local_f0 = UI_RegisterClientSkin(arg_0, local_58, 0x6349);
	if (local_f0 != 0x0) goto jmp_9c72;
	Com_Printf(0x62b5, local_58, local_98);
	return 0x0;
jmp_9c72:
	Com_sprintf(local_18, 0x40, 0x6295, local_58);
	local_f0 = UI_ParseAnimationFile(local_18, arg_0);
	if (local_f0 != 0x0) goto jmp_9c95;
	Com_Printf(0x6273, local_18);
	return 0x0;
jmp_9c95:
	return 0x1;
}

/*
=================
UI_PlayerInfo_SetModel

Address: 0x9c99
Stack Size: 0x20
Calls: memset, UI_PlayerInfo_SetWeapon, UI_RegisterClientModelname
Called by: PlayerSettings_SetMenuItems, PlayerSettings_DrawPlayer, PlayerModel_UpdateModel, Controls_InitModel, Controls_DrawPlayer
=================
*/
void UI_PlayerInfo_SetModel(int arg_0, int arg_1) {

	arg_0 = arg_0;
	memset(arg_0, 0x0, 0x46c);
	UI_RegisterClientModelname(arg_0, arg_1);
	*(int *)(arg_0 + 0x434) = 0x2;
	*(int *)(arg_0 + 0x428) = *(int *)(arg_0 + 0x434);
	*(int *)(arg_0 + 0x438) = *(int *)(arg_0 + 0x434);
	*(int *)(arg_0 + 0x43c) = 0xb;
	*(int *)(arg_0 + 0x440) = 0x0;
	*(int *)(arg_0 + 0x454) = 0x0;
	*(int *)(arg_0 + 0x458) = 0x1;
	UI_PlayerInfo_SetWeapon(arg_0, *(int *)(arg_0 + 0x434));
}

/*
=================
UI_PlayerInfo_SetInfo

Address: 0x9cf1
Stack Size: 0x7c
Calls: trap_Cvar_VariableValue, UI_PlayerInfo_SetWeapon, UI_ForceTorsoAnim, UI_ForceLegsAnim
Called by: PlayerSettings_SetMenuItems, PlayerSettings_DrawPlayer, PlayerModel_UpdateModel, Controls_UpdateModel
=================
*/
void UI_PlayerInfo_SetInfo(int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5, int arg_6) {
	int		local_10;
	int		local_14;
	int		local_18;
	char	local_1c[8];
	char	local_24[8];
	char	local_2c[8];
	int		local_34;
	int		local_38;
	char	local_3c[8];
	int		local_44;
	int		local_48;
	char	local_4c[8];
	int		local_54;
	char	local_58[8];
	int		local_60;
	char	local_64[24];

	arg_0 = arg_0;
	arg_1 = arg_1;
	arg_2 = arg_2;
	arg_5 = arg_5;
	*(int *)(arg_0 + 0x454) = arg_6;
	*(int *)local_1c = trap_Cvar_VariableValue(0x626c);
	local_18 = (int)*(int *)local_1c;
	*(int *)local_24 = 0x0;
	*(int *)(arg_0 + 0x408) = *(int *)local_24;
	*(int *)(arg_0 + 0x404) = *(int *)local_24;
	*(int *)(arg_0 + 0x400) = *(int *)local_24;
	if (local_18 < 0x1) goto jmp_9d34;
	if (local_18 <= 0x7) goto jmp_9d48;
jmp_9d34:
	*(int *)(arg_0 + 0x400) = 0x3f800000;
	*(int *)(arg_0 + 0x404) = 0x3f800000;
	*(int *)(arg_0 + 0x408) = 0x3f800000;
	goto jmp_9d6c;
jmp_9d48:
	if ((local_18 & 0x1) == 0x0) goto jmp_9d54;
	*(int *)(arg_0 + 0x408) = 0x3f800000;
jmp_9d54:
	if ((local_18 & 0x2) == 0x0) goto jmp_9d60;
	*(int *)(arg_0 + 0x404) = 0x3f800000;
jmp_9d60:
	if ((local_18 & 0x4) == 0x0) goto jmp_9d6c;
	*(int *)(arg_0 + 0x400) = 0x3f800000;
jmp_9d6c:
	local_34 = (0x437f0000 * *(int *)(arg_0 + 0x400));
	local_38 = 0x4f000000;
	if (local_34 < local_38) goto jmp_9d89;
	*(int *)local_2c = ((int)(local_34 - local_38) + 0x80000000);
	goto jmp_9d8e;
jmp_9d89:
	*(int *)local_2c = (int)local_34;
jmp_9d8e:
	*(char *)(arg_0 + 0x40c) = *(int *)local_2c;
	local_44 = (0x437f0000 * *(int *)(arg_0 + 0x404));
	local_48 = 0x4f000000;
	if (local_44 < local_48) goto jmp_9db2;
	*(int *)local_3c = ((int)(local_44 - local_48) + 0x80000000);
	goto jmp_9db7;
jmp_9db2:
	*(int *)local_3c = (int)local_44;
jmp_9db7:
	*(char *)(arg_0 + 0x40d) = *(int *)local_3c;
	local_54 = (0x437f0000 * *(int *)(arg_0 + 0x408));
	*(int *)local_58 = 0x4f000000;
	if (local_54 < *(int *)local_58) goto jmp_9ddb;
	*(int *)local_4c = ((int)(local_54 - *(int *)local_58) + 0x80000000);
	goto jmp_9de0;
jmp_9ddb:
	*(int *)local_4c = (int)local_54;
jmp_9de0:
	*(char *)(arg_0 + 0x40e) = *(int *)local_4c;
	*(char *)(arg_0 + 0x40f) = 0xff;
	block_copy(arg_3, (arg_0 + 0x410), 0xc);
	block_copy(arg_4, (arg_0 + 0x41c), 0xc);
	if (*(int *)(arg_0 + 0x458) == 0x0) goto jmp_9e7c;
	*(int *)(arg_0 + 0x458) = 0x0;
	jumpHeight = 0x0;
	*(int *)(arg_0 + 0x444) = 0x0;
	UI_ForceLegsAnim(arg_0, arg_1);
	*(int *)(arg_0 + 0x1c) = *(int *)(arg_3 + 0x4);
	*(int *)(arg_0 + 0x20) = 0x0;
	*(int *)(arg_0 + 0x44c) = 0x0;
	UI_ForceTorsoAnim(arg_0, arg_2);
	*(int *)(arg_0 + 0x54) = *(int *)(arg_3 + 0x4);
	*(int *)(arg_0 + 0x58) = 0x0;
	if (arg_5 == 0xb) goto jmp_9fc4;
	*(int *)(arg_0 + 0x434) = arg_5;
	*(int *)(arg_0 + 0x428) = arg_5;
	*(int *)(arg_0 + 0x438) = arg_5;
	*(int *)(arg_0 + 0x43c) = 0xb;
	*(int *)(arg_0 + 0x440) = 0x0;
	UI_PlayerInfo_SetWeapon(arg_0, *(int *)(arg_0 + 0x434));
	goto jmp_9fc4;
jmp_9e7c:
	if (arg_5 != 0xb) goto jmp_9e8e;
	*(int *)(arg_0 + 0x43c) = 0xb;
	*(int *)(arg_0 + 0x440) = 0x0;
	goto jmp_9ea2;
jmp_9e8e:
	if (arg_5 == 0x0) goto jmp_9ea2;
	*(int *)(arg_0 + 0x43c) = arg_5;
	*(int *)(arg_0 + 0x440) = (dp_realtime + 0xfa);
jmp_9ea2:
	local_14 = *(int *)(arg_0 + 0x438);
	*(int *)(arg_0 + 0x434) = local_14;
	local_60 = 0x0;
	if (arg_2 == local_60) goto jmp_9ebd;
	if (arg_1 != local_60) goto jmp_9f05;
jmp_9ebd:
	*(int *)local_64 = 0x0;
	arg_1 = *(int *)local_64;
	arg_2 = *(int *)local_64;
	*(int *)(arg_0 + 0x428) = *(int *)local_64;
	*(int *)(arg_0 + 0x434) = *(int *)local_64;
	UI_PlayerInfo_SetWeapon(arg_0, *(int *)(arg_0 + 0x434));
	jumpHeight = 0x0;
	*(int *)(arg_0 + 0x444) = 0x0;
	UI_ForceLegsAnim(arg_0, arg_1);
	*(int *)(arg_0 + 0x44c) = 0x0;
	UI_ForceTorsoAnim(arg_0, arg_2);
	goto jmp_9fc4;
jmp_9f05:
	local_10 = (*(int *)(arg_0 + 0x42c) & 0xffffff7f);
	*(int *)local_64 = 0x12;
	if (arg_1 == *(int *)local_64) goto jmp_9f28;
	if (local_10 == *(int *)local_64) goto jmp_9f1f;
	if (local_10 != 0x13) goto jmp_9f28;
jmp_9f1f:
	*(int *)(arg_0 + 0x444) = arg_1;
	goto jmp_9f3f;
jmp_9f28:
	if (arg_1 == local_10) goto jmp_9f3f;
	jumpHeight = 0x0;
	*(int *)(arg_0 + 0x444) = 0x0;
	UI_ForceLegsAnim(arg_0, arg_1);
jmp_9f3f:
	if (arg_2 == 0xb) goto jmp_9f47;
	if (arg_2 != 0xc) goto jmp_9f57;
jmp_9f47:
	if (local_14 == 0x0) goto jmp_9f4f;
	if (local_14 != 0x1) goto jmp_9f54;
jmp_9f4f:
	arg_2 = 0xc;
	goto jmp_9f57;
jmp_9f54:
	arg_2 = 0xb;
jmp_9f57:
	if (arg_2 == 0x7) goto jmp_9f5f;
	if (arg_2 != 0x8) goto jmp_9f78;
jmp_9f5f:
	if (local_14 == 0x0) goto jmp_9f67;
	if (local_14 != 0x1) goto jmp_9f6c;
jmp_9f67:
	arg_2 = 0x8;
	goto jmp_9f6f;
jmp_9f6c:
	arg_2 = 0x7;
jmp_9f6f:
	*(int *)(arg_0 + 0x3fc) = (dp_realtime + 0x14);
jmp_9f78:
	local_10 = (*(int *)(arg_0 + 0x430) & 0xffffff7f);
	if (local_14 != *(int *)(arg_0 + 0x428)) goto jmp_9f91;
	if (local_10 == 0xa) goto jmp_9f91;
	if (local_10 != 0x9) goto jmp_9f9a;
jmp_9f91:
	*(int *)(arg_0 + 0x44c) = arg_2;
	goto jmp_9fc4;
jmp_9f9a:
	if (local_10 == 0x6) goto jmp_9fa2;
	if (local_10 != 0x7) goto jmp_9fb0;
jmp_9fa2:
	if (arg_2 == local_10) goto jmp_9fb0;
	*(int *)(arg_0 + 0x44c) = arg_2;
	goto jmp_9fc4;
jmp_9fb0:
	if (arg_2 == local_10) goto jmp_9fc4;
	*(int *)(arg_0 + 0x44c) = 0x0;
	UI_ForceTorsoAnim(arg_0, arg_2);
jmp_9fc4:
}

/*
=================
PlayerSettings_DrawName

Address: 0x9fc6
Stack Size: 0x74
Calls: trap_Key_GetOverstrikeMode, Q_CleanStr, Q_strncpyz, UI_DrawChar, Q_IsColorString, UI_DrawProportionalString
=================
*/
void PlayerSettings_DrawName(int arg_0) {
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
	char	local_44[32];
	char	local_64[8];
	int		local_6c;
	int		local_70;

	local_3c = arg_0;
	local_40 = *(int *)(local_3c + 0xc);
	local_34 = *(int *)(local_3c + 0x10);
	if (*(int *)*(int *)(local_3c + 0x24) != *(int *)(local_3c + 0x28)) goto jmp_9fea;
	*(int *)local_64 = 0x1;
	goto jmp_9fed;
jmp_9fea:
	*(int *)local_64 = 0x0;
jmp_9fed:
	local_38 = *(int *)local_64;
	local_30 = 0x10;
	local_28 = 0x21f0;
	if (local_38 == 0x0) goto jmp_a004;
	local_30 = (local_30 | 0x4000);
	local_28 = 0x2200;
jmp_a004:
	UI_DrawProportionalString(local_40, local_34, 0x65cb, local_30, local_28);
	local_40 = (local_40 + 0x40);
	local_34 = (local_34 + 0x1b);
	local_1c = (local_3c + 0x48);
	local_28 = 0x2ad8;
	local_24 = local_40;
	goto jmp_a081;
jmp_a030:
	if (local_38 != 0x0) goto jmp_a062;
	local_6c = Q_IsColorString(local_1c);
	if (local_6c == 0x0) goto jmp_a062;
	local_2c = (((char)*(char *)(local_1c + 0x1) - 0x30) & 0x7);
	if (local_2c != 0x0) goto jmp_a052;
	local_2c = 0x7;
jmp_a052:
	local_28 = ((local_2c << 0x4) + 0x2a68);
	local_1c = (local_1c + 0x2);
	goto jmp_a081;
jmp_a062:
	UI_DrawChar(local_24, local_34, (char)*(char *)&local_20, local_30, local_28);
	local_1c = (local_1c + 0x1);
	local_24 = (local_24 + 0x8);
jmp_a081:
	*(char *)&local_6c = *(char *)local_1c;
	*(char *)&local_20 = *(char *)&local_6c;
	if ((char)*(char *)&local_6c != 0x0) goto jmp_a030;
	if (local_38 == 0x0) goto jmp_a0c9;
	local_70 = trap_Key_GetOverstrikeMode();
	if (local_70 == 0x0) goto jmp_a0a0;
	*(char *)&local_20 = 0xb;
	goto jmp_a0a3;
jmp_a0a0:
	*(char *)&local_20 = 0xa;
jmp_a0a3:
	local_30 = (local_30 & 0xffffbfff);
	local_30 = (local_30 | 0x1000);
	UI_DrawChar((local_40 + (*(int *)(local_3c + 0x3c) << 0x3)), local_34, (char)*(char *)&local_20, local_30, 0x2160);
jmp_a0c9:
	Q_strncpyz(local_44, (local_3c + 0x48), 0x20);
	Q_CleanStr(local_44);
	UI_DrawProportionalString(0x140, 0x1b8, local_44, 0x21, 0x21f0);
}

/*
=================
PlayerSettings_DrawHandicap

Address: 0xa0e9
Stack Size: 0x40
Calls: UI_DrawProportionalString
=================
*/
void PlayerSettings_DrawHandicap(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[16];
	int		local_3c;

	local_1c = arg_0;
	if (*(int *)*(int *)(local_1c + 0x24) != *(int *)(local_1c + 0x28)) goto jmp_a0ff;
	*(int *)local_2c = 0x1;
	goto jmp_a102;
jmp_a0ff:
	*(int *)local_2c = 0x0;
jmp_a102:
	local_28 = *(int *)local_2c;
	local_20 = 0x10;
	local_24 = 0x21f0;
	if (local_28 == 0x0) goto jmp_a119;
	local_20 = (local_20 | 0x4000);
	local_24 = 0x2200;
jmp_a119:
	UI_DrawProportionalString(*(int *)(local_1c + 0xc), *(int *)(local_1c + 0x10), 0x65c2, local_20, local_24);
	local_3c = 0x40;
	UI_DrawProportionalString((*(int *)(local_1c + 0xc) + local_3c), (*(int *)(local_1c + 0x10) + 0x1b), *(int *)((*(int *)(local_1c + local_3c) << 0x2) + 0x2098), local_20, local_24);
}

/*
=================
PlayerSettings_DrawEffects

Address: 0xa15b
Stack Size: 0x48
Calls: UI_DrawHandlePic, UI_DrawProportionalString
=================
*/
void PlayerSettings_DrawEffects(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[20];
	int		local_40;
	int		local_44;

	local_1c = arg_0;
	if (*(int *)*(int *)(local_1c + 0x24) != *(int *)(local_1c + 0x28)) goto jmp_a171;
	*(int *)local_2c = 0x1;
	goto jmp_a174;
jmp_a171:
	*(int *)local_2c = 0x0;
jmp_a174:
	local_28 = *(int *)local_2c;
	local_20 = 0x10;
	local_24 = 0x21f0;
	if (local_28 == 0x0) goto jmp_a18b;
	local_20 = (local_20 | 0x4000);
	local_24 = 0x2200;
jmp_a18b:
	UI_DrawProportionalString(*(int *)(local_1c + 0xc), *(int *)(local_1c + 0x10), 0x65ba, local_20, local_24);
	UI_DrawHandlePic((float)(*(int *)(local_1c + 0xc) + 0x40), (float)((*(int *)(local_1c + 0x10) + 0x1b) + 0x8), 0x43000000, 0x41000000, bss_4c390);
	local_40 = 0x40;
	local_44 = *(int *)(local_1c + local_40);
	UI_DrawHandlePic((float)(((*(int *)(local_1c + 0xc) + local_40) + (local_44 << 0x4)) + 0x8), (float)((*(int *)(local_1c + 0x10) + 0x1b) + 0x6), 0x41800000, 0x41400000, *(int *)((local_44 << 0x2) + 0x4c394));
}

/*
=================
PlayerSettings_DrawPlayer

Address: 0xa1f8
Stack Size: 0x7c
Calls: trap_Cvar_VariableStringBuffer, UI_DrawPlayer, UI_PlayerInfo_SetInfo, strcpy, UI_PlayerInfo_SetModel, strcmp
=================
*/
void PlayerSettings_DrawPlayer(int arg_0) {
	int		local_24;
	char	local_28[64];
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;

	trap_Cvar_VariableStringBuffer(0x65b4, local_28, 0x40);
	local_74 = strcmp(local_28, 0x4c820);
	if (local_74 == 0x0) goto jmp_a23b;
	UI_PlayerInfo_SetModel(0x4c3b0, local_28);
	strcpy(0x4c820, local_28);
	local_6c = 0x43160000;
	local_78 = 0x0;
	local_68 = local_78;
	local_70 = local_78;
	UI_PlayerInfo_SetInfo(0x4c3b0, 0x16, 0xb, &local_68, 0x2988, 0x2, 0x0);
jmp_a23b:
	local_24 = arg_0;
	UI_DrawPlayer((float)*(int *)(local_24 + 0xc), (float)*(int *)(local_24 + 0x10), (float)*(int *)(local_24 + 0x4c), (float)*(int *)(local_24 + 0x50), 0x4c3b0, (bss_db58 / 0x2));
}

/*
=================
PlayerSettings_SaveChanges

Address: 0xa267
Stack Size: 0x10
Calls: trap_Cvar_SetValue, trap_Cvar_Set
Called by: PlayerSettings_MenuEvent, PlayerSettings_MenuKey
=================
*/
void PlayerSettings_SaveChanges(void) {

	trap_Cvar_Set(0x65af, 0x4c0c4);
	trap_Cvar_SetValue(0x65a6, (float)(0x64 - (0x5 * bss_4c208)));
	trap_Cvar_SetValue(0x659f, (float)*(int *)((bss_4c268 << 0x2) + 0x207c));
}

/*
=================
PlayerSettings_MenuKey

Address: 0xa28c
Stack Size: 0x18
Calls: Menu_DefaultKey, PlayerSettings_SaveChanges
=================
*/
int PlayerSettings_MenuKey(int arg_0) {
	int		local_14;

	arg_0 = arg_0;
	if (arg_0 == 0xb3) goto jmp_a299;
	if (arg_0 != 0x1b) goto jmp_a29c;
jmp_a299:
	PlayerSettings_SaveChanges();
jmp_a29c:
	local_14 = Menu_DefaultKey(0x4be0c, arg_0);
	return local_14;
}

/*
=================
PlayerSettings_SetMenuItems

Address: 0xa2aa
Stack Size: 0x54
Calls: memset, trap_Cvar_VariableValue, Com_Clamp, UI_PlayerInfo_SetInfo, UI_PlayerInfo_SetModel, Q_strncpyz, UI_Cvar_VariableString
Called by: PlayerSettings_MenuInit
=================
*/
void PlayerSettings_SetMenuItems(void) {
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

	local_38 = UI_Cvar_VariableString(0x65af);
	Q_strncpyz(0x4c0c4, local_38, 0x100);
	*(int *)local_3c = trap_Cvar_VariableValue(0x659f);
	local_24 = (int)(*(int *)local_3c - 0x3f800000);
	if (local_24 < 0x0) goto jmp_a2d0;
	if (local_24 <= 0x6) goto jmp_a2d3;
jmp_a2d0:
	local_24 = 0x6;
jmp_a2d3:
	bss_4c268 = *(int *)((local_24 << 0x2) + 0x2060);
	memset(0x4c3b0, 0x0, 0x46c);
	local_2c = 0x43160000;
	local_44 = 0x0;
	local_28 = local_44;
	local_30 = local_44;
	local_48 = UI_Cvar_VariableString(0x65b4);
	UI_PlayerInfo_SetModel(0x4c3b0, local_48);
	UI_PlayerInfo_SetInfo(0x4c3b0, 0x16, 0xb, &local_28, 0x2988, 0x2, 0x0);
	local_4c = trap_Cvar_VariableValue(0x65a6);
	local_50 = Com_Clamp(0x40a00000, 0x42c80000, local_4c);
	local_34 = (int)local_50;
	bss_4c208 = (0x14 - (local_34 / 0x5));
}

/*
=================
PlayerSettings_MenuEvent

Address: 0xa332
Stack Size: 0x1c
Calls: trap_Cvar_Set, UI_PopMenu, UI_PlayerModelMenu, PlayerSettings_SaveChanges, va
=================
*/
void PlayerSettings_MenuEvent(int arg_0, int arg_1) {
	char	local_10[8];
	int		local_18;

	if (arg_1 == 0x3) goto jmp_a339;
	goto jmp_a373;
jmp_a339:
	*(int *)local_10 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_10 == 0xb) goto jmp_a34e;
	if (*(int *)local_10 == 0xd) goto jmp_a36d;
	if (*(int *)local_10 == 0xe) goto jmp_a365;
	goto jmp_a373;
jmp_a34e:
	local_18 = va(0x659c, (0x64 - (0x19 * bss_4c208)));
	trap_Cvar_Set(0x65a6, local_18);
	goto jmp_a373;
jmp_a365:
	PlayerSettings_SaveChanges();
	UI_PlayerModelMenu();
	goto jmp_a373;
jmp_a36d:
	PlayerSettings_SaveChanges();
	UI_PopMenu();
jmp_a373:
}

/*
=================
PlayerSettings_MenuInit

Address: 0xa375
Stack Size: 0x18
Calls: memset, PlayerSettings_SetMenuItems, Menu_AddItem, PlayerSettings_Cache
Called by: UI_PlayerSettingsMenu
=================
*/
void PlayerSettings_MenuInit(void) {
	int		local_14;

	memset(0x4be0c, 0x0, 0xa54);
	PlayerSettings_Cache();
	bss_4bf1c = 0xa28c;
	bss_4bf20 = 0x1;
	bss_4bf24 = 0x1;
	bss_4bf2c = 0xa;
	bss_4bf38 = 0x140;
	bss_4bf3c = 0x10;
	bss_4bf68 = 0x658c;
	bss_4bf70 = 0x2160;
	bss_4bf6c = 0x1;
	bss_4bf74 = 0x6;
	bss_4bf78 = 0x657a;
	bss_4bfa0 = 0x4004;
	bss_4bf80 = 0x0;
	bss_4bf84 = 0x4e;
	bss_4bfc0 = 0x100;
	bss_4bfc4 = 0x149;
	bss_4bfcc = 0x6;
	bss_4bfd0 = 0x6568;
	bss_4bff8 = 0x4004;
	bss_4bfd8 = 0x178;
	bss_4bfdc = 0x4c;
	bss_4c018 = 0x100;
	bss_4c01c = 0x14e;
	local_14 = 0x90;
	bss_4c07c = 0x4;
	bss_4c0a8 = 0x8000;
	bss_4c0b4 = 0x9fc6;
	bss_4c0c0 = 0x14;
	bss_4c1c4 = 0x14;
	bss_4c088 = 0xc0;
	bss_4c08c = local_14;
	bss_4c090 = 0xb8;
	bss_4c094 = (local_14 - 0x8);
	bss_4c098 = 0x188;
	bss_4c09c = (local_14 + 0x36);
	local_14 = (local_14 + 0x51);
	bss_4c1c8 = 0x3;
	bss_4c1f4 = 0x8000;
	bss_4c1d0 = 0xb;
	bss_4c200 = 0xa0e9;
	bss_4c1d4 = 0xc0;
	bss_4c1d8 = local_14;
	bss_4c1dc = 0xb8;
	bss_4c1e0 = (local_14 - 0x8);
	bss_4c1e4 = 0x188;
	bss_4c1e8 = (local_14 + 0x36);
	bss_4c20c = 0x14;
	local_14 = (local_14 + 0x51);
	bss_4c228 = 0x3;
	bss_4c254 = 0x8000;
	bss_4c230 = 0xc;
	bss_4c260 = 0xa15b;
	bss_4c234 = 0xc0;
	bss_4c238 = local_14;
	bss_4c23c = 0xb8;
	bss_4c240 = (local_14 - 0x8);
	bss_4c244 = 0x188;
	bss_4c248 = (local_14 + 0x36);
	bss_4c26c = 0x7;
	bss_4c2e0 = 0x6;
	bss_4c2e4 = 0x6557;
	bss_4c30c = 0x110;
	bss_4c2e8 = 0xe;
	bss_4c310 = 0xa332;
	bss_4c2ec = 0x280;
	bss_4c2f0 = 0x1a0;
	bss_4c32c = 0x80;
	bss_4c330 = 0x40;
	bss_4c31c = 0x6546;
	bss_4c024 = 0x6;
	bss_4c050 = 0x4000;
	bss_4c05c = 0xa1f8;
	bss_4c030 = 0x190;
	bss_4c034 = 0xffffffd8;
	bss_4c070 = 0x140;
	bss_4c074 = 0x230;
	bss_4c288 = 0x6;
	bss_4c28c = 0x6536;
	bss_4c2b4 = 0x104;
	bss_4c290 = 0xd;
	bss_4c2b8 = 0xa332;
	bss_4c294 = 0x0;
	bss_4c298 = 0x1a0;
	bss_4c2d4 = 0x80;
	bss_4c2d8 = 0x40;
	bss_4c2c4 = 0x6526;
	bss_4c338 = 0x6;
	bss_4c364 = 0x100804;
	bss_4c344 = 0x0;
	bss_4c348 = 0x0;
	bss_4c384 = 0x280;
	bss_4c388 = 0x1e0;
	Menu_AddItem(0x4be0c, 0x4bf2c);
	Menu_AddItem(0x4be0c, 0x4bf74);
	Menu_AddItem(0x4be0c, 0x4bfcc);
	Menu_AddItem(0x4be0c, 0x4c07c);
	Menu_AddItem(0x4be0c, 0x4c1c8);
	Menu_AddItem(0x4be0c, 0x4c228);
	Menu_AddItem(0x4be0c, 0x4c2e0);
	Menu_AddItem(0x4be0c, 0x4c288);
	Menu_AddItem(0x4be0c, 0x4c024);
	Menu_AddItem(0x4be0c, 0x4c338);
	PlayerSettings_SetMenuItems();
}

/*
=================
PlayerSettings_Cache

Address: 0xa4fc
Stack Size: 0x2c
Calls: trap_R_RegisterShaderNoMip
Called by: PlayerSettings_MenuInit, UI_Cache_f
=================
*/
void PlayerSettings_Cache(void) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	trap_R_RegisterShaderNoMip(0x657a);
	trap_R_RegisterShaderNoMip(0x6568);
	trap_R_RegisterShaderNoMip(0x6557);
	trap_R_RegisterShaderNoMip(0x6546);
	trap_R_RegisterShaderNoMip(0x6536);
	trap_R_RegisterShaderNoMip(0x6526);
	local_c = trap_R_RegisterShaderNoMip(0x6515);
	bss_4c390 = local_c;
	local_10 = trap_R_RegisterShaderNoMip(0x6505);
	bss_4c394 = local_10;
	local_14 = trap_R_RegisterShaderNoMip(0x64f5);
	bss_4c398 = local_14;
	local_18 = trap_R_RegisterShaderNoMip(0x64e5);
	bss_4c39c = local_18;
	local_1c = trap_R_RegisterShaderNoMip(0x64d4);
	bss_4c3a0 = local_1c;
	local_20 = trap_R_RegisterShaderNoMip(0x64c3);
	bss_4c3a4 = local_20;
	local_24 = trap_R_RegisterShaderNoMip(0x64b2);
	bss_4c3a8 = local_24;
	local_28 = trap_R_RegisterShaderNoMip(0x64a0);
	bss_4c3ac = local_28;
}

/*
=================
UI_PlayerSettingsMenu

Address: 0xa56d
Stack Size: 0xc
Calls: UI_PushMenu, PlayerSettings_MenuInit
Called by: UI_SPLevelMenu_PlayerEvent, UI_SetupMenu_Event
=================
*/
void UI_PlayerSettingsMenu(void) {

	PlayerSettings_MenuInit();
	UI_PushMenu(0x4be0c);
}

/*
=================
Preferences_SetMenuItems

Address: 0xa578
Stack Size: 0x68
Calls: trap_Cvar_VariableValue, Com_Clamp
Called by: Preferences_MenuInit
=================
*/
void Preferences_SetMenuItems(void) {
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

	local_14 = trap_Cvar_VariableValue(0x67d1);
	bss_4cab8 = ((int)local_14 %% 0xa);
	local_1c = trap_Cvar_VariableValue(0x67c2);
	if (local_1c == 0x0) goto jmp_a595;
	local_18 = 0x1;
	goto jmp_a598;
jmp_a595:
	local_18 = 0x0;
jmp_a598:
	bss_4cb14 = local_18;
	local_24 = trap_Cvar_VariableValue(0x67b5);
	if (local_24 == 0x0) goto jmp_a5ab;
	local_20 = 0x1;
	goto jmp_a5ae;
jmp_a5ab:
	local_20 = 0x0;
jmp_a5ae:
	bss_4cb54 = local_20;
	local_2c = trap_Cvar_VariableValue(0x67ac);
	if (local_2c == 0x0) goto jmp_a5c1;
	local_28 = 0x1;
	goto jmp_a5c4;
jmp_a5c1:
	local_28 = 0x0;
jmp_a5c4:
	bss_4cb94 = local_28;
	local_34 = trap_Cvar_VariableValue(0x6796);
	if (local_34 == 0x0) goto jmp_a5d7;
	local_30 = 0x1;
	goto jmp_a5da;
jmp_a5d7:
	local_30 = 0x0;
jmp_a5da:
	bss_4cc14 = local_30;
	local_3c = trap_Cvar_VariableValue(0x6787);
	if (local_3c == 0x0) goto jmp_a5ed;
	local_38 = 0x1;
	goto jmp_a5f0;
jmp_a5ed:
	local_38 = 0x0;
jmp_a5f0:
	bss_4cbd4 = local_38;
	local_44 = trap_Cvar_VariableValue(0x677d);
	if (local_44 != 0x0) goto jmp_a603;
	local_40 = 0x1;
	goto jmp_a606;
jmp_a603:
	local_40 = 0x0;
jmp_a606:
	bss_4cc54 = local_40;
	local_4c = trap_Cvar_VariableValue(0x6774);
	if (local_4c == 0x0) goto jmp_a619;
	local_48 = 0x1;
	goto jmp_a61c;
jmp_a619:
	local_48 = 0x0;
jmp_a61c:
	bss_4cc94 = local_48;
	local_54 = trap_Cvar_VariableValue(0x6766);
	if (local_54 == 0x0) goto jmp_a62f;
	local_50 = 0x1;
	goto jmp_a632;
jmp_a62f:
	local_50 = 0x0;
jmp_a632:
	bss_4ccd4 = local_50;
	local_58 = trap_Cvar_VariableValue(0x6753);
	local_5c = Com_Clamp(0x0, 0x40400000, local_58);
	bss_4cd18 = (int)local_5c;
	local_64 = trap_Cvar_VariableValue(0x6742);
	if (local_64 == 0x0) goto jmp_a65b;
	local_60 = 0x1;
	goto jmp_a65e;
jmp_a65b:
	local_60 = 0x0;
jmp_a65e:
	bss_4cd74 = local_60;
}

/*
=================
Preferences_Event

Address: 0xa664
Stack Size: 0x1c
Calls: trap_Cvar_Reset, trap_Cvar_SetValue, UI_PopMenu
=================
*/
void Preferences_Event(int arg_0, int arg_1) {
	char	local_10[8];
	int		local_18;

	if (arg_1 == 0x3) goto jmp_a66b;
	goto jmp_a71c;
jmp_a66b:
	*(int *)local_10 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_10 < 0x7f) goto jmp_a71c;
	if (*(int *)local_10 > 0x8a) goto jmp_a71c;
	goto *(int *)((*(int *)local_10 << 0x2) + 0x1f04);
	trap_Cvar_SetValue(0x67d1, (float)bss_4cab8);
	goto jmp_a71c;
	trap_Cvar_SetValue(0x67c2, (float)bss_4cb14);
	goto jmp_a71c;
#define next_call_arg_0 "0x677d"
	if (bss_4cc54 != 0x0) goto jmp_a6a3;
	local_18 = 0x1;
	goto jmp_a6a6;
jmp_a6a3:
	local_18 = 0x0;
jmp_a6a6:
#define next_call_arg_1 "(float)local_18"
	trap_Cvar_SetValue();
	goto jmp_a71c;
	if (bss_4cb54 == 0x0) goto jmp_a6ba;
	trap_Cvar_Reset(0x67b5);
	goto jmp_a71c;
jmp_a6ba:
	trap_Cvar_SetValue(0x67b5, 0x0);
	goto jmp_a71c;
	trap_Cvar_SetValue(0x67ac, (float)bss_4cb94);
	goto jmp_a71c;
	trap_Cvar_SetValue(0x6787, (float)bss_4cbd4);
	goto jmp_a71c;
	trap_Cvar_SetValue(0x6796, (float)bss_4cc14);
	goto jmp_a71c;
	trap_Cvar_SetValue(0x6774, (float)bss_4cc94);
	goto jmp_a71c;
	trap_Cvar_SetValue(0x6766, (float)bss_4ccd4);
	goto jmp_a71c;
	trap_Cvar_SetValue(0x6753, (float)bss_4cd18);
	goto jmp_a71c;
	trap_Cvar_SetValue(0x6742, (float)bss_4cd74);
	trap_Cvar_SetValue(0x6731, (float)bss_4cd74);
	goto jmp_a71c;
	UI_PopMenu();
jmp_a71c:
}

/*
=================
Crosshair_Draw

Address: 0xa71e
Stack Size: 0x50
Calls: UI_DrawHandlePic, UI_DrawString, UI_DrawChar, UI_FillRect
=================
*/
void Crosshair_Draw(int arg_0) {
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

	local_1c = arg_0;
	local_20 = *(int *)(local_1c + 0xc);
	local_3c = 0x10;
	local_24 = *(int *)(local_1c + local_3c);
	local_30 = local_3c;
	if (*(int *)*(int *)(local_1c + 0x24) != *(int *)(local_1c + 0x28)) goto jmp_a74a;
	*(int *)local_34 = 0x1;
	goto jmp_a74d;
jmp_a74a:
	*(int *)local_34 = 0x0;
jmp_a74d:
	local_2c = *(int *)local_34;
	if ((*(int *)(local_1c + 0x2c) & 0x2000) == 0x0) goto jmp_a75f;
	local_28 = 0x21e0;
	goto jmp_a785;
jmp_a75f:
	if (local_2c == 0x0) goto jmp_a76e;
	local_28 = 0x2200;
	local_30 = (local_30 | 0x4000);
	goto jmp_a785;
jmp_a76e:
	if ((*(int *)(local_1c + 0x2c) & 0x1) == 0x0) goto jmp_a782;
	local_28 = 0x2200;
	local_30 = (local_30 | 0x1000);
	goto jmp_a785;
jmp_a782:
	local_28 = 0x21f0;
jmp_a785:
	if (local_2c == 0x0) goto jmp_a7d1;
	local_44 = *(int *)(local_1c + 0x14);
#define next_call_arg_0 "(float)local_44"
	local_48 = *(int *)(local_1c + 0x18);
#define next_call_arg_1 "(float)local_48"
	local_4c = 0x1;
#define next_call_arg_2 "(float)((*(int *)(local_1c + 0x1c) - local_44) + local_4c)"
#define next_call_arg_3 "(float)((*(int *)(local_1c + 0x20) - local_48) + local_4c)"
#define next_call_arg_4 "0x2210"
	UI_FillRect();
	UI_DrawChar(local_20, local_24, 0xd, 0x1011, local_28);
jmp_a7d1:
	UI_DrawString((local_20 - 0x8), local_24, *(int *)(local_1c + 0x4), (local_30 | 0x2), local_28);
	if (*(int *)(local_1c + 0x40) != 0x0) goto jmp_a7f3;
	goto jmp_a816;
jmp_a7f3:
#define next_call_arg_0 "(float)(local_20 + 0x8)"
#define next_call_arg_1 "(float)(local_24 - 0x4)"
	local_40 = 0x41c00000;
#define next_call_arg_2 "local_40"
#define next_call_arg_3 "local_40"
#define next_call_arg_4 "*(int *)((*(int *)(local_1c + 0x40) << 0x2) + 0x4cdd0)"
	UI_DrawHandlePic();
jmp_a816:
}

/*
=================
Preferences_MenuInit

Address: 0xa818
Stack Size: 0x1c
Calls: memset, Preferences_SetMenuItems, Menu_AddItem, strlen, Preferences_Cache
Called by: UI_PreferencesMenu
=================
*/
void Preferences_MenuInit(void) {
	int		local_14;
	int		local_18;

	memset(0x4c860, 0x0, 0x598);
	Preferences_Cache();
	bss_4c974 = 0x1;
	bss_4c978 = 0x1;
	bss_4c980 = 0xa;
	bss_4c98c = 0x140;
	bss_4c990 = 0x10;
	bss_4c9bc = 0x6724;
	bss_4c9c4 = 0x2160;
	bss_4c9c0 = 0x1;
	bss_4c9c8 = 0x6;
	bss_4c9cc = 0x6712;
	bss_4c9f4 = 0x4000;
	bss_4c9d4 = 0x0;
	bss_4c9d8 = 0x4e;
	bss_4ca14 = 0x100;
	bss_4ca18 = 0x149;
	bss_4ca20 = 0x6;
	bss_4ca24 = 0x6700;
	bss_4ca4c = 0x4000;
	bss_4ca2c = 0x178;
	bss_4ca30 = 0x4c;
	bss_4ca6c = 0x100;
	bss_4ca70 = 0x14e;
	local_14 = 0x90;
	bss_4ca78 = 0x3;
	bss_4caa4 = 0x18102;
	bss_4ca84 = 0x168;
	bss_4ca88 = local_14;
	bss_4ca7c = 0x66f5;
	bss_4caa8 = 0xa664;
	bss_4cab0 = 0xa71e;
	bss_4ca80 = 0x7f;
	bss_4ca90 = (local_14 - 0x4);
	bss_4ca98 = (local_14 + 0x14);
	local_18 = strlen(bss_4ca7c);
	bss_4ca8c = (0x168 - ((local_18 + 0x1) << 0x3));
	bss_4ca94 = 0x198;
	bss_4cabc = 0xa;
	local_14 = (local_14 + 0x16);
	bss_4cad8 = 0x5;
	bss_4cadc = 0x66e7;
	bss_4cb04 = 0x102;
	bss_4cb08 = 0xa664;
	bss_4cae0 = 0x80;
	bss_4cae4 = 0x168;
	bss_4cae8 = local_14;
	local_14 = (local_14 + 0x10);
	bss_4cb58 = 0x5;
	bss_4cb5c = 0x66d7;
	bss_4cb84 = 0x102;
	bss_4cb88 = 0xa664;
	bss_4cb60 = 0x83;
	bss_4cb64 = 0x168;
	bss_4cb68 = local_14;
	local_14 = (local_14 + 0x12);
	bss_4cb18 = 0x5;
	bss_4cb1c = 0x66c7;
	bss_4cb44 = 0x102;
	bss_4cb48 = 0xa664;
	bss_4cb20 = 0x82;
	bss_4cb24 = 0x168;
	bss_4cb28 = local_14;
	local_14 = (local_14 + 0x12);
	bss_4cb98 = 0x5;
	bss_4cb9c = 0x66b7;
	bss_4cbc4 = 0x102;
	bss_4cbc8 = 0xa664;
	bss_4cba0 = 0x84;
	bss_4cba4 = 0x168;
	bss_4cba8 = local_14;
	local_14 = (local_14 + 0x12);
	bss_4cbd8 = 0x5;
	bss_4cbdc = 0x66a6;
	bss_4cc04 = 0x102;
	bss_4cc08 = 0xa664;
	bss_4cbe0 = 0x85;
	bss_4cbe4 = 0x168;
	bss_4cbe8 = local_14;
	local_14 = (local_14 + 0x12);
	bss_4cc18 = 0x5;
	bss_4cc1c = 0x6694;
	bss_4cc44 = 0x102;
	bss_4cc48 = 0xa664;
	bss_4cc20 = 0x81;
	bss_4cc24 = 0x168;
	bss_4cc28 = local_14;
	local_14 = (local_14 + 0x12);
	bss_4cc58 = 0x5;
	bss_4cc5c = 0x6682;
	bss_4cc84 = 0x102;
	bss_4cc88 = 0xa664;
	bss_4cc60 = 0x86;
	bss_4cc64 = 0x168;
	bss_4cc68 = local_14;
	local_14 = (local_14 + 0x12);
	bss_4cc98 = 0x5;
	bss_4cc9c = 0x666d;
	bss_4ccc4 = 0x102;
	bss_4ccc8 = 0xa664;
	bss_4cca0 = 0x87;
	bss_4cca4 = 0x168;
	bss_4cca8 = local_14;
	local_14 = (local_14 + 0x12);
	bss_4ccd8 = 0x3;
	bss_4ccdc = 0x665a;
	bss_4cd04 = 0x102;
	bss_4cd08 = 0xa664;
	bss_4cce0 = 0x88;
	bss_4cce4 = 0x168;
	bss_4cce8 = local_14;
	bss_4cd24 = 0x20ec;
	local_14 = (local_14 + 0x12);
	bss_4cd38 = 0x5;
	bss_4cd3c = 0x6643;
	bss_4cd64 = 0x102;
	bss_4cd68 = 0xa664;
	bss_4cd40 = 0x89;
	bss_4cd44 = 0x168;
	bss_4cd48 = local_14;
	bss_4cd78 = 0x6;
	bss_4cd7c = 0x6633;
	bss_4cda4 = 0x104;
	bss_4cda8 = 0xa664;
	bss_4cd80 = 0x8a;
	bss_4cd84 = 0x0;
	bss_4cd88 = 0x1a0;
	bss_4cdc4 = 0x80;
	bss_4cdc8 = 0x40;
	bss_4cdb4 = 0x6623;
	Menu_AddItem(0x4c860, 0x4c980);
	Menu_AddItem(0x4c860, 0x4c9c8);
	Menu_AddItem(0x4c860, 0x4ca20);
	Menu_AddItem(0x4c860, 0x4ca78);
	Menu_AddItem(0x4c860, 0x4cad8);
	Menu_AddItem(0x4c860, 0x4cb58);
	Menu_AddItem(0x4c860, 0x4cb18);
	Menu_AddItem(0x4c860, 0x4cb98);
	Menu_AddItem(0x4c860, 0x4cbd8);
	Menu_AddItem(0x4c860, 0x4cc18);
	Menu_AddItem(0x4c860, 0x4cc58);
	Menu_AddItem(0x4c860, 0x4cc98);
	Menu_AddItem(0x4c860, 0x4ccd8);
	Menu_AddItem(0x4c860, 0x4cd38);
	Menu_AddItem(0x4c860, 0x4cd78);
	Preferences_SetMenuItems();
}

/*
=================
Preferences_Cache

Address: 0xaa4d
Stack Size: 0x20
Calls: trap_R_RegisterShaderNoMip, va
Called by: Preferences_MenuInit, UI_Cache_f
=================
*/
void Preferences_Cache(void) {
	char	local_10[8];
	int		local_18;
	int		local_1c;

	trap_R_RegisterShaderNoMip(0x6712);
	trap_R_RegisterShaderNoMip(0x6700);
	trap_R_RegisterShaderNoMip(0x6633);
	trap_R_RegisterShaderNoMip(0x6623);
	*(int *)local_10 = 0x0;
jmp_aa65:
	local_18 = va(0x6610, (*(int *)local_10 + 0x61));
	local_1c = trap_R_RegisterShaderNoMip(local_18);
	*(int *)((*(int *)local_10 << 0x2) + 0x4cdd0) = local_1c;
	*(int *)local_10 = (*(int *)local_10 + 0x1);
	if (*(int *)local_10 < 0xa) goto jmp_aa65;
}

/*
=================
UI_PreferencesMenu

Address: 0xaa8c
Stack Size: 0xc
Calls: UI_PushMenu, Preferences_MenuInit
Called by: UI_SetupMenu_Event
=================
*/
void UI_PreferencesMenu(void) {

	Preferences_MenuInit();
	UI_PushMenu(0x4c860);
}

/*
=================
Text_Init

Address: 0xaa97
Stack Size: 0xc
Called by: Menu_AddItem
=================
*/
void Text_Init(int arg_0) {
	int		local_8;

	local_8 = (arg_0 + 0x2c);
	*(int *)local_8 = (*(int *)local_8 | 0x4000);
}

/*
=================
Text_Draw

Address: 0xaaa8
Stack Size: 0x22c
Calls: UI_DrawString, strcat, strcpy
Called by: Menu_Draw
=================
*/
void Text_Draw(int arg_0) {
	char	local_1c[512];
	int		local_21c;
	int		local_220;
	char	local_224[8];

	arg_0 = arg_0;
	local_21c = *(int *)(arg_0 + 0xc);
	local_220 = *(int *)(arg_0 + 0x10);
	*(char *)local_1c = 0x0;
	if (*(int *)(arg_0 + 0x4) == 0x0) goto jmp_aad0;
	strcpy(local_1c, *(int *)(arg_0 + 0x4));
jmp_aad0:
	if (*(int *)(arg_0 + 0x3c) == 0x0) goto jmp_aae2;
	strcat(local_1c, *(int *)(arg_0 + 0x3c));
jmp_aae2:
	if ((*(int *)(arg_0 + 0x2c) & 0x2000) == 0x0) goto jmp_aaf0;
	*(int *)local_224 = 0x21e0;
	goto jmp_aaf7;
jmp_aaf0:
	*(int *)local_224 = *(int *)(arg_0 + 0x44);
jmp_aaf7:
	UI_DrawString(local_21c, local_220, local_1c, *(int *)(arg_0 + 0x40), *(int *)local_224);
}

/*
=================
BText_Init

Address: 0xab0d
Stack Size: 0xc
Called by: Menu_AddItem
=================
*/
void BText_Init(int arg_0) {
	int		local_8;

	local_8 = (arg_0 + 0x2c);
	*(int *)local_8 = (*(int *)local_8 | 0x4000);
}

/*
=================
BText_Draw

Address: 0xab1e
Stack Size: 0x30
Calls: UI_DrawBannerString
Called by: Menu_Draw
=================
*/
void BText_Draw(int arg_0) {
	int		local_1c;
	int		local_20;
	char	local_24[12];

	arg_0 = arg_0;
	local_1c = *(int *)(arg_0 + 0xc);
	local_20 = *(int *)(arg_0 + 0x10);
	if ((*(int *)(arg_0 + 0x2c) & 0x2000) == 0x0) goto jmp_ab3f;
	*(int *)local_24 = 0x21e0;
	goto jmp_ab46;
jmp_ab3f:
	*(int *)local_24 = *(int *)(arg_0 + 0x44);
jmp_ab46:
	UI_DrawBannerString(local_1c, local_20, *(int *)(arg_0 + 0x3c), *(int *)(arg_0 + 0x40), *(int *)local_24);
}

/*
=================
PText_Init

Address: 0xab60
Stack Size: 0x30
Calls: UI_ProportionalStringWidth, UI_ProportionalSizeScale
Called by: Menu_AddItem
=================
*/
void PText_Init(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[8];
	char	local_28[8];

	arg_0 = arg_0;
	*(int *)local_20 = UI_ProportionalSizeScale(*(int *)(arg_0 + 0x40));
	local_c = *(int *)local_20;
	local_10 = *(int *)(arg_0 + 0xc);
	local_14 = *(int *)(arg_0 + 0x10);
	*(int *)local_28 = UI_ProportionalStringWidth(*(int *)(arg_0 + 0x3c));
	local_18 = (int)((float)*(int *)local_28 * local_c);
	local_1c = (int)(0x41d80000 * local_c);
	if ((*(int *)(arg_0 + 0x2c) & 0x10) == 0x0) goto jmp_abad;
	local_10 = (local_10 - local_18);
	goto jmp_abbf;
jmp_abad:
	if ((*(int *)(arg_0 + 0x2c) & 0x8) == 0x0) goto jmp_abbf;
	local_10 = (local_10 - (local_18 / 0x2));
jmp_abbf:
	*(int *)(arg_0 + 0x14) = (int)((float)local_10 - (0x40400000 * local_c));
	*(int *)(arg_0 + 0x1c) = (int)((float)(local_10 + local_18) + (0x40400000 * local_c));
	*(int *)(arg_0 + 0x18) = local_14;
	*(int *)(arg_0 + 0x20) = (local_14 + local_1c);
}

/*
=================
PText_Draw

Address: 0xabf1
Stack Size: 0x3c
Calls: UI_DrawProportionalString, Menu_ItemAtCursor
Called by: Menu_Draw
=================
*/
void PText_Draw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[16];
	int		local_38;

	arg_0 = arg_0;
	local_20 = *(int *)(arg_0 + 0xc);
	local_24 = *(int *)(arg_0 + 0x10);
	if ((*(int *)(arg_0 + 0x2c) & 0x2000) == 0x0) goto jmp_ac12;
	*(int *)local_28 = 0x21e0;
	goto jmp_ac19;
jmp_ac12:
	*(int *)local_28 = *(int *)(arg_0 + 0x44);
jmp_ac19:
	local_1c = *(int *)(arg_0 + 0x40);
	if ((*(int *)(arg_0 + 0x2c) & 0x100) == 0x0) goto jmp_ac46;
	local_38 = Menu_ItemAtCursor(*(int *)(arg_0 + 0x24));
	if (arg_0 != local_38) goto jmp_ac40;
	local_1c = (local_1c | 0x4000);
	goto jmp_ac46;
jmp_ac40:
	local_1c = (local_1c | 0x2000);
jmp_ac46:
	UI_DrawProportionalString(local_20, local_24, *(int *)(arg_0 + 0x3c), local_1c, *(int *)local_28);
}

/*
=================
Bitmap_Init

Address: 0xac5d
Stack Size: 0x1c
Called by: UI_SPLevelMenu_SetMenuItems, Menu_AddItem
=================
*/
void Bitmap_Init(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	char	local_14[8];

	arg_0 = arg_0;
	local_c = *(int *)(arg_0 + 0xc);
	*(int *)local_14 = *(int *)(arg_0 + 0x10);
	local_8 = *(int *)(arg_0 + 0x4c);
	local_10 = *(int *)(arg_0 + 0x50);
	if (local_8 >= 0x0) goto jmp_ac87;
	local_8 = -local_8;
jmp_ac87:
	if (local_10 >= 0x0) goto jmp_ac90;
	local_10 = -local_10;
jmp_ac90:
	if ((*(int *)(arg_0 + 0x2c) & 0x10) == 0x0) goto jmp_aca2;
	local_c = (local_c - local_8);
	goto jmp_acb4;
jmp_aca2:
	if ((*(int *)(arg_0 + 0x2c) & 0x8) == 0x0) goto jmp_acb4;
	local_c = (local_c - (local_8 / 0x2));
jmp_acb4:
	*(int *)(arg_0 + 0x14) = local_c;
	*(int *)(arg_0 + 0x1c) = (local_c + local_8);
	*(int *)(arg_0 + 0x18) = *(int *)local_14;
	*(int *)(arg_0 + 0x20) = (*(int *)local_14 + local_10);
	*(int *)(arg_0 + 0x44) = 0x0;
	*(int *)(arg_0 + 0x48) = 0x0;
}

/*
=================
Bitmap_Draw

Address: 0xace4
Stack Size: 0x74
Calls: sin, trap_R_SetColor, trap_R_RegisterShaderNoMip, Menu_ItemAtCursor, UI_DrawHandlePic
Called by: ServerOptions_LevelshotDraw, Menu_Draw
=================
*/
void Bitmap_Draw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[20];
	int		local_4c;
	int		local_50;
	int		local_54;
	char	local_58[8];
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;
	int		local_70;

	arg_0 = arg_0;
	local_1c = (float)*(int *)(arg_0 + 0xc);
	local_24 = (float)*(int *)(arg_0 + 0x10);
	local_20 = (float)*(int *)(arg_0 + 0x4c);
	local_28 = (float)*(int *)(arg_0 + 0x50);
	if ((*(int *)(arg_0 + 0x2c) & 0x10) == 0x0) goto jmp_ad1b;
	local_1c = (local_1c - local_20);
	goto jmp_ad2d;
jmp_ad1b:
	if ((*(int *)(arg_0 + 0x2c) & 0x8) == 0x0) goto jmp_ad2d;
	local_1c = (local_1c - (local_20 / 0x40000000));
jmp_ad2d:
	if (*(int *)(arg_0 + 0x4) == 0x0) goto jmp_ad6b;
	if (*(int *)(arg_0 + 0x44) != 0x0) goto jmp_ad6b;
	local_4c = trap_R_RegisterShaderNoMip(*(int *)(arg_0 + 0x4));
	*(int *)(arg_0 + 0x44) = local_4c;
	if (*(int *)(arg_0 + 0x44) != 0x0) goto jmp_ad6b;
	if (*(int *)(arg_0 + 0x40) == 0x0) goto jmp_ad6b;
	*(int *)local_58 = trap_R_RegisterShaderNoMip(*(int *)(arg_0 + 0x40));
	*(int *)(arg_0 + 0x44) = *(int *)local_58;
jmp_ad6b:
	if (*(int *)(arg_0 + 0x3c) == 0x0) goto jmp_ad8a;
	if (*(int *)(arg_0 + 0x48) != 0x0) goto jmp_ad8a;
	local_50 = trap_R_RegisterShaderNoMip(*(int *)(arg_0 + 0x3c));
	*(int *)(arg_0 + 0x48) = local_50;
jmp_ad8a:
	if ((*(int *)(arg_0 + 0x2c) & 0x2000) == 0x0) goto jmp_adbb;
	if (*(int *)(arg_0 + 0x44) == 0x0) goto jmp_aeca;
	trap_R_SetColor(0x2a48);
	UI_DrawHandlePic(local_1c, local_24, local_20, local_28, *(int *)(arg_0 + 0x44));
	trap_R_SetColor(0x0);
	goto jmp_aeca;
jmp_adbb:
	if (*(int *)(arg_0 + 0x44) == 0x0) goto jmp_add7;
	UI_DrawHandlePic(local_1c, local_24, local_20, local_28, *(int *)(arg_0 + 0x44));
jmp_add7:
	local_54 = *(int *)(arg_0 + 0x2c);
	*(int *)local_58 = 0x0;
	if ((local_54 & 0x20000) != *(int *)local_58) goto jmp_adef;
	if ((local_54 & 0x100) == *(int *)local_58) goto jmp_ae62;
jmp_adef:
	local_60 = Menu_ItemAtCursor(*(int *)(arg_0 + 0x24));
	if (arg_0 != local_60) goto jmp_ae62;
	if (*(int *)(arg_0 + 0x54) == 0x0) goto jmp_ae28;
	local_64 = (arg_0 + 0x54);
	local_30 = *(int *)*(int *)local_64;
	local_34 = *(int *)(*(int *)local_64 + 0x4);
	*(int *)local_38 = *(int *)(*(int *)(arg_0 + 0x54) + 0x8);
	local_2c = &local_30;
	goto jmp_ae2b;
jmp_ae28:
	local_2c = 0x21d0;
jmp_ae2b:
	local_64 = sin((float)(bss_db58 / 0x4b));
	*(int *)(local_2c + 0xc) = ((0x3f000000 * local_64) + 0x3f000000);
	trap_R_SetColor(local_2c);
	UI_DrawHandlePic(local_1c, local_24, local_20, local_28, *(int *)(arg_0 + 0x48));
	trap_R_SetColor(0x0);
	goto jmp_aeca;
jmp_ae62:
	local_68 = *(int *)(arg_0 + 0x2c);
	local_6c = 0x0;
	if ((local_68 & 0x40) != local_6c) goto jmp_ae89;
	if ((local_68 & 0x80) == local_6c) goto jmp_aeca;
	local_70 = Menu_ItemAtCursor(*(int *)(arg_0 + 0x24));
	if (arg_0 != local_70) goto jmp_aeca;
jmp_ae89:
	if (*(int *)(arg_0 + 0x54) == 0x0) goto jmp_aeb5;
	trap_R_SetColor(*(int *)(arg_0 + 0x54));
	UI_DrawHandlePic(local_1c, local_24, local_20, local_28, *(int *)(arg_0 + 0x48));
	trap_R_SetColor(0x0);
	goto jmp_aeca;
jmp_aeb5:
	UI_DrawHandlePic(local_1c, local_24, local_20, local_28, *(int *)(arg_0 + 0x48));
jmp_aeca:
}

/*
=================
Action_Init

Address: 0xaecc
Stack Size: 0x28
Calls: strlen
Called by: Menu_AddItem
=================
*/
void Action_Init(int arg_0) {
	int		local_c;
	char	local_10[20];
	int		local_24;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x4) == 0x0) goto jmp_aee8;
	*(int *)local_10 = strlen(*(int *)(arg_0 + 0x4));
	local_c = *(int *)local_10;
	goto jmp_aeeb;
jmp_aee8:
	local_c = 0x0;
jmp_aeeb:
	*(int *)(arg_0 + 0x14) = *(int *)(arg_0 + 0xc);
	*(int *)(arg_0 + 0x1c) = (*(int *)(arg_0 + 0xc) + (local_c << 0x4));
	*(int *)(arg_0 + 0x18) = *(int *)(arg_0 + 0x10);
	local_24 = 0x10;
	*(int *)(arg_0 + 0x20) = (*(int *)(arg_0 + local_24) + local_24);
}

/*
=================
Action_Draw

Address: 0xaf21
Stack Size: 0x3c
Calls: UI_DrawChar, UI_DrawString
Called by: Menu_Draw
=================
*/
void Action_Draw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[20];

	arg_0 = arg_0;
	*(int *)local_28 = 0x0;
	local_1c = 0x2130;
	if ((*(int *)(arg_0 + 0x2c) & 0x2000) == 0x0) goto jmp_af3a;
	local_1c = 0x21e0;
	goto jmp_af80;
jmp_af3a:
	if ((*(int *)(arg_0 + 0x2c) & 0x100) == 0x0) goto jmp_af57;
	if (*(int *)*(int *)(arg_0 + 0x24) != *(int *)(arg_0 + 0x28)) goto jmp_af57;
	local_1c = 0x2200;
	*(int *)local_28 = 0x4000;
	goto jmp_af80;
jmp_af57:
	if ((*(int *)(arg_0 + 0x2c) & 0x80) == 0x0) goto jmp_af71;
	if (*(int *)*(int *)(arg_0 + 0x24) != *(int *)(arg_0 + 0x28)) goto jmp_af71;
	local_1c = 0x2200;
	goto jmp_af80;
jmp_af71:
	if ((*(int *)(arg_0 + 0x2c) & 0x1) == 0x0) goto jmp_af80;
	*(int *)local_28 = 0x1000;
	local_1c = 0x2200;
jmp_af80:
	local_20 = *(int *)(arg_0 + 0xc);
	local_24 = *(int *)(arg_0 + 0x10);
	UI_DrawString(local_20, local_24, *(int *)(arg_0 + 0x4), *(int *)local_28, local_1c);
	if (*(int *)*(int *)(arg_0 + 0x24) != *(int *)(arg_0 + 0x28)) goto jmp_afc1;
	UI_DrawChar((local_20 - 0x10), local_24, 0xd, 0x1000, local_1c);
jmp_afc1:
}

/*
=================
RadioButton_Init

Address: 0xafc3
Stack Size: 0x28
Calls: strlen
Called by: Menu_AddItem
=================
*/
void RadioButton_Init(int arg_0) {
	int		local_c;
	char	local_10[20];
	int		local_24;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x4) == 0x0) goto jmp_afdf;
	*(int *)local_10 = strlen(*(int *)(arg_0 + 0x4));
	local_c = *(int *)local_10;
	goto jmp_afe2;
jmp_afdf:
	local_c = 0x0;
jmp_afe2:
	*(int *)(arg_0 + 0x14) = (*(int *)(arg_0 + 0xc) - ((local_c << 0x3) + 0x8));
	*(int *)(arg_0 + 0x1c) = (*(int *)(arg_0 + 0xc) + 0x30);
	*(int *)(arg_0 + 0x18) = *(int *)(arg_0 + 0x10);
	local_24 = 0x10;
	*(int *)(arg_0 + 0x20) = (*(int *)(arg_0 + local_24) + local_24);
}

/*
=================
RadioButton_Key

Address: 0xb01c
Stack Size: 0x3c
Called by: Menu_DefaultKey
=================
*/
int RadioButton_Key(int arg_0, int arg_1) {
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

	local_10 = arg_1;
	if (local_10 == 0xa3) goto jmp_b087;
	local_14 = 0xa5;
	if (local_10 == local_14) goto jmp_b087;
	if (local_10 > local_14) goto jmp_b051;
	local_18 = arg_1;
	local_1c = 0xd;
	if (local_18 == local_1c) goto jmp_b087;
	if (local_18 < local_1c) goto jmp_b0bb;
	local_20 = arg_1;
	if (local_20 == 0x86) goto jmp_b087;
	if (local_20 == 0x87) goto jmp_b087;
	goto jmp_b0bb;
jmp_b051:
	local_24 = arg_1;
	local_28 = 0xb2;
	if (local_24 == local_28) goto jmp_b07c;
	if (local_24 > local_28) goto jmp_b068;
	if (arg_1 == 0xa9) goto jmp_b087;
	goto jmp_b0bb;
jmp_b068:
	local_2c = arg_1;
	if (local_2c < 0xb9) goto jmp_b0bb;
	if (local_2c > 0xbc) goto jmp_b0bb;
	goto *(int *)((local_2c << 0x2) + 0x1f4c);
jmp_b07c:
	if ((*(int *)(arg_0 + 0x2c) & 0x200) != 0x0) goto jmp_b087;
	goto jmp_b0bb;
jmp_b087:
	local_34 = (arg_0 + 0x3c);
	if (*(int *)local_34 != 0x0) goto jmp_b097;
	local_30 = 0x1;
	goto jmp_b09a;
jmp_b097:
	local_30 = 0x0;
jmp_b09a:
	*(int *)local_34 = local_30;
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_b0b6;
	local_38 = arg_0;
	(*(*(int *)(local_38 + 0x30)))(local_38, 0x3);
jmp_b0b6:
	return menu_move_sound;
jmp_b0bb:
	return 0x0;
}

/*
=================
RadioButton_Draw

Address: 0xb0bf
Stack Size: 0x48
Calls: UI_DrawHandlePic, UI_DrawString, UI_DrawChar, UI_FillRect
Called by: Menu_Draw
=================
*/
void RadioButton_Draw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[8];
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;

	arg_0 = arg_0;
	local_1c = *(int *)(arg_0 + 0xc);
	local_20 = *(int *)(arg_0 + 0x10);
	if (*(int *)*(int *)(arg_0 + 0x24) != *(int *)(arg_0 + 0x28)) goto jmp_b0e3;
	*(int *)local_30 = 0x1;
	goto jmp_b0e6;
jmp_b0e3:
	*(int *)local_30 = 0x0;
jmp_b0e6:
	local_28 = *(int *)local_30;
	if ((*(int *)(arg_0 + 0x2c) & 0x2000) == 0x0) goto jmp_b0fb;
	local_24 = 0x21e0;
	local_2c = 0x10;
	goto jmp_b10d;
jmp_b0fb:
	if (local_28 == 0x0) goto jmp_b107;
	local_24 = 0x2200;
	local_2c = 0x4010;
	goto jmp_b10d;
jmp_b107:
	local_24 = 0x21f0;
	local_2c = 0x10;
jmp_b10d:
	if (local_28 == 0x0) goto jmp_b159;
	local_3c = *(int *)(arg_0 + 0x14);
#define next_call_arg_0 "(float)local_3c"
	local_40 = *(int *)(arg_0 + 0x18);
#define next_call_arg_1 "(float)local_40"
	local_44 = 0x1;
#define next_call_arg_2 "(float)((*(int *)(arg_0 + 0x1c) - local_3c) + local_44)"
#define next_call_arg_3 "(float)((*(int *)(arg_0 + 0x20) - local_40) + local_44)"
#define next_call_arg_4 "0x2210"
	UI_FillRect();
	UI_DrawChar(local_1c, local_20, 0xd, 0x1011, local_24);
jmp_b159:
	if (*(int *)(arg_0 + 0x4) == 0x0) goto jmp_b176;
	UI_DrawString((local_1c - 0x8), local_20, *(int *)(arg_0 + 0x4), 0x12, local_24);
jmp_b176:
	if (*(int *)(arg_0 + 0x3c) != 0x0) goto jmp_b1af;
#define next_call_arg_0 "(float)(local_1c + 0x8)"
#define next_call_arg_1 "(float)(local_20 + 0x2)"
	local_38 = 0x41800000;
#define next_call_arg_2 "local_38"
#define next_call_arg_3 "local_38"
#define next_call_arg_4 "bss_107f8"
	UI_DrawHandlePic();
	UI_DrawString(((local_1c + 0x8) + 0x10), local_20, 0x69dd, local_2c, local_24);
	goto jmp_b1df;
jmp_b1af:
#define next_call_arg_0 "(float)(local_1c + 0x8)"
#define next_call_arg_1 "(float)(local_20 + 0x2)"
	local_38 = 0x41800000;
#define next_call_arg_2 "local_38"
#define next_call_arg_3 "local_38"
#define next_call_arg_4 "bss_107f4"
	UI_DrawHandlePic();
	UI_DrawString(((local_1c + 0x8) + 0x10), local_20, 0x69da, local_2c, local_24);
jmp_b1df:
}

/*
=================
Slider_Init

Address: 0xb1e1
Stack Size: 0x28
Calls: strlen
Called by: Menu_AddItem
=================
*/
void Slider_Init(int arg_0) {
	int		local_c;
	char	local_10[20];
	int		local_24;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x4) == 0x0) goto jmp_b1fd;
	*(int *)local_10 = strlen(*(int *)(arg_0 + 0x4));
	local_c = *(int *)local_10;
	goto jmp_b200;
jmp_b1fd:
	local_c = 0x0;
jmp_b200:
	*(int *)(arg_0 + 0x14) = (*(int *)(arg_0 + 0xc) - ((local_c << 0x3) + 0x8));
	*(int *)(arg_0 + 0x1c) = (*(int *)(arg_0 + 0xc) + 0x68);
	*(int *)(arg_0 + 0x18) = *(int *)(arg_0 + 0x10);
	local_24 = 0x10;
	*(int *)(arg_0 + 0x20) = (*(int *)(arg_0 + local_24) + local_24);
}

/*
=================
Slider_Key

Address: 0xb23a
Stack Size: 0x50
Called by: Menu_DefaultKey
=================
*/
int Slider_Key(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[8];
	int		local_2c;
	char	local_30[24];
	int		local_48;
	int		local_4c;

	arg_0 = arg_0;
	local_1c = arg_1;
	if (local_1c == 0xa3) goto jmp_b2db;
	local_20 = 0xa5;
	if (local_1c == local_20) goto jmp_b300;
	if (local_1c > local_20) goto jmp_b262;
	*(int *)local_24 = arg_1;
	if (*(int *)local_24 == 0x86) goto jmp_b2db;
	if (*(int *)local_24 == 0x87) goto jmp_b300;
	goto jmp_b325;
jmp_b262:
	if (arg_1 == 0xb2) goto jmp_b268;
	goto jmp_b325;
jmp_b268:
	local_14 = ((bss_db5c - *(int *)(arg_0 + 0xc)) - 0x10);
	local_2c = (arg_0 + 0x44);
	local_18 = (int)*(int *)local_2c;
	*(int *)local_30 = *(int *)(arg_0 + 0x3c);
	*(int *)local_2c = ((((float)local_14 / 0x42a00000) * (*(int *)(arg_0 + 0x40) - *(int *)local_30)) + *(int *)local_30);
	if (*(int *)(arg_0 + 0x44) >= *(int *)(arg_0 + 0x3c)) goto jmp_b2b2;
	*(int *)(arg_0 + 0x44) = *(int *)(arg_0 + 0x3c);
	goto jmp_b2c7;
jmp_b2b2:
	if (*(int *)(arg_0 + 0x44) <= *(int *)(arg_0 + 0x40)) goto jmp_b2c7;
	*(int *)(arg_0 + 0x44) = *(int *)(arg_0 + 0x40);
jmp_b2c7:
	if (*(int *)(arg_0 + 0x44) == (float)local_18) goto jmp_b2d6;
	local_10 = menu_move_sound;
	goto jmp_b328;
jmp_b2d6:
	local_10 = 0x0;
	goto jmp_b328;
jmp_b2db:
	if (*(int *)(arg_0 + 0x44) <= *(int *)(arg_0 + 0x3c)) goto jmp_b2fa;
	local_48 = (arg_0 + 0x44);
	*(int *)local_48 = (*(int *)local_48 - 0x3f800000);
	local_10 = menu_move_sound;
	goto jmp_b328;
jmp_b2fa:
	local_10 = menu_buzz_sound;
	goto jmp_b328;
jmp_b300:
	if (*(int *)(arg_0 + 0x44) >= *(int *)(arg_0 + 0x40)) goto jmp_b31f;
	local_4c = (arg_0 + 0x44);
	*(int *)local_4c = (*(int *)local_4c + 0x3f800000);
	local_10 = menu_move_sound;
	goto jmp_b328;
jmp_b31f:
	local_10 = menu_buzz_sound;
	goto jmp_b328;
jmp_b325:
	local_10 = 0x0;
jmp_b328:
	if (local_10 == 0x0) goto jmp_b33f;
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_b33f;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x3);
jmp_b33f:
	return local_10;
}

/*
=================
Slider_Draw

Address: 0xb344
Stack Size: 0x48
Calls: UI_DrawHandlePic, UI_SetColor, UI_DrawString
Called by: Menu_Draw
=================
*/
void Slider_Draw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	char	local_34[12];
	int		local_40;
	int		local_44;

	arg_0 = arg_0;
	local_1c = *(int *)(arg_0 + 0xc);
	local_20 = *(int *)(arg_0 + 0x10);
	if (*(int *)*(int *)(arg_0 + 0x24) != *(int *)(arg_0 + 0x28)) goto jmp_b368;
	*(int *)local_34 = 0x1;
	goto jmp_b36b;
jmp_b368:
	*(int *)local_34 = 0x0;
jmp_b36b:
	local_30 = *(int *)local_34;
	if ((*(int *)(arg_0 + 0x2c) & 0x2000) == 0x0) goto jmp_b380;
	local_28 = 0x21e0;
	local_24 = 0x10;
	goto jmp_b392;
jmp_b380:
	if (local_30 == 0x0) goto jmp_b38c;
	local_28 = 0x2200;
	local_24 = 0x4010;
	goto jmp_b392;
jmp_b38c:
	local_28 = 0x21f0;
	local_24 = 0x10;
jmp_b392:
	UI_DrawString((local_1c - 0x8), local_20, *(int *)(arg_0 + 0x4), (local_24 | 0x2), local_28);
	UI_SetColor(local_28);
	UI_DrawHandlePic((float)(local_1c + 0x8), (float)local_20, 0x42c00000, 0x41800000, sliderBar);
	UI_SetColor(0x0);
	if (*(int *)(arg_0 + 0x40) <= *(int *)(arg_0 + 0x3c)) goto jmp_b410;
	local_44 = *(int *)(arg_0 + 0x3c);
	*(int *)(arg_0 + 0x48) = ((*(int *)(arg_0 + 0x44) - local_44) / (*(int *)(arg_0 + 0x40) - local_44));
	if (*(int *)(arg_0 + 0x48) >= 0x0) goto jmp_b401;
	*(int *)(arg_0 + 0x48) = 0x0;
	goto jmp_b416;
jmp_b401:
	if (*(int *)(arg_0 + 0x48) <= 0x3f800000) goto jmp_b416;
	*(int *)(arg_0 + 0x48) = 0x3f800000;
	goto jmp_b416;
jmp_b410:
	*(int *)(arg_0 + 0x48) = 0x0;
jmp_b416:
	if ((local_24 & 0x4000) == 0x0) goto jmp_b422;
	local_2c = sliderButton_1;
	goto jmp_b426;
jmp_b422:
	local_2c = sliderButton_0;
jmp_b426:
	local_40 = 0x2;
	UI_DrawHandlePic((float)((int)((float)(local_1c + 0x10) + (0x42900000 * *(int *)(arg_0 + 0x48))) - local_40), (float)(local_20 - local_40), 0x41400000, 0x41a00000, local_2c);
}

/*
=================
SpinControl_Init

Address: 0xb44f
Stack Size: 0x3c
Calls: strlen
Called by: Menu_AddItem
=================
*/
void SpinControl_Init(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	char	local_18[8];
	int		local_20;
	int		local_24;
	char	local_28[16];
	int		local_38;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x4) == 0x0) goto jmp_b46d;
	*(int *)local_18 = strlen(*(int *)(arg_0 + 0x4));
	local_14 = (*(int *)local_18 << 0x3);
	goto jmp_b470;
jmp_b46d:
	local_14 = 0x0;
jmp_b470:
	*(int *)(arg_0 + 0x14) = ((*(int *)(arg_0 + 0xc) - 0x8) - local_14);
	local_20 = 0x0;
	*(int *)(arg_0 + 0x44) = local_20;
	local_14 = local_20;
	goto jmp_b4b1;
jmp_b48f:
	local_24 = strlen(local_10);
	local_c = local_24;
	if (local_c <= local_14) goto jmp_b4a3;
	local_14 = local_c;
jmp_b4a3:
	*(int *)local_28 = (arg_0 + 0x44);
	*(int *)*(int *)local_28 = (*(int *)*(int *)local_28 + 0x1);
jmp_b4b1:
	*(int *)local_28 = *(int *)((*(int *)(arg_0 + 0x44) << 0x2) + *(int *)(arg_0 + 0x4c));
	local_10 = *(int *)local_28;
	if (*(int *)local_28 != 0x0) goto jmp_b48f;
	*(int *)(arg_0 + 0x18) = *(int *)(arg_0 + 0x10);
	*(int *)(arg_0 + 0x1c) = (*(int *)(arg_0 + 0xc) + ((local_14 << 0x3) + 0x8));
	local_38 = 0x10;
	*(int *)(arg_0 + 0x20) = (*(int *)(arg_0 + local_38) + local_38);
}

/*
=================
SpinControl_Key

Address: 0xb4f7
Stack Size: 0x30
Called by: Menu_DefaultKey
=================
*/
int SpinControl_Key(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	local_10 = 0x0;
	local_14 = arg_1;
	if (local_14 == 0xa3) goto jmp_b54d;
	local_18 = 0xa5;
	if (local_14 == local_18) goto jmp_b524;
	if (local_14 > local_18) goto jmp_b51e;
	local_1c = arg_1;
	if (local_1c == 0x86) goto jmp_b54d;
	if (local_1c == 0x87) goto jmp_b524;
	goto jmp_b576;
jmp_b51e:
	if (arg_1 == 0xb2) goto jmp_b524;
	goto jmp_b576;
jmp_b524:
	local_20 = (arg_0 + 0x40);
	*(int *)local_20 = (*(int *)local_20 + 0x1);
	local_24 = arg_0;
	if (*(int *)(local_24 + 0x40) < *(int *)(local_24 + 0x44)) goto jmp_b547;
	*(int *)(arg_0 + 0x40) = 0x0;
jmp_b547:
	local_10 = menu_move_sound;
	goto jmp_b576;
jmp_b54d:
	local_28 = (arg_0 + 0x40);
	*(int *)local_28 = (*(int *)local_28 - 0x1);
	if (*(int *)(arg_0 + 0x40) >= 0x0) goto jmp_b572;
	local_2c = arg_0;
	*(int *)(local_2c + 0x40) = (*(int *)(local_2c + 0x44) - 0x1);
jmp_b572:
	local_10 = menu_move_sound;
jmp_b576:
	if (local_10 == 0x0) goto jmp_b591;
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_b591;
	local_20 = arg_0;
	(*(*(int *)(local_20 + 0x30)))(local_20, 0x3);
jmp_b591:
	return local_10;
}

/*
=================
SpinControl_Draw

Address: 0xb596
Stack Size: 0x4c
Calls: UI_DrawString, UI_DrawChar, UI_FillRect
Called by: Menu_Draw
=================
*/
void SpinControl_Draw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[8];
	char	local_38[8];
	int		local_40;
	int		local_44;
	int		local_48;

	arg_0 = arg_0;
	local_20 = *(int *)(arg_0 + 0xc);
	*(int *)local_38 = 0x10;
	local_24 = *(int *)(arg_0 + *(int *)local_38);
	local_28 = *(int *)local_38;
	if (*(int *)*(int *)(arg_0 + 0x24) != *(int *)(arg_0 + 0x28)) goto jmp_b5c2;
	*(int *)local_30 = 0x1;
	goto jmp_b5c5;
jmp_b5c2:
	*(int *)local_30 = 0x0;
jmp_b5c5:
	local_2c = *(int *)local_30;
	if ((*(int *)(arg_0 + 0x2c) & 0x2000) == 0x0) goto jmp_b5d7;
	local_1c = 0x21e0;
	goto jmp_b5fd;
jmp_b5d7:
	if (local_2c == 0x0) goto jmp_b5e6;
	local_1c = 0x2200;
	local_28 = (local_28 | 0x4000);
	goto jmp_b5fd;
jmp_b5e6:
	if ((*(int *)(arg_0 + 0x2c) & 0x1) == 0x0) goto jmp_b5fa;
	local_1c = 0x2200;
	local_28 = (local_28 | 0x1000);
	goto jmp_b5fd;
jmp_b5fa:
	local_1c = 0x21f0;
jmp_b5fd:
	if (local_2c == 0x0) goto jmp_b649;
	local_40 = *(int *)(arg_0 + 0x14);
#define next_call_arg_0 "(float)local_40"
	local_44 = *(int *)(arg_0 + 0x18);
#define next_call_arg_1 "(float)local_44"
	local_48 = 0x1;
#define next_call_arg_2 "(float)((*(int *)(arg_0 + 0x1c) - local_40) + local_48)"
#define next_call_arg_3 "(float)((*(int *)(arg_0 + 0x20) - local_44) + local_48)"
#define next_call_arg_4 "0x2210"
	UI_FillRect();
	UI_DrawChar(local_20, local_24, 0xd, 0x1011, local_1c);
jmp_b649:
	UI_DrawString((local_20 - 0x8), local_24, *(int *)(arg_0 + 0x4), (local_28 | 0x2), local_1c);
	UI_DrawString((local_20 + 0x8), local_24, *(int *)((*(int *)(arg_0 + 0x40) << 0x2) + *(int *)(arg_0 + 0x4c)), local_28, local_1c);
}

/*
=================
ScrollList_Init

Address: 0xb684
Stack Size: 0x28
Called by: Menu_AddItem
=================
*/
void ScrollList_Init(int arg_0) {
	char	local_8[8];
	char	local_10[16];
	int		local_20;
	int		local_24;

	arg_0 = arg_0;
	*(int *)(arg_0 + 0x3c) = 0x0;
	*(int *)(arg_0 + 0x40) = 0x0;
	*(int *)(arg_0 + 0x48) = 0x0;
	if (*(int *)(arg_0 + 0x58) != 0x0) goto jmp_b6b0;
	*(int *)(arg_0 + 0x58) = 0x1;
	*(int *)(arg_0 + 0x5c) = 0x0;
	goto jmp_b6bd;
jmp_b6b0:
	if (*(int *)(arg_0 + 0x5c) != 0x0) goto jmp_b6bd;
	*(int *)(arg_0 + 0x5c) = 0x3;
jmp_b6bd:
	*(int *)local_10 = *(int *)(arg_0 + 0x5c);
	*(int *)local_8 = ((((*(int *)(arg_0 + 0x50) + *(int *)local_10) * *(int *)(arg_0 + 0x58)) - *(int *)local_10) << 0x3);
	*(int *)(arg_0 + 0x14) = *(int *)(arg_0 + 0xc);
	*(int *)(arg_0 + 0x18) = *(int *)(arg_0 + 0x10);
	*(int *)(arg_0 + 0x1c) = (*(int *)(arg_0 + 0xc) + *(int *)local_8);
	*(int *)(arg_0 + 0x20) = (*(int *)(arg_0 + 0x10) + (*(int *)(arg_0 + 0x54) << 0x4));
	if ((*(int *)(arg_0 + 0x2c) & 0x8) == 0x0) goto jmp_b737;
	local_20 = (arg_0 + 0x14);
	*(int *)local_20 = (*(int *)local_20 - (*(int *)local_8 / 0x2));
	local_24 = (arg_0 + 0x1c);
	*(int *)local_24 = (*(int *)local_24 - (*(int *)local_8 / 0x2));
jmp_b737:
}

/*
=================
ScrollList_Key

Address: 0xb739
Stack Size: 0xb4
Calls: Q_isupper, Q_isprint, UI_CursorInRect
Called by: ArenaServers_Event, Menu_DefaultKey, LoadConfig_MenuEvent, Demos_MenuEvent
=================
*/
int ScrollList_Key(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	char	local_3c[16];
	char	local_4c[8];
	int		local_54;
	int		local_58;
	int		local_5c;
	char	local_60[8];
	int		local_68;
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	char	local_84[8];
	int		local_8c;
	char	local_90[8];
	char	local_98[12];
	char	local_a4[12];
	int		local_b0;

	arg_0 = arg_0;
	arg_1 = arg_1;
	if (arg_1 < 0xa0) goto jmp_b752;
	if (arg_1 > 0xa8) goto jmp_b762;
	goto *(int *)((arg_1 << 0x2) + 0x1fc0);
jmp_b752:
	if (arg_1 < 0x84) goto jmp_bcd5;
	if (arg_1 > 0x90) goto jmp_bcd5;
	goto *(int *)((arg_1 << 0x2) + 0x2054);
jmp_b762:
	*(int *)local_4c = 0xb2;
	if (arg_1 == *(int *)local_4c) goto jmp_b779;
	if (arg_1 < *(int *)local_4c) goto jmp_bcd5;
	if (arg_1 == 0xb7) goto jmp_ba7f;
	if (arg_1 == 0xb8) goto jmp_ba20;
	goto jmp_bcd5;
jmp_b779:
	if ((*(int *)(arg_0 + 0x2c) & 0x200) == 0x0) goto jmp_bcd5;
	local_24 = *(int *)(arg_0 + 0xc);
	local_28 = *(int *)(arg_0 + 0x10);
	local_58 = *(int *)(arg_0 + 0x5c);
	local_2c = ((((*(int *)(arg_0 + 0x50) + local_58) * *(int *)(arg_0 + 0x58)) - local_58) << 0x3);
	if ((*(int *)(arg_0 + 0x2c) & 0x8) == 0x0) goto jmp_b7be;
	local_24 = (local_24 - (local_2c / 0x2));
jmp_b7be:
	local_5c = UI_CursorInRect(local_24, local_28, local_2c, (*(int *)(arg_0 + 0x54) << 0x4));
	if (local_5c == 0x0) goto jmp_b84e;
	local_34 = ((bss_db5c - local_24) / 0x8);
	*(int *)local_3c = (local_34 / (*(int *)(arg_0 + 0x50) + *(int *)(arg_0 + 0x5c)));
	local_38 = ((bss_db60 - local_28) / 0x10);
	local_30 = ((*(int *)local_3c * *(int *)(arg_0 + 0x54)) + local_38);
	if ((*(int *)(arg_0 + 0x48) + local_30) >= *(int *)(arg_0 + 0x44)) goto jmp_b84e;
	*(int *)(arg_0 + 0x3c) = *(int *)(arg_0 + 0x40);
	*(int *)(arg_0 + 0x40) = (*(int *)(arg_0 + 0x48) + local_30);
	if (*(int *)(arg_0 + 0x3c) == *(int *)(arg_0 + 0x40)) goto jmp_b84e;
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_b84e;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
	return menu_move_sound;
jmp_b84e:
	return menu_null_sound;
	*(int *)(arg_0 + 0x3c) = *(int *)(arg_0 + 0x40);
	*(int *)(arg_0 + 0x40) = 0x0;
	*(int *)(arg_0 + 0x48) = 0x0;
	if (*(int *)(arg_0 + 0x3c) == *(int *)(arg_0 + 0x40)) goto jmp_b88c;
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_b88c;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
	return menu_move_sound;
jmp_b88c:
	return menu_buzz_sound;
	*(int *)(arg_0 + 0x3c) = *(int *)(arg_0 + 0x40);
	*(int *)(arg_0 + 0x40) = (*(int *)(arg_0 + 0x44) - 0x1);
	if (*(int *)(arg_0 + 0x58) <= 0x1) goto jmp_b8db;
	local_68 = (arg_0 + 0x54);
	local_6c = *(int *)local_68;
	local_1c = (((*(int *)(arg_0 + 0x40) / local_6c) + 0x1) * local_6c);
	*(int *)(arg_0 + 0x48) = (local_1c - (*(int *)(arg_0 + 0x58) * *(int *)local_68));
	goto jmp_b8ed;
jmp_b8db:
	*(int *)(arg_0 + 0x48) = (*(int *)(arg_0 + 0x40) - (*(int *)(arg_0 + 0x54) - 0x1));
jmp_b8ed:
	if (*(int *)(arg_0 + 0x48) >= 0x0) goto jmp_b8fa;
	*(int *)(arg_0 + 0x48) = 0x0;
jmp_b8fa:
	if (*(int *)(arg_0 + 0x3c) == *(int *)(arg_0 + 0x40)) goto jmp_b91d;
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_b91d;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
	return menu_move_sound;
jmp_b91d:
	return menu_buzz_sound;
	if (*(int *)(arg_0 + 0x58) <= 0x1) goto jmp_b92e;
	return menu_null_sound;
jmp_b92e:
	if (*(int *)(arg_0 + 0x40) <= 0x0) goto jmp_b98f;
	*(int *)(arg_0 + 0x3c) = *(int *)(arg_0 + 0x40);
	local_70 = (arg_0 + 0x40);
	*(int *)local_70 = (*(int *)local_70 - (*(int *)(arg_0 + 0x54) - 0x1));
	if (*(int *)(arg_0 + 0x40) >= 0x0) goto jmp_b960;
	*(int *)(arg_0 + 0x40) = 0x0;
jmp_b960:
	*(int *)(arg_0 + 0x48) = *(int *)(arg_0 + 0x40);
	if (*(int *)(arg_0 + 0x48) >= 0x0) goto jmp_b977;
	*(int *)(arg_0 + 0x48) = 0x0;
jmp_b977:
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_b98a;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
jmp_b98a:
	return menu_move_sound;
jmp_b98f:
	return menu_buzz_sound;
	if (*(int *)(arg_0 + 0x58) <= 0x1) goto jmp_b9a0;
	return menu_null_sound;
jmp_b9a0:
	if (*(int *)(arg_0 + 0x40) >= (*(int *)(arg_0 + 0x44) - 0x1)) goto jmp_ba1b;
	*(int *)(arg_0 + 0x3c) = *(int *)(arg_0 + 0x40);
	local_74 = (arg_0 + 0x40);
	*(int *)local_74 = (*(int *)local_74 + (*(int *)(arg_0 + 0x54) - 0x1));
	if (*(int *)(arg_0 + 0x40) <= (*(int *)(arg_0 + 0x44) - 0x1)) goto jmp_b9e4;
	*(int *)(arg_0 + 0x40) = (*(int *)(arg_0 + 0x44) - 0x1);
jmp_b9e4:
	*(int *)(arg_0 + 0x48) = (*(int *)(arg_0 + 0x40) - (*(int *)(arg_0 + 0x54) - 0x1));
	if (*(int *)(arg_0 + 0x48) >= 0x0) goto jmp_ba03;
	*(int *)(arg_0 + 0x48) = 0x0;
jmp_ba03:
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_ba16;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
jmp_ba16:
	return menu_move_sound;
jmp_ba1b:
	return menu_buzz_sound;
jmp_ba20:
	if (*(int *)(arg_0 + 0x58) <= 0x1) goto jmp_ba2c;
	return menu_null_sound;
jmp_ba2c:
	if (*(int *)(arg_0 + 0x48) <= 0x0) goto jmp_ba7a;
	if (*(int *)(arg_0 + 0x54) >= 0x6) goto jmp_ba3f;
	local_70 = 0x1;
	goto jmp_ba42;
jmp_ba3f:
	local_70 = 0x3;
jmp_ba42:
	local_6c = local_70;
	local_74 = (arg_0 + 0x48);
	*(int *)local_74 = (*(int *)local_74 - local_6c);
	if (*(int *)(arg_0 + 0x48) >= 0x0) goto jmp_ba62;
	*(int *)(arg_0 + 0x48) = 0x0;
jmp_ba62:
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_ba75;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
jmp_ba75:
	return menu_null_sound;
jmp_ba7a:
	return menu_buzz_sound;
jmp_ba7f:
	if (*(int *)(arg_0 + 0x58) <= 0x1) goto jmp_ba8b;
	return menu_null_sound;
jmp_ba8b:
	if (*(int *)(arg_0 + 0x48) >= (*(int *)(arg_0 + 0x44) - *(int *)(arg_0 + 0x54))) goto jmp_baf7;
	if (*(int *)(arg_0 + 0x54) >= 0x6) goto jmp_baa8;
	local_74 = 0x1;
	goto jmp_baab;
jmp_baa8:
	local_74 = 0x3;
jmp_baab:
	local_70 = local_74;
	local_78 = (arg_0 + 0x48);
	*(int *)local_78 = (*(int *)local_78 + local_70);
	if (*(int *)(arg_0 + 0x48) <= (*(int *)(arg_0 + 0x44) - *(int *)(arg_0 + 0x54))) goto jmp_badf;
	*(int *)(arg_0 + 0x48) = (*(int *)(arg_0 + 0x44) - *(int *)(arg_0 + 0x54));
jmp_badf:
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_baf2;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
jmp_baf2:
	return menu_null_sound;
jmp_baf7:
	return menu_buzz_sound;
	if (*(int *)(arg_0 + 0x40) != 0x0) goto jmp_bb08;
	return menu_buzz_sound;
jmp_bb08:
	*(int *)(arg_0 + 0x3c) = *(int *)(arg_0 + 0x40);
	local_74 = (arg_0 + 0x40);
	*(int *)local_74 = (*(int *)local_74 - 0x1);
	if (*(int *)(arg_0 + 0x40) >= *(int *)(arg_0 + 0x48)) goto jmp_bb54;
	if (*(int *)(arg_0 + 0x58) != 0x1) goto jmp_bb42;
	local_7c = (arg_0 + 0x48);
	*(int *)local_7c = (*(int *)local_7c - 0x1);
	goto jmp_bb54;
jmp_bb42:
	local_80 = (arg_0 + 0x48);
	*(int *)local_80 = (*(int *)local_80 - *(int *)(arg_0 + 0x54));
jmp_bb54:
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_bb67;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
jmp_bb67:
	return menu_move_sound;
	if (*(int *)(arg_0 + 0x40) != (*(int *)(arg_0 + 0x44) - 0x1)) goto jmp_bb7e;
	return menu_buzz_sound;
jmp_bb7e:
	*(int *)(arg_0 + 0x3c) = *(int *)(arg_0 + 0x40);
	*(int *)local_84 = (arg_0 + 0x40);
	*(int *)*(int *)local_84 = (*(int *)*(int *)local_84 + 0x1);
	if (*(int *)(arg_0 + 0x40) < (*(int *)(arg_0 + 0x48) + (*(int *)(arg_0 + 0x58) * *(int *)(arg_0 + 0x54)))) goto jmp_bbd6;
	if (*(int *)(arg_0 + 0x58) != 0x1) goto jmp_bbc4;
	local_8c = (arg_0 + 0x48);
	*(int *)local_8c = (*(int *)local_8c + 0x1);
	goto jmp_bbd6;
jmp_bbc4:
	*(int *)local_90 = (arg_0 + 0x48);
	*(int *)*(int *)local_90 = (*(int *)*(int *)local_90 + *(int *)(arg_0 + 0x54));
jmp_bbd6:
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_bbe9;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
jmp_bbe9:
	return menu_move_sound;
	if (*(int *)(arg_0 + 0x58) != 0x1) goto jmp_bbfa;
	return menu_null_sound;
jmp_bbfa:
	if (*(int *)(arg_0 + 0x40) >= *(int *)(arg_0 + 0x54)) goto jmp_bc0a;
	return menu_buzz_sound;
jmp_bc0a:
	*(int *)(arg_0 + 0x3c) = *(int *)(arg_0 + 0x40);
	*(int *)local_98 = (arg_0 + 0x40);
	*(int *)*(int *)local_98 = (*(int *)*(int *)local_98 - *(int *)(arg_0 + 0x54));
	if (*(int *)(arg_0 + 0x40) >= *(int *)(arg_0 + 0x48)) goto jmp_bc43;
	*(int *)local_a4 = (arg_0 + 0x48);
	*(int *)*(int *)local_a4 = (*(int *)*(int *)local_a4 - *(int *)(arg_0 + 0x54));
jmp_bc43:
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_bc56;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
jmp_bc56:
	return menu_move_sound;
	if (*(int *)(arg_0 + 0x58) != 0x1) goto jmp_bc67;
	return menu_null_sound;
jmp_bc67:
	local_1c = (*(int *)(arg_0 + 0x40) + *(int *)(arg_0 + 0x54));
	if (local_1c < *(int *)(arg_0 + 0x44)) goto jmp_bc81;
	return menu_buzz_sound;
jmp_bc81:
	*(int *)(arg_0 + 0x3c) = *(int *)(arg_0 + 0x40);
	*(int *)(arg_0 + 0x40) = local_1c;
	if (*(int *)(arg_0 + 0x40) <= ((*(int *)(arg_0 + 0x48) + (*(int *)(arg_0 + 0x58) * *(int *)(arg_0 + 0x54))) - 0x1)) goto jmp_bcbd;
	local_b0 = (arg_0 + 0x48);
	*(int *)local_b0 = (*(int *)local_b0 + *(int *)(arg_0 + 0x54));
jmp_bcbd:
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_bcd0;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
jmp_bcd0:
	return menu_move_sound;
jmp_bcd5:
	local_54 = Q_isprint(arg_1);
	if (local_54 != 0x0) goto jmp_bce4;
	return 0x0;
jmp_bce4:
	local_58 = Q_isupper(arg_1);
	if (local_58 == 0x0) goto jmp_bcf5;
	arg_1 = (arg_1 - 0xffffffe0);
jmp_bcf5:
	local_20 = 0x1;
	goto jmp_bd9b;
jmp_bcfa:
	local_18 = ((*(int *)(arg_0 + 0x40) + local_20) %% *(int *)(arg_0 + 0x44));
	local_1c = (char)*(char *)*(int *)((local_18 << 0x2) + *(int *)(arg_0 + 0x4c));
	*(int *)local_60 = Q_isupper(local_1c);
	if (*(int *)local_60 == 0x0) goto jmp_bd2a;
	local_1c = (local_1c - 0xffffffe0);
jmp_bd2a:
	if (local_1c != arg_1) goto jmp_bd95;
	if (local_18 >= *(int *)(arg_0 + 0x48)) goto jmp_bd40;
	*(int *)(arg_0 + 0x48) = local_18;
	goto jmp_bd5f;
jmp_bd40:
	if (local_18 <= ((*(int *)(arg_0 + 0x48) + *(int *)(arg_0 + 0x54)) - 0x1)) goto jmp_bd5f;
	*(int *)(arg_0 + 0x48) = ((local_18 + 0x1) - *(int *)(arg_0 + 0x54));
jmp_bd5f:
	if (*(int *)(arg_0 + 0x40) == local_18) goto jmp_bd90;
	*(int *)(arg_0 + 0x3c) = *(int *)(arg_0 + 0x40);
	*(int *)(arg_0 + 0x40) = local_18;
	if (*(int *)(arg_0 + 0x30) == 0x0) goto jmp_bd8b;
	(*(*(int *)(arg_0 + 0x30)))(arg_0, 0x1);
jmp_bd8b:
	return menu_move_sound;
jmp_bd90:
	return menu_buzz_sound;
jmp_bd95:
	local_20 = (local_20 + 0x1);
jmp_bd9b:
	if (local_20 <= *(int *)(arg_0 + 0x44)) goto jmp_bcfa;
	return menu_buzz_sound;
}

/*
=================
ScrollList_Draw

Address: 0xbda8
Stack Size: 0x50
Calls: UI_DrawString, UI_FillRect
Called by: Menu_Draw
=================
*/
void ScrollList_Draw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	char	local_40[16];

	arg_0 = arg_0;
	if (*(int *)*(int *)(arg_0 + 0x24) != *(int *)(arg_0 + 0x28)) goto jmp_bdbe;
	*(int *)local_40 = 0x1;
	goto jmp_bdc1;
jmp_bdbe:
	*(int *)local_40 = 0x0;
jmp_bdc1:
	local_38 = *(int *)local_40;
	local_2c = *(int *)(arg_0 + 0xc);
	local_3c = 0x0;
	goto jmp_bea7;
jmp_bdd1:
	local_20 = *(int *)(arg_0 + 0x10);
	local_34 = (*(int *)(arg_0 + 0x48) + (local_3c * *(int *)(arg_0 + 0x54)));
	local_1c = local_34;
	goto jmp_be84;
jmp_bdee:
	if (local_1c < *(int *)(arg_0 + 0x44)) goto jmp_bdf8;
	goto jmp_be8f;
jmp_bdf8:
	if (local_1c != *(int *)(arg_0 + 0x40)) goto jmp_be48;
	local_30 = (local_2c - 0x2);
	if ((*(int *)(arg_0 + 0x2c) & 0x8) == 0x0) goto jmp_be1f;
	local_30 = (local_30 - (((*(int *)(arg_0 + 0x50) << 0x3) / 0x2) + 0x1));
jmp_be1f:
	UI_FillRect((float)local_30, (float)local_20, (float)(*(int *)(arg_0 + 0x50) << 0x3), 0x41900000, 0x2210);
	local_28 = 0x2200;
	if (local_38 == 0x0) goto jmp_be43;
	local_24 = 0x4010;
	goto jmp_be4e;
jmp_be43:
	local_24 = 0x10;
	goto jmp_be4e;
jmp_be48:
	local_28 = 0x21f0;
	local_24 = 0x10;
jmp_be4e:
	if ((*(int *)(arg_0 + 0x2c) & 0x8) == 0x0) goto jmp_be5d;
	local_24 = (local_24 | 0x1);
jmp_be5d:
	UI_DrawString(local_2c, local_20, *(int *)((local_1c << 0x2) + *(int *)(arg_0 + 0x4c)), local_24, local_28);
	local_20 = (local_20 + 0x10);
	local_1c = (local_1c + 0x1);
jmp_be84:
	if (local_1c < (local_34 + *(int *)(arg_0 + 0x54))) goto jmp_bdee;
jmp_be8f:
	local_2c = (local_2c + ((*(int *)(arg_0 + 0x50) + *(int *)(arg_0 + 0x5c)) << 0x3));
	local_3c = (local_3c + 0x1);
jmp_bea7:
	if (local_3c < *(int *)(arg_0 + 0x58)) goto jmp_bdd1;
}

/*
=================
Menu_AddItem

Address: 0xbeb1
Stack Size: 0x38
Calls: trap_Error, va, BText_Init, PText_Init, ScrollList_Init, Text_Init, Bitmap_Init, Slider_Init, RadioButton_Init, SpinControl_Init, MenuField_Init, Action_Init
Called by: GraphicsOptions_MenuInit, UI_DriverInfo_Menu, UI_TeamOrdersMenu_Init, TeamMain_MenuInit, UI_BotSelectMenu_Init, ServerOptions_MenuInit, StartServer_MenuInit, UI_SPSkillMenu_Init, UI_SPPostgameMenu_Init, UI_SPLevelMenu_Init, SpecifyServer_MenuInit, UI_SoundOptionsMenu_Init, UI_SetupMenu_Init, ArenaServers_MenuInit, UI_ServerInfoMenu, UI_SaveConfigMenu_Init, UI_RemoveBotsMenu_Init, Preferences_MenuInit, PlayerSettings_MenuInit, PlayerModel_MenuInit, Options_MenuInit, UI_NetworkOptionsMenu_Init, UI_Mods_MenuInit, UI_MainMenu, LoadConfig_MenuInit, InGame_MenuInit, UI_DisplayOptionsMenu_Init, Demos_MenuInit, Controls_MenuInit, UI_Message, UI_ConfirmMenu_Style, UI_CinematicsMenu_Init, UI_CDKeyMenu_Init, UI_AddBotsMenu_Init
=================
*/
void Menu_AddItem(int arg_0, int arg_1) {
	char	local_10[16];
	char	local_20[8];
	int		local_28;
	char	local_2c[8];
	int		local_34;

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x8) < 0x40) goto jmp_bec2;
	trap_Error(0x69bc);
jmp_bec2:
	*(int *)((*(int *)(arg_0 + 0x8) << 0x2) + (arg_0 + 0xc)) = arg_1;
	*(int *)(*(int *)((*(int *)(arg_0 + 0x8) << 0x2) + (arg_0 + 0xc)) + 0x24) = arg_0;
	*(int *)local_20 = *(int *)(arg_0 + 0x8);
	*(int *)(*(int *)((*(int *)local_20 << 0x2) + (arg_0 + 0xc)) + 0x28) = *(int *)local_20;
	local_28 = (*(int *)((*(int *)(arg_0 + 0x8) << 0x2) + (arg_0 + 0xc)) + 0x2c);
	*(int *)local_28 = (*(int *)local_28 & 0xfffffdff);
	*(int *)local_10 = arg_1;
	if ((*(int *)(*(int *)local_10 + 0x2c) & 0x8000) != 0x0) goto jmp_bf94;
	*(int *)local_2c = *(int *)*(int *)local_10;
	if (*(int *)local_2c < 0x1) goto jmp_bf84;
	if (*(int *)local_2c > 0xa) goto jmp_bf84;
	goto *(int *)((*(int *)local_2c << 0x2) + 0x2294);
	Action_Init(arg_1);
	goto jmp_bf94;
	MenuField_Init(arg_1);
	goto jmp_bf94;
	SpinControl_Init(arg_1);
	goto jmp_bf94;
	RadioButton_Init(arg_1);
	goto jmp_bf94;
	Slider_Init(arg_1);
	goto jmp_bf94;
	Bitmap_Init(arg_1);
	goto jmp_bf94;
	Text_Init(arg_1);
	goto jmp_bf94;
	ScrollList_Init(arg_1);
	goto jmp_bf94;
	PText_Init(arg_1);
	goto jmp_bf94;
	BText_Init(arg_1);
	goto jmp_bf94;
jmp_bf84:
	local_34 = va(0x69a1, *(int *)*(int *)local_10);
	trap_Error(local_34);
jmp_bf94:
	*(int *)local_2c = (arg_0 + 0x8);
	*(int *)*(int *)local_2c = (*(int *)*(int *)local_2c + 0x1);
}

/*
=================
Menu_CursorMoved

Address: 0xbfa4
Stack Size: 0x30
Called by: Menu_DefaultKey, Menu_SetCursor
=================
*/
void Menu_CursorMoved(int arg_0) {
	char	local_10[12];
	char	local_1c[8];
	int		local_24;
	char	local_28[8];

	arg_0 = arg_0;
	if (*(int *)(arg_0 + 0x4) != *(int *)arg_0) goto jmp_bfb4;
	goto jmp_c02d;
jmp_bfb4:
	*(int *)local_1c = *(int *)(arg_0 + 0x4);
	if (*(int *)local_1c < 0x0) goto jmp_bff6;
	if (*(int *)local_1c >= *(int *)(arg_0 + 0x8)) goto jmp_bff6;
	*(int *)local_10 = *(int *)(*(int *)((*(int *)(arg_0 + 0x4) << 0x2) + (arg_0 + 0xc)) + 0x30);
	if (*(int *)local_10 == 0x0) goto jmp_bff6;
	*(int *)local_28 = 0x2;
	(*(*(int *)local_10))(*(int *)((*(int *)(arg_0 + 0x4) << *(int *)local_28) + (arg_0 + 0xc)), *(int *)local_28);
jmp_bff6:
	local_24 = *(int *)arg_0;
	if (local_24 < 0x0) goto jmp_c02d;
	if (local_24 >= *(int *)(arg_0 + 0x8)) goto jmp_c02d;
	*(int *)local_10 = *(int *)(*(int *)((*(int *)arg_0 << 0x2) + (arg_0 + 0xc)) + 0x30);
	if (*(int *)local_10 == 0x0) goto jmp_c02d;
	(*(*(int *)local_10))(*(int *)((*(int *)arg_0 << 0x2) + (arg_0 + 0xc)), 0x1);
jmp_c02d:
}

/*
=================
Menu_SetCursor

Address: 0xc02f
Stack Size: 0x10
Calls: Menu_CursorMoved
Called by: Menu_SetCursorToItem, PlayerModel_MenuKey, UI_MouseEvent, UI_PushMenu
=================
*/
void Menu_SetCursor(int arg_0, int arg_1) {

	arg_0 = arg_0;
	if ((*(int *)(*(int *)((arg_1 << 0x2) + (arg_0 + 0xc)) + 0x2c) & 0x6000) == 0x0) goto jmp_c047;
	goto jmp_c05a;
jmp_c047:
	*(int *)(arg_0 + 0x4) = *(int *)arg_0;
	*(int *)arg_0 = arg_1;
	Menu_CursorMoved(arg_0);
jmp_c05a:
}

/*
=================
Menu_SetCursorToItem

Address: 0xc05c
Stack Size: 0x14
Calls: Menu_SetCursor
Called by: UI_GraphicsOptionsMenu, UI_SPSkillMenu, UI_SPPostgameMenu_f, UI_SPLevelMenu, UI_SoundOptionsMenu, UI_PlayerModelMenu, UI_NetworkOptionsMenu, UI_DisplayOptionsMenu, UI_Message, UI_ConfirmMenu_Style, UI_CinematicsMenu_f
=================
*/
void Menu_SetCursorToItem(int arg_0, int arg_1) {
	int		local_10;

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_10 = 0x0;
	goto jmp_c088;
jmp_c06a:
	if (*(int *)((local_10 << 0x2) + (arg_0 + 0xc)) != arg_1) goto jmp_c082;
	Menu_SetCursor(arg_0, local_10);
	goto jmp_c090;
jmp_c082:
	local_10 = (local_10 + 0x1);
jmp_c088:
	if (local_10 < *(int *)(arg_0 + 0x8)) goto jmp_c06a;
jmp_c090:
}

/*
=================
Menu_AdjustCursor

Address: 0xc092
Stack Size: 0x20
Called by: Menu_DefaultKey
=================
*/
void Menu_AdjustCursor(int arg_0, int arg_1) {
	int		local_8;
	char	local_c[8];
	char	local_14[12];

	arg_0 = arg_0;
	arg_1 = arg_1;
	local_8 = 0x0;
	*(int *)local_c = 0x0;
	goto jmp_c0c2;
jmp_c0a3:
	local_8 = *(int *)((*(int *)arg_0 << 0x2) + (arg_0 + 0xc));
	if ((*(int *)(local_8 + 0x2c) & 0x6800) == 0x0) goto jmp_c0d3;
	*(int *)arg_0 = (*(int *)arg_0 + arg_1);
jmp_c0c2:
	*(int *)local_14 = *(int *)arg_0;
	if (*(int *)local_14 < 0x0) goto jmp_c0d3;
	if (*(int *)local_14 < *(int *)(arg_0 + 0x8)) goto jmp_c0a3;
jmp_c0d3:
	if (arg_1 != 0x1) goto jmp_c108;
	if (*(int *)arg_0 < *(int *)(arg_0 + 0x8)) goto jmp_c139;
	if (*(int *)(arg_0 + 0x114) == 0x0) goto jmp_c0fe;
	if (*(int *)local_c == 0x0) goto jmp_c0f5;
	*(int *)arg_0 = *(int *)(arg_0 + 0x4);
	goto jmp_c139;
jmp_c0f5:
	*(int *)arg_0 = 0x0;
	*(int *)local_c = 0x1;
	goto jmp_c0c2;
jmp_c0fe:
	*(int *)arg_0 = *(int *)(arg_0 + 0x4);
	goto jmp_c139;
jmp_c108:
	if (*(int *)arg_0 >= 0x0) goto jmp_c139;
	if (*(int *)(arg_0 + 0x114) == 0x0) goto jmp_c131;
	if (*(int *)local_c == 0x0) goto jmp_c122;
	*(int *)arg_0 = *(int *)(arg_0 + 0x4);
	goto jmp_c139;
jmp_c122:
	*(int *)arg_0 = (*(int *)(arg_0 + 0x8) - 0x1);
	*(int *)local_c = 0x1;
	goto jmp_c0c2;
jmp_c131:
	*(int *)arg_0 = *(int *)(arg_0 + 0x4);
jmp_c139:
}

/*
=================
Menu_Draw

Address: 0xc13b
Stack Size: 0x44
Calls: trap_Error, Menu_ItemAtCursor, UI_DrawRect, va, BText_Draw, PText_Draw, ScrollList_Draw, Text_Draw, Bitmap_Draw, Action_Draw, SpinControl_Draw, Slider_Draw, MenuField_Draw, RadioButton_Draw
Called by: GraphicsOptions_MenuDraw, DriverInfo_MenuDraw, UI_SPPostgameMenu_MenuDraw, UI_SPLevelMenu_MenuDraw, SoundOptions_MenuDraw, ArenaServers_MenuDraw, ServerInfo_MenuDraw, Main_MenuDraw, ConfirmMenu_Draw, MessageMenu_Draw, UI_Refresh
=================
*/
void Menu_Draw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[8];
	int		local_38;
	int		local_3c;
	int		local_40;

	arg_0 = arg_0;
	local_20 = 0x0;
	goto jmp_c261;
jmp_c145:
	local_1c = *(int *)((local_20 << 0x2) + (arg_0 + 0xc));
	if ((*(int *)(local_1c + 0x2c) & 0x1000) == 0x0) goto jmp_c15c;
	goto jmp_c25b;
jmp_c15c:
	if (*(int *)(local_1c + 0x38) == 0x0) goto jmp_c16f;
	(*(*(int *)(local_1c + 0x38)))(local_1c);
	goto jmp_c1e4;
jmp_c16f:
	local_24 = *(int *)local_1c;
	if (local_24 < 0x1) goto jmp_c1d4;
	if (local_24 > 0xa) goto jmp_c1d4;
	goto *(int *)((local_24 << 0x2) + 0x22bc);
	RadioButton_Draw(local_1c);
	goto jmp_c1e4;
	MenuField_Draw(local_1c);
	goto jmp_c1e4;
	Slider_Draw(local_1c);
	goto jmp_c1e4;
	SpinControl_Draw(local_1c);
	goto jmp_c1e4;
	Action_Draw(local_1c);
	goto jmp_c1e4;
	Bitmap_Draw(local_1c);
	goto jmp_c1e4;
	Text_Draw(local_1c);
	goto jmp_c1e4;
	ScrollList_Draw(local_1c);
	goto jmp_c1e4;
	PText_Draw(local_1c);
	goto jmp_c1e4;
	BText_Draw(local_1c);
	goto jmp_c1e4;
jmp_c1d4:
	local_2c = va(0x6986, *(int *)local_1c);
	trap_Error(local_2c);
jmp_c1e4:
	if (bss_107d0 == 0x0) goto jmp_c25b;
	if ((*(int *)(local_1c + 0x2c) & 0x4000) != 0x0) goto jmp_c25b;
	local_38 = (local_1c + 0x14);
	local_24 = *(int *)local_38;
	local_3c = (local_1c + 0x18);
	local_28 = *(int *)local_3c;
	local_40 = 0x1;
	local_2c = ((*(int *)(local_1c + 0x1c) - *(int *)local_38) + local_40);
	*(int *)local_30 = ((*(int *)(local_1c + 0x20) - *(int *)local_3c) + local_40);
	if ((*(int *)(local_1c + 0x2c) & 0x200) == 0x0) goto jmp_c246;
	UI_DrawRect((float)local_24, (float)local_28, (float)local_2c, (float)*(int *)local_30, 0x29f8);
	goto jmp_c25b;
jmp_c246:
	UI_DrawRect((float)local_24, (float)local_28, (float)local_2c, (float)*(int *)local_30, 0x2a28);
jmp_c25b:
	local_20 = (local_20 + 0x1);
jmp_c261:
	if (local_20 < *(int *)(arg_0 + 0x8)) goto jmp_c145;
	local_24 = Menu_ItemAtCursor(arg_0);
	local_1c = local_24;
	local_2c = 0x0;
	if (local_1c == local_2c) goto jmp_c28e;
	if (*(int *)(local_1c + 0x34) == local_2c) goto jmp_c28e;
	(*(*(int *)(local_1c + 0x34)))(local_1c);
jmp_c28e:
}

/*
=================
Menu_ItemAtCursor

Address: 0xc290
Stack Size: 0x14
Called by: UI_TeamOrdersMenu_Key, UI_SPLevelMenu_MenuDraw, ArenaServers_MenuKey, UI_SaveConfigMenu_SavenameDraw, Menu_DefaultKey, Menu_Draw, Bitmap_Draw, PText_Draw, PlayerModel_MenuKey, MenuField_Draw, Controls_DrawKeyBinding
=================
*/
int Menu_ItemAtCursor(int arg_0) {
	char	local_c[8];

	arg_0 = arg_0;
	*(int *)local_c = *(int *)arg_0;
	if (*(int *)local_c < 0x0) goto jmp_c2a6;
	if (*(int *)local_c < *(int *)(arg_0 + 0x8)) goto jmp_c2aa;
jmp_c2a6:
	return 0x0;
jmp_c2aa:
	return *(int *)((*(int *)arg_0 << 0x2) + (arg_0 + 0xc));
}

/*
=================
Menu_ActivateItem

Address: 0xc2b8
Stack Size: 0x14
Called by: Menu_DefaultKey
=================
*/
int Menu_ActivateItem(, int arg_1) {
	int		local_10;

	if (*(int *)(arg_1 + 0x30) == 0x0) goto jmp_c2de;
	local_10 = arg_1;
	(*(*(int *)(local_10 + 0x30)))(local_10, 0x3);
	if ((*(int *)(arg_1 + 0x2c) & 0x100000) != 0x0) goto jmp_c2de;
	return menu_move_sound;
jmp_c2de:
	return 0x0;
}

/*
=================
Menu_DefaultKey

Address: 0xc2e2
Stack Size: 0x7c
Calls: trap_Cmd_ExecuteText, Menu_ActivateItem, Menu_CursorMoved, Menu_AdjustCursor, MenuField_Key, ScrollList_Key, Slider_Key, RadioButton_Key, SpinControl_Key, Menu_ItemAtCursor, UI_PopMenu
Called by: UI_TeamOrdersMenu_Key, UI_SPSkillMenu_Key, UI_SPPostgameMenu_MenuKey, ArenaServers_MenuKey, ServerInfo_MenuKey, PlayerSettings_MenuKey, PlayerModel_MenuKey, Controls_MenuKey, ConfirmMenu_Key, UI_KeyEvent
=================
*/
int Menu_DefaultKey(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
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
	int		local_50;
	int		local_54;
	char	local_58[20];
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;

	arg_0 = arg_0;
	local_14 = 0x0;
	local_1c = arg_1;
	*(int *)local_20 = 0x1b;
	if (local_1c == *(int *)local_20) goto jmp_c301;
	if (local_1c < *(int *)local_20) goto jmp_c309;
	if (arg_1 == 0xb3) goto jmp_c301;
	goto jmp_c309;
jmp_c301:
	UI_PopMenu();
	return menu_out_sound;
jmp_c309:
	if (arg_0 == 0x0) goto jmp_c314;
	if (*(int *)(arg_0 + 0x8) != 0x0) goto jmp_c318;
jmp_c314:
	return 0x0;
jmp_c318:
	*(int *)local_28 = Menu_ItemAtCursor(arg_0);
	local_10 = *(int *)local_28;
	local_30 = 0x0;
	if (local_10 == local_30) goto jmp_c3a0;
	if ((*(int *)(local_10 + 0x2c) & 0x6000) != local_30) goto jmp_c3a0;
	local_34 = *(int *)local_10;
	if (local_34 < 0x1) goto jmp_c397;
	if (local_34 > 0x8) goto jmp_c397;
	goto *(int *)((local_34 << 0x2) + 0x22e4);
	local_3c = SpinControl_Key(local_10, arg_1);
	local_14 = local_3c;
	goto jmp_c397;
	local_40 = RadioButton_Key(local_10, arg_1);
	local_14 = local_40;
	goto jmp_c397;
	local_44 = Slider_Key(local_10, arg_1);
	local_14 = local_44;
	goto jmp_c397;
	local_48 = ScrollList_Key(local_10, arg_1);
	local_14 = local_48;
	goto jmp_c397;
	local_4c = MenuField_Key(local_10, &arg_1);
	local_14 = local_4c;
jmp_c397:
	if (local_14 == 0x0) goto jmp_c3a0;
	return local_14;
jmp_c3a0:
	local_34 = arg_1;
	if (local_34 == 0x9b) goto jmp_c41d;
	local_38 = 0x9c;
	if (local_34 == local_38) goto jmp_c42a;
	if (local_34 > local_38) goto jmp_c3da;
	local_3c = arg_1;
	local_40 = 0xd;
	if (local_3c == local_40) goto jmp_c4bc;
	if (local_3c > local_40) goto jmp_c3cc;
	if (arg_1 == 0x9) goto jmp_c462;
	goto jmp_c4d8;
jmp_c3cc:
	local_44 = arg_1;
	if (local_44 == 0x84) goto jmp_c433;
	if (local_44 == 0x85) goto jmp_c462;
	goto jmp_c4d8;
jmp_c3da:
	local_48 = arg_1;
	if (local_48 == 0xa7) goto jmp_c462;
	local_4c = 0xa9;
	if (local_48 == local_4c) goto jmp_c4bc;
	if (local_48 > local_4c) goto jmp_c3f5;
	if (arg_1 == 0xa1) goto jmp_c433;
	goto jmp_c4d8;
jmp_c3f5:
	local_50 = arg_1;
	if (local_50 < 0xb2) goto jmp_c4d8;
	if (local_50 > 0xbc) goto jmp_c409;
	goto *(int *)((local_50 << 0x2) + 0x2040);
jmp_c409:
	local_54 = arg_1;
	if (local_54 < 0xd9) goto jmp_c4d8;
	if (local_54 > 0xe8) goto jmp_c4d8;
	goto *(int *)((local_54 << 0x2) + 0x1fd0);
jmp_c41d:
	*(int *)local_58 = 0x107d0;
	*(int *)*(int *)local_58 = (*(int *)*(int *)local_58 ^ 0x1);
	goto jmp_c4d8;
jmp_c42a:
	trap_Cmd_ExecuteText(0x2, 0x697a);
	goto jmp_c4d8;
jmp_c433:
	local_18 = *(int *)arg_0;
	*(int *)(arg_0 + 0x4) = *(int *)arg_0;
	*(int *)arg_0 = (*(int *)arg_0 - 0x1);
	Menu_AdjustCursor(arg_0, 0xffffffff);
	if (local_18 == *(int *)arg_0) goto jmp_c4d8;
	Menu_CursorMoved(arg_0);
	local_14 = menu_move_sound;
	goto jmp_c4d8;
jmp_c462:
	local_18 = *(int *)arg_0;
	*(int *)(arg_0 + 0x4) = *(int *)arg_0;
	*(int *)arg_0 = (*(int *)arg_0 + 0x1);
	Menu_AdjustCursor(arg_0, 0x1);
	if (local_18 == *(int *)arg_0) goto jmp_c4d8;
	Menu_CursorMoved(arg_0);
	local_14 = menu_move_sound;
	goto jmp_c4d8;
	if (local_10 == 0x0) goto jmp_c4d8;
	local_6c = *(int *)(local_10 + 0x2c);
	local_70 = 0x0;
	if ((local_6c & 0x200) == local_70) goto jmp_c4d8;
	if ((local_6c & 0x6000) != local_70) goto jmp_c4d8;
	local_74 = Menu_ActivateItem(arg_0, local_10);
	return local_74;
jmp_c4bc:
	if (local_10 == 0x0) goto jmp_c4d8;
	if ((*(int *)(local_10 + 0x2c) & 0x6800) != 0x0) goto jmp_c4d8;
	local_78 = Menu_ActivateItem(arg_0, local_10);
	return local_78;
jmp_c4d8:
	return local_14;
}

/*
=================
Menu_Cache

Address: 0xc4dd
Stack Size: 0x54
Calls: trap_S_RegisterSound, trap_R_RegisterShaderNoMip
Called by: UI_DrawConnectScreen, UI_Init, UI_ConsoleCommand, UI_SetActiveMenu
=================
*/
void Menu_Cache(void) {
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

	local_10 = trap_R_RegisterShaderNoMip(0x696a);
	bss_107e0 = local_10;
	local_14 = trap_R_RegisterShaderNoMip(0x6952);
	bss_107e4 = local_14;
	local_18 = trap_R_RegisterShaderNoMip(0x6936);
	bss_107e8 = local_18;
	local_1c = trap_R_RegisterShaderNoMip(0x691e);
	bss_107ec = local_1c;
	local_20 = trap_R_RegisterShaderNoMip(0x690b);
	bss_107f0 = local_20;
	local_24 = trap_R_RegisterShaderNoMip(0x68f8);
	bss_107f4 = local_24;
	local_28 = trap_R_RegisterShaderNoMip(0x68e4);
	bss_107f8 = local_28;
	local_2c = trap_R_RegisterShaderNoMip(0x68de);
	bss_107d4 = local_2c;
	if (bss_107a4 != 0x3) goto jmp_c53e;
	local_30 = trap_R_RegisterShaderNoMip(0x68ce);
	bss_107d8 = local_30;
	goto jmp_c548;
jmp_c53e:
	local_30 = trap_R_RegisterShaderNoMip(0x68c5);
	bss_107d8 = local_30;
jmp_c548:
	local_30 = trap_R_RegisterShaderNoMip(0x68b6);
	bss_107dc = local_30;
	local_34 = trap_S_RegisterSound(0x68a1, 0x0);
	menu_in_sound = local_34;
	local_38 = trap_S_RegisterSound(0x688c, 0x0);
	menu_move_sound = local_38;
	local_3c = trap_S_RegisterSound(0x6877, 0x0);
	menu_out_sound = local_3c;
	local_40 = trap_S_RegisterSound(0x6862, 0x0);
	menu_buzz_sound = local_40;
	local_44 = trap_S_RegisterSound(0x6849, 0x0);
	weaponChangeSound = local_44;
	menu_null_sound = 0xffffffff;
	local_48 = trap_R_RegisterShaderNoMip(0x6838);
	sliderBar = local_48;
	local_4c = trap_R_RegisterShaderNoMip(0x6822);
	sliderButton_0 = local_4c;
	local_50 = trap_R_RegisterShaderNoMip(0x680c);
	sliderButton_1 = local_50;
}

/*
=================
UI_RemoveBotsMenu_SetBotNames

Address: 0xc5b1
Stack Size: 0x41c
Calls: trap_GetConfigString, Q_CleanStr, Q_strncpyz, Info_ValueForKey
Called by: UI_RemoveBotsMenu_Init, UI_RemoveBotsMenu_DownEvent, UI_RemoveBotsMenu_UpEvent
=================
*/
void UI_RemoveBotsMenu_SetBotNames(void) {
	int		local_14;
	char	local_18[1024];
	int		local_418;

	local_14 = 0x0;
	goto jmp_c5f2;
jmp_c5b7:
	trap_GetConfigString((*(int *)(((bss_4d390 + local_14) << 0x2) + 0x4d478) + 0x220), local_18, 0x400);
	local_418 = Info_ValueForKey(local_18, 0x6ab2);
	Q_strncpyz(((local_14 << 0x5) + 0x4d398), local_418, 0x20);
	Q_CleanStr(((local_14 << 0x5) + 0x4d398));
	local_14 = (local_14 + 0x1);
jmp_c5f2:
	if (local_14 >= 0x7) goto jmp_c5fe;
	if ((bss_4d390 + local_14) < bss_4d38c) goto jmp_c5b7;
jmp_c5fe:
}

/*
=================
UI_RemoveBotsMenu_DeleteEvent

Address: 0xc600
Stack Size: 0x14
Calls: trap_Cmd_ExecuteText, va
=================
*/
void UI_RemoveBotsMenu_DeleteEvent(, int arg_1) {
	int		local_10;

	if (arg_1 == 0x3) goto jmp_c607;
	goto jmp_c620;
jmp_c607:
	local_10 = va(0x6aa3, *(int *)(((bss_4d390 + bss_4d394) << 0x2) + 0x4d478));
	trap_Cmd_ExecuteText(0x2, local_10);
jmp_c620:
}

/*
=================
UI_RemoveBotsMenu_BotEvent

Address: 0xc622
Stack Size: 0x8
=================
*/
void UI_RemoveBotsMenu_BotEvent(int arg_0, int arg_1) {

	if (arg_1 == 0x3) goto jmp_c629;
	goto jmp_c642;
jmp_c629:
	*(int *)((0x48 * bss_4d394) + 0x4d128) = 0x21a0;
	bss_4d394 = (*(int *)(arg_0 + 0x8) - 0x14);
	*(int *)((0x48 * bss_4d394) + 0x4d128) = 0x2160;
jmp_c642:
}

/*
=================
UI_RemoveBotsMenu_BackEvent

Address: 0xc644
Stack Size: 0x8
Calls: UI_PopMenu
=================
*/
void UI_RemoveBotsMenu_BackEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_c64b;
	goto jmp_c64e;
jmp_c64b:
	UI_PopMenu();
jmp_c64e:
}

/*
=================
UI_RemoveBotsMenu_UpEvent

Address: 0xc650
Stack Size: 0xc
Calls: UI_RemoveBotsMenu_SetBotNames
=================
*/
void UI_RemoveBotsMenu_UpEvent(, int arg_1) {
	int		local_8;

	if (arg_1 == 0x3) goto jmp_c657;
	goto jmp_c669;
jmp_c657:
	if (bss_4d390 <= 0x0) goto jmp_c669;
	local_8 = 0x4d390;
	*(int *)local_8 = (*(int *)local_8 - 0x1);
	UI_RemoveBotsMenu_SetBotNames();
jmp_c669:
}

/*
=================
UI_RemoveBotsMenu_DownEvent

Address: 0xc66b
Stack Size: 0xc
Calls: UI_RemoveBotsMenu_SetBotNames
=================
*/
void UI_RemoveBotsMenu_DownEvent(, int arg_1) {
	int		local_8;

	if (arg_1 == 0x3) goto jmp_c672;
	goto jmp_c687;
jmp_c672:
	if ((bss_4d390 + 0x7) >= bss_4d38c) goto jmp_c687;
	local_8 = 0x4d390;
	*(int *)local_8 = (*(int *)local_8 + 0x1);
	UI_RemoveBotsMenu_SetBotNames();
jmp_c687:
}

/*
=================
UI_RemoveBotsMenu_GetBots

Address: 0xc689
Stack Size: 0x434
Calls: trap_GetConfigString, atoi, Info_ValueForKey
Called by: UI_RemoveBotsMenu_Init
=================
*/
void UI_RemoveBotsMenu_GetBots(void) {
	int		local_14;
	char	local_18[1024];
	int		local_418;
	int		local_41c;
	int		local_420;
	int		local_424;
	int		local_428;
	int		local_42c;
	int		local_430;

	trap_GetConfigString(0x0, local_18, 0x400);
	local_420 = Info_ValueForKey(local_18, 0x6a95);
	local_424 = atoi(local_420);
	local_41c = local_424;
	bss_4d38c = 0x0;
	local_14 = 0x0;
	goto jmp_c6ed;
jmp_c6ae:
	trap_GetConfigString((local_14 + 0x220), local_18, 0x400);
	local_428 = Info_ValueForKey(local_18, 0x6a8f);
	local_42c = atoi(local_428);
	local_418 = local_42c;
	if (local_418 != 0x0) goto jmp_c6d3;
	goto jmp_c6e7;
jmp_c6d3:
	*(int *)((bss_4d38c << 0x2) + 0x4d478) = local_14;
	local_430 = 0x4d38c;
	*(int *)local_430 = (*(int *)local_430 + 0x1);
jmp_c6e7:
	local_14 = (local_14 + 0x1);
jmp_c6ed:
	if (local_14 < local_41c) goto jmp_c6ae;
}

/*
=================
UI_RemoveBots_Cache

Address: 0xc6f4
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_RemoveBotsMenu_Init, UI_Cache_f
=================
*/
void UI_RemoveBots_Cache(void) {

	trap_R_RegisterShaderNoMip(0x6a7a);
	trap_R_RegisterShaderNoMip(0x6a6a);
	trap_R_RegisterShaderNoMip(0x6a5a);
	trap_R_RegisterShaderNoMip(0x6a48);
	trap_R_RegisterShaderNoMip(0x6a36);
}

/*
=================
UI_RemoveBotsMenu_Init

Address: 0xc710
Stack Size: 0x2c
Calls: memset, Menu_AddItem, UI_RemoveBotsMenu_SetBotNames, UI_RemoveBotsMenu_GetBots, UI_RemoveBots_Cache
Called by: UI_RemoveBotsMenu
=================
*/
void UI_RemoveBotsMenu_Init(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[12];

	memset(0x4ce1c, 0x0, 0x165c);
	bss_4cf34 = 0x0;
	bss_4cf30 = 0x1;
	UI_RemoveBots_Cache();
	UI_RemoveBotsMenu_GetBots();
	UI_RemoveBotsMenu_SetBotNames();
	if (bss_4d38c >= 0x7) goto jmp_c733;
	*(int *)local_20 = bss_4d38c;
	goto jmp_c736;
jmp_c733:
	*(int *)local_20 = 0x7;
jmp_c736:
	local_18 = *(int *)local_20;
	bss_4cf3c = 0xa;
	bss_4cf48 = 0x140;
	bss_4cf4c = 0x10;
	bss_4cf78 = 0x6a2a;
	bss_4cf80 = 0x2160;
	bss_4cf7c = 0x1;
	bss_4cf84 = 0x6;
	bss_4cf88 = 0x6a7a;
	bss_4cfb0 = 0x4000;
	bss_4cf90 = 0x57;
	bss_4cf94 = 0x4a;
	bss_4cfd0 = 0x1d2;
	bss_4cfd4 = 0x14c;
	bss_4cfdc = 0x6;
	bss_4cfe0 = 0x6a13;
	bss_4d008 = 0x4000;
	bss_4cfe8 = 0xc8;
	bss_4cfec = 0x80;
	bss_4d028 = 0x40;
	bss_4d02c = 0x80;
	bss_4d034 = 0x6;
	bss_4d060 = 0x104;
	bss_4d040 = 0xc8;
	bss_4d044 = 0x80;
	bss_4d03c = 0xa;
	bss_4d064 = 0xc650;
	bss_4d080 = 0x40;
	bss_4d084 = 0x40;
	bss_4d070 = 0x69fa;
	bss_4d08c = 0x6;
	bss_4d0b8 = 0x104;
	bss_4d098 = 0xc8;
	bss_4d09c = 0xc0;
	bss_4d094 = 0xb;
	bss_4d0bc = 0xc66b;
	bss_4d0d8 = 0x40;
	bss_4d0dc = 0x40;
	bss_4d0c8 = 0x69e1;
	local_14 = 0x0;
	local_1c = 0x78;
	goto jmp_c811;
jmp_c7b4:
	*(int *)((0x48 * local_14) + 0x4d0e4) = 0x9;
	*(int *)((0x48 * local_14) + 0x4d110) = 0x104;
	*(int *)((0x48 * local_14) + 0x4d0ec) = (local_14 + 0x14);
	*(int *)((0x48 * local_14) + 0x4d0f0) = 0x108;
	*(int *)((0x48 * local_14) + 0x4d0f4) = local_1c;
	*(int *)((0x48 * local_14) + 0x4d114) = 0xc622;
	*(int *)((0x48 * local_14) + 0x4d120) = ((local_14 << 0x5) + 0x4d398);
	*(int *)((0x48 * local_14) + 0x4d128) = 0x21a0;
	*(int *)((0x48 * local_14) + 0x4d124) = 0x10;
	local_14 = (local_14 + 0x1);
	local_1c = (local_1c + 0x14);
jmp_c811:
	if (local_14 < local_18) goto jmp_c7b4;
	bss_4d2dc = 0x6;
	bss_4d2e0 = 0x6a48;
	bss_4d308 = 0x104;
	bss_4d2e4 = 0xc;
	bss_4d30c = 0xc600;
	bss_4d2e8 = 0x140;
	bss_4d2ec = 0x140;
	bss_4d328 = 0x80;
	bss_4d32c = 0x40;
	bss_4d318 = 0x6a36;
	bss_4d334 = 0x6;
	bss_4d338 = 0x6a6a;
	bss_4d360 = 0x104;
	bss_4d33c = 0xd;
	bss_4d364 = 0xc644;
	bss_4d340 = 0xc0;
	bss_4d344 = 0x140;
	bss_4d380 = 0x80;
	bss_4d384 = 0x40;
	bss_4d370 = 0x6a5a;
	Menu_AddItem(0x4ce1c, 0x4cf84);
	Menu_AddItem(0x4ce1c, 0x4cf3c);
	Menu_AddItem(0x4ce1c, 0x4cfdc);
	Menu_AddItem(0x4ce1c, 0x4d034);
	Menu_AddItem(0x4ce1c, 0x4d08c);
	local_14 = 0x0;
	goto jmp_c88c;
jmp_c87a:
	Menu_AddItem(0x4ce1c, ((0x48 * local_14) + 0x4d0e4));
	local_14 = (local_14 + 0x1);
jmp_c88c:
	if (local_14 < local_18) goto jmp_c87a;
	Menu_AddItem(0x4ce1c, 0x4d2dc);
	Menu_AddItem(0x4ce1c, 0x4d334);
	bss_4d390 = 0x0;
	bss_4d394 = 0x0;
	bss_4d128 = 0x2160;
}

/*
=================
UI_RemoveBotsMenu

Address: 0xc8aa
Stack Size: 0xc
Calls: UI_PushMenu, UI_RemoveBotsMenu_Init
Called by: InGame_Event
=================
*/
void UI_RemoveBotsMenu(void) {

	UI_RemoveBotsMenu_Init();
	UI_PushMenu(0x4ce1c);
}

/*
=================
UI_SaveConfigMenu_BackEvent

Address: 0xc8b5
Stack Size: 0x8
Calls: UI_PopMenu
=================
*/
void UI_SaveConfigMenu_BackEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_c8bc;
	goto jmp_c8bf;
jmp_c8bc:
	UI_PopMenu();
jmp_c8bf:
}

/*
=================
UI_SaveConfigMenu_SaveEvent

Address: 0xc8c1
Stack Size: 0x58
Calls: trap_Cmd_ExecuteText, UI_PopMenu, va, COM_StripExtension
=================
*/
void UI_SaveConfigMenu_SaveEvent(, int arg_1) {
	char	local_14[64];
	int		local_54;

	if (arg_1 == 0x3) goto jmp_c8c8;
	goto jmp_c8eb;
jmp_c8c8:
	if ((char)*(char *)bss_4e680 != 0x0) goto jmp_c8cf;
	goto jmp_c8eb;
jmp_c8cf:
	COM_StripExtension(0x4e680, local_14, 0x40);
	local_54 = va(0x6b23, local_14);
	trap_Cmd_ExecuteText(0x2, local_54);
	UI_PopMenu();
jmp_c8eb:
}

/*
=================
UI_SaveConfigMenu_SavenameDraw

Address: 0xc8ed
Stack Size: 0x34
Calls: MField_Draw, UI_FillRect, UI_DrawProportionalString, Menu_ItemAtCursor
=================
*/
void UI_SaveConfigMenu_SavenameDraw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[12];

	local_1c = arg_0;
	*(int *)local_28 = Menu_ItemAtCursor(0x4e478);
	if (local_1c != *(int *)local_28) goto jmp_c905;
	local_20 = 0x4010;
	local_24 = 0x2200;
	goto jmp_c90b;
jmp_c905:
	local_20 = 0x10;
	local_24 = 0x29c8;
jmp_c90b:
	UI_DrawProportionalString(0x140, 0xc0, 0x6b13, 0x11, 0x21a0);
	UI_FillRect((float)*(int *)(local_1c + 0xc), (float)*(int *)(local_1c + 0x10), (float)(*(int *)(local_1c + 0x44) << 0x3), 0x41800000, 0x29b8);
	MField_Draw((local_1c + 0x3c), *(int *)(local_1c + 0xc), *(int *)(local_1c + 0x10), local_20, local_24);
}

/*
=================
UI_SaveConfigMenu_Init

Address: 0xc952
Stack Size: 0x14
Calls: memset, Menu_AddItem, UI_SaveConfigMenu_Cache
Called by: UI_SaveConfigMenu
=================
*/
void UI_SaveConfigMenu_Init(void) {

	memset(0x4e478, 0x0, 0x3bc);
	UI_SaveConfigMenu_Cache();
	bss_4e58c = 0x1;
	bss_4e590 = 0x1;
	bss_4e598 = 0xa;
	bss_4e5a4 = 0x140;
	bss_4e5a8 = 0x10;
	bss_4e5d4 = 0x6b07;
	bss_4e5dc = 0x2160;
	bss_4e5d8 = 0x1;
	bss_4e5e0 = 0x6;
	bss_4e5e4 = 0x6af4;
	bss_4e60c = 0x4000;
	bss_4e5ec = 0x8e;
	bss_4e5f0 = 0x76;
	bss_4e62c = 0x167;
	bss_4e630 = 0x100;
	bss_4e638 = 0x4;
	bss_4e664 = 0x88000;
	bss_4e670 = 0xc8ed;
	bss_4e67c = 0x14;
	bss_4e780 = 0x14;
	bss_4e644 = 0xf0;
	bss_4e648 = 0xe3;
	bss_4e64c = 0xf0;
	bss_4e650 = 0xe3;
	bss_4e654 = 0x189;
	bss_4e658 = 0xf5;
	bss_4e784 = 0x6;
	bss_4e788 = 0x6ae4;
	bss_4e7b0 = 0x104;
	bss_4e78c = 0xb;
	bss_4e7b4 = 0xc8b5;
	bss_4e790 = 0x0;
	bss_4e794 = 0x1a0;
	bss_4e7d0 = 0x80;
	bss_4e7d4 = 0x40;
	bss_4e7c0 = 0x6ad4;
	bss_4e7dc = 0x6;
	bss_4e7e0 = 0x6ac4;
	bss_4e808 = 0x110;
	bss_4e7e4 = 0xc;
	bss_4e80c = 0xc8c1;
	bss_4e7e8 = 0x280;
	bss_4e7ec = 0x1a0;
	bss_4e828 = 0x80;
	bss_4e82c = 0x40;
	bss_4e818 = 0x6ab4;
	Menu_AddItem(0x4e478, 0x4e598);
	Menu_AddItem(0x4e478, 0x4e5e0);
	Menu_AddItem(0x4e478, 0x4e638);
	Menu_AddItem(0x4e478, 0x4e784);
	Menu_AddItem(0x4e478, 0x4e7dc);
}

/*
=================
UI_SaveConfigMenu_Cache

Address: 0xca0e
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_SaveConfigMenu_Init
=================
*/
void UI_SaveConfigMenu_Cache(void) {

	trap_R_RegisterShaderNoMip(0x6ae4);
	trap_R_RegisterShaderNoMip(0x6ad4);
	trap_R_RegisterShaderNoMip(0x6ac4);
	trap_R_RegisterShaderNoMip(0x6ab4);
	trap_R_RegisterShaderNoMip(0x6af4);
}

/*
=================
UI_SaveConfigMenu

Address: 0xca2a
Stack Size: 0xc
Calls: UI_PushMenu, UI_SaveConfigMenu_Init
=================
*/
void UI_SaveConfigMenu(void) {

	UI_SaveConfigMenu_Init();
	UI_PushMenu(0x4e478);
}

/*
=================
Favorites_Add

Address: 0xca35
Stack Size: 0x12c
Calls: trap_Cvar_Set, trap_Cvar_VariableStringBuffer, Q_stricmp, va
Called by: ServerInfo_Event
=================
*/
void Favorites_Add(void) {
	char	local_14[128];
	int		local_94;
	int		local_98;
	char	local_9c[128];
	int		local_11c;
	int		local_120;
	int		local_124;
	int		local_128;

	trap_Cvar_VariableStringBuffer(0x6b6a, local_9c, 0x80);
	if ((char)*(char *)local_9c != 0x0) goto jmp_ca46;
	goto jmp_caa7;
jmp_ca46:
	local_11c = 0x0;
	local_98 = local_11c;
	local_94 = local_11c;
jmp_ca51:
	local_120 = va(0x6b61, (local_94 + 0x1));
	trap_Cvar_VariableStringBuffer(local_120, local_14, 0x80);
	local_124 = Q_stricmp(local_9c, local_14);
	if (local_124 != 0x0) goto jmp_ca74;
	goto jmp_caa7;
jmp_ca74:
	local_128 = 0x0;
	if ((char)*(char *)local_14 != local_128) goto jmp_ca88;
	if (local_98 != local_128) goto jmp_ca88;
	local_98 = (local_94 + 0x1);
jmp_ca88:
	local_94 = (local_94 + 0x1);
	if (local_94 < 0x10) goto jmp_ca51;
	if (local_98 == 0x0) goto jmp_caa7;
	local_120 = va(0x6b61, local_98);
	trap_Cvar_Set(local_120, local_9c);
jmp_caa7:
}

/*
=================
ServerInfo_Event

Address: 0xcaa9
Stack Size: 0x10
Calls: UI_PopMenu, Favorites_Add
=================
*/
void ServerInfo_Event(int arg_0, int arg_1) {
	char	local_8[8];

	*(int *)local_8 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_8 == 0x64) goto jmp_cabb;
	if (*(int *)local_8 == 0x65) goto jmp_cac9;
	goto jmp_cad2;
jmp_cabb:
	if (arg_1 == 0x3) goto jmp_cac1;
	goto jmp_cad2;
jmp_cac1:
	Favorites_Add();
	UI_PopMenu();
	goto jmp_cad2;
jmp_cac9:
	if (arg_1 == 0x3) goto jmp_cacf;
	goto jmp_cad2;
jmp_cacf:
	UI_PopMenu();
jmp_cad2:
}

/*
=================
ServerInfo_MenuDraw

Address: 0xcad4
Stack Size: 0x828
Calls: Menu_Draw, UI_DrawString, Q_strcat, Info_NextPair
=================
*/
void ServerInfo_MenuDraw(void) {
	char	local_1c[1024];
	int		local_41c;
	int		local_420;
	int		local_424;
	char	local_428[1024];

	local_424 = 0x0;
	local_41c = ((0xf0 - ((bss_4eeec << 0x4) / 0x2)) - 0x14);
	local_420 = 0x4eaec;
	goto jmp_cb2a;
jmp_cae9:
	Info_NextPair(&local_420, local_1c, local_428);
	if ((char)*(char *)local_1c != 0x0) goto jmp_caf9;
	goto jmp_cb33;
jmp_caf9:
	Q_strcat(local_1c, 0x400, 0x6b5f);
	UI_DrawString(0x138, local_41c, local_1c, 0x12, 0x21b0);
	UI_DrawString(0x148, local_41c, local_428, 0x10, 0x21f0);
	local_41c = (local_41c + 0x10);
	local_424 = (local_424 + 0x1);
jmp_cb2a:
	if (local_420 == 0x0) goto jmp_cb33;
	if (local_424 < bss_4eeec) goto jmp_cae9;
jmp_cb33:
	Menu_Draw(0x4e834);
}

/*
=================
ServerInfo_MenuKey

Address: 0xcb3a
Stack Size: 0x14
Calls: Menu_DefaultKey
=================
*/
int ServerInfo_MenuKey(int arg_0) {
	int		local_10;

	local_10 = Menu_DefaultKey(0x4e834, arg_0);
	return local_10;
}

/*
=================
ServerInfo_Cache

Address: 0xcb49
Stack Size: 0x10
Calls: trap_R_RegisterShaderNoMip
Called by: UI_ServerInfoMenu, UI_Cache_f
=================
*/
void ServerInfo_Cache(void) {
	int		local_c;

	local_c = 0x0;
jmp_cb4d:
	if (*(int *)((local_c << 0x2) + 0x2374) != 0x0) goto jmp_cb58;
	goto jmp_cb6b;
jmp_cb58:
	trap_R_RegisterShaderNoMip(*(int *)((local_c << 0x2) + 0x2374));
	local_c = (local_c + 0x1);
	goto jmp_cb4d;
jmp_cb6b:
}

/*
=================
UI_ServerInfoMenu

Address: 0xcb6d
Stack Size: 0x820
Calls: trap_GetConfigString, trap_Cvar_VariableValue, memset, UI_PushMenu, Menu_AddItem, Info_NextPair, ServerInfo_Cache
Called by: InGame_Event
=================
*/
void UI_ServerInfoMenu(void) {
	int		local_14;
	char	local_18[1024];
	char	local_418[1024];
	int		local_818;
	int		local_81c;

	memset(0x4e834, 0x0, 0x6bc);
	ServerInfo_Cache();
	bss_4e940 = 0xcad4;
	bss_4e944 = 0xcb3a;
	bss_4e948 = 0x1;
	bss_4e94c = 0x1;
	bss_4e954 = 0xa;
	bss_4e960 = 0x140;
	bss_4e964 = 0x10;
	bss_4e990 = 0x6b53;
	bss_4e998 = 0x2160;
	bss_4e994 = 0x1;
	bss_4e99c = 0x6;
	bss_4e9a0 = 0x6bb4;
	bss_4e9c8 = 0x4000;
	bss_4e9a8 = 0x0;
	bss_4e9ac = 0x4e;
	bss_4e9e8 = 0x100;
	bss_4e9ec = 0x149;
	bss_4e9f4 = 0x6;
	bss_4e9f8 = 0x6ba2;
	bss_4ea20 = 0x4000;
	bss_4ea00 = 0x178;
	bss_4ea04 = 0x4c;
	bss_4ea40 = 0x100;
	bss_4ea44 = 0x14e;
	bss_4eaa4 = 0x9;
	bss_4ead0 = 0x108;
	bss_4ead4 = 0xcaa9;
	bss_4eaac = 0x64;
	bss_4eab0 = 0x140;
	bss_4eab4 = 0x173;
	bss_4eae0 = 0x6b42;
	bss_4eae4 = 0x11;
	bss_4eae8 = 0x21b0;
	local_818 = trap_Cvar_VariableValue(0x6b37);
	if (local_818 == 0x0) goto jmp_cbf2;
	local_81c = 0x4ead0;
	*(int *)local_81c = (*(int *)local_81c | 0x2000);
jmp_cbf2:
	bss_4ea4c = 0x6;
	bss_4ea50 = 0x6b92;
	bss_4ea78 = 0x104;
	bss_4ea7c = 0xcaa9;
	bss_4ea54 = 0x65;
	bss_4ea58 = 0x0;
	bss_4ea5c = 0x1a0;
	bss_4ea98 = 0x80;
	bss_4ea9c = 0x40;
	bss_4ea88 = 0x6b82;
	trap_GetConfigString(0x0, 0x4eaec, 0x400);
	bss_4eeec = 0x0;
	local_14 = 0x4eaec;
	goto jmp_cc3c;
jmp_cc21:
	Info_NextPair(&local_14, local_18, local_418);
	if ((char)*(char *)local_18 != 0x0) goto jmp_cc31;
	goto jmp_cc40;
jmp_cc31:
	local_81c = 0x4eeec;
	*(int *)local_81c = (*(int *)local_81c + 0x1);
jmp_cc3c:
	if (local_14 != 0x0) goto jmp_cc21;
jmp_cc40:
	if (bss_4eeec <= 0x10) goto jmp_cc47;
	bss_4eeec = 0x10;
jmp_cc47:
	Menu_AddItem(0x4e834, 0x4e954);
	Menu_AddItem(0x4e834, 0x4e99c);
	Menu_AddItem(0x4e834, 0x4e9f4);
	Menu_AddItem(0x4e834, 0x4eaa4);
	Menu_AddItem(0x4e834, 0x4ea4c);
	UI_PushMenu(0x4e834);
}

/*
=================
ArenaServers_MaxPing

Address: 0xcc71
Stack Size: 0x14
Calls: trap_Cvar_VariableValue
Called by: ArenaServers_DoRefresh, ArenaServers_LoadFavorites, ArenaServers_Insert
=================
*/
int ArenaServers_MaxPing(void) {
	int		local_c;
	int		local_10;

	local_10 = trap_Cvar_VariableValue(0x700d);
	local_c = (int)local_10;
	if (local_c >= 0x64) goto jmp_cc84;
	local_c = 0x64;
jmp_cc84:
	return local_c;
}

/*
=================
ArenaServers_Compare

Address: 0xcc89
Stack Size: 0x54
Calls: Q_stricmp
=================
*/
int ArenaServers_Compare(int arg_0, int arg_1) {
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

	local_10 = arg_0;
	local_14 = arg_1;
	local_20 = g_sortkey;
	if (local_20 < 0x0) goto jmp_cd8a;
	if (local_20 > 0x4) goto jmp_cd8a;
	goto *(int *)((local_20 << 0x2) + 0x2444);
	local_24 = 0x40;
	local_28 = Q_stricmp((local_10 + local_24), (local_14 + local_24));
	return local_28;
	local_2c = 0x59;
	local_30 = Q_stricmp((local_10 + local_2c), (local_14 + local_2c));
	return local_30;
	local_34 = local_10;
	local_18 = (float)(*(int *)(local_34 + 0x70) - *(int *)(local_34 + 0x6c));
	if (local_18 >= 0x0) goto jmp_ccef;
	local_18 = 0x0;
jmp_ccef:
	local_38 = local_14;
	local_1c = (float)(*(int *)(local_38 + 0x70) - *(int *)(local_38 + 0x6c));
	if (local_1c >= 0x0) goto jmp_cd08;
	local_1c = 0x0;
jmp_cd08:
	if (local_18 >= local_1c) goto jmp_cd11;
	return 0x1;
jmp_cd11:
	if (local_18 != local_1c) goto jmp_cd1a;
	return 0x0;
jmp_cd1a:
	return 0xffffffff;
	local_3c = 0x78;
	if (*(int *)(local_10 + local_3c) >= *(int *)(local_14 + local_3c)) goto jmp_cd32;
	return 0xffffffff;
jmp_cd32:
	local_40 = 0x78;
	if (*(int *)(local_10 + local_40) != *(int *)(local_14 + local_40)) goto jmp_cd46;
	return 0x0;
jmp_cd46:
	return 0x1;
	local_44 = 0x74;
	if (*(int *)(local_10 + local_44) >= *(int *)(local_14 + local_44)) goto jmp_cd5e;
	return 0xffffffff;
jmp_cd5e:
	local_48 = 0x74;
	if (*(int *)(local_10 + local_48) <= *(int *)(local_14 + local_48)) goto jmp_cd72;
	return 0x1;
jmp_cd72:
	local_4c = 0x40;
	local_50 = Q_stricmp((local_10 + local_4c), (local_14 + local_4c));
	return local_50;
jmp_cd8a:
	return 0x0;
}

/*
=================
ArenaServers_SourceForLAN

Address: 0xcd8e
Stack Size: 0xc
Called by: ArenaServers_DoRefresh
=================
*/
int ArenaServers_SourceForLAN(void) {
	int		local_8;

	local_8 = g_servertype;
	if (local_8 < 0x0) goto jmp_cda3;
	if (local_8 > 0x7) goto jmp_cda3;
	goto *(int *)((local_8 << 0x2) + 0x2458);
jmp_cda3:
	return 0x0;
	return 0x2;
	return 0x3;
}

/*
=================
ArenaServers_Go

Address: 0xcdaf
Stack Size: 0x18
Calls: trap_Cmd_ExecuteText, va
Called by: ArenaServers_Event
=================
*/
void ArenaServers_Go(void) {
	int		local_10;
	int		local_14;

	local_10 = *(int *)((0x48 * bss_7106c) + 0x71d50);
	if (local_10 == 0x0) goto jmp_cdce;
	local_14 = va(0x7001, local_10);
	trap_Cmd_ExecuteText(0x2, local_14);
jmp_cdce:
}

/*
=================
ArenaServers_UpdatePicture

Address: 0xcdd0
Stack Size: 0x1c
Calls: Com_sprintf
Called by: ArenaServers_Event, ArenaServers_UpdateMenu
=================
*/
void ArenaServers_UpdatePicture(void) {
	int		local_18;

	if (bss_71070 != 0x0) goto jmp_cdda;
	bss_71090 = 0x0;
	goto jmp_cdf4;
jmp_cdda:
	local_18 = *(int *)((0x48 * bss_7106c) + 0x71d50);
	Com_sprintf(0x4eef0, 0x40, 0x6fef, (local_18 + 0x59));
	bss_71090 = 0x4eef0;
jmp_cdf4:
	bss_710d0 = 0x0;
}

/*
=================
ArenaServers_UpdateMenu

Address: 0xcdf9
Stack Size: 0x7c
Calls: ArenaServers_UpdatePicture, strcpy, qsort, Com_sprintf
Called by: ArenaServers_MenuKey, ArenaServers_Event, ArenaServers_SetType, ArenaServers_StartRefresh, ArenaServers_DoRefresh, ArenaServers_StopRefresh
=================
*/
void ArenaServers_UpdateMenu(void) {
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

	if (bss_7430c <= 0x0) goto jmp_ce98;
	if (bss_7431c == 0x0) goto jmp_ce2a;
	if (bss_74318 > bss_7430c) goto jmp_ce2a;
	Com_sprintf(bss_71228, 0x40, 0x6fd7, bss_74318, bss_7430c);
	bss_71270 = 0x6fc3;
	qsort(bss_74314, *(int *)bss_74310, 0x98, 0xcc89);
	goto jmp_cf9c;
jmp_ce2a:
	local_54 = 0x70f18;
	*(int *)local_54 = (*(int *)local_54 & 0xffffdfff);
	local_58 = 0x70f78;
	*(int *)local_58 = (*(int *)local_58 & 0xffffdfff);
	local_5c = 0x71018;
	*(int *)local_5c = (*(int *)local_5c & 0xffffdfff);
	local_60 = 0x70fd8;
	*(int *)local_60 = (*(int *)local_60 & 0xffffdfff);
	local_64 = 0x71058;
	*(int *)local_64 = (*(int *)local_64 & 0xffffdfff);
	local_68 = 0x71358;
	*(int *)local_68 = (*(int *)local_68 & 0xffffdfff);
	local_6c = 0x71460;
	*(int *)local_6c = (*(int *)local_6c & 0xffffdfff);
	local_70 = 0x7475c;
	*(int *)local_70 = (*(int *)local_70 & 0xffffdfff);
	local_74 = g_servertype;
	if (local_74 < 0x1) goto jmp_ce93;
	if (local_74 > 0x6) goto jmp_ce93;
	bss_71270 = 0x6bc6;
	goto jmp_cf9c;
jmp_ce93:
	bss_71270 = 0x6fc2;
	goto jmp_cf9c;
jmp_ce98:
	if (bss_7431c == 0x0) goto jmp_cf01;
	strcpy(bss_71228, 0x6fac);
	bss_71270 = 0x6fc3;
	local_54 = 0x70f18;
	*(int *)local_54 = (*(int *)local_54 | 0x2000);
	local_58 = 0x70f78;
	*(int *)local_58 = (*(int *)local_58 | 0x2000);
	local_5c = 0x71018;
	*(int *)local_5c = (*(int *)local_5c | 0x2000);
	local_60 = 0x70fd8;
	*(int *)local_60 = (*(int *)local_60 | 0x2000);
	local_64 = 0x71058;
	*(int *)local_64 = (*(int *)local_64 | 0x2000);
	local_68 = 0x71358;
	*(int *)local_68 = (*(int *)local_68 | 0x2000);
	local_6c = 0x71460;
	*(int *)local_6c = (*(int *)local_6c | 0x2000);
	local_70 = 0x7475c;
	*(int *)local_70 = (*(int *)local_70 | 0x2000);
	goto jmp_cf8e;
jmp_cf01:
	if (bss_7430c >= 0x0) goto jmp_cf0f;
	strcpy(bss_71228, 0x6f8c);
	goto jmp_cf17;
jmp_cf0f:
	strcpy(bss_71228, 0x6f7a);
jmp_cf17:
	local_54 = g_servertype;
	if (local_54 < 0x1) goto jmp_cf28;
	if (local_54 > 0x6) goto jmp_cf28;
	bss_71270 = 0x6bc6;
	goto jmp_cf2b;
jmp_cf28:
	bss_71270 = 0x6fc2;
jmp_cf2b:
	local_58 = 0x70eb8;
	*(int *)local_58 = (*(int *)local_58 & 0xffffdfff);
	local_5c = 0x70f18;
	*(int *)local_5c = (*(int *)local_5c & 0xffffdfff);
	local_60 = 0x70f78;
	*(int *)local_60 = (*(int *)local_60 & 0xffffdfff);
	local_64 = 0x71018;
	*(int *)local_64 = (*(int *)local_64 & 0xffffdfff);
	local_68 = 0x70fd8;
	*(int *)local_68 = (*(int *)local_68 & 0xffffdfff);
	local_6c = 0x71058;
	*(int *)local_6c = (*(int *)local_6c | 0x2000);
	local_70 = 0x71358;
	*(int *)local_70 = (*(int *)local_70 & 0xffffdfff);
	local_74 = 0x71460;
	*(int *)local_74 = (*(int *)local_74 | 0x2000);
	local_78 = 0x7475c;
	*(int *)local_78 = (*(int *)local_78 & 0xffffdfff);
jmp_cf8e:
	bss_71070 = 0x0;
	bss_7106c = 0x0;
	bss_71074 = 0x0;
	ArenaServers_UpdatePicture();
	goto jmp_d0d2;
jmp_cf9c:
	local_38 = bss_74314;
	local_50 = *(int *)bss_74310;
	local_54 = 0x0;
	local_44 = local_54;
	local_40 = local_54;
	goto jmp_d0c0;
jmp_cfb2:
	local_3c = ((0x48 * local_40) + 0x71d0c);
	*(int *)(local_3c + 0x44) = local_38;
	local_48 = local_3c;
	local_58 = 0x0;
	if (g_emptyservers != local_58) goto jmp_cfd7;
	if (*(int *)(local_38 + 0x6c) != local_58) goto jmp_cfd7;
	goto jmp_d0b4;
jmp_cfd7:
	if (g_fullservers != 0x0) goto jmp_cfe8;
	if (*(int *)(local_38 + 0x6c) != *(int *)(local_38 + 0x70)) goto jmp_cfe8;
	goto jmp_d0b4;
jmp_cfe8:
	local_60 = g_gametype;
	if (local_60 < 0x0) goto jmp_d020;
	if (local_60 > 0x4) goto jmp_d020;
	goto *(int *)((local_60 << 0x2) + 0x2478);
	if (*(int *)(local_38 + 0x78) == 0x0) goto jmp_d020;
	goto jmp_d0b4;
	if (*(int *)(local_38 + 0x78) == 0x3) goto jmp_d020;
	goto jmp_d0b4;
	if (*(int *)(local_38 + 0x78) == 0x1) goto jmp_d020;
	goto jmp_d0b4;
	if (*(int *)(local_38 + 0x78) == 0x4) goto jmp_d020;
	goto jmp_d0b4;
jmp_d020:
	if (*(int *)(local_38 + 0x74) >= *(int *)(local_38 + 0x8c)) goto jmp_d030;
	local_4c = 0x6f77;
	goto jmp_d063;
jmp_d030:
	local_6c = *(int *)(local_38 + 0x90);
	if (local_6c == 0x0) goto jmp_d048;
	if (*(int *)(local_38 + 0x74) <= local_6c) goto jmp_d048;
	local_4c = 0x6f77;
	goto jmp_d063;
jmp_d048:
	if (*(int *)(local_38 + 0x74) >= 0xc8) goto jmp_d054;
	local_4c = 0x6f74;
	goto jmp_d063;
jmp_d054:
	if (*(int *)(local_38 + 0x74) >= 0x190) goto jmp_d060;
	local_4c = 0x6f71;
	goto jmp_d063;
jmp_d060:
	local_4c = 0x6f6e;
jmp_d063:
#define next_call_arg_0 "local_48"
#define next_call_arg_1 "0x44"
#define next_call_arg_2 "0x6f3f"
#define next_call_arg_3 "(local_38 + 0x40)"
#define next_call_arg_4 "(local_38 + 0x59)"
#define next_call_arg_5 "*(int *)(local_38 + 0x6c)"
#define next_call_arg_6 "*(int *)(local_38 + 0x70)"
#define next_call_arg_7 "(local_38 + 0x7c)"
#define next_call_arg_8 "*(int *)((*(int *)(local_38 + 0x88) << 0x2) + 0x2414)"
#define next_call_arg_9 "local_4c"
#define next_call_arg_10 "*(int *)(local_38 + 0x74)"
	if (*(int *)(local_38 + 0x94) == 0x0) goto jmp_d0a5;
	local_70 = 0x6f3b;
	goto jmp_d0a8;
jmp_d0a5:
	local_70 = 0x6f38;
jmp_d0a8:
#define next_call_arg_11 "local_70"
	Com_sprintf();
	local_40 = (local_40 + 0x1);
jmp_d0b4:
	local_44 = (local_44 + 0x1);
	local_38 = (local_38 + 0x98);
jmp_d0c0:
	if (local_44 < local_50) goto jmp_cfb2;
	bss_71070 = local_40;
	bss_7106c = 0x0;
	bss_71074 = 0x0;
	ArenaServers_UpdatePicture();
jmp_d0d2:
}

/*
=================
ArenaServers_Remove

Address: 0xd0d4
Stack Size: 0x30
Calls: memset, memcpy, Q_stricmp
Called by: ArenaServers_MenuKey, ArenaServers_Event
=================
*/
void ArenaServers_Remove(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	if (bss_71070 != 0x0) goto jmp_d0db;
	goto jmp_d1b1;
jmp_d0db:
	local_1c = ((0x48 * bss_7106c) + 0x71d0c);
	local_18 = *(int *)(local_1c + 0x44);
	local_14 = 0x0;
	goto jmp_d14b;
jmp_d0ef:
	local_20 = Q_stricmp(((local_14 << 0x6) + 0x7432c), local_18);
	if (local_20 != 0x0) goto jmp_d145;
	if (local_14 >= (bss_7472c - 0x1)) goto jmp_d12a;
	local_28 = 0x6;
	local_2c = (local_14 << local_28);
	memcpy((local_2c + 0x7432c), (local_2c + 0x7436c), (((bss_7472c - local_14) << local_28) - 0x40));
jmp_d12a:
	local_24 = 0x7472c;
	*(int *)local_24 = (*(int *)local_24 - 0x1);
	memset(((bss_7472c << 0x6) + 0x7432c), 0x0, 0x40);
	goto jmp_d150;
jmp_d145:
	local_14 = (local_14 + 0x1);
jmp_d14b:
	if (local_14 < bss_7472c) goto jmp_d0ef;
jmp_d150:
	local_14 = 0x0;
	goto jmp_d1a4;
jmp_d155:
	if (((0x98 * local_14) + 0x4ef88) != local_18) goto jmp_d19e;
	if (local_14 >= (g_numfavoriteservers - 0x1)) goto jmp_d182;
	local_24 = (0x98 * local_14);
	memcpy((local_24 + 0x4ef88), (local_24 + 0x4f020), (0x98 * ((g_numfavoriteservers - local_14) - 0x1)));
jmp_d182:
	local_20 = 0x4ef84;
	*(int *)local_20 = (*(int *)local_20 - 0x1);
	memset(((0x98 * *(int *)local_20) + 0x4ef88), 0x0, 0x98);
	goto jmp_d1a9;
jmp_d19e:
	local_14 = (local_14 + 0x1);
jmp_d1a4:
	if (local_14 < g_numfavoriteservers) goto jmp_d155;
jmp_d1a9:
	bss_7430c = bss_7472c;
	bss_74318 = bss_7472c;
jmp_d1b1:
}

/*
=================
ArenaServers_Insert

Address: 0xd1b3
Stack Size: 0x6c
Calls: atoi, Q_strupr, Q_CleanStr, Info_ValueForKey, Q_strncpyz, ArenaServers_MaxPing
Called by: ArenaServers_DoRefresh
=================
*/
void ArenaServers_Insert(int arg_0, int arg_1, int arg_2) {
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

	arg_1 = arg_1;
	local_20 = ArenaServers_MaxPing();
	if (arg_2 < local_20) goto jmp_d1c7;
	if (g_servertype == 0x7) goto jmp_d1c7;
	goto jmp_d354;
jmp_d1c7:
	if (*(int *)bss_74310 < bss_74324) goto jmp_d1db;
	local_14 = (((0x98 * *(int *)bss_74310) + bss_74314) + 0xffffff68);
	goto jmp_d1f1;
jmp_d1db:
	local_14 = ((0x98 * *(int *)bss_74310) + bss_74314);
	local_24 = bss_74310;
	*(int *)local_24 = (*(int *)local_24 + 0x1);
jmp_d1f1:
	Q_strncpyz(local_14, arg_0, 0x40);
	local_24 = Info_ValueForKey(arg_1, 0x6f2f);
	Q_strncpyz((local_14 + 0x40), local_24, 0x16);
	Q_CleanStr((local_14 + 0x40));
	Q_strupr((local_14 + 0x40));
	local_28 = Info_ValueForKey(arg_1, 0x6f27);
	Q_strncpyz((local_14 + 0x59), local_28, 0x10);
	Q_CleanStr((local_14 + 0x59));
	Q_strupr((local_14 + 0x59));
	local_2c = Info_ValueForKey(arg_1, 0x6f1f);
	local_30 = atoi(local_2c);
	*(int *)(local_14 + 0x6c) = local_30;
	local_34 = Info_ValueForKey(arg_1, 0x6f11);
	local_38 = atoi(local_34);
	*(int *)(local_14 + 0x70) = local_38;
	*(int *)(local_14 + 0x74) = arg_2;
	local_3c = Info_ValueForKey(arg_1, 0x6f09);
	local_40 = atoi(local_3c);
	*(int *)(local_14 + 0x8c) = local_40;
	local_44 = Info_ValueForKey(arg_1, 0x6f01);
	local_48 = atoi(local_44);
	*(int *)(local_14 + 0x90) = local_48;
	local_4c = Info_ValueForKey(arg_1, 0x6ef6);
	local_50 = atoi(local_4c);
	*(int *)(local_14 + 0x94) = local_50;
	local_54 = Info_ValueForKey(arg_1, 0x6eee);
	local_58 = atoi(local_54);
	*(int *)(local_14 + 0x88) = local_58;
	local_5c = *(int *)(local_14 + 0x88);
	if (local_5c < 0x0) goto jmp_d2e8;
	if (local_5c < 0x3) goto jmp_d2ee;
jmp_d2e8:
	*(int *)(local_14 + 0x88) = 0x0;
jmp_d2ee:
	local_60 = Info_ValueForKey(arg_1, 0x6ee9);
	local_1c = local_60;
	local_64 = Info_ValueForKey(arg_1, 0x6ee0);
	local_68 = atoi(local_64);
	local_18 = local_68;
	if (local_18 >= 0x0) goto jmp_d318;
	local_18 = 0x0;
	goto jmp_d31f;
jmp_d318:
	if (local_18 <= 0xb) goto jmp_d31f;
	local_18 = 0xc;
jmp_d31f:
	if ((char)*(char *)local_1c == 0x0) goto jmp_d33b;
	*(int *)(local_14 + 0x78) = local_18;
	Q_strncpyz((local_14 + 0x7c), local_1c, 0xc);
	goto jmp_d354;
jmp_d33b:
	*(int *)(local_14 + 0x78) = local_18;
	Q_strncpyz((local_14 + 0x7c), *(int *)((local_18 << 0x2) + 0x23dc), 0xc);
jmp_d354:
}

/*
=================
ArenaServers_LoadFavorites

Address: 0xd356
Stack Size: 0x9f4
Calls: trap_Cvar_VariableStringBuffer, memset, memcpy, ArenaServers_MaxPing, Q_strncpyz, Q_stricmp, strcpy, va
Called by: ArenaServers_MenuInit
=================
*/
void ArenaServers_LoadFavorites(void) {
	int		local_14;
	char	local_18[64];
	int		local_58;
	char	local_5c[2432];
	int		local_9dc;
	int		local_9e0;
	int		local_9e4;
	int		local_9e8;
	int		local_9ec;
	int		local_9f0;

	local_9e0 = 0x0;
	memcpy(local_5c, 0x4ef88, 0x980);
	local_58 = g_numfavoriteservers;
	memset(0x4ef88, 0x0, 0x980);
	local_9e4 = 0x0;
	g_numfavoriteservers = local_9e4;
	local_9dc = local_9e4;
jmp_d37b:
	local_9e8 = va(0x6ed7, (local_9dc + 0x1));
	trap_Cvar_VariableStringBuffer(local_9e8, local_18, 0x40);
	if ((char)*(char *)local_18 != 0x0) goto jmp_d397;
	goto jmp_d40e;
jmp_d397:
	strcpy(((g_numfavoriteservers << 0x6) + 0x7432c), local_18);
	local_14 = 0x0;
	goto jmp_d3c1;
jmp_d3a8:
	local_9ec = Q_stricmp(((0x98 * local_14) + local_5c), local_18);
	if (local_9ec != 0x0) goto jmp_d3bb;
	goto jmp_d3c6;
jmp_d3bb:
	local_14 = (local_14 + 0x1);
jmp_d3c1:
	if (local_14 < local_58) goto jmp_d3a8;
jmp_d3c6:
	if (local_14 >= local_58) goto jmp_d3e8;
	local_9f0 = 0x98;
	memcpy(((local_9f0 * g_numfavoriteservers) + 0x4ef88), ((local_9f0 * local_14) + local_5c), 0x98);
	local_9e0 = 0x1;
	goto jmp_d403;
jmp_d3e8:
	Q_strncpyz(((0x98 * g_numfavoriteservers) + 0x4ef88), local_18, 0x40);
	local_9f0 = ArenaServers_MaxPing();
	*(int *)((0x98 * g_numfavoriteservers) + 0x4effc) = local_9f0;
jmp_d403:
	local_9f0 = 0x4ef84;
	*(int *)local_9f0 = (*(int *)local_9f0 + 0x1);
jmp_d40e:
	local_9dc = (local_9dc + 0x1);
	if (local_9dc < 0x10) goto jmp_d37b;
	bss_7472c = g_numfavoriteservers;
	if (local_9e0 != 0x0) goto jmp_d423;
	g_numfavoriteservers = 0x0;
jmp_d423:
}

/*
=================
ArenaServers_StopRefresh

Address: 0xd425
Stack Size: 0x18
Calls: ArenaServers_UpdateMenu, qsort
Called by: ArenaServers_MenuKey, ArenaServers_Event, ArenaServers_SetType, ArenaServers_DoRefresh
=================
*/
void ArenaServers_StopRefresh(void) {

	if (bss_7431c != 0x0) goto jmp_d42c;
	goto jmp_d44e;
jmp_d42c:
	bss_7431c = 0x0;
	if (bss_7430c < 0x0) goto jmp_d43d;
	bss_74318 = *(int *)bss_74310;
	bss_7430c = *(int *)bss_74310;
jmp_d43d:
	qsort(bss_74314, *(int *)bss_74310, 0x98, 0xcc89);
	ArenaServers_UpdateMenu();
jmp_d44e:
}

/*
=================
ArenaServers_DoRefresh

Address: 0xd450
Stack Size: 0x478
Calls: trap_LAN_GetServerAddressString, trap_LAN_GetPingQueueCount, trap_LAN_ClearPing, trap_LAN_GetPingInfo, trap_LAN_GetPing, trap_Cmd_ExecuteText, trap_LAN_GetServerCount, ArenaServers_UpdateMenu, ArenaServers_StopRefresh, va, strcpy, ArenaServers_Insert, Info_SetValueForKey, Q_stricmp, ArenaServers_MaxPing, ArenaServers_SourceForLAN
Called by: ArenaServers_MenuDraw
=================
*/
void ArenaServers_DoRefresh(void) {
	int		local_18;
	char	local_1c[64];
	int		local_5c;
	int		local_60;
	char	local_64[1024];
	int		local_464;
	int		local_468;
	int		local_46c;
	int		local_470;
	int		local_474;

	if (bss_db58 >= bss_74328) goto jmp_d47b;
	if (g_servertype == 0x7) goto jmp_d498;
	if (g_servertype != 0x0) goto jmp_d46a;
	local_468 = trap_LAN_GetServerCount(0x0);
	if (local_468 != 0x0) goto jmp_d46a;
	goto jmp_d607;
jmp_d46a:
	local_468 = ArenaServers_SourceForLAN();
	local_46c = trap_LAN_GetServerCount(local_468);
	if (local_46c >= 0x0) goto jmp_d498;
	goto jmp_d607;
jmp_d47b:
	if (g_servertype != 0x0) goto jmp_d498;
	local_468 = trap_LAN_GetServerCount(0x0);
	if (local_468 != 0x0) goto jmp_d498;
	trap_Cmd_ExecuteText(0x2, 0x6ec9);
	bss_74328 = (bss_db58 + 0x1388);
	goto jmp_d607;
jmp_d498:
	if (bss_db58 >= bss_74320) goto jmp_d49f;
	goto jmp_d607;
jmp_d49f:
	bss_74320 = (bss_db58 + 0xa);
	local_468 = ArenaServers_MaxPing();
	local_464 = local_468;
	local_5c = 0x0;
jmp_d4b0:
	trap_LAN_GetPing(local_5c, local_1c, 0x40, &local_60);
	if ((char)*(char *)local_1c != 0x0) goto jmp_d4c3;
	goto jmp_d544;
jmp_d4c3:
	local_18 = 0x0;
jmp_d4c6:
	local_46c = Q_stricmp(local_1c, ((0x44 * local_18) + 0x7148c));
	if (local_46c != 0x0) goto jmp_d4d9;
	goto jmp_d4e3;
jmp_d4d9:
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x20) goto jmp_d4c6;
jmp_d4e3:
	if (local_18 >= 0x20) goto jmp_d53e;
	if (local_60 != 0x0) goto jmp_d4fe;
	local_60 = (bss_db58 - *(int *)((0x44 * local_18) + 0x714cc));
	if (local_60 >= local_464) goto jmp_d4fe;
	goto jmp_d544;
jmp_d4fe:
	if (local_60 <= local_464) goto jmp_d522;
	*(char *)local_64 = 0x0;
	local_60 = local_464;
	if (g_servertype != 0x7) goto jmp_d52c;
	Info_SetValueForKey(local_64, 0x6f2f, local_1c);
	Info_SetValueForKey(local_64, 0x6ee9, 0x707e);
	goto jmp_d52c;
jmp_d522:
	trap_LAN_GetPingInfo(local_5c, local_64, 0x400);
jmp_d52c:
	ArenaServers_Insert(local_1c, local_64, local_60);
	*(char *)((0x44 * local_18) + 0x7148c) = 0x0;
jmp_d53e:
	trap_LAN_ClearPing(local_5c);
jmp_d544:
	local_5c = (local_5c + 0x1);
	if (local_5c < 0x20) goto jmp_d4b0;
	if (g_servertype != 0x7) goto jmp_d558;
	bss_7430c = bss_7472c;
	goto jmp_d567;
jmp_d558:
	local_46c = ArenaServers_SourceForLAN();
	local_470 = trap_LAN_GetServerCount(local_46c);
	bss_7430c = local_470;
jmp_d567:
	local_5c = 0x0;
	goto jmp_d5ee;
jmp_d56c:
	local_46c = trap_LAN_GetPingQueueCount();
	if (local_46c < 0x20) goto jmp_d576;
	goto jmp_d5f7;
jmp_d576:
	local_18 = 0x0;
jmp_d579:
	if ((char)*(char *)((0x44 * local_18) + 0x7148c) != 0x0) goto jmp_d585;
	goto jmp_d58f;
jmp_d585:
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x20) goto jmp_d579;
jmp_d58f:
	if (local_18 < 0x20) goto jmp_d595;
	goto jmp_d5f7;
jmp_d595:
	if (g_servertype != 0x7) goto jmp_d5a7;
	strcpy(local_1c, ((bss_74318 << 0x6) + 0x7432c));
	goto jmp_d5b8;
jmp_d5a7:
	local_470 = ArenaServers_SourceForLAN();
	trap_LAN_GetServerAddressString(local_470, bss_74318, local_1c, 0x40);
jmp_d5b8:
	strcpy(((0x44 * local_18) + 0x7148c), local_1c);
	*(int *)((0x44 * local_18) + 0x714cc) = bss_db58;
	local_470 = va(0x6ec0, local_1c);
	trap_Cmd_ExecuteText(0x0, local_470);
	local_474 = 0x74318;
	*(int *)local_474 = (*(int *)local_474 + 0x1);
	local_5c = (local_5c + 0x1);
jmp_d5ee:
	if (local_5c >= 0x20) goto jmp_d5f7;
	if (bss_74318 < bss_7430c) goto jmp_d56c;
jmp_d5f7:
	local_46c = trap_LAN_GetPingQueueCount();
	if (local_46c != 0x0) goto jmp_d604;
	ArenaServers_StopRefresh();
	goto jmp_d607;
jmp_d604:
	ArenaServers_UpdateMenu();
jmp_d607:
}

/*
=================
ArenaServers_StartRefresh

Address: 0xd609
Stack Size: 0x70
Calls: trap_Cvar_VariableValue, trap_Cvar_VariableStringBuffer, trap_Cmd_ExecuteText, trap_LAN_ClearPing, memset, va, strlen, strcat, strcpy, ArenaServers_UpdateMenu
Called by: ArenaServers_Event, ArenaServers_SetType
=================
*/
void ArenaServers_StartRefresh(void) {
	int		local_18;
	char	local_1c[32];
	char	local_3c[32];
	int		local_5c;
	int		local_60;
	int		local_64;
	int		local_68;
	int		local_6c;

	memset(bss_74314, 0x0, (0x48 * bss_74324));
	local_18 = 0x0;
jmp_d61a:
	*(char *)((0x44 * local_18) + 0x7148c) = 0x0;
	trap_LAN_ClearPing(local_18);
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x20) goto jmp_d61a;
	bss_7431c = 0x1;
	bss_74318 = 0x0;
	bss_74320 = 0x0;
	*(int *)bss_74310 = 0x0;
	bss_7430c = 0x0;
	bss_74328 = (bss_db58 + 0x1388);
	ArenaServers_UpdateMenu();
	if (g_servertype != 0x0) goto jmp_d658;
	trap_Cmd_ExecuteText(0x2, 0x6ec9);
	goto jmp_d703;
jmp_d658:
	local_5c = g_servertype;
	if (local_5c < 0x1) goto jmp_d703;
	if (local_5c > 0x6) goto jmp_d703;
	local_60 = bss_70f2c;
	if (local_60 < 0x0) goto jmp_d678;
	if (local_60 > 0x4) goto jmp_d678;
	goto *(int *)((local_60 << 0x2) + 0x248c);
jmp_d678:
	*(char *)local_3c = 0x0;
	goto jmp_d69f;
	strcpy(local_3c, 0x6ebb);
	goto jmp_d69f;
	strcpy(local_3c, 0x6eb5);
	goto jmp_d69f;
	strcpy(local_3c, 0x6eac);
	goto jmp_d69f;
	strcpy(local_3c, 0x6ea7);
jmp_d69f:
	if (g_emptyservers == 0x0) goto jmp_d6aa;
	strcat(local_3c, 0x6ea0);
jmp_d6aa:
	if (g_fullservers == 0x0) goto jmp_d6b5;
	strcat(local_3c, 0x6e9a);
jmp_d6b5:
	*(char *)local_1c = 0x0;
	trap_Cvar_VariableStringBuffer(0x6e8b, local_1c, 0x20);
	local_64 = strlen(local_1c);
	if (local_64 == 0x0) goto jmp_d6e4;
	local_68 = va(0x6e74, (g_servertype - 0x1), local_1c, local_3c);
	trap_Cmd_ExecuteText(0x2, local_68);
	goto jmp_d703;
jmp_d6e4:
	local_68 = trap_Cvar_VariableValue(0x6e54);
	local_6c = va(0x6e5d, (g_servertype - 0x1), (int)local_68, local_3c);
	trap_Cmd_ExecuteText(0x2, local_6c);
jmp_d703:
}

/*
=================
ArenaServers_SaveChanges

Address: 0xd705
Stack Size: 0x1c
Calls: trap_Cvar_Set, va
Called by: ArenaServers_MenuKey, ArenaServers_Event
=================
*/
void ArenaServers_SaveChanges(void) {
	int		local_10;
	int		local_14;
	int		local_18;

	local_10 = 0x0;
	goto jmp_d729;
jmp_d70b:
	local_14 = va(0x6ed7, (local_10 + 0x1));
	trap_Cvar_Set(local_14, ((local_10 << 0x6) + 0x7432c));
	local_10 = (local_10 + 0x1);
jmp_d729:
	if (local_10 < bss_7472c) goto jmp_d70b;
	goto jmp_d749;
jmp_d730:
	local_18 = va(0x6ed7, (local_10 + 0x1));
	trap_Cvar_Set(local_18, 0x6fc2);
	local_10 = (local_10 + 0x1);
jmp_d749:
	if (local_10 < 0x10) goto jmp_d730;
}

/*
=================
ArenaServers_Sort

Address: 0xd74f
Stack Size: 0x18
Calls: qsort
Called by: ArenaServers_Event
=================
*/
void ArenaServers_Sort(int arg_0) {

	if (g_sortkey != arg_0) goto jmp_d757;
	goto jmp_d769;
jmp_d757:
	g_sortkey = arg_0;
	qsort(bss_74314, *(int *)bss_74310, 0x98, 0xcc89);
jmp_d769:
}

/*
=================
ArenaServers_SetType

Address: 0xd76b
Stack Size: 0x3c
Calls: trap_Cvar_VariableStringBuffer, strcpy, ArenaServers_UpdateMenu, ArenaServers_StartRefresh, Com_sprintf, ArenaServers_StopRefresh
Called by: ArenaServers_MenuInit, ArenaServers_Event
=================
*/
int ArenaServers_SetType(int arg_0) {
	short	local_1c;
	short	local_1e;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[8];
	char	local_34[8];

	arg_0 = arg_0;
	ArenaServers_StopRefresh();
	if (arg_0 < 0x2) goto jmp_d7c4;
	if (arg_0 > 0x6) goto jmp_d7c4;
	*(int *)local_34 = g_servertype;
	if (arg_0 == *(int *)local_34) goto jmp_d78d;
	if (arg_0 != ((*(int *)local_34 + 0x1) %% 0x8)) goto jmp_d792;
jmp_d78d:
	*(int *)local_2c = 0x1;
	goto jmp_d7bc;
jmp_d792:
	*(int *)local_2c = 0xffffffff;
	goto jmp_d7bc;
jmp_d797:
	Com_sprintf(&local_1e, 0xb, 0x6e3d, (arg_0 - 0x1));
	trap_Cvar_VariableStringBuffer(&local_1e, &local_1c, 0x2);
	if ((char)*(char *)&local_1c == 0x0) goto jmp_d7b5;
	goto jmp_d7c4;
jmp_d7b5:
	arg_0 = (arg_0 + *(int *)local_2c);
jmp_d7bc:
	if (arg_0 < 0x2) goto jmp_d7c4;
	if (arg_0 <= 0x6) goto jmp_d797;
jmp_d7c4:
	g_servertype = arg_0;
	if (arg_0 < 0x0) goto jmp_d7d8;
	if (arg_0 > 0x7) goto jmp_d7d8;
	goto *(int *)((arg_0 << 0x2) + 0x24a0);
jmp_d7d8:
	local_20 = 0x712a8;
	*(int *)local_20 = (*(int *)local_20 | 0x5000);
	bss_74314 = 0x4f90c;
	bss_74310 = 0x4f908;
	bss_74324 = 0x80;
	goto jmp_d822;
	local_24 = 0x712a8;
	*(int *)local_24 = (*(int *)local_24 | 0x5000);
	bss_74314 = ((0x4c00 * arg_0) + 0x4f924);
	bss_74310 = ((arg_0 << 0x2) + 0x54508);
	bss_74324 = 0x80;
	goto jmp_d822;
	local_28 = 0x712a8;
	*(int *)local_28 = (*(int *)local_28 & 0xffffafff);
	bss_74314 = 0x4ef88;
	bss_74310 = 0x4ef84;
	bss_74324 = 0x10;
jmp_d822:
	if (*(int *)bss_74310 != 0x0) goto jmp_d82c;
	ArenaServers_StartRefresh();
	goto jmp_d841;
jmp_d82c:
	bss_74318 = *(int *)bss_74310;
	bss_7430c = *(int *)bss_74310;
	ArenaServers_UpdateMenu();
	strcpy(bss_71228, 0x6e27);
jmp_d841:
	return arg_0;
}

/*
=================
Punkbuster_ConfirmEnable

Address: 0xd846
Stack Size: 0x1c
Calls: trap_Cvar_VariableValue, trap_SetPbClStatus, Com_Clamp
=================
*/
void Punkbuster_ConfirmEnable(int arg_0) {
	int		local_14;
	int		local_18;

	if (arg_0 == 0x0) goto jmp_d850;
	trap_SetPbClStatus(0x1);
jmp_d850:
	local_14 = trap_Cvar_VariableValue(0x6e19);
	local_18 = Com_Clamp(0x0, 0x3f800000, local_14);
	bss_74770 = (int)local_18;
}

/*
=================
Punkbuster_ConfirmDisable

Address: 0xd868
Stack Size: 0x1c
Calls: trap_Cvar_VariableValue, trap_SetPbClStatus, Com_Clamp, UI_Message
=================
*/
void Punkbuster_ConfirmDisable(int arg_0) {
	int		local_14;
	int		local_18;

	if (arg_0 == 0x0) goto jmp_d877;
	trap_SetPbClStatus(0x0);
	UI_Message(0x2430);
jmp_d877:
	local_14 = trap_Cvar_VariableValue(0x6e19);
	local_18 = Com_Clamp(0x0, 0x3f800000, local_14);
	bss_74770 = (int)local_18;
}

/*
=================
ArenaServers_Event

Address: 0xd88f
Stack Size: 0x24
Calls: trap_Cvar_SetValue, UI_ConfirmMenu_Style, ArenaServers_Remove, ArenaServers_Go, UI_StartServerMenu, UI_SpecifyServerMenu, ArenaServers_StartRefresh, UI_PopMenu, ArenaServers_SaveChanges, ArenaServers_StopRefresh, ScrollList_Key, ArenaServers_UpdatePicture, ArenaServers_Sort, ArenaServers_UpdateMenu, ArenaServers_SetType
=================
*/
void ArenaServers_Event(int arg_0, int arg_1) {
	char	local_18[8];
	int		local_20;

	*(int *)local_18 = *(int *)(arg_0 + 0x8);
	if (arg_1 == 0x3) goto jmp_d8a1;
	if (*(int *)local_18 == 0xf) goto jmp_d8a1;
	goto jmp_d971;
jmp_d8a1:
	if (*(int *)local_18 < 0xa) goto jmp_d971;
	if (*(int *)local_18 > 0x18) goto jmp_d971;
	goto *(int *)((*(int *)local_18 << 0x2) + 0x2498);
	local_20 = ArenaServers_SetType(bss_70ecc);
	bss_70ecc = local_20;
	trap_Cvar_SetValue(0x6e08, (float)bss_70ecc);
	goto jmp_d971;
	trap_Cvar_SetValue(0x6df5, (float)bss_70f2c);
	g_gametype = bss_70f2c;
	ArenaServers_UpdateMenu();
	goto jmp_d971;
	trap_Cvar_SetValue(0x6de3, (float)bss_70f8c);
	ArenaServers_Sort(bss_70f8c);
	ArenaServers_UpdateMenu();
	goto jmp_d971;
	trap_Cvar_SetValue(0x6dd0, (float)bss_70fe8);
	g_fullservers = bss_70fe8;
	ArenaServers_UpdateMenu();
	goto jmp_d971;
	trap_Cvar_SetValue(0x6dbc, (float)bss_71028);
	g_emptyservers = bss_71028;
	ArenaServers_UpdateMenu();
	goto jmp_d971;
	if (arg_1 != 0x1) goto jmp_d971;
	ArenaServers_UpdatePicture();
	goto jmp_d971;
	ScrollList_Key(0x7102c, 0x84);
	goto jmp_d971;
	ScrollList_Key(0x7102c, 0x85);
	goto jmp_d971;
	ArenaServers_StopRefresh();
	ArenaServers_SaveChanges();
	UI_PopMenu();
	goto jmp_d971;
	ArenaServers_StartRefresh();
	goto jmp_d971;
	UI_SpecifyServerMenu();
	goto jmp_d971;
	UI_StartServerMenu(0x1);
	goto jmp_d971;
	ArenaServers_Go();
	goto jmp_d971;
	ArenaServers_Remove();
	ArenaServers_UpdateMenu();
	goto jmp_d971;
	if (bss_74770 == 0x0) goto jmp_d966;
	UI_ConfirmMenu_Style(0x6da9, 0x2011, 0x0, 0xd846);
	goto jmp_d971;
jmp_d966:
	UI_ConfirmMenu_Style(0x6d95, 0x2011, 0x0, 0xd868);
jmp_d971:
}

/*
=================
ArenaServers_MenuDraw

Address: 0xd973
Stack Size: 0xc
Calls: Menu_Draw, ArenaServers_DoRefresh
=================
*/
void ArenaServers_MenuDraw(void) {

	if (bss_7431c == 0x0) goto jmp_d97b;
	ArenaServers_DoRefresh();
jmp_d97b:
	Menu_Draw(0x70d24);
}

/*
=================
ArenaServers_MenuKey

Address: 0xd982
Stack Size: 0x20
Calls: Menu_DefaultKey, ArenaServers_SaveChanges, ArenaServers_UpdateMenu, ArenaServers_Remove, Menu_ItemAtCursor, ArenaServers_StopRefresh
=================
*/
int ArenaServers_MenuKey(int arg_0) {
	char	local_14[8];
	int		local_1c;

	arg_0 = arg_0;
	if (arg_0 != 0x20) goto jmp_d997;
	if (bss_7431c == 0x0) goto jmp_d997;
	ArenaServers_StopRefresh();
	return menu_move_sound;
jmp_d997:
	if (arg_0 == 0x8c) goto jmp_d99f;
	if (arg_0 != 0xab) goto jmp_d9b8;
jmp_d99f:
	if (g_servertype != 0x7) goto jmp_d9b8;
	*(int *)local_14 = Menu_ItemAtCursor(0x70d24);
	if (0x7102c != *(int *)local_14) goto jmp_d9b8;
	ArenaServers_Remove();
	ArenaServers_UpdateMenu();
	return menu_move_sound;
jmp_d9b8:
	if (arg_0 == 0xb3) goto jmp_d9c0;
	if (arg_0 != 0x1b) goto jmp_d9c6;
jmp_d9c0:
	ArenaServers_StopRefresh();
	ArenaServers_SaveChanges();
jmp_d9c6:
	local_1c = Menu_DefaultKey(0x70d24, arg_0);
	return local_1c;
}

/*
=================
ArenaServers_MenuInit

Address: 0xd9d4
Stack Size: 0x48
Calls: trap_Cvar_Register, trap_Cvar_VariableValue, memset, ArenaServers_SetType, Com_Clamp, ArenaServers_LoadFavorites, Menu_AddItem, ArenaServers_Cache
Called by: UI_ArenaServersMenu
=================
*/
void ArenaServers_MenuInit(void) {
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

	memset(0x70d24, 0x0, 0x3ac4);
	ArenaServers_Cache();
	bss_70e3c = 0x1;
	bss_70e38 = 0x1;
	bss_70e30 = 0xd973;
	bss_70e34 = 0xd982;
	bss_70e44 = 0xa;
	bss_70e70 = 0x8;
	bss_70e50 = 0x140;
	bss_70e54 = 0x10;
	bss_70e80 = 0x6d87;
	bss_70e84 = 0x1;
	bss_70e88 = 0x2160;
	local_1c = 0x50;
	bss_70e8c = 0x3;
	bss_70e90 = 0x6d7e;
	bss_70eb8 = 0x102;
	bss_70ebc = 0xd88f;
	bss_70e94 = 0xa;
	bss_70e98 = 0x140;
	bss_70e9c = local_1c;
	bss_70ed8 = 0x2388;
	local_1c = (local_1c + 0x10);
	bss_70eec = 0x3;
	bss_70ef0 = 0x6d73;
	bss_70f18 = 0x102;
	bss_70f1c = 0xd88f;
	bss_70ef4 = 0xb;
	bss_70ef8 = 0x140;
	bss_70efc = local_1c;
	bss_70f38 = 0x23ac;
	local_1c = (local_1c + 0x10);
	bss_70f4c = 0x3;
	bss_70f50 = 0x6d6a;
	bss_70f78 = 0x102;
	bss_70f7c = 0xd88f;
	bss_70f54 = 0xc;
	bss_70f58 = 0x140;
	bss_70f5c = local_1c;
	bss_70f98 = 0x23c4;
	local_1c = (local_1c + 0x10);
	bss_70fac = 0x5;
	bss_70fb0 = 0x6d5f;
	bss_70fd8 = 0x102;
	bss_70fdc = 0xd88f;
	bss_70fb4 = 0xd;
	bss_70fb8 = 0x140;
	bss_70fbc = local_1c;
	local_1c = (local_1c + 0x10);
	bss_70fec = 0x5;
	bss_70ff0 = 0x6d53;
	bss_71018 = 0x102;
	bss_7101c = 0xd88f;
	bss_70ff4 = 0xe;
	bss_70ff8 = 0x140;
	bss_70ffc = local_1c;
	local_1c = (local_1c + 0x30);
	bss_7102c = 0x8;
	bss_71058 = 0x80;
	bss_71034 = 0xf;
	bss_7105c = 0xd88f;
	bss_71038 = 0x48;
	bss_7103c = local_1c;
	bss_7107c = 0x44;
	bss_71080 = 0xb;
	bss_71078 = 0x7410c;
	local_18 = 0x0;
jmp_dab9:
	*(int *)((local_18 << 0x2) + 0x7410c) = ((0x48 * local_18) + 0x71d0c);
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x80) goto jmp_dab9;
	bss_7108c = 0x6;
	bss_710b8 = 0x4004;
	bss_71098 = 0x48;
	bss_7109c = 0x50;
	bss_710d8 = 0x80;
	bss_710dc = 0x60;
	bss_710cc = 0x6d3f;
	bss_710e4 = 0x6;
	bss_710e8 = 0x6d28;
	bss_71110 = 0x4004;
	bss_71114 = 0xd88f;
	bss_710f0 = 0x230;
	bss_710f4 = 0xc0;
	bss_71130 = 0x40;
	bss_71134 = 0x80;
	bss_7113c = 0x6;
	bss_71168 = 0x904;
	bss_7116c = 0xd88f;
	bss_71144 = 0x10;
	bss_71148 = 0x230;
	bss_7114c = 0xc0;
	bss_71188 = 0x40;
	bss_7118c = 0x40;
	bss_71178 = 0x6d0f;
	bss_71194 = 0x6;
	bss_711c0 = 0x904;
	bss_711c4 = 0xd88f;
	bss_7119c = 0x11;
	bss_711a0 = 0x230;
	bss_711a4 = 0x100;
	bss_711e0 = 0x40;
	bss_711e4 = 0x40;
	bss_711d0 = 0x6cf6;
	local_1c = 0x178;
	bss_711ec = 0x7;
	bss_711f8 = 0x140;
	bss_711fc = local_1c;
	bss_71228 = 0x4ef30;
	bss_7122c = 0x11;
	bss_71230 = 0x2130;
	local_1c = (local_1c + 0x10);
	bss_71234 = 0x7;
	bss_71240 = 0x140;
	bss_71244 = local_1c;
	bss_71270 = 0x6fc2;
	bss_71274 = 0x11;
	bss_71278 = 0x21f0;
	bss_7127c = 0x6;
	bss_71280 = 0x6ce4;
	bss_712a8 = 0x104;
	bss_712ac = 0xd88f;
	bss_71284 = 0x17;
	bss_71288 = 0x1c2;
	bss_7128c = 0x56;
	bss_712c8 = 0x60;
	bss_712cc = 0x30;
	bss_712b8 = 0x6cd2;
	bss_712d4 = 0x6;
	bss_712d8 = 0x6cc2;
	bss_71300 = 0x104;
	bss_71304 = 0xd88f;
	bss_712dc = 0x12;
	bss_712e0 = 0x0;
	bss_712e4 = 0x1a0;
	bss_71320 = 0x80;
	bss_71324 = 0x40;
	bss_71310 = 0x6cb2;
	bss_71384 = 0x6;
	bss_71388 = 0x6c9f;
	bss_713b0 = 0x104;
	bss_713b4 = 0xd88f;
	bss_7138c = 0x14;
	bss_71390 = 0x80;
	bss_71394 = 0x1a0;
	bss_713d0 = 0x80;
	bss_713d4 = 0x40;
	bss_713c0 = 0x6c8c;
	bss_7132c = 0x6;
	bss_71330 = 0x6c79;
	bss_71358 = 0x104;
	bss_7135c = 0xd88f;
	bss_71334 = 0x13;
	bss_71338 = 0x100;
	bss_7133c = 0x1a0;
	bss_71378 = 0x80;
	bss_7137c = 0x40;
	bss_71368 = 0x6c66;
	bss_713dc = 0x6;
	bss_713e0 = 0x6c54;
	bss_71408 = 0x104;
	bss_7140c = 0xd88f;
	bss_713e4 = 0x15;
	bss_713e8 = 0x180;
	bss_713ec = 0x1a0;
	bss_71428 = 0x80;
	bss_7142c = 0x40;
	bss_71418 = 0x6c42;
	bss_71434 = 0x6;
	bss_71438 = 0x6c31;
	bss_71460 = 0x110;
	bss_71464 = 0xd88f;
	bss_7143c = 0x16;
	bss_71440 = 0x280;
	bss_71444 = 0x1a0;
	bss_71480 = 0x80;
	bss_71484 = 0x40;
	bss_71470 = 0x6c20;
	bss_74730 = 0x3;
	bss_74734 = 0x6c14;
	bss_7475c = 0x102;
	bss_74760 = 0xd88f;
	bss_74738 = 0x18;
	bss_7473c = 0x200;
	bss_74740 = 0x90;
	bss_7477c = 0x2424;
	bss_74790 = 0x6;
	bss_74794 = 0x6c04;
	bss_747bc = 0x4004;
	bss_7479c = 0x20e;
	bss_747a0 = 0xb0;
	bss_747dc = 0x20;
	bss_747e0 = 0x10;
	bss_747d0 = 0x6d3f;
	Menu_AddItem(0x70d24, 0x70e44);
	Menu_AddItem(0x70d24, 0x70e8c);
	Menu_AddItem(0x70d24, 0x70eec);
	Menu_AddItem(0x70d24, 0x70f4c);
	Menu_AddItem(0x70d24, 0x70fac);
	Menu_AddItem(0x70d24, 0x70fec);
	Menu_AddItem(0x70d24, 0x7108c);
	Menu_AddItem(0x70d24, 0x711ec);
	Menu_AddItem(0x70d24, 0x71234);
	Menu_AddItem(0x70d24, 0x710e4);
	Menu_AddItem(0x70d24, 0x7113c);
	Menu_AddItem(0x70d24, 0x71194);
	Menu_AddItem(0x70d24, 0x7102c);
	Menu_AddItem(0x70d24, 0x7127c);
	Menu_AddItem(0x70d24, 0x712d4);
	Menu_AddItem(0x70d24, 0x71384);
	Menu_AddItem(0x70d24, 0x7132c);
	Menu_AddItem(0x70d24, 0x713dc);
	Menu_AddItem(0x70d24, 0x71434);
	Menu_AddItem(0x70d24, 0x74730);
	Menu_AddItem(0x70d24, 0x74790);
	ArenaServers_LoadFavorites();
	local_20 = Com_Clamp(0x0, 0x40e00000, (float)bss_a4e0);
	local_24 = (int)local_20;
	g_servertype = local_24;
	bss_70ecc = local_24;
	local_28 = Com_Clamp(0x0, 0x40800000, (float)bss_a3d0);
	g_gametype = (int)local_28;
	bss_70f2c = g_gametype;
	local_2c = Com_Clamp(0x0, 0x40800000, (float)bss_a2c0);
	g_sortkey = (int)local_2c;
	bss_70f8c = g_sortkey;
	local_30 = Com_Clamp(0x0, 0x3f800000, (float)bss_a1b0);
	g_fullservers = (int)local_30;
	bss_70fe8 = g_fullservers;
	local_34 = Com_Clamp(0x0, 0x3f800000, (float)bss_a0a0);
	g_emptyservers = (int)local_34;
	bss_71028 = g_emptyservers;
	local_38 = trap_Cvar_VariableValue(0x6e19);
	local_3c = Com_Clamp(0x0, 0x3f800000, local_38);
	bss_74770 = (int)local_3c;
	local_40 = 0x4ef80;
	local_44 = ArenaServers_SetType(*(int *)local_40);
	*(int *)local_40 = local_44;
	bss_70ecc = local_44;
	trap_Cvar_Register(0x0, 0x6e8b, 0x6fc2, 0x0);
}

/*
=================
ArenaServers_Cache

Address: 0xdd80
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: ArenaServers_MenuInit, UI_Cache_f
=================
*/
void ArenaServers_Cache(void) {

	trap_R_RegisterShaderNoMip(0x6cc2);
	trap_R_RegisterShaderNoMip(0x6cb2);
	trap_R_RegisterShaderNoMip(0x6c54);
	trap_R_RegisterShaderNoMip(0x6c42);
	trap_R_RegisterShaderNoMip(0x6c9f);
	trap_R_RegisterShaderNoMip(0x6c8c);
	trap_R_RegisterShaderNoMip(0x6c79);
	trap_R_RegisterShaderNoMip(0x6c66);
	trap_R_RegisterShaderNoMip(0x6c31);
	trap_R_RegisterShaderNoMip(0x6c20);
	trap_R_RegisterShaderNoMip(0x6d28);
	trap_R_RegisterShaderNoMip(0x6d0f);
	trap_R_RegisterShaderNoMip(0x6cf6);
	trap_R_RegisterShaderNoMip(0x6d3f);
	trap_R_RegisterShaderNoMip(0x6c04);
}

/*
=================
UI_ArenaServersMenu

Address: 0xddce
Stack Size: 0xc
Calls: UI_PushMenu, ArenaServers_MenuInit
Called by: Main_MenuEvent
=================
*/
void UI_ArenaServersMenu(void) {

	ArenaServers_MenuInit();
	UI_PushMenu(0x70d24);
}

/*
=================
Setup_ResetDefaults_Action

Address: 0xddd9
Stack Size: 0x10
Calls: trap_Cmd_ExecuteText
=================
*/
void Setup_ResetDefaults_Action(int arg_0) {

	if (arg_0 != 0x0) goto jmp_dde0;
	goto jmp_ddf5;
jmp_dde0:
	trap_Cmd_ExecuteText(0x2, 0x728c);
	trap_Cmd_ExecuteText(0x2, 0x727e);
	trap_Cmd_ExecuteText(0x2, 0x7271);
jmp_ddf5:
}

/*
=================
Setup_ResetDefaults_Draw

Address: 0xddf7
Stack Size: 0x1c
Calls: UI_DrawProportionalString
=================
*/
void Setup_ResetDefaults_Draw(void) {

	UI_DrawProportionalString(0x140, 0x164, 0x7252, 0x11, 0x2170);
	UI_DrawProportionalString(0x140, 0x17f, 0x7231, 0x11, 0x2170);
}

/*
=================
UI_SetupMenu_Event

Address: 0xde14
Stack Size: 0x1c
Calls: UI_PopMenu, UI_ConfirmMenu, UI_CDKeyMenu, UI_PreferencesMenu, UI_GraphicsOptionsMenu, UI_ControlsMenu, UI_PlayerSettingsMenu
=================
*/
void UI_SetupMenu_Event(int arg_0, int arg_1) {
	char	local_14[8];

	if (arg_1 == 0x3) goto jmp_de1b;
	goto jmp_de59;
jmp_de1b:
	*(int *)local_14 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_14 < 0xa) goto jmp_de59;
	if (*(int *)local_14 > 0x12) goto jmp_de59;
	goto *(int *)((*(int *)local_14 << 0x2) + 0x24d4);
	UI_PlayerSettingsMenu();
	goto jmp_de59;
	UI_ControlsMenu();
	goto jmp_de59;
	UI_GraphicsOptionsMenu();
	goto jmp_de59;
	UI_PreferencesMenu();
	goto jmp_de59;
	UI_CDKeyMenu();
	goto jmp_de59;
	UI_ConfirmMenu(0x7220, 0xddf7, 0xddd9);
	goto jmp_de59;
	UI_PopMenu();
jmp_de59:
}

/*
=================
UI_SetupMenu_Init

Address: 0xde5b
Stack Size: 0x20
Calls: trap_Cvar_VariableValue, memset, Menu_AddItem, UI_SetupMenu_Cache
Called by: UI_SetupMenu
=================
*/
void UI_SetupMenu_Init(void) {
	int		local_14;
	int		local_18;
	int		local_1c;

	UI_SetupMenu_Cache();
	memset(0x747e8, 0x0, 0x420);
	bss_748fc = 0x1;
	bss_74900 = 0x1;
	bss_74908 = 0xa;
	bss_74914 = 0x140;
	bss_74918 = 0x10;
	bss_74944 = 0x721a;
	bss_7494c = 0x2160;
	bss_74948 = 0x1;
	bss_74950 = 0x6;
	bss_74954 = 0x7208;
	bss_7497c = 0x4000;
	bss_7495c = 0x0;
	bss_74960 = 0x4e;
	bss_7499c = 0x100;
	bss_749a0 = 0x149;
	bss_749a8 = 0x6;
	bss_749ac = 0x71f6;
	bss_749d4 = 0x4000;
	bss_749b4 = 0x178;
	bss_749b8 = 0x4c;
	bss_749f4 = 0x100;
	bss_749f8 = 0x14e;
	local_14 = 0x86;
	bss_74a00 = 0x9;
	bss_74a2c = 0x108;
	bss_74a0c = 0x140;
	bss_74a10 = local_14;
	bss_74a08 = 0xa;
	bss_74a30 = 0xde14;
	bss_74a3c = 0x71ef;
	bss_74a44 = 0x21b0;
	bss_74a40 = 0x1;
	local_14 = (local_14 + 0x22);
	bss_74a48 = 0x9;
	bss_74a74 = 0x108;
	bss_74a54 = 0x140;
	bss_74a58 = local_14;
	bss_74a50 = 0xb;
	bss_74a78 = 0xde14;
	bss_74a84 = 0x71e6;
	bss_74a8c = 0x21b0;
	bss_74a88 = 0x1;
	local_14 = (local_14 + 0x22);
	bss_74a90 = 0x9;
	bss_74abc = 0x108;
	bss_74a9c = 0x140;
	bss_74aa0 = local_14;
	bss_74a98 = 0xc;
	bss_74ac0 = 0xde14;
	bss_74acc = 0x71df;
	bss_74ad4 = 0x21b0;
	bss_74ad0 = 0x1;
	local_14 = (local_14 + 0x22);
	bss_74ad8 = 0x9;
	bss_74b04 = 0x108;
	bss_74ae4 = 0x140;
	bss_74ae8 = local_14;
	bss_74ae0 = 0xd;
	bss_74b08 = 0xde14;
	bss_74b14 = 0x71d2;
	bss_74b1c = 0x21b0;
	bss_74b18 = 0x1;
	local_14 = (local_14 + 0x22);
	bss_74b20 = 0x9;
	bss_74b4c = 0x108;
	bss_74b2c = 0x140;
	bss_74b30 = local_14;
	bss_74b28 = 0xe;
	bss_74b50 = 0xde14;
	bss_74b5c = 0x71cb;
	bss_74b64 = 0x21b0;
	bss_74b60 = 0x1;
	local_18 = trap_Cvar_VariableValue(0x71c1);
	if (local_18 != 0x0) goto jmp_df7d;
	local_14 = (local_14 + 0x22);
	bss_74b68 = 0x9;
	bss_74b94 = 0x108;
	bss_74b74 = 0x140;
	bss_74b78 = local_14;
	bss_74b70 = 0x11;
	bss_74b98 = 0xde14;
	bss_74ba4 = 0x71b8;
	bss_74bac = 0x21b0;
	bss_74ba8 = 0x1;
jmp_df7d:
	bss_74bb0 = 0x6;
	bss_74bb4 = 0x71a8;
	bss_74bdc = 0x104;
	bss_74bb8 = 0x12;
	bss_74be0 = 0xde14;
	bss_74bbc = 0x0;
	bss_74bc0 = 0x1a0;
	bss_74bfc = 0x80;
	bss_74c00 = 0x40;
	bss_74bec = 0x7198;
	Menu_AddItem(0x747e8, 0x74908);
	Menu_AddItem(0x747e8, 0x74950);
	Menu_AddItem(0x747e8, 0x749a8);
	Menu_AddItem(0x747e8, 0x74a00);
	Menu_AddItem(0x747e8, 0x74a48);
	Menu_AddItem(0x747e8, 0x74a90);
	Menu_AddItem(0x747e8, 0x74ad8);
	Menu_AddItem(0x747e8, 0x74b20);
	local_1c = trap_Cvar_VariableValue(0x71c1);
	if (local_1c != 0x0) goto jmp_dfe4;
	Menu_AddItem(0x747e8, 0x74b68);
jmp_dfe4:
	Menu_AddItem(0x747e8, 0x74bb0);
}

/*
=================
UI_SetupMenu_Cache

Address: 0xdfed
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_SetupMenu_Init, UI_Cache_f
=================
*/
void UI_SetupMenu_Cache(void) {

	trap_R_RegisterShaderNoMip(0x71a8);
	trap_R_RegisterShaderNoMip(0x7198);
	trap_R_RegisterShaderNoMip(0x7208);
	trap_R_RegisterShaderNoMip(0x71f6);
}

/*
=================
UI_SetupMenu

Address: 0xe004
Stack Size: 0xc
Calls: UI_PushMenu, UI_SetupMenu_Init
Called by: Main_MenuEvent, InGame_Event
=================
*/
void UI_SetupMenu(void) {

	UI_SetupMenu_Init();
	UI_PushMenu(0x747e8);
}

/*
=================
UI_SoundOptionsMenu_Event

Address: 0xe00f
Stack Size: 0x24
Calls: trap_Cmd_ExecuteText, trap_Cvar_SetValue, UI_ForceMenuOff, UI_NetworkOptionsMenu, UI_DisplayOptionsMenu, UI_GraphicsOptionsMenu, UI_PopMenu
=================
*/
void UI_SoundOptionsMenu_Event(int arg_0, int arg_1) {
	char	local_10[8];
	int		local_18;
	int		local_1c;
	int		local_20;

	if (arg_1 == 0x3) goto jmp_e016;
	goto jmp_e0c6;
jmp_e016:
	*(int *)local_10 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_10 < 0xa) goto jmp_e0c6;
	if (*(int *)local_10 > 0x14) goto jmp_e0c6;
	goto *(int *)((*(int *)local_10 << 0x2) + 0x2514);
	UI_PopMenu();
	UI_GraphicsOptionsMenu();
	goto jmp_e0c6;
	UI_PopMenu();
	UI_DisplayOptionsMenu();
	goto jmp_e0c6;
	UI_PopMenu();
	UI_NetworkOptionsMenu();
	goto jmp_e0c6;
	UI_PopMenu();
	goto jmp_e0c6;
	trap_Cvar_SetValue(0x73a5, (bss_74f84 / 0x41200000));
	bss_75148 = bss_74f84;
	trap_Cvar_SetValue(0x7397, (bss_74fd0 / 0x41200000));
	bss_7514c = bss_74fd0;
	if (bss_75154 != bss_75078) goto jmp_e070;
	if (bss_75150 == bss_75018) goto jmp_e0c6;
jmp_e070:
	local_1c = bss_75078;
	if (local_1c == 0x0) goto jmp_e082;
	if (local_1c == 0x1) goto jmp_e087;
	if (local_1c == 0x2) goto jmp_e08c;
	goto jmp_e082;
jmp_e082:
	local_18 = 0x2b11;
	goto jmp_e08f;
jmp_e087:
	local_18 = 0x5622;
	goto jmp_e08f;
jmp_e08c:
	local_18 = 0xac44;
jmp_e08f:
	if (local_18 != 0x5622) goto jmp_e096;
	local_18 = 0x0;
jmp_e096:
	trap_Cvar_SetValue(0x738c, (float)local_18);
	bss_75154 = bss_75078;
#define next_call_arg_0 "0x7380"
	if (bss_75018 != 0x1) goto jmp_e0ae;
	local_20 = 0x1;
	goto jmp_e0b1;
jmp_e0ae:
	local_20 = 0x0;
jmp_e0b1:
#define next_call_arg_1 "(float)local_20"
	trap_Cvar_SetValue();
	bss_75150 = bss_75018;
	UI_ForceMenuOff();
	trap_Cmd_ExecuteText(0x2, 0x7373);
jmp_e0c6:
}

/*
=================
SoundOptions_UpdateMenuItems

Address: 0xe0c8
Stack Size: 0x10
Called by: SoundOptions_MenuDraw
=================
*/
void SoundOptions_UpdateMenuItems(void) {
	int		local_8;
	int		local_c;

	if (bss_75018 != 0x0) goto jmp_e0da;
	local_8 = 0x75064;
	*(int *)local_8 = (*(int *)local_8 & 0xffffdfff);
	goto jmp_e0e5;
jmp_e0da:
	local_8 = 0x75064;
	*(int *)local_8 = (*(int *)local_8 | 0x2000);
jmp_e0e5:
	local_8 = 0x7511c;
	*(int *)local_8 = (*(int *)local_8 | 0x5000);
	if (bss_75148 == bss_74f84) goto jmp_e100;
	local_c = 0x7511c;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_e100:
	if (bss_7514c == bss_74fd0) goto jmp_e110;
	local_c = 0x7511c;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_e110:
	if (bss_75150 == bss_75018) goto jmp_e120;
	local_c = 0x7511c;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_e120:
	if (bss_75154 == bss_75078) goto jmp_e130;
	local_c = 0x7511c;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_e130:
}

/*
=================
SoundOptions_MenuDraw

Address: 0xe132
Stack Size: 0xc
Calls: Menu_Draw, SoundOptions_UpdateMenuItems
=================
*/
void SoundOptions_MenuDraw(void) {

	SoundOptions_UpdateMenuItems();
	Menu_Draw(0x74c08);
}

/*
=================
UI_SoundOptionsMenu_Init

Address: 0xe13d
Stack Size: 0x34
Calls: trap_Cvar_VariableValue, memset, Menu_AddItem, UI_SoundOptionsMenu_Cache
Called by: UI_SoundOptionsMenu
=================
*/
void UI_SoundOptionsMenu_Init(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;

	memset(0x74c08, 0x0, 0x550);
	UI_SoundOptionsMenu_Cache();
	bss_74d1c = 0x1;
	bss_74d20 = 0x1;
	bss_74d14 = 0xe132;
	bss_74d28 = 0xa;
	bss_74d54 = 0x8;
	bss_74d34 = 0x140;
	bss_74d38 = 0x10;
	bss_74d64 = 0x7366;
	bss_74d6c = 0x2160;
	bss_74d68 = 0x1;
	bss_74d70 = 0x6;
	bss_74d74 = 0x7354;
	bss_74d9c = 0x4000;
	bss_74d7c = 0x0;
	bss_74d80 = 0x4e;
	bss_74dbc = 0x100;
	bss_74dc0 = 0x149;
	bss_74dc8 = 0x6;
	bss_74dcc = 0x7342;
	bss_74df4 = 0x4000;
	bss_74dd4 = 0x178;
	bss_74dd8 = 0x4c;
	bss_74e14 = 0x100;
	bss_74e18 = 0x14e;
	bss_74e20 = 0x9;
	bss_74e4c = 0x110;
	bss_74e28 = 0xa;
	bss_74e50 = 0xe00f;
	bss_74e2c = 0xd8;
	bss_74e30 = 0xba;
	bss_74e5c = 0x7339;
	bss_74e60 = 0x2;
	bss_74e64 = 0x21b0;
	bss_74e68 = 0x9;
	bss_74e94 = 0x110;
	bss_74e70 = 0xb;
	bss_74e98 = 0xe00f;
	bss_74e74 = 0xd8;
	bss_74e78 = 0xd5;
	bss_74ea4 = 0x7331;
	bss_74ea8 = 0x2;
	bss_74eac = 0x21b0;
	bss_74eb0 = 0x9;
	bss_74edc = 0x10;
	bss_74eb8 = 0xc;
	bss_74ee0 = 0xe00f;
	bss_74ebc = 0xd8;
	bss_74ec0 = 0xf0;
	bss_74eec = 0x732b;
	bss_74ef0 = 0x2;
	bss_74ef4 = 0x21b0;
	bss_74ef8 = 0x9;
	bss_74f24 = 0x110;
	bss_74f00 = 0xd;
	bss_74f28 = 0xe00f;
	bss_74f04 = 0xd8;
	bss_74f08 = 0x10b;
	bss_74f34 = 0x7323;
	bss_74f38 = 0x2;
	bss_74f3c = 0x21b0;
	local_14 = 0xcc;
	bss_74f40 = 0x1;
	bss_74f44 = 0x7313;
	bss_74f6c = 0x102;
	bss_74f70 = 0xe00f;
	bss_74f48 = 0xe;
	bss_74f4c = 0x190;
	bss_74f50 = local_14;
	bss_74f7c = 0x0;
	bss_74f80 = 0x41200000;
	local_14 = (local_14 + 0x12);
	bss_74f8c = 0x1;
	bss_74f90 = 0x7305;
	bss_74fb8 = 0x102;
	bss_74fbc = 0xe00f;
	bss_74f94 = 0xf;
	bss_74f98 = 0x190;
	bss_74f9c = local_14;
	bss_74fc8 = 0x0;
	bss_74fcc = 0x41200000;
	local_14 = (local_14 + 0x12);
	bss_74fd8 = 0x3;
	bss_74fdc = 0x72f7;
	bss_75004 = 0x102;
	bss_75008 = 0xe00f;
	bss_74fe0 = 0x11;
	bss_74fe4 = 0x190;
	bss_74fe8 = local_14;
	bss_75024 = 0x2530;
	local_14 = (local_14 + 0x12);
	bss_75038 = 0x3;
	bss_7503c = 0x72e4;
	bss_75064 = 0x102;
	bss_75068 = 0xe00f;
	bss_75040 = 0x10;
	bss_75044 = 0x190;
	bss_75048 = local_14;
	bss_75084 = 0x2520;
	bss_75098 = 0x6;
	bss_7509c = 0x72d4;
	bss_750c4 = 0x104;
	bss_750c8 = 0xe00f;
	bss_750a0 = 0x13;
	bss_750a4 = 0x0;
	bss_750a8 = 0x1a0;
	bss_750e4 = 0x80;
	bss_750e8 = 0x40;
	bss_750d4 = 0x72c4;
	bss_750f0 = 0x6;
	bss_750f4 = 0x72b2;
	bss_7511c = 0x5110;
	bss_75120 = 0xe00f;
	bss_750f8 = 0x14;
	bss_750fc = 0x280;
	bss_75100 = 0x1a0;
	bss_7513c = 0x80;
	bss_75140 = 0x40;
	bss_7512c = 0x72a0;
	Menu_AddItem(0x74c08, 0x74d28);
	Menu_AddItem(0x74c08, 0x74d70);
	Menu_AddItem(0x74c08, 0x74dc8);
	Menu_AddItem(0x74c08, 0x74e20);
	Menu_AddItem(0x74c08, 0x74e68);
	Menu_AddItem(0x74c08, 0x74eb0);
	Menu_AddItem(0x74c08, 0x74ef8);
	Menu_AddItem(0x74c08, 0x74f40);
	Menu_AddItem(0x74c08, 0x74f8c);
	Menu_AddItem(0x74c08, 0x74fd8);
	Menu_AddItem(0x74c08, 0x75038);
	Menu_AddItem(0x74c08, 0x75098);
	Menu_AddItem(0x74c08, 0x750f0);
	local_1c = trap_Cvar_VariableValue(0x73a5);
	local_20 = (0x41200000 * local_1c);
	bss_75148 = local_20;
	bss_74f84 = local_20;
	local_24 = trap_Cvar_VariableValue(0x7397);
	local_28 = (0x41200000 * local_24);
	bss_7514c = local_28;
	bss_74fd0 = local_28;
	local_2c = trap_Cvar_VariableValue(0x7380);
	if (local_2c == 0x0) goto jmp_e34b;
	bss_75150 = 0x1;
	goto jmp_e34e;
jmp_e34b:
	bss_75150 = 0x0;
jmp_e34e:
	bss_75018 = bss_75150;
	local_30 = trap_Cvar_VariableValue(0x738c);
	local_18 = (int)local_30;
	if (local_18 != 0x0) goto jmp_e364;
	local_18 = 0x5622;
jmp_e364:
	if (local_18 > 0x2b11) goto jmp_e36d;
	bss_75154 = 0x0;
	goto jmp_e379;
jmp_e36d:
	if (local_18 > 0x5622) goto jmp_e376;
	bss_75154 = 0x1;
	goto jmp_e379;
jmp_e376:
	bss_75154 = 0x2;
jmp_e379:
	bss_75078 = bss_75154;
}

/*
=================
UI_SoundOptionsMenu_Cache

Address: 0xe37f
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_SoundOptionsMenu_Init, UI_Cache_f
=================
*/
void UI_SoundOptionsMenu_Cache(void) {

	trap_R_RegisterShaderNoMip(0x7354);
	trap_R_RegisterShaderNoMip(0x7342);
	trap_R_RegisterShaderNoMip(0x72d4);
	trap_R_RegisterShaderNoMip(0x72c4);
	trap_R_RegisterShaderNoMip(0x72b2);
	trap_R_RegisterShaderNoMip(0x72a0);
}

/*
=================
UI_SoundOptionsMenu

Address: 0xe3a0
Stack Size: 0x10
Calls: Menu_SetCursorToItem, UI_PushMenu, UI_SoundOptionsMenu_Init
Called by: GraphicsOptions_Event, Options_Event, UI_NetworkOptionsMenu_Event, UI_DisplayOptionsMenu_Event
=================
*/
void UI_SoundOptionsMenu(void) {

	UI_SoundOptionsMenu_Init();
	UI_PushMenu(0x74c08);
	Menu_SetCursorToItem(0x74c08, 0x74eb0);
}

/*
=================
UI_SPArena_Start

Address: 0xe3b2
Stack Size: 0x3c
Calls: trap_Cmd_ExecuteText, trap_Cvar_SetValue, trap_Cvar_VariableValue, va, UI_GetNumSPTiers, Q_stricmp, atoi, Info_ValueForKey
Called by: UI_SPSkillMenu_FightEvent, UI_SPPostgameMenu_NextEvent
=================
*/
void UI_SPArena_Start(int arg_0) {
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

	arg_0 = arg_0;
	local_20 = trap_Cvar_VariableValue(0x7401);
	local_1c = (int)local_20;
	if (local_1c >= 0x8) goto jmp_e3cd;
	trap_Cvar_SetValue(0x7401, 0x41000000);
jmp_e3cd:
	local_24 = Info_ValueForKey(arg_0, 0x73fd);
	local_28 = atoi(local_24);
	local_14 = local_28;
	local_2c = Info_ValueForKey(arg_0, 0x73f5);
	local_10 = local_2c;
	if ((char)*(char *)local_10 == 0x0) goto jmp_e41d;
	local_30 = Q_stricmp(local_10, 0x73ec);
	if (local_30 != 0x0) goto jmp_e406;
	local_14 = 0xfffffffc;
	goto jmp_e41d;
jmp_e406:
	local_34 = Q_stricmp(local_10, 0x73e6);
	if (local_34 != 0x0) goto jmp_e41d;
	local_38 = UI_GetNumSPTiers();
	local_14 = (local_38 << 0x2);
jmp_e41d:
	trap_Cvar_SetValue(0x73d7, (float)local_14);
	local_30 = Info_ValueForKey(arg_0, 0x73d3);
	local_18 = local_30;
	local_34 = va(0x73c9, local_18);
	trap_Cmd_ExecuteText(0x2, local_34);
}

/*
=================
SpecifyServer_Event

Address: 0xe446
Stack Size: 0x128
Calls: trap_Cmd_ExecuteText, UI_PopMenu, va, Com_sprintf, strlen, strcpy
=================
*/
void SpecifyServer_Event(int arg_0, int arg_1) {
	char	local_18[256];
	char	local_118[8];
	int		local_120;
	int		local_124;

	*(int *)local_118 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_118 == 0x66) goto jmp_e495;
	if (*(int *)local_118 == 0x67) goto jmp_e458;
	goto jmp_e49e;
jmp_e458:
	if (arg_1 == 0x3) goto jmp_e45e;
	goto jmp_e49e;
jmp_e45e:
	if ((char)*(char *)bss_753b8 == 0x0) goto jmp_e49e;
	strcpy(local_18, 0x753b8);
	if ((char)*(char *)bss_75504 == 0x0) goto jmp_e483;
	local_120 = strlen(local_18);
	Com_sprintf((local_120 + local_18), 0x80, 0x743c, 0x75504);
jmp_e483:
	local_124 = va(0x7430, local_18);
	trap_Cmd_ExecuteText(0x2, local_124);
	goto jmp_e49e;
jmp_e495:
	if (arg_1 == 0x3) goto jmp_e49b;
	goto jmp_e49e;
jmp_e49b:
	UI_PopMenu();
jmp_e49e:
}

/*
=================
SpecifyServer_MenuInit

Address: 0xe4a0
Stack Size: 0x18
Calls: memset, Com_sprintf, Menu_AddItem, SpecifyServer_Cache
Called by: UI_SpecifyServerMenu
=================
*/
void SpecifyServer_MenuInit(void) {

	memset(0x75158, 0x0, 0x560);
	SpecifyServer_Cache();
	bss_7526c = 0x1;
	bss_75270 = 0x1;
	bss_75278 = 0xa;
	bss_75284 = 0x140;
	bss_75288 = 0x10;
	bss_752b4 = 0x7421;
	bss_752bc = 0x2160;
	bss_752b8 = 0x1;
	bss_752c0 = 0x6;
	bss_752c4 = 0x7494;
	bss_752ec = 0x4000;
	bss_752cc = 0x0;
	bss_752d0 = 0x4e;
	bss_7530c = 0x100;
	bss_75310 = 0x149;
	bss_75318 = 0x6;
	bss_7531c = 0x7482;
	bss_75344 = 0x4000;
	bss_75324 = 0x178;
	bss_75328 = 0x4c;
	bss_75364 = 0x100;
	bss_75368 = 0x14e;
	bss_75370 = 0x4;
	bss_75374 = 0x7418;
	bss_7539c = 0x102;
	bss_7537c = 0xce;
	bss_75380 = 0xdc;
	bss_753b4 = 0x26;
	bss_754b8 = 0x50;
	bss_754bc = 0x4;
	bss_754c0 = 0x7412;
	bss_754e8 = 0x122;
	bss_754c8 = 0xce;
	bss_754cc = 0xfa;
	bss_75500 = 0x6;
	bss_75604 = 0x5;
	bss_75608 = 0x6;
	bss_7560c = 0x7451;
	bss_75634 = 0x110;
	bss_75638 = 0xe446;
	bss_75610 = 0x67;
	bss_75614 = 0x280;
	bss_75618 = 0x1a0;
	bss_75654 = 0x80;
	bss_75658 = 0x40;
	bss_75644 = 0x7440;
	bss_75660 = 0x6;
	bss_75664 = 0x7472;
	bss_7568c = 0x104;
	bss_75690 = 0xe446;
	bss_75668 = 0x66;
	bss_7566c = 0x0;
	bss_75670 = 0x1a0;
	bss_756ac = 0x80;
	bss_756b0 = 0x40;
	bss_7569c = 0x7462;
	Menu_AddItem(0x75158, 0x75278);
	Menu_AddItem(0x75158, 0x752c0);
	Menu_AddItem(0x75158, 0x75318);
	Menu_AddItem(0x75158, 0x75370);
	Menu_AddItem(0x75158, 0x754bc);
	Menu_AddItem(0x75158, 0x75608);
	Menu_AddItem(0x75158, 0x75660);
	Com_sprintf(0x75504, 0x6, 0x740f, 0x6d38);
}

/*
=================
SpecifyServer_Cache

Address: 0xe593
Stack Size: 0x10
Calls: trap_R_RegisterShaderNoMip
Called by: SpecifyServer_MenuInit, UI_Cache_f
=================
*/
void SpecifyServer_Cache(void) {
	int		local_c;

	local_c = 0x0;
jmp_e597:
	if (*(int *)((local_c << 0x2) + 0x2568) != 0x0) goto jmp_e5a2;
	goto jmp_e5b5;
jmp_e5a2:
	trap_R_RegisterShaderNoMip(*(int *)((local_c << 0x2) + 0x2568));
	local_c = (local_c + 0x1);
	goto jmp_e597;
jmp_e5b5:
}

/*
=================
UI_SpecifyServerMenu

Address: 0xe5b7
Stack Size: 0xc
Calls: UI_PushMenu, SpecifyServer_MenuInit
Called by: ArenaServers_Event
=================
*/
void UI_SpecifyServerMenu(void) {

	SpecifyServer_MenuInit();
	UI_PushMenu(0x75158);
}

/*
=================
PlayerIcon

Address: 0xe5c2
Stack Size: 0x6c
Calls: trap_R_RegisterShaderNoMip, Q_stricmp, Com_sprintf, strrchr, Q_strncpyz
Called by: UI_SPLevelMenu_Init, UI_SPLevelMenu_MenuDraw, PlayerIconHandle
=================
*/
void PlayerIcon(int arg_0, int arg_1, int arg_2) {
	int		local_1c;
	char	local_20[64];
	int		local_60;
	int		local_64;
	int		local_68;

	Q_strncpyz(local_20, arg_0, 0x40);
	local_60 = strrchr(local_20, 0x2f);
	local_1c = local_60;
	if (local_1c == 0x0) goto jmp_e5ed;
	local_64 = local_1c;
	local_1c = (local_64 + 0x1);
	*(char *)local_64 = 0x0;
	goto jmp_e5f0;
jmp_e5ed:
	local_1c = 0x776d;
jmp_e5f0:
	Com_sprintf(arg_1, arg_2, 0x774f, local_20, local_1c);
	local_64 = trap_R_RegisterShaderNoMip(arg_1);
	if (local_64 != 0x0) goto jmp_e625;
	local_68 = Q_stricmp(local_1c, 0x776d);
	if (local_68 == 0x0) goto jmp_e625;
	Com_sprintf(arg_1, arg_2, 0x772c, local_20);
jmp_e625:
}

/*
=================
PlayerIconHandle

Address: 0xe627
Stack Size: 0x58
Calls: trap_R_RegisterShaderNoMip, PlayerIcon
Called by: UI_SPLevelMenu_SetBots
=================
*/
int PlayerIconHandle(int arg_0) {
	char	local_14[64];
	int		local_54;

	PlayerIcon(arg_0, local_14, 0x40);
	local_54 = trap_R_RegisterShaderNoMip(local_14);
	return local_54;
}

/*
=================
UI_SPLevelMenu_SetBots

Address: 0xe63d
Stack Size: 0x440
Calls: Q_CleanStr, PlayerIconHandle, UI_GetBotInfoByNumber, UI_GetBotInfoByName, Q_strncpyz, Info_ValueForKey
Called by: UI_SPLevelMenu_LevelEvent, UI_SPLevelMenu_SetMenuItems
=================
*/
void UI_SPLevelMenu_SetBots(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[1024];
	int		local_420;
	int		local_424;
	int		local_428;
	int		local_42c;
	int		local_430;
	int		local_434;
	int		local_438;
	int		local_43c;

	bss_760a8 = 0x0;
	if (selectedArenaSet <= currentSet) goto jmp_e648;
	goto jmp_e73b;
jmp_e648:
	local_420 = Info_ValueForKey(bss_75e74, 0x7727);
	Q_strncpyz(local_20, local_420, 0x400);
	local_14 = local_20;
	goto jmp_e731;
jmp_e660:
	local_14 = (local_14 + 0x1);
jmp_e666:
	local_424 = (char)*(char *)local_14;
	if (local_424 == 0x0) goto jmp_e674;
	if (local_424 == 0x20) goto jmp_e660;
jmp_e674:
	if ((char)*(char *)local_14 != 0x0) goto jmp_e67c;
	goto jmp_e73b;
jmp_e67c:
	local_1c = local_14;
	goto jmp_e688;
jmp_e682:
	local_14 = (local_14 + 0x1);
jmp_e688:
	local_428 = (char)*(char *)local_14;
	if (local_428 == 0x0) goto jmp_e696;
	if (local_428 != 0x20) goto jmp_e682;
jmp_e696:
	if ((char)*(char *)local_14 == 0x0) goto jmp_e6aa;
	local_42c = local_14;
	local_14 = (local_42c + 0x1);
	*(char *)local_42c = 0x0;
jmp_e6aa:
	local_42c = UI_GetBotInfoByName(local_1c);
	local_18 = local_42c;
	if (local_18 != 0x0) goto jmp_e6c4;
	local_430 = UI_GetBotInfoByNumber(bss_760a8);
	local_18 = local_430;
jmp_e6c4:
	if (local_18 == 0x0) goto jmp_e700;
	local_430 = Info_ValueForKey(local_18, 0x7721);
	local_434 = PlayerIconHandle(local_430);
	*(int *)((bss_760a8 << 0x2) + 0x760ac) = local_434;
	local_438 = Info_ValueForKey(local_18, 0x771c);
	local_43c = 0xa;
	Q_strncpyz(((local_43c * bss_760a8) + 0x760c8), local_438, local_43c);
	goto jmp_e71c;
jmp_e700:
	*(int *)((bss_760a8 << 0x2) + 0x760ac) = 0x0;
	local_430 = 0xa;
	Q_strncpyz(((local_430 * bss_760a8) + 0x760c8), local_1c, local_430);
jmp_e71c:
	Q_CleanStr(((0xa * bss_760a8) + 0x760c8));
	local_430 = 0x760a8;
	*(int *)local_430 = (*(int *)local_430 + 0x1);
jmp_e731:
	if ((char)*(char *)local_14 == 0x0) goto jmp_e73b;
	if (bss_760a8 < 0x7) goto jmp_e666;
jmp_e73b:
}

/*
=================
UI_SPLevelMenu_SetMenuArena

Address: 0xe73d
Stack Size: 0x68
Calls: trap_R_RegisterShaderNoMip, strcpy, Com_sprintf, UI_GetBestScore, Q_strupr, Q_strncpyz, Info_ValueForKey
Called by: UI_SPLevelMenu_SetMenuItems
=================
*/
void UI_SPLevelMenu_SetMenuArena(int arg_0, int arg_1, int arg_2) {
	char	local_18[64];
	int		local_58;
	int		local_5c;
	int		local_60;
	int		local_64;

	arg_0 = arg_0;
	local_58 = Info_ValueForKey(arg_2, 0x7718);
	Q_strncpyz(local_18, local_58, 0x40);
	Q_strncpyz(((arg_0 << 0x4) + 0x75f7c), local_18, 0x10);
	Q_strupr(((arg_0 << 0x4) + 0x75f7c));
#define next_call_arg_0 "arg_1"
	local_5c = (arg_0 << 0x2);
#define next_call_arg_1 "(local_5c + 0x75fbc)"
#define next_call_arg_2 "(local_5c + 0x75fcc)"
	UI_GetBestScore();
	if (*(int *)((arg_0 << 0x2) + 0x75fbc) <= 0x8) goto jmp_e794;
	*(int *)((arg_0 << 0x2) + 0x75fbc) = 0x8;
jmp_e794:
	Com_sprintf(((arg_0 << 0x6) + 0x75e7c), 0x40, 0x7706, local_18);
	local_60 = trap_R_RegisterShaderNoMip(((arg_0 << 0x6) + 0x75e7c));
	if (local_60 != 0x0) goto jmp_e7bf;
	strcpy(((arg_0 << 0x6) + 0x75e7c), 0x76f2);
jmp_e7bf:
	*(int *)((0x58 * arg_0) + 0x758dc) = 0x0;
	if (selectedArenaSet <= currentSet) goto jmp_e7de;
	local_64 = ((0x58 * arg_0) + 0x758c4);
	*(int *)local_64 = (*(int *)local_64 | 0x2000);
	goto jmp_e7ee;
jmp_e7de:
	local_64 = ((0x58 * arg_0) + 0x758c4);
	*(int *)local_64 = (*(int *)local_64 & 0xffffdfff);
jmp_e7ee:
	local_64 = ((0x58 * arg_0) + 0x758c4);
	*(int *)local_64 = (*(int *)local_64 & 0xffffbfff);
}

/*
=================
UI_SPLevelMenu_SetMenuItems

Address: 0xe800
Stack Size: 0x40
Calls: trap_Cvar_SetValue, UI_SPLevelMenu_SetBots, UI_GetArenaInfoByNumber, Bitmap_Init, UI_SPLevelMenu_SetMenuArena, atoi, Info_ValueForKey, UI_GetSpecialArenaInfo
Called by: UI_SPLevelMenu_Init, UI_SPLevelMenu_RightArrowEvent, UI_SPLevelMenu_LeftArrowEvent
=================
*/
void UI_SPLevelMenu_SetMenuItems(void) {
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

	if (selectedArenaSet <= currentSet) goto jmp_e80b;
	selectedArena = 0xffffffff;
	goto jmp_e812;
jmp_e80b:
	if (selectedArena != 0xffffffff) goto jmp_e812;
	selectedArena = 0x0;
jmp_e812:
	local_20 = selectedArenaSet;
	if (local_20 == trainingTier) goto jmp_e820;
	if (local_20 != finalTier) goto jmp_e823;
jmp_e820:
	selectedArena = 0x0;
jmp_e823:
	if (selectedArena == 0xffffffff) goto jmp_e835;
	trap_Cvar_SetValue(0x76e3, (float)((selectedArenaSet << 0x2) + selectedArena));
jmp_e835:
	if (selectedArenaSet != trainingTier) goto jmp_e8b2;
	local_24 = UI_GetSpecialArenaInfo(0x76da);
	local_1c = local_24;
	local_28 = Info_ValueForKey(local_1c, 0x76d6);
	local_2c = atoi(local_28);
	local_18 = local_2c;
	UI_SPLevelMenu_SetMenuArena(0x0, local_18, local_1c);
	bss_75e74 = local_1c;
	bss_758a4 = 0x100;
	Bitmap_Init(0x75898);
	local_30 = 0x758b8;
	*(int *)local_30 = (*(int *)local_30 + 0x20);
	bss_75e78 = 0x1;
	local_34 = 0x7591c;
	*(int *)local_34 = (*(int *)local_34 | 0x4000);
	local_38 = 0x75974;
	*(int *)local_38 = (*(int *)local_38 | 0x4000);
	local_3c = 0x759cc;
	*(int *)local_3c = (*(int *)local_3c | 0x4000);
	*(char *)bss_75ebc = 0x0;
	*(char *)bss_75efc = 0x0;
	*(char *)bss_75f3c = 0x0;
	bss_75934 = 0x0;
	bss_7598c = 0x0;
	bss_759e4 = 0x0;
	goto jmp_e986;
jmp_e8b2:
	if (selectedArenaSet != finalTier) goto jmp_e92f;
	local_24 = UI_GetSpecialArenaInfo(0x76d0);
	local_1c = local_24;
	local_28 = Info_ValueForKey(local_1c, 0x76d6);
	local_2c = atoi(local_28);
	local_18 = local_2c;
	UI_SPLevelMenu_SetMenuArena(0x0, local_18, local_1c);
	bss_75e74 = local_1c;
	bss_758a4 = 0x100;
	Bitmap_Init(0x75898);
	local_30 = 0x758b8;
	*(int *)local_30 = (*(int *)local_30 + 0x20);
	bss_75e78 = 0x1;
	local_34 = 0x7591c;
	*(int *)local_34 = (*(int *)local_34 | 0x4000);
	local_38 = 0x75974;
	*(int *)local_38 = (*(int *)local_38 | 0x4000);
	local_3c = 0x759cc;
	*(int *)local_3c = (*(int *)local_3c | 0x4000);
	*(char *)bss_75ebc = 0x0;
	*(char *)bss_75efc = 0x0;
	*(char *)bss_75f3c = 0x0;
	bss_75934 = 0x0;
	bss_7598c = 0x0;
	bss_759e4 = 0x0;
	goto jmp_e986;
jmp_e92f:
	bss_758a4 = 0x2e;
	Bitmap_Init(0x75898);
	local_24 = 0x758b8;
	*(int *)local_24 = (*(int *)local_24 + 0x12);
	bss_75e78 = 0x4;
	local_14 = 0x0;
jmp_e948:
	local_18 = ((selectedArenaSet << 0x2) + local_14);
	local_28 = UI_GetArenaInfoByNumber(local_18);
	local_1c = local_28;
	UI_SPLevelMenu_SetMenuArena(local_14, local_18, local_1c);
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x4) goto jmp_e948;
	if (selectedArena == 0xffffffff) goto jmp_e986;
	local_28 = UI_GetArenaInfoByNumber(((selectedArenaSet << 0x2) + selectedArena));
	bss_75e74 = local_28;
jmp_e986:
	if (selectedArenaSet != minTier) goto jmp_e998;
	local_24 = 0x7586c;
	*(int *)local_24 = (*(int *)local_24 | 0x5000);
	goto jmp_e9a3;
jmp_e998:
	local_24 = 0x7586c;
	*(int *)local_24 = (*(int *)local_24 & 0xffffafff);
jmp_e9a3:
	if (selectedArenaSet != maxTier) goto jmp_e9b5;
	local_24 = 0x75a24;
	*(int *)local_24 = (*(int *)local_24 | 0x5000);
	goto jmp_e9c0;
jmp_e9b5:
	local_24 = 0x75a24;
	*(int *)local_24 = (*(int *)local_24 & 0xffffafff);
jmp_e9c0:
	UI_SPLevelMenu_SetBots();
}

/*
=================
UI_SPLevelMenu_ResetDraw

Address: 0xe9c5
Stack Size: 0x1c
Calls: UI_DrawProportionalString
=================
*/
void UI_SPLevelMenu_ResetDraw(void) {

	UI_DrawProportionalString(0x140, 0x164, 0x76b0, 0x11, 0x2170);
	UI_DrawProportionalString(0x140, 0x17f, 0x7692, 0x11, 0x2170);
	UI_DrawProportionalString(0x140, 0x19a, 0x7676, 0x11, 0x2170);
	UI_DrawProportionalString(0x140, 0x1b5, 0x7657, 0x11, 0x2170);
}

/*
=================
UI_SPLevelMenu_ResetAction

Address: 0xe9fc
Stack Size: 0x14
Calls: trap_Cvar_SetValue, UI_SPLevelMenu, UI_PopMenu, UI_GetSpecialArenaInfo, UI_NewGame
=================
*/
void UI_SPLevelMenu_ResetAction(int arg_0) {
	int		local_10;

	if (arg_0 != 0x0) goto jmp_ea03;
	goto jmp_ea26;
jmp_ea03:
	UI_NewGame();
	local_10 = UI_GetSpecialArenaInfo(0x76da);
	if (local_10 == 0x0) goto jmp_ea19;
	trap_Cvar_SetValue(0x76e3, 0xc0800000);
	goto jmp_ea20;
jmp_ea19:
	trap_Cvar_SetValue(0x76e3, 0x0);
jmp_ea20:
	UI_PopMenu();
	UI_SPLevelMenu();
jmp_ea26:
}

/*
=================
UI_SPLevelMenu_ResetEvent

Address: 0xea28
Stack Size: 0x14
Calls: UI_ConfirmMenu
=================
*/
void UI_SPLevelMenu_ResetEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_ea2f;
	goto jmp_ea38;
jmp_ea2f:
	UI_ConfirmMenu(0x764b, 0xe9c5, 0xe9fc);
jmp_ea38:
}

/*
=================
UI_SPLevelMenu_LevelEvent

Address: 0xea3a
Stack Size: 0x1c
Calls: trap_Cvar_SetValue, UI_SPLevelMenu_SetBots, UI_GetArenaInfoByNumber
=================
*/
void UI_SPLevelMenu_LevelEvent(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	int		local_18;

	if (arg_1 == 0x3) goto jmp_ea41;
	goto jmp_ea80;
jmp_ea41:
	local_10 = selectedArenaSet;
	if (local_10 == trainingTier) goto jmp_ea4f;
	if (local_10 != finalTier) goto jmp_ea51;
jmp_ea4f:
	goto jmp_ea80;
jmp_ea51:
	local_14 = 0x756d0;
	*(int *)local_14 = (*(int *)(arg_0 + 0x8) - 0xb);
	local_18 = UI_GetArenaInfoByNumber(((selectedArenaSet << 0x2) + *(int *)local_14));
	bss_75e74 = local_18;
	UI_SPLevelMenu_SetBots();
	trap_Cvar_SetValue(0x76e3, (float)((selectedArenaSet << 0x2) + selectedArena));
jmp_ea80:
}

/*
=================
UI_SPLevelMenu_LeftArrowEvent

Address: 0xea82
Stack Size: 0xc
Calls: UI_SPLevelMenu_SetMenuItems
=================
*/
void UI_SPLevelMenu_LeftArrowEvent(, int arg_1) {
	int		local_8;

	if (arg_1 == 0x3) goto jmp_ea89;
	goto jmp_ea9e;
jmp_ea89:
	if (selectedArenaSet != minTier) goto jmp_ea90;
	goto jmp_ea9e;
jmp_ea90:
	local_8 = 0x756d4;
	*(int *)local_8 = (*(int *)local_8 - 0x1);
	UI_SPLevelMenu_SetMenuItems();
jmp_ea9e:
}

/*
=================
UI_SPLevelMenu_RightArrowEvent

Address: 0xeaa0
Stack Size: 0xc
Calls: UI_SPLevelMenu_SetMenuItems
=================
*/
void UI_SPLevelMenu_RightArrowEvent(, int arg_1) {
	int		local_8;

	if (arg_1 == 0x3) goto jmp_eaa7;
	goto jmp_eabc;
jmp_eaa7:
	if (selectedArenaSet != maxTier) goto jmp_eaae;
	goto jmp_eabc;
jmp_eaae:
	local_8 = 0x756d4;
	*(int *)local_8 = (*(int *)local_8 + 0x1);
	UI_SPLevelMenu_SetMenuItems();
jmp_eabc:
}

/*
=================
UI_SPLevelMenu_PlayerEvent

Address: 0xeabe
Stack Size: 0x8
Calls: UI_PlayerSettingsMenu
=================
*/
void UI_SPLevelMenu_PlayerEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_eac5;
	goto jmp_eac8;
jmp_eac5:
	UI_PlayerSettingsMenu();
jmp_eac8:
}

/*
=================
UI_SPLevelMenu_AwardEvent

Address: 0xeaca
Stack Size: 0x14
Calls: trap_S_StartLocalSound
=================
*/
void UI_SPLevelMenu_AwardEvent(int arg_0, int arg_1) {
	int		local_10;

	if (arg_1 == 0x3) goto jmp_ead1;
	goto jmp_eae7;
jmp_ead1:
	local_10 = (*(int *)(arg_0 + 0x8) - 0x11);
	trap_S_StartLocalSound(*(int *)((local_10 << 0x2) + 0x76090), 0x7);
jmp_eae7:
}

/*
=================
UI_SPLevelMenu_NextEvent

Address: 0xeae9
Stack Size: 0xc
Calls: UI_SPSkillMenu
=================
*/
void UI_SPLevelMenu_NextEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_eaf0;
	goto jmp_eb04;
jmp_eaf0:
	if (selectedArenaSet <= currentSet) goto jmp_eaf7;
	goto jmp_eb04;
jmp_eaf7:
	if (selectedArena != 0xffffffff) goto jmp_eafe;
	selectedArena = 0x0;
jmp_eafe:
	UI_SPSkillMenu(bss_75e74);
jmp_eb04:
}

/*
=================
UI_SPLevelMenu_BackEvent

Address: 0xeb06
Stack Size: 0x8
Calls: UI_PopMenu
=================
*/
void UI_SPLevelMenu_BackEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_eb0d;
	goto jmp_eb17;
jmp_eb0d:
	if (selectedArena != 0xffffffff) goto jmp_eb14;
	selectedArena = 0x0;
jmp_eb14:
	UI_PopMenu();
jmp_eb17:
}

/*
=================
UI_SPLevelMenu_CustomEvent

Address: 0xeb19
Stack Size: 0xc
Calls: UI_StartServerMenu
=================
*/
void UI_SPLevelMenu_CustomEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_eb20;
	goto jmp_eb25;
jmp_eb20:
	UI_StartServerMenu(0x0);
jmp_eb25:
}

/*
=================
UI_SPLevelMenu_MenuDraw

Address: 0xeb27
Stack Size: 0x4a4
Calls: trap_R_SetColor, sin, trap_Cvar_VariableStringBuffer, Q_strupr, Info_ValueForKey, Menu_ItemAtCursor, UI_DrawHandlePic, UI_FillRect, va, UI_DrawString, Com_sprintf, Menu_Draw, PlayerIcon, Q_strncpyz, Q_stricmp, UI_DrawProportionalString, Q_CleanStr, UI_SPLevelMenu, UI_PopMenu
=================
*/
void UI_SPLevelMenu_MenuDraw(void) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[64];
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	char	local_84[1024];
	int		local_484;
	int		local_488;
	int		local_48c;
	int		local_490;
	int		local_494;
	int		local_498;
	int		local_49c;
	int		local_4a0;

	if (bss_75e70 == 0x0) goto jmp_eb34;
	UI_PopMenu();
	UI_SPLevelMenu();
	goto jmp_ee40;
jmp_eb34:
	trap_Cvar_VariableStringBuffer(0x771c, local_2c, 0x20);
	Q_CleanStr(local_2c);
	UI_DrawProportionalString(0x140, 0x13a, local_2c, 0x11, 0x21a0);
	trap_Cvar_VariableStringBuffer(0x7721, local_84, 0x400);
	local_484 = Q_stricmp(local_84, 0x75ff8);
	if (local_484 == 0x0) goto jmp_eb79;
	Q_strncpyz(0x75ff8, local_84, 0x40);
	PlayerIcon(0x75ff8, 0x76038, 0x40);
	bss_75a94 = 0x0;
jmp_eb79:
	Menu_Draw(0x756d8);
	local_24 = 0x154;
	local_488 = 0x0;
	local_6c = local_488;
	local_1c = local_488;
jmp_eb8c:
	local_28 = *(int *)((local_1c << 0x2) + 0x76078);
	if (local_28 <= 0x0) goto jmp_ec0f;
	if ((local_6c & 0x1) == 0x0) goto jmp_ebad;
	local_20 = (0xe0 - (((local_6c - 0x1) / 0x2) << 0x6));
	goto jmp_ebb7;
jmp_ebad:
	local_20 = (((local_6c / 0x2) << 0x6) + 0x170);
jmp_ebb7:
	local_48c = 0x1;
	local_6c = (local_6c + local_48c);
	if (local_28 != local_48c) goto jmp_ebc8;
	goto jmp_ec0f;
jmp_ebc8:
	if (local_28 < 0xf4240) goto jmp_ebdc;
	Com_sprintf(local_2c, 0x40, 0x7647, (local_28 / 0xf4240));
	goto jmp_ebfc;
jmp_ebdc:
	if (local_28 < 0x3e8) goto jmp_ebf0;
	Com_sprintf(local_2c, 0x40, 0x7643, (local_28 / 0x3e8));
	goto jmp_ebfc;
jmp_ebf0:
	Com_sprintf(local_2c, 0x40, 0x7640, local_28);
jmp_ebfc:
	UI_DrawString((local_20 + 0x18), (local_24 + 0x30), local_2c, 0x1, 0x2170);
jmp_ec0f:
	local_1c = (local_1c + 0x1);
	if (local_1c < 0x6) goto jmp_eb8c;
	local_48c = va(0x7638, (selectedArenaSet + 0x1));
	UI_DrawProportionalString(0x12, 0x26, local_48c, 0x10, 0x21a0);
	local_1c = 0x0;
	goto jmp_ec64;
jmp_ec37:
	local_490 = (0x58 * local_1c);
	local_20 = *(int *)(local_490 + 0x758a4);
	local_24 = *(int *)(local_490 + 0x758a8);
	UI_FillRect((float)local_20, (float)(local_24 + 0x60), 0x43000000, 0x41900000, 0x2150);
	local_1c = (local_1c + 0x1);
jmp_ec64:
	if (local_1c < bss_75e78) goto jmp_ec37;
	if (selectedArenaSet <= currentSet) goto jmp_ec7d;
	UI_DrawProportionalString(0x140, 0xd8, 0x762a, 0x21, 0x21b0);
	goto jmp_ee40;
jmp_ec7d:
	local_74 = color_white;
	local_78 = global_2164;
	local_7c = global_2168;
	local_80 = global_216c;
	local_490 = sin((float)(bss_db58 / 0x4b));
	local_80 = ((0x3f000000 * local_490) + 0x3f000000);
	local_1c = 0x0;
	goto jmp_ed6a;
jmp_eca4:
	local_498 = (0x58 * local_1c);
	local_20 = *(int *)(local_498 + 0x758a4);
	local_24 = *(int *)(local_498 + 0x758a8);
	UI_DrawString((local_20 + 0x40), (local_24 + 0x60), ((local_1c << 0x4) + 0x75f7c), 0x11, 0x21a0);
	if (*(int *)((local_1c << 0x2) + 0x75fbc) != 0x1) goto jmp_ecfa;
#define next_call_arg_0 "(float)local_20"
#define next_call_arg_1 "(float)local_24"
#define next_call_arg_2 "0x43000000"
#define next_call_arg_3 "0x42c00000"
	local_49c = 0x2;
#define next_call_arg_4 "*(int *)((*(int *)((local_1c << local_49c) + 0x75fcc) << local_49c) + 0x75fe0)"
	UI_DrawHandlePic();
jmp_ecfa:
	if (local_1c != selectedArena) goto jmp_ed35;
	local_49c = Menu_ItemAtCursor(0x756d8);
	if (((0x58 * local_1c) + 0x75898) != local_49c) goto jmp_ed13;
	trap_R_SetColor(&local_74);
jmp_ed13:
	local_4a0 = 0x1;
	UI_DrawHandlePic((float)(local_20 - local_4a0), (float)(local_24 - local_4a0), 0x43020000, 0x42e80000, bss_75fdc);
	trap_R_SetColor(0x0);
	goto jmp_ed64;
jmp_ed35:
	local_49c = Menu_ItemAtCursor(0x756d8);
	if (((0x58 * local_1c) + 0x75898) != local_49c) goto jmp_ed64;
	trap_R_SetColor(&local_74);
	UI_DrawHandlePic((float)(local_20 - 0x1f), (float)(local_24 - 0x1e), 0x43800000, 0x43650000, bss_75fe0);
	trap_R_SetColor(0x0);
jmp_ed64:
	local_1c = (local_1c + 0x1);
jmp_ed6a:
	if (local_1c < bss_75e78) goto jmp_eca4;
	local_24 = 0xc0;
	local_494 = Info_ValueForKey(bss_75e74, 0x7718);
	Q_strncpyz(local_84, local_494, 0x14);
	Q_strupr(local_84);
	local_498 = Info_ValueForKey(bss_75e74, 0x761a);
	Com_sprintf(local_2c, 0x40, 0x7623, local_84, local_498);
	UI_DrawProportionalString(0x140, local_24, local_2c, 0x11, 0x21a0);
	local_24 = (local_24 + 0x18);
	local_70 = ((0x5a * (0x7 - bss_760a8)) / 0x2);
	local_1c = 0x0;
	goto jmp_ee3b;
jmp_edc4:
	local_20 = ((local_70 + 0x12) + (0x5a * local_1c));
	if (*(int *)((local_1c << 0x2) + 0x760ac) == 0x0) goto jmp_edf6;
#define next_call_arg_0 "(float)local_20"
#define next_call_arg_1 "(float)local_24"
	local_4a0 = 0x42800000;
#define next_call_arg_2 "local_4a0"
#define next_call_arg_3 "local_4a0"
#define next_call_arg_4 "*(int *)((local_1c << 0x2) + 0x760ac)"
	UI_DrawHandlePic();
	goto jmp_ee1f;
jmp_edf6:
#define next_call_arg_0 "(float)local_20"
#define next_call_arg_1 "(float)local_24"
	local_4a0 = 0x42800000;
#define next_call_arg_2 "local_4a0"
#define next_call_arg_3 "local_4a0"
#define next_call_arg_4 "0x2150"
	UI_FillRect();
	UI_DrawProportionalString((local_20 + 0x16), (local_24 + 0x12), 0x7618, 0x20, 0x21a0);
jmp_ee1f:
	UI_DrawString(local_20, (local_24 + 0x40), ((0xa * local_1c) + 0x760c8), 0x10, 0x21a0);
	local_1c = (local_1c + 0x1);
jmp_ee3b:
	if (local_1c < bss_760a8) goto jmp_edc4;
jmp_ee40:
}

/*
=================
UI_SPLevelMenu_Cache

Address: 0xee42
Stack Size: 0x30
Calls: trap_S_RegisterSound, trap_R_RegisterShaderNoMip
Called by: UI_SPLevelMenu_Init, UI_Cache_f
=================
*/
void UI_SPLevelMenu_Cache(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	trap_R_RegisterShaderNoMip(0x7603);
	trap_R_RegisterShaderNoMip(0x75ec);
	trap_R_RegisterShaderNoMip(0x75da);
	trap_R_RegisterShaderNoMip(0x75c8);
	trap_R_RegisterShaderNoMip(0x76f2);
	trap_R_RegisterShaderNoMip(0x75af);
	trap_R_RegisterShaderNoMip(0x7596);
	trap_R_RegisterShaderNoMip(0x757d);
	trap_R_RegisterShaderNoMip(0x7564);
	trap_R_RegisterShaderNoMip(0x754b);
	trap_R_RegisterShaderNoMip(0x753b);
	trap_R_RegisterShaderNoMip(0x752b);
	trap_R_RegisterShaderNoMip(0x751a);
	trap_R_RegisterShaderNoMip(0x7509);
	trap_R_RegisterShaderNoMip(0x74f8);
	trap_R_RegisterShaderNoMip(0x74e7);
	trap_R_RegisterShaderNoMip(0x74d3);
	trap_R_RegisterShaderNoMip(0x74bf);
	local_10 = 0x0;
jmp_eea0:
	trap_R_RegisterShaderNoMip(*(int *)((local_10 << 0x2) + 0x259c));
	local_14 = (local_10 << 0x2);
	local_18 = trap_S_RegisterSound(*(int *)(local_14 + 0x25b4), 0x0);
	*(int *)(local_14 + 0x76090) = local_18;
	local_10 = (local_10 + 0x1);
	if (local_10 < 0x6) goto jmp_eea0;
	local_14 = trap_R_RegisterShaderNoMip(0x75ec);
	bss_75fdc = local_14;
	local_18 = trap_R_RegisterShaderNoMip(0x7603);
	bss_75fe0 = local_18;
	local_1c = trap_R_RegisterShaderNoMip(0x75af);
	bss_75fe4 = local_1c;
	local_20 = trap_R_RegisterShaderNoMip(0x7596);
	bss_75fe8 = local_20;
	local_24 = trap_R_RegisterShaderNoMip(0x757d);
	bss_75fec = local_24;
	local_28 = trap_R_RegisterShaderNoMip(0x7564);
	bss_75ff0 = local_28;
	local_2c = trap_R_RegisterShaderNoMip(0x754b);
	bss_75ff4 = local_2c;
}

/*
=================
UI_SPLevelMenu_Init

Address: 0xef16
Stack Size: 0x94
Calls: trap_Cvar_VariableStringBuffer, memset, trap_Cvar_Set, trap_Cvar_VariableValue, UI_SPLevelMenu_SetMenuItems, atoi, Menu_AddItem, UI_GetAwardLevel, PlayerIcon, UI_SPLevelMenu_Cache
Called by: UI_SPLevelMenu
=================
*/
void UI_SPLevelMenu_Init(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	char	local_24[64];
	int		local_64;
	char	local_68[8];
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;
	int		local_80;
	int		local_84;
	char	local_88[8];
	int		local_90;

	*(int *)local_68 = trap_Cvar_VariableValue(0x74b5);
	local_64 = (int)*(int *)local_68;
	if (local_64 < 0x1) goto jmp_ef2a;
	if (local_64 <= 0x5) goto jmp_ef31;
jmp_ef2a:
	trap_Cvar_Set(0x74b5, 0x74b3);
jmp_ef31:
	memset(0x756d8, 0x0, 0xa38);
	bss_757f0 = 0x1;
	bss_757ec = 0x1;
	bss_757e4 = 0xeb27;
	UI_SPLevelMenu_Cache();
	bss_757f8 = 0xa;
	bss_75804 = 0x140;
	bss_75808 = 0x10;
	bss_75834 = 0x74a6;
	bss_7583c = 0x21b0;
	bss_75838 = 0x1;
	bss_75840 = 0x6;
	bss_75844 = 0x75da;
	bss_7586c = 0x104;
	bss_7584c = 0x12;
	bss_75850 = 0x40;
	bss_75870 = 0xea82;
	bss_75848 = 0xa;
	bss_7588c = 0x10;
	bss_75890 = 0x72;
	bss_7587c = 0x75c8;
	bss_75898 = 0x6;
	bss_7589c = 0x75e7c;
	bss_758c4 = 0x4;
	bss_758a4 = 0x2e;
	bss_758a8 = 0x40;
	bss_758a0 = 0xb;
	bss_758c8 = 0xea3a;
	bss_758e4 = 0x80;
	bss_758e8 = 0x60;
	bss_758f0 = 0x6;
	bss_758f4 = 0x75ebc;
	bss_7591c = 0x4;
	bss_758fc = 0xba;
	bss_75900 = 0x40;
	bss_758f8 = 0xc;
	bss_75920 = 0xea3a;
	bss_7593c = 0x80;
	bss_75940 = 0x60;
	bss_75948 = 0x6;
	bss_7594c = 0x75efc;
	bss_75974 = 0x4;
	bss_75954 = 0x146;
	bss_75958 = 0x40;
	bss_75950 = 0xd;
	bss_75978 = 0xea3a;
	bss_75994 = 0x80;
	bss_75998 = 0x60;
	bss_759a0 = 0x6;
	bss_759a4 = 0x75f3c;
	bss_759cc = 0x4;
	bss_759ac = 0x1d2;
	bss_759b0 = 0x40;
	bss_759a8 = 0xe;
	bss_759d0 = 0xea3a;
	bss_759ec = 0x80;
	bss_759f0 = 0x60;
	bss_759f8 = 0x6;
	bss_759fc = 0x75da;
	bss_75a24 = 0x104;
	bss_75a04 = 0x25e;
	bss_75a08 = 0x40;
	bss_75a28 = 0xeaa0;
	bss_75a00 = 0xf;
	bss_75a44 = 0xfffffff0;
	bss_75a48 = 0x72;
	bss_75a34 = 0x75c8;
	trap_Cvar_VariableStringBuffer(0x7721, 0x75ff8, 0x40);
	PlayerIcon(0x75ff8, 0x76038, 0x40);
	bss_75a50 = 0x6;
	bss_75a54 = 0x76038;
	bss_75a7c = 0x804;
	bss_75a5c = 0x120;
	bss_75a60 = 0x154;
	bss_75a58 = 0x10;
	bss_75a80 = 0xeabe;
	bss_75a9c = 0x40;
	bss_75aa0 = 0x40;
	local_14 = 0x0;
jmp_f030:
	local_74 = UI_GetAwardLevel(local_14);
	*(int *)((local_14 << 0x2) + 0x76078) = local_74;
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x6) goto jmp_f030;
	local_70 = 0x64;
	bss_76088 = (local_70 * (bss_76088 / local_70));
	local_20 = 0x154;
	local_74 = 0x0;
	local_18 = local_74;
	local_14 = local_74;
jmp_f065:
	if (*(int *)((local_14 << 0x2) + 0x76078) == 0x0) goto jmp_f0e5;
	if ((local_18 & 0x1) == 0x0) goto jmp_f082;
	local_1c = (0xe0 - (((local_18 - 0x1) / 0x2) << 0x6));
	goto jmp_f08c;
jmp_f082:
	local_1c = (((local_18 / 0x2) << 0x6) + 0x170);
jmp_f08c:
	*(int *)((0x58 * local_18) + 0x75aa8) = 0x6;
	*(int *)((0x58 * local_18) + 0x75aac) = *(int *)((local_14 << 0x2) + 0x259c);
	*(int *)((0x58 * local_18) + 0x75ad4) = 0x100804;
	*(int *)((0x58 * local_18) + 0x75ab4) = local_1c;
	*(int *)((0x58 * local_18) + 0x75ab8) = local_20;
	*(int *)((0x58 * local_18) + 0x75ab0) = (local_14 + 0x11);
	*(int *)((0x58 * local_18) + 0x75ad8) = 0xeaca;
	*(int *)((0x58 * local_18) + 0x75af4) = 0x30;
	*(int *)((0x58 * local_18) + 0x75af8) = 0x30;
	local_18 = (local_18 + 0x1);
jmp_f0e5:
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x6) goto jmp_f065;
	bss_75cb8 = 0x6;
	bss_75cbc = 0x753b;
	bss_75ce4 = 0x104;
	bss_75cc4 = 0x0;
	bss_75cc8 = 0x1a0;
	bss_75ce8 = 0xeb06;
	bss_75cc0 = 0x17;
	bss_75d04 = 0x80;
	bss_75d08 = 0x40;
	bss_75cf4 = 0x752b;
	bss_75d10 = 0x6;
	bss_75d14 = 0x74f8;
	bss_75d3c = 0x104;
	bss_75d1c = 0xaa;
	bss_75d20 = 0x1a0;
	bss_75d40 = 0xea28;
	bss_75d18 = 0x18;
	bss_75d5c = 0x80;
	bss_75d60 = 0x40;
	bss_75d4c = 0x74e7;
	bss_75d68 = 0x6;
	bss_75d6c = 0x74d3;
	bss_75d94 = 0x104;
	bss_75d74 = 0x156;
	bss_75d78 = 0x1a0;
	bss_75d98 = 0xeb19;
	bss_75d70 = 0x19;
	bss_75db4 = 0x80;
	bss_75db8 = 0x40;
	bss_75da4 = 0x74bf;
	bss_75dc0 = 0x6;
	bss_75dc4 = 0x751a;
	bss_75dec = 0x110;
	bss_75dcc = 0x280;
	bss_75dd0 = 0x1a0;
	bss_75df0 = 0xeae9;
	bss_75dc8 = 0x1a;
	bss_75e0c = 0x80;
	bss_75e10 = 0x40;
	bss_75dfc = 0x7509;
	bss_75e18 = 0x6;
	bss_75e44 = 0x100804;
	bss_75e24 = 0x0;
	bss_75e28 = 0x0;
	bss_75e64 = 0x280;
	bss_75e68 = 0x1e0;
	Menu_AddItem(0x756d8, 0x757f8);
	Menu_AddItem(0x756d8, 0x75840);
	Menu_AddItem(0x756d8, 0x75898);
	Menu_AddItem(0x756d8, 0x758f0);
	Menu_AddItem(0x756d8, 0x75948);
	Menu_AddItem(0x756d8, 0x759a0);
	local_78 = 0x758b8;
	*(int *)local_78 = (*(int *)local_78 + 0x12);
	local_7c = 0x75910;
	*(int *)local_7c = (*(int *)local_7c + 0x12);
	local_80 = 0x75968;
	*(int *)local_80 = (*(int *)local_80 + 0x12);
	local_84 = 0x759c0;
	*(int *)local_84 = (*(int *)local_84 + 0x12);
	Menu_AddItem(0x756d8, 0x759f8);
	Menu_AddItem(0x756d8, 0x75a50);
	local_14 = 0x0;
	goto jmp_f1f4;
jmp_f1e2:
	Menu_AddItem(0x756d8, ((0x58 * local_14) + 0x75aa8));
	local_14 = (local_14 + 0x1);
jmp_f1f4:
	if (local_14 < local_18) goto jmp_f1e2;
	Menu_AddItem(0x756d8, 0x75cb8);
	Menu_AddItem(0x756d8, 0x75d10);
	Menu_AddItem(0x756d8, 0x75d68);
	Menu_AddItem(0x756d8, 0x75dc0);
	Menu_AddItem(0x756d8, 0x75e18);
	trap_Cvar_VariableStringBuffer(0x76e3, local_24, 0x40);
	if ((char)*(char *)local_24 == 0x0) goto jmp_f247;
	*(int *)local_88 = atoi(local_24);
	local_14 = *(int *)local_88;
	local_90 = 0x4;
	selectedArenaSet = (local_14 / local_90);
	selectedArena = (local_14 %% local_90);
	goto jmp_f24f;
jmp_f247:
	selectedArenaSet = currentSet;
	selectedArena = currentGame;
jmp_f24f:
	UI_SPLevelMenu_SetMenuItems();
}

/*
=================
UI_SPLevelMenu

Address: 0xf254
Stack Size: 0x34
Calls: Menu_SetCursorToItem, UI_PushMenu, UI_SPLevelMenu_Init, UI_GetNumSPArenas, UI_GetCurrentGame, UI_GetNumSPTiers, atoi, Info_ValueForKey, UI_GetSpecialArenaInfo
Called by: UI_SPLevelMenu_f, UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_ResetAction, Main_MenuEvent
=================
*/
void UI_SPLevelMenu(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;

	trainingTier = 0xffffffff;
	local_1c = UI_GetSpecialArenaInfo(0x76da);
	local_14 = local_1c;
	if (local_14 == 0x0) goto jmp_f280;
	minTier = trainingTier;
	local_20 = Info_ValueForKey(local_14, 0x76d6);
	local_24 = atoi(local_20);
	local_18 = local_24;
	goto jmp_f286;
jmp_f280:
	minTier = 0x0;
	local_18 = 0xfffffffe;
jmp_f286:
	local_20 = UI_GetNumSPTiers();
	finalTier = local_20;
	local_24 = UI_GetSpecialArenaInfo(0x76d0);
	local_14 = local_24;
	if (local_14 == 0x0) goto jmp_f2a2;
	maxTier = finalTier;
	goto jmp_f2b6;
jmp_f2a2:
	local_28 = 0x756b8;
	*(int *)local_28 = (finalTier - 0x1);
	if (*(int *)local_28 >= minTier) goto jmp_f2b6;
	maxTier = minTier;
jmp_f2b6:
	local_28 = UI_GetCurrentGame();
	local_10 = local_28;
	if (local_10 != 0xffffffff) goto jmp_f2d7;
	local_2c = UI_GetNumSPArenas();
	local_10 = (local_2c - 0x1);
	if (maxTier != finalTier) goto jmp_f2d7;
	local_10 = (local_10 + 0x1);
jmp_f2d7:
	if (local_10 != local_18) goto jmp_f2e4;
	currentSet = 0xffffffff;
	currentGame = 0x0;
	goto jmp_f2f5;
jmp_f2e4:
	local_30 = 0x4;
	currentSet = (local_10 / local_30);
	currentGame = (local_10 %% local_30);
jmp_f2f5:
	UI_SPLevelMenu_Init();
	UI_PushMenu(0x756d8);
	Menu_SetCursorToItem(0x756d8, 0x75dc0);
}

/*
=================
UI_SPLevelMenu_f

Address: 0xf306
Stack Size: 0xc
Calls: trap_Key_SetCatcher, UI_SPLevelMenu
Called by: UI_ConsoleCommand
=================
*/
void UI_SPLevelMenu_f(void) {

	trap_Key_SetCatcher(0x2);
	bss_db64 = 0x0;
	UI_SPLevelMenu();
}

/*
=================
UI_SPLevelMenu_ReInit

Address: 0xf314
Stack Size: 0x8
Called by: UI_SPUnlock_f
=================
*/
void UI_SPLevelMenu_ReInit(void) {

	bss_75e70 = 0x1;
}

/*
=================
UI_SPPostgameMenu_AgainEvent

Address: 0xf31a
Stack Size: 0x10
Calls: trap_Cmd_ExecuteText, UI_PopMenu
=================
*/
void UI_SPPostgameMenu_AgainEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_f321;
	goto jmp_f32b;
jmp_f321:
	UI_PopMenu();
	trap_Cmd_ExecuteText(0x2, 0x7968);
jmp_f32b:
}

/*
=================
UI_SPPostgameMenu_NextEvent

Address: 0xf32d
Stack Size: 0x30
Calls: UI_SPArena_Start, UI_GetArenaInfoByNumber, UI_GetNumSPTiers, UI_GetCurrentGame, UI_PopMenu
=================
*/
void UI_SPPostgameMenu_NextEvent(, int arg_1) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[8];
	int		local_28;
	int		local_2c;

	if (arg_1 == 0x3) goto jmp_f334;
	goto jmp_f38b;
jmp_f334:
	UI_PopMenu();
	if (bss_76874 != 0x0) goto jmp_f340;
	local_10 = 0x0;
	goto jmp_f346;
jmp_f340:
	local_10 = (bss_7686c + 0x1);
jmp_f346:
	local_14 = (local_10 / 0x4);
	*(int *)local_20 = UI_GetCurrentGame();
	local_c = *(int *)local_20;
	if (local_c != 0xffffffff) goto jmp_f35c;
	local_c = bss_7686c;
jmp_f35c:
	local_1c = (local_c / 0x4);
	if (local_14 > local_1c) goto jmp_f370;
	local_28 = UI_GetNumSPTiers();
	if (local_14 != local_28) goto jmp_f374;
jmp_f370:
	local_10 = local_c;
jmp_f374:
	local_2c = UI_GetArenaInfoByNumber(local_10);
	local_18 = local_2c;
	if (local_18 != 0x0) goto jmp_f385;
	goto jmp_f38b;
jmp_f385:
	UI_SPArena_Start(local_18);
jmp_f38b:
}

/*
=================
UI_SPPostgameMenu_MenuEvent

Address: 0xf38d
Stack Size: 0x10
Calls: trap_Cmd_ExecuteText, UI_PopMenu
=================
*/
void UI_SPPostgameMenu_MenuEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_f394;
	goto jmp_f39e;
jmp_f394:
	UI_PopMenu();
	trap_Cmd_ExecuteText(0x2, 0x794f);
jmp_f39e:
}

/*
=================
UI_SPPostgameMenu_MenuKey

Address: 0xf3a0
Stack Size: 0x18
Calls: trap_Cmd_ExecuteText, Menu_DefaultKey
=================
*/
int UI_SPPostgameMenu_MenuKey(int arg_0) {
	int		local_14;

	arg_0 = arg_0;
	if (bss_db58 >= bss_7673c) goto jmp_f3ae;
	return 0x0;
jmp_f3ae:
	if (bss_76738 != 0x1) goto jmp_f3ca;
	trap_Cmd_ExecuteText(0x2, 0x7941);
	bss_76738 = 0x2;
	bss_76740 = bss_db58;
	bss_7673c = (bss_db58 + 0xfa);
	return 0x0;
jmp_f3ca:
	if (bss_76738 != 0x2) goto jmp_f3df;
	bss_76738 = 0x3;
	bss_76740 = bss_db58;
	bss_7673c = (bss_db58 + 0xfa);
	return 0x0;
jmp_f3df:
	if (arg_0 == 0x1b) goto jmp_f3e7;
	if (arg_0 != 0xb3) goto jmp_f3eb;
jmp_f3e7:
	return 0x0;
jmp_f3eb:
	local_14 = Menu_DefaultKey(0x76510, arg_0);
	return local_14;
}

/*
=================
UI_SPPostgameMenu_DrawAwardsMedals

Address: 0xf3f9
Stack Size: 0x4c
Calls: UI_DrawString, Com_sprintf, UI_DrawNamedPic
Called by: UI_SPPostgameMenu_MenuDraw, UI_SPPostgameMenu_DrawAwardsPresentation
=================
*/
void UI_SPPostgameMenu_DrawAwardsMedals(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[16];
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;

	arg_0 = arg_0;
	local_1c = 0x0;
	goto jmp_f47f;
jmp_f403:
	local_40 = 0x2;
	local_44 = (local_1c << local_40);
	local_24 = *(int *)(local_44 + 0x25cc);
	local_28 = 0x40;
	local_20 = *(int *)(local_44 + 0x7687c);
	local_3c = *(int *)(local_44 + 0x76894);
#define next_call_arg_0 "(float)local_24"
#define next_call_arg_1 "(float)local_28"
	local_48 = 0x42400000;
#define next_call_arg_2 "local_48"
#define next_call_arg_3 "local_48"
#define next_call_arg_4 "*(int *)((local_20 << local_40) + 0x259c)"
	UI_DrawNamedPic();
	if (local_20 != 0x0) goto jmp_f454;
	Com_sprintf(local_2c, 0x10, 0x793c, local_3c);
	goto jmp_f466;
jmp_f454:
	if (local_3c != 0x1) goto jmp_f45a;
	goto jmp_f479;
jmp_f45a:
	Com_sprintf(local_2c, 0x10, 0x7939, local_3c);
jmp_f466:
	UI_DrawString((local_24 + 0x18), (local_28 + 0x34), local_2c, 0x1, 0x2170);
jmp_f479:
	local_1c = (local_1c + 0x1);
jmp_f47f:
	if (local_1c < arg_0) goto jmp_f403;
}

/*
=================
UI_SPPostgameMenu_DrawAwardsPresentation

Address: 0xf486
Stack Size: 0x4c
Calls: trap_S_StartLocalSound, trap_S_RegisterSound, UI_SPPostgameMenu_DrawAwardsMedals, UI_DrawProportionalString
Called by: UI_SPPostgameMenu_MenuDraw
=================
*/
void UI_SPPostgameMenu_DrawAwardsPresentation(int arg_0) {
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

	local_34 = arg_0;
	local_38 = 0x7d0;
	local_1c = (local_34 / local_38);
	local_30 = (local_34 %% local_38);
	local_3c = 0x3f800000;
	local_28 = local_3c;
	local_24 = local_3c;
	local_20 = local_3c;
	local_2c = ((float)(0x7d0 - local_30) / 0x44fa0000);
#define next_call_arg_0 "0x140"
#define next_call_arg_1 "0x40"
	local_40 = 0x2;
#define next_call_arg_2 "*(int *)((*(int *)((local_1c << local_40) + 0x7687c) << local_40) + 0x2584)"
#define next_call_arg_3 "0x1"
#define next_call_arg_4 "&local_20"
	UI_DrawProportionalString();
	UI_SPPostgameMenu_DrawAwardsMedals((local_1c + 0x1));
	if (*(int *)((local_1c << 0x2) + 0x768ac) != 0x0) goto jmp_f50a;
	*(int *)((local_1c << 0x2) + 0x768ac) = 0x1;
	local_44 = 0x2;
	local_48 = trap_S_RegisterSound(*(int *)((*(int *)((local_1c << local_44) + 0x7687c) << local_44) + 0x25b4), 0x0);
	trap_S_StartLocalSound(local_48, 0x7);
jmp_f50a:
}

/*
=================
UI_SPPostgameMenu_MenuDrawScoreLine

Address: 0xf50c
Stack Size: 0x468
Calls: trap_GetConfigString, va, Q_CleanStr, Q_strncpyz, Info_ValueForKey, UI_DrawString
Called by: UI_SPPostgameMenu_MenuDraw
=================
*/
void UI_SPPostgameMenu_MenuDrawScoreLine(int arg_0, int arg_1) {
	char	local_1c[64];
	int		local_5c;
	char	local_60[1024];
	int		local_460;
	int		local_464;

	arg_0 = arg_0;
	if (arg_0 <= (bss_76870 + 0x1)) goto jmp_f521;
	arg_0 = (arg_0 - (bss_76870 + 0x2));
jmp_f521:
	if (arg_0 < bss_76870) goto jmp_f528;
	goto jmp_f597;
jmp_f528:
	local_5c = *(int *)((arg_0 << 0x2) + 0x7676c);
	if ((local_5c & 0x4000) == 0x0) goto jmp_f54b;
	UI_DrawString(0x188, arg_1, 0x7933, 0x10, 0x2160);
	local_5c = (local_5c & 0xffffbfff);
jmp_f54b:
	trap_GetConfigString((*(int *)((arg_0 << 0x2) + 0x7674c) + 0x220), local_60, 0x400);
	local_460 = Info_ValueForKey(local_60, 0x7931);
	Q_strncpyz(local_1c, local_460, 0x40);
	Q_CleanStr(local_1c);
	local_464 = va(0x7922, (local_5c + 0x1), local_1c, *(int *)((arg_0 << 0x2) + 0x7678c));
	UI_DrawString(0x1b8, arg_1, local_464, 0x10, 0x2160);
jmp_f597:
}

/*
=================
UI_SPPostgameMenu_MenuDraw

Address: 0xf599
Stack Size: 0x440
Calls: trap_Cvar_VariableValue, trap_Cvar_SetValue, trap_Cmd_ExecuteText, trap_Cvar_Set, trap_S_StartLocalSound, trap_GetConfigString, UI_SPPostgameMenu_MenuDrawScoreLine, Menu_Draw, UI_SPPostgameMenu_DrawAwardsMedals, va, UI_ShowTierVideo, UI_SPPostgameMenu_DrawAwardsPresentation, UI_DrawProportionalString, UI_PopMenu, atoi, Info_ValueForKey
=================
*/
void UI_SPPostgameMenu_MenuDraw(void) {
	int		local_1c;
	int		local_20;
	char	local_24[1024];
	int		local_424;
	int		local_428;
	int		local_42c;
	int		local_430;
	int		local_434;
	int		local_438;
	int		local_43c;

	trap_GetConfigString(0x1, local_24, 0x400);
	local_428 = Info_ValueForKey(local_24, 0x7916);
	local_42c = atoi(local_428);
	local_424 = local_42c;
	if (local_424 == bss_76748) goto jmp_f5c0;
	UI_PopMenu();
	goto jmp_f71f;
jmp_f5c0:
	if (bss_76870 <= 0x2) goto jmp_f5d1;
	UI_DrawProportionalString(0x1fe, 0x185, 0x7682c, 0x1, 0x2160);
jmp_f5d1:
	UI_DrawProportionalString(0x82, 0x185, 0x767ec, 0x1, 0x2160);
	UI_DrawProportionalString(0x140, 0x16a, 0x767ac, 0x1, 0x2160);
	if (bss_76738 != 0x1) goto jmp_f616;
	local_1c = (bss_db58 - bss_76740);
	if (local_1c < 0x3e8) goto jmp_f609;
	if (bss_768c8 == 0x0) goto jmp_f609;
	trap_S_StartLocalSound(bss_768c8, 0x7);
	bss_768c8 = 0x0;
jmp_f609:
	if (local_1c >= 0x1388) goto jmp_f60f;
	goto jmp_f71f;
jmp_f60f:
	bss_76738 = 0x2;
	bss_76740 = bss_db58;
jmp_f616:
	if (bss_76738 != 0x2) goto jmp_f63d;
	local_1c = (bss_db58 - bss_76740);
	if (local_1c < (0x7d0 * bss_76878)) goto jmp_f637;
	if (local_1c >= 0x1388) goto jmp_f62e;
	goto jmp_f71f;
jmp_f62e:
	bss_76738 = 0x3;
	bss_76740 = bss_db58;
	goto jmp_f63d;
jmp_f637:
	UI_SPPostgameMenu_DrawAwardsPresentation(local_1c);
jmp_f63d:
	if (bss_76738 != 0x3) goto jmp_f6dc;
	if (bss_10808 == 0x0) goto jmp_f663;
	if (bss_76874 != 0x1) goto jmp_f6b0;
	local_430 = UI_ShowTierVideo(0x8);
	if (local_430 == 0x0) goto jmp_f6b0;
	trap_Cvar_Set(0x790e, 0x790d);
	trap_Cmd_ExecuteText(0x2, 0x78ea);
	goto jmp_f71f;
jmp_f663:
	if (bss_76874 <= 0xffffffff) goto jmp_f6b0;
	local_430 = UI_ShowTierVideo((bss_76874 + 0x1));
	if (local_430 == 0x0) goto jmp_f6b0;
	if (bss_76874 != bss_768c4) goto jmp_f689;
	trap_Cvar_Set(0x790e, 0x790d);
	trap_Cmd_ExecuteText(0x2, 0x78cb);
	goto jmp_f71f;
jmp_f689:
	trap_Cvar_SetValue(0x78bc, (float)(bss_76874 << 0x2));
	trap_Cvar_Set(0x790e, 0x78b0);
	local_434 = va(0x788e, (bss_76874 + 0x1));
	trap_Cmd_ExecuteText(0x2, local_434);
	goto jmp_f71f;
jmp_f6b0:
	local_434 = 0x7665c;
	*(int *)local_434 = (*(int *)local_434 & 0xffffbfff);
	local_438 = 0x766b4;
	*(int *)local_438 = (*(int *)local_438 & 0xffffbfff);
	local_43c = 0x7670c;
	*(int *)local_43c = (*(int *)local_43c & 0xffffbfff);
	UI_SPPostgameMenu_DrawAwardsMedals(bss_76878);
	Menu_Draw(0x76510);
jmp_f6dc:
	local_430 = trap_Cvar_VariableValue(0x787e);
	if (local_430 != 0x0) goto jmp_f6e8;
	goto jmp_f71f;
jmp_f6e8:
	local_1c = (bss_db58 - bss_76744);
	if (bss_76870 > 0x3) goto jmp_f6f8;
	local_20 = 0x0;
	goto jmp_f703;
jmp_f6f8:
	local_20 = ((local_1c / 0x5dc) %% (bss_76870 + 0x2));
jmp_f703:
	UI_SPPostgameMenu_MenuDrawScoreLine(local_20, 0x0);
	UI_SPPostgameMenu_MenuDrawScoreLine((local_20 + 0x1), 0x10);
	UI_SPPostgameMenu_MenuDrawScoreLine((local_20 + 0x2), 0x20);
jmp_f71f:
}

/*
=================
UI_SPPostgameMenu_Cache

Address: 0xf721
Stack Size: 0x1c
Calls: trap_S_RegisterSound, trap_R_RegisterShaderNoMip, trap_Cvar_VariableValue
Called by: UI_SPPostgameMenu_Init, UI_Cache_f
=================
*/
void UI_SPPostgameMenu_Cache(void) {
	int		local_10;
	int		local_14;
	int		local_18;

	local_18 = trap_Cvar_VariableValue(0x786e);
	local_14 = (int)local_18;
	trap_R_RegisterShaderNoMip(0x785e);
	trap_R_RegisterShaderNoMip(0x784e);
	trap_R_RegisterShaderNoMip(0x783c);
	trap_R_RegisterShaderNoMip(0x782a);
	trap_R_RegisterShaderNoMip(0x781a);
	trap_R_RegisterShaderNoMip(0x780a);
	local_10 = 0x0;
jmp_f74e:
	trap_R_RegisterShaderNoMip(*(int *)((local_10 << 0x2) + 0x259c));
	trap_S_RegisterSound(*(int *)((local_10 << 0x2) + 0x25b4), 0x0);
	local_10 = (local_10 + 0x1);
	if (local_10 < 0x6) goto jmp_f74e;
	if (local_14 == 0x0) goto jmp_f789;
	trap_S_RegisterSound(0x77fb, 0x0);
	trap_S_RegisterSound(0x77ed, 0x0);
	trap_S_RegisterSound(0x77cc, 0x0);
jmp_f789:
}

/*
=================
UI_SPPostgameMenu_Init

Address: 0xf78b
Stack Size: 0x10
Calls: Menu_AddItem, UI_SPPostgameMenu_Cache
Called by: UI_SPPostgameMenu_f
=================
*/
void UI_SPPostgameMenu_Init(void) {

	bss_76624 = 0x1;
	bss_76620 = 0xf3a0;
	bss_7661c = 0xf599;
	bss_7673c = (bss_db58 + 0x5dc);
	UI_SPPostgameMenu_Cache();
	bss_766e0 = 0x6;
	bss_766e4 = 0x785e;
	bss_7670c = 0x4104;
	bss_766ec = 0x0;
	bss_766f0 = 0x1a0;
	bss_76710 = 0xf38d;
	bss_766e8 = 0xc;
	bss_7672c = 0x80;
	bss_76730 = 0x40;
	bss_7671c = 0x784e;
	bss_76630 = 0x6;
	bss_76634 = 0x783c;
	bss_7665c = 0x4108;
	bss_7663c = 0x140;
	bss_76640 = 0x1a0;
	bss_76660 = 0xf31a;
	bss_76638 = 0xa;
	bss_7667c = 0x80;
	bss_76680 = 0x40;
	bss_7666c = 0x782a;
	bss_76688 = 0x6;
	bss_7668c = 0x781a;
	bss_766b4 = 0x4110;
	bss_76694 = 0x280;
	bss_76698 = 0x1a0;
	bss_766b8 = 0xf32d;
	bss_76690 = 0xb;
	bss_766d4 = 0x80;
	bss_766d8 = 0x40;
	bss_766c4 = 0x780a;
	Menu_AddItem(0x76510, 0x766e0);
	Menu_AddItem(0x76510, 0x76630);
	Menu_AddItem(0x76510, 0x76688);
}

/*
=================
Prepname

Address: 0xf80f
Stack Size: 0x464
Calls: trap_GetConfigString, UI_ProportionalStringWidth, strlen, Q_CleanStr, Q_strncpyz, Info_ValueForKey
Called by: UI_SPPostgameMenu_f
=================
*/
void Prepname(int arg_0) {
	int		local_14;
	char	local_18[64];
	char	local_58[1024];
	int		local_458;
	int		local_45c;
	int		local_460;

	arg_0 = arg_0;
	trap_GetConfigString((*(int *)((arg_0 << 0x2) + 0x7674c) + 0x220), local_58, 0x400);
	local_458 = Info_ValueForKey(local_58, 0x7931);
	Q_strncpyz(local_18, local_458, 0x40);
	Q_CleanStr(local_18);
	local_45c = strlen(local_18);
	local_14 = local_45c;
	goto jmp_f854;
jmp_f848:
	local_14 = (local_14 - 0x1);
	*(char *)(local_14 + local_18) = 0x0;
jmp_f854:
	if (local_14 == 0x0) goto jmp_f862;
	local_460 = UI_ProportionalStringWidth(local_18);
	if (local_460 > 0x100) goto jmp_f848;
jmp_f862:
	Q_strncpyz(((arg_0 << 0x6) + 0x767ac), local_18, 0x40);
}

/*
=================
UI_SPPostgameMenu_f

Address: 0xf872
Stack Size: 0x4f4
Calls: trap_Cmd_ExecuteText, trap_S_RegisterSound, trap_Key_SetCatcher, trap_GetConfigString, memset, UI_GetSpecialArenaInfo, UI_GetNumSPTiers, va, Prepname, Menu_SetCursorToItem, UI_PushMenu, UI_SPPostgameMenu_Init, UI_TierCompleted, UI_GetAwardLevel, UI_LogAwardData, UI_SetBestScore, UI_Argv, UI_GetArenaInfoByMap, Q_strncpyz, atoi, Info_ValueForKey
Called by: UI_ConsoleCommand
=================
*/
void UI_SPPostgameMenu_f(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[1024];
	int		local_438;
	char	local_43c[64];
	int		local_47c;
	int		local_480;
	int		local_484;
	int		local_488;
	int		local_48c;
	int		local_490;
	int		local_494;
	int		local_498;
	int		local_49c;
	int		local_4a0;
	int		local_4a4;
	int		local_4a8;
	int		local_4ac;
	int		local_4b0;
	int		local_4b4;
	int		local_4b8;
	int		local_4bc;
	int		local_4c0;
	int		local_4c4;
	int		local_4c8;
	int		local_4cc;
	int		local_4d0;
	int		local_4d4;
	int		local_4d8;
	int		local_4dc;
	int		local_4e0;
	int		local_4e4;
	int		local_4e8;
	int		local_4ec;
	int		local_4f0;

	memset(0x76510, 0x0, 0x3bc);
	trap_GetConfigString(0x1, local_38, 0x400);
	local_484 = Info_ValueForKey(local_38, 0x7916);
	local_488 = atoi(local_484);
	bss_76748 = local_488;
	trap_GetConfigString(0x0, local_38, 0x400);
	local_48c = Info_ValueForKey(local_38, 0x77c4);
	Q_strncpyz(local_43c, local_48c, 0x40);
	local_490 = UI_GetArenaInfoByMap(local_43c);
	local_438 = local_490;
	if (local_438 != 0x0) goto jmp_f8c3;
	goto jmp_fbbc;
jmp_f8c3:
	Q_strncpyz(0x76110, local_438, 0x400);
	local_494 = Info_ValueForKey(0x76110, 0x77c0);
	local_498 = atoi(local_494);
	bss_7686c = local_498;
	local_49c = UI_Argv(0x1);
	local_4a0 = atoi(local_49c);
	bss_76870 = local_4a0;
	local_4a4 = UI_Argv(0x2);
	local_4a8 = atoi(local_4a4);
	local_30 = local_4a8;
	local_4ac = 0x8;
	local_34 = local_4ac;
	if (bss_76870 <= local_4ac) goto jmp_f911;
	bss_76870 = 0x8;
jmp_f911:
	local_14 = 0x0;
	goto jmp_f994;
jmp_f916:
	local_4b4 = UI_Argv((((0x3 * local_14) + 0x8) + 0x1));
	local_4b8 = atoi(local_4b4);
	*(int *)((local_14 << 0x2) + 0x7674c) = local_4b8;
	local_4c0 = 0x2;
	local_4c4 = UI_Argv((((0x3 * local_14) + 0x8) + local_4c0));
	local_4c8 = atoi(local_4c4);
	*(int *)((local_14 << local_4c0) + 0x7676c) = local_4c8;
	local_4cc = 0x3;
	local_4d4 = UI_Argv((((local_4cc * local_14) + 0x8) + local_4cc));
	local_4d8 = atoi(local_4d4);
	*(int *)((local_14 << 0x2) + 0x7678c) = local_4d8;
	if (*(int *)((local_14 << 0x2) + 0x7674c) != local_30) goto jmp_f98e;
	local_34 = ((*(int *)((local_14 << 0x2) + 0x7676c) & 0xffffbfff) + 0x1);
jmp_f98e:
	local_14 = (local_14 + 0x1);
jmp_f994:
	if (local_14 < bss_76870) goto jmp_f916;
	UI_SetBestScore(bss_7686c, local_34);
	local_4b0 = UI_Argv(0x3);
	local_4b4 = atoi(local_4b0);
	local_18 = local_4b4;
	local_4b8 = UI_Argv(0x4);
	local_4bc = atoi(local_4b8);
	local_1c = local_4bc;
	local_4c0 = UI_Argv(0x5);
	local_4c4 = atoi(local_4c0);
	local_20 = local_4c4;
	local_4c8 = UI_Argv(0x6);
	local_4cc = atoi(local_4c8);
	local_24 = local_4cc;
	local_4d0 = UI_Argv(0x7);
	local_4d4 = atoi(local_4d0);
	local_28 = local_4d4;
	local_4d8 = UI_Argv(0x8);
	local_4dc = atoi(local_4d8);
	local_2c = local_4dc;
	bss_76878 = 0x0;
	if (local_18 < 0x32) goto jmp_fa32;
	UI_LogAwardData(0x0, 0x1);
	*(int *)((bss_76878 << 0x2) + 0x7687c) = 0x0;
	*(int *)((bss_76878 << 0x2) + 0x76894) = local_18;
	local_4e0 = 0x76878;
	*(int *)local_4e0 = (*(int *)local_4e0 + 0x1);
jmp_fa32:
	if (local_1c == 0x0) goto jmp_fa5a;
	UI_LogAwardData(0x1, local_1c);
	*(int *)((bss_76878 << 0x2) + 0x7687c) = 0x1;
	*(int *)((bss_76878 << 0x2) + 0x76894) = local_1c;
	local_4e0 = 0x76878;
	*(int *)local_4e0 = (*(int *)local_4e0 + 0x1);
jmp_fa5a:
	if (local_20 == 0x0) goto jmp_fa87;
	UI_LogAwardData(0x2, local_20);
	local_4e0 = 0x2;
	*(int *)((bss_76878 << local_4e0) + 0x7687c) = local_4e0;
	*(int *)((bss_76878 << 0x2) + 0x76894) = local_20;
	local_4e4 = 0x76878;
	*(int *)local_4e4 = (*(int *)local_4e4 + 0x1);
jmp_fa87:
	if (local_24 == 0x0) goto jmp_faaf;
	UI_LogAwardData(0x3, local_24);
	*(int *)((bss_76878 << 0x2) + 0x7687c) = 0x3;
	*(int *)((bss_76878 << 0x2) + 0x76894) = local_24;
	local_4e0 = 0x76878;
	*(int *)local_4e0 = (*(int *)local_4e0 + 0x1);
jmp_faaf:
	local_4e0 = UI_GetAwardLevel(0x4);
	local_480 = (local_4e0 / 0x64);
	UI_LogAwardData(0x4, local_28);
	local_4e4 = UI_GetAwardLevel(0x4);
	local_47c = (local_4e4 / 0x64);
	if (local_47c <= local_480) goto jmp_faf2;
	*(int *)((bss_76878 << 0x2) + 0x7687c) = 0x4;
	*(int *)((bss_76878 << 0x2) + 0x76894) = (0x64 * local_47c);
	local_4e8 = 0x76878;
	*(int *)local_4e8 = (*(int *)local_4e8 + 0x1);
jmp_faf2:
	if (local_2c == 0x0) goto jmp_fb18;
	UI_LogAwardData(0x5, 0x1);
	*(int *)((bss_76878 << 0x2) + 0x7687c) = 0x5;
	*(int *)((bss_76878 << 0x2) + 0x76894) = 0x1;
	local_4e8 = 0x76878;
	*(int *)local_4e8 = (*(int *)local_4e8 + 0x1);
jmp_fb18:
	if (local_34 != 0x1) goto jmp_fb29;
	local_4e8 = UI_TierCompleted(bss_7686c);
	bss_76874 = local_4e8;
	goto jmp_fb2c;
jmp_fb29:
	bss_76874 = 0xffffffff;
jmp_fb2c:
	bss_76740 = bss_db58;
	bss_76744 = bss_db58;
	trap_Key_SetCatcher(0x2);
	bss_db64 = 0x0;
	UI_SPPostgameMenu_Init();
	UI_PushMenu(0x76510);
	if (local_34 != 0x1) goto jmp_fb51;
	Menu_SetCursorToItem(0x76510, 0x76688);
	goto jmp_fb58;
jmp_fb51:
	Menu_SetCursorToItem(0x76510, 0x76630);
jmp_fb58:
	Prepname(0x0);
	Prepname(0x1);
	Prepname(0x2);
	if (local_34 == 0x1) goto jmp_fb89;
	local_4e8 = va(0x779e, 0x767ac);
	local_4ec = trap_S_RegisterSound(local_4e8, 0x0);
	bss_768c8 = local_4ec;
	trap_Cmd_ExecuteText(0x2, 0x778c);
	goto jmp_fb9c;
jmp_fb89:
	local_4e8 = trap_S_RegisterSound(0x77cc, 0x0);
	bss_768c8 = local_4e8;
	trap_Cmd_ExecuteText(0x2, 0x777b);
jmp_fb9c:
	bss_76738 = 0x1;
	local_4e8 = UI_GetNumSPTiers();
	bss_768c4 = local_4e8;
	local_4ec = UI_GetSpecialArenaInfo(0x7775);
	if (local_4ec == 0x0) goto jmp_fbbc;
	local_4f0 = 0x768c4;
	*(int *)local_4f0 = (*(int *)local_4f0 + 0x1);
jmp_fbbc:
}

/*
=================
SetSkillColor

Address: 0xfbbe
Stack Size: 0xc
Called by: UI_SPSkillMenu_Init, UI_SPSkillMenu_SkillEvent
=================
*/
void SetSkillColor(int arg_0, int arg_1) {
	int		local_8;

	local_8 = arg_0;
	if (local_8 < 0x1) goto jmp_fbef;
	if (local_8 > 0x5) goto jmp_fbef;
	goto *(int *)((local_8 << 0x2) + 0x25e0);
	bss_76ad0 = arg_1;
	goto jmp_fbef;
	bss_76b18 = arg_1;
	goto jmp_fbef;
	bss_76b60 = arg_1;
	goto jmp_fbef;
	bss_76ba8 = arg_1;
	goto jmp_fbef;
	bss_76bf0 = arg_1;
jmp_fbef:
}

/*
=================
UI_SPSkillMenu_SkillEvent

Address: 0xfbf1
Stack Size: 0x1c
Calls: trap_S_StartLocalSound, trap_Cvar_SetValue, trap_Cvar_VariableValue, SetSkillColor
=================
*/
void UI_SPSkillMenu_SkillEvent(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;
	int		local_18;

	if (arg_1 == 0x3) goto jmp_fbf8;
	goto jmp_fc46;
jmp_fbf8:
	local_18 = trap_Cvar_VariableValue(0x7c46);
	SetSkillColor((int)local_18, 0x21b0);
	local_14 = *(int *)(arg_0 + 0x8);
	local_10 = ((local_14 - 0xa) + 0x1);
	trap_Cvar_SetValue(0x7c46, (float)local_10);
	SetSkillColor(local_10, 0x2160);
	bss_76c38 = *(int *)((local_10 << 0x2) + 0x76cfc);
	if (local_14 != 0xe) goto jmp_fc3e;
	trap_S_StartLocalSound(bss_76d14, 0x7);
	goto jmp_fc46;
jmp_fc3e:
	trap_S_StartLocalSound(bss_76d18, 0x7);
jmp_fc46:
}

/*
=================
UI_SPSkillMenu_FightEvent

Address: 0xfc48
Stack Size: 0xc
Calls: UI_SPArena_Start
=================
*/
void UI_SPSkillMenu_FightEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_fc4f;
	goto jmp_fc55;
jmp_fc4f:
	UI_SPArena_Start(bss_76cfc);
jmp_fc55:
}

/*
=================
UI_SPSkillMenu_BackEvent

Address: 0xfc57
Stack Size: 0x10
Calls: trap_S_StartLocalSound, UI_PopMenu
=================
*/
void UI_SPSkillMenu_BackEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_fc5e;
	goto jmp_fc69;
jmp_fc5e:
	trap_S_StartLocalSound(bss_76d18, 0x7);
	UI_PopMenu();
jmp_fc69:
}

/*
=================
UI_SPSkillMenu_Key

Address: 0xfc6b
Stack Size: 0x18
Calls: trap_S_StartLocalSound, Menu_DefaultKey
=================
*/
int UI_SPSkillMenu_Key(int arg_0) {
	int		local_14;

	arg_0 = arg_0;
	if (arg_0 == 0xb3) goto jmp_fc78;
	if (arg_0 != 0x1b) goto jmp_fc80;
jmp_fc78:
	trap_S_StartLocalSound(bss_76d18, 0x7);
jmp_fc80:
	local_14 = Menu_DefaultKey(0x768cc, arg_0);
	return local_14;
}

/*
=================
UI_SPSkillMenu_Cache

Address: 0xfc8e
Stack Size: 0x2c
Calls: trap_S_RegisterSound, trap_R_RegisterShaderNoMip
Called by: UI_SPSkillMenu_Init, UI_Cache_f
=================
*/
void UI_SPSkillMenu_Cache(void) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	trap_R_RegisterShaderNoMip(0x7c33);
	trap_R_RegisterShaderNoMip(0x7c1f);
	trap_R_RegisterShaderNoMip(0x7c0b);
	trap_R_RegisterShaderNoMip(0x7bfa);
	trap_R_RegisterShaderNoMip(0x7be9);
	local_10 = trap_R_RegisterShaderNoMip(0x7bd0);
	bss_76d00 = local_10;
	local_14 = trap_R_RegisterShaderNoMip(0x7bb7);
	bss_76d04 = local_14;
	local_18 = trap_R_RegisterShaderNoMip(0x7b9e);
	bss_76d08 = local_18;
	local_1c = trap_R_RegisterShaderNoMip(0x7b85);
	bss_76d0c = local_1c;
	local_20 = trap_R_RegisterShaderNoMip(0x7b6c);
	bss_76d10 = local_20;
	local_24 = trap_S_RegisterSound(0x7b53, 0x0);
	bss_76d14 = local_24;
	local_28 = trap_S_RegisterSound(0x7b3c, 0x0);
	bss_76d18 = local_28;
}

/*
=================
UI_SPSkillMenu_Init

Address: 0xfcf4
Stack Size: 0x20
Calls: trap_S_StartLocalSound, trap_Cvar_VariableValue, memset, SetSkillColor, Com_Clamp, Menu_AddItem, UI_SPSkillMenu_Cache
Called by: UI_SPSkillMenu
=================
*/
void UI_SPSkillMenu_Init(void) {
	int		local_14;
	int		local_18;
	int		local_1c;

	memset(0x768cc, 0x0, 0x450);
	bss_769e4 = 0x1;
	bss_769dc = 0xfc6b;
	UI_SPSkillMenu_Cache();
	bss_769ec = 0x6;
	bss_769f0 = 0x7c33;
	bss_76a18 = 0x4004;
	bss_769f8 = 0x8e;
	bss_769fc = 0x76;
	bss_76a38 = 0x167;
	bss_76a3c = 0x100;
	bss_76a44 = 0xa;
	bss_76a70 = 0x8;
	bss_76a50 = 0x140;
	bss_76a54 = 0x10;
	bss_76a80 = 0x7b31;
	bss_76a88 = 0x2160;
	bss_76a84 = 0x1;
	bss_76a8c = 0x9;
	bss_76ab8 = 0x108;
	bss_76a98 = 0x140;
	bss_76a9c = 0xaa;
	bss_76abc = 0xfbf1;
	bss_76a94 = 0xa;
	bss_76ac8 = 0x7b27;
	bss_76ad0 = 0x21b0;
	bss_76acc = 0x1;
	bss_76ad4 = 0x9;
	bss_76b00 = 0x108;
	bss_76ae0 = 0x140;
	bss_76ae4 = 0xc6;
	bss_76b04 = 0xfbf1;
	bss_76adc = 0xb;
	bss_76b10 = 0x7b1b;
	bss_76b18 = 0x21b0;
	bss_76b14 = 0x1;
	bss_76b1c = 0x9;
	bss_76b48 = 0x108;
	bss_76b28 = 0x140;
	bss_76b2c = 0xe3;
	bss_76b4c = 0xfbf1;
	bss_76b24 = 0xc;
	bss_76b58 = 0x7b0c;
	bss_76b60 = 0x21b0;
	bss_76b5c = 0x1;
	bss_76b64 = 0x9;
	bss_76b90 = 0x108;
	bss_76b70 = 0x140;
	bss_76b74 = 0xff;
	bss_76b94 = 0xfbf1;
	bss_76b6c = 0xd;
	bss_76ba0 = 0x7b03;
	bss_76ba8 = 0x21b0;
	bss_76ba4 = 0x1;
	bss_76bac = 0x9;
	bss_76bd8 = 0x108;
	bss_76bb8 = 0x140;
	bss_76bbc = 0x11b;
	bss_76bdc = 0xfbf1;
	bss_76bb4 = 0xe;
	bss_76be8 = 0x7af8;
	bss_76bf0 = 0x21b0;
	bss_76bec = 0x1;
	bss_76c4c = 0x6;
	bss_76c50 = 0x7c1f;
	bss_76c78 = 0x104;
	bss_76c58 = 0x0;
	bss_76c5c = 0x1a0;
	bss_76c7c = 0xfc57;
	bss_76c54 = 0xf;
	bss_76c98 = 0x80;
	bss_76c9c = 0x40;
	bss_76c88 = 0x7c0b;
	bss_76bf4 = 0x6;
	bss_76c20 = 0x4004;
	bss_76c00 = 0x100;
	bss_76c04 = 0x170;
	bss_76c40 = 0x80;
	bss_76c44 = 0x60;
	bss_76ca4 = 0x6;
	bss_76ca8 = 0x7bfa;
	bss_76cd0 = 0x110;
	bss_76cd4 = 0xfc48;
	bss_76cac = 0x10;
	bss_76cb0 = 0x280;
	bss_76cb4 = 0x1a0;
	bss_76cf0 = 0x80;
	bss_76cf4 = 0x40;
	bss_76ce0 = 0x7be9;
	Menu_AddItem(0x768cc, 0x769ec);
	Menu_AddItem(0x768cc, 0x76a44);
	Menu_AddItem(0x768cc, 0x76a8c);
	Menu_AddItem(0x768cc, 0x76ad4);
	Menu_AddItem(0x768cc, 0x76b1c);
	Menu_AddItem(0x768cc, 0x76b64);
	Menu_AddItem(0x768cc, 0x76bac);
	Menu_AddItem(0x768cc, 0x76bf4);
	Menu_AddItem(0x768cc, 0x76c4c);
	Menu_AddItem(0x768cc, 0x76ca4);
	local_18 = trap_Cvar_VariableValue(0x7c46);
	local_1c = Com_Clamp(0x3f800000, 0x40a00000, local_18);
	local_14 = (int)local_1c;
	SetSkillColor(local_14, 0x2160);
	bss_76c38 = *(int *)((local_14 << 0x2) + 0x76cfc);
	if (local_14 != 0x5) goto jmp_fe7f;
	trap_S_StartLocalSound(bss_76d14, 0x7);
jmp_fe7f:
}

/*
=================
UI_SPSkillMenu

Address: 0xfe81
Stack Size: 0x10
Calls: Menu_SetCursorToItem, UI_PushMenu, UI_SPSkillMenu_Init
Called by: UI_SPLevelMenu_NextEvent
=================
*/
void UI_SPSkillMenu(int arg_0) {

	UI_SPSkillMenu_Init();
	bss_76cfc = arg_0;
	UI_PushMenu(0x768cc);
	Menu_SetCursorToItem(0x768cc, 0x76ca4);
}

/*
=================
GametypeBits

Address: 0xfe97
Stack Size: 0x34
Calls: Q_stricmp, COM_ParseExt
Called by: StartServer_GametypeEvent
=================
*/
int GametypeBits(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;

	local_14 = 0x0;
	local_18 = arg_0;
	goto jmp_ff1c;
jmp_fea1:
	local_1c = COM_ParseExt(&local_18, 0x0);
	local_10 = local_1c;
	if ((char)*(char *)local_10 != 0x0) goto jmp_feb5;
	goto jmp_ff1e;
jmp_feb5:
	local_20 = Q_stricmp(local_10, 0x8111);
	if (local_20 != 0x0) goto jmp_feca;
	local_14 = (local_14 | 0x1);
	goto jmp_ff1c;
jmp_feca:
	local_24 = Q_stricmp(local_10, 0x8109);
	if (local_24 != 0x0) goto jmp_fedf;
	local_14 = (local_14 | 0x2);
	goto jmp_ff1c;
jmp_fedf:
	local_28 = Q_stricmp(local_10, 0x8102);
	if (local_28 != 0x0) goto jmp_fef4;
	local_14 = (local_14 | 0x4);
	goto jmp_ff1c;
jmp_fef4:
	local_2c = Q_stricmp(local_10, 0x80fd);
	if (local_2c != 0x0) goto jmp_ff09;
	local_14 = (local_14 | 0x8);
	goto jmp_ff1c;
jmp_ff09:
	local_30 = Q_stricmp(local_10, 0x80f9);
	if (local_30 != 0x0) goto jmp_ff1c;
	local_14 = (local_14 | 0x10);
jmp_ff1c:
	goto jmp_fea1;
jmp_ff1e:
	return local_14;
}

/*
=================
StartServer_Update

Address: 0xff23
Stack Size: 0x4c
Calls: strcpy, Com_sprintf, Q_strupr, Q_strncpyz, Info_ValueForKey, UI_GetArenaInfoByNumber
Called by: StartServer_MenuEvent, StartServer_GametypeEvent, StartServer_MapEvent
=================
*/
void StartServer_Update(void) {
	int		local_18;
	char	local_1c[16];
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;
	int		local_48;

	local_2c = (bss_7b580 << 0x2);
	local_18 = 0x0;
jmp_ff2d:
	if ((local_2c + local_18) < bss_7b57c) goto jmp_ff37;
	goto jmp_10009;
jmp_ff37:
	local_34 = UI_GetArenaInfoByNumber(*(int *)(((local_2c + local_18) << 0x2) + 0x7b588));
	local_30 = local_34;
	local_38 = Info_ValueForKey(local_30, 0x80f5);
	Q_strncpyz(local_1c, local_38, 0x10);
	Q_strupr(local_1c);
	Com_sprintf(((local_18 << 0x6) + 0x76d1c), 0x40, 0x80e7, local_1c);
	local_3c = ((0x58 * local_18) + 0x7b088);
	*(int *)local_3c = (*(int *)local_3c & 0xffffffbf);
	*(int *)((0x58 * local_18) + 0x7b060) = ((local_18 << 0x6) + 0x76d1c);
	*(int *)((0x58 * local_18) + 0x7b0a0) = 0x0;
	local_44 = ((0x58 * local_18) + 0x7b1e8);
	*(int *)local_44 = (*(int *)local_44 | 0x100);
	local_48 = ((0x58 * local_18) + 0x7b1e8);
	*(int *)local_48 = (*(int *)local_48 & 0xffffbfff);
	local_18 = (local_18 + 0x1);
	if (local_18 < 0x4) goto jmp_ff2d;
	goto jmp_10009;
jmp_ffc3:
	local_34 = ((0x58 * local_18) + 0x7b088);
	*(int *)local_34 = (*(int *)local_34 & 0xffffffbf);
	*(int *)((0x58 * local_18) + 0x7b060) = 0x0;
	*(int *)((0x58 * local_18) + 0x7b0a0) = 0x0;
	local_38 = ((0x58 * local_18) + 0x7b1e8);
	*(int *)local_38 = (*(int *)local_38 & 0xfffffeff);
	local_3c = ((0x58 * local_18) + 0x7b1e8);
	*(int *)local_3c = (*(int *)local_3c | 0x4000);
	local_18 = (local_18 + 0x1);
jmp_10009:
	if (local_18 < 0x4) goto jmp_ffc3;
	if (bss_7b57c != 0x0) goto jmp_10026;
	local_34 = 0x7b4a8;
	*(int *)local_34 = (*(int *)local_34 | 0x4000);
	strcpy(bss_7b510, 0x80d9);
	goto jmp_10084;
jmp_10026:
	local_34 = 0x7b4a8;
	*(int *)local_34 = (*(int *)local_34 & 0xffffbfff);
	local_18 = (bss_7b578 - local_2c);
	if (local_18 < 0x0) goto jmp_10060;
	if (local_18 >= 0x4) goto jmp_10060;
	local_3c = ((0x58 * local_18) + 0x7b088);
	*(int *)local_3c = (*(int *)local_3c | 0x40);
	local_40 = ((0x58 * local_18) + 0x7b1e8);
	*(int *)local_40 = (*(int *)local_40 & 0xfffffeff);
jmp_10060:
	local_3c = UI_GetArenaInfoByNumber(*(int *)((bss_7b578 << 0x2) + 0x7b588));
	local_30 = local_3c;
	local_40 = Info_ValueForKey(local_30, 0x80f5);
	Q_strncpyz(bss_7b510, local_40, 0x10);
jmp_10084:
	Q_strupr(bss_7b510);
}

/*
=================
StartServer_MapEvent

Address: 0x1008c
Stack Size: 0x8
Calls: StartServer_Update
=================
*/
void StartServer_MapEvent(int arg_0, int arg_1) {

	if (arg_1 == 0x3) goto jmp_10093;
	goto jmp_100a4;
jmp_10093:
	bss_7b578 = ((bss_7b580 << 0x2) + (*(int *)(arg_0 + 0x8) - 0xb));
	StartServer_Update();
jmp_100a4:
}

/*
=================
StartServer_GametypeEvent

Address: 0x100a6
Stack Size: 0x40
Calls: StartServer_Update, GametypeBits, Info_ValueForKey, UI_GetArenaInfoByNumber, UI_GetNumArenas
Called by: StartServer_MenuInit
=================
*/
void StartServer_GametypeEvent(, int arg_1) {
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

	if (arg_1 == 0x3) goto jmp_100ad;
	goto jmp_10140;
jmp_100ad:
	local_24 = UI_GetNumArenas();
	local_20 = local_24;
	bss_7b57c = 0x0;
	local_28 = 0x2;
	local_2c = 0x260c;
	local_1c = (0x1 << *(int *)((bss_7b03c << local_28) + local_2c));
	if (*(int *)((bss_7b03c << local_28) + local_2c) != 0x0) goto jmp_100dc;
	local_1c = (local_1c | 0x4);
jmp_100dc:
	local_10 = 0x0;
	goto jmp_10123;
jmp_100e1:
	local_30 = UI_GetArenaInfoByNumber(local_10);
	local_18 = local_30;
	local_34 = Info_ValueForKey(local_18, 0x80d4);
	local_38 = GametypeBits(local_34);
	local_14 = local_38;
	if ((local_14 & local_1c) != 0x0) goto jmp_10109;
	goto jmp_1011d;
jmp_10109:
	*(int *)((bss_7b57c << 0x2) + 0x7b588) = local_10;
	local_3c = 0x7b57c;
	*(int *)local_3c = (*(int *)local_3c + 0x1);
jmp_1011d:
	local_10 = (local_10 + 0x1);
jmp_10123:
	if (local_10 < local_20) goto jmp_100e1;
	local_30 = 0x4;
	bss_7b584 = (((bss_7b57c + local_30) - 0x1) / local_30);
	bss_7b580 = 0x0;
	bss_7b578 = 0x0;
	StartServer_Update();
jmp_10140:
}

/*
=================
StartServer_MenuEvent

Address: 0x10142
Stack Size: 0x1c
Calls: trap_Cvar_SetValue, UI_PopMenu, UI_ServerOptionsMenu, StartServer_Update
=================
*/
void StartServer_MenuEvent(int arg_0, int arg_1) {
	char	local_10[8];
	int		local_18;

	if (arg_1 == 0x3) goto jmp_10149;
	goto jmp_101a4;
jmp_10149:
	*(int *)local_10 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_10 < 0xf) goto jmp_101a4;
	if (*(int *)local_10 > 0x12) goto jmp_101a4;
	goto *(int *)((*(int *)local_10 << 0x2) + 0x25f4);
	if (bss_7b580 <= 0x0) goto jmp_101a4;
	local_18 = 0x7b580;
	*(int *)local_18 = (*(int *)local_18 - 0x1);
	StartServer_Update();
	goto jmp_101a4;
	if (bss_7b580 >= (bss_7b584 - 0x1)) goto jmp_101a4;
	local_18 = 0x7b580;
	*(int *)local_18 = (*(int *)local_18 + 0x1);
	StartServer_Update();
	goto jmp_101a4;
	trap_Cvar_SetValue(0x80c9, (float)*(int *)((bss_7b03c << 0x2) + 0x260c));
	UI_ServerOptionsMenu(bss_7b574);
	goto jmp_101a4;
	UI_PopMenu();
jmp_101a4:
}

/*
=================
StartServer_LevelshotDraw

Address: 0x101a6
Stack Size: 0x6c
Calls: trap_R_RegisterShaderNoMip, UI_DrawString, Q_strupr, Q_strncpyz, Info_ValueForKey, UI_GetArenaInfoByNumber, UI_FillRect, UI_DrawHandlePic
=================
*/
void StartServer_LevelshotDraw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	char	local_30[16];
	int		local_40;
	char	local_44[12];
	int		local_50;
	char	local_54[8];
	int		local_5c;
	int		local_60;
	char	local_64[8];

	local_1c = arg_0;
	if (*(int *)(local_1c + 0x4) != 0x0) goto jmp_101b4;
	goto jmp_10314;
jmp_101b4:
	if (*(int *)(local_1c + 0x4) == 0x0) goto jmp_101f2;
	if (*(int *)(local_1c + 0x44) != 0x0) goto jmp_101f2;
	local_50 = trap_R_RegisterShaderNoMip(*(int *)(local_1c + 0x4));
	*(int *)(local_1c + 0x44) = local_50;
	if (*(int *)(local_1c + 0x44) != 0x0) goto jmp_101f2;
	if (*(int *)(local_1c + 0x40) == 0x0) goto jmp_101f2;
	local_5c = trap_R_RegisterShaderNoMip(*(int *)(local_1c + 0x40));
	*(int *)(local_1c + 0x44) = local_5c;
jmp_101f2:
	if (*(int *)(local_1c + 0x3c) == 0x0) goto jmp_10211;
	if (*(int *)(local_1c + 0x48) != 0x0) goto jmp_10211;
	*(int *)local_54 = trap_R_RegisterShaderNoMip(*(int *)(local_1c + 0x3c));
	*(int *)(local_1c + 0x48) = *(int *)local_54;
jmp_10211:
	local_20 = *(int *)(local_1c + 0xc);
	local_24 = *(int *)(local_1c + 0x10);
	local_28 = *(int *)(local_1c + 0x4c);
	local_2c = *(int *)(local_1c + 0x50);
	if (*(int *)(local_1c + 0x44) == 0x0) goto jmp_1024d;
	UI_DrawHandlePic((float)local_20, (float)local_24, (float)local_28, (float)local_2c, *(int *)(local_1c + 0x44));
jmp_1024d:
	local_20 = *(int *)(local_1c + 0xc);
	local_24 = (*(int *)(local_1c + 0x10) + *(int *)(local_1c + 0x50));
	UI_FillRect((float)local_20, (float)local_24, (float)*(int *)(local_1c + 0x4c), 0x41e00000, 0x29b8);
	local_5c = 0x2;
	local_20 = (local_20 + (*(int *)(local_1c + 0x4c) / local_5c));
	local_24 = (local_24 + 0x4);
	local_40 = (((bss_7b580 << local_5c) + *(int *)(local_1c + 0x8)) - 0xb);
	local_60 = UI_GetArenaInfoByNumber(*(int *)((local_40 << local_5c) + 0x7b588));
	*(int *)local_44 = local_60;
	*(int *)local_64 = Info_ValueForKey(*(int *)local_44, 0x80f5);
	Q_strncpyz(local_30, *(int *)local_64, 0x10);
	Q_strupr(local_30);
	UI_DrawString(local_20, local_24, local_30, 0x11, 0x21a0);
	local_20 = *(int *)(local_1c + 0xc);
	local_24 = *(int *)(local_1c + 0x10);
	local_28 = *(int *)(local_1c + 0x4c);
	local_2c = (*(int *)(local_1c + 0x50) + 0x1c);
	if ((*(int *)(local_1c + 0x2c) & 0x40) == 0x0) goto jmp_10314;
	UI_DrawHandlePic((float)local_20, (float)local_24, (float)local_28, (float)local_2c, *(int *)(local_1c + 0x48));
jmp_10314:
}

/*
=================
StartServer_MenuInit

Address: 0x10316
Stack Size: 0x34
Calls: memset, StartServer_GametypeEvent, Menu_AddItem, StartServer_Cache
Called by: UI_StartServerMenu
=================
*/
void StartServer_MenuInit(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[8];
	char	local_28[12];

	memset(0x7ade4, 0x0, 0x17a4);
	StartServer_Cache();
	bss_7aef8 = 0x1;
	bss_7aefc = 0x1;
	bss_7af04 = 0xa;
	bss_7af10 = 0x140;
	bss_7af14 = 0x10;
	bss_7af40 = 0x80bd;
	bss_7af48 = 0x2160;
	bss_7af44 = 0x1;
	bss_7af4c = 0x6;
	bss_7af50 = 0x80ab;
	bss_7af78 = 0x4000;
	bss_7af58 = 0x0;
	bss_7af5c = 0x4e;
	bss_7af98 = 0x100;
	bss_7af9c = 0x149;
	bss_7afa4 = 0x6;
	bss_7afa8 = 0x8099;
	bss_7afd0 = 0x4000;
	bss_7afb0 = 0x178;
	bss_7afb4 = 0x4c;
	bss_7aff0 = 0x100;
	bss_7aff4 = 0x14e;
	bss_7affc = 0x3;
	bss_7b000 = 0x808e;
	bss_7b028 = 0x102;
	bss_7b02c = 0x100a6;
	bss_7b004 = 0xa;
	bss_7b008 = 0x128;
	bss_7b00c = 0x170;
	bss_7b048 = 0x25f8;
	local_14 = 0x0;
jmp_10380:
	*(int *)local_20 = 0x88;
	*(int *)local_28 = 0x2;
	local_18 = ((*(int *)local_20 * (local_14 %% *(int *)local_28)) + 0xbc);
	local_1c = ((*(int *)local_20 * (local_14 / *(int *)local_28)) + 0x60);
	*(int *)((0x58 * local_14) + 0x7b05c) = 0x6;
	*(int *)((0x58 * local_14) + 0x7b088) = 0x4004;
	*(int *)((0x58 * local_14) + 0x7b068) = local_18;
	*(int *)((0x58 * local_14) + 0x7b06c) = local_1c;
	*(int *)((0x58 * local_14) + 0x7b064) = (local_14 + 0xb);
	*(int *)((0x58 * local_14) + 0x7b0a8) = 0x80;
	*(int *)((0x58 * local_14) + 0x7b0ac) = 0x60;
	*(int *)((0x58 * local_14) + 0x7b098) = 0x8077;
	*(int *)((0x58 * local_14) + 0x7b09c) = 0x8063;
	*(int *)((0x58 * local_14) + 0x7b094) = 0x101a6;
	*(int *)((0x58 * local_14) + 0x7b1bc) = 0x6;
	*(int *)((0x58 * local_14) + 0x7b1e8) = 0x8104;
	*(int *)((0x58 * local_14) + 0x7b1c4) = (local_14 + 0xb);
	*(int *)((0x58 * local_14) + 0x7b1ec) = 0x1008c;
	*(int *)((0x58 * local_14) + 0x7b1c8) = (local_18 - 0x1e);
	*(int *)((0x58 * local_14) + 0x7b1cc) = (local_1c - 0x20);
	*(int *)((0x58 * local_14) + 0x7b208) = 0x100;
	*(int *)((0x58 * local_14) + 0x7b20c) = 0xf8;
	*(int *)((0x58 * local_14) + 0x7b1d0) = local_18;
	*(int *)((0x58 * local_14) + 0x7b1d4) = local_1c;
	*(int *)((0x58 * local_14) + 0x7b1d8) = (local_18 + 0x80);
	*(int *)((0x58 * local_14) + 0x7b1dc) = (local_1c + 0x80);
	*(int *)((0x58 * local_14) + 0x7b1f8) = 0x804e;
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x4) goto jmp_10380;
	bss_7b31c = 0x6;
	bss_7b320 = 0x8039;
	bss_7b348 = 0x4000;
	bss_7b328 = 0x104;
	bss_7b32c = 0x190;
	bss_7b368 = 0x80;
	bss_7b36c = 0x20;
	bss_7b374 = 0x6;
	bss_7b3a0 = 0x104;
	bss_7b3a4 = 0x10142;
	bss_7b37c = 0xf;
	bss_7b380 = 0x104;
	bss_7b384 = 0x190;
	bss_7b3c0 = 0x40;
	bss_7b3c4 = 0x20;
	bss_7b3b0 = 0x8024;
	bss_7b3cc = 0x6;
	bss_7b3f8 = 0x104;
	bss_7b3fc = 0x10142;
	bss_7b3d4 = 0x10;
	bss_7b3d8 = 0x141;
	bss_7b3dc = 0x190;
	bss_7b418 = 0x40;
	bss_7b41c = 0x20;
	bss_7b408 = 0x800f;
	bss_7b4d4 = 0x9;
	bss_7b500 = 0x4008;
	bss_7b4e0 = 0x140;
	bss_7b4e4 = 0x1b8;
	bss_7b510 = 0x76e1c;
	bss_7b514 = 0x21;
	bss_7b518 = 0x21f0;
	bss_7b424 = 0x6;
	bss_7b428 = 0x7fff;
	bss_7b450 = 0x104;
	bss_7b454 = 0x10142;
	bss_7b42c = 0x11;
	bss_7b430 = 0x0;
	bss_7b434 = 0x1a0;
	bss_7b470 = 0x80;
	bss_7b474 = 0x40;
	bss_7b460 = 0x7fef;
	bss_7b47c = 0x6;
	bss_7b480 = 0x7fdf;
	bss_7b4a8 = 0x110;
	bss_7b4ac = 0x10142;
	bss_7b484 = 0x12;
	bss_7b488 = 0x280;
	bss_7b48c = 0x1a0;
	bss_7b4c8 = 0x80;
	bss_7b4cc = 0x40;
	bss_7b4b8 = 0x7fcf;
	bss_7b51c = 0x6;
	bss_7b548 = 0x100804;
	bss_7b528 = 0x0;
	bss_7b52c = 0x0;
	bss_7b568 = 0x280;
	bss_7b56c = 0x1e0;
	Menu_AddItem(0x7ade4, 0x7af04);
	Menu_AddItem(0x7ade4, 0x7af4c);
	Menu_AddItem(0x7ade4, 0x7afa4);
	Menu_AddItem(0x7ade4, 0x7affc);
	local_14 = 0x0;
jmp_10543:
	Menu_AddItem(0x7ade4, ((0x58 * local_14) + 0x7b05c));
	Menu_AddItem(0x7ade4, ((0x58 * local_14) + 0x7b1bc));
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x4) goto jmp_10543;
	Menu_AddItem(0x7ade4, 0x7b31c);
	Menu_AddItem(0x7ade4, 0x7b374);
	Menu_AddItem(0x7ade4, 0x7b3cc);
	Menu_AddItem(0x7ade4, 0x7b424);
	Menu_AddItem(0x7ade4, 0x7b47c);
	Menu_AddItem(0x7ade4, 0x7b4d4);
	Menu_AddItem(0x7ade4, 0x7b51c);
	StartServer_GametypeEvent(0x0, 0x3);
}

/*
=================
StartServer_Cache

Address: 0x1059f
Stack Size: 0x80
Calls: trap_Cvar_VariableValue, trap_R_RegisterShaderNoMip, UI_GetNumArenas, Com_sprintf, Q_strupr, Q_strncpyz, Info_ValueForKey, UI_GetArenaInfoByNumber
Called by: StartServer_MenuInit, UI_Cache_f
=================
*/
void StartServer_Cache(void) {
	int		local_18;
	char	local_1c[64];
	char	local_5c[16];
	int		local_6c;
	int		local_70;
	int		local_74;
	int		local_78;
	int		local_7c;

	trap_R_RegisterShaderNoMip(0x7fff);
	trap_R_RegisterShaderNoMip(0x7fef);
	trap_R_RegisterShaderNoMip(0x7fdf);
	trap_R_RegisterShaderNoMip(0x7fcf);
	trap_R_RegisterShaderNoMip(0x80ab);
	trap_R_RegisterShaderNoMip(0x8099);
	trap_R_RegisterShaderNoMip(0x804e);
	trap_R_RegisterShaderNoMip(0x8077);
	trap_R_RegisterShaderNoMip(0x8063);
	trap_R_RegisterShaderNoMip(0x8039);
	trap_R_RegisterShaderNoMip(0x8024);
	trap_R_RegisterShaderNoMip(0x800f);
	local_74 = trap_Cvar_VariableValue(0x7fbf);
	local_70 = (int)local_74;
	if (local_70 == 0x0) goto jmp_10632;
	local_18 = 0x0;
	goto jmp_10629;
jmp_105f0:
	local_78 = UI_GetArenaInfoByNumber(local_18);
	local_6c = local_78;
	local_7c = Info_ValueForKey(local_6c, 0x80f5);
	Q_strncpyz(local_5c, local_7c, 0x10);
	Q_strupr(local_5c);
	Com_sprintf(local_1c, 0x40, 0x80e7, local_5c);
	trap_R_RegisterShaderNoMip(local_1c);
	local_18 = (local_18 + 0x1);
jmp_10629:
	local_78 = UI_GetNumArenas();
	if (local_18 < local_78) goto jmp_105f0;
jmp_10632:
}

/*
=================
UI_StartServerMenu

Address: 0x10634
Stack Size: 0xc
Calls: UI_PushMenu, StartServer_MenuInit
Called by: UI_SPLevelMenu_CustomEvent, ArenaServers_Event
=================
*/
void UI_StartServerMenu(int arg_0) {

	StartServer_MenuInit();
	bss_7b574 = arg_0;
	UI_PushMenu(0x7ade4);
}

/*
=================
BotAlreadySelected

Address: 0x10643
Stack Size: 0x1c
Calls: Q_stricmp
Called by: UI_BotSelectMenu_UpdateGrid
=================
*/
int BotAlreadySelected(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;

	arg_0 = arg_0;
	local_10 = 0x1;
jmp_1064b:
	if (*(int *)((0x60 * local_10) + 0x79f5c) == 0x1) goto jmp_10656;
	goto jmp_10686;
jmp_10656:
	if (bss_7ac88 < 0x3) goto jmp_10670;
	local_14 = 0x60;
	if (*(int *)((local_14 * local_10) + 0x7a73c) == *(int *)((local_14 * bss_7ad70) + 0x7a73c)) goto jmp_10670;
	goto jmp_10686;
jmp_10670:
	local_18 = Q_stricmp(arg_0, ((local_10 << 0x4) + 0x7acac));
	if (local_18 != 0x0) goto jmp_10686;
	return 0x1;
jmp_10686:
	local_10 = (local_10 + 0x1);
	if (local_10 < 0xc) goto jmp_1064b;
	return 0x0;
}

/*
=================
ServerOptions_Start

Address: 0x10694
Stack Size: 0xcc
Calls: trap_Cmd_ExecuteText, trap_Cvar_Set, trap_Cvar_SetValue, Com_sprintf, va, Info_ValueForKey, UI_GetArenaInfoByNumber, Com_Clamp, atoi
Called by: ServerOptions_Event
=================
*/
void ServerOptions_Start(void) {
	int		local_20;
	char	local_24[64];
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
	int		local_b8;
	int		local_bc;
	int		local_c0;
	int		local_c4;
	int		local_c8;

	local_88 = atoi(0x7990c);
	local_6c = local_88;
	local_8c = atoi(0x79a58);
	local_70 = local_8c;
	local_90 = atoi(0x79ba4);
	local_74 = local_90;
	local_78 = bss_798a4;
	local_7c = bss_79ce4;
	local_80 = bss_79e70;
	local_68 = (bss_79eb4 + 0x1);
	local_94 = 0x0;
	local_20 = local_94;
	local_64 = local_94;
	goto jmp_106fe;
jmp_106d2:
	if (*(int *)((0x60 * local_20) + 0x79f5c) != 0x2) goto jmp_106dd;
	goto jmp_106f8;
jmp_106dd:
	if (*(int *)((0x60 * local_20) + 0x79f5c) != 0x1) goto jmp_106f2;
	if ((char)*(char *)((local_20 << 0x4) + 0x7acac) != 0x0) goto jmp_106f2;
	goto jmp_106f8;
jmp_106f2:
	local_64 = (local_64 + 0x1);
jmp_106f8:
	local_20 = (local_20 + 0x1);
jmp_106fe:
	if (local_20 < 0xc) goto jmp_106d2;
	local_98 = bss_7ac88;
	if (local_98 < 0x0) goto jmp_10716;
	if (local_98 > 0x4) goto jmp_10716;
	goto *(int *)((local_98 << 0x2) + 0x2684);
jmp_10716:
	trap_Cvar_SetValue(0x7f4e, (float)local_70);
	trap_Cvar_SetValue(0x7f3d, (float)local_6c);
	goto jmp_10776;
	trap_Cvar_SetValue(0x7f28, (float)local_70);
	trap_Cvar_SetValue(0x7f13, (float)local_6c);
	goto jmp_10776;
	trap_Cvar_SetValue(0x7f01, (float)local_70);
	trap_Cvar_SetValue(0x7eef, (float)local_6c);
	trap_Cvar_SetValue(0x7ede, (float)local_7c);
	goto jmp_10776;
	trap_Cvar_SetValue(0x7eca, (float)local_74);
	trap_Cvar_SetValue(0x7eb9, (float)local_6c);
	trap_Cvar_SetValue(0x7ea9, (float)local_7c);
jmp_10776:
	local_9c = Com_Clamp(0x0, 0x41400000, (float)local_64);
	trap_Cvar_SetValue(0x7e9b, local_9c);
	local_a0 = Com_Clamp(0x0, 0x40000000, (float)local_78);
	trap_Cvar_SetValue(0x7e91, local_a0);
#define next_call_arg_0 "0x0"
	local_a4 = (float)local_6c;
#define next_call_arg_1 "local_a4"
#define next_call_arg_2 "local_a4"
	local_a8 = Com_Clamp();
	trap_Cvar_SetValue(0x7e87, local_a8);
#define next_call_arg_0 "0x0"
	local_ac = (float)local_70;
#define next_call_arg_1 "local_ac"
#define next_call_arg_2 "local_ac"
	local_b0 = Com_Clamp();
	trap_Cvar_SetValue(0x7e7d, local_b0);
#define next_call_arg_0 "0x0"
	local_b4 = (float)local_74;
#define next_call_arg_1 "local_b4"
#define next_call_arg_2 "local_b4"
	local_b8 = Com_Clamp();
	trap_Cvar_SetValue(0x7e70, local_b8);
	trap_Cvar_SetValue(0x7e61, (float)local_7c);
	trap_Cvar_SetValue(0x7e59, (float)local_80);
	trap_Cvar_Set(0x7e4d, 0x79d30);
	trap_Cvar_SetValue(0x7e3f, (float)bss_7adc4);
	local_bc = UI_GetArenaInfoByNumber(*(int *)((bss_7b578 << 0x2) + 0x7b588));
	local_84 = local_bc;
	local_c0 = Info_ValueForKey(local_84, 0x80f5);
	local_c4 = va(0x7e29, local_c0);
	trap_Cmd_ExecuteText(0x2, local_c4);
	trap_Cmd_ExecuteText(0x2, 0x7e21);
	local_20 = 0x1;
jmp_1083f:
	if (*(int *)((0x60 * local_20) + 0x79f5c) == 0x1) goto jmp_1084a;
	goto jmp_108a2;
jmp_1084a:
	if ((char)*(char *)((local_20 << 0x4) + 0x7acac) != 0x0) goto jmp_10856;
	goto jmp_108a2;
jmp_10856:
	if ((char)*(char *)((local_20 << 0x4) + 0x7acac) != 0x2d) goto jmp_10862;
	goto jmp_108a2;
jmp_10862:
	if (bss_7ac88 < 0x3) goto jmp_10888;
	Com_sprintf(local_24, 0x40, 0x7e10, ((local_20 << 0x4) + 0x7acac), local_68, *(int *)((*(int *)((0x60 * local_20) + 0x7a73c) << 0x2) + 0x2660));
	goto jmp_1089b;
jmp_10888:
	Com_sprintf(local_24, 0x40, 0x7e02, ((local_20 << 0x4) + 0x7acac), local_68);
jmp_1089b:
	trap_Cmd_ExecuteText(0x2, local_24);
jmp_108a2:
	local_20 = (local_20 + 0x1);
	if (local_20 < 0xc) goto jmp_1083f;
	if (local_78 != 0x0) goto jmp_108d7;
	if (bss_7ac88 < 0x3) goto jmp_108d7;
	local_c8 = va(0x7df1, *(int *)((bss_7a73c << 0x2) + 0x2660));
	trap_Cmd_ExecuteText(0x2, local_c8);
	trap_Cvar_Set(0x7de1, *(int *)((bss_7a73c << 0x2) + 0x2660));
jmp_108d7:
}

/*
=================
ServerOptions_InitPlayerItems

Address: 0x108d9
Stack Size: 0x20
Calls: trap_Cvar_VariableStringBuffer, Q_CleanStr
Called by: ServerOptions_SetMenuItems
=================
*/
void ServerOptions_InitPlayerItems(void) {
	int		local_14;
	int		local_18;
	int		local_1c;

	if (bss_7ac84 == 0x0) goto jmp_108e3;
	local_18 = 0x0;
	goto jmp_108e6;
jmp_108e3:
	local_18 = 0x1;
jmp_108e6:
	local_14 = 0x0;
jmp_108e9:
	*(int *)((0x60 * local_14) + 0x79f5c) = local_18;
	local_14 = (local_14 + 0x1);
	if (local_14 < 0xc) goto jmp_108e9;
	if (bss_7ac84 == 0x0) goto jmp_10919;
	if (bss_7ac88 >= 0x3) goto jmp_10919;
	local_14 = 0x8;
jmp_10907:
	*(int *)((0x60 * local_14) + 0x79f5c) = 0x2;
	local_14 = (local_14 + 0x1);
	if (local_14 < 0xc) goto jmp_10907;
jmp_10919:
	if (bss_798a4 != 0x0) goto jmp_10939;
	local_1c = 0x79f48;
	*(int *)local_1c = (*(int *)local_1c | 0x4000);
	bss_79f5c = 0x0;
	trap_Cvar_VariableStringBuffer(0x7ddc, 0x7acac, 0x10);
	Q_CleanStr(0x7acac);
jmp_10939:
	if (bss_7ac88 < 0x3) goto jmp_10968;
	local_14 = 0x0;
jmp_10940:
	*(int *)((0x60 * local_14) + 0x7a73c) = 0x0;
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x6) goto jmp_10940;
	goto jmp_10962;
jmp_10954:
	*(int *)((0x60 * local_14) + 0x7a73c) = 0x1;
	local_14 = (local_14 + 0x1);
jmp_10962:
	if (local_14 < 0xc) goto jmp_10954;
	goto jmp_10985;
jmp_10968:
	local_14 = 0x0;
jmp_1096b:
	local_1c = ((0x60 * local_14) + 0x7a728);
	*(int *)local_1c = (*(int *)local_1c | 0x5000);
	local_14 = (local_14 + 0x1);
	if (local_14 < 0xc) goto jmp_1096b;
jmp_10985:
}

/*
=================
ServerOptions_SetPlayerItems

Address: 0x10987
Stack Size: 0x14
Called by: ServerOptions_SetMenuItems, ServerOptions_Event
=================
*/
void ServerOptions_SetPlayerItems(void) {
	int		local_8;
	int		local_c;
	int		local_10;

	if (bss_798a4 != 0x0) goto jmp_1099f;
	bss_79f10 = 0x7dd6;
	local_10 = 0x7a3c8;
	*(int *)local_10 = (*(int *)local_10 & 0xffffefff);
	local_c = 0x1;
	goto jmp_109a5;
jmp_1099f:
	bss_79f10 = 0x7faa;
	local_c = 0x0;
jmp_109a5:
	local_8 = local_c;
	goto jmp_109dc;
jmp_109ab:
	if (*(int *)((0x60 * local_8) + 0x79f5c) != 0x1) goto jmp_109c6;
	local_10 = ((0x48 * local_8) + 0x7a3c8);
	*(int *)local_10 = (*(int *)local_10 & 0xffffafff);
	goto jmp_109d6;
jmp_109c6:
	local_10 = ((0x48 * local_8) + 0x7a3c8);
	*(int *)local_10 = (*(int *)local_10 | 0x5000);
jmp_109d6:
	local_8 = (local_8 + 0x1);
jmp_109dc:
	if (local_8 < 0xc) goto jmp_109ab;
	if (bss_7ac88 >= 0x3) goto jmp_109e6;
	goto jmp_10a21;
jmp_109e6:
	local_8 = local_c;
	goto jmp_10a1d;
jmp_109ec:
	if (*(int *)((0x60 * local_8) + 0x79f5c) != 0x2) goto jmp_10a07;
	local_10 = ((0x60 * local_8) + 0x7a728);
	*(int *)local_10 = (*(int *)local_10 | 0x5000);
	goto jmp_10a17;
jmp_10a07:
	local_10 = ((0x60 * local_8) + 0x7a728);
	*(int *)local_10 = (*(int *)local_10 & 0xffffafff);
jmp_10a17:
	local_8 = (local_8 + 0x1);
jmp_10a1d:
	if (local_8 < 0xc) goto jmp_109ec;
jmp_10a21:
}

/*
=================
ServerOptions_Event

Address: 0x10a23
Stack Size: 0x10
Calls: UI_PopMenu, ServerOptions_Start, ServerOptions_SetPlayerItems
=================
*/
void ServerOptions_Event(int arg_0, int arg_1) {
	char	local_8[8];

	*(int *)local_8 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_8 < 0x12) goto jmp_10a65;
	if (*(int *)local_8 > 0x18) goto jmp_10a65;
	goto *(int *)((*(int *)local_8 << 0x2) + 0x2650);
	if (arg_1 == 0x3) goto jmp_10a41;
	goto jmp_10a65;
jmp_10a41:
	ServerOptions_SetPlayerItems();
	goto jmp_10a65;
	ServerOptions_SetPlayerItems();
	goto jmp_10a65;
	if (arg_1 == 0x3) goto jmp_10a51;
	goto jmp_10a65;
jmp_10a51:
	ServerOptions_Start();
	goto jmp_10a65;
	if (arg_1 == 0x3) goto jmp_10a65;
	goto jmp_10a65;
	if (arg_1 == 0x3) goto jmp_10a62;
	goto jmp_10a65;
jmp_10a62:
	UI_PopMenu();
jmp_10a65:
}

/*
=================
ServerOptions_PlayerNameEvent

Address: 0x10a67
Stack Size: 0x10
Calls: UI_BotSelectMenu
=================
*/
void ServerOptions_PlayerNameEvent(int arg_0, int arg_1) {
	int		local_c;

	if (arg_1 == 0x3) goto jmp_10a6e;
	goto jmp_10a83;
jmp_10a6e:
	local_c = *(int *)(arg_0 + 0x8);
	bss_7ad70 = local_c;
	UI_BotSelectMenu(((local_c << 0x4) + 0x7acac));
jmp_10a83:
}

/*
=================
ServerOptions_StatusBar

Address: 0x10a85
Stack Size: 0x20
Calls: UI_DrawString
=================
*/
void ServerOptions_StatusBar(int arg_0) {
	int		local_1c;

	local_1c = *(int *)(arg_0 + 0x8);
	goto jmp_10a8f;
jmp_10a8f:
	UI_DrawString(0x140, 0x1b8, 0x7dc9, 0x11, 0x2a28);
}

/*
=================
ServerOptions_LevelshotDraw

Address: 0x10a9e
Stack Size: 0x30
Calls: UI_DrawString, UI_FillRect, Bitmap_Draw, Q_strncpyz
=================
*/
void ServerOptions_LevelshotDraw(int arg_0) {
	int		local_1c;
	int		local_20;
	char	local_24[8];
	int		local_2c;

	if (bss_7ad6c == 0x0) goto jmp_10ab4;
	Q_strncpyz(((bss_7ad70 << 0x4) + 0x7acac), 0x7ad74, 0x10);
	bss_7ad6c = 0x0;
jmp_10ab4:
	local_1c = arg_0;
	Bitmap_Draw(local_1c);
	*(int *)local_24 = *(int *)(local_1c + 0xc);
	local_20 = (*(int *)(local_1c + 0x10) + *(int *)(local_1c + 0x50));
	UI_FillRect((float)*(int *)local_24, (float)local_20, (float)*(int *)(local_1c + 0x4c), 0x42200000, 0x29b8);
	*(int *)local_24 = (*(int *)local_24 + (*(int *)(local_1c + 0x4c) / 0x2));
	local_20 = (local_20 + 0x4);
	UI_DrawString(*(int *)local_24, local_20, 0x7ac8c, 0x11, 0x21a0);
	local_20 = (local_20 + 0x10);
#define next_call_arg_0 "*(int *)local_24"
#define next_call_arg_1 "local_20"
	local_2c = 0x2;
#define next_call_arg_2 "*(int *)((*(int *)((bss_7ac88 << local_2c) + 0x261c) << local_2c) + 0x25f8)"
#define next_call_arg_3 "0x11"
#define next_call_arg_4 "0x21a0"
	UI_DrawString();
}

/*
=================
ServerOptions_InitBotNames

Address: 0x10b30
Stack Size: 0x444
Calls: strcpy, UI_GetBotInfoByNumber, UI_GetBotInfoByName, Info_ValueForKey, UI_GetArenaInfoByMap, Q_strncpyz
Called by: ServerOptions_SetMenuItems
=================
*/
void ServerOptions_InitBotNames(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	char	local_28[1024];
	int		local_428;
	int		local_42c;
	int		local_430;
	int		local_434;
	int		local_438;
	int		local_43c;
	int		local_440;

	if (bss_7ac88 < 0x3) goto jmp_10b94;
	Q_strncpyz(0x7acbc, 0x7dc3, 0x10);
	Q_strncpyz(0x7accc, 0x7dbd, 0x10);
	if (bss_7ac88 != 0x3) goto jmp_10b56;
	Q_strncpyz(0x7acdc, 0x7db7, 0x10);
	goto jmp_10b59;
jmp_10b56:
	bss_7a07c = 0x2;
jmp_10b59:
	bss_7a0dc = 0x2;
	bss_7a13c = 0x2;
	Q_strncpyz(0x7ad0c, 0x7db1, 0x10);
	Q_strncpyz(0x7ad1c, 0x7dc3, 0x10);
	Q_strncpyz(0x7ad2c, 0x7dbd, 0x10);
	if (bss_7ac88 != 0x3) goto jmp_10b89;
	Q_strncpyz(0x7ad3c, 0x7db7, 0x10);
	goto jmp_10b8c;
jmp_10b89:
	bss_7a2bc = 0x2;
jmp_10b8c:
	bss_7a31c = 0x2;
	bss_7a37c = 0x2;
	goto jmp_10c96;
jmp_10b94:
	local_18 = 0x1;
	local_42c = UI_GetArenaInfoByMap(0x7ac8c);
	local_428 = local_42c;
	local_430 = Info_ValueForKey(local_428, 0x7dac);
	Q_strncpyz(local_28, local_430, 0x400);
	local_14 = local_28;
	goto jmp_10c3f;
jmp_10bb9:
	local_14 = (local_14 + 0x1);
jmp_10bbf:
	local_434 = (char)*(char *)local_14;
	if (local_434 == 0x0) goto jmp_10bcd;
	if (local_434 == 0x20) goto jmp_10bb9;
jmp_10bcd:
	if ((char)*(char *)local_14 != 0x0) goto jmp_10bd5;
	goto jmp_10c49;
jmp_10bd5:
	local_1c = local_14;
	goto jmp_10be1;
jmp_10bdb:
	local_14 = (local_14 + 0x1);
jmp_10be1:
	local_438 = (char)*(char *)local_14;
	if (local_438 == 0x0) goto jmp_10bef;
	if (local_438 != 0x20) goto jmp_10bdb;
jmp_10bef:
	if ((char)*(char *)local_14 == 0x0) goto jmp_10c03;
	local_43c = local_14;
	local_14 = (local_43c + 0x1);
	*(char *)local_43c = 0x0;
jmp_10c03:
	local_43c = UI_GetBotInfoByName(local_1c);
	local_20 = local_43c;
	if (local_20 != 0x0) goto jmp_10c1d;
	local_440 = UI_GetBotInfoByNumber(local_18);
	local_20 = local_440;
jmp_10c1d:
	local_440 = Info_ValueForKey(local_20, 0x7ddc);
	local_1c = local_440;
	Q_strncpyz(((local_18 << 0x4) + 0x7acac), local_1c, 0x10);
	local_18 = (local_18 + 0x1);
jmp_10c3f:
	if ((char)*(char *)local_14 == 0x0) goto jmp_10c49;
	if (local_18 < 0xc) goto jmp_10bbf;
jmp_10c49:
	local_24 = local_18;
	goto jmp_10c61;
jmp_10c4f:
	strcpy(((local_24 << 0x4) + 0x7acac), 0x7da3);
	local_24 = (local_24 + 0x1);
jmp_10c61:
	if (local_24 < 0xc) goto jmp_10c4f;
	goto jmp_10c75;
jmp_10c67:
	*(int *)((0x60 * local_18) + 0x79f5c) = 0x0;
	local_18 = (local_18 + 0x1);
jmp_10c75:
	if (local_18 < 0x8) goto jmp_10c67;
	goto jmp_10c92;
jmp_10c7b:
	if (*(int *)((0x60 * local_18) + 0x79f5c) != 0x1) goto jmp_10c8c;
	*(int *)((0x60 * local_18) + 0x79f5c) = 0x2;
jmp_10c8c:
	local_18 = (local_18 + 0x1);
jmp_10c92:
	if (local_18 < 0xc) goto jmp_10c7b;
jmp_10c96:
}

/*
=================
ServerOptions_SetMenuItems

Address: 0x10c98
Stack Size: 0x80
Calls: trap_Cvar_VariableValue, ServerOptions_InitBotNames, ServerOptions_SetPlayerItems, ServerOptions_InitPlayerItems, strcpy, Q_strupr, Info_ValueForKey, UI_GetArenaInfoByNumber, Q_strncpyz, UI_Cvar_VariableString, Com_sprintf, Com_Clamp
Called by: ServerOptions_MenuInit
=================
*/
void ServerOptions_SetMenuItems(void) {
	char	local_18[16];
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

	local_2c = bss_7ac88;
	if (local_2c < 0x0) goto jmp_10cad;
	if (local_2c > 0x4) goto jmp_10cad;
	goto *(int *)((local_2c << 0x2) + 0x26b4);
jmp_10cad:
	local_30 = trap_Cvar_VariableValue(0x7f4e);
	local_34 = Com_Clamp(0x0, 0x4479c000, local_30);
	Com_sprintf(0x79a58, 0x4, 0x7da0, (int)local_34);
	local_38 = trap_Cvar_VariableValue(0x7f3d);
	local_3c = Com_Clamp(0x0, 0x4479c000, local_38);
	Com_sprintf(0x7990c, 0x4, 0x7da0, (int)local_3c);
	goto jmp_10dcf;
	local_40 = trap_Cvar_VariableValue(0x7f28);
	local_44 = Com_Clamp(0x0, 0x4479c000, local_40);
	Com_sprintf(0x79a58, 0x4, 0x7da0, (int)local_44);
	local_48 = trap_Cvar_VariableValue(0x7f13);
	local_4c = Com_Clamp(0x0, 0x4479c000, local_48);
	Com_sprintf(0x7990c, 0x4, 0x7da0, (int)local_4c);
	goto jmp_10dcf;
	local_50 = trap_Cvar_VariableValue(0x7f01);
	local_54 = Com_Clamp(0x0, 0x4479c000, local_50);
	Com_sprintf(0x79a58, 0x4, 0x7da0, (int)local_54);
	local_58 = trap_Cvar_VariableValue(0x7eef);
	local_5c = Com_Clamp(0x0, 0x4479c000, local_58);
	Com_sprintf(0x7990c, 0x4, 0x7da0, (int)local_5c);
	local_60 = trap_Cvar_VariableValue(0x7ede);
	local_64 = Com_Clamp(0x0, 0x3f800000, local_60);
	bss_79ce4 = (int)local_64;
	goto jmp_10dcf;
	local_68 = trap_Cvar_VariableValue(0x7eca);
	local_6c = Com_Clamp(0x0, 0x42c80000, local_68);
	Com_sprintf(0x79ba4, 0x4, 0x7da0, (int)local_6c);
	local_70 = trap_Cvar_VariableValue(0x7eb9);
	local_74 = Com_Clamp(0x0, 0x4479c000, local_70);
	Com_sprintf(0x7990c, 0x4, 0x7da0, (int)local_74);
	local_78 = trap_Cvar_VariableValue(0x7ea9);
	local_7c = Com_Clamp(0x0, 0x3f800000, local_78);
	bss_79ce4 = (int)local_7c;
jmp_10dcf:
	local_30 = UI_Cvar_VariableString(0x7e4d);
	Q_strncpyz(0x79d30, local_30, 0x100);
	local_34 = trap_Cvar_VariableValue(0x7e59);
	local_38 = Com_Clamp(0x0, 0x3f800000, local_34);
	bss_79e70 = (int)local_38;
	local_3c = UI_GetArenaInfoByNumber(*(int *)((bss_7b578 << 0x2) + 0x7b588));
	local_28 = local_3c;
	local_40 = Info_ValueForKey(local_28, 0x80f5);
	Q_strncpyz(local_18, local_40, 0x10);
	Q_strupr(local_18);
	Com_sprintf(0x76e5c, 0x40, 0x80e7, local_18);
	bss_797b8 = 0x76e5c;
	strcpy(0x7ac8c, bss_7b510);
	Q_strupr(0x7ac8c);
	ServerOptions_InitPlayerItems();
	ServerOptions_SetPlayerItems();
	ServerOptions_InitBotNames();
	ServerOptions_SetPlayerItems();
}

/*
=================
PlayerName_Draw

Address: 0x10e46
Stack Size: 0x50
Calls: UI_DrawString, UI_DrawChar, UI_FillRect
=================
*/
void PlayerName_Draw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	char	local_34[8];
	char	local_3c[8];
	int		local_44;
	int		local_48;
	int		local_4c;

	local_1c = arg_0;
	local_24 = *(int *)(local_1c + 0xc);
	*(int *)local_3c = 0x10;
	local_28 = *(int *)(local_1c + *(int *)local_3c);
	local_2c = *(int *)local_3c;
	if (*(int *)*(int *)(local_1c + 0x24) != *(int *)(local_1c + 0x28)) goto jmp_10e72;
	*(int *)local_34 = 0x1;
	goto jmp_10e75;
jmp_10e72:
	*(int *)local_34 = 0x0;
jmp_10e75:
	local_30 = *(int *)local_34;
	if ((*(int *)(local_1c + 0x2c) & 0x2000) == 0x0) goto jmp_10e87;
	local_20 = 0x21e0;
	goto jmp_10ead;
jmp_10e87:
	if (local_30 == 0x0) goto jmp_10e96;
	local_20 = 0x2200;
	local_2c = (local_2c | 0x4000);
	goto jmp_10ead;
jmp_10e96:
	if ((*(int *)(local_1c + 0x2c) & 0x1) == 0x0) goto jmp_10eaa;
	local_20 = 0x2200;
	local_2c = (local_2c | 0x1000);
	goto jmp_10ead;
jmp_10eaa:
	local_20 = 0x21f0;
jmp_10ead:
	if (local_30 == 0x0) goto jmp_10ef9;
	local_44 = *(int *)(local_1c + 0x14);
#define next_call_arg_0 "(float)local_44"
	local_48 = *(int *)(local_1c + 0x18);
#define next_call_arg_1 "(float)local_48"
	local_4c = 0x1;
#define next_call_arg_2 "(float)((*(int *)(local_1c + 0x1c) - local_44) + local_4c)"
#define next_call_arg_3 "(float)((*(int *)(local_1c + 0x20) - local_48) + local_4c)"
#define next_call_arg_4 "0x2210"
	UI_FillRect();
	UI_DrawChar(local_24, local_28, 0xd, 0x1011, local_20);
jmp_10ef9:
	UI_DrawString((local_24 - 0x8), local_28, *(int *)(local_1c + 0x4), (local_2c | 0x2), local_20);
	UI_DrawString((local_24 + 0x8), local_28, *(int *)(local_1c + 0x3c), local_2c, local_20);
}

/*
=================
ServerOptions_MenuInit

Address: 0x10f2b
Stack Size: 0x48
Calls: trap_Cvar_VariableValue, memset, ServerOptions_SetMenuItems, Menu_AddItem, strlen, ServerOptions_Cache, Com_Clamp
Called by: UI_ServerOptionsMenu
=================
*/
void ServerOptions_MenuInit(int arg_0) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[12];
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;

	memset(0x7964c, 0x0, 0x1798);
	bss_7ac84 = arg_0;
	local_1c = trap_Cvar_VariableValue(0x7d95);
	local_20 = Com_Clamp(0x0, 0x40800000, local_1c);
	bss_7ac88 = (int)local_20;
	local_24 = trap_Cvar_VariableValue(0x7e3f);
	local_28 = Com_Clamp(0x0, 0x3f800000, local_24);
	bss_7adc4 = (int)local_28;
	ServerOptions_Cache();
	bss_79760 = 0x1;
	bss_79764 = 0x1;
	bss_7976c = 0xa;
	bss_79778 = 0x140;
	bss_7977c = 0x10;
	bss_797a8 = 0x80bd;
	bss_797b0 = 0x2160;
	bss_797ac = 0x1;
	bss_797b4 = 0x6;
	bss_797e0 = 0x4004;
	bss_797c0 = 0x160;
	bss_797c4 = 0x50;
	bss_79800 = 0xa0;
	bss_79804 = 0x78;
	bss_797f4 = 0x8063;
	bss_797ec = 0x10a9e;
	bss_7980c = 0x6;
	bss_79838 = 0x4044;
	bss_79818 = 0x13a;
	bss_7981c = 0x28;
	bss_79858 = 0x140;
	bss_7985c = 0x140;
	bss_79848 = 0x804e;
	local_18 = 0x110;
	if (bss_7ac88 == 0x4) goto jmp_10fcf;
	bss_79a10 = 0x4;
	bss_79a14 = 0x7d89;
	bss_79a3c = 0x122;
	bss_79a1c = 0x1c8;
	bss_79a20 = local_18;
	bss_79a44 = 0x10a85;
	bss_79a54 = 0x3;
	bss_79b58 = 0x3;
	goto jmp_10fe8;
jmp_10fcf:
	bss_79b5c = 0x4;
	bss_79b60 = 0x7d7a;
	bss_79b88 = 0x122;
	bss_79b68 = 0x1c8;
	bss_79b6c = local_18;
	bss_79b90 = 0x10a85;
	bss_79ba0 = 0x3;
	bss_79ca4 = 0x3;
jmp_10fe8:
	local_18 = (local_18 + 0x12);
	bss_798c4 = 0x4;
	bss_798c8 = 0x7d6e;
	bss_798f0 = 0x122;
	bss_798d0 = 0x1c8;
	bss_798d4 = local_18;
	bss_798f8 = 0x10a85;
	bss_79908 = 0x3;
	bss_79a0c = 0x3;
	if (bss_7ac88 < 0x3) goto jmp_11021;
	local_18 = (local_18 + 0x12);
	bss_79ca8 = 0x5;
	bss_79cd4 = 0x102;
	bss_79cb4 = 0x1c8;
	bss_79cb8 = local_18;
	bss_79cac = 0x7d5f;
jmp_11021:
	local_18 = (local_18 + 0x12);
	bss_79e34 = 0x5;
	bss_79e60 = 0x102;
	bss_79e40 = 0x1c8;
	bss_79e44 = local_18;
	bss_79e38 = 0x7d52;
	if (bss_7ac84 == 0x0) goto jmp_1105a;
	local_18 = (local_18 + 0x12);
	bss_79864 = 0x3;
	bss_7986c = 0x16;
	bss_79890 = 0x102;
	bss_79894 = 0x10a23;
	bss_79870 = 0x1c8;
	bss_79874 = local_18;
	bss_79868 = 0x7d47;
	bss_798b0 = 0x2640;
jmp_1105a:
	if (bss_7ac84 == 0x0) goto jmp_1107a;
	local_18 = (local_18 + 0x12);
	bss_79ce8 = 0x4;
	bss_79cec = 0x7d3d;
	bss_79d14 = 0x2;
	bss_79cf4 = 0x1c8;
	bss_79cf8 = local_18;
	bss_79d2c = 0x12;
	bss_79e30 = 0x40;
jmp_1107a:
	local_18 = (local_18 + 0x12);
	bss_7ad84 = 0x3;
	bss_7ad88 = 0x7d31;
	bss_7adb0 = 0x102;
	bss_7ad8c = 0x0;
	bss_7ad90 = 0x1c8;
	bss_7ad94 = local_18;
	bss_7add0 = 0x2424;
	local_18 = 0x50;
	bss_79e74 = 0x3;
	bss_79ea0 = 0x102;
	bss_79e78 = 0x7d26;
	*(int *)local_2c = strlen(bss_79e78);
	bss_79e80 = (((*(int *)local_2c + 0x2) << 0x3) + 0x20);
	bss_79e84 = local_18;
	bss_79ec0 = 0x266c;
	bss_79eb4 = 0x1;
	local_18 = (local_18 + 0x20);
	bss_79ed4 = 0x7;
	bss_79f00 = 0x2;
	bss_79ee0 = 0x28;
	bss_79ee4 = local_18;
	bss_79f18 = 0x21a0;
	bss_79f14 = 0x10;
	local_14 = 0x0;
jmp_110d9:
	*(int *)((0x60 * local_14) + 0x79f1c) = 0x3;
	*(int *)((0x60 * local_14) + 0x79f48) = 0x2;
	*(int *)((0x60 * local_14) + 0x79f24) = 0x14;
	*(int *)((0x60 * local_14) + 0x79f4c) = 0x10a23;
	*(int *)((0x60 * local_14) + 0x79f28) = 0x20;
	*(int *)((0x60 * local_14) + 0x79f2c) = local_18;
	*(int *)((0x60 * local_14) + 0x79f68) = 0x2650;
	*(int *)((0x48 * local_14) + 0x7a39c) = 0x7;
	*(int *)((0x48 * local_14) + 0x7a3c8) = 0x2;
	*(int *)((0x48 * local_14) + 0x7a3a8) = 0x60;
	*(int *)((0x48 * local_14) + 0x7a3ac) = local_18;
	*(int *)((0x48 * local_14) + 0x7a3cc) = 0x10a67;
	*(int *)((0x48 * local_14) + 0x7a3a4) = local_14;
	*(int *)((0x48 * local_14) + 0x7a3d4) = 0x10e46;
	*(int *)((0x48 * local_14) + 0x7a3e0) = 0x21a0;
	*(int *)((0x48 * local_14) + 0x7a3dc) = 0x10;
	*(int *)((0x48 * local_14) + 0x7a3d8) = ((local_14 << 0x4) + 0x7acac);
	local_38 = (0x48 * local_14);
	*(int *)(local_38 + 0x7a3b4) = *(int *)(local_38 + 0x7a3ac);
	local_3c = (0x48 * local_14);
	*(int *)(local_3c + 0x7a3bc) = (*(int *)(local_3c + 0x7a3ac) + 0x10);
	local_40 = (0x48 * local_14);
	*(int *)(local_40 + 0x7a3b0) = (*(int *)(local_40 + 0x7a3a8) - 0x8);
	local_44 = (0x48 * local_14);
	*(int *)(local_44 + 0x7a3b8) = (*(int *)(local_44 + 0x7a3a8) + 0x80);
	*(int *)((0x60 * local_14) + 0x7a6fc) = 0x3;
	*(int *)((0x60 * local_14) + 0x7a728) = 0x2;
	*(int *)((0x60 * local_14) + 0x7a708) = 0xf0;
	*(int *)((0x60 * local_14) + 0x7a70c) = local_18;
	*(int *)((0x60 * local_14) + 0x7a748) = 0x2660;
	local_18 = (local_18 + 0x14);
	local_14 = (local_14 + 0x1);
	if (local_14 < 0xc) goto jmp_110d9;
	bss_7ac2c = 0x6;
	bss_7ac30 = 0x7fff;
	bss_7ac58 = 0x104;
	bss_7ac5c = 0x10a23;
	bss_7ac34 = 0x18;
	bss_7ac38 = 0x0;
	bss_7ac3c = 0x1a0;
	bss_7ac78 = 0x80;
	bss_7ac7c = 0x40;
	bss_7ac68 = 0x7fef;
	bss_7abd4 = 0x6;
	bss_7abd8 = 0x7fdf;
	bss_7ac00 = 0x7110;
	bss_7ac04 = 0x10a23;
	bss_7abdc = 0x12;
	bss_7abe0 = 0x280;
	bss_7abe4 = 0x158;
	bss_7ac08 = 0x10a85;
	bss_7ac20 = 0x80;
	bss_7ac24 = 0x40;
	bss_7ac10 = 0x7fcf;
	bss_7ab7c = 0x6;
	bss_7ab80 = 0x7d15;
	bss_7aba8 = 0x110;
	bss_7abac = 0x10a23;
	bss_7ab84 = 0x17;
	bss_7ab88 = 0x280;
	bss_7ab8c = 0x1a0;
	bss_7abc8 = 0x80;
	bss_7abcc = 0x40;
	bss_7abb8 = 0x7d04;
	Menu_AddItem(0x7964c, 0x7976c);
	Menu_AddItem(0x7964c, 0x797b4);
	Menu_AddItem(0x7964c, 0x7980c);
	Menu_AddItem(0x7964c, 0x79e74);
	Menu_AddItem(0x7964c, 0x79ed4);
	local_14 = 0x0;
jmp_1126b:
	if (local_14 == 0x0) goto jmp_1127b;
	Menu_AddItem(0x7964c, ((0x60 * local_14) + 0x79f1c));
jmp_1127b:
	Menu_AddItem(0x7964c, ((0x48 * local_14) + 0x7a39c));
	if (bss_7ac88 < 0x3) goto jmp_11297;
	Menu_AddItem(0x7964c, ((0x60 * local_14) + 0x7a6fc));
jmp_11297:
	local_14 = (local_14 + 0x1);
	if (local_14 < 0xc) goto jmp_1126b;
	if (bss_7ac88 == 0x4) goto jmp_112ae;
	Menu_AddItem(0x7964c, 0x79a10);
	goto jmp_112b5;
jmp_112ae:
	Menu_AddItem(0x7964c, 0x79b5c);
jmp_112b5:
	Menu_AddItem(0x7964c, 0x798c4);
	if (bss_7ac88 < 0x3) goto jmp_112c7;
	Menu_AddItem(0x7964c, 0x79ca8);
jmp_112c7:
	Menu_AddItem(0x7964c, 0x79e34);
	if (bss_7ac84 == 0x0) goto jmp_112d9;
	Menu_AddItem(0x7964c, 0x79864);
jmp_112d9:
	if (bss_7ac84 == 0x0) goto jmp_112e4;
	Menu_AddItem(0x7964c, 0x79ce8);
jmp_112e4:
	Menu_AddItem(0x7964c, 0x7ac2c);
	Menu_AddItem(0x7964c, 0x7abd4);
	Menu_AddItem(0x7964c, 0x7ab7c);
	Menu_AddItem(0x7964c, 0x7ad84);
	ServerOptions_SetMenuItems();
}

/*
=================
ServerOptions_Cache

Address: 0x11305
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: ServerOptions_MenuInit, UI_Cache_f
=================
*/
void ServerOptions_Cache(void) {

	trap_R_RegisterShaderNoMip(0x7fff);
	trap_R_RegisterShaderNoMip(0x7fef);
	trap_R_RegisterShaderNoMip(0x7d15);
	trap_R_RegisterShaderNoMip(0x7d04);
	trap_R_RegisterShaderNoMip(0x804e);
	trap_R_RegisterShaderNoMip(0x8063);
}

/*
=================
UI_ServerOptionsMenu

Address: 0x11326
Stack Size: 0xc
Calls: UI_PushMenu, ServerOptions_MenuInit
Called by: StartServer_MenuEvent
=================
*/
void UI_ServerOptionsMenu(int arg_0) {

	ServerOptions_MenuInit(arg_0);
	UI_PushMenu(0x7964c);
}

/*
=================
UI_BotSelectMenu_SortCompare

Address: 0x11334
Stack Size: 0x3c
Calls: Q_stricmp, Info_ValueForKey, UI_GetBotInfoByNumber
=================
*/
int UI_BotSelectMenu_SortCompare(int arg_0, int arg_1) {
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

	local_10 = *(int *)arg_0;
	local_14 = *(int *)arg_1;
	local_28 = UI_GetBotInfoByNumber(local_10);
	local_18 = local_28;
	local_2c = UI_GetBotInfoByNumber(local_14);
	local_1c = local_2c;
	local_30 = Info_ValueForKey(local_18, 0x7ddc);
	local_20 = local_30;
	local_34 = Info_ValueForKey(local_1c, 0x7ddc);
	local_24 = local_34;
	local_38 = Q_stricmp(local_20, local_24);
	return local_38;
}

/*
=================
UI_BotSelectMenu_BuildList

Address: 0x1137e
Stack Size: 0x24
Calls: qsort, UI_GetNumBots
Called by: UI_BotSelectMenu_Init
=================
*/
void UI_BotSelectMenu_BuildList(void) {
	int		local_18;
	int		local_1c;
	int		local_20;

	bss_78140 = 0x0;
	local_1c = UI_GetNumBots();
	bss_7813c = local_1c;
	bss_78144 = (bss_7813c / 0x10);
	if ((bss_7813c %% 0x10) == 0x0) goto jmp_113a1;
	local_20 = 0x78144;
	*(int *)local_20 = (*(int *)local_20 + 0x1);
jmp_113a1:
	local_18 = 0x0;
	goto jmp_113b5;
jmp_113a6:
	*(int *)((local_18 << 0x2) + 0x7814c) = local_18;
	local_18 = (local_18 + 0x1);
jmp_113b5:
	if (local_18 < bss_7813c) goto jmp_113a6;
	qsort(0x7814c, bss_7813c, 0x4, 0x11334);
}

/*
=================
ServerPlayerIcon

Address: 0x113c8
Stack Size: 0x6c
Calls: trap_R_RegisterShaderNoMip, Q_stricmp, Com_sprintf, strrchr, Q_strncpyz
Called by: UI_BotSelectMenu_UpdateGrid
=================
*/
void ServerPlayerIcon(int arg_0, int arg_1, int arg_2) {
	int		local_1c;
	char	local_20[64];
	int		local_60;
	int		local_64;
	int		local_68;

	Q_strncpyz(local_20, arg_0, 0x40);
	local_60 = strrchr(local_20, 0x2f);
	local_1c = local_60;
	if (local_1c == 0x0) goto jmp_113f3;
	local_64 = local_1c;
	local_1c = (local_64 + 0x1);
	*(char *)local_64 = 0x0;
	goto jmp_113f6;
jmp_113f3:
	local_1c = 0x7cfc;
jmp_113f6:
	Com_sprintf(arg_1, arg_2, 0x7cde, local_20, local_1c);
	local_64 = trap_R_RegisterShaderNoMip(arg_1);
	if (local_64 != 0x0) goto jmp_1142b;
	local_68 = Q_stricmp(local_1c, 0x7cfc);
	if (local_68 == 0x0) goto jmp_1142b;
	Com_sprintf(arg_1, arg_2, 0x7cbb, local_20);
jmp_1142b:
}

/*
=================
UI_BotSelectMenu_UpdateGrid

Address: 0x1142d
Stack Size: 0x38
Calls: BotAlreadySelected, Q_CleanStr, Q_strncpyz, ServerPlayerIcon, Info_ValueForKey, UI_GetBotInfoByNumber
Called by: UI_BotSelectMenu_Init, UI_BotSelectMenu_RightEvent, UI_BotSelectMenu_LeftEvent
=================
*/
void UI_BotSelectMenu_UpdateGrid(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	local_18 = (bss_78140 << 0x4);
	local_14 = 0x0;
jmp_11437:
	if (local_18 >= bss_7813c) goto jmp_114c6;
	local_20 = UI_GetBotInfoByNumber(*(int *)((local_18 << 0x2) + 0x7814c));
	local_1c = local_20;
	local_24 = Info_ValueForKey(local_1c, 0x7cb5);
	ServerPlayerIcon(local_24, ((local_14 << 0x6) + 0x7914c), 0x40);
	local_28 = Info_ValueForKey(local_1c, 0x7ddc);
	Q_strncpyz(((local_14 << 0x4) + 0x7954c), local_28, 0x10);
	Q_CleanStr(((local_14 << 0x4) + 0x7954c));
	*(int *)((0x58 * local_14) + 0x77008) = ((local_14 << 0x6) + 0x7914c);
	local_30 = BotAlreadySelected(((local_14 << 0x4) + 0x7954c));
	if (local_30 == 0x0) goto jmp_114ac;
	*(int *)((0x48 * local_14) + 0x77b48) = 0x21b0;
	goto jmp_114b4;
jmp_114ac:
	*(int *)((0x48 * local_14) + 0x77b48) = 0x21a0;
jmp_114b4:
	local_34 = ((0x58 * local_14) + 0x775b0);
	*(int *)local_34 = (*(int *)local_34 & 0xffffbfff);
	goto jmp_114e6;
jmp_114c6:
	*(int *)((0x58 * local_14) + 0x77008) = 0x0;
	local_20 = ((0x58 * local_14) + 0x775b0);
	*(int *)local_20 = (*(int *)local_20 | 0x4000);
	*(char *)((local_14 << 0x4) + 0x7954c) = 0x0;
jmp_114e6:
	local_20 = ((0x58 * local_14) + 0x77030);
	*(int *)local_20 = (*(int *)local_20 & 0xffffffbf);
	*(int *)((0x58 * local_14) + 0x77048) = 0x0;
	local_24 = ((0x58 * local_14) + 0x775b0);
	*(int *)local_24 = (*(int *)local_24 | 0x100);
	local_20 = 0x1;
	local_14 = (local_14 + local_20);
	local_18 = (local_18 + local_20);
	if (local_14 < 0x10) goto jmp_11437;
	local_14 = (bss_78148 %% 0x10);
	local_24 = ((0x58 * local_14) + 0x77030);
	*(int *)local_24 = (*(int *)local_24 | 0x40);
	local_28 = ((0x58 * local_14) + 0x775b0);
	*(int *)local_28 = (*(int *)local_28 & 0xfffffeff);
	if (bss_78144 <= 0x1) goto jmp_1158a;
	if (bss_78140 <= 0x0) goto jmp_1155e;
	local_2c = 0x78008;
	*(int *)local_2c = (*(int *)local_2c & 0xffffbfff);
	goto jmp_11569;
jmp_1155e:
	local_2c = 0x78008;
	*(int *)local_2c = (*(int *)local_2c | 0x4000);
jmp_11569:
	if (bss_78140 >= (bss_78144 - 0x1)) goto jmp_1157d;
	local_2c = 0x78060;
	*(int *)local_2c = (*(int *)local_2c & 0xffffbfff);
	goto jmp_115a0;
jmp_1157d:
	local_2c = 0x78060;
	*(int *)local_2c = (*(int *)local_2c | 0x4000);
	goto jmp_115a0;
jmp_1158a:
	local_2c = 0x78008;
	*(int *)local_2c = (*(int *)local_2c | 0x4000);
	local_30 = 0x78060;
	*(int *)local_30 = (*(int *)local_30 | 0x4000);
jmp_115a0:
}

/*
=================
UI_BotSelectMenu_Default

Address: 0x115a2
Stack Size: 0x2c
Calls: Q_stricmp, Info_ValueForKey, UI_GetBotInfoByNumber
Called by: UI_BotSelectMenu_Init
=================
*/
void UI_BotSelectMenu_Default(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	arg_0 = arg_0;
	local_10 = 0x0;
	goto jmp_115da;
jmp_115ac:
	local_20 = UI_GetBotInfoByNumber(local_10);
	local_18 = local_20;
	local_24 = Info_ValueForKey(local_18, 0x7ddc);
	local_1c = local_24;
	local_28 = Q_stricmp(arg_0, local_1c);
	if (local_28 != 0x0) goto jmp_115d4;
	goto jmp_115df;
jmp_115d4:
	local_10 = (local_10 + 0x1);
jmp_115da:
	if (local_10 < bss_7813c) goto jmp_115ac;
jmp_115df:
	if (local_10 != bss_7813c) goto jmp_115e9;
	bss_78148 = 0x0;
	goto jmp_11613;
jmp_115e9:
	local_14 = 0x0;
	goto jmp_11600;
jmp_115ee:
	if (*(int *)((local_14 << 0x2) + 0x7814c) != local_10) goto jmp_115fa;
	goto jmp_11605;
jmp_115fa:
	local_14 = (local_14 + 0x1);
jmp_11600:
	if (local_14 < bss_7813c) goto jmp_115ee;
jmp_11605:
	if (local_14 != bss_7813c) goto jmp_1160f;
	bss_78148 = 0x0;
	goto jmp_11613;
jmp_1160f:
	bss_78148 = local_14;
jmp_11613:
}

/*
=================
UI_BotSelectMenu_LeftEvent

Address: 0x11615
Stack Size: 0xc
Calls: UI_BotSelectMenu_UpdateGrid
=================
*/
void UI_BotSelectMenu_LeftEvent(, int arg_1) {
	int		local_8;

	if (arg_1 == 0x3) goto jmp_1161c;
	goto jmp_11634;
jmp_1161c:
	if (bss_78140 <= 0x0) goto jmp_11634;
	local_8 = 0x78140;
	*(int *)local_8 = (*(int *)local_8 - 0x1);
	bss_78148 = (bss_78140 << 0x4);
	UI_BotSelectMenu_UpdateGrid();
jmp_11634:
}

/*
=================
UI_BotSelectMenu_RightEvent

Address: 0x11636
Stack Size: 0xc
Calls: UI_BotSelectMenu_UpdateGrid
=================
*/
void UI_BotSelectMenu_RightEvent(, int arg_1) {
	int		local_8;

	if (arg_1 == 0x3) goto jmp_1163d;
	goto jmp_11658;
jmp_1163d:
	if (bss_78140 >= (bss_78144 - 0x1)) goto jmp_11658;
	local_8 = 0x78140;
	*(int *)local_8 = (*(int *)local_8 + 0x1);
	bss_78148 = (bss_78140 << 0x4);
	UI_BotSelectMenu_UpdateGrid();
jmp_11658:
}

/*
=================
UI_BotSelectMenu_BotEvent

Address: 0x1165a
Stack Size: 0x14
=================
*/
void UI_BotSelectMenu_BotEvent(int arg_0, int arg_1) {
	int		local_8;
	int		local_c;
	int		local_10;

	if (arg_1 == 0x3) goto jmp_11661;
	goto jmp_116be;
jmp_11661:
	local_8 = 0x0;
jmp_11664:
	local_c = ((0x58 * local_8) + 0x77030);
	*(int *)local_c = (*(int *)local_c & 0xffffffbf);
	local_10 = ((0x58 * local_8) + 0x775b0);
	*(int *)local_10 = (*(int *)local_10 | 0x100);
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x10) goto jmp_11664;
	local_8 = *(int *)(arg_0 + 0x8);
	local_c = ((0x58 * local_8) + 0x77030);
	*(int *)local_c = (*(int *)local_c | 0x40);
	local_10 = ((0x58 * local_8) + 0x775b0);
	*(int *)local_10 = (*(int *)local_10 & 0xfffffeff);
	bss_78148 = ((bss_78140 << 0x4) + local_8);
jmp_116be:
}

/*
=================
UI_BotSelectMenu_BackEvent

Address: 0x116c0
Stack Size: 0x8
Calls: UI_PopMenu
=================
*/
void UI_BotSelectMenu_BackEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_116c7;
	goto jmp_116ca;
jmp_116c7:
	UI_PopMenu();
jmp_116ca:
}

/*
=================
UI_BotSelectMenu_SelectEvent

Address: 0x116cc
Stack Size: 0x18
Calls: Q_strncpyz, UI_PopMenu
=================
*/
void UI_BotSelectMenu_SelectEvent(, int arg_1) {
	int		local_14;

	if (arg_1 == 0x3) goto jmp_116d3;
	goto jmp_116ee;
jmp_116d3:
	UI_PopMenu();
	bss_7ad6c = 0x1;
#define next_call_arg_0 "0x7ad74"
	local_14 = 0x10;
#define next_call_arg_1 "(((bss_78148 %% local_14) << 0x4) + 0x7954c)"
#define next_call_arg_2 "local_14"
	Q_strncpyz();
jmp_116ee:
}

/*
=================
UI_BotSelectMenu_Cache

Address: 0x116f0
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_BotSelectMenu_Init, UI_Cache_f
=================
*/
void UI_BotSelectMenu_Cache(void) {

	trap_R_RegisterShaderNoMip(0x7fff);
	trap_R_RegisterShaderNoMip(0x7fef);
	trap_R_RegisterShaderNoMip(0x7ca3);
	trap_R_RegisterShaderNoMip(0x7c91);
	trap_R_RegisterShaderNoMip(0x7c77);
	trap_R_RegisterShaderNoMip(0x7c5b);
	trap_R_RegisterShaderNoMip(0x8039);
	trap_R_RegisterShaderNoMip(0x8024);
	trap_R_RegisterShaderNoMip(0x800f);
}

/*
=================
UI_BotSelectMenu_Init

Address: 0x11720
Stack Size: 0x38
Calls: memset, UI_BotSelectMenu_UpdateGrid, UI_BotSelectMenu_Default, UI_BotSelectMenu_BuildList, Menu_AddItem, UI_BotSelectMenu_Cache
Called by: UI_BotSelectMenu
=================
*/
void UI_BotSelectMenu_Init(int arg_0) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	char	local_2c[12];

	memset(0x76e9c, 0x0, 0x27b0);
	bss_76fb0 = 0x1;
	bss_76fb4 = 0x1;
	UI_BotSelectMenu_Cache();
	bss_76fbc = 0xa;
	bss_76fc8 = 0x140;
	bss_76fcc = 0x10;
	bss_76ff8 = 0x7c50;
	bss_77000 = 0x2160;
	bss_76ffc = 0x1;
	local_1c = 0x50;
	local_28 = 0x0;
	local_24 = local_28;
	local_14 = local_28;
	goto jmp_11893;
jmp_11755:
	local_18 = 0xb4;
	local_20 = 0x0;
jmp_1175b:
	*(int *)((0x58 * local_14) + 0x77004) = 0x6;
	*(int *)((0x58 * local_14) + 0x77030) = 0x4004;
	*(int *)((0x58 * local_14) + 0x77010) = local_18;
	*(int *)((0x58 * local_14) + 0x77014) = local_1c;
	*(int *)((0x58 * local_14) + 0x77008) = ((local_14 << 0x6) + 0x7914c);
	*(int *)((0x58 * local_14) + 0x77050) = 0x40;
	*(int *)((0x58 * local_14) + 0x77054) = 0x40;
	*(int *)((0x58 * local_14) + 0x77040) = 0x7c5b;
	*(int *)((0x58 * local_14) + 0x77058) = 0x29c8;
	*(int *)((0x58 * local_14) + 0x77584) = 0x6;
	*(int *)((0x58 * local_14) + 0x775b0) = 0x8104;
	*(int *)((0x58 * local_14) + 0x775b4) = 0x1165a;
	*(int *)((0x58 * local_14) + 0x7758c) = local_14;
	*(int *)((0x58 * local_14) + 0x77590) = (local_18 - 0x10);
	*(int *)((0x58 * local_14) + 0x77594) = (local_1c - 0x10);
	*(int *)((0x58 * local_14) + 0x77598) = local_18;
	*(int *)((0x58 * local_14) + 0x7759c) = local_1c;
	*(int *)((0x58 * local_14) + 0x775a0) = (local_18 + 0x40);
	*(int *)((0x58 * local_14) + 0x775a4) = (local_1c + 0x40);
	*(int *)((0x58 * local_14) + 0x775d0) = 0x80;
	*(int *)((0x58 * local_14) + 0x775d4) = 0x80;
	*(int *)((0x58 * local_14) + 0x775c0) = 0x7c77;
	*(int *)((0x58 * local_14) + 0x775d8) = 0x29c8;
	*(int *)((0x48 * local_14) + 0x77b04) = 0x7;
	*(int *)((0x48 * local_14) + 0x77b30) = 0x2;
	*(int *)((0x48 * local_14) + 0x77b10) = (local_18 + 0x20);
	*(int *)((0x48 * local_14) + 0x77b14) = (local_1c + 0x40);
	*(int *)((0x48 * local_14) + 0x77b40) = ((local_14 << 0x4) + 0x7954c);
	*(int *)((0x48 * local_14) + 0x77b48) = 0x21a0;
	*(int *)((0x48 * local_14) + 0x77b44) = 0x11;
	local_18 = (local_18 + 0x46);
	*(int *)local_2c = 0x1;
	local_20 = (local_20 + *(int *)local_2c);
	local_14 = (local_14 + *(int *)local_2c);
	if (local_20 < 0x4) goto jmp_1175b;
	local_1c = (local_1c + 0x56);
	local_24 = (local_24 + 0x1);
jmp_11893:
	if (local_24 < 0x4) goto jmp_11755;
	bss_77f84 = 0x6;
	bss_77f88 = 0x8039;
	bss_77fb0 = 0x4000;
	bss_77f90 = 0x104;
	bss_77f94 = 0x1b8;
	bss_77fd0 = 0x80;
	bss_77fd4 = 0x20;
	bss_77fdc = 0x6;
	bss_78008 = 0x104;
	bss_7800c = 0x11615;
	bss_77fe8 = 0x104;
	bss_77fec = 0x1b8;
	bss_78028 = 0x40;
	bss_7802c = 0x20;
	bss_78018 = 0x8024;
	bss_78034 = 0x6;
	bss_78060 = 0x104;
	bss_78064 = 0x11636;
	bss_78040 = 0x141;
	bss_78044 = 0x1b8;
	bss_78080 = 0x40;
	bss_78084 = 0x20;
	bss_78070 = 0x800f;
	bss_780e4 = 0x6;
	bss_780e8 = 0x7fff;
	bss_78110 = 0x104;
	bss_78114 = 0x116c0;
	bss_780f0 = 0x0;
	bss_780f4 = 0x1a0;
	bss_78130 = 0x80;
	bss_78134 = 0x40;
	bss_78120 = 0x7fef;
	bss_7808c = 0x6;
	bss_78090 = 0x7ca3;
	bss_780b8 = 0x110;
	bss_780bc = 0x116cc;
	bss_78098 = 0x280;
	bss_7809c = 0x1a0;
	bss_780d8 = 0x80;
	bss_780dc = 0x40;
	bss_780c8 = 0x7c91;
	Menu_AddItem(0x76e9c, 0x76fbc);
	local_24 = 0x0;
jmp_1191c:
	Menu_AddItem(0x76e9c, ((0x58 * local_24) + 0x77004));
	Menu_AddItem(0x76e9c, ((0x58 * local_24) + 0x77584));
	Menu_AddItem(0x76e9c, ((0x48 * local_24) + 0x77b04));
	local_24 = (local_24 + 0x1);
	if (local_24 < 0x10) goto jmp_1191c;
	Menu_AddItem(0x76e9c, 0x77f84);
	Menu_AddItem(0x76e9c, 0x77fdc);
	Menu_AddItem(0x76e9c, 0x78034);
	Menu_AddItem(0x76e9c, 0x780e4);
	Menu_AddItem(0x76e9c, 0x7808c);
	UI_BotSelectMenu_BuildList();
	UI_BotSelectMenu_Default(arg_0);
	bss_78140 = (bss_78148 / 0x10);
	UI_BotSelectMenu_UpdateGrid();
}

/*
=================
UI_BotSelectMenu

Address: 0x11981
Stack Size: 0xc
Calls: UI_PushMenu, UI_BotSelectMenu_Init
Called by: ServerOptions_PlayerNameEvent
=================
*/
void UI_BotSelectMenu(int arg_0) {

	UI_BotSelectMenu_Init(arg_0);
	UI_PushMenu(0x76e9c);
}

/*
=================
TeamMain_MenuEvent

Address: 0x1198f
Stack Size: 0x18
Calls: trap_Cmd_ExecuteText, UI_ForceMenuOff
=================
*/
void TeamMain_MenuEvent(int arg_0, int arg_1) {
	char	local_10[8];

	if (arg_1 == 0x3) goto jmp_11996;
	goto jmp_119db;
jmp_11996:
	*(int *)local_10 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_10 < 0x64) goto jmp_119db;
	if (*(int *)local_10 > 0x67) goto jmp_119db;
	goto *(int *)((*(int *)local_10 << 0x2) + 0x2538);
	trap_Cmd_ExecuteText(0x2, 0x81c6);
	UI_ForceMenuOff();
	goto jmp_119db;
	trap_Cmd_ExecuteText(0x2, 0x81b7);
	UI_ForceMenuOff();
	goto jmp_119db;
	trap_Cmd_ExecuteText(0x2, 0x81a8);
	UI_ForceMenuOff();
	goto jmp_119db;
	trap_Cmd_ExecuteText(0x2, 0x8194);
	UI_ForceMenuOff();
jmp_119db:
}

/*
=================
TeamMain_MenuInit

Address: 0x119dd
Stack Size: 0x434
Calls: trap_GetConfigString, memset, Menu_AddItem, atoi, Info_ValueForKey, TeamMain_Cache
Called by: UI_TeamMainMenu
=================
*/
void TeamMain_MenuInit(void) {
	int		local_14;
	int		local_18;
	char	local_1c[1024];
	int		local_41c;
	int		local_420;
	int		local_424;
	int		local_428;
	int		local_42c;
	int		local_430;

	memset(0x7c588, 0x0, 0x298);
	TeamMain_Cache();
	bss_7c69c = 0x1;
	bss_7c6a0 = 0x0;
	bss_7c6a8 = 0x6;
	bss_7c6d4 = 0x4000;
	bss_7c6ac = 0x8181;
	bss_7c6b4 = 0x8e;
	bss_7c6b8 = 0x76;
	bss_7c6f4 = 0x167;
	bss_7c6f8 = 0x100;
	local_14 = 0xc2;
	bss_7c700 = 0x9;
	bss_7c72c = 0x108;
	bss_7c708 = 0x64;
	bss_7c730 = 0x1198f;
	bss_7c70c = 0x140;
	bss_7c710 = local_14;
	bss_7c73c = 0x8178;
	bss_7c740 = 0x11;
	bss_7c744 = 0x29c8;
	local_14 = (local_14 + 0x14);
	bss_7c748 = 0x9;
	bss_7c774 = 0x108;
	bss_7c750 = 0x65;
	bss_7c778 = 0x1198f;
	bss_7c754 = 0x140;
	bss_7c758 = local_14;
	bss_7c784 = 0x816e;
	bss_7c788 = 0x11;
	bss_7c78c = 0x29c8;
	local_14 = (local_14 + 0x14);
	bss_7c790 = 0x9;
	bss_7c7bc = 0x108;
	bss_7c798 = 0x66;
	bss_7c7c0 = 0x1198f;
	bss_7c79c = 0x140;
	bss_7c7a0 = local_14;
	bss_7c7cc = 0x8164;
	bss_7c7d0 = 0x11;
	bss_7c7d4 = 0x29c8;
	local_14 = (local_14 + 0x14);
	bss_7c7d8 = 0x9;
	bss_7c804 = 0x108;
	bss_7c7e0 = 0x67;
	bss_7c808 = 0x1198f;
	bss_7c7e4 = 0x140;
	bss_7c7e8 = local_14;
	bss_7c814 = 0x815b;
	bss_7c818 = 0x11;
	bss_7c81c = 0x29c8;
	trap_GetConfigString(0x0, local_1c, 0x400);
	local_41c = Info_ValueForKey(local_1c, 0x8150);
	local_420 = atoi(local_41c);
	local_18 = local_420;
	local_424 = local_18;
	if (local_424 < 0x0) goto jmp_11ad2;
	if (local_424 > 0x4) goto jmp_11ad2;
	goto *(int *)((local_424 << 0x2) + 0x26d8);
	local_428 = 0x7c72c;
	*(int *)local_428 = (*(int *)local_428 | 0x2000);
	local_42c = 0x7c774;
	*(int *)local_42c = (*(int *)local_42c | 0x2000);
	goto jmp_11add;
jmp_11ad2:
	local_430 = 0x7c7bc;
	*(int *)local_430 = (*(int *)local_430 | 0x2000);
jmp_11add:
	Menu_AddItem(0x7c588, 0x7c6a8);
	Menu_AddItem(0x7c588, 0x7c700);
	Menu_AddItem(0x7c588, 0x7c748);
	Menu_AddItem(0x7c588, 0x7c790);
	Menu_AddItem(0x7c588, 0x7c7d8);
}

/*
=================
TeamMain_Cache

Address: 0x11b02
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: TeamMain_MenuInit, UI_Cache_f
=================
*/
void TeamMain_Cache(void) {

	trap_R_RegisterShaderNoMip(0x8181);
}

/*
=================
UI_TeamMainMenu

Address: 0x11b0a
Stack Size: 0xc
Calls: UI_PushMenu, TeamMain_MenuInit
Called by: InGame_Event
=================
*/
void UI_TeamMainMenu(void) {

	TeamMain_MenuInit();
	UI_PushMenu(0x7c588);
}

/*
=================
UI_TeamOrdersMenu_BackEvent

Address: 0x11b15
Stack Size: 0x8
Calls: UI_PopMenu
=================
*/
void UI_TeamOrdersMenu_BackEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_11b1c;
	goto jmp_11b1f;
jmp_11b1c:
	UI_PopMenu();
jmp_11b1f:
}

/*
=================
UI_TeamOrdersMenu_SetList

Address: 0x11b21
Stack Size: 0xc
Called by: UI_TeamOrdersMenu_Init, UI_TeamOrdersMenu_ListEvent
=================
*/
void UI_TeamOrdersMenu_SetList(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	if (local_8 == 0xa) goto jmp_11b34;
	if (local_8 == 0xb) goto jmp_11b41;
	if (local_8 == 0xc) goto jmp_11b4d;
	goto jmp_11b34;
jmp_11b34:
	bss_7c9e8 = arg_0;
	bss_7ca24 = bss_7ca9c;
	bss_7ca2c = 0x7caa4;
	goto jmp_11b57;
jmp_11b41:
	bss_7c9e8 = arg_0;
	bss_7ca24 = 0x7;
	bss_7ca2c = 0x26ec;
	goto jmp_11b57;
jmp_11b4d:
	bss_7c9e8 = arg_0;
	bss_7ca24 = 0x6;
	bss_7ca2c = 0x272c;
jmp_11b57:
	bss_7ca00 = (bss_7c9f8 + (0x1b * bss_7ca24));
}

/*
=================
UI_TeamOrdersMenu_Key

Address: 0x11b62
Stack Size: 0x60
Calls: UI_CursorInRect, Menu_DefaultKey, Menu_ItemAtCursor
=================
*/
int UI_TeamOrdersMenu_Key(int arg_0) {
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
	char	local_4c[8];
	char	local_54[8];
	int		local_5c;

	arg_0 = arg_0;
	local_28 = Menu_ItemAtCursor(0x7c820);
	local_18 = local_28;
	if (local_18 == 0x7c9e0) goto jmp_11b83;
	local_2c = Menu_DefaultKey(0x7c820, arg_0);
	return local_2c;
jmp_11b83:
	*(int *)local_30 = 0xa1;
	if (arg_0 == *(int *)local_30) goto jmp_11c1a;
	if (arg_0 > *(int *)local_30) goto jmp_11b9a;
	if (arg_0 == 0x84) goto jmp_11c1a;
	if (arg_0 == 0x85) goto jmp_11c4c;
	goto jmp_11c7e;
jmp_11b9a:
	local_3c = 0xa7;
	if (arg_0 == local_3c) goto jmp_11c4c;
	if (arg_0 < local_3c) goto jmp_11c7e;
	if (arg_0 == 0xb2) goto jmp_11bad;
	goto jmp_11c7e;
jmp_11bad:
	local_20 = *(int *)(local_18 + 0x14);
	local_1c = *(int *)(local_18 + 0x18);
	local_44 = local_20;
#define next_call_arg_0 "local_44"
	local_48 = local_1c;
#define next_call_arg_1 "local_48"
#define next_call_arg_2 "(*(int *)(local_18 + 0x1c) - local_44)"
#define next_call_arg_3 "(*(int *)(local_18 + 0x20) - local_48)"
	*(int *)local_4c = UI_CursorInRect();
	if (*(int *)local_4c == 0x0) goto jmp_11c15;
	local_24 = ((bss_db60 - local_1c) / 0x1b);
	*(int *)(local_18 + 0x3c) = *(int *)(local_18 + 0x40);
	*(int *)(local_18 + 0x40) = local_24;
	if (*(int *)(local_18 + 0x30) == 0x0) goto jmp_11c15;
	(*(*(int *)(local_18 + 0x30)))(local_18, 0x3);
	return menu_move_sound;
jmp_11c15:
	return menu_null_sound;
jmp_11c1a:
	*(int *)(local_18 + 0x3c) = *(int *)(local_18 + 0x40);
	if (*(int *)(local_18 + 0x40) != 0x0) goto jmp_11c39;
	*(int *)(local_18 + 0x40) = (*(int *)(local_18 + 0x44) - 0x1);
	goto jmp_11c47;
jmp_11c39:
	*(int *)local_54 = (local_18 + 0x40);
	*(int *)*(int *)local_54 = (*(int *)*(int *)local_54 - 0x1);
jmp_11c47:
	return menu_move_sound;
jmp_11c4c:
	*(int *)(local_18 + 0x3c) = *(int *)(local_18 + 0x40);
	if (*(int *)(local_18 + 0x40) != (*(int *)(local_18 + 0x44) - 0x1)) goto jmp_11c6b;
	*(int *)(local_18 + 0x40) = 0x0;
	goto jmp_11c79;
jmp_11c6b:
	local_5c = (local_18 + 0x40);
	*(int *)local_5c = (*(int *)local_5c + 0x1);
jmp_11c79:
	return menu_move_sound;
jmp_11c7e:
	local_40 = Menu_DefaultKey(0x7c820, arg_0);
	return local_40;
}

/*
=================
UI_TeamOrdersMenu_ListDraw

Address: 0x11c8c
Stack Size: 0x40
Calls: UI_DrawProportionalString
=================
*/
void UI_TeamOrdersMenu_ListDraw(int arg_0) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	char	local_38[8];

	local_20 = arg_0;
	if (*(int *)*(int *)(local_20 + 0x24) != *(int *)(local_20 + 0x28)) goto jmp_11ca2;
	*(int *)local_38 = 0x1;
	goto jmp_11ca5;
jmp_11ca2:
	*(int *)local_38 = 0x0;
jmp_11ca5:
	local_34 = *(int *)local_38;
	local_30 = 0x140;
	local_28 = *(int *)(local_20 + 0x10);
	local_1c = 0x0;
	goto jmp_11cfc;
jmp_11cb8:
	local_24 = 0x11;
	if (local_1c != *(int *)(local_20 + 0x40)) goto jmp_11cd2;
	local_2c = 0x2170;
	if (local_34 == 0x0) goto jmp_11cd5;
	local_24 = (local_24 | 0x4000);
	goto jmp_11cd5;
jmp_11cd2:
	local_2c = 0x21a0;
jmp_11cd5:
	UI_DrawProportionalString(local_30, local_28, *(int *)((local_1c << 0x2) + *(int *)(local_20 + 0x4c)), local_24, local_2c);
	local_28 = (local_28 + 0x1b);
	local_1c = (local_1c + 0x1);
jmp_11cfc:
	if (local_1c < *(int *)(local_20 + 0x44)) goto jmp_11cb8;
}

/*
=================
UI_TeamOrdersMenu_ListEvent

Address: 0x11d06
Stack Size: 0x128
Calls: trap_Cmd_ExecuteText, UI_PopMenu, va, Com_sprintf, UI_TeamOrdersMenu_SetList
=================
*/
void UI_TeamOrdersMenu_ListEvent(int arg_0, int arg_1) {
	int		local_18;
	char	local_1c[256];
	int		local_11c;
	int		local_120;
	int		local_124;

	if (arg_1 == 0x3) goto jmp_11d0d;
	goto jmp_11d7e;
jmp_11d0d:
	local_120 = arg_0;
	local_18 = *(int *)(local_120 + 0x8);
	local_11c = *(int *)(local_120 + 0x40);
	if (local_18 != 0xa) goto jmp_11d39;
	bss_7caa0 = local_11c;
	if (bss_7ca98 != 0x4) goto jmp_11d32;
	UI_TeamOrdersMenu_SetList(0xb);
	goto jmp_11d7e;
jmp_11d32:
	UI_TeamOrdersMenu_SetList(0xc);
	goto jmp_11d7e;
jmp_11d39:
	if (local_18 != 0xb) goto jmp_11d55;
	Com_sprintf(local_1c, 0x100, *(int *)((local_11c << 0x2) + 0x270c), ((bss_7caa0 << 0x4) + 0x7cac8));
	goto jmp_11d6b;
jmp_11d55:
	Com_sprintf(local_1c, 0x100, *(int *)((local_11c << 0x2) + 0x2748), ((bss_7caa0 << 0x4) + 0x7cac8));
jmp_11d6b:
	local_124 = va(0x8241, local_1c);
	trap_Cmd_ExecuteText(0x2, local_124);
	UI_PopMenu();
jmp_11d7e:
}

/*
=================
UI_TeamOrdersMenu_BuildBotList

Address: 0x11d80
Stack Size: 0x105c
Calls: trap_GetConfigString, trap_GetClientState, Q_CleanStr, atoi, Info_ValueForKey, Q_strncpyz
Called by: UI_TeamOrdersMenu_Init
=================
*/
void UI_TeamOrdersMenu_BuildBotList(void) {
	int		local_14;
	char	local_18[1024];
	int		local_418;
	int		local_41c;
	char	local_420[8];
	char	local_428[3076];
	int		local_102c;
	int		local_1030;
	int		local_1034;
	int		local_1038;
	int		local_103c;
	int		local_1040;
	int		local_1044;
	int		local_1048;
	int		local_104c;
	int		local_1050;
	int		local_1054;
	int		local_1058;

	local_14 = 0x0;
jmp_11d84:
	*(int *)((local_14 << 0x2) + 0x7caa4) = ((local_14 << 0x4) + 0x7cac8);
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x9) goto jmp_11d84;
	trap_GetClientState(local_420);
	Q_strncpyz(0x7cac8, 0x8238, 0x10);
	bss_7ca9c = 0x1;
	trap_GetConfigString(0x0, local_18, 0x400);
	local_1034 = Info_ValueForKey(local_18, 0x822a);
	local_1038 = atoi(local_1034);
	local_102c = local_1038;
	local_103c = Info_ValueForKey(local_18, 0x821f);
	local_1040 = atoi(local_103c);
	bss_7ca98 = local_1040;
	trap_GetConfigString((*(int *)local_428 + 0x220), local_18, 0x400);
	local_1044 = Info_ValueForKey(local_18, 0x821d);
	*(char *)&local_1030 = *(char *)local_1044;
	local_14 = 0x0;
	goto jmp_11e6d;
jmp_11df9:
	if (local_14 != *(int *)local_428) goto jmp_11e00;
	goto jmp_11e67;
jmp_11e00:
	trap_GetConfigString((local_14 + 0x220), local_18, 0x400);
	local_1048 = Info_ValueForKey(local_18, 0x8217);
	local_104c = atoi(local_1048);
	local_418 = local_104c;
	if (local_418 != 0x0) goto jmp_11e25;
	goto jmp_11e67;
jmp_11e25:
	local_1050 = Info_ValueForKey(local_18, 0x821d);
	*(char *)&local_41c = *(char *)local_1050;
	if ((char)*(char *)&local_41c == (char)*(char *)&local_1030) goto jmp_11e3b;
	goto jmp_11e67;
jmp_11e3b:
	local_1054 = Info_ValueForKey(local_18, 0x8215);
	Q_strncpyz(((bss_7ca9c << 0x4) + 0x7cac8), local_1054, 0x10);
	Q_CleanStr(((bss_7ca9c << 0x4) + 0x7cac8));
	local_1058 = 0x7ca9c;
	*(int *)local_1058 = (*(int *)local_1058 + 0x1);
jmp_11e67:
	local_14 = (local_14 + 0x1);
jmp_11e6d:
	if (local_14 >= local_102c) goto jmp_11e76;
	if (bss_7ca9c < 0x9) goto jmp_11df9;
jmp_11e76:
}

/*
=================
UI_TeamOrdersMenu_Init

Address: 0x11e78
Stack Size: 0x14
Calls: memset, UI_TeamOrdersMenu_SetList, Menu_AddItem, UI_TeamOrdersMenu_BuildBotList, UI_TeamOrdersMenu_Cache
Called by: UI_TeamOrdersMenu
=================
*/
void UI_TeamOrdersMenu_Init(void) {

	UI_TeamOrdersMenu_Cache();
	memset(0x7c820, 0x0, 0x338);
	bss_7c938 = 0x0;
	bss_7c930 = 0x11b62;
	UI_TeamOrdersMenu_BuildBotList();
	bss_7c940 = 0xa;
	bss_7c94c = 0x140;
	bss_7c950 = 0x10;
	bss_7c97c = 0x8209;
	bss_7c984 = 0x2160;
	bss_7c980 = 0x1;
	bss_7c988 = 0x6;
	bss_7c9b4 = 0x4000;
	bss_7c98c = 0x81f4;
	bss_7c994 = 0x57;
	bss_7c998 = 0x4a;
	bss_7c9d4 = 0x1d2;
	bss_7c9d8 = 0x14c;
	bss_7c9e0 = 0x8;
	bss_7ca0c = 0x100;
	bss_7ca18 = 0x11c8c;
	bss_7ca10 = 0x11d06;
	bss_7c9ec = 0x100;
	bss_7c9f0 = 0x78;
	bss_7ca40 = 0x6;
	bss_7ca44 = 0x81e4;
	bss_7ca6c = 0x104;
	bss_7ca70 = 0x11b15;
	bss_7ca4c = 0x0;
	bss_7ca50 = 0x1a0;
	bss_7ca8c = 0x80;
	bss_7ca90 = 0x40;
	bss_7ca7c = 0x81d4;
	Menu_AddItem(0x7c820, 0x7c940);
	Menu_AddItem(0x7c820, 0x7c988);
	Menu_AddItem(0x7c820, 0x7c9e0);
	Menu_AddItem(0x7c820, 0x7ca40);
	bss_7c9f4 = 0xdc;
	bss_7c9f8 = bss_7c9f0;
	bss_7c9fc = 0x1a4;
	UI_TeamOrdersMenu_SetList(0xa);
}

/*
=================
UI_TeamOrdersMenu_Cache

Address: 0x11f0f
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: UI_TeamOrdersMenu_Init
=================
*/
void UI_TeamOrdersMenu_Cache(void) {

	trap_R_RegisterShaderNoMip(0x81f4);
	trap_R_RegisterShaderNoMip(0x81e4);
	trap_R_RegisterShaderNoMip(0x81d4);
}

/*
=================
UI_TeamOrdersMenu

Address: 0x11f21
Stack Size: 0xc
Calls: UI_PushMenu, UI_TeamOrdersMenu_Init
Called by: UI_TeamOrdersMenu_f, InGame_Event
=================
*/
void UI_TeamOrdersMenu(void) {

	UI_TeamOrdersMenu_Init();
	UI_PushMenu(0x7c820);
}

/*
=================
UI_TeamOrdersMenu_f

Address: 0x11f2c
Stack Size: 0x1034
Calls: trap_GetClientState, trap_GetConfigString, UI_TeamOrdersMenu, atoi, Info_ValueForKey
Called by: UI_ConsoleCommand
=================
*/
void UI_TeamOrdersMenu_f(void) {
	char	local_14[1024];
	char	local_414[8];
	char	local_41c[3076];
	int		local_1020;
	int		local_1024;
	int		local_1028;
	int		local_102c;
	int		local_1030;

	trap_GetConfigString(0x0, local_14, 0x400);
	local_1024 = Info_ValueForKey(local_14, 0x821f);
	local_1028 = atoi(local_1024);
	bss_7ca98 = local_1028;
	if (bss_7ca98 >= 0x3) goto jmp_11f4f;
	goto jmp_11f7c;
jmp_11f4f:
	trap_GetClientState(local_414);
	trap_GetConfigString((*(int *)local_41c + 0x220), local_14, 0x400);
	local_102c = Info_ValueForKey(local_14, 0x821d);
	local_1030 = atoi(local_102c);
	local_1020 = local_1030;
	if (local_1020 != 0x3) goto jmp_11f79;
	goto jmp_11f7c;
jmp_11f79:
	UI_TeamOrdersMenu();
jmp_11f7c:
}

/*
=================
DriverInfo_Event

Address: 0x11f7e
Stack Size: 0xc
Calls: UI_PopMenu
=================
*/
void DriverInfo_Event(int arg_0, int arg_1) {
	int		local_8;

	if (arg_1 == 0x3) goto jmp_11f85;
	goto jmp_11f95;
jmp_11f85:
	local_8 = *(int *)(arg_0 + 0x8);
	if (local_8 == 0x64) goto jmp_11f92;
	goto jmp_11f95;
jmp_11f92:
	UI_PopMenu();
jmp_11f95:
}

/*
=================
DriverInfo_MenuDraw

Address: 0x11f97
Stack Size: 0x28
Calls: va, UI_DrawString, Menu_Draw
=================
*/
void DriverInfo_MenuDraw(void) {
	int		local_1c;
	int		local_20;
	int		local_24;

	Menu_Draw(0x7db30);
	UI_DrawString(0x140, 0x50, 0x86e2, 0x11, 0x21b0);
	UI_DrawString(0x140, 0x98, 0x86d6, 0x11, 0x21b0);
	UI_DrawString(0x140, 0xc0, 0x86cb, 0x11, 0x21b0);
	UI_DrawString(0x140, 0x60, 0xdf8c, 0x11, 0x21f0);
	UI_DrawString(0x140, 0x70, 0xe38c, 0x11, 0x21f0);
	UI_DrawString(0x140, 0x80, 0xdb8c, 0x11, 0x21f0);
	local_24 = va(0x86a0, bss_10794, bss_10798, bss_1079c);
	UI_DrawString(0x140, 0xa8, local_24, 0x11, 0x21f0);
	local_20 = 0xd0;
	local_1c = 0x0;
	goto jmp_12048;
jmp_12010:
	UI_DrawString(0x13c, local_20, *(int *)(((local_1c << 0x1) << 0x2) + 0x7e1a0), 0x12, 0x21f0);
	UI_DrawString(0x144, local_20, *(int *)(((local_1c << 0x1) << 0x2) + 0x7e1a4), 0x10, 0x21f0);
	local_20 = (local_20 + 0x10);
	local_1c = (local_1c + 0x1);
jmp_12048:
	if (local_1c < (bss_7e2a0 / 0x2)) goto jmp_12010;
	if ((bss_7e2a0 & 0x1) == 0x0) goto jmp_12069;
	UI_DrawString(0x140, local_20, *(int *)((bss_7e2a0 << 0x2) + 0x7e19c), 0x11, 0x21f0);
jmp_12069:
}

/*
=================
DriverInfo_Cache

Address: 0x1206b
Stack Size: 0x10
Calls: trap_R_RegisterShaderNoMip
Called by: UI_DriverInfo_Menu, UI_Cache_f
=================
*/
void DriverInfo_Cache(void) {
	int		local_c;

	local_c = 0x0;
jmp_1206f:
	if (*(int *)((local_c << 0x2) + 0x2764) != 0x0) goto jmp_1207a;
	goto jmp_1208d;
jmp_1207a:
	trap_R_RegisterShaderNoMip(*(int *)((local_c << 0x2) + 0x2764));
	local_c = (local_c + 0x1);
	goto jmp_1206f;
jmp_1208d:
}

/*
=================
UI_DriverInfo_Menu

Address: 0x1208f
Stack Size: 0x38
Calls: memset, UI_PushMenu, Menu_AddItem, strlen, Q_strncpyz, DriverInfo_Cache
Called by: GraphicsOptions_Event
=================
*/
void UI_DriverInfo_Menu(void) {
	int		local_14;
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;

	memset(0x7db30, 0x0, 0x774);
	DriverInfo_Cache();
	bss_7dc48 = 0x1;
	bss_7dc3c = 0x11f97;
	bss_7dc50 = 0xa;
	bss_7dc5c = 0x140;
	bss_7dc60 = 0x10;
	bss_7dc8c = 0x8694;
	bss_7dc94 = 0x2160;
	bss_7dc90 = 0x1;
	bss_7dcf0 = 0x6;
	bss_7dcf4 = 0x871b;
	bss_7dd1c = 0x4000;
	bss_7dcfc = 0x0;
	bss_7dd00 = 0x4e;
	bss_7dd3c = 0x100;
	bss_7dd40 = 0x149;
	bss_7dd48 = 0x6;
	bss_7dd4c = 0x8709;
	bss_7dd74 = 0x4000;
	bss_7dd54 = 0x178;
	bss_7dd58 = 0x4c;
	bss_7dd94 = 0x100;
	bss_7dd98 = 0x14e;
	bss_7dc98 = 0x6;
	bss_7dc9c = 0x86f9;
	bss_7dcc4 = 0x104;
	bss_7dcc8 = 0x11f7e;
	bss_7dca0 = 0x64;
	bss_7dca4 = 0x0;
	bss_7dca8 = 0x1a0;
	bss_7dce4 = 0x80;
	bss_7dce8 = 0x40;
	bss_7dcd4 = 0x86e9;
	Q_strncpyz(0x7dda0, 0xe78c, 0x400);
	local_14 = 0x7dda0;
	goto jmp_12162;
jmp_1210a:
	local_20 = local_14;
	local_14 = (local_20 + 0x1);
	*(char *)local_20 = 0x0;
jmp_12118:
	local_24 = (char)*(char *)local_14;
	if (local_24 == 0x0) goto jmp_12126;
	if (local_24 == 0x20) goto jmp_1210a;
jmp_12126:
	local_28 = (char)*(char *)local_14;
	if (local_28 == 0x0) goto jmp_12154;
	if (local_28 == 0x20) goto jmp_12154;
	local_30 = 0x7e2a0;
	local_2c = *(int *)local_30;
	*(int *)local_30 = (local_2c + 0x1);
	*(int *)((local_2c << 0x2) + 0x7e1a0) = local_14;
	goto jmp_12154;
jmp_1214e:
	local_14 = (local_14 + 0x1);
jmp_12154:
	local_34 = (char)*(char *)local_14;
	if (local_34 == 0x0) goto jmp_12162;
	if (local_34 != 0x20) goto jmp_1214e;
jmp_12162:
	if (bss_7e2a0 >= 0x28) goto jmp_1216c;
	if ((char)*(char *)local_14 != 0x0) goto jmp_12118;
jmp_1216c:
	local_18 = 0x0;
	goto jmp_121a5;
jmp_12171:
	local_20 = strlen(*(int *)((local_18 << 0x2) + 0x7e1a0));
	local_1c = local_20;
	if (local_1c <= 0x20) goto jmp_1219f;
	*(char *)((local_1c - 0x1) + *(int *)((local_18 << 0x2) + 0x7e1a0)) = 0x3e;
	*(char *)(local_1c + *(int *)((local_18 << 0x2) + 0x7e1a0)) = 0x0;
jmp_1219f:
	local_18 = (local_18 + 0x1);
jmp_121a5:
	if (local_18 < bss_7e2a0) goto jmp_12171;
	Menu_AddItem(0x7db30, 0x7dc50);
	Menu_AddItem(0x7db30, 0x7dcf0);
	Menu_AddItem(0x7db30, 0x7dd48);
	Menu_AddItem(0x7db30, 0x7dc98);
	UI_PushMenu(0x7db30);
}

/*
=================
GraphicsOptions_FindBuiltinResolution

Address: 0x121cd
Stack Size: 0x1c
Calls: Q_stricmp
Called by: GraphicsOptions_ApplyChanges
=================
*/
int GraphicsOptions_FindBuiltinResolution(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;

	arg_0 = arg_0;
	if (resolutionsDetected != 0x0) goto jmp_121db;
	return arg_0;
jmp_121db:
	if (arg_0 >= 0x0) goto jmp_121e3;
	return 0xffffffff;
jmp_121e3:
	local_10 = 0x0;
	goto jmp_12210;
jmp_121e8:
	local_14 = 0x2;
	local_18 = Q_stricmp(*(int *)((local_10 << local_14) + 0x2868), *(int *)((arg_0 << local_14) + 0x7cb6c));
	if (local_18 != 0x0) goto jmp_1220a;
	return local_10;
jmp_1220a:
	local_10 = (local_10 + 0x1);
jmp_12210:
	if (*(int *)((local_10 << 0x2) + 0x2868) != 0x0) goto jmp_121e8;
	return 0xffffffff;
}

/*
=================
GraphicsOptions_FindDetectedResolution

Address: 0x1221d
Stack Size: 0x1c
Calls: Q_stricmp
Called by: GraphicsOptions_SetMenuItems, GraphicsOptions_Event, GraphicsOptions_CheckConfig
=================
*/
int GraphicsOptions_FindDetectedResolution(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;

	arg_0 = arg_0;
	if (resolutionsDetected != 0x0) goto jmp_1222b;
	return arg_0;
jmp_1222b:
	if (arg_0 >= 0x0) goto jmp_12233;
	return 0xffffffff;
jmp_12233:
	local_10 = 0x0;
	goto jmp_12260;
jmp_12238:
	local_14 = 0x2;
	local_18 = Q_stricmp(*(int *)((arg_0 << local_14) + 0x2868), *(int *)((local_10 << local_14) + 0x7cb6c));
	if (local_18 != 0x0) goto jmp_1225a;
	return local_10;
jmp_1225a:
	local_10 = (local_10 + 0x1);
jmp_12260:
	if (*(int *)((local_10 << 0x2) + 0x7cb6c) != 0x0) goto jmp_12238;
	return 0xffffffff;
}

/*
=================
GraphicsOptions_GetAspectRatios

Address: 0x1226d
Stack Size: 0x48
Calls: Q_stricmp, Com_sprintf, atoi, Q_strncpyz, strchr
Called by: GraphicsOptions_MenuInit
=================
*/
void GraphicsOptions_GetAspectRatios(void) {
	int		local_18;
	int		local_1c;
	char	local_20[8];
	int		local_28;
	int		local_2c;
	int		local_30;
	int		local_34;
	int		local_38;
	int		local_3c;
	int		local_40;
	int		local_44;

	local_1c = 0x0;
	goto jmp_12362;
jmp_12273:
	local_34 = strchr(*(int *)((local_1c << 0x2) + resolutions), 0x78);
	local_28 = (local_34 + 0x1);
#define next_call_arg_0 "local_20"
	local_38 = *(int *)((local_1c << 0x2) + resolutions);
#define next_call_arg_1 "local_38"
#define next_call_arg_2 "(local_28 - local_38)"
	Q_strncpyz();
	local_3c = atoi(local_20);
	local_2c = local_3c;
	local_40 = atoi(local_28);
	local_30 = local_40;
	Com_sprintf(local_20, 0x8, 0x85d4, ((float)local_2c / (float)local_30));
	local_18 = 0x0;
	goto jmp_122f4;
jmp_122cb:
	local_44 = Q_stricmp(local_20, *(int *)((local_18 << 0x3) + 0x289c));
	if (local_44 != 0x0) goto jmp_122ee;
	Q_strncpyz(local_20, *(int *)((local_18 << 0x3) + 0x28a0), 0x8);
	goto jmp_122fd;
jmp_122ee:
	local_18 = (local_18 + 0x1);
jmp_122f4:
	if (*(int *)((local_18 << 0x3) + 0x289c) != 0x0) goto jmp_122cb;
jmp_122fd:
	local_18 = 0x0;
	goto jmp_1231b;
jmp_12302:
	local_44 = Q_stricmp(local_20, ((local_18 << 0x3) + 0x7d0ec));
	if (local_44 != 0x0) goto jmp_12315;
	goto jmp_12325;
jmp_12315:
	local_18 = (local_18 + 0x1);
jmp_1231b:
	if ((char)*(char *)((local_18 << 0x3) + 0x7d0ec) != 0x0) goto jmp_12302;
jmp_12325:
	if ((char)*(char *)((local_18 << 0x3) + 0x7d0ec) != 0x0) goto jmp_12346;
	Q_strncpyz(((local_18 << 0x3) + 0x7d0ec), local_20, 0x8);
	*(int *)((local_18 << 0x2) + 0x7d06c) = local_1c;
jmp_12346:
	*(int *)((local_1c << 0x2) + 0x7d1ec) = ((local_1c << 0x3) + 0x7d0ec);
	*(int *)((local_1c << 0x2) + 0x7cfec) = local_18;
	local_1c = (local_1c + 0x1);
jmp_12362:
	if (*(int *)((local_1c << 0x2) + resolutions) != 0x0) goto jmp_12273;
	*(int *)((local_1c << 0x2) + 0x7d1ec) = 0x0;
}

/*
=================
GraphicsOptions_GetInitialVideo

Address: 0x12376
Stack Size: 0x8
Called by: GraphicsOptions_MenuInit
=================
*/
void GraphicsOptions_GetInitialVideo(void) {

	bss_7db18 = bss_7d930;
	bss_7db28 = bss_7d704;
	s_ivo = bss_7d6a4;
	bss_7db0c = bss_7d7b0;
	bss_7db2c = bss_7d870;
	bss_7db10 = (int)bss_7d768;
	bss_7db14 = bss_7d810;
	bss_7db20 = bss_7d990;
	bss_7db24 = bss_7d9f0;
	bss_7db1c = bss_7d8d0;
}

/*
=================
GraphicsOptions_GetResolutions

Address: 0x123a2
Stack Size: 0x30
Calls: trap_Cvar_VariableStringBuffer, strcmp, Com_sprintf, strchr
Called by: GraphicsOptions_MenuInit
=================
*/
void GraphicsOptions_GetResolutions(void) {
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;
	int		local_2c;

	trap_Cvar_VariableStringBuffer(0x85c3, 0x7cbec, 0x400);
	if ((char)*(char *)resbuf == 0x0) goto jmp_1245f;
	local_1c = 0x7cbec;
	local_20 = 0x0;
	goto jmp_123eb;
jmp_123b9:
	local_24 = local_20;
	local_20 = (local_24 + 0x1);
	*(int *)((local_24 << 0x2) + 0x7cb6c) = local_1c;
	local_28 = strchr(local_1c, 0x20);
	local_1c = local_28;
	if (local_1c == 0x0) goto jmp_123eb;
	local_2c = local_1c;
	local_1c = (local_2c + 0x1);
	*(char *)local_2c = 0x0;
jmp_123eb:
	if (local_1c == 0x0) goto jmp_123f3;
	if (local_20 < 0x1f) goto jmp_123b9;
jmp_123f3:
	*(int *)((local_20 << 0x2) + 0x7cb6c) = 0x0;
	if (local_20 >= 0x1f) goto jmp_12459;
	Com_sprintf(0x7cb58, 0x14, 0x85bd, bss_107b4, bss_107b8);
	local_20 = 0x0;
	goto jmp_1242d;
jmp_12413:
	local_24 = strcmp(*(int *)((local_20 << 0x2) + 0x7cb6c), 0x7cb58);
	if (local_24 != 0x0) goto jmp_12427;
	goto jmp_12436;
jmp_12427:
	local_20 = (local_20 + 0x1);
jmp_1242d:
	if (*(int *)((local_20 << 0x2) + 0x7cb6c) != 0x0) goto jmp_12413;
jmp_12436:
	if (*(int *)((local_20 << 0x2) + 0x7cb6c) != 0x0) goto jmp_12459;
	local_24 = local_20;
	local_20 = (local_24 + 0x1);
	*(int *)((local_24 << 0x2) + 0x7cb6c) = 0x7cb58;
	*(int *)((local_20 << 0x2) + 0x7cb6c) = 0x0;
jmp_12459:
	resolutions = 0x7cb6c;
	resolutionsDetected = 0x1;
jmp_1245f:
}

/*
=================
GraphicsOptions_CheckConfig

Address: 0x12461
Stack Size: 0x14
Calls: GraphicsOptions_FindDetectedResolution
Called by: GraphicsOptions_UpdateMenuItems
=================
*/
void GraphicsOptions_CheckConfig(void) {
	int		local_c;
	int		local_10;

	local_c = 0x0;
	goto jmp_124db;
jmp_12467:
	if (*(int *)((0x28 * local_c) + 0x2788) == bss_7d930) goto jmp_12473;
	goto jmp_124d5;
jmp_12473:
	if (*(int *)((0x28 * local_c) + 0x2798) == bss_7d704) goto jmp_1247f;
	goto jmp_124d5;
jmp_1247f:
	local_10 = GraphicsOptions_FindDetectedResolution(*(int *)((0x28 * local_c) + 0x2778));
	if (local_10 == bss_7d6a4) goto jmp_12492;
	goto jmp_124d5;
jmp_12492:
	if (*(int *)((0x28 * local_c) + 0x277c) == bss_7d7b0) goto jmp_1249e;
	goto jmp_124d5;
jmp_1249e:
	if ((float)*(int *)((0x28 * local_c) + 0x2780) == bss_7d768) goto jmp_124ab;
	goto jmp_124d5;
jmp_124ab:
	if (*(int *)((0x28 * local_c) + 0x2784) == bss_7d810) goto jmp_124b7;
	goto jmp_124d5;
jmp_124b7:
	if (*(int *)((0x28 * local_c) + 0x2790) == bss_7d990) goto jmp_124c3;
	goto jmp_124d5;
jmp_124c3:
	if (*(int *)((0x28 * local_c) + 0x2794) == bss_7d9f0) goto jmp_124cf;
	goto jmp_124d5;
jmp_124cf:
	bss_7d5e4 = local_c;
	goto jmp_124e2;
jmp_124d5:
	local_c = (local_c + 0x1);
jmp_124db:
	if (local_c < 0x5) goto jmp_12467;
	bss_7d5e4 = 0x5;
jmp_124e2:
}

/*
=================
GraphicsOptions_UpdateMenuItems

Address: 0x124e4
Stack Size: 0x10
Calls: GraphicsOptions_CheckConfig
Called by: GraphicsOptions_MenuDraw
=================
*/
void GraphicsOptions_UpdateMenuItems(void) {
	int		local_8;
	int		local_c;

	if (bss_7d704 != 0x1) goto jmp_124fc;
	bss_7d7b0 = 0x1;
	local_8 = 0x7d79c;
	*(int *)local_8 = (*(int *)local_8 | 0x2000);
	bss_7d930 = 0x1;
	goto jmp_12507;
jmp_124fc:
	local_8 = 0x7d79c;
	*(int *)local_8 = (*(int *)local_8 & 0xffffdfff);
jmp_12507:
	if (bss_7d7b0 == 0x0) goto jmp_1250f;
	if (bss_7d704 != 0x1) goto jmp_1251f;
jmp_1250f:
	bss_7d930 = 0x0;
	local_8 = 0x7d91c;
	*(int *)local_8 = (*(int *)local_8 | 0x2000);
	goto jmp_1252a;
jmp_1251f:
	local_8 = 0x7d91c;
	*(int *)local_8 = (*(int *)local_8 & 0xffffdfff);
jmp_1252a:
	if (bss_7d870 != 0x0) goto jmp_12535;
	if (bss_7d8d0 != 0x0) goto jmp_12535;
	bss_7d8d0 = 0x1;
jmp_12535:
	local_8 = 0x7da84;
	*(int *)local_8 = (*(int *)local_8 | 0x5000);
	if (s_ivo == bss_7d6a4) goto jmp_12550;
	local_c = 0x7da84;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_12550:
	if (bss_7db0c == bss_7d7b0) goto jmp_12560;
	local_c = 0x7da84;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_12560:
	if (bss_7db2c == bss_7d870) goto jmp_12570;
	local_c = 0x7da84;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_12570:
	if ((float)bss_7db10 == bss_7d768) goto jmp_12581;
	local_c = 0x7da84;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_12581:
	if (bss_7db14 == bss_7d810) goto jmp_12591;
	local_c = 0x7da84;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_12591:
	if (bss_7db18 == bss_7d930) goto jmp_125a1;
	local_c = 0x7da84;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_125a1:
	if (bss_7db28 == bss_7d704) goto jmp_125b1;
	local_c = 0x7da84;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_125b1:
	if (bss_7db1c == bss_7d8d0) goto jmp_125c1;
	local_c = 0x7da84;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_125c1:
	if (bss_7db20 == bss_7d990) goto jmp_125d1;
	local_c = 0x7da84;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_125d1:
	if (bss_7db24 == bss_7d9f0) goto jmp_125e1;
	local_c = 0x7da84;
	*(int *)local_c = (*(int *)local_c & 0xffffafff);
jmp_125e1:
	GraphicsOptions_CheckConfig();
}

/*
=================
GraphicsOptions_ApplyChanges

Address: 0x125e6
Stack Size: 0x48
Calls: trap_Cmd_ExecuteText, trap_Cvar_Reset, trap_Cvar_Set, trap_Cvar_SetValue, strchr, Q_strncpyz, GraphicsOptions_FindBuiltinResolution
=================
*/
void GraphicsOptions_ApplyChanges(, int arg_1) {
	int		local_14;
	int		local_18;
	int		local_1c;
	char	local_20[16];
	char	local_30[16];
	int		local_40;
	int		local_44;

	if (arg_1 == 0x3) goto jmp_125ed;
	goto jmp_12756;
jmp_125ed:
	local_14 = bss_7d8d0;
	if (local_14 == 0x0) goto jmp_125ff;
	if (local_14 == 0x1) goto jmp_12608;
	if (local_14 == 0x2) goto jmp_12611;
	goto jmp_12618;
jmp_125ff:
	trap_Cvar_SetValue(0x85af, 0x0);
	goto jmp_12618;
jmp_12608:
	trap_Cvar_SetValue(0x85af, 0x41800000);
	goto jmp_12618;
jmp_12611:
	trap_Cvar_SetValue(0x85af, 0x42000000);
jmp_12618:
	trap_Cvar_SetValue(0x85a6, (0x40400000 - bss_7d768));
	trap_Cvar_SetValue(0x8594, (float)bss_7d870);
	if (resolutionsDetected == 0x0) goto jmp_12697;
	if (bss_7d6a4 == 0xffffffff) goto jmp_12637;
	if (bss_7d6a4 < 0x20) goto jmp_1263a;
jmp_12637:
	bss_7d6a4 = 0x0;
jmp_1263a:
	local_1c = GraphicsOptions_FindBuiltinResolution(bss_7d6a4);
	local_18 = local_1c;
	if (local_18 != 0xffffffff) goto jmp_1268c;
	Q_strncpyz(local_20, *(int *)((bss_7d6a4 << 0x2) + 0x7cb6c), 0x10);
	local_40 = strchr(local_20, 0x78);
	*(char *)local_40 = 0x0;
	local_44 = strchr(*(int *)((bss_7d6a4 << 0x2) + 0x7cb6c), 0x78);
	Q_strncpyz(local_30, (local_44 + 0x1), 0x10);
	trap_Cvar_Set(0x8586, local_20);
	trap_Cvar_Set(0x8577, local_30);
jmp_1268c:
	trap_Cvar_SetValue(0x8570, (float)local_18);
	goto jmp_126a0;
jmp_12697:
	trap_Cvar_SetValue(0x8570, (float)bss_7d6a4);
jmp_126a0:
	trap_Cvar_SetValue(0x8563, (float)bss_7d7b0);
	local_18 = bss_7d930;
	if (local_18 == 0x0) goto jmp_126bb;
	if (local_18 == 0x1) goto jmp_126d0;
	if (local_18 == 0x2) goto jmp_126e7;
	goto jmp_126fc;
jmp_126bb:
	trap_Cvar_SetValue(0x8557, 0x0);
	trap_Cvar_SetValue(0x854b, 0x0);
	trap_Cvar_Reset(0x853d);
	goto jmp_126fc;
jmp_126d0:
	trap_Cvar_SetValue(0x8557, 0x41800000);
	trap_Cvar_SetValue(0x854b, 0x41800000);
	trap_Cvar_SetValue(0x853d, 0x0);
	goto jmp_126fc;
jmp_126e7:
	trap_Cvar_SetValue(0x8557, 0x42000000);
	trap_Cvar_SetValue(0x854b, 0x41c00000);
	trap_Cvar_SetValue(0x853d, 0x41000000);
jmp_126fc:
	trap_Cvar_SetValue(0x852f, (float)bss_7d810);
	if (bss_7d990 != 0x2) goto jmp_12719;
	trap_Cvar_SetValue(0x8525, 0x0);
	trap_Cvar_SetValue(0x8516, 0x40800000);
	goto jmp_1273b;
jmp_12719:
	if (bss_7d990 != 0x1) goto jmp_1272d;
	trap_Cvar_SetValue(0x8525, 0x3f800000);
	trap_Cvar_SetValue(0x8516, 0x41400000);
	goto jmp_1273b;
jmp_1272d:
	trap_Cvar_SetValue(0x8525, 0x3f800000);
	trap_Cvar_SetValue(0x8516, 0x41a00000);
jmp_1273b:
	if (bss_7d9f0 == 0x0) goto jmp_12748;
	trap_Cvar_Set(0x8508, 0x84f0);
	goto jmp_1274f;
jmp_12748:
	trap_Cvar_Set(0x8508, 0x84d7);
jmp_1274f:
	trap_Cmd_ExecuteText(0x2, 0x84ca);
jmp_12756:
}

/*
=================
GraphicsOptions_Event

Address: 0x12758
Stack Size: 0x1c
Calls: UI_NetworkOptionsMenu, UI_SoundOptionsMenu, UI_DisplayOptionsMenu, UI_PopMenu, UI_DriverInfo_Menu, GraphicsOptions_FindDetectedResolution
=================
*/
void GraphicsOptions_Event(int arg_0, int arg_1) {
	int		local_c;
	char	local_10[8];
	int		local_18;

	if (arg_1 == 0x3) goto jmp_1275f;
	goto jmp_1280f;
jmp_1275f:
	*(int *)local_10 = *(int *)(arg_0 + 0x8);
	if (*(int *)local_10 < 0x65) goto jmp_1280f;
	if (*(int *)local_10 > 0x6e) goto jmp_1280f;
	goto *(int *)((*(int *)local_10 << 0x2) + 0x2750);
	bss_7d6a4 = *(int *)((bss_7d644 << 0x2) + 0x7d06c);
	if (bss_7d704 != 0x1) goto jmp_12793;
	if (bss_7d6a4 >= 0x2) goto jmp_1278c;
	bss_7d6a4 = 0x2;
	goto jmp_12793;
jmp_1278c:
	if (bss_7d6a4 <= 0x6) goto jmp_12793;
	bss_7d6a4 = 0x6;
jmp_12793:
	bss_7d644 = *(int *)((bss_7d6a4 << 0x2) + 0x7cfec);
	goto jmp_1280f;
	local_c = ((0x28 * bss_7d5e4) + 0x2778);
	local_18 = GraphicsOptions_FindDetectedResolution(*(int *)local_c);
	bss_7d6a4 = local_18;
	bss_7d644 = *(int *)((bss_7d6a4 << 0x2) + 0x7cfec);
	bss_7d768 = (float)*(int *)(local_c + 0x8);
	bss_7d810 = *(int *)(local_c + 0xc);
	bss_7d930 = *(int *)(local_c + 0x10);
	bss_7d8d0 = *(int *)(local_c + 0x14);
	bss_7d990 = *(int *)(local_c + 0x18);
	bss_7d9f0 = *(int *)(local_c + 0x1c);
	bss_7d7b0 = *(int *)(local_c + 0x4);
	goto jmp_1280f;
	UI_DriverInfo_Menu();
	goto jmp_1280f;
	UI_PopMenu();
	goto jmp_1280f;
	UI_PopMenu();
	UI_DisplayOptionsMenu();
	goto jmp_1280f;
	UI_PopMenu();
	UI_SoundOptionsMenu();
	goto jmp_1280f;
	UI_PopMenu();
	UI_NetworkOptionsMenu();
jmp_1280f:
}

/*
=================
GraphicsOptions_TQEvent

Address: 0x12811
Stack Size: 0x8
=================
*/
void GraphicsOptions_TQEvent(, int arg_1) {

	if (arg_1 == 0x3) goto jmp_12818;
	goto jmp_12820;
jmp_12818:
	bss_7d768 = (float)(int)(bss_7d768 + 0x3f000000);
jmp_12820:
}

/*
=================
GraphicsOptions_MenuDraw

Address: 0x12822
Stack Size: 0xc
Calls: Menu_Draw, GraphicsOptions_UpdateMenuItems
=================
*/
void GraphicsOptions_MenuDraw(void) {

	GraphicsOptions_UpdateMenuItems();
	Menu_Draw(0x7d26c);
}

/*
=================
GraphicsOptions_SetMenuItems

Address: 0x1282d
Stack Size: 0x434
Calls: trap_Cvar_VariableStringBuffer, trap_Cvar_VariableValue, UI_Cvar_VariableString, Q_stricmp, strlen, GraphicsOptions_FindDetectedResolution
Called by: GraphicsOptions_MenuInit
=================
*/
void GraphicsOptions_SetMenuItems(void) {
	int		local_14;
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
	char	local_50[8];
	char	local_58[968];
	int		local_420;
	int		local_424;
	int		local_428;
	int		local_42c;
	int		local_430;

	local_14 = trap_Cvar_VariableValue(0x8570);
	local_18 = GraphicsOptions_FindDetectedResolution((int)local_14);
	bss_7d6a4 = local_18;
	if (bss_7d6a4 >= 0x0) goto jmp_128be;
	if (resolutionsDetected == 0x0) goto jmp_128bb;
	trap_Cvar_VariableStringBuffer(0x8586, &local_20, 0x3fe);
	local_420 = strlen(&local_20);
	*(char *)((local_420 + 0x1) + &local_20) = 0x0;
	local_424 = strlen(&local_20);
	*(char *)(local_424 + &local_20) = 0x78;
	local_428 = strlen(&local_20);
	local_42c = strlen(&local_20);
	trap_Cvar_VariableStringBuffer(0x8577, (local_428 + &local_20), (0x400 - local_42c));
	local_1c = 0x0;
	goto jmp_128a9;
jmp_1288b:
	local_430 = Q_stricmp(&local_20, *(int *)((local_1c << 0x2) + 0x7cb6c));
	if (local_430 != 0x0) goto jmp_128a3;
	bss_7d6a4 = local_1c;
	goto jmp_128b2;
jmp_128a3:
	local_1c = (local_1c + 0x1);
jmp_128a9:
	if (*(int *)((local_1c << 0x2) + 0x7cb6c) != 0x0) goto jmp_1288b;
jmp_128b2:
	if (bss_7d6a4 >= 0x0) goto jmp_128be;
	bss_7d6a4 = 0x0;
	goto jmp_128be;
jmp_128bb:
	bss_7d6a4 = 0x3;
jmp_128be:
	bss_7d644 = *(int *)((bss_7d6a4 << 0x2) + 0x7cfec);
	local_1c = trap_Cvar_VariableValue(0x8563);
	bss_7d7b0 = (int)local_1c;
	local_20 = trap_Cvar_VariableValue(0x8594);
	bss_7d870 = (int)local_20;
	local_24 = trap_Cvar_VariableValue(0x85a6);
	bss_7d768 = (0x40400000 - local_24);
	if (bss_7d768 >= 0x0) goto jmp_128f2;
	bss_7d768 = 0x0;
	goto jmp_128f9;
jmp_128f2:
	if (bss_7d768 <= 0x40400000) goto jmp_128f9;
	bss_7d768 = 0x40400000;
jmp_128f9:
	local_2c = trap_Cvar_VariableValue(0x852f);
	if (local_2c == 0x0) goto jmp_12908;
	local_28 = 0x1;
	goto jmp_1290b;
jmp_12908:
	local_28 = 0x0;
jmp_1290b:
	bss_7d810 = local_28;
	*(int *)local_34 = trap_Cvar_VariableValue(0x85af);
	local_30 = (int)*(int *)local_34;
	local_3c = 0x10;
	if (local_30 == local_3c) goto jmp_12938;
	if (local_30 > local_3c) goto jmp_1292d;
	if (local_30 == 0x0) goto jmp_12933;
	goto jmp_12933;
jmp_1292d:
	if (local_30 == 0x20) goto jmp_1293d;
	goto jmp_12933;
jmp_12933:
	bss_7d8d0 = 0x0;
	goto jmp_12940;
jmp_12938:
	bss_7d8d0 = 0x1;
	goto jmp_12940;
jmp_1293d:
	bss_7d8d0 = 0x2;
jmp_12940:
	local_40 = UI_Cvar_VariableString(0x8508);
	local_44 = Q_stricmp(local_40, 0x84d7);
	if (local_44 != 0x0) goto jmp_12958;
	bss_7d9f0 = 0x0;
	goto jmp_1295b;
jmp_12958:
	bss_7d9f0 = 0x1;
jmp_1295b:
	local_48 = trap_Cvar_VariableValue(0x8525);
	if (local_48 <= 0x0) goto jmp_12979;
	local_4c = trap_Cvar_VariableValue(0x8516);
	if (local_4c < 0x41a00000) goto jmp_12974;
	bss_7d990 = 0x0;
	goto jmp_1297c;
jmp_12974:
	bss_7d990 = 0x1;
	goto jmp_1297c;
jmp_12979:
	bss_7d990 = 0x2;
jmp_1297c:
	*(int *)local_50 = trap_Cvar_VariableValue(0x8557);
	local_4c = (int)*(int *)local_50;
	*(int *)local_58 = 0x10;
	if (local_4c == *(int *)local_58) goto jmp_129a5;
	if (local_4c > *(int *)local_58) goto jmp_1299a;
	if (local_4c == 0x0) goto jmp_129a0;
	goto jmp_129a0;
jmp_1299a:
	if (local_4c == 0x20) goto jmp_129aa;
	goto jmp_129a0;
jmp_129a0:
	bss_7d930 = 0x0;
	goto jmp_129ad;
jmp_129a5:
	bss_7d930 = 0x1;
	goto jmp_129ad;
jmp_129aa:
	bss_7d930 = 0x2;
jmp_129ad:
	if (bss_7d7b0 != 0x0) goto jmp_129b4;
	bss_7d930 = 0x0;
jmp_129b4:
	if (bss_7d704 != 0x1) goto jmp_129bb;
	bss_7d930 = 0x1;
jmp_129bb:
}

/*
=================
GraphicsOptions_MenuInit

Address: 0x129bd
Stack Size: 0x20
Calls: memset, GraphicsOptions_GetInitialVideo, GraphicsOptions_SetMenuItems, Menu_AddItem, GraphicsOptions_Cache, GraphicsOptions_GetAspectRatios, GraphicsOptions_GetResolutions
Called by: UI_GraphicsOptionsMenu
=================
*/
void GraphicsOptions_MenuInit(void) {
	int		local_14;
	int		local_18;
	int		local_1c;

	memset(0x7d26c, 0x0, 0x89c);
	GraphicsOptions_GetResolutions();
	GraphicsOptions_GetAspectRatios();
	GraphicsOptions_Cache();
	bss_7d380 = 0x1;
	bss_7d384 = 0x1;
	bss_7d378 = 0x12822;
	bss_7d38c = 0xa;
	bss_7d398 = 0x140;
	bss_7d39c = 0x10;
	bss_7d3c8 = 0x842c;
	bss_7d3d0 = 0x2160;
	bss_7d3cc = 0x1;
	bss_7d3d4 = 0x6;
	bss_7d3d8 = 0x871b;
	bss_7d400 = 0x4000;
	bss_7d3e0 = 0x0;
	bss_7d3e4 = 0x4e;
	bss_7d420 = 0x100;
	bss_7d424 = 0x149;
	bss_7d42c = 0x6;
	bss_7d430 = 0x8709;
	bss_7d458 = 0x4000;
	bss_7d438 = 0x178;
	bss_7d43c = 0x4c;
	bss_7d478 = 0x100;
	bss_7d47c = 0x14e;
	bss_7d484 = 0x9;
	bss_7d4b0 = 0x10;
	bss_7d48c = 0x6a;
	bss_7d4b4 = 0x12758;
	bss_7d490 = 0xd8;
	bss_7d494 = 0xba;
	bss_7d4c0 = 0x8423;
	bss_7d4c4 = 0x2;
	bss_7d4c8 = 0x21b0;
	bss_7d4cc = 0x9;
	bss_7d4f8 = 0x110;
	bss_7d4d4 = 0x6b;
	bss_7d4fc = 0x12758;
	bss_7d4d8 = 0xd8;
	bss_7d4dc = 0xd5;
	bss_7d508 = 0x841b;
	bss_7d50c = 0x2;
	bss_7d510 = 0x21b0;
	bss_7d514 = 0x9;
	bss_7d540 = 0x110;
	bss_7d51c = 0x6c;
	bss_7d544 = 0x12758;
	bss_7d520 = 0xd8;
	bss_7d524 = 0xf0;
	bss_7d550 = 0x8415;
	bss_7d554 = 0x2;
	bss_7d558 = 0x21b0;
	bss_7d55c = 0x9;
	bss_7d588 = 0x110;
	bss_7d564 = 0x6d;
	bss_7d58c = 0x12758;
	bss_7d568 = 0xd8;
	bss_7d56c = 0x10b;
	bss_7d598 = 0x840d;
	bss_7d59c = 0x2;
	bss_7d5a0 = 0x21b0;
	local_14 = 0x72;
	bss_7d5a4 = 0x3;
	bss_7d5a8 = 0x83fa;
	bss_7d5d0 = 0x102;
	bss_7d5b0 = 0x190;
	bss_7d5b4 = local_14;
	bss_7d5d4 = 0x12758;
	bss_7d5ac = 0x67;
	bss_7d5f0 = 0x2928;
	local_14 = (local_14 + 0x24);
	bss_7d6c4 = 0x3;
	bss_7d6c8 = 0x83ef;
	bss_7d6f0 = 0x102;
	bss_7d6d0 = 0x190;
	bss_7d6d4 = local_14;
	bss_7d710 = 0x290c;
	if (bss_107a0 != 0x2) goto jmp_12abf;
	local_18 = 0x1;
	goto jmp_12ac2;
jmp_12abf:
	local_18 = 0x0;
jmp_12ac2:
	bss_7d704 = local_18;
	local_14 = (local_14 + 0x12);
	bss_7d830 = 0x3;
	bss_7d834 = 0x83e0;
	bss_7d85c = 0x102;
	bss_7d83c = 0x190;
	bss_7d840 = local_14;
	bss_7d87c = 0x297c;
	local_14 = (local_14 + 0x12);
	bss_7d604 = 0x3;
	bss_7d608 = 0x83d2;
	bss_7d630 = 0x102;
	bss_7d610 = 0x190;
	bss_7d614 = local_14;
	bss_7d650 = 0x7d1ec;
	bss_7d634 = 0x12758;
	bss_7d60c = 0x6e;
	local_14 = (local_14 + 0x12);
	bss_7d664 = 0x3;
	bss_7d668 = 0x83c6;
	bss_7d690 = 0x102;
	bss_7d670 = 0x190;
	bss_7d674 = local_14;
	bss_7d6b0 = resolutions;
	bss_7d694 = 0x12758;
	bss_7d66c = 0x68;
	local_14 = (local_14 + 0x12);
	bss_7d8f0 = 0x3;
	bss_7d8f4 = 0x83b9;
	bss_7d91c = 0x102;
	bss_7d8fc = 0x190;
	bss_7d900 = local_14;
	bss_7d93c = 0x2950;
	local_14 = (local_14 + 0x12);
	bss_7d770 = 0x3;
	bss_7d774 = 0x83ad;
	bss_7d79c = 0x102;
	bss_7d77c = 0x190;
	bss_7d780 = local_14;
	bss_7d7bc = 0x297c;
	local_14 = (local_14 + 0x12);
	bss_7d7d0 = 0x3;
	bss_7d7d4 = 0x83a3;
	bss_7d7fc = 0x102;
	bss_7d7dc = 0x190;
	bss_7d7e0 = local_14;
	bss_7d81c = 0x2944;
	local_14 = (local_14 + 0x12);
	bss_7d950 = 0x3;
	bss_7d954 = 0x8391;
	bss_7d97c = 0x102;
	bss_7d95c = 0x190;
	bss_7d960 = local_14;
	bss_7d99c = 0x296c;
	local_14 = (local_14 + 0x12);
	bss_7d724 = 0x1;
	bss_7d728 = 0x8381;
	bss_7d750 = 0x102;
	bss_7d730 = 0x190;
	bss_7d734 = local_14;
	bss_7d760 = 0x0;
	bss_7d764 = 0x40400000;
	bss_7d754 = 0x12811;
	local_14 = (local_14 + 0x12);
	bss_7d890 = 0x3;
	bss_7d894 = 0x8370;
	bss_7d8bc = 0x102;
	bss_7d89c = 0x190;
	bss_7d8a0 = local_14;
	bss_7d8dc = 0x2918;
	local_14 = (local_14 + 0x12);
	bss_7d9b0 = 0x3;
	bss_7d9b4 = 0x8360;
	bss_7d9dc = 0x102;
	bss_7d9bc = 0x190;
	bss_7d9c0 = local_14;
	bss_7d9fc = 0x2960;
	local_14 = (local_14 + 0x20);
	bss_7da10 = 0x9;
	bss_7da3c = 0x108;
	bss_7da40 = 0x12758;
	bss_7da18 = 0x69;
	bss_7da1c = 0x140;
	bss_7da20 = local_14;
	bss_7da4c = 0x8354;
	bss_7da50 = 0x11;
	bss_7da54 = 0x21b0;
	bss_7dab0 = 0x6;
	bss_7dab4 = 0x86f9;
	bss_7dadc = 0x104;
	bss_7dae0 = 0x12758;
	bss_7dab8 = 0x65;
	bss_7dabc = 0x0;
	bss_7dac0 = 0x1a0;
	bss_7dafc = 0x80;
	bss_7db00 = 0x40;
	bss_7daec = 0x86e9;
	bss_7da58 = 0x6;
	bss_7da5c = 0x8342;
	bss_7da84 = 0x5110;
	bss_7da88 = 0x125e6;
	bss_7da64 = 0x280;
	bss_7da68 = 0x1a0;
	bss_7daa4 = 0x80;
	bss_7daa8 = 0x40;
	bss_7da94 = 0x8330;
	Menu_AddItem(0x7d26c, 0x7d38c);
	Menu_AddItem(0x7d26c, 0x7d3d4);
	Menu_AddItem(0x7d26c, 0x7d42c);
	Menu_AddItem(0x7d26c, 0x7d484);
	Menu_AddItem(0x7d26c, 0x7d4cc);
	Menu_AddItem(0x7d26c, 0x7d514);
	Menu_AddItem(0x7d26c, 0x7d55c);
	Menu_AddItem(0x7d26c, 0x7d5a4);
	Menu_AddItem(0x7d26c, 0x7d6c4);
	Menu_AddItem(0x7d26c, 0x7d830);
	Menu_AddItem(0x7d26c, 0x7d604);
	Menu_AddItem(0x7d26c, 0x7d664);
	Menu_AddItem(0x7d26c, 0x7d8f0);
	Menu_AddItem(0x7d26c, 0x7d770);
	Menu_AddItem(0x7d26c, 0x7d7d0);
	Menu_AddItem(0x7d26c, 0x7d950);
	Menu_AddItem(0x7d26c, 0x7d724);
	Menu_AddItem(0x7d26c, 0x7d890);
	Menu_AddItem(0x7d26c, 0x7d9b0);
	Menu_AddItem(0x7d26c, 0x7da10);
	Menu_AddItem(0x7d26c, 0x7dab0);
	Menu_AddItem(0x7d26c, 0x7da58);
	GraphicsOptions_SetMenuItems();
	GraphicsOptions_GetInitialVideo();
	if (bss_107a0 != 0x0) goto jmp_12ce1;
	if (bss_107a4 != 0x1) goto jmp_12ce1;
	local_1c = 0x7d6f0;
	*(int *)local_1c = (*(int *)local_1c | 0x5000);
jmp_12ce1:
}

/*
=================
GraphicsOptions_Cache

Address: 0x12ce3
Stack Size: 0xc
Calls: trap_R_RegisterShaderNoMip
Called by: GraphicsOptions_MenuInit, UI_Cache_f
=================
*/
void GraphicsOptions_Cache(void) {

	trap_R_RegisterShaderNoMip(0x871b);
	trap_R_RegisterShaderNoMip(0x8709);
	trap_R_RegisterShaderNoMip(0x86f9);
	trap_R_RegisterShaderNoMip(0x86e9);
	trap_R_RegisterShaderNoMip(0x8342);
	trap_R_RegisterShaderNoMip(0x8330);
}

/*
=================
UI_GraphicsOptionsMenu

Address: 0x12d04
Stack Size: 0x10
Calls: Menu_SetCursorToItem, UI_PushMenu, GraphicsOptions_MenuInit
Called by: UI_SoundOptionsMenu_Event, UI_SetupMenu_Event, Options_Event, UI_NetworkOptionsMenu_Event, UI_DisplayOptionsMenu_Event
=================
*/
void UI_GraphicsOptionsMenu(void) {

	GraphicsOptions_MenuInit();
	UI_PushMenu(0x7d26c);
	Menu_SetCursorToItem(0x7d26c, 0x7d484);
}

/*
=================
VectorCompare

Address: 0x12d16
Stack Size: 0x18
=================
*/
int VectorCompare(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	arg_1 = arg_1;
	if (*(int *)arg_0 != *(int *)arg_1) goto jmp_12d46;
	local_10 = 0x4;
	if (*(int *)(arg_0 + local_10) != *(int *)(arg_1 + local_10)) goto jmp_12d46;
	local_14 = 0x8;
	if (*(int *)(arg_0 + local_14) == *(int *)(arg_1 + local_14)) goto jmp_12d4a;
jmp_12d46:
	return 0x0;
jmp_12d4a:
	return 0x1;
}

/*
=================
VectorLength

Address: 0x12d4e
Stack Size: 0x20
Calls: sqrt
Called by: RadiusFromBounds, Distance
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

Address: 0x12d81
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

Address: 0x12dad
Stack Size: 0x2c
Calls: VectorLength
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

Address: 0x12dee
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

Address: 0x12e3c
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

Address: 0x12e97
Stack Size: 0x14
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

Address: 0x12ebf
Stack Size: 0x30
Called by: MakeNormalVectors, RotateAroundDirection, RotatePointAroundVector, PlaneFromPoints
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

Address: 0x12f2c
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

Address: 0x12f41
Stack Size: 0x10
Calls: Q_rand
Called by: Q_crandom
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

Address: 0x12f53
Stack Size: 0x10
Calls: Q_random
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

Address: 0x12f64
Stack Size: 0x8
=================
*/
int ClampChar(int arg_0) {

	arg_0 = arg_0;
	if (arg_0 >= 0xffffff80) goto jmp_12f71;
	return 0xffffff80;
jmp_12f71:
	if (arg_0 <= 0x7f) goto jmp_12f79;
	return 0x7f;
jmp_12f79:
	return (char)arg_0;
}

/*
=================
ClampShort

Address: 0x12f7f
Stack Size: 0x8
=================
*/
int ClampShort(int arg_0) {

	arg_0 = arg_0;
	if (arg_0 >= 0xffff8000) goto jmp_12f8c;
	return 0xffff8000;
jmp_12f8c:
	if (arg_0 <= 0x7fff) goto jmp_12f94;
	return 0x7fff;
jmp_12f94:
	return (short)arg_0;
}

/*
=================
DirToByte

Address: 0x12f9a
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
	if (arg_0 != 0x0) goto jmp_12fa7;
	return 0x0;
jmp_12fa7:
	local_10 = 0x0;
	*(int *)local_18 = 0x0;
	local_14 = *(int *)local_18;
	local_8 = *(int *)local_18;
jmp_12fb5:
	local_20 = (0xc * local_8);
	local_c = (((*(int *)arg_0 * *(int *)(local_20 + 0x2ae8)) + (*(int *)(arg_0 + 0x4) * *(int *)(local_20 + 0x2aec))) + (*(int *)(arg_0 + 0x8) * *(int *)(local_20 + 0x2af0)));
	if (local_c <= local_10) goto jmp_12feb;
	local_10 = local_c;
	local_14 = local_8;
jmp_12feb:
	local_8 = (local_8 + 0x1);
	if (local_8 < 0xa2) goto jmp_12fb5;
	return local_14;
}

/*
=================
ByteToDir

Address: 0x12ffa
Stack Size: 0xc
=================
*/
void ByteToDir(int arg_0, int arg_1) {

	arg_0 = arg_0;
	if (arg_0 < 0x0) goto jmp_13007;
	if (arg_0 < 0xa2) goto jmp_1300d;
jmp_13007:
	block_copy(&vec3_origin, arg_1, 0xc);
	goto jmp_13016;
jmp_1300d:
	block_copy(((0xc * arg_0) + 0x2ae8), arg_1, 0xc);
jmp_13016:
}

/*
=================
ColorBytes3

Address: 0x13018
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
	if (local_14 < local_18) goto jmp_13033;
	local_c = ((int)(local_14 - local_18) + 0x80000000);
	goto jmp_13038;
jmp_13033:
	local_c = (int)local_14;
jmp_13038:
	local_8 = local_c;
	local_1c = (0x437f0000 * arg_1);
	local_20 = 0x4f000000;
	if (local_1c < local_20) goto jmp_13056;
	local_10 = ((int)(local_1c - local_20) + 0x80000000);
	goto jmp_1305b;
jmp_13056:
	local_10 = (int)local_1c;
jmp_1305b:
	local_9 = local_10;
	local_28 = (0x437f0000 * arg_2);
	local_2c = 0x4f000000;
	if (local_28 < local_2c) goto jmp_13079;
	local_24 = ((int)(local_28 - local_2c) + 0x80000000);
	goto jmp_1307e;
jmp_13079:
	local_24 = (int)local_28;
jmp_1307e:
	*(char *)&local_a = local_24;
	return *(int *)&local_8;
}

/*
=================
ColorBytes4

Address: 0x13087
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
	if (local_14 < local_18) goto jmp_130a2;
	local_c = ((int)(local_14 - local_18) + 0x80000000);
	goto jmp_130a7;
jmp_130a2:
	local_c = (int)local_14;
jmp_130a7:
	local_8 = local_c;
	local_1c = (0x437f0000 * arg_1);
	local_20 = 0x4f000000;
	if (local_1c < local_20) goto jmp_130c5;
	local_10 = ((int)(local_1c - local_20) + 0x80000000);
	goto jmp_130ca;
jmp_130c5:
	local_10 = (int)local_1c;
jmp_130ca:
	local_9 = local_10;
	local_28 = (0x437f0000 * arg_2);
	local_2c = 0x4f000000;
	if (local_28 < local_2c) goto jmp_130e8;
	local_24 = ((int)(local_28 - local_2c) + 0x80000000);
	goto jmp_130ed;
jmp_130e8:
	local_24 = (int)local_28;
jmp_130ed:
	local_a = local_24;
	local_34 = (0x437f0000 * arg_3);
	local_38 = 0x4f000000;
	if (local_34 < local_38) goto jmp_1310b;
	local_30 = ((int)(local_34 - local_38) + 0x80000000);
	goto jmp_13110;
jmp_1310b:
	local_30 = (int)local_34;
jmp_13110:
	local_b = local_30;
	return *(int *)&local_8;
}

/*
=================
NormalizeColor

Address: 0x13119
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
	if (*(int *)(arg_0 + 0x4) <= *(int *)local_8) goto jmp_13136;
	*(int *)local_8 = *(int *)(arg_0 + 0x4);
jmp_13136:
	if (*(int *)(arg_0 + 0x8) <= *(int *)local_8) goto jmp_13145;
	*(int *)local_8 = *(int *)(arg_0 + 0x8);
jmp_13145:
	if (*(int *)local_8 != 0x0) goto jmp_13161;
	local_14 = 0x0;
	*(int *)(arg_1 + 0x8) = local_14;
	*(int *)(arg_1 + 0x4) = local_14;
	*(int *)arg_1 = local_14;
	goto jmp_1318e;
jmp_13161:
	*(int *)arg_1 = (*(int *)arg_0 / *(int *)local_8);
	local_10 = 0x4;
	*(int *)(arg_1 + local_10) = (*(int *)(arg_0 + local_10) / *(int *)local_8);
	local_14 = 0x8;
	*(int *)(arg_1 + local_14) = (*(int *)(arg_0 + local_14) / *(int *)local_8);
jmp_1318e:
	return *(int *)local_8;
}

/*
=================
PlaneFromPoints

Address: 0x13193
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
	if (*(int *)local_4c != 0x0) goto jmp_13217;
	return 0x0;
jmp_13217:
	local_58 = 0x4;
	local_5c = 0x8;
	*(int *)(arg_0 + 0xc) = (((*(int *)arg_1 * *(int *)arg_0) + (*(int *)(arg_1 + local_58) * *(int *)(arg_0 + local_58))) + (*(int *)(arg_1 + local_5c) * *(int *)(arg_0 + local_5c)));
	return 0x1;
}

/*
=================
RotatePointAroundVector

Address: 0x13249
Stack Size: 0x118
Calls: sin, cos, memset, memcpy, MatrixMultiply, CrossProduct, PerpendicularVector
Called by: RotateAroundDirection
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
jmp_13321:
	*(int *)local_110 = (0xc * local_14);
	*(int *)((local_14 << 0x2) + arg_0) = (((*(int *)(*(int *)local_110 + &local_18) * *(int *)arg_2) + (*(int *)(*(int *)local_110 + &local_1c) * *(int *)(arg_2 + 0x4))) + (*(int *)(*(int *)local_110 + local_20) * *(int *)(arg_2 + 0x8)));
	local_14 = (local_14 + 0x1);
	if (local_14 < 0x3) goto jmp_13321;
}

/*
=================
RotateAroundDirection

Address: 0x1335c
Stack Size: 0x30
Calls: CrossProduct, RotatePointAroundVector, PerpendicularVector
=================
*/
void RotateAroundDirection(int arg_0, int arg_1) {
	char	local_1c[16];
	int		local_2c;

	arg_0 = arg_0;
	PerpendicularVector((arg_0 + 0xc), arg_0);
	if (arg_1 == 0x0) goto jmp_13388;
	local_2c = (arg_0 + 0xc);
	block_copy(local_2c, local_1c, 0xc);
	RotatePointAroundVector(local_2c, arg_0, local_1c, arg_1);
jmp_13388:
	CrossProduct(arg_0, (arg_0 + 0xc), (arg_0 + 0x18));
}

/*
=================
vectoangles

Address: 0x1339a
Stack Size: 0x38
Calls: sqrt, atan2
Called by: BG_TouchJumpPad
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
	if (*(int *)(arg_0 + 0x4) != local_20) goto jmp_133cd;
	if (*(int *)arg_0 != local_20) goto jmp_133cd;
	local_24 = 0x0;
	local_10 = local_24;
	if (*(int *)(arg_0 + 0x8) <= local_24) goto jmp_133c8;
	local_14 = 0x42b40000;
	goto jmp_13442;
jmp_133c8:
	local_14 = 0x43870000;
	goto jmp_13442;
jmp_133cd:
	if (*(int *)arg_0 == 0x0) goto jmp_133ea;
	local_28 = atan2(*(int *)(arg_0 + 0x4), *(int *)arg_0);
	local_10 = ((0x43340000 * local_28) / 0x40490fdb);
	goto jmp_133f9;
jmp_133ea:
	if (*(int *)(arg_0 + 0x4) <= 0x0) goto jmp_133f6;
	local_10 = 0x42b40000;
	goto jmp_133f9;
jmp_133f6:
	local_10 = 0x43870000;
jmp_133f9:
	if (local_10 >= 0x0) goto jmp_13403;
	local_10 = (local_10 + 0x43b40000);
jmp_13403:
	local_28 = *(int *)arg_0;
	local_2c = *(int *)(arg_0 + 0x4);
	local_30 = sqrt(((local_28 * local_28) + (local_2c * local_2c)));
	*(int *)local_18 = local_30;
	local_34 = atan2(*(int *)(arg_0 + 0x8), *(int *)local_18);
	local_14 = ((0x43340000 * local_34) / 0x40490fdb);
	if (local_14 >= 0x0) goto jmp_13442;
	local_14 = (local_14 + 0x43b40000);
jmp_13442:
	*(int *)arg_1 = -local_14;
	*(int *)(arg_1 + 0x4) = local_10;
	*(int *)(arg_1 + 0x8) = 0x0;
}

/*
=================
AnglesToAxis

Address: 0x13457
Stack Size: 0x28
Calls: AngleVectors
Called by: UI_DrawPlayer, UI_PlayerAngles, Main_MenuDraw
=================
*/
void AnglesToAxis(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	char	local_20[8];

	arg_1 = arg_1;
	AngleVectors(arg_0, arg_1, &local_18, (arg_1 + 0x18));
	*(int *)(arg_1 + 0xc) = (vec3_origin - local_18);
	*(int *)(arg_1 + 0x10) = (global_298c - local_1c);
	*(int *)(arg_1 + 0x14) = (global_2990 - *(int *)local_20);
}

/*
=================
AxisClear

Address: 0x1348c
Stack Size: 0x8
Called by: UI_DrawPlayer, Main_MenuDraw
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

Address: 0x134c7
Stack Size: 0x10
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

Address: 0x134f3
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

Address: 0x135b0
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

Address: 0x13657
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

Address: 0x136e8
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

Address: 0x1371b
Stack Size: 0xc
Called by: UI_MovedirAdjustment
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

Address: 0x1372b
Stack Size: 0x10
=================
*/
int LerpAngle(int arg_0, int arg_1, int arg_2) {
	char	local_8[8];

	arg_0 = arg_0;
	arg_1 = arg_1;
	if ((arg_1 - arg_0) <= 0x43340000) goto jmp_13741;
	arg_1 = (arg_1 - 0x43b40000);
jmp_13741:
	if ((arg_1 - arg_0) >= 0xc3340000) goto jmp_1374e;
	arg_1 = (arg_1 + 0x43b40000);
jmp_1374e:
	*(int *)local_8 = (arg_0 + (arg_2 * (arg_1 - arg_0)));
	return *(int *)local_8;
}

/*
=================
AngleSubtract

Address: 0x13760
Stack Size: 0xc
Called by: AnglesSubtract, UI_SwingAngles
=================
*/
int AngleSubtract(int arg_0, int arg_1) {
	int		local_8;

	local_8 = (arg_0 - arg_1);
	goto jmp_13770;
jmp_1376a:
	local_8 = (local_8 - 0x43b40000);
jmp_13770:
	if (local_8 > 0x43340000) goto jmp_1376a;
	goto jmp_1377c;
jmp_13776:
	local_8 = (local_8 + 0x43b40000);
jmp_1377c:
	if (local_8 < 0xc3340000) goto jmp_13776;
	return local_8;
}

/*
=================
AnglesSubtract

Address: 0x13785
Stack Size: 0x24
Calls: AngleSubtract
Called by: UI_PlayerAngles
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

Address: 0x137df
Stack Size: 0x8
Called by: UI_MachinegunSpinAngle, UI_PlayerAngles, UI_SwingAngles
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

Address: 0x137f5
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

Address: 0x13803
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
	if (arg_0 <= 0x43340000) goto jmp_1381d;
	arg_0 = (arg_0 - 0x43b40000);
jmp_1381d:
	return arg_0;
}

/*
=================
AngleDelta

Address: 0x13822
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

Address: 0x13832
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
jmp_13842:
	if (*(int *)((local_8 << 0x2) + arg_0) >= 0x0) goto jmp_13855;
	local_c = (local_c | (0x1 << local_8));
jmp_13855:
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x3) goto jmp_13842;
	*(char *)(arg_0 + 0x11) = local_c;
}

/*
=================
BoxOnPlaneSide

Address: 0x13868
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
	if (*(char *)(arg_2 + 0x10) >= 0x3) goto jmp_138aa;
	if (*(int *)(arg_2 + 0xc) > *(int *)((*(char *)(arg_2 + 0x10) << 0x2) + arg_0)) goto jmp_13891;
	return 0x1;
jmp_13891:
	if (*(int *)(arg_2 + 0xc) < *(int *)((*(char *)(arg_2 + 0x10) << 0x2) + arg_1)) goto jmp_138a6;
	return 0x2;
jmp_138a6:
	return 0x3;
jmp_138aa:
	*(int *)local_1c = 0x0;
	local_14 = *(int *)local_1c;
	local_10 = *(int *)local_1c;
	if (*(char *)(arg_2 + 0x11) >= 0x8) goto jmp_1392f;
	local_8 = 0x0;
jmp_138bf:
	local_c = ((*(char *)(arg_2 + 0x11) >> local_8) & 0x1);
	local_28 = 0x2;
	local_2c = ((local_c << local_28) + &local_10);
	local_30 = (local_8 << local_28);
	*(int *)local_2c = (*(int *)local_2c + (*(int *)(local_30 + arg_2) * *(int *)(local_30 + arg_1)));
	if (local_c != 0x0) goto jmp_138fb;
	local_34 = 0x1;
	goto jmp_138fe;
jmp_138fb:
	local_34 = 0x0;
jmp_138fe:
	local_38 = 0x2;
	local_3c = ((local_34 << local_38) + &local_10);
	local_40 = (local_8 << local_38);
	*(int *)local_3c = (*(int *)local_3c + (*(int *)(local_40 + arg_2) * *(int *)(local_40 + arg_0)));
	local_8 = (local_8 + 0x1);
	if (local_8 < 0x3) goto jmp_138bf;
jmp_1392f:
	local_18 = 0x0;
	if (local_10 < *(int *)(arg_2 + 0xc)) goto jmp_1393d;
	local_18 = 0x1;
jmp_1393d:
	if (local_14 >= *(int *)(arg_2 + 0xc)) goto jmp_1394b;
	local_18 = (local_18 | 0x2);
jmp_1394b:
	return local_18;
}

/*
=================
RadiusFromBounds

Address: 0x13950
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
jmp_1395c:
	local_24 = fabs(*(int *)((local_c << 0x2) + arg_0));
	local_10 = local_24;
	local_28 = fabs(*(int *)((local_c << 0x2) + arg_1));
	local_14 = local_28;
	if (local_10 <= local_14) goto jmp_13989;
	local_2c = local_10;
	goto jmp_1398d;
jmp_13989:
	local_2c = local_14;
jmp_1398d:
	*(int *)((local_c << 0x2) + local_18) = local_2c;
	local_c = (local_c + 0x1);
	if (local_c < 0x3) goto jmp_1395c;
	local_24 = VectorLength(local_18);
	return local_24;
}

/*
=================
ClearBounds

Address: 0x139ab
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

Address: 0x139e2
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
	if (*(int *)arg_0 >= *(int *)arg_1) goto jmp_139fc;
	*(int *)arg_1 = *(int *)arg_0;
jmp_139fc:
	if (*(int *)arg_0 <= *(int *)arg_2) goto jmp_13a09;
	*(int *)arg_2 = *(int *)arg_0;
jmp_13a09:
	local_8 = 0x4;
	if (*(int *)(arg_0 + local_8) >= *(int *)(arg_1 + local_8)) goto jmp_13a28;
	local_c = 0x4;
	*(int *)(arg_1 + local_c) = *(int *)(arg_0 + local_c);
jmp_13a28:
	local_c = 0x4;
	if (*(int *)(arg_0 + local_c) <= *(int *)(arg_2 + local_c)) goto jmp_13a47;
	local_10 = 0x4;
	*(int *)(arg_2 + local_10) = *(int *)(arg_0 + local_10);
jmp_13a47:
	local_10 = 0x8;
	if (*(int *)(arg_0 + local_10) >= *(int *)(arg_1 + local_10)) goto jmp_13a66;
	local_14 = 0x8;
	*(int *)(arg_1 + local_14) = *(int *)(arg_0 + local_14);
jmp_13a66:
	local_14 = 0x8;
	if (*(int *)(arg_0 + local_14) <= *(int *)(arg_2 + local_14)) goto jmp_13a85;
	local_18 = 0x8;
	*(int *)(arg_2 + local_18) = *(int *)(arg_0 + local_18);
jmp_13a85:
}

/*
=================
BoundsIntersect

Address: 0x13a87
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
	if (*(int *)arg_1 < *(int *)arg_2) goto jmp_13ae0;
	local_10 = 0x4;
	if (*(int *)(arg_1 + local_10) < *(int *)(arg_2 + local_10)) goto jmp_13ae0;
	*(int *)local_14 = 0x8;
	if (*(int *)(arg_1 + *(int *)local_14) < *(int *)(arg_2 + *(int *)local_14)) goto jmp_13ae0;
	if (*(int *)arg_0 > *(int *)arg_3) goto jmp_13ae0;
	if (*(int *)(arg_0 + local_10) > *(int *)(arg_3 + local_10)) goto jmp_13ae0;
	if (*(int *)(arg_0 + *(int *)local_14) <= *(int *)(arg_3 + *(int *)local_14)) goto jmp_13ae4;
jmp_13ae0:
	return 0x0;
jmp_13ae4:
	return 0x1;
}

/*
=================
BoundsIntersectSphere

Address: 0x13ae8
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
	if ((*(int *)local_c - arg_3) > *(int *)arg_1) goto jmp_13b56;
	if ((*(int *)local_c + arg_3) < *(int *)arg_0) goto jmp_13b56;
	local_1c = 0x4;
	local_20 = *(int *)(arg_2 + local_1c);
	if ((local_20 - arg_3) > *(int *)(arg_1 + local_1c)) goto jmp_13b56;
	if ((local_20 + arg_3) < *(int *)(arg_0 + local_1c)) goto jmp_13b56;
	local_24 = 0x8;
	local_28 = *(int *)(arg_2 + local_24);
	if ((local_28 - arg_3) > *(int *)(arg_1 + local_24)) goto jmp_13b56;
	if ((local_28 + arg_3) >= *(int *)(arg_0 + local_24)) goto jmp_13b5a;
jmp_13b56:
	return 0x0;
jmp_13b5a:
	return 0x1;
}

/*
=================
BoundsIntersectPoint

Address: 0x13b5e
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
	if (*(int *)local_c > *(int *)arg_1) goto jmp_13bb6;
	if (*(int *)local_c < *(int *)arg_0) goto jmp_13bb6;
	local_18 = 0x4;
	local_1c = *(int *)(arg_2 + local_18);
	if (local_1c > *(int *)(arg_1 + local_18)) goto jmp_13bb6;
	if (local_1c < *(int *)(arg_0 + local_18)) goto jmp_13bb6;
	local_20 = 0x8;
	local_24 = *(int *)(arg_2 + local_20);
	if (local_24 > *(int *)(arg_1 + local_20)) goto jmp_13bb6;
	if (local_24 >= *(int *)(arg_0 + local_20)) goto jmp_13bba;
jmp_13bb6:
	return 0x0;
jmp_13bba:
	return 0x1;
}

/*
=================
VectorNormalize

Address: 0x13bbe
Stack Size: 0x38
Calls: sqrt
Called by: PerpendicularVector, MakeNormalVectors, PlaneFromPoints
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
	if (local_c == 0x0) goto jmp_13c2c;
	local_24 = sqrt(local_c);
	*(int *)local_10 = (0x3f800000 / local_24);
	*(int *)local_28 = *(int *)local_10;
	local_c = (local_c * *(int *)local_28);
	*(int *)arg_0 = (*(int *)arg_0 * *(int *)local_28);
	local_30 = (arg_0 + 0x4);
	*(int *)local_30 = (*(int *)local_30 * *(int *)local_10);
	local_34 = (arg_0 + 0x8);
	*(int *)local_34 = (*(int *)local_34 * *(int *)local_10);
jmp_13c2c:
	return local_c;
}

/*
=================
VectorNormalize2

Address: 0x13c31
Stack Size: 0x34
Calls: sqrt
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
	if (local_c == 0x0) goto jmp_13cab;
	local_24 = sqrt(local_c);
	*(int *)local_10 = (0x3f800000 / local_24);
	local_28 = *(int *)local_10;
	local_c = (local_c * local_28);
	*(int *)arg_1 = (*(int *)arg_0 * local_28);
	local_2c = 0x4;
	*(int *)(arg_1 + local_2c) = (*(int *)(arg_0 + local_2c) * *(int *)local_10);
	local_30 = 0x8;
	*(int *)(arg_1 + local_30) = (*(int *)(arg_0 + local_30) * *(int *)local_10);
	goto jmp_13cc1;
jmp_13cab:
	local_28 = 0x0;
	*(int *)(arg_1 + 0x8) = local_28;
	*(int *)(arg_1 + 0x4) = local_28;
	*(int *)arg_1 = local_28;
jmp_13cc1:
	return local_c;
}

/*
=================
_VectorMA

Address: 0x13cc6
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

Address: 0x13d18
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

Address: 0x13d4d
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

Address: 0x13d92
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

Address: 0x13dd7
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

Address: 0x13e06
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

Address: 0x13e42
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

Address: 0x13e90
Stack Size: 0x10
=================
*/
int Q_log2(int arg_0) {
	int		local_8;
	int		local_c;

	arg_0 = arg_0;
	local_8 = 0x0;
	goto jmp_13ea0;
jmp_13e9a:
	local_8 = (local_8 + 0x1);
jmp_13ea0:
	local_c = (arg_0 >> 0x1);
	arg_0 = local_c;
	if (local_c != 0x0) goto jmp_13e9a;
	return local_8;
}

/*
=================
MatrixMultiply

Address: 0x13eb3
Stack Size: 0x70
Called by: RotatePointAroundVector, UI_PositionRotatedEntityOnTag, UI_PositionEntityOnTag
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

Address: 0x1404c
Stack Size: 0x30
Calls: cos, sin
Called by: AnglesToAxis, UI_MovedirAdjustment
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
	bss_7e2ac = local_10;
	local_14 = cos(local_c);
	bss_7e2b8 = local_14;
	local_c = (0x3c8efa35 * *(int *)arg_0);
	local_18 = sin(local_c);
	bss_7e2a8 = local_18;
	local_1c = cos(local_c);
	bss_7e2b4 = local_1c;
	local_c = (0x3c8efa35 * *(int *)(arg_0 + 0x8));
	local_20 = sin(local_c);
	bss_7e2a4 = local_20;
	local_24 = cos(local_c);
	bss_7e2b0 = local_24;
	if (arg_1 == 0x0) goto jmp_140ca;
	*(int *)arg_1 = (bss_7e2b4 * bss_7e2b8);
	*(int *)(arg_1 + 0x4) = (bss_7e2b4 * bss_7e2ac);
	*(int *)(arg_1 + 0x8) = -bss_7e2a8;
jmp_140ca:
	if (arg_2 == 0x0) goto jmp_14111;
	local_28 = 0xbf800000;
	*(int *)arg_2 = ((((local_28 * bss_7e2a4) * bss_7e2a8) * bss_7e2b8) + ((local_28 * bss_7e2b0) * -bss_7e2ac));
	local_2c = 0xbf800000;
	*(int *)(arg_2 + 0x4) = ((((local_2c * bss_7e2a4) * bss_7e2a8) * bss_7e2ac) + ((local_2c * bss_7e2b0) * bss_7e2b8));
	*(int *)(arg_2 + 0x8) = ((0xbf800000 * bss_7e2a4) * bss_7e2b4);
jmp_14111:
	if (arg_3 == 0x0) goto jmp_14146;
	*(int *)arg_3 = (((bss_7e2b0 * bss_7e2a8) * bss_7e2b8) + (-bss_7e2a4 * -bss_7e2ac));
	*(int *)(arg_3 + 0x4) = (((bss_7e2b0 * bss_7e2a8) * bss_7e2ac) + (-bss_7e2a4 * bss_7e2b8));
	*(int *)(arg_3 + 0x8) = (bss_7e2b0 * bss_7e2b4);
jmp_14146:
}

/*
=================
PerpendicularVector

Address: 0x14148
Stack Size: 0x3c
Calls: VectorNormalize, ProjectPointOnPlane, fabs
Called by: RotateAroundDirection, RotatePointAroundVector
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
	goto jmp_1418a;
jmp_1415d:
	*(int *)local_30 = fabs(*(int *)((local_14 << 0x2) + arg_1));
	if (*(int *)local_30 >= local_18) goto jmp_14184;
	local_1c = local_14;
	local_38 = fabs(*(int *)((local_14 << 0x2) + arg_1));
	local_18 = local_38;
jmp_14184:
	local_14 = (local_14 + 0x1);
jmp_1418a:
	if (local_14 < 0x3) goto jmp_1415d;
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

Address: 0x141b8
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

Address: 0x141d0
Stack Size: 0x18
Called by: Q_CleanStr, Q_PrintStrlen, PlayerSettings_DrawName, UI_DrawString2
=================
*/
int Q_IsColorString(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	if (arg_0 != 0x0) goto jmp_141dd;
	return 0x0;
jmp_141dd:
	if ((char)*(char *)arg_0 == 0x5e) goto jmp_141e7;
	return 0x0;
jmp_141e7:
	if ((char)*(char *)(arg_0 + 0x1) != 0x0) goto jmp_141f3;
	return 0x0;
jmp_141f3:
	if ((char)*(char *)(arg_0 + 0x1) >= 0x0) goto jmp_141ff;
	return 0x0;
jmp_141ff:
	local_c = (char)*(char *)(arg_0 + 0x1);
	if (local_c < 0x41) goto jmp_1420f;
	if (local_c <= 0x5a) goto jmp_1422f;
jmp_1420f:
	local_10 = (char)*(char *)(arg_0 + 0x1);
	if (local_10 < 0x61) goto jmp_1421f;
	if (local_10 <= 0x7a) goto jmp_1422f;
jmp_1421f:
	local_14 = (char)*(char *)(arg_0 + 0x1);
	if (local_14 < 0x30) goto jmp_14234;
	if (local_14 > 0x39) goto jmp_14234;
jmp_1422f:
	local_8 = 0x1;
	goto jmp_14237;
jmp_14234:
	local_8 = 0x0;
jmp_14237:
	if (local_8 != 0x0) goto jmp_1423f;
	return 0x0;
jmp_1423f:
	return 0x1;
}

/*
=================
Com_Clamp

Address: 0x14243
Stack Size: 0x8
Called by: ServerOptions_MenuInit, ServerOptions_SetMenuItems, ServerOptions_Start, UI_SPSkillMenu_Init, ArenaServers_MenuInit, Punkbuster_ConfirmDisable, Punkbuster_ConfirmEnable, Preferences_SetMenuItems, PlayerSettings_SetMenuItems, UI_AddBotsMenu_Init
=================
*/
int Com_Clamp(int arg_0, int arg_1, int arg_2) {

	arg_2 = arg_2;
	if (arg_2 >= arg_0) goto jmp_14252;
	return arg_0;
jmp_14252:
	if (arg_2 <= arg_1) goto jmp_1425c;
	return arg_1;
jmp_1425c:
	return arg_2;
}

/*
=================
COM_SkipPath

Address: 0x14261
Stack Size: 0xc
=================
*/
int COM_SkipPath(int arg_0) {
	int		local_8;

	arg_0 = arg_0;
	local_8 = arg_0;
	goto jmp_1427e;
jmp_1426c:
	if ((char)*(char *)arg_0 != 0x2f) goto jmp_14278;
	local_8 = (arg_0 + 0x1);
jmp_14278:
	arg_0 = (arg_0 + 0x1);
jmp_1427e:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_1426c;
	return local_8;
}

/*
=================
COM_GetExtension

Address: 0x14289
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
	if (local_10 == 0x0) goto jmp_142b8;
	local_1c = strrchr(arg_0, 0x2f);
	local_14 = local_1c;
	if (local_1c == 0x0) goto jmp_142b1;
	if (local_14 >= local_10) goto jmp_142b8;
jmp_142b1:
	return (local_10 + 0x1);
jmp_142b8:
	return 0x8933;
}

/*
=================
COM_StripExtension

Address: 0x142bc
Stack Size: 0x28
Calls: Q_strncpyz, strrchr
Called by: UI_SaveConfigMenu_SaveEvent, UI_PlayerInfo_SetWeapon, PlayerModel_BuildList
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
	if (local_14 == 0x0) goto jmp_14309;
	local_20 = strrchr(arg_0, 0x2f);
	local_18 = local_20;
	if (local_20 == 0x0) goto jmp_142ec;
	if (local_18 >= local_14) goto jmp_14309;
jmp_142ec:
	if (arg_2 >= ((local_14 - arg_0) + 0x1)) goto jmp_142fc;
	local_24 = arg_2;
	goto jmp_14305;
jmp_142fc:
	local_24 = ((local_14 - arg_0) + 0x1);
jmp_14305:
	arg_2 = local_24;
jmp_14309:
	if (arg_0 != arg_1) goto jmp_1431d;
	if (arg_2 <= 0x1) goto jmp_1431d;
	*(char *)((arg_2 - 0x1) + arg_1) = 0x0;
	goto jmp_14329;
jmp_1431d:
	Q_strncpyz(arg_1, arg_0, arg_2);
jmp_14329:
}

/*
=================
COM_CompareExtension

Address: 0x1432b
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
	if (local_14 > local_10) goto jmp_14363;
	arg_0 = ((local_10 - local_14) + arg_0);
	local_20 = Q_stricmp(arg_0, arg_1);
	if (local_20 != 0x0) goto jmp_14363;
	return 0x1;
jmp_14363:
	return 0x0;
}

/*
=================
COM_DefaultExtension

Address: 0x14367
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
	if (local_14 == 0x0) goto jmp_14391;
	local_20 = strrchr(arg_0, 0x2f);
	local_18 = local_20;
	if (local_20 == 0x0) goto jmp_1438f;
	if (local_18 >= local_14) goto jmp_14391;
jmp_1438f:
	goto jmp_1439d;
jmp_14391:
	Q_strcat(arg_0, arg_1, arg_2);
jmp_1439d:
}

/*
=================
CopyShortSwap

Address: 0x1439f
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

Address: 0x143ba
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

Address: 0x143e9
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

Address: 0x14416
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

Address: 0x14421
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

Address: 0x1446e
Stack Size: 0x8
=================
*/
int LongNoSwap(int arg_0) {

	return arg_0;
}

/*
=================
Long64Swap

Address: 0x14474
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

Address: 0x144b5
Stack Size: 0x8
=================
*/
void Long64NoSwap(int arg_0, int arg_1) {

	block_copy(arg_1, arg_0, 0x8);
}

/*
=================
FloatSwap

Address: 0x144bd
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

Address: 0x144d3
Stack Size: 0x8
=================
*/
int FloatNoSwap(int arg_0) {

	return *(int *)arg_0;
}

/*
=================
COM_BeginParseSession

Address: 0x144da
Stack Size: 0x18
Calls: Com_sprintf
=================
*/
void COM_BeginParseSession(int arg_0) {

	com_lines = 0x1;
	com_tokenline = 0x0;
	Com_sprintf(0x93cc4, 0x400, 0x8930, arg_0);
}

/*
=================
COM_GetCurrentParseLine

Address: 0x144ef
Stack Size: 0x8
Called by: COM_ParseWarning, COM_ParseError
=================
*/
int COM_GetCurrentParseLine(void) {

	if (com_tokenline == 0x0) goto jmp_144f9;
	return com_tokenline;
jmp_144f9:
	return com_lines;
}

/*
=================
COM_Parse

Address: 0x144fe
Stack Size: 0x14
Calls: COM_ParseExt
Called by: Parse1DMatrix, COM_MatchToken, UI_ParseAnimationFile, UI_ParseInfos
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

Address: 0x1450d
Stack Size: 0x20
Calls: Com_Printf, COM_GetCurrentParseLine, Q_vsnprintf
=================
*/
void COM_ParseError(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;

	local_18 = &arg_1;
	Q_vsnprintf(0x7e2bc, 0x1000, arg_0, local_18);
	local_18 = 0x0;
	local_1c = COM_GetCurrentParseLine();
	Com_Printf(0x8918, 0x93cc4, local_1c, 0x7e2bc);
}

/*
=================
COM_ParseWarning

Address: 0x14533
Stack Size: 0x20
Calls: Com_Printf, COM_GetCurrentParseLine, Q_vsnprintf
=================
*/
void COM_ParseWarning(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;

	local_18 = &arg_1;
	Q_vsnprintf(0x7f2bc, 0x1000, arg_0, local_18);
	local_18 = 0x0;
	local_1c = COM_GetCurrentParseLine();
	Com_Printf(0x88fe, 0x93cc4, local_1c, 0x7f2bc);
}

/*
=================
SkipWhitespace

Address: 0x14559
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
	goto jmp_1458a;
jmp_14564:
	if (local_8 != 0x0) goto jmp_1456c;
	return 0x0;
jmp_1456c:
	if (local_8 != 0xa) goto jmp_14584;
	local_c = 0x93cc0;
	local_10 = 0x1;
	*(int *)local_c = (*(int *)local_c + local_10);
	*(int *)arg_1 = local_10;
jmp_14584:
	arg_0 = (arg_0 + 0x1);
jmp_1458a:
	local_c = (char)*(char *)arg_0;
	local_8 = local_c;
	if (local_c <= 0x20) goto jmp_14564;
	return arg_0;
}

/*
=================
COM_Compress

Address: 0x1459d
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
	if (local_8 == 0x0) goto jmp_146fc;
	goto jmp_146ea;
jmp_145b6:
	local_20 = 0x2f;
	if (local_c != local_20) goto jmp_145df;
	if ((char)*(char *)(local_8 + 0x1) != local_20) goto jmp_145df;
	goto jmp_145cf;
jmp_145c9:
	local_8 = (local_8 + 0x1);
jmp_145cf:
	local_24 = (char)*(char *)local_8;
	if (local_24 == 0x0) goto jmp_145dd;
	if (local_24 != 0xa) goto jmp_145c9;
jmp_145dd:
	goto jmp_146ea;
jmp_145df:
	if (local_c != 0x2f) goto jmp_14617;
	if ((char)*(char *)(local_8 + 0x1) != 0x2a) goto jmp_14617;
	goto jmp_145f3;
jmp_145ed:
	local_8 = (local_8 + 0x1);
jmp_145f3:
	local_28 = (char)*(char *)local_8;
	if (local_28 == 0x0) goto jmp_14609;
	if (local_28 != 0x2a) goto jmp_145ed;
	if ((char)*(char *)(local_8 + 0x1) != 0x2f) goto jmp_145ed;
jmp_14609:
	if ((char)*(char *)local_8 == 0x0) goto jmp_146ea;
	local_8 = (local_8 + 0x2);
	goto jmp_146ea;
jmp_14617:
	if (local_c == 0xa) goto jmp_1461f;
	if (local_c != 0xd) goto jmp_1462f;
jmp_1461f:
	local_28 = 0x1;
	local_14 = local_28;
	local_8 = (local_8 + local_28);
	goto jmp_146ea;
jmp_1462f:
	if (local_c == 0x20) goto jmp_14637;
	if (local_c != 0x9) goto jmp_14647;
jmp_14637:
	local_2c = 0x1;
	local_18 = local_2c;
	local_8 = (local_8 + local_2c);
	goto jmp_146ea;
jmp_14647:
	if (local_14 == 0x0) goto jmp_14664;
	local_2c = local_10;
	local_10 = (local_2c + 0x1);
	*(char *)local_2c = 0xa;
	local_30 = 0x0;
	local_14 = local_30;
	local_18 = local_30;
jmp_14664:
	if (local_18 == 0x0) goto jmp_14679;
	local_2c = local_10;
	local_10 = (local_2c + 0x1);
	*(char *)local_2c = 0x20;
	local_18 = 0x0;
jmp_14679:
	if (local_c != 0x22) goto jmp_146d4;
	local_2c = local_10;
	local_10 = (local_2c + 0x1);
	*(char *)local_2c = local_c;
	local_8 = (local_8 + 0x1);
	goto jmp_146b7;
jmp_14694:
	local_c = (char)*(char *)local_8;
	if (local_c == 0x0) goto jmp_146b9;
	if (local_c == 0x22) goto jmp_146b9;
	local_34 = local_10;
	local_10 = (local_34 + 0x1);
	*(char *)local_34 = local_c;
	local_8 = (local_8 + 0x1);
jmp_146b7:
	goto jmp_14694;
jmp_146b9:
	if (local_c != 0x22) goto jmp_146ea;
	local_30 = local_10;
	local_10 = (local_30 + 0x1);
	*(char *)local_30 = local_c;
	local_8 = (local_8 + 0x1);
	goto jmp_146ea;
jmp_146d4:
	*(char *)local_10 = local_c;
	local_2c = 0x1;
	local_10 = (local_10 + local_2c);
	local_8 = (local_8 + local_2c);
jmp_146ea:
	local_20 = (char)*(char *)local_8;
	local_c = local_20;
	if (local_20 != 0x0) goto jmp_145b6;
	*(char *)local_10 = 0x0;
jmp_146fc:
	return (local_10 - arg_0);
}

/*
=================
COM_ParseExt

Address: 0x14704
Stack Size: 0x38
Calls: SkipWhitespace
Called by: SkipBracedSection, COM_Parse, GametypeBits, UI_ParseInfos
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
	if (local_10 != 0x0) goto jmp_147e3;
	*(int *)arg_0 = 0x0;
	return 0x940c4;
jmp_14732:
	local_24 = SkipWhitespace(local_10, &local_1c);
	local_10 = local_24;
	if (local_10 != 0x0) goto jmp_1474b;
	*(int *)arg_0 = 0x0;
	return 0x940c4;
jmp_1474b:
	local_28 = 0x0;
	if (local_1c == local_28) goto jmp_14761;
	if (arg_1 != local_28) goto jmp_14761;
	*(int *)arg_0 = local_10;
	return 0x940c4;
jmp_14761:
	local_14 = (char)*(char *)local_10;
	local_2c = 0x2f;
	if (local_14 != local_2c) goto jmp_14796;
	if ((char)*(char *)(local_10 + 0x1) != local_2c) goto jmp_14796;
	local_10 = (local_10 + 0x2);
	goto jmp_14786;
jmp_14780:
	local_10 = (local_10 + 0x1);
jmp_14786:
	local_30 = (char)*(char *)local_10;
	if (local_30 == 0x0) goto jmp_14794;
	if (local_30 != 0xa) goto jmp_14780;
jmp_14794:
	goto jmp_147e3;
jmp_14796:
	if (local_14 != 0x2f) goto jmp_147e5;
	if ((char)*(char *)(local_10 + 0x1) != 0x2a) goto jmp_147e5;
	local_10 = (local_10 + 0x2);
	goto jmp_147c1;
jmp_147aa:
	if ((char)*(char *)local_10 != 0xa) goto jmp_147bb;
	local_30 = 0x93cc0;
	*(int *)local_30 = (*(int *)local_30 + 0x1);
jmp_147bb:
	local_10 = (local_10 + 0x1);
jmp_147c1:
	local_34 = (char)*(char *)local_10;
	if (local_34 == 0x0) goto jmp_147d7;
	if (local_34 != 0x2a) goto jmp_147aa;
	if ((char)*(char *)(local_10 + 0x1) != 0x2f) goto jmp_147aa;
jmp_147d7:
	if ((char)*(char *)local_10 == 0x0) goto jmp_147e3;
	local_10 = (local_10 + 0x2);
jmp_147e3:
	goto jmp_14732;
jmp_147e5:
	com_tokenline = com_lines;
	if (local_14 != 0x22) goto jmp_1483e;
	local_10 = (local_10 + 0x1);
	goto jmp_1483c;
jmp_147f5:
	local_24 = local_10;
	local_10 = (local_24 + 0x1);
	local_14 = (char)*(char *)local_24;
	if (local_14 == 0x22) goto jmp_1480d;
	if (local_14 != 0x0) goto jmp_1481c;
jmp_1480d:
	*(char *)(local_18 + 0x940c4) = 0x0;
	*(int *)arg_0 = local_10;
	return 0x940c4;
jmp_1481c:
	if (local_14 != 0xa) goto jmp_1482b;
	local_2c = 0x93cc0;
	*(int *)local_2c = (*(int *)local_2c + 0x1);
jmp_1482b:
	if (local_18 >= 0x3ff) goto jmp_1483c;
	*(char *)(local_18 + 0x940c4) = local_14;
	local_18 = (local_18 + 0x1);
jmp_1483c:
	goto jmp_147f5;
jmp_1483e:
	if (local_18 >= 0x3ff) goto jmp_1484f;
	*(char *)(local_18 + 0x940c4) = local_14;
	local_18 = (local_18 + 0x1);
jmp_1484f:
	local_10 = (local_10 + 0x1);
	local_14 = (char)*(char *)local_10;
	if (local_14 > 0x20) goto jmp_1483e;
	*(char *)(local_18 + 0x940c4) = 0x0;
	*(int *)arg_0 = local_10;
	return 0x940c4;
}

/*
=================
COM_MatchToken

Address: 0x1486e
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
	if (local_20 == 0x0) goto jmp_14895;
	Com_Error(0x1, 0x88e9, local_18, arg_1);
jmp_14895:
}

/*
=================
SkipBracedSection

Address: 0x14897
Stack Size: 0x18
Calls: COM_ParseExt
=================
*/
int SkipBracedSection(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;

	arg_0 = arg_0;
	arg_1 = arg_1;
jmp_148a0:
	local_14 = COM_ParseExt(arg_0, 0x1);
	local_10 = local_14;
	if ((char)*(char *)(local_10 + 0x1) != 0x0) goto jmp_148cf;
	if ((char)*(char *)local_10 != 0x7b) goto jmp_148c3;
	arg_1 = (arg_1 + 0x1);
	goto jmp_148cf;
jmp_148c3:
	if ((char)*(char *)local_10 != 0x7d) goto jmp_148cf;
	arg_1 = (arg_1 - 0x1);
jmp_148cf:
	if (arg_1 == 0x0) goto jmp_148d8;
	if (*(int *)arg_0 != 0x0) goto jmp_148a0;
jmp_148d8:
	if (arg_1 != 0x0) goto jmp_148e1;
	local_14 = 0x1;
	goto jmp_148e4;
jmp_148e1:
	local_14 = 0x0;
jmp_148e4:
	return local_14;
}

/*
=================
SkipRestOfLine

Address: 0x148e9
Stack Size: 0x18
=================
*/
void SkipRestOfLine(int arg_0) {
	int		local_8;
	int		local_c;
	int		local_10;
	int		local_14;

	local_c = *(int *)arg_0;
	if ((char)*(char *)local_c != 0x0) goto jmp_14908;
	goto jmp_14925;
jmp_148f7:
	if (local_8 != 0xa) goto jmp_14908;
	local_10 = 0x93cc0;
	*(int *)local_10 = (*(int *)local_10 + 0x1);
	goto jmp_14920;
jmp_14908:
	local_10 = local_c;
	local_c = (local_10 + 0x1);
	local_14 = (char)*(char *)local_10;
	local_8 = local_14;
	if (local_14 != 0x0) goto jmp_148f7;
jmp_14920:
	*(int *)arg_0 = local_c;
jmp_14925:
}

/*
=================
Parse1DMatrix

Address: 0x14927
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
	COM_MatchToken(arg_0, 0x88e7);
	local_10 = 0x0;
	goto jmp_14963;
jmp_14941:
	local_18 = COM_Parse(arg_0);
	local_14 = local_18;
	local_1c = atof(local_14);
	*(int *)((local_10 << 0x2) + arg_2) = local_1c;
	local_10 = (local_10 + 0x1);
jmp_14963:
	if (local_10 < arg_1) goto jmp_14941;
	COM_MatchToken(arg_0, 0x88e5);
}

/*
=================
Parse2DMatrix

Address: 0x14972
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
	COM_MatchToken(arg_0, 0x88e7);
	*(int *)local_14 = 0x0;
	goto jmp_149aa;
jmp_14990:
	Parse1DMatrix(arg_0, arg_2, (((*(int *)local_14 * arg_2) << 0x2) + arg_3));
	*(int *)local_14 = (*(int *)local_14 + 0x1);
jmp_149aa:
	if (*(int *)local_14 < arg_1) goto jmp_14990;
	COM_MatchToken(arg_0, 0x88e5);
}

/*
=================
Parse3DMatrix

Address: 0x149b9
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
	COM_MatchToken(arg_0, 0x88e7);
	*(int *)local_18 = 0x0;
	goto jmp_149fb;
jmp_149db:
	Parse2DMatrix(arg_0, arg_2, arg_3, ((((*(int *)local_18 * arg_3) * arg_2) << 0x2) + arg_4));
	*(int *)local_18 = (*(int *)local_18 + 0x1);
jmp_149fb:
	if (*(int *)local_18 < arg_1) goto jmp_149db;
	COM_MatchToken(arg_0, 0x88e5);
}

/*
=================
Com_HexStrToInt

Address: 0x14a0a
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
	if (arg_0 != 0x0) goto jmp_14a17;
	return 0xffffffff;
jmp_14a17:
	if ((char)*(char *)arg_0 != 0x30) goto jmp_14aa0;
	if ((char)*(char *)(arg_0 + 0x1) != 0x78) goto jmp_14aa0;
	if ((char)*(char *)(arg_0 + 0x2) == 0x0) goto jmp_14aa0;
	local_14 = 0x0;
	local_1c = strlen(arg_0);
	local_18 = local_1c;
	local_10 = 0x2;
	goto jmp_14a96;
jmp_14a40:
	local_14 = (local_14 << 0x4);
	local_24 = tolower((char)*(char *)(local_10 + arg_0));
	*(char *)&local_20 = local_24;
	local_28 = (char)*(char *)&local_20;
	if (local_28 < 0x30) goto jmp_14a6c;
	if (local_28 > 0x39) goto jmp_14a6c;
	*(char *)&local_20 = ((char)*(char *)&local_20 - 0x30);
	goto jmp_14a88;
jmp_14a6c:
	local_2c = (char)*(char *)&local_20;
	if (local_2c < 0x61) goto jmp_14a84;
	if (local_2c > 0x66) goto jmp_14a84;
	*(char *)&local_20 = (((char)*(char *)&local_20 - 0x61) + 0xa);
	goto jmp_14a88;
jmp_14a84:
	return 0xffffffff;
jmp_14a88:
	local_14 = (local_14 + (char)*(char *)&local_20);
	local_10 = (local_10 + 0x1);
jmp_14a96:
	if (local_10 < local_18) goto jmp_14a40;
	return local_14;
jmp_14aa0:
	return 0xffffffff;
}

/*
=================
Q_isprint

Address: 0x14aa4
Stack Size: 0xc
Called by: ScrollList_Key
=================
*/
int Q_isprint(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	if (local_8 < 0x20) goto jmp_14ab5;
	if (local_8 > 0x7e) goto jmp_14ab5;
	return 0x1;
jmp_14ab5:
	return 0x0;
}

/*
=================
Q_islower

Address: 0x14ab9
Stack Size: 0xc
Called by: MenuField_Key
=================
*/
int Q_islower(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	if (local_8 < 0x61) goto jmp_14aca;
	if (local_8 > 0x7a) goto jmp_14aca;
	return 0x1;
jmp_14aca:
	return 0x0;
}

/*
=================
Q_isupper

Address: 0x14ace
Stack Size: 0xc
Called by: ScrollList_Key, MenuField_Key
=================
*/
int Q_isupper(int arg_0) {
	int		local_8;

	local_8 = arg_0;
	if (local_8 < 0x41) goto jmp_14adf;
	if (local_8 > 0x5a) goto jmp_14adf;
	return 0x1;
jmp_14adf:
	return 0x0;
}

/*
=================
Q_isalpha

Address: 0x14ae3
Stack Size: 0x10
Called by: MenuField_Key
=================
*/
int Q_isalpha(int arg_0) {

	arg_0 = arg_0;
	if (arg_0 < 0x61) goto jmp_14af0;
	if (arg_0 <= 0x7a) goto jmp_14af8;
jmp_14af0:
	if (arg_0 < 0x41) goto jmp_14afc;
	if (arg_0 > 0x5a) goto jmp_14afc;
jmp_14af8:
	return 0x1;
jmp_14afc:
	return 0x0;
}

/*
=================
Q_isanumber

Address: 0x14b00
Stack Size: 0x20
Calls: strtod
=================
*/
int Q_isanumber(int arg_0) {
	int		local_10;
	int		local_14;
	int		local_18;
	int		local_1c;

	if ((char)*(char *)arg_0 != 0x0) goto jmp_14b0b;
	return 0x0;
jmp_14b0b:
	local_18 = strtod(arg_0, &local_10);
	local_14 = local_18;
	if ((char)*(char *)local_10 != 0x0) goto jmp_14b23;
	local_1c = 0x1;
	goto jmp_14b26;
jmp_14b23:
	local_1c = 0x0;
jmp_14b26:
	return local_1c;
}

/*
=================
Q_isintegral

Address: 0x14b2b
Stack Size: 0x10
=================
*/
int Q_isintegral(int arg_0) {
	int		local_8;
	int		local_c;

	local_c = arg_0;
	if ((float)(int)local_c != local_c) goto jmp_14b3c;
	local_8 = 0x1;
	goto jmp_14b3f;
jmp_14b3c:
	local_8 = 0x0;
jmp_14b3f:
	return local_8;
}

/*
=================
Q_strncpyz

Address: 0x14b44
Stack Size: 0x14
Calls: strncpy, Com_Error
Called by: Com_TruncateLongString, Q_strcat, COM_StripExtension, GraphicsOptions_ApplyChanges, GraphicsOptions_GetAspectRatios, UI_DriverInfo_Menu, UI_TeamOrdersMenu_BuildBotList, UI_BotSelectMenu_SelectEvent, UI_BotSelectMenu_UpdateGrid, ServerPlayerIcon, ServerOptions_SetMenuItems, ServerOptions_InitBotNames, ServerOptions_LevelshotDraw, StartServer_Cache, StartServer_LevelshotDraw, StartServer_Update, UI_SPPostgameMenu_f, Prepname, UI_SPPostgameMenu_MenuDrawScoreLine, UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_SetMenuArena, UI_SPLevelMenu_SetBots, PlayerIcon, ArenaServers_LoadFavorites, ArenaServers_Insert, UI_RemoveBotsMenu_SetBotNames, PlayerSettings_SetMenuItems, PlayerSettings_DrawName, UI_RegisterClientModelname, PlayerModel_SetMenuItems, PlayerModel_PicEvent, UI_Mods_ParseInfos, UI_ParseInfos, UI_DrawProportionalString_AutoWrapped, UI_AddBotsMenu_SetBotNames
=================
*/
void Q_strncpyz(int arg_0, int arg_1, int arg_2) {

	arg_0 = arg_0;
	arg_2 = arg_2;
	if (arg_0 != 0x0) goto jmp_14b58;
	Com_Error(0x0, 0x88cf);
jmp_14b58:
	if (arg_1 != 0x0) goto jmp_14b63;
	Com_Error(0x0, 0x88ba);
jmp_14b63:
	if (arg_2 >= 0x1) goto jmp_14b6e;
	Com_Error(0x0, 0x88a1);
jmp_14b6e:
	strncpy(arg_0, arg_1, (arg_2 - 0x1));
	*(char *)((arg_2 - 0x1) + arg_0) = 0x0;
}

/*
=================
Q_stricmpn

Address: 0x14b87
Stack Size: 0x2c
Called by: Q_stristr, Q_stricmp, PlayerModel_BuildList, strtod
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
	if (arg_0 != 0x0) goto jmp_14ba4;
	if (arg_1 != 0x0) goto jmp_14ba0;
	return 0x0;
jmp_14ba0:
	return 0xffffffff;
jmp_14ba4:
	if (arg_1 != 0x0) goto jmp_14bac;
	return 0x1;
jmp_14bac:
	local_10 = arg_0;
	*(int *)local_1c = 0x1;
	arg_0 = (local_10 + *(int *)local_1c);
	local_8 = (char)*(char *)local_10;
	local_14 = arg_1;
	arg_1 = (local_14 + *(int *)local_1c);
	local_c = (char)*(char *)local_14;
	local_18 = arg_2;
	arg_2 = (local_18 - *(int *)local_1c);
	if (local_18 != 0x0) goto jmp_14be4;
	return 0x0;
jmp_14be4:
	if (local_8 == local_c) goto jmp_14c1c;
	if (local_8 < 0x61) goto jmp_14bf7;
	if (local_8 > 0x7a) goto jmp_14bf7;
	local_8 = (local_8 - 0x20);
jmp_14bf7:
	if (local_c < 0x61) goto jmp_14c05;
	if (local_c > 0x7a) goto jmp_14c05;
	local_c = (local_c - 0x20);
jmp_14c05:
	if (local_8 == local_c) goto jmp_14c1c;
	if (local_8 >= local_c) goto jmp_14c14;
	local_28 = 0xffffffff;
	goto jmp_14c17;
jmp_14c14:
	local_28 = 0x1;
jmp_14c17:
	return local_28;
jmp_14c1c:
	if (local_8 != 0x0) goto jmp_14bac;
	return 0x0;
}

/*
=================
Q_strncmp

Address: 0x14c24
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
jmp_14c31:
	local_10 = arg_0;
	local_1c = 0x1;
	arg_0 = (local_10 + local_1c);
	local_8 = (char)*(char *)local_10;
	local_14 = arg_1;
	arg_1 = (local_14 + local_1c);
	local_c = (char)*(char *)local_14;
	local_18 = arg_2;
	arg_2 = (local_18 - local_1c);
	if (local_18 != 0x0) goto jmp_14c69;
	return 0x0;
jmp_14c69:
	if (local_8 == local_c) goto jmp_14c80;
	if (local_8 >= local_c) goto jmp_14c78;
	local_20 = 0xffffffff;
	goto jmp_14c7b;
jmp_14c78:
	local_20 = 0x1;
jmp_14c7b:
	return local_20;
jmp_14c80:
	if (local_8 != 0x0) goto jmp_14c31;
	return 0x0;
}

/*
=================
Q_stricmp

Address: 0x14c88
Stack Size: 0x20
Calls: Q_stricmpn
Called by: Info_ValueForKey, COM_CompareExtension, GraphicsOptions_SetMenuItems, GraphicsOptions_GetAspectRatios, GraphicsOptions_FindDetectedResolution, GraphicsOptions_FindBuiltinResolution, UI_BotSelectMenu_Default, ServerPlayerIcon, UI_BotSelectMenu_SortCompare, BotAlreadySelected, GametypeBits, UI_SPLevelMenu_MenuDraw, PlayerIcon, UI_SPArena_Start, ArenaServers_DoRefresh, ArenaServers_LoadFavorites, ArenaServers_Remove, ArenaServers_Compare, Favorites_Add, UI_ParseAnimationFile, PlayerModel_SetMenuItems, UI_TeamArenaExists, LoadConfig_MenuInit, UI_GetBotInfoByName, UI_GetSpecialArenaInfo, UI_GetArenaInfoByMap, Controls_GetKeyAssignment, UI_ConsoleCommand, UI_AddBotsMenu_SortCompare, BG_FindItem
=================
*/
int Q_stricmp(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;
	int		local_1c;

	local_18 = 0x0;
	if (arg_0 == local_18) goto jmp_14ca8;
	if (arg_1 == local_18) goto jmp_14ca8;
	local_1c = Q_stricmpn(arg_0, arg_1, 0x1869f);
	local_14 = local_1c;
	goto jmp_14cab;
jmp_14ca8:
	local_14 = 0xffffffff;
jmp_14cab:
	return local_14;
}

/*
=================
Q_strlwr

Address: 0x14cb0
Stack Size: 0x18
Calls: tolower
=================
*/
int Q_strlwr(int arg_0) {
	char	local_c[8];
	int		local_14;

	*(int *)local_c = arg_0;
	goto jmp_14ccb;
jmp_14cb7:
	local_14 = tolower((char)*(char *)*(int *)local_c);
	*(char *)*(int *)local_c = local_14;
	*(int *)local_c = (*(int *)local_c + 0x1);
jmp_14ccb:
	if ((char)*(char *)*(int *)local_c != 0x0) goto jmp_14cb7;
	return arg_0;
}

/*
=================
Q_strupr

Address: 0x14cd6
Stack Size: 0x18
Calls: toupper
Called by: ServerOptions_SetMenuItems, StartServer_Cache, StartServer_LevelshotDraw, StartServer_Update, UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_SetMenuArena, ArenaServers_Insert, PlayerModel_SetMenuItems, PlayerModel_PicEvent, LoadConfig_MenuInit, Controls_DrawKeyBinding
=================
*/
int Q_strupr(int arg_0) {
	char	local_c[8];
	int		local_14;

	*(int *)local_c = arg_0;
	goto jmp_14cf1;
jmp_14cdd:
	local_14 = toupper((char)*(char *)*(int *)local_c);
	*(char *)*(int *)local_c = local_14;
	*(int *)local_c = (*(int *)local_c + 0x1);
jmp_14cf1:
	if ((char)*(char *)*(int *)local_c != 0x0) goto jmp_14cdd;
	return arg_0;
}

/*
=================
Q_strcat

Address: 0x14cfc
Stack Size: 0x20
Calls: Q_strncpyz, Com_Error, strlen
Called by: Com_TruncateLongString, COM_DefaultExtension, ServerInfo_MenuDraw, UI_PlayerInfo_SetWeapon, PlayerModel_SetMenuItems
=================
*/
void Q_strcat(int arg_0, int arg_1, int arg_2) {
	int		local_14;
	char	local_18[8];

	*(int *)local_18 = strlen(arg_0);
	local_14 = *(int *)local_18;
	if (local_14 < arg_1) goto jmp_14d14;
	Com_Error(0x0, 0x8884);
jmp_14d14:
	Q_strncpyz((local_14 + arg_0), arg_2, (arg_1 - local_14));
}

/*
=================
Q_stristr

Address: 0x14d28
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
	if ((char)*(char *)&local_20 == 0x0) goto jmp_14db6;
	local_24 = (char)*(char *)local_15;
	if (local_24 < 0x61) goto jmp_14d5d;
	if (local_24 > 0x7a) goto jmp_14d5d;
	*(char *)local_15 = ((char)*(char *)local_15 - 0x20);
jmp_14d5d:
	local_28 = strlen(arg_1);
	local_18 = local_28;
jmp_14d68:
	local_2c = arg_0;
	arg_0 = (local_2c + 0x1);
	*(char *)&local_30 = *(char *)local_2c;
	local_14 = *(char *)&local_30;
	if ((char)*(char *)&local_30 != 0x0) goto jmp_14d84;
	return 0x0;
jmp_14d84:
	local_34 = (char)local_14;
	if (local_34 < 0x61) goto jmp_14d98;
	if (local_34 > 0x7a) goto jmp_14d98;
	local_14 = ((char)local_14 - 0x20);
jmp_14d98:
	if ((char)local_14 != (char)*(char *)local_15) goto jmp_14d68;
	local_2c = Q_stricmpn(arg_0, arg_1, local_18);
	if (local_2c != 0x0) goto jmp_14d68;
	arg_0 = (arg_0 + 0xffffffff);
jmp_14db6:
	return arg_0;
}

/*
=================
Q_PrintStrlen

Address: 0x14dbb
Stack Size: 0x1c
Calls: Q_IsColorString
=================
*/
int Q_PrintStrlen(int arg_0) {
	int		local_c;
	int		local_10;
	int		local_14;
	int		local_18;

	if (arg_0 != 0x0) goto jmp_14dc4;
	return 0x0;
jmp_14dc4:
	local_10 = 0x0;
	local_c = arg_0;
	goto jmp_14df1;
jmp_14dcd:
	local_14 = Q_IsColorString(local_c);
	if (local_14 == 0x0) goto jmp_14de0;
	local_c = (local_c + 0x2);
	goto jmp_14df1;
jmp_14de0:
	local_18 = 0x1;
	local_c = (local_c + local_18);
	local_10 = (local_10 + local_18);
jmp_14df1:
	if ((char)*(char *)local_c != 0x0) goto jmp_14dcd;
	return local_10;
}

/*
=================
Q_CleanStr

Address: 0x14dfc
Stack Size: 0x28
Calls: Q_IsColorString
Called by: UI_TeamOrdersMenu_BuildBotList, UI_BotSelectMenu_UpdateGrid, ServerOptions_InitPlayerItems, Prepname, UI_SPPostgameMenu_MenuDrawScoreLine, UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_SetBots, ArenaServers_Insert, UI_RemoveBotsMenu_SetBotNames, PlayerSettings_DrawName, PlayerModel_SetMenuItems, Controls_MenuInit
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
	goto jmp_14e3b;
jmp_14e0b:
	*(int *)local_1c = Q_IsColorString(local_c);
	if (*(int *)local_1c == 0x0) goto jmp_14e1e;
	local_c = (local_c + 0x1);
	goto jmp_14e35;
jmp_14e1e:
	if (local_10 < 0x20) goto jmp_14e35;
	if (local_10 > 0x7e) goto jmp_14e35;
	local_24 = *(int *)local_14;
	*(int *)local_14 = (local_24 + 0x1);
	*(char *)local_24 = local_10;
jmp_14e35:
	local_c = (local_c + 0x1);
jmp_14e3b:
	*(int *)local_1c = (char)*(char *)local_c;
	local_10 = *(int *)local_1c;
	if (*(int *)local_1c != 0x0) goto jmp_14e0b;
	*(char *)*(int *)local_14 = 0x0;
	return arg_0;
}

/*
=================
Q_CountChar

Address: 0x14e52
Stack Size: 0xc
=================
*/
int Q_CountChar(int arg_0, int arg_1) {
	int		local_8;

	arg_0 = arg_0;
	*(char *)&arg_1 = arg_1;
	local_8 = 0x0;
	goto jmp_14e74;
jmp_14e60:
	if ((char)*(char *)arg_0 != (char)*(char *)&arg_1) goto jmp_14e6e;
	local_8 = (local_8 + 0x1);
jmp_14e6e:
	arg_0 = (arg_0 + 0x1);
jmp_14e74:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_14e60;
	return local_8;
}

/*
=================
Com_sprintf

Address: 0x14e7f
Stack Size: 0x24
Calls: Com_Printf, Q_vsnprintf
Called by: Info_SetValueForKey_Big, Info_SetValueForKey, COM_BeginParseSession, GraphicsOptions_GetResolutions, GraphicsOptions_GetAspectRatios, UI_TeamOrdersMenu_ListEvent, ServerPlayerIcon, ServerOptions_SetMenuItems, ServerOptions_Start, StartServer_Cache, StartServer_Update, UI_SPPostgameMenu_DrawAwardsMedals, UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_SetMenuArena, PlayerIcon, SpecifyServer_MenuInit, SpecifyServer_Event, ArenaServers_SetType, ArenaServers_UpdateMenu, ArenaServers_UpdatePicture, UI_RegisterClientModelname, UI_RegisterClientSkin, PlayerModel_BuildList, UI_SPUnlockMedals_f, UI_SPUnlock_f, UI_CanShowTierVideo, UI_ShowTierVideo, UI_GetAwardLevel, UI_LogAwardData, UI_SetBestScore, UI_GetBestScore, Demos_MenuInit, UI_PrintTime, UI_ReadableSize
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
	if (local_18 < arg_1) goto jmp_14eac;
	Com_Printf(0x8848, arg_1, (local_18 + 0x1));
jmp_14eac:
	return local_18;
}

/*
=================
va

Address: 0x14eb1
Stack Size: 0x2c
Calls: Q_vsnprintf
Called by: DriverInfo_MenuDraw, UI_TeamOrdersMenu_ListEvent, ServerOptions_Start, UI_SPPostgameMenu_f, UI_SPPostgameMenu_MenuDraw, UI_SPPostgameMenu_MenuDrawScoreLine, UI_SPLevelMenu_MenuDraw, SpecifyServer_Event, UI_SPArena_Start, ArenaServers_SaveChanges, ArenaServers_StartRefresh, ArenaServers_DoRefresh, ArenaServers_LoadFavorites, ArenaServers_Go, Favorites_Add, UI_SaveConfigMenu_SaveEvent, UI_RemoveBotsMenu_DeleteEvent, Menu_Draw, Menu_AddItem, Preferences_Cache, PlayerSettings_MenuEvent, UI_SetLerpFrameAnimation, PlayerModel_BuildList, UI_Mods_LoadMods, LoadConfig_MenuEvent, UI_ShowTierVideo, UI_LogAwardData, UI_SetBestScore, UI_GetBestScore, UI_GetBotInfoByNumber, UI_LoadBots, UI_LoadBotsFromFile, UI_GetArenaInfoByNumber, UI_LoadArenas, UI_LoadArenasFromFile, UI_ParseInfos, Demos_MenuEvent, UI_DrawConnectScreen, UI_DisplayDownloadInfo, UI_CinematicsMenu_Event, UI_Refresh, UI_AddBotsMenu_FightEvent
=================
*/
int va(int arg_0, int arg_1) {
	int		local_18;
	int		local_1c;
	int		local_20;
	int		local_24;
	int		local_28;

	local_20 = 0x3280;
	local_24 = *(int *)local_20;
	local_28 = 0x1;
	local_1c = ((0x7d00 * (local_24 & local_28)) + 0x802bc);
	*(int *)local_20 = (local_24 + local_28);
	local_18 = &arg_1;
	Q_vsnprintf(local_1c, 0x7d00, arg_0, local_18);
	local_18 = 0x0;
	return local_1c;
}

/*
=================
Com_TruncateLongString

Address: 0x14ee9
Stack Size: 0x1c
Calls: Q_strcat, Q_strncpyz, strlen
=================
*/
void Com_TruncateLongString(int arg_0, int arg_1) {
	int		local_14;
	int		local_18;

	local_18 = strlen(arg_1);
	local_14 = local_18;
	if (local_14 > 0x40) goto jmp_14f06;
	Q_strncpyz(arg_0, arg_1, 0x40);
	goto jmp_14f2b;
jmp_14f06:
	Q_strncpyz(arg_0, arg_1, 0x1d);
	Q_strcat(arg_0, 0x40, 0x8842);
	Q_strcat(arg_0, 0x40, ((local_14 + arg_1) + 0xffffffe3));
jmp_14f2b:
}

/*
=================
Info_ValueForKey

Address: 0x14f2d
Stack Size: 0x202c
Calls: Q_stricmp, Com_Error, strlen
Called by: UI_TeamOrdersMenu_f, UI_TeamOrdersMenu_BuildBotList, TeamMain_MenuInit, UI_BotSelectMenu_Default, UI_BotSelectMenu_UpdateGrid, UI_BotSelectMenu_SortCompare, ServerOptions_SetMenuItems, ServerOptions_InitBotNames, ServerOptions_Start, StartServer_Cache, StartServer_LevelshotDraw, StartServer_GametypeEvent, StartServer_Update, UI_SPPostgameMenu_f, Prepname, UI_SPPostgameMenu_MenuDraw, UI_SPPostgameMenu_MenuDrawScoreLine, UI_SPLevelMenu, UI_SPLevelMenu_MenuDraw, UI_SPLevelMenu_SetMenuItems, UI_SPLevelMenu_SetMenuArena, UI_SPLevelMenu_SetBots, UI_SPArena_Start, ArenaServers_Insert, UI_RemoveBotsMenu_GetBots, UI_RemoveBotsMenu_SetBotNames, InGame_MenuInit, UI_GetCurrentGame, UI_CanShowTierVideo, UI_ShowTierVideo, UI_TierCompleted, UI_GetAwardLevel, UI_LogAwardData, UI_SetBestScore, UI_GetBestScore, UI_GetBotInfoByName, UI_GetSpecialArenaInfo, UI_GetArenaInfoByMap, UI_GetArenaInfoByNumber, UI_LoadArenas, UI_DrawConnectScreen, UI_AddBotsMenu_Init, UI_AddBotsMenu_SortCompare, UI_AddBotsMenu_SetBotNames
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
	if (arg_0 == local_2014) goto jmp_14f43;
	if (arg_1 != local_2014) goto jmp_14f47;
jmp_14f43:
	return 0x8933;
jmp_14f47:
	local_2018 = strlen(arg_0);
	if (local_2018 < 0x2000) goto jmp_14f59;
	Com_Error(0x1, 0x881c);
jmp_14f59:
	local_201c = 0x3284;
	*(int *)local_201c = (*(int *)local_201c ^ 0x1);
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_1500f;
	arg_0 = (arg_0 + 0x1);
	goto jmp_1500f;
jmp_14f72:
	local_10 = local_14;
	goto jmp_14fa0;
jmp_14f77:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_14f81;
	return 0x8933;
jmp_14f81:
	local_2020 = local_10;
	local_2028 = 0x1;
	local_10 = (local_2020 + local_2028);
	local_2024 = arg_0;
	arg_0 = (local_2024 + local_2028);
	*(char *)local_2020 = *(char *)local_2024;
jmp_14fa0:
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_14f77;
	*(char *)local_10 = 0x0;
	arg_0 = (arg_0 + 0x1);
	local_10 = ((global_3284 << 0xd) + 0x8fcbc);
	goto jmp_14fd9;
jmp_14fba:
	local_2020 = local_10;
	local_2028 = 0x1;
	local_10 = (local_2020 + local_2028);
	local_2024 = arg_0;
	arg_0 = (local_2024 + local_2028);
	*(char *)local_2020 = *(char *)local_2024;
jmp_14fd9:
	local_2020 = (char)*(char *)arg_0;
	if (local_2020 == 0x5c) goto jmp_14fe7;
	if (local_2020 != 0x0) goto jmp_14fba;
jmp_14fe7:
	*(char *)local_10 = 0x0;
	local_2024 = Q_stricmp(arg_1, local_14);
	if (local_2024 != 0x0) goto jmp_15001;
	return ((global_3284 << 0xd) + 0x8fcbc);
jmp_15001:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_15009;
	goto jmp_15011;
jmp_15009:
	arg_0 = (arg_0 + 0x1);
jmp_1500f:
	goto jmp_14f72;
jmp_15011:
	return 0x8933;
}

/*
=================
Info_NextPair

Address: 0x15015
Stack Size: 0x1c
Called by: UI_ServerInfoMenu, ServerInfo_MenuDraw
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
	if ((char)*(char *)local_8 != 0x5c) goto jmp_1502b;
	local_8 = (local_8 + 0x1);
jmp_1502b:
	*(char *)arg_1 = 0x0;
	*(char *)arg_2 = 0x0;
	local_c = arg_1;
	goto jmp_15069;
jmp_15039:
	if ((char)*(char *)local_8 != 0x0) goto jmp_1504a;
	*(char *)local_c = 0x0;
	*(int *)arg_0 = local_8;
	goto jmp_150b5;
jmp_1504a:
	local_10 = local_c;
	local_18 = 0x1;
	local_c = (local_10 + local_18);
	local_14 = local_8;
	local_8 = (local_14 + local_18);
	*(char *)local_10 = *(char *)local_14;
jmp_15069:
	if ((char)*(char *)local_8 != 0x5c) goto jmp_15039;
	*(char *)local_c = 0x0;
	local_8 = (local_8 + 0x1);
	local_c = arg_2;
	goto jmp_1509e;
jmp_1507f:
	local_10 = local_c;
	local_18 = 0x1;
	local_c = (local_10 + local_18);
	local_14 = local_8;
	local_8 = (local_14 + local_18);
	*(char *)local_10 = *(char *)local_14;
jmp_1509e:
	local_10 = (char)*(char *)local_8;
	if (local_10 == 0x5c) goto jmp_150ac;
	if (local_10 != 0x0) goto jmp_1507f;
jmp_150ac:
	*(char *)local_c = 0x0;
	*(int *)arg_0 = local_8;
jmp_150b5:
}

/*
=================
Info_RemoveKey

Address: 0x150b7
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
	if (local_81c < 0x400) goto jmp_150d2;
	Com_Error(0x1, 0x87f8);
jmp_150d2:
	*(int *)local_820 = strchr(arg_1, 0x5c);
	if (*(int *)local_820 == 0x0) goto jmp_15197;
	goto jmp_15199;
jmp_150e1:
	local_418 = arg_0;
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_150f1;
	arg_0 = (arg_0 + 0x1);
jmp_150f1:
	local_14 = local_18;
	goto jmp_1511d;
jmp_150f6:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_150fe;
	goto jmp_15199;
jmp_150fe:
	local_828 = local_14;
	local_830 = 0x1;
	local_14 = (local_828 + local_830);
	local_82c = arg_0;
	arg_0 = (local_82c + local_830);
	*(char *)local_828 = *(char *)local_82c;
jmp_1511d:
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_150f6;
	*(char *)local_14 = 0x0;
	arg_0 = (arg_0 + 0x1);
	local_14 = local_41c;
	goto jmp_15159;
jmp_15132:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_1513a;
	goto jmp_15199;
jmp_1513a:
	local_828 = local_14;
	local_830 = 0x1;
	local_14 = (local_828 + local_830);
	local_82c = arg_0;
	arg_0 = (local_82c + local_830);
	*(char *)local_828 = *(char *)local_82c;
jmp_15159:
	local_828 = (char)*(char *)arg_0;
	if (local_828 == 0x5c) goto jmp_15167;
	if (local_828 != 0x0) goto jmp_15132;
jmp_15167:
	*(char *)local_14 = 0x0;
	local_82c = strcmp(arg_1, local_18);
	if (local_82c != 0x0) goto jmp_1518f;
	local_830 = strlen(arg_0);
	memmove(local_418, arg_0, (local_830 + 0x1));
	goto jmp_15199;
jmp_1518f:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_15197;
	goto jmp_15199;
jmp_15197:
	goto jmp_150e1;
jmp_15199:
}

/*
=================
Info_RemoveKey_Big

Address: 0x1519b
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
	if (local_401c < 0x2000) goto jmp_151b6;
	Com_Error(0x1, 0x87d0);
jmp_151b6:
	*(int *)local_4020 = strchr(arg_1, 0x5c);
	if (*(int *)local_4020 == 0x0) goto jmp_1527b;
	goto jmp_1527d;
jmp_151c5:
	local_2018 = arg_0;
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_151d5;
	arg_0 = (arg_0 + 0x1);
jmp_151d5:
	local_14 = local_18;
	goto jmp_15201;
jmp_151da:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_151e2;
	goto jmp_1527d;
jmp_151e2:
	local_4028 = local_14;
	local_4030 = 0x1;
	local_14 = (local_4028 + local_4030);
	local_402c = arg_0;
	arg_0 = (local_402c + local_4030);
	*(char *)local_4028 = *(char *)local_402c;
jmp_15201:
	if ((char)*(char *)arg_0 != 0x5c) goto jmp_151da;
	*(char *)local_14 = 0x0;
	arg_0 = (arg_0 + 0x1);
	local_14 = local_201c;
	goto jmp_1523d;
jmp_15216:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_1521e;
	goto jmp_1527d;
jmp_1521e:
	local_4028 = local_14;
	local_4030 = 0x1;
	local_14 = (local_4028 + local_4030);
	local_402c = arg_0;
	arg_0 = (local_402c + local_4030);
	*(char *)local_4028 = *(char *)local_402c;
jmp_1523d:
	local_4028 = (char)*(char *)arg_0;
	if (local_4028 == 0x5c) goto jmp_1524b;
	if (local_4028 != 0x0) goto jmp_15216;
jmp_1524b:
	*(char *)local_14 = 0x0;
	local_402c = strcmp(arg_1, local_18);
	if (local_402c != 0x0) goto jmp_15273;
	local_4030 = strlen(arg_0);
	memmove(local_2018, arg_0, (local_4030 + 0x1));
	goto jmp_1527d;
jmp_15273:
	if ((char)*(char *)arg_0 != 0x0) goto jmp_1527b;
	goto jmp_1527d;
jmp_1527b:
	goto jmp_151c5;
jmp_1527d:
}

/*
=================
Info_Validate

Address: 0x1527f
Stack Size: 0x18
Calls: strchr
=================
*/
int Info_Validate(int arg_0) {
	int		local_10;
	int		local_14;

	local_10 = strchr(arg_0, 0x22);
	if (local_10 == 0x0) goto jmp_15291;
	return 0x0;
jmp_15291:
	local_14 = strchr(arg_0, 0x3b);
	if (local_14 == 0x0) goto jmp_152a2;
	return 0x0;
jmp_152a2:
	return 0x1;
}

/*
=================
Info_SetValueForKey

Address: 0x152a6
Stack Size: 0x434
Calls: strcpy, strcat, Com_sprintf, Info_RemoveKey, Com_Printf, strchr, Com_Error, strlen
Called by: ArenaServers_DoRefresh, UI_SPUnlockMedals_f, UI_SPUnlock_f, UI_ShowTierVideo, UI_LogAwardData, UI_SetBestScore, UI_LoadArenas, UI_ParseInfos
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
	local_1c = 0x87cc;
	local_420 = strlen(arg_0);
	if (local_420 < 0x400) goto jmp_15302;
	Com_Error(0x1, 0x87a3);
	goto jmp_15302;
jmp_152ca:
	local_424 = strchr(arg_1, (char)*(char *)local_1c);
	if (local_424 != 0x0) goto jmp_152ea;
	local_428 = strchr(arg_2, (char)*(char *)local_1c);
	if (local_428 == 0x0) goto jmp_152fc;
jmp_152ea:
	Com_Printf(0x8772, (char)*(char *)local_1c, arg_1, arg_2);
	goto jmp_1535c;
jmp_152fc:
	local_1c = (local_1c + 0x1);
jmp_15302:
	if ((char)*(char *)local_1c != 0x0) goto jmp_152ca;
	Info_RemoveKey(arg_0, arg_1);
	if (arg_2 == 0x0) goto jmp_15320;
	local_428 = strlen(arg_2);
	if (local_428 != 0x0) goto jmp_15322;
jmp_15320:
	goto jmp_1535c;
jmp_15322:
	Com_sprintf(local_20, 0x400, 0x876b, arg_1, arg_2);
	local_42c = strlen(local_20);
	local_430 = strlen(arg_0);
	if ((local_42c + local_430) < 0x400) goto jmp_1534c;
	Com_Printf(0x874e);
	goto jmp_1535c;
jmp_1534c:
	strcat(local_20, arg_0);
	strcpy(arg_0, local_20);
jmp_1535c:
}

/*
=================
Info_SetValueForKey_Big

Address: 0x1535e
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
	local_1c = 0x87cc;
	local_2020 = strlen(arg_0);
	if (local_2020 < 0x2000) goto jmp_153ba;
	Com_Error(0x1, 0x87a3);
	goto jmp_153ba;
jmp_15382:
	local_2024 = strchr(arg_1, (char)*(char *)local_1c);
	if (local_2024 != 0x0) goto jmp_153a2;
	local_2028 = strchr(arg_2, (char)*(char *)local_1c);
	if (local_2028 == 0x0) goto jmp_153b4;
jmp_153a2:
	Com_Printf(0x8772, (char)*(char *)local_1c, arg_1, arg_2);
	goto jmp_15401;
jmp_153b4:
	local_1c = (local_1c + 0x1);
jmp_153ba:
	if ((char)*(char *)local_1c != 0x0) goto jmp_15382;
	Info_RemoveKey_Big(arg_0, arg_1);
	if (arg_2 != 0x0) goto jmp_153cf;
	goto jmp_15401;
jmp_153cf:
	Com_sprintf(local_20, 0x2000, 0x876b, arg_1, arg_2);
	local_2024 = strlen(local_20);
	local_2028 = strlen(arg_0);
	if ((local_2024 + local_2028) < 0x2000) goto jmp_153f9;
	Com_Printf(0x872d);
	goto jmp_15401;
jmp_153f9:
	strcat(arg_0, local_20);
jmp_15401:
}

/*
=================
Com_CharIsOneOfCharset

Address: 0x15403
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
	goto jmp_15426;
jmp_15411:
	if ((char)*(char *)(local_c + arg_1) != (char)*(char *)&arg_0) goto jmp_15420;
	return 0x1;
jmp_15420:
	local_c = (local_c + 0x1);
jmp_15426:
	local_10 = strlen(arg_1);
	if (local_c < local_10) goto jmp_15411;
	return 0x0;
}

/*
=================
Com_SkipCharset

Address: 0x15436
Stack Size: 0x18
Calls: Com_CharIsOneOfCharset
=================
*/
int Com_SkipCharset(int arg_0, int arg_1) {
	int		local_10;
	int		local_14;

	arg_1 = arg_1;
	local_10 = arg_0;
	goto jmp_15457;
jmp_15441:
	local_14 = Com_CharIsOneOfCharset((char)*(char *)local_10, arg_1);
	if (local_14 == 0x0) goto jmp_1545b;
	local_10 = (local_10 + 0x1);
jmp_15457:
	if (local_10 != 0x0) goto jmp_15441;
jmp_1545b:
	return local_10;
}

/*
=================
Com_SkipTokens

Address: 0x15460
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
	goto jmp_154b4;
jmp_15472:
	local_18 = local_10;
	local_10 = (local_18 + 0x1);
	local_1c = Com_CharIsOneOfCharset((char)*(char *)local_18, arg_2);
	if (local_1c == 0x0) goto jmp_154ac;
	local_14 = (local_14 + 0x1);
	goto jmp_1549a;
jmp_15494:
	local_10 = (local_10 + 0x1);
jmp_1549a:
	local_20 = Com_CharIsOneOfCharset((char)*(char *)local_10, arg_2);
	if (local_20 != 0x0) goto jmp_15494;
	goto jmp_154b4;
jmp_154ac:
	if ((char)*(char *)local_10 != 0x0) goto jmp_154b4;
	goto jmp_154b9;
jmp_154b4:
	if (local_14 < arg_1) goto jmp_15472;
jmp_154b9:
	if (local_14 != arg_1) goto jmp_154c3;
	return local_10;
	goto jmp_154c6;
jmp_154c3:
	return arg_0;
jmp_154c6:
}

