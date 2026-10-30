#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Dictionary_2_t6B4B40DA71BA0031F5736DF4459253299D8AF5F2;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC;
struct IEnumerator_1_t74105E6C32CA7AC4F4202BB870BF99B1C95BA2DE;
struct ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t74105E6C32CA7AC4F4202BB870BF99B1C95BA2DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0166BFBEA755AEC68D894E2718E0F43AC621B48E;
IL2CPP_EXTERN_C String_t* _stringLiteral19710C29C28F677ED5E80B5C8FFB9B9F5CD6AB3A;
IL2CPP_EXTERN_C String_t* _stringLiteral3557380BE9E7E98862A3A71F25DC349E0384F4E2;
IL2CPP_EXTERN_C String_t* _stringLiteral3D3D9CC7DBA60B04E5E5DF1904398CBAA8E8C8BB;
IL2CPP_EXTERN_C String_t* _stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468;
IL2CPP_EXTERN_C String_t* _stringLiteral6F04E86C5302630688259CCA7C31D9B8620B26C3;
IL2CPP_EXTERN_C String_t* _stringLiteral7D46E972920967646C169FAEFE29793480D87717;
IL2CPP_EXTERN_C String_t* _stringLiteral8F08B108AE90A47E2C4B3A0DC16321A36C9AFB54;
IL2CPP_EXTERN_C String_t* _stringLiteralC9DDDC1BB86D19164517493AC7ED9674192AFD37;
IL2CPP_EXTERN_C String_t* _stringLiteralE518C71E95CD77DE3B5BAA3682242D4FFE4F9D1E;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralECD68B5596F20DCD97A00D59FC408D26A9E78960;
IL2CPP_EXTERN_C String_t* _stringLiteralEF83955BF61125FC832C506DE4DB5985B784A2C0;
IL2CPP_EXTERN_C String_t* _stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95  : public RuntimeObject
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ____items;
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
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct MouseEventsHelper_tCA2B2B4B36A3F80CE118DECAE91AB7658A68437F  : public RuntimeObject
{
};
struct NativeArrayExtensions_t9A6F3FA904DDB64CC47FB8CECF1EE92FAFD47BA2  : public RuntimeObject
{
};
struct NativeArrayExtensions_t36BA4CCABADE7EC33970CCCB625455C3D6F85372  : public RuntimeObject
{
};
struct NativeArrayHelpers_t427C0EEA0692067215F4A74736B499D53C42AA0A  : public RuntimeObject
{
};
struct NativeArrayUnsafeUtility_tB4D8A974D44EE6F4B2C32D5D19861FB081F88FCE  : public RuntimeObject
{
};
struct NativeListExtensions_t703C0674A863EE05A97019B7CF6316AB98DE8817  : public RuntimeObject
{
};
struct NativeListExtensions_tBD19D126EAE99E4110644011F6C94313889B1925  : public RuntimeObject
{
};
struct NativeListUnsafeUtility_t76856F085F46022FE3879DD4EE833AE8FE1EFB19  : public RuntimeObject
{
};
struct NativeParallelHashMapExtensions_tF97CECE6CF8C190E9591A03824155DAF8142CF48  : public RuntimeObject
{
};
struct NativeParallelMultiHashMapExtensions_t2BF9A035AB74022218899A577154652BC4EB5DF3  : public RuntimeObject
{
};
struct NativeReferenceUnsafeUtility_tD55902920E8C42D91C1C498291D3A32E43CBD51B  : public RuntimeObject
{
};
struct NativeSliceExtensions_tA2B0303180122826FD5887061B8DBA5F342A726B  : public RuntimeObject
{
};
struct NativeSliceUnsafeUtility_tA7CBE88BA4246367450DB167A878F2FA408E10CD  : public RuntimeObject
{
};
struct NativeSortExtension_t69298E80751CF0D0DB847C79277B6E0A2C92A4F2  : public RuntimeObject
{
};
struct NoAllocHelpers_t5C2B43061F00675B5AD0044C341D0279E4F5F1ED  : public RuntimeObject
{
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
struct DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 
{
	union
	{
		struct
		{
		};
		uint8_t DefaultComparer_1_t4A26F5A7B2EFA2BDABB2F6FA752896E1F6506114__padding[1];
	};
};
struct NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B 
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* ___m_Data;
};
struct NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 
{
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___m_ListData;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
typedef Il2CppFullySharedGenericStruct SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E;
typedef Il2CppFullySharedGenericStruct SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A;
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829;
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
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
	bool ___U3CisEligibleToReceiveFocusFromDisabledChildU3Ek__BackingField;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4 
{
	union
	{
		struct
		{
		};
		uint8_t ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4__padding[1];
	};
};
struct ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83 
{
	union
	{
		struct
		{
		};
		uint8_t ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83__padding[1];
	};
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744 
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744_marshaled_pinvoke
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744_marshaled_com
{
	Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049* ___m_Record;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF 
{
	int32_t ___m_Id;
};
struct UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 
{
	int32_t ___Index;
	int32_t ___Version;
};
struct UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 
{
	uint8_t* ___values;
	uint8_t* ___keys;
	uint8_t* ___next;
	uint8_t* ___buckets;
	int32_t ___bucketCapacityMask;
};
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
	};
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
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
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC 
{
	uint8_t* ___Ptr;
	Il2CppFullySharedGenericStruct* ___Keys;
	int32_t* ___Next;
	int32_t* ___Buckets;
	int32_t ___Count;
	int32_t ___Capacity;
	int32_t ___Log2MinGrowth;
	int32_t ___BucketCapacity;
	int32_t ___AllocatedIndex;
	int32_t ___FirstFreeIdx;
	int32_t ___SizeOfTValue;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 
{
	void* ___m_Data;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 
{
	NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___Data;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___Comp;
};
typedef Il2CppFullySharedGenericStruct SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A;
struct SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD 
{
	Il2CppFullySharedGenericStruct* ___Data;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___Comp;
	int32_t ___Length;
};
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 
{
	Il2CppFullySharedGenericStruct* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
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
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
};
struct NativeBitArray_t7D47863D3DFF1D41EE133D5107FFAF0D697BC00E 
{
	UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* ___m_BitArray;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_Allocator;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropagationPhase_tF3BE8BF5ED45FC52A828B7B6F078B64F01FAE6D6 
{
	int32_t ___value__;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4 
{
	uint64_t* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC 
{
	intptr_t ___Pointer;
	int32_t ___Items;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds;
	intptr_t ___Count;
	uint8_t ___Data;
};
struct EventPropagation_t024AF56F7A787C03AA21B065B624553EF52E7B83 
{
	int32_t ___value__;
};
struct LifeCycleStatus_tEE500629F5431B574B8047EB70864747D348D38C 
{
	int32_t ___value__;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeParallelHashMap_2_t75E2745DBFEAC14A7B7306A89FBFB3B562CEA497 
{
	UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 ___m_HashMapData;
};
struct NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 
{
	UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F ___m_MultiHashMapData;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 
{
	ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 ____pointer;
	int32_t ____length;
};
struct Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4 
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC ___m_Data;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C  : public RuntimeObject
{
	int32_t ___U3CeventCategoriesU3Ek__BackingField;
	int64_t ___U3CtimestampU3Ek__BackingField;
	uint64_t ___U3CeventIdU3Ek__BackingField;
	uint64_t ___U3CtriggerEventIdU3Ek__BackingField;
	int32_t ___U3CpropagationU3Ek__BackingField;
	int32_t ___U3ClifeCycleStatusU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementTargetU3Ek__BackingField;
	int32_t ___U3CpropagationPhaseU3Ek__BackingField;
	RuntimeObject* ___m_CurrentTarget;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ImguiEvent;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CoriginalMousePositionU3Ek__BackingField;
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
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
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
struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 
{
	Range_tB5BAD1274CA0989FC97B0093B4149EF3CD5F21AC ___Range;
	int32_t ___BytesPerItem;
	int32_t ___AllocatedItems;
	uint8_t ___Log2Alignment;
	uint8_t ___Padding0;
	uint16_t ___Padding1;
	uint32_t ___Padding2;
};
struct Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Array;
	int32_t ___m_MaxSize;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Array;
	int32_t ___m_MaxSize;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Item1;
	int32_t ___Item2;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED 
{
	String_t* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CvalueU3Ek__BackingField;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CvalueU3Ek__BackingField;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CvalueU3Ek__BackingField;
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
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
};
struct UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E 
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___m_PropertyPath;
	String_t* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_pinvoke ___m_PropertyPath;
	char* ___m_Path;
};
struct BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79_marshaled_com ___m_PropertyPath;
	Il2CppChar* ___m_Path;
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Nodes;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Configs;
};
struct NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 
{
	UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 ___m_Stream;
};
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	String_t* ____objectName;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 
{
	NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 ___Container;
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* ___List;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	StyleClassList_tCA2E8910D5BCCB7029CF852421F1E07E8EDF9744 ___m_ClassList;
	Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35* ___m_PropertyBag;
	int32_t ___m_Flags;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___renderData;
	RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2* ___nestedRenderData;
	int32_t ___insertionIndex;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	String_t* ___m_ViewDataKey;
	int32_t ___m_LanguageDirection;
	LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE ___m_LayoutNode;
	VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3* ___m_TransformDataPTr;
	VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0* ___m_SelectorDataPtr;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	RuntimeObject* ___m_DataSource;
	PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55* ___m_DataSourcePath;
	int32_t ___m_TrickleDownHandleEventCategories;
	int32_t ___m_BubbleUpHandleEventCategories;
	int32_t ___m_BubbleUpEventCallbackCategories;
	int32_t ___m_TrickleDownEventCallbackCategories;
	int32_t ___m_EventInterestSelfCategories;
	int32_t ___m_CachedEventInterestParentCategories;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventInterests;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B* ___m_MeshModifiers;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45* ___resolvedStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_StaticFields
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___s_emptyArray;
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
struct ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_StaticFields
{
	int32_t ___kMaxArea;
	int32_t ___kMaxEdgeCount;
	int32_t ___kMaxIndexCount;
	int32_t ___kMaxVertexCount;
	int32_t ___kMaxTriangleCount;
	int32_t ___kMaxRefineIterations;
	int32_t ___kMaxSmoothenIterations;
	float ___kIncrementAreaFactor;
};
struct ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_StaticFields
{
	int32_t ___kMaxArea;
	int32_t ___kMaxEdgeCount;
	int32_t ___kMaxIndexCount;
	int32_t ___kMaxVertexCount;
	int32_t ___kMaxTriangleCount;
	int32_t ___kMaxRefineIterations;
	int32_t ___kMaxSmoothenIterations;
	float ___kIncrementAreaFactor;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_StaticFields
{
	int64_t ___s_LastTypeId;
	uint64_t ___s_NextEventId;
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
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ___disabledUssClassNameUnique;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	int32_t ___s_FinalizerCount;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___childCountProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___contentRectProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourcePathProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___dataSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___disablePlayModeTintProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledInHierarchyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___enabledSelfProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___layoutProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___languageDirectionProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___localBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___nameProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___panelProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___pickingModeProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___styleSheetsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___tooltipProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___usageHintsProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___userDataProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___viewDataKeyProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visibleProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___visualTreeAssetSourceProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldBoundProperty;
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___worldTransformProperty;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m0371F16C5C917BEFC98EE2543E82DB386E4E117A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_get_Item_m41E3596F9E8D0B496073753DBB17AEFC4E770582_fshared (Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m7A047D0293849EC8C78740E2DE5E8574136F188B_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_1_get_Item_m4B6EECC3E6603139E5A91FED7AA091CD329A6029_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1_gshared (RuntimeObject* ___0_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_mousePosition, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 PrimitiveValue_From_TisIl2CppFullySharedGenericStruct_m6846A493CC72CBD82D945883B6E21C3D2A6A18F2_fshared (Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m91DB739957BD36F24D30A1D26BE5B9B8E4F5C072_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeHashSet_1_ToNativeArray_m1F983BA2036D1FB556C421017F8E06EFA51F6E49_fshared (NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeHashSet_1_ToNativeArray_m8AEAC3278128DBD9AC2E8BEAB88D2DF0FE66DA1B_fshared (UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* AllocatorManager_AllocateStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m24FC981A18EAB95A996CFC6337FAB957062F81E1_fshared (Il2CppFullySharedGenericStruct* ___0_t, Il2CppFullySharedGenericStruct ___1_u, int32_t ___2_items, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_fshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_op_Inequality_m473523B85EC3F582AF2F86773108D5AF3E6B9D0C_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_left, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_right, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_GetPinnableReference_mBC5955DDAAEA56F142B5C441DB6FBD96F2AB6ADB_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mBBD877284D88BD7460DE885E06B863B2E9F3A6D6_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___1_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m26517D1B620B6BB143F8CDBCBC9299D6C9AA512F_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___1_other, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_fshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_fshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeParallelMultiHashMap_2_GetKeyArray_m6A9BA939DBFA9AA420DB474C8EE58430DCBA2B04_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeParallelMultiHashMap_2_GetKeyArray_mBBB8161BE1A90E1DB8F155DEF02C167BBF5FBB2B_fshared (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelMultiHashMap_2_Remove_TisIl2CppFullySharedGenericStruct_mE775E4665DF2FE5320D684E013BC68785FC3FE84_fshared (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B_fshared (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mD435A28E9461F36F9490F8E0CF60763FE5B5EED3_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t* ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2__hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m201F2E16B83FD461CE57913123761F986C0F912D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF75387D15CB11681384340B94B35E7AF9D80662F_fshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, Il2CppFullySharedGenericStruct ___2_comp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m08A07FE4FC0572B5AD96D95F043F26AD8020A463_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisIl2CppFullySharedGenericStruct_mF266365A1A83D3A8671F9B001353E6658E321E57_fshared (Il2CppFullySharedGenericStruct ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m418267CD08E32A95A5829724C5BCD60D35C261E8_fshared (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_fshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) ;

inline void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m0371F16C5C917BEFC98EE2543E82DB386E4E117A (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m0371F16C5C917BEFC98EE2543E82DB386E4E117A_fshared)(___0_src, ___1_srcIndex, ___2_dst, ___3_dstIndex, ___4_length, method);
}
inline void NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59_fshared)(___0_src, ___1_srcIndex, ___2_dst, ___3_dstIndex, ___4_length, method);
}
inline void Array_1_get_Item_m41E3596F9E8D0B496073753DBB17AEFC4E770582 (Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Array_1_get_Item_m41E3596F9E8D0B496073753DBB17AEFC4E770582_fshared)((Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01*)__this, ___0_index, il2cppRetVal, method);
}
inline void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, il2cppRetVal, method);
}
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline)(___0_destination, ___1_index, (Il2CppFullySharedGenericAny)___2_value, method);
}
inline void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m7A047D0293849EC8C78740E2DE5E8574136F188B (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m7A047D0293849EC8C78740E2DE5E8574136F188B_fshared)(___0_src, ___1_srcIndex, ___2_dst, ___3_dstIndex, ___4_length, method);
}
inline void Array_1_get_Item_m4B6EECC3E6603139E5A91FED7AA091CD329A6029 (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Array_1_get_Item_m4B6EECC3E6603139E5A91FED7AA091CD329A6029_fshared)((Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D*)__this, ___0_index, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1 (RuntimeObject* ___0_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_mousePosition, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1_gshared)(___0_triggerEvent, ___1_mousePosition, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2 (int32_t ___0_initialCapacity, const RuntimeMethod* method) ;
inline void List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline int32_t List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092 (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool_Release_mAF4ED38CC4F9A6E58B06F4B0BD13611F7DECBCFA (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___0_elements, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedValue_ApplyToObject_m9B5513EAC952611D46852EA28EEA151A1D870DBD (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* __this, RuntimeObject* ___0_instance, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedValue_set_name_mCF3BCACF7F87CF0C64AB3E4547BA5876ADF1940C_inline (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 PrimitiveValue_From_TisIl2CppFullySharedGenericStruct_m6846A493CC72CBD82D945883B6E21C3D2A6A18F2 (Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	return ((  PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 (*) (Il2CppFullySharedGenericStruct, const RuntimeMethod*))PrimitiveValue_From_TisIl2CppFullySharedGenericStruct_m6846A493CC72CBD82D945883B6E21C3D2A6A18F2_fshared)(___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedValue_set_value_mD96CEA0EB28C32139F47AEF613FE40B6DD7A5D7D_inline (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* __this, PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___0_value, const RuntimeMethod* method) ;
inline int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline)(__this, method);
}
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0_fshared)(__this, method);
}
inline int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96 (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96_fshared)(___0_roSpan, ___1_value, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43 (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43_fshared)(__this, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950 (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*, const RuntimeMethod*))ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950_fshared)(__this, method);
}
inline int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m91DB739957BD36F24D30A1D26BE5B9B8E4F5C072 (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m91DB739957BD36F24D30A1D26BE5B9B8E4F5C072_fshared)(___0_ptr, ___1_length, ___2_value, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98 (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98_fshared)(__this, method);
}
inline void NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8_fshared)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeHashSet_1_ToNativeArray_m1F983BA2036D1FB556C421017F8E06EFA51F6E49 (NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeHashSet_1_ToNativeArray_m1F983BA2036D1FB556C421017F8E06EFA51F6E49_fshared)(__this, ___0_allocator, method);
}
inline void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared)(__this, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeHashSet_1_ToNativeArray_m8AEAC3278128DBD9AC2E8BEAB88D2DF0FE66DA1B (UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeHashSet_1_ToNativeArray_m8AEAC3278128DBD9AC2E8BEAB88D2DF0FE66DA1B_fshared)(__this, ___0_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48 (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* __this, String_t* ___0_objectName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AllocatorManager_Free_mB8AE9C4CB989A9121F4E3F2E6C7781076DFB3025 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_handle, void* ___1_pointer, const RuntimeMethod* method) ;
inline int32_t ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
inline Il2CppFullySharedGenericStruct* ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_fshared_inline)(__this, ___0_index, method);
}
inline void ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, void*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline)(__this, ___0_pointer, ___1_length, method);
}
inline void* AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisIl2CppFullySharedGenericStruct_m89858AB1D0D222803F186CBFDE201D8104D72F9F (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* ___0_t, Il2CppFullySharedGenericStruct ___1_u, int32_t ___2_items, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct, int32_t, const RuntimeMethod*))AllocatorManager_AllocateStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m24FC981A18EAB95A996CFC6337FAB957062F81E1_fshared)((Il2CppFullySharedGenericStruct*)___0_t, ___1_u, ___2_items, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4 (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1 (void* ___0_destination, int64_t ___1_size, const RuntimeMethod* method) ;
inline void* AllocatorManager_AllocateStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m24FC981A18EAB95A996CFC6337FAB957062F81E1 (Il2CppFullySharedGenericStruct* ___0_t, Il2CppFullySharedGenericStruct ___1_u, int32_t ___2_items, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct, int32_t, const RuntimeMethod*))AllocatorManager_AllocateStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m24FC981A18EAB95A996CFC6337FAB957062F81E1_fshared)(___0_t, ___1_u, ___2_items, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_fshared_inline)(___0_nativeArray, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
inline Il2CppFullySharedGenericStruct* UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_fshared_inline)(___0_ptr, ___1_index, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline)(___0_nativeSlice, method);
}
inline int32_t NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90 (void* ___0_destination, int32_t ___1_destinationStride, void* ___2_source, int32_t ___3_sourceStride, int32_t ___4_elementSize, int32_t ___5_count, const RuntimeMethod* method) ;
inline bool NativeArray_1_op_Inequality_m473523B85EC3F582AF2F86773108D5AF3E6B9D0C (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_left, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArray_1_op_Inequality_m473523B85EC3F582AF2F86773108D5AF3E6B9D0C_fshared)(___0_left, ___1_right, method);
}
inline bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6_fshared)(___0_src, ___1_dst, ___2_length, method);
}
inline Il2CppFullySharedGenericStruct* Span_1_GetPinnableReference_m5624821135CF41406465DA067B72E364926DB271 (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))Span_1_GetPinnableReference_mBC5955DDAAEA56F142B5C441DB6FBD96F2AB6ADB_fshared)(__this, method);
}
inline int32_t Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline bool NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_other, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7_fshared)(___0_container, ___1_other, method);
}
inline bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mBBD877284D88BD7460DE885E06B863B2E9F3A6D6 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___1_other, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mBBD877284D88BD7460DE885E06B863B2E9F3A6D6_fshared)(___0_container, ___1_other, method);
}
inline bool UnsafeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m26517D1B620B6BB143F8CDBCBC9299D6C9AA512F (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___1_other, const RuntimeMethod* method)
{
	return ((  bool (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))UnsafeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m26517D1B620B6BB143F8CDBCBC9299D6C9AA512F_fshared)(___0_container, ___1_other, method);
}
inline int32_t NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_fshared_inline)(__this, method);
}
inline Il2CppFullySharedGenericStruct* NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179 (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179_fshared)(__this, method);
}
inline UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_fshared_inline)(__this, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeParallelMultiHashMap_2_GetKeyArray_m6A9BA939DBFA9AA420DB474C8EE58430DCBA2B04 (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeParallelMultiHashMap_2_GetKeyArray_m6A9BA939DBFA9AA420DB474C8EE58430DCBA2B04_fshared)(__this, ___0_allocator, method);
}
inline void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5_fshared)(___0_container, method);
}
inline int32_t NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB_fshared)(___0_array, method);
}
inline void ValueTuple_2__ctor_m90E20F3BDB456A9E9F0690ECCE21B5796934682A (ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_item1, int32_t ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_fshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, (Il2CppFullySharedGenericAny)&___0_item1, (Il2CppFullySharedGenericAny)&___1_item2, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeParallelMultiHashMap_2_GetKeyArray_mBBB8161BE1A90E1DB8F155DEF02C167BBF5FBB2B (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelMultiHashMap_2_GetKeyArray_mBBB8161BE1A90E1DB8F155DEF02C167BBF5FBB2B_fshared)(__this, ___0_allocator, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 UnsafeParallelHashMapData_GetBucketData_m0A5859EBE368E2E2BBBD321F9A7E28AEBF0EDDC3 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* __this, const RuntimeMethod* method) ;
inline void UnsafeParallelMultiHashMap_2_Remove_TisIl2CppFullySharedGenericStruct_mE775E4665DF2FE5320D684E013BC68785FC3FE84 (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, Il2CppFullySharedGenericStruct ___0_key, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, const RuntimeMethod*))UnsafeParallelMultiHashMap_2_Remove_TisIl2CppFullySharedGenericStruct_mE775E4665DF2FE5320D684E013BC68785FC3FE84_fshared)((UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*)__this, ___0_key, ___1_value, method);
}
inline void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct, const RuntimeMethod*))NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, ___1_value, method);
}
inline void UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* __this, int32_t ___0_capacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B_fshared)(__this, ___0_capacity, ___1_allocator, method);
}
inline void NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A_fshared)(__this, ___0_array, method);
}
inline void NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D_fshared)(__this, ___0_array, ___1_start, method);
}
inline void NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF_fshared)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253 (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_slice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, int32_t, int32_t, const RuntimeMethod*))NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253_fshared)(__this, ___0_slice, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
inline int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD_fshared)(___0_roSpan, ___1_value, (Il2CppFullySharedGenericAny)&___2_comp, method);
}
inline int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mEAE99474042D7BD88BE25CEA29554F30CC6DDBAD (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mD435A28E9461F36F9490F8E0CF60763FE5B5EED3_fshared)(___0_container, ___1_value, (Il2CppFullySharedGenericAny)&___2_comp, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400 (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400_fshared)(__this, method);
}
inline int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mB5FB2889BCE2830E30498F3DE5DFE26901C0C878 (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___3_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF_fshared)(___0_ptr, ___1_length, ___2_value, (Il2CppFullySharedGenericAny)&___3_comp, method);
}
inline int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD_fshared)(___0_roSpan, ___1_value, ___2_comp, method);
}
inline int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline)(__this, method);
}
inline int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF_fshared)(___0_ptr, ___1_length, ___2_value, ___3_comp, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
inline void NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756_fshared)(___0_array, ___1_i, ___2_n, ___3_lo, ___4_comp, method);
}
inline void NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF_fshared)(___0_array, ___1_lhs, ___2_rhs, method);
}
inline void NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921 (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t* ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, int32_t*, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921_fshared)(___0_array, ___1_i, ___2_n, ___3_lo, ___4_comp, method);
}
inline void NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24_fshared)(___0_array, ___1_lhs, ___2_rhs, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED (int32_t ___0_value, const RuntimeMethod* method) ;
inline void NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8_fshared)(___0_array, ___1_lo, ___2_hi, ___3_depth, ___4_comp, method);
}
inline void NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2 (void* ___0_array, int32_t* ___1_lo, int32_t* ___2__hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, int32_t*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2_fshared)(___0_array, ___1_lo, ___2__hi, ___3_depth, ___4_comp, method);
}
inline void NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322 (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322_fshared)(___0_array, ___1_lhs, ___2_rhs, ___3_comp, method);
}
inline void NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471 (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline void NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8 (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline int32_t NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909 (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t*, int32_t*, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline void NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C_fshared)(___0_array, ___1_lhs, ___2_rhs, ___3_comp, method);
}
inline void NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline void NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline int32_t NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278 (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278_fshared)(___0_array, ___1_lo, ___2_hi, ___3_comp, method);
}
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259_fshared)(__this, method);
}
inline void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m457C521397981CA0D0A024FF470BA91607194EAB (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___1_comp, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared)(___0_span, (Il2CppFullySharedGenericAny)&___1_comp, method);
}
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3 (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3_fshared)(__this, method);
}
inline void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88 (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88_fshared)(___0_span, method);
}
inline void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m33CF6A0610F6ED93F84E57A1B06B8458C99A2369 (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___1_comp, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m201F2E16B83FD461CE57913123761F986C0F912D_fshared)(___0_container, (Il2CppFullySharedGenericAny)&___1_comp, method);
}
inline Il2CppFullySharedGenericStruct* Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, int32_t, const RuntimeMethod*))Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_fshared_inline)(__this, ___0_index, method);
}
inline void NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m6F39B3D7410D7450329825AF014077A33502AB26 (void* ___0_array, int32_t ___1_length, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756_fshared)(___0_array, ___1_length, (Il2CppFullySharedGenericAny)&___2_comp, method);
}
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417 (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417_fshared)(__this, method);
}
inline void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m953753EFB68B3528E6B4381ECB390720B5ACDD39 (void* ___0_array, int32_t ___1_length, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_fshared)(___0_array, ___1_length, (Il2CppFullySharedGenericAny)&___2_comp, method);
}
inline void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared)(___0_span, ___1_comp, method);
}
inline void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52, const RuntimeMethod*))NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_fshared_inline)(___0_nativeSlice, method);
}
inline void NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756 (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756_fshared)(___0_array, ___1_length, ___2_comp, method);
}
inline void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_fshared)(___0_array, ___1_length, ___2_comp, method);
}
inline void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mA1968F7F5487FC1290B528E1B4BBE208FD8FFEC3 (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericStruct, const RuntimeMethod*))NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF75387D15CB11681384340B94B35E7AF9D80662F_fshared)(___0_indices, ___1_values, (Il2CppFullySharedGenericStruct)&___2_comp, method);
}
inline void NativeSortExtension_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E_m0B2E37041303826C0FE97B765B159B5ADE62F5CD (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_span, SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E ___1_comp, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared)(il2cpp_codegen_cast_struct<Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316>(___0_span), (Il2CppFullySharedGenericAny)___1_comp, method);
}
inline SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m65B440AF43CC55536C485CAF2C68C83409E133DC (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___1_comp, const RuntimeMethod* method)
{
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD il2cppRetVal;
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*, const RuntimeMethod*))NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA_fshared)(___0_span, (Il2CppFullySharedGenericAny)&___1_comp, (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m49FAE04A2FA1528FE91ECA368358ABD62B40A69C (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___2_comp, const RuntimeMethod* method)
{
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD il2cppRetVal;
	((  void (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*, const RuntimeMethod*))NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2_fshared)(___0_ptr, ___1_length, (Il2CppFullySharedGenericAny)&___2_comp, (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*, const RuntimeMethod*))NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA_fshared)(___0_span, ___1_comp, il2cppRetVal, method);
}
inline void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2 (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericAny, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*, const RuntimeMethod*))NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2_fshared)(___0_ptr, ___1_length, ___2_comp, il2cppRetVal, method);
}
inline SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m529440F9811FE87B9175DE647132A34462413C2C (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 ___1_comp, const RuntimeMethod* method)
{
	SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 il2cppRetVal;
	((  void (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, Il2CppFullySharedGenericAny, SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*, const RuntimeMethod*))NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m08A07FE4FC0572B5AD96D95F043F26AD8020A463_fshared)(___0_container, (Il2CppFullySharedGenericAny)&___1_comp, (SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeStream_AllocateBlock_mAD29C962FDE6B17A135737E09693B6FAB6E974AF (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* ___0_stream, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF (ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (Il2CppFullySharedGenericStruct, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisIl2CppFullySharedGenericStruct_mF266365A1A83D3A8671F9B001353E6658E321E57_fshared)((Il2CppFullySharedGenericStruct)&___0_jobData, ___1_dependsOn, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m418267CD08E32A95A5829724C5BCD60D35C261E8 (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))UnsafeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m418267CD08E32A95A5829724C5BCD60D35C261E8_fshared)(__this, ___0_allocator, method);
}
inline void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
inline void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline)(__this, ___0_array, ___1_start, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_fshared_inline)(__this, method);
}
inline int32_t List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF_fshared)(__this, method);
}
inline void List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB_fshared)(__this, ___0_value, method);
}
inline int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, il2cppRetVal, method);
}
inline void List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, ___1_value, method);
}
inline void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_fshared_inline)(___0_ptr, ___1_index, method);
}
inline int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m515F8E41C3B91F05F6FA52FB0F173AAE072219AE_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_StaticInit);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_src;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___1_dst;
		int32_t L_2 = ___2_length;
		CHECKED_LOCAL_INIT(ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_StaticInit,(ModuleHandle_t2F8BE4233858E78501EF0B4D650CECD9A6D5D9F4_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m0371F16C5C917BEFC98EE2543E82DB386E4E117A(L_0, 0, L_1, 0, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m0371F16C5C917BEFC98EE2543E82DB386E4E117A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_src;
		int32_t L_1 = ___1_srcIndex;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___2_dst;
		int32_t L_3 = ___3_dstIndex;
		int32_t L_4 = ___4_length;
		NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetEqual_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE0B5479E1566E740847AFB1A5ECD77DEDF474984_fshared (Array_1_t6B7799491F8633D7A2A3353B59A01AAC47D82A01 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tD25FB345044D3C134155EC690DA7DC459925EF3A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tA5C02707C38A3FC7AFFEEE02D5AD9B6C21FA4692 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tA5C02707C38A3FC7AFFEEE02D5AD9B6C21FA4692);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_U_tD25FB345044D3C134155EC690DA7DC459925EF3A);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	memset(V_4, 0, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	memset(G_B3_0, 0, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	memset(G_B2_0, 0, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	{
		V_0 = 0;
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0063;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))>>1));
		V_3 = (0.0f);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
		il2cpp_codegen_memcpy(L_3, V_4, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		if (L_4)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
			goto IL_0030;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B2_0, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
		il2cpp_codegen_memcpy(V_4, L_5, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_X_tDC9A2714056A0DE615BFF1CBE41EAEBCCEE3B55C);
	}

IL_0030:
	{
		int32_t L_6 = V_2;
		Array_1_get_Item_m41E3596F9E8D0B496073753DBB17AEFC4E770582((&___0_values), L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_8, ___2_check, SizeOf_U_tD25FB345044D3C134155EC690DA7DC459925EF3A);
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_10, L_9);
		InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_11, L_10.method,L_10.thisPtr, L_7, L_8, (&V_3));
		float L_12 = V_3;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_13 = V_2;
		return L_13;
	}

IL_0051:
	{
		float L_14 = V_3;
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		goto IL_0063;
	}

IL_005f:
	{
		int32_t L_16 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0063:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetEqual_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mFAFD6E5C4C5239EECB66D76E8A0D0BBC50941EF2_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t5367D96CCB13B6D8932AE1D78DE77609AD13984B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t8F71DFFB681815CAF23766214B6C948493D46548 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t8F71DFFB681815CAF23766214B6C948493D46548);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_U_t5367D96CCB13B6D8932AE1D78DE77609AD13984B);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	memset(V_4, 0, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	memset(G_B3_0, 0, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	memset(G_B2_0, 0, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	{
		V_0 = 0;
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0063;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))>>1));
		V_3 = (0.0f);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
		il2cpp_codegen_memcpy(L_3, V_4, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		if (L_4)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
			goto IL_0030;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B2_0, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
		il2cpp_codegen_memcpy(V_4, L_5, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t275A14E0DB3474F2E73A70FD1BB99DB3FAD3AD72);
	}

IL_0030:
	{
		int32_t L_6 = V_2;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_8, ___2_check, SizeOf_U_t5367D96CCB13B6D8932AE1D78DE77609AD13984B);
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_10, L_9);
		InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_11, L_10.method,L_10.thisPtr, L_7, L_8, (&V_3));
		float L_12 = V_3;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_13 = V_2;
		return L_13;
	}

IL_0051:
	{
		float L_14 = V_3;
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		goto IL_0063;
	}

IL_005f:
	{
		int32_t L_16 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0063:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetLower_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m801F695F16052D534842AE901C48AD507EA5744A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t597FE175164EAA1E1243E65C38A3DFE6CA054D50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t3ADF1E2B4330C3669F6188A92B74D663E2CC24AE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t3ADF1E2B4330C3669F6188A92B74D663E2CC24AE);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_U_t597FE175164EAA1E1243E65C38A3DFE6CA054D50);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	memset(V_5, 0, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	memset(G_B3_0, 0, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	memset(G_B2_0, 0, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	{
		V_0 = 0;
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0059;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))>>1));
		V_4 = (0.0f);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
		il2cpp_codegen_memcpy(L_4, V_5, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		if (L_5)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
			goto IL_0035;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	}
	{
		il2cpp_codegen_memcpy(L_6, G_B2_0, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
		il2cpp_codegen_memcpy(V_5, L_6, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_X_t1D3D9412D0C3C8D6C0CC5A012672696DE76BDE6B);
	}

IL_0035:
	{
		int32_t L_7 = V_3;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, ___2_check, SizeOf_U_t597FE175164EAA1E1243E65C38A3DFE6CA054D50);
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_11, L_10);
		bool L_13 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9, (&V_4));
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_14 = V_3;
		V_2 = L_14;
		int32_t L_15 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		goto IL_0059;
	}

IL_0055:
	{
		int32_t L_16 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0059:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_19 = V_2;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetUpper_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m126533B957C561D9061C0C11D91F3E1133BE0134_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tBFD60B805E7DE212EFBB8FBDB8422D06BEA6B9CC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tB42A37CEC8DFB947E2F6757BA1E0D9E1F317352E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tB42A37CEC8DFB947E2F6757BA1E0D9E1F317352E);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_U_tBFD60B805E7DE212EFBB8FBDB8422D06BEA6B9CC);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	memset(V_5, 0, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	memset(G_B3_0, 0, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	memset(G_B2_0, 0, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	{
		V_0 = 0;
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		goto IL_0059;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))>>1));
		V_4 = (0.0f);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
		il2cpp_codegen_memcpy(L_4, V_5, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		if (L_5)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
			goto IL_0035;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	}
	{
		il2cpp_codegen_memcpy(L_6, G_B2_0, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
		il2cpp_codegen_memcpy(V_5, L_6, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_X_tD2AC491EBE5C9CC43A6BC2EEBBD0461BCF95A98A);
	}

IL_0035:
	{
		int32_t L_7 = V_3;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, ___2_check, SizeOf_U_tBFD60B805E7DE212EFBB8FBDB8422D06BEA6B9CC);
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_11, L_10);
		bool L_13 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9, (&V_4));
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_14 = V_3;
		V_2 = L_14;
		int32_t L_15 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		goto IL_0059;
	}

IL_0055:
	{
		int32_t L_16 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0059:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_19 = V_2;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m5F9C41F661EFDE4520658576B627EF7645AFAC2B_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
	const Il2CppFullySharedGenericStruct L_9 = L_4;
	const Il2CppFullySharedGenericStruct L_17 = L_4;
	const Il2CppFullySharedGenericStruct L_27 = L_4;
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
	const Il2CppFullySharedGenericStruct L_20 = L_10;
	const Il2CppFullySharedGenericStruct L_28 = L_10;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	const Il2CppFullySharedGenericAny L_16 = L_14;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
	memset(V_2, 0, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	memset(V_3, 0, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	memset(G_B6_0, 0, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	memset(G_B5_0, 0, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_7, L_8, (Il2CppFullySharedGenericStruct*)L_9, il2cpp_rgctx_method(method->rgctx_data, 0));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_codegen_memcpy(L_10, L_9, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0026:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___1_lo;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
		il2cpp_codegen_memcpy(L_14, V_3, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_14);
		if (L_15)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
			goto IL_0044;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	}
	{
		il2cpp_codegen_memcpy(L_16, G_B5_0, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
		il2cpp_codegen_memcpy(V_3, L_16, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_tBB4F8F8C81DAF4F3DF951D4EA51641AFB4917EAA);
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_17, V_2, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
		void* L_18 = ___0_array;
		int32_t L_19 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_18, L_19, (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_22, L_21);
		int32_t L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_23, L_22.method,L_22.thisPtr, L_17, L_20);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_25 = ___0_array;
		int32_t L_26 = V_1;
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33);
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), il2cpp_codegen_memcpy(L_28, L_27, SizeOf_T_tBF87611215034719F22E4011A6C7698E03198A33), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0068:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = ___2_hi;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m9E989F4E34D29B0E8846A7C48DD9E4D0B034C89F_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_StaticInit);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_src;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___1_dst;
		int32_t L_2 = ___2_length;
		CHECKED_LOCAL_INIT(ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_StaticInit,(ModuleHandle_t5D0F96F84469E2969C2509C1965812B79964CC83_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m7A047D0293849EC8C78740E2DE5E8574136F188B(L_0, 0, L_1, 0, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_Copy_TisIl2CppFullySharedGenericStruct_m7A047D0293849EC8C78740E2DE5E8574136F188B_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, int32_t ___1_srcIndex, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___2_dst, int32_t ___3_dstIndex, int32_t ___4_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_src;
		int32_t L_1 = ___1_srcIndex;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___2_dst;
		int32_t L_3 = ___3_dstIndex;
		int32_t L_4 = ___4_length;
		NativeArray_1_Copy_m8831A4576613C49F9A635455804441337A122D59(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetEqual_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AFCD1C3DFDA88644B0A24A4F84CE80148149329_fshared (Array_1_t59D821F73EB8A055722DE17A8C8454AC3363495D ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t532A183ABA8882294AB78BADBE53CDC90E6C7692 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t3D5BC06BCE142C9A3188EE5FF8CCD28645281C9B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3D5BC06BCE142C9A3188EE5FF8CCD28645281C9B);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_U_t532A183ABA8882294AB78BADBE53CDC90E6C7692);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	memset(V_4, 0, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	memset(G_B3_0, 0, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	memset(G_B2_0, 0, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	{
		V_0 = 0;
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0063;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))>>1));
		V_3 = (0.0f);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
		il2cpp_codegen_memcpy(L_3, V_4, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		if (L_4)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
			goto IL_0030;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B2_0, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
		il2cpp_codegen_memcpy(V_4, L_5, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t96555D3EA42776B1E4CF95A86D52F6A6402910D6);
	}

IL_0030:
	{
		int32_t L_6 = V_2;
		Array_1_get_Item_m4B6EECC3E6603139E5A91FED7AA091CD329A6029((&___0_values), L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_8, ___2_check, SizeOf_U_t532A183ABA8882294AB78BADBE53CDC90E6C7692);
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_10, L_9);
		InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_11, L_10.method,L_10.thisPtr, L_7, L_8, (&V_3));
		float L_12 = V_3;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_13 = V_2;
		return L_13;
	}

IL_0051:
	{
		float L_14 = V_3;
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		goto IL_0063;
	}

IL_005f:
	{
		int32_t L_16 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0063:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetEqual_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m4D731F3BEC15E6AFC3BBFD4C0C6DF8BDB7028508_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t1F35F38E09D75A9446575DAAC6E31B9BFF068721 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tBB4469EA5E65B2097D4A0EB6C78D4E2C6F0D7C11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tBB4469EA5E65B2097D4A0EB6C78D4E2C6F0D7C11);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_U_t1F35F38E09D75A9446575DAAC6E31B9BFF068721);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	memset(V_4, 0, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	memset(G_B3_0, 0, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	memset(G_B2_0, 0, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	{
		V_0 = 0;
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_0063;
	}

IL_0008:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_1, L_2))>>1));
		V_3 = (0.0f);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
		il2cpp_codegen_memcpy(L_3, V_4, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_3);
		if (L_4)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
			goto IL_0030;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B2_0, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
		il2cpp_codegen_memcpy(V_4, L_5, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_X_t42C63B30BB88A42A838E2C28543E0818DC89230C);
	}

IL_0030:
	{
		int32_t L_6 = V_2;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_8, ___2_check, SizeOf_U_t1F35F38E09D75A9446575DAAC6E31B9BFF068721);
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_10, L_9);
		InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_11, L_10.method,L_10.thisPtr, L_7, L_8, (&V_3));
		float L_12 = V_3;
		if ((!(((float)L_12) == ((float)(0.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_13 = V_2;
		return L_13;
	}

IL_0051:
	{
		float L_14 = V_3;
		if ((!(((float)L_14) <= ((float)(0.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		goto IL_0063;
	}

IL_005f:
	{
		int32_t L_16 = V_2;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0063:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_0008;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetLower_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m888CD6BDE4F22B079187EA057E0A886397072D33_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tC7C9CA0C31E3482DE5CC2B4BE7DF5F35C2F771DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tA24D4282F485463CDC3E4135AB2EEA53FF45A028 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tA24D4282F485463CDC3E4135AB2EEA53FF45A028);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_U_tC7C9CA0C31E3482DE5CC2B4BE7DF5F35C2F771DA);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	memset(V_5, 0, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	memset(G_B3_0, 0, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	memset(G_B2_0, 0, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	{
		V_0 = 0;
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0059;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))>>1));
		V_4 = (0.0f);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
		il2cpp_codegen_memcpy(L_4, V_5, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		if (L_5)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
			goto IL_0035;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	}
	{
		il2cpp_codegen_memcpy(L_6, G_B2_0, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
		il2cpp_codegen_memcpy(V_5, L_6, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_X_t1DFEF4EE1651182ACA765C9CE5ED69C858FF194E);
	}

IL_0035:
	{
		int32_t L_7 = V_3;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, ___2_check, SizeOf_U_tC7C9CA0C31E3482DE5CC2B4BE7DF5F35C2F771DA);
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_11, L_10);
		bool L_13 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9, (&V_4));
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_14 = V_3;
		V_2 = L_14;
		int32_t L_15 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		goto IL_0059;
	}

IL_0055:
	{
		int32_t L_16 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0059:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_19 = V_2;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleHandle_GetUpper_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEB7827D3F7EDD61E36F1BF914052C25D053A2FFD_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_values, int32_t ___1_count, Il2CppFullySharedGenericStruct ___2_check, Il2CppFullySharedGenericAny ___3_condition, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tD8AB7169C3CE8B9DA2FA2B0EA582ED38F377277E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t3B7C711A489F15F1EE3770D3DF9E18239D2E81CA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t3B7C711A489F15F1EE3770D3DF9E18239D2E81CA);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_U_tD8AB7169C3CE8B9DA2FA2B0EA582ED38F377277E);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	const Il2CppFullySharedGenericAny L_6 = L_4;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	memset(V_5, 0, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	memset(G_B3_0, 0, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	memset(G_B2_0, 0, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	{
		V_0 = 0;
		int32_t L_0 = ___1_count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		goto IL_0059;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		V_3 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_2, L_3))>>1));
		V_4 = (0.0f);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_5, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
		il2cpp_codegen_memcpy(L_4, V_5, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
		bool L_5 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_4);
		if (L_5)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
			goto IL_0035;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_condition : &___3_condition), SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	}
	{
		il2cpp_codegen_memcpy(L_6, G_B2_0, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
		il2cpp_codegen_memcpy(V_5, L_6, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_5, SizeOf_X_t139BBDE3BEA4D160A33C1B09452A1B29FC2B3A74);
	}

IL_0035:
	{
		int32_t L_7 = V_3;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_values), L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, ___2_check, SizeOf_U_tD8AB7169C3CE8B9DA2FA2B0EA582ED38F377277E);
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B3_0, &L_11, L_10);
		bool L_13 = InvokerFuncInvoker3< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, float* >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9, (&V_4));
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_14 = V_3;
		V_2 = L_14;
		int32_t L_15 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		goto IL_0059;
	}

IL_0055:
	{
		int32_t L_16 = V_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0059:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_19 = V_2;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleHandle_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mCF05B110F997C8F946588A53E7CAC56D6777802A_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
	const Il2CppFullySharedGenericStruct L_9 = L_4;
	const Il2CppFullySharedGenericStruct L_17 = L_4;
	const Il2CppFullySharedGenericStruct L_27 = L_4;
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
	const Il2CppFullySharedGenericStruct L_20 = L_10;
	const Il2CppFullySharedGenericStruct L_28 = L_10;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	const Il2CppFullySharedGenericAny L_16 = L_14;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
	memset(V_2, 0, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	memset(V_3, 0, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	memset(G_B6_0, 0, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	memset(G_B5_0, 0, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_7, L_8, (Il2CppFullySharedGenericStruct*)L_9, il2cpp_rgctx_method(method->rgctx_data, 0));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_codegen_memcpy(L_10, L_9, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0026:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___1_lo;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
		il2cpp_codegen_memcpy(L_14, V_3, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_14);
		if (L_15)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
			goto IL_0044;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	}
	{
		il2cpp_codegen_memcpy(L_16, G_B5_0, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
		il2cpp_codegen_memcpy(V_3, L_16, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t69DC689AFADA4B5FF3DDED93D9E82219B5D0F520);
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_17, V_2, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
		void* L_18 = ___0_array;
		int32_t L_19 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_18, L_19, (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_22, L_21);
		int32_t L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_23, L_22.method,L_22.thisPtr, L_17, L_20);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_25 = ___0_array;
		int32_t L_26 = V_1;
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69);
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), il2cpp_codegen_memcpy(L_28, L_27, SizeOf_T_tB57DF0CEA7A14B4FC7885617AAF5C7A1E252AC69), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0068:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = ___2_hi;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventsHelper_SendEnterLeave_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_m2C2CEF83ACD49E9733858D32A2E85683C5179C38_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_previousTopElementUnderMouse, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_currentTopElementUnderMouse, RuntimeObject* ___2_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_mousePosition, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_StaticInit);
	int32_t V_0 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_1 = NULL;
	int32_t V_2 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_3 = NULL;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* V_4 = NULL;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Il2CppSharedGenericObject* V_6 = NULL;
	Il2CppSharedGenericObject* V_7 = NULL;
	int32_t V_8 = 0;
	Il2CppSharedGenericObject* V_9 = NULL;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_previousTopElementUnderMouse;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_previousTopElementUnderMouse;
		RuntimeObject* L_2;
		L_2 = VisualElement_get_panel_m44AEFA3041785E57641AA3F895D11215C841BED1(L_1, NULL);
		if (L_2)
		{
			goto IL_000e;
		}
	}
	{
		___0_previousTopElementUnderMouse = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL;
	}

IL_000e:
	{
		V_0 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = ___0_previousTopElementUnderMouse;
		V_1 = L_3;
		goto IL_0028;
	}

IL_0014:
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = V_1;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_6;
		L_6 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_5, NULL);
		V_5 = L_6;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7;
		L_7 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		V_1 = L_7;
	}

IL_0028:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8 = V_1;
		if (L_8)
		{
			goto IL_0014;
		}
	}
	{
		V_2 = 0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = ___1_currentTopElementUnderMouse;
		V_3 = L_9;
		goto IL_0045;
	}

IL_0031:
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_11 = V_3;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_12;
		L_12 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_11, NULL);
		V_5 = L_12;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13;
		L_13 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		V_3 = L_13;
	}

IL_0045:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_14 = V_3;
		if (L_14)
		{
			goto IL_0031;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = ___0_previousTopElementUnderMouse;
		V_1 = L_15;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = ___1_currentTopElementUnderMouse;
		V_3 = L_16;
		goto IL_009d;
	}

IL_004e:
	{
		RuntimeObject* L_17 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___3_mousePosition;
		Il2CppSharedGenericObject* L_19;
		L_19 = MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1(L_17, L_18, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_6 = L_19;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{
				{
					Il2CppSharedGenericObject* L_20 = V_6;
					if (!L_20)
					{
						goto IL_0088;
					}
				}
				{
					Il2CppSharedGenericObject* L_21 = V_6;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_21);
				}

IL_0088:
				{
					return;
				}
			}
		});
		try
		{
			Il2CppSharedGenericObject* L_22 = V_6;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23 = V_1;
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_22, L_23, NULL);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = V_1;
			Il2CppSharedGenericObject* L_25 = V_6;
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, L_24, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_25);
			goto IL_0089;
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

IL_0089:
	{
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_27 = V_1;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_28;
		L_28 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_27, NULL);
		V_5 = L_28;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_29;
		L_29 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		V_1 = L_29;
	}

IL_009d:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_2;
		if ((((int32_t)L_30) > ((int32_t)L_31)))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_32 = V_2;
		CHECKED_LOCAL_INIT(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_StaticInit,(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_33;
		L_33 = VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2(L_32, NULL);
		V_4 = L_33;
		goto IL_00c7;
	}

IL_00ab:
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_34 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_35 = V_3;
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_34, L_35, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_36, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_37 = V_3;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_38;
		L_38 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_37, NULL);
		V_5 = L_38;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_39;
		L_39 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		V_3 = L_39;
	}

IL_00c7:
	{
		int32_t L_40 = V_2;
		int32_t L_41 = V_0;
		if ((((int32_t)L_40) > ((int32_t)L_41)))
		{
			goto IL_00ab;
		}
	}
	{
		goto IL_0130;
	}

IL_00cd:
	{
		RuntimeObject* L_42 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_43 = ___3_mousePosition;
		Il2CppSharedGenericObject* L_44;
		L_44 = MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1(L_42, L_43, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_7 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f2:
			{
				{
					Il2CppSharedGenericObject* L_45 = V_7;
					if (!L_45)
					{
						goto IL_0107;
					}
				}
				{
					Il2CppSharedGenericObject* L_46 = V_7;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0107:
				{
					return;
				}
			}
		});
		try
		{
			Il2CppSharedGenericObject* L_47 = V_7;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_48 = V_1;
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_47, L_48, NULL);
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49 = V_1;
			Il2CppSharedGenericObject* L_50 = V_7;
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, L_49, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_50);
			goto IL_0108;
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

IL_0108:
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_51 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_52 = V_3;
		List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_inline(L_51, L_52, List_1_Add_m4E186A9A5675BFA7E92BF5C08FDD6BC6F034A11B_RuntimeMethod_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_53 = V_1;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_54;
		L_54 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_53, NULL);
		V_5 = L_54;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_55;
		L_55 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		V_1 = L_55;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_56 = V_3;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_57;
		L_57 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_56, NULL);
		V_5 = L_57;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_58;
		L_58 = Hierarchy_get_parent_m1CB3F7548632A5B5747041AF64B12BB0E0F402D4((&V_5), NULL);
		V_3 = L_58;
	}

IL_0130:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_59 = V_1;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_60 = V_3;
		if ((!(((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_59) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_60))))
		{
			goto IL_00cd;
		}
	}
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_61 = V_4;
		int32_t L_62;
		L_62 = List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline(L_61, NULL);
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_62, 1));
		goto IL_0192;
	}

IL_0141:
	{
		RuntimeObject* L_63 = ___2_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_64 = ___3_mousePosition;
		Il2CppSharedGenericObject* L_65;
		L_65 = MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1(L_63, L_64, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_9 = L_65;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0176:
			{
				{
					Il2CppSharedGenericObject* L_66 = V_9;
					if (!L_66)
					{
						goto IL_018b;
					}
				}
				{
					Il2CppSharedGenericObject* L_67 = V_9;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_67);
				}

IL_018b:
				{
					return;
				}
			}
		});
		try
		{
			Il2CppSharedGenericObject* L_68 = V_9;
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_69 = V_4;
			int32_t L_70 = V_8;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_71;
			L_71 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_69, L_70, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_68, L_71, NULL);
			List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_72 = V_4;
			int32_t L_73 = V_8;
			VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_74;
			L_74 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_72, L_73, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
			Il2CppSharedGenericObject* L_75 = V_9;
			VirtualActionInvoker1< EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* >::Invoke(5, L_74, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)L_75);
			goto IL_018c;
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

IL_018c:
	{
		int32_t L_76 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_76, 1));
	}

IL_0192:
	{
		int32_t L_77 = V_8;
		if ((((int32_t)L_77) >= ((int32_t)0)))
		{
			goto IL_0141;
		}
	}
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_78 = V_4;
		CHECKED_LOCAL_INIT(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_StaticInit,(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		VisualElementListPool_Release_mAF4ED38CC4F9A6E58B06F4B0BD13611F7DECBCFA(L_78, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NamedValue_ApplyAllToObject_TisIl2CppFullySharedGenericAny_m914DC22F3FE10B6CD98724326D297ED5157900D2_fshared (RuntimeObject* ___0_instance, Il2CppFullySharedGenericAny ___1_parameters, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t74105E6C32CA7AC4F4202BB870BF99B1C95BA2DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	RuntimeObject* V_0 = NULL;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_parameters : &___1_parameters), &L_1, L_0);
		typedef RuntimeObject* ( *func_L_3)(void*,const RuntimeMethod*);
		RuntimeObject* L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_0032;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0032:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_001f_1;
			}

IL_0010_1:
			{
				RuntimeObject* L_7 = V_0;
				NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_8;
				L_8 = InterfaceFuncInvoker0< NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED >::Invoke(0, IEnumerator_1_t74105E6C32CA7AC4F4202BB870BF99B1C95BA2DE_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				RuntimeObject* L_9 = ___0_instance;
				NamedValue_ApplyToObject_m9B5513EAC952611D46852EA28EEA151A1D870DBD((&V_1), L_9, NULL);
			}

IL_001f_1:
			{
				RuntimeObject* L_10 = V_0;
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0033;
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

IL_0033:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED NamedValue_From_TisIl2CppFullySharedGenericStruct_mB29A08C1F2567409A0811DC97F0A6A33F6460304_fshared (String_t* ___0_name, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tBEE87988D9673B884AFC946F497229F4532538EB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TValue_tBEE87988D9673B884AFC946F497229F4532538EB);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_tBEE87988D9673B884AFC946F497229F4532538EB);
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED));
		String_t* L_0 = ___0_name;
		NamedValue_set_name_mCF3BCACF7F87CF0C64AB3E4547BA5876ADF1940C_inline((&V_0), L_0, NULL);
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_TValue_tBEE87988D9673B884AFC946F497229F4532538EB);
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_3;
		L_3 = PrimitiveValue_From_TisIl2CppFullySharedGenericStruct_m6846A493CC72CBD82D945883B6E21C3D2A6A18F2(il2cpp_codegen_memcpy(L_2, L_1, SizeOf_TValue_tBEE87988D9673B884AFC946F497229F4532538EB), il2cpp_rgctx_method(method->rgctx_data, 1));
		NamedValue_set_value_mD96CEA0EB28C32139F47AEF613FE40B6DD7A5D7D_inline((&V_0), L_3, NULL);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_6 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4);
	memset(V_1, 0, SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4);
	{
		int32_t L_0;
		L_0 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_container), NULL);
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___1_other), NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_0016:
	{
		int32_t L_2 = V_0;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_container), L_2, (Il2CppFullySharedGenericStruct*)L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_t969436C60450219420A552B14EE1958F1D70A2D4);
		int32_t L_4 = V_0;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___1_other), L_4, (Il2CppFullySharedGenericStruct*)L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppConstrainedCallData L_7;
		Il2CppMethodPointer L_8 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)(Il2CppFullySharedGenericStruct*)V_1, &L_7, L_6);
		bool L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_8, L_7.method,L_7.thisPtr, L_5);
		if (L_9)
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0038:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_003c:
	{
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_container), NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_CheckReinterpretSize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m50C0BEE706F48B51459AE4BD6807CB060DE2D39F_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB3746242A2B9EF9B8F11FE2AB4770E1A7FB0CC1B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		uint32_t L_0 = SizeOf_T_tB3746242A2B9EF9B8F11FE2AB4770E1A7FB0CC1B;
		V_0 = (int32_t)L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = ___0_array;
		int32_t L_3;
		L_3 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_2, NULL);
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		V_2 = ((int64_t)il2cpp_codegen_multiply(L_4, L_6));
		int64_t L_7 = V_2;
		int32_t L_8 = V_1;
		int64_t L_9 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_8,NULL));
		int32_t L_10 = V_1;
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_10,NULL));
		int64_t L_12 = V_2;
		if ((((int64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)(L_7/L_9)), L_11))) == ((int64_t)L_12)))
		{
			goto IL_0051;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_15 = ___0_array;
		int32_t L_16;
		L_16 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_15, NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		String_t* L_21;
		L_21 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE518C71E95CD77DE3B5BAA3682242D4FFE4F9D1E)), L_14, L_18, L_20, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_22 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_22, L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, method);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC2E8C94D40FD6192D93109A09A15F14BBDD009B8_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t75A0416E42937E71F2FEE1112F48C5C217F2DEC8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t75A0416E42937E71F2FEE1112F48C5C217F2DEC8);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t75A0416E42937E71F2FEE1112F48C5C217F2DEC8);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t75A0416E42937E71F2FEE1112F48C5C217F2DEC8);
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t75A0416E42937E71F2FEE1112F48C5C217F2DEC8): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA3B95B043A72542A90C9D7C39D8F157A7C7CD28D_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t5B12AF9B60BB3F3B8D19A7C0F70BA1E5C7C0B821 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t5B12AF9B60BB3F3B8D19A7C0F70BA1E5C7C0B821);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t5B12AF9B60BB3F3B8D19A7C0F70BA1E5C7C0B821);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t5B12AF9B60BB3F3B8D19A7C0F70BA1E5C7C0B821);
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t5B12AF9B60BB3F3B8D19A7C0F70BA1E5C7C0B821): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC53230B9B8FEB87DECEB368F8A0907CDB6D830C9_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t1EB786C4636BE4B7ECEADEA257D7AAE058101D0A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t1EB786C4636BE4B7ECEADEA257D7AAE058101D0A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t1EB786C4636BE4B7ECEADEA257D7AAE058101D0A);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t1EB786C4636BE4B7ECEADEA257D7AAE058101D0A);
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t1EB786C4636BE4B7ECEADEA257D7AAE058101D0A): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9AD9A0BBACE55E3E9CCA20B6AF502228934074DB_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t5784EA59C6BB21C14119190AF2ABB63F0D0C40A2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t5784EA59C6BB21C14119190AF2ABB63F0D0C40A2);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t5784EA59C6BB21C14119190AF2ABB63F0D0C40A2);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0 = ___0_roSpan;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_U_t5784EA59C6BB21C14119190AF2ABB63F0D0C40A2);
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t5784EA59C6BB21C14119190AF2ABB63F0D0C40A2): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArrayExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1CDBB868415B018EE5BB52C90E6D6B98F16717E1_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tB0388579871C38A08CBE50C5D1098D485DE6AF76 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_tB0388579871C38A08CBE50C5D1098D485DE6AF76);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_tB0388579871C38A08CBE50C5D1098D485DE6AF76);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_U_tB0388579871C38A08CBE50C5D1098D485DE6AF76);
		int32_t L_4;
		L_4 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m91DB739957BD36F24D30A1D26BE5B9B8E4F5C072(L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_U_tB0388579871C38A08CBE50C5D1098D485DE6AF76): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 1));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_CopyFrom_TisIl2CppFullySharedGenericStruct_m6F262AF1700ED20A86112698D5904FA0B28E14A4_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_container;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98((&___1_other), NULL);
		NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_CopyFrom_TisIl2CppFullySharedGenericStruct_m8AA7EF20CE6A1C36AF67DFF780AC165B9CC8D766_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_container, NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B* L_0 = ___1_other;
		NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B L_1 = (*(NativeHashSet_1_t4A3FF5E5E7880324EBA79057A83F747452D87D7B*)L_0);
		V_1 = L_1;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(3, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = NativeHashSet_1_ToNativeArray_m1F983BA2036D1FB556C421017F8E06EFA51F6E49((&V_1), L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{
				NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
				return;
			}
		});
		try
		{
			NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = ___0_container;
			NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_0;
			NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			goto IL_002c;
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

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_CopyFrom_TisIl2CppFullySharedGenericStruct_m6BC0D087C101274A0A7AD271554BFF4730E5BBF7_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_container, UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4* L_0 = ___1_other;
		UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4 L_1 = (*(UnsafeHashSet_1_tDA0EA0F3984CE39895311C7838A2EC512B3F07A4*)L_0);
		V_1 = L_1;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2;
		L_2 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(3, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = UnsafeHashSet_1_ToNativeArray_m8AEAC3278128DBD9AC2E8BEAB88D2DF0FE66DA1B((&V_1), L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{
				NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80((&V_0), il2cpp_rgctx_method(method->rgctx_data, 2));
				return;
			}
		});
		try
		{
			NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = ___0_container;
			NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_0;
			NativeArray_1_CopyFrom_m910E1EF42DE5ACF6E07014ADC35D83E87A3C43A8(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
			goto IL_002c;
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

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_DisposeCheckAllocator_TisIl2CppFullySharedGenericStruct_mA178ECEF3FBD52BC30927A2691039240F899582A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		void* L_1 = L_0->___m_Buffer;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_1) == ((uintptr_t)L_2))))
		{
			goto IL_0015;
		}
	}
	{
		ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB* L_3 = (ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB_il2cpp_TypeInfo_var)));
		ObjectDisposedException__ctor_mB2C8582279AF3F0C1CF9AA52DA7331BF848DFD48(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3557380BE9E7E98862A3A71F25DC349E0384F4E2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0015:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = ___0_array;
		int32_t L_5 = L_4->___m_AllocatorLabel;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6;
		L_6 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(L_5, NULL);
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_7;
		L_7 = AllocatorManager_IsCustomAllocator_m38BCD079BAB0D64962201CD05D671C2A42CE1909(L_6, NULL);
		if (L_7)
		{
			goto IL_002e;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = ___0_array;
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_8, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_002e:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_9 = ___0_array;
		int32_t L_10 = L_9->___m_AllocatorLabel;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11;
		L_11 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(L_10, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_12 = ___0_array;
		void* L_13 = L_12->___m_Buffer;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		AllocatorManager_Free_mB8AE9C4CB989A9121F4E3F2E6C7781076DFB3025(L_11, L_13, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_14 = ___0_array;
		L_14->___m_AllocatorLabel = 0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_15 = ___0_array;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		L_15->___m_Buffer = (void*)L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0578EC0AFEDCA5277BA3F1FF80521F94A942DF75_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t18B6D761FF6CA184341D940BB49C18E011AA4DBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t18B6D761FF6CA184341D940BB49C18E011AA4DBF);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t18B6D761FF6CA184341D940BB49C18E011AA4DBF);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t18B6D761FF6CA184341D940BB49C18E011AA4DBF);
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t18B6D761FF6CA184341D940BB49C18E011AA4DBF): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m25291B3EF3BE12AE0E4A7D679C037DC1010C208F_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811);
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t6EAD6496BD94F27E87A2E7A37B6F85200A6A2811): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mB27BFF868BA2D984A1B1E75496B6F84A39C18806_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t7A32D64825A433E31632957B7AABE9A0E3C90B48 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t7A32D64825A433E31632957B7AABE9A0E3C90B48);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t7A32D64825A433E31632957B7AABE9A0E3C90B48);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t7A32D64825A433E31632957B7AABE9A0E3C90B48);
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t7A32D64825A433E31632957B7AABE9A0E3C90B48): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1EC06640DF68A09675813BAA543901B996FD2D04 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_tDE90D1F87F726C5A6F1838DBB08E9B8155C3EF26 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t1EC06640DF68A09675813BAA543901B996FD2D04);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_tDE90D1F87F726C5A6F1838DBB08E9B8155C3EF26);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericStruct V_4 = alloca(SizeOf_T_t1EC06640DF68A09675813BAA543901B996FD2D04);
	memset(V_4, 0, SizeOf_T_t1EC06640DF68A09675813BAA543901B996FD2D04);
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___0_roSpan), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___0_roSpan), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_2;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_4;
		V_3 = 0;
		goto IL_003b;
	}

IL_001c:
	{
		Il2CppFullySharedGenericStruct* L_5 = V_1;
		int32_t L_6 = V_3;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(V_4, L_7, SizeOf_T_t1EC06640DF68A09675813BAA543901B996FD2D04);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___1_value : &___1_value), SizeOf_U_tDE90D1F87F726C5A6F1838DBB08E9B8155C3EF26);
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)(Il2CppFullySharedGenericStruct*)V_4, &L_10, L_9);
		bool L_12 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(L_11, L_10.method,L_10.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if (!L_12)
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_13 = V_3;
		return L_13;
	}

IL_0037:
	{
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003b:
	{
		int32_t L_15 = V_3;
		int32_t L_16 = V_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
		{
			goto IL_001c;
		}
	}
	{
		uintptr_t L_17 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_2 = (Il2CppFullySharedGenericStruct*)L_17;
	}

IL_0042:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m91DB739957BD36F24D30A1D26BE5B9B8E4F5C072_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tD34D5C0EDB4F66056F90091997CF0398079DC5E9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_tD34D5C0EDB4F66056F90091997CF0398079DC5E9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_tD34D5C0EDB4F66056F90091997CF0398079DC5E9);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_2), (void*)L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_U_tD34D5C0EDB4F66056F90091997CF0398079DC5E9);
		int32_t L_5;
		L_5 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_4, L_3, SizeOf_U_tD34D5C0EDB4F66056F90091997CF0398079DC5E9): *(void**)L_3), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisIl2CppFullySharedGenericStruct_m10ABF0E8955AE4504761E521587E2D89638A1972_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
	memset(V_1, 0, SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B2_0 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B3_1 = NULL;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___2_allocator;
		V_0 = L_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_array;
		il2cpp_codegen_initobj(L_1, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = ___0_array;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_1, SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
		il2cpp_codegen_memcpy(L_3, V_1, SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5);
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_6;
		L_6 = AllocatorManager_AllocateStruct_TisAllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148_TisIl2CppFullySharedGenericStruct_m89858AB1D0D222803F186CBFDE201D8104D72F9F((&V_0), il2cpp_codegen_memcpy(L_5, L_3, SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		L_2->___m_Buffer = L_6;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___0_array;
		int32_t L_8 = ___1_length;
		L_7->___m_Length = L_8;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_9 = ___0_array;
		bool L_10;
		L_10 = AllocatorHandle_get_IsAutoDispose_m605B841B976828E0219FFA8C9B15585F497C80E4((&___2_allocator), NULL);
		if (L_10)
		{
			G_B2_0 = L_9;
			goto IL_003a;
		}
		G_B1_0 = L_9;
	}
	{
		int32_t L_11;
		L_11 = AllocatorHandle_get_ToAllocator_m34C297958A940D9D35C11B3D28B8E5A08E170FDF((&___2_allocator), NULL);
		G_B3_0 = ((int32_t)(L_11));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_003a:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_12 = ___3_options;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_13 = ___0_array;
		void* L_14 = L_13->___m_Buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_15 = ___0_array;
		int32_t L_16 = L_15->___m_Length;
		int64_t L_17 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_16,NULL));
		uint32_t L_18 = SizeOf_T_t68DD3E290C5045D5C9C9EAB6CF8F7F4B7CCEAEF5;
		int64_t L_19 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_18,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_14, ((int64_t)il2cpp_codegen_multiply(L_17, L_19)), NULL);
	}

IL_005e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayExtensions_Initialize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m8CE87D920E01F7DDBF409D77486D923A85F54A46_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericStruct* ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit);
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	memset(V_0, 0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B2_0 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B3_1 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		il2cpp_codegen_initobj(L_0, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_array;
		Il2CppFullySharedGenericStruct* L_2 = ___2_allocator;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4);
		int32_t L_4 = ___1_length;
		CHECKED_LOCAL_INIT(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_StaticInit,(AllocatorManager_tFB15A22029C8159A3DCD4C08935BE57D3E6B3C2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		void* L_6;
		L_6 = AllocatorManager_AllocateStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m24FC981A18EAB95A996CFC6337FAB957062F81E1(L_2, il2cpp_codegen_memcpy(L_5, L_3, SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4), L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		L_1->___m_Buffer = L_6;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___0_array;
		int32_t L_8 = ___1_length;
		L_7->___m_Length = L_8;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_9 = ___0_array;
		Il2CppFullySharedGenericStruct* L_10 = ___2_allocator;
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)L_10, &L_12, L_11);
		typedef bool ( *func_L_14)(void*,const RuntimeMethod*);
		bool L_15 = ((func_L_14)L_13)(L_12.thisPtr,L_12.method);
		if (L_15)
		{
			G_B2_0 = L_9;
			goto IL_0041;
		}
		G_B1_0 = L_9;
	}
	{
		Il2CppFullySharedGenericStruct* L_16 = ___2_allocator;
		Il2CppConstrainedCallData L_18;
		Il2CppMethodPointer L_19 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)L_16, &L_18, L_17);
		typedef int32_t ( *func_L_20)(void*,const RuntimeMethod*);
		int32_t L_21 = ((func_L_20)L_19)(L_18.thisPtr,L_18.method);
		G_B3_0 = ((int32_t)(L_21));
		G_B3_1 = G_B1_0;
		goto IL_0042;
	}

IL_0041:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0042:
	{
		G_B3_1->___m_AllocatorLabel = G_B3_0;
		int32_t L_22 = ___3_options;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_0065;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_23 = ___0_array;
		void* L_24 = L_23->___m_Buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_25 = ___0_array;
		int32_t L_26 = L_25->___m_Length;
		int64_t L_27 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_26,NULL));
		uint32_t L_28 = SizeOf_T_tD6920A85A9E0F9DC4E2837254DD53319974930C4;
		int64_t L_29 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_28,NULL));
		UnsafeUtility_MemClear_m6C4377117084A11A667A567BC2F5E606A632A7C1(L_24, ((int64_t)il2cpp_codegen_multiply(L_27, L_29)), NULL);
	}

IL_0065:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayExtensions_Reinterpret_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mA330D618BD7C45E856E6DA4F12CA02BE46428C2B_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0548762ACE3F99CD59157CCF3E7926B6E1E0C81F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	{
		uint32_t L_0 = SizeOf_T_t0548762ACE3F99CD59157CCF3E7926B6E1E0C81F;
		V_0 = (int32_t)L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		int32_t L_2;
		L_2 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_array), NULL);
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_2,NULL));
		int32_t L_4 = V_0;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		int32_t L_6 = V_1;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		V_2 = ((int64_t)(((int64_t)il2cpp_codegen_multiply(L_3, L_5))/L_7));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_8 = ___0_array;
		void* L_9;
		L_9 = NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_inline(L_8, NULL);
		int64_t L_10 = V_2;
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(L_10,NULL));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12;
		L_12 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52(L_9, L_11, 1, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeArrayExtensions_UnsafeElementAt_TisIl2CppFullySharedGenericStruct_mD5A55E88E7EFCC4A84DC649BF433F56B5C426745_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_0, NULL);
		int32_t L_2 = ___1_index;
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_inline(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeArrayExtensions_UnsafeElementAtMutable_TisIl2CppFullySharedGenericStruct_m9C116426CA92D692BE5B19D3207BABE599300FFD_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		void* L_1;
		L_1 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_0, NULL);
		int32_t L_2 = ___1_index;
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_inline(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_CopyFromNativeSlice_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mEDA599B53DB377A69259BBF5A057F154737BE588_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, int32_t ___1_dstStartIndex, int32_t ___2_dstEndIndex, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___3_slice, int32_t ___4_srcStartIndex, int32_t ___5_srcEndIndex, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t* V_2 = NULL;
	uint8_t* V_3 = NULL;
	{
		int32_t L_0 = ___2_dstEndIndex;
		int32_t L_1 = ___1_dstStartIndex;
		int32_t L_2 = ___5_srcEndIndex;
		int32_t L_3 = ___4_srcStartIndex;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_0, L_1))) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3)))))
		{
			goto IL_001a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3D3D9CC7DBA60B04E5E5DF1904398CBAA8E8C8BB)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECD68B5596F20DCD97A00D59FC408D26A9E78960)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_001a:
	{
		int32_t L_5;
		L_5 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_5;
		int32_t L_6;
		L_6 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = L_6;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_7 = ___3_slice;
		void* L_8;
		L_8 = NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_inline(L_7, NULL);
		V_2 = (uint8_t*)L_8;
		uint8_t* L_9 = V_2;
		int32_t L_10 = ___4_srcStartIndex;
		int32_t L_11 = V_1;
		V_2 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, ((int32_t)il2cpp_codegen_multiply(L_10, L_11))));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12 = ___0_nativeArray;
		void* L_13;
		L_13 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_12, NULL);
		V_3 = (uint8_t*)L_13;
		uint8_t* L_14 = V_3;
		int32_t L_15 = ___1_dstStartIndex;
		int32_t L_16 = V_0;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, ((int32_t)il2cpp_codegen_multiply(L_15, L_16))));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_1;
		uint8_t* L_19 = V_2;
		int32_t L_20;
		L_20 = NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_inline((&___3_slice), NULL);
		int32_t L_21 = V_0;
		int32_t L_22 = ___5_srcEndIndex;
		int32_t L_23 = ___4_srcStartIndex;
		UnsafeUtility_MemCpyStride_mD7836B76B4F1E7F30DFC859D4E6D7242AFD27C90((void*)L_17, L_18, (void*)L_19, L_20, L_21, ((int32_t)il2cpp_codegen_subtract(L_22, L_23)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_DisposeIfCreated_TisIl2CppFullySharedGenericStruct_mB83E3B249B31F1166C1C18244C25C86F34A7E3FE_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_nativeArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_nativeArray;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_0);
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = V_0;
		bool L_3;
		L_3 = NativeArray_1_op_Inequality_m473523B85EC3F582AF2F86773108D5AF3E6B9D0C(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = ___0_nativeArray;
		bool L_5;
		L_5 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_4, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___0_nativeArray;
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0024:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeAndCopyIfNeeded_TisIl2CppFullySharedGenericStruct_m93CCCCD9A29F27365DE60D831C5689EDEE53F95D_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	int32_t G_B7_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B7_1;
	memset((&G_B7_1), 0, sizeof(G_B7_1));
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 G_B7_2;
	memset((&G_B7_2), 0, sizeof(G_B7_2));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_nativeArray;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0014;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___0_nativeArray;
		int32_t L_4;
		L_4 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_3, NULL);
		int32_t L_5 = ___1_size;
		if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		int32_t L_6 = ___1_size;
		int32_t L_7 = ___2_allocator;
		int32_t L_8 = ___3_options;
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&V_1), L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 2));
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___0_nativeArray;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_11 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_10);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12 = V_1;
		int32_t L_13 = ___1_size;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_14 = ___0_nativeArray;
		int32_t L_15;
		L_15 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_14, NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			G_B6_0 = L_12;
			G_B6_1 = L_11;
			goto IL_0039;
		}
		G_B5_0 = L_12;
		G_B5_1 = L_11;
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_16 = ___0_nativeArray;
		int32_t L_17;
		L_17 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_16, NULL);
		G_B7_0 = L_17;
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		goto IL_003a;
	}

IL_0039:
	{
		int32_t L_18 = ___1_size;
		G_B7_0 = L_18;
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
	}

IL_003a:
	{
		NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6(G_B7_2, G_B7_1, G_B7_0, il2cpp_rgctx_method(method->rgctx_data, 3));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_19 = ___0_nativeArray;
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_19, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_0045:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_20 = ___0_nativeArray;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_21 = V_1;
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_20 = L_21;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayHelpers_ResizeIfNeeded_TisIl2CppFullySharedGenericStruct_mCB901C6B5173F2BAEFE1A6C88160E4BB878B6FDC_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_nativeArray, int32_t ___1_size, int32_t ___2_allocator, int32_t ___3_options, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_nativeArray;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___0_nativeArray;
		int32_t L_4;
		L_4 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_3, NULL);
		int32_t L_5 = ___1_size;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___0_nativeArray;
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = (bool)0;
	}

IL_001b:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_002c;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = ___0_nativeArray;
		int32_t L_9 = ___1_size;
		int32_t L_10 = ___2_allocator;
		int32_t L_11 = ___3_options;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12;
		memset((&L_12), 0, sizeof(L_12));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_12), L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_8 = L_12;
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m3175E398B4F65381AF77AE7030D0D66B7C3D73C0_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_data, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = Span_1_GetPinnableReference_m5624821135CF41406465DA067B72E364926DB271((&___0_data), NULL);
		V_1 = L_0;
		Il2CppFullySharedGenericStruct* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_1,NULL));
		V_0 = (Il2CppFullySharedGenericStruct*)L_2;
		il2cpp_codegen_initobj((&V_2), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		(&V_2)->___m_Buffer = (void*)L_3;
		int32_t L_4;
		L_4 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_data), NULL);
		(&V_2)->___m_Length = L_4;
		int32_t L_5 = ___1_allocator;
		(&V_2)->___m_AllocatorLabel = L_5;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6 = V_2;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		void* L_0 = ___0_dataPointer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___m_Length = L_1;
		int32_t L_2 = ___2_allocator;
		(&V_0)->___m_AllocatorLabel = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeBitArray_AsNativeArray_TisIl2CppFullySharedGenericStruct_m21100628DDFFD7266FDBA65757CFED3149F739BB_fshared (NativeBitArray_t7D47863D3DFF1D41EE133D5107FFAF0D697BC00E* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA962F74FF478A58434F9031A1A41F8C5ECDF42A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = SizeOf_T_tA962F74FF478A58434F9031A1A41F8C5ECDF42A6;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, 8));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_1 = __this->___m_BitArray;
		int32_t L_2 = L_1->___Length;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2/L_3));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_4 = __this->___m_BitArray;
		uint64_t* L_5 = L_4->___Ptr;
		int32_t L_6 = V_1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_7;
		L_7 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52((void*)L_5, L_6, 1, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeBitArray_CheckReadBounds_TisIl2CppFullySharedGenericStruct_m90E72A69672D7A6ABEB88D135A7E642E9E80B18A_fshared (NativeBitArray_t7D47863D3DFF1D41EE133D5107FFAF0D697BC00E* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		uint32_t L_0 = SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09;
		V_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, 8));
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_1 = __this->___m_BitArray;
		int32_t L_2 = L_1->___Length;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(L_2/L_3));
		int32_t L_4 = V_1;
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_5 = __this->___m_BitArray;
		int32_t L_6 = L_5->___Length;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		uint32_t L_9 = SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09;
		int32_t L_10 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_9, 8));
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7D46E972920967646C169FAEFE29793480D87717)), L_8, L_11, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_13 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0047:
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_14 = __this->___m_BitArray;
		int32_t L_15 = L_14->___Length;
		int32_t L_16 = V_0;
		int32_t L_17 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)il2cpp_codegen_multiply(L_16, L_17)))))
		{
			goto IL_0082;
		}
	}
	{
		UnsafeBitArray_t74DFECCCA980372B6F29B9AA508ACC77A3D6B8D4* L_18 = __this->___m_BitArray;
		int32_t L_19 = L_18->___Length;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_20);
		uint32_t L_22 = SizeOf_T_t0E2536B333465CCD423B7DD2957A0C32E29E4E09;
		int32_t L_23 = ((int32_t)L_22);
		RuntimeObject* L_24 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_23);
		String_t* L_25;
		L_25 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6F04E86C5302630688259CCA7C31D9B8620B26C3)), L_21, L_24, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_26 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_26, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0082:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mBBD877284D88BD7460DE885E06B863B2E9F3A6D6_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_container;
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_1 = ___1_other;
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_2 = (*(NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)L_1);
		V_0 = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98((&V_0), NULL);
		bool L_4;
		L_4 = NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC6723FED5EED98A88A8D4E52D1F67DE9043E0981_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___1_other;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_0);
		bool L_2;
		L_2 = NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mBBD877284D88BD7460DE885E06B863B2E9F3A6D6(L_1, (&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m74A6311D620FEE94744587F8940A8EB6EFFEBFBB_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0;
		L_0 = NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98((&___0_container), NULL);
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_1 = ___1_other;
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_2 = (*(NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)L_1);
		V_0 = L_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3;
		L_3 = NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98((&V_0), NULL);
		bool L_4;
		L_4 = NativeArrayExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mC9DA32D7B8A7546B13A25AFD683E3E3564DA34F7(L_0, L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_mADA13D53936E5BB8844D9CB2CB696CA49E1F1505_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_container;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1 = L_0.___m_ListData;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 L_2 = (*(UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*)L_1);
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_3 = ___1_other;
		bool L_4;
		L_4 = UnsafeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m26517D1B620B6BB143F8CDBCBC9299D6C9AA512F(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeListExtensions_LastIndex_TisIl2CppFullySharedGenericStruct_mD3D811FF697AB64208C086006419302AB1780507_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___0_list, const RuntimeMethod* method) 
{
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_0 = ___0_list;
		int32_t L_1;
		L_1 = NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_inline(L_0, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_1, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 NativeListExtensions_MakeReadOnlySpan_TisIl2CppFullySharedGenericStruct_mE6F129DF69C6D1FFCECA7495F7A38D640D860092_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___0_list, int32_t ___1_first, int32_t ___2_numElements, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t763BE27078CDC0AAD600A5F83A4B0C80F6B363C6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_0 = ___0_list;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = NativeList_1_GetUnsafeReadOnlyPtr_m8BCFBC6190084C23188A5CB9B68515B1DE81C179(L_0, NULL);
		int32_t L_2 = ___1_first;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = SizeOf_T_t763BE27078CDC0AAD600A5F83A4B0C80F6B363C6;
		uintptr_t L_5 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))),NULL));
		int32_t L_6 = ___2_numElements;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m7456175BCB588AEE6932DC60D543FFA702ED3AB8_inline((&L_7), (void*)L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeListUnsafeUtility_GetInternalListDataPtrUnchecked_TisIl2CppFullySharedGenericStruct_mA545F925210D68602A18A2DA215F5C76D8B6BB44_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* ___0_list, const RuntimeMethod* method) 
{
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* L_0 = ___0_list;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1;
		L_1 = NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_inline(L_0, NULL);
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeListUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mF276C4717B50244A8CBD2C69F71927BC3EE3C6F3_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, const RuntimeMethod* method) 
{
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1 = L_0.___m_ListData;
		Il2CppFullySharedGenericStruct* L_2 = L_1->___Ptr;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeListUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m90E0BE74C866078E3AE84009FD36C754ABBD1989_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, const RuntimeMethod* method) 
{
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_list;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1 = L_0.___m_ListData;
		Il2CppFullySharedGenericStruct* L_2 = L_1->___Ptr;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D NativeParallelHashMapExtensions_GetUniqueKeyArray_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m6DC98555F4354656A64ABD1F1FB14DAF5193C139_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 ___0_container, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = NativeParallelMultiHashMap_2_GetKeyArray_m6A9BA939DBFA9AA420DB474C8EE58430DCBA2B04((&___0_container), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = L_1;
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = L_2;
		int32_t L_4;
		L_4 = NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		int32_t L_5 = V_0;
		ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D L_6;
		memset((&L_6), 0, sizeof(L_6));
		ValueTuple_2__ctor_m90E20F3BDB456A9E9F0690ECCE21B5796934682A((&L_6), L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D NativeParallelHashMapExtensions_GetUniqueKeyArray_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF815B9736CCEA3077EC6C7408B1875AC7E360772_fshared (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F ___0_container, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1;
		L_1 = UnsafeParallelMultiHashMap_2_GetKeyArray_mBBB8161BE1A90E1DB8F155DEF02C167BBF5FBB2B((&___0_container), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = L_1;
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_3 = L_2;
		int32_t L_4;
		L_4 = NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_4;
		int32_t L_5 = V_0;
		ValueTuple_2_t4CF93CEF0394185EBB5E5DFF70EA5EA8C34A840D L_6;
		memset((&L_6), 0, sizeof(L_6));
		ValueTuple_2__ctor_m90E20F3BDB456A9E9F0690ECCE21B5796934682A((&L_6), L_3, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 NativeParallelHashMapExtensions_GetUnsafeBucketData_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF7278677C2994CB4C9A7CABF4801CD22014BF931_fshared (NativeParallelHashMap_2_t75E2745DBFEAC14A7B7306A89FBFB3B562CEA497 ___0_container, const RuntimeMethod* method) 
{
	{
		NativeParallelHashMap_2_t75E2745DBFEAC14A7B7306A89FBFB3B562CEA497 L_0 = ___0_container;
		UnsafeParallelHashMap_2_t05EF7F8F2EB540DAE81F93C169AC7E6849413707 L_1 = L_0.___m_HashMapData;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = L_1.___m_Buffer;
		UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketData_m0A5859EBE368E2E2BBBD321F9A7E28AEBF0EDDC3((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 NativeParallelHashMapExtensions_GetUnsafeBucketData_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m87EBDF2435FBC6B614A8311BB42E60B104532398_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 ___0_container, const RuntimeMethod* method) 
{
	{
		NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 L_0 = ___0_container;
		UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F L_1 = L_0.___m_MultiHashMapData;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = L_1.___m_Buffer;
		UnsafeParallelHashMapBucketData_tCF0D4586EE0009033007B1E1BD04D40BA0A9C8E9 L_3;
		L_3 = UnsafeParallelHashMapData_GetBucketData_m0A5859EBE368E2E2BBBD321F9A7E28AEBF0EDDC3((UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelHashMapExtensions_Remove_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m53F7E0A772565666D599D319F939426F7A896492_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22 ___0_container, Il2CppFullySharedGenericStruct ___1_key, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6);
	{
		UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F* L_0 = (UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F*)(&(&___0_container)->___m_MultiHashMapData);
		il2cpp_codegen_memcpy(L_1, ___1_key, SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE);
		il2cpp_codegen_memcpy(L_2, ___2_value, SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6);
		UnsafeParallelMultiHashMap_2_Remove_TisIl2CppFullySharedGenericStruct_mE775E4665DF2FE5320D684E013BC68785FC3FE84(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_TKey_t0DBD8AE3E40678E75578512D3E3EFD21E23599EE), il2cpp_codegen_memcpy(L_4, L_2, SizeOf_TValue_tEEC11F243A93B10B85AF655A7657238B9128AFC6), il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeParallelHashMapExtensions_Unique_TisIl2CppFullySharedGenericStruct_m674E0555765DADEA4A4C72541D65B14707EFC0EB_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_7 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	const Il2CppFullySharedGenericStruct L_14 = L_4;
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	const Il2CppFullySharedGenericStruct L_15 = L_6;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	memset(V_3, 0, SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
	{
		int32_t L_0;
		L_0 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_array), NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return 0;
	}

IL_000b:
	{
		V_0 = 0;
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_array), NULL);
		V_1 = L_1;
		int32_t L_2 = V_0;
		V_2 = L_2;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_3 = V_2;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_array), L_3, (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(V_3, L_4, SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80);
		int32_t L_5 = V_0;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_array), L_5, (Il2CppFullySharedGenericStruct*)L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppConstrainedCallData L_8;
		Il2CppMethodPointer L_9 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)(Il2CppFullySharedGenericStruct*)V_3, &L_8, L_7);
		bool L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_9, L_8.method,L_8.thisPtr, L_6);
		if (L_10)
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_11 = V_2;
		int32_t L_12 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		V_2 = L_12;
		int32_t L_13 = V_0;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_array), L_13, (Il2CppFullySharedGenericStruct*)L_14, il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline((&___0_array), L_12, il2cpp_codegen_memcpy(L_15, L_14, SizeOf_T_tA768F369FF07BC4A7486CD2E0630F1E249B49E80), il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_004d:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		V_0 = L_17;
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_17) == ((uint32_t)L_18))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_19 = V_2;
		int32_t L_20 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		V_2 = L_20;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeParallelMultiHashMapExtensions_Initialize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m045B4C791A5970CFA228B174BE56E841E91C0E24_fshared (NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22* ___0_container, int32_t ___1_capacity, Il2CppFullySharedGenericStruct* ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_3 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	{
		NativeParallelMultiHashMap_2_t5A59639521C01B33A0ACC62CC3D8F1C5E6BD0C22* L_0 = ___0_container;
		int32_t L_1 = ___1_capacity;
		Il2CppFullySharedGenericStruct* L_2 = ___2_allocator;
		Il2CppConstrainedCallData L_4;
		Il2CppMethodPointer L_5 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 0), (void*)L_2, &L_4, L_3);
		typedef AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ( *func_L_6)(void*,const RuntimeMethod*);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7 = ((func_L_6)L_5)(L_4.thisPtr,L_4.method);
		UnsafeParallelMultiHashMap_2_t4E7810C26A0DC9AFBF2B30BA797D0ACF99B4573F L_8;
		memset((&L_8), 0, sizeof(L_8));
		UnsafeParallelMultiHashMap_2__ctor_m2E9AAA535D5D589B1D9CA34C9CCD9D66CF1DF44B((&L_8), L_1, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		L_0->___m_MultiHashMapData = L_8;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeReferenceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mEB79BE46478F0134535EFD4F98EBA2EB0D1A7B3C_fshared (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 ___0_reference, const RuntimeMethod* method) 
{
	{
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 L_0 = ___0_reference;
		void* L_1 = L_0.___m_Data;
		return (Il2CppFullySharedGenericStruct*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeReferenceUnsafeUtility_GetUnsafePtrWithoutChecks_TisIl2CppFullySharedGenericStruct_m5A817AC2C6E59D9CF8D617605C09B83FAC88845D_fshared (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 ___0_reference, const RuntimeMethod* method) 
{
	{
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 L_0 = ___0_reference;
		void* L_1 = L_0.___m_Data;
		return (Il2CppFullySharedGenericStruct*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* NativeReferenceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_mD8A8D6156E606899E693CDD4803C48CE4D38F13B_fshared (NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 ___0_reference, const RuntimeMethod* method) 
{
	{
		NativeReference_1_tECAC603455B4EB2EB31FC922E6E858D23B4CD3E4 L_0 = ___0_reference;
		void* L_1 = L_0.___m_Data;
		return (Il2CppFullySharedGenericStruct*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mB3B087259D57CBD3742B7A6BFE5BD1C0FF0E4A73_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_1;
		memset((&L_1), 0, sizeof(L_1));
		NativeSlice_1__ctor_m606E9478EC6822C3776B093EFC3DC98678E00F9A((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mAC2337A7622D49D3416C69479705764FAE2B6FA8_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, int32_t ___1_start, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NativeSlice_1__ctor_m89E2A81C9B0649A573BC279C2AA35CAF771B8B7D((&L_2), L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_mFB1AE1A459E87B8E3C3986EF14F956E30EAF24A3_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_thisArray, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_thisArray;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m313B1A91AB4ADBA821C074187D67957126F93DFF((&L_3), L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceExtensions_Slice_TisIl2CppFullySharedGenericStruct_m8604EAC32FCFF874A6AA4097703CF1DA1EFA00DE_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_thisSlice, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_thisSlice;
		int32_t L_1 = ___1_start;
		int32_t L_2 = ___2_length;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		memset((&L_3), 0, sizeof(L_3));
		NativeSlice_1__ctor_m4C0C75BC6633B56253FD4A7CD7F38A34E73C6253((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_fshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) 
{
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___2_length;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___2_length;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral430EB2E3A25FA4E421F6F9352AA45F5613EEBE3C)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		int32_t L_6 = ___1_stride;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_7 = ___1_stride;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF173EEDE423DEA19D689B1E600908FB12D40BC32)), L_9, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67C625C07AF1A22A91873A1B1CF9F911774F3A1B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_003e:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52));
		int32_t L_12 = ___1_stride;
		(&V_0)->___m_Stride = L_12;
		void* L_13 = ___0_dataPointer;
		(&V_0)->___m_Buffer = (uint8_t*)L_13;
		int32_t L_14 = ___2_length;
		(&V_0)->___m_Length = L_14;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_15 = V_0;
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m3A6F8C968B38411A4351D3E06251E4A6830BDE23_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0((&___0_array), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_tAC2BA8E7A468F184EEB8E60D27E31625048FB901), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mF37FF893F4B9859C00A38E0D8AABABE18D409F58_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t5D5D8920E337D7BD5E7768B87B99898C6903550B), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mEED7C960744565E22ABDCF47B04BB4F1D3D4D3AF_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mEAE99474042D7BD88BE25CEA29554F30CC6DDBAD(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t580C6AF35755E86023C674933ABA4655842A27C6), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mE00CC35601503008B6319F4E8011CE96782269AE_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_tBEAE782C8CA74715F118D46BAEE2B326BB1472FD), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_mEA378A66FE40F4B2A3ABCCE3C5CCDC6B77EEAC99_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0 = ___0_roSpan;
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t16769CF6C20EA06B32C4B09516BDB65D2DC804AB), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m4BA2B56A0EB03E04AECC09FFCF0B4320A4788AD6_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		int32_t L_4;
		L_4 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mE0D8EC4A54AAE12B4588D4254D004A219311A6EF(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_tCE349946DF6DE9EA66C168BF8F86F155DB2F96D6), L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_m0B57431881D9F67C3BDA5D83629DB00DCCDF1BC8_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, ___2_value, SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		int32_t L_5;
		L_5 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mB5FB2889BCE2830E30498F3DE5DFE26901C0C878(L_0, L_1, il2cpp_codegen_memcpy(L_4, L_2, SizeOf_T_t793E0D03910858DC2B73D845B262490416204DEC), L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m18BDEFA9ACBD2B0621A230F42CA1190C13E40A59_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeArray_1_AsReadOnlySpan_mEDF5E795C5FC628766F2016DFB498E87E36BA3A0((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D);
		int32_t L_5;
		L_5 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t86EC7AD22FF03426071C18A93C53C043090B2574), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_4, L_2, SizeOf_U_t4B8E50D69A3C0C52BFA0AC809A656B78ACD7003D): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEB3008F32EC83831765762622BBB11C6B7BC1D7C_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = NativeList_1_AsReadOnlySpan_m9B73FBB50388B80F5882E4C29601D1A20DE81C43((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974);
		int32_t L_5;
		L_5 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_tAC1ED13514DC7721E37F0E9428452F902803F44E), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_4, L_2, SizeOf_U_t5E1257891E5DF132ADA82279AABD722E91B20974): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mD435A28E9461F36F9490F8E0CF60763FE5B5EED3_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_inline(L_0, NULL);
		int32_t L_2;
		L_2 = NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline((&___0_container), NULL);
		il2cpp_codegen_memcpy(L_3, ___1_value, SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33);
		int32_t L_7;
		L_7 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF((Il2CppFullySharedGenericStruct*)L_1, L_2, il2cpp_codegen_memcpy(L_5, L_3, SizeOf_T_t64CE80799B6032C409B9A49995F3A1337ED365A9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? il2cpp_codegen_memcpy(L_6, L_4, SizeOf_U_tCEA9DF823DA80CDD134DEEC8EAA2130FF21B9F33): *(void**)L_4), il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m67CE23383C6721FDEF03FE37FD31C02F398B4C2B_fshared (ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ReadOnly_AsReadOnlySpan_m64C20F2CC8054C58682D3CB09F2D1B7109C17950((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432);
		int32_t L_5;
		L_5 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t5D28F59E0D72A034D6A60808B64A7E730475AD9A), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_4, L_2, SizeOf_U_tF656C53A883AF4D5D9B227B29DB4D0D684C05432): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___0_roSpan), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___0_roSpan), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, ___1_value, SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739);
		int32_t L_10;
		L_10 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF((Il2CppFullySharedGenericStruct*)L_4, L_5, il2cpp_codegen_memcpy(L_8, L_6, SizeOf_T_tFB475C5E064202303E533828917CA17C0D122CE3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? il2cpp_codegen_memcpy(L_9, L_7, SizeOf_U_tA10B3B582BC01AC97091AB427AF659549EF5A739): *(void**)L_7), il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_10;
	}

IL_0020:
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE55072B5E1ACDB3644FBC3A1E093674E369CBFFB_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericStruct ___1_value, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, ___1_value, SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___2_comp : &___2_comp), SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0);
		int32_t L_5;
		L_5 = NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA4AD54929CBC51F673331E05EF70F1A3C61783BD(L_0, il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_tBE9BDD9637297B0CE397C47A92971E02E573170A), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_4, L_2, SizeOf_U_t1201D6465E6320EFCBD3E5906FA139D9C48D10A0): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_BinarySearch_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m8C0FBAD1AF39307C240BF78F1446848F39A6D0CF_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericStruct ___2_value, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	memset(V_3, 0, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
	int32_t V_4 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_length;
		V_1 = L_0;
		goto IL_0045;
	}

IL_0006:
	{
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(L_2>>1))));
		Il2CppFullySharedGenericStruct* L_3 = ___0_ptr;
		int32_t L_4 = V_2;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D;
		il2cpp_codegen_memcpy(L_7, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))), SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(V_3, L_7, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(L_8, ___2_value, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		il2cpp_codegen_memcpy(L_9, V_3, SizeOf_T_t70C3EC27D19FAFB4F9747837E54C3FACF3C6965D);
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_comp : &___3_comp), &L_11, L_10);
		int32_t L_13 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_12, L_11.method,L_11.thisPtr, L_8, L_9);
		V_4 = L_13;
		int32_t L_14 = V_4;
		if (L_14)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_15 = V_2;
		return L_15;
	}

IL_0034:
	{
		int32_t L_16 = V_4;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_17 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
	}

IL_0041:
	{
		int32_t L_19 = V_1;
		V_1 = ((int32_t)(L_19>>1));
	}

IL_0045:
	{
		int32_t L_20 = V_1;
		if (L_20)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_21 = V_0;
		return ((~L_21));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_CheckComparer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m85F09B28E4C56532C553F26702140AD780B0C83F_fshared (Il2CppFullySharedGenericStruct* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_38 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	void* L_51 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_16 = L_2;
	const Il2CppFullySharedGenericStruct L_23 = L_2;
	const Il2CppFullySharedGenericStruct L_29 = L_2;
	const Il2CppFullySharedGenericStruct L_36 = L_2;
	const Il2CppFullySharedGenericStruct L_43 = L_2;
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_17 = L_3;
	const Il2CppFullySharedGenericStruct L_24 = L_3;
	const Il2CppFullySharedGenericStruct L_30 = L_3;
	const Il2CppFullySharedGenericStruct L_37 = L_3;
	const Il2CppFullySharedGenericStruct L_44 = L_3;
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	const Il2CppFullySharedGenericStruct L_18 = L_4;
	const Il2CppFullySharedGenericStruct L_49 = L_4;
	const Il2CppFullySharedGenericStruct L_50 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	memset(V_0, 0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	memset(V_3, 0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
	{
		int32_t L_0 = ___1_length;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00da;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1 = ___0_array;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_4, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_6, L_5);
		int32_t L_8 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_7, L_6.method,L_6.thisPtr, L_3, L_4);
		if (!L_8)
		{
			goto IL_002a;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral19710C29C28F677ED5E80B5C8FFB9B9F5CD6AB3A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_002a:
	{
		V_1 = 1;
		int32_t L_10 = ___1_length;
		int32_t L_11;
		L_11 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(L_10, 8, NULL);
		V_2 = L_11;
		goto IL_00d3;
	}

IL_0039:
	{
		Il2CppFullySharedGenericStruct* L_12 = ___0_array;
		int32_t L_13 = V_1;
		intptr_t L_14 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_13,NULL));
		uint32_t L_15 = SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619;
		il2cpp_codegen_memcpy(L_16, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(L_14, (int32_t)L_15)))), SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(V_3, L_16, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_17, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_18, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_20;
		Il2CppMethodPointer L_21 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_20, L_19);
		int32_t L_22 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_21, L_20.method,L_20.thisPtr, L_17, L_18);
		if (L_22)
		{
			goto IL_006c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_23, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_24, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_26, L_25);
		int32_t L_28 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_27, L_26.method,L_26.thisPtr, L_23, L_24);
		if (!L_28)
		{
			goto IL_00cf;
		}
	}

IL_006c:
	{
		il2cpp_codegen_memcpy(L_29, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_30, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_32;
		Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_32, L_31);
		int32_t L_34 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_33, L_32.method,L_32.thisPtr, L_29, L_30);
		if (L_34)
		{
			goto IL_0088;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_35 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0166BFBEA755AEC68D894E2718E0F43AC621B48E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, method);
	}

IL_0088:
	{
		il2cpp_codegen_memcpy(L_36, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_37, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_39;
		Il2CppMethodPointer L_40 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_39, L_38);
		int32_t L_41 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_40, L_39.method,L_39.thisPtr, L_36, L_37);
		if (L_41)
		{
			goto IL_00a4;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F08B108AE90A47E2C4B3A0DC16321A36C9AFB54)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_00a4:
	{
		il2cpp_codegen_memcpy(L_43, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_44, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_46;
		Il2CppMethodPointer L_47 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_46, L_45);
		int32_t L_48 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_47, L_46.method,L_46.thisPtr, L_43, L_44);
		il2cpp_codegen_memcpy(L_49, V_3, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		il2cpp_codegen_memcpy(L_50, V_0, SizeOf_T_t1AFA5A4B3F75B3F0ABC3FCAE64447DD0C4F65619);
		Il2CppConstrainedCallData L_52;
		Il2CppMethodPointer L_53 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_comp : &___2_comp), &L_52, L_51);
		int32_t L_54 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_53, L_52.method,L_52.thisPtr, L_49, L_50);
		if ((!(((uint32_t)L_48) == ((uint32_t)L_54))))
		{
			goto IL_00da;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_55 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_55, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEF83955BF61125FC832C506DE4DB5985B784A2C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
	}

IL_00cf:
	{
		int32_t L_56 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_00d3:
	{
		int32_t L_57 = V_1;
		int32_t L_58 = V_2;
		if ((((int32_t)L_57) < ((int32_t)L_58)))
		{
			goto IL_0039;
		}
	}

IL_00da:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_CheckStrideMatchesSize_TisIl2CppFullySharedGenericStruct_mA73CB99208E9AE13EAB0F7E1854579E56B98B6E1_fshared (int32_t ___0_stride, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t1E4378C7A520A3CCB1C179FD37AC45442DD53E36 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		int32_t L_0 = ___0_stride;
		uint32_t L_1 = SizeOf_T_t1E4378C7A520A3CCB1C179FD37AC45442DD53E36;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9DDDC1BB86D19164517493AC7ED9674192AFD37)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
	const Il2CppFullySharedGenericAny L_19 = L_7;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
	const Il2CppFullySharedGenericAny L_20 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		V_1 = ((int32_t)(L_2/2));
		goto IL_001a;
	}

IL_000c:
	{
		void* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = V_0;
		int32_t L_6 = ___1_lo;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756(L_3, L_4, L_5, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_8, L_7, SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE): *(void**)L_7), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}

IL_001a:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_11 = V_0;
		V_2 = L_11;
		goto IL_003e;
	}

IL_0022:
	{
		void* L_12 = ___0_array;
		int32_t L_13 = ___1_lo;
		int32_t L_14 = ___1_lo;
		int32_t L_15 = V_2;
		NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF(L_12, L_13, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_14, L_15)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_16 = ___0_array;
		int32_t L_17 = V_2;
		int32_t L_18 = ___1_lo;
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE);
		NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756(L_16, 1, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_20, L_19, SizeOf_U_t96D9FF22A5AC3987AA45E988B0F157C7355E83BE): *(void**)L_19), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_003e:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) > ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
	const Il2CppFullySharedGenericAny L_23 = L_9;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
	const Il2CppFullySharedGenericAny L_24 = L_10;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___2_hi;
		int32_t L_1 = *(L_0);
		int32_t* L_2 = ___1_lo;
		int32_t L_3 = *(L_2);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_1, L_3)), 1));
		int32_t L_4 = V_0;
		V_1 = ((int32_t)(L_4/2));
		goto IL_001c;
	}

IL_000e:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		int32_t* L_8 = ___1_lo;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
		NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921(L_5, L_6, L_7, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_10, L_9, SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F): *(void**)L_9), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_001c:
	{
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)1)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_13 = V_0;
		V_2 = L_13;
		goto IL_0042;
	}

IL_0024:
	{
		void* L_14 = ___0_array;
		int32_t* L_15 = ___1_lo;
		int32_t L_16 = *(L_15);
		int32_t* L_17 = ___1_lo;
		int32_t L_18 = *(L_17);
		int32_t L_19 = V_2;
		NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24(L_14, L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_18, L_19)), 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_20 = ___0_array;
		int32_t L_21 = V_2;
		int32_t* L_22 = ___1_lo;
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F);
		NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921(L_20, 1, ((int32_t)il2cpp_codegen_subtract(L_21, 1)), L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_24, L_23, SizeOf_U_t6EB6498AFAF7133B4FC1AA574C78C3DB3AB44C6F): *(void**)L_23), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_0042:
	{
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) > ((int32_t)1)))
		{
			goto IL_0024;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Heapify_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m0AA47961221DDE83E16CD07FB4C4DC6635F44756_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_18 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_31 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_13 = L_3;
	const Il2CppFullySharedGenericStruct L_29 = L_3;
	const Il2CppFullySharedGenericStruct L_41 = L_3;
	const Il2CppFullySharedGenericStruct L_49 = L_3;
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	const Il2CppFullySharedGenericStruct L_30 = L_17;
	const Il2CppFullySharedGenericStruct L_42 = L_17;
	const Il2CppFullySharedGenericStruct L_50 = L_17;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	const Il2CppFullySharedGenericAny L_9 = L_7;
	const Il2CppFullySharedGenericAny L_23 = L_7;
	const Il2CppFullySharedGenericAny L_25 = L_7;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	memset(V_0, 0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(V_2, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B4_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B3_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B8_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	memset(G_B7_0, 0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___3_lo;
		int32_t L_2 = ___1_i;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_1, L_2)), 1)), (Il2CppFullySharedGenericStruct*)L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		goto IL_00a6;
	}

IL_0011:
	{
		int32_t L_4 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_4));
		int32_t L_5 = V_1;
		int32_t L_6 = ___2_n;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0059;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(L_7, V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		bool L_8 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_7);
		if (L_8)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
			goto IL_0033;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}
	{
		il2cpp_codegen_memcpy(L_9, G_B3_0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}

IL_0033:
	{
		void* L_10 = ___0_array;
		int32_t L_11 = ___3_lo;
		int32_t L_12 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_11, L_12)), 1)), (Il2CppFullySharedGenericStruct*)L_13, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_14 = ___0_array;
		int32_t L_15 = ___3_lo;
		int32_t L_16 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_14, ((int32_t)il2cpp_codegen_add(L_15, L_16)), (Il2CppFullySharedGenericStruct*)L_17, il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppConstrainedCallData L_19;
		Il2CppMethodPointer L_20 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B4_0, &L_19, L_18);
		int32_t L_21 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_20, L_19.method,L_19.thisPtr, L_13, L_17);
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_0059:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_23);
		if (L_24)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
			goto IL_0073;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}
	{
		il2cpp_codegen_memcpy(L_25, G_B7_0, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(V_2, L_25, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t3859302F7BB1D87B147FFF956346B678DE25245F);
	}

IL_0073:
	{
		void* L_26 = ___0_array;
		int32_t L_27 = ___3_lo;
		int32_t L_28 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_26, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_27, L_28)), 1)), (Il2CppFullySharedGenericStruct*)L_29, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		Il2CppConstrainedCallData L_32;
		Il2CppMethodPointer L_33 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B8_0, &L_32, L_31);
		int32_t L_34 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_33, L_32.method,L_32.thisPtr, L_29, L_30);
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_00af;
		}
	}
	{
		void* L_35 = ___0_array;
		int32_t L_36 = ___3_lo;
		int32_t L_37 = ___1_i;
		void* L_38 = ___0_array;
		int32_t L_39 = ___3_lo;
		int32_t L_40 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, L_40)), 1)), (Il2CppFullySharedGenericStruct*)L_41, il2cpp_rgctx_method(method->rgctx_data, 0));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_35, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_36, L_37)), 1)), il2cpp_codegen_memcpy(L_42, L_41, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_43 = V_1;
		___1_i = L_43;
	}

IL_00a6:
	{
		int32_t L_44 = ___1_i;
		int32_t L_45 = ___2_n;
		if ((((int32_t)L_44) <= ((int32_t)((int32_t)(L_45/2)))))
		{
			goto IL_0011;
		}
	}

IL_00af:
	{
		void* L_46 = ___0_array;
		int32_t L_47 = ___3_lo;
		int32_t L_48 = ___1_i;
		il2cpp_codegen_memcpy(L_49, V_0, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E);
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_46, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_47, L_48)), 1)), il2cpp_codegen_memcpy(L_50, L_49, SizeOf_T_tA43B34C466236E4CF4ACB1D7267181A8DCE8129E), il2cpp_rgctx_method(method->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_HeapifyStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6B0A1FA3EA057556E42D3B8022C12B8256BDE921_fshared (void* ___0_array, int32_t ___1_i, int32_t ___2_n, int32_t* ___3_lo, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	const Il2CppFullySharedGenericStruct L_15 = L_4;
	const Il2CppFullySharedGenericStruct L_33 = L_4;
	const Il2CppFullySharedGenericStruct L_47 = L_4;
	const Il2CppFullySharedGenericStruct L_56 = L_4;
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	const Il2CppFullySharedGenericStruct L_34 = L_20;
	const Il2CppFullySharedGenericStruct L_48 = L_20;
	const Il2CppFullySharedGenericStruct L_57 = L_20;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	const Il2CppFullySharedGenericAny L_10 = L_8;
	const Il2CppFullySharedGenericAny L_26 = L_8;
	const Il2CppFullySharedGenericAny L_28 = L_8;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	memset(V_0, 0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(V_2, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B4_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B3_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B8_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	memset(G_B7_0, 0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	{
		void* L_0 = ___0_array;
		int32_t* L_1 = ___3_lo;
		int32_t L_2 = *(L_1);
		int32_t L_3 = ___1_i;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1)), (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		goto IL_00ac;
	}

IL_0012:
	{
		int32_t L_5 = ___1_i;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_5));
		int32_t L_6 = V_1;
		int32_t L_7 = ___2_n;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_005c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		bool L_9 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_8);
		if (L_9)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
			goto IL_0034;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}
	{
		il2cpp_codegen_memcpy(L_10, G_B3_0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(V_2, L_10, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}

IL_0034:
	{
		void* L_11 = ___0_array;
		int32_t* L_12 = ___3_lo;
		int32_t L_13 = *(L_12);
		int32_t L_14 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_11, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_13, L_14)), 1)), (Il2CppFullySharedGenericStruct*)L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		void* L_16 = ___0_array;
		int32_t* L_17 = ___3_lo;
		int32_t L_18 = *(L_17);
		int32_t L_19 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_16, ((int32_t)il2cpp_codegen_add(L_18, L_19)), (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B4_0, &L_22, L_21);
		int32_t L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_23, L_22.method,L_22.thisPtr, L_15, L_20);
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_005c:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(L_26, V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		bool L_27 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 2), L_26);
		if (L_27)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
			goto IL_0076;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___4_comp : &___4_comp), SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}
	{
		il2cpp_codegen_memcpy(L_28, G_B7_0, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(V_2, L_28, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_U_t76FEB20E7586C37C25035BE22E17B8E4381E04AB);
	}

IL_0076:
	{
		void* L_29 = ___0_array;
		int32_t* L_30 = ___3_lo;
		int32_t L_31 = *(L_30);
		int32_t L_32 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_29, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_31, L_32)), 1)), (Il2CppFullySharedGenericStruct*)L_33, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_34, V_0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		Il2CppConstrainedCallData L_36;
		Il2CppMethodPointer L_37 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B8_0, &L_36, L_35);
		int32_t L_38 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_37, L_36.method,L_36.thisPtr, L_33, L_34);
		if ((((int32_t)L_38) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		void* L_39 = ___0_array;
		int32_t* L_40 = ___3_lo;
		int32_t L_41 = *(L_40);
		int32_t L_42 = ___1_i;
		void* L_43 = ___0_array;
		int32_t* L_44 = ___3_lo;
		int32_t L_45 = *(L_44);
		int32_t L_46 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_43, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_45, L_46)), 1)), (Il2CppFullySharedGenericStruct*)L_47, il2cpp_rgctx_method(method->rgctx_data, 0));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_39, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_41, L_42)), 1)), il2cpp_codegen_memcpy(L_48, L_47, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_49 = V_1;
		___1_i = L_49;
	}

IL_00ac:
	{
		int32_t L_50 = ___1_i;
		int32_t L_51 = ___2_n;
		if ((((int32_t)L_50) <= ((int32_t)((int32_t)(L_51/2)))))
		{
			goto IL_0012;
		}
	}

IL_00b5:
	{
		void* L_52 = ___0_array;
		int32_t* L_53 = ___3_lo;
		int32_t L_54 = *(L_53);
		int32_t L_55 = ___1_i;
		il2cpp_codegen_memcpy(L_56, V_0, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5);
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_52, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_54, L_55)), 1)), il2cpp_codegen_memcpy(L_57, L_56, SizeOf_T_t19064D4641655EC6FB9870E5D7CFBD114C377FF5), il2cpp_rgctx_method(method->rgctx_data, 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_21 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	const Il2CppFullySharedGenericStruct L_9 = L_4;
	const Il2CppFullySharedGenericStruct L_17 = L_4;
	const Il2CppFullySharedGenericStruct L_27 = L_4;
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	const Il2CppFullySharedGenericStruct L_20 = L_10;
	const Il2CppFullySharedGenericStruct L_28 = L_10;
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	const Il2CppFullySharedGenericAny L_16 = L_14;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	memset(V_2, 0, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(V_3, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(G_B6_0, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	memset(G_B5_0, 0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	{
		int32_t L_0 = ___1_lo;
		V_0 = L_0;
		goto IL_0068;
	}

IL_0004:
	{
		int32_t L_1 = V_0;
		V_1 = L_1;
		void* L_2 = ___0_array;
		int32_t L_3 = V_0;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(V_2, L_4, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		goto IL_0026;
	}

IL_0012:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = V_1;
		void* L_7 = ___0_array;
		int32_t L_8 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_7, L_8, (Il2CppFullySharedGenericStruct*)L_9, il2cpp_rgctx_method(method->rgctx_data, 0));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_codegen_memcpy(L_10, L_9, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_0026:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = ___1_lo;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(L_14, V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		bool L_15 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_14);
		if (L_15)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
			goto IL_0044;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	}
	{
		il2cpp_codegen_memcpy(L_16, G_B5_0, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(V_3, L_16, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t71749F86706A6DD523CBA96FDE0CAFF19DC52F9D);
	}

IL_0044:
	{
		il2cpp_codegen_memcpy(L_17, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		void* L_18 = ___0_array;
		int32_t L_19 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_18, L_19, (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppConstrainedCallData L_22;
		Il2CppMethodPointer L_23 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_22, L_21);
		int32_t L_24 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_23, L_22.method,L_22.thisPtr, L_17, L_20);
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_0012;
		}
	}

IL_005a:
	{
		void* L_25 = ___0_array;
		int32_t L_26 = V_1;
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1);
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_25, ((int32_t)il2cpp_codegen_add(L_26, 1)), il2cpp_codegen_memcpy(L_28, L_27, SizeOf_T_t989AD081463D7816B3C7024B0855781C5E3439A1), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0068:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = ___2_hi;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_23 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 3)));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	const Il2CppFullySharedGenericStruct L_10 = L_5;
	const Il2CppFullySharedGenericStruct L_19 = L_5;
	const Il2CppFullySharedGenericStruct L_29 = L_5;
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	const Il2CppFullySharedGenericStruct L_22 = L_11;
	const Il2CppFullySharedGenericStruct L_30 = L_11;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	const Il2CppFullySharedGenericAny L_18 = L_16;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	memset(V_2, 0, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(V_3, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(G_B6_0, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	Il2CppFullySharedGenericAny G_B5_0 = alloca(SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	memset(G_B5_0, 0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	{
		int32_t* L_0 = ___1_lo;
		int32_t L_1 = *(L_0);
		V_0 = L_1;
		goto IL_006a;
	}

IL_0005:
	{
		int32_t L_2 = V_0;
		V_1 = L_2;
		void* L_3 = ___0_array;
		int32_t L_4 = V_0;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), (Il2CppFullySharedGenericStruct*)L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(V_2, L_5, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		goto IL_0027;
	}

IL_0013:
	{
		void* L_6 = ___0_array;
		int32_t L_7 = V_1;
		void* L_8 = ___0_array;
		int32_t L_9 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10, il2cpp_rgctx_method(method->rgctx_data, 0));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_0027:
	{
		int32_t L_13 = V_1;
		int32_t* L_14 = ___1_lo;
		int32_t L_15 = *(L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_005c;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(L_16, V_3, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		bool L_17 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 3), L_16);
		if (L_17)
		{
			il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
			goto IL_0046;
		}
		il2cpp_codegen_memcpy(G_B5_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___3_comp : &___3_comp), SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	}
	{
		il2cpp_codegen_memcpy(L_18, G_B5_0, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(V_3, L_18, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_U_t8E1C744694BEA1B24348DBCE7F8A9F80720D9187);
	}

IL_0046:
	{
		il2cpp_codegen_memcpy(L_19, V_2, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		void* L_20 = ___0_array;
		int32_t L_21 = V_1;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_20, L_21, (Il2CppFullySharedGenericStruct*)L_22, il2cpp_rgctx_method(method->rgctx_data, 0));
		Il2CppConstrainedCallData L_24;
		Il2CppMethodPointer L_25 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 3), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)G_B6_0, &L_24, L_23);
		int32_t L_26 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_25, L_24.method,L_24.thisPtr, L_19, L_22);
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}

IL_005c:
	{
		void* L_27 = ___0_array;
		int32_t L_28 = V_1;
		il2cpp_codegen_memcpy(L_29, V_2, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E);
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_27, ((int32_t)il2cpp_codegen_add(L_28, 1)), il2cpp_codegen_memcpy(L_30, L_29, SizeOf_T_tC7EBDF1719ED691281F3F7E5B6F5E0B653B4B11E), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_31 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_006a:
	{
		int32_t L_32 = V_0;
		int32_t* L_33 = ___2_hi;
		int32_t L_34 = *(L_33);
		if ((((int32_t)L_32) < ((int32_t)L_34)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_length;
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F);
		NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8(L_0, 0, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), ((int32_t)il2cpp_codegen_multiply(2, L_3)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_5, L_4, SizeOf_U_t984657F3CA449F6965F5B6A61D21C535A3B6AD2F): *(void**)L_4), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756_fshared (void* ___0_array, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		void* L_0 = ___0_array;
		V_0 = 0;
		int32_t L_1 = ___1_length;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = ___1_length;
		int32_t L_3;
		L_3 = CollectionHelper_Log2Floor_m67F9EE2135763C03633748FD8E819C2D3F46C1ED(L_2, NULL);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553);
		NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2(L_0, (&V_0), (&V_1), ((int32_t)il2cpp_codegen_multiply(2, L_3)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_5, L_4, SizeOf_U_t4F6752C130AC1C36A17CEAC700E4F057F6DDC553): *(void**)L_4), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2__hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_19 = L_12;
	const Il2CppFullySharedGenericAny L_34 = L_12;
	const Il2CppFullySharedGenericAny L_39 = L_12;
	const Il2CppFullySharedGenericAny L_44 = L_12;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_20 = L_13;
	const Il2CppFullySharedGenericAny L_35 = L_13;
	const Il2CppFullySharedGenericAny L_40 = L_13;
	const Il2CppFullySharedGenericAny L_45 = L_13;
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_50 = L_25;
	const Il2CppFullySharedGenericAny L_26 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_51 = L_26;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t* L_0 = ___2__hi;
		int32_t L_1 = *(L_0);
		V_0 = L_1;
		goto IL_0093;
	}

IL_0008:
	{
		int32_t L_2 = V_0;
		int32_t* L_3 = ___1_lo;
		int32_t L_4 = *(L_3);
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_2, L_4)), 1));
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)16))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_6 = V_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0019:
	{
		int32_t L_7 = V_1;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		void* L_8 = ___0_array;
		int32_t* L_9 = ___1_lo;
		int32_t L_10 = *(L_9);
		int32_t L_11 = V_0;
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_8, L_10, L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_13, L_12, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_12), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0029:
	{
		int32_t L_14 = V_1;
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_0052;
		}
	}
	{
		void* L_15 = ___0_array;
		int32_t* L_16 = ___1_lo;
		int32_t L_17 = *(L_16);
		int32_t L_18 = V_0;
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_15, L_17, ((int32_t)il2cpp_codegen_subtract(L_18, 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_20, L_19, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_19), il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_21 = ___0_array;
		int32_t* L_22 = ___1_lo;
		int32_t L_23 = *(L_22);
		int32_t L_24 = V_0;
		il2cpp_codegen_memcpy(L_25, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_21, L_23, L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_26, L_25, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_25), il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_27 = ___0_array;
		int32_t L_28 = V_0;
		int32_t L_29 = V_0;
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_27, ((int32_t)il2cpp_codegen_subtract(L_28, 1)), L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_31, L_30, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_30), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0052:
	{
		void* L_32 = ___0_array;
		int32_t* L_33 = ___1_lo;
		il2cpp_codegen_memcpy(L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		NativeSortExtension_InsertionSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC6CFFB0A8FC1BF15EAECA35C424AEF6EC0770471(L_32, L_33, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_35, L_34, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_34), il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_005e:
	{
		int32_t L_36 = ___3_depth;
		if (L_36)
		{
			goto IL_006d;
		}
	}
	{
		void* L_37 = ___0_array;
		int32_t* L_38 = ___1_lo;
		il2cpp_codegen_memcpy(L_39, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		NativeSortExtension_HeapSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m2CC31064DF6368EAF82AC8B93E49B5672AB577F8(L_37, L_38, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_40, L_39, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_39), il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_006d:
	{
		int32_t L_41 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
		void* L_42 = ___0_array;
		int32_t* L_43 = ___1_lo;
		il2cpp_codegen_memcpy(L_44, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		int32_t L_46;
		L_46 = NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909(L_42, L_43, (&V_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_45, L_44, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_44), il2cpp_rgctx_method(method->rgctx_data, 4));
		V_2 = L_46;
		void* L_47 = ___0_array;
		int32_t L_48 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = ___3_depth;
		il2cpp_codegen_memcpy(L_50, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46);
		NativeSortExtension_IntroSortStruct_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C179EA7B364CA3BA2C517B4C526F7142C7A6A2(L_47, (&V_3), (&V_0), L_49, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_51, L_50, SizeOf_U_t0DB061379F396F6A91262C4BA649D65D5D09AA46): *(void**)L_50), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_52 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_52, 1));
	}

IL_0093:
	{
		int32_t L_53 = V_0;
		int32_t* L_54 = ___1_lo;
		int32_t L_55 = *(L_54);
		if ((((int32_t)L_53) > ((int32_t)L_55)))
		{
			goto IL_0008;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, int32_t ___3_depth, Il2CppFullySharedGenericAny ___4_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_14 = L_8;
	const Il2CppFullySharedGenericAny L_29 = L_8;
	const Il2CppFullySharedGenericAny L_35 = L_8;
	const Il2CppFullySharedGenericAny L_41 = L_8;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_15 = L_9;
	const Il2CppFullySharedGenericAny L_30 = L_9;
	const Il2CppFullySharedGenericAny L_36 = L_9;
	const Il2CppFullySharedGenericAny L_42 = L_9;
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_48 = L_19;
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_49 = L_20;
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_0086;
	}

IL_0005:
	{
		int32_t L_0 = ___2_hi;
		int32_t L_1 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_0, L_1)), 1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) > ((int32_t)((int32_t)16))))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lo;
		int32_t L_7 = ___2_hi;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_5, L_6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_9, L_8, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_8), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_0024:
	{
		int32_t L_10 = V_0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_004b;
		}
	}
	{
		void* L_11 = ___0_array;
		int32_t L_12 = ___1_lo;
		int32_t L_13 = ___2_hi;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_11, L_12, ((int32_t)il2cpp_codegen_subtract(L_13, 1)), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_15, L_14, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_14), il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_16 = ___0_array;
		int32_t L_17 = ___1_lo;
		int32_t L_18 = ___2_hi;
		il2cpp_codegen_memcpy(L_19, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_16, L_17, L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_20, L_19, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_19), il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_21 = ___0_array;
		int32_t L_22 = ___2_hi;
		int32_t L_23 = ___2_hi;
		il2cpp_codegen_memcpy(L_24, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_21, ((int32_t)il2cpp_codegen_subtract(L_22, 1)), L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_25, L_24, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_24), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}

IL_004b:
	{
		void* L_26 = ___0_array;
		int32_t L_27 = ___1_lo;
		int32_t L_28 = ___2_hi;
		il2cpp_codegen_memcpy(L_29, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		NativeSortExtension_InsertionSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1C2A4A941C9938043B515BF59D9169D0066A8F1F(L_26, L_27, L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_30, L_29, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_29), il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}

IL_0056:
	{
		int32_t L_31 = ___3_depth;
		if (L_31)
		{
			goto IL_0064;
		}
	}
	{
		void* L_32 = ___0_array;
		int32_t L_33 = ___1_lo;
		int32_t L_34 = ___2_hi;
		il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		NativeSortExtension_HeapSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m161F46C88A71F876EBED90282ED530DCA0E9A657(L_32, L_33, L_34, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_36, L_35, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_35), il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}

IL_0064:
	{
		int32_t L_37 = ___3_depth;
		___3_depth = ((int32_t)il2cpp_codegen_subtract(L_37, 1));
		void* L_38 = ___0_array;
		int32_t L_39 = ___1_lo;
		int32_t L_40 = ___2_hi;
		il2cpp_codegen_memcpy(L_41, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		int32_t L_43;
		L_43 = NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278(L_38, L_39, L_40, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_42, L_41, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_41), il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_43;
		void* L_44 = ___0_array;
		int32_t L_45 = V_1;
		int32_t L_46 = ___2_hi;
		int32_t L_47 = ___3_depth;
		il2cpp_codegen_memcpy(L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___4_comp : &___4_comp), SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D);
		NativeSortExtension_IntroSort_R_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mE7D2E7D393807B71500A81BC5FDE51DB09E4FEB8(L_44, ((int32_t)il2cpp_codegen_add(L_45, 1)), L_46, L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_49, L_48, SizeOf_U_t598A06BA476C420A200D0887A378DFB8568C4C4D): *(void**)L_48), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_50 = V_1;
		___2_hi = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
	}

IL_0086:
	{
		int32_t L_51 = ___2_hi;
		int32_t L_52 = ___1_lo;
		if ((((int32_t)L_51) > ((int32_t)L_52)))
		{
			goto IL_0005;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_Partition_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m6BB9FFB51FC10B9DC7A645E05CB970F49DD9C278_fshared (void* ___0_array, int32_t ___1_lo, int32_t ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_36 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_50 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_20 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_31 = L_20;
	const Il2CppFullySharedGenericStruct L_45 = L_20;
	const Il2CppFullySharedGenericStruct L_35 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	const Il2CppFullySharedGenericStruct L_49 = L_35;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_28 = L_6;
	const Il2CppFullySharedGenericAny L_30 = L_6;
	const Il2CppFullySharedGenericAny L_42 = L_6;
	const Il2CppFullySharedGenericAny L_44 = L_6;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	memset(V_1, 0, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(V_4, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B4_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B3_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B8_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	memset(G_B7_0, 0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	{
		int32_t L_0 = ___1_lo;
		int32_t L_1 = ___2_hi;
		int32_t L_2 = ___1_lo;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_1, L_2))/2))));
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lo;
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_3, L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_7, L_6, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4): *(void**)L_6), il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_8 = ___0_array;
		int32_t L_9 = ___1_lo;
		int32_t L_10 = ___2_hi;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_8, L_9, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_12, L_11, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4): *(void**)L_11), il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_13 = ___0_array;
		int32_t L_14 = V_0;
		int32_t L_15 = ___2_hi;
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C(L_13, L_14, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_17, L_16, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4): *(void**)L_16), il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_18 = ___0_array;
		int32_t L_19 = V_0;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_18, L_19, (Il2CppFullySharedGenericStruct*)L_20, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(V_1, L_20, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_21 = ___0_array;
		int32_t L_22 = V_0;
		int32_t L_23 = ___2_hi;
		NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF(L_21, L_22, ((int32_t)il2cpp_codegen_subtract(L_23, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_24 = ___1_lo;
		V_2 = L_24;
		int32_t L_25 = ___2_hi;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
		goto IL_00c0;
	}

IL_0040:
	{
		int32_t L_26 = V_2;
		int32_t L_27 = ___2_hi;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_007a;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(L_28, V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		bool L_29 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_28);
		if (L_29)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
			goto IL_0060;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}
	{
		il2cpp_codegen_memcpy(L_30, G_B3_0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(V_4, L_30, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}

IL_0060:
	{
		il2cpp_codegen_memcpy(L_31, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_32 = ___0_array;
		int32_t L_33 = V_2;
		int32_t L_34 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		V_2 = L_34;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_32, L_34, (Il2CppFullySharedGenericStruct*)L_35, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppConstrainedCallData L_37;
		Il2CppMethodPointer L_38 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B4_0, &L_37, L_36);
		int32_t L_39 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_38, L_37.method,L_37.thisPtr, L_31, L_35);
		if ((((int32_t)L_39) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}

IL_007a:
	{
		int32_t L_40 = V_3;
		int32_t L_41 = V_2;
		if ((((int32_t)L_40) <= ((int32_t)L_41)))
		{
			goto IL_00b4;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(L_42, V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		bool L_43 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_42);
		if (L_43)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
			goto IL_009a;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}
	{
		il2cpp_codegen_memcpy(L_44, G_B7_0, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(V_4, L_44, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_tC345929E416F15F6572F8BE2BAE8C0E611FA26D4);
	}

IL_009a:
	{
		il2cpp_codegen_memcpy(L_45, V_1, SizeOf_T_t9EF72661B3BD897FB6628CE2E1B95D068B06580A);
		void* L_46 = ___0_array;
		int32_t L_47 = V_3;
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract(L_47, 1));
		V_3 = L_48;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_46, L_48, (Il2CppFullySharedGenericStruct*)L_49, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppConstrainedCallData L_51;
		Il2CppMethodPointer L_52 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B8_0, &L_51, L_50);
		int32_t L_53 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_52, L_51.method,L_51.thisPtr, L_45, L_49);
		if ((((int32_t)L_53) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}

IL_00b4:
	{
		int32_t L_54 = V_2;
		int32_t L_55 = V_3;
		if ((((int32_t)L_54) >= ((int32_t)L_55)))
		{
			goto IL_00c7;
		}
	}
	{
		void* L_56 = ___0_array;
		int32_t L_57 = V_2;
		int32_t L_58 = V_3;
		NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF(L_56, L_57, L_58, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_00c0:
	{
		int32_t L_59 = V_2;
		int32_t L_60 = V_3;
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_0040;
		}
	}

IL_00c7:
	{
		void* L_61 = ___0_array;
		int32_t L_62 = V_2;
		int32_t L_63 = ___2_hi;
		NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF(L_61, L_62, ((int32_t)il2cpp_codegen_subtract(L_63, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_64 = V_2;
		return L_64;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeSortExtension_PartitionStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m73AD8A0117E3A2C21C4A32B60389FD87BFF08909_fshared (void* ___0_array, int32_t* ___1_lo, int32_t* ___2_hi, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_47 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	void* L_61 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_27 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	const Il2CppFullySharedGenericStruct L_42 = L_27;
	const Il2CppFullySharedGenericStruct L_56 = L_27;
	const Il2CppFullySharedGenericStruct L_46 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	const Il2CppFullySharedGenericStruct L_60 = L_46;
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_39 = L_10;
	const Il2CppFullySharedGenericAny L_41 = L_10;
	const Il2CppFullySharedGenericAny L_53 = L_10;
	const Il2CppFullySharedGenericAny L_55 = L_10;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	memset(V_1, 0, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(V_4, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B4_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B3_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B8_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B8_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	Il2CppFullySharedGenericAny G_B7_0 = alloca(SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	memset(G_B7_0, 0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	{
		int32_t* L_0 = ___1_lo;
		int32_t L_1 = *(L_0);
		int32_t* L_2 = ___2_hi;
		int32_t L_3 = *(L_2);
		int32_t* L_4 = ___1_lo;
		int32_t L_5 = *(L_4);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_3, L_5))/2))));
		void* L_6 = ___0_array;
		int32_t* L_7 = ___1_lo;
		int32_t L_8 = *(L_7);
		int32_t L_9 = V_0;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_6, L_8, L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_11, L_10, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443): *(void**)L_10), il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_12 = ___0_array;
		int32_t* L_13 = ___1_lo;
		int32_t L_14 = *(L_13);
		int32_t* L_15 = ___2_hi;
		int32_t L_16 = *(L_15);
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_12, L_14, L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_18, L_17, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443): *(void**)L_17), il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_19 = ___0_array;
		int32_t L_20 = V_0;
		int32_t* L_21 = ___2_hi;
		int32_t L_22 = *(L_21);
		il2cpp_codegen_memcpy(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322(L_19, L_20, L_22, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_24, L_23, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443): *(void**)L_23), il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_25 = ___0_array;
		int32_t L_26 = V_0;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_25, L_26, (Il2CppFullySharedGenericStruct*)L_27, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(V_1, L_27, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_28 = ___0_array;
		int32_t L_29 = V_0;
		int32_t* L_30 = ___2_hi;
		int32_t L_31 = *(L_30);
		NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24(L_28, L_29, ((int32_t)il2cpp_codegen_subtract(L_31, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t* L_32 = ___1_lo;
		int32_t L_33 = *(L_32);
		V_2 = L_33;
		int32_t* L_34 = ___2_hi;
		int32_t L_35 = *(L_34);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		goto IL_00cb;
	}

IL_004a:
	{
		int32_t L_36 = V_2;
		int32_t* L_37 = ___2_hi;
		int32_t L_38 = *(L_37);
		if ((((int32_t)L_36) >= ((int32_t)L_38)))
		{
			goto IL_0085;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(L_39, V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		bool L_40 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_39);
		if (L_40)
		{
			il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
			goto IL_006b;
		}
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}
	{
		il2cpp_codegen_memcpy(L_41, G_B3_0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(V_4, L_41, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(G_B4_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}

IL_006b:
	{
		il2cpp_codegen_memcpy(L_42, V_1, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_43 = ___0_array;
		int32_t L_44 = V_2;
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		V_2 = L_45;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_43, L_45, (Il2CppFullySharedGenericStruct*)L_46, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppConstrainedCallData L_48;
		Il2CppMethodPointer L_49 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B4_0, &L_48, L_47);
		int32_t L_50 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_49, L_48.method,L_48.thisPtr, L_42, L_46);
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_004a;
		}
	}

IL_0085:
	{
		int32_t L_51 = V_3;
		int32_t L_52 = V_2;
		if ((((int32_t)L_51) <= ((int32_t)L_52)))
		{
			goto IL_00bf;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(L_53, V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		bool L_54 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_53);
		if (L_54)
		{
			il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
			goto IL_00a5;
		}
		il2cpp_codegen_memcpy(G_B7_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}
	{
		il2cpp_codegen_memcpy(L_55, G_B7_0, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(V_4, L_55, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
		il2cpp_codegen_memcpy(G_B8_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_U_t15DEB232C452634F6E789E5AF6D3B14F45592443);
	}

IL_00a5:
	{
		il2cpp_codegen_memcpy(L_56, V_1, SizeOf_T_tE407AC349050E4DF07EFC539E8084EFD8A941E4C);
		void* L_57 = ___0_array;
		int32_t L_58 = V_3;
		int32_t L_59 = ((int32_t)il2cpp_codegen_subtract(L_58, 1));
		V_3 = L_59;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_57, L_59, (Il2CppFullySharedGenericStruct*)L_60, il2cpp_rgctx_method(method->rgctx_data, 2));
		Il2CppConstrainedCallData L_62;
		Il2CppMethodPointer L_63 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 5), (void*)G_B8_0, &L_62, L_61);
		int32_t L_64 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_63, L_62.method,L_62.thisPtr, L_56, L_60);
		if ((((int32_t)L_64) < ((int32_t)0)))
		{
			goto IL_0085;
		}
	}

IL_00bf:
	{
		int32_t L_65 = V_2;
		int32_t L_66 = V_3;
		if ((((int32_t)L_65) >= ((int32_t)L_66)))
		{
			goto IL_00d2;
		}
	}
	{
		void* L_67 = ___0_array;
		int32_t L_68 = V_2;
		int32_t L_69 = V_3;
		NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24(L_67, L_68, L_69, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_00cb:
	{
		int32_t L_70 = V_2;
		int32_t L_71 = V_3;
		if ((((int32_t)L_70) < ((int32_t)L_71)))
		{
			goto IL_004a;
		}
	}

IL_00d2:
	{
		void* L_72 = ___0_array;
		int32_t L_73 = V_2;
		int32_t* L_74 = ___2_hi;
		int32_t L_75 = *(L_74);
		NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24(L_72, L_73, ((int32_t)il2cpp_codegen_subtract(L_75, 1)), il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_76 = V_2;
		return L_76;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m3F424B0619C8F1DE51A5059CE9F9B9C77E8AD2E5_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m457C521397981CA0D0A024FF470BA91607194EAB(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m1859D96C5F86215E7A5E852801B9AE8C2B95E239_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m4FEF95715361F218DC8D173A80638DD74D4CF9DC_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m33CF6A0610F6ED93F84E57A1B06B8458C99A2369(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_6 = V_2;
		NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m6F39B3D7410D7450329825AF014077A33502AB26((void*)L_4, L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		uintptr_t L_7 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_7;
	}

IL_0029:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mB449135843E754594001B0EAD70A205709265163_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_mBF35B93651FA209CF501B41C815D071FE63CDA88(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_m197B30912ECA075B47D7BD7712A9F37F52EA5D8D_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m953753EFB68B3528E6B4381ECB390720B5ACDD39((void*)L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m5E371D15E2A098907CED70FD190AB6E6A7A7286D_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF);
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t8392FCD72BC16205155382ED30EBB421226175FF): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m740CC60990F0F5017BED9F38F26CECFCC1BA78C1_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216);
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t716BCA6917D7AE5B382B05528161A14F7E0D2216): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m201F2E16B83FD461CE57913123761F986C0F912D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	int32_t V_1 = 0;
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_inline(L_0, NULL);
		V_0 = (Il2CppFullySharedGenericStruct*)L_1;
		int32_t L_2;
		L_2 = NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline((&___0_container), NULL);
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		int32_t L_4 = V_1;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A);
		NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756((void*)L_3, L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_6, L_5, SizeOf_U_tBB6E307985DBD1BF69234321DCE63D47A5A3854A): *(void**)L_5), il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		int32_t L_5 = V_0;
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F);
		NativeSortExtension_IntroSortStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m61BCDF19FE675663E30578C052D29F6003D56756((void*)L_4, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_7, L_6, SizeOf_U_tAD27A7B134D0C0741758D3AEDEB8E2EC75D7DB4F): *(void**)L_6), il2cpp_rgctx_method(method->rgctx_data, 3));
		uintptr_t L_8 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_8;
	}

IL_0021:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEA0AAB94EC7DADF99B56086E173D45DD63A2AF35_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D);
		NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9FF262B17E1E7B2DCDC9470732751FBAE353C73E(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t0522B71478B41B1C4B354E36ABEFBD88E1F2B88D): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Sort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mC1D8773F403E942EBAE0283BDE80699517E8BBA1_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		int32_t L_1 = ___1_length;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_comp : &___2_comp), SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68);
		NativeSortExtension_IntroSort_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m1BA8C658F1FBC5741051F484F1DC355BD941EDBF((void*)L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_U_t0AA3CBE142BDF838CEA47DDD683A9421842FBB68): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_m8294508A624290C25F7FD9D80316080CE83309F8_fshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_0 = ___0_indices;
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_1 = ___1_values;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_2 = V_0;
		NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_mA1968F7F5487FC1290B528E1B4BBE208FD8FFEC3(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortIndices_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF75387D15CB11681384340B94B35E7AF9D80662F_fshared (Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ___0_indices, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_values, Il2CppFullySharedGenericStruct ___2_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
	const SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E L_7 = alloca(SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	const SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E L_8 = alloca(SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E V_2 = alloca(SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	memset(V_2, 0, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___1_values), NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___1_values), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_1;
		Il2CppFullySharedGenericStruct* L_2 = V_1;
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_2,NULL));
		V_0 = (Il2CppFullySharedGenericStruct*)L_3;
		Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 L_4 = ___0_indices;
		il2cpp_codegen_initobj((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_2, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
		Il2CppFullySharedGenericStruct* L_5 = V_0;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), L_5);
		il2cpp_codegen_memcpy(L_6, ___2_comp, SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
		il2cpp_codegen_write_field_data<true>((SortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E*)V_2, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 5), L_6, SizeOf_U_t1A65BC80DBFF9DF0B0C300328302D7C99591952D);
		il2cpp_codegen_memcpy(L_7, V_2, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC);
		NativeSortExtension_Sort_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisSortIndicesComparer_2_t7095C844A742E4F66E55C1501607E05F4237119E_m0B2E37041303826C0FE97B765B159B5ADE62F5CD(L_4, il2cpp_codegen_memcpy(L_8, L_7, SizeOf_SortIndicesComparer_2_tF11BA8C8CE9EC9E1946D02796AEACB0C10476BEC), il2cpp_rgctx_method(method->rgctx_data, 6));
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_9;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m52C3084BCC423645720ECD04047E9DFF095C1E04_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m65B440AF43CC55536C485CAF2C68C83409E133DC(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mB0EF9F438D8F4C889C4190D038616A751AD65191_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m65B440AF43CC55536C485CAF2C68C83409E133DC(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m618668B901D3B28C9500C5AF37A84C0F064D750B_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_inline(L_0, NULL);
		int32_t L_2;
		L_2 = NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline((&___0_container), NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_3 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_4;
		L_4 = NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m49FAE04A2FA1528FE91ECA368358ABD62B40A69C((Il2CppFullySharedGenericStruct*)L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_m0E2D3F6358F92058E2A1689788F26C5180DCA723_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0 = ___0_span;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m65B440AF43CC55536C485CAF2C68C83409E133DC(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mAD15487126464DAE40F7F98A11708118DC89AA8D_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_2;
		L_2 = NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m65B440AF43CC55536C485CAF2C68C83409E133DC(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_mCDB8D25250D9675E93E37552EA51A8CB24C09931_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD));
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		(&V_0)->___Data = L_0;
		int32_t L_1 = ___1_length;
		(&V_0)->___Length = L_1;
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522* L_2 = (DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522*)(&(&V_0)->___Comp);
		il2cpp_codegen_initobj(L_2, sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		SortJob_2_t9AEA59847EB6791A12C08134F9703941BA0CD6BD L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mDEDD35A24EC7064750CF9A006D9ED072EC9CC47A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_3 = alloca(SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeArray_1_AsSpan_m5E5BA6DA8F13E99DA9E483864C4FE5CC56ED1259((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B);
		NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t8C703775DC289FA78AE776C82FDD1614C468B12B): *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_SortJob_2_t91AF45E9356CB7D6C30BB1201E6533ACAB970FEC);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mB3A64630AC80B0CD54DDB37DABCA63F03F45C57D_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_3 = alloca(SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = NativeList_1_AsSpan_m1A0A9D3ECFE64C1DE6A7D657918AD075C547E8D3((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249);
		NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t0E14C11FCB10DDF82D8692C80ED63664F909D249): *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_SortJob_2_tCE99FB9688E01536AB80846FA62279179AC0709A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m156DD6D59CA5B809BEFB0724A56CACE0B92B035D_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_5 = alloca(SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_container;
		void* L_1;
		L_1 = NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_inline(L_0, NULL);
		int32_t L_2;
		L_2 = NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline((&___0_container), NULL);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF);
		NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2((Il2CppFullySharedGenericStruct*)L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? il2cpp_codegen_memcpy(L_4, L_3, SizeOf_U_t02C55F23A1A61BD14220D0BFF6D029617DDF7EFF): *(void**)L_3), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_SortJob_2_t6BA338B0152457B9323965CD909F5CA799B6D1C4);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA_fshared (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
	const Il2CppFullySharedGenericAny L_10 = L_7;
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_8 = alloca(SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_11 = L_8;
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_3 = alloca(SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	memset(V_3, 0, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
	{
		int32_t L_0;
		L_0 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = Span_1_get_Item_mD5718D249DA41540E945F18B4DE5CA67B3E5F94C_inline((&___0_span), 0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_2;
		Il2CppFullySharedGenericStruct* L_3 = V_2;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>(L_3,NULL));
		V_1 = (Il2CppFullySharedGenericStruct*)L_4;
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		Il2CppFullySharedGenericStruct* L_5 = V_1;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), L_5);
		int32_t L_6 = V_0;
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),2), il2cpp_rgctx_offset(method->rgctx_data, 4), L_6);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___1_comp : &___1_comp), SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 6), L_7, SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_memcpy(L_8, V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		return;
	}

IL_003a:
	{
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		uintptr_t L_9 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),0), il2cpp_rgctx_offset(method->rgctx_data, 3), (Il2CppFullySharedGenericStruct*)L_9);
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),2), il2cpp_rgctx_offset(method->rgctx_data, 4), 0);
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? ___1_comp : &___1_comp), SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 2),1), il2cpp_rgctx_offset(method->rgctx_data, 6), L_10, SizeOf_U_t4184EF00B6B20CF1D23ACC689B69FAE0AFCDD0C1);
		il2cpp_codegen_memcpy(L_11, V_3, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_SortJob_2_t642C66D7D038182279F8B095727539B4380978F6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m803FCB042598C1E503C59013F0DD3E33DE8D5F04_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_3 = alloca(SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_0;
		L_0 = UnsafeList_1_AsSpan_mAC472C7C01C97D39BB00813DF052291C2A755417((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_comp : &___1_comp), SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58);
		NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mA47E9D98FCFFC3B156B359C1A1265D485601FBAA(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_tEAE35D4DEFE1BC3BB9AF8F3483A8B44B86D86D58): *(void**)L_1), (SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_SortJob_2_t5A79827293D20DC4A7E8D5EB4FAD12EAF62D5859);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJob_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m337928D5AC4C50E948C80C38FB30ABDD0FEDFEE2_fshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_length, Il2CppFullySharedGenericAny ___2_comp, SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
	const SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A L_3 = alloca(SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A V_0 = alloca(SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	memset(V_0, 0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
	{
		il2cpp_codegen_initobj((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		Il2CppFullySharedGenericStruct* L_0 = ___0_ptr;
		il2cpp_codegen_write_field_data<Il2CppFullySharedGenericStruct*, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), il2cpp_rgctx_offset(method->rgctx_data, 1), L_0);
		int32_t L_1 = ___1_length;
		il2cpp_codegen_write_field_data<int32_t, false>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2), il2cpp_rgctx_offset(method->rgctx_data, 2), L_1);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? ___2_comp : &___2_comp), SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
		il2cpp_codegen_write_field_data<true>((SortJob_2_tDB67B50B08B8389A927E0B7A9511837C077A6F4A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1), il2cpp_rgctx_offset(method->rgctx_data, 4), L_2, SizeOf_U_t42D5912367A307AEEE9667CC0F4FD8E82570C246);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_SortJob_2_t8998C723B45259DC26FCE93914E84D0720AB7FEF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_m32EF1EDFDD285088E68A52C9FA22CF962A0315F0_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_container;
		il2cpp_codegen_initobj((&V_0), sizeof(DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522));
		DefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522 L_1 = V_0;
		SortJobDefer_2_t08B115591D33E0E12BE3194612F33E29C62FD509 L_2;
		L_2 = NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisDefaultComparer_1_tD07824236715FC1D65B300401894B79FB0041522_m529440F9811FE87B9175DE647132A34462413C2C(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SortJobDefer_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m08A07FE4FC0572B5AD96D95F043F26AD8020A463_fshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_container, Il2CppFullySharedGenericAny ___1_comp, SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
	const SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A L_2 = alloca(SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A V_0 = alloca(SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	memset(V_0, 0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
	{
		il2cpp_codegen_initobj((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 L_0 = ___0_container;
		il2cpp_codegen_write_field_data<NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, false>((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),0), il2cpp_rgctx_offset(method->rgctx_data, 1), L_0);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___1_comp : &___1_comp), SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
		il2cpp_codegen_write_field_data<true>((SortJobDefer_2_t6A8BA1AB187A6861F4A0BBB96B6C75E98D845F5A*)V_0, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),1), il2cpp_rgctx_offset(method->rgctx_data, 3), L_1, SizeOf_U_tA3EA785A061FC1C615AD0676A68BC523D16DDB4F);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_SortJobDefer_2_t202C613E182A9C97070A79A5B754DBC4B7EBDEEB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	memset(V_0, 0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_3, L_4, il2cpp_codegen_memcpy(L_8, L_7, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_9 = ___0_array;
		int32_t L_10 = ___2_rhs;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4);
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_9, L_10, il2cpp_codegen_memcpy(L_12, L_11, SizeOf_T_t3B3F1042277DCEFE0E4D5BA9D64D69F692EC97F4), il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItems_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m7087041FF408AE8DAAA069326FE6A617E9E0EF3C_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_tFC2A00320878DE26C1676CA44DEC8F6FC9EA8F14);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(V_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(G_B3_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	memset(G_B2_0, 0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		if (L_3)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
			goto IL_001e;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	}
	{
		il2cpp_codegen_memcpy(L_4, G_B2_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t2718C0A06481493BD467989009D3ABB63FA70A44);
	}

IL_001e:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lhs;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B3_0, &L_12, L_11);
		int32_t L_14 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_13, L_12.method,L_12.thisPtr, L_7, L_10);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_15 = ___0_array;
		int32_t L_16 = ___1_lhs;
		int32_t L_17 = ___2_rhs;
		NativeSortExtension_Swap_TisIl2CppFullySharedGenericStruct_m657D09FBF8CC0DCADE61F3DC08251120E778AAEF(L_15, L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapIfGreaterWithItemsStruct_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mABB5AA1A8A886F39277828BE310D8FDE2424F322_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, Il2CppFullySharedGenericAny ___3_comp, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t3C28AADEDB0D36242D2223B92B887BAF86BA60F0);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	const Il2CppFullySharedGenericAny L_4 = L_2;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(V_0, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(G_B3_0, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	memset(G_B2_0, 0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	{
		int32_t L_0 = ___1_lhs;
		int32_t L_1 = ___2_rhs;
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		if (L_3)
		{
			il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
			goto IL_001e;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_comp : &___3_comp), SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	}
	{
		il2cpp_codegen_memcpy(L_4, G_B2_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
		il2cpp_codegen_memcpy(G_B3_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_U_t8D39EC81CACC2D113EF457EC5C9DC4C10E49D75D);
	}

IL_001e:
	{
		void* L_5 = ___0_array;
		int32_t L_6 = ___1_lhs;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_8 = ___0_array;
		int32_t L_9 = ___2_rhs;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppConstrainedCallData L_12;
		Il2CppMethodPointer L_13 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)G_B3_0, &L_12, L_11);
		int32_t L_14 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(L_13, L_12.method,L_12.thisPtr, L_7, L_10);
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		void* L_15 = ___0_array;
		int32_t L_16 = ___1_lhs;
		int32_t L_17 = ___2_rhs;
		NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24(L_15, L_16, L_17, il2cpp_rgctx_method(method->rgctx_data, 5));
	}

IL_0042:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSortExtension_SwapStruct_TisIl2CppFullySharedGenericStruct_m9261658699D5BEE6D69B7E825EEA155299319C24_fshared (void* ___0_array, int32_t ___1_lhs, int32_t ___2_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	memset(V_0, 0, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
	{
		void* L_0 = ___0_array;
		int32_t L_1 = ___1_lhs;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
		void* L_3 = ___0_array;
		int32_t L_4 = ___1_lhs;
		void* L_5 = ___0_array;
		int32_t L_6 = ___2_rhs;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_5, L_6, (Il2CppFullySharedGenericStruct*)L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_3, L_4, il2cpp_codegen_memcpy(L_8, L_7, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E), il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_9 = ___0_array;
		int32_t L_10 = ___2_rhs;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E);
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_9, L_10, il2cpp_codegen_memcpy(L_12, L_11, SizeOf_T_t228F84B03D5098474835AA05BAC6EFA1FA0EEF5E), il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NativeStream_ScheduleConstruct_TisIl2CppFullySharedGenericStruct_m27645D3BD937891B0D2D164E55DCCD4A4F4D4E89_fshared (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* ___0_stream, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___1_bufferCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___2_dependency, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* L_0 = ___0_stream;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___3_allocator;
		NativeStream_AllocateBlock_mAD29C962FDE6B17A135737E09693B6FAB6E974AF(L_0, L_1, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_2;
		L_2 = NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_inline((&___1_bufferCount), NULL);
		(&V_0)->___List = (UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2*)L_2;
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* L_3 = ___0_stream;
		NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376 L_4 = (*(NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376*)L_3);
		(&V_0)->___Container = L_4;
		ConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707 L_5 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = ___2_dependency;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_7;
		L_7 = IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF(L_5, L_6, IJobExtensions_Schedule_TisConstructJobList_t9B7D7E4828A1206B525AB228F2A5C31DE9C55707_m715A4EB29741CB67F7E83EEF8ADE027B2D42A6DF_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m7F7EEAC0A5F9619B9A028BE880C504844C338E8D_fshared (NativeStream_t624CBCF9CCEA655FC42B2129CAB3BC9AE13CE376* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* L_0 = (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66*)(&__this->___m_Stream);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = UnsafeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m418267CD08E32A95A5829724C5BCD60D35C261E8(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC NoAllocHelpers_CreateReadOnlySpan_TisIl2CppFullySharedGenericAny_m8B09F58B1533EE5889930503D32D66FA43EA49DB_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* V_0 = NULL;
	ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((RuntimeObject*)L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_4 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_6 = V_0;
		int32_t L_7 = L_6->____size;
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_8;
		memset((&L_8), 0, sizeof(L_8));
		ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 NoAllocHelpers_CreateSpan_TisIl2CppFullySharedGenericAny_m8FA189A6CDBD9B7477A87CEE776826340CDEE909_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* V_0 = NULL;
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1 = V_1;
		return L_1;
	}

IL_000d:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_3;
		L_3 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((RuntimeObject*)L_2);
		V_0 = L_3;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_4 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->____items;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_6 = V_0;
		int32_t L_7 = L_6->____size;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_inline((&L_8), L_5, 0, L_7, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisIl2CppFullySharedGenericAny_m74270910BAB663797ED6E0784FA1669689B9CAB9_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_count;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0022:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = ___0_list;
		List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_inline(L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = ___0_list;
		int32_t L_6;
		L_6 = List_1_get_Capacity_m5BE6D733C76E1AB093FB6D2783220A5B96EF61DF(L_5, NULL);
		int32_t L_7 = ___1_count;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0038;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_8 = ___0_list;
		int32_t L_9 = ___1_count;
		List_1_set_Capacity_mD365C22FA3D32D70A2088AB13116E7BA5FBF0BFB(L_8, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0038:
	{
		int32_t L_10 = ___1_count;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_11 = ___0_list;
		int32_t L_12;
		L_12 = List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_inline(L_11, NULL);
		if ((((int32_t)L_10) == ((int32_t)L_12)))
		{
			goto IL_005d;
		}
	}
	{
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE** L_13;
		L_13 = il2cpp_unsafe_as_ref<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((&___0_list));
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_14 = *(L_13);
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_15 = L_14;
		int32_t L_16 = ___1_count;
		L_15->____size = L_16;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_17 = L_15;
		int32_t L_18 = L_17->____version;
		L_17->____version = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_005d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m939A9FD04DDB2C021F8F2A09A8A13816556D8F2A_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0005:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_list;
		ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE* L_2;
		L_2 = il2cpp_unsafe_as<ListPrivateFieldAccess_1_t278625E6D19952E34AD98EA2DED582E47AFEB9BE*>((RuntimeObject*)L_1);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = L_2->____items;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_InvalidateListEnumerators_TisIl2CppFullySharedGenericAny_m424A09D93D30AB352CCB19CE0ABBC404A8DB060F_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF720B3B545B9EB09FECC078AAFA8A26C14F666BD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tF720B3B545B9EB09FECC078AAFA8A26C14F666BD);
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		int32_t L_1;
		L_1 = List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = ___0_list;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = ___0_list;
		List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937(L_3, 0, (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		List_1_set_Item_m9A958091885CC5363CCFE9F0BC472EAFCB56C813(L_2, 0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_4: *(void**)L_4), il2cpp_rgctx_method(method->rgctx_data, 3));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) 
{
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_value;
		__this->___U3CelementTargetU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CelementTargetU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedValue_set_name_mCF3BCACF7F87CF0C64AB3E4547BA5876ADF1940C_inline (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CnameU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CnameU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedValue_set_value_mD96CEA0EB28C32139F47AEF613FE40B6DD7A5D7D_inline (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* __this, PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___0_value, const RuntimeMethod* method) 
{
	{
		PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 L_0 = ___0_value;
		__this->___U3CvalueU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline(L_0, L_1, (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_inline(L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5): *(void**)L_2), il2cpp_rgctx_method(method->rgctx_data, 1));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_3, L_4, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD031F18A4CFBB5CBC861231C3D6E56106D809509_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, void* ___0_pointer, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		int32_t L_3 = ___1_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_4 = ___0_pointer;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>((uint8_t*)L_4);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_6;
		memset((&L_6), 0, sizeof(L_6));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_6), L_5);
		__this->____pointer = L_6;
		int32_t L_7 = ___1_length;
		__this->____length = L_7;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeBufferPointerWithoutChecks_TisIl2CppFullySharedGenericStruct_m0BC1578CE50C348FF9B616BD602021A69F647803_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_fshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m4D697E26467C391B48E97587F53534941CBEA23F_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Stride_m3F2ACE95526BFFDE7967887D3C6188F286C6A12D_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Stride;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_fshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_0 = __this->___m_ListData;
		int32_t L_1;
		L_1 = UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline((UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*)L_0, NULL);
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_fshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_0 = __this->___m_ListData;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
	{
		void* L_0 = __this->___m_Buffer;
		int32_t L_1 = ___0_index;
		il2cpp_codegen_memcpy(L_2, ___1_value, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022);
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_0, L_1, il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_t05490BB68E93F7FF07D46087FEC0242A3FB9D022), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5(NULL);
	}

IL_000e:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_2 = __this->____pointer;
		V_0 = L_2;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___0_index;
		Il2CppFullySharedGenericAny* L_5;
		L_5 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_3, L_4, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeSliceUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m051D495AEDE8F8F98AF26E7709F9873DF4926036_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___0_nativeSlice, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_0 = ___0_nativeSlice;
		uint8_t* L_1 = L_0.___m_Buffer;
		return (void*)(L_1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mC9869776ABBFE9D2520512EEB39ABD1CFFE7F7B9_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t120950580BDFD368223E024446019DB239080837 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) <= ((uint32_t)L_5))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_6 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_array;
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		int32_t L_9 = ___1_start;
		if ((!(((uint32_t)L_6) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_8, L_9))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		uint8_t* L_11;
		L_11 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_10, NULL);
		Il2CppFullySharedGenericAny* L_12;
		L_12 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_11);
		int32_t L_13 = ___1_start;
		Il2CppFullySharedGenericAny* L_14;
		L_14 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_12, L_13, SizeOf_T_t120950580BDFD368223E024446019DB239080837);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_15;
		memset((&L_15), 0, sizeof(L_15));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_15), L_14);
		__this->____pointer = L_15;
		int32_t L_16 = ___2_length;
		__this->____length = L_16;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m663A61429C38D76851892CB8A3E875E44548618D_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_start, int32_t ___2_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___1_start;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___2_length;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_0016:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			goto IL_0042;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		Type_t* L_6;
		L_6 = il2cpp_codegen_object_get_type((RuntimeObject*)L_5);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0042:
	{
		int32_t L_10 = ___1_start;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((!(((uint32_t)L_10) <= ((uint32_t)L_12))))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_13 = ___2_length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___0_array;
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		int32_t L_16 = ___1_start;
		if ((!(((uint32_t)L_13) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_15, L_16))))))
		{
			goto IL_0055;
		}
	}

IL_0050:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0055:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		uint8_t* L_18;
		L_18 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_17, NULL);
		Il2CppFullySharedGenericAny* L_19;
		L_19 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_18);
		int32_t L_20 = ___1_start;
		Il2CppFullySharedGenericAny* L_21;
		L_21 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_19, L_20, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_22;
		memset((&L_22), 0, sizeof(L_22));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_22), L_21);
		__this->____pointer = L_22;
		int32_t L_23 = ___2_length;
		__this->____length = L_23;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mD615D1BCB2C9DD91DAD86A2F9E5CF1DFFCBF7925_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_2 = __this->____size;
		V_0 = L_2;
		__this->____size = 0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, 0, L_5, NULL);
		return;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t0AA6189E765AD6394317DDCA688595C885DC47B5);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, SizeOf_T_t07C3F1A12A8E95862F1A2E3DD5ED60C8EC56F580);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), (void*)L_6);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18;
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_fshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t6008FADC86896702BBF0B0D1C9FBB34D7C0BDB09 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		void* L_0 = ___0_ptr;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_t6008FADC86896702BBF0B0D1C9FBB34D7C0BDB09;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		return (Il2CppFullySharedGenericStruct*)(((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_length;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		return L_1;
	}
}
