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
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};

struct ActionQueryMatcher_t0EF83980C6ABA9272F87A72C8B21FEF9403FA83E;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7;
struct Data_tD47C5E63F8D3918FF6FA9D00969FF044D6E745FD;
struct Data_t9C4189912B5BDF1A4B9AF0427C56C087D271149E;
typedef Il2CppFullySharedGenericStruct Data_t6F131ABB2DC3608FBC19EEE1D985484C670DE41A;
struct Dictionary_2_t6B4B40DA71BA0031F5736DF4459253299D8AF5F2;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2;
struct HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F;
struct HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC;
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
struct IEnumerator_1_t8AF9D34B66B0174F6DAAD1074D90D1C23E8C6A05;
struct IEnumerator_1_t0DBEE3D0C550C7E1E0680D1C56CBF32D50AC8FEF;
struct IEnumerator_1_tA104365EBCB6677D7BCCB35A534C8A649FA5A719;
struct IEnumerator_1_tEF2C270E91A9B621D58A49CE507B762617FB66FD;
struct IEnumerator_1_t26CB5FB2524860C4E1B690A2259BA8EC992C94FB;
struct IEnumerator_1_t39504690A249AB0F407E265AD478DFF2C33744B5;
struct IEnumerator_1_tC2266E408683DCA4A8C20409F2A8BE21B265A725;
struct IEnumerator_1_t80E5984835398EC083520AB0DB51729D678DFF87;
struct IEnumerator_1_t45F3F7FD63BD81FEABDE4F646B59715C819D84FC;
struct IEqualityComparer_1_t47CC0B235E693652D181B679FF6D61A469ECC122;
struct IIndexedCollectionPropertyBagEnumerator_1_tE6D93F29F9DC5C6C942785B906E79535F31E5DB0;
struct IIndexedCollectionPropertyBagEnumerator_1_t10389DF5F8C59FB7EB580235264CA38D155D08CA;
struct IIndexedCollectionPropertyBagEnumerator_1_tD70112E78337C26D0C1F85BCA6CED16BBBFC7CC3;
struct IIndexedCollectionPropertyBagEnumerator_1_tB9B4F5B2F4FECAB4F6C0410D6837764AFCE7B09C;
struct IIndexedCollectionPropertyBagEnumerator_1_tBB00032A431031C00D663DDB5B5BAF96072925D9;
struct IIndexedCollectionPropertyBagEnumerator_1_t26A0DC4708EC40881B4274736013DFC7E17C20CD;
struct IIndexedCollectionPropertyBagEnumerator_1_tBC1E85704D5DB6418F61BF7D35C0B5971256F255;
struct IIndexedCollectionPropertyBagEnumerator_1_t0C35254A79F9DD920D54665C0F0FCAB5C66429BB;
struct IIndexedCollectionPropertyBagEnumerator_1_t10A3FE79120150E0A39D2649E6366925E3E7977A;
struct IProperty_1_tD5B55B2B653E1DBADDE8E494F6B9568FCCFB815A;
struct IProperty_1_tD0857FC9D3C29214DBCB766720DD32AD2E2E29D3;
struct IProperty_1_t4F0CAE821D34ED1A55A2913142EDF092E2F0996A;
struct IProperty_1_t71FC6CE3B63C7989BB59D6C8E47462A535257BC9;
struct IProperty_1_t2F93486C4F1EF31204AB9C24EB17075238B881D5;
struct IProperty_1_t6A61BCA264AF8DCD6B17CCD252C9C5BA66D03AE5;
struct IProperty_1_tB2F9BD0CE858D83F88C7377D49E55D3F01A6F8AC;
struct IProperty_1_t6C1DB536D5902BDA12B48EB9A2DC7D9902B80B6A;
struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8;
struct LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9;
struct LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9;
struct ListQueryMatcher_1_t5888012D63B675F26A02C9BF208DC2C856BFBBC4;
struct ListQueryMatcher_1_t80B2C90F8E32F964B971ECBBAA0E811171012425;
struct List_1_t5D909E7F131356377BE392FFE312172FA301EB67;
struct List_1_tF7ED81D8CAE526E27D4579AA1E0D00A211BAE4FE;
struct List_1_t097837D1E5E15D037E5CC2958A380C5BB39F6B54;
struct List_1_t061B25A9A84AEF321FDDB1F001818B7F63981724;
struct List_1_t9F62F67493B4FDE523DD405881E159817B80CAC2;
struct List_1_tABCD0E063D584200D4058342D9635DCF321C9D4F;
struct List_1_t277B1C8B6F71A7A4C5A4459EBE72D3C71A10D5B9;
struct List_1_t38961482000AC5E53707ECBA054D29F4A45EFA99;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF;
struct List_1_tCC0A1A2DFE580C45F2D3D390F3E50E3A3CF6FE3A;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B;
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t67A1600A303BB89506DFD21B59687088B7E0675B;
struct List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5;
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A;
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
struct List_1_t260F19FA89C33DAF70662222B1FBAD25F691B6F3;
struct List_1_t41896DF347A129D13205BBFADE03DFB21E05E459;
struct List_1_tD3D747E0D515CE6C8FA445F30223785AFEA65813;
struct List_1_t0ED5DB81DE0D43C5B1FADC6B861B3F3EAC459ABB;
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
struct List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB;
struct List_1_t7B0B015A57215073C45C813320AF5F3ECF8149F7;
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct List_1_t201EF66D89B48BDF1B448F483575106DF0B49F6A;
struct List_1_t55FBBCA3B61F4092747F5BB1DE63DCF56C27DE50;
struct List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A;
struct List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E;
struct List_1_t9DBFF1202B9CF140B233388CFB97CA59663D27D2;
struct List_1_t83F6318ECE580FCC83D7D8AB9A8841147CEF4C65;
struct List_1_t8A3C0729B4B61738DFBD32119977F2991FD56447;
struct List_1_tF582953E1AEAD6ED84833148BAA8969A66E35905;
struct List_1_t70EE7982F45810D4B024CF720D910E67974A3094;
struct List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A;
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9;
struct NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct Stack_1_tC7921F5DA7D4991B31287F8384664CB754A4F4C8;
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
struct Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA;
struct NativeArray_1U5BU5D_t4BC8FD0BBBD51EF2E3A56BF78296DF37173EFDBD;
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binding_tA1358A155852138C1926082E4F3245B6F631CBED;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct Type_t;
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A;
struct Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633;
IL2CPP_EXTERN_C String_t* _stringLiteral27E800F6FC3576FA08A781DC2C4A4BD96BA82D76;
IL2CPP_EXTERN_C String_t* _stringLiteral38078454203FA992D959F0FD913FDD567D9EA9EB;
IL2CPP_EXTERN_C String_t* _stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97;
IL2CPP_EXTERN_C String_t* _stringLiteral670CBAB5C8A30A4C8DC68337B78F13CC30BC704D;
IL2CPP_EXTERN_C String_t* _stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9;
IL2CPP_EXTERN_C String_t* _stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* ____slots;
	int32_t ____count;
	int32_t ____lastIndex;
	int32_t ____freeList;
	RuntimeObject* ____comparer;
	int32_t ____version;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9 : public RuntimeObject {};
struct LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9  : public RuntimeObject
{
	LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* ___head;
	int32_t ___count;
	int32_t ___version;
	RuntimeObject* ____syncRoot;
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo;
};
struct List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF  : public RuntimeObject
{
	NativeArray_1U5BU5D_t4BC8FD0BBBD51EF2E3A56BF78296DF37173EFDBD* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC  : public RuntimeObject
{
	RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95  : public RuntimeObject
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
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
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
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
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct HierarchyTraversal_t89B1D4664C1C066FEED9B372488A3F751CB6FE7D  : public RuntimeObject
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
struct ArraySlice_1_t173FD3ACCC2631A439B59982D6322FFDC51B753B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct ArraySlice_1_t62CE85979628F3D63985E52623CBDB8E8CEDF91C 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
typedef Il2CppFullySharedGenericStruct Data_t6F131ABB2DC3608FBC19EEE1D985484C670DE41A;
struct Enumerator_t21A4859668E56DC3C957A5FDB63D82E0CFE3C025 
{
	List_1_t5D909E7F131356377BE392FFE312172FA301EB67* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t07EC55B572604AE2C4C928B8E3F11A9733036560 
{
	List_1_tF7ED81D8CAE526E27D4579AA1E0D00A211BAE4FE* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t0F0825A75127850C6101AA3832F4031AB61B7B0C 
{
	List_1_t097837D1E5E15D037E5CC2958A380C5BB39F6B54* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t08C28023F7DBAF5AD3FE02F450C014CBE1345A34 
{
	List_1_t061B25A9A84AEF321FDDB1F001818B7F63981724* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t9A622AB74A6417668F8A49BFFB1D11B25A329248 
{
	List_1_t9F62F67493B4FDE523DD405881E159817B80CAC2* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t8925FB47C03812518E4A2FA72614F9DF6E7BC900 
{
	List_1_tABCD0E063D584200D4058342D9635DCF321C9D4F* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t3DB6B256496A78585890809B8DADD57AFDDEBD49 
{
	List_1_t277B1C8B6F71A7A4C5A4459EBE72D3C71A10D5B9* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tE6F11662226BE79E82B357013873FADA64A5444C 
{
	List_1_t38961482000AC5E53707ECBA054D29F4A45EFA99* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63 
{
	List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
struct Enumerator_tFF57C30B6C3A41FDAFCA70128F505FF2632546E6 
{
	Stack_1_tC7921F5DA7D4991B31287F8384664CB754A4F4C8* ____stack;
	int32_t ____version;
	int32_t ____index;
	uint16_t ____currentElement;
};
struct Enumerator_t4CFD59DAFC3EC5FB49F484BCE727EF83D3179CD1 
{
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ____set;
	int32_t ____index;
	int32_t ____version;
	uint32_t ____current;
};
struct Enumerator_tE11EF15BE791F6B44F4B296E90476ADCDDC5D87F 
{
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ____list;
	int32_t ____index;
	int32_t ____version;
	uint32_t ____current;
};
struct Enumerator_tB77636C1B5D379603F3B1C5B6EA540ADD1C4A50E 
{
	HashMapHelper_1_tA254628934FEBA6864D3561F28C85E02EA1CD06F* ___m_Data;
	int32_t ___m_Index;
	int32_t ___m_BucketIndex;
	int32_t ___m_NextIndex;
};
struct Enumerator_t70A8D395D3DE5F360B445F6583EA858859FFB344 
{
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ____list;
	int32_t ____index;
	int32_t ____version;
	uint64_t ____current;
};
struct Enumerator_t05D441CCD1CA349D0E884FA9942A3AC3345FD28F 
{
	Data_tD47C5E63F8D3918FF6FA9D00969FF044D6E745FD* ___m_Data;
	int32_t ___m_Index;
};
struct Enumerator_tD7B120B2CB1F3ABA301EFCE089F990357DC7F824 
{
	Data_t9C4189912B5BDF1A4B9AF0427C56C087D271149E* ___m_Data;
	int32_t ___m_Index;
};
struct Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69 
{
	uint64_t* ___m_Indices;
	int32_t ___m_Count;
	int32_t ___m_Current;
};
struct Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96 
{
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___iterationList;
	int32_t ___currentIndex;
};
struct Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802 
{
	HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* ___m_Data;
	int32_t ___m_Index;
	int32_t ___m_BucketIndex;
	int32_t ___m_NextIndex;
};
struct Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D 
{
	InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* ___m_History;
	int32_t ___m_Index;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t81B429DC3FEA3983A4D1E6E07804925CB576CD3B;
struct Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72 
{
	Data_t6F131ABB2DC3608FBC19EEE1D985484C670DE41A* ___m_Data;
	int32_t ___m_Index;
};
struct Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E 
{
	Il2CppFullySharedGenericStruct* ___m_Ptr;
	int32_t ___m_Length;
	int32_t ___m_Index;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421;
typedef Il2CppFullySharedGenericStruct Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB;
typedef Il2CppFullySharedGenericStruct Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457;
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
typedef Il2CppFullySharedGenericStruct Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0;
typedef Il2CppFullySharedGenericStruct Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C;
struct Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41;
struct InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 
{
	int32_t ___length;
	uint64_t ___firstValue;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___additionalValues;
};
typedef Il2CppFullySharedGenericStruct InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3;
struct LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9  : public LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0
{
};
struct NativeSlice_1_t7B1E7744FBAF078F78D93365DECA9572D295ECAE 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tD956D063FC554DB22B1EA853619C01F718853C7F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t59F7AA82EEDAFC28903AC471BA1AB4D4AB648897 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t21ECB9145DD6D35B94BDE795F5D7687542E79823 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct ReadOnly_t80D4186B45F260CEC0B99D37EA057D82CFAFC95C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tF438F6D1DCDDED408C63C0A47A7A14047CEB6763 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t6240AB54FB2D660737AC348225C314CB715EE2D6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t52ECF37AB8FDCB2D0BD7865EAAB18D0BD20F8117 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t922D2873332FBA91D26C336683DA73210C1D191E 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t341E632166FF2FCDC3BD76974E2CBBA2FD8833FB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tF435F02B41C30EC03574D91D8B55CB82608E4BC8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t9A57BBD1B3A10C999618EE729703812CA861D0A0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t2AC1EE62280D1ACAF6502FD43061B76831F7F825 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t550EA4A70BDB8D88F9CE14274FF0EB7BAC6203DD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t3FF396DB2F4259434D435A6A11DBA6DF5237CA9B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t675727DB44DB9BDCDBF05AD477162B0E6FCA1229 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tE86AED4CF681F9985841387B6C5BC3940F016B24 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t60F1F6EA542227452058F471ED1F03BE04E747FA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tBCADA2236753EF6E06908D8852DEBCE27F47B9B6 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tE952B10A1D4D5957366F8D5976512B509D8E7D57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tEC1B78AA9A46DB8AD1C5DBAE542E1B5A9A8DF8CE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tDAD0456355433E3A9DB77C242419A3C2B61FF7A1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t9EC554A4C51E0E58FA55ED6550A28C34131B53F8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tFC602D25626C1ACA10B4F01C545A1D0D38840EC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t3E2994BF23F5B0A8702C4C3F434E9A0E41458751 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t9E27B0BA763C80368372F9471BC3CBC7760914A1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t3A49C41F0E00427FDA453EAA1AC36802B113FC83 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t86B3AB6727FB0CF3474F5B7BEBDA30FC9F9951D2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t76BF0F8C193F52D463F8BB9AC0214BACB9D95660 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t1572A3C97E859F8C123485E0238725356EE4CA1A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tA522D53D759ABB16A1EABA790D2AD0E19DACA601 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tFE401659B89F60F5BA086E0F0188F15A42C18E4D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t0FE5617AC8525F60705BB39B5A7AD67C85F26B8D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_t490AE34C6A92FDCF1F34BA02E3FE19FE48B355BC 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct ReadOnly_tD24F078322DD82D0B34548D94F195EEF89677EE0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
};
struct Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D 
{
	InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
typedef Il2CppFullySharedGenericStruct Slot_tEC146EEEF7022C6542EBF082D658446682962BFD;
struct UQueryState_1_t62CA2841B4A1205A8554F7E9D2A3FBFB0F92B192 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element;
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers;
};
struct UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC 
{
	union
	{
		struct
		{
			Data_t6F131ABB2DC3608FBC19EEE1D985484C670DE41A* ___m_Data;
		};
		uint8_t UnmanagedRefCountedList_1_t422A4815A59948FB5060BB10CB6D6DC9F24D2948__padding[8];
	};
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
#pragma pack(push, tp, 1)
struct FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					uint64_t ___byte0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					uint64_t ___byte0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___byte0008_OffsetPadding[8];
					uint64_t ___byte0008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___byte0008_OffsetPadding_forAlignmentOnly[8];
					uint64_t ___byte0008_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4__padding[16];
	};
};
#pragma pack(pop, tp)
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___m_Focusable;
	int32_t ___m_TabIndex;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
	bool ___U3CisEligibleToReceiveFocusFromDisabledChildU3Ek__BackingField;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 
{
	int32_t ___Index;
	bool ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_pinvoke
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
};
struct IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79_marshaled_com
{
	int32_t ___Index;
	int32_t ___IsReadOnly;
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
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
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
struct UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC 
{
	int32_t ___startCharIdx;
	int32_t ___height;
	float ___topY;
	float ___leading;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
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
struct UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_BucketIndex;
	int32_t ___m_NextIndex;
};
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___m_NextBlock;
	int32_t ___m_NumItems;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 
{
	String_t* ___content;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_marshaled_pinvoke
{
	char* ___content;
};
struct UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1_marshaled_com
{
	Il2CppChar* ___content;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B 
{
	String_t* ___prefix;
	String_t* ___resolvedNamespace;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_marshaled_pinvoke
{
	char* ___prefix;
	char* ___resolvedNamespace;
};
struct UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B_marshaled_com
{
	Il2CppChar* ___prefix;
	Il2CppChar* ___resolvedNamespace;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 
{
	String_t* ___name;
	String_t* ___value;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4_marshaled_pinvoke
{
	char* ___name;
	char* ___value;
};
struct UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4_marshaled_com
{
	Il2CppChar* ___name;
	Il2CppChar* ___value;
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
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
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
struct double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 
{
	double ___x;
	double ___y;
};
struct float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 
{
	float ___x;
	float ___y;
};
struct float3_t7600B73F092B37F484B12910A5269F30C778D31E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t545A994996126766890C1F28B43EA823F2410190 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int2_tB123E869131C6102341F8F9AA01726E0E7C2768D 
{
	int32_t ___x;
	int32_t ___y;
};
struct int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
};
struct int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 
{
	int32_t ___x;
	int32_t ___y;
	int32_t ___z;
	int32_t ___w;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_pinvoke
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161_marshaled_com
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ___U3CAwaitableU3Ek__BackingField;
	int32_t ___U3CFrameIndexU3Ek__BackingField;
};
struct MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 
{
	int32_t ___valueIndex;
	int32_t ___matchedVariableCount;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct Page_t04FE552A388BF55B12C8868E19589136957E00A5 
{
	uint16_t ___x;
	uint16_t ___y;
	int32_t ___freeSlots;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49_marshaled_pinvoke
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49_marshaled_com
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	List_1_t70EE7982F45810D4B024CF720D910E67974A3094* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014_marshaled_pinvoke
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014_marshaled_com
{
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___sourceAsset;
	int32_t ___templateId;
	List_1_tB0B308D151FBF226396B20253C1FF11CF7D10D3A* ___attributeOverrides;
};
struct ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022 
{
	int64_t ___version;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A* ___bindingData;
};
struct ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022_marshaled_pinvoke
{
	int64_t ___version;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A* ___bindingData;
};
struct ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022_marshaled_com
{
	int64_t ___version;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	BindingData_t63DF4F2F4FA1BE1BD6130C2DDAE1888DCD76381A* ___bindingData;
};
struct UQueryMatcher_tF8783F54BA397641240DA7025126F6301EF53FF8  : public HierarchyTraversal_t89B1D4664C1C066FEED9B372488A3F751CB6FE7D
{
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers;
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
struct LongDoubleUnion_t17011746129284B81F310F56E20D549A6F6710D0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___longValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___longValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___doubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___doubleValue_forAlignmentOnly;
		};
	};
};
struct Enumerator_t83C0632D4DC530FCADCE8F3B3CA5676890BF3C44 
{
	List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ____list;
	int32_t ____index;
	int32_t ____version;
	UILineInfo_tC6FF4F85BD2316FADA2148A1789B3FF0B05A6CAC ____current;
};
struct Enumerator_tE6E0FBB400771680C2C929A3DD5B28EA5409624B 
{
	NativeSlice_1_t7B1E7744FBAF078F78D93365DECA9572D295ECAE ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_t674B68CD370CF70AE69B0FF999D3B5C54D3B7A49 
{
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_t3B6B634480724D23707A79770B42579C8E89EC7A 
{
	ReadOnly_t6240AB54FB2D660737AC348225C314CB715EE2D6 ___m_Array;
	int32_t ___m_Index;
	uint16_t ___value;
};
struct Enumerator_t1594E820947A8405B962433AE1ACB6C7AF9DF1C5 
{
	ReadOnly_t52ECF37AB8FDCB2D0BD7865EAAB18D0BD20F8117 ___m_Array;
	int32_t ___m_Index;
	uint32_t ___value;
};
struct Enumerator_t5BA9313D6BCDE3B6FDAFE838F5D47FF8D09E6E33 
{
	InlinedArray_1_t60EEC56093C0FF56195A546A68BC099B551DD4C5 ___array;
	int32_t ___index;
};
struct Enumerator_tF3E1FA254392E6A5FA77D324E88DF739BAFE0491 
{
	ReadOnly_t922D2873332FBA91D26C336683DA73210C1D191E ___m_Array;
	int32_t ___m_Index;
	uint64_t ___value;
};
struct Enumerator_t11AB3EF0D4BA684940B22596D52C6AFD78768831 
{
	List_1_t260F19FA89C33DAF70662222B1FBAD25F691B6F3* ____list;
	int32_t ____index;
	int32_t ____version;
	UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF ____current;
};
struct Enumerator_t7278D44F7FBD5659A09664D07CA6F14F14ACCB89 
{
	NativeSlice_1_tD956D063FC554DB22B1EA853619C01F718853C7F ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_t4AA61EE811CAB9C668FB815A5F3D09F0E87FEA02 
{
	NativeSlice_1_t59F7AA82EEDAFC28903AC471BA1AB4D4AB648897 ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_tE9083F5B8CE17B7628DB22B5DB4698A13F2ED72E 
{
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ____list;
	int32_t ____index;
	int32_t ____version;
	UsageHint_tFD7259AF9E91500CF1D0CE602394B40FD2397AB1 ____current;
};
struct Enumerator_t910451F662FAEF90839C218E14F995C01AF29C1C 
{
	List_1_tD3D747E0D515CE6C8FA445F30223785AFEA65813* ____list;
	int32_t ____index;
	int32_t ____version;
	UxmlNamespaceDefinition_t6B70CA125A4C1D5F74F1C901A6F4F72637F6621B ____current;
};
struct Enumerator_tD818137D511441321EF7345E05C2C3D54A625323 
{
	List_1_t0ED5DB81DE0D43C5B1FADC6B861B3F3EAC459ABB* ____list;
	int32_t ____index;
	int32_t ____version;
	UxmlProperty_t98965D0AC619F23715A51F072A885C7F07F15FE4 ____current;
};
struct Enumerator_t24E4C96B84374CD9F71B748A47AB020F220D9931 
{
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ____list;
	int32_t ____index;
	int32_t ____version;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____current;
};
struct Enumerator_tC0DFD2F6729290A84E45438C73F13C40FCC2FD9C 
{
	NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_t4A47B17609B04D4016EA93253E88DB63407FA951 
{
	ReadOnly_tE86AED4CF681F9985841387B6C5BC3940F016B24 ___m_Array;
	int32_t ___m_Index;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value;
};
struct Enumerator_t609488A9291E792D6A59707FF2BF03FBB727E047 
{
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ____list;
	int32_t ____index;
	int32_t ____version;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____current;
};
struct Enumerator_tE96151B77620FFB69CA6D7FFE93A6563A33F8308 
{
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_tCD6704DFD39741D1B52DD4B1047604A8F52D8016 
{
	ReadOnly_t60F1F6EA542227452058F471ED1F03BE04E747FA ___m_Array;
	int32_t ___m_Index;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value;
};
struct Enumerator_tCAA61E554396ECF70722BCDBDE983D2A70BFEB68 
{
	ReadOnly_tBCADA2236753EF6E06908D8852DEBCE27F47B9B6 ___m_Array;
	int32_t ___m_Index;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___value;
};
struct Enumerator_tE713E07F5A4EA08805E6D4160E39F98057E43F9A 
{
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ____list;
	int32_t ____index;
	int32_t ____version;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____current;
};
struct Enumerator_t13601E9158CEB63EDA6C93D2CAE2F3DB2F6D7EDD 
{
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_tC1924C3C2DAC82DF39552A7D5AB2DCA096AFF4A5 
{
	ReadOnly_tE952B10A1D4D5957366F8D5976512B509D8E7D57 ___m_Array;
	int32_t ___m_Index;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value;
};
struct Enumerator_tC72C450C6348CF3BBFD26CFBF57C18F3EE073DB9 
{
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F 
{
	Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802 ___m_Enumerator;
};
struct Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658 
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 ___m_Enumerator;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83;
struct Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817 
{
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322 
{
	Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802 ___m_Enumerator;
};
struct Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE 
{
	UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5 ___m_Enumerator;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C;
typedef Il2CppFullySharedGenericStruct Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092;
struct Enumerator_t78550044AD06493858F5BA5AB240550307F420E7 
{
	ReadOnly_tFC602D25626C1ACA10B4F01C545A1D0D38840EC3 ___m_Array;
	int32_t ___m_Index;
	double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___value;
};
struct Enumerator_t388AFDC9E62EE1E1535D411A111F8A27EF74D33E 
{
	ReadOnly_t3E2994BF23F5B0A8702C4C3F434E9A0E41458751 ___m_Array;
	int32_t ___m_Index;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___value;
};
struct Enumerator_tFFC0BCF66DEEB6D6A13C6FE083BD247052D211FE 
{
	NativeSlice_1_t26239564C98CCF89787A77F69BF0133259B076E4 ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_t5245489831C71E2BAB60B43661AC3940DB2A5604 
{
	ReadOnly_t9E27B0BA763C80368372F9471BC3CBC7760914A1 ___m_Array;
	int32_t ___m_Index;
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___value;
};
struct Enumerator_t7C9805CF80D1529070ABC15180F4F22C3AC04B6D 
{
	NativeSlice_1_tF501174E970F834D403C737FA11314C2674055EA ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_t4354EE378CDAA2FCDEB356C8B42FCA37D8C8CE18 
{
	ReadOnly_t3A49C41F0E00427FDA453EAA1AC36802B113FC83 ___m_Array;
	int32_t ___m_Index;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___value;
};
struct Enumerator_tEA92A7CCB1A5B6B53C1B4A743BF74B6DF0C21D74 
{
	NativeSlice_1_t21ECB9145DD6D35B94BDE795F5D7687542E79823 ___m_Array;
	int32_t ___m_Index;
};
struct Enumerator_tF3D69EA9265DA5E51F00E9696E1691C76D9BE79F 
{
	ReadOnly_t76BF0F8C193F52D463F8BB9AC0214BACB9D95660 ___m_Array;
	int32_t ___m_Index;
	int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___value;
};
struct Enumerator_t5274CB61A812B8983822BADF40BB344FD05DE133 
{
	ReadOnly_t1572A3C97E859F8C123485E0238725356EE4CA1A ___m_Array;
	int32_t ___m_Index;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___value;
};
struct Enumerator_t017A0AA1D5EB5F4DA649DEE4CA3B7A340BC2F735 
{
	ReadOnly_tA522D53D759ABB16A1EABA790D2AD0E19DACA601 ___m_Array;
	int32_t ___m_Index;
	int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 ___value;
};
struct Enumerator_t6630402C90E9E1872D41DA78B1CA17C07D89A9F5 
{
	List_1_t55FBBCA3B61F4092747F5BB1DE63DCF56C27DE50* ____list;
	int32_t ____index;
	int32_t ____version;
	AwaitableAndFrameIndex_t5B42EA520B0415D199F9487706ABCD53407C0161 ____current;
};
struct Enumerator_t6B0EB72F34C4614A45F424103A9D11C74439E854 
{
	Stack_1_tB568ED1852EE70A3EECA2CD66F2AB41DDEC262FA* ____stack;
	int32_t ____version;
	int32_t ____index;
	MatchContext_t04110FFA271D89A23BC1918BE657634A7DC06253 ____currentElement;
};
struct Enumerator_t389EF10F90069ED924478E5694DFE1BB5CBCF251 
{
	List_1_tB663AF9B0DBD0D685E595C4B50CF1535137C768A* ____list;
	int32_t ____index;
	int32_t ____version;
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 ____current;
};
struct Enumerator_t171CB118C2D1EDA6285019F361AFE0E164C5C353 
{
	List_1_t3FD5514751EB43E4AB1C145E04BA259B6CD6C74E* ____list;
	int32_t ____index;
	int32_t ____version;
	Page_t04FE552A388BF55B12C8868E19589136957E00A5 ____current;
};
struct Enumerator_t55A4B2784AB93C9EFCBE338B25EF791444550DA0 
{
	List_1_t9DBFF1202B9CF140B233388CFB97CA59663D27D2* ____list;
	int32_t ____index;
	int32_t ____version;
	AttributeOverrideRange_t47A9929769CAD72883980AE2C29FACC19B310D49 ____current;
};
struct Enumerator_t8415E89BC60CAC4A0A725233BEF28B6CC5A2D89A 
{
	List_1_t83F6318ECE580FCC83D7D8AB9A8841147CEF4C65* ____list;
	int32_t ____index;
	int32_t ____version;
	SerializedDataOverrideRange_t3A1FFF9457378F017DD8F445C7AF421B9AB65014 ____current;
};
struct Enumerator_t02FF38A6AF277B3D3A6E2312B96BDD7F6B746200 
{
	List_1_tF582953E1AEAD6ED84833148BAA8969A66E35905* ____list;
	int32_t ____index;
	int32_t ____version;
	ChangesFromUI_t56B0B09645F7D36924555D832D21882400771022 ____current;
};
struct EnumeratorType_t3426A9076F8261548BAD63A70867D6644802BBB5 
{
	int32_t ___value__;
};
struct EnumeratorType_tBD557344AEE1E341B50656F544261C19EAA8DECF 
{
	int32_t ___value__;
};
struct EnumeratorType_t142976410BBB641F21F34E195981A156364D0921 
{
	int32_t ___value__;
};
struct EnumeratorType_tC9811666FB3559590A22280F3BD5AF51D71FD4F3 
{
	int32_t ___value__;
};
struct EnumeratorType_tCD9FF43AEC32E98EFFC1ACD66D70D589F44128E2 
{
	int32_t ___value__;
};
struct EnumeratorType_tBBA1299017EB1D186E06A710951234C8CAB75EB7 
{
	int32_t ___value__;
};
struct EnumeratorType_t088402F32227BCF199894AC9E5FDB96C9584C721 
{
	int32_t ___value__;
};
struct EnumeratorType_tC5AFB390070AA4297697E4E9025029C829FF218E 
{
	int32_t ___value__;
};
struct EnumeratorType_t213060DC702D8C5D779B12D7E6CE6AFC2D7BB6CA 
{
	int32_t ___value__;
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
struct IndexedCollectionPropertyBagEnumerator_1_tB9311B9A76ACBE1E7BCB9A6CF7FC3C4B274F6E92 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t98F3526D06B9B60F2132B38E1D5D3DB693DBD590 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t787FDFBCE511E8C3B294D3127542C3EA46582D47 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t459E03B2FD4DD66999C813268BDCCCECE4BD47AC 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_tA2E7BC44D8B66A16B24855D9EE5D482068E2B9C2 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_Container;
	int32_t ___m_Position;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479;
struct ListQueryMatcher_1_t5888012D63B675F26A02C9BF208DC2C856BFBBC4  : public UQueryMatcher_tF8783F54BA397641240DA7025126F6301EF53FF8
{
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___U3CmatchesU3Ek__BackingField;
};
struct ListQueryMatcher_1_t80B2C90F8E32F964B971ECBBAA0E811171012425  : public UQueryMatcher_tF8783F54BA397641240DA7025126F6301EF53FF8
{
	List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___U3CmatchesU3Ek__BackingField;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
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
struct FeatureType_t794EFAD24C687FA0CDC5A313581A39F5CB61CC41 
{
	int32_t ___value__;
};
struct FilterFunctionType_tF29290365A61009BE6F2EF6C6C6218E72CB9F64A 
{
	int32_t ___value__;
};
struct FilterParameterType_t7250262A78079140235AAFF6F4FA3CCB2F99E390 
{
	int32_t ___value__;
};
#pragma pack(push, tp, 1)
struct FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_OffsetPadding[112];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0112_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18__padding[128];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779__padding[32];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_OffsetPadding[112];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_OffsetPadding[128];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_OffsetPadding[144];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_OffsetPadding[160];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_OffsetPadding[176];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_OffsetPadding[192];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_OffsetPadding[208];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_OffsetPadding[224];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_OffsetPadding[240];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_OffsetPadding[256];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_OffsetPadding[272];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0272;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0272_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_OffsetPadding[288];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0288;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0288_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_OffsetPadding[304];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0304;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0304_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_OffsetPadding[320];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0320;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0320_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_OffsetPadding[336];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0336;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0336_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_OffsetPadding[352];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0352;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0352_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_OffsetPadding[368];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0368;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0368_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_OffsetPadding[384];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0384;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0384_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_OffsetPadding[400];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0400;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0400_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_OffsetPadding[416];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0416;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0416_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_OffsetPadding[432];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0432;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0432_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_OffsetPadding[448];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0448;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0448_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_OffsetPadding[464];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0464;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0464_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_OffsetPadding[480];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0480;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0480_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0496_OffsetPadding[496];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0496;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0496_OffsetPadding_forAlignmentOnly[496];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0496_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0512_OffsetPadding[512];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0512;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0512_OffsetPadding_forAlignmentOnly[512];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0512_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0528_OffsetPadding[528];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0528;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0528_OffsetPadding_forAlignmentOnly[528];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0528_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0544_OffsetPadding[544];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0544;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0544_OffsetPadding_forAlignmentOnly[544];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0544_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0560_OffsetPadding[560];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0560;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0560_OffsetPadding_forAlignmentOnly[560];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0560_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0576_OffsetPadding[576];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0576;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0576_OffsetPadding_forAlignmentOnly[576];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0576_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0592_OffsetPadding[592];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0592;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0592_OffsetPadding_forAlignmentOnly[592];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0592_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0608_OffsetPadding[608];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0608;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0608_OffsetPadding_forAlignmentOnly[608];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0608_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0624_OffsetPadding[624];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0624;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0624_OffsetPadding_forAlignmentOnly[624];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0624_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0640_OffsetPadding[640];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0640;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0640_OffsetPadding_forAlignmentOnly[640];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0640_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0656_OffsetPadding[656];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0656;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0656_OffsetPadding_forAlignmentOnly[656];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0656_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0672_OffsetPadding[672];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0672;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0672_OffsetPadding_forAlignmentOnly[672];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0672_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0688_OffsetPadding[688];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0688;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0688_OffsetPadding_forAlignmentOnly[688];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0688_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0704_OffsetPadding[704];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0704;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0704_OffsetPadding_forAlignmentOnly[704];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0704_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0720_OffsetPadding[720];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0720;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0720_OffsetPadding_forAlignmentOnly[720];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0720_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0736_OffsetPadding[736];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0736;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0736_OffsetPadding_forAlignmentOnly[736];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0736_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0752_OffsetPadding[752];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0752;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0752_OffsetPadding_forAlignmentOnly[752];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0752_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0768_OffsetPadding[768];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0768;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0768_OffsetPadding_forAlignmentOnly[768];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0768_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0784_OffsetPadding[784];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0784;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0784_OffsetPadding_forAlignmentOnly[784];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0784_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0800_OffsetPadding[800];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0800;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0800_OffsetPadding_forAlignmentOnly[800];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0800_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0816_OffsetPadding[816];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0816;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0816_OffsetPadding_forAlignmentOnly[816];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0816_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0832_OffsetPadding[832];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0832;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0832_OffsetPadding_forAlignmentOnly[832];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0832_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0848_OffsetPadding[848];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0848;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0848_OffsetPadding_forAlignmentOnly[848];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0848_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0864_OffsetPadding[864];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0864;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0864_OffsetPadding_forAlignmentOnly[864];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0864_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0880_OffsetPadding[880];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0880;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0880_OffsetPadding_forAlignmentOnly[880];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0880_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0896_OffsetPadding[896];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0896;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0896_OffsetPadding_forAlignmentOnly[896];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0896_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0912_OffsetPadding[912];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0912;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0912_OffsetPadding_forAlignmentOnly[912];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0912_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0928_OffsetPadding[928];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0928;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0928_OffsetPadding_forAlignmentOnly[928];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0928_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0944_OffsetPadding[944];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0944;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0944_OffsetPadding_forAlignmentOnly[944];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0944_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0960_OffsetPadding[960];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0960;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0960_OffsetPadding_forAlignmentOnly[960];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0960_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0976_OffsetPadding[976];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0976;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0976_OffsetPadding_forAlignmentOnly[976];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0976_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0992_OffsetPadding[992];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0992;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0992_OffsetPadding_forAlignmentOnly[992];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0992_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1008_OffsetPadding[1008];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1008_OffsetPadding_forAlignmentOnly[1008];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1024_OffsetPadding[1024];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1024;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1024_OffsetPadding_forAlignmentOnly[1024];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1024_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1040_OffsetPadding[1040];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1040;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1040_OffsetPadding_forAlignmentOnly[1040];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1040_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1056_OffsetPadding[1056];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1056;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1056_OffsetPadding_forAlignmentOnly[1056];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1056_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1072_OffsetPadding[1072];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1072;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1072_OffsetPadding_forAlignmentOnly[1072];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1072_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1088_OffsetPadding[1088];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1088;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1088_OffsetPadding_forAlignmentOnly[1088];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1088_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1104_OffsetPadding[1104];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1104;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1104_OffsetPadding_forAlignmentOnly[1104];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1104_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1120_OffsetPadding[1120];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1120;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1120_OffsetPadding_forAlignmentOnly[1120];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1120_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1136_OffsetPadding[1136];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1136;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1136_OffsetPadding_forAlignmentOnly[1136];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1136_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1152_OffsetPadding[1152];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1152;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1152_OffsetPadding_forAlignmentOnly[1152];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1152_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1168_OffsetPadding[1168];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1168;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1168_OffsetPadding_forAlignmentOnly[1168];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1168_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1184_OffsetPadding[1184];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1184;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1184_OffsetPadding_forAlignmentOnly[1184];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1184_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1200_OffsetPadding[1200];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1200;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1200_OffsetPadding_forAlignmentOnly[1200];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1200_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1216_OffsetPadding[1216];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1216;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1216_OffsetPadding_forAlignmentOnly[1216];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1216_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1232_OffsetPadding[1232];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1232;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1232_OffsetPadding_forAlignmentOnly[1232];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1232_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1248_OffsetPadding[1248];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1248;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1248_OffsetPadding_forAlignmentOnly[1248];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1248_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1264_OffsetPadding[1264];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1264;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1264_OffsetPadding_forAlignmentOnly[1264];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1264_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1280_OffsetPadding[1280];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1280;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1280_OffsetPadding_forAlignmentOnly[1280];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1280_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1296_OffsetPadding[1296];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1296;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1296_OffsetPadding_forAlignmentOnly[1296];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1296_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1312_OffsetPadding[1312];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1312;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1312_OffsetPadding_forAlignmentOnly[1312];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1312_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1328_OffsetPadding[1328];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1328;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1328_OffsetPadding_forAlignmentOnly[1328];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1328_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1344_OffsetPadding[1344];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1344;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1344_OffsetPadding_forAlignmentOnly[1344];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1344_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1360_OffsetPadding[1360];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1360;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1360_OffsetPadding_forAlignmentOnly[1360];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1360_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1376_OffsetPadding[1376];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1376;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1376_OffsetPadding_forAlignmentOnly[1376];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1376_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1392_OffsetPadding[1392];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1392;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1392_OffsetPadding_forAlignmentOnly[1392];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1392_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1408_OffsetPadding[1408];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1408;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1408_OffsetPadding_forAlignmentOnly[1408];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1408_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1424_OffsetPadding[1424];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1424;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1424_OffsetPadding_forAlignmentOnly[1424];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1424_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1440_OffsetPadding[1440];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1440;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1440_OffsetPadding_forAlignmentOnly[1440];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1440_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1456_OffsetPadding[1456];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1456;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1456_OffsetPadding_forAlignmentOnly[1456];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1456_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1472_OffsetPadding[1472];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1472;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1472_OffsetPadding_forAlignmentOnly[1472];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1472_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1488_OffsetPadding[1488];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1488;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1488_OffsetPadding_forAlignmentOnly[1488];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1488_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1504_OffsetPadding[1504];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1504;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1504_OffsetPadding_forAlignmentOnly[1504];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1504_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1520_OffsetPadding[1520];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1520;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1520_OffsetPadding_forAlignmentOnly[1520];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1520_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1536_OffsetPadding[1536];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1536;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1536_OffsetPadding_forAlignmentOnly[1536];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1536_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1552_OffsetPadding[1552];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1552;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1552_OffsetPadding_forAlignmentOnly[1552];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1552_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1568_OffsetPadding[1568];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1568;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1568_OffsetPadding_forAlignmentOnly[1568];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1568_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1584_OffsetPadding[1584];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1584;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1584_OffsetPadding_forAlignmentOnly[1584];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1584_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1600_OffsetPadding[1600];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1600;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1600_OffsetPadding_forAlignmentOnly[1600];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1600_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1616_OffsetPadding[1616];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1616;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1616_OffsetPadding_forAlignmentOnly[1616];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1616_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1632_OffsetPadding[1632];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1632;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1632_OffsetPadding_forAlignmentOnly[1632];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1632_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1648_OffsetPadding[1648];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1648;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1648_OffsetPadding_forAlignmentOnly[1648];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1648_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1664_OffsetPadding[1664];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1664;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1664_OffsetPadding_forAlignmentOnly[1664];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1664_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1680_OffsetPadding[1680];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1680;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1680_OffsetPadding_forAlignmentOnly[1680];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1680_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1696_OffsetPadding[1696];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1696;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1696_OffsetPadding_forAlignmentOnly[1696];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1696_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1712_OffsetPadding[1712];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1712;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1712_OffsetPadding_forAlignmentOnly[1712];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1712_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1728_OffsetPadding[1728];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1728;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1728_OffsetPadding_forAlignmentOnly[1728];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1728_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1744_OffsetPadding[1744];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1744;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1744_OffsetPadding_forAlignmentOnly[1744];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1744_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1760_OffsetPadding[1760];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1760;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1760_OffsetPadding_forAlignmentOnly[1760];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1760_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1776_OffsetPadding[1776];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1776;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1776_OffsetPadding_forAlignmentOnly[1776];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1776_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1792_OffsetPadding[1792];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1792;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1792_OffsetPadding_forAlignmentOnly[1792];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1792_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1808_OffsetPadding[1808];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1808;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1808_OffsetPadding_forAlignmentOnly[1808];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1808_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1824_OffsetPadding[1824];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1824;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1824_OffsetPadding_forAlignmentOnly[1824];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1824_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1840_OffsetPadding[1840];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1840;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1840_OffsetPadding_forAlignmentOnly[1840];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1840_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1856_OffsetPadding[1856];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1856;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1856_OffsetPadding_forAlignmentOnly[1856];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1856_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1872_OffsetPadding[1872];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1872;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1872_OffsetPadding_forAlignmentOnly[1872];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1872_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1888_OffsetPadding[1888];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1888;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1888_OffsetPadding_forAlignmentOnly[1888];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1888_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1904_OffsetPadding[1904];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1904;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1904_OffsetPadding_forAlignmentOnly[1904];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1904_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1920_OffsetPadding[1920];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1920;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1920_OffsetPadding_forAlignmentOnly[1920];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1920_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1936_OffsetPadding[1936];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1936;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1936_OffsetPadding_forAlignmentOnly[1936];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1936_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1952_OffsetPadding[1952];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1952;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1952_OffsetPadding_forAlignmentOnly[1952];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1952_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1968_OffsetPadding[1968];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1968;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1968_OffsetPadding_forAlignmentOnly[1968];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1968_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset1984_OffsetPadding[1984];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1984;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset1984_OffsetPadding_forAlignmentOnly[1984];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset1984_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2000_OffsetPadding[2000];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2000;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2000_OffsetPadding_forAlignmentOnly[2000];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2016_OffsetPadding[2016];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2016_OffsetPadding_forAlignmentOnly[2016];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2032_OffsetPadding[2032];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2032_OffsetPadding_forAlignmentOnly[2032];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2048_OffsetPadding[2048];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2048_OffsetPadding_forAlignmentOnly[2048];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2064_OffsetPadding[2064];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2064_OffsetPadding_forAlignmentOnly[2064];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2080_OffsetPadding[2080];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2080_OffsetPadding_forAlignmentOnly[2080];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2096_OffsetPadding[2096];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2096_OffsetPadding_forAlignmentOnly[2096];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2112_OffsetPadding[2112];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2112_OffsetPadding_forAlignmentOnly[2112];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2128_OffsetPadding[2128];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2128_OffsetPadding_forAlignmentOnly[2128];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2144_OffsetPadding[2144];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2144_OffsetPadding_forAlignmentOnly[2144];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2160_OffsetPadding[2160];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2160_OffsetPadding_forAlignmentOnly[2160];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2176_OffsetPadding[2176];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2176_OffsetPadding_forAlignmentOnly[2176];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2192_OffsetPadding[2192];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2192_OffsetPadding_forAlignmentOnly[2192];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2208_OffsetPadding[2208];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2208_OffsetPadding_forAlignmentOnly[2208];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2224_OffsetPadding[2224];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2224_OffsetPadding_forAlignmentOnly[2224];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2240_OffsetPadding[2240];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2240_OffsetPadding_forAlignmentOnly[2240];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2256_OffsetPadding[2256];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2256_OffsetPadding_forAlignmentOnly[2256];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2272_OffsetPadding[2272];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2272;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2272_OffsetPadding_forAlignmentOnly[2272];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2272_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2288_OffsetPadding[2288];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2288;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2288_OffsetPadding_forAlignmentOnly[2288];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2288_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2304_OffsetPadding[2304];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2304;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2304_OffsetPadding_forAlignmentOnly[2304];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2304_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2320_OffsetPadding[2320];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2320;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2320_OffsetPadding_forAlignmentOnly[2320];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2320_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2336_OffsetPadding[2336];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2336;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2336_OffsetPadding_forAlignmentOnly[2336];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2336_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2352_OffsetPadding[2352];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2352;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2352_OffsetPadding_forAlignmentOnly[2352];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2352_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2368_OffsetPadding[2368];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2368;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2368_OffsetPadding_forAlignmentOnly[2368];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2368_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2384_OffsetPadding[2384];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2384;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2384_OffsetPadding_forAlignmentOnly[2384];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2384_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2400_OffsetPadding[2400];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2400;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2400_OffsetPadding_forAlignmentOnly[2400];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2400_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2416_OffsetPadding[2416];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2416;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2416_OffsetPadding_forAlignmentOnly[2416];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2416_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2432_OffsetPadding[2432];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2432;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2432_OffsetPadding_forAlignmentOnly[2432];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2432_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2448_OffsetPadding[2448];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2448;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2448_OffsetPadding_forAlignmentOnly[2448];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2448_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2464_OffsetPadding[2464];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2464;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2464_OffsetPadding_forAlignmentOnly[2464];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2464_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2480_OffsetPadding[2480];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2480;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2480_OffsetPadding_forAlignmentOnly[2480];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2480_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2496_OffsetPadding[2496];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2496;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2496_OffsetPadding_forAlignmentOnly[2496];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2496_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2512_OffsetPadding[2512];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2512;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2512_OffsetPadding_forAlignmentOnly[2512];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2512_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2528_OffsetPadding[2528];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2528;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2528_OffsetPadding_forAlignmentOnly[2528];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2528_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2544_OffsetPadding[2544];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2544;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2544_OffsetPadding_forAlignmentOnly[2544];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2544_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2560_OffsetPadding[2560];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2560;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2560_OffsetPadding_forAlignmentOnly[2560];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2560_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2576_OffsetPadding[2576];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2576;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2576_OffsetPadding_forAlignmentOnly[2576];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2576_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2592_OffsetPadding[2592];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2592;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2592_OffsetPadding_forAlignmentOnly[2592];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2592_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2608_OffsetPadding[2608];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2608;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2608_OffsetPadding_forAlignmentOnly[2608];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2608_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2624_OffsetPadding[2624];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2624;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2624_OffsetPadding_forAlignmentOnly[2624];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2624_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2640_OffsetPadding[2640];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2640;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2640_OffsetPadding_forAlignmentOnly[2640];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2640_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2656_OffsetPadding[2656];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2656;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2656_OffsetPadding_forAlignmentOnly[2656];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2656_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2672_OffsetPadding[2672];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2672;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2672_OffsetPadding_forAlignmentOnly[2672];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2672_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2688_OffsetPadding[2688];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2688;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2688_OffsetPadding_forAlignmentOnly[2688];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2688_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2704_OffsetPadding[2704];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2704;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2704_OffsetPadding_forAlignmentOnly[2704];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2704_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2720_OffsetPadding[2720];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2720;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2720_OffsetPadding_forAlignmentOnly[2720];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2720_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2736_OffsetPadding[2736];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2736;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2736_OffsetPadding_forAlignmentOnly[2736];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2736_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2752_OffsetPadding[2752];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2752;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2752_OffsetPadding_forAlignmentOnly[2752];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2752_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2768_OffsetPadding[2768];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2768;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2768_OffsetPadding_forAlignmentOnly[2768];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2768_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2784_OffsetPadding[2784];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2784;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2784_OffsetPadding_forAlignmentOnly[2784];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2784_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2800_OffsetPadding[2800];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2800;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2800_OffsetPadding_forAlignmentOnly[2800];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2800_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2816_OffsetPadding[2816];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2816;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2816_OffsetPadding_forAlignmentOnly[2816];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2816_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2832_OffsetPadding[2832];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2832;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2832_OffsetPadding_forAlignmentOnly[2832];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2832_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2848_OffsetPadding[2848];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2848;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2848_OffsetPadding_forAlignmentOnly[2848];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2848_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2864_OffsetPadding[2864];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2864;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2864_OffsetPadding_forAlignmentOnly[2864];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2864_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2880_OffsetPadding[2880];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2880;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2880_OffsetPadding_forAlignmentOnly[2880];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2880_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2896_OffsetPadding[2896];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2896;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2896_OffsetPadding_forAlignmentOnly[2896];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2896_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2912_OffsetPadding[2912];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2912;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2912_OffsetPadding_forAlignmentOnly[2912];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2912_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2928_OffsetPadding[2928];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2928;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2928_OffsetPadding_forAlignmentOnly[2928];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2928_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2944_OffsetPadding[2944];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2944;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2944_OffsetPadding_forAlignmentOnly[2944];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2944_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2960_OffsetPadding[2960];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2960;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2960_OffsetPadding_forAlignmentOnly[2960];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2960_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2976_OffsetPadding[2976];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2976;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2976_OffsetPadding_forAlignmentOnly[2976];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2976_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset2992_OffsetPadding[2992];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2992;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset2992_OffsetPadding_forAlignmentOnly[2992];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset2992_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3008_OffsetPadding[3008];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3008;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3008_OffsetPadding_forAlignmentOnly[3008];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3008_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3024_OffsetPadding[3024];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3024;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3024_OffsetPadding_forAlignmentOnly[3024];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3024_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3040_OffsetPadding[3040];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3040;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3040_OffsetPadding_forAlignmentOnly[3040];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3040_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3056_OffsetPadding[3056];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3056;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3056_OffsetPadding_forAlignmentOnly[3056];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3056_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3072_OffsetPadding[3072];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3072;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3072_OffsetPadding_forAlignmentOnly[3072];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3072_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3088_OffsetPadding[3088];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3088;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3088_OffsetPadding_forAlignmentOnly[3088];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3088_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3104_OffsetPadding[3104];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3104;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3104_OffsetPadding_forAlignmentOnly[3104];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3104_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3120_OffsetPadding[3120];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3120;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3120_OffsetPadding_forAlignmentOnly[3120];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3120_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3136_OffsetPadding[3136];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3136;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3136_OffsetPadding_forAlignmentOnly[3136];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3136_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3152_OffsetPadding[3152];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3152;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3152_OffsetPadding_forAlignmentOnly[3152];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3152_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3168_OffsetPadding[3168];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3168;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3168_OffsetPadding_forAlignmentOnly[3168];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3168_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3184_OffsetPadding[3184];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3184;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3184_OffsetPadding_forAlignmentOnly[3184];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3184_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3200_OffsetPadding[3200];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3200;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3200_OffsetPadding_forAlignmentOnly[3200];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3200_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3216_OffsetPadding[3216];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3216;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3216_OffsetPadding_forAlignmentOnly[3216];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3216_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3232_OffsetPadding[3232];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3232;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3232_OffsetPadding_forAlignmentOnly[3232];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3232_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3248_OffsetPadding[3248];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3248;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3248_OffsetPadding_forAlignmentOnly[3248];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3248_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3264_OffsetPadding[3264];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3264;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3264_OffsetPadding_forAlignmentOnly[3264];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3264_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3280_OffsetPadding[3280];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3280;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3280_OffsetPadding_forAlignmentOnly[3280];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3280_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3296_OffsetPadding[3296];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3296;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3296_OffsetPadding_forAlignmentOnly[3296];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3296_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3312_OffsetPadding[3312];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3312;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3312_OffsetPadding_forAlignmentOnly[3312];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3312_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3328_OffsetPadding[3328];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3328;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3328_OffsetPadding_forAlignmentOnly[3328];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3328_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3344_OffsetPadding[3344];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3344;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3344_OffsetPadding_forAlignmentOnly[3344];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3344_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3360_OffsetPadding[3360];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3360;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3360_OffsetPadding_forAlignmentOnly[3360];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3360_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3376_OffsetPadding[3376];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3376;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3376_OffsetPadding_forAlignmentOnly[3376];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3376_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3392_OffsetPadding[3392];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3392;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3392_OffsetPadding_forAlignmentOnly[3392];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3392_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3408_OffsetPadding[3408];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3408;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3408_OffsetPadding_forAlignmentOnly[3408];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3408_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3424_OffsetPadding[3424];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3424;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3424_OffsetPadding_forAlignmentOnly[3424];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3424_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3440_OffsetPadding[3440];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3440;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3440_OffsetPadding_forAlignmentOnly[3440];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3440_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3456_OffsetPadding[3456];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3456;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3456_OffsetPadding_forAlignmentOnly[3456];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3456_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3472_OffsetPadding[3472];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3472;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3472_OffsetPadding_forAlignmentOnly[3472];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3472_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3488_OffsetPadding[3488];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3488;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3488_OffsetPadding_forAlignmentOnly[3488];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3488_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3504_OffsetPadding[3504];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3504;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3504_OffsetPadding_forAlignmentOnly[3504];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3504_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3520_OffsetPadding[3520];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3520;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3520_OffsetPadding_forAlignmentOnly[3520];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3520_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3536_OffsetPadding[3536];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3536;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3536_OffsetPadding_forAlignmentOnly[3536];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3536_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3552_OffsetPadding[3552];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3552;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3552_OffsetPadding_forAlignmentOnly[3552];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3552_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3568_OffsetPadding[3568];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3568;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3568_OffsetPadding_forAlignmentOnly[3568];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3568_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3584_OffsetPadding[3584];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3584;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3584_OffsetPadding_forAlignmentOnly[3584];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3584_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3600_OffsetPadding[3600];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3600;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3600_OffsetPadding_forAlignmentOnly[3600];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3600_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3616_OffsetPadding[3616];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3616;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3616_OffsetPadding_forAlignmentOnly[3616];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3616_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3632_OffsetPadding[3632];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3632;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3632_OffsetPadding_forAlignmentOnly[3632];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3632_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3648_OffsetPadding[3648];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3648;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3648_OffsetPadding_forAlignmentOnly[3648];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3648_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3664_OffsetPadding[3664];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3664;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3664_OffsetPadding_forAlignmentOnly[3664];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3664_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3680_OffsetPadding[3680];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3680;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3680_OffsetPadding_forAlignmentOnly[3680];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3680_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3696_OffsetPadding[3696];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3696;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3696_OffsetPadding_forAlignmentOnly[3696];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3696_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3712_OffsetPadding[3712];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3712;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3712_OffsetPadding_forAlignmentOnly[3712];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3712_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3728_OffsetPadding[3728];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3728;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3728_OffsetPadding_forAlignmentOnly[3728];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3728_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3744_OffsetPadding[3744];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3744;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3744_OffsetPadding_forAlignmentOnly[3744];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3744_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3760_OffsetPadding[3760];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3760;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3760_OffsetPadding_forAlignmentOnly[3760];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3760_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3776_OffsetPadding[3776];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3776;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3776_OffsetPadding_forAlignmentOnly[3776];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3776_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3792_OffsetPadding[3792];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3792;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3792_OffsetPadding_forAlignmentOnly[3792];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3792_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3808_OffsetPadding[3808];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3808;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3808_OffsetPadding_forAlignmentOnly[3808];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3808_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3824_OffsetPadding[3824];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3824;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3824_OffsetPadding_forAlignmentOnly[3824];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3824_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3840_OffsetPadding[3840];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3840;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3840_OffsetPadding_forAlignmentOnly[3840];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3840_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3856_OffsetPadding[3856];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3856;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3856_OffsetPadding_forAlignmentOnly[3856];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3856_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3872_OffsetPadding[3872];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3872;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3872_OffsetPadding_forAlignmentOnly[3872];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3872_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3888_OffsetPadding[3888];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3888;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3888_OffsetPadding_forAlignmentOnly[3888];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3888_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3904_OffsetPadding[3904];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3904;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3904_OffsetPadding_forAlignmentOnly[3904];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3904_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3920_OffsetPadding[3920];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3920;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3920_OffsetPadding_forAlignmentOnly[3920];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3920_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3936_OffsetPadding[3936];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3936;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3936_OffsetPadding_forAlignmentOnly[3936];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3936_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3952_OffsetPadding[3952];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3952;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3952_OffsetPadding_forAlignmentOnly[3952];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3952_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3968_OffsetPadding[3968];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3968;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3968_OffsetPadding_forAlignmentOnly[3968];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3968_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset3984_OffsetPadding[3984];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3984;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset3984_OffsetPadding_forAlignmentOnly[3984];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset3984_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4000_OffsetPadding[4000];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4000;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4000_OffsetPadding_forAlignmentOnly[4000];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4016_OffsetPadding[4016];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4016_OffsetPadding_forAlignmentOnly[4016];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4032_OffsetPadding[4032];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4032_OffsetPadding_forAlignmentOnly[4032];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4048_OffsetPadding[4048];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4048_OffsetPadding_forAlignmentOnly[4048];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4064_OffsetPadding[4064];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4064_OffsetPadding_forAlignmentOnly[4064];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset4080_OffsetPadding[4080];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset4080_OffsetPadding_forAlignmentOnly[4080];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset4080_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086__padding[4096];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0064_OffsetPadding[64];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0064;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0064_OffsetPadding_forAlignmentOnly[64];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0064_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0080_OffsetPadding[80];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0080;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0080_OffsetPadding_forAlignmentOnly[80];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0080_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0096_OffsetPadding[96];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0096;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0096_OffsetPadding_forAlignmentOnly[96];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0096_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0112_OffsetPadding[112];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0112;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0112_OffsetPadding_forAlignmentOnly[112];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0112_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0128_OffsetPadding[128];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0128;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0128_OffsetPadding_forAlignmentOnly[128];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0128_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0144_OffsetPadding[144];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0144;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0144_OffsetPadding_forAlignmentOnly[144];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0144_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0160_OffsetPadding[160];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0160;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0160_OffsetPadding_forAlignmentOnly[160];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0160_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0176_OffsetPadding[176];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0176;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0176_OffsetPadding_forAlignmentOnly[176];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0176_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0192_OffsetPadding[192];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0192;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0192_OffsetPadding_forAlignmentOnly[192];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0192_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0208_OffsetPadding[208];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0208;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0208_OffsetPadding_forAlignmentOnly[208];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0208_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0224_OffsetPadding[224];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0224;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0224_OffsetPadding_forAlignmentOnly[224];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0224_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0240_OffsetPadding[240];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0240;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0240_OffsetPadding_forAlignmentOnly[240];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0240_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0256_OffsetPadding[256];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0256;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0256_OffsetPadding_forAlignmentOnly[256];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0256_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0272_OffsetPadding[272];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0272;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0272_OffsetPadding_forAlignmentOnly[272];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0272_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0288_OffsetPadding[288];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0288;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0288_OffsetPadding_forAlignmentOnly[288];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0288_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0304_OffsetPadding[304];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0304;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0304_OffsetPadding_forAlignmentOnly[304];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0304_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0320_OffsetPadding[320];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0320;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0320_OffsetPadding_forAlignmentOnly[320];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0320_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0336_OffsetPadding[336];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0336;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0336_OffsetPadding_forAlignmentOnly[336];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0336_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0352_OffsetPadding[352];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0352;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0352_OffsetPadding_forAlignmentOnly[352];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0352_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0368_OffsetPadding[368];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0368;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0368_OffsetPadding_forAlignmentOnly[368];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0368_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0384_OffsetPadding[384];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0384;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0384_OffsetPadding_forAlignmentOnly[384];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0384_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0400_OffsetPadding[400];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0400;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0400_OffsetPadding_forAlignmentOnly[400];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0400_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0416_OffsetPadding[416];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0416;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0416_OffsetPadding_forAlignmentOnly[416];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0416_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0432_OffsetPadding[432];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0432;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0432_OffsetPadding_forAlignmentOnly[432];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0432_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0448_OffsetPadding[448];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0448;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0448_OffsetPadding_forAlignmentOnly[448];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0448_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0464_OffsetPadding[464];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0464;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0464_OffsetPadding_forAlignmentOnly[464];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0464_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0480_OffsetPadding[480];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0480;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0480_OffsetPadding_forAlignmentOnly[480];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0480_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0496_OffsetPadding[496];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0496;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0496_OffsetPadding_forAlignmentOnly[496];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0496_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E__padding[512];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000;
				};
				#pragma pack(pop, tp)
				struct
				{
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0000_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0016_OffsetPadding[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0016_OffsetPadding_forAlignmentOnly[16];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0016_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0032_OffsetPadding[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0032_OffsetPadding_forAlignmentOnly[32];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0032_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					char ___offset0048_OffsetPadding[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048;
				};
				#pragma pack(pop, tp)
				struct
				{
					char ___offset0048_OffsetPadding_forAlignmentOnly[48];
					FixedBytes16Align8_t94D49B0852778B92D3912ABC4979B11ADF6ECEE4 ___offset0048_forAlignmentOnly;
				};
			};
		};
		uint8_t FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1__padding[64];
	};
};
#pragma pack(pop, tp)
struct InputUpdateType_t31A66F5342D924983382FA675EF78007C04EC590 
{
	int32_t ___value__;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct LightType_t2D4D43054E7473EECEB54493C0055AE074780234 
{
	int32_t ___value__;
};
struct MaterialPropertyValueType_t3AE79BF4BF4F82EFA7E2ED2CB4EC5BAB096BC5A8 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PropertyPathPartKind_t82152825D88A0E450DDCE8503272A10595047F87 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct UCircle_tC29A5FA379CDA3DB1DC29260A1A6F2998CFE8C6A 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___center;
	float ___radius;
};
struct UCircle_t867F766ACBC8203697A5637D6046595BBCA3A156 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___center;
	float ___radius;
};
struct UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___a;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___b;
	int32_t ___idx;
	ArraySlice_1_t62CE85979628F3D63985E52623CBDB8E8CEDF91C ___ilarray;
	int32_t ___ilcount;
	ArraySlice_1_t62CE85979628F3D63985E52623CBDB8E8CEDF91C ___iuarray;
	int32_t ___iucount;
};
struct UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cursorPos;
	float ___charWidth;
};
struct UIToolkitBatchMetricsInfo_tA5349B40F7E434CD3CB13205A211A8BD81D7DCE3 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___panelEntityId;
	uint32_t ___drawCallCount;
	uint32_t ___vertexCount;
	uint32_t ___indexCount;
	uint32_t ___immediateDraws;
	uint32_t ___drawRangeCount;
	uint8_t ___kickRangesReason;
	uint8_t ___isRenderingNestedTreeRT;
	uint32_t ___ownerOffset;
	uint32_t ___ownerCount;
};
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___prevPosition;
};
struct UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 
{
	ArraySlice_1_t173FD3ACCC2631A439B59982D6322FFDC51B753B ___points;
	int32_t ___pointCount;
};
struct UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D 
{
	ArraySlice_1_t62CE85979628F3D63985E52623CBDB8E8CEDF91C ___points;
	int32_t ___pointCount;
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct VertexAttributeFormat_tD714C51E671502B116ACE5E23F042BA80649D32F 
{
	int32_t ___value__;
};
struct VertexFlags_t4332E863C191870E63009EBE5F6E77D6D176C4FF 
{
	uint16_t ___value__;
};
struct Visibility_t1AEE2D871B126DD95D6F1D3B36EC92FE0D489F47 
{
	int32_t ___value__;
};
struct VisibleLightFlags_t337DB92EFB0014AD6A250E1E45338B1194657CD8 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct WhiteSpace_t05265AA4B0C087FAE778422383EA36AF84EDCDD2 
{
	int32_t ___value__;
};
struct Wrap_tDDCA30F27EC4967717380ECCC67C0818EFA8BC53 
{
	int32_t ___value__;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	bool ___isPrevViewMatrixValid;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_pinvoke
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	int32_t ___isPrevViewMatrixValid;
};
struct XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5_marshaled_com
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___projMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___prevViewMatrix;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___viewport;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___occlusionMesh;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___visibleMesh;
	int32_t ___textureArraySlice;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___eyeCenterUV;
	int32_t ___isPrevViewMatrixValid;
};
struct float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c0;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c1;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c2;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___c3;
};
struct quaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA 
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___value;
};
struct PolyType_t61D62010DE1E30694B2F823BDFBA120B776ABAD7 
{
	int32_t ___value__;
};
struct EndType_t44002443DAAFEF649DA75F399F4A5CE38B2D9126 
{
	int32_t ___value__;
};
struct JoinType_tCC38C44CB0E5130C3761EFECF52EBDDD9EEC417D 
{
	int32_t ___value__;
};
struct SettingsOptions_t935A71692F21EE9D959FCAC00574AA018F8BA2CB 
{
	uint16_t ___value__;
};
struct Enumerator_tC7F9FC392F31259463E947A9921FD0CC8FFE507A 
{
	ReadOnly_t80D4186B45F260CEC0B99D37EA057D82CFAFC95C ___m_Array;
	int32_t ___m_Index;
	UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 ___value;
};
struct Enumerator_t0098B077053A0953001EC6976C59DB42D1E94288 
{
	List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ____list;
	int32_t ____index;
	int32_t ____version;
	UICharInfo_t24C2EA0F2F3A938100C271891D9DEB015ABA5FBD ____current;
};
struct Enumerator_tD06ED9C67FA89C939B74FE0B8F2A6A7963D78F42 
{
	ReadOnly_tF438F6D1DCDDED408C63C0A47A7A14047CEB6763 ___m_Array;
	int32_t ___m_Index;
	UIToolkitBatchMetricsInfo_tA5349B40F7E434CD3CB13205A211A8BD81D7DCE3 ___value;
};
struct Enumerator_t2A3825EA72200C0EE83D19C6B3493626FA1B45B4 
{
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ____list;
	int32_t ____index;
	int32_t ____version;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ____current;
};
struct Enumerator_t0AF2D76A2B8772353E8A90AD901D4B24FA3BBF0A 
{
	ReadOnly_tF435F02B41C30EC03574D91D8B55CB82608E4BC8 ___m_Array;
	int32_t ___m_Index;
	UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 ___value;
};
struct Enumerator_tC6D890531900E4CE61E03530469E7860652034C7 
{
	ReadOnly_t9A57BBD1B3A10C999618EE729703812CA861D0A0 ___m_Array;
	int32_t ___m_Index;
	UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D ___value;
};
struct Enumerator_tAC9DA573F18CCF467840CF67ED916C1DC9AFE9E7 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t21A4859668E56DC3C957A5FDB63D82E0CFE3C025 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_tB9311B9A76ACBE1E7BCB9A6CF7FC3C4B274F6E92 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t2316CEF8BBC3E5916AA310DDFDDD05C6D1A47622 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t07EC55B572604AE2C4C928B8E3F11A9733036560 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t98F3526D06B9B60F2132B38E1D5D3DB693DBD590 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t69ECEEF0D05322EAE9A970B8BF0CECCD9150507E 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t0F0825A75127850C6101AA3832F4031AB61B7B0C ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t787FDFBCE511E8C3B294D3127542C3EA46582D47 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t301DFE2836515D00CF5BBD0364F6C0547EAC0EC1 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t08C28023F7DBAF5AD3FE02F450C014CBE1345A34 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t459E03B2FD4DD66999C813268BDCCCECE4BD47AC ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_tCC8BC508765EA26FEF9D9087511CB8197DB839D0 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t9A622AB74A6417668F8A49BFFB1D11B25A329248 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_tA2E7BC44D8B66A16B24855D9EE5D482068E2B9C2 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_tA2DAF234D0BEBCCA6944A6E989C24F6A56AF9EE1 
{
	List_1_t7B0B015A57215073C45C813320AF5F3ECF8149F7* ____list;
	int32_t ____index;
	int32_t ____version;
	XRView_t70E23918C68E24DB22A8614AA8717B3BA213FAB5 ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE;
struct Enumerator_t68131B3CCF46CB6AE538F8487260FD636EA8416D 
{
	ReadOnly_t86B3AB6727FB0CF3474F5B7BEBDA30FC9F9951D2 ___m_Array;
	int32_t ___m_Index;
	float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA ___value;
};
struct Enumerator_t211A2F862AEE8F7639057FBEDECA39E0DBDB2503 
{
	ReadOnly_tFE401659B89F60F5BA086E0F0188F15A42C18E4D ___m_Array;
	int32_t ___m_Index;
	quaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA ___value;
};
struct FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D 
{
	alignas(8) FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18 ___data;
};
struct FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF 
{
	alignas(8) FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779 ___data;
};
struct FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0 
{
	alignas(8) FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086 ___data;
};
struct FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F 
{
	alignas(8) FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E ___data;
};
struct FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3 
{
	alignas(8) FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1 ___data;
};
struct IndexedCollectionPropertyBagEnumerator_1_t54E5EC43320B43386BAC9BD95919BC8AFF96CDC1 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	int32_t ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t525D86DA1644A0BE3CFE6B0578CECA57A52391BB 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	int32_t ___m_Container;
	int32_t ___m_Position;
};
struct IndexedCollectionPropertyBagEnumerator_1_t9066C19946C6B9502B883FAF4B0AA9FB74B47690 
{
	RuntimeObject* ___m_Impl;
	IndexedCollectionSharedPropertyState_t1E4ED168A72271A87F5FCFCBBF19BBB63F95FC79 ___m_Previous;
	int32_t ___m_Container;
	int32_t ___m_Position;
};
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4826BA73390AB58313C2659BFC62C895AD3B08AB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD3E166440DED38454F2B25BF9A375A5EBF8C47AB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD5EA89AF36723354B77FA5C7BF0EDDC7A5947582 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t5C6007492812CF4242218CF8F004648044901131 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9D3993C203DF036C34CDD1F41416541D312F1587 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t21CCCF3F852F2C88956531DDBEE7D161399D1ADD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t113406E16457EBB6F723AA50A3A4A0EA14B8AFD2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3CC4179AFF43449D3539816D3EE4D2D69B6022E8 
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
struct NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2E87C5C3A9E2CE7790C5229150C0DEDA038B4A62 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t65103B0A2CE970921707A501B10EF5AAC2C8DD8B 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t2FEAC97D235FA3AC2CF64ECF72C860EAA0F44429 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD8A05F96A9BE1CAAA4C877FA4B9D07ABD8E909E1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 
{
	bool ___hasValue;
	int32_t ___value;
};
struct FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 
{
	int32_t ___m_Type;
	float ___m_FloatValue;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_ColorValue;
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
struct UTriangle_t8058F44B73B054F659C538A0787B0A3DCEF08A3E 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___va;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___vb;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___vc;
	UCircle_tC29A5FA379CDA3DB1DC29260A1A6F2998CFE8C6A ___c;
	float ___area;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___indices;
};
struct UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F 
{
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___va;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___vb;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___vc;
	UCircle_t867F766ACBC8203697A5637D6046595BBCA3A156 ___c;
	float ___area;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___indices;
};
struct UnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75 
{
	int32_t ___name;
	int32_t ___type;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___packedValue;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___textureValue;
};
struct Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___tint;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___layoutUV;
	uint16_t ___clipRectId;
	uint16_t ___elementId;
	uint16_t ___dynamicColorOrTextCoreId;
	uint16_t ____reserved2;
	uint16_t ___flags;
	uint16_t ___textureId;
	uint16_t ___svgGradientIndex;
	uint16_t ____reserved;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___circle;
};
struct VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 
{
	int32_t ___U3CattributeU3Ek__BackingField;
	int32_t ___U3CformatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CstreamU3Ek__BackingField;
};
struct VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 
{
	int32_t ___m_LightType;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_FinalColor;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ScreenRect;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	float ___m_Range;
	float ___m_SpotAngle;
	float ___m_InnerSpotAngle;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_AreaSize;
	float ___m_ShapeRadius;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	int32_t ___m_Flags;
};
struct VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B 
{
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_Bounds;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_LocalToWorldMatrix;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_HdrData;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	float ___m_BlendDistance;
	int32_t ___m_Importance;
	int32_t ___m_BoxProjection;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_EntityId;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_TextureId;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 
{
	String_t* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_pinvoke
{
	char* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2_marshaled_com
{
	Il2CppChar* ___name;
	List_1_t41896DF347A129D13205BBFADE03DFB21E05E459* ___usageHints;
	int32_t ___featureType;
	uint32_t ___customSize;
};
struct ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___perLightShadowSliceIndex;
	uint16_t ___requestedResolution;
	uint16_t ___offsetX;
	uint16_t ___offsetY;
	uint16_t ___allocatedResolution;
	uint16_t ___m_ShadowProperties;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C 
{
	int32_t ___polyType;
	bool ___closed;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C_marshaled_pinvoke
{
	int32_t ___polyType;
	int32_t ___closed;
};
struct PathArguments_t445220F54870AED8F8384306CF72A316887AD98C_marshaled_com
{
	int32_t ___polyType;
	int32_t ___closed;
};
struct PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1 
{
	int32_t ___joinType;
	int32_t ___endType;
};
struct Enumerator_tF91218593CFA69CD053D3BC1B939820F12DA7EAE 
{
	NativeArray_1_t4826BA73390AB58313C2659BFC62C895AD3B08AB ___m_Array;
	int32_t ___m_Index;
	UHull_tBA3DC6A41F928298B0D924EDFE00150F307BA851 ___value;
};
struct Enumerator_t01E5B0097D7478C0C1193EE125481CE89776318D 
{
	NativeArray_1_tD3E166440DED38454F2B25BF9A375A5EBF8C47AB ___m_Array;
	int32_t ___m_Index;
	UIToolkitBatchMetricsInfo_tA5349B40F7E434CD3CB13205A211A8BD81D7DCE3 ___value;
};
struct Enumerator_tFAF4DDCDFC83FE9C345CABAC11A3C6B3C61F0FA3 
{
	NativeArray_1_t275C00CC374DEA66C69B3BB3992116F315A8E934 ___m_Array;
	int32_t ___m_Index;
	uint16_t ___value;
};
struct Enumerator_t7A1B40194DFE4433619D05C18151E503F2599EDF 
{
	NativeArray_1_t453E3DEA4CC9F1056F24E417C3308C35174BC184 ___m_Array;
	int32_t ___m_Index;
	uint32_t ___value;
};
struct Enumerator_t31DB1DEE8F86E3A6D7FF11AF837913B1D03DC579 
{
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Array;
	int32_t ___m_Index;
	uint64_t ___value;
};
struct Enumerator_t7C3798B9CD37CA42D5BAD2CF8A2BB9F4765D09B7 
{
	NativeArray_1_tD5EA89AF36723354B77FA5C7BF0EDDC7A5947582 ___m_Array;
	int32_t ___m_Index;
	UStar_t2600D12793B74BE9DBE602129A44F9970E5B8CD9 ___value;
};
struct Enumerator_tB4649B420F2B4574EA7166693E408B5E701CFB5C 
{
	NativeArray_1_t5C6007492812CF4242218CF8F004648044901131 ___m_Array;
	int32_t ___m_Index;
	UStar_tF8CA0D7A7A3197E68176CA173B07251554C7465D ___value;
};
struct Enumerator_t40D7648D39BD6BF2F07566DC77007F61BA31D2DA 
{
	NativeArray_1_t9D3993C203DF036C34CDD1F41416541D312F1587 ___m_Array;
	int32_t ___m_Index;
	UTriangle_t8058F44B73B054F659C538A0787B0A3DCEF08A3E ___value;
};
struct Enumerator_tFFCEBBE23E64E405039C57EA4485D1ECA35CD74B 
{
	ReadOnly_t2AC1EE62280D1ACAF6502FD43061B76831F7F825 ___m_Array;
	int32_t ___m_Index;
	UTriangle_t8058F44B73B054F659C538A0787B0A3DCEF08A3E ___value;
};
struct Enumerator_t73DED15FE2DAD50836BA69335762A0A0D0038155 
{
	NativeArray_1_tFCD22FDBFAF7DF7153A54881DCA04F98B3D0C5FB ___m_Array;
	int32_t ___m_Index;
	UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F ___value;
};
struct Enumerator_tC1CF207E872015D2CED7193C959F18F999A602D3 
{
	ReadOnly_t550EA4A70BDB8D88F9CE14274FF0EB7BAC6203DD ___m_Array;
	int32_t ___m_Index;
	UTriangle_t6D4513C8A4054BEEC30F937F14BBE005BC4A141F ___value;
};
struct Enumerator_tF402AE8FF2DC4BFD93AA771DC07B47AAE3EF3392 
{
	NativeArray_1_t113406E16457EBB6F723AA50A3A4A0EA14B8AFD2 ___m_Array;
	int32_t ___m_Index;
	UnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75 ___value;
};
struct Enumerator_t9C7B849CBF302232CE2EA52385D172D70AED6149 
{
	ReadOnly_t675727DB44DB9BDCDBF05AD477162B0E6FCA1229 ___m_Array;
	int32_t ___m_Index;
	UnmanagedMaterialPropertyValue_t32418EF3A65B66312EE3D81C88513C1116711B75 ___value;
};
struct Enumerator_t9546A307B348BAA3589D674ACBE72F15F19455C7 
{
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Array;
	int32_t ___m_Index;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value;
};
struct Enumerator_t0DFDA10CE1B5E4585E9D94C7637530880CE45F5A 
{
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Array;
	int32_t ___m_Index;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value;
};
struct Enumerator_t816C51500E5720141B1D6AC7831871A338F86BAA 
{
	NativeArray_1_t245D7224A42D1A32B87C64E49B7B434585EC91EF ___m_Array;
	int32_t ___m_Index;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___value;
};
struct Enumerator_t4DF53C1F78C0F39502FA84ADFE3174233CC07C00 
{
	NativeArray_1_t1319594EE236701FE431CF2885AEB88373076DA8 ___m_Array;
	int32_t ___m_Index;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___value;
};
struct Enumerator_t1589EC4D2EC492C49806E46445B120B5062C57FF 
{
	NativeArray_1_tB60512C6E4578B7CC8EB79321680E495E69ABF81 ___m_Array;
	int32_t ___m_Index;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___value;
};
struct Enumerator_tE8F3A5178B689AF458B541610BA2119EF12379EE 
{
	ReadOnly_tEC1B78AA9A46DB8AD1C5DBAE542E1B5A9A8DF8CE ___m_Array;
	int32_t ___m_Index;
	Vertex_t016AC68A2E6C62576E65412BEC71544AFC01AFC7 ___value;
};
struct Enumerator_t63330B4094998948CC09317F806BD56E90FFF8EC 
{
	List_1_tA7CAD0AC45F81CB3151C43DB534729898937504A* ____list;
	int32_t ____index;
	int32_t ____version;
	VertexAttributeDescriptor_tD4231FBF57335465D16308D2A18E8E83D36BFA76 ____current;
};
struct Enumerator_t445F87EEA6E6AC92E1BA186B7AE8DDD5514AAD55 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t8925FB47C03812518E4A2FA72614F9DF6E7BC900 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t54E5EC43320B43386BAC9BD95919BC8AFF96CDC1 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_t74DC91310B1C5EF28A7D5F1AEBE73D592C5CBFFE 
{
	NativeArray_1_t71485A1E60B31CCAD3E525C907CF172E8B804468 ___m_Array;
	int32_t ___m_Index;
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 ___value;
};
struct Enumerator_t6D1A6277C457F0F0D2DA0733F9EA3BBBA5638FA2 
{
	ReadOnly_tDAD0456355433E3A9DB77C242419A3C2B61FF7A1 ___m_Array;
	int32_t ___m_Index;
	VisibleLight_t0A4DF5B22865A00F618A0352B805277FA0132805 ___value;
};
struct Enumerator_tC191293166C9A01771C37368CC8027CCA916B2F2 
{
	NativeArray_1_t3CC4179AFF43449D3539816D3EE4D2D69B6022E8 ___m_Array;
	int32_t ___m_Index;
	VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B ___value;
};
struct Enumerator_tB4C80809F9AC66D159A59227A84147DCD5A80E65 
{
	ReadOnly_t9EC554A4C51E0E58FA55ED6550A28C34131B53F8 ___m_Array;
	int32_t ___m_Index;
	VisibleReflectionProbe_t8AF1FAD09A36E33F5101B683DB8E99582815EF0B ___value;
};
struct Enumerator_t3896F534A371E0D4D3C06F6A05FA1284B79DB1B0 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_t3DB6B256496A78585890809B8DADD57AFDDEBD49 ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t525D86DA1644A0BE3CFE6B0578CECA57A52391BB ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_tD8848D63FB8F3042E340D0B7701DABCFD33C3074 
{
	int32_t ___m_Type;
	RuntimeObject* ___m_Enumerator;
	Enumerator_tE6F11662226BE79E82B357013873FADA64A5444C ___m_Properties;
	IndexedCollectionPropertyBagEnumerator_1_t9066C19946C6B9502B883FAF4B0AA9FB74B47690 ___m_IndexedCollectionPropertyBag;
	RuntimeObject* ___U3CCurrentU3Ek__BackingField;
};
struct Enumerator_tB41744EFD7274B3F0B75074E72D0EB8C658D06A0 
{
	List_1_tB5E6131382BD8F3FB4090AD7EA52B72231DBDDCB* ____list;
	int32_t ____index;
	int32_t ____version;
	XRFeatureDescriptor_t690E672A6BBBEFBB8AF221485C1884507EAFB5B2 ____current;
};
struct Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B 
{
	FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D ___m_List;
	int32_t ___m_Index;
};
struct Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7 
{
	FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF ___m_List;
	int32_t ___m_Index;
};
struct Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C 
{
	FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0 ___m_List;
	int32_t ___m_Index;
};
struct Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97 
{
	FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F ___m_List;
	int32_t ___m_Index;
};
struct Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC 
{
	FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3 ___m_List;
	int32_t ___m_Index;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405;
struct Enumerator_tE1470541970778078D070FF8C523A55C7301DA38 
{
	NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* ___m_NativePagedList;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_CurrentPage;
	int32_t ___m_IndexInCurrentPage;
	int32_t ___m_IndexOfCurrentPage;
	int32_t ___m_CountInCurrentPage;
};
struct Enumerator_t086F40832AA89EEACA905FF48964FD071FE85EDF 
{
	NativeArray_1_tCB972646B31CE26CF7D4A25C752E15BFC8E1ACD9 ___m_Array;
	int32_t ___m_Index;
	double2_t2124FB15A5BDCC0BD48B80116D4B24DC9DCA9D83 ___value;
};
struct Enumerator_tC5036FB16ECE7E07ADB3653C24C04104449783FA 
{
	NativeArray_1_tB2C0A4BD42DDC767D3B622ACDDD0A5E3898E0F9C ___m_Array;
	int32_t ___m_Index;
	float2_t3398D7209CB6D09FEA5C49AC55070C5E7BE0B2A5 ___value;
};
struct Enumerator_t2B31801724586ED01AF5D5736CA9B763A0C445FD 
{
	NativeArray_1_t4CB8C2A6DBEDF6C671F933ADC9E21367D90886F3 ___m_Array;
	int32_t ___m_Index;
	float3_t7600B73F092B37F484B12910A5269F30C778D31E ___value;
};
struct Enumerator_t43E2F6549F3C419F46925938F040B2F269217D30 
{
	NativeArray_1_t38B974FEBDE9C6BC682E4154FA808DE4F13EF788 ___m_Array;
	int32_t ___m_Index;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___value;
};
struct Enumerator_t971AC6043461572DD98D6C4A4DEE5AD75327A648 
{
	NativeArray_1_tDCAD524EEC8B9DA68A8DF4A0B6C04058522C0E2F ___m_Array;
	int32_t ___m_Index;
	float4x4_t2F0C8ED1AD9B4E39295F0A2D7418771B5F05CECA ___value;
};
struct Enumerator_t090003D42EA14BAA8DE5177EAB88BDD1392AC0C4 
{
	NativeArray_1_tB7ABBF577BB1C93E1A5C402B4AB54D049F98738D ___m_Array;
	int32_t ___m_Index;
	int2_tB123E869131C6102341F8F9AA01726E0E7C2768D ___value;
};
struct Enumerator_tF8DE0BBE31E8D8484EC60B3602F9C7E01F0290F2 
{
	NativeArray_1_t6A78CEABEA568D17A3863F22D6B40CC1F747EBA7 ___m_Array;
	int32_t ___m_Index;
	int3_t18873F121F1EF24ECE875EAB01170B69E1B498C5 ___value;
};
struct Enumerator_tC3F4B7B9A0CD30697539D72194DF92D20F79A13A 
{
	NativeArray_1_t2E87C5C3A9E2CE7790C5229150C0DEDA038B4A62 ___m_Array;
	int32_t ___m_Index;
	int4_t6DC3FEACC0DD1EAE4D5B897188E8D669BC4DAB90 ___value;
};
struct Enumerator_t2123218DC9EA1664F9F45119576399CB7998D27E 
{
	NativeArray_1_t65103B0A2CE970921707A501B10EF5AAC2C8DD8B ___m_Array;
	int32_t ___m_Index;
	quaternion_t9C8C2916B7359C174B215BBB41F290ABCBEA8AEA ___value;
};
struct Enumerator_tC5B56081C1DBEB30B3BB412C462F018E7DD0BF3E 
{
	List_1_t201EF66D89B48BDF1B448F483575106DF0B49F6A* ____list;
	int32_t ____index;
	int32_t ____version;
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ____current;
};
struct Enumerator_t33C92E0F6D3A7C1A0F01C3557B9D1BBEEDB9F871 
{
	NativeArray_1_t9086C71A5110879F9F76FDDC0009F7C7CF9D1B36 ___m_Array;
	int32_t ___m_Index;
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___value;
};
struct Enumerator_t46AA23A6472FC599A8A00F6E2EFEABE48FDCEAFA 
{
	ReadOnly_t0FE5617AC8525F60705BB39B5A7AD67C85F26B8D ___m_Array;
	int32_t ___m_Index;
	ShadowResolutionRequest_tC1B869ADCA139D8D7AD8A355373F84C7F5E0FCBE ___value;
};
struct Enumerator_t3148939C1214EFF0F7118344B902FEA23F0F5BD2 
{
	NativeArray_1_t2FEAC97D235FA3AC2CF64ECF72C860EAA0F44429 ___m_Array;
	int32_t ___m_Index;
	PathArguments_t445220F54870AED8F8384306CF72A316887AD98C ___value;
};
struct Enumerator_tCD1FA3B480A174648321AAB7AC8537861D9768C4 
{
	ReadOnly_t490AE34C6A92FDCF1F34BA02E3FE19FE48B355BC ___m_Array;
	int32_t ___m_Index;
	PathArguments_t445220F54870AED8F8384306CF72A316887AD98C ___value;
};
struct Enumerator_t8C359D04270DDAE57CB000C049017C891E719625 
{
	NativeArray_1_tD8A05F96A9BE1CAAA4C877FA4B9D07ABD8E909E1 ___m_Array;
	int32_t ___m_Index;
	PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1 ___value;
};
struct Enumerator_t3B1BFB6AD4B8AC74A45B2A5032FF15971DAFC1C2 
{
	ReadOnly_tD24F078322DD82D0B34548D94F195EEF89677EE0 ___m_Array;
	int32_t ___m_Index;
	PathArguments_t0C63AB02A9EC1ED9707C0320A8C39254200305F1 ___value;
};
struct FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C 
{
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____0;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____1;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____2;
	FilterParameter_tC6BAE67835BA35634A769B28BF35314AF42BE060 _____3;
};
struct InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4 
{
	int32_t ___m_Count;
	NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___m_Indices;
	int32_t ___m_Allocator;
};
struct NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492 
{
	int32_t ___m_Allocator;
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480  : public RuntimeObject
{
	Action_1_t382B605C2C5668A25F075BE1F415718CF3C38FF7* ___U3ConRecordAddedU3Ek__BackingField;
	Func_4_t3D08A13C5D862919E1719A02821AE8774376E3B2* ___U3ConShouldRecordStateChangeU3Ek__BackingField;
	InputControlU5BU5D_t0B951FEF1504D6340387C4735F5D6F426F40FE17* ___m_Controls;
	int32_t ___m_ControlCount;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_RecordBuffer;
	int32_t ___m_StateSizeInBytes;
	int32_t ___m_RecordCount;
	int32_t ___m_HistoryDepth;
	int32_t ___m_ExtraMemoryPerRecord;
	int32_t ___m_HeadIndex;
	uint32_t ___m_CurrentVersion;
	Nullable_1_t01EA562E317937F4460711CFA1BFDE2AA35CBF20 ___m_UpdateMask;
	bool ___m_AddNewControls;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
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
struct URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9 
{
	NativeArray_1_t9B7A94FA050F43A3996B812B9164E7885F38ADC3 ___slices;
	uint32_t ___slicesValidMask;
};
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
};
struct Enumerator_t04572E85547C2DFBEC2727645AB2A7AB35DBD2F3 
{
	NativeArray_1_t4C11F337CF2A7773644650D071AA5F21F158A5E0 ___m_Array;
	int32_t ___m_Index;
	URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9 ___value;
};
struct Enumerator_tC8E88B41C1F25039A2266455CF3E41B4E36530FE 
{
	ReadOnly_t341E632166FF2FCDC3BD76974E2CBBA2FD8833FB ___m_Array;
	int32_t ___m_Index;
	URPLightShadowCullingInfos_t8EBC5966B6C0C703C739850EA3B585324022F0E9 ___value;
};
struct InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8  : public InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480
{
};
struct NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8  : public RuntimeObject
{
	int32_t ___k_PoolCapacity;
	List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF* ___m_Pages;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_LastPage;
	int32_t ___m_CountInLastPage;
	NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492 ___m_FirstPageAllocator;
	NativeArrayAllocator_t7D098BCF0B0C50F493B510D50B8986211C63F492 ___m_OtherPagesAllocator;
	List_1_tCC0A1A2DFE580C45F2D3D390F3E50E3A3CF6FE3A* ___m_Enumerator;
	bool ___U3CdisposedU3Ek__BackingField;
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
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};
struct UnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11 
{
	int32_t ___m_Type;
	FixedBuffer4_1_tFD261E0E1A5ECEFC54C0B0B89FA6BFEE477E4D8C ___m_Parameters;
	int32_t ___m_ParameterCount;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_CustomDefinition;
};
struct Enumerator_t2C855F308180F56FC93DD19331A0501FEA161EAE 
{
	NativeArray_1_t21CCCF3F852F2C88956531DDBEE7D161399D1ADD ___m_Array;
	int32_t ___m_Index;
	UnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11 ___value;
};
struct Enumerator_tE65F7EC408648E9F6E3A1EEB86893159554CF1AB 
{
	ReadOnly_t3FF396DB2F4259434D435A6A11DBA6DF5237CA9B ___m_Array;
	int32_t ___m_Index;
	UnmanagedFilterFunction_t46D1C73262CD8245474DBC2CA5878C80E08A1B11 ___value;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172 
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E ___bindingId;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	bool ___shouldProcess;
};
struct BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172_marshaled_pinvoke
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_pinvoke ___bindingId;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	int32_t ___shouldProcess;
};
struct BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172_marshaled_com
{
	BindingId_t8BBB6188CD126EACCA07816C78760E92DC16620E_marshaled_com ___bindingId;
	Binding_tA1358A155852138C1926082E4F3245B6F631CBED* ___binding;
	int32_t ___shouldProcess;
};
struct Enumerator_t8942583471D8F80E5517127E40570BC7B08A435E 
{
	List_1_t8A3C0729B4B61738DFBD32119977F2991FD56447* ____list;
	int32_t ____index;
	int32_t ____version;
	BindingRequest_tB47D4B85CD5F177F9D6891D44DE7958EE23A7172 ____current;
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
struct List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF_StaticFields
{
	NativeArray_1U5BU5D_t4BC8FD0BBBD51EF2E3A56BF78296DF37173EFDBD* ___s_emptyArray;
};
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC_StaticFields
{
	RuleMatcherU5BU5D_t0135EA06151E72D04414F3EAF9420CB85EE2236C* ___s_emptyArray;
};
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95_StaticFields
{
	VisualElementU5BU5D_tCAE8038767BF0FBEE26B3470C0FC4AE60E5229DF* ___s_emptyArray;
};
struct List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct UQueryState_1_t62CA2841B4A1205A8554F7E9D2A3FBFB0F92B192_StaticFields
{
	ActionQueryMatcher_t0EF83980C6ABA9272F87A72C8B21FEF9403FA83E* ___s_Action;
	ListQueryMatcher_1_t80B2C90F8E32F964B971ECBBAA0E811171012425* ___s_List;
	ListQueryMatcher_1_t5888012D63B675F26A02C9BF208DC2C856BFBBC4* ___s_EnumerationList;
};
struct UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC_StaticFields
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___k_MemoryLabel;
	int32_t ___k_SizeOfData;
	int32_t ___k_SizeOfT;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
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
struct SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D  : public RuntimeArray
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE21BD33899AFF1477136619A8C34639DCA029CC0_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mAB3175D078843BDDC99FF3C3ED52257846066970_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* InputControlList_1_FromIndex_m442B00B502638B69F62E6669FB5DEDFA50ED17B6_gshared (uint64_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mB3247AE1E03448F01EBBF6941EC44FFCD31289FC_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC4498C209E3B248A02CD1E4904D2E20274D81DB5_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCD2379EFB931AEDA4F9C3D8290967A105E3878CB_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ListQueryMatcher_1_set_matches_m32D702F4DE02ABB90F1560B65718F096EDD98416_gshared_inline (ListQueryMatcher_1_t80B2C90F8E32F964B971ECBBAA0E811171012425* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListQueryMatcher_1_Reset_mA87630F5478A77AC66CE91970A89BA506697A66D_gshared (ListQueryMatcher_1_t80B2C90F8E32F964B971ECBBAA0E811171012425* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mD195DA373CA07B295F25635B42F3ED5E32221B5C_gshared (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m38DD50A147FD01D083464E220301DC3F99A84197_gshared (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFFF471615D4AAD375CD440DAB84DE6979D99625F_gshared (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mDD6869C382827C40E00CB14006C453CA19A2F6E6_gshared (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m92C8983EF703D0E6C2A069318E1F6728FB825575_gshared (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mF8BD031AD4509A910CC14E00A06A324F6F86484A_fshared (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList128Bytes_1_get_Length_m927F92EC07E24F20A7314C091F5C5FACA9A0C16B_fshared_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m242FBFBB91DEFCFF5AD76B3C5D94727D91630F29_fshared_inline (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m63198339E2BD9F1E98D059E6B92943A290AA2717_fshared (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FixedList128Bytes_1_get_Item_m5C6B0C333D9C8C117E550913DFB568BF59E3A1E9_fshared_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m49C3CD9AFB11BE8D7A533877C906828641184543_fshared_inline (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m730C48A338AF2F250945231887E06B9DB8A57B75_fshared (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m441E7F78015D07C18765FA9259A56A54445C3B9B_fshared (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList32Bytes_1_get_Length_m69BE1E6D357498954A3C7A28D7F00CAAA79F80DE_fshared_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9063CA1E8AA6E6D8D65CE20A21CCA365A0DA2715_fshared_inline (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m459EB24E55EC2975B98A40E4F4D45D7B93D3DEDB_fshared (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FixedList32Bytes_1_get_Item_m1E22159351628A448545A200C5B692F2A16594FC_fshared_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m97BA1C93F238DDDFCCCCFB55367C4F1F6DA9942E_fshared_inline (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m098B6296B8544564B28C91CD50FF144A79AA0033_fshared (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m43FBCE886B633BAD8374FD2163FE644CBF9E4D4C_fshared (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList4096Bytes_1_get_Length_m7F849A6DE2F1D919926FD832199A91C25A15CF83_fshared_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2D7B02C42527454C558080D4F9900A3F383BE9C0_fshared_inline (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mD70CC3896E1D8764E122375A2C9FA62AC9F9974D_fshared (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FixedList4096Bytes_1_get_Item_m970363422CEE1B790AFBEB5934459409F61AD136_fshared_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m5CB310C7BF731494B28B1C749D9D5BCF8317556E_fshared_inline (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mD1225F5E7913BF76CDE3F81811F0B9D94C74DCF5_fshared (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCF32EE2E23D7EDD7036137434591DB39122696CB_fshared (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList512Bytes_1_get_Length_m39F0C6ECC0732E96B3F8C0A2553A71E975011ABF_fshared_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7B33D583007CBEE3B0F94CADFB5E0D82F54C05D2_fshared_inline (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mCE1637C236787E96B16B0DECCB39F0FC6DD3C62F_fshared (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FixedList512Bytes_1_get_Item_m2BDE2A77E2F1085AF6581D7128CF28D81BF1B8FC_fshared_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m9C6F591E8913284C78CEE9DC0242512553824BB7_fshared_inline (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF78EFF98512E7ED675C9A740CE49813B0EA030FA_fshared (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m907F3D4BA10B32D3847BB222EE62CAB88BCE9DD5_fshared (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList64Bytes_1_get_Length_m9CE762AB945BF8C956C2B6AF84AEE58B20A679C3_fshared_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0A00DE94C43CC10582082865870C48D4D10F4C2B_fshared_inline (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m83B2D9BC4739B9793D1F99DE36828C994D7AD6D8_fshared (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FixedList64Bytes_1_get_Item_m80147EAADDAE6893ABEDA8444B6F72691EB1A899_fshared_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m913E8AF9BD221F6DC06B386A0C2D1F66DD2294D5_fshared_inline (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m163356B9FFD6D52C154FE6EEE4A9AD348DE9DBA6_fshared (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_fshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m14F3F3BDFD5DEF6EE8298FF8D193A00F82B09B05_fshared (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m763003C102B5B1FDF57EE1578F87D47AA65F4610_fshared (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D InputStateHistory_1_get_Item_mBE8959EBCC92060639869AAD6967E40D4CDFD948_fshared (InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D Enumerator_get_Current_mB1303F9939CC91E93071FCCEC5CDEC661A9E0730_fshared (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m61D9BA3F2ADDB0E3B13E50FC569555458927EBF0_fshared (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m59AF134FB50E7CF06D2E4F16E5E428D4BDBC919C_fshared (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m97F29D6F80B478A97A6DA81F665E7DA693E17E64_fshared (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC9099E56E01AB33169AB4EE888BD9A2B752961DE_fshared_inline (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mB15834348E10F7612876D2AE774493AE7AF604B2_fshared (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_mF9A198DACCE8ED0DC6FD097825D7A0F82D149DBA_fshared_inline (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m81767706F1E3B41EAB92F21B1669693FFE92ACCB_fshared_inline (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m83F02E3FEEF3C18742EE3F0C24090B48214001EA_fshared (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD61BB53328B5D708EEEB308A096A80542A63050D_fshared_inline (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDBC21788DC29B177915D6FC64E98BA401BA9F163_fshared_inline (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m3A62EFB2B231DD5F4493F95969BDEE57BA6D0732_fshared (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m0DB23E081DD7E8E197CF9222CDAA393CAE47B7C6_fshared (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_GetCurrentKey_mEF70D21D7190C8EA3A42C1ABB88E1DA9739C99B5_fshared_inline (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_mB519F490A17E381EACF6CBA5D1C31200C64D984F_fshared_inline (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF2F0AFC1EC7F0A5AF8F14C8D2C2A6E5C1C1C31A1_fshared (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_HasNext_m98065EB05573641926616E576CA797F054D69EF9_fshared (Enumerator_tE1470541970778078D070FF8C523A55C7301DA38* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m70D05F4FAB6EFE8D743737D6895B449D397979E4_fshared (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1E122089BC8131DF27883BBCA11D6CDF1AEEEDB7_fshared_inline (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mF47CBE67643289DF7557A379F8E84BF4B21D7506_fshared (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_fshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m1017E83823B755AF1CA6B2246F5FD522001D9871_fshared_inline (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m4AEF2A2C4B8B6F519C350C078354DFAD98543444_fshared (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m12DEE8D152E0DF64C0C468FBBA137DD479AEA6D4_fshared (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC010E40DBBC1021AE2955FA74DE168E960D62149_fshared_inline (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBA218311DD0EEA28366054B1DDD87EF5DCC1990E_fshared_inline (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m1F08B2F37805E2E4647C19275E820D77361C3241_fshared (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mAF1D65B854F80DB7F105622569293031FE788AA3_fshared (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_mBBFD3B1857369E3256B1CCB21ED470D8B4E46B63_fshared_inline (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m36EA64558736EC5AA965E6C7C12968E195E09AA5_fshared_inline (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m8D9D0BC84AD0CE249D82F68C03E4DCBC1881AC5F_fshared (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0BBB67CF7366B5A989FBB12AA2293CD18853C98D_fshared (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0DEF4AFE20672D3425DCFB0B4B7EBBAA7B69F595_fshared (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m7DFE6628F82F51C868E30AF059855DEBF7ABE53A_fshared (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeSlice_1_get_Item_mB5E7BDE4EDF7E31480A9785BE103CC7E17E0E3A8_fshared (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mD5F9A8DA4A689D3BE78549843241C5C6D4936D84_fshared (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mEB8088957B367DEEE33935D4174B19579BF14B58_fshared (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m06F26A9D1616DCF8DE123B05DB3C01719237C3AF_fshared (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mEC7989864CADAFF8FC0E8487223BF86743692433_fshared (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m347C1E11612C5D8DBEFB997C4F82908223501003_fshared (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mA0F433CE2FCFD54A32DFD9BE11A2E16310CC4E07_fshared (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m62AB801313FAA9B181EBFE46DB8B2DB6D76B68B4_fshared (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m994C711F41302E7D1D182F236EFD8FB3B27D5F2D_fshared (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m736B3FBFDCE475107941328576DCEF4079395C57_fshared_inline (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m2614D95F15B95F3C367C31F27E7271E314200A1A_fshared (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_mFF2CA86985CA0F66A2D6326CBD03DC3074F32F53_fshared_inline (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF61779E4E05F1AA20916F8F43E213C3C7D14AE95_fshared (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mDC8B76F10D6E9656A8FF10CDA2848D398903292E_fshared (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m585575792FA654B690455D25C3B5F75647513AD3_fshared_inline (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mF3A98B3F6A0BE100E40BE6FD8404BA853B68ABA8_fshared (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m28823F91A1BEC7D0ADA14F770BBBE6BDB8274403_fshared_inline (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mCDE7558044F2FD28B0492AD87A9229C66E92CFE3_fshared (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m56E92048F957D6744395C25536BE2404C425EB2A_fshared (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFFB2EF2C36B70F350E88E4CDD5F4C7B2E03D1C61_fshared_inline (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mC62471215811FA96C7120F6D2CF04E3AEDA9C397_fshared (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_mADD156FACD9219B3A0B5197F066274E38DD0CE3E_fshared_inline (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF7E50F72D8ADE4A4C470F58C788810EEC95F4DCC_fshared (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1A29F5802B1A0879B0C3B19D2490EF275248E005_fshared (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m19B75B670752D0F001423B14DEB43037889A197A_fshared (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCB9B6D15D244D49204D2A903402C1D5011CC2830_fshared (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9589C320A0B345A9190284C38FCB97F2015861DA_fshared_inline (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m43C21832D8660DF1F98FA2733CE9D752ACB020D5_fshared (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m44CEFC7935FF87861A589ACDB1024033E52A123E_fshared_inline (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m9E9FBC7AD882EDFB5FDCF6024ECA5DA4B2DD24DA_fshared (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m915D35B9BB2A77C5396F4FE1A1C53F1C93B8E337_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1756F06B6BC460B8EEB4522B562E097F37D54C59_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m51282E47C90E55BF2D96A0D329869ABC122A85A0_fshared_inline (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m7D04FEF0F3E60E6E691D979806634E034498134E_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_m27D5470C040D50CC0200DDAB3C93DF3C4CA755B3_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF3F5043F0C7EA67C19F3FA22DF2A5E66C4B82985_fshared (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mC98285CB59B476CB33C08E3FDEC3AD026FD5D46B_fshared (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinedArray_1_get_Item_m559A0B1FCFEC59844BBCB769C3C743C5F46A2201_fshared (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m29E9E90BB06DAEDA6F7D4721A6681EC28A0E54C6_fshared (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC035FEFC4C4C462ECCBF7506FD23025A38501032_fshared (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m6CAB80EFB3B442E668D334714C1BA63697F23576_fshared (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m5BA2E5A6E9016D327B7C3067D3D2B2016D37DFDA_fshared_inline (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_m6E80F28E7CB5BA6E35ECE961C429AE6CA69003A2_fshared_inline (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m0F26F0C362DA633022A66F6C342673D39AD4622B_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4FB57970CC4FBEE295E533DE12F0B21FF7E13AAA_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_mEE0F6DC54C3238FF39CDFF5675B11CD97C544897_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m25395D42D3EE1E89A0B024E2FAF823E4A3FEF4D1_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Runtime_Serialization_ISerializable_GetObjectData_m200D1982786B356E5B42E63B71C05AC7B3EA337E_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3675ECA18E1A14A4318723D0B93024692A40759B_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNextRare_mF1A6D7920FDC3C83A7DA1F838C2FC51D716637D9_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_fshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m3FCE22D15C040EE9F8614C711F786205BA6AAFB6_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_mFA2701BBDA14ED6CC3113A32ED0E8B80DAD58A84_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mDE5B605B7794A192CC35F12013300AE26EB8FE5F_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNextRare_mA2A9C4EFAA8131F5D97D9B8626FDEDF343E93488_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2F9CDD8406C6495182E05B55A00C3D0C9620CA67_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m05879F7740A935DB74AE5672E2B537349369A3C1_fshared_inline (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mA8280DCF9D59E671AB204C71415939B6D7B4211E_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_m15625F750730D127B128E2654A2B59982DEAB9C9_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_fshared_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mBB836D4E68A5F554A9A7C377FFBD67DA4253EA7D_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_set_Current_m1BB3A6D5580E7C6A864831EED00A4E1B8E81B1B5_fshared_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IndexedCollectionPropertyBagEnumerator_1_MoveNext_m6695B2065C6EB0E71B90C2EFF9429E4A76F4C0BA_fshared (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IndexedCollectionPropertyBagEnumerator_1_get_Current_m4E570DCDE463BEA50BA7B3DC03595ED13939EDBE_fshared (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedCollectionPropertyBagEnumerator_1_Reset_mEF20F04CD33523EE6B378C8F992E49A2214E1626_fshared (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mDD80A4C2F5EFC81C22B7F74CACFF9D0921BA0A3C_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexedCollectionPropertyBagEnumerator_1_Dispose_mEBC1E3FF6876007C72F6F76ED237165B599B2505_fshared (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1938093C428E4EDE3B40A07184993FA35F74AB42_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA25DFE205338DF12128791E990699B49B335B759_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA6D24403558EA8BFEE5028D75AC049EC8677F637_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_ThrowEnumerationNotStartedOrEnded_mA8F87F65FFD80CCBB3A060C159463BB5B5603E93_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m2DDD9E2B36A595D40708EBE84125C065CCF6F11D_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m01A32A0663137A48FD334AD3F7BF1A172FEBA204_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_m5E20159EC017B0F62631E89E5784B2D532E2D314_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mBA9853A226A9CB16F8FB74D21519A91A38E063E0_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA42BDA7B751B17DB4EC59F6995E3188780091966_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m2845BC4731316BCC3E1AB5C3F5799107716B7810_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mAEF87A53D24C4DB2F6069E75CF1A5D66D5F4D13F_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m6D0270EB2876CB03F839581CC803C1DAA52EF9D4_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m475AD9FE055280B2B1CF43E93F9A2340C3EAE75C_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3347052D874561F1E1857019C4F418A27B125353_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_ThrowEnumerationNotStartedOrEnded_mDFA786E51878E61AE16B8C27D512FD3407BA6AFA_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m748B0758792F434FAB29656C2F5CF6EEB4481D27_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC2EE4A74701F665A795443A0814F1CF22BC12560_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_m796D8D2C90C2436A06B08E30008143FCF74E8EC9_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FixedList128Bytes_1_get_length_m01D23D934D19D0EEDCA425F421ABA56B3DA58F3C_fshared_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList128Bytes_1_get_Buffer_mD43014DEC5833FAF9392FC3FCBE3E9B54C6C4156_fshared_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FixedList32Bytes_1_get_length_mD16FF5C8CCA29B2A58BB98073E6729F0E2BBE907_fshared_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList32Bytes_1_get_Buffer_mFB1AAFA86AB113AC3BEF550971AA4DA182A64606_fshared_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FixedList4096Bytes_1_get_length_m0437506FA2283836CDDC3A46CC5F706D1819B05A_fshared_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList4096Bytes_1_get_Buffer_m76BCD608C0436D7647CC2BD2D197629A9B1C6DC3_fshared_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FixedList512Bytes_1_get_length_mB15FCBDD135D7C01311794E83AF0B6436D2D5464_fshared_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList512Bytes_1_get_Buffer_mB8203817FDA4AEEF7E986FEF9A92B92F48456DA4_fshared_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FixedList64Bytes_1_get_length_m3DE952DD93CA6DA9DCC7AE3B38049D044BC24628_fshared_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList64Bytes_1_get_Buffer_m453BB0D8491D838AC1381E57320C9FE6E3943F68_fshared_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626_fshared (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList128Bytes_1_get_buffer_m3FA0F1453D72938135D3074318E14AD2A1B32DA4_fshared_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList_PaddingBytes_TisIl2CppFullySharedGenericStruct_m573FD523FF52FE25B53DA0840EB707029DA7AF5F_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList32Bytes_1_get_buffer_m139B05C9B2F45AA86EBFBD4F0EC8803848137F66_fshared_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList4096Bytes_1_get_buffer_mC6FF3A165067CDB3016B89246011CB5D7B34B71D_fshared_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList512Bytes_1_get_buffer_m513212BD1E1DB094D6923FAD0B5D92DF8FBAC102_fshared_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList64Bytes_1_get_buffer_m590958E1E714990BD451E67228F00F8DB98CC77E_fshared_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method) ;

inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m44EAE568720002EAD1F4ECE1CBA62E756FB05AFA_inline (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
inline bool Enumerator_MoveNext_mE21BD33899AFF1477136619A8C34639DCA029CC0 (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69*, const RuntimeMethod*))Enumerator_MoveNext_mE21BD33899AFF1477136619A8C34639DCA029CC0_gshared)(__this, method);
}
inline void Enumerator_Reset_mAB3175D078843BDDC99FF3C3ED52257846066970 (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69*, const RuntimeMethod*))Enumerator_Reset_mAB3175D078843BDDC99FF3C3ED52257846066970_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* InputControlList_1_FromIndex_m442B00B502638B69F62E6669FB5DEDFA50ED17B6 (uint64_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (uint64_t, const RuntimeMethod*))InputControlList_1_FromIndex_m442B00B502638B69F62E6669FB5DEDFA50ED17B6_gshared)(___0_index, method);
}
inline Il2CppSharedGenericObject* Enumerator_get_Current_mB3247AE1E03448F01EBBF6941EC44FFCD31289FC (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69*, const RuntimeMethod*))Enumerator_get_Current_mB3247AE1E03448F01EBBF6941EC44FFCD31289FC_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC4498C209E3B248A02CD1E4904D2E20274D81DB5 (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mC4498C209E3B248A02CD1E4904D2E20274D81DB5_gshared)(__this, method);
}
inline void Enumerator_Dispose_mCD2379EFB931AEDA4F9C3D8290967A105E3878CB (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69*, const RuntimeMethod*))Enumerator_Dispose_mCD2379EFB931AEDA4F9C3D8290967A105E3878CB_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2 (int32_t ___0_initialCapacity, const RuntimeMethod* method) ;
inline void ListQueryMatcher_1_set_matches_mA791583D020B06F7DB407BAA4AC0DC65BF61A2BC_inline (ListQueryMatcher_1_t5888012D63B675F26A02C9BF208DC2C856BFBBC4* __this, List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ListQueryMatcher_1_t5888012D63B675F26A02C9BF208DC2C856BFBBC4*, List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*, const RuntimeMethod*))ListQueryMatcher_1_set_matches_m32D702F4DE02ABB90F1560B65718F096EDD98416_gshared_inline)(__this, ___0_value, method);
}
inline void ListQueryMatcher_1_Reset_m1ED519C668E60E76E856B666DD5FC4B01121A181 (ListQueryMatcher_1_t5888012D63B675F26A02C9BF208DC2C856BFBBC4* __this, const RuntimeMethod* method)
{
	((  void (*) (ListQueryMatcher_1_t5888012D63B675F26A02C9BF208DC2C856BFBBC4*, const RuntimeMethod*))ListQueryMatcher_1_Reset_mA87630F5478A77AC66CE91970A89BA506697A66D_gshared)(__this, method);
}
inline VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092 (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline Il2CppSharedGenericObject* Enumerator_get_Current_mD195DA373CA07B295F25635B42F3ED5E32221B5C (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96*, const RuntimeMethod*))Enumerator_get_Current_mD195DA373CA07B295F25635B42F3ED5E32221B5C_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m38DD50A147FD01D083464E220301DC3F99A84197 (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m38DD50A147FD01D083464E220301DC3F99A84197_gshared)(__this, method);
}
inline int32_t List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mFFF471615D4AAD375CD440DAB84DE6979D99625F (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96*, const RuntimeMethod*))Enumerator_MoveNext_mFFF471615D4AAD375CD440DAB84DE6979D99625F_gshared)(__this, method);
}
inline void Enumerator_Reset_mDD6869C382827C40E00CB14006C453CA19A2F6E6 (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96*, const RuntimeMethod*))Enumerator_Reset_mDD6869C382827C40E00CB14006C453CA19A2F6E6_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementListPool_Release_mAF4ED38CC4F9A6E58B06F4B0BD13611F7DECBCFA (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___0_elements, const RuntimeMethod* method) ;
inline void Enumerator_Dispose_m92C8983EF703D0E6C2A069318E1F6728FB825575 (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96*, const RuntimeMethod*))Enumerator_Dispose_m92C8983EF703D0E6C2A069318E1F6728FB825575_gshared)(__this, method);
}
inline void Enumerator_Dispose_mF8BD031AD4509A910CC14E00A06A324F6F86484A (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B*, const RuntimeMethod*))Enumerator_Dispose_mF8BD031AD4509A910CC14E00A06A324F6F86484A_fshared)(__this, method);
}
inline int32_t FixedList128Bytes_1_get_Length_m927F92EC07E24F20A7314C091F5C5FACA9A0C16B_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D*, const RuntimeMethod*))FixedList128Bytes_1_get_Length_m927F92EC07E24F20A7314C091F5C5FACA9A0C16B_fshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m242FBFBB91DEFCFF5AD76B3C5D94727D91630F29_inline (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B*, const RuntimeMethod*))Enumerator_MoveNext_m242FBFBB91DEFCFF5AD76B3C5D94727D91630F29_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_m63198339E2BD9F1E98D059E6B92943A290AA2717 (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B*, const RuntimeMethod*))Enumerator_Reset_m63198339E2BD9F1E98D059E6B92943A290AA2717_fshared)(__this, method);
}
inline void FixedList128Bytes_1_get_Item_m5C6B0C333D9C8C117E550913DFB568BF59E3A1E9_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))FixedList128Bytes_1_get_Item_m5C6B0C333D9C8C117E550913DFB568BF59E3A1E9_fshared_inline)((FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D*)__this, ___0_index, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m49C3CD9AFB11BE8D7A533877C906828641184543_inline (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_m49C3CD9AFB11BE8D7A533877C906828641184543_fshared_inline)((Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m730C48A338AF2F250945231887E06B9DB8A57B75 (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m730C48A338AF2F250945231887E06B9DB8A57B75_fshared)(__this, method);
}
inline void Enumerator_Dispose_m441E7F78015D07C18765FA9259A56A54445C3B9B (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7*, const RuntimeMethod*))Enumerator_Dispose_m441E7F78015D07C18765FA9259A56A54445C3B9B_fshared)(__this, method);
}
inline int32_t FixedList32Bytes_1_get_Length_m69BE1E6D357498954A3C7A28D7F00CAAA79F80DE_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF*, const RuntimeMethod*))FixedList32Bytes_1_get_Length_m69BE1E6D357498954A3C7A28D7F00CAAA79F80DE_fshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m9063CA1E8AA6E6D8D65CE20A21CCA365A0DA2715_inline (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7*, const RuntimeMethod*))Enumerator_MoveNext_m9063CA1E8AA6E6D8D65CE20A21CCA365A0DA2715_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_m459EB24E55EC2975B98A40E4F4D45D7B93D3DEDB (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7*, const RuntimeMethod*))Enumerator_Reset_m459EB24E55EC2975B98A40E4F4D45D7B93D3DEDB_fshared)(__this, method);
}
inline void FixedList32Bytes_1_get_Item_m1E22159351628A448545A200C5B692F2A16594FC_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))FixedList32Bytes_1_get_Item_m1E22159351628A448545A200C5B692F2A16594FC_fshared_inline)((FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF*)__this, ___0_index, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m97BA1C93F238DDDFCCCCFB55367C4F1F6DA9942E_inline (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_m97BA1C93F238DDDFCCCCFB55367C4F1F6DA9942E_fshared_inline)((Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m098B6296B8544564B28C91CD50FF144A79AA0033 (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m098B6296B8544564B28C91CD50FF144A79AA0033_fshared)(__this, method);
}
inline void Enumerator_Dispose_m43FBCE886B633BAD8374FD2163FE644CBF9E4D4C (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C*, const RuntimeMethod*))Enumerator_Dispose_m43FBCE886B633BAD8374FD2163FE644CBF9E4D4C_fshared)(__this, method);
}
inline int32_t FixedList4096Bytes_1_get_Length_m7F849A6DE2F1D919926FD832199A91C25A15CF83_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0*, const RuntimeMethod*))FixedList4096Bytes_1_get_Length_m7F849A6DE2F1D919926FD832199A91C25A15CF83_fshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m2D7B02C42527454C558080D4F9900A3F383BE9C0_inline (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C*, const RuntimeMethod*))Enumerator_MoveNext_m2D7B02C42527454C558080D4F9900A3F383BE9C0_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_mD70CC3896E1D8764E122375A2C9FA62AC9F9974D (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C*, const RuntimeMethod*))Enumerator_Reset_mD70CC3896E1D8764E122375A2C9FA62AC9F9974D_fshared)(__this, method);
}
inline void FixedList4096Bytes_1_get_Item_m970363422CEE1B790AFBEB5934459409F61AD136_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))FixedList4096Bytes_1_get_Item_m970363422CEE1B790AFBEB5934459409F61AD136_fshared_inline)((FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0*)__this, ___0_index, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m5CB310C7BF731494B28B1C749D9D5BCF8317556E_inline (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_m5CB310C7BF731494B28B1C749D9D5BCF8317556E_fshared_inline)((Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mD1225F5E7913BF76CDE3F81811F0B9D94C74DCF5 (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mD1225F5E7913BF76CDE3F81811F0B9D94C74DCF5_fshared)(__this, method);
}
inline void Enumerator_Dispose_mCF32EE2E23D7EDD7036137434591DB39122696CB (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97*, const RuntimeMethod*))Enumerator_Dispose_mCF32EE2E23D7EDD7036137434591DB39122696CB_fshared)(__this, method);
}
inline int32_t FixedList512Bytes_1_get_Length_m39F0C6ECC0732E96B3F8C0A2553A71E975011ABF_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F*, const RuntimeMethod*))FixedList512Bytes_1_get_Length_m39F0C6ECC0732E96B3F8C0A2553A71E975011ABF_fshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m7B33D583007CBEE3B0F94CADFB5E0D82F54C05D2_inline (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97*, const RuntimeMethod*))Enumerator_MoveNext_m7B33D583007CBEE3B0F94CADFB5E0D82F54C05D2_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_mCE1637C236787E96B16B0DECCB39F0FC6DD3C62F (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97*, const RuntimeMethod*))Enumerator_Reset_mCE1637C236787E96B16B0DECCB39F0FC6DD3C62F_fshared)(__this, method);
}
inline void FixedList512Bytes_1_get_Item_m2BDE2A77E2F1085AF6581D7128CF28D81BF1B8FC_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))FixedList512Bytes_1_get_Item_m2BDE2A77E2F1085AF6581D7128CF28D81BF1B8FC_fshared_inline)((FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F*)__this, ___0_index, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m9C6F591E8913284C78CEE9DC0242512553824BB7_inline (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_m9C6F591E8913284C78CEE9DC0242512553824BB7_fshared_inline)((Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF78EFF98512E7ED675C9A740CE49813B0EA030FA (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mF78EFF98512E7ED675C9A740CE49813B0EA030FA_fshared)(__this, method);
}
inline void Enumerator_Dispose_m907F3D4BA10B32D3847BB222EE62CAB88BCE9DD5 (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC*, const RuntimeMethod*))Enumerator_Dispose_m907F3D4BA10B32D3847BB222EE62CAB88BCE9DD5_fshared)(__this, method);
}
inline int32_t FixedList64Bytes_1_get_Length_m9CE762AB945BF8C956C2B6AF84AEE58B20A679C3_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3*, const RuntimeMethod*))FixedList64Bytes_1_get_Length_m9CE762AB945BF8C956C2B6AF84AEE58B20A679C3_fshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m0A00DE94C43CC10582082865870C48D4D10F4C2B_inline (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC*, const RuntimeMethod*))Enumerator_MoveNext_m0A00DE94C43CC10582082865870C48D4D10F4C2B_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_m83B2D9BC4739B9793D1F99DE36828C994D7AD6D8 (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC*, const RuntimeMethod*))Enumerator_Reset_m83B2D9BC4739B9793D1F99DE36828C994D7AD6D8_fshared)(__this, method);
}
inline void FixedList64Bytes_1_get_Item_m80147EAADDAE6893ABEDA8444B6F72691EB1A899_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))FixedList64Bytes_1_get_Item_m80147EAADDAE6893ABEDA8444B6F72691EB1A899_fshared_inline)((FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3*)__this, ___0_index, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m913E8AF9BD221F6DC06B386A0C2D1F66DD2294D5_inline (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_m913E8AF9BD221F6DC06B386A0C2D1F66DD2294D5_fshared_inline)((Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m163356B9FFD6D52C154FE6EEE4A9AD348DE9DBA6 (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m163356B9FFD6D52C154FE6EEE4A9AD348DE9DBA6_fshared)(__this, method);
}
inline bool HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_fshared_inline)(__this, ___0_bucketIndex, ___1_nextIndex, ___2_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputStateHistory_get_Count_m23DF78272A6C97F6C8782A953482772CDF6FFA81_inline (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_m14F3F3BDFD5DEF6EE8298FF8D193A00F82B09B05 (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D*, const RuntimeMethod*))Enumerator_MoveNext_m14F3F3BDFD5DEF6EE8298FF8D193A00F82B09B05_fshared)(__this, method);
}
inline void Enumerator_Reset_m763003C102B5B1FDF57EE1578F87D47AA65F4610 (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D*, const RuntimeMethod*))Enumerator_Reset_m763003C102B5B1FDF57EE1578F87D47AA65F4610_fshared)(__this, method);
}
inline Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D InputStateHistory_1_get_Item_mBE8959EBCC92060639869AAD6967E40D4CDFD948 (InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D (*) (InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8*, int32_t, const RuntimeMethod*))InputStateHistory_1_get_Item_mBE8959EBCC92060639869AAD6967E40D4CDFD948_fshared)(__this, ___0_index, method);
}
inline Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D Enumerator_get_Current_mB1303F9939CC91E93071FCCEC5CDEC661A9E0730 (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method)
{
	return ((  Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D (*) (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D*, const RuntimeMethod*))Enumerator_get_Current_mB1303F9939CC91E93071FCCEC5CDEC661A9E0730_fshared)(__this, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m61D9BA3F2ADDB0E3B13E50FC569555458927EBF0 (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m61D9BA3F2ADDB0E3B13E50FC569555458927EBF0_fshared)(__this, method);
}
inline void Enumerator_Dispose_m59AF134FB50E7CF06D2E4F16E5E428D4BDBC919C (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D*, const RuntimeMethod*))Enumerator_Dispose_m59AF134FB50E7CF06D2E4F16E5E428D4BDBC919C_fshared)(__this, method);
}
inline void Enumerator_Dispose_m97F29D6F80B478A97A6DA81F665E7DA693E17E64 (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*, const RuntimeMethod*))Enumerator_Dispose_m97F29D6F80B478A97A6DA81F665E7DA693E17E64_fshared)(__this, method);
}
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline bool Enumerator_MoveNext_mC9099E56E01AB33169AB4EE888BD9A2B752961DE_inline (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*, const RuntimeMethod*))Enumerator_MoveNext_mC9099E56E01AB33169AB4EE888BD9A2B752961DE_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_mB15834348E10F7612876D2AE774493AE7AF604B2 (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*, const RuntimeMethod*))Enumerator_Reset_mB15834348E10F7612876D2AE774493AE7AF604B2_fshared)(__this, method);
}
inline void Enumerator_get_Current_mF9A198DACCE8ED0DC6FD097825D7A0F82D149DBA_inline (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_mF9A198DACCE8ED0DC6FD097825D7A0F82D149DBA_fshared_inline)((Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m81767706F1E3B41EAB92F21B1669693FFE92ACCB_inline (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m81767706F1E3B41EAB92F21B1669693FFE92ACCB_fshared_inline)(__this, method);
}
inline void Enumerator_Dispose_m83F02E3FEEF3C18742EE3F0C24090B48214001EA (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F*, const RuntimeMethod*))Enumerator_Dispose_m83F02E3FEEF3C18742EE3F0C24090B48214001EA_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_mD61BB53328B5D708EEEB308A096A80542A63050D_inline (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*, const RuntimeMethod*))Enumerator_MoveNext_mD61BB53328B5D708EEEB308A096A80542A63050D_fshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mDBC21788DC29B177915D6FC64E98BA401BA9F163_inline (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F*, const RuntimeMethod*))Enumerator_MoveNext_mDBC21788DC29B177915D6FC64E98BA401BA9F163_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_m3A62EFB2B231DD5F4493F95969BDEE57BA6D0732 (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*, const RuntimeMethod*))Enumerator_Reset_m3A62EFB2B231DD5F4493F95969BDEE57BA6D0732_fshared)(__this, method);
}
inline void Enumerator_Reset_m0DB23E081DD7E8E197CF9222CDAA393CAE47B7C6 (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F*, const RuntimeMethod*))Enumerator_Reset_m0DB23E081DD7E8E197CF9222CDAA393CAE47B7C6_fshared)(__this, method);
}
inline void Enumerator_GetCurrentKey_mEF70D21D7190C8EA3A42C1ABB88E1DA9739C99B5_inline (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_GetCurrentKey_mEF70D21D7190C8EA3A42C1ABB88E1DA9739C99B5_fshared_inline)((Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)__this, il2cppRetVal, method);
}
inline void Enumerator_get_Current_mB519F490A17E381EACF6CBA5D1C31200C64D984F_inline (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_mB519F490A17E381EACF6CBA5D1C31200C64D984F_fshared_inline)((Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF2F0AFC1EC7F0A5AF8F14C8D2C2A6E5C1C1C31A1 (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mF2F0AFC1EC7F0A5AF8F14C8D2C2A6E5C1C1C31A1_fshared)(__this, method);
}
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 List_1_get_Item_m944337BED8AAD9BC3015016C70A16A871E20901E (List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline)(__this, method);
}
inline int32_t List_1_get_Count_m0F04F8BA763691AD4F57971309F219BA108367B3_inline (List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline bool Enumerator_HasNext_m98065EB05573641926616E576CA797F054D69EF9 (Enumerator_tE1470541970778078D070FF8C523A55C7301DA38* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE1470541970778078D070FF8C523A55C7301DA38*, const RuntimeMethod*))Enumerator_HasNext_m98065EB05573641926616E576CA797F054D69EF9_fshared)(__this, method);
}
inline void NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, il2cppRetVal, method);
}
inline void Enumerator_Dispose_m70D05F4FAB6EFE8D743737D6895B449D397979E4 (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658*, const RuntimeMethod*))Enumerator_Dispose_m70D05F4FAB6EFE8D743737D6895B449D397979E4_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapDataEnumerator_MoveNext_m15C57E6A73D44B6A1DEC165D193181FC30441204_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_m1E122089BC8131DF27883BBCA11D6CDF1AEEEDB7_inline (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658*, const RuntimeMethod*))Enumerator_MoveNext_m1E122089BC8131DF27883BBCA11D6CDF1AEEEDB7_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDataEnumerator_Reset_m02FCCDAA74B79950CD2E1930AB863F55D6FD9D7A (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) ;
inline void Enumerator_Reset_mF47CBE67643289DF7557A379F8E84BF4B21D7506 (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658*, const RuntimeMethod*))Enumerator_Reset_mF47CBE67643289DF7557A379F8E84BF4B21D7506_fshared)(__this, method);
}
inline void UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_fshared_inline)((UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)__this, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m1017E83823B755AF1CA6B2246F5FD522001D9871_inline (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_m1017E83823B755AF1CA6B2246F5FD522001D9871_fshared_inline)((Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m4AEF2A2C4B8B6F519C350C078354DFAD98543444 (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m4AEF2A2C4B8B6F519C350C078354DFAD98543444_fshared)(__this, method);
}
inline void Enumerator_Dispose_m12DEE8D152E0DF64C0C468FBBA137DD479AEA6D4 (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83*, const RuntimeMethod*))Enumerator_Dispose_m12DEE8D152E0DF64C0C468FBBA137DD479AEA6D4_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_mC010E40DBBC1021AE2955FA74DE168E960D62149_inline (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421*, const RuntimeMethod*))Enumerator_MoveNext_mC010E40DBBC1021AE2955FA74DE168E960D62149_fshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mBA218311DD0EEA28366054B1DDD87EF5DCC1990E_inline (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83*, const RuntimeMethod*))Enumerator_MoveNext_mBA218311DD0EEA28366054B1DDD87EF5DCC1990E_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_m1F08B2F37805E2E4647C19275E820D77361C3241 (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421*, const RuntimeMethod*))Enumerator_Reset_m1F08B2F37805E2E4647C19275E820D77361C3241_fshared)(__this, method);
}
inline void Enumerator_Reset_mAF1D65B854F80DB7F105622569293031FE788AA3 (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83*, const RuntimeMethod*))Enumerator_Reset_mAF1D65B854F80DB7F105622569293031FE788AA3_fshared)(__this, method);
}
inline void Enumerator_get_Current_mBBFD3B1857369E3256B1CCB21ED470D8B4E46B63_inline (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_mBBFD3B1857369E3256B1CCB21ED470D8B4E46B63_fshared_inline)((Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421*)__this, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m36EA64558736EC5AA965E6C7C12968E195E09AA5_inline (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_m36EA64558736EC5AA965E6C7C12968E195E09AA5_fshared_inline)((Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m8D9D0BC84AD0CE249D82F68C03E4DCBC1881AC5F (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m8D9D0BC84AD0CE249D82F68C03E4DCBC1881AC5F_fshared)(__this, method);
}
inline void Enumerator_Dispose_m0BBB67CF7366B5A989FBB12AA2293CD18853C98D (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817*, const RuntimeMethod*))Enumerator_Dispose_m0BBB67CF7366B5A989FBB12AA2293CD18853C98D_fshared)(__this, method);
}
inline int32_t NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, const RuntimeMethod*))NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_fshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m0DEF4AFE20672D3425DCFB0B4B7EBBAA7B69F595 (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817*, const RuntimeMethod*))Enumerator_MoveNext_m0DEF4AFE20672D3425DCFB0B4B7EBBAA7B69F595_fshared)(__this, method);
}
inline void Enumerator_Reset_m7DFE6628F82F51C868E30AF059855DEBF7ABE53A (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817*, const RuntimeMethod*))Enumerator_Reset_m7DFE6628F82F51C868E30AF059855DEBF7ABE53A_fshared)(__this, method);
}
inline void NativeSlice_1_get_Item_mB5E7BDE4EDF7E31480A9785BE103CC7E17E0E3A8 (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))NativeSlice_1_get_Item_mB5E7BDE4EDF7E31480A9785BE103CC7E17E0E3A8_fshared)((NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*)__this, ___0_index, il2cppRetVal, method);
}
inline void Enumerator_get_Current_mD5F9A8DA4A689D3BE78549843241C5C6D4936D84 (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_mD5F9A8DA4A689D3BE78549843241C5C6D4936D84_fshared)((Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mEB8088957B367DEEE33935D4174B19579BF14B58 (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mEB8088957B367DEEE33935D4174B19579BF14B58_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_m06F26A9D1616DCF8DE123B05DB3C01719237C3AF (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72*, const RuntimeMethod*))Enumerator_MoveNext_m06F26A9D1616DCF8DE123B05DB3C01719237C3AF_fshared)(__this, method);
}
inline void Enumerator_Reset_mEC7989864CADAFF8FC0E8487223BF86743692433 (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72*, const RuntimeMethod*))Enumerator_Reset_mEC7989864CADAFF8FC0E8487223BF86743692433_fshared)(__this, method);
}
inline void Enumerator_get_Current_m347C1E11612C5D8DBEFB997C4F82908223501003 (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_m347C1E11612C5D8DBEFB997C4F82908223501003_fshared)((Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mA0F433CE2FCFD54A32DFD9BE11A2E16310CC4E07 (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mA0F433CE2FCFD54A32DFD9BE11A2E16310CC4E07_fshared)(__this, method);
}
inline void Enumerator_Dispose_m62AB801313FAA9B181EBFE46DB8B2DB6D76B68B4 (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72*, const RuntimeMethod*))Enumerator_Dispose_m62AB801313FAA9B181EBFE46DB8B2DB6D76B68B4_fshared)(__this, method);
}
inline void Enumerator_Dispose_m994C711F41302E7D1D182F236EFD8FB3B27D5F2D (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322*, const RuntimeMethod*))Enumerator_Dispose_m994C711F41302E7D1D182F236EFD8FB3B27D5F2D_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_m736B3FBFDCE475107941328576DCEF4079395C57_inline (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322*, const RuntimeMethod*))Enumerator_MoveNext_m736B3FBFDCE475107941328576DCEF4079395C57_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_m2614D95F15B95F3C367C31F27E7271E314200A1A (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322*, const RuntimeMethod*))Enumerator_Reset_m2614D95F15B95F3C367C31F27E7271E314200A1A_fshared)(__this, method);
}
inline void Enumerator_get_Current_mFF2CA86985CA0F66A2D6326CBD03DC3074F32F53_inline (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_mFF2CA86985CA0F66A2D6326CBD03DC3074F32F53_fshared_inline)((Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF61779E4E05F1AA20916F8F43E213C3C7D14AE95 (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mF61779E4E05F1AA20916F8F43E213C3C7D14AE95_fshared)(__this, method);
}
inline void Enumerator_Dispose_mDC8B76F10D6E9656A8FF10CDA2848D398903292E (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E*, const RuntimeMethod*))Enumerator_Dispose_mDC8B76F10D6E9656A8FF10CDA2848D398903292E_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_m585575792FA654B690455D25C3B5F75647513AD3_inline (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E*, const RuntimeMethod*))Enumerator_MoveNext_m585575792FA654B690455D25C3B5F75647513AD3_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_mF3A98B3F6A0BE100E40BE6FD8404BA853B68ABA8 (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E*, const RuntimeMethod*))Enumerator_Reset_mF3A98B3F6A0BE100E40BE6FD8404BA853B68ABA8_fshared)(__this, method);
}
inline void Enumerator_get_Current_m28823F91A1BEC7D0ADA14F770BBBE6BDB8274403_inline (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_m28823F91A1BEC7D0ADA14F770BBBE6BDB8274403_fshared_inline)((Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mCDE7558044F2FD28B0492AD87A9229C66E92CFE3 (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mCDE7558044F2FD28B0492AD87A9229C66E92CFE3_fshared)(__this, method);
}
inline void Enumerator_Dispose_m56E92048F957D6744395C25536BE2404C425EB2A (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE*, const RuntimeMethod*))Enumerator_Dispose_m56E92048F957D6744395C25536BE2404C425EB2A_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_mFFB2EF2C36B70F350E88E4CDD5F4C7B2E03D1C61_inline (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE*, const RuntimeMethod*))Enumerator_MoveNext_mFFB2EF2C36B70F350E88E4CDD5F4C7B2E03D1C61_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_mC62471215811FA96C7120F6D2CF04E3AEDA9C397 (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE*, const RuntimeMethod*))Enumerator_Reset_mC62471215811FA96C7120F6D2CF04E3AEDA9C397_fshared)(__this, method);
}
inline void Enumerator_get_Current_mADD156FACD9219B3A0B5197F066274E38DD0CE3E_inline (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_mADD156FACD9219B3A0B5197F066274E38DD0CE3E_fshared_inline)((Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF7E50F72D8ADE4A4C470F58C788810EEC95F4DCC (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mF7E50F72D8ADE4A4C470F58C788810EEC95F4DCC_fshared)(__this, method);
}
inline void Enumerator_Dispose_m1A29F5802B1A0879B0C3B19D2490EF275248E005 (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421*, const RuntimeMethod*))Enumerator_Dispose_m1A29F5802B1A0879B0C3B19D2490EF275248E005_fshared)(__this, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m19B75B670752D0F001423B14DEB43037889A197A (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m19B75B670752D0F001423B14DEB43037889A197A_fshared)(__this, method);
}
inline void Enumerator_Dispose_mCB9B6D15D244D49204D2A903402C1D5011CC2830 (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C*, const RuntimeMethod*))Enumerator_Dispose_mCB9B6D15D244D49204D2A903402C1D5011CC2830_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_m9589C320A0B345A9190284C38FCB97F2015861DA_inline (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C*, const RuntimeMethod*))Enumerator_MoveNext_m9589C320A0B345A9190284C38FCB97F2015861DA_fshared_inline)(__this, method);
}
inline void Enumerator_Reset_m43C21832D8660DF1F98FA2733CE9D752ACB020D5 (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C*, const RuntimeMethod*))Enumerator_Reset_m43C21832D8660DF1F98FA2733CE9D752ACB020D5_fshared)(__this, method);
}
inline void Enumerator_get_Current_m44CEFC7935FF87861A589ACDB1024033E52A123E_inline (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_m44CEFC7935FF87861A589ACDB1024033E52A123E_fshared_inline)((Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m9E9FBC7AD882EDFB5FDCF6024ECA5DA4B2DD24DA (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m9E9FBC7AD882EDFB5FDCF6024ECA5DA4B2DD24DA_fshared)(__this, method);
}
inline void Enumerator_Dispose_m915D35B9BB2A77C5396F4FE1A1C53F1C93B8E337 (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))Enumerator_Dispose_m915D35B9BB2A77C5396F4FE1A1C53F1C93B8E337_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_m1756F06B6BC460B8EEB4522B562E097F37D54C59 (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))Enumerator_MoveNext_m1756F06B6BC460B8EEB4522B562E097F37D54C59_fshared)(__this, method);
}
inline void Enumerator_get_Current_m51282E47C90E55BF2D96A0D329869ABC122A85A0_inline (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m51282E47C90E55BF2D96A0D329869ABC122A85A0_fshared_inline)((Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m7D04FEF0F3E60E6E691D979806634E034498134E (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m7D04FEF0F3E60E6E691D979806634E034498134E_fshared)(__this, method);
}
inline void Enumerator_System_Collections_IEnumerator_Reset_m27D5470C040D50CC0200DDAB3C93DF3C4CA755B3 (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_Reset_m27D5470C040D50CC0200DDAB3C93DF3C4CA755B3_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_mF3F5043F0C7EA67C19F3FA22DF2A5E66C4B82985 (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092*, const RuntimeMethod*))Enumerator_MoveNext_mF3F5043F0C7EA67C19F3FA22DF2A5E66C4B82985_fshared)(__this, method);
}
inline void Enumerator_Reset_mC98285CB59B476CB33C08E3FDEC3AD026FD5D46B (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092*, const RuntimeMethod*))Enumerator_Reset_mC98285CB59B476CB33C08E3FDEC3AD026FD5D46B_fshared)(__this, method);
}
inline void InlinedArray_1_get_Item_m559A0B1FCFEC59844BBCB769C3C743C5F46A2201 (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))InlinedArray_1_get_Item_m559A0B1FCFEC59844BBCB769C3C743C5F46A2201_fshared)((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)__this, ___0_index, il2cppRetVal, method);
}
inline void Enumerator_get_Current_m29E9E90BB06DAEDA6F7D4721A6681EC28A0E54C6 (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m29E9E90BB06DAEDA6F7D4721A6681EC28A0E54C6_fshared)((Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC035FEFC4C4C462ECCBF7506FD23025A38501032 (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mC035FEFC4C4C462ECCBF7506FD23025A38501032_fshared)(__this, method);
}
inline void Enumerator_Dispose_m6CAB80EFB3B442E668D334714C1BA63697F23576 (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092*, const RuntimeMethod*))Enumerator_Dispose_m6CAB80EFB3B442E668D334714C1BA63697F23576_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
inline void Enumerator_get_Current_m5BA2E5A6E9016D327B7C3067D3D2B2016D37DFDA_inline (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m5BA2E5A6E9016D327B7C3067D3D2B2016D37DFDA_fshared_inline)((Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*)__this, il2cppRetVal, method);
}
inline int32_t LinkedList_1_get_Count_m6E80F28E7CB5BA6E35ECE961C429AE6CA69003A2_inline (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, const RuntimeMethod*))LinkedList_1_get_Count_m6E80F28E7CB5BA6E35ECE961C429AE6CA69003A2_fshared_inline)(__this, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m0F26F0C362DA633022A66F6C342673D39AD4622B (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m0F26F0C362DA633022A66F6C342673D39AD4622B_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_m4FB57970CC4FBEE295E533DE12F0B21FF7E13AAA (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*, const RuntimeMethod*))Enumerator_MoveNext_m4FB57970CC4FBEE295E533DE12F0B21FF7E13AAA_fshared)(__this, method);
}
inline void Enumerator_System_Collections_IEnumerator_Reset_mEE0F6DC54C3238FF39CDFF5675B11CD97C544897 (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_Reset_mEE0F6DC54C3238FF39CDFF5675B11CD97C544897_fshared)(__this, method);
}
inline void Enumerator_Dispose_m25395D42D3EE1E89A0B024E2FAF823E4A3FEF4D1 (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*, const RuntimeMethod*))Enumerator_Dispose_m25395D42D3EE1E89A0B024E2FAF823E4A3FEF4D1_fshared)(__this, method);
}
inline void Enumerator_System_Runtime_Serialization_ISerializable_GetObjectData_m200D1982786B356E5B42E63B71C05AC7B3EA337E (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37*, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677, const RuntimeMethod*))Enumerator_System_Runtime_Serialization_ISerializable_GetObjectData_m200D1982786B356E5B42E63B71C05AC7B3EA337E_fshared)(__this, ___0_info, ___1_context, method);
}
inline void Enumerator_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3675ECA18E1A14A4318723D0B93024692A40759B (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457*, RuntimeObject*, const RuntimeMethod*))Enumerator_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3675ECA18E1A14A4318723D0B93024692A40759B_fshared)(__this, ___0_sender, method);
}
inline void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8 (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared)(__this, method);
}
inline bool Enumerator_MoveNextRare_mF1A6D7920FDC3C83A7DA1F838C2FC51D716637D9 (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNextRare_mF1A6D7920FDC3C83A7DA1F838C2FC51D716637D9_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F (const RuntimeMethod* method) ;
inline void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_fshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen_m61D5A6F694C15854BCF089BFD945BD6DBDB47D4E (const RuntimeMethod* method) ;
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m3FCE22D15C040EE9F8614C711F786205BA6AAFB6 (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m3FCE22D15C040EE9F8614C711F786205BA6AAFB6_fshared)(__this, method);
}
inline void Enumerator_System_Collections_IEnumerator_Reset_mFA2701BBDA14ED6CC3113A32ED0E8B80DAD58A84 (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_Reset_mFA2701BBDA14ED6CC3113A32ED0E8B80DAD58A84_fshared)(__this, method);
}
inline void Enumerator_Dispose_mDE5B605B7794A192CC35F12013300AE26EB8FE5F (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, const RuntimeMethod*))Enumerator_Dispose_mDE5B605B7794A192CC35F12013300AE26EB8FE5F_fshared)(__this, method);
}
inline bool Enumerator_MoveNextRare_mA2A9C4EFAA8131F5D97D9B8626FDEDF343E93488 (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, const RuntimeMethod*))Enumerator_MoveNextRare_mA2A9C4EFAA8131F5D97D9B8626FDEDF343E93488_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_m2F9CDD8406C6495182E05B55A00C3D0C9620CA67 (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, const RuntimeMethod*))Enumerator_MoveNext_m2F9CDD8406C6495182E05B55A00C3D0C9620CA67_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
inline void Enumerator_get_Current_m05879F7740A935DB74AE5672E2B537349369A3C1_inline (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m05879F7740A935DB74AE5672E2B537349369A3C1_fshared_inline)((Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mA8280DCF9D59E671AB204C71415939B6D7B4211E (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mA8280DCF9D59E671AB204C71415939B6D7B4211E_fshared)(__this, method);
}
inline void Enumerator_System_Collections_IEnumerator_Reset_m15625F750730D127B128E2654A2B59982DEAB9C9 (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_Reset_m15625F750730D127B128E2654A2B59982DEAB9C9_fshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_fshared_inline)(__this, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mBB836D4E68A5F554A9A7C377FFBD67DA4253EA7D (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mBB836D4E68A5F554A9A7C377FFBD67DA4253EA7D_fshared)(__this, method);
}
inline void Enumerator_set_Current_m1BB3A6D5580E7C6A864831EED00A4E1B8E81B1B5_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, RuntimeObject*, const RuntimeMethod*))Enumerator_set_Current_m1BB3A6D5580E7C6A864831EED00A4E1B8E81B1B5_fshared_inline)(__this, ___0_value, method);
}
inline bool Enumerator_MoveNext_m4E164BF10DEA42BD1FB9648DD5795D120F5B99F2 (Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_fshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m1141D239836770EF8C75957763553C76773A96A4_inline (Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_fshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
inline bool IndexedCollectionPropertyBagEnumerator_1_MoveNext_m6695B2065C6EB0E71B90C2EFF9429E4A76F4C0BA (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479*, const RuntimeMethod*))IndexedCollectionPropertyBagEnumerator_1_MoveNext_m6695B2065C6EB0E71B90C2EFF9429E4A76F4C0BA_fshared)(__this, method);
}
inline RuntimeObject* IndexedCollectionPropertyBagEnumerator_1_get_Current_m4E570DCDE463BEA50BA7B3DC03595ED13939EDBE (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479*, const RuntimeMethod*))IndexedCollectionPropertyBagEnumerator_1_get_Current_m4E570DCDE463BEA50BA7B3DC03595ED13939EDBE_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_fshared)(__this, method);
}
inline void Enumerator_System_Collections_IEnumerator_Reset_mE24EC919F3F9A0356303B687F207D479BB66B3AB (Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_Reset_mFA2701BBDA14ED6CC3113A32ED0E8B80DAD58A84_fshared)(__this, method);
}
inline void IndexedCollectionPropertyBagEnumerator_1_Reset_mEF20F04CD33523EE6B378C8F992E49A2214E1626 (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479* __this, const RuntimeMethod* method)
{
	((  void (*) (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479*, const RuntimeMethod*))IndexedCollectionPropertyBagEnumerator_1_Reset_mEF20F04CD33523EE6B378C8F992E49A2214E1626_fshared)(__this, method);
}
inline void Enumerator_Reset_mDD80A4C2F5EFC81C22B7F74CACFF9D0921BA0A3C (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_Reset_mDD80A4C2F5EFC81C22B7F74CACFF9D0921BA0A3C_fshared)(__this, method);
}
inline void IndexedCollectionPropertyBagEnumerator_1_Dispose_mEBC1E3FF6876007C72F6F76ED237165B599B2505 (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479* __this, const RuntimeMethod* method)
{
	((  void (*) (IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479*, const RuntimeMethod*))IndexedCollectionPropertyBagEnumerator_1_Dispose_mEBC1E3FF6876007C72F6F76ED237165B599B2505_fshared)(__this, method);
}
inline void Enumerator_Dispose_m1938093C428E4EDE3B40A07184993FA35F74AB42 (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_Dispose_m1938093C428E4EDE3B40A07184993FA35F74AB42_fshared)(__this, method);
}
inline void Enumerator_Dispose_mA25DFE205338DF12128791E990699B49B335B759 (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, const RuntimeMethod*))Enumerator_Dispose_mA25DFE205338DF12128791E990699B49B335B759_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_mA6D24403558EA8BFEE5028D75AC049EC8677F637 (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, const RuntimeMethod*))Enumerator_MoveNext_mA6D24403558EA8BFEE5028D75AC049EC8677F637_fshared)(__this, method);
}
inline void Enumerator_ThrowEnumerationNotStartedOrEnded_mA8F87F65FFD80CCBB3A060C159463BB5B5603E93 (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, const RuntimeMethod*))Enumerator_ThrowEnumerationNotStartedOrEnded_mA8F87F65FFD80CCBB3A060C159463BB5B5603E93_fshared)(__this, method);
}
inline void Enumerator_get_Current_m2DDD9E2B36A595D40708EBE84125C065CCF6F11D (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m2DDD9E2B36A595D40708EBE84125C065CCF6F11D_fshared)((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m01A32A0663137A48FD334AD3F7BF1A172FEBA204 (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m01A32A0663137A48FD334AD3F7BF1A172FEBA204_fshared)(__this, method);
}
inline void Enumerator_System_Collections_IEnumerator_Reset_m5E20159EC017B0F62631E89E5784B2D532E2D314 (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_Reset_m5E20159EC017B0F62631E89E5784B2D532E2D314_fshared)(__this, method);
}
inline void Enumerator_Dispose_mBA9853A226A9CB16F8FB74D21519A91A38E063E0 (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*, const RuntimeMethod*))Enumerator_Dispose_mBA9853A226A9CB16F8FB74D21519A91A38E063E0_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_mA42BDA7B751B17DB4EC59F6995E3188780091966 (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*, const RuntimeMethod*))Enumerator_MoveNext_mA42BDA7B751B17DB4EC59F6995E3188780091966_fshared)(__this, method);
}
inline void Enumerator_Reset_m2845BC4731316BCC3E1AB5C3F5799107716B7810 (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*, const RuntimeMethod*))Enumerator_Reset_m2845BC4731316BCC3E1AB5C3F5799107716B7810_fshared)(__this, method);
}
inline void Enumerator_get_Current_mAEF87A53D24C4DB2F6069E75CF1A5D66D5F4D13F (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_mAEF87A53D24C4DB2F6069E75CF1A5D66D5F4D13F_fshared)((Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m6D0270EB2876CB03F839581CC803C1DAA52EF9D4 (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_m6D0270EB2876CB03F839581CC803C1DAA52EF9D4_fshared)(__this, method);
}
inline void Enumerator_Dispose_m475AD9FE055280B2B1CF43E93F9A2340C3EAE75C (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*, const RuntimeMethod*))Enumerator_Dispose_m475AD9FE055280B2B1CF43E93F9A2340C3EAE75C_fshared)(__this, method);
}
inline bool Enumerator_MoveNext_m3347052D874561F1E1857019C4F418A27B125353 (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*, const RuntimeMethod*))Enumerator_MoveNext_m3347052D874561F1E1857019C4F418A27B125353_fshared)(__this, method);
}
inline void Enumerator_ThrowEnumerationNotStartedOrEnded_mDFA786E51878E61AE16B8C27D512FD3407BA6AFA (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*, const RuntimeMethod*))Enumerator_ThrowEnumerationNotStartedOrEnded_mDFA786E51878E61AE16B8C27D512FD3407BA6AFA_fshared)(__this, method);
}
inline void Enumerator_get_Current_m748B0758792F434FAB29656C2F5CF6EEB4481D27 (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m748B0758792F434FAB29656C2F5CF6EEB4481D27_fshared)((Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC2EE4A74701F665A795443A0814F1CF22BC12560 (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_get_Current_mC2EE4A74701F665A795443A0814F1CF22BC12560_fshared)(__this, method);
}
inline void Enumerator_System_Collections_IEnumerator_Reset_m796D8D2C90C2436A06B08E30008143FCF74E8EC9 (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41*, const RuntimeMethod*))Enumerator_System_Collections_IEnumerator_Reset_m796D8D2C90C2436A06B08E30008143FCF74E8EC9_fshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapData_MoveNext_m3A7C4662D2D479B740F657CECED1B78E1BDE1BDE_inline (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_bucketIndex, int32_t* ___2_nextIndex, int32_t* ___3_index, const RuntimeMethod* method) ;
inline uint16_t FixedList128Bytes_1_get_length_m01D23D934D19D0EEDCA425F421ABA56B3DA58F3C_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D*, const RuntimeMethod*))FixedList128Bytes_1_get_length_m01D23D934D19D0EEDCA425F421ABA56B3DA58F3C_fshared_inline)(__this, method);
}
inline uint8_t* FixedList128Bytes_1_get_Buffer_mD43014DEC5833FAF9392FC3FCBE3E9B54C6C4156_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D*, const RuntimeMethod*))FixedList128Bytes_1_get_Buffer_mD43014DEC5833FAF9392FC3FCBE3E9B54C6C4156_fshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) ;
inline uint16_t FixedList32Bytes_1_get_length_mD16FF5C8CCA29B2A58BB98073E6729F0E2BBE907_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF*, const RuntimeMethod*))FixedList32Bytes_1_get_length_mD16FF5C8CCA29B2A58BB98073E6729F0E2BBE907_fshared_inline)(__this, method);
}
inline uint8_t* FixedList32Bytes_1_get_Buffer_mFB1AAFA86AB113AC3BEF550971AA4DA182A64606_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF*, const RuntimeMethod*))FixedList32Bytes_1_get_Buffer_mFB1AAFA86AB113AC3BEF550971AA4DA182A64606_fshared_inline)(__this, method);
}
inline uint16_t FixedList4096Bytes_1_get_length_m0437506FA2283836CDDC3A46CC5F706D1819B05A_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0*, const RuntimeMethod*))FixedList4096Bytes_1_get_length_m0437506FA2283836CDDC3A46CC5F706D1819B05A_fshared_inline)(__this, method);
}
inline uint8_t* FixedList4096Bytes_1_get_Buffer_m76BCD608C0436D7647CC2BD2D197629A9B1C6DC3_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0*, const RuntimeMethod*))FixedList4096Bytes_1_get_Buffer_m76BCD608C0436D7647CC2BD2D197629A9B1C6DC3_fshared_inline)(__this, method);
}
inline uint16_t FixedList512Bytes_1_get_length_mB15FCBDD135D7C01311794E83AF0B6436D2D5464_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F*, const RuntimeMethod*))FixedList512Bytes_1_get_length_mB15FCBDD135D7C01311794E83AF0B6436D2D5464_fshared_inline)(__this, method);
}
inline uint8_t* FixedList512Bytes_1_get_Buffer_mB8203817FDA4AEEF7E986FEF9A92B92F48456DA4_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F*, const RuntimeMethod*))FixedList512Bytes_1_get_Buffer_mB8203817FDA4AEEF7E986FEF9A92B92F48456DA4_fshared_inline)(__this, method);
}
inline uint16_t FixedList64Bytes_1_get_length_m3DE952DD93CA6DA9DCC7AE3B38049D044BC24628_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3*, const RuntimeMethod*))FixedList64Bytes_1_get_length_m3DE952DD93CA6DA9DCC7AE3B38049D044BC24628_fshared_inline)(__this, method);
}
inline uint8_t* FixedList64Bytes_1_get_Buffer_m453BB0D8491D838AC1381E57320C9FE6E3943F68_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3*, const RuntimeMethod*))FixedList64Bytes_1_get_Buffer_m453BB0D8491D838AC1381E57320C9FE6E3943F68_fshared_inline)(__this, method);
}
inline bool HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626 (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method)
{
	return ((  bool (*) (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626_fshared)(__this, ___0_bucketIndex, ___1_nextIndex, ___2_index, method);
}
inline void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapData_MoveNextSearch_m470DB16F92234F8BF5C36E38E1B2D81A208634F4 (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_bucketIndex, int32_t* ___2_nextIndex, int32_t* ___3_index, const RuntimeMethod* method) ;
inline uint8_t* FixedList128Bytes_1_get_buffer_m3FA0F1453D72938135D3074318E14AD2A1B32DA4_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D*, const RuntimeMethod*))FixedList128Bytes_1_get_buffer_m3FA0F1453D72938135D3074318E14AD2A1B32DA4_fshared_inline)(__this, method);
}
inline int32_t FixedList_PaddingBytes_TisIl2CppFullySharedGenericStruct_m573FD523FF52FE25B53DA0840EB707029DA7AF5F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))FixedList_PaddingBytes_TisIl2CppFullySharedGenericStruct_m573FD523FF52FE25B53DA0840EB707029DA7AF5F_fshared_inline)(method);
}
inline uint8_t* FixedList32Bytes_1_get_buffer_m139B05C9B2F45AA86EBFBD4F0EC8803848137F66_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF*, const RuntimeMethod*))FixedList32Bytes_1_get_buffer_m139B05C9B2F45AA86EBFBD4F0EC8803848137F66_fshared_inline)(__this, method);
}
inline uint8_t* FixedList4096Bytes_1_get_buffer_mC6FF3A165067CDB3016B89246011CB5D7B34B71D_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0*, const RuntimeMethod*))FixedList4096Bytes_1_get_buffer_mC6FF3A165067CDB3016B89246011CB5D7B34B71D_fshared_inline)(__this, method);
}
inline uint8_t* FixedList512Bytes_1_get_buffer_m513212BD1E1DB094D6923FAD0B5D92DF8FBAC102_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F*, const RuntimeMethod*))FixedList512Bytes_1_get_buffer_m513212BD1E1DB094D6923FAD0B5D92DF8FBAC102_fshared_inline)(__this, method);
}
inline uint8_t* FixedList64Bytes_1_get_buffer_m590958E1E714990BD451E67228F00F8DB98CC77E_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3*, const RuntimeMethod*))FixedList64Bytes_1_get_buffer_m590958E1E714990BD451E67228F00F8DB98CC77E_fshared_inline)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m25573278D92DAE1280EBFACAAB6BB50CFF4172CD_inline (int32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m9318C63D3F5FC4DE0F7ACB372307134237D52DA9_inline (uint32_t ___0_x, const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD8A207CB41B6E1C5B7AA4A220CB03058AF6CC858_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4 ___0_list, const RuntimeMethod* method) 
{
	Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* G_B2_0 = NULL;
	Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* G_B1_0 = NULL;
	uintptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* G_B3_1 = NULL;
	{
		InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4 L_0 = ___0_list;
		int32_t L_1 = L_0.___m_Count;
		__this->___m_Count = L_1;
		__this->___m_Current = (-1);
		int32_t L_2 = __this->___m_Count;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0021;
		}
		G_B1_0 = __this;
	}
	{
		uintptr_t L_3 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_002c;
	}

IL_0021:
	{
		InputControlList_1_t84F2DA44C9BD66500A2844A168208BD391B51BF4 L_4 = ___0_list;
		NativeArray_1_t07975297AD7F7512193094A7C0703BA872EF7A7B L_5 = L_4.___m_Indices;
		void* L_6;
		L_6 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m44EAE568720002EAD1F4ECE1CBA62E756FB05AFA_inline(L_5, NULL);
		G_B3_0 = ((uintptr_t)(intptr_t)(L_6));
		G_B3_1 = G_B2_0;
	}

IL_002c:
	{
		G_B3_1->___m_Indices = (uint64_t*)G_B3_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE21BD33899AFF1477136619A8C34639DCA029CC0_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Current;
		int32_t L_1 = __this->___m_Count;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		int32_t L_2 = __this->___m_Current;
		__this->___m_Current = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = __this->___m_Current;
		int32_t L_4 = __this->___m_Count;
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mE21BD33899AFF1477136619A8C34639DCA029CC0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mE21BD33899AFF1477136619A8C34639DCA029CC0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mAB3175D078843BDDC99FF3C3ED52257846066970_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Current = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mAB3175D078843BDDC99FF3C3ED52257846066970_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69>(__this);
	Enumerator_Reset_mAB3175D078843BDDC99FF3C3ED52257846066970(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mB3247AE1E03448F01EBBF6941EC44FFCD31289FC_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		uint64_t* L_0 = __this->___m_Indices;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_0) == ((uintptr_t)L_1))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral670CBAB5C8A30A4C8DC68337B78F13CC30BC704D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0015:
	{
		uint64_t* L_3 = __this->___m_Indices;
		int32_t L_4 = __this->___m_Current;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		int64_t L_6 = *(((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(L_5, 8))))));
		Il2CppSharedGenericObject* L_7;
		L_7 = InputControlList_1_FromIndex_m442B00B502638B69F62E6669FB5DEDFA50ED17B6(L_6, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		return L_7;
	}
}
IL2CPP_EXTERN_C  Il2CppSharedGenericObject* Enumerator_get_Current_mB3247AE1E03448F01EBBF6941EC44FFCD31289FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69>(__this);
	Il2CppSharedGenericObject* _returnValue;
	_returnValue = Enumerator_get_Current_mB3247AE1E03448F01EBBF6941EC44FFCD31289FC(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC4498C209E3B248A02CD1E4904D2E20274D81DB5_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = Enumerator_get_Current_mB3247AE1E03448F01EBBF6941EC44FFCD31289FC(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC4498C209E3B248A02CD1E4904D2E20274D81DB5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mC4498C209E3B248A02CD1E4904D2E20274D81DB5(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCD2379EFB931AEDA4F9C3D8290967A105E3878CB_gshared (Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mCD2379EFB931AEDA4F9C3D8290967A105E3878CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tBDA9B6FC1B6B46585AC3BB187EB3B6F058D22D69>(__this);
	Enumerator_Dispose_mCD2379EFB931AEDA4F9C3D8290967A105E3878CB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9F29B7771DB9254FA527BBD2018BD4F2A8B941B0_gshared (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, UQueryState_1_t62CA2841B4A1205A8554F7E9D2A3FBFB0F92B192 ___0_queryState, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(UQueryState_1_t469E70AF7F7E359CC21E9875D08B1D48632DE915_StaticInit);
	{
		CHECKED_LOCAL_INIT(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_StaticInit,(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_0;
		L_0 = VisualElementListPool_Get_m99F3D55FC85A740A48A062146D40D59F50107CC2(0, NULL);
		__this->___iterationList = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iterationList), (void*)L_0);
		CHECKED_LOCAL_INIT(UQueryState_1_t469E70AF7F7E359CC21E9875D08B1D48632DE915_StaticInit,(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)),il2cpp_codegen_runtime_class_init_inline);
		ListQueryMatcher_1_t5888012D63B675F26A02C9BF208DC2C856BFBBC4* L_1 = ((UQueryState_1_t62CA2841B4A1205A8554F7E9D2A3FBFB0F92B192_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_EnumerationList;
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_2 = __this->___iterationList;
		ListQueryMatcher_1_set_matches_mA791583D020B06F7DB407BAA4AC0DC65BF61A2BC_inline(L_1, L_2, NULL);
		ListQueryMatcher_1_t5888012D63B675F26A02C9BF208DC2C856BFBBC4* L_3 = ((UQueryState_1_t62CA2841B4A1205A8554F7E9D2A3FBFB0F92B192_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_EnumerationList;
		UQueryState_1_t62CA2841B4A1205A8554F7E9D2A3FBFB0F92B192 L_4 = ___0_queryState;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_5 = L_4.___m_Element;
		UQueryState_1_t62CA2841B4A1205A8554F7E9D2A3FBFB0F92B192 L_6 = ___0_queryState;
		List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* L_7 = L_6.___m_Matchers;
		VirtualActionInvoker2< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* >::Invoke(7, (UQueryMatcher_tF8783F54BA397641240DA7025126F6301EF53FF8*)L_3, L_5, L_7);
		ListQueryMatcher_1_t5888012D63B675F26A02C9BF208DC2C856BFBBC4* L_8 = ((UQueryState_1_t62CA2841B4A1205A8554F7E9D2A3FBFB0F92B192_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___s_EnumerationList;
		ListQueryMatcher_1_Reset_m1ED519C668E60E76E856B666DD5FC4B01121A181(L_8, NULL);
		__this->___currentIndex = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Enumerator_get_Current_mD195DA373CA07B295F25635B42F3ED5E32221B5C_gshared (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_0 = __this->___iterationList;
		int32_t L_1 = __this->___currentIndex;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2;
		L_2 = List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092(L_0, L_1, List_1_get_Item_mF58794633948FE8284FCDACC4456686548388092_RuntimeMethod_var);
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)));
	}
}
IL2CPP_EXTERN_C  Il2CppSharedGenericObject* Enumerator_get_Current_mD195DA373CA07B295F25635B42F3ED5E32221B5C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96>(__this);
	Il2CppSharedGenericObject* _returnValue;
	_returnValue = Enumerator_get_Current_mD195DA373CA07B295F25635B42F3ED5E32221B5C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m38DD50A147FD01D083464E220301DC3F99A84197_gshared (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Il2CppSharedGenericObject* L_0;
		L_0 = Enumerator_get_Current_mD195DA373CA07B295F25635B42F3ED5E32221B5C(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m38DD50A147FD01D083464E220301DC3F99A84197_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m38DD50A147FD01D083464E220301DC3F99A84197(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFFF471615D4AAD375CD440DAB84DE6979D99625F_gshared (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___currentIndex;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->___currentIndex = L_1;
		int32_t L_2 = V_0;
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_3 = __this->___iterationList;
		int32_t L_4;
		L_4 = List_1_get_Count_m76A83B76330D385CC22ECE544729CDD0FCEAFECC_inline(L_3, NULL);
		return (bool)((((int32_t)L_2) < ((int32_t)L_4))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mFFF471615D4AAD375CD440DAB84DE6979D99625F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mFFF471615D4AAD375CD440DAB84DE6979D99625F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mDD6869C382827C40E00CB14006C453CA19A2F6E6_gshared (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method) 
{
	{
		__this->___currentIndex = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mDD6869C382827C40E00CB14006C453CA19A2F6E6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96>(__this);
	Enumerator_Reset_mDD6869C382827C40E00CB14006C453CA19A2F6E6(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m92C8983EF703D0E6C2A069318E1F6728FB825575_gshared (Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_StaticInit);
	{
		List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* L_0 = __this->___iterationList;
		CHECKED_LOCAL_INIT(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_StaticInit,(VisualElementListPool_tB82E686FE29EA30D8CEDF6FF352FD1B7E7A30095_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		VisualElementListPool_Release_mAF4ED38CC4F9A6E58B06F4B0BD13611F7DECBCFA(L_0, NULL);
		__this->___iterationList = (List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___iterationList), (void*)(List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95*)NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m92C8983EF703D0E6C2A069318E1F6728FB825575_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD0C3151607C8BBB42633CAA845F02C4B8E2AAA96>(__this);
	Enumerator_Dispose_m92C8983EF703D0E6C2A069318E1F6728FB825575(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF184AA2EE7AADB741CBA6BAFE4E570EFC44463F5_fshared (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* ___0_list, const RuntimeMethod* method) 
{
	{
		FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* L_0 = ___0_list;
		FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D L_1 = (*(FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D*)L_0);
		__this->___m_List = L_1;
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mF8BD031AD4509A910CC14E00A06A324F6F86484A_fshared (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mF8BD031AD4509A910CC14E00A06A324F6F86484A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B>(__this);
	Enumerator_Dispose_mF8BD031AD4509A910CC14E00A06A324F6F86484A(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m242FBFBB91DEFCFF5AD76B3C5D94727D91630F29_fshared (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* L_2 = (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D*)(&__this->___m_List);
		int32_t L_3;
		L_3 = FixedList128Bytes_1_get_Length_m927F92EC07E24F20A7314C091F5C5FACA9A0C16B_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m242FBFBB91DEFCFF5AD76B3C5D94727D91630F29_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m242FBFBB91DEFCFF5AD76B3C5D94727D91630F29_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m63198339E2BD9F1E98D059E6B92943A290AA2717_fshared (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m63198339E2BD9F1E98D059E6B92943A290AA2717_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B>(__this);
	Enumerator_Reset_m63198339E2BD9F1E98D059E6B92943A290AA2717(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m49C3CD9AFB11BE8D7A533877C906828641184543_fshared (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t59CDD47BF159E18B3214418765AE8B87BF6CDAF5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t59CDD47BF159E18B3214418765AE8B87BF6CDAF5);
	{
		FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* L_0 = (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D*)(&__this->___m_List);
		int32_t L_1 = __this->___m_Index;
		FixedList128Bytes_1_get_Item_m5C6B0C333D9C8C117E550913DFB568BF59E3A1E9_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t59CDD47BF159E18B3214418765AE8B87BF6CDAF5);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m49C3CD9AFB11BE8D7A533877C906828641184543_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B>(__this);
	Enumerator_get_Current_m49C3CD9AFB11BE8D7A533877C906828641184543_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m730C48A338AF2F250945231887E06B9DB8A57B75_fshared (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t59CDD47BF159E18B3214418765AE8B87BF6CDAF5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t59CDD47BF159E18B3214418765AE8B87BF6CDAF5);
	{
		Enumerator_get_Current_m49C3CD9AFB11BE8D7A533877C906828641184543_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m730C48A338AF2F250945231887E06B9DB8A57B75_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m730C48A338AF2F250945231887E06B9DB8A57B75(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE731D81618EFE254BA11847482739626292505E9_fshared (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* ___0_list, const RuntimeMethod* method) 
{
	{
		FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* L_0 = ___0_list;
		FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF L_1 = (*(FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF*)L_0);
		__this->___m_List = L_1;
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m441E7F78015D07C18765FA9259A56A54445C3B9B_fshared (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m441E7F78015D07C18765FA9259A56A54445C3B9B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7>(__this);
	Enumerator_Dispose_m441E7F78015D07C18765FA9259A56A54445C3B9B(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9063CA1E8AA6E6D8D65CE20A21CCA365A0DA2715_fshared (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* L_2 = (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF*)(&__this->___m_List);
		int32_t L_3;
		L_3 = FixedList32Bytes_1_get_Length_m69BE1E6D357498954A3C7A28D7F00CAAA79F80DE_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m9063CA1E8AA6E6D8D65CE20A21CCA365A0DA2715_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m9063CA1E8AA6E6D8D65CE20A21CCA365A0DA2715_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m459EB24E55EC2975B98A40E4F4D45D7B93D3DEDB_fshared (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m459EB24E55EC2975B98A40E4F4D45D7B93D3DEDB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7>(__this);
	Enumerator_Reset_m459EB24E55EC2975B98A40E4F4D45D7B93D3DEDB(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m97BA1C93F238DDDFCCCCFB55367C4F1F6DA9942E_fshared (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tD2DD713AA88B0DD20A31528F1466852E7A2D4B42 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tD2DD713AA88B0DD20A31528F1466852E7A2D4B42);
	{
		FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* L_0 = (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF*)(&__this->___m_List);
		int32_t L_1 = __this->___m_Index;
		FixedList32Bytes_1_get_Item_m1E22159351628A448545A200C5B692F2A16594FC_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tD2DD713AA88B0DD20A31528F1466852E7A2D4B42);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m97BA1C93F238DDDFCCCCFB55367C4F1F6DA9942E_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7>(__this);
	Enumerator_get_Current_m97BA1C93F238DDDFCCCCFB55367C4F1F6DA9942E_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m098B6296B8544564B28C91CD50FF144A79AA0033_fshared (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tD2DD713AA88B0DD20A31528F1466852E7A2D4B42 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tD2DD713AA88B0DD20A31528F1466852E7A2D4B42);
	{
		Enumerator_get_Current_m97BA1C93F238DDDFCCCCFB55367C4F1F6DA9942E_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m098B6296B8544564B28C91CD50FF144A79AA0033_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m098B6296B8544564B28C91CD50FF144A79AA0033(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mE23DBD7D859576D8F99B3FEC7DFB8C1FC308CA9E_fshared (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* ___0_list, const RuntimeMethod* method) 
{
	{
		FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* L_0 = ___0_list;
		FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0 L_1 = (*(FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0*)L_0);
		__this->___m_List = L_1;
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m43FBCE886B633BAD8374FD2163FE644CBF9E4D4C_fshared (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m43FBCE886B633BAD8374FD2163FE644CBF9E4D4C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C>(__this);
	Enumerator_Dispose_m43FBCE886B633BAD8374FD2163FE644CBF9E4D4C(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2D7B02C42527454C558080D4F9900A3F383BE9C0_fshared (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* L_2 = (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0*)(&__this->___m_List);
		int32_t L_3;
		L_3 = FixedList4096Bytes_1_get_Length_m7F849A6DE2F1D919926FD832199A91C25A15CF83_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m2D7B02C42527454C558080D4F9900A3F383BE9C0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m2D7B02C42527454C558080D4F9900A3F383BE9C0_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mD70CC3896E1D8764E122375A2C9FA62AC9F9974D_fshared (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mD70CC3896E1D8764E122375A2C9FA62AC9F9974D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C>(__this);
	Enumerator_Reset_mD70CC3896E1D8764E122375A2C9FA62AC9F9974D(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m5CB310C7BF731494B28B1C749D9D5BCF8317556E_fshared (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t0E6730EBDA5394C898DCC382171709D7A47C9080 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t0E6730EBDA5394C898DCC382171709D7A47C9080);
	{
		FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* L_0 = (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0*)(&__this->___m_List);
		int32_t L_1 = __this->___m_Index;
		FixedList4096Bytes_1_get_Item_m970363422CEE1B790AFBEB5934459409F61AD136_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t0E6730EBDA5394C898DCC382171709D7A47C9080);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m5CB310C7BF731494B28B1C749D9D5BCF8317556E_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C>(__this);
	Enumerator_get_Current_m5CB310C7BF731494B28B1C749D9D5BCF8317556E_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mD1225F5E7913BF76CDE3F81811F0B9D94C74DCF5_fshared (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t0E6730EBDA5394C898DCC382171709D7A47C9080 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t0E6730EBDA5394C898DCC382171709D7A47C9080);
	{
		Enumerator_get_Current_m5CB310C7BF731494B28B1C749D9D5BCF8317556E_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mD1225F5E7913BF76CDE3F81811F0B9D94C74DCF5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mD1225F5E7913BF76CDE3F81811F0B9D94C74DCF5(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m1D6B1C8A215054192808FC3FF7219DB2E18639A8_fshared (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* ___0_list, const RuntimeMethod* method) 
{
	{
		FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* L_0 = ___0_list;
		FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F L_1 = (*(FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F*)L_0);
		__this->___m_List = L_1;
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCF32EE2E23D7EDD7036137434591DB39122696CB_fshared (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mCF32EE2E23D7EDD7036137434591DB39122696CB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97>(__this);
	Enumerator_Dispose_mCF32EE2E23D7EDD7036137434591DB39122696CB(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7B33D583007CBEE3B0F94CADFB5E0D82F54C05D2_fshared (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* L_2 = (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F*)(&__this->___m_List);
		int32_t L_3;
		L_3 = FixedList512Bytes_1_get_Length_m39F0C6ECC0732E96B3F8C0A2553A71E975011ABF_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m7B33D583007CBEE3B0F94CADFB5E0D82F54C05D2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m7B33D583007CBEE3B0F94CADFB5E0D82F54C05D2_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mCE1637C236787E96B16B0DECCB39F0FC6DD3C62F_fshared (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mCE1637C236787E96B16B0DECCB39F0FC6DD3C62F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97>(__this);
	Enumerator_Reset_mCE1637C236787E96B16B0DECCB39F0FC6DD3C62F(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m9C6F591E8913284C78CEE9DC0242512553824BB7_fshared (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t33CA3010072F8EF57546CCC7AF1A6030F6A4CE93 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t33CA3010072F8EF57546CCC7AF1A6030F6A4CE93);
	{
		FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* L_0 = (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F*)(&__this->___m_List);
		int32_t L_1 = __this->___m_Index;
		FixedList512Bytes_1_get_Item_m2BDE2A77E2F1085AF6581D7128CF28D81BF1B8FC_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t33CA3010072F8EF57546CCC7AF1A6030F6A4CE93);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m9C6F591E8913284C78CEE9DC0242512553824BB7_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97>(__this);
	Enumerator_get_Current_m9C6F591E8913284C78CEE9DC0242512553824BB7_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF78EFF98512E7ED675C9A740CE49813B0EA030FA_fshared (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t33CA3010072F8EF57546CCC7AF1A6030F6A4CE93 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t33CA3010072F8EF57546CCC7AF1A6030F6A4CE93);
	{
		Enumerator_get_Current_m9C6F591E8913284C78CEE9DC0242512553824BB7_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF78EFF98512E7ED675C9A740CE49813B0EA030FA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mF78EFF98512E7ED675C9A740CE49813B0EA030FA(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2038887A8ACC7CD87FCCEE054589BDEF3CD941FD_fshared (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* ___0_list, const RuntimeMethod* method) 
{
	{
		FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* L_0 = ___0_list;
		FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3 L_1 = (*(FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3*)L_0);
		__this->___m_List = L_1;
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m907F3D4BA10B32D3847BB222EE62CAB88BCE9DD5_fshared (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m907F3D4BA10B32D3847BB222EE62CAB88BCE9DD5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC>(__this);
	Enumerator_Dispose_m907F3D4BA10B32D3847BB222EE62CAB88BCE9DD5(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0A00DE94C43CC10582082865870C48D4D10F4C2B_fshared (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* L_2 = (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3*)(&__this->___m_List);
		int32_t L_3;
		L_3 = FixedList64Bytes_1_get_Length_m9CE762AB945BF8C956C2B6AF84AEE58B20A679C3_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m0A00DE94C43CC10582082865870C48D4D10F4C2B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m0A00DE94C43CC10582082865870C48D4D10F4C2B_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m83B2D9BC4739B9793D1F99DE36828C994D7AD6D8_fshared (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m83B2D9BC4739B9793D1F99DE36828C994D7AD6D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC>(__this);
	Enumerator_Reset_m83B2D9BC4739B9793D1F99DE36828C994D7AD6D8(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m913E8AF9BD221F6DC06B386A0C2D1F66DD2294D5_fshared (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t786D71AE40F85F8250A3F1E231E7643F7965459F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t786D71AE40F85F8250A3F1E231E7643F7965459F);
	{
		FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* L_0 = (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3*)(&__this->___m_List);
		int32_t L_1 = __this->___m_Index;
		FixedList64Bytes_1_get_Item_m80147EAADDAE6893ABEDA8444B6F72691EB1A899_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t786D71AE40F85F8250A3F1E231E7643F7965459F);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m913E8AF9BD221F6DC06B386A0C2D1F66DD2294D5_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC>(__this);
	Enumerator_get_Current_m913E8AF9BD221F6DC06B386A0C2D1F66DD2294D5_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m163356B9FFD6D52C154FE6EEE4A9AD348DE9DBA6_fshared (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t786D71AE40F85F8250A3F1E231E7643F7965459F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t786D71AE40F85F8250A3F1E231E7643F7965459F);
	{
		Enumerator_get_Current_m913E8AF9BD221F6DC06B386A0C2D1F66DD2294D5_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m163356B9FFD6D52C154FE6EEE4A9AD348DE9DBA6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m163356B9FFD6D52C154FE6EEE4A9AD348DE9DBA6(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m844321AD2F41AFAB9B9D7D57A2572F8C07777D7B_fshared (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* ___0_data, const RuntimeMethod* method) 
{
	{
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_0 = ___0_data;
		__this->___m_Data = L_0;
		__this->___m_Index = (-1);
		__this->___m_BucketIndex = 0;
		__this->___m_NextIndex = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD61BB53328B5D708EEEB308A096A80542A63050D_fshared (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, const RuntimeMethod* method) 
{
	{
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_0 = __this->___m_Data;
		int32_t* L_1 = (int32_t*)(&__this->___m_BucketIndex);
		int32_t* L_2 = (int32_t*)(&__this->___m_NextIndex);
		int32_t* L_3 = (int32_t*)(&__this->___m_Index);
		bool L_4;
		L_4 = HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_inline((HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*)L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m3A62EFB2B231DD5F4493F95969BDEE57BA6D0732_fshared (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Index = (-1);
		__this->___m_BucketIndex = 0;
		__this->___m_NextIndex = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_GetCurrentKey_mEF70D21D7190C8EA3A42C1ABB88E1DA9739C99B5_fshared (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
	const Il2CppFullySharedGenericStruct L_7 = L_6;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
	memset(V_0, 0, SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_1 = __this->___m_Data;
		Il2CppFullySharedGenericStruct* L_2 = L_1->___Keys;
		int32_t L_3 = __this->___m_Index;
		intptr_t L_4 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_3,NULL));
		uint32_t L_5 = SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49;
		il2cpp_codegen_memcpy(L_6, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(L_4, (int32_t)L_5)))), SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
		return;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m44AD240B0B25280AFFA3D82CF3CE62CB1D5AA957_fshared (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* ___0_history, const RuntimeMethod* method) 
{
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = ___0_history;
		__this->___m_History = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_History), (void*)L_0);
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m14F3F3BDFD5DEF6EE8298FF8D193A00F82B09B05_fshared (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_1 = __this->___m_History;
		int32_t L_2;
		L_2 = InputStateHistory_get_Count_m23DF78272A6C97F6C8782A953482772CDF6FFA81_inline((InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480*)L_1, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) < ((int32_t)L_2)))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		int32_t L_3 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m14F3F3BDFD5DEF6EE8298FF8D193A00F82B09B05_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m14F3F3BDFD5DEF6EE8298FF8D193A00F82B09B05(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m763003C102B5B1FDF57EE1578F87D47AA65F4610_fshared (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m763003C102B5B1FDF57EE1578F87D47AA65F4610_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D>(__this);
	Enumerator_Reset_m763003C102B5B1FDF57EE1578F87D47AA65F4610(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D Enumerator_get_Current_mB1303F9939CC91E93071FCCEC5CDEC661A9E0730_fshared (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		InputStateHistory_1_tE021C3F659816F734AC70F28D1CD72188498C6E8* L_0 = __this->___m_History;
		int32_t L_1 = __this->___m_Index;
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_2;
		L_2 = InputStateHistory_1_get_Item_mBE8959EBCC92060639869AAD6967E40D4CDFD948(L_0, L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C  Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D Enumerator_get_Current_mB1303F9939CC91E93071FCCEC5CDEC661A9E0730_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D>(__this);
	Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D _returnValue;
	_returnValue = Enumerator_get_Current_mB1303F9939CC91E93071FCCEC5CDEC661A9E0730(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m61D9BA3F2ADDB0E3B13E50FC569555458927EBF0_fshared (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_0;
		L_0 = Enumerator_get_Current_mB1303F9939CC91E93071FCCEC5CDEC661A9E0730(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		Record_tBBF4D7C10C251A1BFB3A09A177BD8743E25C494D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m61D9BA3F2ADDB0E3B13E50FC569555458927EBF0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m61D9BA3F2ADDB0E3B13E50FC569555458927EBF0(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m59AF134FB50E7CF06D2E4F16E5E428D4BDBC919C_fshared (Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m59AF134FB50E7CF06D2E4F16E5E428D4BDBC919C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tD54C059D91DAACC640E125D594269E417A925D6D>(__this);
	Enumerator_Dispose_m59AF134FB50E7CF06D2E4F16E5E428D4BDBC919C(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m54EAA0B597A1197DBC10AF73A3C423B5F8046A75_fshared (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___0_array;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_0);
		il2cpp_codegen_write_field_data<NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_1);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (-1));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m97F29D6F80B478A97A6DA81F665E7DA693E17E64_fshared (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m97F29D6F80B478A97A6DA81F665E7DA693E17E64_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405>(__this);
	Enumerator_Dispose_m97F29D6F80B478A97A6DA81F665E7DA693E17E64(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC9099E56E01AB33169AB4EE888BD9A2B752961DE_fshared (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_0, 1)));
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_2 = (((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))->___m_Length;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}
	{
		void* L_3 = (((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))->___m_Buffer;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_3, L_4, (Il2CppFullySharedGenericStruct*)L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_5, SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
		return (bool)1;
	}

IL_003f:
	{
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mC9099E56E01AB33169AB4EE888BD9A2B752961DE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mC9099E56E01AB33169AB4EE888BD9A2B752961DE_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mB15834348E10F7612876D2AE774493AE7AF604B2_fshared (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (-1));
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mB15834348E10F7612876D2AE774493AE7AF604B2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405>(__this);
	Enumerator_Reset_mB15834348E10F7612876D2AE774493AE7AF604B2(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mF9A198DACCE8ED0DC6FD097825D7A0F82D149DBA_fshared (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_mF9A198DACCE8ED0DC6FD097825D7A0F82D149DBA_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405>(__this);
	Enumerator_get_Current_mF9A198DACCE8ED0DC6FD097825D7A0F82D149DBA_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m81767706F1E3B41EAB92F21B1669693FFE92ACCB_fshared (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
	{
		Enumerator_get_Current_mF9A198DACCE8ED0DC6FD097825D7A0F82D149DBA_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m81767706F1E3B41EAB92F21B1669693FFE92ACCB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m81767706F1E3B41EAB92F21B1669693FFE92ACCB_inline(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m83F02E3FEEF3C18742EE3F0C24090B48214001EA_fshared (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m83F02E3FEEF3C18742EE3F0C24090B48214001EA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F>(__this);
	Enumerator_Dispose_m83F02E3FEEF3C18742EE3F0C24090B48214001EA(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDBC21788DC29B177915D6FC64E98BA401BA9F163_fshared (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_0 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		bool L_1;
		L_1 = Enumerator_MoveNext_mD61BB53328B5D708EEEB308A096A80542A63050D_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mDBC21788DC29B177915D6FC64E98BA401BA9F163_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mDBC21788DC29B177915D6FC64E98BA401BA9F163_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m0DB23E081DD7E8E197CF9222CDAA393CAE47B7C6_fshared (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_0 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		Enumerator_Reset_m3A62EFB2B231DD5F4493F95969BDEE57BA6D0732(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m0DB23E081DD7E8E197CF9222CDAA393CAE47B7C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F>(__this);
	Enumerator_Reset_m0DB23E081DD7E8E197CF9222CDAA393CAE47B7C6(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mB519F490A17E381EACF6CBA5D1C31200C64D984F_fshared (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t76AF9F617C4D8EAC69589922FAD823228702CA86 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t76AF9F617C4D8EAC69589922FAD823228702CA86);
	{
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_0 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		Enumerator_GetCurrentKey_mEF70D21D7190C8EA3A42C1ABB88E1DA9739C99B5_inline(L_0, (Il2CppFullySharedGenericStruct*)L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t76AF9F617C4D8EAC69589922FAD823228702CA86);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_mB519F490A17E381EACF6CBA5D1C31200C64D984F_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F>(__this);
	Enumerator_get_Current_mB519F490A17E381EACF6CBA5D1C31200C64D984F_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF2F0AFC1EC7F0A5AF8F14C8D2C2A6E5C1C1C31A1_fshared (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t76AF9F617C4D8EAC69589922FAD823228702CA86 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t76AF9F617C4D8EAC69589922FAD823228702CA86);
	{
		Enumerator_get_Current_mB519F490A17E381EACF6CBA5D1C31200C64D984F_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF2F0AFC1EC7F0A5AF8F14C8D2C2A6E5C1C1C31A1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mF2F0AFC1EC7F0A5AF8F14C8D2C2A6E5C1C1C31A1(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m604CC97AA88CA5CFDCC1B41045050F167F893993_fshared (Enumerator_tE1470541970778078D070FF8C523A55C7301DA38* __this, NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* ___0_nativePagedList, int32_t ___1_offset, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		__this->___m_IndexInCurrentPage = 0;
		__this->___m_IndexOfCurrentPage = 0;
		__this->___m_CountInCurrentPage = 0;
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_0 = ___0_nativePagedList;
		__this->___m_NativePagedList = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NativePagedList), (void*)L_0);
		V_0 = 0;
		goto IL_0083;
	}

IL_0020:
	{
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_1 = __this->___m_NativePagedList;
		List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF* L_2 = L_1->___m_Pages;
		int32_t L_3 = V_0;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4;
		L_4 = List_1_get_Item_m944337BED8AAD9BC3015016C70A16A871E20901E(L_2, L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_1 = L_4;
		int32_t L_5;
		L_5 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&V_1), NULL);
		__this->___m_CountInCurrentPage = L_5;
		int32_t L_6 = ___1_offset;
		int32_t L_7 = __this->___m_CountInCurrentPage;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_8 = ___1_offset;
		int32_t L_9 = __this->___m_CountInCurrentPage;
		___1_offset = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		goto IL_007f;
	}

IL_0054:
	{
		int32_t L_10 = ___1_offset;
		__this->___m_IndexInCurrentPage = L_10;
		int32_t L_11 = V_0;
		__this->___m_IndexOfCurrentPage = L_11;
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_12 = __this->___m_NativePagedList;
		List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF* L_13 = L_12->___m_Pages;
		int32_t L_14 = __this->___m_IndexOfCurrentPage;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_15;
		L_15 = List_1_get_Item_m944337BED8AAD9BC3015016C70A16A871E20901E(L_13, L_14, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		__this->___m_CurrentPage = L_15;
		return;
	}

IL_007f:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0083:
	{
		int32_t L_17 = V_0;
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_18 = __this->___m_NativePagedList;
		List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF* L_19 = L_18->___m_Pages;
		int32_t L_20;
		L_20 = List_1_get_Count_m0F04F8BA763691AD4F57971309F219BA108367B3_inline(L_19, NULL);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1)))))
		{
			goto IL_0020;
		}
	}
	{
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_21 = __this->___m_NativePagedList;
		List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF* L_22 = L_21->___m_Pages;
		int32_t L_23;
		L_23 = List_1_get_Count_m0F04F8BA763691AD4F57971309F219BA108367B3_inline(L_22, NULL);
		__this->___m_IndexOfCurrentPage = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_24 = __this->___m_NativePagedList;
		int32_t L_25 = L_24->___m_CountInLastPage;
		__this->___m_CountInCurrentPage = L_25;
		int32_t L_26 = ___1_offset;
		__this->___m_IndexInCurrentPage = L_26;
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_27 = __this->___m_NativePagedList;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_28 = L_27->___m_LastPage;
		__this->___m_CurrentPage = L_28;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_HasNext_m98065EB05573641926616E576CA797F054D69EF9_fshared (Enumerator_tE1470541970778078D070FF8C523A55C7301DA38* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_IndexInCurrentPage;
		int32_t L_1 = __this->___m_CountInCurrentPage;
		return (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_GetNext_mFF56DC898EDC545D15C13A1F68E800AC47B09AD1_fshared (Enumerator_tE1470541970778078D070FF8C523A55C7301DA38* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	int32_t V_0 = 0;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppFullySharedGenericStruct G_B9_0 = alloca(SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	memset(G_B9_0, 0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	Il2CppFullySharedGenericStruct G_B3_0 = alloca(SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	memset(G_B3_0, 0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	Il2CppFullySharedGenericStruct G_B7_0 = alloca(SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	memset(G_B7_0, 0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	Il2CppFullySharedGenericStruct G_B4_0 = alloca(SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	memset(G_B4_0, 0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	Il2CppFullySharedGenericStruct G_B6_0 = alloca(SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	memset(G_B6_0, 0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	Il2CppFullySharedGenericStruct G_B5_0 = alloca(SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	memset(G_B5_0, 0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	Il2CppFullySharedGenericStruct G_B8_0 = alloca(SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	memset(G_B8_0, 0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	{
		bool L_0;
		L_0 = Enumerator_HasNext_m98065EB05573641926616E576CA797F054D69EF9(__this, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27E800F6FC3576FA08A781DC2C4A4BD96BA82D76)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&__this->___m_CurrentPage);
		int32_t L_3 = __this->___m_IndexInCurrentPage;
		NativeArray_1_get_Item_mA8C8A69EB3A5D460C55DFCD27275CD5BA5E2B455_inline(L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		int32_t L_5 = __this->___m_IndexInCurrentPage;
		__this->___m_IndexInCurrentPage = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = __this->___m_IndexInCurrentPage;
		int32_t L_7 = __this->___m_CountInCurrentPage;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			il2cpp_codegen_memcpy(G_B9_0, L_4, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
			goto IL_00f8;
		}
		il2cpp_codegen_memcpy(G_B3_0, L_4, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	}
	{
		__this->___m_IndexInCurrentPage = 0;
		int32_t L_8 = __this->___m_IndexOfCurrentPage;
		__this->___m_IndexOfCurrentPage = ((int32_t)il2cpp_codegen_add(L_8, 1));
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_9 = __this->___m_NativePagedList;
		List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF* L_10 = L_9->___m_Pages;
		int32_t L_11;
		L_11 = List_1_get_Count_m0F04F8BA763691AD4F57971309F219BA108367B3_inline(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = __this->___m_IndexOfCurrentPage;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) >= ((int32_t)L_13)))
		{
			il2cpp_codegen_memcpy(G_B7_0, G_B3_0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
			goto IL_00b6;
		}
		il2cpp_codegen_memcpy(G_B4_0, G_B3_0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	}
	{
		int32_t L_14 = __this->___m_IndexOfCurrentPage;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_15, 1)))))
		{
			il2cpp_codegen_memcpy(G_B6_0, G_B4_0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
			goto IL_00a3;
		}
		il2cpp_codegen_memcpy(G_B5_0, G_B4_0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	}
	{
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_16 = __this->___m_NativePagedList;
		List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF* L_17 = L_16->___m_Pages;
		int32_t L_18 = __this->___m_IndexOfCurrentPage;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_19;
		L_19 = List_1_get_Item_m944337BED8AAD9BC3015016C70A16A871E20901E(L_17, L_18, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		V_1 = L_19;
		int32_t L_20;
		L_20 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&V_1), NULL);
		__this->___m_CountInCurrentPage = L_20;
		il2cpp_codegen_memcpy(G_B8_0, G_B5_0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
		goto IL_00dc;
	}

IL_00a3:
	{
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_21 = __this->___m_NativePagedList;
		int32_t L_22 = L_21->___m_CountInLastPage;
		__this->___m_CountInCurrentPage = L_22;
		il2cpp_codegen_memcpy(G_B8_0, G_B6_0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
		goto IL_00dc;
	}

IL_00b6:
	{
		int32_t L_23 = V_0;
		__this->___m_IndexOfCurrentPage = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_24 = __this->___m_NativePagedList;
		int32_t L_25 = L_24->___m_CountInLastPage;
		__this->___m_CountInCurrentPage = L_25;
		int32_t L_26 = __this->___m_CountInCurrentPage;
		__this->___m_IndexInCurrentPage = L_26;
		il2cpp_codegen_memcpy(G_B8_0, G_B7_0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	}

IL_00dc:
	{
		NativePagedList_1_t9B43BA7543672C8F12763C42AC5C493E40A41AA8* L_27 = __this->___m_NativePagedList;
		List_1_tDA1565FB54D9C701D544C5C5DEB5F20D33BC07BF* L_28 = L_27->___m_Pages;
		int32_t L_29 = __this->___m_IndexOfCurrentPage;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_30;
		L_30 = List_1_get_Item_m944337BED8AAD9BC3015016C70A16A871E20901E(L_28, L_29, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		__this->___m_CurrentPage = L_30;
		il2cpp_codegen_memcpy(G_B9_0, G_B8_0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
	}

IL_00f8:
	{
		il2cpp_codegen_memcpy(il2cppRetVal, G_B9_0, SizeOf_T_t1AA07566E8267752B25D59F8EB23262840A40725);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m70D05F4FAB6EFE8D743737D6895B449D397979E4_fshared (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m70D05F4FAB6EFE8D743737D6895B449D397979E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658>(__this);
	Enumerator_Dispose_m70D05F4FAB6EFE8D743737D6895B449D397979E4(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1E122089BC8131DF27883BBCA11D6CDF1AEEEDB7_fshared (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* L_0 = (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)(&__this->___m_Enumerator);
		bool L_1;
		L_1 = UnsafeParallelHashMapDataEnumerator_MoveNext_m15C57E6A73D44B6A1DEC165D193181FC30441204_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m1E122089BC8131DF27883BBCA11D6CDF1AEEEDB7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m1E122089BC8131DF27883BBCA11D6CDF1AEEEDB7_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mF47CBE67643289DF7557A379F8E84BF4B21D7506_fshared (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* L_0 = (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)(&__this->___m_Enumerator);
		UnsafeParallelHashMapDataEnumerator_Reset_m02FCCDAA74B79950CD2E1930AB863F55D6FD9D7A(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mF47CBE67643289DF7557A379F8E84BF4B21D7506_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658>(__this);
	Enumerator_Reset_mF47CBE67643289DF7557A379F8E84BF4B21D7506(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m1017E83823B755AF1CA6B2246F5FD522001D9871_fshared (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE52E8B5630487F5862A76E9B81B37E7D1CB18016 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tE52E8B5630487F5862A76E9B81B37E7D1CB18016);
	{
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* L_0 = (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)(&__this->___m_Enumerator);
		UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_inline(L_0, (Il2CppFullySharedGenericStruct*)L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tE52E8B5630487F5862A76E9B81B37E7D1CB18016);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m1017E83823B755AF1CA6B2246F5FD522001D9871_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658>(__this);
	Enumerator_get_Current_m1017E83823B755AF1CA6B2246F5FD522001D9871_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m4AEF2A2C4B8B6F519C350C078354DFAD98543444_fshared (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE52E8B5630487F5862A76E9B81B37E7D1CB18016 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tE52E8B5630487F5862A76E9B81B37E7D1CB18016);
	{
		Enumerator_get_Current_m1017E83823B755AF1CA6B2246F5FD522001D9871_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m4AEF2A2C4B8B6F519C350C078354DFAD98543444_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m4AEF2A2C4B8B6F519C350C078354DFAD98543444(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m12DEE8D152E0DF64C0C468FBBA137DD479AEA6D4_fshared (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m12DEE8D152E0DF64C0C468FBBA137DD479AEA6D4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83>(__this);
	Enumerator_Dispose_m12DEE8D152E0DF64C0C468FBBA137DD479AEA6D4(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBA218311DD0EEA28366054B1DDD87EF5DCC1990E_fshared (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		bool L_0;
		L_0 = Enumerator_MoveNext_mC010E40DBBC1021AE2955FA74DE168E960D62149_inline((((Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mBA218311DD0EEA28366054B1DDD87EF5DCC1990E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mBA218311DD0EEA28366054B1DDD87EF5DCC1990E_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mAF1D65B854F80DB7F105622569293031FE788AA3_fshared (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		Enumerator_Reset_m1F08B2F37805E2E4647C19275E820D77361C3241((((Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mAF1D65B854F80DB7F105622569293031FE788AA3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83>(__this);
	Enumerator_Reset_mAF1D65B854F80DB7F105622569293031FE788AA3(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m36EA64558736EC5AA965E6C7C12968E195E09AA5_fshared (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tD7A14E55056388A1FC3FD20056A882D678C82481 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tD7A14E55056388A1FC3FD20056A882D678C82481);
	{
		Enumerator_get_Current_mBBFD3B1857369E3256B1CCB21ED470D8B4E46B63_inline((((Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tD7A14E55056388A1FC3FD20056A882D678C82481);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m36EA64558736EC5AA965E6C7C12968E195E09AA5_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83>(__this);
	Enumerator_get_Current_m36EA64558736EC5AA965E6C7C12968E195E09AA5_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m8D9D0BC84AD0CE249D82F68C03E4DCBC1881AC5F_fshared (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tD7A14E55056388A1FC3FD20056A882D678C82481 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tD7A14E55056388A1FC3FD20056A882D678C82481);
	{
		Enumerator_get_Current_m36EA64558736EC5AA965E6C7C12968E195E09AA5_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m8D9D0BC84AD0CE249D82F68C03E4DCBC1881AC5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m8D9D0BC84AD0CE249D82F68C03E4DCBC1881AC5F(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mDE93458BF02169A52FC3A449C9F0B500A0B25958_fshared (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* ___0_array, const RuntimeMethod* method) 
{
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* L_0 = ___0_array;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_1 = (*(NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*)L_0);
		__this->___m_Array = L_1;
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0BBB67CF7366B5A989FBB12AA2293CD18853C98D_fshared (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m0BBB67CF7366B5A989FBB12AA2293CD18853C98D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817>(__this);
	Enumerator_Dispose_m0BBB67CF7366B5A989FBB12AA2293CD18853C98D(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0DEF4AFE20672D3425DCFB0B4B7EBBAA7B69F595_fshared (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* L_2 = (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*)(&__this->___m_Array);
		int32_t L_3;
		L_3 = NativeSlice_1_get_Length_m0225CA0944599882AC9C2A06A99FDC685362AFBE_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m0DEF4AFE20672D3425DCFB0B4B7EBBAA7B69F595_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m0DEF4AFE20672D3425DCFB0B4B7EBBAA7B69F595(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m7DFE6628F82F51C868E30AF059855DEBF7ABE53A_fshared (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m7DFE6628F82F51C868E30AF059855DEBF7ABE53A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817>(__this);
	Enumerator_Reset_m7DFE6628F82F51C868E30AF059855DEBF7ABE53A(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mD5F9A8DA4A689D3BE78549843241C5C6D4936D84_fshared (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t6DEC264D110932E9F21C7E232C370F10210B8165 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t6DEC264D110932E9F21C7E232C370F10210B8165);
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52* L_0 = (NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52*)(&__this->___m_Array);
		int32_t L_1 = __this->___m_Index;
		NativeSlice_1_get_Item_mB5E7BDE4EDF7E31480A9785BE103CC7E17E0E3A8(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t6DEC264D110932E9F21C7E232C370F10210B8165);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_mD5F9A8DA4A689D3BE78549843241C5C6D4936D84_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817>(__this);
	Enumerator_get_Current_mD5F9A8DA4A689D3BE78549843241C5C6D4936D84(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mEB8088957B367DEEE33935D4174B19579BF14B58_fshared (Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t6DEC264D110932E9F21C7E232C370F10210B8165 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t6DEC264D110932E9F21C7E232C370F10210B8165);
	{
		Enumerator_get_Current_mD5F9A8DA4A689D3BE78549843241C5C6D4936D84(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mEB8088957B367DEEE33935D4174B19579BF14B58_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF7A3F0CE48AD9E97DE26F789092763ACB7D7F817>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mEB8088957B367DEEE33935D4174B19579BF14B58(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6DCF4D06C211EBCD1DAF60721FC6976973BFC0F4_fshared (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC ___0_list, const RuntimeMethod* method) 
{
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC L_0 = ___0_list;
		Data_t6F131ABB2DC3608FBC19EEE1D985484C670DE41A* L_1 = L_0.___m_Data;
		__this->___m_Data = L_1;
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m06F26A9D1616DCF8DE123B05DB3C01719237C3AF_fshared (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Data_t6F131ABB2DC3608FBC19EEE1D985484C670DE41A* L_1 = __this->___m_Data;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_1) == ((intptr_t)L_2)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = __this->___m_Index;
		Data_t6F131ABB2DC3608FBC19EEE1D985484C670DE41A* L_4 = __this->___m_Data;
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(L_4, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return (bool)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0);
	}

IL_002c:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m06F26A9D1616DCF8DE123B05DB3C01719237C3AF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m06F26A9D1616DCF8DE123B05DB3C01719237C3AF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mEC7989864CADAFF8FC0E8487223BF86743692433_fshared (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mEC7989864CADAFF8FC0E8487223BF86743692433_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72>(__this);
	Enumerator_Reset_mEC7989864CADAFF8FC0E8487223BF86743692433(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m347C1E11612C5D8DBEFB997C4F82908223501003_fshared (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t6F18478E9D9AF4C2BEBFBEF94C4504CB6F03EDA2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t6F18478E9D9AF4C2BEBFBEF94C4504CB6F03EDA2);
	{
		Data_t6F131ABB2DC3608FBC19EEE1D985484C670DE41A* L_0 = __this->___m_Data;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(L_0, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))),NULL));
		int32_t L_2 = __this->___m_Index;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = SizeOf_T_t6F18478E9D9AF4C2BEBFBEF94C4504CB6F03EDA2;
		il2cpp_codegen_memcpy(L_5, ((intptr_t)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))), SizeOf_T_t6F18478E9D9AF4C2BEBFBEF94C4504CB6F03EDA2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t6F18478E9D9AF4C2BEBFBEF94C4504CB6F03EDA2);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m347C1E11612C5D8DBEFB997C4F82908223501003_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72>(__this);
	Enumerator_get_Current_m347C1E11612C5D8DBEFB997C4F82908223501003(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mA0F433CE2FCFD54A32DFD9BE11A2E16310CC4E07_fshared (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t6F18478E9D9AF4C2BEBFBEF94C4504CB6F03EDA2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t6F18478E9D9AF4C2BEBFBEF94C4504CB6F03EDA2);
	{
		Enumerator_get_Current_m347C1E11612C5D8DBEFB997C4F82908223501003(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mA0F433CE2FCFD54A32DFD9BE11A2E16310CC4E07_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mA0F433CE2FCFD54A32DFD9BE11A2E16310CC4E07(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m62AB801313FAA9B181EBFE46DB8B2DB6D76B68B4_fshared (Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m62AB801313FAA9B181EBFE46DB8B2DB6D76B68B4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9B14991AA60E3D342BAA3D67463587A5B697BA72>(__this);
	Enumerator_Dispose_m62AB801313FAA9B181EBFE46DB8B2DB6D76B68B4(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m994C711F41302E7D1D182F236EFD8FB3B27D5F2D_fshared (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m994C711F41302E7D1D182F236EFD8FB3B27D5F2D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322>(__this);
	Enumerator_Dispose_m994C711F41302E7D1D182F236EFD8FB3B27D5F2D(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m736B3FBFDCE475107941328576DCEF4079395C57_fshared (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_0 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		bool L_1;
		L_1 = Enumerator_MoveNext_mD61BB53328B5D708EEEB308A096A80542A63050D_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m736B3FBFDCE475107941328576DCEF4079395C57_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m736B3FBFDCE475107941328576DCEF4079395C57_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m2614D95F15B95F3C367C31F27E7271E314200A1A_fshared (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_0 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		Enumerator_Reset_m3A62EFB2B231DD5F4493F95969BDEE57BA6D0732(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m2614D95F15B95F3C367C31F27E7271E314200A1A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322>(__this);
	Enumerator_Reset_m2614D95F15B95F3C367C31F27E7271E314200A1A(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mFF2CA86985CA0F66A2D6326CBD03DC3074F32F53_fshared (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9);
	{
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_0 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_1 = L_0->___m_Data;
		Il2CppFullySharedGenericStruct* L_2 = L_1->___Keys;
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_3 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		int32_t L_4 = L_3->___m_Index;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9;
		il2cpp_codegen_memcpy(L_7, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))), SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_mFF2CA86985CA0F66A2D6326CBD03DC3074F32F53_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322>(__this);
	Enumerator_get_Current_mFF2CA86985CA0F66A2D6326CBD03DC3074F32F53_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF61779E4E05F1AA20916F8F43E213C3C7D14AE95_fshared (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9);
	{
		Enumerator_get_Current_mFF2CA86985CA0F66A2D6326CBD03DC3074F32F53_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF61779E4E05F1AA20916F8F43E213C3C7D14AE95_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mF61779E4E05F1AA20916F8F43E213C3C7D14AE95(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mDC8B76F10D6E9656A8FF10CDA2848D398903292E_fshared (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mDC8B76F10D6E9656A8FF10CDA2848D398903292E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E>(__this);
	Enumerator_Dispose_mDC8B76F10D6E9656A8FF10CDA2848D398903292E(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m585575792FA654B690455D25C3B5F75647513AD3_fshared (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Index;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->___m_Index = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___m_Length;
		return (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m585575792FA654B690455D25C3B5F75647513AD3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m585575792FA654B690455D25C3B5F75647513AD3_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mF3A98B3F6A0BE100E40BE6FD8404BA853B68ABA8_fshared (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_Index = (-1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mF3A98B3F6A0BE100E40BE6FD8404BA853B68ABA8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E>(__this);
	Enumerator_Reset_mF3A98B3F6A0BE100E40BE6FD8404BA853B68ABA8(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m28823F91A1BEC7D0ADA14F770BBBE6BDB8274403_fshared (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA);
	{
		Il2CppFullySharedGenericStruct* L_0 = __this->___m_Ptr;
		int32_t L_1 = __this->___m_Index;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, (int32_t)L_3)))), SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m28823F91A1BEC7D0ADA14F770BBBE6BDB8274403_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E>(__this);
	Enumerator_get_Current_m28823F91A1BEC7D0ADA14F770BBBE6BDB8274403_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mCDE7558044F2FD28B0492AD87A9229C66E92CFE3_fshared (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA);
	{
		Enumerator_get_Current_m28823F91A1BEC7D0ADA14F770BBBE6BDB8274403_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mCDE7558044F2FD28B0492AD87A9229C66E92CFE3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mCDE7558044F2FD28B0492AD87A9229C66E92CFE3(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m56E92048F957D6744395C25536BE2404C425EB2A_fshared (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m56E92048F957D6744395C25536BE2404C425EB2A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE>(__this);
	Enumerator_Dispose_m56E92048F957D6744395C25536BE2404C425EB2A(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFFB2EF2C36B70F350E88E4CDD5F4C7B2E03D1C61_fshared (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* L_0 = (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)(&__this->___m_Enumerator);
		bool L_1;
		L_1 = UnsafeParallelHashMapDataEnumerator_MoveNext_m15C57E6A73D44B6A1DEC165D193181FC30441204_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mFFB2EF2C36B70F350E88E4CDD5F4C7B2E03D1C61_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mFFB2EF2C36B70F350E88E4CDD5F4C7B2E03D1C61_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mC62471215811FA96C7120F6D2CF04E3AEDA9C397_fshared (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* L_0 = (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)(&__this->___m_Enumerator);
		UnsafeParallelHashMapDataEnumerator_Reset_m02FCCDAA74B79950CD2E1930AB863F55D6FD9D7A(L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mC62471215811FA96C7120F6D2CF04E3AEDA9C397_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE>(__this);
	Enumerator_Reset_mC62471215811FA96C7120F6D2CF04E3AEDA9C397(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mADD156FACD9219B3A0B5197F066274E38DD0CE3E_fshared (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tA2B9D9079CEA3A27E4894A531F54DD1C69DD79FE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tA2B9D9079CEA3A27E4894A531F54DD1C69DD79FE);
	{
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* L_0 = (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)(&__this->___m_Enumerator);
		UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_inline(L_0, (Il2CppFullySharedGenericStruct*)L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tA2B9D9079CEA3A27E4894A531F54DD1C69DD79FE);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_mADD156FACD9219B3A0B5197F066274E38DD0CE3E_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE>(__this);
	Enumerator_get_Current_mADD156FACD9219B3A0B5197F066274E38DD0CE3E_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF7E50F72D8ADE4A4C470F58C788810EEC95F4DCC_fshared (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tA2B9D9079CEA3A27E4894A531F54DD1C69DD79FE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tA2B9D9079CEA3A27E4894A531F54DD1C69DD79FE);
	{
		Enumerator_get_Current_mADD156FACD9219B3A0B5197F066274E38DD0CE3E_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mF7E50F72D8ADE4A4C470F58C788810EEC95F4DCC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mF7E50F72D8ADE4A4C470F58C788810EEC95F4DCC(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1A29F5802B1A0879B0C3B19D2490EF275248E005_fshared (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m1A29F5802B1A0879B0C3B19D2490EF275248E005_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421>(__this);
	Enumerator_Dispose_m1A29F5802B1A0879B0C3B19D2490EF275248E005(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC010E40DBBC1021AE2955FA74DE168E960D62149_fshared (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), ((int32_t)il2cpp_codegen_add(L_0, 1)));
		goto IL_0064;
	}

IL_0010:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_1 = *(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_2 = L_1->___m_NumItems;
		V_0 = L_2;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0045;
		}
	}
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_5 = *(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		uint32_t L_6 = sizeof(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C);
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)((UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)il2cpp_codegen_add((intptr_t)L_5, (int32_t)L_6)), L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_8, SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
		return (bool)1;
	}

IL_0045:
	{
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_10 = V_0;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), ((int32_t)il2cpp_codegen_subtract(L_9, L_10)));
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_11 = *(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_12 = L_11->___m_NextBlock;
		il2cpp_codegen_write_field_data<UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_12);
	}

IL_0064:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_13 = *(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		uintptr_t L_14 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_13) == ((uintptr_t)L_14))))
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mC010E40DBBC1021AE2955FA74DE168E960D62149_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mC010E40DBBC1021AE2955FA74DE168E960D62149_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m1F08B2F37805E2E4647C19275E820D77361C3241_fshared (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_0 = *(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		il2cpp_codegen_write_field_data<UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_0);
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m1F08B2F37805E2E4647C19275E820D77361C3241_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421>(__this);
	Enumerator_Reset_m1F08B2F37805E2E4647C19275E820D77361C3241(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mBBFD3B1857369E3256B1CCB21ED470D8B4E46B63_fshared (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_mBBFD3B1857369E3256B1CCB21ED470D8B4E46B63_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421>(__this);
	Enumerator_get_Current_mBBFD3B1857369E3256B1CCB21ED470D8B4E46B63_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m19B75B670752D0F001423B14DEB43037889A197A_fshared (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
	{
		Enumerator_get_Current_mBBFD3B1857369E3256B1CCB21ED470D8B4E46B63_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m19B75B670752D0F001423B14DEB43037889A197A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m19B75B670752D0F001423B14DEB43037889A197A(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m7E124C7D7F367A3EC2AE25CA5F4D1284F5FA2E43_fshared (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	{
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8* L_0 = ___0_array;
		ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8 L_1 = (*(ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*)L_0);
		il2cpp_codegen_write_field_data<ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_1);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (-1));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCB9B6D15D244D49204D2A903402C1D5011CC2830_fshared (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mCB9B6D15D244D49204D2A903402C1D5011CC2830_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C>(__this);
	Enumerator_Dispose_mCB9B6D15D244D49204D2A903402C1D5011CC2830(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9589C320A0B345A9190284C38FCB97F2015861DA_fshared (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_0, 1)));
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_2 = (((ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))->___m_Length;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}
	{
		void* L_3 = (((ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))->___m_Buffer;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_3, L_4, (Il2CppFullySharedGenericStruct*)L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_5, SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
		return (bool)1;
	}

IL_003f:
	{
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m9589C320A0B345A9190284C38FCB97F2015861DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m9589C320A0B345A9190284C38FCB97F2015861DA_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m43C21832D8660DF1F98FA2733CE9D752ACB020D5_fshared (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), (-1));
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m43C21832D8660DF1F98FA2733CE9D752ACB020D5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C>(__this);
	Enumerator_Reset_m43C21832D8660DF1F98FA2733CE9D752ACB020D5(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m44CEFC7935FF87861A589ACDB1024033E52A123E_fshared (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m44CEFC7935FF87861A589ACDB1024033E52A123E_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C>(__this);
	Enumerator_get_Current_m44CEFC7935FF87861A589ACDB1024033E52A123E_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m9E9FBC7AD882EDFB5FDCF6024ECA5DA4B2DD24DA_fshared (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
	{
		Enumerator_get_Current_m44CEFC7935FF87861A589ACDB1024033E52A123E_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m9E9FBC7AD882EDFB5FDCF6024ECA5DA4B2DD24DA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m9E9FBC7AD882EDFB5FDCF6024ECA5DA4B2DD24DA(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m62B32E8D2F70569824269DDC82F384BDBC8662F5_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* ___0_set, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_0 = ___0_set;
		il2cpp_codegen_write_field_data<HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), 0);
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1 = ___0_set;
		int32_t L_2 = L_1->____version;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_2);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m915D35B9BB2A77C5396F4FE1A1C53F1C93B8E337_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m915D35B9BB2A77C5396F4FE1A1C53F1C93B8E337_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB>(__this);
	Enumerator_Dispose_m915D35B9BB2A77C5396F4FE1A1C53F1C93B8E337(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1756F06B6BC460B8EEB4522B562E097F37D54C59_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1 = *(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_007b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_4 = *(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_5 = L_4->____slots;
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_5)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_6))), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		if ((((int32_t)L_7) < ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_8 = *(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		SlotU5BU5D_t2B9148416634BCB8743E1F61254B305F1882FF1D* L_9 = L_8->____slots;
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_field_data_pointer(((Slot_tEC146EEEF7022C6542EBF082D658446682962BFD*)(L_9)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10))), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8)), SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_11, SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_12, 1)));
		return (bool)1;
	}

IL_006d:
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_13, 1)));
	}

IL_007b:
	{
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_15 = *(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_16 = L_15->____lastIndex;
		if ((((int32_t)L_14) < ((int32_t)L_16)))
		{
			goto IL_001e;
		}
	}
	{
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_17 = *(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_18 = L_17->____lastIndex;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_18, 1)));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m1756F06B6BC460B8EEB4522B562E097F37D54C59_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m1756F06B6BC460B8EEB4522B562E097F37D54C59(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m51282E47C90E55BF2D96A0D329869ABC122A85A0_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m51282E47C90E55BF2D96A0D329869ABC122A85A0_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB>(__this);
	Enumerator_get_Current_m51282E47C90E55BF2D96A0D329869ABC122A85A0_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m7D04FEF0F3E60E6E691D979806634E034498134E_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_2 = *(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_3 = L_2->____lastIndex;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1))))))
		{
			goto IL_0028;
		}
	}

IL_001d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0028:
	{
		Enumerator_get_Current_m51282E47C90E55BF2D96A0D329869ABC122A85A0_inline(__this, (Il2CppFullySharedGenericAny*)L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9));
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m7D04FEF0F3E60E6E691D979806634E034498134E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m7D04FEF0F3E60E6E691D979806634E034498134E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_m27D5470C040D50CC0200DDAB3C93DF3C4CA755B3_fshared (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* L_1 = *(HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), 0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_System_Collections_IEnumerator_Reset_m27D5470C040D50CC0200DDAB3C93DF3C4CA755B3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB>(__this);
	Enumerator_System_Collections_IEnumerator_Reset_m27D5470C040D50CC0200DDAB3C93DF3C4CA755B3(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mF3F5043F0C7EA67C19F3FA22DF2A5E66C4B82985_fshared (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer((((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), ((int32_t)il2cpp_codegen_add(L_2, 1)));
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer((((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		return (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mF3F5043F0C7EA67C19F3FA22DF2A5E66C4B82985_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mF3F5043F0C7EA67C19F3FA22DF2A5E66C4B82985(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mC98285CB59B476CB33C08E3FDEC3AD026FD5D46B_fshared (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (-1));
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mC98285CB59B476CB33C08E3FDEC3AD026FD5D46B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092>(__this);
	Enumerator_Reset_mC98285CB59B476CB33C08E3FDEC3AD026FD5D46B(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m29E9E90BB06DAEDA6F7D4721A6681EC28A0E54C6_fshared (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t358567379BF95FBB1E1F4C7C782060F238FA97AC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t358567379BF95FBB1E1F4C7C782060F238FA97AC);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		InlinedArray_1_get_Item_m559A0B1FCFEC59844BBCB769C3C743C5F46A2201((((InlinedArray_1_tCA1A9B410EBCE10320B39011CD2E337C395D7CA3*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)))), L_0, (Il2CppFullySharedGenericAny*)L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_TValue_t358567379BF95FBB1E1F4C7C782060F238FA97AC);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m29E9E90BB06DAEDA6F7D4721A6681EC28A0E54C6_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092>(__this);
	Enumerator_get_Current_m29E9E90BB06DAEDA6F7D4721A6681EC28A0E54C6(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC035FEFC4C4C462ECCBF7506FD23025A38501032_fshared (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t358567379BF95FBB1E1F4C7C782060F238FA97AC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t358567379BF95FBB1E1F4C7C782060F238FA97AC);
	{
		Enumerator_get_Current_m29E9E90BB06DAEDA6F7D4721A6681EC28A0E54C6(__this, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC035FEFC4C4C462ECCBF7506FD23025A38501032_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mC035FEFC4C4C462ECCBF7506FD23025A38501032(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m6CAB80EFB3B442E668D334714C1BA63697F23576_fshared (Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m6CAB80EFB3B442E668D334714C1BA63697F23576_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t19CF5B142C374BA8F020A031DE19590D358EA092>(__this);
	Enumerator_Dispose_m6CAB80EFB3B442E668D334714C1BA63697F23576(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m0F98614729A5017594BCB5D1D847C1D319913311_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* ___0_list, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* L_0 = ___0_list;
		il2cpp_codegen_write_field_data<LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* L_1 = ___0_list;
		int32_t L_2 = L_1->___version;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_2);
		LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* L_3 = ___0_list;
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_4 = L_3->___head;
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_4);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), 0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m37AB9FF23CB9A754FCD2CA40D0B482F61F9D6531_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m5BA2E5A6E9016D327B7C3067D3D2B2016D37DFDA_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m5BA2E5A6E9016D327B7C3067D3D2B2016D37DFDA_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457>(__this);
	Enumerator_get_Current_m5BA2E5A6E9016D327B7C3067D3D2B2016D37DFDA_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m0F26F0C362DA633022A66F6C342673D39AD4622B_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* L_2 = *(LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_3;
		L_3 = LinkedList_1_get_Count_m6E80F28E7CB5BA6E35ECE961C429AE6CA69003A2_inline(L_2, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1))))))
		{
			goto IL_0028;
		}
	}

IL_001d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63FC874122847D14784CB3ADBE59A08B9558FA97)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0028:
	{
		il2cpp_codegen_memcpy(L_5, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m0F26F0C362DA633022A66F6C342673D39AD4622B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m0F26F0C362DA633022A66F6C342673D39AD4622B(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m4FB57970CC4FBEE295E533DE12F0B21FF7E13AAA_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* L_1 = *(LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = L_1->___version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_4 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* L_5 = *(LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_6;
		L_6 = LinkedList_1_get_Count_m6E80F28E7CB5BA6E35ECE961C429AE6CA69003A2_inline(L_5, NULL);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), ((int32_t)il2cpp_codegen_add(L_6, 1)));
		return (bool)0;
	}

IL_003b:
	{
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), ((int32_t)il2cpp_codegen_add(L_7, 1)));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_8 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_field_data_pointer(L_8, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9)), SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_9, SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_10 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_11 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(L_10, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 10));
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_11);
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_12 = *(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* L_13 = *(LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_14 = L_13->___head;
		if ((!(((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_12) == ((RuntimeObject*)(LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)L_14))))
		{
			goto IL_0085;
		}
	}
	{
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*)NULL);
	}

IL_0085:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m4FB57970CC4FBEE295E533DE12F0B21FF7E13AAA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m4FB57970CC4FBEE295E533DE12F0B21FF7E13AAA(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_mEE0F6DC54C3238FF39CDFF5675B11CD97C544897_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* L_1 = *(LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = L_1->___version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
		LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* L_4 = *(LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9* L_5 = L_4->___head;
		il2cpp_codegen_write_field_data<LinkedListNode_1_tB885B6403BB775D7A06ED42A773BC5EB23FDE7E9*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_5);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6), 0);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_System_Collections_IEnumerator_Reset_mEE0F6DC54C3238FF39CDFF5675B11CD97C544897_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457>(__this);
	Enumerator_System_Collections_IEnumerator_Reset_mEE0F6DC54C3238FF39CDFF5675B11CD97C544897(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m25395D42D3EE1E89A0B024E2FAF823E4A3FEF4D1_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m25395D42D3EE1E89A0B024E2FAF823E4A3FEF4D1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457>(__this);
	Enumerator_Dispose_m25395D42D3EE1E89A0B024E2FAF823E4A3FEF4D1(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Runtime_Serialization_ISerializable_GetObjectData_m200D1982786B356E5B42E63B71C05AC7B3EA337E_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  void Enumerator_System_Runtime_Serialization_ISerializable_GetObjectData_m200D1982786B356E5B42E63B71C05AC7B3EA337E_AdjustorThunk (RuntimeObject* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method)
{
	Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457>(__this);
	Enumerator_System_Runtime_Serialization_ISerializable_GetObjectData_m200D1982786B356E5B42E63B71C05AC7B3EA337E(_thisAdjusted, ___0_info, ___1_context, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3675ECA18E1A14A4318723D0B93024692A40759B_fshared (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
	}
}
IL2CPP_EXTERN_C  void Enumerator_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3675ECA18E1A14A4318723D0B93024692A40759B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_sender, const RuntimeMethod* method)
{
	Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457>(__this);
	Enumerator_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3675ECA18E1A14A4318723D0B93024692A40759B(_thisAdjusted, ___0_sender, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5C66A91DC68887BE203985B56EF2F74222E9AF50_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_list;
		il2cpp_codegen_write_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), 0);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___0_list;
		int32_t L_2 = L_1->____version;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_2);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF>(__this);
	Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_0;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = V_0;
		int32_t L_3 = L_2->____version;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_5 = V_0;
		int32_t L_6 = L_5->____size;
		if ((!(((uint32_t)L_4) < ((uint32_t)L_6))))
		{
			goto IL_004a;
		}
	}
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = L_7->____items;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_11, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_12, 1)));
		return (bool)1;
	}

IL_004a:
	{
		bool L_13;
		L_13 = Enumerator_MoveNextRare_mF1A6D7920FDC3C83A7DA1F838C2FC51D716637D9(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return L_13;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNextRare_mF1A6D7920FDC3C83A7DA1F838C2FC51D716637D9_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_0018:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_4 = L_3->____size;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_4, 1)));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C  void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF>(__this);
	Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m3FCE22D15C040EE9F8614C711F786205BA6AAFB6_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_3 = L_2->____size;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1))))))
		{
			goto IL_0022;
		}
	}

IL_001d:
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen_m61D5A6F694C15854BCF089BFD945BD6DBDB47D4E(NULL);
	}

IL_0022:
	{
		Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_inline(__this, (Il2CppFullySharedGenericAny*)L_4, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m3FCE22D15C040EE9F8614C711F786205BA6AAFB6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m3FCE22D15C040EE9F8614C711F786205BA6AAFB6(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_mFA2701BBDA14ED6CC3113A32ED0E8B80DAD58A84_fshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion_m5331E2E0EC0E36843D53F439C2529530595ACE9F(NULL);
	}

IL_0018:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), 0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_System_Collections_IEnumerator_Reset_mFA2701BBDA14ED6CC3113A32ED0E8B80DAD58A84_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF>(__this);
	Enumerator_System_Collections_IEnumerator_Reset_mFA2701BBDA14ED6CC3113A32ED0E8B80DAD58A84(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m6C59AA282C548B36E982B84CACC3A8E4AA904775_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* ___0_list, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* L_0 = ___0_list;
		il2cpp_codegen_write_field_data<LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), 0);
		LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* L_1 = ___0_list;
		int32_t L_2 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)L_1)->____version;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_2);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mDE5B605B7794A192CC35F12013300AE26EB8FE5F_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mDE5B605B7794A192CC35F12013300AE26EB8FE5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0>(__this);
	Enumerator_Dispose_mDE5B605B7794A192CC35F12013300AE26EB8FE5F(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2F9CDD8406C6495182E05B55A00C3D0C9620CA67_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
	LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* V_0 = NULL;
	{
		LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* L_0 = *(LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_0;
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* L_2 = V_0;
		int32_t L_3 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)L_2)->____version;
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* L_5 = V_0;
		int32_t L_6 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)L_5)->____size;
		if ((!(((uint32_t)L_4) < ((uint32_t)L_6))))
		{
			goto IL_004a;
		}
	}
	{
		LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* L_7 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)L_7)->____items;
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_10 = L_9;
		il2cpp_codegen_memcpy(L_11, (L_8)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)), SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_11, SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_12, 1)));
		return (bool)1;
	}

IL_004a:
	{
		bool L_13;
		L_13 = Enumerator_MoveNextRare_mA2A9C4EFAA8131F5D97D9B8626FDEDF343E93488(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return L_13;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m2F9CDD8406C6495182E05B55A00C3D0C9620CA67_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m2F9CDD8406C6495182E05B55A00C3D0C9620CA67(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNextRare_mA2A9C4EFAA8131F5D97D9B8626FDEDF343E93488_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* L_1 = *(LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)L_1)->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* L_4 = *(LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_5 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)L_4)->____size;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m05879F7740A935DB74AE5672E2B537349369A3C1_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m05879F7740A935DB74AE5672E2B537349369A3C1_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0>(__this);
	Enumerator_get_Current_m05879F7740A935DB74AE5672E2B537349369A3C1_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mA8280DCF9D59E671AB204C71415939B6D7B4211E_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* L_2 = *(LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_3 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)L_2)->____size;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)il2cpp_codegen_add(L_3, 1))))))
		{
			goto IL_0023;
		}
	}

IL_001d:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_4 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0023:
	{
		Enumerator_get_Current_m05879F7740A935DB74AE5672E2B537349369A3C1_inline(__this, (Il2CppFullySharedGenericAny*)L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mA8280DCF9D59E671AB204C71415939B6D7B4211E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mA8280DCF9D59E671AB204C71415939B6D7B4211E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_m15625F750730D127B128E2654A2B59982DEAB9C9_fshared (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9* L_1 = *(LowLevelListWithIList_1_t80E30B23146FD62D1FB6A639EA1EBAD199B029D9**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = ((LowLevelList_1_tFA10A51C575F28B96FF2E2E7FB3740E48546A1E0*)L_1)->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), 0);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_System_Collections_IEnumerator_Reset_m15625F750730D127B128E2654A2B59982DEAB9C9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0>(__this);
	Enumerator_System_Collections_IEnumerator_Reset_m15625F750730D127B128E2654A2B59982DEAB9C9(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_set_Current_m1BB3A6D5580E7C6A864831EED00A4E1B8E81B1B5_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mBB836D4E68A5F554A9A7C377FFBD67DA4253EA7D_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0;
		L_0 = Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mBB836D4E68A5F554A9A7C377FFBD67DA4253EA7D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mBB836D4E68A5F554A9A7C377FFBD67DA4253EA7D(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEA52ADA4F9D63275758AC0D426BA0CBDDAD6474E_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, RuntimeObject* ___0_enumerator, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_IndexedCollectionPropertyBagEnumerator_1_tFD1F1453C2F94899EA80ADFEB02518E8B60D9706 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (int32_t)1);
		RuntimeObject* L_0 = ___0_enumerator;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_0);
		il2cpp_codegen_initobj((((Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), sizeof(Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63));
		il2cpp_codegen_initobj((((IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))), SizeOf_IndexedCollectionPropertyBagEnumerator_1_tFD1F1453C2F94899EA80ADFEB02518E8B60D9706);
		Enumerator_set_Current_m1BB3A6D5580E7C6A864831EED00A4E1B8E81B1B5_inline(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m9788E04B31AAEC644383BF9A7D0FD66F4D89F6F2_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63 ___0_properties, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_IndexedCollectionPropertyBagEnumerator_1_tFD1F1453C2F94899EA80ADFEB02518E8B60D9706 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (int32_t)2);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), (RuntimeObject*)NULL);
		Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63 L_0 = ___0_properties;
		il2cpp_codegen_write_field_data<Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_0);
		il2cpp_codegen_initobj((((IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))), SizeOf_IndexedCollectionPropertyBagEnumerator_1_tFD1F1453C2F94899EA80ADFEB02518E8B60D9706);
		Enumerator_set_Current_m1BB3A6D5580E7C6A864831EED00A4E1B8E81B1B5_inline(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mB5DAC8151C7ABCC2E039D679CC59C09170005D6A_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479 ___0_enumerator, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_IndexedCollectionPropertyBagEnumerator_1_tFD1F1453C2F94899EA80ADFEB02518E8B60D9706 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479 L_0 = alloca(SizeOf_IndexedCollectionPropertyBagEnumerator_1_tFD1F1453C2F94899EA80ADFEB02518E8B60D9706);
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (int32_t)3);
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), (RuntimeObject*)NULL);
		il2cpp_codegen_initobj((((Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), sizeof(Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63));
		il2cpp_codegen_memcpy(L_0, ___0_enumerator, SizeOf_IndexedCollectionPropertyBagEnumerator_1_tFD1F1453C2F94899EA80ADFEB02518E8B60D9706);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7), L_0, SizeOf_IndexedCollectionPropertyBagEnumerator_1_tFD1F1453C2F94899EA80ADFEB02518E8B60D9706);
		Enumerator_set_Current_m1BB3A6D5580E7C6A864831EED00A4E1B8E81B1B5_inline(__this, (RuntimeObject*)NULL, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0040;
			}
			case 3:
			{
				goto IL_005f;
			}
		}
	}
	{
		goto IL_007e;
	}

IL_001f:
	{
		return (bool)0;
	}

IL_0021:
	{
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		V_0 = L_3;
		RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 9), L_4);
		Enumerator_set_Current_m1BB3A6D5580E7C6A864831EED00A4E1B8E81B1B5_inline(__this, L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		goto IL_0084;
	}

IL_0040:
	{
		bool L_6;
		L_6 = Enumerator_MoveNext_m4E164BF10DEA42BD1FB9648DD5795D120F5B99F2((((Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 11));
		V_0 = L_6;
		RuntimeObject* L_7;
		L_7 = Enumerator_get_Current_m1141D239836770EF8C75957763553C76773A96A4_inline((((Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 12));
		Enumerator_set_Current_m1BB3A6D5580E7C6A864831EED00A4E1B8E81B1B5_inline(__this, L_7, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		goto IL_0084;
	}

IL_005f:
	{
		bool L_8;
		L_8 = IndexedCollectionPropertyBagEnumerator_1_MoveNext_m6695B2065C6EB0E71B90C2EFF9429E4A76F4C0BA((((IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13));
		V_0 = L_8;
		RuntimeObject* L_9;
		L_9 = IndexedCollectionPropertyBagEnumerator_1_get_Current_m4E570DCDE463BEA50BA7B3DC03595ED13939EDBE((((IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 14));
		Enumerator_set_Current_m1BB3A6D5580E7C6A864831EED00A4E1B8E81B1B5_inline(__this, L_9, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		goto IL_0084;
	}

IL_007e:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_10 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0084:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_mDD80A4C2F5EFC81C22B7F74CACFF9D0921BA0A3C_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_003c;
			}
		}
	}
	{
		goto IL_0048;
	}

IL_001f:
	{
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		InterfaceActionInvoker0::Invoke(2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		return;
	}

IL_002b:
	{
		Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63 L_3 = *(Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63 L_4 = L_3;
		RuntimeObject* L_5 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), &L_4);
		const MethodInfo* L_6 = GetInterfaceMethodInfo(il2cpp_rgctx_data_init(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15), 2, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		Enumerator_System_Collections_IEnumerator_Reset_mE24EC919F3F9A0356303B687F207D479BB66B3AB((Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63*)UnBox(L_5), L_6);
		return;
	}

IL_003c:
	{
		IndexedCollectionPropertyBagEnumerator_1_Reset_mEF20F04CD33523EE6B378C8F992E49A2214E1626((((IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 16));
		return;
	}

IL_0048:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_004e:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_mDD80A4C2F5EFC81C22B7F74CACFF9D0921BA0A3C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE>(__this);
	Enumerator_Reset_mDD80A4C2F5EFC81C22B7F74CACFF9D0921BA0A3C(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m1938093C428E4EDE3B40A07184993FA35F74AB42_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(classRgctxInit);
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_001f;
			}
			case 2:
			{
				goto IL_003d;
			}
			case 3:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0037;
	}

IL_001f:
	{
		RuntimeObject* L_2 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		return;
	}

IL_002b:
	{
		IndexedCollectionPropertyBagEnumerator_1_Dispose_mEBC1E3FF6876007C72F6F76ED237165B599B2505((((IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7)))), NULL);
		return;
	}

IL_0037:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_003d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m1938093C428E4EDE3B40A07184993FA35F74AB42_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE>(__this);
	Enumerator_Dispose_m1938093C428E4EDE3B40A07184993FA35F74AB42(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = ___0_q;
		il2cpp_codegen_write_field_data<Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = ___0_q;
		int32_t L_2 = L_1->____version;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_2);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (-1));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mA25DFE205338DF12128791E990699B49B335B759_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mA25DFE205338DF12128791E990699B49B335B759_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C>(__this);
	Enumerator_Dispose_mA25DFE205338DF12128791E990699B49B335B759(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA6D24403558EA8BFEE5028D75AC049EC8677F637_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_23 = alloca(SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B);
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_002a;
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		int32_t L_6 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_8 = L_7->____size;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_8))))
		{
			goto IL_0061;
		}
	}
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B);
		return (bool)0;
	}

IL_0061:
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_9 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = L_9->____array;
		V_0 = L_10;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_11)->max_length),NULL));
		V_1 = L_12;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_13 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_14 = L_13->____head;
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_008c;
		}
	}
	{
		int32_t L_18 = V_2;
		int32_t L_19 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
	}

IL_008c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = V_0;
		int32_t L_21 = V_2;
		int32_t L_22 = L_21;
		il2cpp_codegen_memcpy(L_23, (L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_23, SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B);
		return (bool)1;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mA6D24403558EA8BFEE5028D75AC049EC8677F637_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mA6D24403558EA8BFEE5028D75AC049EC8677F637(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m2DDD9E2B36A595D40708EBE84125C065CCF6F11D_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		Enumerator_ThrowEnumerationNotStartedOrEnded_mA8F87F65FFD80CCBB3A060C159463BB5B5603E93(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	}

IL_000f:
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m2DDD9E2B36A595D40708EBE84125C065CCF6F11D_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C>(__this);
	Enumerator_get_Current_m2DDD9E2B36A595D40708EBE84125C065CCF6F11D(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_ThrowEnumerationNotStartedOrEnded_mA8F87F65FFD80CCBB3A060C159463BB5B5603E93_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	String_t* G_B3_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9));
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633));
	}

IL_0015:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, G_B3_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m01A32A0663137A48FD334AD3F7BF1A172FEBA204_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B);
	{
		Enumerator_get_Current_m2DDD9E2B36A595D40708EBE84125C065CCF6F11D(__this, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m01A32A0663137A48FD334AD3F7BF1A172FEBA204_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m01A32A0663137A48FD334AD3F7BF1A172FEBA204(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_m5E20159EC017B0F62631E89E5784B2D532E2D314_fshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = *(Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (-1));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t0E5DDAEBBF431B9439368009CC139FC0992B409B);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_System_Collections_IEnumerator_Reset_m5E20159EC017B0F62631E89E5784B2D532E2D314_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C>(__this);
	Enumerator_System_Collections_IEnumerator_Reset_m5E20159EC017B0F62631E89E5784B2D532E2D314(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF961799B5F1CC1D9AEAC1E22C8F93C2EAC4E885B_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		__this->___m_Array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_0);
		int32_t L_1 = ___1_index;
		__this->___m_IndexStart = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_length;
		__this->___m_IndexEnd = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		int32_t L_4 = __this->___m_IndexStart;
		__this->___m_Index = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mBA9853A226A9CB16F8FB74D21519A91A38E063E0_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_mBA9853A226A9CB16F8FB74D21519A91A38E063E0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923>(__this);
	Enumerator_Dispose_mBA9853A226A9CB16F8FB74D21519A91A38E063E0(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA42BDA7B751B17DB4EC59F6995E3188780091966_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		int32_t L_1 = __this->___m_IndexEnd;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_001c:
	{
		int32_t L_3 = __this->___m_Index;
		int32_t L_4 = __this->___m_IndexEnd;
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mA42BDA7B751B17DB4EC59F6995E3188780091966_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mA42BDA7B751B17DB4EC59F6995E3188780091966(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m2845BC4731316BCC3E1AB5C3F5799107716B7810_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_IndexStart;
		__this->___m_Index = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Reset_m2845BC4731316BCC3E1AB5C3F5799107716B7810_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923>(__this);
	Enumerator_Reset_m2845BC4731316BCC3E1AB5C3F5799107716B7810(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mAEF87A53D24C4DB2F6069E75CF1A5D66D5F4D13F_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t7989F1661D719E09D46EAE726E8A35AD8AB36DBA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TValue_t7989F1661D719E09D46EAE726E8A35AD8AB36DBA);
	{
		int32_t L_0 = __this->___m_Index;
		int32_t L_1 = __this->___m_IndexEnd;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_2 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38078454203FA992D959F0FD913FDD567D9EA9EB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0019:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_Index;
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_TValue_t7989F1661D719E09D46EAE726E8A35AD8AB36DBA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TValue_t7989F1661D719E09D46EAE726E8A35AD8AB36DBA);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_mAEF87A53D24C4DB2F6069E75CF1A5D66D5F4D13F_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923>(__this);
	Enumerator_get_Current_mAEF87A53D24C4DB2F6069E75CF1A5D66D5F4D13F(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m6D0270EB2876CB03F839581CC803C1DAA52EF9D4_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_t7989F1661D719E09D46EAE726E8A35AD8AB36DBA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t7989F1661D719E09D46EAE726E8A35AD8AB36DBA);
	{
		Enumerator_get_Current_mAEF87A53D24C4DB2F6069E75CF1A5D66D5F4D13F(__this, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m6D0270EB2876CB03F839581CC803C1DAA52EF9D4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_m6D0270EB2876CB03F839581CC803C1DAA52EF9D4(_thisAdjusted, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD65EF492693E70B41695A031A49F72C7EFA82FCE_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* ___0_stack, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_0 = ___0_stack;
		il2cpp_codegen_write_field_data<Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_1 = ___0_stack;
		int32_t L_2 = L_1->____version;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_2);
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m475AD9FE055280B2B1CF43E93F9A2340C3EAE75C_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), (-1));
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m475AD9FE055280B2B1CF43E93F9A2340C3EAE75C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41>(__this);
	Enumerator_Dispose_m475AD9FE055280B2B1CF43E93F9A2340C3EAE75C(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3347052D874561F1E1857019C4F418A27B125353_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
	const Il2CppFullySharedGenericAny L_23 = L_13;
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_1 = *(Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0067;
		}
	}
	{
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_5 = *(Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_6 = L_5->____size;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), ((int32_t)il2cpp_codegen_subtract(L_6, 1)));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		int32_t L_8 = ((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		if (!L_8)
		{
			G_B5_0 = L_8;
			goto IL_0066;
		}
		G_B4_0 = L_8;
	}
	{
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_9 = *(Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = L_9->____array;
		int32_t L_11 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		int32_t L_12 = L_11;
		il2cpp_codegen_memcpy(L_13, (L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)), SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_13, SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
		G_B5_0 = G_B4_0;
	}

IL_0066:
	{
		return (bool)G_B5_0;
	}

IL_0067:
	{
		int32_t L_14 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_0072;
		}
	}
	{
		return (bool)0;
	}

IL_0072:
	{
		int32_t L_15 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		int32_t L_16 = V_0;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_16);
		int32_t L_17 = V_0;
		int32_t L_18 = ((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		if (!L_18)
		{
			G_B10_0 = L_18;
			goto IL_00a9;
		}
		G_B9_0 = L_18;
	}
	{
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_19 = *(Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = L_19->____array;
		int32_t L_21 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		int32_t L_22 = L_21;
		il2cpp_codegen_memcpy(L_23, (L_20)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_22)), SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_23, SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
		return (bool)G_B9_0;
	}

IL_00a9:
	{
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
		return (bool)G_B10_0;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_m3347052D874561F1E1857019C4F418A27B125353_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41>(__this);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_m3347052D874561F1E1857019C4F418A27B125353(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_m748B0758792F434FAB29656C2F5CF6EEB4481D27_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		Enumerator_ThrowEnumerationNotStartedOrEnded_mDFA786E51878E61AE16B8C27D512FD3407BA6AFA(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	}

IL_000f:
	{
		il2cpp_codegen_memcpy(L_1, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_get_Current_m748B0758792F434FAB29656C2F5CF6EEB4481D27_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41>(__this);
	Enumerator_get_Current_m748B0758792F434FAB29656C2F5CF6EEB4481D27(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_ThrowEnumerationNotStartedOrEnded_mDFA786E51878E61AE16B8C27D512FD3407BA6AFA_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	String_t* G_B3_0 = NULL;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		if ((((int32_t)L_0) == ((int32_t)((int32_t)-2))))
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral834F4B6837B71847C4048C946DF8754B323D6BF9));
		goto IL_0016;
	}

IL_0011:
	{
		G_B3_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2390D6884F59E2E4EA04837AD7D6268548597633));
	}

IL_0016:
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, G_B3_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC2EE4A74701F665A795443A0814F1CF22BC12560_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
	{
		Enumerator_get_Current_m748B0758792F434FAB29656C2F5CF6EEB4481D27(__this, (Il2CppFullySharedGenericAny*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 7));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_mC2EE4A74701F665A795443A0814F1CF22BC12560_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41>(__this);
	RuntimeObject* _returnValue;
	_returnValue = Enumerator_System_Collections_IEnumerator_get_Current_mC2EE4A74701F665A795443A0814F1CF22BC12560(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_System_Collections_IEnumerator_Reset_m796D8D2C90C2436A06B08E30008143FCF74E8EC9_fshared (Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* L_1 = *(Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_001e;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8D08FCF1537043BF0289FA98C51BF5A3AC7C618)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001e:
	{
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), ((int32_t)-2));
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_t43B3E794C887F691C76D009756D4BAD94E1898AF);
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_System_Collections_IEnumerator_Reset_m796D8D2C90C2436A06B08E30008143FCF74E8EC9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<Enumerator_t9C40FA80DC7A4C63469E514386FAB9AE1039DF41>(__this);
	Enumerator_System_Collections_IEnumerator_Reset_m796D8D2C90C2436A06B08E30008143FCF74E8EC9(_thisAdjusted, method);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t InputStateHistory_get_Count_m23DF78272A6C97F6C8782A953482772CDF6FFA81_inline (InputStateHistory_tF2145C4E34E0E3AC84270533F58F047D6E28A480* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RecordCount;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapDataEnumerator_MoveNext_m15C57E6A73D44B6A1DEC165D193181FC30441204_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		int32_t* L_1 = (int32_t*)(&__this->___m_BucketIndex);
		int32_t* L_2 = (int32_t*)(&__this->___m_NextIndex);
		int32_t* L_3 = (int32_t*)(&__this->___m_Index);
		bool L_4;
		L_4 = UnsafeParallelHashMapData_MoveNext_m3A7C4662D2D479B740F657CECED1B78E1BDE1BDE_inline(L_0, L_1, L_2, L_3, NULL);
		return L_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ListQueryMatcher_1_set_matches_m32D702F4DE02ABB90F1560B65718F096EDD98416_gshared_inline (ListQueryMatcher_1_t80B2C90F8E32F964B971ECBBAA0E811171012425* __this, List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* ___0_value, const RuntimeMethod* method) 
{
	{
		List_1_t6959D78D53022948E65A4FDA6291D7F38FEFA02E* L_0 = ___0_value;
		__this->___U3CmatchesU3Ek__BackingField = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmatchesU3Ek__BackingField), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList128Bytes_1_get_Length_m927F92EC07E24F20A7314C091F5C5FACA9A0C16B_fshared_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0;
		L_0 = FixedList128Bytes_1_get_length_m01D23D934D19D0EEDCA425F421ABA56B3DA58F3C_inline(__this, NULL);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m242FBFBB91DEFCFF5AD76B3C5D94727D91630F29_fshared_inline (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* L_2 = (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D*)(&__this->___m_List);
		int32_t L_3;
		L_3 = FixedList128Bytes_1_get_Length_m927F92EC07E24F20A7314C091F5C5FACA9A0C16B_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FixedList128Bytes_1_get_Item_m5C6B0C333D9C8C117E550913DFB568BF59E3A1E9_fshared_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30);
	{
		uint8_t* L_0;
		L_0 = FixedList128Bytes_1_get_Buffer_mD43014DEC5833FAF9392FC3FCBE3E9B54C6C4156_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_0, L_2, (Il2CppFullySharedGenericStruct*)L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_tF637D573FAC60604ECC747D4E3EAC341C5AAEF30);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m49C3CD9AFB11BE8D7A533877C906828641184543_fshared_inline (Enumerator_t62F1AF7E25BD0ED5C3A5E0E7A4EB369BF69EA53B* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t59CDD47BF159E18B3214418765AE8B87BF6CDAF5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t59CDD47BF159E18B3214418765AE8B87BF6CDAF5);
	{
		FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* L_0 = (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D*)(&__this->___m_List);
		int32_t L_1 = __this->___m_Index;
		FixedList128Bytes_1_get_Item_m5C6B0C333D9C8C117E550913DFB568BF59E3A1E9_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t59CDD47BF159E18B3214418765AE8B87BF6CDAF5);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList32Bytes_1_get_Length_m69BE1E6D357498954A3C7A28D7F00CAAA79F80DE_fshared_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0;
		L_0 = FixedList32Bytes_1_get_length_mD16FF5C8CCA29B2A58BB98073E6729F0E2BBE907_inline(__this, NULL);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9063CA1E8AA6E6D8D65CE20A21CCA365A0DA2715_fshared_inline (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* L_2 = (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF*)(&__this->___m_List);
		int32_t L_3;
		L_3 = FixedList32Bytes_1_get_Length_m69BE1E6D357498954A3C7A28D7F00CAAA79F80DE_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FixedList32Bytes_1_get_Item_m1E22159351628A448545A200C5B692F2A16594FC_fshared_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t604DA2B2C61AC824178F38507FE80321D55C1110 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t604DA2B2C61AC824178F38507FE80321D55C1110);
	{
		uint8_t* L_0;
		L_0 = FixedList32Bytes_1_get_Buffer_mFB1AAFA86AB113AC3BEF550971AA4DA182A64606_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_0, L_2, (Il2CppFullySharedGenericStruct*)L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t604DA2B2C61AC824178F38507FE80321D55C1110);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m97BA1C93F238DDDFCCCCFB55367C4F1F6DA9942E_fshared_inline (Enumerator_t6DC5F97BDA54FA0B78B013447FFF6C0C0AAB27A7* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tD2DD713AA88B0DD20A31528F1466852E7A2D4B42 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tD2DD713AA88B0DD20A31528F1466852E7A2D4B42);
	{
		FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* L_0 = (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF*)(&__this->___m_List);
		int32_t L_1 = __this->___m_Index;
		FixedList32Bytes_1_get_Item_m1E22159351628A448545A200C5B692F2A16594FC_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tD2DD713AA88B0DD20A31528F1466852E7A2D4B42);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList4096Bytes_1_get_Length_m7F849A6DE2F1D919926FD832199A91C25A15CF83_fshared_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0;
		L_0 = FixedList4096Bytes_1_get_length_m0437506FA2283836CDDC3A46CC5F706D1819B05A_inline(__this, NULL);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2D7B02C42527454C558080D4F9900A3F383BE9C0_fshared_inline (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* L_2 = (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0*)(&__this->___m_List);
		int32_t L_3;
		L_3 = FixedList4096Bytes_1_get_Length_m7F849A6DE2F1D919926FD832199A91C25A15CF83_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FixedList4096Bytes_1_get_Item_m970363422CEE1B790AFBEB5934459409F61AD136_fshared_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tBD073BADADC7386EA705AE4342916B0F07BDACDE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tBD073BADADC7386EA705AE4342916B0F07BDACDE);
	{
		uint8_t* L_0;
		L_0 = FixedList4096Bytes_1_get_Buffer_m76BCD608C0436D7647CC2BD2D197629A9B1C6DC3_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_0, L_2, (Il2CppFullySharedGenericStruct*)L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_tBD073BADADC7386EA705AE4342916B0F07BDACDE);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m5CB310C7BF731494B28B1C749D9D5BCF8317556E_fshared_inline (Enumerator_t00DA3E2BF9A0C21BE675E5B317C040011905CD9C* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t0E6730EBDA5394C898DCC382171709D7A47C9080 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t0E6730EBDA5394C898DCC382171709D7A47C9080);
	{
		FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* L_0 = (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0*)(&__this->___m_List);
		int32_t L_1 = __this->___m_Index;
		FixedList4096Bytes_1_get_Item_m970363422CEE1B790AFBEB5934459409F61AD136_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t0E6730EBDA5394C898DCC382171709D7A47C9080);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList512Bytes_1_get_Length_m39F0C6ECC0732E96B3F8C0A2553A71E975011ABF_fshared_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0;
		L_0 = FixedList512Bytes_1_get_length_mB15FCBDD135D7C01311794E83AF0B6436D2D5464_inline(__this, NULL);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m7B33D583007CBEE3B0F94CADFB5E0D82F54C05D2_fshared_inline (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* L_2 = (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F*)(&__this->___m_List);
		int32_t L_3;
		L_3 = FixedList512Bytes_1_get_Length_m39F0C6ECC0732E96B3F8C0A2553A71E975011ABF_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FixedList512Bytes_1_get_Item_m2BDE2A77E2F1085AF6581D7128CF28D81BF1B8FC_fshared_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B);
	{
		uint8_t* L_0;
		L_0 = FixedList512Bytes_1_get_Buffer_mB8203817FDA4AEEF7E986FEF9A92B92F48456DA4_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_0, L_2, (Il2CppFullySharedGenericStruct*)L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t2DEEC1EDE9244B8523CA96477075BECFEDDEB70B);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m9C6F591E8913284C78CEE9DC0242512553824BB7_fshared_inline (Enumerator_tD984D35345EE95D1427E33EE17DA0FE56EF09A97* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t33CA3010072F8EF57546CCC7AF1A6030F6A4CE93 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t33CA3010072F8EF57546CCC7AF1A6030F6A4CE93);
	{
		FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* L_0 = (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F*)(&__this->___m_List);
		int32_t L_1 = __this->___m_Index;
		FixedList512Bytes_1_get_Item_m2BDE2A77E2F1085AF6581D7128CF28D81BF1B8FC_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t33CA3010072F8EF57546CCC7AF1A6030F6A4CE93);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList64Bytes_1_get_Length_m9CE762AB945BF8C956C2B6AF84AEE58B20A679C3_fshared_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0;
		L_0 = FixedList64Bytes_1_get_length_m3DE952DD93CA6DA9DCC7AE3B38049D044BC24628_inline(__this, NULL);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m0A00DE94C43CC10582082865870C48D4D10F4C2B_fshared_inline (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Index;
		__this->___m_Index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___m_Index;
		FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* L_2 = (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3*)(&__this->___m_List);
		int32_t L_3;
		L_3 = FixedList64Bytes_1_get_Length_m9CE762AB945BF8C956C2B6AF84AEE58B20A679C3_inline(L_2, NULL);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FixedList64Bytes_1_get_Item_m80147EAADDAE6893ABEDA8444B6F72691EB1A899_fshared_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tD32C0F6209442C9BB65A030D29698147784945B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tD32C0F6209442C9BB65A030D29698147784945B7);
	{
		uint8_t* L_0;
		L_0 = FixedList64Bytes_1_get_Buffer_m453BB0D8491D838AC1381E57320C9FE6E3943F68_inline(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 8));
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_0, L_2, (Il2CppFullySharedGenericStruct*)L_3, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 15));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_tD32C0F6209442C9BB65A030D29698147784945B7);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m913E8AF9BD221F6DC06B386A0C2D1F66DD2294D5_fshared_inline (Enumerator_tCC3F2A556352D23B37A89381E62D651BAD7217BC* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t786D71AE40F85F8250A3F1E231E7643F7965459F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t786D71AE40F85F8250A3F1E231E7643F7965459F);
	{
		FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* L_0 = (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3*)(&__this->___m_List);
		int32_t L_1 = __this->___m_Index;
		FixedList64Bytes_1_get_Item_m80147EAADDAE6893ABEDA8444B6F72691EB1A899_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t786D71AE40F85F8250A3F1E231E7643F7965459F);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_fshared_inline (HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* __this, int32_t* ___0_bucketIndex, int32_t* ___1_nextIndex, int32_t* ___2_index, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___1_nextIndex;
		int32_t L_1 = *(L_0);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t* L_2 = ___2_index;
		int32_t* L_3 = ___1_nextIndex;
		int32_t L_4 = *(L_3);
		*(L_2) = L_4;
		int32_t* L_5 = ___1_nextIndex;
		int32_t* L_6 = __this->___Next;
		int32_t* L_7 = ___1_nextIndex;
		int32_t L_8 = *(L_7);
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		int32_t L_10 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(L_9, 4)))));
		*(L_5) = L_10;
		return (bool)1;
	}

IL_001a:
	{
		int32_t* L_11 = ___0_bucketIndex;
		int32_t* L_12 = ___1_nextIndex;
		int32_t* L_13 = ___2_index;
		bool L_14;
		L_14 = HashMapHelper_1_MoveNextSearch_m5B2FF1D7B41C3BA34939652BB8BB2629DD498626(__this, L_11, L_12, L_13, NULL);
		return L_14;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC9099E56E01AB33169AB4EE888BD9A2B752961DE_fshared_inline (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_0, 1)));
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_2 = (((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))->___m_Length;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}
	{
		void* L_3 = (((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))->___m_Buffer;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_3, L_4, (Il2CppFullySharedGenericStruct*)L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_5, SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
		return (bool)1;
	}

IL_003f:
	{
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_mF9A198DACCE8ED0DC6FD097825D7A0F82D149DBA_fshared_inline (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_System_Collections_IEnumerator_get_Current_m81767706F1E3B41EAB92F21B1669693FFE92ACCB_fshared_inline (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tCB2B4AD90EC47251952F0D7CF84CE2365DFB7790);
	{
		Enumerator_get_Current_mF9A198DACCE8ED0DC6FD097825D7A0F82D149DBA_inline(__this, (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3), L_0);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD61BB53328B5D708EEEB308A096A80542A63050D_fshared_inline (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, const RuntimeMethod* method) 
{
	{
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_0 = __this->___m_Data;
		int32_t* L_1 = (int32_t*)(&__this->___m_BucketIndex);
		int32_t* L_2 = (int32_t*)(&__this->___m_NextIndex);
		int32_t* L_3 = (int32_t*)(&__this->___m_Index);
		bool L_4;
		L_4 = HashMapHelper_1_MoveNext_mC9D28D7DE9EB2A526DFD790777D5E118D33E86BC_inline((HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC*)L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDBC21788DC29B177915D6FC64E98BA401BA9F163_fshared_inline (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_0 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		bool L_1;
		L_1 = Enumerator_MoveNext_mD61BB53328B5D708EEEB308A096A80542A63050D_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_GetCurrentKey_mEF70D21D7190C8EA3A42C1ABB88E1DA9739C99B5_fshared_inline (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
	const Il2CppFullySharedGenericStruct L_7 = L_6;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
	memset(V_0, 0, SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_1 = __this->___m_Data;
		Il2CppFullySharedGenericStruct* L_2 = L_1->___Keys;
		int32_t L_3 = __this->___m_Index;
		intptr_t L_4 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_3,NULL));
		uint32_t L_5 = SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49;
		il2cpp_codegen_memcpy(L_6, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(L_4, (int32_t)L_5)))), SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
		return;
	}

IL_0029:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_TKey_t0F11421ACB383F7A19EE55E7B10001B5E759CD49);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_mB519F490A17E381EACF6CBA5D1C31200C64D984F_fshared_inline (Enumerator_t6D9CD861F30E6D4754A7BCDCFE4F2DB83711BA6F* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t76AF9F617C4D8EAC69589922FAD823228702CA86 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t76AF9F617C4D8EAC69589922FAD823228702CA86);
	{
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_0 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		Enumerator_GetCurrentKey_mEF70D21D7190C8EA3A42C1ABB88E1DA9739C99B5_inline(L_0, (Il2CppFullySharedGenericStruct*)L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t76AF9F617C4D8EAC69589922FAD823228702CA86);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Length;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1E122089BC8131DF27883BBCA11D6CDF1AEEEDB7_fshared_inline (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* L_0 = (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)(&__this->___m_Enumerator);
		bool L_1;
		L_1 = UnsafeParallelHashMapDataEnumerator_MoveNext_m15C57E6A73D44B6A1DEC165D193181FC30441204_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_fshared_inline (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
	const Il2CppFullySharedGenericStruct L_5 = L_4;
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
	memset(V_0, 0, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
	{
		int32_t L_0 = __this->___m_Index;
		if ((((int32_t)L_0) == ((int32_t)(-1))))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_1 = __this->___m_Buffer;
		uint8_t* L_2 = L_1->___keys;
		int32_t L_3 = __this->___m_Index;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_2, L_3, (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		return;
	}

IL_0020:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		il2cpp_codegen_memcpy(L_5, V_0, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_TKey_tDBBD3695D659ACD8F0553908105525ACBBC2CAFF);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m1017E83823B755AF1CA6B2246F5FD522001D9871_fshared_inline (Enumerator_tBE902CB6D223823750F7FACA813BEF125786E658* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE52E8B5630487F5862A76E9B81B37E7D1CB18016 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tE52E8B5630487F5862A76E9B81B37E7D1CB18016);
	{
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* L_0 = (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)(&__this->___m_Enumerator);
		UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_inline(L_0, (Il2CppFullySharedGenericStruct*)L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tE52E8B5630487F5862A76E9B81B37E7D1CB18016);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC010E40DBBC1021AE2955FA74DE168E960D62149_fshared_inline (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
	int32_t V_0 = 0;
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), ((int32_t)il2cpp_codegen_add(L_0, 1)));
		goto IL_0064;
	}

IL_0010:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_1 = *(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_2 = L_1->___m_NumItems;
		V_0 = L_2;
		int32_t L_3 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0045;
		}
	}
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_5 = *(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		uint32_t L_6 = sizeof(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C);
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)((UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)il2cpp_codegen_add((intptr_t)L_5, (int32_t)L_6)), L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), L_8, SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
		return (bool)1;
	}

IL_0045:
	{
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		int32_t L_10 = V_0;
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),3), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), ((int32_t)il2cpp_codegen_subtract(L_9, L_10)));
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_11 = *(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_12 = L_11->___m_NextBlock;
		il2cpp_codegen_write_field_data<UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_12);
	}

IL_0064:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_13 = *(UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		uintptr_t L_14 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_13) == ((uintptr_t)L_14))))
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)))), SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBA218311DD0EEA28366054B1DDD87EF5DCC1990E_fshared_inline (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		bool L_0;
		L_0 = Enumerator_MoveNext_mC010E40DBBC1021AE2955FA74DE168E960D62149_inline((((Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_mBBFD3B1857369E3256B1CCB21ED470D8B4E46B63_fshared_inline (Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tDD9D3556140A1EDC0D942F364E1644D890C3A7F2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m36EA64558736EC5AA965E6C7C12968E195E09AA5_fshared_inline (Enumerator_t40EAA94FA3FF8B3CCB541B6B42916149F20AAC83* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tD7A14E55056388A1FC3FD20056A882D678C82481 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tD7A14E55056388A1FC3FD20056A882D678C82481);
	{
		Enumerator_get_Current_mBBFD3B1857369E3256B1CCB21ED470D8B4E46B63_inline((((Enumerator_t1073A7991B30BC1182EDC0AF164ED29FC964D421*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))), (Il2CppFullySharedGenericStruct*)L_0, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tD7A14E55056388A1FC3FD20056A882D678C82481);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m736B3FBFDCE475107941328576DCEF4079395C57_fshared_inline (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_0 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		bool L_1;
		L_1 = Enumerator_MoveNext_mD61BB53328B5D708EEEB308A096A80542A63050D_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_mFF2CA86985CA0F66A2D6326CBD03DC3074F32F53_fshared_inline (Enumerator_t915157D671A6369D5EB51529F89DB31F23D90322* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9);
	{
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_0 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		HashMapHelper_1_t7364EEBCB4B3DE1B66766FEB2C1829C7F6CFE4BC* L_1 = L_0->___m_Data;
		Il2CppFullySharedGenericStruct* L_2 = L_1->___Keys;
		Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802* L_3 = (Enumerator_tAF86E81F6DB633F2128F19B6FB26582C64E69802*)(&__this->___m_Enumerator);
		int32_t L_4 = L_3->___m_Index;
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_4,NULL));
		uint32_t L_6 = SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9;
		il2cpp_codegen_memcpy(L_7, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(L_5, (int32_t)L_6)))), SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_T_tE3E0DF4546388378E032284DA2638A56BFC074E9);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m585575792FA654B690455D25C3B5F75647513AD3_fshared_inline (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Index;
		V_0 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = V_0;
		__this->___m_Index = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___m_Length;
		return (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m28823F91A1BEC7D0ADA14F770BBBE6BDB8274403_fshared_inline (Enumerator_t4CE4BA2D3AB881FD938AB94DEB9F51A8786DD89E* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA);
	{
		Il2CppFullySharedGenericStruct* L_0 = __this->___m_Ptr;
		int32_t L_1 = __this->___m_Index;
		intptr_t L_2 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_1,NULL));
		uint32_t L_3 = SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_2, (int32_t)L_3)))), SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tD7657579B810B81E3B38091F30B064D23168E1AA);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFFB2EF2C36B70F350E88E4CDD5F4C7B2E03D1C61_fshared_inline (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, const RuntimeMethod* method) 
{
	{
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* L_0 = (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)(&__this->___m_Enumerator);
		bool L_1;
		L_1 = UnsafeParallelHashMapDataEnumerator_MoveNext_m15C57E6A73D44B6A1DEC165D193181FC30441204_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_mADD156FACD9219B3A0B5197F066274E38DD0CE3E_fshared_inline (Enumerator_t7BBB93887BBC41A4C61AB1CE5DB2887B794500BE* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tA2B9D9079CEA3A27E4894A531F54DD1C69DD79FE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tA2B9D9079CEA3A27E4894A531F54DD1C69DD79FE);
	{
		UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* L_0 = (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5*)(&__this->___m_Enumerator);
		UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_inline(L_0, (Il2CppFullySharedGenericStruct*)L_1, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tA2B9D9079CEA3A27E4894A531F54DD1C69DD79FE);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9589C320A0B345A9190284C38FCB97F2015861DA_fshared_inline (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		il2cpp_codegen_write_field_data<int32_t, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), ((int32_t)il2cpp_codegen_add(L_0, 1)));
		int32_t L_1 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		int32_t L_2 = (((ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))->___m_Length;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_003f;
		}
	}
	{
		void* L_3 = (((ReadOnly_tC6998C67EE7BA262710FFDCF6BE6728CB987FDE8*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1))))->___m_Buffer;
		int32_t L_4 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_3, L_4, (Il2CppFullySharedGenericStruct*)L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5));
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),2), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_5, SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
		return (bool)1;
	}

IL_003f:
	{
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericStruct*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))), SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
		return (bool)0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m44CEFC7935FF87861A589ACDB1024033E52A123E_fshared_inline (Enumerator_tF9CAF4D90202E64A41350C2A4CF1CAF69A80A16C* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t4E82A4C927C92C52A5DF293884D44E2650C7B23F);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m51282E47C90E55BF2D96A0D329869ABC122A85A0_fshared_inline (Enumerator_t0D36BD6D63D775CDEAF8501F5A252535FFFF52CB* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t6D22409F37413B725563BF484486F55FB7202BB8);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m5BA2E5A6E9016D327B7C3067D3D2B2016D37DFDA_fshared_inline (Enumerator_t21D50D6AE6FF834C37B6D62B4470E690B9130457* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t40ED5F405E4C66916984D6B18DAD11FB5460B70E);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t LinkedList_1_get_Count_m6E80F28E7CB5BA6E35ECE961C429AE6CA69003A2_fshared_inline (LinkedList_1_tF459954AFF413E172A3D62178CA206041C9D1BF9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___count;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m05879F7740A935DB74AE5672E2B537349369A3C1_fshared_inline (Enumerator_t291DC5B00D016A9E1E061A4CCA7269A21EAF45C0* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5)), SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tED0EB14CB913118FBDFEDD7D0C8F114A02B0A274);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_fshared_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_set_Current_m1BB3A6D5580E7C6A864831EED00A4E1B8E81B1B5_fshared_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_write_field_data<RuntimeObject*, true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),4), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeParallelHashMapData_MoveNext_m3A7C4662D2D479B740F657CECED1B78E1BDE1BDE_inline (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t* ___1_bucketIndex, int32_t* ___2_nextIndex, int32_t* ___3_index, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		int32_t* L_0 = ___2_nextIndex;
		int32_t L_1 = *(L_0);
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_001c;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		uint8_t* L_3 = L_2->___next;
		V_0 = (int32_t*)L_3;
		int32_t* L_4 = ___3_index;
		int32_t* L_5 = ___2_nextIndex;
		int32_t L_6 = *(L_5);
		*(L_4) = L_6;
		int32_t* L_7 = ___2_nextIndex;
		int32_t* L_8 = V_0;
		int32_t* L_9 = ___2_nextIndex;
		int32_t L_10 = *(L_9);
		intptr_t L_11 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_10,NULL));
		int32_t L_12 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(L_11, 4)))));
		*(L_7) = L_12;
		return (bool)1;
	}

IL_001c:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		int32_t* L_14 = ___1_bucketIndex;
		int32_t* L_15 = ___2_nextIndex;
		int32_t* L_16 = ___3_index;
		bool L_17;
		L_17 = UnsafeParallelHashMapData_MoveNextSearch_m470DB16F92234F8BF5C36E38E1B2D81A208634F4(L_13, L_14, L_15, L_16, NULL);
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FixedList128Bytes_1_get_length_m01D23D934D19D0EEDCA425F421ABA56B3DA58F3C_fshared_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18* V_1 = NULL;
	{
		FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18* L_0 = (FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18*)(&__this->___data);
		V_1 = L_0;
		FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18*,intptr_t,false,false>(L_1,NULL));
		V_0 = (void*)L_2;
		void* L_3 = V_0;
		int32_t L_4 = ((int32_t)*(((uint16_t*)L_3)));
		return (uint16_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList128Bytes_1_get_Buffer_mD43014DEC5833FAF9392FC3FCBE3E9B54C6C4156_fshared_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		uint8_t* L_0;
		L_0 = FixedList128Bytes_1_get_buffer_m3FA0F1453D72938135D3074318E14AD2A1B32DA4_inline(__this, NULL);
		int32_t L_1;
		L_1 = FixedList_PaddingBytes_TisIl2CppFullySharedGenericStruct_m573FD523FF52FE25B53DA0840EB707029DA7AF5F_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FixedList32Bytes_1_get_length_mD16FF5C8CCA29B2A58BB98073E6729F0E2BBE907_fshared_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779* V_1 = NULL;
	{
		FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779* L_0 = (FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779*)(&__this->___data);
		V_1 = L_0;
		FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779*,intptr_t,false,false>(L_1,NULL));
		V_0 = (void*)L_2;
		void* L_3 = V_0;
		int32_t L_4 = ((int32_t)*(((uint16_t*)L_3)));
		return (uint16_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList32Bytes_1_get_Buffer_mFB1AAFA86AB113AC3BEF550971AA4DA182A64606_fshared_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		uint8_t* L_0;
		L_0 = FixedList32Bytes_1_get_buffer_m139B05C9B2F45AA86EBFBD4F0EC8803848137F66_inline(__this, NULL);
		int32_t L_1;
		L_1 = FixedList_PaddingBytes_TisIl2CppFullySharedGenericStruct_m573FD523FF52FE25B53DA0840EB707029DA7AF5F_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FixedList4096Bytes_1_get_length_m0437506FA2283836CDDC3A46CC5F706D1819B05A_fshared_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086* V_1 = NULL;
	{
		FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086* L_0 = (FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086*)(&__this->___data);
		V_1 = L_0;
		FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086*,intptr_t,false,false>(L_1,NULL));
		V_0 = (void*)L_2;
		void* L_3 = V_0;
		int32_t L_4 = ((int32_t)*(((uint16_t*)L_3)));
		return (uint16_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList4096Bytes_1_get_Buffer_m76BCD608C0436D7647CC2BD2D197629A9B1C6DC3_fshared_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		uint8_t* L_0;
		L_0 = FixedList4096Bytes_1_get_buffer_mC6FF3A165067CDB3016B89246011CB5D7B34B71D_inline(__this, NULL);
		int32_t L_1;
		L_1 = FixedList_PaddingBytes_TisIl2CppFullySharedGenericStruct_m573FD523FF52FE25B53DA0840EB707029DA7AF5F_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FixedList512Bytes_1_get_length_mB15FCBDD135D7C01311794E83AF0B6436D2D5464_fshared_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E* V_1 = NULL;
	{
		FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E* L_0 = (FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E*)(&__this->___data);
		V_1 = L_0;
		FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E*,intptr_t,false,false>(L_1,NULL));
		V_0 = (void*)L_2;
		void* L_3 = V_0;
		int32_t L_4 = ((int32_t)*(((uint16_t*)L_3)));
		return (uint16_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList512Bytes_1_get_Buffer_mB8203817FDA4AEEF7E986FEF9A92B92F48456DA4_fshared_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		uint8_t* L_0;
		L_0 = FixedList512Bytes_1_get_buffer_m513212BD1E1DB094D6923FAD0B5D92DF8FBAC102_inline(__this, NULL);
		int32_t L_1;
		L_1 = FixedList_PaddingBytes_TisIl2CppFullySharedGenericStruct_m573FD523FF52FE25B53DA0840EB707029DA7AF5F_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t FixedList64Bytes_1_get_length_m3DE952DD93CA6DA9DCC7AE3B38049D044BC24628_fshared_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1* V_1 = NULL;
	{
		FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1* L_0 = (FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1*)(&__this->___data);
		V_1 = L_0;
		FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1*,intptr_t,false,false>(L_1,NULL));
		V_0 = (void*)L_2;
		void* L_3 = V_0;
		int32_t L_4 = ((int32_t)*(((uint16_t*)L_3)));
		return (uint16_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList64Bytes_1_get_Buffer_m453BB0D8491D838AC1381E57320C9FE6E3943F68_fshared_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	{
		uint8_t* L_0;
		L_0 = FixedList64Bytes_1_get_buffer_m590958E1E714990BD451E67228F00F8DB98CC77E_inline(__this, NULL);
		int32_t L_1;
		L_1 = FixedList_PaddingBytes_TisIl2CppFullySharedGenericStruct_m573FD523FF52FE25B53DA0840EB707029DA7AF5F_inline(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 6));
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList128Bytes_1_get_buffer_m3FA0F1453D72938135D3074318E14AD2A1B32DA4_fshared_inline (FixedList128Bytes_1_t48B92DAD1EAEE78ABCEF114D7E0E38DB9D55811D* __this, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18* V_1 = NULL;
	{
		FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18* L_0 = (FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18*)(&__this->___data);
		V_1 = L_0;
		FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,FixedBytes128Align8_tF4DD5F2FA8A75B4C3DEB0C84EF71008D7ADC0C18*,intptr_t,false,false>(L_1,NULL));
		V_0 = (void*)L_2;
		void* L_3 = V_0;
		return (uint8_t*)(((void*)il2cpp_codegen_add((intptr_t)L_3, 2)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FixedList_PaddingBytes_TisIl2CppFullySharedGenericStruct_m573FD523FF52FE25B53DA0840EB707029DA7AF5F_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA5912E8646DA88E85E66D08CB0327BAA5E6B0184 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tA5912E8646DA88E85E66D08CB0327BAA5E6B0184;
		int32_t L_1;
		L_1 = math_tzcnt_m25573278D92DAE1280EBFACAAB6BB50CFF4172CD_inline((int32_t)L_0, NULL);
		int32_t L_2;
		L_2 = math_min_m0D183243301588F5000801E35B451374CD10DFC1_inline(6, ((int32_t)il2cpp_codegen_subtract(((int32_t)(1<<((int32_t)(L_1&((int32_t)31))))), 2)), NULL);
		int32_t L_3;
		L_3 = math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline(0, L_2, NULL);
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList32Bytes_1_get_buffer_m139B05C9B2F45AA86EBFBD4F0EC8803848137F66_fshared_inline (FixedList32Bytes_1_t0FACEAC503CC4F812B5F875F9935BF74DD8060DF* __this, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779* V_1 = NULL;
	{
		FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779* L_0 = (FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779*)(&__this->___data);
		V_1 = L_0;
		FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,FixedBytes32Align8_t07C7D543B487721FF9B88AD85209956AE423A779*,intptr_t,false,false>(L_1,NULL));
		V_0 = (void*)L_2;
		void* L_3 = V_0;
		return (uint8_t*)(((void*)il2cpp_codegen_add((intptr_t)L_3, 2)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList4096Bytes_1_get_buffer_mC6FF3A165067CDB3016B89246011CB5D7B34B71D_fshared_inline (FixedList4096Bytes_1_tE752731D10EC1DE2BC20B1A877CD1C5EA6E963C0* __this, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086* V_1 = NULL;
	{
		FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086* L_0 = (FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086*)(&__this->___data);
		V_1 = L_0;
		FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,FixedBytes4096Align8_t28724035D70132BAB64D2ED1978E6D5D7253B086*,intptr_t,false,false>(L_1,NULL));
		V_0 = (void*)L_2;
		void* L_3 = V_0;
		return (uint8_t*)(((void*)il2cpp_codegen_add((intptr_t)L_3, 2)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList512Bytes_1_get_buffer_m513212BD1E1DB094D6923FAD0B5D92DF8FBAC102_fshared_inline (FixedList512Bytes_1_t7AD72C3D47ECAC77613F96FCB92C4C4AE508704F* __this, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E* V_1 = NULL;
	{
		FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E* L_0 = (FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E*)(&__this->___data);
		V_1 = L_0;
		FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,FixedBytes512Align8_tF679F1BEB42E790E58545972A29D0F31EE90386E*,intptr_t,false,false>(L_1,NULL));
		V_0 = (void*)L_2;
		void* L_3 = V_0;
		return (uint8_t*)(((void*)il2cpp_codegen_add((intptr_t)L_3, 2)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* FixedList64Bytes_1_get_buffer_m590958E1E714990BD451E67228F00F8DB98CC77E_fshared_inline (FixedList64Bytes_1_t35FB5765F58AD1AED7655A835751DC0A7BE278E3* __this, const RuntimeMethod* method) 
{
	void* V_0 = NULL;
	FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1* V_1 = NULL;
	{
		FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1* L_0 = (FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1*)(&__this->___data);
		V_1 = L_0;
		FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1* L_1 = V_1;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,FixedBytes64Align8_t84631A2A3E4A6CEF77C84D9B630BDF9720B945E1*,intptr_t,false,false>(L_1,NULL));
		V_0 = (void*)L_2;
		void* L_3 = V_0;
		return (uint8_t*)(((void*)il2cpp_codegen_add((intptr_t)L_3, 2)));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m25573278D92DAE1280EBFACAAB6BB50CFF4172CD_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1;
		L_1 = math_tzcnt_m9318C63D3F5FC4DE0F7ACB372307134237D52DA9_inline(L_0, NULL);
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_max_m5EE58D9462EC2A39BDE97B0C27BB14CF4A0DB651_inline (int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		int32_t L_1 = ___1_y;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_tzcnt_m9318C63D3F5FC4DE0F7ACB372307134237D52DA9_inline (uint32_t ___0_x, const RuntimeMethod* method) 
{
	LongDoubleUnion_t17011746129284B81F310F56E20D549A6F6710D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		uint32_t L_0 = ___0_x;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		return ((int32_t)32);
	}

IL_0006:
	{
		uint32_t L_1 = ___0_x;
		uint32_t L_2 = ___0_x;
		uint64_t L_3 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = (il2cpp_codegen_conv<uint32_t,int64_t,int64_t,false,false>(((-((int64_t)L_3))),NULL));
		___0_x = ((int32_t)((int32_t)L_1&(int32_t)L_4));
		(&V_0)->___doubleValue = (0.0);
		uint32_t L_5 = ___0_x;
		uint64_t L_6 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_5,NULL));
		(&V_0)->___longValue = ((int64_t)il2cpp_codegen_add(((int64_t)4841369599423283200LL), (int64_t)L_6));
		double* L_7 = (double*)(&(&V_0)->___doubleValue);
		double* L_8 = L_7;
		double L_9 = *(L_8);
		*(L_8) = ((double)il2cpp_codegen_subtract(L_9, (4503599627370496.0)));
		LongDoubleUnion_t17011746129284B81F310F56E20D549A6F6710D0 L_10 = V_0;
		int64_t L_11 = L_10.___longValue;
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)(L_11>>((int32_t)52))),NULL));
		return ((int32_t)il2cpp_codegen_subtract(L_12, ((int32_t)1023)));
	}
}
