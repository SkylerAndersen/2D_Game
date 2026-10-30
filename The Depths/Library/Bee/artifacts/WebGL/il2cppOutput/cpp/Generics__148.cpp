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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};

struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB;
struct Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_3_tE1AD91FE372D9C6B31ABAC66ACBD90666BBFC8FE;
struct TransitionEventsFrameState_t8D1B34EA9763728C729B75B283EA3617A2AAAE26;
struct EmptyDataU5BU5D_t04C37E9E4610BD5AD506FBF44A70B67094BD830F;
struct StyleDataU5BU5D_tD9E457626AC4613246F0BBE7C5F1B5EF6A50D30C;
struct TimingDataU5BU5D_tB59614EDFD456A9D0C50D5E4B6DFAEF1C9B0606E;
struct BackgroundPositionU5BU5D_t3A9A1E8B7AC3D805C5B076C9A84B5156D7201E9C;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct FontAsset_t61A6446D934E582651044E33D250EA8D306AB958;
struct IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct TextSettings_tB7F55685AFFD4A96F714427BCACFD6958E357D64;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377;
struct IPayload_t623870586E14855228EEC736B1D2476DCFDA4C78;
struct ElementNode_t0FB668642775C4165D05996597C0A94C68BF5AE5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
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
struct Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24  : public RuntimeObject
{
};
struct AnimationDataSet_2_t9FD04DD5C0CD3B6180092DE7676DDC756FC786AF 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	EmptyDataU5BU5D_t04C37E9E4610BD5AD506FBF44A70B67094BD830F* ___timing;
	BackgroundPositionU5BU5D_t3A9A1E8B7AC3D805C5B076C9A84B5156D7201E9C* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct AnimationDataSet_2_t952F1EF82DC8F231554FB8F5319C6CEFE19C942F 
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___elements;
	StylePropertyIdU5BU5D_t6A118EB2D7976A5AE0C4E89D3F53D4454EC7E359* ___properties;
	TimingDataU5BU5D_tB59614EDFD456A9D0C50D5E4B6DFAEF1C9B0606E* ___timing;
	StyleDataU5BU5D_tD9E457626AC4613246F0BBE7C5F1B5EF6A50D30C* ___style;
	int32_t ___count;
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ___indices;
};
struct ValueTuple_2_t58F922754242CA7DD28E75FAD3302597DBCB39EF 
{
	Volume_t7CAAEA22D7F13A50FAE114DE7A6986FEAC837377* ___Item1;
	float ___Item2;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBB886D48FE1B678C16C81FC8DD0FAD326AA60D96;
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829;
typedef Il2CppFullySharedGenericStruct ValueTuple_3_tB49E2E99DF93F3BB2968E9D245678D8623FF898E;
struct ValueTuple_3_t572F29F9771D9B8B871C0C91213509EE16360375 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct ValueTuple_3_t4A1CC840442E06150D6D2F469B8FB1A8A8E88BA2 
{
	TextSettings_tB7F55685AFFD4A96F714427BCACFD6958E357D64* ___Item1;
	FontAsset_t61A6446D934E582651044E33D250EA8D306AB958* ___Item2;
	int32_t ___Item3;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98;
typedef Il2CppFullySharedGenericStruct ValueTuple_4_tC84FAA888D71F1EEFA9404956966C93E7171155F;
struct ValueTuple_4_t1F73182D6C35AB70117495F0B2EDFBB466034CFA 
{
	uint8_t ___Item1;
	uint8_t ___Item2;
	uint8_t ___Item3;
	uint8_t ___Item4;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F;
typedef Il2CppFullySharedGenericStruct ValueTuple_5_t0372F0E081F7940A88ECA2C5C0C5EBCD0CCCEDD8;
typedef Il2CppFullySharedGenericStruct ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56;
struct AuthoringIdPath_t0F382E1C54088C760032BC63CC2B5DC9EFCB29FF 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___m_PathIds;
};
struct AuthoringIdPath_t0F382E1C54088C760032BC63CC2B5DC9EFCB29FF_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_PathIds;
};
struct AuthoringIdPath_t0F382E1C54088C760032BC63CC2B5DC9EFCB29FF_marshaled_com
{
	Il2CppSafeArray* ___m_PathIds;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E 
{
	int64_t ___Value;
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
struct EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD 
{
	uint32_t ____state;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
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
struct ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 
{
	uint32_t ____state;
};
struct TextureIdentifier_tA1CDC255400F534A6496877CC86C07B80C45A199 
{
	uint64_t ___value;
};
struct ValueTuple_2_t5B4B622CEA9C2B7D10F4CA817196A3E23C6C27FF 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Item1;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Item2;
};
struct ValueTuple_2_t05010CA1EDA09F02C7ADFC1E8C90141D6388EF26 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___Item2;
};
struct ValueTuple_2_t17C52585DB4A62738FC66EFB364F711F8FD236F6 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item2;
};
struct ValueTuple_2_t66C82960295DE11A5326D3FF7142662DC4C8C68A 
{
	TextureIdentifier_tA1CDC255400F534A6496877CC86C07B80C45A199 ___Item1;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___Item2;
};
struct ValueTuple_2_tB0B1814E9C893DAEE0C73C436B4EF75EDDA2C58D 
{
	ElementNode_t0FB668642775C4165D05996597C0A94C68BF5AE5* ___Item1;
	AuthoringIdPath_t0F382E1C54088C760032BC63CC2B5DC9EFCB29FF ___Item2;
};
struct ValueTuple_3_tFCE08B8569F9E16C6B098364F9CF710B901F71D3 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___Item1;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___Item2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___Item3;
};
struct ValueTuple_3_t0B34872478323DF7D99036588F9C4302DB1D93DC 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___Item3;
};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct Values_1_tF3ABACD3AB0725B73E28DB34A5F62F325AF44787  : public Values_t810A8E7A95A5716F91CE1BDC1EE3AD25FE329E24
{
	double ___m_CurrentTime;
	TransitionEventsFrameState_t8D1B34EA9763728C729B75B283EA3617A2AAAE26* ___m_CurrentFrameEventsState;
	TransitionEventsFrameState_t8D1B34EA9763728C729B75B283EA3617A2AAAE26* ___m_NextFrameEventsState;
	AnimationDataSet_2_t952F1EF82DC8F231554FB8F5319C6CEFE19C942F ___running;
	AnimationDataSet_2_t9FD04DD5C0CD3B6180092DE7676DDC756FC786AF ___completed;
};
struct BindingStatus_t72E69C73FEA899A1FE65BCA04E6B79E30157EB43 
{
	int32_t ___value__;
};
struct EventModifiers_tB9DEEF73F8FC4C312B8E0C34336C7D9C3023B270 
{
	int32_t ___value__;
};
struct EventSource_t395F7AD9932CE73777C8DB122DE6638A61AAA07E 
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
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct NavigationDeviceType_t848E9C4AEC98044C60FBD9CCF9A460289562D90C 
{
	int32_t ___value__;
};
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct StylePropertyId_tA3B8A5213F5BA43F9C5443B27B165D744713BE69 
{
	int32_t ___value__;
};
struct TextEditOp_tE72D8D20A659F09B65139B604442E5A70F848B58 
{
	int32_t ___value__;
};
struct TextSelectOp_tA7F70185F9205EE9DEF86DC6929C73768D165F43 
{
	int32_t ___value__;
};
struct VisitReturnCode_t795FEB928E847C526F470080AA94B33FAC60BC75 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct VisualElementTransformFlags_t47F836489394ED28F75EAD7C76A8F70FAB5E4A10 
{
	int32_t ___value__;
};
struct MessageType_t4D4BB9B792D5A93B6925CEE30CECB29566AD7A94 
{
	uint8_t ___value__;
};
struct Direction_t7783E528E50FAB7F36720CD0F263B96ED3DE80F8 
{
	int32_t ___value__;
};
struct Button_tA3E7AF5F245F630CB38476BAB013B509F53B35B8 
{
	uint32_t ___value__;
};
struct Type_tAD126B1DC1FD450FB4C782B18131374A55C28858 
{
	int32_t ___value__;
};
struct ValueTuple_2_t7A4FFDCA55C90C3CB7E54BA96E1C12C169FE279F 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t4C3654491F7ADC0ACBB35A70F3152176BF3DBF1B 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t4EC9E7926C32073000FAA1B453C82EB5986A46FA 
{
	uint8_t ___Item1;
	IPayload_t623870586E14855228EEC736B1D2476DCFDA4C78* ___Item2;
};
struct ValueTuple_3_t22BABBE36DE20DCD0EDCC1F5869D8BF7D038118D 
{
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___Item1;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___Item2;
	bool ___Item3;
};
struct ValueTuple_3_t0BA61ADA40088E1EDBB94632E85DE22C837DBFA6 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct ValueTuple_3_t7B77074A02A5A178E0792CA2F0C1F97CF1877D40 
{
	int32_t ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct ValuesDiscrete_1_t79FB155DB9750C67CFBBDBC7C64736D03F518776  : public Values_1_tF3ABACD3AB0725B73E28DB34A5F62F325AF44787
{
	Func_3_tE1AD91FE372D9C6B31ABAC66ACBD90666BBFC8FE* ___U3CSameFuncU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB 
{
	int32_t ___U3CstatusU3Ek__BackingField;
	String_t* ___U3CmessageU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB_marshaled_pinvoke
{
	int32_t ___U3CstatusU3Ek__BackingField;
	char* ___U3CmessageU3Ek__BackingField;
};
struct BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB_marshaled_com
{
	int32_t ___U3CstatusU3Ek__BackingField;
	Il2CppChar* ___U3CmessageU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	bool ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___worldOrientation;
	float ___maxDistance;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 
{
	int32_t ___U3CkeyU3Ek__BackingField;
	int32_t ___U3CmodifiersU3Ek__BackingField;
};
struct ValueTuple_2_t059A8AD33AE237A7BFC276D757CE4C0F5F8B2009 
{
	KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t21F35A829693C22937C9C3D3FFD4C302B4AE8392 
{
	KeyEvent_tCBB9830C9FA6B909A5A6BD122FF4B532126E7674 ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_3_t1536A77A555C2C5C32D511E001F89963A564B2B2 
{
	bool ___Item1;
	int32_t ___Item2;
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___Item3;
};
struct ValueTuple_3_t7710F86A623C8F578E76B4EAC47B05AA6EFE7B64 
{
	PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ___Item1;
	int32_t ___Item2;
	float ___Item3;
};
struct ValueTuple_4_t3F8C71A2E0F0EE198DA1968B4EA9B8BDA3DD9F6F 
{
	bool ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
	BindingResult_t8B7B654A3357F5E8F5B0E4CB4AB9076B5FE0A4FB ___Item4;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB_StaticFields
{
	Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
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
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_fshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared (const RuntimeMethod* method) ;

inline bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829, const RuntimeMethod*))ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_fshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, ___0_other, method);
}
inline bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_fshared)(__this, ___0_obj, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_fshared_inline)(method);
}
inline bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_fshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829, const RuntimeMethod*))ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_fshared)((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)__this, ___0_other, method);
}
inline int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_fshared)(__this, ___0_other, method);
}
inline Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290 (const RuntimeMethod* method)
{
	return ((  Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* (*) (const RuntimeMethod*))Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290_fshared)(method);
}
inline int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_fshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
inline int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, const RuntimeMethod*))ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_fshared)(__this, method);
}
inline int32_t ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429 (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429_fshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, RuntimeObject*, const RuntimeMethod*))ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_fshared)(__this, ___0_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
inline String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*, const RuntimeMethod*))ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_fshared)(__this, method);
}
inline bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98, const RuntimeMethod*))ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_fshared)((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)__this, ___0_other, method);
}
inline bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_fshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98, const RuntimeMethod*))ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_fshared)((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)__this, ___0_other, method);
}
inline int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_fshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_fshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, const RuntimeMethod* method) ;
inline int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, const RuntimeMethod*))ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_fshared)(__this, method);
}
inline int32_t ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642_fshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, RuntimeObject*, const RuntimeMethod*))ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_fshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744 (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*, const RuntimeMethod*))ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_fshared)(__this, method);
}
inline bool ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F, const RuntimeMethod*))ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92_fshared)((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)__this, ___0_other, method);
}
inline bool ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E_fshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F, const RuntimeMethod*))ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23_fshared)((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)__this, ___0_other, method);
}
inline int32_t ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8_fshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C_fshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m863E563B61FAA1177BECF19EE331D5B8574C5813 (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, const RuntimeMethod* method) ;
inline int32_t ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, const RuntimeMethod*))ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828_fshared)(__this, method);
}
inline int32_t ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77_fshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828_fshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4 (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*, const RuntimeMethod*))ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4_fshared)(__this, method);
}
inline bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56, const RuntimeMethod*))ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_fshared)((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)__this, ___0_other, method);
}
inline bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_fshared)(__this, ___0_obj, method);
}
inline bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_fshared)(__this, ___0_other, ___1_comparer, method);
}
inline int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56, const RuntimeMethod*))ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_fshared)((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)__this, ___0_other, method);
}
inline int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_fshared)(__this, ___0_other, method);
}
inline int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_fshared)(__this, ___0_other, ___1_comparer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A (int32_t ___0_h1, int32_t ___1_h2, int32_t ___2_h3, int32_t ___3_h4, int32_t ___4_h5, const RuntimeMethod* method) ;
inline int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, const RuntimeMethod*))ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_fshared)(__this, method);
}
inline int32_t ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A_fshared)(__this, ___0_comparer, method);
}
inline int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_fshared)(__this, ___0_comparer, method);
}
inline String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814 (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*, const RuntimeMethod*))ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_fshared)(__this, method);
}
inline EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_mF50863260964D9553ECFD6B8D81059A734FCB781_fshared)(method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_2__ctor_mCAE8E725F680FA6BE2C23B9686C9F6056BB7E5CD_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_3;
		L_3 = ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085(__this, il2cpp_codegen_memcpy(L_2, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_m691065991CED657BB7925B16C9C654A09F3292DA(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_7 = L_2;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8));
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_Equals_mD903BBEBB3EDB6897C67C462F1A958D28E156085(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_6 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_13 = L_6;
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 V_0 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	memset(V_0, 0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_004f;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		return L_16;
	}

IL_004f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_Equals_m4FC09D4CA21099E02F8DA2E9E2DAC07DADDE7596(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_9 = L_2;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7(__this, il2cpp_codegen_memcpy(L_9, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_IComparable_CompareTo_mF8C76C36693FDDA83BE43D8D76A91386E69A9959(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_9 = L_2;
	int32_t V_0 = 0;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_7;
		L_7 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_10: *(void**)L_10));
		return L_11;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7_AdjustorThunk (RuntimeObject* __this, ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_CompareTo_mD4B10342200C73FAA0E7553433244862FFF316D7(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_2 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_12 = L_2;
	const ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 L_21 = L_2;
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829 V_0 = alloca(SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	memset(V_0, 0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829)(ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0060:
	{
		RuntimeObject* L_18 = ___1_comparer;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_2_tC7B9333D1459F4ADDD9AFB5797D9C3B9DB29D30E);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		return L_24;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralComparable_CompareTo_mBE4DB6C73A3970373B450757CC80C03D318C4269(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(V_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(V_1, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(G_B2_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(G_B6_0, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_10);
		if (L_11)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = G_B4_0;
	}
	{
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		int32_t L_20;
		L_20 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(G_B8_1, G_B8_0, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_GetHashCode_m4BA7B2997C6450C829DC80A188E4DD22AE712A75(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_2_System_Collections_IStructuralEquatable_GetHashCode_mFF86F83A0C3ECE4DBC8519A067043F2670CBAF0C(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_2_GetHashCodeCore_m67662E6D7F40D4FD382E0E75F15CEC0B7FDDB429_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		int32_t L_8;
		L_8 = ValueTuple_CombineHashCodes_m2D43C63CBCA764CB776E226D45576A52AC3A5F97(L_3, L_7, NULL);
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_fshared (ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(V_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(V_1, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	memset(G_B2_0, 0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	memset(G_B6_0, 0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tE1DA9197D862F1998E9CB90258386A839EF6A666);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007a;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t5722451F39AAC429B4CC8192713724546548FB11);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_26;
		L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_25, NULL);
		return L_26;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_2_tBAA1E1D7D97D80E0EBA7FE8773B1FF409AEA3829>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_2_ToString_m3A385F535CA53166311E733E7699676231CFD10F(_thisAdjusted, method);
	return _returnValue;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_3__ctor_mAB800E7134D8E52646FD55A8B2979AC908028759_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? ___2_item3 : &___2_item3), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_3;
		L_3 = ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4(__this, il2cpp_codegen_memcpy(L_2, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_m31C947DE700D3842AA28795E512D50FE1E505820(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_7 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_12 = L_2;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_13: *(void**)L_13));
		return L_14;
	}

IL_0047:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_Equals_m1716966B94A34CEFBA3FCB15F00A3DE34CF167B4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_6 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_13 = L_6;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_20 = L_6;
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 V_0 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	memset(V_0, 0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_006d;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_18);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(L_20, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_21);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		return L_23;
	}

IL_006d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_Equals_m3F5FEF37FD4F019408802635862595B7C9A633DB(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_9 = L_2;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377(__this, il2cpp_codegen_memcpy(L_9, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_IComparable_CompareTo_mFB7A9AF6B4FE4D8FAB3B464AC27C78B9B8CA8725(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_9 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_16 = L_2;
	int32_t V_0 = 0;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_7;
		L_7 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_10: *(void**)L_10));
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_14;
		L_14 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_16, ___0_other, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_17: *(void**)L_17));
		return L_18;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377_AdjustorThunk (RuntimeObject* __this, ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_CompareTo_m4C3E08414A848EC10D70182B7471304542521377(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_2 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_12 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_21 = L_2;
	const ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 L_30 = L_2;
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98 V_0 = alloca(SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	memset(V_0, 0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98)(ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0060:
	{
		RuntimeObject* L_18 = ___1_comparer;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}

IL_0082:
	{
		RuntimeObject* L_27 = ___1_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_28);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_ValueTuple_3_tDE4F3C5EBA1AA6F0C63495C2B0A7F47CA8B4DA6D);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_27, L_29, L_32);
		return L_33;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralComparable_CompareTo_m0EAD982A014687A521C863B33102049D6042380B(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_22 = L_20;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(V_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(V_1, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(V_2, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(G_B2_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(G_B6_0, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(G_B10_0, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_10);
		if (L_11)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = G_B4_0;
	}
	{
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_21 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_20);
		if (L_21)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		il2cpp_codegen_memcpy(L_22, G_B9_0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(V_2, L_22, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_23);
		if (L_24)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17), (void*)G_B11_0, &L_26, L_25);
		typedef int32_t ( *func_L_28)(void*,const RuntimeMethod*);
		int32_t L_29 = ((func_L_28)L_27)(L_26.thisPtr,L_26.method);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		int32_t L_30;
		L_30 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(G_B12_2, G_B12_1, G_B12_0, NULL);
		return L_30;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_GetHashCode_m895E8857672E5454D68082DD0A8752865D8E71FC(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_3_System_Collections_IStructuralEquatable_GetHashCode_m23E4A5E0CD82CE6A0C844FBFAAC98A510810E98A(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_3_GetHashCodeCore_m33A8FA4704589007BFD95252E15C89CFDC3D7642_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		int32_t L_12;
		L_12 = ValueTuple_CombineHashCodes_mA282AB8367E72AAC2CD03794350EEDF885DBC3D9(L_3, L_7, L_11, NULL);
		return L_12;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_fshared (ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	const Il2CppFullySharedGenericAny L_29 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(V_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(V_1, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(V_2, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	memset(G_B2_0, 0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	memset(G_B6_0, 0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	memset(G_B10_0, 0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tBC720C36AD805FA5DB312B4F4F6EA7FCD0B8CB60);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0045;
	}

IL_003a:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0045:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007a;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007a;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tF18BC33782A28B818FF07972258CDAA30E5C8BAA);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0085;
	}

IL_007a:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0085:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_28 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_27);
		if (L_28)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = 5;
			G_B11_2 = L_26;
			G_B11_3 = L_26;
			goto IL_00ba;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = 5;
		G_B9_2 = L_26;
		G_B9_3 = L_26;
	}
	{
		il2cpp_codegen_memcpy(L_29, G_B9_0, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		il2cpp_codegen_memcpy(L_30, V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_30);
		if (L_31)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00ba;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t0F612E67C437973C5E601367F19AA9245240E29A);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c5;
	}

IL_00ba:
	{
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21), (void*)G_B11_0, &L_33, L_32);
		typedef String_t* ( *func_L_35)(void*,const RuntimeMethod*);
		String_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c5:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = G_B12_3;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_38;
		L_38 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_37, NULL);
		return L_38;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_3_t182F852EE39DD805E380FD93762C931C933ACE98>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_3_ToString_m9995C56C122AEC521C9BF4AD9C00A1498AA26744(_thisAdjusted, method);
	return _returnValue;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_mFF0D3A69E30DE69A5DB3A2559A8901F1E9851FCB_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? ___2_item3 : &___2_item3), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? ___3_item4 : &___3_item4), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_2 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_3;
		L_3 = ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92(__this, il2cpp_codegen_memcpy(L_2, (((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F)(ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_4_Equals_mB24DD728F77D42F7BA367887EE8BCC1AEAC2B86E(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_2 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_7 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_12 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_17 = L_2;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_15;
		L_15 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_17, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		bool L_19;
		L_19 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_18: *(void**)L_18));
		return L_19;
	}

IL_005f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92_AdjustorThunk (RuntimeObject* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_4_Equals_mA6E7E6D2B61BCEE388C695E55241E3D23B136E92(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_6 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_13 = L_6;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_20 = L_6;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_27 = L_6;
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F V_0 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	memset(V_0, 0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F)(ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_18);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(L_20, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_21);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		if (!L_23)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_24 = ___1_comparer;
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_25);
		il2cpp_codegen_memcpy(L_27, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(L_27, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_28);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_24, L_26, L_29);
		return L_30;
	}

IL_008b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m88F5EA4CCB9B7F414EB6FE747DCDBDC088459208(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_2 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_9 = L_2;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23(__this, il2cpp_codegen_memcpy(L_9, (((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F)(ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_IComparable_CompareTo_m9B7539113D2B5D30818A1A60D51E010B7DBE1BD8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_2 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_9 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_16 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_23 = L_2;
	int32_t V_0 = 0;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_7;
		L_7 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_10: *(void**)L_10));
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_14;
		L_14 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_16, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_17: *(void**)L_17));
		V_0 = L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0054:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_21;
		L_21 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_23, ___0_other, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_field_data_pointer(L_23, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		int32_t L_25;
		L_25 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_24: *(void**)L_24));
		return L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23_AdjustorThunk (RuntimeObject* __this, ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F ___0_other, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_CompareTo_mFD48E2AA15064CAC797A24D6595473A41F755F23(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_2 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_12 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_21 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_30 = L_2;
	const ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F L_39 = L_2;
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F V_0 = alloca(SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	memset(V_0, 0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F)(ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0060:
	{
		RuntimeObject* L_18 = ___1_comparer;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}

IL_0082:
	{
		RuntimeObject* L_27 = ___1_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_28);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_27, L_29, L_32);
		V_1 = L_33;
		int32_t L_34 = V_1;
		if (!L_34)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_35 = V_1;
		return L_35;
	}

IL_00a4:
	{
		RuntimeObject* L_36 = ___1_comparer;
		il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_37);
		il2cpp_codegen_memcpy(L_39, V_0, SizeOf_ValueTuple_4_t01564ECE4FEBA521A3AE9E6A1274E6D48F137BD3);
		il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_field_data_pointer(L_39, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_40);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_36, L_38, L_41);
		return L_42;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_m8EFEB9D7B5790959B79D8E53DD14DB1A038C304C(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_22 = L_20;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_32 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	memset(V_0, 0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	memset(V_1, 0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	memset(V_2, 0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	memset(V_3, 0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	memset(G_B2_0, 0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	memset(G_B6_0, 0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	memset(G_B10_0, 0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	memset(G_B14_0, 0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_10);
		if (L_11)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = G_B4_0;
	}
	{
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		bool L_21 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_20);
		if (L_21)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		il2cpp_codegen_memcpy(L_22, G_B9_0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(V_2, L_22, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_23);
		if (L_24)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21), (void*)G_B11_0, &L_26, L_25);
		typedef int32_t ( *func_L_28)(void*,const RuntimeMethod*);
		int32_t L_29 = ((func_L_28)L_27)(L_26.thisPtr,L_26.method);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_30, V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_30);
		if (L_31)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}
	{
		il2cpp_codegen_memcpy(L_32, G_B13_0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(V_3, L_32, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_33, V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		bool L_34 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_33);
		if (L_34)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		Il2CppConstrainedCallData L_36;
		Il2CppMethodPointer L_37 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22), (void*)G_B15_0, &L_36, L_35);
		typedef int32_t ( *func_L_38)(void*,const RuntimeMethod*);
		int32_t L_39 = ((func_L_38)L_37)(L_36.thisPtr,L_36.method);
		G_B16_0 = L_39;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		int32_t L_40;
		L_40 = ValueTuple_CombineHashCodes_m863E563B61FAA1177BECF19EE331D5B8574C5813(G_B16_3, G_B16_2, G_B16_1, G_B16_0, NULL);
		return L_40;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_GetHashCode_mD228930A54E53FF9E9F3370361B0D81F05BBB828(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_mE44B3DB721B4562AA53675B76D454998D8883828(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCodeCore_m5E8ECC19294F8DFC3FBEA99FFC32F0D41D5FBA77_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		RuntimeObject* L_12 = ___0_comparer;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_14);
		int32_t L_16;
		L_16 = ValueTuple_CombineHashCodes_m863E563B61FAA1177BECF19EE331D5B8574C5813(L_3, L_7, L_11, L_15, NULL);
		return L_16;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4_fshared (ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	void* L_44 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_29 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	const Il2CppFullySharedGenericAny L_41 = L_39;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	memset(V_0, 0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	memset(V_1, 0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	memset(V_2, 0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	memset(V_3, 0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	memset(G_B2_0, 0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	memset(G_B6_0, 0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	memset(G_B10_0, 0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	memset(G_B14_0, 0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_tEE8373CE6408F152B50336CB2AFE2E38E63553CE);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007b;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_tB9127406C838ED6B8A5EA8342401DFC820097009);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		bool L_28 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_27);
		if (L_28)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = 5;
			G_B11_2 = L_26;
			G_B11_3 = L_26;
			goto IL_00bb;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = 5;
		G_B9_2 = L_26;
		G_B9_3 = L_26;
	}
	{
		il2cpp_codegen_memcpy(L_29, G_B9_0, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		il2cpp_codegen_memcpy(L_30, V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_30);
		if (L_31)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4E250E541243A2930F92EAD44627209777A6F2BF);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26), (void*)G_B11_0, &L_33, L_32);
		typedef String_t* ( *func_L_35)(void*,const RuntimeMethod*);
		String_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = G_B12_3;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_39, V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		bool L_40 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_39);
		if (L_40)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
			G_B15_1 = 7;
			G_B15_2 = L_38;
			G_B15_3 = L_38;
			goto IL_00fb;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
		G_B13_1 = 7;
		G_B13_2 = L_38;
		G_B13_3 = L_38;
	}
	{
		il2cpp_codegen_memcpy(L_41, G_B13_0, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(V_3, L_41, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		il2cpp_codegen_memcpy(L_42, V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		bool L_43 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_42);
		if (L_43)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_tB350371A4A33C6AA2ACE0F39B8B259E107439569);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		Il2CppConstrainedCallData L_45;
		Il2CppMethodPointer L_46 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27), (void*)G_B15_0, &L_45, L_44);
		typedef String_t* ( *func_L_47)(void*,const RuntimeMethod*);
		String_t* L_48 = ((func_L_47)L_46)(L_45.thisPtr,L_45.method);
		G_B16_0 = L_48;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		(G_B16_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = G_B16_3;
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_50;
		L_50 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_49, NULL);
		return L_50;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_4_t8725FCE32886281FCF0441F1DAE319DADD76B78F>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_4_ToString_m05CC5E764EFAAE3D2796762E7A3B9729474CF8D4(_thisAdjusted, method);
	return _returnValue;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m137533B18C66876071676469953787BAFAA5AEFF_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, Il2CppFullySharedGenericAny ___3_item4, Il2CppFullySharedGenericAny ___4_item5, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___1_item2 : &___1_item2), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? ___2_item3 : &___2_item3), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? ___3_item4 : &___3_item4), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8), L_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? ___4_item5 : &___4_item5), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10), L_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	{
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		bool L_3;
		L_3 = ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9(__this, il2cpp_codegen_memcpy(L_2, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_mB9CD17DAD4FABF6412558E3A82BB15FE28160D82(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_7 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_12 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_17 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_22 = L_2;
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_0;
		L_0 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_4;
		L_4 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_5;
		L_5 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		il2cpp_codegen_memcpy(L_6, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_7, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(L_7, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_9;
		L_9 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_6: *(void**)L_6), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_12, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_14;
		L_14 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_13: *(void**)L_13));
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_15;
		L_15 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_17, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(L_17, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_19;
		L_19 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_16: *(void**)L_16), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_18: *(void**)L_18));
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_20;
		L_20 = EqualityComparer_1_get_Default_mA09C502B9197D9DD4E25A431E2C4BC5468631270_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_22, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_23, il2cpp_codegen_get_field_data_pointer(L_22, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_24;
		L_24 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_20, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_21: *(void**)L_21), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_23: *(void**)L_23));
		return L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m1BDE6D49AEE834527814FAEBE4534B414E1022A9(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_21 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_25 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_32 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_35 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_6 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_13 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_20 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_27 = L_6;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_34 = L_6;
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 V_0 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	memset(V_0, 0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	{
		RuntimeObject* L_0 = ___0_other;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_3 = ___1_comparer;
		il2cpp_codegen_memcpy(L_4, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_4);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_field_data_pointer(L_6, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_7);
		bool L_9;
		L_9 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_3, L_5, L_8);
		if (!L_9)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_10 = ___1_comparer;
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_11);
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(L_13, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_10, L_12, L_15);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_17 = ___1_comparer;
		il2cpp_codegen_memcpy(L_18, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_18);
		il2cpp_codegen_memcpy(L_20, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_21, il2cpp_codegen_get_field_data_pointer(L_20, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_22 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_21);
		bool L_23;
		L_23 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_17, L_19, L_22);
		if (!L_23)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_24 = ___1_comparer;
		il2cpp_codegen_memcpy(L_25, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_25);
		il2cpp_codegen_memcpy(L_27, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(L_27, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_28);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_24, L_26, L_29);
		if (!L_30)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_31 = ___1_comparer;
		il2cpp_codegen_memcpy(L_32, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_32);
		il2cpp_codegen_memcpy(L_34, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_35, il2cpp_codegen_get_field_data_pointer(L_34, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_36 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_35);
		bool L_37;
		L_37 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_31, L_33, L_36);
		return L_37;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m6220851574828DC96CE4C7E2D09213B84CA5C1FE(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_9 = L_2;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		int32_t L_10;
		L_10 = ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A(__this, il2cpp_codegen_memcpy(L_9, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 17));
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mA31E7015CC7DCBB59BA58FC44A74FB3ED5BBEF8F(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_24 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_29 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_9 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_16 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_23 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_30 = L_2;
	int32_t V_0 = 0;
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_0;
		L_0 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 18));
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_2, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_3, il2cpp_codegen_get_field_data_pointer(L_2, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)) ? L_3: *(void**)L_3));
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001c:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_7;
		L_7 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 19));
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_9, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(L_9, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		int32_t L_11;
		L_11 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_8: *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? L_10: *(void**)L_10));
		V_0 = L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0038:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_14;
		L_14 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 20));
		il2cpp_codegen_memcpy(L_15, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_16, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(L_16, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		int32_t L_18;
		L_18 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)) ? L_17: *(void**)L_17));
		V_0 = L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return L_20;
	}

IL_0054:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_21;
		L_21 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 21));
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_23, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_24, il2cpp_codegen_get_field_data_pointer(L_23, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		int32_t L_25;
		L_25 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_21, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_22: *(void**)L_22), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)) ? L_24: *(void**)L_24));
		V_0 = L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return L_27;
	}

IL_0070:
	{
		Comparer_1_tF59A960F33DD69C2CF0330F3FF6AD7828FF0F3FB* L_28;
		L_28 = Comparer_1_get_Default_m923F24BE1E2E8B01D8F2F9D26B8C0ED4B7CBA290(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 22));
		il2cpp_codegen_memcpy(L_29, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_30, ___0_other, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		int32_t L_32;
		L_32 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(6, L_28, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_29: *(void**)L_29), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)) ? L_31: *(void**)L_31));
		return L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A_AdjustorThunk (RuntimeObject* __this, ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 ___0_other, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_mC808DB0CE9EDE1F4B2C4D7382F3E57105940208A(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_19 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_37 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_46 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_49 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_2 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_12 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_21 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_30 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_39 = L_2;
	const ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 L_48 = L_2;
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56 V_0 = alloca(SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	memset(V_0, 0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return 1;
	}

IL_0005:
	{
		RuntimeObject* L_1 = ___0_other;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_1, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_memcpy(L_2, __this, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_2);
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type(L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3, L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), L_5, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0037:
	{
		RuntimeObject* L_8 = ___0_other;
		il2cpp_codegen_memcpy(V_0, (((ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56)(ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56*)UnBox(L_8, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)))), SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		RuntimeObject* L_9 = ___1_comparer;
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_11 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_10);
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(L_12, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_9, L_11, L_14);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if (!L_16)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_17 = V_1;
		return L_17;
	}

IL_0060:
	{
		RuntimeObject* L_18 = ___1_comparer;
		il2cpp_codegen_memcpy(L_19, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_20 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_19);
		il2cpp_codegen_memcpy(L_21, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(L_21, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_23 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_22);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_18, L_20, L_23);
		V_1 = L_24;
		int32_t L_25 = V_1;
		if (!L_25)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_26 = V_1;
		return L_26;
	}

IL_0082:
	{
		RuntimeObject* L_27 = ___1_comparer;
		il2cpp_codegen_memcpy(L_28, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_28);
		il2cpp_codegen_memcpy(L_30, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(L_30, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_31);
		int32_t L_33;
		L_33 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_27, L_29, L_32);
		V_1 = L_33;
		int32_t L_34 = V_1;
		if (!L_34)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_35 = V_1;
		return L_35;
	}

IL_00a4:
	{
		RuntimeObject* L_36 = ___1_comparer;
		il2cpp_codegen_memcpy(L_37, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_38 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_37);
		il2cpp_codegen_memcpy(L_39, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_40, il2cpp_codegen_get_field_data_pointer(L_39, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_41 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_40);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_36, L_38, L_41);
		V_1 = L_42;
		int32_t L_43 = V_1;
		if (!L_43)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_44 = V_1;
		return L_44;
	}

IL_00c6:
	{
		RuntimeObject* L_45 = ___1_comparer;
		il2cpp_codegen_memcpy(L_46, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_47 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_46);
		il2cpp_codegen_memcpy(L_48, V_0, SizeOf_ValueTuple_5_t25CBC148656E3ACC2A136FE20FBBB109E8593794);
		il2cpp_codegen_memcpy(L_49, il2cpp_codegen_get_field_data_pointer(L_48, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_50 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_49);
		int32_t L_51;
		L_51 = InterfaceFuncInvoker2< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(0, IComparer_tE7497C3BE3F68A5A2DCEBF0DAD7D13D738FE7BAD_il2cpp_TypeInfo_var, L_45, L_47, L_50);
		return L_51;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_other, RuntimeObject* ___1_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_mF83475B1821A3AE012364E6215C27FFFF25A399E(_thisAdjusted, ___0_other, ___1_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	void* L_5 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_25 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	void* L_35 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)));
	void* L_45 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_12 = L_10;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_20 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_22 = L_20;
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_32 = L_30;
	const Il2CppFullySharedGenericAny L_33 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_40 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_42 = L_40;
	const Il2CppFullySharedGenericAny L_43 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(V_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(V_1, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(V_2, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(V_3, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(V_4, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(G_B2_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	int32_t G_B4_0 = 0;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(G_B6_0, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(G_B10_0, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(G_B14_0, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	Il2CppFullySharedGenericAny* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	Il2CppFullySharedGenericAny* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	Il2CppFullySharedGenericAny G_B18_0 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(G_B18_0, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_0, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		if (L_1)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			goto IL_002a;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
	}
	{
		il2cpp_codegen_memcpy(L_2, G_B1_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(V_0, L_2, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			goto IL_002a;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		Il2CppConstrainedCallData L_6;
		Il2CppMethodPointer L_7 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 23), (void*)G_B3_0, &L_6, L_5);
		typedef int32_t ( *func_L_8)(void*,const RuntimeMethod*);
		int32_t L_9 = ((func_L_8)L_7)(L_6.thisPtr,L_6.method);
		G_B4_0 = L_9;
	}

IL_0035:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_11 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_10);
		if (L_11)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = G_B4_0;
	}
	{
		il2cpp_codegen_memcpy(L_12, G_B5_0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(V_1, L_12, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_13, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_14 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_13);
		if (L_14)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		Il2CppConstrainedCallData L_16;
		Il2CppMethodPointer L_17 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 24), (void*)G_B7_0, &L_16, L_15);
		typedef int32_t ( *func_L_18)(void*,const RuntimeMethod*);
		int32_t L_19 = ((func_L_18)L_17)(L_16.thisPtr,L_16.method);
		G_B8_0 = L_19;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_20, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_21 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_20);
		if (L_21)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		il2cpp_codegen_memcpy(L_22, G_B9_0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(V_2, L_22, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_23, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_24 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_23);
		if (L_24)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		Il2CppConstrainedCallData L_26;
		Il2CppMethodPointer L_27 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 25), (void*)G_B11_0, &L_26, L_25);
		typedef int32_t ( *func_L_28)(void*,const RuntimeMethod*);
		int32_t L_29 = ((func_L_28)L_27)(L_26.thisPtr,L_26.method);
		G_B12_0 = L_29;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_30, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_30);
		if (L_31)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}
	{
		il2cpp_codegen_memcpy(L_32, G_B13_0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(V_3, L_32, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_33, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_34 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_33);
		if (L_34)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		Il2CppConstrainedCallData L_36;
		Il2CppMethodPointer L_37 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 26), (void*)G_B15_0, &L_36, L_35);
		typedef int32_t ( *func_L_38)(void*,const RuntimeMethod*);
		int32_t L_39 = ((func_L_38)L_37)(L_36.thisPtr,L_36.method);
		G_B16_0 = L_39;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_40, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_41 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_40);
		if (L_41)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
		G_B17_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
	}
	{
		il2cpp_codegen_memcpy(L_42, G_B17_0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(V_4, L_42, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_43, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_44 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_43);
		if (L_44)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
		il2cpp_codegen_memcpy(G_B18_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		Il2CppConstrainedCallData L_46;
		Il2CppMethodPointer L_47 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 27), (void*)G_B19_0, &L_46, L_45);
		typedef int32_t ( *func_L_48)(void*,const RuntimeMethod*);
		int32_t L_49 = ((func_L_48)L_47)(L_46.thisPtr,L_46.method);
		G_B20_0 = L_49;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_50;
		L_50 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(G_B20_4, G_B20_3, G_B20_2, G_B20_1, G_B20_0, NULL);
		return L_50;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_m7B00692478B9218079F0364A02363A500A3202B0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_comparer;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A(__this, L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 28));
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBA5888BE2DA308AEA1CCE2C0E702F5DF77975E7C(_thisAdjusted, ___0_comparer, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_mCAC2EA3BE3C748840BE08F742B272274BB7E171A_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, RuntimeObject* ___0_comparer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	{
		RuntimeObject* L_0 = ___0_comparer;
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_0, L_2);
		RuntimeObject* L_4 = ___0_comparer;
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_4, L_6);
		RuntimeObject* L_8 = ___0_comparer;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)), SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_8, L_10);
		RuntimeObject* L_12 = ___0_comparer;
		il2cpp_codegen_memcpy(L_13, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_12, L_14);
		RuntimeObject* L_16 = ___0_comparer;
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)), SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_17);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(1, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_16, L_18);
		int32_t L_20;
		L_20 = ValueTuple_CombineHashCodes_m60E50AC57049CAC8E58C145BDC9022989DD8BF4A(L_3, L_7, L_11, L_15, L_19, NULL);
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_fshared (ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const uint32_t SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const uint32_t SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const uint32_t SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
	const uint32_t SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)));
	void* L_20 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	void* L_32 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)));
	void* L_44 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)));
	void* L_56 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_5 = L_3;
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_17 = L_15;
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	const Il2CppFullySharedGenericAny L_27 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_29 = L_27;
	const Il2CppFullySharedGenericAny L_30 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	const Il2CppFullySharedGenericAny L_39 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_41 = L_39;
	const Il2CppFullySharedGenericAny L_42 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	const Il2CppFullySharedGenericAny L_51 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	const Il2CppFullySharedGenericAny L_53 = L_51;
	const Il2CppFullySharedGenericAny L_54 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(V_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(V_1, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(V_2, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	Il2CppFullySharedGenericAny V_3 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(V_3, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	Il2CppFullySharedGenericAny V_4 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(V_4, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	Il2CppFullySharedGenericAny* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	Il2CppFullySharedGenericAny* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	Il2CppFullySharedGenericAny G_B2_0 = alloca(SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	memset(G_B2_0, 0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	Il2CppFullySharedGenericAny* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B7_3 = NULL;
	Il2CppFullySharedGenericAny* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	Il2CppFullySharedGenericAny G_B6_0 = alloca(SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	memset(G_B6_0, 0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B8_3 = NULL;
	Il2CppFullySharedGenericAny* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	Il2CppFullySharedGenericAny* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	Il2CppFullySharedGenericAny G_B10_0 = alloca(SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	memset(G_B10_0, 0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B12_3 = NULL;
	Il2CppFullySharedGenericAny* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	Il2CppFullySharedGenericAny* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B13_3 = NULL;
	Il2CppFullySharedGenericAny G_B14_0 = alloca(SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	memset(G_B14_0, 0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	Il2CppFullySharedGenericAny* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B19_3 = NULL;
	Il2CppFullySharedGenericAny* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B17_3 = NULL;
	Il2CppFullySharedGenericAny G_B18_0 = alloca(SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	memset(G_B18_0, 0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
	int32_t G_B18_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B20_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_4 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_3);
		if (L_4)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
		G_B1_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))));
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
	}
	{
		il2cpp_codegen_memcpy(L_5, G_B1_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		il2cpp_codegen_memcpy(L_6, V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		bool L_7 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_6);
		if (L_7)
		{
			G_B3_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
		il2cpp_codegen_memcpy(G_B2_0, (Il2CppFullySharedGenericAny*)V_0, SizeOf_T1_t1DAF9B0DCADCC79CF41C2003E5C592942F805E50);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		Il2CppConstrainedCallData L_9;
		Il2CppMethodPointer L_10 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 29), (void*)G_B3_0, &L_9, L_8);
		typedef String_t* ( *func_L_11)(void*,const RuntimeMethod*);
		String_t* L_12 = ((func_L_11)L_10)(L_9.thisPtr,L_9.method);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		(G_B4_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B4_3;
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_15, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_16 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_15);
		if (L_16)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
			G_B7_1 = 3;
			G_B7_2 = L_14;
			G_B7_3 = L_14;
			goto IL_007b;
		}
		G_B5_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))));
		G_B5_1 = 3;
		G_B5_2 = L_14;
		G_B5_3 = L_14;
	}
	{
		il2cpp_codegen_memcpy(L_17, G_B5_0, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(V_1, L_17, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		bool L_19 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_18);
		if (L_19)
		{
			G_B7_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
		il2cpp_codegen_memcpy(G_B6_0, (Il2CppFullySharedGenericAny*)V_1, SizeOf_T2_t9E1D5C5A88209EFE3B28D44A8BE5D6688608BF24);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		Il2CppConstrainedCallData L_21;
		Il2CppMethodPointer L_22 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 30), (void*)G_B7_0, &L_21, L_20);
		typedef String_t* ( *func_L_23)(void*,const RuntimeMethod*);
		String_t* L_24 = ((func_L_23)L_22)(L_21.thisPtr,L_21.method);
		G_B8_0 = L_24;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		(G_B8_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = G_B8_3;
		(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_27, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_28 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_27);
		if (L_28)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
			G_B11_1 = 5;
			G_B11_2 = L_26;
			G_B11_3 = L_26;
			goto IL_00bb;
		}
		G_B9_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6)))));
		G_B9_1 = 5;
		G_B9_2 = L_26;
		G_B9_3 = L_26;
	}
	{
		il2cpp_codegen_memcpy(L_29, G_B9_0, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(V_2, L_29, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		il2cpp_codegen_memcpy(L_30, V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_30);
		if (L_31)
		{
			G_B11_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
		il2cpp_codegen_memcpy(G_B10_0, (Il2CppFullySharedGenericAny*)V_2, SizeOf_T3_t4A7ECBCF15AA62D044B6039FFF640DD71AD40BDB);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		Il2CppConstrainedCallData L_33;
		Il2CppMethodPointer L_34 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 31), (void*)G_B11_0, &L_33, L_32);
		typedef String_t* ( *func_L_35)(void*,const RuntimeMethod*);
		String_t* L_36 = ((func_L_35)L_34)(L_33.thisPtr,L_33.method);
		G_B12_0 = L_36;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		(G_B12_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = G_B12_3;
		(L_37)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_37;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_39, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_40 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_39);
		if (L_40)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
			G_B15_1 = 7;
			G_B15_2 = L_38;
			G_B15_3 = L_38;
			goto IL_00fb;
		}
		G_B13_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)))));
		G_B13_1 = 7;
		G_B13_2 = L_38;
		G_B13_3 = L_38;
	}
	{
		il2cpp_codegen_memcpy(L_41, G_B13_0, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(V_3, L_41, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		il2cpp_codegen_memcpy(L_42, V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		bool L_43 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_42);
		if (L_43)
		{
			G_B15_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
		il2cpp_codegen_memcpy(G_B14_0, (Il2CppFullySharedGenericAny*)V_3, SizeOf_T4_t67AC00AF93B93F8979EEE590739A0DF4AAEE2EE3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		Il2CppConstrainedCallData L_45;
		Il2CppMethodPointer L_46 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 32), (void*)G_B15_0, &L_45, L_44);
		typedef String_t* ( *func_L_47)(void*,const RuntimeMethod*);
		String_t* L_48 = ((func_L_47)L_46)(L_45.thisPtr,L_45.method);
		G_B16_0 = L_48;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		(G_B16_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = G_B16_3;
		(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50 = L_49;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_51, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_52 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_51);
		if (L_52)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_50;
			G_B19_3 = L_50;
			goto IL_013f;
		}
		G_B17_0 = ((Il2CppFullySharedGenericAny*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10)))));
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_50;
		G_B17_3 = L_50;
	}
	{
		il2cpp_codegen_memcpy(L_53, G_B17_0, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(V_4, L_53, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		il2cpp_codegen_memcpy(L_54, V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		bool L_55 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_54);
		if (L_55)
		{
			G_B19_0 = ((Il2CppFullySharedGenericAny*)(Il2CppFullySharedGenericAny*)V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
		il2cpp_codegen_memcpy(G_B18_0, (Il2CppFullySharedGenericAny*)V_4, SizeOf_T5_t76A3327D5DFAE29A6A88ADC0A5DDC9720642E2AB);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		Il2CppConstrainedCallData L_57;
		Il2CppMethodPointer L_58 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 33), (void*)G_B19_0, &L_57, L_56);
		typedef String_t* ( *func_L_59)(void*,const RuntimeMethod*);
		String_t* L_60 = ((func_L_59)L_58)(L_57.thisPtr,L_57.method);
		G_B20_0 = L_60;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		(G_B20_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = G_B20_3;
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_62;
		L_62 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_61, NULL);
		return L_62;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ValueTuple_5_t475CC402836C42A6F9B8CC3957836128B8D95C56>(__this);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_m7265BEA8B1A29B537886BB6BEE00D1A154F8D814(_thisAdjusted, method);
	return _returnValue;
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
