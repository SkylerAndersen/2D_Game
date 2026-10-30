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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_tDE27E4087E2A730577614D92D9245ECECFF1E065;
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct Action_1_t818E1CDEF1E2320BB767719C88DA5BD3914C976A;
struct ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999;
struct DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266;
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934;
struct Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_1_tFB20DFB5FD830D27B2DDBF2A0616D8408894BCEF;
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_1_tFF3E2DF3986A7CF057331EB1EAFA404E157A2C83;
struct GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56;
struct GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39;
struct GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421;
struct HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED;
struct IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143;
struct IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901;
struct IPropertyBag_1_t30978BE747408788B89F37E0AF54EB81C020BCE7;
struct IPropertyBag_1_t8566C5C7AB3570D306E0B06845F7FAE6DB787054;
struct IPropertyBag_1_tD6112F86F5AF883B85696DAF0945E9448E60D119;
struct IPropertyBag_1_t62C77663667B180AF17D47314285F542E3E1A83E;
struct IPropertyBag_1_t115E9B7FA5F06C0542E10625FF535354D72F19D9;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct IReadOnlyList_1_t4F009AA654F0054FD0DC2D5B509CADB4CB6AECA9;
struct IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7;
struct KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415;
struct KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85;
struct KeyValuePairProperty_t1FD0D2BA91EB5ACD2513F7960E2C302BD70E47FA;
struct KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E;
struct ListElementProperty_tBCD14CEEDC46D04C5AE8E531734D85F572D3926E;
struct ListElementProperty_t760420A6FA3FE23DD5B711AE40D8FE4152C4BA68;
struct ListElementProperty_t615C280FCD7BA320329E2CB3E3B52EE88FA09282;
struct ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26;
struct List_1_t43D738AFE227B1EA62303EE615C3FE9260ACD199;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_tEBC1DC7981B70AEF800BCCA8CEED784343A92D05;
struct ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1;
struct ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3;
struct ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111;
struct ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79;
struct SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7;
struct SetElementProperty_t289C8D92DD4214A46FC3E74E8FE7C6EDE8B1C0C9;
struct SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct FieldInfo_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9;
struct IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MemberInfo_t;
struct MethodBase_t;
struct MethodInfo_t;
struct MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF;
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446;
struct PropertyInfo_t;
struct ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0;
IL2CPP_EXTERN_C String_t* _stringLiteral649CCA6075A9788E4EAE634C39ECDF8FA5DC5AD9;
IL2CPP_EXTERN_C String_t* _stringLiteral7F6452010FFD90B9C2687BFB11E8EA142967BBBD;
IL2CPP_EXTERN_C String_t* _stringLiteralCDD8682187822834D14C1F053E49DA9E982C21B7;
IL2CPP_EXTERN_C String_t* _stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_mF6A30FA72FBF2E3181811AB561B34C17C4B9CA7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Release_m6F09F7230B34474465ADC6A65AAAC4124B843AAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* HashSet_1_tA1368DD5977A2271895CEEC3D6282C68C9675735_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_2_t4F866F723F9E0A522C362494DC799D065D96C726_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IList_1_t8C7C301DAF6E4E4DFA7504EF93E6E2C93AB33AE7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ISet_1_t2DA9F3D6C8AF696AC1CB930D89D0F13190FC56CB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RuntimeObject_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1  : public RuntimeObject
{
	List_1_t43D738AFE227B1EA62303EE615C3FE9260ACD199* ___m_List;
	Func_1_tFB20DFB5FD830D27B2DDBF2A0616D8408894BCEF* ___m_CreateFunc;
	Action_1_tDE27E4087E2A730577614D92D9245ECECFF1E065* ___m_ActionOnGet;
	Action_1_tDE27E4087E2A730577614D92D9245ECECFF1E065* ___m_ActionOnRelease;
	Action_1_tDE27E4087E2A730577614D92D9245ECECFF1E065* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3  : public RuntimeObject
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___m_List;
	Func_1_t566D4A654882E282E54CDC3A001E05486F913903* ___m_CreateFunc;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnGet;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnRelease;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	Il2CppSharedGenericObject* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340  : public RuntimeObject
{
	List_1_tEBC1DC7981B70AEF800BCCA8CEED784343A92D05* ___m_List;
	Func_1_tFF3E2DF3986A7CF057331EB1EAFA404E157A2C83* ___m_CreateFunc;
	Action_1_t818E1CDEF1E2320BB767719C88DA5BD3914C976A* ___m_ActionOnGet;
	Action_1_t818E1CDEF1E2320BB767719C88DA5BD3914C976A* ___m_ActionOnRelease;
	Action_1_t818E1CDEF1E2320BB767719C88DA5BD3914C976A* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* ___m_FreshlyReleased;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct PropertyContainer_tD782808FE67EA532AEFD2BC7974D5F8419905076  : public RuntimeObject
{
};
struct ReadOnlyArrayExtensions_tC3315EA41D787AC9DE011A2E5D9A771E37FAE61D  : public RuntimeObject
{
};
struct ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF  : public RuntimeObject
{
	MethodInfo_t* ___m_CreatePropertyMethod;
	MethodInfo_t* ___m_CreatePropertyBagMethod;
	MethodInfo_t* ___m_CreateIndexedCollectionPropertyBagMethod;
	MethodInfo_t* ___m_CreateSetPropertyBagMethod;
	MethodInfo_t* ___m_CreateKeyValueCollectionPropertyBagMethod;
	MethodInfo_t* ___m_CreateKeyValuePairPropertyBagMethod;
	MethodInfo_t* ___m_CreateArrayPropertyBagMethod;
	MethodInfo_t* ___m_CreateListPropertyBagMethod;
	MethodInfo_t* ___m_CreateHashSetPropertyBagMethod;
	MethodInfo_t* ___m_CreateDictionaryPropertyBagMethod;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
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
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111  : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3
{
	RuntimeObject* ___m_Info;
	bool ___m_IsStructContainerType;
	GetStructValueAction_t1D4341987D3AB639208F418686483312904A7B39* ___m_GetStructValueAction;
	SetStructValueAction_tC6BC2CB4AB94181F81DFCD03D881295A7C134027* ___m_SetStructValueAction;
	GetClassValueAction_t4F5F9F51B79F47048B6A97418F21D4BF3A05AC56* ___m_GetClassValueAction;
	SetClassValueAction_t5AA8656B00AE2AC5704C34B9F7A6A1F82E0BA2F7* ___m_SetClassValueAction;
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
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
struct FieldInfo_t  : public MemberInfo_t
{
};
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF 
{
	FieldInfo_t* ___m_FieldInfo;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshaled_pinvoke
{
	FieldInfo_t* ___m_FieldInfo;
	char* ___U3CNameU3Ek__BackingField;
};
struct FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_marshaled_com
{
	FieldInfo_t* ___m_FieldInfo;
	Il2CppChar* ___U3CNameU3Ek__BackingField;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MethodBase_t  : public MemberInfo_t
{
};
struct PropertyInfo_t  : public MemberInfo_t
{
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 
{
	PropertyInfo_t* ___m_PropertyInfo;
	String_t* ___U3CNameU3Ek__BackingField;
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshaled_pinvoke
{
	PropertyInfo_t* ___m_PropertyInfo;
	char* ___U3CNameU3Ek__BackingField;
};
struct PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_marshaled_com
{
	PropertyInfo_t* ___m_PropertyInfo;
	Il2CppChar* ___U3CNameU3Ek__BackingField;
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
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
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
struct InstantiationKind_t9B77929786BCA193B4A916F2F25793598CF0DF7D 
{
	int32_t ___value__;
};
struct MethodInfo_t  : public MethodBase_t
{
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t474B4314A78E9CC97DD8CF6E3ADACCDDAFB0841A  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t9B0D7D63F90D24F16F87AF8413E98E8C803A81B9  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t42CD4AA6C3B0FB863CBC2D8227FFEF4C2214906B  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t5F26DBA1727EF005A1A4F925DB79E403C05F7E83  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409  : public RuntimeObject
{
	int32_t ___U3CInstantiationKindU3Ek__BackingField;
};
struct MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 
{
	union
	{
		struct
		{
			intptr_t ___pointer;
			int32_t ___allocator;
		};
		uint8_t MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2__padding[16];
	};
};
struct MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF  : public Exception_t
{
	Type_t* ___U3CTypeU3Ek__BackingField;
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
struct VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE 
{
	int32_t ___U3CIgnoreExceptionsU3Ek__BackingField;
};
struct Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505  : public MulticastDelegate_t
{
};
struct ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4* ___m_PropertiesList;
	Dictionary_2_t5FB44F403798E1529E205CBF14632F00AAC18879* ___m_PropertiesHash;
};
struct Func_1_t566D4A654882E282E54CDC3A001E05486F913903  : public MulticastDelegate_t
{
};
struct IndexedCollectionPropertyBag_2_t9CFEACD6C16F18DE7CFC0FF1B789D5E4C3E70488  : public PropertyBag_1_t42CD4AA6C3B0FB863CBC2D8227FFEF4C2214906B
{
	ListElementProperty_tBCD14CEEDC46D04C5AE8E531734D85F572D3926E* ___m_Property;
};
struct IndexedCollectionPropertyBag_2_t72CA9F59930D9856E976488FB1CF6D78C94403E9  : public PropertyBag_1_t5F26DBA1727EF005A1A4F925DB79E403C05F7E83
{
	ListElementProperty_t760420A6FA3FE23DD5B711AE40D8FE4152C4BA68* ___m_Property;
};
struct IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	ListElementProperty_t615C280FCD7BA320329E2CB3E3B52EE88FA09282* ___m_Property;
};
struct KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08  : public PropertyBag_1_tEB280A6B1E6B2014C69D7F69938160F85728FAB1
{
	KeyValuePairProperty_tE883A6048C21550261A3176050C59520BBE08A85* ___m_KeyValuePairProperty;
};
struct KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415  : public PropertyBag_1_t74F4963AD6B656900B7CACFC37AC3CDDDF818409
{
	KeyValuePairProperty_t1FD0D2BA91EB5ACD2513F7960E2C302BD70E47FA* ___m_KeyValuePairProperty;
};
struct KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E  : public PropertyBag_1_t9B0D7D63F90D24F16F87AF8413E98E8C803A81B9
{
};
struct SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78  : public PropertyBag_1_t474B4314A78E9CC97DD8CF6E3ADACCDDAFB0841A
{
	SetElementProperty_t289C8D92DD4214A46FC3E74E8FE7C6EDE8B1C0C9* ___m_Property;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
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
struct RawArray_tA35BDFE1932CF572E0E7E83AF0E9D7096F375C8D 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_Stride;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_Label;
};
struct ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999  : public IndexedCollectionPropertyBag_2_t72CA9F59930D9856E976488FB1CF6D78C94403E9
{
};
struct DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934  : public KeyValueCollectionPropertyBag_3_t5E0DC90A64EA0D5A2ECA5F96F46C708F625A8D08
{
};
struct HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED  : public SetPropertyBagBase_2_t535BA9B7846680B8FE7F234EEED4881B81612A78
{
};
struct ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26  : public IndexedCollectionPropertyBag_2_t9CFEACD6C16F18DE7CFC0FF1B789D5E4C3E70488
{
};
struct ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79  : public ContainerPropertyBag_1_t47684299E462BBF7DC930C28B27E8A8008478424
{
};
struct PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446  : public RuntimeObject
{
	int32_t ___m_PathIndex;
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	RuntimeObject* ___U3CPropertyU3Ek__BackingField;
	bool ___U3CReadonlyVisitU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
};
struct GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421 : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446 {};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540  : public PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446
{
	RuntimeObject* ___Property;
};
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
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
struct KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E_StaticFields
{
	DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266* ___s_KeyProperty;
	DelegateProperty_2_tEF04A831D1787C45A1B56C36935D689DB49E2266* ___s_ValueProperty;
};
struct GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421_StaticFields
{
	ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1* ___Pool;
};
struct GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields
{
	ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* ___Pool;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6_fshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_fshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1_fshared (RuntimeObject* ___0_properties, RuntimeObject* ___1_visitor, Il2CppFullySharedGenericAny* ___2_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m88C88F028D482D463AECB560312CE67C25FAAD59_fshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, RuntimeObject** ___2_property, int32_t* ___3_returnCode, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB_fshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny* ___2_value, int32_t* ___3_returnCode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_fshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArrayExtensions_IndexOfReference_TisIl2CppSharedGenericObject_mA0E5FD7E47068375BA999ACED3B577FA22996909_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 ___0_array, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPropertyBag_1__ctor_m8A9D3D2E609D27372E45F78266E4D3D49341668C_fshared (ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_fshared (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSetPropertyBag_1__ctor_m97B9FF0A7C7B1247E10A3C8A5114080B3A6571D1_fshared (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedCollectionPropertyBag_2__ctor_mFFA32DC1A42A98F8C472CC0042D92A65CEB3A1EE_fshared (IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueCollectionPropertyBag_3__ctor_m2B0FFB3AC934F3B3B68202F8E1002B6B5E22EE30_fshared (KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePairPropertyBag_2__ctor_m4145E0D4FEFD0347C5C90E8CFBA4FCC1AD92A71E_fshared (KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListPropertyBag_1__ctor_m13B50B342F6F11640D2535EF8957D87BA7DA8147_fshared (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedMemberProperty_2__ctor_m475C932496DECA3F709E33D1778A0998E5631115_fshared (ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111* __this, RuntimeObject* ___0_info, String_t* ___1_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedPropertyBag_1_AddProperty_TisIl2CppFullySharedGenericAny_m79764CEC7EFDE365D48FA05127DABA5B59964722_fshared (ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedPropertyBag_1__ctor_m6CFCFAB1CD0AEFC3445A3D2E8C1424F6A8C7395A_fshared (ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_fshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_fshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26_gshared (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;

inline bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6 (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, int32_t*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6_fshared)(___0_visitor, ___1_container, ___2_returnCode, ___3_parameters, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VisitParameters_get_IgnoreExceptions_mF9514BB955ADA04A779C4A6BFC1DE48D24AA01D5_inline (VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E (Type_t* ___0_type, const RuntimeMethod* method) ;
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_fshared)(method);
}
inline void PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1 (RuntimeObject* ___0_properties, RuntimeObject* ___1_visitor, Il2CppFullySharedGenericAny* ___2_container, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1_fshared)(___0_properties, ___1_visitor, ___2_container, method);
}
inline bool PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m88C88F028D482D463AECB560312CE67C25FAAD59 (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, RuntimeObject** ___2_property, int32_t* ___3_returnCode, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*, RuntimeObject**, int32_t*, const RuntimeMethod*))PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m88C88F028D482D463AECB560312CE67C25FAAD59_fshared)(___0_container, ___1_path, ___2_property, ___3_returnCode, method);
}
inline GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* ObjectPool_1_Get_mF6A30FA72FBF2E3181811AB561B34C17C4B9CA7F_inline (ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* __this, const RuntimeMethod* method)
{
	return ((  GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* (*) (ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340*, const RuntimeMethod*))ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline)(__this, method);
}
inline void ObjectPool_1_Release_m6F09F7230B34474465ADC6A65AAAC4124B843AAD_inline (ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* __this, GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340*, GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540*, const RuntimeMethod*))ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline)(__this, ___0_element, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyPath__ctor_m8889FD75F8EDE2DAAD4A5491B55C292DB207A794 (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, String_t* ___0_path, const RuntimeMethod* method) ;
inline bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny* ___2_value, int32_t* ___3_returnCode, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericAny*, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*, Il2CppFullySharedGenericAny*, int32_t*, const RuntimeMethod*))PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB_fshared)(___0_container, ___1_path, ___2_value, ___3_returnCode, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyPath_get_IsEmpty_m5923CD28AB201F75C64F40AED27C7E42FC5DBF50 (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, const RuntimeMethod* method) ;
inline GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* ObjectPool_1_Get_mB7CC64CDFD890311D54C24718B75099163BE4CE7_inline (ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1* __this, const RuntimeMethod* method)
{
	return ((  GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* (*) (ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1*, const RuntimeMethod*))ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReadonlyVisit_m852F4CA7A95317B2AA5CBC9AB914037FC5A0CABD_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, bool ___0_value, const RuntimeMethod* method) ;
inline void ObjectPool_1_Release_m38E0E88A9C8581BF4FFC4E43567E6A9FD099FDA4_inline (ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1* __this, GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1*, GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421*, const RuntimeMethod*))ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline)(__this, ___0_element, method);
}
inline NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0 (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_fshared)(___0_dataPointer, ___1_stride, ___2_length, method);
}
inline int32_t ReadOnlyArrayExtensions_IndexOfReference_TisIl2CppSharedGenericObject_mA0E5FD7E47068375BA999ACED3B577FA22996909 (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 ___0_array, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyArrayExtensions_IndexOfReference_TisIl2CppSharedGenericObject_mA0E5FD7E47068375BA999ACED3B577FA22996909_gshared)(___0_array, ___1_value, method);
}
inline int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_inline (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline void ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4 (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4_fshared)((ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*)__this, ___0_index, il2cppRetVal, method);
}
inline void ArrayPropertyBag_1__ctor_m8A9D3D2E609D27372E45F78266E4D3D49341668C (ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999* __this, const RuntimeMethod* method)
{
	((  void (*) (ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999*, const RuntimeMethod*))ArrayPropertyBag_1__ctor_m8A9D3D2E609D27372E45F78266E4D3D49341668C_fshared)(__this, method);
}
inline void DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33 (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* __this, const RuntimeMethod* method)
{
	((  void (*) (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934*, const RuntimeMethod*))DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33_fshared)(__this, method);
}
inline void HashSetPropertyBag_1__ctor_m97B9FF0A7C7B1247E10A3C8A5114080B3A6571D1 (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED*, const RuntimeMethod*))HashSetPropertyBag_1__ctor_m97B9FF0A7C7B1247E10A3C8A5114080B3A6571D1_fshared)(__this, method);
}
inline void IndexedCollectionPropertyBag_2__ctor_mFFA32DC1A42A98F8C472CC0042D92A65CEB3A1EE (IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7* __this, const RuntimeMethod* method)
{
	((  void (*) (IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7*, const RuntimeMethod*))IndexedCollectionPropertyBag_2__ctor_mFFA32DC1A42A98F8C472CC0042D92A65CEB3A1EE_fshared)(__this, method);
}
inline void KeyValueCollectionPropertyBag_3__ctor_m2B0FFB3AC934F3B3B68202F8E1002B6B5E22EE30 (KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415*, const RuntimeMethod*))KeyValueCollectionPropertyBag_3__ctor_m2B0FFB3AC934F3B3B68202F8E1002B6B5E22EE30_fshared)(__this, method);
}
inline void KeyValuePairPropertyBag_2__ctor_m4145E0D4FEFD0347C5C90E8CFBA4FCC1AD92A71E (KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E*, const RuntimeMethod*))KeyValuePairPropertyBag_2__ctor_m4145E0D4FEFD0347C5C90E8CFBA4FCC1AD92A71E_fshared)(__this, method);
}
inline void ListPropertyBag_1__ctor_m13B50B342F6F11640D2535EF8957D87BA7DA8147 (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26* __this, const RuntimeMethod* method)
{
	((  void (*) (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26*, const RuntimeMethod*))ListPropertyBag_1__ctor_m13B50B342F6F11640D2535EF8957D87BA7DA8147_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsPointer_mC8AAAFEC4E4CEA59DAD0032B85D1BB224763278B (Type_t* __this, const RuntimeMethod* method) ;
inline void ReflectedMemberProperty_2__ctor_m475C932496DECA3F709E33D1778A0998E5631115 (ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111* __this, RuntimeObject* ___0_info, String_t* ___1_name, const RuntimeMethod* method)
{
	((  void (*) (ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111*, RuntimeObject*, String_t*, const RuntimeMethod*))ReflectedMemberProperty_2__ctor_m475C932496DECA3F709E33D1778A0998E5631115_fshared)(__this, ___0_info, ___1_name, method);
}
inline void ReflectedPropertyBag_1_AddProperty_TisIl2CppFullySharedGenericAny_m79764CEC7EFDE365D48FA05127DABA5B59964722 (ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, const RuntimeMethod* method)
{
	((  void (*) (ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79*, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))ReflectedPropertyBag_1_AddProperty_TisIl2CppFullySharedGenericAny_m79764CEC7EFDE365D48FA05127DABA5B59964722_fshared)(__this, ___0_property, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_IsObject_mB3331A88354E72D9F30BF753227E6855518DCA7F_inline (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
inline void ReflectedPropertyBag_1__ctor_m6CFCFAB1CD0AEFC3445A3D2E8C1424F6A8C7395A (ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79* __this, const RuntimeMethod* method)
{
	((  void (*) (ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79*, const RuntimeMethod*))ReflectedPropertyBag_1__ctor_m6CFCFAB1CD0AEFC3445A3D2E8C1424F6A8C7395A_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectedPropertyBagProvider_GetPropertyMembers_mCCEF82F4B8D8F8416FFE7703B4C797CCA16436D5 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldMember__ctor_mA6F2BB809BD42F26804E1E9A78B80ECA6C65FF03 (FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF* __this, FieldInfo_t* ___0_fieldInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyMember__ctor_m0B727AF7D87194ED8EA453CC4CF01A10563E2334 (PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984* __this, PropertyInfo_t* ___0_propertyInfo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8 (Type_t* ___0_nullableType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared)(method);
}
inline int32_t List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline Il2CppSharedGenericObject* Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D (Func_1_t566D4A654882E282E54CDC3A001E05486F913903* __this, const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_fshared)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, const RuntimeMethod*))ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline)(__this, method);
}
inline void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, int32_t, const RuntimeMethod*))ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline)(__this, ___0_value, method);
}
inline Il2CppSharedGenericObject* List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515 (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_fshared)(__this, ___0_index, method);
}
inline void Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5 (Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_fshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
inline int32_t ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26 (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3*, const RuntimeMethod*))ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26_gshared)(__this, method);
}
inline void List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline (List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyContainer_Accept_TisIl2CppFullySharedGenericAny_m312EB2443F1A19C1228C035C0469EB9B21552CD9_fshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = 0;
	}
	try
	{
		{
			RuntimeObject* L_0 = ___0_visitor;
			Il2CppFullySharedGenericAny* L_1 = ___1_container;
			VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_2 = ___2_parameters;
			bool L_3;
			L_3 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6(L_0, L_1, (&V_0), L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
			if (!L_3)
			{
				goto IL_0010_1;
			}
		}
		{
			goto IL_007e;
		}

IL_0010_1:
		{
			goto IL_0022;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0012;
		}
		throw e;
	}

CATCH_0012:
	{
		{
			Exception_t* L_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			int32_t L_5;
			L_5 = VisitParameters_get_IgnoreExceptions_mF9514BB955ADA04A779C4A6BFC1DE48D24AA01D5_inline((&___2_parameters), NULL);
			if (((int32_t)((int32_t)L_5&2)))
			{
				goto IL_0020;
			}
		}
		{
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*));
		}

IL_0020:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_0022;
		}
	}

IL_0022:
	{
		int32_t L_6;
		L_6 = VisitParameters_get_IgnoreExceptions_mF9514BB955ADA04A779C4A6BFC1DE48D24AA01D5_inline((&___2_parameters), NULL);
		if (!((int32_t)((int32_t)L_6&1)))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		int32_t L_7 = V_0;
		switch (L_7)
		{
			case 0:
			{
				goto IL_007e;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_007e;
			}
			case 3:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_0063;
	}

IL_0046:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDD8682187822834D14C1F053E49DA9E982C21B7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0051:
	{
		Il2CppFullySharedGenericAny* L_9 = ___1_container;
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)L_9, &L_11, L_10);
		typedef Type_t* ( *func_L_13)(void*,const RuntimeMethod*);
		Type_t* L_14 = ((func_L_13)L_12)(L_11.thisPtr,L_11.method);
		MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF* L_15 = (MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingPropertyBagException_t0F111A88F082CF81CD83CAF0CDD80D8DD95F83DF_il2cpp_TypeInfo_var)));
		MissingPropertyBagException__ctor_mB582A31DF4DFE137633AC161C68DD62E10B2CF4C(L_15, L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_0063:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75_il2cpp_TypeInfo_var)), &L_17);
		String_t* L_19;
		L_19 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral50E436334550B3ABD14EAC4D71A5B94109EF1CE0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCFF76EAE2EC7F0E16EB3A061249835B984112489)), L_18, NULL);
		Exception_t* L_20 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A_fshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_visitor;
		Il2CppFullySharedGenericAny* L_1 = ___1_container;
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_2 = ___2_parameters;
		bool L_3;
		L_3 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6(L_0, L_1, (&V_0), L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6_fshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, int32_t* ___2_returnCode, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___3_parameters, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(Type_t_StaticInit);
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_24 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	const Il2CppFullySharedGenericAny L_41 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	const Il2CppFullySharedGenericAny L_47 = L_10;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	memset(V_0, 0, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		int32_t* L_3 = ___2_returnCode;
		*(((int32_t*)L_3)) = 2;
		return (bool)0;
	}

IL_0016:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_7;
		L_7 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppFullySharedGenericAny* L_8 = ___1_container;
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		il2cpp_codegen_memcpy(L_10, V_0, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		bool L_11;
		L_11 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_10: *(void**)L_10));
		if (!L_11)
		{
			goto IL_0047;
		}
	}
	{
		int32_t* L_12 = ___2_returnCode;
		*(((int32_t*)L_12)) = 1;
		return (bool)0;
	}

IL_0047:
	{
		bool L_13 = il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1));
		if (L_13)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		Il2CppFullySharedGenericAny* L_16 = ___1_container;
		Il2CppConstrainedCallData L_18;
		Il2CppMethodPointer L_19 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)L_16, &L_18, L_17);
		typedef Type_t* ( *func_L_20)(void*,const RuntimeMethod*);
		Type_t* L_21 = ((func_L_20)L_19)(L_18.thisPtr,L_18.method);
		bool L_22;
		L_22 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_15, L_21, NULL);
		if (!L_22)
		{
			goto IL_00ca;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_23 = ___1_container;
		Il2CppConstrainedCallData L_25;
		Il2CppMethodPointer L_26 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)L_23, &L_25, L_24);
		typedef Type_t* ( *func_L_27)(void*,const RuntimeMethod*);
		Type_t* L_28 = ((func_L_27)L_26)(L_25.thisPtr,L_25.method);
		bool L_29;
		L_29 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_28, NULL);
		if (L_29)
		{
			goto IL_008d;
		}
	}
	{
		int32_t* L_30 = ___2_returnCode;
		*(((int32_t*)L_30)) = 2;
		return (bool)0;
	}

IL_008d:
	{
		Il2CppFullySharedGenericAny* L_31 = ___1_container;
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)L_31, &L_33, L_32);
		typedef Type_t* ( *func_L_35)(void*,const RuntimeMethod*);
		Type_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_37;
		L_37 = PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E(L_36, NULL);
		V_1 = L_37;
		RuntimeObject* L_38 = V_1;
		if (L_38)
		{
			goto IL_00a7;
		}
	}
	{
		int32_t* L_39 = ___2_returnCode;
		*(((int32_t*)L_39)) = 3;
		return (bool)0;
	}

IL_00a7:
	{
		Il2CppFullySharedGenericAny* L_40 = ___1_container;
		il2cpp_codegen_memcpy(L_41, L_40, SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_41);
		V_2 = L_42;
		RuntimeObject* L_43 = V_1;
		RuntimeObject* L_44 = ___0_visitor;
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject** >::Invoke(1, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, L_43, L_44, (&V_2));
		Il2CppFullySharedGenericAny* L_45 = ___1_container;
		RuntimeObject* L_46 = V_2;
		void* L_48 = UnBox_Any(L_46, il2cpp_rgctx_data(method->rgctx_data, 1), L_47);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_45, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_48)), SizeOf_TContainer_tFA40575A4D6F4539EA064D2AD0C467D16A761860);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_45, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_48)));
		goto IL_00e0;
	}

IL_00ca:
	{
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_49;
		L_49 = PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8(il2cpp_rgctx_method(method->rgctx_data, 4));
		V_3 = L_49;
		RuntimeObject* L_50 = V_3;
		if (L_50)
		{
			goto IL_00d8;
		}
	}
	{
		int32_t* L_51 = ___2_returnCode;
		*(((int32_t*)L_51)) = 3;
		return (bool)0;
	}

IL_00d8:
	{
		RuntimeObject* L_52 = V_3;
		RuntimeObject* L_53 = ___0_visitor;
		Il2CppFullySharedGenericAny* L_54 = ___1_container;
		PropertyBag_AcceptWithSpecializedVisitor_TisIl2CppFullySharedGenericAny_mDB91562B01F9A25F2996347A1981D24A0DFBBFF1(L_52, L_53, L_54, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_00e0:
	{
		int32_t* L_55 = ___2_returnCode;
		*(((int32_t*)L_55)) = 0;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m9D8A9651148B96D6F483224324DF5E1139D7B6F4_fshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, RuntimeObject** ___2_property, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_1 = ___1_path;
		RuntimeObject** L_2 = ___2_property;
		bool L_3;
		L_3 = PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m88C88F028D482D463AECB560312CE67C25FAAD59(L_0, L_1, L_2, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetProperty_TisIl2CppFullySharedGenericAny_m88C88F028D482D463AECB560312CE67C25FAAD59_fshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, RuntimeObject** ___2_property, int32_t* ___3_returnCode, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Get_mF6A30FA72FBF2E3181811AB561B34C17C4B9CA7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_m6F09F7230B34474465ADC6A65AAAC4124B843AAD_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticInit);
	GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* V_0 = NULL;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		CHECKED_LOCAL_INIT(GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticInit,(GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* L_0 = ((GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields*)il2cpp_codegen_static_fields_for(GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var))->___Pool;
		GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_1;
		L_1 = ObjectPool_1_Get_mF6A30FA72FBF2E3181811AB561B34C17C4B9CA7F_inline(L_0, ObjectPool_1_Get_mF6A30FA72FBF2E3181811AB561B34C17C4B9CA7F_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{
				CHECKED_LOCAL_INIT(GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticInit,(GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_tF11864F05C33C2DB6AAE614D05951B55BB8BC340* L_2 = ((GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_StaticFields*)il2cpp_codegen_static_fields_for(GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540_il2cpp_TypeInfo_var))->___Pool;
				GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_3 = V_0;
				ObjectPool_1_Release_m6F09F7230B34474465ADC6A65AAAC4124B843AAD_inline(L_2, L_3, ObjectPool_1_Release_m6F09F7230B34474465ADC6A65AAAC4124B843AAD_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_4 = V_0;
				PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_5 = ___1_path;
				PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_6 = (*(PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*)L_5);
				PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline(L_4, L_6, NULL);
				GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_7 = V_0;
				Il2CppFullySharedGenericAny* L_8 = ___0_container;
				int32_t* L_9 = ___3_returnCode;
				il2cpp_codegen_initobj((&V_1), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
				VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_10 = V_1;
				bool L_11;
				L_11 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6(L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 0));
				if (L_11)
				{
					goto IL_0031_1;
				}
			}
			{
				RuntimeObject** L_12 = ___2_property;
				*(((RuntimeObject**)L_12)) = NULL;
				Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_12), (void*)NULL);
				V_2 = (bool)0;
				goto IL_0055;
			}

IL_0031_1:
			{
				int32_t* L_13 = ___3_returnCode;
				GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_14 = V_0;
				int32_t L_15;
				L_15 = PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_inline(L_14, NULL);
				*(((int32_t*)L_13)) = ((int32_t)L_15);
				RuntimeObject** L_16 = ___2_property;
				GetPropertyVisitor_t88183F280884F26458B42DAF173F005F3625F540* L_17 = V_0;
				RuntimeObject* L_18 = L_17->___Property;
				*(((RuntimeObject**)L_16)) = ((RuntimeObject*)L_18);
				Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_16), (void*)((RuntimeObject*)L_18));
				int32_t* L_19 = ___3_returnCode;
				int32_t L_20 = *(((int32_t*)L_19));
				V_2 = (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
				goto IL_0055;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		bool L_21 = V_2;
		return L_21;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA4B822A9C5AA47E305D70016F7098A3BEB61FFA1_fshared (Il2CppFullySharedGenericAny* ___0_container, String_t* ___1_name, Il2CppFullySharedGenericAny* ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___1_name;
		PropertyPath__ctor_m8889FD75F8EDE2DAAD4A5491B55C292DB207A794((&V_0), L_0, NULL);
		Il2CppFullySharedGenericAny* L_1 = ___0_container;
		Il2CppFullySharedGenericAny* L_2 = ___2_value;
		bool L_3;
		L_3 = PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB(L_1, (&V_0), L_2, (&V_1), il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryGetValue_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m4F1769770A3A0B4E309335855CE106FE78D353BB_fshared (Il2CppFullySharedGenericAny* ___0_container, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* ___1_path, Il2CppFullySharedGenericAny* ___2_value, int32_t* ___3_returnCode, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(GetValueVisitor_1_t63E2DEF23B3960B80A0EA29B0D61AD0D766218BC_StaticInit);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9);
	GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* V_0 = NULL;
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_0 = ___1_path;
		bool L_1;
		L_1 = PropertyPath_get_IsEmpty_m5923CD28AB201F75C64F40AED27C7E42FC5DBF50(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		int32_t* L_2 = ___3_returnCode;
		*(((int32_t*)L_2)) = 4;
		Il2CppFullySharedGenericAny* L_3 = ___2_value;
		il2cpp_codegen_initobj(L_3, SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9);
		return (bool)0;
	}

IL_0014:
	{
		CHECKED_LOCAL_INIT(GetValueVisitor_1_t63E2DEF23B3960B80A0EA29B0D61AD0D766218BC_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1* L_4 = ((GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Pool;
		GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_5;
		L_5 = ObjectPool_1_Get_mB7CC64CDFD890311D54C24718B75099163BE4CE7_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_5;
		GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_6 = V_0;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* L_7 = ___1_path;
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_8 = (*(PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79*)L_7);
		PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_6, L_8, NULL);
		GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_9 = V_0;
		PathVisitor_set_ReadonlyVisit_m852F4CA7A95317B2AA5CBC9AB914037FC5A0CABD_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_9, (bool)1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{
				CHECKED_LOCAL_INIT(GetValueVisitor_1_t63E2DEF23B3960B80A0EA29B0D61AD0D766218BC_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
				ObjectPool_1_t2184AA1C7CACBE62DF11E0F26B73D85AC246F2E1* L_10 = ((GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Pool;
				GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_11 = V_0;
				ObjectPool_1_Release_m38E0E88A9C8581BF4FFC4E43567E6A9FD099FDA4_inline(L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 5));
				return;
			}
		});
		try
		{
			{
				GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_12 = V_0;
				Il2CppFullySharedGenericAny* L_13 = ___0_container;
				int32_t* L_14 = ___3_returnCode;
				il2cpp_codegen_initobj((&V_1), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
				VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_15 = V_1;
				bool L_16;
				L_16 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_mDD1DF6BB0301B9008B88A30F25AC64BE2728F0D6((RuntimeObject*)L_12, L_13, L_14, L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
				if (L_16)
				{
					goto IL_0050_1;
				}
			}
			{
				Il2CppFullySharedGenericAny* L_17 = ___2_value;
				il2cpp_codegen_initobj(L_17, SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9);
				V_2 = (bool)0;
				goto IL_0078;
			}

IL_0050_1:
			{
				Il2CppFullySharedGenericAny* L_18 = ___2_value;
				GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_19 = V_0;
				il2cpp_codegen_memcpy(L_20, il2cpp_codegen_get_field_data_pointer(L_19, il2cpp_rgctx_offset(method->rgctx_data, 4)), SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9);
				il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_18, L_20, SizeOf_TValue_t3FC78A7104DBD8F84891DCAC8F9F3301CF3A9BC9);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_18, (void*)L_20);
				int32_t* L_21 = ___3_returnCode;
				GetValueVisitor_1_tD6256BC21B659DF4D4AAAACF2E22A594DD1F2421* L_22 = V_0;
				int32_t L_23;
				L_23 = PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_inline((PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446*)L_22, NULL);
				*(((int32_t*)L_21)) = ((int32_t)L_23);
				goto IL_0072;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0072:
	{
		int32_t* L_24 = ___3_returnCode;
		int32_t L_25 = *(((int32_t*)L_24));
		return (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
	}

IL_0078:
	{
		bool L_26 = V_2;
		return L_26;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 RawArray_SliceAs_TisIl2CppFullySharedGenericStruct_m991FFD7B53A0346DF1A36502F7ECE7BD0379C1C8_fshared (RawArray_tA35BDFE1932CF572E0E7E83AF0E9D7096F375C8D* __this, int32_t ___0_start, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint8_t* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_start;
		int32_t L_2 = __this->___m_Stride;
		int32_t L_3 = __this->___m_Stride;
		int32_t L_4 = ___1_count;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_5;
		L_5 = NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, L_2)))), L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyArrayExtensions_Contains_TisIl2CppFullySharedGenericAny_mC0818B4CFC44A2BA98476511B21ABBB2C114B75E_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t68B4F838E203AB0F1022365C9972565720B27245 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_t68B4F838E203AB0F1022365C9972565720B27245);
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_002d;
	}

IL_0004:
	{
		ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = L_0.___m_Array;
		ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B L_2 = ___0_array;
		int32_t L_3 = L_2.___m_StartIndex;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_TValue_t68B4F838E203AB0F1022365C9972565720B27245);
		Il2CppConstrainedCallData L_7;
		Il2CppMethodPointer L_8 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)((Il2CppFullySharedGenericAny*)(L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_3, L_4))))), &L_7, L_6);
		int32_t L_9 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(L_8, L_7.method,L_7.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_5: *(void**)L_5));
		if (L_9)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)1;
	}

IL_0029:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_0;
		ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B L_12 = ___0_array;
		int32_t L_13 = L_12.___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyArrayExtensions_ContainsReference_TisIl2CppSharedGenericObject_m1718EE8465FA5A462140368DDCFD5A71397E9F12_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 ___0_array, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	{
		ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 L_0 = ___0_array;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		int32_t L_2;
		L_2 = ReadOnlyArrayExtensions_IndexOfReference_TisIl2CppSharedGenericObject_mA0E5FD7E47068375BA999ACED3B577FA22996909(L_0, L_1, NULL);
		return (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyArrayExtensions_HaveEqualReferences_TisIl2CppFullySharedGenericAny_m18DD1DEBBB4B5A72B1518A005C03E7BAC26FEC6A_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B ___0_array1, RuntimeObject* ___1_array2, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	const uint32_t SizeOf_TValue_tD289C3E051BF90CA5EB6F68E05F40849EE2002F0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_tD289C3E051BF90CA5EB6F68E05F40849EE2002F0);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_tD289C3E051BF90CA5EB6F68E05F40849EE2002F0);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_inline((&___0_array1), NULL);
		int32_t L_1 = ___2_count;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_2;
		L_2 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_0, L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___1_array2;
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 1), (RuntimeObject*)L_3);
		int32_t L_5 = ___2_count;
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_4, L_5, NULL);
		V_1 = L_6;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		if ((((int32_t)L_7) == ((int32_t)L_8)))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		V_2 = 0;
		goto IL_0046;
	}

IL_0025:
	{
		int32_t L_9 = V_2;
		ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4((&___0_array1), L_9, (Il2CppFullySharedGenericAny*)L_10, il2cpp_rgctx_method(method->rgctx_data, 3));
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), L_10);
		RuntimeObject* L_12 = ___1_array2;
		int32_t L_13 = V_2;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_12, L_13, (Il2CppFullySharedGenericAny*)L_14);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), L_14);
		if ((((RuntimeObject*)(RuntimeObject*)L_11) == ((RuntimeObject*)(RuntimeObject*)L_15)))
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0042:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0046:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0025;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArrayExtensions_IndexOfReference_TisIl2CppSharedGenericObject_mA0E5FD7E47068375BA999ACED3B577FA22996909_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 ___0_array, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0004:
	{
		ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 L_0 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = L_0.___m_Array;
		ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 L_2 = ___0_array;
		int32_t L_3 = L_2.___m_StartIndex;
		int32_t L_4 = V_0;
		int32_t L_5 = ((int32_t)il2cpp_codegen_add(L_3, L_4));
		Il2CppSharedGenericObject* L_6 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Il2CppSharedGenericObject* L_7 = ___1_value;
		if ((!(((RuntimeObject*)(Il2CppSharedGenericObject*)L_6) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_7))))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_8 = V_0;
		return L_8;
	}

IL_0026:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002a:
	{
		int32_t L_10 = V_0;
		ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 L_11 = ___0_array;
		int32_t L_12 = L_11.___m_Length;
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectedPropertyBagProvider_CreateArrayPropertyBag_TisIl2CppFullySharedGenericAny_mF21F33D896625B530399523A19DA5504C433874E_fshared (ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999* L_0 = (ArrayPropertyBag_1_t67AE577E71602886054243EF2602EC6BBCBE2999*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		ArrayPropertyBag_1__ctor_m8A9D3D2E609D27372E45F78266E4D3D49341668C(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectedPropertyBagProvider_CreateDictionaryPropertyBag_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mA1239599692F8CA9A93A69C00D730423C8F212A9_fshared (ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934* L_0 = (DictionaryPropertyBag_2_tB597C417CF7505B25BF7B87BA095BDE4F999B934*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		DictionaryPropertyBag_2__ctor_m8FC636BBC54135160381FA25CF825CCC925E5E33(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectedPropertyBagProvider_CreateHashSetPropertyBag_TisIl2CppFullySharedGenericAny_mE25440F799723CD08B9618183AB81CB8FC32FDC5_fshared (ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED* L_0 = (HashSetPropertyBag_1_tAA71EF2902794249B4D5127D03BA186EC5310BED*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		HashSetPropertyBag_1__ctor_m97B9FF0A7C7B1247E10A3C8A5114080B3A6571D1(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectedPropertyBagProvider_CreateIndexedCollectionPropertyBag_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m417E52CD35A6ADB1C0D79E951899B5AD27363A02_fshared (ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7* L_0 = (IndexedCollectionPropertyBag_2_t8A1B3CDCD4EEE6077DA6B18334A936E1A9C20FC7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		IndexedCollectionPropertyBag_2__ctor_mFFA32DC1A42A98F8C472CC0042D92A65CEB3A1EE(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectedPropertyBagProvider_CreateKeyValueCollectionPropertyBag_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m6625BBE285D05323D65CABCB66CE21E54C17898B_fshared (ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415* L_0 = (KeyValueCollectionPropertyBag_3_tCF870BA05A86A98FBB786FA41A24B15AB3ADC415*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		KeyValueCollectionPropertyBag_3__ctor_m2B0FFB3AC934F3B3B68202F8E1002B6B5E22EE30(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectedPropertyBagProvider_CreateKeyValuePairPropertyBag_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m92C305BD0C10A73914A18E88B90D213AE20C122C_fshared (ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E* L_0 = (KeyValuePairPropertyBag_2_t14F7E3ED1235C96F445409D9E1E028FC3090724E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		KeyValuePairPropertyBag_2__ctor_m4145E0D4FEFD0347C5C90E8CFBA4FCC1AD92A71E(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectedPropertyBagProvider_CreateListPropertyBag_TisIl2CppFullySharedGenericAny_mB61F63C22E8D2A80CD324D7073D002F638DB0209_fshared (ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26* L_0 = (ListPropertyBag_1_tD68AC11290FE8987B600F306DBAE907249E1AC26*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		ListPropertyBag_1__ctor_m13B50B342F6F11640D2535EF8957D87BA7DA8147(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectedPropertyBagProvider_CreateProperty_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE4C044FC853FD1CB248E79B348896665C92C47E4_fshared (ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF* __this, RuntimeObject* ___0_member, ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79* ___1_propertyBag, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = Type_get_IsPointer_mC8AAAFEC4E4CEA59DAD0032B85D1BB224763278B(L_1, NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79* L_3 = ___1_propertyBag;
		RuntimeObject* L_4 = ___0_member;
		RuntimeObject* L_5 = ___0_member;
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var, L_5);
		ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111* L_7 = (ReflectedMemberProperty_2_t37C928FE0D9376E972A9717A02449188FD74B111*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		ReflectedMemberProperty_2__ctor_m475C932496DECA3F709E33D1778A0998E5631115(L_7, L_4, L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
		ReflectedPropertyBag_1_AddProperty_TisIl2CppFullySharedGenericAny_m79764CEC7EFDE365D48FA05127DABA5B59964722(L_3, (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectedPropertyBagProvider_CreatePropertyBag_TisIl2CppFullySharedGenericAny_m2FCEC978FBF9484E20006B91AAAE3B3E0B928BD4_fshared (ReflectedPropertyBagProvider_tFAAE287D4BED97ACD16EECAEA6DD5DE506D157CF* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79* V_0 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_1 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_2 = NULL;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	MemberInfo_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	FieldInfo_t* V_7 = NULL;
	PropertyInfo_t* V_8 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = TypeTraits_IsContainer_m46D04F3E3219371CC5F133E2CC54BCA46FD72505(L_1, NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = TypeTraits_IsObject_mB3331A88354E72D9F30BF753227E6855518DCA7F_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}

IL_0022:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F6452010FFD90B9C2687BFB11E8EA142967BBBD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_8, NULL);
		if (!L_9)
		{
			goto IL_008f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(47, L_11);
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_005b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral649CCA6075A9788E4EAE634C39ECDF8FA5DC5AD9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_005b:
	{
		MethodInfo_t* L_14 = __this->___m_CreateArrayPropertyBagMethod;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_15 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16 = L_15;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_18);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_19);
		MethodInfo_t* L_20;
		L_20 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(41, L_14, L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		RuntimeObject* L_22;
		L_22 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_20, __this, L_21, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_22, il2cpp_rgctx_data(method->rgctx_data, 2)));
	}

IL_008f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = VirtualFuncInvoker0< bool >::Invoke(40, L_24);
		if (!L_25)
		{
			goto IL_00f6;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		Type_t* L_28;
		L_28 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_27);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (List_1_tA989C33995B015444AE843B573C94F683039E41F_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_28, L_30);
		if (!L_31)
		{
			goto IL_00f6;
		}
	}
	{
		MethodInfo_t* L_32 = __this->___m_CreateListPropertyBagMethod;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_33 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_34 = L_33;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_37;
		L_37 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50, L_36);
		int32_t L_38 = 0;
		Type_t* L_39 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		ArrayElementTypeCheck (L_34, L_39);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_39);
		MethodInfo_t* L_40;
		L_40 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(41, L_32, L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41;
		L_41 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		RuntimeObject* L_42;
		L_42 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_40, __this, L_41, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_42, il2cpp_rgctx_data(method->rgctx_data, 2)));
	}

IL_00f6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		bool L_45;
		L_45 = VirtualFuncInvoker0< bool >::Invoke(40, L_44);
		if (!L_45)
		{
			goto IL_015d;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		Type_t* L_48;
		L_48 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_47);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (HashSet_1_tA1368DD5977A2271895CEEC3D6282C68C9675735_0_0_0_var) };
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		bool L_51;
		L_51 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_48, L_50);
		if (!L_51)
		{
			goto IL_015d;
		}
	}
	{
		MethodInfo_t* L_52 = __this->___m_CreateHashSetPropertyBagMethod;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_53 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_54 = L_53;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_57;
		L_57 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50, L_56);
		int32_t L_58 = 0;
		Type_t* L_59 = (L_57)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_58));
		ArrayElementTypeCheck (L_54, L_59);
		(L_54)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_59);
		MethodInfo_t* L_60;
		L_60 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(41, L_52, L_54);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61;
		L_61 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		RuntimeObject* L_62;
		L_62 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_60, __this, L_61, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_62, il2cpp_rgctx_data(method->rgctx_data, 2)));
	}

IL_015d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		bool L_65;
		L_65 = VirtualFuncInvoker0< bool >::Invoke(40, L_64);
		if (!L_65)
		{
			goto IL_01cc;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		Type_t* L_68;
		L_68 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_67);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_69 = { reinterpret_cast<intptr_t> (Dictionary_2_tD1D99EF8DBFAF04525FC30992C1691570BEF8FDE_0_0_0_var) };
		Type_t* L_70;
		L_70 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_69, NULL);
		bool L_71;
		L_71 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_68, L_70);
		if (!L_71)
		{
			goto IL_01cc;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_74;
		L_74 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50, L_73);
		V_1 = L_74;
		MethodInfo_t* L_75 = __this->___m_CreateDictionaryPropertyBagMethod;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_76 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_77 = L_76;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_78 = V_1;
		int32_t L_79 = 0;
		Type_t* L_80 = (L_78)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_79));
		ArrayElementTypeCheck (L_77, L_80);
		(L_77)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_80);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_81 = L_77;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_82 = V_1;
		int32_t L_83 = 1;
		Type_t* L_84 = (L_82)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_83));
		ArrayElementTypeCheck (L_81, L_84);
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_84);
		MethodInfo_t* L_85;
		L_85 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(41, L_75, L_81);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_86;
		L_86 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		RuntimeObject* L_87;
		L_87 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_85, __this, L_86, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_87, il2cpp_rgctx_data(method->rgctx_data, 2)));
	}

IL_01cc:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		bool L_90;
		L_90 = VirtualFuncInvoker0< bool >::Invoke(40, L_89);
		if (!L_90)
		{
			goto IL_0240;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		Type_t* L_93;
		L_93 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_92);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (IList_1_t8C7C301DAF6E4E4DFA7504EF93E6E2C93AB33AE7_0_0_0_var) };
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		bool L_96;
		L_96 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_93, L_95);
		if (!L_96)
		{
			goto IL_0240;
		}
	}
	{
		MethodInfo_t* L_97 = __this->___m_CreateIndexedCollectionPropertyBagMethod;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_98 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_99 = L_98;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_100 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_101;
		L_101 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_100, NULL);
		ArrayElementTypeCheck (L_99, L_101);
		(L_99)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_101);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_102 = L_99;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_103 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_104;
		L_104 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_103, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_105;
		L_105 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50, L_104);
		int32_t L_106 = 0;
		Type_t* L_107 = (L_105)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_106));
		ArrayElementTypeCheck (L_102, L_107);
		(L_102)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_107);
		MethodInfo_t* L_108;
		L_108 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(41, L_97, L_102);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_109;
		L_109 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		RuntimeObject* L_110;
		L_110 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_108, __this, L_109, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_110, il2cpp_rgctx_data(method->rgctx_data, 2)));
	}

IL_0240:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_111 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_112;
		L_112 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_111, NULL);
		bool L_113;
		L_113 = VirtualFuncInvoker0< bool >::Invoke(40, L_112);
		if (!L_113)
		{
			goto IL_02b4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		Type_t* L_116;
		L_116 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_115);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_117 = { reinterpret_cast<intptr_t> (ISet_1_t2DA9F3D6C8AF696AC1CB930D89D0F13190FC56CB_0_0_0_var) };
		Type_t* L_118;
		L_118 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_117, NULL);
		bool L_119;
		L_119 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_116, L_118);
		if (!L_119)
		{
			goto IL_02b4;
		}
	}
	{
		MethodInfo_t* L_120 = __this->___m_CreateSetPropertyBagMethod;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_121 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_122 = L_121;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		ArrayElementTypeCheck (L_122, L_124);
		(L_122)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_124);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_125 = L_122;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_126 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_127;
		L_127 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_126, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_128;
		L_128 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50, L_127);
		int32_t L_129 = 0;
		Type_t* L_130 = (L_128)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_129));
		ArrayElementTypeCheck (L_125, L_130);
		(L_125)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_130);
		MethodInfo_t* L_131;
		L_131 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(41, L_120, L_125);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_132;
		L_132 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		RuntimeObject* L_133;
		L_133 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_131, __this, L_132, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_133, il2cpp_rgctx_data(method->rgctx_data, 2)));
	}

IL_02b4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_134 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_135;
		L_135 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_134, NULL);
		bool L_136;
		L_136 = VirtualFuncInvoker0< bool >::Invoke(40, L_135);
		if (!L_136)
		{
			goto IL_0330;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_137 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_138;
		L_138 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_137, NULL);
		Type_t* L_139;
		L_139 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_138);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_140 = { reinterpret_cast<intptr_t> (IDictionary_2_t4F866F723F9E0A522C362494DC799D065D96C726_0_0_0_var) };
		Type_t* L_141;
		L_141 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_140, NULL);
		bool L_142;
		L_142 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_139, L_141);
		if (!L_142)
		{
			goto IL_0330;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_143 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_144;
		L_144 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_143, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_145;
		L_145 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50, L_144);
		V_2 = L_145;
		MethodInfo_t* L_146 = __this->___m_CreateKeyValueCollectionPropertyBagMethod;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_147 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_148 = L_147;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_149 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		Type_t* L_150;
		L_150 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_149, NULL);
		ArrayElementTypeCheck (L_148, L_150);
		(L_148)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_150);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_151 = L_148;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_152 = V_2;
		int32_t L_153 = 0;
		Type_t* L_154 = (L_152)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_153));
		ArrayElementTypeCheck (L_151, L_154);
		(L_151)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_154);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_155 = L_151;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_156 = V_2;
		int32_t L_157 = 1;
		Type_t* L_158 = (L_156)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_157));
		ArrayElementTypeCheck (L_155, L_158);
		(L_155)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_158);
		MethodInfo_t* L_159;
		L_159 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(41, L_146, L_155);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_160;
		L_160 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		RuntimeObject* L_161;
		L_161 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_159, __this, L_160, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_161, il2cpp_rgctx_data(method->rgctx_data, 2)));
	}

IL_0330:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_162 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_163;
		L_163 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_162, NULL);
		bool L_164;
		L_164 = VirtualFuncInvoker0< bool >::Invoke(40, L_163);
		if (!L_164)
		{
			goto IL_039f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_165 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_166;
		L_166 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_165, NULL);
		Type_t* L_167;
		L_167 = VirtualFuncInvoker0< Type_t* >::Invoke(48, L_166);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_168 = { reinterpret_cast<intptr_t> (KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var) };
		Type_t* L_169;
		L_169 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_168, NULL);
		bool L_170;
		L_170 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_167, L_169);
		if (!L_170)
		{
			goto IL_039f;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_173;
		L_173 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50, L_172);
		V_3 = L_173;
		MethodInfo_t* L_174 = __this->___m_CreateKeyValuePairPropertyBagMethod;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_175 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_176 = L_175;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_177 = V_3;
		int32_t L_178 = 0;
		Type_t* L_179 = (L_177)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_178));
		ArrayElementTypeCheck (L_176, L_179);
		(L_176)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_179);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_180 = L_176;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_181 = V_3;
		int32_t L_182 = 1;
		Type_t* L_183 = (L_181)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_182));
		ArrayElementTypeCheck (L_180, L_183);
		(L_180)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_183);
		MethodInfo_t* L_184;
		L_184 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(41, L_174, L_180);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_185;
		L_185 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		RuntimeObject* L_186;
		L_186 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_184, __this, L_185, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_186, il2cpp_rgctx_data(method->rgctx_data, 2)));
	}

IL_039f:
	{
		ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79* L_187 = (ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		ReflectedPropertyBag_1__ctor_m6CFCFAB1CD0AEFC3445A3D2E8C1424F6A8C7395A(L_187, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_0 = L_187;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_188 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_189;
		L_189 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_188, NULL);
		RuntimeObject* L_190;
		L_190 = ReflectedPropertyBagProvider_GetPropertyMembers_mCCEF82F4B8D8F8416FFE7703B4C797CCA16436D5(L_189, NULL);
		RuntimeObject* L_191;
		L_191 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var, L_190);
		V_4 = L_191;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0457:
			{
				{
					RuntimeObject* L_192 = V_4;
					if (!L_192)
					{
						goto IL_0462;
					}
				}
				{
					RuntimeObject* L_193 = V_4;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_193);
				}

IL_0462:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0449_1;
			}

IL_03c0_1:
			{
				RuntimeObject* L_194 = V_4;
				MemberInfo_t* L_195;
				L_195 = InterfaceFuncInvoker0< MemberInfo_t* >::Invoke(0, IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var, L_194);
				V_5 = L_195;
				MemberInfo_t* L_196 = V_5;
				V_7 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_196, FieldInfo_t_il2cpp_TypeInfo_var));
				FieldInfo_t* L_197 = V_7;
				if (L_197)
				{
					goto IL_03e5_1;
				}
			}
			{
				MemberInfo_t* L_198 = V_5;
				V_8 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_198, PropertyInfo_t_il2cpp_TypeInfo_var));
				PropertyInfo_t* L_199 = V_8;
				if (L_199)
				{
					goto IL_03f5_1;
				}
			}
			{
				goto IL_0405_1;
			}

IL_03e5_1:
			{
				FieldInfo_t* L_200 = V_7;
				FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF L_201;
				memset((&L_201), 0, sizeof(L_201));
				FieldMember__ctor_mA6F2BB809BD42F26804E1E9A78B80ECA6C65FF03((&L_201), L_200, NULL);
				FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF L_202 = L_201;
				RuntimeObject* L_203 = Box(FieldMember_tFAEBD5181D8BB7C912174317D5AAE15D23B378BF_il2cpp_TypeInfo_var, &L_202);
				V_6 = (RuntimeObject*)L_203;
				goto IL_040b_1;
			}

IL_03f5_1:
			{
				PropertyInfo_t* L_204 = V_8;
				PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 L_205;
				memset((&L_205), 0, sizeof(L_205));
				PropertyMember__ctor_m0B727AF7D87194ED8EA453CC4CF01A10563E2334((&L_205), L_204, NULL);
				PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984 L_206 = L_205;
				RuntimeObject* L_207 = Box(PropertyMember_t4A07D86E6B1554D28A1679F276FA9F9A6E1FD984_il2cpp_TypeInfo_var, &L_206);
				V_6 = (RuntimeObject*)L_207;
				goto IL_040b_1;
			}

IL_0405_1:
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_208 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_208, NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_208, method);
			}

IL_040b_1:
			{
				MethodInfo_t* L_209 = __this->___m_CreatePropertyMethod;
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_210 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_211 = L_210;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
				CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				Type_t* L_213;
				L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
				ArrayElementTypeCheck (L_211, L_213);
				(L_211)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_213);
				TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_214 = L_211;
				RuntimeObject* L_215 = V_6;
				Type_t* L_216;
				L_216 = InterfaceFuncInvoker0< Type_t* >::Invoke(2, IMemberInfo_tE969885901ACDD1986A2E40FCAA9B6ECF6E052E9_il2cpp_TypeInfo_var, L_215);
				ArrayElementTypeCheck (L_214, L_216);
				(L_214)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_216);
				MethodInfo_t* L_217;
				L_217 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(41, L_209, L_214);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_218 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_219 = L_218;
				RuntimeObject* L_220 = V_6;
				ArrayElementTypeCheck (L_219, L_220);
				(L_219)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_220);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_221 = L_219;
				ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79* L_222 = V_0;
				ArrayElementTypeCheck (L_221, L_222);
				(L_221)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_222);
				RuntimeObject* L_223;
				L_223 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_217, __this, L_221, NULL);
			}

IL_0449_1:
			{
				RuntimeObject* L_224 = V_4;
				bool L_225;
				L_225 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_224);
				if (L_225)
				{
					goto IL_03c0_1;
				}
			}
			{
				goto IL_0463;
			}
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0463:
	{
		ReflectedPropertyBag_1_tE1C09DA96513A538F766F89263E88809EE14AF79* L_226 = V_0;
		return (RuntimeObject*)L_226;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VisitParameters_get_IgnoreExceptions_mF9514BB955ADA04A779C4A6BFC1DE48D24AA01D5_inline (VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CIgnoreExceptionsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_CanBeNull_mC536F3FB49A36A263D61EC75BB688052E8BF5A5E_inline (Type_t* ___0_type, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		Type_t* L_0 = ___0_type;
		bool L_1;
		L_1 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_0, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Type_t* L_2 = ___0_type;
		Type_t* L_3;
		L_3 = Nullable_GetUnderlyingType_mA8FA7F61D3B8E56EB4E40378020FD2854838BDF8(L_2, NULL);
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, (Type_t*)NULL, NULL);
		return L_4;
	}

IL_0015:
	{
		return (bool)1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_Path_m8E3F004534B73D33C70C3BD20729F5987F11627B_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___0_value, const RuntimeMethod* method) 
{
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0 = ___0_value;
		__this->___U3CPathU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part0))->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part0))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part1))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part1))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part2))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part2))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part3))->___m_Name), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U3CPathU3Ek__BackingField))->___m_Part3))->___m_Key), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CPathU3Ek__BackingField))->___m_AdditionalParts), (void*)NULL);
		#endif
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PathVisitor_get_ReturnCode_m900403F09B0392B4D8C2E2E0EBD06148FCFA2734_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReturnCodeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PathVisitor_set_ReadonlyVisit_m852F4CA7A95317B2AA5CBC9AB914037FC5A0CABD_inline (PathVisitor_tCD0947C41CDBDB774D22D560E5FFA01EF61C4446* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CReadonlyVisitU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TypeTraits_IsObject_mB3331A88354E72D9F30BF753227E6855518DCA7F_inline (Type_t* ___0_type, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		Type_t* L_0 = ___0_type;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0 = ((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2;
		L_2 = EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ObjectPool_1_Get_m6033387D88EF9D1AD81A89F3045733BC4B98073D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) 
{
	Il2CppSharedGenericObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B7_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B6_0 = NULL;
	{
		Il2CppSharedGenericObject* L_0 = __this->___m_FreshlyReleased;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		Il2CppSharedGenericObject* L_1 = __this->___m_FreshlyReleased;
		V_0 = L_1;
		Il2CppSharedGenericObject** L_2 = (Il2CppSharedGenericObject**)(&__this->___m_FreshlyReleased);
		il2cpp_codegen_initobj(L_2, sizeof(Il2CppSharedGenericObject*));
		goto IL_0074;
	}

IL_0022:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_3 = __this->___m_List;
		int32_t L_4;
		L_4 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_004d;
		}
	}
	{
		Func_1_t566D4A654882E282E54CDC3A001E05486F913903* L_5 = __this->___m_CreateFunc;
		Il2CppSharedGenericObject* L_6;
		L_6 = Func_1_Invoke_m201DDBB72CE38673C89C22034EC8779981D83E6D(L_5, NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline(__this, NULL);
		V_1 = L_7;
		int32_t L_8 = V_1;
		ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline(__this, ((int32_t)il2cpp_codegen_add(L_8, 1)), NULL);
		goto IL_0074;
	}

IL_004d:
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_9 = __this->___m_List;
		int32_t L_10;
		L_10 = List_1_get_Count_m9832942FE310479E64D9D0D23F29C65305BE1622_inline(L_9, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_11 = __this->___m_List;
		int32_t L_12 = V_2;
		Il2CppSharedGenericObject* L_13;
		L_13 = List_1_get_Item_m02336594E8F76D7313E2BCB7A3ED5ABD13B4D515(L_11, L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		V_0 = L_13;
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_14 = __this->___m_List;
		int32_t L_15 = V_2;
		List_1_RemoveAt_m36F68EA689DB109415094085A496D5EA21E2F23C(L_14, L_15, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
	}

IL_0074:
	{
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_16 = __this->___m_ActionOnGet;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_17 = L_16;
		if (L_17)
		{
			G_B7_0 = L_17;
			goto IL_0080;
		}
		G_B6_0 = L_17;
	}
	{
		goto IL_0086;
	}

IL_0080:
	{
		Il2CppSharedGenericObject* L_18 = V_0;
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5(G_B7_0, L_18, NULL);
	}

IL_0086:
	{
		Il2CppSharedGenericObject* L_19 = V_0;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m3183E8F3194884123A027D720D37F341AF367E48_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, Il2CppSharedGenericObject* ___0_element, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B2_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B1_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B9_0 = NULL;
	Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* G_B8_0 = NULL;
	{
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_0 = __this->___m_ActionOnRelease;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
		G_B1_0 = L_1;
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		Il2CppSharedGenericObject* L_2 = ___0_element;
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5(G_B2_0, L_2, NULL);
	}

IL_0012:
	{
		Il2CppSharedGenericObject* L_3 = __this->___m_FreshlyReleased;
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		Il2CppSharedGenericObject* L_4 = ___0_element;
		__this->___m_FreshlyReleased = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FreshlyReleased), (void*)L_4);
		return;
	}

IL_0027:
	{
		int32_t L_5;
		L_5 = ObjectPool_1_get_CountInactive_m40351B6BE62E0944A0813C07869822EC0D1E8D26(__this, NULL);
		int32_t L_6 = __this->___m_MaxSize;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0042;
		}
	}
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_7 = __this->___m_List;
		Il2CppSharedGenericObject* L_8 = ___0_element;
		List_1_Add_m0CE6E39234ED33F5195AABC8029D06D4756C75C1_inline(L_7, L_8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		return;
	}

IL_0042:
	{
		int32_t L_9;
		L_9 = ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_inline(__this, NULL);
		V_0 = L_9;
		int32_t L_10 = V_0;
		ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_inline(__this, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), NULL);
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_11 = __this->___m_ActionOnDestroy;
		Action_1_tF0E1373A391479E6E235E0D82CE1EF1DE6B6C505* L_12 = L_11;
		if (L_12)
		{
			G_B9_0 = L_12;
			goto IL_005d;
		}
		G_B8_0 = L_12;
	}
	{
		return;
	}

IL_005d:
	{
		Il2CppSharedGenericObject* L_13 = ___0_element;
		Action_1_Invoke_mDB8F7C7381C08B4DCE4E409D2FA4073BC17F90B5(G_B9_0, L_13, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountAll_m8372ACA3A976C3FCB45CD77A0AEF0BDA496EBB6D_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CCountAllU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ObjectPool_1_set_CountAll_m6E7C5E741DCB73BD743FC27BACBE1886F4414440_gshared_inline (ObjectPool_1_tC6F0B8E0BAAEC07474AABA8496261838C79CE1F3* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CCountAllU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_10 = L_9;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) < ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = V_1;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		il2cpp_codegen_memcpy((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)), L_9, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6), (void**)(L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)), (void*)L_9);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E): *(void**)L_10), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		return;
	}
}
