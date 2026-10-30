#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};

struct Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195;
struct Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629;
struct TypeConverter_2_t092CBFB8B2C91DDB61909080B4E1A2C19896B01F;
struct TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9  : public RuntimeObject
{
};
struct TypeHelpers_tF2D4804F9906DD09986DC5852EE53402EA9B3FA3  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_pinvoke
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426_marshaled_com
{
	Dictionary_2_tD77528C78AECDC8F6DF50F36B79092A52A270629* ___m_Converters;
	Dictionary_2_t7E2B528AFC59C90DE8916832B84A9936D8967195* ___m_LazyConverters;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF 
{
	int32_t ___m_Kind;
	String_t* ___m_Name;
	int32_t ___m_Index;
	RuntimeObject* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke
{
	int32_t ___m_Kind;
	char* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com
{
	int32_t ___m_Kind;
	Il2CppChar* ___m_Name;
	int32_t ___m_Index;
	Il2CppIUnknown* ___m_Key;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct TypeConverter_2_t092CBFB8B2C91DDB61909080B4E1A2C19896B01F  : public MulticastDelegate_t
{
};
struct TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF ___m_Part3;
	PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com
{
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part0;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part1;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part2;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com ___m_Part3;
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com* ___m_AdditionalParts;
	int32_t ___U3CLengthU3Ek__BackingField;
};
struct TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E  : public RuntimeObject
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	Type_t* ___U3CresolvedTypeU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
	Type_t* ___m_LastType;
	int32_t ___m_PathIndex;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields
{
	ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426 ___s_GlobalConverters;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter_2_Invoke_m22213A88AF14CB4CFBD0CCA1547E1476B01580F9_fshared (TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845* __this, Il2CppFullySharedGenericAny* ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_fshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertNullable_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3959031A1EAAC71266F10C78EF750D75D865E2C4_fshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertEnum_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAC87EA481D46BD0A2678FF3C3565960666D0E00_fshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBA69D37B4DED14E1204D55EB28F6BA7FA787ADBA_fshared (Il2CppFullySharedGenericAny ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* __this, Type_t* ___0_source, Type_t* ___1_destination, Delegate_t** ___2_converter, const RuntimeMethod* method) ;
inline void TypeConverter_2_Invoke_m22213A88AF14CB4CFBD0CCA1547E1476B01580F9 (TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845* __this, Il2CppFullySharedGenericAny* ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TypeConverter_2_Invoke_m22213A88AF14CB4CFBD0CCA1547E1476B01580F9_fshared)((TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*)__this, ___0_value, il2cppRetVal, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_fshared_inline)(___0_from, method);
}
inline bool PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C_fshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertNullable_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3959031A1EAAC71266F10C78EF750D75D865E2C4 (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TypeConversion_TryConvertNullable_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3959031A1EAAC71266F10C78EF750D75D865E2C4_fshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertEnum_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAC87EA481D46BD0A2678FF3C3565960666D0E00 (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TypeConversion_TryConvertEnum_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAC87EA481D46BD0A2678FF3C3565960666D0E00_fshared)(___0_source, ___1_destination, method);
}
inline bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBA69D37B4DED14E1204D55EB28F6BA7FA787ADBA (Il2CppFullySharedGenericAny ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TypeConversion_TryConvertToUnityEngineObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBA69D37B4DED14E1204D55EB28F6BA7FA787ADBA_fshared)(___0_source, ___1_destination, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___0_enumType, String_t* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936 (Type_t* ___0_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05 (Type_t* ___0_enumType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* TypeConverter_2_Invoke_m2EEAFFD266A61798005565D6566ED1DC9934DE64 (TypeConverter_2_t092CBFB8B2C91DDB61909080B4E1A2C19896B01F* __this, Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method)
{
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* il2cppRetVal;
	((  void (*) (TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TypeConverter_2_Invoke_m22213A88AF14CB4CFBD0CCA1547E1476B01580F9_fshared)((TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*)__this, ___0_value, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvert_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mC18DF87EC56E149F05CE5A957357981A256F363B_fshared (ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* ___0_registry, Il2CppFullySharedGenericAny* ___1_source, Il2CppFullySharedGenericAny* ___2_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	void* L_60 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	const Il2CppFullySharedGenericAny L_34 = L_26;
	const Il2CppFullySharedGenericAny L_37 = L_26;
	const Il2CppFullySharedGenericAny L_50 = L_26;
	const Il2CppFullySharedGenericAny L_55 = L_26;
	const Il2CppFullySharedGenericAny L_57 = L_26;
	const Il2CppFullySharedGenericAny L_70 = L_26;
	const Il2CppFullySharedGenericAny L_74 = L_26;
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	const Il2CppFullySharedGenericAny L_35 = L_28;
	const Il2CppFullySharedGenericAny L_58 = L_28;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
	const Il2CppFullySharedGenericAny L_15 = L_10;
	const Il2CppFullySharedGenericAny L_39 = L_10;
	const Il2CppFullySharedGenericAny L_51 = L_10;
	const Il2CppFullySharedGenericAny L_65 = L_10;
	const Il2CppFullySharedGenericAny L_71 = L_10;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
	Delegate_t* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
	memset(V_1, 0, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
	TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845* V_2 = NULL;
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	memset(V_3, 0, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	Il2CppFullySharedGenericAny* G_B23_0 = NULL;
	Il2CppFullySharedGenericAny* G_B23_1 = NULL;
	Il2CppFullySharedGenericAny* G_B21_0 = NULL;
	Il2CppFullySharedGenericAny* G_B21_1 = NULL;
	Il2CppFullySharedGenericAny G_B22_0 = alloca(SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	memset(G_B22_0, 0, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
	Il2CppFullySharedGenericAny* G_B22_1 = NULL;
	String_t* G_B24_0 = NULL;
	Il2CppFullySharedGenericAny* G_B24_1 = NULL;
	{
		ConversionRegistry_tBB92E13DAE967B31A341845C05EC88A2603E6426* L_0 = ___0_registry;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD(L_0, L_2, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		Delegate_t* L_6 = V_0;
		V_2 = ((TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845*)Castclass((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 4)));
		Il2CppFullySharedGenericAny* L_7 = ___2_destination;
		TypeConverter_2_tA6276E0BDB8DB9E3B10AF0C31301ACC071589845* L_8 = V_2;
		Il2CppFullySharedGenericAny* L_9 = ___1_source;
		TypeConverter_2_Invoke_m22213A88AF14CB4CFBD0CCA1547E1476B01580F9(L_8, L_9, (Il2CppFullySharedGenericAny*)L_10, NULL);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_7, L_10, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_7, (void*)L_10);
		return (bool)1;
	}

IL_0034:
	{
		bool L_11 = (il2cpp_rgctx_data(method->rgctx_data, 3)) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_11)
		{
			goto IL_0062;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_12 = ___2_destination;
		Il2CppFullySharedGenericAny* L_13 = ___1_source;
		Il2CppFullySharedGenericAny* L_14;
		L_14 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_inline(L_13, NULL);
		il2cpp_codegen_memcpy(L_15, L_14, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_12, L_15, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_12, (void*)L_15);
		return (bool)1;
	}

IL_0062:
	{
		Il2CppFullySharedGenericAny* L_16 = ___1_source;
		Il2CppFullySharedGenericAny* L_17 = ___2_destination;
		bool L_18;
		L_18 = PrimitivesConverters_TryConvertPrimitiveOrString_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAB1C0FA38D627EE2BBBA73E2152077F2231E1A9C(L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 7));
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		return (bool)1;
	}

IL_006d:
	{
		Il2CppFullySharedGenericAny* L_19 = ___1_source;
		Il2CppFullySharedGenericAny* L_20 = ___2_destination;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_21;
		L_21 = TypeConversion_TryConvertNullable_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3959031A1EAAC71266F10C78EF750D75D865E2C4(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 8));
		if (!L_21)
		{
			goto IL_0078;
		}
	}
	{
		return (bool)1;
	}

IL_0078:
	{
		Il2CppFullySharedGenericAny* L_22 = ___1_source;
		Il2CppFullySharedGenericAny* L_23 = ___2_destination;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_24;
		L_24 = TypeConversion_TryConvertEnum_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAC87EA481D46BD0A2678FF3C3565960666D0E00(L_22, L_23, il2cpp_rgctx_method(method->rgctx_data, 9));
		if (!L_24)
		{
			goto IL_0083;
		}
	}
	{
		return (bool)1;
	}

IL_0083:
	{
		Il2CppFullySharedGenericAny* L_25 = ___1_source;
		il2cpp_codegen_memcpy(L_26, L_25, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		Il2CppFullySharedGenericAny* L_27 = ___2_destination;
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_29;
		L_29 = TypeConversion_TryConvertToUnityEngineObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBA69D37B4DED14E1204D55EB28F6BA7FA787ADBA((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_28, L_26, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A): *(void**)L_26), L_27, il2cpp_rgctx_method(method->rgctx_data, 10));
		if (!L_29)
		{
			goto IL_0093;
		}
	}
	{
		return (bool)1;
	}

IL_0093:
	{
		bool L_30 = il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_30)
		{
			goto IL_00be;
		}
	}
	{
		bool L_31 = il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3));
		if (!L_31)
		{
			goto IL_00be;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_32 = ___2_destination;
		il2cpp_codegen_initobj(L_32, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		return (bool)0;
	}

IL_00be:
	{
		Il2CppFullySharedGenericAny* L_33 = ___1_source;
		il2cpp_codegen_memcpy(L_34, L_33, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_memcpy(V_3, L_34, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_memcpy(L_35, V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		bool L_36 = il2cpp_codegen_isinst_runtime_check(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_data(method->rgctx_data, 3), L_35);
		if (!L_36)
		{
			goto IL_00ec;
		}
	}
	{
		il2cpp_codegen_memcpy(L_37, V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		RuntimeObject* L_38 = il2cpp_codegen_isinst_runtime(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_data(method->rgctx_data, 3), L_37);;
		void* L_40 = UnBox_Any(L_38, il2cpp_rgctx_data(method->rgctx_data, 3), L_39);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_40)), SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppFullySharedGenericAny* L_41 = ___2_destination;
		il2cpp_codegen_memcpy(L_42, V_1, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_41, L_42, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_41, (void*)L_42);
		return (bool)1;
	}

IL_00ec:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_44, L_46);
		if (!L_47)
		{
			goto IL_011f;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_48 = ___2_destination;
		Il2CppFullySharedGenericAny* L_49 = ___1_source;
		il2cpp_codegen_memcpy(L_50, L_49, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_box_unbox(L_50, L_51, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB, il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_data(method->rgctx_data, 3));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_48, L_51, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_48, (void*)L_51);
		return (bool)1;
	}

IL_011f:
	{
		bool L_52 = (String_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 3));
		if (!L_52)
		{
			goto IL_0177;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_53 = ___2_destination;
		Il2CppFullySharedGenericAny* L_54 = ___1_source;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_memcpy(L_55, V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		bool L_56 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_55);
		if (L_56)
		{
			G_B23_0 = ((Il2CppFullySharedGenericAny*)L_54);
			G_B23_1 = ((Il2CppFullySharedGenericAny*)L_53);
			goto IL_0160;
		}
		G_B21_0 = ((Il2CppFullySharedGenericAny*)L_54);
		G_B21_1 = ((Il2CppFullySharedGenericAny*)L_53);
	}
	{
		il2cpp_codegen_memcpy(L_57, G_B21_0, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_memcpy(V_3, L_57, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_memcpy(L_58, V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		bool L_59 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_58);
		if (L_59)
		{
			G_B23_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B23_1 = ((Il2CppFullySharedGenericAny*)G_B21_1);
			goto IL_0160;
		}
		il2cpp_codegen_memcpy(G_B22_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		G_B22_1 = ((Il2CppFullySharedGenericAny*)G_B21_1);
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = ((Il2CppFullySharedGenericAny*)G_B22_1);
		goto IL_016b;
	}

IL_0160:
	{
		Il2CppConstrainedCallData L_61;
		Il2CppMethodPointer L_62 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 11), (void*)G_B23_0, &L_61, L_60);
		typedef String_t* ( *func_L_63)(void*,const RuntimeMethod*);
		String_t* L_64 = ((func_L_63)L_62)(L_61.thisPtr,L_61.method);
		G_B24_0 = L_64;
		G_B24_1 = ((Il2CppFullySharedGenericAny*)G_B23_1);
	}

IL_016b:
	{
		void* L_66 = UnBox_Any(G_B24_0, il2cpp_rgctx_data(method->rgctx_data, 3), L_65);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)G_B24_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_66)), SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)G_B24_1, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_66)));
		return (bool)1;
	}

IL_0177:
	{
		bool L_67 = (RuntimeObject_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 3));
		if (!L_67)
		{
			goto IL_01aa;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_68 = ___2_destination;
		Il2CppFullySharedGenericAny* L_69 = ___1_source;
		il2cpp_codegen_memcpy(L_70, L_69, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		il2cpp_codegen_box_unbox(L_70, L_71, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB, il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_data(method->rgctx_data, 3));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_68, L_71, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_68, (void*)L_71);
		return (bool)1;
	}

IL_01aa:
	{
		bool L_72 = (RuntimeObject_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_72)
		{
			goto IL_01db;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_73 = ___1_source;
		il2cpp_codegen_memcpy(L_74, L_73, SizeOf_TSource_t34488007A4E6B11D4ECC189FFD259B6F93CB916A);
		bool L_75 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 1), L_74);
		if (L_75)
		{
			goto IL_01db;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_76 = ___2_destination;
		il2cpp_codegen_initobj(L_76, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		return (bool)1;
	}

IL_01db:
	{
		Il2CppFullySharedGenericAny* L_77 = ___2_destination;
		il2cpp_codegen_initobj(L_77, SizeOf_TDestination_t3724BA210FF8343181B34EA785BF292C5A551EDB);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertEnum_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mFAC87EA481D46BD0A2678FF3C3565960666D0E00_fshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_TSource_t27EFB7DA2797243A2139A72CF6726931E51738C9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	CHECKED_LOCAL(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticInit);
	const uint32_t SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t27EFB7DA2797243A2139A72CF6726931E51738C9);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
	const Il2CppFullySharedGenericAny L_19 = L_9;
	bool V_0 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		bool L_0 = il2cpp_codegen_class_is_enum(il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_0)
		{
			goto IL_008a;
		}
	}
	{
		bool L_1 = (String_t_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 3));
		if (!L_1)
		{
			goto IL_0066;
		}
	}
	try
	{
		Il2CppFullySharedGenericAny* L_2 = ___1_destination;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		Il2CppFullySharedGenericAny* L_5 = ___0_source;
		il2cpp_codegen_memcpy(L_6, L_5, SizeOf_TSource_t27EFB7DA2797243A2139A72CF6726931E51738C9);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), L_6);
		CHECKED_LOCAL_INIT(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticInit,(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_8;
		L_8 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_4, ((String_t*)CastclassSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var)), NULL);
		void* L_10 = UnBox_Any(L_8, il2cpp_rgctx_data(method->rgctx_data, 1), L_9);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_2, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10)), SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_2, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10)));
		goto IL_0064;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0058;
		}
		throw e;
	}

CATCH_0058:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = ((ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)IL2CPP_GET_ACTIVE_EXCEPTION(ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*));;
		Il2CppFullySharedGenericAny* L_12 = ___1_destination;
		il2cpp_codegen_initobj(L_12, SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
		V_0 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0093;
	}

IL_0064:
	{
		return (bool)1;
	}

IL_0066:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_15;
		L_15 = TypeConversion_IsNumericType_m4ED38C1CEAEA27E582D274BA41FCEAA52D779936(L_14, NULL);
		if (!L_15)
		{
			goto IL_008a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_16 = ___1_destination;
		Il2CppFullySharedGenericAny* L_17 = ___0_source;
		Il2CppFullySharedGenericAny* L_18;
		L_18 = UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_inline(L_17, NULL);
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_16, L_19, SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_16, (void*)L_19);
		return (bool)1;
	}

IL_008a:
	{
		Il2CppFullySharedGenericAny* L_20 = ___1_destination;
		il2cpp_codegen_initobj(L_20, SizeOf_TDestination_t61AEFD2917D4C21FD8F6C382C42E0814507DC4C2);
		return (bool)0;
	}

IL_0093:
	{
		bool L_21 = V_0;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertNullable_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m3959031A1EAAC71266F10C78EF750D75D865E2C4_fshared (Il2CppFullySharedGenericAny* ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_TDestination_tC515E7BF0550C131634C2ABCC89BCAC5EFAD65D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_TSource_tA03B68B42D5DF58840C35A759D46194F8F579E36 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	CHECKED_LOCAL(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticInit);
	CHECKED_LOCAL(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TSource_tA03B68B42D5DF58840C35A759D46194F8F579E36);
	const Il2CppFullySharedGenericAny L_23 = L_15;
	const Il2CppFullySharedGenericAny L_35 = L_15;
	const Il2CppFullySharedGenericAny L_50 = L_15;
	const Il2CppFullySharedGenericAny L_54 = L_15;
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TDestination_tC515E7BF0550C131634C2ABCC89BCAC5EFAD65D4);
	const Il2CppFullySharedGenericAny L_39 = L_31;
	const Il2CppFullySharedGenericAny L_55 = L_31;
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2;
		L_2 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_1, NULL);
		V_0 = L_2;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		Type_t* L_5;
		L_5 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_4, NULL);
		V_1 = L_5;
		Type_t* L_6 = V_0;
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, (Type_t*)NULL, NULL);
		if (!L_7)
		{
			goto IL_00c4;
		}
	}
	{
		Type_t* L_8 = V_1;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_8, (Type_t*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		Type_t* L_10 = V_0;
		Type_t* L_11 = V_1;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0047;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_13 = ___1_destination;
		il2cpp_codegen_initobj(L_13, SizeOf_TDestination_tC515E7BF0550C131634C2ABCC89BCAC5EFAD65D4);
		return (bool)0;
	}

IL_0047:
	{
		Il2CppFullySharedGenericAny* L_14 = ___0_source;
		il2cpp_codegen_memcpy(L_15, L_14, SizeOf_TSource_tA03B68B42D5DF58840C35A759D46194F8F579E36);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_15);
		if (L_16)
		{
			goto IL_005d;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_17 = ___1_destination;
		il2cpp_codegen_initobj(L_17, SizeOf_TDestination_tC515E7BF0550C131634C2ABCC89BCAC5EFAD65D4);
		return (bool)1;
	}

IL_005d:
	{
	}
	try
	{
		{
			Type_t* L_18 = V_0;
			bool L_19;
			L_19 = VirtualFuncInvoker0< bool >::Invoke(69, L_18);
			if (!L_19)
			{
				goto IL_0096_1;
			}
		}
		{
			Type_t* L_20 = V_0;
			CHECKED_LOCAL_INIT(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticInit,(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			Type_t* L_21;
			L_21 = Enum_GetUnderlyingType_mEDDDC2C9F74ECC841E65E401C3703D59C37CBB05(L_20, NULL);
			V_2 = L_21;
			Il2CppFullySharedGenericAny* L_22 = ___0_source;
			il2cpp_codegen_memcpy(L_23, L_22, SizeOf_TSource_tA03B68B42D5DF58840C35A759D46194F8F579E36);
			RuntimeObject* L_24 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), L_23);
			Type_t* L_25 = V_2;
			CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			RuntimeObject* L_26;
			L_26 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_24, L_25, NULL);
			V_3 = L_26;
			Il2CppFullySharedGenericAny* L_27 = ___1_destination;
			Type_t* L_28 = V_0;
			RuntimeObject* L_29 = V_3;
			RuntimeObject* L_30;
			L_30 = Enum_ToObject_mD898E0819FA640BC4E98924613B5DBD41146D1FF(L_28, L_29, NULL);
			void* L_32 = UnBox_Any(L_30, il2cpp_rgctx_data(method->rgctx_data, 1), L_31);
			il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_27, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_32)), SizeOf_TDestination_tC515E7BF0550C131634C2ABCC89BCAC5EFAD65D4);
			Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_27, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_32)));
			V_4 = (bool)1;
			goto IL_010d;
		}

IL_0096_1:
		{
			Il2CppFullySharedGenericAny* L_33 = ___1_destination;
			Il2CppFullySharedGenericAny* L_34 = ___0_source;
			il2cpp_codegen_memcpy(L_35, L_34, SizeOf_TSource_tA03B68B42D5DF58840C35A759D46194F8F579E36);
			RuntimeObject* L_36 = Box(il2cpp_rgctx_data(method->rgctx_data, 3), L_35);
			Type_t* L_37 = V_0;
			CHECKED_LOCAL_INIT(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_StaticInit,(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
			RuntimeObject* L_38;
			L_38 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A(L_36, L_37, NULL);
			void* L_40 = UnBox_Any(L_38, il2cpp_rgctx_data(method->rgctx_data, 1), L_39);
			il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_33, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_40)), SizeOf_TDestination_tC515E7BF0550C131634C2ABCC89BCAC5EFAD65D4);
			Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_33, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_40)));
			V_4 = (bool)1;
			goto IL_010d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00b7;
		}
		throw e;
	}

CATCH_00b7:
	{
		Exception_t* L_41 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		Il2CppFullySharedGenericAny* L_42 = ___1_destination;
		il2cpp_codegen_initobj(L_42, SizeOf_TDestination_tC515E7BF0550C131634C2ABCC89BCAC5EFAD65D4);
		V_4 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_010d;
	}

IL_00c4:
	{
		Type_t* L_43 = V_1;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_44;
		L_44 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_43, (Type_t*)NULL, NULL);
		if (!L_44)
		{
			goto IL_0104;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		Type_t* L_47 = V_1;
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_49 = ___0_source;
		il2cpp_codegen_memcpy(L_50, L_49, SizeOf_TSource_tA03B68B42D5DF58840C35A759D46194F8F579E36);
		bool L_51 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_50);
		if (!L_51)
		{
			goto IL_0104;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_52 = ___1_destination;
		Il2CppFullySharedGenericAny* L_53 = ___0_source;
		il2cpp_codegen_memcpy(L_54, L_53, SizeOf_TSource_tA03B68B42D5DF58840C35A759D46194F8F579E36);
		il2cpp_codegen_box_unbox(L_54, L_55, SizeOf_TDestination_tC515E7BF0550C131634C2ABCC89BCAC5EFAD65D4, il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_52, L_55, SizeOf_TDestination_tC515E7BF0550C131634C2ABCC89BCAC5EFAD65D4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_52, (void*)L_55);
		return (bool)1;
	}

IL_0104:
	{
		Il2CppFullySharedGenericAny* L_56 = ___1_destination;
		il2cpp_codegen_initobj(L_56, SizeOf_TDestination_tC515E7BF0550C131634C2ABCC89BCAC5EFAD65D4);
		return (bool)0;
	}

IL_010d:
	{
		bool L_57 = V_4;
		return L_57;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConversion_TryConvertToUnityEngineObject_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mBA69D37B4DED14E1204D55EB28F6BA7FA787ADBA_fshared (Il2CppFullySharedGenericAny ___0_source, Il2CppFullySharedGenericAny* ___1_destination, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	CHECKED_LOCAL(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit);
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
	const Il2CppFullySharedGenericAny L_13 = L_11;
	const Il2CppFullySharedGenericAny L_18 = L_11;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
	const Il2CppFullySharedGenericAny L_29 = L_19;
	Delegate_t* V_0 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_3);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_5 = ___1_destination;
		il2cpp_codegen_initobj(L_5, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		return (bool)0;
	}

IL_0024:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_7, L_9);
		if (L_10)
		{
			goto IL_004c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___0_source : &___0_source), SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
		bool L_12 = il2cpp_codegen_isinst_runtime_check_class(il2cpp_rgctx_data(method->rgctx_data, 3), Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var, L_11);
		if (!L_12)
		{
			goto IL_008b;
		}
	}

IL_004c:
	{
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___0_source : &___0_source), SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_13);
		if (L_14)
		{
			goto IL_005d;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_15 = ___1_destination;
		il2cpp_codegen_initobj(L_15, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		return (bool)1;
	}

IL_005d:
	{
		bool L_16 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var) == (il2cpp_rgctx_data(method->rgctx_data, 1));
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_17 = ___1_destination;
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___0_source : &___0_source), SizeOf_TSource_tBCE2D9186264DE5C946EF8EF446BE0727E8E5BB1);
		il2cpp_codegen_box_unbox(L_18, L_19, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA, il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_data(method->rgctx_data, 1));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_17, L_19, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_17, (void*)L_19);
		return (bool)1;
	}

IL_008b:
	{
		CHECKED_LOCAL_INIT(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticInit,(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = ConversionRegistry_TryGetConverter_mA5C88244D7C991C10AE5940EA5829BC20B3781CD((&((TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_StaticFields*)il2cpp_codegen_static_fields_for(TypeConversion_tC95A24AF93E22908A5717FBF24E5089C963863E9_il2cpp_TypeInfo_var))->___s_GlobalConverters), L_21, L_23, (&V_0), NULL);
		if (!L_24)
		{
			goto IL_00ce;
		}
	}
	{
		Delegate_t* L_25 = V_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_26;
		L_26 = TypeConverter_2_Invoke_m2EEAFFD266A61798005565D6566ED1DC9934DE64(((TypeConverter_2_t092CBFB8B2C91DDB61909080B4E1A2C19896B01F*)Castclass((RuntimeObject*)L_25, il2cpp_rgctx_data(method->rgctx_data, 4))), (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___0_source : &___0_source), NULL);
		V_1 = L_26;
		Il2CppFullySharedGenericAny* L_27 = ___1_destination;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_28 = V_1;
		void* L_30 = UnBox_Any(L_28, il2cpp_rgctx_data(method->rgctx_data, 1), L_29);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_27, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_30)), SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_27, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_30)));
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_31 = V_1;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_32;
		L_32 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_31, NULL);
		return L_32;
	}

IL_00ce:
	{
		Il2CppFullySharedGenericAny* L_33 = ___1_destination;
		il2cpp_codegen_initobj(L_33, SizeOf_TDestination_t0A90A28DE457357F0B77F378F2E29196394B43FA);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeHelpers_As_TisIl2CppFullySharedGenericAny_m77D430CC8981CE610392DE44CBC6D1D2A23D9641_fshared (RuntimeObject* ___0_obj, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
	memset(V_0, 0, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		return;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_obj;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)), SizeOf_TObject_t86BADDBAE5BC67E108EDD1531AF688A66AA7F41A);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		Il2CppFullySharedGenericAny* L_1;
		L_1 = UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
