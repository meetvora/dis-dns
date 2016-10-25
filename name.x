struct name{
	char content[64];
};

program MARKSPROG {
version MARKSVERS {
int NAMEPROC(name ) = 1;
} = 1;	
version L1N1VERS{
	int L1N1PROC(name) =1;
} = 2;
version L1N2VERS{
	int L1N2PROC(name) = 1;
} = 3;
version L2N1VERS{
	int L2N1PROC(name) = 1;
} = 4;
version L2N2VERS{
	int L2N2PROC(name) = 1;
} = 5;
version L2N3VERS{
	int L2N3PROC(name) = 1;
} = 6;
version L2N4VERS{
	int L2N4PROC(name) = 1;
} = 7;
} = 0x3012225;