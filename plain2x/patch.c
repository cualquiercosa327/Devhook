#include <pspkernel.h>
#include <pspdebug.h>
#include <stdio.h>
#include "patch.h"

/*****************************************************************************
 �p�b�`��̃L���b�V���N���A
*****************************************************************************/
void cache_clear(void)
{
	sceKernelDcacheWBinvAll();
	sceKernelIcacheClearAll();
}


