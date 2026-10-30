#include "pch-cpp.hpp"





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
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
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

struct U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DisallowMultipleComponentU5BU5D_tEA69AEA10483E24EB99D75210593E7C9452FD283;
struct ExecuteInEditModeU5BU5D_t57196F1483600AD3B95D1452158E1E10864B12A2;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RequireComponentU5BU5D_t29B8922A4CC605C50E015637033A7A4B0EF564E9;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPropertyBagVisitor_tE8B9B7E14DBF946E6E65BD0ECC8679268715BF5A;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral67A6B45EDCD9AF8D54D82F87349E9F4D77FC030F;
IL2CPP_EXTERN_C String_t* _stringLiteral699ABA3941867526413B23699BCDD9DC20DA6D7A;
IL2CPP_EXTERN_C String_t* _stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699;
IL2CPP_EXTERN_C String_t* _stringLiteral7F2AA158020B57C11060F4940998AEF1D121EF87;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3 : public RuntimeObject {};
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct ArrayExtensions_t50967545561A867487EE4DD9E480EFF143ACE91D  : public RuntimeObject
{
};
struct ArrayHelpers_t1E3489005D45A29B838AE159F19B43B9A6A6F08B  : public RuntimeObject
{
};
struct Assert_tDC16963451AC4364803739B73A4477ADCB365863  : public RuntimeObject
{
};
struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09  : public RuntimeObject
{
};
struct AttributeHelperEngine_t6B3D8969EF52C428F6DD05AB6A788FB43FD69520  : public RuntimeObject
{
};
struct AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15  : public RuntimeObject
{
	VisitContext_tD8792BE884AAACF8175FFE35CBE2AB831D3C77EA* ___m_VisitContext;
	int32_t ___U3CmaxDepthU3Ek__BackingField;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
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
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 
{
	void* ___nativeArrayBuffer;
	int64_t ___lengthInBytes;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
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
struct AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7 
{
	intptr_t ___m_Ptr;
	int32_t ___m_Version;
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
struct NativeArrayOptions_t3E979EEF4B4840228A7692A97DA07553C6465F1D 
{
	int32_t ___value__;
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
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	int32_t ___value__;
};
struct VisitExceptionKind_t7E6C3EABD5439F2B4CA31C246B2AA4AC16A77DF5 
{
	int32_t ___value__;
};
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
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
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields
{
	ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ___s_defaultArraySortHelper;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticFields
{
	bool ___raiseExceptions;
};
struct AsyncTaskCache_tFF531BF652DE2E2C46E1BBB33E595D2FC7EC8E09_StaticFields
{
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___TrueTask;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___FalseTask;
	Task_1U5BU5D_t54E2C15C8F3B98F79512798949C26C8A752440F8* ___Int32Tasks;
};
struct AttributeHelperEngine_t6B3D8969EF52C428F6DD05AB6A788FB43FD69520_StaticFields
{
	DisallowMultipleComponentU5BU5D_tEA69AEA10483E24EB99D75210593E7C9452FD283* ____disallowMultipleComponentArray;
	ExecuteInEditModeU5BU5D_t57196F1483600AD3B95D1452158E1E10864B12A2* ____executeInEditModeArray;
	RequireComponentU5BU5D_t29B8922A4CC605C50E015637033A7A4B0EF564E9* ____requireComponentArray;
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
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySortHelper_2_Sort_m67A1C1526BE40E2C011C26532C1F58AFBB9BA21E_fshared (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_fshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_fshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A_fshared (RuntimeObject* ___0_source, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_count, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_ContainsReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m59D107BB44B8288769823B89C364E56B40A38C38_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_count, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_DuplicateWithCapacity_TisIl2CppFullySharedGenericAny_m999C8490A8E2CEECDAD14B7C1D14306C87780B69_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA69C0EC67C2CED022FC1E530F4CEDD66405578E4_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAt_TisIl2CppFullySharedGenericAny_m825F0F2B3908C7DAA2F2B1BEB69DE9D2708BC23E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericAny_m66D71A6A77985EC6147CE145D53655DDE0D6B96E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EnsureCapacity_TisIl2CppFullySharedGenericAny_m6E67B3033A66A334BFE5A7E0B9D2C07CE296646E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass33_0_1__ctor_mC44A3BA6167DEC9FB9BC98B780FEA04F563736E2_fshared (U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_fshared (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Exists_m4D844228EBB80F1DFE1D49094731494B09C2B4E8_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_fshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F_fshared (Il2CppFullySharedGenericAny* ___0_first, Il2CppFullySharedGenericAny* ___1_second, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_LengthSafe_TisIl2CppFullySharedGenericAny_mC6EB691A32F53AF8E73702B746EF72A5256E43C0_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_fshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_fshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryHelpers_Swap_TisIl2CppFullySharedGenericAny_m1715B6AE84465D838F0FE8BA00E5AA4DB2EBACC1_fshared (Il2CppFullySharedGenericAny* ___0_a, Il2CppFullySharedGenericAny* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m0F394E700B5869B9BB20B6ED32461F1F56B870DA_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m61C4BE5E4D8C4E643FEF0B1A04B51A9EC6636229_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, RuntimeObject* ___3_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisIl2CppSharedGenericObject_m955F3178A0FAAAC07C8029B85CBDB4DE65AC0A61_gshared (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_TisIl2CppSharedGenericObject_m20BA4B8FF59E76850C490945432E7C0FD8F8D830_gshared (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mF395D7774F2ADB85151FF4EDD37C2A9FAB1001E3_fshared (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, bool ___0_canceled, Il2CppFullySharedGenericAny ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A_fshared (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

inline void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A_fshared)(___0_keys, ___1_items, ___2_index, ___3_length, ___4_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915_fshared)(___0_array, ___1_index, ___2_length, ___3_comparer, method);
}
inline ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_inline (const RuntimeMethod* method)
{
	return ((  ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* (*) (const RuntimeMethod*))ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_fshared_inline)(method);
}
inline void ArraySortHelper_2_Sort_m67A1C1526BE40E2C011C26532C1F58AFBB9BA21E (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method)
{
	((  void (*) (ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, RuntimeObject*, const RuntimeMethod*))ArraySortHelper_2_Sort_m67A1C1526BE40E2C011C26532C1F58AFBB9BA21E_fshared)(__this, ___0_keys, ___1_values, ___2_index, ___3_length, ___4_comparer, method);
}
inline bool Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1 (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1_fshared)((Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)__this, ___0_obj, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_fshared_inline)(___0_nativeArray, method);
}
inline int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline)(__this, method);
}
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_fshared)(__this, ___0_length, ___1_allocator, ___2_options, method);
}
inline bool NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_fshared_inline)(__this, method);
}
inline void NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_src, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_dst, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, const RuntimeMethod*))NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6_fshared)(___0_src, ___1_dst, ___2_length, method);
}
inline void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_fshared)(__this, method);
}
inline void Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_fshared)(___0_array, ___1_newSize, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6 (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6_fshared)(___0_source, method);
}
inline int32_t Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A (RuntimeObject* ___0_source, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A_fshared)(___0_source, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_count, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83_fshared)(___0_array, ___1_count, ___2_allocator, method);
}
inline void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct, const RuntimeMethod*))NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
inline bool ArrayHelpers_ContainsReference_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mDBD10B5D02BDEC69E575A2C75EFB3546AF92CC78 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, int32_t ___1_count, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method)
{
	return ((  bool (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))ArrayHelpers_ContainsReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m59D107BB44B8288769823B89C364E56B40A38C38_fshared)(___0_array, ___1_count, ___2_value, method);
}
inline int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppSharedGenericObject*, int32_t, const RuntimeMethod*))ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F_fshared)(___0_array, ___1_value, ___2_count, method);
}
inline int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppSharedGenericObject*, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8_fshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
inline void ArrayHelpers_DuplicateWithCapacity_TisIl2CppFullySharedGenericAny_m999C8490A8E2CEECDAD14B7C1D14306C87780B69 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_DuplicateWithCapacity_TisIl2CppFullySharedGenericAny_m999C8490A8E2CEECDAD14B7C1D14306C87780B69_fshared)(___0_array, ___1_count, ___2_capacity, ___3_capacityIncrement, method);
}
inline int32_t ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA69C0EC67C2CED022FC1E530F4CEDD66405578E4 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA69C0EC67C2CED022FC1E530F4CEDD66405578E4_fshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void ArrayHelpers_EraseAt_TisIl2CppFullySharedGenericAny_m825F0F2B3908C7DAA2F2B1BEB69DE9D2708BC23E (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))ArrayHelpers_EraseAt_TisIl2CppFullySharedGenericAny_m825F0F2B3908C7DAA2F2B1BEB69DE9D2708BC23E_fshared)(___0_array, ___1_index, method);
}
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
inline int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericAny_m66D71A6A77985EC6147CE145D53655DDE0D6B96E (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericAny_m66D71A6A77985EC6147CE145D53655DDE0D6B96E_fshared)(___0_array, ___1_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void ArrayHelpers_EnsureCapacity_TisIl2CppFullySharedGenericAny_m6E67B3033A66A334BFE5A7E0B9D2C07CE296646E (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, int32_t, int32_t, const RuntimeMethod*))ArrayHelpers_EnsureCapacity_TisIl2CppFullySharedGenericAny_m6E67B3033A66A334BFE5A7E0B9D2C07CE296646E_fshared)(___0_array, ___1_count, ___2_capacity, ___3_capacityIncrement, method);
}
inline void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared)(__this, method);
}
inline void List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57_fshared)(__this, ___0_collection, method);
}
inline void U3CU3Ec__DisplayClass33_0_1__ctor_mC44A3BA6167DEC9FB9BC98B780FEA04F563736E2 (U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3*, const RuntimeMethod*))U3CU3Ec__DisplayClass33_0_1__ctor_mC44A3BA6167DEC9FB9BC98B780FEA04F563736E2_fshared)(__this, method);
}
inline void Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC_fshared)(__this, ___0_object, ___1_method, method);
}
inline bool List_1_Exists_m4D844228EBB80F1DFE1D49094731494B09C2B4E8 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_match, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*, const RuntimeMethod*))List_1_Exists_m4D844228EBB80F1DFE1D49094731494B09C2B4E8_fshared)(__this, ___0_match, method);
}
inline void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A_fshared)(__this, method);
}
inline void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_fshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, il2cppRetVal, method);
}
inline bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_fshared)(__this, method);
}
inline void ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F (Il2CppFullySharedGenericAny* ___0_first, Il2CppFullySharedGenericAny* ___1_second, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F_fshared)(___0_first, ___1_second, method);
}
inline int32_t ArrayHelpers_LengthSafe_TisIl2CppFullySharedGenericAny_mC6EB691A32F53AF8E73702B746EF72A5256E43C0 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))ArrayHelpers_LengthSafe_TisIl2CppFullySharedGenericAny_mC6EB691A32F53AF8E73702B746EF72A5256E43C0_fshared)(___0_array, method);
}
inline void Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C_fshared)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, il2cppRetVal, method);
}
inline void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_fshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_arg, il2cppRetVal, method);
}
inline void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, il2cppRetVal, method);
}
inline void MemoryHelpers_Swap_TisIl2CppFullySharedGenericAny_m1715B6AE84465D838F0FE8BA00E5AA4DB2EBACC1 (Il2CppFullySharedGenericAny* ___0_a, Il2CppFullySharedGenericAny* ___1_b, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))MemoryHelpers_Swap_TisIl2CppFullySharedGenericAny_m1715B6AE84465D838F0FE8BA00E5AA4DB2EBACC1_fshared)(___0_a, ___1_b, method);
}
inline void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m0F394E700B5869B9BB20B6ED32461F1F56B870DA (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, String_t*, const RuntimeMethod*))Assert_AreEqual_TisIl2CppFullySharedGenericAny_m0F394E700B5869B9BB20B6ED32461F1F56B870DA_fshared)(___0_expected, ___1_actual, ___2_message, method);
}
inline void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m61C4BE5E4D8C4E643FEF0B1A04B51A9EC6636229 (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, RuntimeObject* ___3_comparer, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, String_t*, RuntimeObject*, const RuntimeMethod*))Assert_AreEqual_TisIl2CppFullySharedGenericAny_m61C4BE5E4D8C4E643FEF0B1A04B51A9EC6636229_fshared)(___0_expected, ___1_actual, ___2_message, ___3_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_mA4CD725133015119B0219ABAA6337650814B803B (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_expected, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_actual, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB (RuntimeObject* ___0_actual, RuntimeObject* ___1_expected, bool ___2_expectEqual, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA (String_t* ___0_message, String_t* ___1_userMessage, const RuntimeMethod* method) ;
inline void Assert_IsNotNull_TisIl2CppSharedGenericObject_m955F3178A0FAAAC07C8029B85CBDB4DE65AC0A61 (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method)
{
	((  void (*) (Il2CppSharedGenericObject*, String_t*, const RuntimeMethod*))Assert_IsNotNull_TisIl2CppSharedGenericObject_m955F3178A0FAAAC07C8029B85CBDB4DE65AC0A61_gshared)(___0_value, ___1_message, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_mB889D13B7935F20A9CE32629C00434099E30D931 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50 (RuntimeObject* ___0_value, bool ___1_expectNull, const RuntimeMethod* method) ;
inline void Assert_IsNull_TisIl2CppSharedGenericObject_m20BA4B8FF59E76850C490945432E7C0FD8F8D830 (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method)
{
	((  void (*) (Il2CppSharedGenericObject*, String_t*, const RuntimeMethod*))Assert_IsNull_TisIl2CppSharedGenericObject_m20BA4B8FF59E76850C490945432E7C0FD8F8D830_gshared)(___0_value, ___1_message, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_mB7DAD5AA378E4A36BC1D27B88CFADD31023530BB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, String_t* ___1_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncGPUReadbackRequest_get_done_mC042016E5BE850F18995831CBB4F06655914798C (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncGPUReadbackRequest_get_hasError_m374BB20A32B9DCDBFD8F81BBE542847B82F04EE5 (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncGPUReadbackRequest_get_layerCount_m70DE577E87B38E6621851F88542E252123147501 (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AsyncGPUReadbackRequest_GetDataRaw_m73EA05E0647ED7BCB73E95C3C3E73F9C0B2F963C (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, int32_t ___0_layer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncGPUReadbackRequest_get_layerDataSize_mCAE8CCE76C830532015EFC47D062917900DB749B (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52 (void* ___0_dataPointer, int32_t ___1_length, int32_t ___2_allocator, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52_fshared)(___0_dataPointer, ___1_length, ___2_allocator, method);
}
inline void Task_1__ctor_mF395D7774F2ADB85151FF4EDD37C2A9FAB1001E3 (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, bool ___0_canceled, Il2CppFullySharedGenericAny ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, bool, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_1__ctor_mF395D7774F2ADB85151FF4EDD37C2A9FAB1001E3_fshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, ___0_canceled, ___1_result, ___2_creationOptions, ___3_ct, method);
}
inline bool PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A (RuntimeObject* ___0_visitor, Il2CppFullySharedGenericAny* ___1_container, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE ___2_parameters, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE, const RuntimeMethod*))PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A_fshared)(___0_visitor, ___1_container, ___2_parameters, method);
}
inline void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline)(___0_destination, ___1_index, (Il2CppFullySharedGenericAny)___2_value, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared)(method);
}
inline int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline)(method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m2A67D53523C3D5799C3A6698070C0E564FA7AA43_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, int32_t ___2_index, int32_t ___3_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___1_items;
		int32_t L_2 = ___2_index;
		int32_t L_3 = ___3_length;
		Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A(L_0, L_1, L_2, L_3, (RuntimeObject*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Sort_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5ED3CAF29A3566E42594992A144E506B0F485C4A_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_keys, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_items, int32_t ___2_index, int32_t ___3_length, RuntimeObject* ___4_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(ArraySortHelper_2_t108CEB1020F054AC2F3D37BE97B495CACAAB466C_StaticInit);
	String_t* G_B7_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_keys;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral738AE0A86F3C2783715FD77C8D9C55D1C19F9699)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___2_index;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_3 = ___3_length;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}

IL_0016:
	{
		int32_t L_4 = ___3_length;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1));
		goto IL_0026;
	}

IL_0021:
	{
		G_B7_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB));
	}

IL_0026:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_5, G_B7_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0031:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_keys;
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		int32_t L_8 = ___2_index;
		int32_t L_9 = ___3_length;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) < ((int32_t)L_9)))
		{
			goto IL_0044;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___1_items;
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___2_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___1_items;
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		int32_t L_14 = ___3_length;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_13, L_14)))))
		{
			goto IL_004f;
		}
	}

IL_0044:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_15 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, method);
	}

IL_004f:
	{
		int32_t L_16 = ___3_length;
		if ((((int32_t)L_16) <= ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___1_items;
		if (L_17)
		{
			goto IL_0061;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = ___0_keys;
		int32_t L_19 = ___2_index;
		int32_t L_20 = ___3_length;
		RuntimeObject* L_21 = ___4_comparer;
		Array_Sort_TisIl2CppFullySharedGenericAny_m8EAA6873B997E5F8A24C3218832B596A3BA22915(L_18, L_19, L_20, L_21, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_0061:
	{
		CHECKED_LOCAL_INIT(ArraySortHelper_2_t108CEB1020F054AC2F3D37BE97B495CACAAB466C_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 2)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* L_22;
		L_22 = ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = ___0_keys;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = ___1_items;
		int32_t L_25 = ___2_index;
		int32_t L_26 = ___3_length;
		RuntimeObject* L_27 = ___4_comparer;
		ArraySortHelper_2_Sort_m67A1C1526BE40E2C011C26532C1F58AFBB9BA21E(L_22, L_23, L_24, L_25, L_26, L_27, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0071:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Array_TrueForAll_TisIl2CppFullySharedGenericAny_m8737A7A5DCF9A4D4946A54B239E3F0873DB176D1_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___1_match, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t21BFD184137C86CA60DA59C2301E8200FB3C6BCA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t21BFD184137C86CA60DA59C2301E8200FB3C6BCA);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___1_match;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2EEFB4BE0C9F57BA62E733F26387F8BA68AF67C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		V_0 = 0;
		goto IL_0035;
	}

IL_0020:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_4 = ___1_match;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		il2cpp_codegen_memcpy(L_8, (L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)), SizeOf_T_t21BFD184137C86CA60DA59C2301E8200FB3C6BCA);
		bool L_9;
		L_9 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_8: *(void**)L_8), NULL);
		if (L_9)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0035:
	{
		int32_t L_11 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_UnsafeLoad_TisIl2CppFullySharedGenericAny_m215F0042D6593ECA52506AEB0C577AA3C09CBA3B_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5F6E17DC1CF15F3C46C4F98229D48A9FBAFF8979 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t5F6E17DC1CF15F3C46C4F98229D48A9FBAFF8979);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_T_t5F6E17DC1CF15F3C46C4F98229D48A9FBAFF8979);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t5F6E17DC1CF15F3C46C4F98229D48A9FBAFF8979);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_UnsafeMov_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m5E24BAB7390771C3B1CA6D9940BD255C57851329_fshared (Il2CppFullySharedGenericAny ___0_instance, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	il2cpp_codegen_array_unsafe_mov(il2cpp_rgctx_data(method->rgctx_data, 1), il2cppRetVal, il2cpp_rgctx_data(method->rgctx_data, 0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_instance : &___0_instance));
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_UnsafeStore_TisIl2CppFullySharedGenericAny_m90E9EF44D2DA6B9F8715AE2B935E4C09F757AC90_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7324E290815D2CA6ECCE3A5065448366DFC92DCB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t7324E290815D2CA6ECCE3A5065448366DFC92DCB);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t7324E290815D2CA6ECCE3A5065448366DFC92DCB);
		il2cpp_codegen_memcpy((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1)), L_2, SizeOf_T_t7324E290815D2CA6ECCE3A5065448366DFC92DCB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1)), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayExtensions_FillArray_TisIl2CppFullySharedGenericStruct_m33F843BF3B5BC7333D99949E2CFF2F64B6AAF7F9_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, Il2CppFullySharedGenericStruct* ___1_value, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tCB137871CE2128B87A346D2A872A7CA8CDC18905 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tCB137871CE2128B87A346D2A872A7CA8CDC18905);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_0);
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_1, NULL);
		V_0 = (Il2CppFullySharedGenericStruct*)L_2;
		int32_t L_3 = ___3_length;
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_4 = ___2_startIndex;
		int32_t L_5 = ___3_length;
		G_B3_0 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		goto IL_001b;
	}

IL_0015:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___0_array;
		int32_t L_7;
		L_7 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_6, NULL);
		G_B3_0 = L_7;
	}

IL_001b:
	{
		V_1 = G_B3_0;
		int32_t L_8 = ___2_startIndex;
		V_2 = L_8;
		goto IL_003a;
	}

IL_0020:
	{
		Il2CppFullySharedGenericStruct* L_9 = V_0;
		int32_t L_10 = V_2;
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		uint32_t L_12 = SizeOf_T_tCB137871CE2128B87A346D2A872A7CA8CDC18905;
		Il2CppFullySharedGenericStruct* L_13 = ___1_value;
		il2cpp_codegen_memcpy(L_14, L_13, SizeOf_T_tCB137871CE2128B87A346D2A872A7CA8CDC18905);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, (int32_t)L_12)))), L_14, SizeOf_T_tCB137871CE2128B87A346D2A872A7CA8CDC18905);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(L_11, (int32_t)L_12)))), (void*)L_14);
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003a:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0020;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayExtensions_ResizeArray_TisIl2CppFullySharedGenericStruct_m26A72CB97BA0352D3D33EF93605B2CEC842643EF_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___1_capacity;
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&V_0), L_0, 4, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_array;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_3);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = V_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___0_array;
		int32_t L_7;
		L_7 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_6, NULL);
		NativeArray_1_Copy_m917794C9B80242C4B43D3C7F4A4CE0D5875AD3F6(L_4, L_5, L_7, il2cpp_rgctx_method(method->rgctx_data, 3));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = ___0_array;
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_8, il2cpp_rgctx_method(method->rgctx_data, 4));
	}

IL_002a:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_9 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10 = V_0;
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_9 = L_10;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayExtensions_ResizeArray_TisIl2CppFullySharedGenericAny_mD67505C99AD7451803DE4E5219C85C92F63ACA1F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		int32_t L_3 = ___1_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		*(((RuntimeObject**)L_2)) = ((RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)((RuntimeObject*)L_4));
		return;
	}

IL_000d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		int32_t L_6 = ___1_capacity;
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_Append_TisIl2CppFullySharedGenericAny_m74071BDA5A66F0EAF5D19635A126FC30D8D33E0A_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8);
	const Il2CppFullySharedGenericAny L_15 = L_6;
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)1);
		*(((RuntimeObject**)L_2)) = ((RuntimeObject*)L_3);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)((RuntimeObject*)L_3));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = *(L_4);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8);
		il2cpp_codegen_memcpy((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)), L_6, SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)), (void*)L_6);
		return 0;
	}

IL_0017:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_7 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *(L_7);
		int32_t L_9 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_8)->max_length),NULL));
		V_0 = L_9;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_10 = ___0_array;
		int32_t L_11 = V_0;
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_12 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = *(L_12);
		int32_t L_14 = V_0;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8);
		il2cpp_codegen_memcpy((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)), L_15, SizeOf_TValue_tB5E84E341B90832381E3E69BDD263A6DA94871C8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)), (void*)L_15);
		int32_t L_16 = V_0;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_Append_TisIl2CppFullySharedGenericAny_m045AB997172138AC6A7D3C5BC33D76C7A0E602BB_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, RuntimeObject* ___1_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
	memset(V_4, 0, SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		RuntimeObject* L_3 = ___1_values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
		L_4 = Enumerable_ToArray_TisIl2CppFullySharedGenericAny_mE1571336F171A560849F9D7CB38E3A9A4B43B1C6(L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		*(((RuntimeObject**)L_2)) = ((RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)((RuntimeObject*)L_4));
		return 0;
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = *(L_5);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		V_0 = L_7;
		RuntimeObject* L_8 = ___1_values;
		int32_t L_9;
		L_9 = Enumerable_Count_TisIl2CppFullySharedGenericAny_m4D64A1B2077BAD3CD94E5EEB5C56FA97409CBC6A(L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = L_9;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_10 = ___0_array;
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_10, ((int32_t)il2cpp_codegen_add(L_11, L_12)), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_13 = V_0;
		V_2 = L_13;
		RuntimeObject* L_14 = ___1_values;
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 3), L_14);
		V_3 = L_15;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{
				{
					RuntimeObject* L_16 = V_3;
					if (!L_16)
					{
						goto IL_0057;
					}
				}
				{
					RuntimeObject* L_17 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
				}

IL_0057:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0044_1;
			}

IL_002e_1:
			{
				RuntimeObject* L_18 = V_3;
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 5), L_18, (Il2CppFullySharedGenericAny*)L_19);
				il2cpp_codegen_memcpy(V_4, L_19, SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_20 = ___0_array;
				__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = *(L_20);
				int32_t L_22 = V_2;
				int32_t L_23 = L_22;
				V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
				il2cpp_codegen_memcpy(L_24, V_4, SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
				il2cpp_codegen_memcpy((L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)), L_24, SizeOf_TValue_t0622476585ED130623AA322FB7F4C1DCCA5C0FF7);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 7), (void**)(L_21)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)), (void*)L_24);
			}

IL_0044_1:
			{
				RuntimeObject* L_25 = V_3;
				bool L_26;
				L_26 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_25);
				if (L_26)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0058;
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

IL_0058:
	{
		int32_t L_27 = V_0;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_AppendListWithCapacity_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m1CBB5582C50CB34DDEE37258F6C470B7B18046E4_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_length, Il2CppFullySharedGenericAny ___2_values, int32_t ___3_capacityIncrement, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_0 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const uint32_t SizeOf_TValue_tB5631509E96AF7BE84071B21AF51F9E9E4C71205 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 6));
	void* L_50 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_TValue_tB5631509E96AF7BE84071B21AF51F9E9E4C71205);
	const Il2CppFullySharedGenericAny L_53 = L_20;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Il2CppConstrainedCallData L_1;
		Il2CppMethodPointer L_2 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_values : &___2_values), &L_1, L_0);
		typedef int32_t ( *func_L_3)(void*,const RuntimeMethod*);
		int32_t L_4 = ((func_L_3)L_2)(L_1.thisPtr,L_1.method);
		V_0 = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = *(L_5);
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___3_capacityIncrement;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_9;
		L_9 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_7, L_8, NULL);
		V_3 = L_9;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_10 = ___0_array;
		int32_t L_11 = V_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 3), (uint32_t)L_11);
		*(((RuntimeObject**)L_10)) = ((RuntimeObject*)L_12);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_10), (void*)((RuntimeObject*)L_12));
		V_4 = 0;
		goto IL_0045;
	}

IL_0027:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_13 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(L_13);
		int32_t L_15 = V_4;
		int32_t L_16 = V_4;
		Il2CppConstrainedCallData L_18;
		Il2CppMethodPointer L_19 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_values : &___2_values), &L_18, L_17);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(L_19, L_18.method,L_18.thisPtr, L_16,(Il2CppFullySharedGenericAny*)L_20);
		il2cpp_codegen_memcpy((L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)), L_20, SizeOf_TValue_tB5631509E96AF7BE84071B21AF51F9E9E4C71205);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15)), (void*)L_20);
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0045:
	{
		int32_t L_22 = V_4;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_24 = ___1_length;
		int32_t* L_25 = ___1_length;
		int32_t L_26 = *(L_25);
		int32_t L_27 = V_0;
		*(L_24) = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		return 0;
	}

IL_0052:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_28 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = *(L_28);
		int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_29)->max_length),NULL));
		V_1 = L_30;
		int32_t L_31 = V_1;
		int32_t* L_32 = ___1_length;
		int32_t L_33 = *(L_32);
		int32_t L_34 = V_0;
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_33, L_34)))))
		{
			goto IL_0072;
		}
	}
	{
		int32_t L_35 = V_1;
		int32_t* L_36 = ___1_length;
		int32_t L_37 = *(L_36);
		int32_t L_38 = V_0;
		int32_t L_39 = ___3_capacityIncrement;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_40;
		L_40 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(((int32_t)il2cpp_codegen_add(L_37, L_38)), L_39, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, L_40));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_41 = ___0_array;
		int32_t L_42 = V_1;
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_41, L_42, il2cpp_rgctx_method(method->rgctx_data, 7));
	}

IL_0072:
	{
		int32_t* L_43 = ___1_length;
		int32_t L_44 = *(L_43);
		V_2 = L_44;
		V_5 = 0;
		goto IL_009a;
	}

IL_007a:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_45 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_46 = *(L_45);
		int32_t L_47 = V_2;
		int32_t L_48 = V_5;
		int32_t L_49 = V_5;
		Il2CppConstrainedCallData L_51;
		Il2CppMethodPointer L_52 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_values : &___2_values), &L_51, L_50);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(L_52, L_51.method,L_51.thisPtr, L_49,(Il2CppFullySharedGenericAny*)L_53);
		il2cpp_codegen_memcpy((L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, L_48)))), L_53, SizeOf_TValue_tB5631509E96AF7BE84071B21AF51F9E9E4C71205);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 6), (void**)(L_46)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_47, L_48)))), (void*)L_53);
		int32_t L_54 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_009a:
	{
		int32_t L_55 = V_5;
		int32_t L_56 = V_0;
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t* L_57 = ___1_length;
		int32_t* L_58 = ___1_length;
		int32_t L_59 = *(L_58);
		int32_t L_60 = V_0;
		*(L_57) = ((int32_t)il2cpp_codegen_add(L_59, L_60));
		int32_t L_61 = V_2;
		return L_61;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_AppendToImmutable_TisIl2CppFullySharedGenericAny_m375667A970431E381B0E7BE7293D1B350E147A5A_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_values;
		*(((RuntimeObject**)L_2)) = ((RuntimeObject*)L_3);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)((RuntimeObject*)L_3));
		return 0;
	}

IL_0009:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___1_values;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___1_values;
		if (!(((RuntimeArray*)L_5)->max_length))
		{
			goto IL_002f;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_6 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = *(L_6);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		V_0 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___1_values;
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		V_1 = L_10;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_11 = ___0_array;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_11, ((int32_t)il2cpp_codegen_add(L_12, L_13)), il2cpp_rgctx_method(method->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = ___1_values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_15 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = *(L_15);
		int32_t L_17 = V_0;
		int32_t L_18 = V_1;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_16, L_17, L_18, NULL);
		int32_t L_19 = V_0;
		return L_19;
	}

IL_002f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_20 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = *(L_20);
		int32_t L_22 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_21)->max_length),NULL));
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_AppendWithCapacity_TisIl2CppFullySharedGenericAny_m9F7345A47A2A570DC1D4E1EB2FB6EE86F5323295_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_count, Il2CppFullySharedGenericAny ___2_value, int32_t ___3_capacityIncrement, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB);
	const Il2CppFullySharedGenericAny L_26 = L_7;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		int32_t L_3 = ___3_capacityIncrement;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		*(((RuntimeObject**)L_2)) = ((RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)((RuntimeObject*)L_4));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = *(L_5);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB);
		il2cpp_codegen_memcpy((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)), L_7, SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)), (void*)L_7);
		int32_t* L_8 = ___1_count;
		int32_t* L_9 = ___1_count;
		int32_t L_10 = *(L_9);
		*(L_8) = ((int32_t)il2cpp_codegen_add(L_10, 1));
		return 0;
	}

IL_001d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_11 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = *(L_11);
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		V_0 = L_13;
		int32_t L_14 = V_0;
		int32_t* L_15 = ___1_count;
		int32_t L_16 = *(L_15);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_16))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___3_capacityIncrement;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, L_18));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_19 = ___0_array;
		int32_t L_20 = V_0;
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_19, L_20, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_0032:
	{
		int32_t* L_21 = ___1_count;
		int32_t L_22 = *(L_21);
		V_1 = L_22;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_23 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = *(L_23);
		int32_t L_25 = V_1;
		il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB);
		il2cpp_codegen_memcpy((L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)), L_26, SizeOf_TValue_t7AF967B9C4841147C2CE4DFE5FFFC150FC708DAB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25)), (void*)L_26);
		int32_t* L_27 = ___1_count;
		int32_t* L_28 = ___1_count;
		int32_t L_29 = *(L_28);
		*(L_27) = ((int32_t)il2cpp_codegen_add(L_29, 1));
		int32_t L_30 = V_1;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_AppendWithCapacity_TisIl2CppFullySharedGenericStruct_m3CE052066E241AAEA49347EE03362D788D2C4AB9_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t* ___1_count, Il2CppFullySharedGenericStruct ___2_value, int32_t ___3_capacityIncrement, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tCAC4A327282A169606A0AE13B9148994A3D89E0F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_TValue_tCAC4A327282A169606A0AE13B9148994A3D89E0F);
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_TValue_tCAC4A327282A169606A0AE13B9148994A3D89E0F);
	int32_t V_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B3_0 = NULL;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* G_B4_1 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_0, NULL);
		int32_t* L_2 = ___1_count;
		int32_t L_3 = *(L_2);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_4 = ___0_array;
		int32_t L_5 = ___3_capacityIncrement;
		if ((((int32_t)L_5) > ((int32_t)1)))
		{
			G_B3_0 = L_4;
			goto IL_0012;
		}
		G_B2_0 = L_4;
	}
	{
		G_B4_0 = 1;
		G_B4_1 = G_B2_0;
		goto IL_0013;
	}

IL_0012:
	{
		int32_t L_6 = ___3_capacityIncrement;
		G_B4_0 = L_6;
		G_B4_1 = G_B3_0;
	}

IL_0013:
	{
		int32_t L_7 = ___4_allocator;
		int32_t L_8;
		L_8 = ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83(G_B4_1, G_B4_0, L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_001b:
	{
		int32_t* L_9 = ___1_count;
		int32_t L_10 = *(L_9);
		V_0 = L_10;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = ___0_array;
		int32_t L_12 = V_0;
		il2cpp_codegen_memcpy(L_13, ___2_value, SizeOf_TValue_tCAC4A327282A169606A0AE13B9148994A3D89E0F);
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline(L_11, L_12, il2cpp_codegen_memcpy(L_14, L_13, SizeOf_TValue_tCAC4A327282A169606A0AE13B9148994A3D89E0F), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t* L_15 = ___1_count;
		int32_t* L_16 = ___1_count;
		int32_t L_17 = *(L_16);
		*(L_15) = ((int32_t)il2cpp_codegen_add(L_17, 1));
		int32_t L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Clear_TisIl2CppFullySharedGenericAny_mDA6E66CD9C546C5DA0D4FA723AFC9DFAC98A2C8F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_3, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Clear_TisIl2CppFullySharedGenericAny_mC1E55A958C784C58A9AE19B6B44EDCCF352B721D_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t* ___1_count, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t* L_2 = ___1_count;
		int32_t L_3 = *(L_2);
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_3, NULL);
		int32_t* L_4 = ___1_count;
		*(L_4) = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Clear_TisIl2CppFullySharedGenericAny_mE9C1C3D5BC54AB4710B0F74FEF64EEAE839BD8C7_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_count, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_count;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Clone_TisIl2CppFullySharedGenericAny_m80EBB3D969F52B3357D325636834E5535503D374_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 1)));
	const uint32_t SizeOf_TValue_tF57DE14787C0C68EFD323EE3734435355FCF770C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_tF57DE14787C0C68EFD323EE3734435355FCF770C);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
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
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = L_2;
		int32_t L_3 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_1 = L_4;
		V_2 = 0;
		goto IL_0038;
	}

IL_0014:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_1;
		int32_t L_6 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_array;
		int32_t L_8 = V_2;
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 1), il2cpp_rgctx_method(method->rgctx_data, 2), (void*)((Il2CppFullySharedGenericAny*)(L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8))), &L_10, L_9);
		typedef RuntimeObject* ( *func_L_12)(void*,const RuntimeMethod*);
		RuntimeObject* L_13 = ((func_L_12)L_11)(L_10.thisPtr,L_10.method);
		void* L_15 = UnBox_Any(L_13, il2cpp_rgctx_data(method->rgctx_data, 1), L_14);
		il2cpp_codegen_memcpy((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_15)), SizeOf_TValue_tF57DE14787C0C68EFD323EE3734435355FCF770C);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_15)));
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0038:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_0014;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_1;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_Contains_TisIl2CppFullySharedGenericAny_mA89DDF88A042F73DC9EC069A84D326CD062820FE_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t5D217D1CF3A1C3582D89863D1A28E7517C30C0C2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t5D217D1CF3A1C3582D89863D1A28E7517C30C0C2);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t5D217D1CF3A1C3582D89863D1A28E7517C30C0C2);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_1;
		L_1 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0025;
	}

IL_000f:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_TValue_t5D217D1CF3A1C3582D89863D1A28E7517C30C0C2);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_TValue_t5D217D1CF3A1C3582D89863D1A28E7517C30C0C2);
		bool L_8;
		L_8 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0025:
	{
		int32_t L_10 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = ___0_array;
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_ContainsReference_TisIl2CppSharedGenericObject_m1BE5049CCBA2A9B3143293082C4202BBF5F6D1A3_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = ___0_array;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		Il2CppSharedGenericObject* L_4 = ___1_value;
		bool L_5;
		L_5 = ArrayHelpers_ContainsReference_TisIl2CppSharedGenericObject_TisIl2CppSharedGenericObject_mDBD10B5D02BDEC69E575A2C75EFB3546AF92CC78(L_1, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_ContainsReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m59D107BB44B8288769823B89C364E56B40A38C38_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_count, Il2CppSharedGenericObject* ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Il2CppSharedGenericObject* L_1 = ___2_value;
		int32_t L_2 = ___1_count;
		int32_t L_3;
		L_3 = ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_ContainsReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mB0F6455D7B14D5C3C04474462BA6956A6307603C_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_startIndex, int32_t ___2_count, Il2CppSharedGenericObject* ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Il2CppSharedGenericObject* L_1 = ___3_value;
		int32_t L_2 = ___1_startIndex;
		int32_t L_3 = ___2_count;
		int32_t L_4;
		L_4 = ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Copy_TisIl2CppFullySharedGenericAny_mCBAFE4FAA00288B66F1CCF0385F38023009DFF0F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
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
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = L_2;
		int32_t L_3 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_1 = L_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_1;
		int32_t L_7 = V_0;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_5, (RuntimeArray*)L_6, L_7, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_DuplicateWithCapacity_TisIl2CppFullySharedGenericAny_m999C8490A8E2CEECDAD14B7C1D14306C87780B69_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		int32_t L_3 = ___2_capacity;
		int32_t L_4 = ___3_capacityIncrement;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_5;
		L_5 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_3, L_4, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_5);
		*(((RuntimeObject**)L_2)) = ((RuntimeObject*)L_6);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)((RuntimeObject*)L_6));
		return;
	}

IL_0013:
	{
		int32_t L_7 = ___1_count;
		int32_t L_8 = ___2_capacity;
		int32_t L_9 = ___3_capacityIncrement;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_10;
		L_10 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_8, L_9, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)((int32_t)il2cpp_codegen_add(L_7, L_10)));
		V_0 = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_12 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = *(L_12);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_0;
		int32_t L_15 = ___1_count;
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_13, (RuntimeArray*)L_14, L_15, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_16 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = V_0;
		*(((RuntimeObject**)L_16)) = ((RuntimeObject*)L_17);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_16), (void*)((RuntimeObject*)L_17));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EnsureCapacity_TisIl2CppFullySharedGenericAny_m6E67B3033A66A334BFE5A7E0B9D2C07CE296646E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, int32_t ___2_capacity, int32_t ___3_capacityIncrement, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	{
		int32_t L_0 = ___2_capacity;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_1 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = *(L_1);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		int32_t L_4 = ___2_capacity;
		int32_t L_5 = ___3_capacityIncrement;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6;
		L_6 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_4, L_5, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_6);
		*(((RuntimeObject**)L_3)) = ((RuntimeObject*)L_7);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_3), (void*)((RuntimeObject*)L_7));
		return;
	}

IL_0017:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_8 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = *(L_8);
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int32_t L_11 = ___1_count;
		int32_t L_12 = ___2_capacity;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_10, L_11))) < ((int32_t)L_12)))
		{
			goto IL_0021;
		}
	}
	{
		return;
	}

IL_0021:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_13 = ___0_array;
		int32_t L_14 = ___1_count;
		int32_t L_15 = ___2_capacity;
		int32_t L_16 = ___3_capacityIncrement;
		ArrayHelpers_DuplicateWithCapacity_TisIl2CppFullySharedGenericAny_m999C8490A8E2CEECDAD14B7C1D14306C87780B69(L_13, L_14, L_15, L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_Erase_TisIl2CppFullySharedGenericAny_m38A0CF397A3D61CE43AA04317DFC9380FDAFFB90_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t08BF9978BD85DA97D8C39D83FB777D1706C5865F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_t08BF9978BD85DA97D8C39D83FB777D1706C5865F);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_t08BF9978BD85DA97D8C39D83FB777D1706C5865F);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_TValue_t08BF9978BD85DA97D8C39D83FB777D1706C5865F);
		int32_t L_4;
		L_4 = ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA69C0EC67C2CED022FC1E530F4CEDD66405578E4(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_2, SizeOf_TValue_t08BF9978BD85DA97D8C39D83FB777D1706C5865F): *(void**)L_2), 0, (-1), il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0018;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_6 = ___0_array;
		int32_t L_7 = V_0;
		ArrayHelpers_EraseAt_TisIl2CppFullySharedGenericAny_m825F0F2B3908C7DAA2F2B1BEB69DE9D2708BC23E(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		return (bool)1;
	}

IL_0018:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAt_TisIl2CppFullySharedGenericAny_m825F0F2B3908C7DAA2F2B1BEB69DE9D2708BC23E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = L_2;
		int32_t L_3 = ___1_index;
		if (L_3)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		*(((RuntimeObject**)L_5)) = NULL;
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_5), (void*)NULL);
		return;
	}

IL_0010:
	{
		int32_t L_6 = ___1_index;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_0028;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_8 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = *(L_8);
		int32_t L_10 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_11 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = *(L_11);
		int32_t L_13 = ___1_index;
		int32_t L_14 = V_0;
		int32_t L_15 = ___1_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), (RuntimeArray*)L_12, L_13, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_14, L_15)), 1)), NULL);
	}

IL_0028:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_16 = ___0_array;
		int32_t L_17 = V_0;
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAtByMovingTail_TisIl2CppFullySharedGenericAny_m8DD3D84F1C2708D1A4E4DE97376266B0131F9302_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
	const Il2CppFullySharedGenericAny L_15 = L_9;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
	memset(V_0, 0, SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
	{
		int32_t L_0 = ___2_index;
		int32_t* L_1 = ___1_count;
		int32_t L_2 = *(L_1);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_0018;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		int32_t L_4 = ___2_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t* L_6 = ___1_count;
		int32_t L_7 = *(L_6);
		int32_t L_8 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		il2cpp_codegen_memcpy(L_9, (L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
		il2cpp_codegen_memcpy((L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), L_9, SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_9);
	}

IL_0018:
	{
		int32_t* L_10 = ___1_count;
		int32_t L_11 = *(L_10);
		if ((((int32_t)L_11) < ((int32_t)1)))
		{
			goto IL_0030;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		int32_t* L_13 = ___1_count;
		int32_t L_14 = *(L_13);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
		il2cpp_codegen_memcpy(L_15, V_0, SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
		il2cpp_codegen_memcpy((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_14, 1)))), L_15, SizeOf_TValue_tE959E0B453B8A0B35569B48F1E8916F5141760E6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_14, 1)))), (void*)L_15);
	}

IL_0030:
	{
		int32_t* L_16 = ___1_count;
		int32_t* L_17 = ___1_count;
		int32_t L_18 = *(L_17);
		*(L_16) = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAtWithCapacity_TisIl2CppFullySharedGenericStruct_m5A97B43CBBF791242EAC04B5E8CC3D9701690DD7_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	{
		int32_t L_0 = ___2_index;
		int32_t* L_1 = ___1_count;
		int32_t L_2 = *(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3;
		L_3 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_3;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4 = ___0_array;
		void* L_5;
		L_5 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_4, NULL);
		V_1 = (uint8_t*)L_5;
		uint8_t* L_6 = V_1;
		int32_t L_7 = V_0;
		int32_t L_8 = ___2_index;
		uint8_t* L_9 = V_1;
		int32_t L_10 = V_0;
		int32_t L_11 = ___2_index;
		int32_t* L_12 = ___1_count;
		int32_t L_13 = *(L_12);
		int32_t L_14 = ___2_index;
		int32_t L_15 = V_0;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_13, L_14)), 1)), L_15)),NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, ((int32_t)il2cpp_codegen_multiply(L_7, L_8)))), (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, ((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)il2cpp_codegen_add(L_11, 1)))))), L_16, NULL);
	}

IL_002e:
	{
		int32_t* L_17 = ___1_count;
		int32_t* L_18 = ___1_count;
		int32_t L_19 = *(L_18);
		*(L_17) = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseAtWithCapacity_TisIl2CppFullySharedGenericAny_m9459CCF36C0A36FDBD1E4C86B7C9E1F891EB6DA1_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t* ___1_count, int32_t ___2_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
	memset(V_0, 0, SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
	{
		int32_t L_0 = ___2_index;
		int32_t* L_1 = ___1_count;
		int32_t L_2 = *(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_0018;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		int32_t L_4 = ___2_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = ___2_index;
		int32_t* L_7 = ___1_count;
		int32_t L_8 = *(L_7);
		int32_t L_9 = ___2_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, ((int32_t)il2cpp_codegen_add(L_4, 1)), (RuntimeArray*)L_5, L_6, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_8, L_9)), 1)), NULL);
	}

IL_0018:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = ___0_array;
		int32_t* L_11 = ___1_count;
		int32_t L_12 = *(L_11);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
		il2cpp_codegen_memcpy((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_12, 1)))), L_13, SizeOf_TValue_t82DA9A372DD280D4054C5316102A420AFCA2C382);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_12, 1)))), (void*)L_13);
		int32_t* L_14 = ___1_count;
		int32_t* L_15 = ___1_count;
		int32_t L_16 = *(L_15);
		*(L_14) = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_EraseSliceWithCapacity_TisIl2CppFullySharedGenericAny_mCB8AF95CD3863A90BB23649525C8436F4D347AB6_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_length, int32_t ___2_index, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
	memset(V_1, 0, SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
	{
		int32_t L_0 = ___3_count;
		int32_t* L_1 = ___1_length;
		int32_t L_2 = *(L_1);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_3 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = *(L_3);
		int32_t L_5 = ___2_index;
		int32_t L_6 = ___3_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_7 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *(L_7);
		int32_t L_9 = ___2_index;
		int32_t* L_10 = ___1_length;
		int32_t L_11 = *(L_10);
		int32_t L_12 = ___2_index;
		int32_t L_13 = ___3_count;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_4, ((int32_t)il2cpp_codegen_add(L_5, L_6)), (RuntimeArray*)L_8, L_9, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_11, L_12)), L_13)), NULL);
	}

IL_0018:
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_14 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = *(L_14);
		int32_t* L_16 = ___1_length;
		int32_t L_17 = *(L_16);
		int32_t L_18 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
		il2cpp_codegen_memcpy(L_19, V_1, SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
		il2cpp_codegen_memcpy((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_17, L_18)), 1)))), L_19, SizeOf_TValue_t2C9FCA3B0B5C4A2AF1EA356C754966CC1770F0F2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_17, L_18)), 1)))), (void*)L_19);
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0036:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = ___3_count;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t* L_23 = ___1_length;
		int32_t* L_24 = ___1_length;
		int32_t L_25 = *(L_24);
		int32_t L_26 = ___3_count;
		*(L_23) = ((int32_t)il2cpp_codegen_subtract(L_25, L_26));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericAny_m66D71A6A77985EC6147CE145D53655DDE0D6B96E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		int32_t L_3 = ___1_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		*(((RuntimeObject**)L_2)) = ((RuntimeObject*)L_4);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_2), (void*)((RuntimeObject*)L_4));
		return 0;
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = *(L_5);
		int32_t L_7 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_6)->max_length),NULL));
		V_0 = L_7;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_8 = ___0_array;
		int32_t L_9 = V_0;
		int32_t L_10 = ___1_count;
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_8, ((int32_t)il2cpp_codegen_add(L_9, L_10)), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_count, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_3 = ___0_array;
		int32_t L_4 = ___1_count;
		int32_t L_5 = ___2_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_6;
		memset((&L_6), 0, sizeof(L_6));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_6), L_4, L_5, 1, il2cpp_rgctx_method(method->rgctx_data, 1));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_3 = L_6;
		return 0;
	}

IL_001a:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = ___1_count;
		int32_t L_9 = ___2_allocator;
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&V_1), ((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9, 1, il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10 = V_1;
		void* L_11;
		L_11 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_10, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_12 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_12);
		void* L_14;
		L_14 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_13, NULL);
		int32_t L_15 = V_0;
		int64_t L_16 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_15,NULL));
		int32_t L_17;
		L_17 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 4));
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_11, L_14, ((int64_t)il2cpp_codegen_multiply(L_16, L_18)), NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_19 = ___0_array;
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_19, il2cpp_rgctx_method(method->rgctx_data, 5));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_20 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_21 = V_1;
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_20 = L_21;
		int32_t L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowWithCapacity_TisIl2CppFullySharedGenericAny_m869F7F86C46BC29ABC74C20B11F88CF5E2D8C1C2_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_count, int32_t ___2_growBy, int32_t ___3_capacityIncrement, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t G_B3_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		if (L_1)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000b;
	}

IL_0007:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = *(L_2);
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		G_B3_0 = L_4;
	}

IL_000b:
	{
		int32_t* L_5 = ___1_count;
		int32_t L_6 = *(L_5);
		int32_t L_7 = ___2_growBy;
		if ((((int32_t)G_B3_0) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_6, L_7)))))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_8 = ___3_capacityIncrement;
		int32_t L_9 = ___2_growBy;
		if ((((int32_t)L_8) >= ((int32_t)L_9)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_10 = ___2_growBy;
		___3_capacityIncrement = L_10;
	}

IL_0018:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_11 = ___0_array;
		int32_t L_12 = ___3_capacityIncrement;
		int32_t L_13;
		L_13 = ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericAny_m66D71A6A77985EC6147CE145D53655DDE0D6B96E(L_11, L_12, il2cpp_rgctx_method(method->rgctx_data, 0));
	}

IL_0020:
	{
		int32_t* L_14 = ___1_count;
		int32_t L_15 = *(L_14);
		int32_t* L_16 = ___1_count;
		int32_t* L_17 = ___1_count;
		int32_t L_18 = *(L_17);
		int32_t L_19 = ___2_growBy;
		*(L_16) = ((int32_t)il2cpp_codegen_add(L_18, L_19));
		return L_15;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_GrowWithCapacity_TisIl2CppFullySharedGenericStruct_m1A0EBAC641E36FA8CB41214602DD2DD1F7A98C1C_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t* ___1_count, int32_t ___2_growBy, int32_t ___3_capacityIncrement, int32_t ___4_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_0, NULL);
		int32_t* L_2 = ___1_count;
		int32_t L_3 = *(L_2);
		int32_t L_4 = ___2_growBy;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_3, L_4)))))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_5 = ___3_capacityIncrement;
		int32_t L_6 = ___2_growBy;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_7 = ___2_growBy;
		___3_capacityIncrement = L_7;
	}

IL_0013:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = ___0_array;
		int32_t L_9 = ___3_capacityIncrement;
		int32_t L_10 = ___4_allocator;
		int32_t L_11;
		L_11 = ArrayHelpers_GrowBy_TisIl2CppFullySharedGenericStruct_m3207ED244F78F91CC60669ABCD40E0A771259A83(L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_001d:
	{
		int32_t* L_12 = ___1_count;
		int32_t L_13 = *(L_12);
		int32_t* L_14 = ___1_count;
		int32_t* L_15 = ___1_count;
		int32_t L_16 = *(L_15);
		int32_t L_17 = ___2_growBy;
		*(L_14) = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_HaveDuplicateReferences_TisIl2CppSharedGenericObject_m06388DC72E845AD44F5E2C9185125398AD872B36_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_first, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___1_index;
		V_0 = L_0;
		goto IL_0036;
	}

IL_0004:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = ___0_first;
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		int32_t L_5 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		goto IL_002c;
	}

IL_0012:
	{
		Il2CppSharedGenericObject* L_6 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = ___0_first;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		Il2CppSharedGenericObject* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		if ((!(((RuntimeObject*)(Il2CppSharedGenericObject*)L_6) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_10))))
		{
			goto IL_0028;
		}
	}
	{
		return (bool)1;
	}

IL_0028:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002c:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___1_index;
		int32_t L_14 = ___2_count;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_add(L_13, L_14)))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0036:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___1_index;
		int32_t L_18 = ___2_count;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18)))))
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArrayHelpers_HaveEqualElements_TisIl2CppFullySharedGenericAny_mC2F3CF468BBB8EB771FA2F07B8A68AA8BFB0C578_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_first, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_second, int32_t ___2_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	const uint32_t SizeOf_TValue_tB0720748C9C02220B54D2BAF1D9A80BB37C8F6BC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TValue_tB0720748C9C02220B54D2BAF1D9A80BB37C8F6BC);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_TValue_tB0720748C9C02220B54D2BAF1D9A80BB37C8F6BC);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_2 = NULL;
	int32_t V_3 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_first;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___1_second;
		if (L_1)
		{
			goto IL_000b;
		}
	}

IL_0006:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___1_second;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_first;
		return (bool)((((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_2) == ((RuntimeObject*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_3))? 1 : 0);
	}

IL_000b:
	{
		int32_t L_4 = ___2_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_first;
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_7;
		L_7 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_4, L_6, NULL);
		V_0 = L_7;
		int32_t L_8 = ___2_count;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___1_second;
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int32_t L_11;
		L_11 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_8, L_10, NULL);
		V_1 = L_11;
		int32_t L_12 = V_0;
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) == ((int32_t)L_13)))
		{
			goto IL_0025;
		}
	}
	{
		return (bool)0;
	}

IL_0025:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_14;
		L_14 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_2 = L_14;
		V_3 = 0;
		goto IL_004b;
	}

IL_002f:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_15 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_first;
		int32_t L_17 = V_3;
		int32_t L_18 = L_17;
		il2cpp_codegen_memcpy(L_19, (L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_18)), SizeOf_TValue_tB0720748C9C02220B54D2BAF1D9A80BB37C8F6BC);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___1_second;
		int32_t L_21 = V_3;
		int32_t L_22 = L_21;
		il2cpp_codegen_memcpy(L_23, (L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_TValue_tB0720748C9C02220B54D2BAF1D9A80BB37C8F6BC);
		bool L_24;
		L_24 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_19: *(void**)L_19), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_23: *(void**)L_23));
		if (L_24)
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0047:
	{
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_004b:
	{
		int32_t L_26 = V_3;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_002f;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m96704E2F360C2548EBEACBA3AE7A7BBE31CB98AB_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___1_predicate, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t8B684A9C8C70F5BDEC5C2E7B5327BEA4FF90B74E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_t8B684A9C8C70F5BDEC5C2E7B5327BEA4FF90B74E);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (-1);
	}

IL_0005:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = L_2;
		V_1 = 0;
		goto IL_0022;
	}

IL_000d:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_3 = ___1_predicate;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_t8B684A9C8C70F5BDEC5C2E7B5327BEA4FF90B74E);
		bool L_8;
		L_8 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_7: *(void**)L_7), NULL);
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_9 = V_1;
		return L_9;
	}

IL_001e:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0022:
	{
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_000d;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_mA69C0EC67C2CED022FC1E530F4CEDD66405578E4_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t0DAFB589E6355313CB0EE4E909D3E9EB1ACD5628 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_t0DAFB589E6355313CB0EE4E909D3E9EB1ACD5628);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_t0DAFB589E6355313CB0EE4E909D3E9EB1ACD5628);
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (-1);
	}

IL_0005:
	{
		int32_t L_1 = ___3_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		int32_t L_4 = ___2_startIndex;
		___3_count = ((int32_t)il2cpp_codegen_subtract(L_3, L_4));
	}

IL_0010:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_5;
		int32_t L_6 = ___2_startIndex;
		V_1 = L_6;
		goto IL_0030;
	}

IL_001a:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TValue_t0DAFB589E6355313CB0EE4E909D3E9EB1ACD5628);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_TValue_t0DAFB589E6355313CB0EE4E909D3E9EB1ACD5628);
		bool L_13;
		L_13 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_12: *(void**)L_12));
		if (!L_13)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_14 = V_1;
		return L_14;
	}

IL_002c:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0030:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = ___2_startIndex;
		int32_t L_18 = ___3_count;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18)))))
		{
			goto IL_001a;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOf_TisIl2CppFullySharedGenericAny_m520565C91C971DF1D11D7CF7F773CD0EDCA48E21_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___1_predicate, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tF983B6DE4D7947D4A4691028BFCACCB87D7AAB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tF983B6DE4D7947D4A4691028BFCACCB87D7AAB60);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (-1);
	}

IL_0005:
	{
		int32_t L_1 = ___2_startIndex;
		int32_t L_2 = ___3_count;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B4_0 = L_1;
			goto IL_000d;
		}
		G_B3_0 = L_1;
	}
	{
		int32_t L_3 = ___3_count;
		G_B5_0 = L_3;
		G_B5_1 = G_B3_0;
		goto IL_0012;
	}

IL_000d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_array;
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		int32_t L_6 = ___2_startIndex;
		G_B5_0 = ((int32_t)il2cpp_codegen_subtract(L_5, L_6));
		G_B5_1 = G_B4_0;
	}

IL_0012:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0));
		int32_t L_7 = ___2_startIndex;
		V_1 = L_7;
		goto IL_002d;
	}

IL_0018:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_8 = ___1_predicate;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___0_array;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_TValue_tF983B6DE4D7947D4A4691028BFCACCB87D7AAB60);
		bool L_13;
		L_13 = Predicate_1_Invoke_m6F76B5644E2D6BD882F23B65434545AD90EFE5A1(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_12: *(void**)L_12), NULL);
		if (!L_13)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_14 = V_1;
		return L_14;
	}

IL_0029:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_002d:
	{
		int32_t L_16 = V_1;
		int32_t L_17 = V_0;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0018;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_m60416BEF0E8CE7F477DCE5190C46FE653FBF073F_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Il2CppSharedGenericObject* L_1 = ___1_value;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8(L_0, L_1, 0, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOfReference_TisIl2CppFullySharedGenericAny_TisIl2CppSharedGenericObject_mCABB5666122B3A1059EE927F255C7CE0D63A2DD8_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TFirst_tCAC9DAA5E28F4F04B33EB1D830057704704E0E8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TFirst_tCAC9DAA5E28F4F04B33EB1D830057704704E0E8D);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (-1);
	}

IL_0005:
	{
		int32_t L_1 = ___3_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		int32_t L_4 = ___2_startIndex;
		___3_count = ((int32_t)il2cpp_codegen_subtract(L_3, L_4));
	}

IL_0010:
	{
		int32_t L_5 = ___2_startIndex;
		V_0 = L_5;
		goto IL_002e;
	}

IL_0014:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_array;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_TFirst_tCAC9DAA5E28F4F04B33EB1D830057704704E0E8D);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(method->rgctx_data, 0), L_9);
		Il2CppSharedGenericObject* L_11 = ___1_value;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_10) == ((RuntimeObject*)(Il2CppSharedGenericObject*)L_11))))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_12 = V_0;
		return L_12;
	}

IL_002a:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002e:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = ___2_startIndex;
		int32_t L_16 = ___3_count;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)il2cpp_codegen_add(L_15, L_16)))))
		{
			goto IL_0014;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_IndexOfValue_TisIl2CppFullySharedGenericStruct_mEADB0244218E23B857D18463DC2B66D167209222_fshared (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, Il2CppFullySharedGenericStruct ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t6676DA175FD912E3F0D1651F217AF54BB4E8E427 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_10 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_TValue_t6676DA175FD912E3F0D1651F217AF54BB4E8E427);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (-1);
	}

IL_0005:
	{
		int32_t L_1 = ___3_count;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_2 = ___0_array;
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		int32_t L_4 = ___2_startIndex;
		___3_count = ((int32_t)il2cpp_codegen_subtract(L_3, L_4));
	}

IL_0010:
	{
		int32_t L_5 = ___2_startIndex;
		V_0 = L_5;
		goto IL_0030;
	}

IL_0014:
	{
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_6 = ___0_array;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_TValue_t6676DA175FD912E3F0D1651F217AF54BB4E8E427);
		Il2CppConstrainedCallData L_11;
		Il2CppMethodPointer L_12 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), (void*)(Il2CppFullySharedGenericStruct*)___1_value, &L_11, L_10);
		bool L_13 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_12, L_11.method,L_11.thisPtr, L_9);
		if (!L_13)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}

IL_002c:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0030:
	{
		int32_t L_16 = V_0;
		int32_t L_17 = ___2_startIndex;
		int32_t L_18 = ___3_count;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_add(L_17, L_18)))))
		{
			goto IL_0014;
		}
	}
	{
		return (-1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_InsertAt_TisIl2CppFullySharedGenericAny_m3F9D5D9B8CF3750F4C6A5BA4C8664EFB24F3DB40_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2);
	const Il2CppFullySharedGenericAny L_27 = L_8;
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_2 = ___1_index;
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0012:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)1);
		*(((RuntimeObject**)L_4)) = ((RuntimeObject*)L_5);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_4), (void*)((RuntimeObject*)L_5));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_6 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = *(L_6);
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2);
		il2cpp_codegen_memcpy((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)), L_8, SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0)), (void*)L_8);
		return;
	}

IL_0024:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_9 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = *(L_9);
		int32_t L_11 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_10)->max_length),NULL));
		V_0 = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_12 = ___0_array;
		int32_t L_13 = V_0;
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_12, ((int32_t)il2cpp_codegen_add(L_13, 1)), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_14 = ___1_index;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) == ((int32_t)L_15)))
		{
			goto IL_0046;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_16 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = *(L_16);
		int32_t L_18 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_19 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = *(L_19);
		int32_t L_21 = ___1_index;
		int32_t L_22 = V_0;
		int32_t L_23 = ___1_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, L_18, (RuntimeArray*)L_20, ((int32_t)il2cpp_codegen_add(L_21, 1)), ((int32_t)il2cpp_codegen_subtract(L_22, L_23)), NULL);
	}

IL_0046:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_24 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25 = *(L_24);
		int32_t L_26 = ___1_index;
		il2cpp_codegen_memcpy(L_27, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___2_value : &___2_value), SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2);
		il2cpp_codegen_memcpy((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)), L_27, SizeOf_TValue_tF84232ECAD2F4DC9CB5F2BB2EA88CD44F84598E2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)), (void*)L_27);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_InsertAtWithCapacity_TisIl2CppFullySharedGenericAny_m2847116CF44E3F9E7C6D3E73A6C174EC9F3A1F66_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t* ___1_count, int32_t ___2_index, Il2CppFullySharedGenericAny ___3_value, int32_t ___4_capacityIncrement, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tC291FFFEC56A1B09FC1DBE45DB181CC4D43F38AF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_TValue_tC291FFFEC56A1B09FC1DBE45DB181CC4D43F38AF);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		int32_t* L_1 = ___1_count;
		int32_t L_2 = *(L_1);
		int32_t* L_3 = ___1_count;
		int32_t L_4 = *(L_3);
		int32_t L_5 = ___4_capacityIncrement;
		ArrayHelpers_EnsureCapacity_TisIl2CppFullySharedGenericAny_m6E67B3033A66A334BFE5A7E0B9D2C07CE296646E(L_0, L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_6 = ___2_index;
		int32_t* L_7 = ___1_count;
		int32_t L_8 = *(L_7);
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_0024;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_9 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = *(L_9);
		int32_t L_11 = ___2_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_12 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = *(L_12);
		int32_t L_14 = ___2_index;
		int32_t* L_15 = ___1_count;
		int32_t L_16 = *(L_15);
		int32_t L_17 = ___2_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_13, ((int32_t)il2cpp_codegen_add(L_14, 1)), ((int32_t)il2cpp_codegen_subtract(L_16, L_17)), NULL);
	}

IL_0024:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_18 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = *(L_18);
		int32_t L_20 = ___2_index;
		il2cpp_codegen_memcpy(L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___3_value : &___3_value), SizeOf_TValue_tC291FFFEC56A1B09FC1DBE45DB181CC4D43F38AF);
		il2cpp_codegen_memcpy((L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)), L_21, SizeOf_TValue_tC291FFFEC56A1B09FC1DBE45DB181CC4D43F38AF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(L_19)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_20)), (void*)L_21);
		int32_t* L_22 = ___1_count;
		int32_t* L_23 = ___1_count;
		int32_t L_24 = *(L_23);
		*(L_22) = ((int32_t)il2cpp_codegen_add(L_24, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Join_TisIl2CppFullySharedGenericAny_mBD7E08FAE557F56197D2EFEFF4F91E6EC8D256BC_fshared (Il2CppFullySharedGenericAny ___0_value, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_values, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD);
	const Il2CppFullySharedGenericAny L_10 = L_0;
	const Il2CppFullySharedGenericAny L_15 = L_0;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = 0;
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_value : &___0_value), SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_0);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___1_values;
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_4 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___1_values;
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, L_6));
	}

IL_0017:
	{
		int32_t L_7 = V_0;
		if (L_7)
		{
			goto IL_001c;
		}
	}
	{
		return (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_001c:
	{
		int32_t L_8 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 1), (uint32_t)L_8);
		V_1 = L_9;
		V_2 = 0;
		il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_value : &___0_value), SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(method->rgctx_data, 0), L_10);
		if (!L_11)
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_1;
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_value : &___0_value), SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD);
		il2cpp_codegen_memcpy((L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)), L_15, SizeOf_TValue_t165F29F804579DB4785B29C41B0E41C819E68EAD);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(L_12)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)), (void*)L_15);
	}

IL_0039:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___1_values;
		if (!L_16)
		{
			goto IL_0048;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___1_values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_18 = V_1;
		int32_t L_19 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = ___1_values;
		int32_t L_21 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_20)->max_length),NULL));
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_17, 0, (RuntimeArray*)L_18, L_19, L_21, NULL);
	}

IL_0048:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_1;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArrayHelpers_LengthSafe_TisIl2CppFullySharedGenericAny_mC6EB691A32F53AF8E73702B746EF72A5256E43C0_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 0;
	}

IL_0005:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Merge_TisIl2CppFullySharedGenericAny_mA7996B376EA913DA40AE0CB4B78A197149A3C39D_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_first, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_second, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t061C8A8C6A2C52CBE242842B1815D06D0B88B7FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_t061C8A8C6A2C52CBE242842B1815D06D0B88B7FA);
	const Il2CppFullySharedGenericAny L_19 = L_12;
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	int32_t V_1 = 0;
	U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* V_2 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_first;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___1_second;
		return L_1;
	}

IL_0005:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___1_second;
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_first;
		return L_3;
	}

IL_000a:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374(L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_4;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___0_first;
		List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57(L_5, (RuntimeObject*)L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = 0;
		goto IL_0052;
	}

IL_001b:
	{
		U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* L_7 = (U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		U3CU3Ec__DisplayClass33_0_1__ctor_mC44A3BA6167DEC9FB9BC98B780FEA04F563736E2(L_7, NULL);
		V_2 = L_7;
		U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* L_8 = V_2;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = ___1_second;
		int32_t L_10 = V_1;
		int32_t L_11 = L_10;
		il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_TValue_t061C8A8C6A2C52CBE242842B1815D06D0B88B7FA);
		il2cpp_codegen_write_field_data<true>(L_8, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 3),0), il2cpp_rgctx_offset(method->rgctx_data, 6), L_12, SizeOf_TValue_t061C8A8C6A2C52CBE242842B1815D06D0B88B7FA);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_13 = V_0;
		U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* L_14 = V_2;
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_15 = (Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 8));
		Predicate_1__ctor_m2B0279AF2950764FCBFEF3BC1BF616854B3EE3AC(L_15, (RuntimeObject*)L_14, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 7)), NULL);
		bool L_16;
		L_16 = List_1_Exists_m4D844228EBB80F1DFE1D49094731494B09C2B4E8(L_13, L_15, il2cpp_rgctx_method(method->rgctx_data, 10));
		if (L_16)
		{
			goto IL_004e;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_17 = V_0;
		U3CU3Ec__DisplayClass33_0_1_tB6CF9727F3704623A7C8D43E9FEB20554021BFB3* L_18 = V_2;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_field_data_pointer(L_18, il2cpp_rgctx_offset(method->rgctx_data, 6)), SizeOf_TValue_t061C8A8C6A2C52CBE242842B1815D06D0B88B7FA);
		List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_19: *(void**)L_19), il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_004e:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0052:
	{
		int32_t L_21 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = ___1_second;
		int32_t L_23 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_22)->max_length),NULL));
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_001b;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_24 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_25;
		L_25 = List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A(L_24, il2cpp_rgctx_method(method->rgctx_data, 12));
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Merge_TisIl2CppFullySharedGenericAny_m1CE8205BDD302FB9D56A17817C5BC845149195AE_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_first, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___1_second, RuntimeObject* ___2_comparer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const uint32_t SizeOf_Enumerator_tABD8900DEA804349CD848377E667DE4FF592CEC2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 5)));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	const Il2CppFullySharedGenericAny L_16 = L_9;
	const Il2CppFullySharedGenericAny L_24 = L_9;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_11 = alloca(SizeOf_Enumerator_tABD8900DEA804349CD848377E667DE4FF592CEC2);
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	memset(V_2, 0, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	bool V_3 = false;
	Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF V_4 = alloca(SizeOf_Enumerator_tABD8900DEA804349CD848377E667DE4FF592CEC2);
	memset(V_4, 0, SizeOf_Enumerator_tABD8900DEA804349CD848377E667DE4FF592CEC2);
	Il2CppFullySharedGenericAny V_5 = alloca(SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	memset(V_5, 0, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_first;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___1_second;
		return L_1;
	}

IL_0005:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___1_second;
		if (L_2)
		{
			goto IL_000a;
		}
	}
	{
		return (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_000a:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_3;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_4 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_first;
		List_1_AddRange_m44DED39FFEBC8F2ACF6162DB065B649E888B9C57(L_4, (RuntimeObject*)L_5, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_1 = 0;
		goto IL_006e;
	}

IL_001b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = ___1_second;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
		il2cpp_codegen_memcpy(V_2, L_9, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
		V_3 = (bool)0;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_10 = V_0;
		List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61(L_10, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(V_4, L_11, SizeOf_Enumerator_tABD8900DEA804349CD848377E667DE4FF592CEC2);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{
				Il2CppConstrainedCallData L_13;
				Il2CppMethodPointer L_14 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 5), il2cpp_rgctx_method(method->rgctx_data, 10), (void*)(Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_4, &L_13, L_12);
				typedef void ( *func_L_15)(void*,const RuntimeMethod*);
				((func_L_15)L_14)(L_13.thisPtr,L_13.method);
				return;
			}
		});
		try
		{
			{
				goto IL_0047_1;
			}

IL_002f_1:
			{
				Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_4, (Il2CppFullySharedGenericAny*)L_16, il2cpp_rgctx_method(method->rgctx_data, 6));
				il2cpp_codegen_memcpy(V_5, L_16, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
				RuntimeObject* L_17 = ___2_comparer;
				il2cpp_codegen_memcpy(L_18, V_5, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
				il2cpp_codegen_memcpy(L_19, V_2, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
				bool L_20;
				L_20 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 7), L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_18: *(void**)L_18), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_19: *(void**)L_19));
				if (!L_20)
				{
					goto IL_0047_1;
				}
			}
			{
				V_3 = (bool)1;
				goto IL_0060;
			}

IL_0047_1:
			{
				bool L_21;
				L_21 = Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)V_4, il2cpp_rgctx_method(method->rgctx_data, 9));
				if (L_21)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_0060;
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

IL_0060:
	{
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_006a;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_23 = V_0;
		il2cpp_codegen_memcpy(L_24, V_2, SizeOf_TValue_tF2D5054255D3ECEDE5BB3ECE3D39532AB4A49819);
		List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_inline(L_23, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_24: *(void**)L_24), il2cpp_rgctx_method(method->rgctx_data, 11));
	}

IL_006a:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_006e:
	{
		int32_t L_26 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = ___1_second;
		int32_t L_28 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_27)->max_length),NULL));
		if ((((int32_t)L_26) < ((int32_t)L_28)))
		{
			goto IL_001b;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_29 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_30;
		L_30 = List_1_ToArray_m5160526E5983BD8ED24DFFE47C33B141C1B3187A(L_29, il2cpp_rgctx_method(method->rgctx_data, 12));
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_MoveSlice_TisIl2CppFullySharedGenericAny_m73FB15C6DD7AEBED65AB7C3D0B45377438CA5A16_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_sourceIndex, int32_t ___2_destinationIndex, int32_t ___3_count, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = ___3_count;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___1_sourceIndex;
		int32_t L_2 = ___2_destinationIndex;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0009;
		}
	}

IL_0008:
	{
		return;
	}

IL_0009:
	{
		int32_t L_3 = ___2_destinationIndex;
		int32_t L_4 = ___1_sourceIndex;
		if ((((int32_t)L_3) <= ((int32_t)L_4)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_5 = ___2_destinationIndex;
		int32_t L_6 = ___3_count;
		int32_t L_7 = ___1_sourceIndex;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_5, L_6)), L_7));
		goto IL_001b;
	}

IL_0015:
	{
		int32_t L_8 = ___1_sourceIndex;
		int32_t L_9 = ___3_count;
		int32_t L_10 = ___2_destinationIndex;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_8, L_9)), L_10));
	}

IL_001b:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = ___3_count;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)il2cpp_codegen_multiply(L_12, 2))))))
		{
			goto IL_0045;
		}
	}
	{
		V_1 = 0;
		goto IL_0040;
	}

IL_0025:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = ___0_array;
		int32_t L_14 = ___1_sourceIndex;
		int32_t L_15 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = ___0_array;
		int32_t L_17 = ___2_destinationIndex;
		int32_t L_18 = V_1;
		ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F(((Il2CppFullySharedGenericAny*)(L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_14, L_15))))), ((Il2CppFullySharedGenericAny*)(L_16)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_17, L_18))))), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0040:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = ___3_count;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0025;
		}
	}
	{
		return;
	}

IL_0045:
	{
		int32_t L_22 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		int32_t L_23 = ___2_destinationIndex;
		V_3 = L_23;
		V_4 = 0;
		goto IL_0096;
	}

IL_0050:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_24 = ___0_array;
		int32_t L_25 = V_3;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_26 = ___0_array;
		int32_t L_27 = ___1_sourceIndex;
		ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F(((Il2CppFullySharedGenericAny*)(L_24)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_25))), ((Il2CppFullySharedGenericAny*)(L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27))), il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_28 = ___2_destinationIndex;
		int32_t L_29 = ___1_sourceIndex;
		if ((((int32_t)L_28) <= ((int32_t)L_29)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_30 = V_3;
		int32_t L_31 = ___3_count;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_30, L_31));
		int32_t L_32 = V_3;
		int32_t L_33 = ___1_sourceIndex;
		if ((((int32_t)L_32) >= ((int32_t)L_33)))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_34 = ___2_destinationIndex;
		int32_t L_35 = ___3_count;
		int32_t L_36 = ___1_sourceIndex;
		int32_t L_37 = V_3;
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_38;
		L_38 = il2cpp_codegen_abs(((int32_t)il2cpp_codegen_subtract(L_36, L_37)));
		V_3 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_34, L_35)), L_38));
		goto IL_0090;
	}

IL_007e:
	{
		int32_t L_39 = V_3;
		int32_t L_40 = ___3_count;
		V_3 = ((int32_t)il2cpp_codegen_add(L_39, L_40));
		int32_t L_41 = V_3;
		int32_t L_42 = ___1_sourceIndex;
		int32_t L_43 = ___3_count;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)il2cpp_codegen_add(L_42, L_43)))))
		{
			goto IL_0090;
		}
	}
	{
		int32_t L_44 = ___2_destinationIndex;
		int32_t L_45 = V_3;
		int32_t L_46 = ___1_sourceIndex;
		int32_t L_47 = ___3_count;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, ((int32_t)il2cpp_codegen_subtract(L_45, ((int32_t)il2cpp_codegen_add(L_46, L_47))))));
	}

IL_0090:
	{
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0096:
	{
		int32_t L_49 = V_4;
		int32_t L_50 = V_2;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0050;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_PutAtIfNotSet_TisIl2CppFullySharedGenericAny_m9CA0B149F2A0CEE8AF1993EF155837D36898919D_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___2_valueFn, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
	const Il2CppFullySharedGenericAny L_18 = L_11;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
	memset(V_0, 0, SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(L_0);
		int32_t L_2;
		L_2 = ArrayHelpers_LengthSafe_TisIl2CppFullySharedGenericAny_mC6EB691A32F53AF8E73702B746EF72A5256E43C0(L_1, NULL);
		int32_t L_3 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_3, 1)))))
		{
			goto IL_0015;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		int32_t L_5 = ___1_index;
		Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712(L_4, ((int32_t)il2cpp_codegen_add(L_5, 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0015:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_6;
		L_6 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_7 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = *(L_7);
		int32_t L_9 = ___1_index;
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
		bool L_13;
		L_13 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 3)) ? L_12: *(void**)L_12));
		if (!L_13)
		{
			goto IL_0040;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_14 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = *(L_14);
		int32_t L_16 = ___1_index;
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_17 = ___2_valueFn;
		Func_1_Invoke_m35CBC166F464B8A1169583672025E6D64211856C(L_17, (Il2CppFullySharedGenericAny*)L_18, NULL);
		il2cpp_codegen_memcpy((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)), L_18, SizeOf_TValue_t80E2FFBDEA5223E1DBD4630108646FEADA581176);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_18);
	}

IL_0040:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Resize_TisIl2CppFullySharedGenericStruct_m8CBA4585E072FC19FA97B9185B76F96FB04CADC2_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, int32_t ___1_newSize, int32_t ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t G_B9_0 = 0;
	void* G_B9_1 = NULL;
	void* G_B9_2 = NULL;
	int32_t G_B8_0 = 0;
	void* G_B8_1 = NULL;
	void* G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	void* G_B10_2 = NULL;
	void* G_B10_3 = NULL;
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		int32_t L_1;
		L_1 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___1_newSize;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		int32_t L_4 = ___1_newSize;
		if (L_4)
		{
			goto IL_0025;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_5 = ___0_array;
		bool L_6;
		L_6 = NativeArray_1_get_IsCreated_m527A2C3B75C25BFF29D1D9EA88C81172FF4F5A5A_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_7 = ___0_array;
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_001d:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_8 = ___0_array;
		il2cpp_codegen_initobj(L_8, sizeof(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18));
		return;
	}

IL_0025:
	{
		int32_t L_9 = ___1_newSize;
		int32_t L_10 = ___2_allocator;
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&V_1), L_9, L_10, 1, il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_11 = V_0;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12 = V_1;
		void* L_13;
		L_13 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_12, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_14 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_15 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_14);
		void* L_16;
		L_16 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_15, NULL);
		int32_t L_17;
		L_17 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 6));
		int32_t L_18 = ___1_newSize;
		int32_t L_19 = V_0;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			G_B9_0 = L_17;
			G_B9_1 = L_16;
			G_B9_2 = L_13;
			goto IL_004f;
		}
		G_B8_0 = L_17;
		G_B8_1 = L_16;
		G_B8_2 = L_13;
	}
	{
		int32_t L_20 = V_0;
		G_B10_0 = L_20;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_0050;
	}

IL_004f:
	{
		int32_t L_21 = ___1_newSize;
		G_B10_0 = L_21;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_0050:
	{
		int64_t L_22 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(G_B10_1, G_B10_0)),NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(G_B10_3, G_B10_2, L_22, NULL);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_23 = ___0_array;
		NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80(L_23, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_005d:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_24 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_25 = V_1;
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_24 = L_25;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArrayHelpers_Select_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m31C87EB0D65B4CCB839C666E4559C64FAF3CA33D_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___1_converter, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TOld_t8F28B8D2E70004B6A300118E6C0CF78B50C2AB0E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const uint32_t SizeOf_TNew_t0CE8CF259308EF7AA6D44FD07826A1540BA7555D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TOld_t8F28B8D2E70004B6A300118E6C0CF78B50C2AB0E);
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TNew_t0CE8CF259308EF7AA6D44FD07826A1540BA7555D);
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
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
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		V_0 = L_2;
		int32_t L_3 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_1 = L_4;
		V_2 = 0;
		goto IL_002c;
	}

IL_0014:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_1;
		int32_t L_6 = V_2;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_7 = ___1_converter;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_TOld_t8F28B8D2E70004B6A300118E6C0CF78B50C2AB0E);
		Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12, NULL);
		il2cpp_codegen_memcpy((L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), L_12, SizeOf_TNew_t0CE8CF259308EF7AA6D44FD07826A1540BA7555D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6)), (void*)L_12);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_002c:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0014;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_1;
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_Swap_TisIl2CppFullySharedGenericAny_mFD6379496AFF06FEA77AE92F9F19FB56F34C7B2F_fshared (Il2CppFullySharedGenericAny* ___0_first, Il2CppFullySharedGenericAny* ___1_second, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
	memset(V_0, 0, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_first;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		Il2CppFullySharedGenericAny* L_2 = ___0_first;
		Il2CppFullySharedGenericAny* L_3 = ___1_second;
		il2cpp_codegen_memcpy(L_4, L_3, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_2, L_4, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_2, (void*)L_4);
		Il2CppFullySharedGenericAny* L_5 = ___1_second;
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_5, L_6, SizeOf_TValue_tB7901B7EA7EAB8CB267BE252D8ED8682211D43B2);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_5, (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_SwapElements_TisIl2CppFullySharedGenericStruct_m0B01A34B30BEA683D319F3AEC4F2ABEFB36CBE55_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, int32_t ___1_index1, int32_t ___2_index2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	memset(V_0, 0, SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
	{
		int32_t L_0 = ___1_index1;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_array), L_0, (Il2CppFullySharedGenericStruct*)L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(V_0, L_1, SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
		int32_t L_2 = ___1_index1;
		int32_t L_3 = ___2_index2;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline((&___0_array), L_3, (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline((&___0_array), L_2, il2cpp_codegen_memcpy(L_5, L_4, SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6 = ___2_index2;
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704);
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline((&___0_array), L_6, il2cpp_codegen_memcpy(L_8, L_7, SizeOf_TValue_t456139F8923B774FEB6894E13380AACFB8CAE704), il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayHelpers_SwapElements_TisIl2CppFullySharedGenericAny_m2F6256AA7F2819350B27A391AF0D2AF5A92C870E_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index1, int32_t ___2_index2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		int32_t L_1 = ___1_index1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t L_3 = ___2_index2;
		MemoryHelpers_Swap_TisIl2CppFullySharedGenericAny_m1715B6AE84465D838F0FE8BA00E5AA4DB2EBACC1(((Il2CppFullySharedGenericAny*)(L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_1))), ((Il2CppFullySharedGenericAny*)(L_2)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3))), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisIl2CppFullySharedGenericAny_mCDBDA95F2C978F51D211512CB608CDF5B5628FBA_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_expected : &___0_expected), SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_actual : &___1_actual), SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC);
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_AreEqual_TisIl2CppFullySharedGenericAny_m0F394E700B5869B9BB20B6ED32461F1F56B870DA((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_2, L_0, SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC): *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t39F5D4667B732F487E6D1C04AC3AFC25E19D97FC): *(void**)L_1), (String_t*)NULL, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m0F394E700B5869B9BB20B6ED32461F1F56B870DA_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_expected : &___0_expected), SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_actual : &___1_actual), SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F);
		String_t* L_2 = ___2_message;
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_3;
		L_3 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_AreEqual_TisIl2CppFullySharedGenericAny_m61C4BE5E4D8C4E643FEF0B1A04B51A9EC6636229((il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_4, L_0, SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F): *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_5, L_1, SizeOf_T_tACCC857719CE88974D289FAF0EE9DDC58264563F): *(void**)L_1), L_2, (RuntimeObject*)L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_AreEqual_TisIl2CppFullySharedGenericAny_m61C4BE5E4D8C4E643FEF0B1A04B51A9EC6636229_fshared (Il2CppFullySharedGenericAny ___0_expected, Il2CppFullySharedGenericAny ___1_actual, String_t* ___2_message, RuntimeObject* ___3_comparer, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_14 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
	const Il2CppFullySharedGenericAny L_12 = L_7;
	const Il2CppFullySharedGenericAny L_16 = L_7;
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
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_expected : &___0_expected), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		RuntimeObject* L_6 = il2cpp_codegen_isinst_runtime_class(il2cpp_rgctx_data(method->rgctx_data, 1), Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var, L_5);;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_actual : &___1_actual), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		RuntimeObject* L_8 = il2cpp_codegen_isinst_runtime_class(il2cpp_rgctx_data(method->rgctx_data, 1), Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var, L_7);;
		String_t* L_9 = ___2_message;
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_AreEqual_mA4CD725133015119B0219ABAA6337650814B803B((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)L_8, L_9, NULL);
		return;
	}

IL_0038:
	{
		RuntimeObject* L_10 = ___3_comparer;
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_actual : &___1_actual), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		il2cpp_codegen_memcpy(L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_expected : &___0_expected), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		bool L_13;
		L_13 = InterfaceFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? L_12: *(void**)L_12));
		if (L_13)
		{
			goto IL_005a;
		}
	}
	{
		il2cpp_codegen_memcpy(L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_actual : &___1_actual), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_14);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___0_expected : &___0_expected), SizeOf_T_t94EE85DC24ABEB798E6AD2D103E6C932B138C076);
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_16);
		String_t* L_18;
		L_18 = AssertionMessageUtil_GetEqualityMessage_m64D77BB9CA4284DD9561C238BB1F97B566830DBB(L_15, L_17, (bool)1, NULL);
		String_t* L_19 = ___2_message;
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_18, L_19, NULL);
	}

IL_005a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisIl2CppSharedGenericObject_m0A85585E00CD4BC9B649E72630F685A145E90765_gshared (Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	{
		Il2CppSharedGenericObject* L_0 = ___0_value;
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_IsNotNull_TisIl2CppSharedGenericObject_m955F3178A0FAAAC07C8029B85CBDB4DE65AC0A61(L_0, (String_t*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNotNull_TisIl2CppSharedGenericObject_m955F3178A0FAAAC07C8029B85CBDB4DE65AC0A61_gshared (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
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
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		Il2CppSharedGenericObject* L_5 = ___0_value;
		String_t* L_6 = ___1_message;
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_IsNotNull_mB889D13B7935F20A9CE32629C00434099E30D931(((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_5, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)), L_6, NULL);
		return;
	}

IL_002d:
	{
		Il2CppSharedGenericObject* L_7 = ___0_value;
		if (L_7)
		{
			goto IL_0047;
		}
	}
	{
		Il2CppSharedGenericObject* L_8 = ___0_value;
		String_t* L_9;
		L_9 = AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50((RuntimeObject*)L_8, (bool)0, NULL);
		String_t* L_10 = ___1_message;
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_9, L_10, NULL);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_TisIl2CppSharedGenericObject_mFA9C5D5F27978CEEE20C03464EDC373A22A86026_gshared (Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
	{
		Il2CppSharedGenericObject* L_0 = ___0_value;
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_IsNull_TisIl2CppSharedGenericObject_m20BA4B8FF59E76850C490945432E7C0FD8F8D830(L_0, (String_t*)NULL, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsNull_TisIl2CppSharedGenericObject_m20BA4B8FF59E76850C490945432E7C0FD8F8D830_gshared (Il2CppSharedGenericObject* ___0_value, String_t* ___1_message, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit);
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
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		Il2CppSharedGenericObject* L_5 = ___0_value;
		String_t* L_6 = ___1_message;
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_IsNull_mB7DAD5AA378E4A36BC1D27B88CFADD31023530BB(((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)IsInstClass((RuntimeObject*)L_5, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var)), L_6, NULL);
		return;
	}

IL_002d:
	{
		Il2CppSharedGenericObject* L_7 = ___0_value;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		Il2CppSharedGenericObject* L_8 = ___0_value;
		String_t* L_9;
		L_9 = AssertionMessageUtil_NullFailureMessage_mECBDB36C0C5433898BC4D3CF0AE55CEFBBCC9A50((RuntimeObject*)L_8, (bool)1, NULL);
		String_t* L_10 = ___1_message;
		CHECKED_LOCAL_INIT(Assert_tDC16963451AC4364803739B73A4477ADCB365863_StaticInit,(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Assert_Fail_mCC76351EF5EAA85F4012330D498CB802861B41BA(L_9, L_10, NULL);
	}

IL_0047:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncGPUReadbackRequest_GetData_TisIl2CppFullySharedGenericStruct_m785CA6B68B6527258558130B5F81B345AE654EF0_fshared (AsyncGPUReadbackRequest_t6A735D3E0F1DEF8F43EBD0E6FE550FAE564519C7* __this, int32_t ___0_layer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = AsyncGPUReadbackRequest_get_done_mC042016E5BE850F18995831CBB4F06655914798C(__this, NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1;
		L_1 = AsyncGPUReadbackRequest_get_hasError_m374BB20A32B9DCDBFD8F81BBE542847B82F04EE5(__this, NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral699ABA3941867526413B23699BCDD9DC20DA6D7A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_001b:
	{
		int32_t L_3 = ___0_layer;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = ___0_layer;
		int32_t L_5;
		L_5 = AsyncGPUReadbackRequest_get_layerCount_m70DE577E87B38E6621851F88542E252123147501(__this, NULL);
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_0049;
		}
	}

IL_0028:
	{
		int32_t L_6 = ___0_layer;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9;
		L_9 = AsyncGPUReadbackRequest_get_layerCount_m70DE577E87B38E6621851F88542E252123147501(__this, NULL);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F2AA158020B57C11060F4940998AEF1D121EF87)), L_8, L_11, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, method);
	}

IL_0049:
	{
		int32_t L_14;
		L_14 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_14;
		int32_t L_15 = ___0_layer;
		intptr_t L_16;
		L_16 = AsyncGPUReadbackRequest_GetDataRaw_m73EA05E0647ED7BCB73E95C3C3E73F9C0B2F963C(__this, L_15, NULL);
		void* L_17;
		L_17 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_16, NULL);
		int32_t L_18;
		L_18 = AsyncGPUReadbackRequest_get_layerDataSize_mCAE8CCE76C830532015EFC47D062917900DB749B(__this, NULL);
		int32_t L_19 = V_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_20;
		L_20 = NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisIl2CppFullySharedGenericStruct_m6920C14D4E38FAB84BD2B5F148CE70DF7F224F52(L_17, ((int32_t)(L_18/L_19)), 1, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 AsyncRequestNativeArrayData_CreateAndCheckAccess_TisIl2CppFullySharedGenericStruct_mFFDBF039D6B49C2B62C846E87304EBB8D7C0E49D_fshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_array;
		int32_t L_1 = L_0.___m_AllocatorLabel;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0012;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___0_array;
		int32_t L_3 = L_2.___m_AllocatorLabel;
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_001d;
		}
	}

IL_0012:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral67A6B45EDCD9AF8D54D82F87349E9F4D77FC030F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_001d:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_5 = ___0_array;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_inline(L_5, NULL);
		(&V_0)->___nativeArrayBuffer = L_6;
		int32_t L_7;
		L_7 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_array), NULL);
		int64_t L_8 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_7,NULL));
		int32_t L_9;
		L_9 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		(&V_0)->___lengthInBytes = ((int64_t)il2cpp_codegen_multiply(L_8, L_10));
		AsyncRequestNativeArrayData_tF7EA8207508AB7275CC8571CCAE60492A9741505 L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* AsyncTaskCache_CreateCacheableTask_TisIl2CppFullySharedGenericAny_mF1F904D36F96839C834A5BFC86634E274F6DA836_fshared (Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TResult_tAEECA9E240B60E411DB52BC214D8EEB1A6C7C678 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_tAEECA9E240B60E411DB52BC214D8EEB1A6C7C678);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TResult_tAEECA9E240B60E411DB52BC214D8EEB1A6C7C678);
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___0_result : &___0_result), SizeOf_TResult_tAEECA9E240B60E411DB52BC214D8EEB1A6C7C678);
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_mF395D7774F2ADB85151FF4EDD37C2A9FAB1001E3(L_2, (bool)0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_3, L_0, SizeOf_TResult_tAEECA9E240B60E411DB52BC214D8EEB1A6C7C678): *(void**)L_0), ((int32_t)16384), L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* AttributeHelperEngine_GetCustomAttributeOfType_TisIl2CppSharedGenericObject_mE7C17681F60005EB6A86B147D267540896EAFE09_gshared (Type_t* ___0_klass, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	Type_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	Il2CppSharedGenericObject* V_2 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = ___0_klass;
		Type_t* L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
		L_4 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(13, L_2, L_3, (bool)1);
		V_1 = L_4;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_1;
		if (!(((RuntimeArray*)L_6)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_1;
		int32_t L_8 = 0;
		RuntimeObject* L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0024:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_10 = V_2;
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoCompletePathVisitor_Unity_Properties_IListPropertyVisitor_Visit_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD19A03829F30D4FF76FA8D8A8FFEF57403B66195_fshared (AutoCompletePathVisitor_tF0F2FA82B3F3666F724C75CF0B95E4A420243B15* __this, Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* ___0_property, Il2CppFullySharedGenericAny* ___1_container, Il2CppFullySharedGenericAny* ___2_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___2_list;
		il2cpp_codegen_initobj((&V_0), sizeof(VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE));
		VisitParameters_tF21AC3343F90A7925EEA69AA73269B7F2DCE66CE L_1 = V_0;
		bool L_2;
		L_2 = PropertyContainer_TryAccept_TisIl2CppFullySharedGenericAny_m1B11483698339D3A0D40CD7247EE834DA473E24A(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* ArraySortHelper_2_get_Default_mDA1AE59CEB66F5EC4B5C6DCEA30CE0E5EF4E83DE_fshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit);
	{
		CHECKED_LOCAL_INIT(ArraySortHelper_2_tE8A8BD84B9DFAA4BBC7CEC609355C93A366542A3_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)),il2cpp_codegen_runtime_class_init_inline);
		ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3* L_0 = ((ArraySortHelper_2_tCE663C69DD426C08339DFB6EE96F4AEB0E38BBF3_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))->___s_defaultArraySortHelper;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_fshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18;
		return (int32_t)L_0;
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
