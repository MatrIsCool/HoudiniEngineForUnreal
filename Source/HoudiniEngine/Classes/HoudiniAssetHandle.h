/*
 * PROPRIETARY INFORMATION.  This software is proprietary to
 * Side Effects Software Inc., and is not to be reproduced,
 * transmitted, or disclosed in any way without written permission.
 *
 * Brokers define connection between assets (for example in content
 * browser) and actors.
 *
 * Produced by:
 *      Mykola Konyk
 *      Side Effects Software Inc
 *      123 Front Street West, Suite 1401
 *      Toronto, Ontario
 *      Canada   M5J 2M2
 *      416-504-9876
 *
 */

#pragma once
#include "HoudiniAssetHandle.generated.h"


UCLASS()
class HOUDINIENGINE_API UHoudiniAssetHandle : public UHoudiniAssetParameter
{
	GENERATED_UCLASS_BODY()

public:

	/** Destructor. **/
	virtual ~UHoudiniAssetHandle();

public:

	/** Create intance of this class. **/
	//static UHoudiniAssetHandle* Create(UHoudiniAssetComponent* InHoudiniAssetComponent);

public:

	/** Create this parameter from HAPI information - this implementation does nothing as this is not a true parameter. **/
	//virtual bool CreateParameter(UHoudiniAssetComponent* InHoudiniAssetComponent, 
	//	UHoudiniAssetParameter* InParentParameter, HAPI_NodeId InNodeId, const HAPI_ParmInfo& ParmInfo);

	/** Create widget for this parameter and add it to a given category. **/
	//virtual void CreateWidget(IDetailCategoryBuilder& DetailCategoryBuilder);

	/** Upload parameter value to HAPI. **/
	//virtual bool UploadParameterValue();

	/** Notifaction from a child parameter about its change. **/
	//virtual void NotifyChildParameterChanged(UHoudiniAssetParameter* HoudiniAssetParameter);

/** UObject methods. **/
public:

	//virtual void BeginDestroy();
	//virtual void Serialize(FArchive& Ar) override;
	//virtual void PostLoad() override;
	//static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);

public:

	/** Called by attached spline component whenever its state changes. **/
	//void OnInputCurveChanged();

protected:

	/** Clear input curve parameters. **/
	//void ClearInputCurveParameters();

	/** Create necessary resources for this input. **/
	//void CreateWidgetResources();

	/** Serialize input curve related parameters. **/
	//void SerializeInputCurveParameters(FArchive& Ar);

protected:

	
};