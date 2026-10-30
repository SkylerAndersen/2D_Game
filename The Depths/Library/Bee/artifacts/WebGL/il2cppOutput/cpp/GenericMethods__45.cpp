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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*,T1,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,invokeData.method);
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

struct ActionQueryMatcher_tBA08813774EDD8920F40BFFC2F27B8329C7923DD;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A;
struct ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB;
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91;
struct ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812;
struct Data_t6F131ABB2DC3608FBC19EEE1D985484C670DE41A;
struct Dictionary_2_t6B4B40DA71BA0031F5736DF4459253299D8AF5F2;
struct Dictionary_2_t2974EF5566AC5D22A640DA03294166255F12D8A9;
struct Dictionary_2_tBCCCFBCAC02A3C03E3C84D75696D4860D7444A35;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_2_tAD3C25E447E01C5173D4EF30C14D5F69437441FD;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct HashSet_1_t4F9A3293A1900B4644ABD68CB0C220E392C709DE;
struct IConstructorWithCount_1_tC3042548D942C583F578CE19FEE25F9677510768;
struct IConstructor_1_t0A1BDA41023F58D7C236102BED6FD1C1B1D69338;
struct IEnumerable_1_tDA3DB14A8C53E0EFBEA9554E60CD303E733E672C;
struct IEnumerator_1_t45F3F7FD63BD81FEABDE4F646B59715C819D84FC;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IIndexedCollectionPropertyBagEnumerator_1_t10A3FE79120150E0A39D2649E6366925E3E7977A;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct IProperty_1_t47DF8E7CFAFA47596FCFDA6775C02B5B3C05AAE5;
struct ITypeConstructor_1_t38B0D0EFBEAA57884DFAE0A863E841E681DE2224;
struct LinkedList_1_t09F6FB09C766455615BBF59716D285304C49E0E7;
struct ListQueryMatcher_1_t7F21A0BB6BC47F1797366366A8E33731906C2940;
struct List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4;
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_t5C642E497E84A11D96D7387A1B546577D1804D43;
struct List_1_tB1D3AE6638063900DFF2ED463335EF8912FBBF7B;
struct List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63;
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tF9F2510E1F31EAAB4FF93BF5D2FD123A1BA401D8;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ObjectPool_1_tA6230762362A6BA6FEB38B9912D0463FB059A05A;
struct ObjectPool_1_t064DFEE48E51D3616541C16CD778864418851DCD;
struct ObjectPool_1_tBA82261436E949FCDE3517424082CE673E88B99C;
struct ObjectPool_1_t1BF53E631D2563ED2CFA4ED38919CC939FA2951C;
struct Tables_t6037A68AF76F1F1F11530A3316850BA0C19358EC;
struct TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6;
struct KeyValuePair_2U5BU5D_t146564E6A49A4F28A57A5ED01FB1A805D98D62E6;
struct CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct PropertyPathPartU5BU5D_t7994D542F14DDDDEABB1792C335C20149399AEBB;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct BufferedRTHandleSystem_t986BCD1C8C6AD8B93F8F768599D6CCCE7C6A7046;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
struct CameraHistoryItem_tF338960CEEF2FC4CA719474D573A411AFD4E0CDB;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CommandListManager_tE51C77834C44250F2CB8B9505F24D75EB559A764;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086;
struct ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C;
struct DebugDisplaySettingsUI_t35C42FEE551C9AF153EA6DCE9CE3A07C3554F1E2;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct DrawParams_t523864F415D78BD8BB14E8B7BD349594D6187443;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MeshManager_tC59FCD17654AD8564D8D69141EB25A5C0A1097CC;
struct MethodInfo_t;
struct MotionVectorsPersistentData_t077A3BA28B75576C897E6C794FE0ABF9DB8EBBBB;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PathRef_t76F7677792A14AF9D6A6EAB7F08C1A3DC2B27A55;
struct ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE;
struct RTHandleResourcePool_tB08B48917D5F811C85F6DDF0D751436D366CEF7A;
struct RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderData_t1ABE116B2B5E0409AC699E195922516606531DC2;
struct RenderGraph_t73ECE03B3CA3D0D17F1448D64AE020E81592AA1E;
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
struct ResolvedStyleAccess_t226CC840EBACEE31CE1139ED5F717532AFFAEB45;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E;
struct UIRRenderDeviceProfiler_tCD44B4CCCE69E3A6B91102D0014BC8D8FF9DD3B9;
struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93;
struct UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80;
struct UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F;
struct UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232;
struct UniversalRenderPipelineGlobalSettings_t895E975CCCA62A6DE4F820C0109953EF6D83B9F0;
struct UniversalRenderPipelineRuntimeTextures_tDA15F1E9BFCD85610D963AC723C03EB214D1EB86;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementSelectorData_t4C4043092A19A653CE8637C7659E36E0D3CC23A0;
struct VisualElementTransformData_t3DD575B5990B68FF956673EFF036171C86A38DF3;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8;
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
struct HistoryRequestDelegate_t463134FCC265006A8BD9F4B5EC9C58B0F6E5BF21;
struct RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB;
struct StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53;
struct Record_tD4D528E1BFF948E92C590DCE7A010BA356D50049;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24;
struct EqualityComparer_tF8FCE99C5DBB2F35D74728CB65346435381CFD5B;
struct Data_t6BD087CC0FA9794D342D260035A70E365224C66E;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraHistoryItem_tF338960CEEF2FC4CA719474D573A411AFD4E0CDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListPool_1_t97F6AE398781016115DBD2B6A4A443FD4FF438E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0;
IL2CPP_EXTERN_C String_t* _stringLiteral3477F5F15DC74EADC79ED337F3988716EE1670E9;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral48B5843525C3BEF16B7BE787788398005CFE4D6C;
IL2CPP_EXTERN_C String_t* _stringLiteral51A257776A6F5C5A85BB79B0C0B56E420A4C92B6;
IL2CPP_EXTERN_C String_t* _stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836;
IL2CPP_EXTERN_C String_t* _stringLiteral80F0368CFBC6552AC1C79FAE29101F4E1345BD2A;
IL2CPP_EXTERN_C String_t* _stringLiteralB17952A14247828F6A41642FA1C04CD14AE7C12A;
IL2CPP_EXTERN_C String_t* _stringLiteralB8468D10D94786B5C421B4ACD80BF46EAAA054DD;
IL2CPP_EXTERN_C String_t* _stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377;
IL2CPP_EXTERN_C String_t* _stringLiteralDF29F6D97E24431ECD5F1657989D9AD6B5FF2A0E;
IL2CPP_EXTERN_C String_t* _stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE;
IL2CPP_EXTERN_C String_t* _stringLiteralF1A902BAD5B9128E503E43473944346B65454351;
IL2CPP_EXTERN_C String_t* _stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_mBCAEF774AB0C0563A29C16F3A5305AE1A081C3BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListPool_1_Get_m7E32B4B150CCC0A396B9CFA7D60862F765DE7C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PooledObject_System_IDisposable_Dispose_m2C53DF93B31EF48C987A0FD22DEE119FDDD30E93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_com;
struct PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF_marshaled_pinvoke;

struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91  : public RuntimeObject
{
	Tables_t6037A68AF76F1F1F11530A3316850BA0C19358EC* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t146564E6A49A4F28A57A5ED01FB1A805D98D62E6* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E  : public RuntimeObject
{
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4  : public RuntimeObject
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ____items;
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
struct TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6  : public RuntimeObject
{
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___m_ExplicitConstructor;
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeId_1_tA0CD51A7295612B69C9B2252E8766D155C7C9CD4  : public RuntimeObject
{
};
struct BufferedRTHandleSystem_t986BCD1C8C6AD8B93F8F768599D6CCCE7C6A7046  : public RuntimeObject
{
	Dictionary_2_t2974EF5566AC5D22A640DA03294166255F12D8A9* ___m_RTEntries;
	RTHandleSystem_tAE496B31B56A77B4896E34576C961C3CA073998F* ___m_RTHandleSystem;
	bool ___m_DisposedValue;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086  : public RuntimeObject
{
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69  : public RuntimeObject
{
	bool ___U3CdisposedU3Ek__BackingField;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03  : public RuntimeObject
{
};
struct UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426  : public RuntimeObject
{
};
struct UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80  : public RuntimeObject
{
	ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* ___m_Items;
	int32_t ___m_Version;
	BufferedRTHandleSystem_t986BCD1C8C6AD8B93F8F768599D6CCCE7C6A7046* ___m_HistoryTextures;
	HistoryRequestDelegate_t463134FCC265006A8BD9F4B5EC9C58B0F6E5BF21* ___OnGatherHistoryRequests;
};
struct UnmanagedRefCountedListExtensions_tB999F9C3077EECD226CF96B133B380A21606C11C  : public RuntimeObject
{
};
struct Unsafe_t1B60DB2A3A2A631E537D045BDF121ECE5B06A3A0  : public RuntimeObject
{
};
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
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
struct Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Enumerator_t0DD71F3BC0FD44A9CF49504A30E7449BA17D4E63 
{
	List_1_t8C03D59AE9CBDEDECDE563570171B47DCB063CF4* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerable_1_t2B3DE6D978823100869CD2618FBDF5807E3B997E;
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct PooledObject_t6A17503D2E86923ADABDFFE03F1EA5163EAF076B 
{
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___m_ToReturn;
	ObjectPool_1_t064DFEE48E51D3616541C16CD778864418851DCD* ___m_Pool;
};
struct PooledObject_t33F04F3CD9199B92159CFD2774855EAC4584BE6A 
{
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___m_ToReturn;
	ObjectPool_1_tBA82261436E949FCDE3517424082CE673E88B99C* ___m_Pool;
};
typedef Il2CppFullySharedGenericStruct PooledObject_t09583705438F90A72D9CE4141A4126E91452D86C;
struct UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA 
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
struct CameraHistoryItem_tF338960CEEF2FC4CA719474D573A411AFD4E0CDB  : public ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086
{
	BufferedRTHandleSystem_t986BCD1C8C6AD8B93F8F768599D6CCCE7C6A7046* ___m_Owner;
	uint32_t ___m_TypeId;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
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
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
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
struct ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 
{
	int32_t ___m_Id;
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
struct UIntPtr_t 
{
	void* ____pointer;
};
struct UniqueStyleString_tE980AA033ABB00413A3139B42FF22750952DAECF 
{
	int32_t ___m_Id;
};
struct UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F  : public RenderPipeline_t3AF1E2046D27ABCEBA2279770AADA9F531073E69
{
	DebugDisplaySettingsUI_t35C42FEE551C9AF153EA6DCE9CE3A07C3554F1E2* ___m_DebugDisplaySettingsUI;
	UniversalRenderPipelineGlobalSettings_t895E975CCCA62A6DE4F820C0109953EF6D83B9F0* ___m_GlobalSettings;
	UniversalRenderPipelineRuntimeTextures_tDA15F1E9BFCD85610D963AC723C03EB214D1EB86* ___U3CruntimeTexturesU3Ek__BackingField;
	bool ___apvIsEnabled;
	UniversalRenderPipelineAsset_tE8A9AA6F030CC3B558CEA2EB54FFF4FC58CA6232* ___pipelineAsset;
	bool ___enableHDROutputOnce;
	bool ___warnedRuntimeSwitchHDROutputToSDROutput;
	Comparison_1_t49BE56523BDD8BC22EF3396960546FE16DE7B11A* ___cameraComparison;
};
struct UnmanagedComponentType_tE2EB2660135166C7DE40CA311E36A7E884E78A87 
{
	int32_t ___Size;
	int32_t ___Align;
};
struct UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 
{
	int32_t ___Index;
	int32_t ___Version;
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
struct DrawStatistics_t4AF06C67CEC7B97509EBAD48E3EE908301598E6F 
{
	int32_t ___currentFrameIndex;
	uint32_t ___totalIndices;
	uint32_t ___totalVertices;
	uint32_t ___commandCount;
	uint32_t ___skippedCommandCount;
	uint32_t ___drawCommandCount;
	uint32_t ___disableCommandCount;
	uint32_t ___materialSetCount;
	uint32_t ___drawRangeCount;
	uint32_t ___drawRangeCallCount;
	uint32_t ___immediateDraws;
	uint32_t ___stencilRefChanges;
};
struct Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 
{
	ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* ___storage;
	int32_t ___requestVersion;
	int32_t ___writeVersion;
};
struct Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99_marshaled_pinvoke
{
	ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* ___storage;
	int32_t ___requestVersion;
	int32_t ___writeVersion;
};
struct Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99_marshaled_com
{
	ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* ___storage;
	int32_t ___requestVersion;
	int32_t ___writeVersion;
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
struct ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC 
{
	intptr_t ____value;
};
struct ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 
{
	intptr_t ____value;
};
struct EnumeratorType_t213060DC702D8C5D779B12D7E6CE6AFC2D7BB6CA 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct IndexedCollectionPropertyBagEnumerator_1_t4F5D8DBBF5DBE0AA3D7844FD8C5BB756D8B8D479;
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct AntialiasingMode_tDF75AC7BDAF51FA550F528F7B798416ACB8D3487 
{
	int32_t ___value__;
};
struct AntialiasingQuality_t45B2A050F79EB8B705FED3F3F30A70942E71D605 
{
	int32_t ___value__;
};
struct CameraOverrideOption_tFE4F529A065C94484CFF2D27D4D7D2D8ADB145A9 
{
	int32_t ___value__;
};
struct CameraRenderType_tC686ABD18F67CA30E6DF217007744F509606A41D 
{
	int32_t ___value__;
};
struct CameraType_tCA1017DBE96964E1D967942FB98F152F14121FCD 
{
	int32_t ___value__;
};
struct CopyTextureSupport_t4EFE718FA2FC4A185D5011E063FAA1249550C644 
{
	int32_t ___value__;
};
struct CubemapFace_t300D6E2CD7DF60D44AA28338748B607677ED1D1B 
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
struct ExtraVertexChannels_t4E3FCA4F40D59436026CE26E25ABCBA1F0454C87 
{
	int32_t ___value__;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
};
struct LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A 
{
	int32_t ___m_IsOrthographic;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CameraPosition;
	float ___m_FieldOfView;
	float ___m_OrthoSize;
	int32_t ___m_CameraPixelHeight;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
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
struct RenderTextureCreationFlags_t1C01993691E5BA956575134696509089FE852F50 
{
	int32_t ___value__;
};
struct RenderTextureFormat_tB6F1ED5040395B46880CE00312D2FDDBF9EEB40F 
{
	int32_t ___value__;
};
struct RenderTextureMemoryless_tE3B7F3AE353C3E9ACF86076376EB862131D19A69 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 
{
	intptr_t ___m_Ptr;
};
struct ShadowSamplingMode_t8BE740C4258CFEDDBAC01FDC0438D8EE3F776BA8 
{
	int32_t ___value__;
};
struct StyleSelectorRelationship_tAABCDC80BF87B347ACE1C64B32C85B05268A7F9E 
{
	int32_t ___value__;
};
struct TemporalAAQuality_t03A8B3F777D54108A9CE21E79AB4C022968AD5F5 
{
	int32_t ___value__;
};
struct TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642 
{
	int32_t ___value__;
};
struct VRTextureUsage_t57FAA0077810142A461D74EDC5E33FC3D78BD2E8 
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
struct VolumeFrameworkUpdateMode_tCD9A8BEF3700F3AA490F1BB39EF8A88E94398627 
{
	int32_t ___value__;
};
struct Version_t8FE0D25C0F2D4540648156EC04916E1EA8F1ACDC 
{
	int32_t ___value__;
};
typedef Il2CppFullySharedGenericStruct Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE;
typedef Il2CppFullySharedGenericStruct PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D;
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
struct UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 
{
	List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63* ___m_StyleSelectors;
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___m_Parts;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element;
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers;
	int32_t ___m_Relationship;
	int32_t ___pseudoStatesMask;
	int32_t ___negatedPseudoStatesMask;
};
struct UQueryBuilder_1_t6828BA3E68052708C0E51F88744A863AF473B4A7 
{
	List_1_tB8CE94A1885E4D10B34A91CC9D21169286DC0A63* ___m_StyleSelectors;
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___m_Parts;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Element;
	List_1_t7C8CC805CEADA09DFAC2AC1A5D731D5EE956F6DC* ___m_Matchers;
	int32_t ___m_Relationship;
	int32_t ___pseudoStatesMask;
	int32_t ___negatedPseudoStatesMask;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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
struct RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 
{
	int32_t ___U3CwidthU3Ek__BackingField;
	int32_t ___U3CheightU3Ek__BackingField;
	int32_t ___U3CmsaaSamplesU3Ek__BackingField;
	int32_t ___U3CvolumeDepthU3Ek__BackingField;
	int32_t ___U3CmipCountU3Ek__BackingField;
	int32_t ____graphicsFormat;
	int32_t ___U3CstencilFormatU3Ek__BackingField;
	int32_t ___U3CdepthStencilFormatU3Ek__BackingField;
	int32_t ___U3CdimensionU3Ek__BackingField;
	int32_t ___U3CshadowSamplingModeU3Ek__BackingField;
	int32_t ___U3CvrUsageU3Ek__BackingField;
	int32_t ____flags;
	int32_t ___U3CmemorylessU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302  : public RuntimeObject
{
	intptr_t ___m_DefaultStencilState;
	intptr_t ___m_VertexDecl;
	int32_t ___m_ExtraVertexChannels;
	uint32_t ___m_ExtrasStride;
	ConvertMeshExtrasData_t1693BAC0EEE403DD216948512B0DAA8C88A05D6C* ___m_NoUserExtrasTemplate;
	List_1_t5C642E497E84A11D96D7387A1B546577D1804D43* ___m_MeshesPendingFree;
	CommandListManager_tE51C77834C44250F2CB8B9505F24D75EB559A764* ___m_CommandListManager;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Fences;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___m_ConstantProps;
	MaterialPropertyBlock_t2308669579033A857EFE6E4831909F638B27411D* ___m_BatchProps;
	uint32_t ___m_FrameIndex;
	MeshManager_tC59FCD17654AD8564D8D69141EB25A5C0A1097CC* ___m_MeshManager;
	DrawStatistics_t4AF06C67CEC7B97509EBAD48E3EE908301598E6F ___m_DrawStats;
	bool ___m_RenderingInProgress;
	DrawParams_t523864F415D78BD8BB14E8B7BD349594D6187443* ___m_DrawParams;
	TextureSlotManager_tB1F8E620AE296DE3728FAAFBE3CC85D2A176928D* ___m_TextureSlotManager;
	HashSet_1_t4F9A3293A1900B4644ABD68CB0C220E392C709DE* ___m_ScreenSpaceAlteredMaterials;
	UIRRenderDeviceProfiler_tCD44B4CCCE69E3A6B91102D0014BC8D8FF9DD3B9* ___m_Profiler;
	bool ___U3CbreakBatchesU3Ek__BackingField;
	bool ___U3CisFlatU3Ek__BackingField;
	bool ___U3CforceGammaRenderingU3Ek__BackingField;
	bool ___U3CdisposedU3Ek__BackingField;
};
struct StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53  : public RuntimeObject
{
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination;
	int32_t ___mipLevel;
	int32_t ___face;
	int32_t ___slice;
	bool ___isPreview;
};
struct Settings_t3BEFDFF2C1A3D3A215DAF7B76E735B1BFB946C92 
{
	int32_t ___m_Quality;
	float ___m_FrameInfluence;
	float ___m_JitterScale;
	float ___m_MipBias;
	float ___m_VarianceClampScale;
	float ___m_ContrastAdaptiveSharpening;
	int32_t ___resetHistoryFrames;
	int32_t ___jitterFrameCountOffset;
};
struct CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86 
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___m_Context;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera;
};
struct CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86_marshaled_pinvoke
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___m_Context;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera;
};
struct CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86_marshaled_com
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___m_Context;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera;
};
struct ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70 
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___m_Context;
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___m_Cameras;
};
struct ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70_marshaled_pinvoke
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___m_Context;
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___m_Cameras;
};
struct ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70_marshaled_com
{
	ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___m_Context;
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___m_Cameras;
};
struct SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24  : public RuntimeObject
{
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___destination;
	int32_t ___mipLevel;
	int32_t ___face;
	int32_t ___slice;
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_tAD3C25E447E01C5173D4EF30C14D5F69437441FD  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
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
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
struct UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___m_MemoryLabel;
	Data_t6BD087CC0FA9794D342D260035A70E365224C66E* ___m_Data;
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
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	uint32_t ___m_NonSerializedVersion;
};
struct LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA 
{
	int32_t ___m_Manager;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Nodes;
	UnmanagedDataStore_t66CFDF2DBB3C86F8A58F5B3EBEE5E9537BDF2759 ___m_Configs;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E  : public RuntimeObject
{
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 ___U3CPathU3Ek__BackingField;
	Type_t* ___U3CresolvedTypeU3Ek__BackingField;
	int32_t ___U3CReturnCodeU3Ek__BackingField;
	Type_t* ___m_LastType;
	int32_t ___m_PathIndex;
};
struct LayoutNode_tADF081B0F16F76B66459DE38F3AD8EC098F22CBE 
{
	LayoutDataAccess_t99AA56349D0BC76F3742B927F4F0DDB21511FBBA ___m_Access;
	UnmanagedDataHandle_t5295F32E122AF2E09BF729381A22BD86B72C1DD1 ___m_Handle;
};
struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	bool ___m_RenderShadows;
	int32_t ___m_RequiresDepthTextureOption;
	int32_t ___m_RequiresOpaqueTextureOption;
	int32_t ___m_CameraType;
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___m_Cameras;
	int32_t ___m_RendererIndex;
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_VolumeLayerMask;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_VolumeTrigger;
	int32_t ___m_VolumeFrameworkUpdateModeOption;
	bool ___m_RenderPostProcessing;
	int32_t ___m_Antialiasing;
	int32_t ___m_AntialiasingQuality;
	bool ___m_StopNaN;
	bool ___m_Dithering;
	bool ___m_ClearDepth;
	bool ___m_AllowXRRendering;
	bool ___m_AllowHDROutput;
	bool ___m_UseScreenCoordOverride;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_ScreenSizeOverride;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_ScreenCoordScaleBias;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera;
	bool ___m_RequiresDepthTexture;
	bool ___m_RequiresColorTexture;
	MotionVectorsPersistentData_t077A3BA28B75576C897E6C794FE0ABF9DB8EBBBB* ___m_MotionVectorsPersistentData;
	UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80* ___m_History;
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___m_AllCamerasTemp;
	Settings_t3BEFDFF2C1A3D3A215DAF7B76E735B1BFB946C92 ___m_TaaSettings;
	VolumeStack_t5DE94743BDB63D97EF5587DBDAE46468233F36E8* ___m_VolumeStack;
	int32_t ___m_Version;
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
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct List_1_tD2FA3273746E404D72561E8324608D18B52B533E_StaticFields
{
	CameraU5BU5D_t1506EBA524A07AD1066D6DD4D7DFC6721F1AC26B* ___s_emptyArray;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct TypeId_1_tA0CD51A7295612B69C9B2252E8766D155C7C9CD4_StaticFields
{
	uint32_t ___value;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields
{
	ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* ___s_TypeConstructors;
	MethodInfo_t* ___s_CreateTypeConstructor;
	ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB* ___s_CachedResolvedName;
	ObjectPool_1_tA6230762362A6BA6FEB38B9912D0463FB059A05A* ___s_Builders;
	RuntimeObject* ___syncedPoolObject;
};
struct UQueryExtensions_t1271382882DF1B8FEEDE5EFA510405ABA7BD3426_StaticFields
{
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementEmptyQuery;
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementNameQuery;
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementClassQuery;
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementNameAndClassQuery;
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeQuery;
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndNameQuery;
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndClassQuery;
	UQueryState_1_t9A60C9E48C10156AE4F8BF8D5C4657061CEF02BA ___SingleElementTypeAndNameAndClassQuery;
};
struct UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80_StaticFields
{
	uint32_t ___s_TypeCount;
};
struct Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields
{
	RuntimeObject* ___TypeConstructor;
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
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_StaticFields
{
	int32_t ___k_UpscalerHash_Point;
	int32_t ___k_UpscalerHash_Linear;
	int32_t ___k_UpscalerHash_FSR1;
	int32_t ___k_UpscalerHash_STP;
	RenderGraph_t73ECE03B3CA3D0D17F1448D64AE020E81592AA1E* ___s_RenderGraph;
	RTHandleResourcePool_tB08B48917D5F811C85F6DDF0D751436D366CEF7A* ___s_RTHandlePool;
	bool ___requireOffscreenUICoverPrepass;
	bool ___offscreenUIRenderedInCurrentFrame;
	LODParameters_t54D2AA0FD8E53BCF51D7A42BC1A72FCA8C78A08A ___cachedLODParameters;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___k_DefaultLightPosition;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___k_DefaultLightColor;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___k_DefaultLightAttenuation;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___k_DefaultLightSpotDirection;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___k_DefaultLightsProbeChannel;
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___s_ShadowBiasData;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___s_ShadowResolutionData;
	RequestLightsDelegate_t585505A75681754DA53BE119D8611B605F0243BB* ___s_LightsDelegate;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36_StaticFields
{
	ShaderTagId_t453E2085B5EE9448FF75E550CAB111EFF690ECB0 ___kRenderTypeTag;
};
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	int32_t ___GenerateAllMips;
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
struct UIRenderDevice_t59628CBA89B4617E832C2B270E1C1A3931D01302_StaticFields
{
	MemoryLabel_t29CE7AB312D2ED888B444BBE5D452F7132EC9DB2 ___k_NoUserExtrasLabel;
	LinkedList_1_t09F6FB09C766455615BBF59716D285304C49E0E7* ___m_DeviceFreeQueue;
	int32_t ___m_ActiveDeviceCount;
	bool ___m_SubscribedToNotifications;
	bool ___m_SynchronousFree;
	int32_t ___s_GradientSettingsTexID;
	int32_t ___s_ShaderInfoTexID;
	int32_t ___s_XformPagePosID;
	int32_t ___s_ClipPagePosID;
	int32_t ___s_OpacityPagePosID;
	int32_t ___s_ColorPagePosID;
	int32_t ___s_TextCorePagePosID;
	int32_t ___s_ElementInfoPagePosID;
	int32_t ___s_PageTablesID;
	int32_t ___s_SkipGammaConversionID;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerFree;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerAdvanceFrame;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerFence;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_MarkerBeforeDraw;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_EvaluationFlagsToTextureSlotCount;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_TextureSlotCountToEvaluationFlags;
};
struct CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86_StaticFields
{
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___beginCameraRenderingSampler;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___endCameraRenderingSampler;
};
struct ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70_StaticFields
{
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___beginContextRenderingSampler;
	ProfilingSampler_t420D4672EDB44E0EF980B31ADFD9E5747200FECE* ___endContextRenderingSampler;
};
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender;
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender;
};
struct UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_StaticFields
{
	List_1_tF9F2510E1F31EAAB4FF93BF5D2FD123A1BA401D8* ___s_CachedVolumeStacks;
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
struct ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 m_Items[1];

	inline Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___storage), (void*)NULL);
	}
	inline Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___storage), (void*)NULL);
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBag_GetPropertyBag_TisIl2CppFullySharedGenericAny_m640BEA3D9C9EB8D8E5120B304862BCC23F0D6C1B_fshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261_fshared (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_fshared_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_fshared (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_TisIl2CppFullySharedGenericAny_m85B819FE60F560C72A51E57851E212B324CD2783_fshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m74F8D3665A67BB654E190BCA1E48F1D14CD61371_fshared (TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_mB9751D1BE987E51A6B1B2D2BF2851678004FF269_fshared (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812* __this, Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304_fshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckCanBeInstantiated_TisIl2CppFullySharedGenericAny_mF4DC2D1251C15CC68D20D7959AEBA5D8192C4004_fshared (RuntimeObject* ___0_constructor, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_fshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_fshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UQueryBuilder_1__ctor_mE2CCD3D99652CAD0320DF1F865F83FCD9CF738EA_gshared (UQueryBuilder_1_t6828BA3E68052708C0E51F88744A863AF473B4A7* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_visualElement, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UQueryBuilder_1_t6828BA3E68052708C0E51F88744A863AF473B4A7 UQueryBuilder_1_OfType_TisIl2CppSharedGenericObject_mE8043F3B2DC309A3BE294B4AE547681157E11EA2_gshared (UQueryBuilder_1_t6828BA3E68052708C0E51F88744A863AF473B4A7* __this, String_t* ___0_name, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_classes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_fshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PooledObject_t33F04F3CD9199B92159CFD2774855EAC4584BE6A ListPool_1_Get_m2330D2B732700530346FBE6FF975F90E1E064EED_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A** ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledObject_System_IDisposable_Dispose_mE30B832BAF76D56EB47242AFF840ADE69CAAEC94_fshared (PooledObject_t09583705438F90A72D9CE4141A4126E91452D86C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisIl2CppFullySharedGenericAny_m8FE39C82005602F4FEA27DC201600DABE2481BD1_fshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Il2CppFullySharedGenericAny* ___0_component, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnmanagedRefCountedList_1_get_IsEmpty_mB1BF30169E77B2C7AA4C2D05D91445827E62BE2D_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedRefCountedList_1_UnsafeRelease_mD17175272CAD75247D69B8005777F263A6CA818E_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC UnmanagedRefCountedList_1_get_Empty_mF30A4199DBFFC6A1CEE63EDC4667AD9C3F59A4D0_fshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedRefCountedListExtensions_PrepareWrite_TisIl2CppFullySharedGenericStruct_mE0BCB9507B8C736AC77C699536E4C4FC7454A283_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* ___0_self, int32_t ___1_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnmanagedRefCountedList_1_get_Item_m1656338369EC4E02E5134C83B9F0976EB9ACA55F_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_fshared_inline (ReadOnlySpan_1_tC416A5627E04F69CA2947A2A13F0A1DF096CABAC* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* UnmanagedRefCountedList_1_get_UnsafeRefCount_m6C212A28A6097E4E5A853E7B482F8BC3D6291488_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_fshared (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedRefCountedListExtensions_Clear_TisIl2CppFullySharedGenericStruct_m6EFE521D8B6AA05E101FE1E54873BBCD9C8FF002_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* ___0_self, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedRefCountedList_1__ctor_m1A1BC9ABD2A9D7B9C7434073D1F52063C8F92056_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnmanagedRefCountedList_1_get_UnsafeCount_mB26A16BA73F814B21A7B219936FD2ED30B4D6E3D_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_fshared_inline (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypePathVisitor_IsLastPartReached_m2C04A966F490D2B80E49E4AB37B2248C83C21BE8 (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD (PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
inline RuntimeObject* PropertyBag_GetPropertyBag_TisIl2CppFullySharedGenericAny_m640BEA3D9C9EB8D8E5120B304862BCC23F0D6C1B (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBag_GetPropertyBag_TisIl2CppFullySharedGenericAny_m640BEA3D9C9EB8D8E5120B304862BCC23F0D6C1B_fshared)(method);
}
inline void PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261 (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* __this, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*, Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261_fshared)((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)__this, il2cppRetVal, method);
}
inline RuntimeObject* Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_fshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21 (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853 (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyPathPart_get_IsIndex_mC4A3A228EE79B000961F13A79AA773F1A1A050AF (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) ;
inline bool Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*, const RuntimeMethod*))Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TypePathVisitor_get_ReturnCode_m7A088F27D0126D165F2C83538853810302CAA574_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, int32_t ___0_value, const RuntimeMethod* method) ;
inline RuntimeObject* TypeUtility_GetTypeConstructor_TisIl2CppFullySharedGenericAny_m85B819FE60F560C72A51E57851E212B324CD2783 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_GetTypeConstructor_TisIl2CppFullySharedGenericAny_m85B819FE60F560C72A51E57851E212B324CD2783_fshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void TypeConstructor_1__ctor_m74F8D3665A67BB654E190BCA1E48F1D14CD61371 (TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6*, const RuntimeMethod*))TypeConstructor_1__ctor_m74F8D3665A67BB654E190BCA1E48F1D14CD61371_fshared)(__this, method);
}
inline void ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1 (ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* __this, Type_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_mB9751D1BE987E51A6B1B2D2BF2851678004FF269_fshared)((ConcurrentDictionary_2_t6DF554984593E2F9932FAFBF9E1AFD30D1ED0812*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304_fshared)(method);
}
inline void TypeUtility_CheckCanBeInstantiated_TisIl2CppFullySharedGenericAny_mF4DC2D1251C15CC68D20D7959AEBA5D8192C4004 (RuntimeObject* ___0_constructor, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, const RuntimeMethod*))TypeUtility_CheckCanBeInstantiated_TisIl2CppFullySharedGenericAny_mF4DC2D1251C15CC68D20D7959AEBA5D8192C4004_fshared)(___0_constructor, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckIsAssignableFrom_m284900A7E86ACD68227E5E3DCC9430EEC7E1E03E (Type_t* ___0_type, Type_t* ___1_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckCanBeInstantiated_mB2C921D41DC94D83758FC5CFDFEE26911F62B14F (RuntimeObject* ___0_constructor, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline RuntimeObject* PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8_fshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___0_elementType, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E (Type_t* ___0_type, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline)(method);
}
inline NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0 (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0_fshared)(___0_dataPointer, ___1_stride, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
inline void UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486 (UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_visualElement, const RuntimeMethod* method)
{
	((  void (*) (UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139*, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*, const RuntimeMethod*))UQueryBuilder_1__ctor_mE2CCD3D99652CAD0320DF1F865F83FCD9CF738EA_gshared)(__this, ___0_visualElement, method);
}
inline UQueryBuilder_1_t6828BA3E68052708C0E51F88744A863AF473B4A7 UQueryBuilder_1_OfType_TisIl2CppSharedGenericObject_mF9AC50830240F1F79618CFCCFA15577ECC67F039 (UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139* __this, String_t* ___0_name, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_classes, const RuntimeMethod* method)
{
	return ((  UQueryBuilder_1_t6828BA3E68052708C0E51F88744A863AF473B4A7 (*) (UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139*, String_t*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))UQueryBuilder_1_OfType_TisIl2CppSharedGenericObject_mE8043F3B2DC309A3BE294B4AE547681157E11EA2_gshared)(__this, ___0_name, ___1_classes, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniversalCameraHistory_IsValid_m0ED8566EE9ECCD7667C5DDA30DAC3098D87EEB7D (UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniversalCameraHistory_IsValidRequest_m0936A6432FCF23AC7B9067F6FD4C9B9296AD4DBA (UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80* __this, int32_t ___0_i, const RuntimeMethod* method) ;
inline Il2CppSharedGenericObject* Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3 (const RuntimeMethod* method)
{
	Il2CppSharedGenericObject* il2cppRetVal;
	((  void (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))Activator_CreateInstance_TisIl2CppFullySharedGenericAny_m68F3B5F53DBB1741E028DA541BE07A3D2382138D_fshared)((Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_ceilpow2_m55F757254B1339A2FAC288807A06BFF24898B214_inline (uint32_t ___0_x, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_max_mC58900240F2A88F08AD67CA1F3F4360987100521_inline (int64_t ___0_x, int64_t ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 RenderTexture_get_descriptor_m2FABD5CF6CCF410D1311FCBC7C9D9ECDEE9C7CC2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_colorFormat_m61B0FA4FCDE8A0F8A843DD6BF74097C21021C4FE (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_volumeDepth_mEF9610D1C14182417A01B7243DEE6B559A13B34D_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_dimension_mCE9A4A08454BB2D9DFE3E505EC336FD480078F39_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___0_x, double ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* RenderTexture_GetTemporary_mA8C827B80D3C07D0B8CDF7F5270FB5D3E53DD235 (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 ___0_desc, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_cameraType_m20ECE54572F8B7CAF5D32193B65F3D7812E20F17 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_exists, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_value, const RuntimeMethod* method) ;
inline void List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_fshared)(__this, method);
}
inline void List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_inline (List_1_tD2FA3273746E404D72561E8324608D18B52B533E* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_fshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
inline PooledObject_t6A17503D2E86923ADABDFFE03F1EA5163EAF076B ListPool_1_Get_m7E32B4B150CCC0A396B9CFA7D60862F765DE7C15 (List_1_tD2FA3273746E404D72561E8324608D18B52B533E** ___0_value, const RuntimeMethod* method)
{
	return ((  PooledObject_t6A17503D2E86923ADABDFFE03F1EA5163EAF076B (*) (List_1_tD2FA3273746E404D72561E8324608D18B52B533E**, const RuntimeMethod*))ListPool_1_Get_m2330D2B732700530346FBE6FF975F90E1E064EED_fshared)(___0_value, method);
}
inline void PooledObject_System_IDisposable_Dispose_m2C53DF93B31EF48C987A0FD22DEE119FDDD30E93 (PooledObject_t6A17503D2E86923ADABDFFE03F1EA5163EAF076B* __this, const RuntimeMethod* method)
{
	((  void (*) (PooledObject_t6A17503D2E86923ADABDFFE03F1EA5163EAF076B*, const RuntimeMethod*))PooledObject_System_IDisposable_Dispose_mE30B832BAF76D56EB47242AFF840ADE69CAAEC94_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextRenderingScope__ctor_m59F5F0D796371C51FC2BD08A9E2DBC0EA6C32003 (ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* ___1_cameras, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContextRenderingScope_Dispose_mB51673C299E1DAA325206945F442709AF153868D (ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRenderingScope__ctor_mB6900429BFF6B78AF2325B36B44C96101329BD2C (CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraRenderingScope_Dispose_m7E450211F8C22CDF76970E0BC4FA3832ECE0E3C5 (CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
inline bool GameObject_TryGetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_mBCAEF774AB0C0563A29C16F3A5305AE1A081C3BD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93**, const RuntimeMethod*))GameObject_TryGetComponent_TisIl2CppFullySharedGenericAny_m8FE39C82005602F4FEA27DC201600DABE2481BD1_fshared)(__this, ___0_component, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniversalRenderPipeline_RenderSingleCameraInternal_mF40EDE5547E0DDE493AE06455C9928313D54E1AB (ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93** ___2_additionalCameraData, bool ___3_isLastBaseCamera, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718 (Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_src, int32_t ___1_srcElement, int32_t ___2_srcMip, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___3_dst, int32_t ___4_dstElement, int32_t ___5_dstMip, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_GetName_m05FE85181853F756BA6BB2C033DD3590E6114D29 (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_rt, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2 (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___0_temp, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_fshared_inline)(method);
}
inline bool UnmanagedRefCountedList_1_get_IsEmpty_mB1BF30169E77B2C7AA4C2D05D91445827E62BE2D (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*, const RuntimeMethod*))UnmanagedRefCountedList_1_get_IsEmpty_mB1BF30169E77B2C7AA4C2D05D91445827E62BE2D_fshared)(__this, method);
}
inline void UnmanagedRefCountedList_1_UnsafeRelease_mD17175272CAD75247D69B8005777F263A6CA818E (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, const RuntimeMethod* method)
{
	((  void (*) (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*, const RuntimeMethod*))UnmanagedRefCountedList_1_UnsafeRelease_mD17175272CAD75247D69B8005777F263A6CA818E_fshared)(__this, method);
}
inline UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC UnmanagedRefCountedList_1_get_Empty_mF30A4199DBFFC6A1CEE63EDC4667AD9C3F59A4D0 (const RuntimeMethod* method)
{
	return ((  UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC (*) (const RuntimeMethod*))UnmanagedRefCountedList_1_get_Empty_mF30A4199DBFFC6A1CEE63EDC4667AD9C3F59A4D0_fshared)(method);
}
inline int32_t List_1_get_Count_m694661D4762DEC8528CADC41486D2BA8C07A6DA1_inline (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline void UnmanagedRefCountedListExtensions_PrepareWrite_TisIl2CppFullySharedGenericStruct_mE0BCB9507B8C736AC77C699536E4C4FC7454A283 (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* ___0_self, int32_t ___1_count, const RuntimeMethod* method)
{
	((  void (*) (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*, int32_t, const RuntimeMethod*))UnmanagedRefCountedListExtensions_PrepareWrite_TisIl2CppFullySharedGenericStruct_mE0BCB9507B8C736AC77C699536E4C4FC7454A283_fshared)(___0_self, ___1_count, method);
}
inline Il2CppFullySharedGenericStruct* UnmanagedRefCountedList_1_get_Item_m1656338369EC4E02E5134C83B9F0976EB9ACA55F (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*, int32_t, const RuntimeMethod*))UnmanagedRefCountedList_1_get_Item_m1656338369EC4E02E5134C83B9F0976EB9ACA55F_fshared)(__this, ___0_index, method);
}
inline void List_1_get_Item_mA509276450ACC238E830B9B83B85185FBEF3C254 (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, il2cppRetVal, method);
}
inline int32_t ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m4430960CA0D0458B1A1106DD246CA9AB746B5DB2_fshared_inline)(__this, method);
}
inline Il2CppFullySharedGenericStruct* ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25*, int32_t, const RuntimeMethod*))ReadOnlySpan_1_get_Item_m9143C9CF6493AF0AD667C5BDEEF1D22895283F77_fshared_inline)(__this, ___0_index, method);
}
inline int32_t* UnmanagedRefCountedList_1_get_UnsafeRefCount_m6C212A28A6097E4E5A853E7B482F8BC3D6291488 (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, const RuntimeMethod* method)
{
	return ((  int32_t* (*) (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*, const RuntimeMethod*))UnmanagedRefCountedList_1_get_UnsafeRefCount_m6C212A28A6097E4E5A853E7B482F8BC3D6291488_fshared)(__this, method);
}
inline int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_fshared_inline)(__this, method);
}
inline void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, il2cppRetVal, method);
}
inline void Func_2_Invoke_m3C6E3FE19083ED6CD16AF5FF6945C1EC49121BE7 (Func_2_tAD3C25E447E01C5173D4EF30C14D5F69437441FD* __this, Il2CppFullySharedGenericAny ___0_arg, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Func_2_Invoke_m31CAC166FDC80DC5AE52A5AEFFEE2D9B27A1CA3F_fshared)((Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*)__this, ___0_arg, il2cppRetVal, method);
}
inline void UnmanagedRefCountedListExtensions_Clear_TisIl2CppFullySharedGenericStruct_m6EFE521D8B6AA05E101FE1E54873BBCD9C8FF002 (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* ___0_self, const RuntimeMethod* method)
{
	((  void (*) (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*, const RuntimeMethod*))UnmanagedRefCountedListExtensions_Clear_TisIl2CppFullySharedGenericStruct_m6EFE521D8B6AA05E101FE1E54873BBCD9C8FF002_fshared)(___0_self, method);
}
inline void UnmanagedRefCountedList_1__ctor_m1A1BC9ABD2A9D7B9C7434073D1F52063C8F92056 (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*, int32_t, const RuntimeMethod*))UnmanagedRefCountedList_1__ctor_m1A1BC9ABD2A9D7B9C7434073D1F52063C8F92056_fshared)(__this, ___0_size, method);
}
inline int32_t UnmanagedRefCountedList_1_get_UnsafeCount_mB26A16BA73F814B21A7B219936FD2ED30B4D6E3D (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*, const RuntimeMethod*))UnmanagedRefCountedList_1_get_UnsafeCount_mB26A16BA73F814B21A7B219936FD2ED30B4D6E3D_fshared)(__this, method);
}
inline int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline)(method);
}
inline void List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33 (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_AddWithResize_mA6DFDBC2B22D6318212C6989A34784BD8303AF33_fshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_item, method);
}
inline int32_t UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexOutOfRangeException_m86F753A24E2765A35546BA6352A7E4F0BB8A66B5 (const RuntimeMethod* method) ;
inline int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tA18DF2C95F416AEB06D5F0702F37CBD85E8A7FB8_m934B08DAF1EA7B249CA769E8DCA4EBAC6AEB1885_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypePathVisitor_Unity_Properties_ITypeVisitor_Visit_TisIl2CppFullySharedGenericAny_m9560271BB2A99338112F66C6E02FB3FCA188C26F_fshared (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_Enumerator_tF2F1300228BDE618E9AD4668560CB70B24BF2D02 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const uint32_t SizeOf_PropertyCollection_1_tDD0FD322FF714C28A6AF39D2FF01BF6350E0F48D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	void* L_14 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 5)));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE L_13 = alloca(SizeOf_Enumerator_tF2F1300228BDE618E9AD4668560CB70B24BF2D02);
	const PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D L_12 = alloca(SizeOf_PropertyCollection_1_tDD0FD322FF714C28A6AF39D2FF01BF6350E0F48D);
	PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF V_0;
	memset((&V_0), 0, sizeof(V_0));
	PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE V_5 = alloca(SizeOf_Enumerator_tF2F1300228BDE618E9AD4668560CB70B24BF2D02);
	memset(V_5, 0, SizeOf_Enumerator_tF2F1300228BDE618E9AD4668560CB70B24BF2D02);
	PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D V_6 = alloca(SizeOf_PropertyCollection_1_tDD0FD322FF714C28A6AF39D2FF01BF6350E0F48D);
	memset(V_6, 0, SizeOf_PropertyCollection_1_tDD0FD322FF714C28A6AF39D2FF01BF6350E0F48D);
	RuntimeObject* V_7 = NULL;
	Type_t* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	Type_t* V_10 = NULL;
	Type_t* V_11 = NULL;
	Type_t* V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	RuntimeObject* G_B18_0 = NULL;
	RuntimeObject* G_B17_0 = NULL;
	{
		bool L_0;
		L_0 = TypePathVisitor_IsLastPartReached_m2C04A966F490D2B80E49E4AB37B2248C83C21BE8(__this, NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_1;
		L_1 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
		V_1 = L_1;
		int32_t L_2 = __this->___m_PathIndex;
		V_2 = L_2;
		int32_t L_3 = V_2;
		__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_2;
		PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_5;
		L_5 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_1), L_4, NULL);
		V_0 = L_5;
		__this->___m_LastType = (Type_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)(Type_t*)NULL);
		int32_t L_6;
		L_6 = PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline((&V_0), NULL);
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_8 = V_3;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_013b;
		}
	}
	{
		goto IL_0174;
	}

IL_0047:
	{
		RuntimeObject* L_9;
		L_9 = PropertyBag_GetPropertyBag_TisIl2CppFullySharedGenericAny_m640BEA3D9C9EB8D8E5120B304862BCC23F0D6C1B(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_4 = L_9;
		RuntimeObject* L_10 = V_4;
		if (L_10)
		{
			goto IL_0053;
		}
	}
	{
		return;
	}

IL_0053:
	{
		RuntimeObject* L_11 = V_4;
		InterfaceActionInvoker1Invoker< PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 1), L_11, (PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)L_12);
		il2cpp_codegen_memcpy(V_6, L_12, SizeOf_PropertyCollection_1_tDD0FD322FF714C28A6AF39D2FF01BF6350E0F48D);
		PropertyCollection_1_GetEnumerator_mD933057B218712B4B2DAFBF6E423497F0D578261((PropertyCollection_1_t5813F70F52FEC5B64A85FE040869894365CCF94D*)V_6, (Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)L_13, il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(V_5, L_13, SizeOf_Enumerator_tF2F1300228BDE618E9AD4668560CB70B24BF2D02);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_012d:
			{
				Il2CppConstrainedCallData L_15;
				Il2CppMethodPointer L_16 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 5), il2cpp_rgctx_method(method->rgctx_data, 8), (void*)(Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_5, &L_15, L_14);
				typedef void ( *func_L_17)(void*,const RuntimeMethod*);
				((func_L_17)L_16)(L_15.thisPtr,L_15.method);
				return;
			}
		});
		try
		{
			{
				goto IL_011f_1;
			}

IL_006a_1:
			{
				RuntimeObject* L_18;
				L_18 = Enumerator_get_Current_mA7D722D310859E84FC0C9A2F8DBCAF8BA78F1D54_inline((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_5, il2cpp_rgctx_method(method->rgctx_data, 6));
				V_7 = L_18;
				RuntimeObject* L_19 = V_7;
				String_t* L_20;
				L_20 = InterfaceFuncInvoker0< String_t* >::Invoke(0, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				String_t* L_21;
				L_21 = PropertyPathPart_get_Name_mFCEAE41CA7D7FAD0A0D7EB6D0B371AEAD7CE5A21((&V_0), NULL);
				bool L_22;
				L_22 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_20, L_21, NULL);
				if (L_22)
				{
					goto IL_011f_1;
				}
			}
			{
				RuntimeObject* L_23 = V_7;
				Type_t* L_24;
				L_24 = InterfaceFuncInvoker0< Type_t* >::Invoke(1, IProperty_t9DAAF3D1ACD042DA2D622152506F58CE625EF697_il2cpp_TypeInfo_var, (RuntimeObject*)L_23);
				Type_t* L_25 = L_24;
				V_11 = L_25;
				__this->___m_LastType = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_25);
				Type_t* L_26 = V_11;
				V_8 = L_26;
				Type_t* L_27 = V_8;
				RuntimeObject* L_28;
				L_28 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_27, NULL);
				V_9 = L_28;
				RuntimeObject* L_29 = V_9;
				if (!L_29)
				{
					goto IL_00b9_1;
				}
			}
			{
				RuntimeObject* L_30 = V_9;
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, L_30, __this);
				goto IL_018c;
			}

IL_00b9_1:
			{
				Type_t* L_31 = V_8;
				Type_t* L_32;
				L_32 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_31, NULL);
				V_10 = L_32;
				Type_t* L_33 = V_10;
				CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
				bool L_34;
				L_34 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_33, (Type_t*)NULL, NULL);
				if (!L_34)
				{
					goto IL_012b_1;
				}
			}
			{
				bool L_35;
				L_35 = TypePathVisitor_IsLastPartReached_m2C04A966F490D2B80E49E4AB37B2248C83C21BE8(__this, NULL);
				if (!L_35)
				{
					goto IL_00d9_1;
				}
			}
			{
				goto IL_018c;
			}

IL_00d9_1:
			{
				PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_36;
				L_36 = TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline(__this, NULL);
				V_1 = L_36;
				int32_t L_37 = __this->___m_PathIndex;
				V_2 = L_37;
				int32_t L_38 = V_2;
				__this->___m_PathIndex = ((int32_t)il2cpp_codegen_add(L_38, 1));
				int32_t L_39 = V_2;
				PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF L_40;
				L_40 = PropertyPath_get_Item_mB0EFC5EAEB2A48E02906CDDC6435FDF4032EFAFD((&V_1), L_39, NULL);
				V_0 = L_40;
				bool L_41;
				L_41 = PropertyPathPart_get_IsIndex_mC4A3A228EE79B000961F13A79AA773F1A1A050AF((&V_0), NULL);
				if (!L_41)
				{
					goto IL_012b_1;
				}
			}
			{
				Type_t* L_42 = V_10;
				__this->___m_LastType = L_42;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_42);
				Type_t* L_43 = V_10;
				RuntimeObject* L_44;
				L_44 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_43, NULL);
				RuntimeObject* L_45 = L_44;
				if (L_45)
				{
					G_B18_0 = L_45;
					goto IL_0117_1;
				}
				G_B17_0 = L_45;
			}
			{
				goto IL_018c;
			}

IL_0117_1:
			{
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, G_B18_0, __this);
				goto IL_018c;
			}

IL_011f_1:
			{
				bool L_46;
				L_46 = Enumerator_MoveNext_mB0957ADFA01BC52170FB018BD2AD59C2E163A22F((Enumerator_t4DEB327DC99C2F4A070D514E9186C87B10047DCE*)V_5, il2cpp_rgctx_method(method->rgctx_data, 7));
				if (L_46)
				{
					goto IL_006a_1;
				}
			}

IL_012b_1:
			{
				goto IL_0174;
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

IL_013b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 9)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		Type_t* L_49;
		L_49 = TypePathVisitor_GetElementType_mDA16AD8485546D4EC31BB92ABB5B7C2762935853(L_48, NULL);
		V_12 = L_49;
		Type_t* L_50 = V_12;
		bool L_51;
		L_51 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_50, (Type_t*)NULL, NULL);
		if (!L_51)
		{
			goto IL_0174;
		}
	}
	{
		Type_t* L_52 = V_12;
		__this->___m_LastType = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastType), (void*)L_52);
		Type_t* L_53 = V_12;
		RuntimeObject* L_54;
		L_54 = PropertyBag_GetPropertyBag_m99728C198B7CB2CE6CCCF1538AD8325BCE255472(L_53, NULL);
		V_13 = L_54;
		RuntimeObject* L_55 = V_13;
		if (!L_55)
		{
			goto IL_0174;
		}
	}
	{
		RuntimeObject* L_56 = V_13;
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0, IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2_il2cpp_TypeInfo_var, L_56, __this);
		return;
	}

IL_0174:
	{
		bool L_57;
		L_57 = TypePathVisitor_IsLastPartReached_m2C04A966F490D2B80E49E4AB37B2248C83C21BE8(__this, NULL);
		if (!L_57)
		{
			goto IL_017d;
		}
	}
	{
		return;
	}

IL_017d:
	{
		int32_t L_58;
		L_58 = TypePathVisitor_get_ReturnCode_m7A088F27D0126D165F2C83538853810302CAA574_inline(__this, NULL);
		if (L_58)
		{
			goto IL_018c;
		}
	}
	{
		TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline(__this, 4, NULL);
	}

IL_018c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_CanBeInstantiated_TisIl2CppFullySharedGenericAny_m8DD98722EE8C5AD72CC3361DA65279E2E914DA57_fshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	{
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = TypeUtility_GetTypeConstructor_TisIl2CppFullySharedGenericAny_m85B819FE60F560C72A51E57851E212B324CD2783(il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckCanBeInstantiated_TisIl2CppFullySharedGenericAny_mF4DC2D1251C15CC68D20D7959AEBA5D8192C4004_fshared (RuntimeObject* ___0_constructor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		RuntimeObject* L_0 = ___0_constructor;
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		if (L_1)
		{
			goto IL_002c;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3477F5F15DC74EADC79ED337F3988716EE1670E9)), L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1A902BAD5B9128E503E43473944346B65454351)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002c:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304_fshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* V_0 = NULL;
	{
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_0 = (TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_m74F8D3665A67BB654E190BCA1E48F1D14CD61371(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_1 = V_0;
		((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_5 = V_0;
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_6 = V_0;
		return (RuntimeObject*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_TisIl2CppFullySharedGenericAny_m85B819FE60F560C72A51E57851E212B324CD2783_fshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	{
		RuntimeObject* L_0 = ((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___TypeConstructor;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_1;
		L_1 = TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304(il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}

IL_000d:
	{
		RuntimeObject* L_2 = ((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___TypeConstructor;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m16821F3B413A510B42D80A6D20A540E95AB55F6A_fshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	const uint32_t SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
	{
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = TypeUtility_GetTypeConstructor_TisIl2CppFullySharedGenericAny_m85B819FE60F560C72A51E57851E212B324CD2783(il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_1 = L_0;
		TypeUtility_CheckCanBeInstantiated_TisIl2CppFullySharedGenericAny_mF4DC2D1251C15CC68D20D7959AEBA5D8192C4004(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), L_1, (Il2CppFullySharedGenericAny*)L_2);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m5DC21E4FCCF2901D5CAB9ABD9672A72829187EE7_fshared (Type_t* ___0_derivedType, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
	{
		Type_t* L_0 = ___0_derivedType;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_1;
		L_1 = TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4 = ___0_derivedType;
		TypeUtility_CheckIsAssignableFrom_m284900A7E86ACD68227E5E3DCC9430EEC7E1E03E(L_3, L_4, NULL);
		RuntimeObject* L_5 = L_1;
		Type_t* L_6 = ___0_derivedType;
		TypeUtility_CheckCanBeInstantiated_mB2C921D41DC94D83758FC5CFDFEE26911F62B14F(L_5, L_6, NULL);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_5);
		void* L_9 = UnBox_Any(L_7, il2cpp_rgctx_data(method->rgctx_data, 1), L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_9)), SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_InstantiateArray_TisIl2CppFullySharedGenericAny_mFDFE5C113C01319C0149CDE8BFCB586E246BFE07_fshared (int32_t ___0_count, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	const uint32_t SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
	const Il2CppFullySharedGenericAny L_31 = L_10;
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	{
		int32_t L_0 = ___0_count;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = ___0_count;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB17952A14247828F6A41642FA1C04CD14AE7C12A)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0024:
	{
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_6;
		L_6 = PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_6, il2cpp_rgctx_data(method->rgctx_data, 1)));
		RuntimeObject* L_7 = V_0;
		if (!L_7)
		{
			goto IL_003a;
		}
	}
	{
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = ___0_count;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 1), L_8, L_9, (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		return;
	}

IL_003a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		Type_t* L_13 = L_12;
		bool L_14;
		L_14 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_13, NULL);
		if (L_14)
		{
			G_B6_0 = L_13;
			goto IL_0070;
		}
		G_B5_0 = L_13;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_16);
		String_t* L_18;
		L_18 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377)), L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_19 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_19, L_18, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, method);
	}

IL_0070:
	{
		Type_t* L_20;
		L_20 = VirtualFuncInvoker0< Type_t* >::Invoke(46, G_B6_0);
		V_1 = L_20;
		Type_t* L_21 = V_1;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_21, NULL);
		if (!L_22)
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_24);
		String_t* L_26;
		L_26 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377)), L_25, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_27 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_27, L_26, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
	}

IL_00a3:
	{
		Type_t* L_28 = V_1;
		int32_t L_29 = ___0_count;
		RuntimeArray* L_30;
		L_30 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_28, L_29, NULL);
		void* L_32 = UnBox_Any(L_30, il2cpp_rgctx_data(method->rgctx_data, 3), L_31);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_32)), SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_InstantiateArray_TisIl2CppFullySharedGenericAny_m1FCEE0C26FAE797853D3A634E97FFBF64C012B22_fshared (Type_t* ___0_derivedType, int32_t ___1_count, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	const uint32_t SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
	const Il2CppFullySharedGenericAny L_32 = L_11;
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	{
		int32_t L_0 = ___1_count;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_1 = ___1_count;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF29F6D97E24431ECD5F1657989D9AD6B5FF2A0E)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_3, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0024:
	{
		Type_t* L_6 = ___0_derivedType;
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_7;
		L_7 = PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E(L_6, NULL);
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_8 = V_0;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		int32_t L_10 = ___1_count;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 0), L_9, L_10, (Il2CppFullySharedGenericAny*)L_11);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		return;
	}

IL_003b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		Type_t* L_14 = L_13;
		bool L_15;
		L_15 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_14, NULL);
		if (L_15)
		{
			G_B6_0 = L_14;
			goto IL_0071;
		}
		G_B5_0 = L_14;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_17);
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836)), L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_0071:
	{
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(46, G_B6_0);
		V_1 = L_21;
		Type_t* L_22 = V_1;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_22, NULL);
		if (!L_23)
		{
			goto IL_00a4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_25);
		String_t* L_27;
		L_27 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836)), L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_28 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_28, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, method);
	}

IL_00a4:
	{
		Type_t* L_29 = V_1;
		int32_t L_30 = ___1_count;
		RuntimeArray* L_31;
		L_31 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_29, L_30, NULL);
		void* L_33 = UnBox_Any(L_31, il2cpp_rgctx_data(method->rgctx_data, 2), L_32);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_33)), SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_SetExplicitInstantiationMethod_TisIl2CppFullySharedGenericAny_m2D8909EEC6C43238849B5CDA814A1B8830FD6DD6_fshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_constructor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	{
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = TypeUtility_GetTypeConstructor_TisIl2CppFullySharedGenericAny_m85B819FE60F560C72A51E57851E212B324CD2783(il2cpp_rgctx_method(method->rgctx_data, 0));
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_1 = ___0_constructor;
		InterfaceActionInvoker1< Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* >::Invoke(1, il2cpp_rgctx_data_init(method->rgctx_data, 1), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m649F65DE0BCA16E2A127A53A46C010AD35120D3E_fshared (Il2CppFullySharedGenericAny* ___0_instance, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	const uint32_t SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
	RuntimeObject* V_0 = NULL;
	{
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_0;
		L_0 = TypeUtility_GetTypeConstructor_TisIl2CppFullySharedGenericAny_m85B819FE60F560C72A51E57851E212B324CD2783(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_3 = ___0_instance;
		RuntimeObject* L_4 = V_0;
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 1), L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_3, L_5, SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 3), (void**)(Il2CppFullySharedGenericAny*)L_3, (void*)L_5);
		return (bool)1;
	}

IL_001c:
	{
		Il2CppFullySharedGenericAny* L_6 = ___0_instance;
		il2cpp_codegen_initobj(L_6, SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m3914D5A487BA3A1D1DA0C268C598029CAAD4B975_fshared (Type_t* ___0_derivedType, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	CHECKED_LOCAL(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit);
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_derivedType;
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_1, L_2);
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___1_value;
		il2cpp_codegen_initobj(L_4, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		Il2CppFullySharedGenericAny* L_5 = ___1_value;
		il2cpp_codegen_initobj(L_5, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		return (bool)0;
	}

IL_0022:
	{
		Type_t* L_6 = ___0_derivedType;
		CHECKED_LOCAL_INIT(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticInit,(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_7;
		L_7 = TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC(L_6, NULL);
		V_0 = L_7;
		RuntimeObject* L_8 = V_0;
		bool L_9;
		L_9 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_8);
		if (L_9)
		{
			goto IL_003a;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_10 = ___1_value;
		il2cpp_codegen_initobj(L_10, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		return (bool)0;
	}

IL_003a:
	{
		Il2CppFullySharedGenericAny* L_11 = ___1_value;
		RuntimeObject* L_12 = V_0;
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_12);
		void* L_15 = UnBox_Any(L_13, il2cpp_rgctx_data(method->rgctx_data, 1), L_14);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_11, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_15)), SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_11, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_15)));
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiateArray_TisIl2CppFullySharedGenericAny_m61841BDE42555F9AE20A4F8308FDA87FE9A33043_fshared (int32_t ___0_count, Il2CppFullySharedGenericAny* ___1_instance, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
	const Il2CppFullySharedGenericAny L_23 = L_7;
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = ___0_count;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_1 = ___1_instance;
		il2cpp_codegen_initobj(L_1, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		return (bool)0;
	}

IL_000d:
	{
		CHECKED_LOCAL_INIT(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_StaticInit,(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		RuntimeObject* L_2;
		L_2 = PropertyBagStore_GetPropertyBag_TisIl2CppFullySharedGenericAny_m982C700BD4613C927AC04298CD105D70D5944EE8(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 2)));
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	try
	{
		Il2CppFullySharedGenericAny* L_4 = ___1_instance;
		RuntimeObject* L_5 = V_0;
		int32_t L_6 = ___0_count;
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data_init(method->rgctx_data, 2), L_5, L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_7, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_7);
		V_3 = (bool)1;
		goto IL_0078;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002c;
		}
		throw e;
	}

CATCH_002c:
	{
		RuntimeObject* L_8 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_002f;
	}

IL_002f:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 4)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		V_1 = L_10;
		Type_t* L_11 = V_1;
		bool L_12;
		L_12 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_11, NULL);
		if (L_12)
		{
			goto IL_004b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_13 = ___1_instance;
		il2cpp_codegen_initobj(L_13, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		return (bool)0;
	}

IL_004b:
	{
		Type_t* L_14 = V_1;
		Type_t* L_15;
		L_15 = VirtualFuncInvoker0< Type_t* >::Invoke(46, L_14);
		V_2 = L_15;
		Type_t* L_16 = V_2;
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_16, NULL);
		if (!L_17)
		{
			goto IL_0064;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_18 = ___1_instance;
		il2cpp_codegen_initobj(L_18, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		return (bool)0;
	}

IL_0064:
	{
		Il2CppFullySharedGenericAny* L_19 = ___1_instance;
		Type_t* L_20 = V_2;
		int32_t L_21 = ___0_count;
		RuntimeArray* L_22;
		L_22 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_20, L_21, NULL);
		void* L_24 = UnBox_Any(L_22, il2cpp_rgctx_data(method->rgctx_data, 0), L_23);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_19, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_24)), SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_19, (void*)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_24)));
		return (bool)1;
	}

IL_0078:
	{
		bool L_25 = V_3;
		return L_25;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 UIRenderDevice_PtrToSlice_TisIl2CppFullySharedGenericStruct_m0EE4C09A713B60EB7E390B5330800B63CEF94BDF_fshared (void* ___0_p, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_p;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_2 = ___1_count;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_3;
		L_3 = NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisIl2CppFullySharedGenericStruct_mE65C843FF57523BD4FDD1642C5D01EE096A9E2E0(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UQueryBuilder_1_t6828BA3E68052708C0E51F88744A863AF473B4A7 UQueryExtensions_Query_TisIl2CppSharedGenericObject_m7200BFB10622F65B53AA5868EF19B4C7434CEF56_gshared (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_e, String_t* ___1_name, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___2_classes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_e;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2 = ___0_e;
		UQueryBuilder_1_tC18E0AFFC0E0113DFEBC6E56C8BB13FD596A3139 L_3;
		memset((&L_3), 0, sizeof(L_3));
		UQueryBuilder_1__ctor_m841C38F69A30425CCEA1F93525C97AD0B9648486((&L_3), L_2, NULL);
		V_0 = L_3;
		String_t* L_4 = ___1_name;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___2_classes;
		UQueryBuilder_1_t6828BA3E68052708C0E51F88744A863AF473B4A7 L_6;
		L_6 = UQueryBuilder_1_OfType_TisIl2CppSharedGenericObject_mF9AC50830240F1F79618CFCCFA15577ECC67F039((&V_0), L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UniversalCameraHistory_GetHistoryForRead_TisIl2CppSharedGenericObject_m0B79579310A432D14777BD4BE5418CD01B27CCCC_gshared (UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(TypeId_1_tADBC20EB4508FF9EF974D36F486E96EF1D016C0F_StaticInit);
	uint32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	{
		CHECKED_LOCAL_INIT(TypeId_1_tADBC20EB4508FF9EF974D36F486E96EF1D016C0F_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_0 = ((TypeId_1_tA0CD51A7295612B69C9B2252E8766D155C7C9CD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___value;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint64_t L_2 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_1,NULL));
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_3 = __this->___m_Items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((((int64_t)L_2) < ((int64_t)L_5)))
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_6 = V_1;
		return L_6;
	}

IL_001d:
	{
		uint32_t L_7 = V_0;
		bool L_8;
		L_8 = UniversalCameraHistory_IsValid_m0ED8566EE9ECCD7667C5DDA30DAC3098D87EEB7D(__this, (int32_t)L_7, NULL);
		if (L_8)
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}

IL_0030:
	{
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_10 = __this->___m_Items;
		uint32_t L_11 = V_0;
		ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___storage;
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_12, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UniversalCameraHistory_GetHistoryForWrite_TisIl2CppSharedGenericObject_m969FF5AC1EB6680EAAD5BE9C9C8A954BB791D3AD_gshared (UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraHistoryItem_tF338960CEEF2FC4CA719474D573A411AFD4E0CDB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeId_1_t0E454F4C658B4EA040DA18E9AEA2FFB43A3B56EF_StaticInit);
	uint32_t V_0 = 0;
	Il2CppSharedGenericObject* V_1 = NULL;
	CameraHistoryItem_tF338960CEEF2FC4CA719474D573A411AFD4E0CDB* V_2 = NULL;
	{
		CHECKED_LOCAL_INIT(TypeId_1_t0E454F4C658B4EA040DA18E9AEA2FFB43A3B56EF_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_0 = ((TypeId_1_tA0CD51A7295612B69C9B2252E8766D155C7C9CD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___value;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint64_t L_2 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_1,NULL));
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_3 = __this->___m_Items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((((int64_t)L_2) < ((int64_t)L_5)))
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_6 = V_1;
		return L_6;
	}

IL_001d:
	{
		uint32_t L_7 = V_0;
		bool L_8;
		L_8 = UniversalCameraHistory_IsValidRequest_m0936A6432FCF23AC7B9067F6FD4C9B9296AD4DBA(__this, (int32_t)L_7, NULL);
		if (L_8)
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_9 = V_1;
		return L_9;
	}

IL_0030:
	{
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_10 = __this->___m_Items;
		uint32_t L_11 = V_0;
		ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* L_12 = ((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_11)))->___storage;
		if (L_12)
		{
			goto IL_007a;
		}
	}
	{
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_13 = __this->___m_Items;
		uint32_t L_14 = V_0;
		Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99* L_15 = ((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		Il2CppSharedGenericObject* L_16;
		L_16 = Activator_CreateInstance_TisIl2CppSharedGenericObject_m4C74D3D65600820EB977E87AD08D24AF782C97C3(il2cpp_rgctx_method(method->rgctx_data, 1));
		L_15->___storage = (ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___storage), (void*)(ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086*)L_16);
		ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* L_17 = L_15->___storage;
		V_2 = ((CameraHistoryItem_tF338960CEEF2FC4CA719474D573A411AFD4E0CDB*)IsInstClass((RuntimeObject*)L_17, CameraHistoryItem_tF338960CEEF2FC4CA719474D573A411AFD4E0CDB_il2cpp_TypeInfo_var));
		CameraHistoryItem_tF338960CEEF2FC4CA719474D573A411AFD4E0CDB* L_18 = V_2;
		if (!L_18)
		{
			goto IL_007a;
		}
	}
	{
		CameraHistoryItem_tF338960CEEF2FC4CA719474D573A411AFD4E0CDB* L_19 = V_2;
		BufferedRTHandleSystem_t986BCD1C8C6AD8B93F8F768599D6CCCE7C6A7046* L_20 = __this->___m_HistoryTextures;
		uint32_t L_21 = V_0;
		VirtualActionInvoker2< BufferedRTHandleSystem_t986BCD1C8C6AD8B93F8F768599D6CCCE7C6A7046*, uint32_t >::Invoke(5, L_19, L_20, L_21);
	}

IL_007a:
	{
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_22 = __this->___m_Items;
		uint32_t L_23 = V_0;
		int32_t L_24 = __this->___m_Version;
		((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_23)))->___writeVersion = L_24;
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_25 = __this->___m_Items;
		uint32_t L_26 = V_0;
		ContextItem_tFC5ECB349F0410923AE6BC2A9CAACA3589B51086* L_27 = ((L_25)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_26)))->___storage;
		return ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 2)));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniversalCameraHistory_IsAccessRequested_TisIl2CppSharedGenericObject_mB87BC29FE01FE083B94DBB5DFFE75E18BCBBA652_gshared (UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(TypeId_1_t9EC1D36A57D1A93F1217C868FC6818F78CD1504C_StaticInit);
	uint32_t V_0 = 0;
	{
		CHECKED_LOCAL_INIT(TypeId_1_t9EC1D36A57D1A93F1217C868FC6818F78CD1504C_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_0 = ((TypeId_1_tA0CD51A7295612B69C9B2252E8766D155C7C9CD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___value;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint64_t L_2 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_1,NULL));
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_3 = __this->___m_Items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((((int64_t)L_2) < ((int64_t)L_5)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		uint32_t L_6 = V_0;
		bool L_7;
		L_7 = UniversalCameraHistory_IsValidRequest_m0936A6432FCF23AC7B9067F6FD4C9B9296AD4DBA(__this, (int32_t)L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniversalCameraHistory_IsWritten_TisIl2CppSharedGenericObject_m3D9BE49B1A15EEC186DDFFAD1F717FF8247EE766_gshared (UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(TypeId_1_tE7BABD846B77DFC7454E2410FF5E17FDA0EB2C87_StaticInit);
	uint32_t V_0 = 0;
	{
		CHECKED_LOCAL_INIT(TypeId_1_tE7BABD846B77DFC7454E2410FF5E17FDA0EB2C87_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_0 = ((TypeId_1_tA0CD51A7295612B69C9B2252E8766D155C7C9CD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___value;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint64_t L_2 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_1,NULL));
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_3 = __this->___m_Items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((((int64_t)L_2) < ((int64_t)L_5)))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)0;
	}

IL_0015:
	{
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_6 = __this->___m_Items;
		uint32_t L_7 = V_0;
		int32_t L_8 = ((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)))->___writeVersion;
		int32_t L_9 = __this->___m_Version;
		return (bool)((((int32_t)L_8) == ((int32_t)L_9))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniversalCameraHistory_RequestAccess_TisIl2CppSharedGenericObject_m0AD6B7A697EB3469C8ADF79D54A7A9842B0F590B_gshared (UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CHECKED_LOCAL(TypeId_1_t60A25CEC63688A5F00943FE0FAAD501626F68537_StaticInit);
	uint32_t V_0 = 0;
	ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* V_1 = NULL;
	int32_t V_2 = 0;
	{
		CHECKED_LOCAL_INIT(TypeId_1_t60A25CEC63688A5F00943FE0FAAD501626F68537_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		uint32_t L_0 = ((TypeId_1_tA0CD51A7295612B69C9B2252E8766D155C7C9CD4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___value;
		V_0 = L_0;
		uint32_t L_1 = V_0;
		uint64_t L_2 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_1,NULL));
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_3 = __this->___m_Items;
		int32_t L_4 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_3)->max_length),NULL));
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_4,NULL));
		if ((((int64_t)L_2) < ((int64_t)L_5)))
		{
			goto IL_0062;
		}
	}
	{
		uint32_t L_6 = ((UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80_StaticFields*)il2cpp_codegen_static_fields_for(UniversalCameraHistory_t15D275DAE9AD5B608CE533D0FCE0884F07BB1E80_il2cpp_TypeInfo_var))->___s_TypeCount;
		uint32_t L_7;
		L_7 = math_ceilpow2_m55F757254B1339A2FAC288807A06BFF24898B214_inline(L_6, NULL);
		uint64_t L_8 = (il2cpp_codegen_conv<uint64_t,uint32_t,int32_t,false,false>(L_7,NULL));
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_9 = __this->___m_Items;
		int32_t L_10 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_9)->max_length),NULL));
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_multiply(L_10, 2)),NULL));
		int64_t L_12;
		L_12 = math_max_mC58900240F2A88F08AD67CA1F3F4360987100521_inline((int64_t)L_8, L_11, NULL);
		intptr_t L_13 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,true,false>(L_12,method));
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_14 = (ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E*)(ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E*)SZArrayNew(ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_1 = L_14;
		V_2 = 0;
		goto IL_0050;
	}

IL_0039:
	{
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_15 = V_1;
		int32_t L_16 = V_2;
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_17 = __this->___m_Items;
		int32_t L_18 = V_2;
		int32_t L_19 = L_18;
		Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99 L_20 = (L_17)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_19));
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16), (Item_t03C78E910AEF9602D894C512E8868D5E32A2EC99)L_20);
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0050:
	{
		int32_t L_22 = V_2;
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_23 = __this->___m_Items;
		int32_t L_24 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_23)->max_length),NULL));
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_0039;
		}
	}
	{
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_25 = V_1;
		__this->___m_Items = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Items), (void*)L_25);
	}

IL_0062:
	{
		ItemU5BU5D_t9855C5AFE4DF3736F7200C827F5B60586193986E* L_26 = __this->___m_Items;
		uint32_t L_27 = V_0;
		int32_t L_28 = __this->___m_Version;
		((L_26)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_27)))->___requestVersion = L_28;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniversalRenderPipeline_IsRenderRequestSupported_TisIl2CppFullySharedGenericAny_m01ADCD33C6BCD93993CE0F7CB515C134DDA25249_fshared (UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_camera, Il2CppFullySharedGenericAny ___1_data, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_RequestData_t0DA03AFD9428D973FC81DA7C8BF4B0CF1A909832 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_RequestData_t0DA03AFD9428D973FC81DA7C8BF4B0CF1A909832);
	const Il2CppFullySharedGenericAny L_2 = L_0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_data : &___1_data), SizeOf_RequestData_t0DA03AFD9428D973FC81DA7C8BF4B0CF1A909832);
		bool L_1 = il2cpp_codegen_isinst_runtime_check_class(il2cpp_rgctx_data(method->rgctx_data, 0), StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53_il2cpp_TypeInfo_var, L_0);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)1;
	}

IL_000f:
	{
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_data : &___1_data), SizeOf_RequestData_t0DA03AFD9428D973FC81DA7C8BF4B0CF1A909832);
		bool L_3 = il2cpp_codegen_isinst_runtime_check_class(il2cpp_rgctx_data(method->rgctx_data, 0), SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniversalRenderPipeline_ProcessRenderRequests_TisIl2CppFullySharedGenericAny_mDA545F6D05108DA4899629AEE6B8356279506772_fshared (UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F* __this, ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 ___0_context, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___1_camera, Il2CppFullySharedGenericAny ___2_renderRequest, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_mBCAEF774AB0C0563A29C16F3A5305AE1A081C3BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListPool_1_Get_m7E32B4B150CCC0A396B9CFA7D60862F765DE7C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListPool_1_t97F6AE398781016115DBD2B6A4A443FD4FF438E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PooledObject_System_IDisposable_Dispose_m2C53DF93B31EF48C987A0FD22DEE119FDDD30E93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48B5843525C3BEF16B7BE787788398005CFE4D6C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51A257776A6F5C5A85BB79B0C0B56E420A4C92B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80F0368CFBC6552AC1C79FAE29101F4E1345BD2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8468D10D94786B5C421B4ACD80BF46EAAA054DD);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_RequestData_t23AF8AF1732E49524440830F612EE084B6253A37 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	CHECKED_LOCAL(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit);
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	CHECKED_LOCAL(ListPool_1_t97F6AE398781016115DBD2B6A4A443FD4FF438E6_StaticInit);
	CHECKED_LOCAL(ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70_StaticInit);
	CHECKED_LOCAL(CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86_StaticInit);
	CHECKED_LOCAL(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_StaticInit);
	CHECKED_LOCAL(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_StaticInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	CHECKED_LOCAL(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticInit);
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_RequestData_t23AF8AF1732E49524440830F612EE084B6253A37);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_RequestData_t23AF8AF1732E49524440830F612EE084B6253A37);
	StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* V_0 = NULL;
	SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24* V_1 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_7 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* V_8 = NULL;
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_9;
	memset((&V_9), 0, sizeof(V_9));
	RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 V_10;
	memset((&V_10), 0, sizeof(V_10));
	List_1_tD2FA3273746E404D72561E8324608D18B52B533E* V_11 = NULL;
	PooledObject_t6A17503D2E86923ADABDFFE03F1EA5163EAF076B V_12;
	memset((&V_12), 0, sizeof(V_12));
	ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70 V_13;
	memset((&V_13), 0, sizeof(V_13));
	CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86 V_14;
	memset((&V_14), 0, sizeof(V_14));
	UniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93* V_15 = NULL;
	bool V_16 = false;
	int32_t V_17 = 0;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B5_0 = NULL;
	int32_t G_B10_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B24_0 = 0;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B28_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B27_0 = NULL;
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* G_B29_0 = NULL;
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* G_B29_1 = NULL;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_renderRequest : &___2_renderRequest), SizeOf_RequestData_t23AF8AF1732E49524440830F612EE084B6253A37);
		RuntimeObject* L_1 = il2cpp_codegen_isinst_runtime_class(il2cpp_rgctx_data(method->rgctx_data, 0), StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53_il2cpp_TypeInfo_var, L_0);;
		V_0 = (StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53*)L_1;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___2_renderRequest : &___2_renderRequest), SizeOf_RequestData_t23AF8AF1732E49524440830F612EE084B6253A37);
		RuntimeObject* L_3 = il2cpp_codegen_isinst_runtime_class(il2cpp_rgctx_data(method->rgctx_data, 0), SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24_il2cpp_TypeInfo_var, L_2);;
		V_1 = (SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24*)L_3;
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_4 = V_0;
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0313;
		}
	}

IL_0021:
	{
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_6 = V_0;
		if (L_6)
		{
			goto IL_002c;
		}
	}
	{
		SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24* L_7 = V_1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_8 = L_7->___destination;
		G_B5_0 = L_8;
		goto IL_0032;
	}

IL_002c:
	{
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_9 = V_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_10 = L_9->___destination;
		G_B5_0 = L_10;
	}

IL_0032:
	{
		V_2 = G_B5_0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_11 = V_2;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_12;
		L_12 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0047;
		}
	}
	{
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB8468D10D94786B5C421B4ACD80BF46EAAA054DD, NULL);
		return;
	}

IL_0047:
	{
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_13 = V_0;
		if (L_13)
		{
			goto IL_0052;
		}
	}
	{
		SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24* L_14 = V_1;
		int32_t L_15 = L_14->___mipLevel;
		G_B10_0 = L_15;
		goto IL_0058;
	}

IL_0052:
	{
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_16 = V_0;
		int32_t L_17 = L_16->___mipLevel;
		G_B10_0 = L_17;
	}

IL_0058:
	{
		V_3 = G_B10_0;
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_18 = V_0;
		if (L_18)
		{
			goto IL_0064;
		}
	}
	{
		SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24* L_19 = V_1;
		int32_t L_20 = L_19->___slice;
		G_B13_0 = L_20;
		goto IL_006a;
	}

IL_0064:
	{
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_21 = V_0;
		int32_t L_22 = L_21->___slice;
		G_B13_0 = L_22;
	}

IL_006a:
	{
		V_4 = G_B13_0;
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_23 = V_0;
		if (L_23)
		{
			goto IL_0077;
		}
	}
	{
		SingleCameraRequest_tF902D3B3D32643E8D9E7D3E4D87741C01B983A24* L_24 = V_1;
		int32_t L_25 = L_24->___face;
		G_B16_0 = L_25;
		goto IL_007d;
	}

IL_0077:
	{
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_26 = V_0;
		int32_t L_27 = L_26->___face;
		G_B16_0 = L_27;
	}

IL_007d:
	{
		V_5 = G_B16_0;
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_28 = V_0;
		if (L_28)
		{
			goto IL_0085;
		}
	}
	{
		G_B19_0 = 0;
		goto IL_008b;
	}

IL_0085:
	{
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_29 = V_0;
		bool L_30 = L_29->___isPreview;
		G_B19_0 = ((int32_t)(L_30));
	}

IL_008b:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31 = ___1_camera;
		int32_t L_32;
		L_32 = Camera_get_cameraType_m85434C4C986D2EAC04FBFA44B284840AFC497851(L_31, NULL);
		V_6 = L_32;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_33 = ___1_camera;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_34;
		L_34 = Camera_get_targetTexture_mC856D7FF8351476068D04E245E4F08F5C56A55BD(L_33, NULL);
		V_7 = L_34;
		V_8 = (RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27*)NULL;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_35 = V_2;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_36;
		L_36 = RenderTexture_get_descriptor_m2FABD5CF6CCF410D1311FCBC7C9D9ECDEE9C7CC2(L_35, NULL);
		V_9 = L_36;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_37 = V_2;
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(9, L_37);
		if ((!(((uint32_t)L_38) == ((uint32_t)4))))
		{
			G_B21_0 = G_B19_0;
			goto IL_00b7;
		}
		G_B20_0 = G_B19_0;
	}
	{
		il2cpp_codegen_initobj((&V_9), sizeof(RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46));
		G_B21_0 = G_B20_0;
	}

IL_00b7:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_39 = V_2;
		int32_t L_40;
		L_40 = RenderTexture_get_format_m58556ABB91A1FADA8044BEEA2E8C55280768CF35(L_39, NULL);
		RenderTextureDescriptor_set_colorFormat_m61B0FA4FCDE8A0F8A843DD6BF74097C21021C4FE((&V_9), L_40, NULL);
		RenderTextureDescriptor_set_volumeDepth_mEF9610D1C14182417A01B7243DEE6B559A13B34D_inline((&V_9), 1, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_41 = V_2;
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_42;
		L_42 = RenderTexture_get_descriptor_m2FABD5CF6CCF410D1311FCBC7C9D9ECDEE9C7CC2(L_41, NULL);
		V_10 = L_42;
		int32_t L_43;
		L_43 = RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline((&V_10), NULL);
		RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline((&V_9), L_43, NULL);
		RenderTextureDescriptor_set_dimension_mCE9A4A08454BB2D9DFE3E505EC336FD480078F39_inline((&V_9), 2, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_44 = V_2;
		int32_t L_45;
		L_45 = VirtualFuncInvoker0< int32_t >::Invoke(5, L_44);
		int32_t L_46 = V_3;
		double L_47 = (il2cpp_codegen_conv<double,int32_t,int32_t,false,false>(L_46,NULL));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		double L_48;
		L_48 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((2.0), L_47, NULL);
		int32_t L_49 = (il2cpp_codegen_conv<int32_t,double,double,false,false>(L_48,NULL));
		RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline((&V_9), ((int32_t)(L_45/L_49)), NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_50 = V_2;
		int32_t L_51;
		L_51 = VirtualFuncInvoker0< int32_t >::Invoke(7, L_50);
		int32_t L_52 = V_3;
		double L_53 = (il2cpp_codegen_conv<double,int32_t,int32_t,false,false>(L_52,NULL));
		double L_54;
		L_54 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((2.0), L_53, NULL);
		int32_t L_55 = (il2cpp_codegen_conv<int32_t,double,double,false,false>(L_54,NULL));
		RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline((&V_9), ((int32_t)(L_51/L_55)), NULL);
		int32_t L_56;
		L_56 = RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline((&V_9), NULL);
		int32_t L_57;
		L_57 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(1, L_56, NULL);
		RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline((&V_9), L_57, NULL);
		int32_t L_58;
		L_58 = RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline((&V_9), NULL);
		int32_t L_59;
		L_59 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(1, L_58, NULL);
		RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline((&V_9), L_59, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_60 = V_2;
		int32_t L_61;
		L_61 = VirtualFuncInvoker0< int32_t >::Invoke(9, L_60);
		if ((!(((uint32_t)L_61) == ((uint32_t)2))))
		{
			G_B23_0 = G_B21_0;
			goto IL_015c;
		}
		G_B22_0 = G_B21_0;
	}
	{
		int32_t L_62 = V_3;
		if (!L_62)
		{
			G_B24_0 = G_B22_0;
			goto IL_0165;
		}
		G_B23_0 = G_B22_0;
	}

IL_015c:
	{
		RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46 L_63 = V_9;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_64;
		L_64 = RenderTexture_GetTemporary_mA8C827B80D3C07D0B8CDF7F5270FB5D3E53DD235(L_63, NULL);
		V_8 = L_64;
		G_B24_0 = G_B23_0;
	}

IL_0165:
	{
		if (!G_B24_0)
		{
			goto IL_016e;
		}
	}
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_65 = ___1_camera;
		Camera_set_cameraType_m20ECE54572F8B7CAF5D32193B65F3D7812E20F17(L_65, 4, NULL);
	}

IL_016e:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_66 = ___1_camera;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_67 = V_8;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_68;
		L_68 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_67, NULL);
		if (L_68)
		{
			G_B28_0 = L_66;
			goto IL_017b;
		}
		G_B27_0 = L_66;
	}
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_69 = V_2;
		G_B29_0 = L_69;
		G_B29_1 = G_B27_0;
		goto IL_017d;
	}

IL_017b:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_70 = V_8;
		G_B29_0 = L_70;
		G_B29_1 = G_B28_0;
	}

IL_017d:
	{
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(G_B29_1, G_B29_0, NULL);
		StandardRequest_t74A964925918EB8C1578B4A825EFE91A0C7D8B53* L_71 = V_0;
		if (!L_71)
		{
			goto IL_019a;
		}
	}
	{
		ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_72 = ___0_context;
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_73 = (List_1_tD2FA3273746E404D72561E8324608D18B52B533E*)il2cpp_codegen_object_new(List_1_tD2FA3273746E404D72561E8324608D18B52B533E_il2cpp_TypeInfo_var);
		List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681(L_73, List_1__ctor_m735F7A05528CC71E71E3019311F2E22CF9E2C681_RuntimeMethod_var);
		List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_74 = L_73;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_75 = ___1_camera;
		List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_inline(L_74, L_75, List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var);
		VirtualActionInvoker2< ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36, List_1_tD2FA3273746E404D72561E8324608D18B52B533E* >::Invoke(7, __this, L_72, L_74);
		goto IL_0202;
	}

IL_019a:
	{
		CHECKED_LOCAL_INIT(ListPool_1_t97F6AE398781016115DBD2B6A4A443FD4FF438E6_StaticInit,(ListPool_1_t97F6AE398781016115DBD2B6A4A443FD4FF438E6_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		PooledObject_t6A17503D2E86923ADABDFFE03F1EA5163EAF076B L_76;
		L_76 = ListPool_1_Get_m7E32B4B150CCC0A396B9CFA7D60862F765DE7C15((&V_11), ListPool_1_Get_m7E32B4B150CCC0A396B9CFA7D60862F765DE7C15_RuntimeMethod_var);
		V_12 = L_76;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01f4:
			{
				PooledObject_System_IDisposable_Dispose_m2C53DF93B31EF48C987A0FD22DEE119FDDD30E93((&V_12), PooledObject_System_IDisposable_Dispose_m2C53DF93B31EF48C987A0FD22DEE119FDDD30E93_RuntimeMethod_var);
				return;
			}
		});
		try
		{
			{
				List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_77 = V_11;
				Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_78 = ___1_camera;
				List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_inline(L_77, L_78, List_1_Add_m9BE0CD6DB63BFCBCBD5619618748924143F1AFAD_RuntimeMethod_var);
				ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_79 = ___0_context;
				List_1_tD2FA3273746E404D72561E8324608D18B52B533E* L_80 = V_11;
				ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70 L_81;
				memset((&L_81), 0, sizeof(L_81));
				ContextRenderingScope__ctor_m59F5F0D796371C51FC2BD08A9E2DBC0EA6C32003((&L_81), L_79, L_80, NULL);
				V_13 = L_81;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01e6_1:
					{
						CHECKED_LOCAL_INIT(ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70_StaticInit,(ContextRenderingScope_t41F3C30482A93F2E0777958D2D1DAB7357F2DA70_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
						ContextRenderingScope_Dispose_mB51673C299E1DAA325206945F442709AF153868D((&V_13), NULL);
						return;
					}
				});
				try
				{
					{
						ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_82 = ___0_context;
						Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_83 = ___1_camera;
						CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86 L_84;
						memset((&L_84), 0, sizeof(L_84));
						CameraRenderingScope__ctor_mB6900429BFF6B78AF2325B36B44C96101329BD2C((&L_84), L_82, L_83, NULL);
						V_14 = L_84;
					}
					{
						auto __finallyBlock = il2cpp::utils::Finally([&]
						{

FINALLY_01d8_2:
							{
								CHECKED_LOCAL_INIT(CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86_StaticInit,(CameraRenderingScope_t22DC9DD80675F9F4798118075227E437E22B0D86_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
								CameraRenderingScope_Dispose_m7E450211F8C22CDF76970E0BC4FA3832ECE0E3C5((&V_14), NULL);
								return;
							}
						});
						try
						{
							Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_85 = ___1_camera;
							GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86;
							L_86 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_85, NULL);
							bool L_87;
							L_87 = GameObject_TryGetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_mBCAEF774AB0C0563A29C16F3A5305AE1A081C3BD(L_86, (&V_15), GameObject_TryGetComponent_TisUniversalAdditionalCameraData_t57B5D0F93C2D506E618E23187302C0FADE813B93_mBCAEF774AB0C0563A29C16F3A5305AE1A081C3BD_RuntimeMethod_var);
							ScriptableRenderContext_t5AB09B3602BEB456E0DC3D53926D3A3BDAF08E36 L_88 = ___0_context;
							Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_89 = ___1_camera;
							CHECKED_LOCAL_INIT(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_StaticInit,(UniversalRenderPipeline_t54B4737DC500C08628C5BE283D8C583C14DED98F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
							UniversalRenderPipeline_RenderSingleCameraInternal_mF40EDE5547E0DDE493AE06455C9928313D54E1AB(L_88, L_89, (&V_15), (bool)1, NULL);
							goto IL_0202;
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

IL_0202:
	{
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_90 = V_8;
		CHECKED_LOCAL_INIT(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticInit,(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		bool L_91;
		L_91 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_90, NULL);
		if (!L_91)
		{
			goto IL_02f4;
		}
	}
	{
		V_16 = (bool)0;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_92 = V_2;
		int32_t L_93;
		L_93 = VirtualFuncInvoker0< int32_t >::Invoke(9, L_92);
		V_17 = L_93;
		int32_t L_94 = V_17;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_94, 2)))
		{
			case 0:
			{
				goto IL_023b;
			}
			case 1:
			{
				goto IL_0273;
			}
			case 2:
			{
				goto IL_028e;
			}
			case 3:
			{
				goto IL_0258;
			}
			case 4:
			{
				goto IL_02a9;
			}
		}
	}
	{
		goto IL_02c7;
	}

IL_023b:
	{
		int32_t L_95;
		L_95 = SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2(NULL);
		if (!((int32_t)((int32_t)L_95&1)))
		{
			goto IL_02c7;
		}
	}
	{
		V_16 = (bool)1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_96 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_97 = V_2;
		int32_t L_98 = V_3;
		CHECKED_LOCAL_INIT(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_StaticInit,(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718(L_96, 0, 0, L_97, 0, L_98, NULL);
		goto IL_02c7;
	}

IL_0258:
	{
		int32_t L_99;
		L_99 = SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2(NULL);
		if (!((int32_t)((int32_t)L_99&4)))
		{
			goto IL_02c7;
		}
	}
	{
		V_16 = (bool)1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_100 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_101 = V_2;
		int32_t L_102 = V_4;
		int32_t L_103 = V_3;
		CHECKED_LOCAL_INIT(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_StaticInit,(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718(L_100, 0, 0, L_101, L_102, L_103, NULL);
		goto IL_02c7;
	}

IL_0273:
	{
		int32_t L_104;
		L_104 = SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2(NULL);
		if (!((int32_t)((int32_t)L_104&4)))
		{
			goto IL_02c7;
		}
	}
	{
		V_16 = (bool)1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_105 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_106 = V_2;
		int32_t L_107 = V_4;
		int32_t L_108 = V_3;
		CHECKED_LOCAL_INIT(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_StaticInit,(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718(L_105, 0, 0, L_106, L_107, L_108, NULL);
		goto IL_02c7;
	}

IL_028e:
	{
		int32_t L_109;
		L_109 = SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2(NULL);
		if (!((int32_t)((int32_t)L_109&4)))
		{
			goto IL_02c7;
		}
	}
	{
		V_16 = (bool)1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_110 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_111 = V_2;
		int32_t L_112 = V_5;
		int32_t L_113 = V_3;
		CHECKED_LOCAL_INIT(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_StaticInit,(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718(L_110, 0, 0, L_111, L_112, L_113, NULL);
		goto IL_02c7;
	}

IL_02a9:
	{
		int32_t L_114;
		L_114 = SystemInfo_get_copyTextureSupport_m35C5E2D749B53757DD6F05492B5D79F364F466C2(NULL);
		if (!((int32_t)((int32_t)L_114&4)))
		{
			goto IL_02c7;
		}
	}
	{
		V_16 = (bool)1;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_115 = V_8;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_116 = V_2;
		int32_t L_117 = V_5;
		int32_t L_118 = V_4;
		int32_t L_119 = V_3;
		CHECKED_LOCAL_INIT(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_StaticInit,(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Graphics_CopyTexture_m306EE635C15C8118A93D947A5183E5134B4EE718(L_115, 0, 0, L_116, ((int32_t)il2cpp_codegen_add(L_117, ((int32_t)il2cpp_codegen_multiply(L_118, 6)))), L_119, NULL);
	}

IL_02c7:
	{
		bool L_120 = V_16;
		if (L_120)
		{
			goto IL_02f4;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_0_0_0_var) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_123 = V_2;
		int32_t L_124;
		L_124 = VirtualFuncInvoker0< int32_t >::Invoke(9, L_123);
		int32_t L_125 = L_124;
		RuntimeObject* L_126 = Box(TextureDimension_t8D7148B9168256EE1E9AF91378ABA148888CE642_il2cpp_TypeInfo_var, &L_125);
		CHECKED_LOCAL_INIT(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticInit,(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		String_t* L_127;
		L_127 = Enum_GetName_m05FE85181853F756BA6BB2C033DD3590E6114D29(L_122, L_126, NULL);
		String_t* L_128;
		L_128 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral80F0368CFBC6552AC1C79FAE29101F4E1345BD2A, L_127, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_128, NULL);
	}

IL_02f4:
	{
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_129 = ___1_camera;
		int32_t L_130 = V_6;
		Camera_set_cameraType_m20ECE54572F8B7CAF5D32193B65F3D7812E20F17(L_129, L_130, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_131 = ___1_camera;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_132 = V_7;
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_131, L_132, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_133 = V_7;
		CHECKED_LOCAL_INIT(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_StaticInit,(Graphics_t99CD970FFEA58171C70F54DF0C06D315BD452F2C_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Graphics_SetRenderTarget_m995C0F14B97C5BF46CCF2E7EF410C1CC05C46409(L_133, NULL);
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_134 = V_8;
		RenderTexture_ReleaseTemporary_mEEF2C1990196FF06FDD0DC190928AD3A023EBDD2(L_134, NULL);
		return;
	}

IL_0313:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		String_t* L_137;
		L_137 = VirtualFuncInvoker0< String_t* >::Invoke(26, L_136);
		String_t* L_138;
		L_138 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral51A257776A6F5C5A85BB79B0C0B56E420A4C92B6, L_137, _stringLiteral48B5843525C3BEF16B7BE787788398005CFE4D6C, NULL);
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_138, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnmanagedComponentType_tE2EB2660135166C7DE40CA311E36A7E884E78A87 UnmanagedComponentType_Create_TisIl2CppFullySharedGenericStruct_m7584DBDC44C26F4D107EC1BF37B79CCEDF149A25_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	UnmanagedComponentType_tE2EB2660135166C7DE40CA311E36A7E884E78A87 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UnmanagedComponentType_tE2EB2660135166C7DE40CA311E36A7E884E78A87));
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		(&V_0)->___Size = L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		(&V_0)->___Align = L_1;
		UnmanagedComponentType_tE2EB2660135166C7DE40CA311E36A7E884E78A87 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedRefCountedListExtensions_Clear_TisIl2CppFullySharedGenericStruct_m6EFE521D8B6AA05E101FE1E54873BBCD9C8FF002_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* ___0_self, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(UnmanagedRefCountedList_1_t87CD4AEC707818F525F892B2778E5EEED8B2BCF0_StaticInit);
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_0 = ___0_self;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_t87CD4AEC707818F525F892B2778E5EEED8B2BCF0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		bool L_1;
		L_1 = UnmanagedRefCountedList_1_get_IsEmpty_mB1BF30169E77B2C7AA4C2D05D91445827E62BE2D(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_2 = ___0_self;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_t87CD4AEC707818F525F892B2778E5EEED8B2BCF0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		UnmanagedRefCountedList_1_UnsafeRelease_mD17175272CAD75247D69B8005777F263A6CA818E(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
	}

IL_000e:
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_3 = ___0_self;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_t87CD4AEC707818F525F892B2778E5EEED8B2BCF0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC L_4;
		L_4 = UnmanagedRefCountedList_1_get_Empty_mF30A4199DBFFC6A1CEE63EDC4667AD9C3F59A4D0(NULL);
		*(UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*)L_3 = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedRefCountedListExtensions_CopyFrom_TisIl2CppFullySharedGenericStruct_m807D2BDC95BCD2A3EB39CEAC5305608E60214D44_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* ___0_self, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(UnmanagedRefCountedList_1_t9679F3A0296226D624CAB754A7A9401D5FF78F47_StaticInit);
	const uint32_t SizeOf_T_t5A03A4044624B019A9C455E9601C16981EAC3C03 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t5A03A4044624B019A9C455E9601C16981EAC3C03);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___1_other;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_1 = ___1_other;
		int32_t L_2;
		L_2 = List_1_get_Count_m694661D4762DEC8528CADC41486D2BA8C07A6DA1_inline(L_1, NULL);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_3 = ___0_self;
		int32_t L_4 = V_0;
		UnmanagedRefCountedListExtensions_PrepareWrite_TisIl2CppFullySharedGenericStruct_mE0BCB9507B8C736AC77C699536E4C4FC7454A283(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = 0;
		goto IL_002f;
	}

IL_0018:
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_5 = ___0_self;
		int32_t L_6 = V_1;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_t9679F3A0296226D624CAB754A7A9401D5FF78F47_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		Il2CppFullySharedGenericStruct* L_7;
		L_7 = UnmanagedRefCountedList_1_get_Item_m1656338369EC4E02E5134C83B9F0976EB9ACA55F(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_8 = ___1_other;
		int32_t L_9 = V_1;
		List_1_get_Item_mA509276450ACC238E830B9B83B85185FBEF3C254(L_8, L_9, (Il2CppFullySharedGenericStruct*)L_10, il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_7, L_10, SizeOf_T_t5A03A4044624B019A9C455E9601C16981EAC3C03);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)L_7, (void*)L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_002f:
	{
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedRefCountedListExtensions_CopyFrom_TisIl2CppFullySharedGenericStruct_m0B7C4A5CBBE45A84BF547449C60BEB7FEC8DD6AD_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* ___0_self, ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(UnmanagedRefCountedList_1_t9E4D92EE7CE4C509DCB536F52631C675D620E7DC_StaticInit);
	const uint32_t SizeOf_T_t5CB4DD11F2D2956CDED05AA2B5B372283687298D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t5CB4DD11F2D2956CDED05AA2B5B372283687298D);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m3CC53FCCDE299F21DEF7AB63EF3D378DAB954005_inline((&___1_other), NULL);
		V_0 = L_0;
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_1 = ___0_self;
		int32_t L_2 = V_0;
		UnmanagedRefCountedListExtensions_PrepareWrite_TisIl2CppFullySharedGenericStruct_mE0BCB9507B8C736AC77C699536E4C4FC7454A283(L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = 0;
		goto IL_0030;
	}

IL_0013:
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_3 = ___0_self;
		int32_t L_4 = V_1;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_t9E4D92EE7CE4C509DCB536F52631C675D620E7DC_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		Il2CppFullySharedGenericStruct* L_5;
		L_5 = UnmanagedRefCountedList_1_get_Item_m1656338369EC4E02E5134C83B9F0976EB9ACA55F(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6 = V_1;
		Il2CppFullySharedGenericStruct* L_7;
		L_7 = ReadOnlySpan_1_get_Item_mAFFA21964234394982172838F35555A4D5681233_inline((&___1_other), L_6, il2cpp_rgctx_method(method->rgctx_data, 4));
		il2cpp_codegen_memcpy(L_8, L_7, SizeOf_T_t5CB4DD11F2D2956CDED05AA2B5B372283687298D);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_5, L_8, SizeOf_T_t5CB4DD11F2D2956CDED05AA2B5B372283687298D);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)L_5, (void*)L_8);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0030:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedRefCountedListExtensions_CopyFrom_TisIl2CppFullySharedGenericStruct_m1157114BC0716A5AEFDBC5EA71812C0BF0D80FB4_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* ___0_self, UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(UnmanagedRefCountedList_1_t116A19AF0AB3521459333DCEF6A4A5D70C5D32B0_StaticInit);
	{
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_t116A19AF0AB3521459333DCEF6A4A5D70C5D32B0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		bool L_0;
		L_0 = UnmanagedRefCountedList_1_get_IsEmpty_mB1BF30169E77B2C7AA4C2D05D91445827E62BE2D((&___1_other), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_t116A19AF0AB3521459333DCEF6A4A5D70C5D32B0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		int32_t* L_1;
		L_1 = UnmanagedRefCountedList_1_get_UnsafeRefCount_m6C212A28A6097E4E5A853E7B482F8BC3D6291488((&___1_other), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t* L_2 = L_1;
		int32_t L_3 = *(L_2);
		*(L_2) = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0015:
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_4 = ___0_self;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_t116A19AF0AB3521459333DCEF6A4A5D70C5D32B0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		bool L_5;
		L_5 = UnmanagedRefCountedList_1_get_IsEmpty_mB1BF30169E77B2C7AA4C2D05D91445827E62BE2D(L_4, NULL);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_6 = ___0_self;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_t116A19AF0AB3521459333DCEF6A4A5D70C5D32B0_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 1)),il2cpp_codegen_runtime_class_init_inline);
		UnmanagedRefCountedList_1_UnsafeRelease_mD17175272CAD75247D69B8005777F263A6CA818E(L_6, il2cpp_rgctx_method(method->rgctx_data, 3));
	}

IL_0023:
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_7 = ___0_self;
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC L_8 = ___1_other;
		*(UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*)L_7 = L_8;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedRefCountedListExtensions_CopyFrom_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m27C7816899EFA0C6ED703C50EC5AA09B5A34B3D8_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* ___0_self, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___1_other, Func_2_tAD3C25E447E01C5173D4EF30C14D5F69437441FD* ___2_convert, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(UnmanagedRefCountedList_1_t78BE89586B4F84171AF55770EB9B0E6D6FED7BE6_StaticInit);
	const uint32_t SizeOf_T_tF82C44D47BED67C05E55882DE04760E127EDA661 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 7));
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_tF82C44D47BED67C05E55882DE04760E127EDA661);
	const uint32_t SizeOf_TOther_t67A20CFA829EAF62E40EA9796F0A3B4718051875 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TOther_t67A20CFA829EAF62E40EA9796F0A3B4718051875);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___1_other;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000c;
	}

IL_0006:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_1 = ___1_other;
		int32_t L_2;
		L_2 = List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_inline(L_1, NULL);
		G_B3_0 = L_2;
	}

IL_000c:
	{
		V_0 = G_B3_0;
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_3 = ___0_self;
		int32_t L_4 = V_0;
		UnmanagedRefCountedListExtensions_PrepareWrite_TisIl2CppFullySharedGenericStruct_mE0BCB9507B8C736AC77C699536E4C4FC7454A283(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_1 = 0;
		goto IL_0035;
	}

IL_0018:
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_5 = ___0_self;
		int32_t L_6 = V_1;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_t78BE89586B4F84171AF55770EB9B0E6D6FED7BE6_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 3)),il2cpp_codegen_runtime_class_init_inline);
		Il2CppFullySharedGenericStruct* L_7;
		L_7 = UnmanagedRefCountedList_1_get_Item_m1656338369EC4E02E5134C83B9F0976EB9ACA55F(L_5, L_6, il2cpp_rgctx_method(method->rgctx_data, 2));
		Func_2_tAD3C25E447E01C5173D4EF30C14D5F69437441FD* L_8 = ___2_convert;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_9 = ___1_other;
		int32_t L_10 = V_1;
		List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937(L_9, L_10, (Il2CppFullySharedGenericAny*)L_11, il2cpp_rgctx_method(method->rgctx_data, 4));
		Func_2_Invoke_m3C6E3FE19083ED6CD16AF5FF6945C1EC49121BE7(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericStruct*)L_12, NULL);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_7, L_12, SizeOf_T_tF82C44D47BED67C05E55882DE04760E127EDA661);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 7), (void**)(Il2CppFullySharedGenericStruct*)L_7, (void*)L_12);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0035:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnmanagedRefCountedListExtensions_PrepareWrite_TisIl2CppFullySharedGenericStruct_mE0BCB9507B8C736AC77C699536E4C4FC7454A283_fshared (UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* ___0_self, int32_t ___1_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(UnmanagedRefCountedList_1_tBE228B378C04195CEBC51848BA70C37959809841_StaticInit);
	{
		int32_t L_0 = ___1_count;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_1 = ___0_self;
		UnmanagedRefCountedListExtensions_Clear_TisIl2CppFullySharedGenericStruct_m6EFE521D8B6AA05E101FE1E54873BBCD9C8FF002(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}

IL_000a:
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_2 = ___0_self;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_tBE228B378C04195CEBC51848BA70C37959809841_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 2)),il2cpp_codegen_runtime_class_init_inline);
		bool L_3;
		L_3 = UnmanagedRefCountedList_1_get_IsEmpty_mB1BF30169E77B2C7AA4C2D05D91445827E62BE2D(L_2, NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_4 = ___0_self;
		int32_t L_5 = ___1_count;
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC L_6;
		memset((&L_6), 0, sizeof(L_6));
		UnmanagedRefCountedList_1__ctor_m1A1BC9ABD2A9D7B9C7434073D1F52063C8F92056((&L_6), L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*)L_4 = L_6;
		return;
	}

IL_001f:
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_7 = ___0_self;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_tBE228B378C04195CEBC51848BA70C37959809841_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_8;
		L_8 = UnmanagedRefCountedList_1_get_UnsafeCount_mB26A16BA73F814B21A7B219936FD2ED30B4D6E3D(L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		int32_t L_9 = ___1_count;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
		{
			goto IL_0033;
		}
	}
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_10 = ___0_self;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_tBE228B378C04195CEBC51848BA70C37959809841_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 2)),il2cpp_codegen_runtime_class_init_inline);
		int32_t* L_11;
		L_11 = UnmanagedRefCountedList_1_get_UnsafeRefCount_m6C212A28A6097E4E5A853E7B482F8BC3D6291488(L_10, il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_12 = *(L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}

IL_0033:
	{
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_13 = ___0_self;
		CHECKED_LOCAL_INIT(UnmanagedRefCountedList_1_tBE228B378C04195CEBC51848BA70C37959809841_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 2)),il2cpp_codegen_runtime_class_init_inline);
		UnmanagedRefCountedList_1_UnsafeRelease_mD17175272CAD75247D69B8005777F263A6CA818E(L_13, il2cpp_rgctx_method(method->rgctx_data, 6));
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC* L_14 = ___0_self;
		int32_t L_15 = ___1_count;
		UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC L_16;
		memset((&L_16), 0, sizeof(L_16));
		UnmanagedRefCountedList_1__ctor_m1A1BC9ABD2A9D7B9C7434073D1F52063C8F92056((&L_16), L_15, il2cpp_rgctx_method(method->rgctx_data, 3));
		*(UnmanagedRefCountedList_1_t8B02F7EA0267E2F24A9C139864512B7B0BBE81BC*)L_14 = L_16;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_mA6877EB6A5CE3EEE6671E72022081A718D8CBEC8_fshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_mFEF319F8CEF9CA5FD56DB2E46B519799801465DC_fshared (Il2CppFullySharedGenericAny* ___0_source, uintptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uintptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Unsafe_As_TisIl2CppSharedGenericObject_mF43B42CDF61533403D004E09920FB9F3F7CFD768_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_o;
		return (Il2CppSharedGenericObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m6A2B605DB158987669F45298C591DC5876B5128C_fshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mB3F08848197461508634619D2125BFB713699361_fshared (Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericAny*,intptr_t,false,false>(L_0,NULL));
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_mF06D34D5150ECDA41C2E3902F90C988F2CF868CB_fshared (void* ___0_source, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		void* L_0 = ___0_source;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Il2CppFullySharedGenericAny*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m14D483BC40001F823BDC3F9AFAA26C86027B655A_fshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0BE9A499D7700B8625DF3E0AAF1EB1345188F8EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t0BE9A499D7700B8625DF3E0AAF1EB1345188F8EE);
	{
		uint8_t* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t0BE9A499D7700B8625DF3E0AAF1EB1345188F8EE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t0BE9A499D7700B8625DF3E0AAF1EB1345188F8EE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m535CEEECB2FC10C90C764D5AD3CC65EA97DEBD00_fshared (void* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t15D3C2F20CB4F9D5A08E7998BE25B9AB3C131769 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t15D3C2F20CB4F9D5A08E7998BE25B9AB3C131769);
	{
		void* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t15D3C2F20CB4F9D5A08E7998BE25B9AB3C131769);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_t15D3C2F20CB4F9D5A08E7998BE25B9AB3C131769);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_m9333BB4BE96C96F379EBC63E590625F638A12AB2_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tEBAD0940DB52DC5349543CC3BDE62C848B32B00D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tEBAD0940DB52DC5349543CC3BDE62C848B32B00D;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_m4A21AE425C18E39310C29B4F493602AA6E56A6D9_fshared (uint8_t* ___0_destination, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tFDE785E318899B2ADBC90EFA1364A3B76599F750 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tFDE785E318899B2ADBC90EFA1364A3B76599F750);
	{
		uint8_t* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tFDE785E318899B2ADBC90EFA1364A3B76599F750);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_tFDE785E318899B2ADBC90EFA1364A3B76599F750);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_m8E4966BB8B73735827F57FFA14E1947FA84C9394_fshared (void* ___0_destination, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t7D75490B2823EDFE685A24645133F767DDEE1DCB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t7D75490B2823EDFE685A24645133F767DDEE1DCB);
	{
		void* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_t7D75490B2823EDFE685A24645133F767DDEE1DCB);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_t7D75490B2823EDFE685A24645133F767DDEE1DCB);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 TypePathVisitor_get_Path_m6BC0A732F2057444371812A4B9B952A9FEF74378_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, const RuntimeMethod* method) 
{
	{
		PropertyPath_tA523CA2740853534DF6C009C588464B45A6D0A79 L_0 = __this->___U3CPathU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PropertyPathPart_get_Kind_m18581157E2924A9BF9FC8166CF98CBA468016541_inline (PropertyPathPart_tFB308743948D2298957DC1898D90AF2ACFED9DFF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Kind;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TypePathVisitor_get_ReturnCode_m7A088F27D0126D165F2C83538853810302CAA574_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CReturnCodeU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TypePathVisitor_set_ReturnCode_m4BD0A1BF508D661CE97F4E2646A1D5DA8AEEDBA9_inline (TypePathVisitor_t654A63AF43DC56C53E3D776E5DAD7FE2C00DD81E* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CReturnCodeU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t math_ceilpow2_m55F757254B1339A2FAC288807A06BFF24898B214_inline (uint32_t ___0_x, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = ___0_x;
		___0_x = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1));
		uint32_t L_1 = ___0_x;
		uint32_t L_2 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_1|((int32_t)((uint32_t)L_2>>1))));
		uint32_t L_3 = ___0_x;
		uint32_t L_4 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_3|((int32_t)((uint32_t)L_4>>2))));
		uint32_t L_5 = ___0_x;
		uint32_t L_6 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_5|((int32_t)((uint32_t)L_6>>4))));
		uint32_t L_7 = ___0_x;
		uint32_t L_8 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_7|((int32_t)((uint32_t)L_8>>8))));
		uint32_t L_9 = ___0_x;
		uint32_t L_10 = ___0_x;
		___0_x = ((int32_t)((int32_t)L_9|((int32_t)((uint32_t)L_10>>((int32_t)16)))));
		uint32_t L_11 = ___0_x;
		return ((int32_t)il2cpp_codegen_add((int32_t)L_11, 1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_max_mC58900240F2A88F08AD67CA1F3F4360987100521_inline (int64_t ___0_x, int64_t ___1_y, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_x;
		int64_t L_1 = ___1_y;
		if ((((int64_t)L_0) > ((int64_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int64_t L_2 = ___1_y;
		return L_2;
	}

IL_0006:
	{
		int64_t L_3 = ___0_x;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_volumeDepth_mEF9610D1C14182417A01B7243DEE6B559A13B34D_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CvolumeDepthU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_msaaSamples_mFCC33643AFF2265C8305DCFD79ED8774A1A8FA22_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CmsaaSamplesU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_msaaSamples_m6910E09489372746391B14FBAF59A7237539D6C4_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CmsaaSamplesU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_dimension_mCE9A4A08454BB2D9DFE3E505EC336FD480078F39_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CdimensionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_width_m3B2494007BFE3AD4D14403407C9B24F5045E7E10_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CwidthU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RenderTextureDescriptor_set_height_m1FE41111472DAA9B5E80FFAF3445004D72A3CFA5_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CheightU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_width_mB159E4EB08B23B19CCCFADB465864361FB840BFF_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CwidthU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_2 = ___1_b;
		return L_2;
	}

IL_0006:
	{
		int32_t L_3 = ___0_a;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RenderTextureDescriptor_get_height_m1006F9AA45029715C552C8A8C2F102F63D3A91EC_inline (RenderTextureDescriptor_t69845881CE6437E4E61F92074F2F84079F23FA46* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CheightU3Ek__BackingField;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t8EBE725B2740B3ECE9C2D5E9EBEB0B97172D5E18;
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_fshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tA18DF2C95F416AEB06D5F0702F37CBD85E8A7FB8_m934B08DAF1EA7B249CA769E8DCA4EBAC6AEB1885_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
