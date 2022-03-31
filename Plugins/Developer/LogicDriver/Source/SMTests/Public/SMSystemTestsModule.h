// Copyright Recursoft LLC 2019-2022. All Rights Reserved.

#pragma once

#include "Modules/ModuleInterface.h"

class FSMSystemTestsModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

};

/**
 * There were supposed to be NetCode Unit tests based on https://answers.unrealengine.com/questions/235325/clientserver-automation.html
 * but it was problematic getting the server to stay up. (Attempted on 4.19)
 * These test are currently implemented in Blueprints in the example project. Ideally it would be nice to have
 * them here.
 *
 *
 *  To run netcode tests easily, add "-run=NetcodeUnitTest.UnitTestCommandlet -unittest=NetworkedStateMachines"
 *  to DebugGameEditor project properties arguments and run from Visual studio.
 *
 */