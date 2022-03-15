// Copyright Recursoft LLC 2019-2021. All Rights Reserved.

#include "ISMStateMachineInterface.h"

#define LOCTEXT_NAMESPACE "ISMStateMachineInstance"

USMInstanceInterface::USMInstanceInterface(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UObject* ISMInstanceInterface::GetContext() const
{
	return nullptr;
}

USMStateMachineInterface::USMStateMachineInterface(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void ISMStateMachineInterface::Initialize(UObject* Context)
{
}

void ISMStateMachineInterface::Start()
{
}

void ISMStateMachineInterface::Update(float DeltaSeconds)
{
}

void ISMStateMachineInterface::Stop()
{
}

void ISMStateMachineInterface::Restart()
{
}

void ISMStateMachineInterface::Shutdown()
{
}

USMStateMachineNetworkedInterface::USMStateMachineNetworkedInterface(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void ISMStateMachineNetworkedInterface::ProcessTransaction(const TArray<FSMNetworkedTransaction>& Transactions)
{
}

bool ISMStateMachineNetworkedInterface::ShouldReplicateStates() const
{
	return false;
}

bool ISMStateMachineNetworkedInterface::CanExecuteTransitionEnteredLogic() const
{
	return false;
}

bool ISMStateMachineNetworkedInterface::IsConfiguredForNetworking() const
{
	return false;
}

bool ISMStateMachineNetworkedInterface::HasAuthority() const
{
	return false;
}

bool ISMStateMachineNetworkedInterface::IsSimulatedProxy() const
{
	return false;
}

#undef LOCTEXT_NAMESPACE
