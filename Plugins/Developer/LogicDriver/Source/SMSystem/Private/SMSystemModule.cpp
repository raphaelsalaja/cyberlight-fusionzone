// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#include "ISMSystemModule.h"
#include "SMLogging.h"

DEFINE_LOG_CATEGORY(LogLogicDriver);

#define LOCTEXT_NAMESPACE "SMSystemModule"

class FSMSystemModule : public ISMSystemModule
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FSMSystemModule, SMSystem)


void FSMSystemModule::StartupModule()
{
}

void FSMSystemModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
