#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774;
struct Dictionary_2_t8E76AA10F849EB48DC945DFABFCC4A6EDA4BAAB6;
struct Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E;
struct Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01;
struct Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8;
struct Dictionary_2_tC5FB811D06F447F815A6FCFE613E9262DAB781B5;
struct Dictionary_2_t3B57CAC20895EF5638DA97AE91F6FD26BB3FD4A4;
struct Dictionary_2_t25E7580BA3E8A4F13B53094DBF73C15539068508;
struct Dictionary_2_t709D7105D5569BDBF0FF382194083253754F55F9;
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
struct Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC;
struct Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574;
struct Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F;
struct Dictionary_2_tBFEAFC9FF937023051A137D629FBB38AB703E006;
struct Dictionary_2_tF154DCAF19313A7B074F480A22F36F7B53F336D7;
struct Dictionary_2_tC70953CD71221A554EF46EC00CCC93ED22D0675F;
struct IComparer_1_tCA720E7837F12C38065A4AB632B5FAAD19EC30AA;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
struct KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A;
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3;
struct SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5;
struct SortedList_2_tA18FBD9172637D697F682AF34E557F03BD711F3F;
struct SortedList_2_t9C81D0EB1AE55E2C8EE9A023519853D497059664;
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075;
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A;
struct ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633;
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
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
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* ____keys;
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* ____values;
	RuntimeObject* ____syncRoot;
};
struct Property_2_t47C8388EE41AF1EDAC8A05EBC46A2F35E533FA05  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t0260C631A257B7F5E29C000CE501E50E01D2C608  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t9058AC806316ECF9782813D5E08A6F972DADF792  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t2B8367E4AFD450369A1C4A948FEF0346C1DD7BC2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tFA7125D8D7A42B785B94542B1E5502A73E471EDF  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tFCABF76983A1F2F83D5E984504A47D09AC858895  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6CB8EB3271B7D0EBA1168969AB3FC903ACF7C0EB  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t7D95666C2782D91AF1F40A3784AB8803843C9E4E  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t8D3844A01C8488884742B51674148CCD00B60498  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t05A35F5BA827CDC64B24D4204877F690DEC27122  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tABD4B015CDA9B404753A44AB2EDEAA6F2688D6F0  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t504169948D5C15A8A8563665E2D9DF59C55F9CFF  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6ABA56748FEE71A79FBAE01510E00027922832EE  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4419370A2048DE8AC76462D5E519FE85923E0975  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t928287B4443D3165BD6ABAC2F647D24D780B7E96  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t16D3E4C17690E8487249E0D940C37C3015AF4435  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t1A130B3BA8D98EC8F41A6B7EF2EEA8E65FE64A04  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t6D7F427A414B99407E647090DF66F54AA00A5E8E  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC831322693F79D84BD6BC2E47565C269761A6D96  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tD6E4F1DAE2CCE3A0E7CF533A25BDD766F97FF7D7  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t8C5AC317E753BE254E702E465390BC88ED5EA5EF  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t2BA4BA208F043A4514DFF41129034BAD45C6DFA1  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t249CE4B867F549A0F75FEA235B5B25900516184F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t312FB8DE9763E066AE3D742386DB40BB3B6B27BD  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t3D00CDB6855AB592E4EBE8412738EFF75451FB62  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tFFB328322627D9FB1B5D79229966EE43135BFFD5  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t0ABEB68257A05E4AB739CC54A46DB2528866414E  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tA59D4C1206151D15B4A2CEF7FFE0FD01E621E57E  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tCAB4943E053F4A966AC56B79F1DB0143B463C8B5  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tF6FB2F4C8BD5E3A35F372F43E9D5033747856D39  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tEE747F0196EEEB10CC95A18372CF3F26961163C7  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t250892AD63EB16A4E4D889AB976DCE82A9AA949F  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC97B9506A8B0395C089F18C86276683C5E41A2E7  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tFCC4C94487F656CE4FFB98919493AE6DD10F4C40  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC3E27FEAC55530D8C4898AD6A2EA04019EB1FE90  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t4ED9A30B731146E464F9ED48AED61168AB710960  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tC976A94D21CDBB051DBC4F9D71A8D808F1E22EDC  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t90AB378281B10B6B57910452249B8C69A0E2C8CA  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t9C550DB46A63E7B079B78CA5712B37180BDF4C52  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t94E6BF4F27CA2F665907D2CEC1305FA3C6CC2891  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t3092763DE17475C541BDCFAABAAA574056DB0A10  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t5FD500B39E99040FA6543FB3B012B9704413163A  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t92813F81872EE449E98F481469B8086734248659  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE42806DDB53ABB380697212F485C40BD0617B059  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_t9E77F13D41000A2B84D60B32D019E2F26C8A40F8  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE478E097FAF5F3B42B0F2FC9613FB498235AFED2  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3  : public RuntimeObject
{
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___m_Attributes;
};
struct SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5 : public RuntimeObject {};
struct SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___keys;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___values;
	int32_t ____size;
	int32_t ___version;
	RuntimeObject* ___comparer;
	KeyList_tBA55251CB1A0A55ACA878F6428E4E3A81466445A* ___keyList;
	ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* ___valueList;
	RuntimeObject* ____syncRoot;
};
struct ValueCollection_t8F72227F132CDE68CB5AAEE6F94DD27B8F2C31E8  : public RuntimeObject
{
	Dictionary_2_t8E76AA10F849EB48DC945DFABFCC4A6EDA4BAAB6* ____dictionary;
};
struct ValueCollection_tACA6B8B1E15F4036AF38A8E7F02B1E61CA77CC7E  : public RuntimeObject
{
	Dictionary_2_tA0F0759ACFE489A515318F7FEC7C252100C65E0E* ____dictionary;
};
struct ValueCollection_t86F1197A7B6AEF1A8BDE1E9DE1F00C375921F8A0  : public RuntimeObject
{
	Dictionary_2_t29C8BF28A8478B079C61631B473BB09AF77C7D01* ____dictionary;
};
struct ValueCollection_t271A5045952D1D4ADCA653C7397D27178BF7B871  : public RuntimeObject
{
	Dictionary_2_t9E2CD61857E2645197B7279CE040480C40510DD8* ____dictionary;
};
struct ValueCollection_t049D21D244269142B709D29E6B9DE6AFD6EFA633  : public RuntimeObject
{
	Dictionary_2_tC5FB811D06F447F815A6FCFE613E9262DAB781B5* ____dictionary;
};
struct ValueCollection_t360EF1A3CE408BDA676A04467F863C5B6D6B170D  : public RuntimeObject
{
	Dictionary_2_t3B57CAC20895EF5638DA97AE91F6FD26BB3FD4A4* ____dictionary;
};
struct ValueCollection_tDF8958CDF293431D1071C051FD7C8E2357D702B5  : public RuntimeObject
{
	Dictionary_2_t25E7580BA3E8A4F13B53094DBF73C15539068508* ____dictionary;
};
struct ValueCollection_t09388557A76C67A5826B2502D326ED02B7D9E050  : public RuntimeObject
{
	Dictionary_2_t709D7105D5569BDBF0FF382194083253754F55F9* ____dictionary;
};
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40  : public RuntimeObject
{
	Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ____dictionary;
};
struct ValueCollection_t7527D79A0F67C44B360B51B5FEB47DACBC975266  : public RuntimeObject
{
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ____dictionary;
};
struct ValueCollection_t65B544B071475F1D6AA36F54F506E013AC0D137E  : public RuntimeObject
{
	Dictionary_2_t20D3FBF479F4FB227466705D2A6CB607B0AB35AC* ____dictionary;
};
struct ValueCollection_t68C95977A6405D46453CCCFD51F7CB3B90A6832D  : public RuntimeObject
{
	Dictionary_2_tF099D849028F7351B6B99091102D4A3417711574* ____dictionary;
};
struct ValueCollection_t6A97FB8D601D8DB0AEB18A1FA9C9B42007CB71FC  : public RuntimeObject
{
	Dictionary_2_t731456A92F8CDAA2E97323EC2790F375A9A6C71F* ____dictionary;
};
struct ValueCollection_tAB74EAFCBB4A141703DF78EC2259C15EBFFDC03B  : public RuntimeObject
{
	Dictionary_2_tBFEAFC9FF937023051A137D629FBB38AB703E006* ____dictionary;
};
struct ValueCollection_tA85CF213CC3534B4FED2E78337FFA344928197C1  : public RuntimeObject
{
	Dictionary_2_tF154DCAF19313A7B074F480A22F36F7B53F336D7* ____dictionary;
};
struct ValueCollection_tD8649936ED3B97D01B8447263D14A338476098D7  : public RuntimeObject
{
	Dictionary_2_tC70953CD71221A554EF46EC00CCC93ED22D0675F* ____dictionary;
};
struct ValueList_tC6C75E12271CE9C7D01699BF578EC09A16BC7E6A  : public RuntimeObject
{
	SortedList_2_tA18FBD9172637D697F682AF34E557F03BD711F3F* ____dict;
};
struct ValueList_t7DFFD21832AF344A997D07E4E13129EBB3FAF2D3  : public RuntimeObject
{
	SortedList_2_t9C81D0EB1AE55E2C8EE9A023519853D497059664* ____dict;
};
struct ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A  : public RuntimeObject
{
	SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ____dict;
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
typedef Il2CppFullySharedGenericStruct Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3;
typedef Il2CppFullySharedGenericStruct Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222;
struct ValueProperty_t3C93BDFE837A8612D93BF15487E2F8238161B331  : public Property_2_t47C8388EE41AF1EDAC8A05EBC46A2F35E533FA05
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t3893E9084AC26E0E595E4F6926AD2BF5198A0F5B  : public Property_2_t0260C631A257B7F5E29C000CE501E50E01D2C608
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t23A45D7CEB1F38812B5B8FB465DC173AA5BD5E49  : public Property_2_t9058AC806316ECF9782813D5E08A6F972DADF792
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t4029F89B9F4E0D4E1800CE6341F039292F8675A6  : public Property_2_t2B8367E4AFD450369A1C4A948FEF0346C1DD7BC2
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t101BF3644B90702033749BC438C9B895CC4BF0E9  : public Property_2_tFA7125D8D7A42B785B94542B1E5502A73E471EDF
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tB3817784219F102FD56D7F62E8C06E64E050BDA0  : public Property_2_tFCABF76983A1F2F83D5E984504A47D09AC858895
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t9C801F8994FD3DBF9A81E09AB0EEA0913BCA1BFB  : public Property_2_t6CB8EB3271B7D0EBA1168969AB3FC903ACF7C0EB
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tAAEE7824030790DFA39DA87CD7F0A3328BC2B7AF  : public Property_2_t7D95666C2782D91AF1F40A3784AB8803843C9E4E
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t7BF285F85AFEA9D81D6A3250C71D8FE3A6038BB0  : public Property_2_t8D3844A01C8488884742B51674148CCD00B60498
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t98828157D6FD8DE394389AE94E2464BD67FD786D  : public Property_2_t05A35F5BA827CDC64B24D4204877F690DEC27122
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tA204C76632635A314F6316CDE4501B17F855BCAB  : public Property_2_tABD4B015CDA9B404753A44AB2EDEAA6F2688D6F0
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t4F7C81D3D5508D47E3720FBBC6AFB2A54622175F  : public Property_2_t504169948D5C15A8A8563665E2D9DF59C55F9CFF
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t23770F131BE7AB0C723D9B3F6B4BD6F8906E9CE4  : public Property_2_t6ABA56748FEE71A79FBAE01510E00027922832EE
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t8424DE7C7E219174D6682B8A19A6D934C4021DEF  : public Property_2_t4419370A2048DE8AC76462D5E519FE85923E0975
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t62DAEF6134B03DDBDF7EC0B8E6F8C5DE0D8C3CEE  : public Property_2_t928287B4443D3165BD6ABAC2F647D24D780B7E96
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t0F7092E36AE866F3447D017911DB2718B362AC0D  : public Property_2_t16D3E4C17690E8487249E0D940C37C3015AF4435
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tB3C00292BCFBBE17FAA00CA5893811BA939D21D5  : public Property_2_t1A130B3BA8D98EC8F41A6B7EF2EEA8E65FE64A04
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t287AA1306545B77FAC5D5A82C694FCFC0547D1E6  : public Property_2_t6D7F427A414B99407E647090DF66F54AA00A5E8E
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t1AE8A767ED9A08163579BC72EE841865FD75C36D  : public Property_2_tC831322693F79D84BD6BC2E47565C269761A6D96
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t2BE22B7103A54558C3F177867AB8145B2CC4DCD7  : public Property_2_tD6E4F1DAE2CCE3A0E7CF533A25BDD766F97FF7D7
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t2476D310196A4B338E262DEF19FCAF01929C663B  : public Property_2_t8C5AC317E753BE254E702E465390BC88ED5EA5EF
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t6D51A07900668CB7C1827A91E6C9F7F0BF9C932A  : public Property_2_t2BA4BA208F043A4514DFF41129034BAD45C6DFA1
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t1546638F6F12BC48E53A473AEF042992C9DF9D47  : public Property_2_t249CE4B867F549A0F75FEA235B5B25900516184F
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t8F845DD8932841F0BDE6A18A01573796EF5FAA48  : public Property_2_t312FB8DE9763E066AE3D742386DB40BB3B6B27BD
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tDD840D73E42C5B8113378E5F4BF181FE3AF3613C  : public Property_2_t3D00CDB6855AB592E4EBE8412738EFF75451FB62
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t5BA94E821FE24F23CF0F3A3EC9EE10DADA8A1F63  : public Property_2_tFFB328322627D9FB1B5D79229966EE43135BFFD5
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t50C327352A5D2FDDC4DA7E59FAB5E3DBA78A946F  : public Property_2_t0ABEB68257A05E4AB739CC54A46DB2528866414E
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tC0B262109708BBF97DC66CE016EB1E9703CF0B2A  : public Property_2_tA59D4C1206151D15B4A2CEF7FFE0FD01E621E57E
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tA79CCA5B0F01956B6FCED803248A1CAB08AFBCFD  : public Property_2_tCAB4943E053F4A966AC56B79F1DB0143B463C8B5
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t68BB76008D383549414A408F562BCC65ED9942C0  : public Property_2_tF6FB2F4C8BD5E3A35F372F43E9D5033747856D39
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t7C191925F20B6112BB099E5475ECC2C2A418F926  : public Property_2_tEE747F0196EEEB10CC95A18372CF3F26961163C7
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t37D2A7A3B0ADE3BF553FED1A750B1C5D945C6483  : public Property_2_t250892AD63EB16A4E4D889AB976DCE82A9AA949F
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t6B85D3F714310187443163AEF5A8E1DD054A335A  : public Property_2_tC97B9506A8B0395C089F18C86276683C5E41A2E7
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tF3E7B346CAE0414CFF7F8C807D879F162B21CE57  : public Property_2_tFCC4C94487F656CE4FFB98919493AE6DD10F4C40
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t306CAD1CC921CC9F3FC731AE5D0FBF871C3D680E  : public Property_2_tC3E27FEAC55530D8C4898AD6A2EA04019EB1FE90
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tAB930E85A899CE733D6BC8F942B1FC6077E9CDE1  : public Property_2_t4ED9A30B731146E464F9ED48AED61168AB710960
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tC908155448A59A6CB85B37086B79E6CFF46E183F  : public Property_2_tC976A94D21CDBB051DBC4F9D71A8D808F1E22EDC
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t9A9413AAC45AA7753FAE709736B905E52C0D041D  : public Property_2_t90AB378281B10B6B57910452249B8C69A0E2C8CA
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tBD1F52A8573E665D1D3A454BBD93E7CDF966FE62  : public Property_2_t9C550DB46A63E7B079B78CA5712B37180BDF4C52
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t2C666D5BCD85639B05EBDFB609D3558C83B1EEFF  : public Property_2_t94E6BF4F27CA2F665907D2CEC1305FA3C6CC2891
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tF61841C2BE7AEDCCECBFE85A1E435486B2B5BEB3  : public Property_2_t3092763DE17475C541BDCFAABAAA574056DB0A10
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tD8E210EE89F297426D1F02753F9D89131258A072  : public Property_2_t5FD500B39E99040FA6543FB3B012B9704413163A
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t520073CDB871170A60D55B15B384C72AAF3C7B3A  : public Property_2_t92813F81872EE449E98F481469B8086734248659
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t24BF5A9E664C94581547E684CEFA332E2A02FF28  : public Property_2_tE42806DDB53ABB380697212F485C40BD0617B059
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t29DC76723E4CE039F679D9F5AEE872513FBEFACC  : public Property_2_t9E77F13D41000A2B84D60B32D019E2F26C8A40F8
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_tB18264287ACC6E34917574BEFBC0034E44CCE8AB  : public Property_2_tE478E097FAF5F3B42B0F2FC9613FB498235AFED2
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
struct ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633  : public Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3
{
	String_t* ___U3CNameU3Ek__BackingField;
	bool ___U3CIsReadOnlyU3Ek__BackingField;
};
typedef Il2CppFullySharedGenericStruct ValueTuple_1_t950E5118B1EDD6EF8B35C11D2C9BE11923F6076E;
typedef Il2CppFullySharedGenericStruct ValueTuple_2_tD1D71D8C14C95585BD6BFEDB88935DEFEBE4F5C1;
struct ValueTuple_2_tAC09A94984283F831036E5D9BFBAECBCBACE53AA 
{
	bool ___Item1;
	bool ___Item2;
};
struct ValueTuple_2_tC8CCAE1DDAC0B3D7328B4402277A92A81F4D9242 
{
	bool ___Item1;
	int64_t ___Item2;
};
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_tE3CBF4947E2EEAEB4DC6C2F7877FFDA4AFCF3FAD 
{
	int32_t ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct ValueTuple_2_tC3AECC35C8C5A0E0288CD2C3BFF250D56BFCAB6E 
{
	RTHandle_t135537761C47BC929F032B3C8F4D55EA1111B07B* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t13705BBD0E794D6A31530C74F7EDC4C1683246EA 
{
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___Item1;
	bool ___Item2;
};
struct ValueTuple_2_t9700044DDBCB472B3F3F6E8691934C35DCD8E798 
{
	float ___Item1;
	float ___Item2;
};
struct ValueTuple_2_tF34EACCF71A708BBFA7545E7D3A1298BB2019C7D 
{
	Type_t* ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t0249A48D0DEF819E523EFDD9D28D581BCAC50EA8 
{
	uint32_t ___Item1;
	uint32_t ___Item2;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 
{
	union
	{
		struct
		{
			uint64_t ___m_rawData;
		};
		uint8_t EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8__padding[8];
	};
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
struct IntPtr_t 
{
	void* ___m_value;
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
struct ByReference_1_tDDF129F0BC02430629D5CD253C681112F166BAD4 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct ValueTuple_2_t2213E297C2566AA4A7DCFBBE72C1DD9A274C79F7 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___Item1;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___Item2;
};
struct ValueTuple_2_tF84FEBD8A912F24572EFCF15570D16C3346CEB6E 
{
	RuntimeObject* ___Item1;
	ValueTuple_2_tF34EACCF71A708BBFA7545E7D3A1298BB2019C7D ___Item2;
};
struct ValueTuple_2_tDBCAC88C96635D7EB29EBE0C3BEA340F68D6DE4E 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___Item1;
	bool ___Item2;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
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
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct NativeTextInfo_t374114235115CC53DD8E337DD2ECB1EE4504FE19 
{
	intptr_t ___m_MeshInfosPtr;
	int32_t ___meshInfoCount;
	int32_t ___totalWidth;
	int32_t ___totalHeight;
	bool ___isElided;
	bool ___hasMultipleColors;
};
struct NativeTextInfo_t374114235115CC53DD8E337DD2ECB1EE4504FE19_marshaled_pinvoke
{
	intptr_t ___m_MeshInfosPtr;
	int32_t ___meshInfoCount;
	int32_t ___totalWidth;
	int32_t ___totalHeight;
	int32_t ___isElided;
	int32_t ___hasMultipleColors;
};
struct NativeTextInfo_t374114235115CC53DD8E337DD2ECB1EE4504FE19_marshaled_com
{
	intptr_t ___m_MeshInfosPtr;
	int32_t ___meshInfoCount;
	int32_t ___totalWidth;
	int32_t ___totalHeight;
	int32_t ___isElided;
	int32_t ___hasMultipleColors;
};
struct NavigationDeviceType_t848E9C4AEC98044C60FBD9CCF9A460289562D90C 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_t5F552AF06E38DEC5775B77F13C8783A895FCD086 
{
	int32_t ___value__;
};
struct ScopeTransitionType_t6E07CFC7F104E66937274EA67AF2704D03670F82 
{
	int32_t ___value__;
};
struct NativeArray_1_t2B4471482E751C734C9EED028082AD085BF00F4E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
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
struct Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 
{
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 ____pointer;
	int32_t ____length;
};
struct ValueTuple_2_tA3BB5B194D28DB4AFA9782833EFEA41AB34EFC22 
{
	int32_t ___Item1;
	Il2CppChar ___Item2;
};
struct ValueTuple_2_t48E149F77B3A8485E71D6B2031B29E7D67C04432 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t574B6BCEAD8D42DD3951CB8E7AE7E3687B044600 
{
	NativeTextInfo_t374114235115CC53DD8E337DD2ECB1EE4504FE19 ___Item1;
	bool ___Item2;
};
struct ValueTuple_2_t925C33637AABA7F7C2692FD105E0C00874C8C565 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t830CE206EC3AE35D63C87A86218FA8A287B7E282 
{
	int32_t ___Item1;
	int32_t ___Item2;
};
struct ValueTuple_2_t225725AC1D0F8A5AECD63C25426AEE2326B8342A 
{
	Type_t* ___Item1;
	int32_t ___Item2;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_VersionIndex;
	uint32_t ___m_Validity;
	int32_t ___m_Type;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct ValueListBuilder_1_t6FD822120F40721DF2404D457F44E0620BF20961 
{
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ____span;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueListBuilder_1_t05C7BEF0D12A72F4844DD484512F333C34580D4B 
{
	Span_1_t3C5DB525B005B1AC5A1F3BDD528900C5C7C7D316 ____span;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26 
{
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ____span;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13 
{
	Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ____span;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____arrayFromPool;
	int32_t ____pos;
};
struct ValueTuple_2_t8F90E4260FD13C8B4D6D19ACA23F88540DE8F056 
{
	NativeArray_1_t2B4471482E751C734C9EED028082AD085BF00F4E ___Item1;
	int32_t ___Item2;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	bool ___builtin;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___builtin;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com
{
	ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C ___handle;
	int32_t ___builtin;
};
struct ValueTuple_2_t441643900DE75EDC780AF50BC751CFA37BAA7C67 
{
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 ___Item1;
	int32_t ___Item2;
};
struct ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774_StaticFields
{
	ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* ___U3CSharedU3Ek__BackingField;
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
struct EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3  : public RuntimeArray
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE_fshared (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_fshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m07B10CD2540C75750331E4ABF3792B35FAF94F99_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_fshared_inline (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE_fshared (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6_fshared (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_mFCD86126D0C9043BB696B8FF5219C4508DE2BA67_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_m4786BBA84ADC1CF9A21AF8073F017C958B3292E0_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986_fshared (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE_fshared)(__this, ___0_dictionary, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
inline int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023 (int32_t ___0_resource, const RuntimeMethod* method) ;
inline bool Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46 (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46_fshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
inline void ValueCollection_CopyTo_m07B10CD2540C75750331E4ABF3792B35FAF94F99 (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method)
{
	((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, const RuntimeMethod*))ValueCollection_CopyTo_m07B10CD2540C75750331E4ABF3792B35FAF94F99_fshared)(__this, ___0_array, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline bool SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1 (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, Il2CppFullySharedGenericAny, const RuntimeMethod*))SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1_fshared)((SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*)__this, ___0_value, method);
}
inline int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
inline void SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE_fshared)((SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*)__this, ___0_index, il2cppRetVal, method);
}
inline void SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6 (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_sortedList, const RuntimeMethod* method)
{
	((  void (*) (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5*, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075*, const RuntimeMethod*))SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6_fshared)(__this, ___0_sortedList, method);
}
inline int32_t Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, Il2CppFullySharedGenericAny ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708_fshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline Il2CppFullySharedGenericAny* Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, const RuntimeMethod*))Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_fshared_inline)(__this, ___0_index, method);
}
inline int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline void ValueListBuilder_1_Grow_mFCD86126D0C9043BB696B8FF5219C4508DE2BA67 (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method)
{
	((  void (*) (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26*, const RuntimeMethod*))ValueListBuilder_1_Grow_mFCD86126D0C9043BB696B8FF5219C4508DE2BA67_fshared)(__this, method);
}
inline Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method)
{
	return ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, int32_t, int32_t, const RuntimeMethod*))Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_fshared_inline)(__this, ___0_start, ___1_length, method);
}
inline ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01 (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01_fshared)(___0_span, method);
}
inline ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline (const RuntimeMethod* method)
{
	return ((  ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* (*) (const RuntimeMethod*))ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_fshared_inline)(method);
}
inline Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8 (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8_fshared)(___0_array, method);
}
inline bool Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37 (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_destination, const RuntimeMethod* method)
{
	return ((  bool (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54, const RuntimeMethod*))Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37_fshared)(__this, ___0_destination, method);
}
inline void ValueListBuilder_1_Grow_m4786BBA84ADC1CF9A21AF8073F017C958B3292E0 (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method)
{
	((  void (*) (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13*, const RuntimeMethod*))ValueListBuilder_1_Grow_m4786BBA84ADC1CF9A21AF8073F017C958B3292E0_fshared)(__this, method);
}
inline void Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986 (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3* __this, const RuntimeMethod* method)
{
	((  void (*) (Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*, const RuntimeMethod*))Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
inline void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, Il2CppFullySharedGenericAny*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection__ctor_m382CBA779E83FEFFA62EDF7BF82EB0101BD7858E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(1, NULL);
	}

IL_000f:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_1 = ___0_dictionary;
		__this->____dictionary = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dictionary), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_GetEnumerator_m22BB9C6494A679370661D0B6DA1FA7EF744281EA_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222 L_1 = alloca(SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		memset(L_1, 0, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_CopyTo_m07B10CD2540C75750331E4ABF3792B35FAF94F99_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_22 = alloca(SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
	int32_t V_0 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_1 = NULL;
	int32_t V_2 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		int32_t L_1 = ___1_index;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = ___1_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0018;
		}
	}

IL_0013:
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0018:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = ___0_array;
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		int32_t L_7 = ___1_index;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_8 = __this->____dictionary;
		int32_t L_9;
		L_9 = Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E(L_8, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_9)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0030:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_10 = __this->____dictionary;
		int32_t L_11 = L_10->____count;
		V_0 = L_11;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_12 = __this->____dictionary;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_13 = L_12->____entries;
		V_1 = L_13;
		V_2 = 0;
		goto IL_0077;
	}

IL_004c:
	{
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_14 = V_1;
		int32_t L_15 = V_2;
		int32_t L_16 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_14)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = ___0_array;
		int32_t L_18 = ___1_index;
		int32_t L_19 = L_18;
		___1_index = ((int32_t)il2cpp_codegen_add(L_19, 1));
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_20 = V_1;
		int32_t L_21 = V_2;
		il2cpp_codegen_memcpy(L_22, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
		il2cpp_codegen_memcpy((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)), L_22, SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), (void**)(L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_19)), (void*)L_22);
	}

IL_0073:
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0077:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_0;
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_004c;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m618DD0B95EF664954E8642E05340971E449BD496_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m4D5D70A7E71A521B0CC07AE728D6F7CE15BF634E_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m60F2FC12A09222A69CE11D344E16D222797F549C_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)20), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m96852B0B0BAD5C0A9E004972475EDE03D1B0FE90_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)20), NULL);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m00E492D453DE9F24B31D0ACB0048DE740B2C1EA0_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	{
		ThrowHelper_ThrowNotSupportedException_mB51B0F3A42F31B455852E713F424D47333326023(((int32_t)20), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m71121C077381FD3EB3CC58A97BA578BAD3A2EA3B_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? ___0_item : &___0_item), SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
		bool L_2;
		L_2 = Dictionary_2_ContainsValue_m6DD06FB7A6641F460E175909EE58B3E7EF585F46(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5)) ? L_1: *(void**)L_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m60447823261642EB057BDD5F8E420AD15158E1B7_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222 L_1 = alloca(SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		memset(L_1, 0, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_IEnumerable_GetEnumerator_mDE2A3F43BD41FDDE0DBE76E55B6F9A250F386C6D_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222 L_1 = alloca(SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		memset(L_1, 0, SizeOf_Enumerator_tB04B808AE2767096E19AC62EE5BF84713A38D432);
		Enumerator__ctor_m53208E6BE0322FB9D8336F1303586341867496CE((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_System_Collections_ICollection_CopyTo_mE4968D276FEE90B732476798DC51887BA807F953_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5));
	const Il2CppFullySharedGenericAny L_31 = alloca(SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* V_3 = NULL;
	int32_t V_4 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		if ((!(((uint32_t)L_5) > ((uint32_t)L_7))))
		{
			goto IL_0035;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0035:
	{
		RuntimeArray* L_8 = ___0_array;
		int32_t L_9;
		L_9 = il2cpp_codegen_array_get_length(L_8);
		int32_t L_10 = ___1_index;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_11 = __this->____dictionary;
		int32_t L_12;
		L_12 = Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E(L_11, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, L_10))) >= ((int32_t)L_12)))
		{
			goto IL_0050;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0050:
	{
		RuntimeArray* L_13 = ___0_array;
		V_0 = ((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)IsInst((RuntimeObject*)L_13, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8)));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = V_0;
		if (!L_14)
		{
			goto IL_0063;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		int32_t L_16 = ___1_index;
		ValueCollection_CopyTo_m07B10CD2540C75750331E4ABF3792B35FAF94F99(__this, L_15, L_16, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return;
	}

IL_0063:
	{
		RuntimeArray* L_17 = ___0_array;
		V_1 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_17, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_1;
		if (L_18)
		{
			goto IL_0072;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_0072:
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_19 = __this->____dictionary;
		int32_t L_20 = L_19->____count;
		V_2 = L_20;
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_21 = __this->____dictionary;
		EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_22 = L_21->____entries;
		V_3 = L_22;
	}
	try
	{
		{
			V_4 = 0;
			goto IL_00bf_1;
		}

IL_008f_1:
		{
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_23 = V_3;
			int32_t L_24 = V_4;
			int32_t L_25 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_23)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 4));
			if ((((int32_t)L_25) < ((int32_t)0)))
			{
				goto IL_00b9_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = V_1;
			int32_t L_27 = ___1_index;
			int32_t L_28 = L_27;
			___1_index = ((int32_t)il2cpp_codegen_add(L_28, 1));
			EntryU5BU5D_tF740C626B28CBB6757BD70F46E0AFB6A991253E3* L_29 = V_3;
			int32_t L_30 = V_4;
			il2cpp_codegen_memcpy(L_31, il2cpp_codegen_get_field_data_pointer(((Entry_tAD243349EA527A379DEBDB334FC81949C709EBE3*)(L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 6)), SizeOf_TValue_t747DE34CC59208278D7F5170180DA19060802D90);
			RuntimeObject* L_32 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 5), L_31);
			ArrayElementTypeCheck (L_26, L_32);
			(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28), (RuntimeObject*)L_32);
		}

IL_00b9_1:
		{
			int32_t L_33 = V_4;
			V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
		}

IL_00bf_1:
		{
			int32_t L_34 = V_4;
			int32_t L_35 = V_2;
			if ((((int32_t)L_34) < ((int32_t)L_35)))
			{
				goto IL_008f_1;
			}
		}
		{
			goto IL_00ce;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c6;
		}
		throw e;
	}

CATCH_00c6:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_36 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00ce;
	}

IL_00ce:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueCollection_System_Collections_ICollection_get_SyncRoot_m1ABB030E21FDC64810D0F5E25A73C14542878812_fshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* L_0 = __this->____dictionary;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList__ctor_m26B1A0136B33A5686D5093849B8E4C1CE9DA03DE_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* ___0_dictionary, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = ___0_dictionary;
		__this->____dict = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dict), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_get_Count_m216AE4CF83818E243253A02E03C101D1E6C0627A_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		int32_t L_1 = L_0->____size;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_get_IsReadOnly_m11C29D7523381F622A906C14F1729A8A6AA778D9_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_System_Collections_ICollection_get_SyncRoot_mEDA7A9CD7CAEBB231859FDBEB8287DFCF374ADC0_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Add_mB6DE9EC7238D9705FB7811BEB56BC65F30BCEFEE_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Clear_m390D6B082322A97FE65493CD1B8D3CB554DEFBC1_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Contains_mB8D21A13D9841ECD058BC7EBB11999821C259090_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_value : &___0_value), SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
		bool L_2;
		L_2 = SortedList_2_ContainsValue_mBD30F79C40790E44BBFD3705E1911303FC126DD1(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? L_1: *(void**)L_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_CopyTo_mAFBC986D4F7C4C81729B343F07578556480E9188_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = L_0->___values;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		int32_t L_3 = ___1_arrayIndex;
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_4 = __this->____dict;
		int32_t L_5;
		L_5 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_4, NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_1, 0, (RuntimeArray*)L_2, L_3, L_5, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_System_Collections_ICollection_CopyTo_m83B950FFE063F3042627070B8A2C22E716965EC1_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeArray* L_1 = ___0_array;
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
	}
	try
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_4 = __this->____dict;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = L_4->___values;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_8 = __this->____dict;
		int32_t L_9;
		L_9 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_8, NULL);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, L_6, L_7, L_9, NULL);
		goto IL_004e;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_10 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_Insert_mBC54A26C6F0E399B3F561C6DF8F3B9D1C98FE966_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_get_Item_m5173E4BD7B02D382B2B32E0923229917AE3D9577_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		int32_t L_1 = ___0_index;
		SortedList_2_GetByIndex_m8F670B827EDAA9EEFB55A297CA13A7AB2CFF88BE(L_0, L_1, (Il2CppFullySharedGenericAny*)L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_set_Item_m869CA78BA9EB57420157D5E679471E2EA6C47026_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_GetEnumerator_m25BD80629D9760A9744D9B81158F18A85175C9E8_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* L_1 = (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6(L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueList_System_Collections_IEnumerable_GetEnumerator_m523835E68A649318005301E09B00A414C6798C03_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, const RuntimeMethod* method) 
{
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5* L_1 = (SortedListValueEnumerator_t39A1B476F6F388342C142E88A6AE50DA78AA4FB5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4));
		SortedListValueEnumerator__ctor_m49729BD3935CBB2BA5644074243E7BFD4FEF92D6(L_1, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueList_IndexOf_mE41B2A247869F447F7293C38E26EF6E9F89FA2FE_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
	{
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_0 = __this->____dict;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = L_0->___values;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? ___0_value : &___0_value), SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF);
		SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* L_3 = __this->____dict;
		int32_t L_4;
		L_4 = SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_inline(L_3, NULL);
		int32_t L_6;
		L_6 = Array_IndexOf_TisIl2CppFullySharedGenericAny_mA7F15146F50A93EE31005CC7C2C28B7DB0CE5708(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0)) ? il2cpp_codegen_memcpy(L_5, L_2, SizeOf_TValue_tEB96A977159351D0F21BC37F853A4450F0186BAF): *(void**)L_2), 0, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueList_Remove_mDBF6F9DC2C263661D737060644D556E089464BE7_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueList_RemoveAt_m779395C83FBE56171C283BDCB5EDA8979C14295C_fshared (ValueList_t15327CBA3C2CCB5E21E15F51D1738CA283521D5A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4BF6BE20E7F21F6ABBCCCC9C9616F2820A3C5432)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1__ctor_mAFC9E903F63FD93D370EC5A4BE96A53F3778256B_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_initialSpan, const RuntimeMethod* method) 
{
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___0_initialSpan;
		__this->____span = L_0;
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		__this->____pos = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueListBuilder_1_get_Length_mF8F23A327A1B4D211BFE3D5A78A31D5861B36BCF_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ValueListBuilder_1_get_Item_mA8603140DF41A28E02364AEE9AA9DCA424797BDD_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_0 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_1 = ___0_index;
		Il2CppFullySharedGenericAny* L_2;
		L_2 = Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_inline(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Append_m8E0893D16DEF47E8D8F9689662927E8C34597BFE_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_2 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_3;
		L_3 = Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline(L_2, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ValueListBuilder_1_Grow_mFCD86126D0C9043BB696B8FF5219C4508DE2BA67(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	}

IL_001b:
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_5 = V_0;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_inline(L_4, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_item : &___0_item), SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_7, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_7);
		int32_t L_8 = V_0;
		__this->____pos = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ValueListBuilder_1_AsSpan_mF5CBC7C2E1B20F3A4ABC0DD44A535D30E70A9834_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_0 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_1 = __this->____pos;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline(L_0, 0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_3;
		L_3 = Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Dispose_m95D1F578E53DD38ABC79F6837BE0D50A1512F6B2_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____arrayFromPool;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_1;
		L_1 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____arrayFromPool;
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_1, L_2, (bool)0);
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_mFCD86126D0C9043BB696B8FF5219C4508DE2BA67_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_0;
		L_0 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_1 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_2;
		L_2 = Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline(L_1, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = VirtualFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(4, L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 2)));
		V_0 = L_3;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_6;
		L_6 = Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8(L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		bool L_7;
		L_7 = Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37(L_4, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____arrayFromPool;
		V_1 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = L_9;
		V_2 = L_10;
		__this->____arrayFromPool = L_10;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_2;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_12;
		L_12 = Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8(L_11, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		__this->____span = L_12;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t58F3AC60669102F215C83BF8491B2CFFADF20417_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_14;
		L_14 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_1;
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_14, L_15, (bool)0);
	}

IL_0055:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Pop_mB67E702E623E6BACDF0BEB363EB6D323901B33FE_fshared (ValueListBuilder_1_tF012774EB012F116BFCADB31CDCBAD34D4ECAC26* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
	{
		int32_t L_0 = __this->____pos;
		__this->____pos = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_1 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_2 = __this->____pos;
		Il2CppFullySharedGenericAny* L_3;
		L_3 = Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_inline(L_1, L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		il2cpp_codegen_memcpy(L_4, L_3, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t1A62CE1E223DA0C2F58D33DE37B955BF8862482B);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1__ctor_mD40F35A1E8A77256DDB679DDB93D3C2AC5098311_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_initialSpan, const RuntimeMethod* method) 
{
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_0 = ___0_initialSpan;
		__this->____span = L_0;
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
		__this->____pos = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueListBuilder_1_get_Length_m2C33CA4B73AB5424991AF6FB060EC12451E41CE5_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pos;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Append_m33FE48C9A574ECCCA152F8839103014923723A5F_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____pos;
		V_0 = L_0;
		int32_t L_1 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_2 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_3;
		L_3 = Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline(L_2, NULL);
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ValueListBuilder_1_Grow_m4786BBA84ADC1CF9A21AF8073F017C958B3292E0(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	}

IL_001b:
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_5 = V_0;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = Span_1_get_Item_m9C593C1A8E070D42D9DC7DB6C73CECDFB5626B81_inline(L_4, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_item : &___0_item), SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_7, SizeOf_T_tB83FC5D3083B7C93055ECBAE4EF8D18837DBF538);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_7);
		int32_t L_8 = V_0;
		__this->____pos = ((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC ValueListBuilder_1_AsSpan_m3FA086A9E9029716DEEB2449B36D1BF768A27047_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_0 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_1 = __this->____pos;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_2;
		L_2 = Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_inline(L_0, 0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC L_3;
		L_3 = Span_1_op_Implicit_m704A5B9FD25EEA23756181A8EB40B875387A6C01(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Dispose_mB50AB010F3A50CC265634CED281E90DFBFBA04EC_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____arrayFromPool;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_1;
		L_1 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____arrayFromPool;
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_1, L_2, (bool)0);
		__this->____arrayFromPool = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)NULL;
	}

IL_0020:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueListBuilder_1_Grow_m4786BBA84ADC1CF9A21AF8073F017C958B3292E0_fshared (ValueListBuilder_1_t2F4C83C418982C788B021A552CD1B3B0CCF89C13* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_2 = NULL;
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_0;
		L_0 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_1 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		int32_t L_2;
		L_2 = Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_inline(L_1, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3;
		L_3 = VirtualFuncInvoker1< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t >::Invoke(4, L_0, ((int32_t)il2cpp_codegen_multiply(L_2, 2)));
		V_0 = L_3;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* L_4 = (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*)(&__this->____span);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_6;
		L_6 = Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8(L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		bool L_7;
		L_7 = Span_1_TryCopyTo_m464C81DB101113B73DCD3F43C757D672CD893B37(L_4, L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____arrayFromPool;
		V_1 = L_8;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = L_9;
		V_2 = L_10;
		__this->____arrayFromPool = L_10;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_2;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_12;
		L_12 = Span_1_op_Implicit_mEAE085B1C884F71E5CF01E09CD6F285B497BBDE8(L_11, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		__this->____span = L_12;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_1;
		if (!L_13)
		{
			goto IL_0055;
		}
	}
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_t9B79E00CA232D419E87B553DAD20CC5DEFBB6F96_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_14;
		L_14 = ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_1;
		VirtualActionInvoker2< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, bool >::Invoke(5, L_14, L_15, (bool)0);
	}

IL_0055:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueProperty_get_Name_mEE4543917989B189DBE0B37F2B2D318DDC659C06_fshared (ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueProperty_get_IsReadOnly_m89A5C7ECCEF289CFD867DA302BB30478D4EB49FA_fshared (ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProperty_GetValue_m832A396A16CFB367B33AE9BF37B2DD582AE2D85D_fshared (ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
	const uint32_t SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		Il2CppConstrainedCallData L_2;
		Il2CppMethodPointer L_3 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0), (void*)L_0, &L_2, L_1);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(L_3, L_2.method,L_2.thisPtr,(Il2CppFullySharedGenericAny*)L_4);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProperty_SetValue_m38F027F0F44418852F03AAAC9FD9A393E4F76883_fshared (ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633* __this, Il2CppFullySharedGenericAny* ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	void* L_2 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_container;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___1_value : &___1_value), SizeOf_TValue_t3E6D7FA594FC1EB08E16B873D7EE967923E4E0EA);
		Il2CppConstrainedCallData L_3;
		Il2CppMethodPointer L_4 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), (void*)L_0, &L_3, L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(L_4, L_3.method,L_3.thisPtr, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? L_1: *(void**)L_1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueProperty__ctor_m468F22F1578564692A2E5570085DAC4D7AD2B69F_fshared (ValueProperty_t4D9BB595BCCF981819A498C3E15E14DF3EC7B633* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CNameU3Ek__BackingField = _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField), (void*)_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		Property_2__ctor_m1B14349D578BF83C39983D2898529964F8906986((Property_2_tE9B27417C17E0D8EA0D6A88F71B3C9347F2332A3*)__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SortedList_2_get_Count_m9D30811EEC67C375FFB63188C882336DCF1BC664_fshared_inline (SortedList_2_tB366C73C1DC35DFDB021DECF0F314B4CC58F6075* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 Span_1_Slice_m4D5C2B295B93702EF492EC0660798DE3BFC3FFDA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, int32_t ___0_start, int32_t ___1_length, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_start;
		int32_t L_1 = __this->____length;
		if ((!(((uint32_t)L_0) <= ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = ___1_length;
		int32_t L_3 = __this->____length;
		int32_t L_4 = ___0_start;
		if ((!(((uint32_t)L_2) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(L_3, L_4))))))
		{
			goto IL_0019;
		}
	}

IL_0014:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0019:
	{
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_5 = __this->____pointer;
		V_0 = L_5;
		Il2CppFullySharedGenericAny* L_6;
		L_6 = IL2CPP_BY_REFERENCE_GET_VALUE(Il2CppFullySharedGenericAny, (Il2CppByReference*)(&V_0));
		int32_t L_7 = ___0_start;
		Il2CppFullySharedGenericAny* L_8;
		L_8 = il2cpp_unsafe_add<Il2CppFullySharedGenericAny,int32_t>(L_6, L_7, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		int32_t L_9 = ___1_length;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_inline((&L_10), L_8, L_9, NULL);
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* ArrayPool_1_get_Shared_mED246B652823A7EEE39710F52F14E8B0453C2C85_fshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(ArrayPool_1_tBCAECBD7E56D178C8C7A2FD7EB9C61B46E22C3C2_StaticInit);
	{
		CHECKED_LOCAL_INIT(ArrayPool_1_tBCAECBD7E56D178C8C7A2FD7EB9C61B46E22C3C2_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774* L_0 = ((ArrayPool_1_t1CA8B86A43623D11BDEC111B774FC11399E41774_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___U3CSharedU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_ptr;
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
