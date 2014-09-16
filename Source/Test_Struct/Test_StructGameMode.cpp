

#include "Test_Struct.h"
#include "Test_StructGameMode.h"
#include "Test_StructPlayerController.h"

ATest_StructGameMode::ATest_StructGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	PlayerControllerClass = ATest_StructPlayerController::StaticClass();
}


