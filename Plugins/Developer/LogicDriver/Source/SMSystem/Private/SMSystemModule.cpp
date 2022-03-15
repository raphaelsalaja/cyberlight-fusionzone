// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "ISMSystemModule.h"
#include "SMLogging.h"

DEFINE_LOG_CATEGORY(LogLogicDriver);

class FSMSystemModule : public ISMSystemModule
{
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FSMSystemModule, SMSystem)


void FSMSystemModule::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}


void FSMSystemModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}
