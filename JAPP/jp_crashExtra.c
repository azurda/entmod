#include "qcommon/q_shared.h"
#ifdef _CGAME
#include "cg_local.h"
#endif

// cgame helper

#if ARCH_WIDTH == 64 || defined(MACOS_X) || defined(QARCH_ARM)

// wat do?

#else

#ifdef _CGAME
Q_EXPORT void QDECL CrashReport( int fileHandle ) {
	//	char text[] = "Test from cgame\n";
	//	trap->FS_Write( text, strlen( text ), fileHandle );
}

#endif

#endif //ARCH_WIDTH == 32
