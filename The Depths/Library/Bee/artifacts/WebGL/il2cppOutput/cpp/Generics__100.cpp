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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81;
struct ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4;
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5;
struct Dictionary_2_t6B4B40DA71BA0031F5736DF4459253299D8AF5F2;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E;
struct Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01;
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA;
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F;
struct Func_1_tA8142C82F6807E3ECF316299D5B91FFE4FEA7343;
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
struct ICollection_1_tB388ED908E2D241F56264CA971F25D9ADC1ADEC3;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct Lazy_1_t564A33A7F423595D3F62B04F731E53A42FB37575;
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A;
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2;
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47;
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9;
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0;
struct ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9;
struct MatrixMxNDebugView_1_t54DB71F55826C54683CEB4D2B2ECCAF248A88B13;
struct MouseCaptureEventBase_1_t22B283B27FCD61274E7CEDD317FC2E9F4BD61350;
struct MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B;
struct ObjectPool_1_t9CFCA41CD780F7424037FA2A3EE846F2FBFEE4D0;
struct PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct EntryU5BU5D_t61FA3D706E7DE26AEDF070945C2A103BABDD1FDD;
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752;
struct SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245;
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680;
struct Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E;
struct IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B;
struct EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B;
struct PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
struct DataBindingManager_tE7B33E64EBBDCAB0A89B6A8421529F9BA0D066E1;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25;
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct IEventHandler_tB1627CA1B7729F3E714572E69A79C91A1578C9A3;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E;
struct IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5;
struct IPanelRenderer_tEB4A39BEC71B3B49302393D8DAFF7599E7F9ED9E;
struct IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct TimeFunction_tF79523F25DE24287C8CF4D87F09E8CA51568EC9F;
struct TimerEventScheduler_tAF33EE8B1C54425235E4893B0C5088629FBE7862;
struct Type_t;
struct UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct TypeData_t9C5DC5F5DD8F0C04131F359229ED4738117BA396;
struct Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerEventInternal_tF0950F230320BC22B077741EA08AC538EE878833_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral09B8A6EA35B75288D90AC15479A1E9A5D9A18113;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral47E8CCB1C331C9476E88F8A6179C1466CBA62167;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52;
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774  : public RuntimeObject
{
};
struct DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5  : public RuntimeObject
{
};
struct Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA : public RuntimeObject {};
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
};
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ____items;
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
struct List_1_t81AE31C723E905C926562FE0E86DA9B00022EA43  : public RuntimeObject
{
	ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE250E7115251CE18B77DAB637654B67982239650  : public RuntimeObject
{
	EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA9133CFCF211C161818125828AEB3F0BF145615A  : public RuntimeObject
{
	PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct LockedStack_tC6464121C817D6CF5A640F4B29A59939C1DE489F  : public RuntimeObject
{
	SelectorWorkItemU5BU5DU5BU5D_t5F640BD9A98042DB46A703DADB5D1B5408607245* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t000073AA14F1B0C46471D9C699C9CDE10CB7CA17  : public RuntimeObject
{
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t55EA3BEB39A80E4F0A2009E69BE4365D6CFFBB7B  : public RuntimeObject
{
	CharU5BU5DU5BU5D_tE6ABF380CD3BBDBB52C3EF725A02224F2B4AA680* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t41A87F7FF06A8633FE1FF193C1AA749E23B5A5DC  : public RuntimeObject
{
	Int32U5BU5DU5BU5D_t179D865D5B30EFCBC50F82C9774329C15943466E* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_t12BEECEFBBB3CF0B3EB7D62B7410226EF3FB9B49  : public RuntimeObject
{
	IntPtrU5BU5DU5BU5D_t1F156CEC28FED8F78BFBC6470EDD5A86CB33B0AF* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ____arrays;
	int32_t ____count;
	uint32_t ____firstStackItemMS;
};
struct LowLevelDictionary_2_t39FD470E201F39ECE87AC1192F2878362EEEE6CD  : public RuntimeObject
{
	EntryU5BU5D_t61FA3D706E7DE26AEDF070945C2A103BABDD1FDD* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47  : public RuntimeObject
{
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* ____buckets;
	int32_t ____numEntries;
	int32_t ____version;
	RuntimeObject* ____comparer;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9  : public RuntimeObject
{
	int32_t ___m_ChunkSize;
	int32_t ___m_Length;
	List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* ___m_Chunks;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___m_Free;
};
struct NativeArrayDebugView_1_t822A40A26B069D94A4D21875C23D557566F1CBB1  : public RuntimeObject
{
};
struct NativeArrayReadOnlyDebugView_1_t9602DD9F52F478794DD161C2E2EF8153A126CB09  : public RuntimeObject
{
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25  : public RuntimeObject
{
	String_t* ___U3CNameU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C  : public RuntimeObject
{
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
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
typedef Il2CppFullySharedGenericStruct Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0;
struct LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2  : public EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9
{
};
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9  : public LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0
{
};
struct NativeArrayStaticId_1_t50C709E712A83F94158359DA374799781680B83C 
{
	union
	{
		struct
		{
		};
		uint8_t NativeArrayStaticId_1_t4D99ED470E60088BA55990F9274D24F2AEEC3F9B__padding[1];
	};
};
struct SharedStatic_1_tEC5F09652230C531A3C62C83CB579D41179BD182 
{
	void* ____buffer;
};
struct SharedStatic_1_t992C7AC6924726715BD75765E85C2A7923405408 
{
	void* ____buffer;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F  : public ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____bucketArraySizes;
	PerCoreLockedStacksU5BU5D_t9CDDE75124B27D018B8CD21AC5D6E007D0686752* ____buckets;
	int32_t ____callbackCreated;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888  : public EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
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
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
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
struct MemoryPressure_t12C53FDB3D069AAE9DB8F6D9FDDD6D8C733E1A4E 
{
	int32_t ___value__;
};
struct MemoryPressure_t211225B7C4B31AFD064E1D7ABDD38BD64F5C97C2 
{
	int32_t ___value__;
};
struct MemoryPressure_tF20E59A2FCD73572EF954182450F33E0A686455A 
{
	int32_t ___value__;
};
struct MemoryPressure_tDDA5D8E48826B4CBA5699D6EE80C85F2F0F4B717 
{
	int32_t ___value__;
};
struct MemoryPressure_t842F850D315484F407FE5A0D42F82BC882AD9402 
{
	int32_t ___value__;
};
struct MemoryPressure_t7AAFC0465C6ACE5222645A59D867C7FD22F28381 
{
	int32_t ___value__;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct ContextType_t50FAC10DB1D4E29B37E532DED9CAA804FC4E59A0 
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
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct EventCategory_tCFC347F164A2525B4C39DA6A9B7A9B5A541E3FFA 
{
	int32_t ___value__;
};
struct EventModifiers_tB9DEEF73F8FC4C312B8E0C34336C7D9C3023B270 
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
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	bool ___clearDepthStencil;
	bool ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
};
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil;
	int32_t ___clearColor;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color;
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
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct EventPropagation_t024AF56F7A787C03AA21B065B624553EF52E7B83 
{
	int32_t ___value__;
};
struct LifeCycleStatus_tEE500629F5431B574B8047EB70864747D348D38C 
{
	int32_t ___value__;
};
struct NativeArray_1_t2C4AD2E83609A978E7153BB6B247ADA94E077417 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t39BA841475121E3F8A81F9BCA6646FD6FD6A32A8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tBEE3484B4ABC271CFAB65039F1439061D5DF806A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t350AC0BB30FC3DDDCC7813F50416EED44C9357D7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3D8121943984EEED49DC98DED560DCC6638111B6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t32EE7AF88C534DBAA1A88B1DD5D55F78660D508A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0783F5E3C7AF6C600A6A20DA7A32D82CA836528D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 
{
	bool ___hasValue;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___value;
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
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F  : public EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C
{
	int32_t ___m_RefCount;
};
struct MatrixMxN_1_tCE7536060A541DF76F19476411BF01462801071D 
{
	NativeArray_1_t3848EE4B6647317212A754634DE6DBC90B99FBEF ___m_Array;
	int32_t ___m_Width;
	int32_t ___m_Height;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Array;
	int32_t ___m_Width;
	int32_t ___m_Height;
	int32_t ___m_AllocLabel;
	int32_t ___m_Options;
};
struct NativeArrayAllocator_tE6217471D7181329E80EFC3CEBFECFC6221EFC11 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_t26840BC165D783F0FB52061DC70D297E3AF7D28E 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_t3708FF11DA1D8F1E666473BCA311E72E2A39250A 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct NativeArrayAllocator_t60748B6A3A7FB52B1E41A4D6F12C18F2D6FD7798 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
};
struct MatrixMxNDebugView_1_t54DB71F55826C54683CEB4D2B2ECCAF248A88B13  : public RuntimeObject
{
	MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E ___array;
};
struct MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B  : public EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F
{
	int32_t ___U3CmodifiersU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CmousePositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3ClocalMousePositionU3Ek__BackingField;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CmouseDeltaU3Ek__BackingField;
	int32_t ___U3CclickCountU3Ek__BackingField;
	int32_t ___U3CbuttonU3Ek__BackingField;
	int32_t ___U3CpressedButtonsU3Ek__BackingField;
	RuntimeObject* ___U3CsourcePointerEventU3Ek__BackingField;
	bool ___U3CrecomputeTopElementUnderMouseU3Ek__BackingField;
	Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___U3CpanelRayU3Ek__BackingField;
};
struct PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744  : public EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F
{
	RuntimeObject* ___U3CrelatedTargetU3Ek__BackingField;
	int32_t ___U3CpointerIdU3Ek__BackingField;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
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
struct MouseCaptureEventBase_1_t22B283B27FCD61274E7CEDD317FC2E9F4BD61350  : public PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744
{
};
struct LayoutConfig_tD448909812F1AA8DE14EAC340688D6FF41B52C87 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed;
	Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01* ___MemberElementsByHandle;
	UIElementsBridge_tC28FCEDF493CD746D1973AB27BA2CBA393EB4BA8* ___m_UIElementsBridge;
	float ___m_Scale;
	int32_t ___m_BackdropFilterElementCount;
	LayoutConfig_tD448909812F1AA8DE14EAC340688D6FF41B52C87 ___layoutConfig;
	float ___m_PixelsPerPoint;
	float ___U3CreferenceSpritePixelsPerUnitU3Ek__BackingField;
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField;
	RuntimeObject* ___panelRenderer;
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField;
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField;
	DataBindingManager_tE7B33E64EBBDCAB0A89B6A8421529F9BA0D066E1* ___U3CdataBindingManagerU3Ek__BackingField;
	TimerEventScheduler_tAF33EE8B1C54425235E4893B0C5088629FBE7862* ___m_Scheduler;
	TimeFunction_tF79523F25DE24287C8CF4D87F09E8CA51568EC9F* ___m_TimeSinceStartupFunc;
	bool ___U3CdisposedU3Ek__BackingField;
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___isFlatChanged;
	bool ___m_DrawsInCameras;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged;
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged;
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate;
	Lazy_1_t564A33A7F423595D3F62B04F731E53A42FB37575* ___textElementRegistry;
	Func_1_tA8142C82F6807E3ECF316299D5B91FFE4FEA7343* ___CreateMenuFunctor;
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___IMEGetCompositionString;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___IMESetIsEnteringText;
	Action_1_t17E52B12DC24FA6C9DD52F87043C85BEA889BB81* ___IMESetCursorPos;
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
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer;
};
struct List_1_t86CEEDD235E596954775CA0742BC77B3779A0347_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct List_1_t81AE31C723E905C926562FE0E86DA9B00022EA43_StaticFields
{
	ResourceDataU5BU5D_t7EB547044DA870E25BACFEDEFCCD7821FE72022B* ___s_emptyArray;
};
struct List_1_tE250E7115251CE18B77DAB637654B67982239650_StaticFields
{
	EntryProcessingInfoU5BU5D_tAB0CBF4A4379F39BA667FBBFCB22E4174C4D319B* ___s_emptyArray;
};
struct List_1_tA9133CFCF211C161818125828AEB3F0BF145615A_StaticFields
{
	PassCompatibilityInfoU5BU5D_t7B46D72837B465DBE4D623FD609B34DE43FE3317* ___s_emptyArray;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields
{
	int32_t ___maxPointers;
	int32_t ___invalidPointerId;
	int32_t ___mousePointerId;
	int32_t ___touchPointerIdBase;
	int32_t ___touchPointerCount;
	int32_t ___penPointerIdBase;
	int32_t ___penPointerCount;
	int32_t ___trackedPointerIdBase;
	int32_t ___trackedPointerCount;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___screenHoveringPointers;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct NativeArrayStaticId_1_t50C709E712A83F94158359DA374799781680B83C_StaticFields
{
	SharedStatic_1_tEC5F09652230C531A3C62C83CB579D41179BD182 ___s_staticSafetyId;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields
{
	bool ___s_trimBuffers;
	ConditionalWeakTable_2_tD204B678FB5C57190177AACB4C57D5BDE9ED70E4* ___s_allTlsBuckets;
};
struct TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_ThreadStaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* ___t_tlsBuckets;
};
struct ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields
{
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* ___Log;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
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
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB_StaticFields
{
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_Current;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___s_MasterEvent;
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
struct EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F_StaticFields
{
	int64_t ___s_TypeId;
	ObjectPool_1_t9CFCA41CD780F7424037FA2A3EE846F2FBFEE4D0* ___s_Pool;
	int32_t ___EventCategory;
	TypeData_t9C5DC5F5DD8F0C04131F359229ED4738117BA396* ___k_TypeData;
};
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_StaticFields
{
	Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E* ___PanelsByHandle;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___s_OutsidePanelCoordinates;
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
struct __Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F  : public RuntimeArray
{
	ALIGN_FIELD (8) __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* m_Items[1];

	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* m_Items[1];

	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1  : public RuntimeArray
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_fshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0_fshared (Il2CppFullySharedGenericStruct ___0_val, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EqualityComparer_1__ctor_mFCFFB9230A4881E211659A1A772D554D857B988F_fshared (EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_fshared (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93_fshared (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_fshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_fshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatrixMxN_1_get_Length_mBC3776550911BA05734890369C64FEBEED87957E_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_CopyTo_mAA9DDC54A871349C3441EEF6611139614B4A8F68_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_CopyTo_m6072353F8BA28E08B24828767C0A5AA713F0B307_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD_gshared (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934_gshared (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511_gshared (RuntimeObject* ___0_triggerEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C_gshared (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD_gshared (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___1_label, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SharedStatic_1_t992C7AC6924726715BD75765E85C2A7923405408 SharedStatic_1_GetOrCreate_TisIl2CppFullySharedGenericAny_m9CA632091AD248050A66593B9E90C291765FD691_fshared (uint32_t ___0_alignment, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_fshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5 (EventSource_tA86759A1E6F272632C299AAC181C0A67E5C52F25* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0 (ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* __this, int32_t ___0_bufferId, int32_t ___1_bufferSize, int32_t ___2_poolId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline int64_t JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0 (Il2CppFullySharedGenericStruct ___0_val, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Il2CppFullySharedGenericStruct, const RuntimeMethod*))JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0_fshared)(___0_val, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
inline void EqualityComparer_1__ctor_m336C109B6C7CFACF4C9C81001B5F77C764DBDFC1 (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* __this, const RuntimeMethod* method)
{
	((  void (*) (EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*, const RuntimeMethod*))EqualityComparer_1__ctor_mFCFFB9230A4881E211659A1A772D554D857B988F_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_SetType_m5D07E1C38028872E49EA01129ED5BF1AF674C475 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, Type_t* ___0_type, const RuntimeMethod* method) ;
inline void DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482 (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* __this, const RuntimeMethod* method)
{
	((  void (*) (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*, const RuntimeMethod*))DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482_fshared)(__this, method);
}
inline void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_fshared)(__this, ___0_capacity, ___1_comparer, method);
}
inline void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3 (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, int32_t, const RuntimeMethod*))LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_fshared)(__this, ___0_capacity, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671 (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method)
{
	return ((  Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_fshared)((LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*)__this, ___0_key, method);
}
inline Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	return ((  Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_fshared)((LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*)__this, ___0_key, ___1_value, method);
}
inline int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04 (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, Il2CppFullySharedGenericAny, int32_t, const RuntimeMethod*))LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_fshared)((LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*)__this, ___0_key, ___1_numBuckets, method);
}
inline void Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93 (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, const RuntimeMethod*))Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93_fshared)(__this, method);
}
inline void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47*, const RuntimeMethod*))LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_fshared)(__this, method);
}
inline void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, const RuntimeMethod*))LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_fshared)(__this, method);
}
inline void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_fshared)(__this, ___0_capacity, method);
}
inline void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775 (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9*, const RuntimeMethod*))Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_fshared)(__this, ___0_list, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
inline void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309 (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_fshared)(__this, ___0_min, method);
}
inline void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_fshared)(__this, ___0_value, method);
}
inline void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0 (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, RuntimeObject*, const RuntimeMethod*))LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_fshared)(__this, ___0_index, ___1_collection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_fshared)((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, ___0_item, method);
}
inline int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_fshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16 (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_fshared)((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, ___0_index, ___1_item, method);
}
inline void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*, int32_t, const RuntimeMethod*))LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_fshared)(__this, ___0_index, method);
}
inline bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1 (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_fshared)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___0_obj, method);
}
inline void List_1__ctor_mE47F2A05D047C5831E195F8F2577C836892F8A76 (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared)(__this, method);
}
inline void List_1_Add_mFD92FC4DF9C51E76D74F6584FB6C713C6A955AB7_inline (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_fshared)(__this, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443 (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_fshared)((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
inline int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline)(__this, method);
}
inline int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_fshared)((Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline int32_t List_1_get_Count_m5F28C6E82FCE45373CD5786E08E8BA6799F70422_inline (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline int32_t MatrixMxN_1_get_Length_mBC3776550911BA05734890369C64FEBEED87957E (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E*, const RuntimeMethod*))MatrixMxN_1_get_Length_mBC3776550911BA05734890369C64FEBEED87957E_fshared)(__this, method);
}
inline void MatrixMxN_1_CopyTo_mAA9DDC54A871349C3441EEF6611139614B4A8F68 (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))MatrixMxN_1_CopyTo_mAA9DDC54A871349C3441EEF6611139614B4A8F68_fshared)(__this, ___0_array, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, il2cppRetVal, method);
}
inline void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct, const RuntimeMethod*))NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, ___1_value, method);
}
inline bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
inline void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared)(__this, method);
}
inline void MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method)
{
	((  void (*) (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E*, const RuntimeMethod*))MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A_fshared)(__this, method);
}
inline void NativeArray_1_CopyTo_m6072353F8BA28E08B24828767C0A5AA713F0B307 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))NativeArray_1_CopyTo_m6072353F8BA28E08B24828767C0A5AA713F0B307_fshared)(__this, ___0_array, method);
}
inline void PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744* __this, const RuntimeMethod* method)
{
	((  void (*) (PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744*, const RuntimeMethod*))PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD_gshared)(__this, method);
}
inline int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared_inline)(__this, method);
}
inline RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared_inline)(__this, method);
}
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
inline Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared_inline)(__this, method);
}
inline void EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934 (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method)
{
	((  void (*) (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*, const RuntimeMethod*))EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934_gshared)(__this, method);
}
inline void MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132 (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
inline void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, int32_t, const RuntimeMethod*))MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, RuntimeObject*, const RuntimeMethod*))MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, bool, const RuntimeMethod*))MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared_inline)(__this, ___0_value, method);
}
inline void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method)
{
	((  void (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768, const RuntimeMethod*))MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_currentTarget_m778A667A791A9A67D61010F9B6A2A69D961C4C14 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 VisualElementExtensions_WorldToLocal3D_m19BBC65BE9BCA191894DB2B26EE1E083C4D349F3 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_ele, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_p, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PreDispatch_mD788394C54A5400B25B423AF5DC41AA318A33DC4 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) ;
inline bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*, const RuntimeMethod*))MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerDeviceState_SavePointerPosition_mFF277BDE588CF09F2301872E64A5F32159ECB9EB (int32_t ___0_pointerId, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, RuntimeObject* ___2_panel, int32_t ___3_contextType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* BaseVisualElementPanel_RecomputeTopElementUnderPointer_mF3D6110A28FCCF72408FE62A21A4F57E4AC717AF (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* __this, int32_t ___0_pointerId, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_pointerPos, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___2_triggerEvent, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementPanel_SetTopElementUnderPointer_m09591A0A171CEB0CAA023C6834B075D8E76ED5D9 (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* __this, int32_t ___0_pointerId, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_element, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_processed_mC99F191F8FCB064BEAC4500D80EBDDC400A461B7 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6 (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_isImmediatePropagationStopped_m23F718E5FA5FB49FE12BA560B8362B95E0C7F5D3 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_StopImmediatePropagation_m2D6646624DDC02AE96657F5EAD5BC0361380A8DA (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventBase_get_processedByFocusController_mB2BCAFE58D45919AC9F5AC0AAEF059D8A640AE53 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_processedByFocusController_mEC214B328484B60572EEE867ACB5527396436155 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseVisualElementPanel_CommitElementUnderPointers_m41A1D0D2884A1C35218D330EE29DF393F75E7892 (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_PostDispatch_mC830955EA32723BF0C10CCB37E01197CBADC07B3 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventDispatchUtilities_DispatchToCapturingElementOrElementUnderPointer_m1DB1C303971CD300023CEE6011018230F9047D4B (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_evt, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___1_panel, int32_t ___2_pointerId, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_position, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511 (RuntimeObject* ___0_triggerEvent, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (RuntimeObject*, const RuntimeMethod*))MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511_gshared)(___0_triggerEvent, method);
}
inline Il2CppSharedGenericObject* EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C (const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (const RuntimeMethod*))EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C_gshared)(method);
}
inline Il2CppSharedGenericObject* EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___0_e, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*, const RuntimeMethod*))EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C_gshared)(___0_e, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventBase_set_imguiEvent_m72FEAD8F7611927C077B45BAA719C15D39E9F4F4 (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___0_value, const RuntimeMethod* method) ;
inline void EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F* __this, const RuntimeMethod* method)
{
	((  void (*) (EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*, const RuntimeMethod*))EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryLabel_SupportsAllocator_m2FBEAFCA15699420E8C5E42BA823DEE2999B6E6D (int32_t ___0_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryLabel__ctor_m9EBEB7071302DF5EC12EB34EB2949E01617C5191 (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* __this, String_t* ___0_areaName, String_t* ___1_objectName, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryLabel_get_IsCreated_m8B3D6AC21CEADC1D4C4EF4A3D2B168EBFADC26BA (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* __this, const RuntimeMethod* method) ;
inline void NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___1_label, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A_fshared)(__this, ___0_length, ___1_label, ___2_options, method);
}
inline SharedStatic_1_tEC5F09652230C531A3C62C83CB579D41179BD182 SharedStatic_1_GetOrCreate_TisNativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_m8F25A13283F3A46D6CD00E87F323C3C901EE3CD2 (uint32_t ___0_alignment, const RuntimeMethod* method)
{
	return ((  SharedStatic_1_tEC5F09652230C531A3C62C83CB579D41179BD182 (*) (uint32_t, const RuntimeMethod*))SharedStatic_1_GetOrCreate_TisIl2CppFullySharedGenericAny_m9CA632091AD248050A66593B9E90C291765FD691_fshared)(___0_alignment, method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline)(___0_destination, ___1_index, (Il2CppFullySharedGenericAny)___2_value, method);
}
inline void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LockedStack_TryPush_m43E5E7A2F0386A3BEF9CFD2705141DB4E81D52B0_fshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit);
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) >= ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		CHECKED_LOCAL_INIT(TlsOverPerCoreLockedStacksArrayPool_1_t8B8FBFF736C6E58BE737346D6936457742803E8B_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1 = ((TlsOverPerCoreLockedStacksArrayPool_1_tE35D2E7EF078343B5B040BA33BB77E88B1AC8F0F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_trimBuffers;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_2 = __this->____count;
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3;
		L_3 = Environment_get_TickCount_m183BFCF001E12849E3D898957F0B81FD88BA183C(NULL);
		__this->____firstStackItemMS = L_3;
	}

IL_002b:
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_4 = __this->____arrays;
		int32_t L_5 = __this->____count;
		V_1 = L_5;
		int32_t L_6 = V_1;
		__this->____count = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_8);
		V_0 = (bool)1;
	}

IL_0046:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* LockedStack_TryPop_m25DDC8C5A35FAD9A7D146972888DE02342BD5DAB_fshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		V_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93((RuntimeObject*)__this, NULL);
		int32_t L_0 = __this->____count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_1 = __this->____arrays;
		int32_t L_2 = __this->____count;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		int32_t L_3 = V_1;
		__this->____count = L_3;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_7 = __this->____arrays;
		int32_t L_8 = __this->____count;
		ArrayElementTypeCheck (L_7, NULL);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
	}

IL_0038:
	{
		Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack_Trim_m2611CBE6E011E00269FB6B0610403EA10DEFCA1C_fshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, uint32_t ___0_tickCount, int32_t ___1_id, int32_t ___2_pressure, int32_t ___3_bucketSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit);
	uint32_t V_0 = 0;
	LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* V_1 = NULL;
	bool V_2 = false;
	ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* V_3 = NULL;
	int32_t V_4 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = __this->____count;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int32_t L_1 = ___2_pressure;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0014;
		}
	}
	{
		G_B5_0 = ((int32_t)60000);
		goto IL_0019;
	}

IL_0014:
	{
		G_B5_0 = ((int32_t)10000);
	}

IL_0019:
	{
		V_0 = G_B5_0;
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0110:
			{
				{
					bool L_2 = V_2;
					if (!L_2)
					{
						goto IL_0119;
					}
				}
				{
					LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_3 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_3, NULL);
				}

IL_0119:
				{
					return;
				}
			}
		});
		try
		{
			{
				LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* L_4 = V_1;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_4, (&V_2), NULL);
				int32_t L_5 = __this->____count;
				if ((((int32_t)L_5) <= ((int32_t)0)))
				{
					goto IL_0038_1;
				}
			}
			{
				uint32_t L_6 = __this->____firstStackItemMS;
				uint32_t L_7 = ___0_tickCount;
				if ((!(((uint32_t)L_6) <= ((uint32_t)L_7))))
				{
					goto IL_0046_1;
				}
			}

IL_0038_1:
			{
				uint32_t L_8 = ___0_tickCount;
				uint32_t L_9 = __this->____firstStackItemMS;
				uint32_t L_10 = V_0;
				if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9))) > ((uint32_t)L_10))))
				{
					goto IL_010e_1;
				}
			}

IL_0046_1:
			{
				CHECKED_LOCAL_INIT(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticInit,(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_11 = ((ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_StaticFields*)il2cpp_codegen_static_fields_for(ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888_il2cpp_TypeInfo_var))->___Log;
				V_3 = L_11;
				V_4 = 1;
				int32_t L_12 = ___2_pressure;
				if ((((int32_t)L_12) == ((int32_t)1)))
				{
					goto IL_0089_1;
				}
			}
			{
				int32_t L_13 = ___2_pressure;
				if ((!(((uint32_t)L_13) == ((uint32_t)2))))
				{
					goto IL_00d3_1;
				}
			}
			{
				V_4 = 8;
				int32_t L_14 = ___3_bucketSize;
				if ((((int32_t)L_14) <= ((int32_t)((int32_t)16384))))
				{
					goto IL_0069_1;
				}
			}
			{
				int32_t L_15 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
			}

IL_0069_1:
			{
				int32_t L_16;
				L_16 = Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
				if ((((int32_t)L_16) <= ((int32_t)((int32_t)16))))
				{
					goto IL_0078_1;
				}
			}
			{
				int32_t L_17 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
			}

IL_0078_1:
			{
				int32_t L_18;
				L_18 = Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
				if ((((int32_t)L_18) <= ((int32_t)((int32_t)32))))
				{
					goto IL_00d3_1;
				}
			}
			{
				int32_t L_19 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				goto IL_00d3_1;
			}

IL_0089_1:
			{
				V_4 = 2;
				goto IL_00d3_1;
			}

IL_008e_1:
			{
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_20 = __this->____arrays;
				int32_t L_21 = __this->____count;
				V_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
				int32_t L_22 = V_6;
				__this->____count = L_22;
				int32_t L_23 = V_6;
				int32_t L_24 = L_23;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
				V_5 = L_25;
				__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_26 = __this->____arrays;
				int32_t L_27 = __this->____count;
				ArrayElementTypeCheck (L_26, NULL);
				(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27), (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL);
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_28 = V_3;
				bool L_29;
				L_29 = EventSource_IsEnabled_m0B2F63F81423D7832DC5526D0F3490C77CAB57A5(L_28, NULL);
				if (!L_29)
				{
					goto IL_00d3_1;
				}
			}
			{
				ArrayPoolEventSource_tDB6CA549DFC2FBEB134C71EB85DBD6D943E5C888* L_30 = V_3;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_31 = V_5;
				int32_t L_32;
				L_32 = VirtualFuncInvoker0< int32_t >::Invoke(2, (RuntimeObject*)L_31);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_33 = V_5;
				int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
				int32_t L_35 = ___1_id;
				ArrayPoolEventSource_BufferTrimmed_m7E5BBBCE84BEF9C79981E482AC6D2FA6FFB2ECB0(L_30, L_32, L_34, L_35, NULL);
			}

IL_00d3_1:
			{
				int32_t L_36 = __this->____count;
				if ((((int32_t)L_36) <= ((int32_t)0)))
				{
					goto IL_00e6_1;
				}
			}
			{
				int32_t L_37 = V_4;
				int32_t L_38 = L_37;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
				if ((((int32_t)L_38) > ((int32_t)0)))
				{
					goto IL_008e_1;
				}
			}

IL_00e6_1:
			{
				int32_t L_39 = __this->____count;
				if ((((int32_t)L_39) <= ((int32_t)0)))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_40 = __this->____firstStackItemMS;
				if ((!(((uint32_t)L_40) < ((uint32_t)((int32_t)-15001)))))
				{
					goto IL_010e_1;
				}
			}
			{
				uint32_t L_41 = __this->____firstStackItemMS;
				__this->____firstStackItemMS = ((int32_t)il2cpp_codegen_add((int32_t)L_41, ((int32_t)15000)));
			}

IL_010e_1:
			{
				goto IL_011a;
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

IL_011a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedStack__ctor_mDC1C46693A1D2D00E172498967CA24C98E5205D4_fshared (LockedStack_tA2963E19C6D1029555446DD09B0B4208AC0F8E4A* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F* L_0 = (__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)(__Il2CppFullySharedGenericTypeU5BU5DU5BU5D_tAE866946296CBB820B69570ADEE87D79ADAAC33F*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), (uint32_t)8);
		__this->____arrays = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrays), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m87226A6E5044C64940B1E62F62D70FCE887EA333_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_x, Il2CppFullySharedGenericStruct ___1_y, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_x, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_2;
		L_2 = JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0(il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		il2cpp_codegen_memcpy(L_3, ___1_y, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_5;
		L_5 = JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0(il2cpp_codegen_memcpy(L_4, L_3, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		V_0 = L_5;
		int64_t L_6 = V_0;
		return (bool)((((int64_t)L_2) == ((int64_t)L_6))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m61BF4CA9A33282177F9DD76BB500FCF4D37CBBBE_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, Il2CppFullySharedGenericStruct ___0_obj, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
	int64_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, ___0_obj, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B);
		int64_t L_2;
		L_2 = JitHelpers_UnsafeEnumCastLong_TisIl2CppFullySharedGenericStruct_m6EF2FAAF622DABAA1B6E2B7F06A11F368F3DDCA0(il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t08EC0605FED6CD64D1E8EB373C40A572F9F0362B), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_0), NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LongEnumEqualityComparer_1_Equals_m280B770B270E901648E8FDD542D25AF52CA6277D_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		return (bool)((!(((RuntimeObject*)(LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)((LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LongEnumEqualityComparer_1_GetHashCode_m1B5FABC53D2E5598D4A5A1270A520F1B4641E11C_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0;
		L_0 = il2cpp_codegen_object_get_type((RuntimeObject*)__this);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_0);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2, L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mE638EE50B5DDF2DB094F6BF8703B23872496CBA6_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m336C109B6C7CFACF4C9C81001B5F77C764DBDFC1((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1__ctor_mA0738549DB4AF45B2147E7AEE297513FD4CC4F0D_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_information, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		EqualityComparer_1__ctor_m336C109B6C7CFACF4C9C81001B5F77C764DBDFC1((EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9*)__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LongEnumEqualityComparer_1_GetObjectData_mD2CD7924C13DE56E2A77BC35201C20CEC5FEA139_fshared (LongEnumEqualityComparer_1_t84E9660A2B34FF3EBE584576308B60B885D573D2* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 4)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		SerializationInfo_SetType_m5D07E1C38028872E49EA01129ED5BF1AF674C475(L_0, L_2, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m6893497702070CC68AC3BAB751834E9FF68C4528_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	{
		DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5* L_0 = (DefaultComparer_1_tF12896E32765999A5CD556EEF744B5B1AEB870E5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		DefaultComparer_1__ctor_m3125A41749298C596BE7DAE59E0801F21BDE1482(L_0, NULL);
		LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A(__this, ((int32_t)17), (RuntimeObject*)L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2__ctor_m2976D36B6439669E09FF4616F9EB6AAB8DDDB62A_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___1_comparer;
		__this->____comparer = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer), (void*)L_0);
		int32_t L_1 = ___0_capacity;
		LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3(__this, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_set_Item_mCA9C09B6AFCF6CC5CE6A0C40EA78FC75689EF04D_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_12 = L_5;
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6;
		L_6 = LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? il2cpp_codegen_memcpy(L_5, L_4, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_4), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		V_0 = L_6;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = V_0;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_0;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		il2cpp_codegen_write_field_data<true>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_9, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14;
		L_14 = LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? il2cpp_codegen_memcpy(L_12, L_10, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_10), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? il2cpp_codegen_memcpy(L_13, L_11, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900): *(void**)L_11), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_Clear_m8EC37682AC495C0E5B8EB7CA373B7D9FE89616D3_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = ___0_capacity;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_2 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), (uint32_t)L_1);
		__this->____buckets = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_2);
		__this->____numEntries = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelDictionary_2_Remove_m70E88A5B684A3A944B6569781B7B3918196A98E6_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_3 = L_0;
	const Il2CppFullySharedGenericAny L_11 = L_0;
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_13 = L_4;
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_2 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_5;
		L_5 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? il2cpp_codegen_memcpy(L_4, L_3, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_3), 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		V_0 = L_5;
		V_1 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_6 = __this->____buckets;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		goto IL_0083;
	}

IL_0029:
	{
		RuntimeObject* L_10 = __this->____comparer;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = V_2;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_14;
		L_14 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_007a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_1;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_16 = __this->____buckets;
		int32_t L_17 = V_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_18 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_18, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_19);
		goto IL_005c;
	}

IL_0050:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_21 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_22 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_20, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_22);
	}

IL_005c:
	{
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		int32_t L_24 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_subtract(L_24, 1));
		return (bool)1;
	}

IL_007a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_25 = V_2;
		V_1 = L_25;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_26 = V_2;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_27 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_26, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		V_2 = L_27;
	}

IL_0083:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_28 = V_2;
		if (L_28)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_Find_m179CAB1400AF502A22F57DE2B32B403D4BE04671_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_8 = L_0;
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_10 = L_1;
	int32_t V_0 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_1 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_2;
		L_2 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_0), 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		V_0 = L_2;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_3 = __this->____buckets;
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_1 = L_6;
		goto IL_0031;
	}

IL_0014:
	{
		RuntimeObject* L_7 = __this->____comparer;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = V_1;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		bool L_11;
		L_11 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_10: *(void**)L_10));
		if (!L_11)
		{
			goto IL_002a;
		}
	}
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = V_1;
		return L_12;
	}

IL_002a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_13 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_14 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
		V_1 = L_14;
	}

IL_0031:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_1;
		if (L_15)
		{
			goto IL_0014;
		}
	}
	{
		return (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)NULL;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* LowLevelDictionary_2_UncheckedAdd_mFD09849DDF8DDA1917BFE11E1C65CE60CDDA2D6F_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const uint32_t SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_0 = (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7));
		Entry__ctor_m50DA99B3EE92A0B3C7CBF76172DCF3DDDFCB2C93(L_0, NULL);
		V_0 = L_0;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		il2cpp_codegen_write_field_data<true>(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12), L_2, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_3 = V_0;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6)) ? ___1_value : &___1_value), SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		il2cpp_codegen_write_field_data<true>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 8), L_4, SizeOf_TValue_tB3C24A8DFC2827D365872308F1B90808557FC900);
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_7;
		L_7 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? il2cpp_codegen_memcpy(L_6, L_5, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_5), 0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
		V_1 = L_7;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_0;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_9 = __this->____buckets;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_12);
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_13 = __this->____buckets;
		int32_t L_14 = V_1;
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_0;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_15);
		int32_t L_16 = __this->____numEntries;
		__this->____numEntries = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = __this->____numEntries;
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_18 = __this->____buckets;
		int32_t L_19 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_18)->max_length),NULL));
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)il2cpp_codegen_multiply(L_19, 2)))))
		{
			goto IL_005a;
		}
	}
	{
		LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
	}

IL_005a:
	{
		Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelDictionary_2_ExpandBuckets_m187E4F5B88425903219951B37753A533F3AED6FB_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	int32_t V_0 = 0;
	EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* V_1 = NULL;
	int32_t V_2 = 0;
	Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_0 = __this->____buckets;
			int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
			V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, 2)), 1));
			int32_t L_2 = V_0;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_3 = (EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)(EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 10), (uint32_t)L_2);
			V_1 = L_3;
			V_2 = 0;
			goto IL_004f_1;
		}

IL_0018_1:
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_4 = __this->____buckets;
			int32_t L_5 = V_2;
			int32_t L_6 = L_5;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
			V_3 = L_7;
			goto IL_0048_1;
		}

IL_0023_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_8 = V_3;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_9 = *(Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA**)il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15));
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_10 = V_3;
			il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 12)), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
			int32_t L_12 = V_0;
			int32_t L_14;
			L_14 = LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? il2cpp_codegen_memcpy(L_13, L_11, SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9): *(void**)L_11), L_12, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
			V_4 = L_14;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_15 = V_3;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_16 = V_1;
			int32_t L_17 = V_4;
			int32_t L_18 = L_17;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_19 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_18));
			il2cpp_codegen_write_field_data<Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*, true>(L_15, il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 7),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 15), L_19);
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_20 = V_1;
			int32_t L_21 = V_4;
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_22 = V_3;
			(L_20)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21), (Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA*)L_22);
			V_3 = L_9;
		}

IL_0048_1:
		{
			Entry_t293B6AB120856BFD8E015525A46B3A31699C94BA* L_23 = V_3;
			if (L_23)
			{
				goto IL_0023_1;
			}
		}
		{
			int32_t L_24 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		}

IL_004f_1:
		{
			int32_t L_25 = V_2;
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_26 = __this->____buckets;
			int32_t L_27 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_26)->max_length),NULL));
			if ((((int32_t)L_25) < ((int32_t)L_27)))
			{
				goto IL_0018_1;
			}
		}
		{
			EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_28 = V_1;
			__this->____buckets = L_28;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_28);
			goto IL_0066;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0063;
		}
		throw e;
	}

CATCH_0063:
	{
		OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F* L_29 = ((OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*)IL2CPP_GET_ACTIVE_EXCEPTION(OutOfMemoryException_tE6DC2F937EC4A8699271D5151C4DF83BDE99EE7F*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0066;
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelDictionary_2_GetBucket_m1A96B86081231C08700D90259C776BF8CE47FD04_fshared (LowLevelDictionary_2_t10472B425309CC8D325AF29FC88EAA9D01ABEB47* __this, Il2CppFullySharedGenericAny ___0_key, int32_t ___1_numBuckets, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		RuntimeObject* L_0 = __this->____comparer;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___0_key : &___0_key), SizeOf_TKey_t8FB2343F7E47C8D3B483431BFBEE55A6A61DC6F9);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1Invoker< int32_t, Il2CppFullySharedGenericAny >::Invoke(1, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? L_1: *(void**)L_1));
		int32_t L_3 = ___1_numBuckets;
		if (!L_3)
		{
			G_B2_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
			goto IL_0018;
		}
		G_B1_0 = ((int32_t)(L_2&((int32_t)2147483647LL)));
	}
	{
		int32_t L_4 = ___1_numBuckets;
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		goto IL_0020;
	}

IL_0018:
	{
		EntryU5BU5D_t6B3836A498033C61F559387A83D138BFE12D3E52* L_5 = __this->____buckets;
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0020:
	{
		return ((int32_t)(G_B3_1%G_B3_0));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m7AB0E8E5B20FFDC048A5EF35FE2D5BFC411168BE_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelListWithIList_1__ctor_m4B122A24C900A82393070E3BC47A5195E41D0166_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit);
	{
		int32_t L_0 = ___0_capacity;
		CHECKED_LOCAL_INIT(LowLevelList_1_tED7CDE753F0907DE09A3A0E3D98369E9AAC368D0_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)),il2cpp_codegen_runtime_class_init_inline);
		LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelListWithIList_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4370070FFE2C281C957687075D458D7367685370_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2192B77A7D1721166B77434FAE475580AEABF35A_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LowLevelListWithIList_1_System_Collections_IEnumerable_GetEnumerator_mC47144515E8A260A0737260ED6A11C0D5C3B74DE_fshared (LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0 L_0 = alloca(SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
	{
		memset(L_0, 0, SizeOf_Enumerator_tB19D46B40EC775D8EBAD1F019FB1BC10822C8ECA);
		Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3), L_0);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mD3CD763C70C97727954E6E8A5A8E140EF55EDE9F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__ctor_mCDEF1A5F77BCA815F0CDF2C6EB9E91D3909BC5BB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0015:
	{
		int32_t L_2 = ___0_capacity;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_3);
		return;
	}

IL_0024:
	{
		int32_t L_4 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_4);
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Capacity_mE34B1F6427145BD1BC7EC9E5F2290027CB634FAC_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_6 = ___0_value;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_7 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		V_0 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = V_0;
		int32_t L_11 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, L_11, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__this->____items = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_12);
		return;
	}

IL_0046:
	{
		CHECKED_LOCAL_INIT(LowLevelList_1_tD926F62ED465B07BBA0194B1B198F392B63F1844_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)),il2cpp_codegen_runtime_class_init_inline);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)))->___s_emptyArray;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
	}

IL_0051:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_get_Count_m606E086DB7EE87F6497FC018F90AE7988456C6A4_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_get_Item_mE1B6F0331605C882D5552283F3E039DAB1CFE249_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_set_Item_m43802D3D871A9B9E33879921E12CC84BADF9D917_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_000f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_value : &___1_value), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Add_mA79D24F8FC36DBAE441CD350B69E58E559F3A77A_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____size;
		LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = __this->____size;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy((L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B4_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0020;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		G_B4_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_min;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_8 = ___0_min;
		V_0 = L_8;
	}

IL_0028:
	{
		int32_t L_9 = V_0;
		LowLevelList_1_set_Capacity_m72ED35E6CF83B329A983773E2DBE542A235CA53E(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_002f:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_AddRange_mBE88210260B339F084E453A719D44DBD91025233_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		RuntimeObject* L_1 = ___0_collection;
		LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0(__this, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Clear_mE1C2D67C7C00C6323E9825A0ED4946C0C0EAD499_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Contains_mF7E0C9FBFE03FCE5AB7A8A5F2372A6398AC0F027_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_0);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_5);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_12;
		L_12 = LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? il2cpp_codegen_memcpy(L_11, L_10, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_10), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)1;
	}

IL_003c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_CopyTo_mF495B6C8191B5C8929B60BC9F7502FE518DC81DE_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_2 = __this->____size;
		int32_t L_4;
		L_4 = Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_1), 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = __this->____size;
		LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0032:
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		int32_t L_14 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
	}

IL_0058:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____items;
		int32_t L_16 = ___0_index;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_item : &___1_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)), L_17, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_17);
		int32_t L_18 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_InsertRange_m10381E430332334B43213A556876E789C677A9B0_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, RuntimeObject* ___1_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_50 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_51 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___1_collection;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral469F05BE9BB4C7903C353D0EB9F6384C84A48B25)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->____size;
		if ((!(((uint32_t)L_2) > ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___1_collection;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)));
		RuntimeObject* L_6 = V_0;
		if (!L_6)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_7 = V_0;
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_7);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0107;
		}
	}
	{
		int32_t L_10 = __this->____size;
		int32_t L_11 = V_1;
		LowLevelList_1_EnsureCapacity_mE56EA3BECD245513463EE874D0025C6A20FBC309(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			goto IL_0071;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____items;
		int32_t L_15 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____items;
		int32_t L_17 = ___0_index;
		int32_t L_18 = V_1;
		int32_t L_19 = __this->____size;
		int32_t L_20 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, L_15, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), ((int32_t)il2cpp_codegen_subtract(L_19, L_20)), NULL);
	}

IL_0071:
	{
		RuntimeObject* L_21 = V_0;
		if ((!(((RuntimeObject*)(LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)__this) == ((RuntimeObject*)(RuntimeObject*)L_21))))
		{
			goto IL_00aa;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____items;
		int32_t L_24 = ___0_index;
		int32_t L_25 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_22, 0, (RuntimeArray*)L_23, L_24, L_25, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = __this->____items;
		int32_t L_27 = ___0_index;
		int32_t L_28 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = __this->____items;
		int32_t L_30 = ___0_index;
		int32_t L_31 = __this->____size;
		int32_t L_32 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_26, ((int32_t)il2cpp_codegen_add(L_27, L_28)), (RuntimeArray*)L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), ((int32_t)il2cpp_codegen_subtract(L_31, L_32)), NULL);
		goto IL_00c8;
	}

IL_00aa:
	{
		int32_t L_33 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_34 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_33);
		V_2 = L_34;
		RuntimeObject* L_35 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_36 = V_2;
		InterfaceActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 8), L_35, L_36, 0);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_38 = __this->____items;
		int32_t L_39 = ___0_index;
		int32_t L_40 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, L_39, L_40, NULL);
	}

IL_00c8:
	{
		int32_t L_41 = __this->____size;
		int32_t L_42 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_41, L_42));
		goto IL_0107;
	}

IL_00d8:
	{
		RuntimeObject* L_43 = ___1_collection;
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 11), L_43);
		V_3 = L_44;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00fd:
			{
				{
					RuntimeObject* L_45 = V_3;
					if (!L_45)
					{
						goto IL_0106;
					}
				}
				{
					RuntimeObject* L_46 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_46);
				}

IL_0106:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_00f3_1;
			}

IL_00e1_1:
			{
				int32_t L_47 = ___0_index;
				int32_t L_48 = L_47;
				___0_index = ((int32_t)il2cpp_codegen_add(L_48, 1));
				RuntimeObject* L_49 = V_3;
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 13), L_49, (Il2CppFullySharedGenericAny*)L_50);
				LowLevelList_1_Insert_mECC1247C269DC9FD2DE1250FE6418D768BA1CD16(__this, L_48, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? il2cpp_codegen_memcpy(L_51, L_50, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_50), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
			}

IL_00f3_1:
			{
				RuntimeObject* L_52 = V_3;
				bool L_53;
				L_53 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_52);
				if (L_53)
				{
					goto IL_00e1_1;
				}
			}
			{
				goto IL_0107;
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

IL_0107:
	{
		int32_t L_54 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_54, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LowLevelList_1_Remove_m9CA49DFEEE8490053D50ACB37A61A63ECFDF6164_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		int32_t L_2;
		L_2 = LowLevelList_1_IndexOf_mF86770392070839AB16F994F40A7B380FAD741CB(__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159): *(void**)L_0), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_4 = V_0;
		LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F(__this, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LowLevelList_1_RemoveAll_m7EA2BB7ADDD12BF71851BEF2E164FD40AD97757E_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	const Il2CppFullySharedGenericAny L_21 = L_9;
	const Il2CppFullySharedGenericAny L_32 = L_9;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_match;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0016;
	}

IL_0012:
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0016:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->____size;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0033;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_5 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_10;
		L_10 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_9: *(void**)L_9), NULL);
		if (!L_10)
		{
			goto IL_0012;
		}
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->____size;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_003e;
		}
	}
	{
		return 0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
		goto IL_008e;
	}

IL_0044:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0048:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = __this->____size;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0065;
		}
	}
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_17 = ___0_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = __this->____items;
		int32_t L_19 = V_1;
		int32_t L_20 = L_19;
		il2cpp_codegen_memcpy(L_21, (L_18)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		bool L_22;
		L_22 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_21: *(void**)L_21), NULL);
		if (L_22)
		{
			goto IL_0044;
		}
	}

IL_0065:
	{
		int32_t L_23 = V_1;
		int32_t L_24 = __this->____size;
		if ((((int32_t)L_23) >= ((int32_t)L_24)))
		{
			goto IL_008e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = __this->____items;
		int32_t L_26 = V_0;
		int32_t L_27 = L_26;
		V_0 = ((int32_t)il2cpp_codegen_add(L_27, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_28 = __this->____items;
		int32_t L_29 = V_1;
		int32_t L_30 = L_29;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		int32_t L_31 = L_30;
		il2cpp_codegen_memcpy(L_32, (L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)), SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)), L_32, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_32);
	}

IL_008e:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = __this->____size;
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_35 = __this->____items;
		int32_t L_36 = V_0;
		int32_t L_37 = __this->____size;
		int32_t L_38 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_35, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_38)), NULL);
		int32_t L_39 = __this->____size;
		int32_t L_40 = V_0;
		int32_t L_41 = V_0;
		__this->____size = L_41;
		int32_t L_42 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_42, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_39, L_40));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1_RemoveAt_mA9B8AB65576735830A4A79EFF4FCDD16A3E0BC2F_fshared (LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	memset(V_0, 0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->____size;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____items;
		int32_t L_7 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____items;
		int32_t L_9 = ___0_index;
		int32_t L_10 = __this->____size;
		int32_t L_11 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, ((int32_t)il2cpp_codegen_add(L_7, 1)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(L_10, L_11)), NULL);
	}

IL_0048:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		il2cpp_codegen_memcpy((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t1A3545A2987F4ED1148DAF9AF45DF8CB8D0B2159);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		int32_t L_15 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_15, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LowLevelList_1__cctor_m663DD9A631105882B519C495A2D1077501A0FF6E_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (uint32_t)0);
		((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_emptyArray), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1__ctor_m40B48A3F93602CA3B11082174419F92C87991ED4_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t ___0_chunkSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_chunkSize;
		__this->___m_ChunkSize = L_0;
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_1 = (List_1_t86CEEDD235E596954775CA0742BC77B3779A0347*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		List_1__ctor_mE47F2A05D047C5831E195F8F2577C836892F8A76(L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_2 = L_1;
		int32_t L_3 = __this->___m_ChunkSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_3);
		List_1_Add_mFD92FC4DF9C51E76D74F6584FB6C713C6A955AB7_inline(L_2, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		__this->___m_Chunks = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Chunks), (void*)L_2);
		__this->___m_Length = 1;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_5 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_5, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		__this->___m_Free = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Free), (void*)L_5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_GetValue_mE2FBA0F28BC33EEC4E02CE2979EA177A50E7F634_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	const Il2CppFullySharedGenericAny L_11 = L_1;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	memset(V_2, 0, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	{
		int32_t L_0 = ___0_index;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(L_1, V_2, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		return;
	}

IL_000d:
	{
		int32_t L_2 = ___0_index;
		int32_t L_3 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_2/L_3));
		int32_t L_4 = ___0_index;
		int32_t L_5 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_4%L_5));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_6 = __this->___m_Chunks;
		int32_t L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8;
		L_8 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_6, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManagedObjectStore_1_UpdateValue_mA68231A6328DCD1A80E8B50EAB8B031C382F071E_fshared (ManagedObjectStore_1_tEE26F86DCDAA8777D74E172B69D8B59A9A1E96A9* __this, int32_t* ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	const Il2CppFullySharedGenericAny L_14 = L_2;
	const Il2CppFullySharedGenericAny L_28 = L_2;
	const Il2CppFullySharedGenericAny L_30 = L_2;
	const Il2CppFullySharedGenericAny L_47 = L_2;
	const Il2CppFullySharedGenericAny L_70 = L_2;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	memset(V_4, 0, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *(L_0);
		if (!L_1)
		{
			goto IL_0075;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		bool L_3 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_2);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = *(L_4);
		int32_t L_6 = __this->___m_ChunkSize;
		V_0 = ((int32_t)(L_5/L_6));
		int32_t* L_7 = ___0_index;
		int32_t L_8 = *(L_7);
		int32_t L_9 = __this->___m_ChunkSize;
		V_1 = ((int32_t)(L_8%L_9));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_10 = __this->___m_Chunks;
		int32_t L_11 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12;
		L_12 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_10, L_11, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		int32_t L_13 = V_1;
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), L_14, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_14);
		return;
	}

IL_0034:
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_15 = __this->___m_Free;
		int32_t* L_16 = ___0_index;
		int32_t L_17 = *(L_16);
		Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_15, L_17, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		int32_t* L_18 = ___0_index;
		int32_t L_19 = *(L_18);
		int32_t L_20 = __this->___m_ChunkSize;
		V_2 = ((int32_t)(L_19/L_20));
		int32_t* L_21 = ___0_index;
		int32_t L_22 = *(L_21);
		int32_t L_23 = __this->___m_ChunkSize;
		V_3 = ((int32_t)(L_22%L_23));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_24 = __this->___m_Chunks;
		int32_t L_25 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26;
		L_26 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_24, L_25, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		int32_t L_27 = V_3;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy(L_28, V_4, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)), L_28, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)), (void*)L_28);
		int32_t* L_29 = ___0_index;
		*(L_29) = 0;
		return;
	}

IL_0075:
	{
		il2cpp_codegen_memcpy(L_30, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), L_30);
		if (!L_31)
		{
			goto IL_0134;
		}
	}
	{
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_32 = __this->___m_Free;
		int32_t L_33;
		L_33 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_32, NULL);
		if ((((int32_t)L_33) <= ((int32_t)0)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t* L_34 = ___0_index;
		Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_35 = __this->___m_Free;
		int32_t L_36;
		L_36 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_35, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		*(L_34) = L_36;
		int32_t* L_37 = ___0_index;
		int32_t L_38 = *(L_37);
		int32_t L_39 = __this->___m_ChunkSize;
		V_5 = ((int32_t)(L_38/L_39));
		int32_t* L_40 = ___0_index;
		int32_t L_41 = *(L_40);
		int32_t L_42 = __this->___m_ChunkSize;
		V_6 = ((int32_t)(L_41%L_42));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_43 = __this->___m_Chunks;
		int32_t L_44 = V_5;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_45;
		L_45 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_43, L_44, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		int32_t L_46 = V_6;
		il2cpp_codegen_memcpy(L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy((L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)), L_47, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_45)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_46)), (void*)L_47);
		return;
	}

IL_00c7:
	{
		int32_t* L_48 = ___0_index;
		int32_t L_49 = __this->___m_Length;
		V_9 = L_49;
		int32_t L_50 = V_9;
		__this->___m_Length = ((int32_t)il2cpp_codegen_add(L_50, 1));
		int32_t L_51 = V_9;
		*(L_48) = L_51;
		int32_t* L_52 = ___0_index;
		int32_t L_53 = *(L_52);
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_54 = __this->___m_Chunks;
		int32_t L_55;
		L_55 = List_1_get_Count_m5F28C6E82FCE45373CD5786E08E8BA6799F70422_inline(L_54, NULL);
		int32_t L_56 = __this->___m_ChunkSize;
		if ((((int32_t)L_53) < ((int32_t)((int32_t)il2cpp_codegen_multiply(L_55, L_56)))))
		{
			goto IL_0109;
		}
	}
	{
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_57 = __this->___m_Chunks;
		int32_t L_58 = __this->___m_ChunkSize;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_59 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (uint32_t)L_58);
		List_1_Add_mFD92FC4DF9C51E76D74F6584FB6C713C6A955AB7_inline(L_57, L_59, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
	}

IL_0109:
	{
		int32_t* L_60 = ___0_index;
		int32_t L_61 = *(L_60);
		int32_t L_62 = __this->___m_ChunkSize;
		V_7 = ((int32_t)(L_61/L_62));
		int32_t* L_63 = ___0_index;
		int32_t L_64 = *(L_63);
		int32_t L_65 = __this->___m_ChunkSize;
		V_8 = ((int32_t)(L_64%L_65));
		List_1_t86CEEDD235E596954775CA0742BC77B3779A0347* L_66 = __this->___m_Chunks;
		int32_t L_67 = V_7;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_68;
		L_68 = List_1_get_Item_m24182315BE1ED5609F0ACF39331685141AA53443(L_66, L_67, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		int32_t L_69 = V_8;
		il2cpp_codegen_memcpy(L_70, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)) ? ___1_value : &___1_value), SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		il2cpp_codegen_memcpy((L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_69)), L_70, SizeOf_T_t8D9FA4D3FBB9C6AD2378F5AC758C3FA699806F57);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), (void**)(L_68)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_69)), (void*)L_70);
	}

IL_0134:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxNDebugView_1__ctor_m612DBE768DD5AEC78CC6BFA61C0F75B9635C5EAC_fshared (MatrixMxNDebugView_1_t54DB71F55826C54683CEB4D2B2ECCAF248A88B13* __this, MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E ___0_array, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E L_0 = ___0_array;
		__this->___array = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* MatrixMxNDebugView_1_get_Items_m7B33D95C2C7B4B06248F825614948E7BF49BE97B_fshared (MatrixMxNDebugView_1_t54DB71F55826C54683CEB4D2B2ECCAF248A88B13* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* V_0 = NULL;
	{
		MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* L_0 = (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E*)(&__this->___array);
		int32_t L_1;
		L_1 = MatrixMxN_1_get_Length_mBC3776550911BA05734890369C64FEBEED87957E(L_0, NULL);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)(__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_1);
		V_0 = L_2;
		MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* L_3 = (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E*)(&__this->___array);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_4 = V_0;
		MatrixMxN_1_CopyTo_mAA9DDC54A871349C3441EEF6611139614B4A8F68(L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_5 = V_0;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1__ctor_mD7C1B5E5DB3EC632CE6E6B29DC4782EE4E10E669_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, int32_t ___0_width, int32_t ___1_height, int32_t ___2_allocMode, int32_t ___3_options, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0 = ___0_width;
		__this->___m_Width = L_0;
		int32_t L_1 = ___1_height;
		__this->___m_Height = L_1;
		int32_t L_2 = __this->___m_Width;
		int32_t L_3 = __this->___m_Height;
		int32_t L_4 = ___2_allocMode;
		int32_t L_5 = ___3_options;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		memset((&L_6), 0, sizeof(L_6));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_6), ((int32_t)il2cpp_codegen_multiply(L_2, L_3)), L_4, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		__this->___m_Array = L_6;
		int32_t L_7 = ___2_allocMode;
		__this->___m_AllocLabel = L_7;
		int32_t L_8 = ___3_options;
		__this->___m_Options = L_8;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_get_Item_mCB286376FAE8DB6E7DDD529ECAFA52529512BA23_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_1 = ___0_index;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_set_Item_mBB1FDF0BBCA714FBA22962F6125A255144B7D398_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_1 = ___0_index;
		il2cpp_codegen_memcpy(L_2, ___1_value, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline(L_0, L_1, il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 MatrixMxN_1_GetArray_m9F72434935311256F9277D1C5FCBFD8888DB2159_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = __this->___m_Array;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_Get_m8F3575B885A95FFD46EB712A7CCEB33EE78ABD46_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, int32_t ___0_x, int32_t ___1_y, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_1 = ___0_x;
		int32_t L_2 = __this->___m_Height;
		int32_t L_3 = ___1_y;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, L_2)), L_3)), (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_Set_mD0A72616217EA0C9BF1A7D7246D4D3DD366257E1_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, int32_t ___0_x, int32_t ___1_y, Il2CppFullySharedGenericStruct ___2_v, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		int32_t L_1 = ___0_x;
		int32_t L_2 = __this->___m_Height;
		int32_t L_3 = ___1_y;
		il2cpp_codegen_memcpy(L_4, ___2_v, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D);
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, L_2)), L_3)), il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t66F7E20077C28ADFCA962FA197D479353432DF9D), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MatrixMxN_1_get_IsCreated_m139C6B102F48E632ED103BEF00641884CF621E16_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatrixMxN_1_get_Length_mBC3776550911BA05734890369C64FEBEED87957E_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Width;
		int32_t L_1 = __this->___m_Height;
		return ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatrixMxN_1_get_DimensionX_m2FD49E5253BB5F83A0F73FF4CA6BDC4C435DD3F8_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Width;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MatrixMxN_1_get_DimensionY_m2C91E339A741646CF3302B3741EC45AD41C242E6_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Height;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		__this->___m_Width = 0;
		__this->___m_Height = 0;
		return;
	}
}
IL2CPP_EXTERN_C  void MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E>(__this);
	MatrixMxN_1_Dispose_m13DFF7EC0FB4F5CE59972F37B2178F083A7B788A(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatrixMxN_1_CopyTo_mAA9DDC54A871349C3441EEF6611139614B4A8F68_fshared (MatrixMxN_1_t875A8DF2991B522ABDC793640D4BA4B122A7F47E* __this, __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_Array);
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1 = ___0_array;
		NativeArray_1_CopyTo_m6072353F8BA28E08B24828767C0A5AA713F0B307(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseCaptureEventBase_1__ctor_m180840500B370E7F56003DC24D94D9EBD5D924B4_gshared (MouseCaptureEventBase_1_t22B283B27FCD61274E7CEDD317FC2E9F4BD61350* __this, const RuntimeMethod* method) 
{
	{
		PointerCaptureEventBase_1__ctor_m6504E51BF3B701E614E30F22DD97E3E2E68EB5CD((PointerCaptureEventBase_1_t9BF4F6306E302473284F1BE796EA814210B8C744*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmodifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CmodifiersU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmousePositionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmousePositionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_localMousePosition_m131A18730A4BE067934A9F1F720FA8B8DAEFF5AB_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3ClocalMousePositionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3ClocalMousePositionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mouseDelta_mA9B00E7C5EAD63AE805FF883D81C73B88F781F3C_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmouseDeltaU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmouseDeltaU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_clickCount_m17BC12D6D3330C64A5ECF4CD9D7ECB8C10F7AF87_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CclickCountU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CclickCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_button_mE41C6A5049A4C911CE2ED43C6C391A350B728C22_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CbuttonU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CbuttonU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_pressedButtons_m4F57AA0AAB4D8B66B85F6BA7B303753583258895_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CpressedButtonsU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CpressedButtonsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_ctrlKey_m96AD34ADFBB5A39300F76AA72AF966C4216AB287_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_inline(__this, NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_commandKey_m55FF4BF6C66063A081ADDD1EA8E0E654E2186243_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_inline(__this, NULL);
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&8))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CsourcePointerEventU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CsourcePointerEventU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourcePointerEventU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = __this->___U3CpanelRayU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = ___0_value;
		__this->___U3CpanelRayU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_UnityEngine_UIElements_IMouseEventInternal_get_sourcePointerEvent_m48E19EBBB2A61F35D911AC9DB23F476C188984DE_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MouseEventBase_1_UnityEngine_UIElements_IPointerOrMouseEvent_get_position_m02DAC2E7F1E97CA41728B1076F87DA873F44D9A3_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_UnityEngine_UIElements_IPointerOrMouseEvent_get_panelRay_m3B60484F182F8AD227F01718B0E72818B9A31505_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0;
		L_0 = MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_inline(__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_Init_mCD0FC8AA5CB7457CCB1F7381A77C822087590DA5_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		EventBase_1_Init_m810FE185606F5EB505285FEDEDB759E3DDB0E934((EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*)__this, NULL);
		MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132(__this, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, 3, NULL);
		MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline(__this, 0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline(__this, L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline(__this, L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline(__this, L_2, NULL);
		MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline(__this, 0, NULL);
		MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline(__this, 0, NULL);
		MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline(__this, 0, NULL);
		MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_inline(__this, (RuntimeObject*)NULL, NULL);
		MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_inline(__this, (bool)0, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768));
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_3 = V_0;
		MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_inline(__this, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_currentTarget_mC792EFDB3E1086082EF5095FF5829C4DD851222B_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_set_currentTarget_m28180A3FB11BB5D148D0958DCB229BFA53FCBFF6_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61_StaticInit);
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		EventBase_set_currentTarget_m778A667A791A9A67D61010F9B6A2A69D961C4C14((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_0, NULL);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(11, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this);
		V_0 = ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)IsInstClass((RuntimeObject*)L_1, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		CHECKED_LOCAL_INIT(VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61_StaticInit,(VisualElementExtensions_t5F9CD76F92E7BD4E3F3B6FEF246057D6FEAF9A61_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = VisualElementExtensions_WorldToLocal3D_m19BBC65BE9BCA191894DB2B26EE1E083C4D349F3(L_3, L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_6, NULL);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline(__this, L_7, NULL);
		return;
	}

IL_0033:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, NULL);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline(__this, L_8, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_PreDispatch_m84EB1457CE2562941FC6245BC26544A401FF9957_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit);
	CHECKED_LOCAL(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_StaticInit);
	CHECKED_LOCAL(BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_StaticInit);
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_panel;
		EventBase_PreDispatch_mD788394C54A5400B25B423AF5DC41AA318A33DC4((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_0, NULL);
		bool L_1;
		L_1 = MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_008d;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, NULL);
		if (L_2)
		{
			goto IL_004c;
		}
	}
	{
		CHECKED_LOCAL_INIT(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit,(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_3 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_4, NULL);
		RuntimeObject* L_6 = ___0_panel;
		RuntimeObject* L_7 = ___0_panel;
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(2, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_7);
		CHECKED_LOCAL_INIT(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_StaticInit,(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		PointerDeviceState_SavePointerPosition_mFF277BDE588CF09F2301872E64A5F32159ECB9EB(L_3, L_5, L_6, L_8, NULL);
		RuntimeObject* L_9 = ___0_panel;
		int32_t L_10 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12;
		L_12 = BaseVisualElementPanel_RecomputeTopElementUnderPointer_mF3D6110A28FCCF72408FE62A21A4F57E4AC717AF(((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)CastclassClass((RuntimeObject*)L_9, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var)), L_10, L_11, (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		return;
	}

IL_004c:
	{
		RuntimeObject* L_13;
		L_13 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, NULL);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_13);
		CHECKED_LOCAL_INIT(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit,(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_15 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_008d;
		}
	}
	{
		CHECKED_LOCAL_INIT(BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_StaticInit,(BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_StaticFields*)il2cpp_codegen_static_fields_for(BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var))->___s_OutsidePanelCoordinates;
		V_0 = L_16;
		CHECKED_LOCAL_INIT(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit,(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_17 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_18, NULL);
		RuntimeObject* L_20 = ___0_panel;
		int32_t L_21;
		L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(2, IPanel_tAD0F3807B6DE2ECA557380E7DB5F3A179BE5A7A5_il2cpp_TypeInfo_var, L_20);
		CHECKED_LOCAL_INIT(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_StaticInit,(PointerDeviceState_tD94EF3C9710026DE8B7E83B6C842524C7C6EBA8C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		PointerDeviceState_SavePointerPosition_mFF277BDE588CF09F2301872E64A5F32159ECB9EB(L_17, L_19, (RuntimeObject*)NULL, L_21, NULL);
		RuntimeObject* L_22 = ___0_panel;
		int32_t L_23 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_0;
		BaseVisualElementPanel_SetTopElementUnderPointer_m09591A0A171CEB0CAA023C6834B075D8E76ED5D9(((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)CastclassClass((RuntimeObject*)L_22, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var)), L_23, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)NULL, L_24, NULL);
	}

IL_008d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_PostDispatch_mEEFD7D60FBCD7598D07589A5CBAB34CD03DEDBA4_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_panel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09B8A6EA35B75288D90AC15479A1E9A5D9A18113);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* V_0 = NULL;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* G_B9_0 = NULL;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* G_B8_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_inline(__this, NULL);
		V_0 = ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_0, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var));
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0053;
		}
	}
	{
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_2 = V_0;
		bool L_3;
		L_3 = EventBase_get_processed_mC99F191F8FCB064BEAC4500D80EBDDC400A461B7(L_2, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6((bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0), _stringLiteral09B8A6EA35B75288D90AC15479A1E9A5D9A18113, NULL);
		bool L_4;
		L_4 = EventBase_get_isPropagationStopped_m36E1E4831DC04452D18B5339E2CAD8979B6BD6B3((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_5 = V_0;
		EventBase_StopPropagation_mEFC7E5AB7164157065FF19064A6ADCBB0D8AF6FB(L_5, NULL);
	}

IL_0030:
	{
		bool L_6;
		L_6 = EventBase_get_isImmediatePropagationStopped_m23F718E5FA5FB49FE12BA560B8362B95E0C7F5D3((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_7 = V_0;
		EventBase_StopImmediatePropagation_m2D6646624DDC02AE96657F5EAD5BC0361380A8DA(L_7, NULL);
	}

IL_003e:
	{
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_8 = V_0;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_9 = L_8;
		bool L_10;
		L_10 = EventBase_get_processedByFocusController_mB2BCAFE58D45919AC9F5AC0AAEF059D8A640AE53(L_9, NULL);
		bool L_11;
		L_11 = EventBase_get_processedByFocusController_mB2BCAFE58D45919AC9F5AC0AAEF059D8A640AE53((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, NULL);
		EventBase_set_processedByFocusController_mEC214B328484B60572EEE867ACB5527396436155(L_9, (bool)((int32_t)((int32_t)L_10|(int32_t)L_11)), NULL);
		goto IL_006d;
	}

IL_0053:
	{
		bool L_12;
		L_12 = MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_inline(__this, NULL);
		if (!L_12)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_13 = ___0_panel;
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_14 = ((BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)IsInstClass((RuntimeObject*)L_13, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303_il2cpp_TypeInfo_var));
		if (L_14)
		{
			G_B9_0 = L_14;
			goto IL_0067;
		}
		G_B8_0 = L_14;
	}
	{
		goto IL_006d;
	}

IL_0067:
	{
		bool L_15;
		L_15 = BaseVisualElementPanel_CommitElementUnderPointers_m41A1D0D2884A1C35218D330EE29DF393F75E7892(G_B9_0, NULL);
	}

IL_006d:
	{
		RuntimeObject* L_16 = ___0_panel;
		EventBase_PostDispatch_mC830955EA32723BF0C10CCB37E01197CBADC07B3((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_16, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1_Dispatch_m3B6CC0CA8CA803593C1A8197DBEF7E1627648774_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___0_panel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit);
	{
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_0 = ___0_panel;
		CHECKED_LOCAL_INIT(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticInit,(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_1 = ((PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_StaticFields*)il2cpp_codegen_static_fields_for(PointerId_tE48DCDC5C36DD1F5595C28EE48C0243BA8BEF35C_il2cpp_TypeInfo_var))->___mousePointerId;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_inline(__this, NULL);
		EventDispatchUtilities_DispatchToCapturingElementOrElementUnderPointer_m1DB1C303971CD300023CEE6011018230F9047D4B((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)__this, L_0, L_1, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m84A60BC498C8DF00411A02A28D9547715B2E87C1_gshared (RuntimeObject* ___0_triggerEvent, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_mousePosition, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit);
	{
		RuntimeObject* L_0 = ___0_triggerEvent;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		RuntimeObject* L_1 = ___0_triggerEvent;
		Il2CppSharedGenericObject* L_2;
		L_2 = MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511(L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		return L_2;
	}

IL_000a:
	{
		CHECKED_LOCAL_INIT(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_3;
		L_3 = EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		Il2CppSharedGenericObject* L_4 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___1_mousePosition;
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_4, L_5, NULL);
		Il2CppSharedGenericObject* L_6 = L_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___1_mousePosition;
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_6, L_7, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m13C3E655268E03D8CDA8E82FBC4C2B8B0C910511_gshared (RuntimeObject* ___0_triggerEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit);
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_triggerEvent;
		CHECKED_LOCAL_INIT(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_1;
		L_1 = EventBase_1_GetPooled_m567E588C708778F6F41E2D69650776EBF437F74C(((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_0, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		V_0 = L_1;
		RuntimeObject* L_2 = ___0_triggerEvent;
		if (!L_2)
		{
			goto IL_0086;
		}
	}
	{
		Il2CppSharedGenericObject* L_3 = V_0;
		RuntimeObject* L_4 = ___0_triggerEvent;
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_4);
		MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_3, L_5, NULL);
		Il2CppSharedGenericObject* L_6 = V_0;
		RuntimeObject* L_7 = ___0_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(1, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_7);
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_6, L_8, NULL);
		Il2CppSharedGenericObject* L_9 = V_0;
		RuntimeObject* L_10 = ___0_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(1, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_10);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9, L_11, NULL);
		Il2CppSharedGenericObject* L_12 = V_0;
		RuntimeObject* L_13 = ___0_triggerEvent;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = InterfaceFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(3, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_13);
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_12, L_14, NULL);
		Il2CppSharedGenericObject* L_15 = V_0;
		RuntimeObject* L_16 = ___0_triggerEvent;
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(5, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_16);
		MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_15, L_17, NULL);
		Il2CppSharedGenericObject* L_18 = V_0;
		RuntimeObject* L_19 = ___0_triggerEvent;
		int32_t L_20;
		L_20 = InterfaceFuncInvoker0< int32_t >::Invoke(6, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_19);
		MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_18, L_20, NULL);
		Il2CppSharedGenericObject* L_21 = V_0;
		RuntimeObject* L_22 = ___0_triggerEvent;
		int32_t L_23;
		L_23 = InterfaceFuncInvoker0< int32_t >::Invoke(4, IMouseEvent_tF59A3DD3CA593DB23B47764DF0521996D509A59E_il2cpp_TypeInfo_var, L_22);
		MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_21, L_23, NULL);
	}

IL_0086:
	{
		Il2CppSharedGenericObject* L_24 = V_0;
		return L_24;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* MouseEventBase_1_GetPooled_m6B58A1D4CE6839D06420EC1E7ABFD9E2559E9850_gshared (RuntimeObject* ___0_pointerEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerEventInternal_tF0950F230320BC22B077741EA08AC538EE878833_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit);
	Il2CppSharedGenericObject* V_0 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B5_0 = NULL;
	RuntimeObject* G_B5_1 = NULL;
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* G_B6_0 = NULL;
	RuntimeObject* G_B6_1 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	RuntimeObject* G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	RuntimeObject* G_B9_1 = NULL;
	{
		CHECKED_LOCAL_INIT(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19)),il2cpp_codegen_runtime_class_init_inline);
		Il2CppSharedGenericObject* L_0;
		L_0 = EventBase_1_GetPooled_mB805F9CE6D32D281426319C902A567F5AB35005C(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		V_0 = L_0;
		Il2CppSharedGenericObject* L_1 = V_0;
		RuntimeObject* L_2 = ___0_pointerEvent;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_3 = ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_2, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var));
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = ((RuntimeObject*)(L_1));
			goto IL_0019;
		}
		G_B1_0 = L_3;
		G_B1_1 = ((RuntimeObject*)(L_1));
	}
	{
		G_B3_0 = ((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)(NULL));
		G_B3_1 = G_B1_1;
		goto IL_001e;
	}

IL_0019:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_4;
		L_4 = EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_inline(G_B2_0, NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_1;
	}

IL_001e:
	{
		EventBase_set_elementTarget_m8BF8A4CD508F335210DB9FD2D034549A1EC084A8_inline((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)G_B3_1, G_B3_0, NULL);
		Il2CppSharedGenericObject* L_5 = V_0;
		RuntimeObject* L_6 = ___0_pointerEvent;
		EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* L_7 = ((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)IsInstClass((RuntimeObject*)L_6, EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C_il2cpp_TypeInfo_var));
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = ((RuntimeObject*)(L_5));
			goto IL_0036;
		}
		G_B4_0 = L_7;
		G_B4_1 = ((RuntimeObject*)(L_5));
	}
	{
		G_B6_0 = ((Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB*)(NULL));
		G_B6_1 = G_B4_1;
		goto IL_003b;
	}

IL_0036:
	{
		Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* L_8;
		L_8 = EventBase_get_imguiEvent_m45ABCDC6423D27EF44F7E29661B249D238765DB0(G_B5_0, NULL);
		G_B6_0 = L_8;
		G_B6_1 = G_B5_1;
	}

IL_003b:
	{
		EventBase_set_imguiEvent_m72FEAD8F7611927C077B45BAA719C15D39E9F4F4((EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C*)G_B6_1, G_B6_0, NULL);
		Il2CppSharedGenericObject* L_9 = V_0;
		RuntimeObject* L_10 = ___0_pointerEvent;
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(19, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_10);
		MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_9, L_11, NULL);
		Il2CppSharedGenericObject* L_12 = V_0;
		RuntimeObject* L_13 = ___0_pointerEvent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_14, NULL);
		MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_12, L_15, NULL);
		Il2CppSharedGenericObject* L_16 = V_0;
		RuntimeObject* L_17 = ___0_pointerEvent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(5, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_17);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_18, NULL);
		MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_16, L_19, NULL);
		Il2CppSharedGenericObject* L_20 = V_0;
		RuntimeObject* L_21 = ___0_pointerEvent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = InterfaceFuncInvoker0< Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 >::Invoke(7, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_21);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_22, NULL);
		MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_20, L_23, NULL);
		Il2CppSharedGenericObject* L_24 = V_0;
		RuntimeObject* L_25 = ___0_pointerEvent;
		int32_t L_26;
		L_26 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_25);
		if ((((int32_t)L_26) == ((int32_t)(-1))))
		{
			G_B8_0 = ((RuntimeObject*)(L_24));
			goto IL_00aa;
		}
		G_B7_0 = ((RuntimeObject*)(L_24));
	}
	{
		RuntimeObject* L_27 = ___0_pointerEvent;
		int32_t L_28;
		L_28 = InterfaceFuncInvoker0< int32_t >::Invoke(3, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_27);
		G_B9_0 = L_28;
		G_B9_1 = G_B7_0;
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_00ab:
	{
		MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)G_B9_1, G_B9_0, NULL);
		Il2CppSharedGenericObject* L_29 = V_0;
		RuntimeObject* L_30 = ___0_pointerEvent;
		int32_t L_31;
		L_31 = InterfaceFuncInvoker0< int32_t >::Invoke(4, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_30);
		MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_29, L_31, NULL);
		Il2CppSharedGenericObject* L_32 = V_0;
		RuntimeObject* L_33 = ___0_pointerEvent;
		int32_t L_34;
		L_34 = InterfaceFuncInvoker0< int32_t >::Invoke(9, IPointerEvent_t934940574FFC2D6D155265ACC6D78BC48174D9B7_il2cpp_TypeInfo_var, L_33);
		MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_32, L_34, NULL);
		RuntimeObject* L_35 = ___0_pointerEvent;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_35, IPointerEventInternal_tF0950F230320BC22B077741EA08AC538EE878833_il2cpp_TypeInfo_var)))
		{
			goto IL_00e6;
		}
	}
	{
		Il2CppSharedGenericObject* L_36 = V_0;
		RuntimeObject* L_37 = ___0_pointerEvent;
		MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_inline((MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B*)L_36, L_37, NULL);
	}

IL_00e6:
	{
		Il2CppSharedGenericObject* L_38 = V_0;
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseEventBase_1__ctor_m116AD74DF8F31AE58BE42C48EF19AE61B7AAFB0E_gshared (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit);
	{
		CHECKED_LOCAL_INIT(EventBase_1_t2460AA6988D53F2ABE4DCA78195C6D6E516089A9_StaticInit,(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 19)),il2cpp_codegen_runtime_class_init_inline);
		EventBase_1__ctor_mACA9307C9EF30E9F5D55E8FA6AE6E58A99BA40CD((EventBase_1_t880C2458D345D7530A8295FA56BDDF14D326DE8F*)__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		MouseEventBase_1_LocalInit_m85C31C18C63B13944050FE4C8F328E12465C8132(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayAllocator__ctor_m44FA9B3E65248C9541D203A60A05E8067106EF43_fshared (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* __this, String_t* ___0_profilerName, int32_t ___1_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47E8CCB1C331C9476E88F8A6179C1466CBA62167);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___1_allocator;
		bool L_1;
		L_1 = MemoryLabel_SupportsAllocator_m2FBEAFCA15699420E8C5E42BA823DEE2999B6E6D(L_0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		__this->___m_Allocator = 0;
		String_t* L_2 = ___0_profilerName;
		int32_t L_3 = ___1_allocator;
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		MemoryLabel__ctor_m9EBEB7071302DF5EC12EB34EB2949E01617C5191((&L_4), _stringLiteral47E8CCB1C331C9476E88F8A6179C1466CBA62167, L_2, L_3, NULL);
		__this->___m_MemoryLabel = L_4;
		return;
	}

IL_0022:
	{
		int32_t L_5 = ___1_allocator;
		__this->___m_Allocator = L_5;
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* L_6 = (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2*)(&__this->___m_MemoryLabel);
		il2cpp_codegen_initobj(L_6, sizeof(MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayAllocator_CreateArray_m23A47AB9FCCC96DE09A09E691F423EEE92972DFE_fshared (NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492* __this, int32_t ___0_length, int32_t ___1_options, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2* L_0 = (MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2*)(&__this->___m_MemoryLabel);
		bool L_1;
		L_1 = MemoryLabel_get_IsCreated_m8B3D6AC21CEADC1D4C4EF4A3D2B168EBFADC26BA(L_0, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___0_length;
		MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 L_3 = __this->___m_MemoryLabel;
		int32_t L_4 = ___1_options;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5;
		memset((&L_5), 0, sizeof(L_5));
		NativeArray_1__ctor_m01C0164611F0F10354E4ABA539FA854E3A97F76A((&L_5), L_2, L_3, L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		return L_5;
	}

IL_001b:
	{
		int32_t L_6 = ___0_length;
		int32_t L_7 = __this->___m_Allocator;
		int32_t L_8 = ___1_options;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_9), L_6, L_7, L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArrayStaticId_1__cctor_m67213AA7112EE9BCD68829DC44441438CB42950A_fshared (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		SharedStatic_1_tEC5F09652230C531A3C62C83CB579D41179BD182 L_0;
		L_0 = SharedStatic_1_GetOrCreate_TisNativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18_m8F25A13283F3A46D6CD00E87F323C3C901EE3CD2(0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		((NativeArrayStaticId_1_t50C709E712A83F94158359DA374799781680B83C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))->___s_staticSafetyId = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x;
		(&V_0)->___x = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y;
		(&V_0)->___y = L_3;
		(&V_0)->___z = (0.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventBase_set_propagation_m1F5D2A6582B8A4D64F84F0B71F90790FA2BF7E8C_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CpropagationU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EventBase_get_currentTarget_m6F265B85FF86C35F62CFDF144B80B383DA9C503B_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___m_CurrentTarget;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x;
		(&V_0)->___x = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y;
		(&V_0)->___y = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* EventBase_get_elementTarget_mF6CFD6372FB247718797DB8927654F781821B94D_inline (EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* __this, const RuntimeMethod* method) 
{
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___U3CelementTargetU3Ek__BackingField;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_fshared_inline (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	{
		void* L_0 = __this->___m_Buffer;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		return (bool)((((int32_t)((((intptr_t)L_0) == ((intptr_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MouseEventBase_1_get_modifiers_mAD508E12A77C609CD1733864D36295A5FA8045EC_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmodifiersU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* MouseEventBase_1_get_sourcePointerEvent_m78AA690F3DCCD38FF9C3C4277A422A04254B0CAE_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CsourcePointerEventU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MouseEventBase_1_get_mousePosition_m9BDE2EE08FA23DDFAB08471789C060E67F77C11F_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CmousePositionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 MouseEventBase_1_get_panelRay_m15BF165696F29D7A1F371DEC030C1E57CFA7E682_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = __this->___U3CpanelRayU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_modifiers_m65A8AF799BAE5B62060B24F27A2FE897F503CF2B_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CmodifiersU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mousePosition_m0DDAC8632310D9BBB1988CBC8948F3E814968190_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmousePositionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_localMousePosition_mE6CE4463631428A8C29AF6AA9DAC0B2C3F22293C_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3ClocalMousePositionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_mouseDelta_mFFB3A06D0AEC7D8DE71CCEEE8575EDC8B4DA2196_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___U3CmouseDeltaU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_clickCount_mB1575DBF43CE6DC0546CC215CF0CFEDB3C1D648E_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CclickCountU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_button_mBD212144434B278C49CFA531AD588260FC8CB868_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CbuttonU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_pressedButtons_m9E6A63DB8A91D2C35470777AC0958915E3DBB476_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CpressedButtonsU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_sourcePointerEvent_m65A5978FE221A03B997358CE3158649369FE87ED_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CsourcePointerEventU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsourcePointerEventU3Ek__BackingField), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_recomputeTopElementUnderMouse_m5D34798DE02C9783D4F623F4F5BFAD3C254B51E5_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MouseEventBase_1_set_panelRay_m2F11C8441C8E2382C3FC31A56453E221AE212536_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 ___0_value, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4963285281B990B794CDEACB9C3CD3069B5FA768 L_0 = ___0_value;
		__this->___U3CpanelRayU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MouseEventBase_1_get_recomputeTopElementUnderMouse_m014A5DC3028338BDB21CA9F1BAF1FEAC334220F7_gshared_inline (MouseEventBase_1_t1D56386B3AF51EAC4D5846E55BB33643FCC73F9B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CrecomputeTopElementUnderMouseU3Ek__BackingField;
		return L_0;
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
