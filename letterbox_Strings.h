#pragma once

typedef enum {
	StrID_NONE, 
	StrID_Name,
	StrID_Description,

	StrID_ModeName,
	StrID_ModeChoices, 

	StrID_PresetName,
	StrID_PresetChoices,
	StrID_PresetChoicesChanged,


	StrID_SliderName,  
    StrID_TrspName,
    StrID_TrspDescription,
    
    StrID_ColorName,
    
   
    StrID_sample_Param_Name,
    StrID_PointName,
    StrID_SliderResizeName,
    
    StrID_detect_Param_Name,
    StrID_Layer_detectName,
    StrID_Layer_timeAnalysName,
    StrID_Time_ModeChoices,	
    StrID_Layer_colorAnalysName,
    StrID_CheckboxName,
    StrID_CheckboxCaption,
    
    StrID_settings_Param_Name,
    StrID_SizeSourceName,
    StrID_SizeSourceChoices,
    StrID_ForceSName,            
    StrID_ForceSDescription,
    
     StrID_AEGP_GET_POSITION,
     StrID_AEGP_GET_ANCHORPOINT,
     StrID_AEGP_GET_SCALE,
    
     StrID_AEGP_GET_COMP_PIX_RATIO,
     StrID_AEGP_GETCOMP_SIZE,

	StrID_Err_LoadSuite,
	StrID_Err_FreeSuite,
    
    

	StrID_TopicName,
	StrID_TopicNameDisabled, 
	StrID_PresetNameDisabled,

	StrID_GeneralError,
	
	StrID_NUMTYPES
} StrIDType;

#ifdef __cplusplus
extern "C" {
#endif
char	*GetStringPtr(int strNum);
#ifdef __cplusplus
}
#endif