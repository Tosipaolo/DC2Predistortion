#include "DC2_predistortion_capi_host.h"
static DC2_predistortion_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        DC2_predistortion_host_InitializeDataMapInfo(&(root), "DC2_predistortion");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction() {return(getRootMappingInfo());}
