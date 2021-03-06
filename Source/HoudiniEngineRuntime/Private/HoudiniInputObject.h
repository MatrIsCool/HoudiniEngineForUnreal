/*
* PROPRIETARY INFORMATION.  This software is proprietary to
* Side Effects Software Inc., and is not to be reproduced,
* transmitted, or disclosed in any way without written permission.
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


struct HOUDINIENGINERUNTIME_API FHoudiniInputObject
{
public:

    FHoudiniInputObject(int32 InInputIndex);
    FHoudiniInputObject(const FHoudiniInputObject& HoudiniInputObject);

protected:

    /** Index of this input. **/
    int32 InputIndex;

protected:

    /** Flags used by input object. **/
    uint32 HoudiniInputObjectFlagsPacked;

    /** Temporary variable holding serialization version. **/
    uint32 HoudiniInputObjectVersion;
};
