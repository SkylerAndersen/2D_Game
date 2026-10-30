#include "pch-cpp.hpp"





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

struct Dictionary_2_t21E090827BAF9D0D011CB55C02CA666756BF1AE7;
struct Dictionary_2_t54101FB5AEA0292C95D30CFAB7909873BF26E0B9;
struct Dictionary_2_tF2CA361C11DA75A3918E2B7E109B116AF019CE71;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct List_1_t1EFB69EBBF25AD12F3A9E56C62B12F01D63469CD;
struct List_1_t67B4F73A05A1220FF45824DBE29F391490B25A0C;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2;
struct BatchLayer_t9B7CC333E894912E5BCA7BF8643CCE343E09FC23;
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8;
struct DebugDisplayGPUResidentDrawer_tF9C1E662C774B366AD07B9EB4E0DB7FF5BFFC278;
struct GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009;
struct GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F;
struct IDebugDisplaySettingsPanelDisposable_t742137366622D0021331003EF33F4A2DE63D327C;
struct IGPUResidentRenderPipeline_t515F75DEF0110D5B2559A5A58C7588566A0C9BA4;
struct IRenderPipelineGraphicsSettings_tFD0CD27795DA54240F76B377D953AA3DD9929947;
struct InternalRenderGraphContext_t7197268EBA8C241EB895B070A5E0C71B111D7503;
struct NativePassCompiler_t4E5CE894AF5B8832B5828B22DAB0EA4FAC819E07;
struct RenderGraph_t73ECE03B3CA3D0D17F1448D64AE020E81592AA1E;
struct RenderGraphBuilders_t899F9362CCFA453C5AF608B820107C9C37860D2A;
struct RenderGraphCompilationCache_t25B996EBE41BF50CAE9A81E97B9BBE376AAB55D2;
struct RenderGraphDebugParams_t36422B33508548E3E56CBAD04521104C2B3E669D;
struct RenderGraphDefaultResources_tCE331152C84ED1A36CF186CA0092AE10E599E25D;
struct RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437;
struct RenderGraphResourceRegistry_t87A07027B2175239DB5239913091B9D9FE7244D1;
struct RenderGraphValidationLayer_tBF2C2015E4548F52F7C144F5B1FC3177250AC01C;
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692;
struct String_t;
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5;
struct IContainer_tBD9F21C42D4253E306C4EF7CFC72480E0C7C89B5;
struct Panel_t3A0D2006E8AEA607A6DF5188138E463A26085295;
struct Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF;
struct OnExecutionRegisteredDelegate_tCCD234646691F298602408925867AE91256D2226;
struct OnGraphRegisteredDelegate_t7DEB75DB071EA0F49C47E2617D72D40EF3A8188C;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGPUResidentRenderPipeline_t515F75DEF0110D5B2559A5A58C7588566A0C9BA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231____errorShader_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6____commandBuffer_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0F99B3A75032DCEBB07BD1AA110CB03AC17BB285;
IL2CPP_EXTERN_C String_t* _stringLiteral2E971C6CF78421785C5682D3CFC1AE98998A150A;
IL2CPP_EXTERN_C String_t* _stringLiteral78EC543F68E260BC404FB979472DDCBAB1952E12;
IL2CPP_EXTERN_C String_t* _stringLiteral8A252B976FA4B7CA2512142DD332BA7B65CD0B40;
IL2CPP_EXTERN_C String_t* _stringLiteralA13DB0C8C15A5C38205107A0DD5B53620BACB630;
IL2CPP_EXTERN_C String_t* _stringLiteralA450CC1573F29AD5BDF369E54F23FA0616194993;
IL2CPP_EXTERN_C String_t* _stringLiteralBB63887534206DFC622D715A6951785C1FD6D322;
IL2CPP_EXTERN_C String_t* _stringLiteralBC386B2603BCE6671A9912835548A45A479C36C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD02DD7BE73A42A3A3DA7E1FAA3A0ECDAFCC47D84;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisWidget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF_m835B299E305E3B40701D4386B04D425EC5F75371_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m9307F65BDB77DA16B533E312EC230CE32FFA45EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_0_0_0_var;
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388;;
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com;
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com;;
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke;
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke;;

struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_t8722E8655D9AA09B342C98087C79901D7FEAC3BC 
{
};
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};
struct BatchLayer_t9B7CC333E894912E5BCA7BF8643CCE343E09FC23  : public RuntimeObject
{
};
struct DebugDisplayGPUResidentDrawer_tF9C1E662C774B366AD07B9EB4E0DB7FF5BFFC278  : public RuntimeObject
{
	bool ___occluderDebugViewEnable;
};
struct GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009  : public RuntimeObject
{
};
struct OcclusionTestMethods_t975716BDFB2293DC09F6C7B99DE3CADEF25F40B3  : public RuntimeObject
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
struct EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5  : public RuntimeObject
{
};
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	bool ___hasValue;
	bool ___value;
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
struct RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6 
{
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___commandBuffer;
};
struct RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshaled_pinvoke
{
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___commandBuffer;
};
struct RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshaled_com
{
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___commandBuffer;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct SubviewOcclusionTest_t4C10094E5EF2C745723FEFE4E5749FBB75CAA026 
{
	int32_t ___cullingSplitIndex;
	int32_t ___occluderSubviewIndex;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
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
struct float4_t545A994996126766890C1F28B43EA823F2410190 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct ByReference_1_t7AFB8E16F9D591CD3B3EE50865A40D621B9028D1 
{
	intptr_t ____value;
};
struct ByReference_1_t9B11575042087999A6BC8C21CB3BAC178D57E466 
{
	intptr_t ____value;
};
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct GPUResidentDrawerMode_t25B237C91A9832B9A2C0DA9F7D85CF2BAE44BD2C 
{
	uint8_t ___value__;
};
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
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
struct OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7 
{
	int32_t ___subviewIndex;
	int32_t ___depthSliceIndex;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthOffset;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___viewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___invViewMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___gpuProjMatrix;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___viewOffsetWorldSpace;
};
struct OcclusionTest_tFF967683F812A2788B5C8A9A220B83B43060435E 
{
	int32_t ___value__;
};
struct RenderGraphResourceType_t5F552AF06E38DEC5775B77F13C8783A895FCD086 
{
	int32_t ___value__;
};
struct RenderGraphState_tFB60E034516492478A523A4D4EB7E380C799C1E3 
{
	int32_t ___value__;
};
struct RenderTextureUVOriginStrategy_tF0BD7F9A575F4903AF5B5C23DE87AF324D2442D7 
{
	int32_t ___value__;
};
struct Flags_tBBD3C554E9057BB9AC0476F92D0328575F2C4193 
{
	int32_t ___value__;
};
struct Version_tD7D04795609BC9C1E990ED06047639A320FA1062 
{
	int32_t ___value__;
};
struct ReadOnlySpan_1_t9B25EFB1CF91958EB1F59EE0FF50F09C87631AE8 
{
	ByReference_1_t7AFB8E16F9D591CD3B3EE50865A40D621B9028D1 ____pointer;
	int32_t ____length;
};
struct ReadOnlySpan_1_tFBC0482980BECAC34D5B41E0EF4D72F24C6E3AF9 
{
	ByReference_1_t9B11575042087999A6BC8C21CB3BAC178D57E466 ____pointer;
	int32_t ____length;
};
struct ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F  : public RuntimeObject
{
	int32_t ___m_Version;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___m_InstanceDataBufferCopyKernels;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___m_InstanceDataBufferUploadKernels;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___m_TransformUpdaterKernels;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___m_WindDataUpdaterKernels;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___m_OccluderDepthPyramidKernels;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___m_InstanceOcclusionCullingKernels;
	ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___m_OcclusionCullingDebugKernels;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_DebugOcclusionTestPS;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___m_DebugOccluderPS;
};
struct GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231 
{
	uint8_t ___mode;
	bool ___supportDitheringCrossFade;
	bool ___enableOcclusionCulling;
	bool ___allowInEditMode;
	float ___smallMeshScreenPercentage;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___shadowSmallMeshScreenPercentages;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___errorShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___loadingShader;
};
struct GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshaled_pinvoke
{
	uint8_t ___mode;
	int32_t ___supportDitheringCrossFade;
	int32_t ___enableOcclusionCulling;
	int32_t ___allowInEditMode;
	float ___smallMeshScreenPercentage;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___shadowSmallMeshScreenPercentages;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___errorShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___loadingShader;
};
struct GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshaled_com
{
	uint8_t ___mode;
	int32_t ___supportDitheringCrossFade;
	int32_t ___enableOcclusionCulling;
	int32_t ___allowInEditMode;
	float ___smallMeshScreenPercentage;
	float4_t545A994996126766890C1F28B43EA823F2410190 ___shadowSmallMeshScreenPercentages;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___errorShader;
	Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___loadingShader;
};
struct OcclusionCullingSettings_tC718E8CFEFA8FAAC25DA4E151AEBC0268999D842 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewInstanceID;
	int32_t ___occlusionTest;
	int32_t ___instanceMultiplier;
};
struct RenderGraph_t73ECE03B3CA3D0D17F1448D64AE020E81592AA1E  : public RuntimeObject
{
	NativePassCompiler_t4E5CE894AF5B8832B5828B22DAB0EA4FAC819E07* ___nativeCompiler;
	bool ___U3CnativeRenderPassesEnabledU3Ek__BackingField;
	RenderGraphResourceRegistry_t87A07027B2175239DB5239913091B9D9FE7244D1* ___m_Resources;
	RenderGraphObjectPool_t2F5488D55D836B54B6E85D2952105BA61AEE6437* ___m_RenderGraphPool;
	RenderGraphBuilders_t899F9362CCFA453C5AF608B820107C9C37860D2A* ___m_builderInstance;
	RenderGraphValidationLayer_tBF2C2015E4548F52F7C144F5B1FC3177250AC01C* ___m_ValidationLayer;
	List_1_t1EFB69EBBF25AD12F3A9E56C62B12F01D63469CD* ___m_RenderPasses;
	List_1_t67B4F73A05A1220FF45824DBE29F391490B25A0C* ___m_RendererLists;
	RenderGraphDebugParams_t36422B33508548E3E56CBAD04521104C2B3E669D* ___m_DebugParameters;
	RenderGraphDefaultResources_tCE331152C84ED1A36CF186CA0092AE10E599E25D* ___m_DefaultResources;
	Dictionary_2_t21E090827BAF9D0D011CB55C02CA666756BF1AE7* ___m_DefaultProfilingSamplers;
	InternalRenderGraphContext_t7197268EBA8C241EB895B070A5E0C71B111D7503* ___m_RenderGraphContext;
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___m_PreviousCommandBuffer;
	RenderGraphCompilationCache_t25B996EBE41BF50CAE9A81E97B9BBE376AAB55D2* ___m_CompilationCache;
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___m_CurrentExecutionId;
	bool ___m_CurrentExecutionCanGenerateDebugData;
	int32_t ___m_ExecutionCount;
	int32_t ___m_CurrentFrameIndex;
	bool ___m_ExecutionExceptionWasRaised;
	bool ___m_EnableCompilationCaching;
	int32_t ___m_RenderGraphState;
	int32_t ___m_renderTextureUVOriginStrategy;
	String_t* ___U3CnameU3Ek__BackingField;
	Dictionary_2_t54101FB5AEA0292C95D30CFAB7909873BF26E0B9* ___registeredGlobals;
};
struct ResourceHandle_tD3B1FFBD59EB9C23F0A020351836F834C4BD276C 
{
	uint32_t ___m_VersionIndex;
	uint32_t ___m_Validity;
	int32_t ___m_Type;
};
struct Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF  : public RuntimeObject
{
	int32_t ___U3CorderU3Ek__BackingField;
	Panel_t3A0D2006E8AEA607A6DF5188138E463A26085295* ___m_Panel;
	RuntimeObject* ___m_Parent;
	int32_t ___U3CflagsU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	String_t* ___U3CtooltipU3Ek__BackingField;
	String_t* ___U3CqueryPathU3Ek__BackingField;
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___isHiddenCallback;
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
struct OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123 
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewInstanceID;
	int32_t ___subviewCount;
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 ___depthTexture;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthSize;
	bool ___depthIsArray;
};
struct OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshaled_pinvoke
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewInstanceID;
	int32_t ___subviewCount;
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke ___depthTexture;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthSize;
	int32_t ___depthIsArray;
};
struct OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshaled_com
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___viewInstanceID;
	int32_t ___subviewCount;
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com ___depthTexture;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___depthSize;
	int32_t ___depthIsArray;
};
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value;
};
struct GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_StaticFields
{
	bool ___U3CMaintainContextU3Ek__BackingField;
	bool ___U3CForceOcclusionU3Ek__BackingField;
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
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
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
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
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
struct float4_t545A994996126766890C1F28B43EA823F2410190_StaticFields
{
	float4_t545A994996126766890C1F28B43EA823F2410190 ___zero;
};
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_StaticFields
{
	bool ___ThrowOnSetRenderTarget;
};
struct RenderGraph_t73ECE03B3CA3D0D17F1448D64AE020E81592AA1E_StaticFields
{
	int32_t ___kMaxMRTCount;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___s_EnableCompilationCachingForTests;
	Dictionary_2_tF2CA361C11DA75A3918E2B7E109B116AF019CE71* ___s_RegisteredExecutions;
	bool ___U3CenableValidityChecksU3Ek__BackingField;
	OnGraphRegisteredDelegate_t7DEB75DB071EA0F49C47E2617D72D40EF3A8188C* ___onGraphRegistered;
	OnGraphRegisteredDelegate_t7DEB75DB071EA0F49C47E2617D72D40EF3A8188C* ___onGraphUnregistered;
	OnExecutionRegisteredDelegate_tCCD234646691F298602408925867AE91256D2226* ___onExecutionRegistered;
	bool ___s_DebugSessionWasActive;
};
struct TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_StaticFields
{
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 ___s_NullHandle;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2  : public RuntimeArray
{
	ALIGN_FIELD (8) Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF* m_Items[1];

	inline Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Widget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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

IL2CPP_EXTERN_C void TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_pinvoke(const TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388& unmarshaled, TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_pinvoke_back(const TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke& marshaled, TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388& unmarshaled);
IL2CPP_EXTERN_C void TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_pinvoke_cleanup(TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_com(const TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388& unmarshaled, TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com& marshaled);
IL2CPP_EXTERN_C void TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_com_back(const TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com& marshaled, TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388& unmarshaled);
IL2CPP_EXTERN_C void TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_com_cleanup(TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshaled_com& marshaled);

IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisIl2CppFullySharedGenericAny_mAE27F34C4FCEBE5FBBE2B6F96B1C0B792D48E32E_fshared (RuntimeObject* ___0_settings, Il2CppFullySharedGenericAny* ___1_currentPropertyValue, Il2CppFullySharedGenericAny ___2_newValue, String_t* ___3_propertyName, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptySettingsPanel__ctor_m6FC01BD90AC84514E3BE2DEA42470278001140E9 (EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5* __this, const RuntimeMethod* method) ;
inline WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2* Array_Empty_TisWidget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF_m835B299E305E3B40701D4386B04D425EC5F75371_inline (const RuntimeMethod* method)
{
	return ((  WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_fshared_inline)(method);
}
inline void RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536 (RuntimeObject* ___0_settings, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8** ___1_currentPropertyValue, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___2_newValue, String_t* ___3_propertyName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, String_t*, const RuntimeMethod*))RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisIl2CppFullySharedGenericAny_mAE27F34C4FCEBE5FBBE2B6F96B1C0B792D48E32E_fshared)(___0_settings, (Il2CppFullySharedGenericAny*)___1_currentPropertyValue, (Il2CppFullySharedGenericAny)___2_newValue, ___3_propertyName, method);
}
inline void RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m9307F65BDB77DA16B533E312EC230CE32FFA45EB (RuntimeObject* ___0_settings, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692** ___1_currentPropertyValue, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___2_newValue, String_t* ___3_propertyName, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, String_t*, const RuntimeMethod*))RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisIl2CppFullySharedGenericAny_mAE27F34C4FCEBE5FBBE2B6F96B1C0B792D48E32E_fshared)(___0_settings, (Il2CppFullySharedGenericAny*)___1_currentPropertyValue, (Il2CppFullySharedGenericAny)___2_newValue, ___3_propertyName, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_zero_mF92C338E9CB9434105090E675E04D20A29649553_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 TextureHandle_get_nullHandle_m077A7652CAF9B2004942375C6F1CCFD714AA9E19_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_Reinitialize_m542E6537EC9C14A35291824BA6798D5D0D747190 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_LogMessage_m7FF3E65D1A87DF183F9D29254AE637D842B88D41 (String_t* ___0_message, int32_t ___1_severity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUResidentDrawer_IsProjectSupported_m4F5CDE5F81A0BE7CF42E37F1545E85A8C5A07DE3 (String_t** ___0_message, int32_t* ___1_severity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUResidentDrawer_IsInitialized_m73E4C12B8404C762646ECEC57CAC05DEE3BA3E73 (const RuntimeMethod* method) ;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchLayer__ctor_m5B65286582FB01A261387F6EB54330C8E47C3CFD (BatchLayer_t9B7CC333E894912E5BCA7BF8643CCE343E09FC23* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugDisplayGPUResidentDrawer_get_AreAnySettingsActive_m749C09E9C318C2B5073709110F7D2DEFA890D144 (DebugDisplayGPUResidentDrawer_tF9C1E662C774B366AD07B9EB4E0DB7FF5BFFC278* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugDisplayGPUResidentDrawer_get_IsPostProcessingAllowed_m18A00DF3C6845F6EB6E85FEF8FAFD3A4458B4DE3 (DebugDisplayGPUResidentDrawer_tF9C1E662C774B366AD07B9EB4E0DB7FF5BFFC278* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugDisplayGPUResidentDrawer_get_IsLightingActive_m043DDEA409C65069FE6EB254A58195135068A9A1 (DebugDisplayGPUResidentDrawer_tF9C1E662C774B366AD07B9EB4E0DB7FF5BFFC278* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DebugDisplayGPUResidentDrawer_TryGetScreenClearColor_m8EF35A1BD3CE911D205A4031178454C2354F76FB (DebugDisplayGPUResidentDrawer_tF9C1E662C774B366AD07B9EB4E0DB7FF5BFFC278* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* ___0_color, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DebugDisplayGPUResidentDrawer_UnityEngine_Rendering_IDebugDisplaySettingsData_CreatePanel_m742018A2D4F79F94FD7B9A29434307A7519FD155 (DebugDisplayGPUResidentDrawer_tF9C1E662C774B366AD07B9EB4E0DB7FF5BFFC278* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5* L_0 = (EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5*)il2cpp_codegen_object_new(EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5_il2cpp_TypeInfo_var);
		EmptySettingsPanel__ctor_m6FC01BD90AC84514E3BE2DEA42470278001140E9(L_0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugDisplayGPUResidentDrawer__ctor_mC29313F658266A745F986BBC51F16C4AF1287947 (DebugDisplayGPUResidentDrawer_tF9C1E662C774B366AD07B9EB4E0DB7FF5BFFC278* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EmptySettingsPanel_get_PanelName_m4756A52FE5232E9CB3D3F980D8B1E7CFE514A0AF (EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2* EmptySettingsPanel_get_Widgets_mEC905DF82E5C6AA020DC93A26CE7C9F43A89BF5D (EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisWidget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF_m835B299E305E3B40701D4386B04D425EC5F75371_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WidgetU5BU5D_t39DEA55B87EF43C59C5699E0340B34185BA1E4A2* L_0;
		L_0 = Array_Empty_TisWidget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF_m835B299E305E3B40701D4386B04D425EC5F75371_inline(Array_Empty_TisWidget_tE8D6AF1D7525CC84E8F2C3B73162016736A6A2FF_m835B299E305E3B40701D4386B04D425EC5F75371_RuntimeMethod_var);
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EmptySettingsPanel_get_Flags_mE6ED2100F6ACC3EE8091FB54D58762F48C863B1A (EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptySettingsPanel_Dispose_mE991D37CF8A9594A920BDF69502098998D808D84 (EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptySettingsPanel__ctor_m6FC01BD90AC84514E3BE2DEA42470278001140E9 (EmptySettingsPanel_tA060AF65FFD3BD25B14E42A85F0DB046226F23B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUResidentDrawer_IsProjectSupported_m8070103F51F3975E8D573377D445553710EBA457 (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUResidentDrawer_IsProjectSupported_m4F5CDE5F81A0BE7CF42E37F1545E85A8C5A07DE3 (String_t** ___0_message, int32_t* ___1_severity, const RuntimeMethod* method) 
{
	{
		String_t** L_0 = ___0_message;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		*(((RuntimeObject**)L_0)) = ((RuntimeObject*)L_1);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_0), (void*)((RuntimeObject*)L_1));
		int32_t* L_2 = ___1_severity;
		*(((int32_t*)L_2)) = 3;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUResidentDrawer_IsGPUResidentDrawerSupportedBySRP_m24CCB3D5623CD94D8DA06D20CE59806BC9D35922 (GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231 ___0_settings, String_t** ___1_message, int32_t* ___2_severity, const RuntimeMethod* method) 
{
	{
		String_t** L_0 = ___1_message;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		*(((RuntimeObject**)L_0)) = ((RuntimeObject*)L_1);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_0), (void*)((RuntimeObject*)L_1));
		int32_t* L_2 = ___2_severity;
		*(((int32_t*)L_2)) = 3;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_LogMessage_m7FF3E65D1A87DF183F9D29254AE637D842B88D41 (String_t* ___0_message, int32_t ___1_severity, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUResidentDrawer_IsInstanceOcclusionCullingEnabled_m03F098AAAA5FCB8140B53C641EB2B0381669BC8E (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_PostCullBeginCameraRendering_m3EB60CDFBF342ABD0B11B30439BB01B7CD6F1F77 (RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6 ___0_context, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_OnSetupAmbientProbe_mF67DC77B41AD752F71A25EA4221AA3180AA236CC (const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_InstanceOcclusionTest_m0DD4F0A4685967C617984FBCE5A0B99A35790AFE (RenderGraph_t73ECE03B3CA3D0D17F1448D64AE020E81592AA1E* ___0_renderGraph, OcclusionCullingSettings_tC718E8CFEFA8FAAC25DA4E151AEBC0268999D842* ___1_settings, ReadOnlySpan_1_tFBC0482980BECAC34D5B41E0EF4D72F24C6E3AF9 ___2_subviewOcclusionTests, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_UpdateInstanceOccluders_mD2F1BAB128CEB6B6A731FEA876A1E08A31C98B30 (RenderGraph_t73ECE03B3CA3D0D17F1448D64AE020E81592AA1E* ___0_renderGraph, OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123* ___1_occluderParameters, ReadOnlySpan_1_t9B25EFB1CF91958EB1F59EE0FF50F09C87631AE8 ___2_occluderSubviewUpdates, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_ReinitializeIfNeeded_mE8A70A9A6B9C8D4A341552E05D95E4D74B7D68D5 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_RenderDebugOcclusionTestOverlay_mA9DDE2B4F74EF60EEFF1C4BDDA1DEF3919267BF9 (RenderGraph_t73ECE03B3CA3D0D17F1448D64AE020E81592AA1E* ___0_renderGraph, DebugDisplayGPUResidentDrawer_tF9C1E662C774B366AD07B9EB4E0DB7FF5BFFC278* ___1_debugSettings, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___2_viewID, TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 ___3_colorBuffer, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_RenderDebugOccluderOverlay_mB7819CD0C90F839351CE854B2DD297D14F5F830B (RenderGraph_t73ECE03B3CA3D0D17F1448D64AE020E81592AA1E* ___0_renderGraph, DebugDisplayGPUResidentDrawer_tF9C1E662C774B366AD07B9EB4E0DB7FF5BFFC278* ___1_debugSettings, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_screenPos, float ___3_maxHeight, TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 ___4_colorBuffer, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUResidentDrawer_IsInitialized_m73E4C12B8404C762646ECEC57CAC05DEE3BA3E73 (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_Reinitialize_m542E6537EC9C14A35291824BA6798D5D0D747190 (const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUResidentDrawer_IsForcedOnViaCommandLine_mC2F9713BA2691A02C23E22E59DDC30E41289539F (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUResidentDrawer_IsOcclusionForcedOnViaCommandLine_mA0CD2D200E26C820386D92E58645EF2FF0B02FDA (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUResidentDrawer_get_MaintainContext_mC393C718E2CF175293B7B1E86C7C70A5AC6D046C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_StaticFields*)il2cpp_codegen_static_fields_for(GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_il2cpp_TypeInfo_var))->___U3CMaintainContextU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_set_MaintainContext_m4A9032B2B6255EDC8EE357CA1D9195F8D8CD9885 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_StaticFields*)il2cpp_codegen_static_fields_for(GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_il2cpp_TypeInfo_var))->___U3CMaintainContextU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GPUResidentDrawer_get_ForceOcclusion_m6C97AA5F01C6062E108460F76FB92745C07CB4CC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_StaticFields*)il2cpp_codegen_static_fields_for(GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_il2cpp_TypeInfo_var))->___U3CForceOcclusionU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer_set_ForceOcclusion_m0DCC2179BB8525CA02EB0E70D6C7AE21D03228D6 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_StaticFields*)il2cpp_codegen_static_fields_for(GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009_il2cpp_TypeInfo_var))->___U3CForceOcclusionU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawer__ctor_m5B65F5E460857B8FF43EFC6FDE5E2CDB401D9C45 (GPUResidentDrawer_tB6F260E4DEC50D7E0DA2BD0CB131A51CDDCA3009* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GPUResidentDrawerResources_UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version_m136CCE7FDEBC9741FDCAB827F74D51A7B7DF6E07 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_Version;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* GPUResidentDrawerResources_get_instanceDataBufferCopyKernels_m4821367D99C54C654F6FC0F677D53038EACAEB40 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, const RuntimeMethod* method) 
{
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_0 = __this->___m_InstanceDataBufferCopyKernels;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawerResources_set_instanceDataBufferCopyKernels_m126688C4BE7907A678DE23AF2E3332DD8A34827A (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD02DD7BE73A42A3A3DA7E1FAA3A0ECDAFCC47D84);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8** L_0 = (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8**)(&__this->___m_InstanceDataBufferCopyKernels);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_1 = ___0_value;
		RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536(__this, L_0, L_1, _stringLiteralD02DD7BE73A42A3A3DA7E1FAA3A0ECDAFCC47D84, RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* GPUResidentDrawerResources_get_instanceDataBufferUploadKernels_mA900FCDAA87450DEBC3C134E015FA14685ADA9EA (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, const RuntimeMethod* method) 
{
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_0 = __this->___m_InstanceDataBufferUploadKernels;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawerResources_set_instanceDataBufferUploadKernels_m54B6A238CECBBA7093D5D1FEDA9B2C8E56332678 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F99B3A75032DCEBB07BD1AA110CB03AC17BB285);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8** L_0 = (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8**)(&__this->___m_InstanceDataBufferUploadKernels);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_1 = ___0_value;
		RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536(__this, L_0, L_1, _stringLiteral0F99B3A75032DCEBB07BD1AA110CB03AC17BB285, RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* GPUResidentDrawerResources_get_transformUpdaterKernels_mCA7A4849EFDC13E448339A6AEC42065FDAB5C63C (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, const RuntimeMethod* method) 
{
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_0 = __this->___m_TransformUpdaterKernels;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawerResources_set_transformUpdaterKernels_mC87744E70D4108F953B0C637C483AA5ABE685709 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E971C6CF78421785C5682D3CFC1AE98998A150A);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8** L_0 = (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8**)(&__this->___m_TransformUpdaterKernels);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_1 = ___0_value;
		RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536(__this, L_0, L_1, _stringLiteral2E971C6CF78421785C5682D3CFC1AE98998A150A, RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* GPUResidentDrawerResources_get_windDataUpdaterKernels_m2C5FADD001A37D11A324FE865E925CD9A5501315 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, const RuntimeMethod* method) 
{
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_0 = __this->___m_WindDataUpdaterKernels;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawerResources_set_windDataUpdaterKernels_m7828D337715FCE91AFEC15C34DAC0F61753A725F (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA13DB0C8C15A5C38205107A0DD5B53620BACB630);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8** L_0 = (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8**)(&__this->___m_WindDataUpdaterKernels);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_1 = ___0_value;
		RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536(__this, L_0, L_1, _stringLiteralA13DB0C8C15A5C38205107A0DD5B53620BACB630, RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* GPUResidentDrawerResources_get_occluderDepthPyramidKernels_m7006886C18CF45076331E4B6114CA37A3CE69532 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, const RuntimeMethod* method) 
{
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_0 = __this->___m_OccluderDepthPyramidKernels;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawerResources_set_occluderDepthPyramidKernels_m9103835307DA4F40F0439903A0E7DF5C8712B704 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA450CC1573F29AD5BDF369E54F23FA0616194993);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8** L_0 = (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8**)(&__this->___m_OccluderDepthPyramidKernels);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_1 = ___0_value;
		RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536(__this, L_0, L_1, _stringLiteralA450CC1573F29AD5BDF369E54F23FA0616194993, RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* GPUResidentDrawerResources_get_instanceOcclusionCullingKernels_m0096BB5665B29E5552385CC7C4990DDF95C6EDB1 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, const RuntimeMethod* method) 
{
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_0 = __this->___m_InstanceOcclusionCullingKernels;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawerResources_set_instanceOcclusionCullingKernels_m06138322ED0CC1A22774E0D41C74B4CE691BFFEE (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC386B2603BCE6671A9912835548A45A479C36C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8** L_0 = (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8**)(&__this->___m_InstanceOcclusionCullingKernels);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_1 = ___0_value;
		RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536(__this, L_0, L_1, _stringLiteralBC386B2603BCE6671A9912835548A45A479C36C1, RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* GPUResidentDrawerResources_get_occlusionCullingDebugKernels_m8B7B3517326F40890A0935A0DC1DD55C8B14F164 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, const RuntimeMethod* method) 
{
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_0 = __this->___m_OcclusionCullingDebugKernels;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawerResources_set_occlusionCullingDebugKernels_m94C497F616A9D90161CFEA216A07029CC55D0D27 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB63887534206DFC622D715A6951785C1FD6D322);
		s_Il2CppMethodInitialized = true;
	}
	{
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8** L_0 = (ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8**)(&__this->___m_OcclusionCullingDebugKernels);
		ComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8* L_1 = ___0_value;
		RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536(__this, L_0, L_1, _stringLiteralBB63887534206DFC622D715A6951785C1FD6D322, RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisComputeShader_tA7BDD0F6EE879D149480F5890BA2E665C50CFBF8_mB626479C1AFB7962C3CCF8700B4021E92D0A0536_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* GPUResidentDrawerResources_get_debugOcclusionTestPS_m0A869F58FF84A5B43E925DBE72A100212D672BF2 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, const RuntimeMethod* method) 
{
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->___m_DebugOcclusionTestPS;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawerResources_set_debugOcclusionTestPS_m2B0F9F3EC01C30490B37C40D1BACDB2919E88ACD (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m9307F65BDB77DA16B533E312EC230CE32FFA45EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78EC543F68E260BC404FB979472DDCBAB1952E12);
		s_Il2CppMethodInitialized = true;
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692** L_0 = (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692**)(&__this->___m_DebugOcclusionTestPS);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = ___0_value;
		RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m9307F65BDB77DA16B533E312EC230CE32FFA45EB(__this, L_0, L_1, _stringLiteral78EC543F68E260BC404FB979472DDCBAB1952E12, RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m9307F65BDB77DA16B533E312EC230CE32FFA45EB_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* GPUResidentDrawerResources_get_debugOccluderPS_m476766B8038CC61693711BEAB81BD5B65C95D9DD (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, const RuntimeMethod* method) 
{
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_0 = __this->___m_DebugOccluderPS;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawerResources_set_debugOccluderPS_m4A969CD0B817583E1A089F6C636A28F8F9F32835 (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m9307F65BDB77DA16B533E312EC230CE32FFA45EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A252B976FA4B7CA2512142DD332BA7B65CD0B40);
		s_Il2CppMethodInitialized = true;
	}
	{
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692** L_0 = (Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692**)(&__this->___m_DebugOccluderPS);
		Shader_tADC867D36B7876EE22427FAA2CE485105F4EE692* L_1 = ___0_value;
		RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m9307F65BDB77DA16B533E312EC230CE32FFA45EB(__this, L_0, L_1, _stringLiteral8A252B976FA4B7CA2512142DD332BA7B65CD0B40, RenderPipelineGraphicsSettingsExtensions_SetValueAndNotify_TisShader_tADC867D36B7876EE22427FAA2CE485105F4EE692_m9307F65BDB77DA16B533E312EC230CE32FFA45EB_RuntimeMethod_var);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GPUResidentDrawerResources__ctor_m9A9FBC773137C24968523F68F1ED3D55922BAF1C (GPUResidentDrawerResources_tF31988691B09711D8BC990FF1C2C0D9CAB77CC6F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C void RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshal_pinvoke(const RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6& unmarshaled, RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6____commandBuffer_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___commandBufferException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6____commandBuffer_FieldInfo_var, RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___commandBufferException, NULL);
}
IL2CPP_EXTERN_C void RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshal_pinvoke_back(const RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshaled_pinvoke& marshaled, RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6____commandBuffer_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___commandBufferException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6____commandBuffer_FieldInfo_var, RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___commandBufferException, NULL);
}
IL2CPP_EXTERN_C void RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshal_pinvoke_cleanup(RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshal_com(const RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6& unmarshaled, RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6____commandBuffer_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___commandBufferException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6____commandBuffer_FieldInfo_var, RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___commandBufferException, NULL);
}
IL2CPP_EXTERN_C void RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshal_com_back(const RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshaled_com& marshaled, RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6____commandBuffer_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___commandBufferException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6____commandBuffer_FieldInfo_var, RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___commandBufferException, NULL);
}
IL2CPP_EXTERN_C void RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshal_com_cleanup(RenderRequestBatcherContext_t3AAD08898BFDA0E8195A3D37B998ED2B5D49F3E6_marshaled_com& marshaled)
{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t OcclusionTestMethods_GetBatchLayerMask_m1CC038C215B2531DDD0A4C8AF03E2DC518A43D09 (int32_t ___0_occlusionTest, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_occlusionTest;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0006;
		}
	}
	{
		return (-1);
	}

IL_0006:
	{
		return ((int32_t)268435456);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OcclusionCullingSettings__ctor_mF35FDC1FEBAF098CE104296891779F13CED8229C (OcclusionCullingSettings_tC718E8CFEFA8FAAC25DA4E151AEBC0268999D842* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_viewInstanceID, int32_t ___1_occlusionTest, const RuntimeMethod* method) 
{
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_viewInstanceID;
		__this->___viewInstanceID = L_0;
		int32_t L_1 = ___1_occlusionTest;
		__this->___occlusionTest = L_1;
		__this->___instanceMultiplier = 1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OccluderSubviewUpdate__ctor_m482C60BE94ECE0B1F15E930936345D9F60E399A8 (OccluderSubviewUpdate_t0F6F2469118EFD70CCA43057AEDD76AF2EF4DBB7* __this, int32_t ___0_subviewIndex, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_subviewIndex;
		__this->___subviewIndex = L_0;
		__this->___depthSliceIndex = 0;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_1;
		L_1 = Vector2Int_get_zero_mF92C338E9CB9434105090E675E04D20A29649553_inline(NULL);
		__this->___depthOffset = L_1;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_2;
		L_2 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___viewMatrix = L_2;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3;
		L_3 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___invViewMatrix = L_3;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		__this->___gpuProjMatrix = L_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___viewOffsetWorldSpace = L_5;
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


IL2CPP_EXTERN_C void OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshal_pinvoke(const OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123& unmarshaled, OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshaled_pinvoke& marshaled)
{
	marshaled.___viewInstanceID = unmarshaled.___viewInstanceID;
	marshaled.___subviewCount = unmarshaled.___subviewCount;
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_pinvoke(unmarshaled.___depthTexture, marshaled.___depthTexture);
	marshaled.___depthSize = unmarshaled.___depthSize;
	marshaled.___depthIsArray = static_cast<int32_t>(unmarshaled.___depthIsArray);
}
IL2CPP_EXTERN_C void OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshal_pinvoke_back(const OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshaled_pinvoke& marshaled, OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123& unmarshaled)
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 unmarshaledviewInstanceID_temp_0;
	memset((&unmarshaledviewInstanceID_temp_0), 0, sizeof(unmarshaledviewInstanceID_temp_0));
	unmarshaledviewInstanceID_temp_0 = marshaled.___viewInstanceID;
	unmarshaled.___viewInstanceID = unmarshaledviewInstanceID_temp_0;
	int32_t unmarshaledsubviewCount_temp_1 = 0;
	unmarshaledsubviewCount_temp_1 = marshaled.___subviewCount;
	unmarshaled.___subviewCount = unmarshaledsubviewCount_temp_1;
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 unmarshaleddepthTexture_temp_2;
	memset((&unmarshaleddepthTexture_temp_2), 0, sizeof(unmarshaleddepthTexture_temp_2));
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_pinvoke_back(marshaled.___depthTexture, unmarshaleddepthTexture_temp_2);
	unmarshaled.___depthTexture = unmarshaleddepthTexture_temp_2;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A unmarshaleddepthSize_temp_3;
	memset((&unmarshaleddepthSize_temp_3), 0, sizeof(unmarshaleddepthSize_temp_3));
	unmarshaleddepthSize_temp_3 = marshaled.___depthSize;
	unmarshaled.___depthSize = unmarshaleddepthSize_temp_3;
	bool unmarshaleddepthIsArray_temp_4 = false;
	unmarshaleddepthIsArray_temp_4 = static_cast<bool>(marshaled.___depthIsArray);
	unmarshaled.___depthIsArray = unmarshaleddepthIsArray_temp_4;
}
IL2CPP_EXTERN_C void OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshal_pinvoke_cleanup(OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshaled_pinvoke& marshaled)
{
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_pinvoke_cleanup(marshaled.___depthTexture);
}


IL2CPP_EXTERN_C void OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshal_com(const OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123& unmarshaled, OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshaled_com& marshaled)
{
	marshaled.___viewInstanceID = unmarshaled.___viewInstanceID;
	marshaled.___subviewCount = unmarshaled.___subviewCount;
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_com(unmarshaled.___depthTexture, marshaled.___depthTexture);
	marshaled.___depthSize = unmarshaled.___depthSize;
	marshaled.___depthIsArray = static_cast<int32_t>(unmarshaled.___depthIsArray);
}
IL2CPP_EXTERN_C void OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshal_com_back(const OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshaled_com& marshaled, OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123& unmarshaled)
{
	EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 unmarshaledviewInstanceID_temp_0;
	memset((&unmarshaledviewInstanceID_temp_0), 0, sizeof(unmarshaledviewInstanceID_temp_0));
	unmarshaledviewInstanceID_temp_0 = marshaled.___viewInstanceID;
	unmarshaled.___viewInstanceID = unmarshaledviewInstanceID_temp_0;
	int32_t unmarshaledsubviewCount_temp_1 = 0;
	unmarshaledsubviewCount_temp_1 = marshaled.___subviewCount;
	unmarshaled.___subviewCount = unmarshaledsubviewCount_temp_1;
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 unmarshaleddepthTexture_temp_2;
	memset((&unmarshaleddepthTexture_temp_2), 0, sizeof(unmarshaleddepthTexture_temp_2));
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_com_back(marshaled.___depthTexture, unmarshaleddepthTexture_temp_2);
	unmarshaled.___depthTexture = unmarshaleddepthTexture_temp_2;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A unmarshaleddepthSize_temp_3;
	memset((&unmarshaleddepthSize_temp_3), 0, sizeof(unmarshaleddepthSize_temp_3));
	unmarshaleddepthSize_temp_3 = marshaled.___depthSize;
	unmarshaled.___depthSize = unmarshaleddepthSize_temp_3;
	bool unmarshaleddepthIsArray_temp_4 = false;
	unmarshaleddepthIsArray_temp_4 = static_cast<bool>(marshaled.___depthIsArray);
	unmarshaled.___depthIsArray = unmarshaleddepthIsArray_temp_4;
}
IL2CPP_EXTERN_C void OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshal_com_cleanup(OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123_marshaled_com& marshaled)
{
	TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_marshal_com_cleanup(marshaled.___depthTexture);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OccluderParameters__ctor_mA37EA517158F057A6814F994907BBE60B73A804E (OccluderParameters_tD4C5C1FBD74FE57BD33B9871CAB244BAF4813123* __this, EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 ___0_viewInstanceID, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_StaticInit);
	{
		EntityId_t982FBD037EAC5CA077B1602A7EA40E3523AA0FC8 L_0 = ___0_viewInstanceID;
		__this->___viewInstanceID = L_0;
		__this->___subviewCount = 1;
		CHECKED_LOCAL_INIT(TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_StaticInit,(TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 L_1;
		L_1 = TextureHandle_get_nullHandle_m077A7652CAF9B2004942375C6F1CCFD714AA9E19_inline(NULL);
		__this->___depthTexture = L_1;
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_2;
		L_2 = Vector2Int_get_zero_mF92C338E9CB9434105090E675E04D20A29649553_inline(NULL);
		__this->___depthSize = L_2;
		__this->___depthIsArray = (bool)0;
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
IL2CPP_EXTERN_C void GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshal_pinvoke(const GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231& unmarshaled, GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshaled_pinvoke& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231____errorShader_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___errorShaderException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231____errorShader_FieldInfo_var, GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___errorShaderException, NULL);
}
IL2CPP_EXTERN_C void GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshal_pinvoke_back(const GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshaled_pinvoke& marshaled, GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231____errorShader_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___errorShaderException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231____errorShader_FieldInfo_var, GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___errorShaderException, NULL);
}
IL2CPP_EXTERN_C void GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshal_pinvoke_cleanup(GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshaled_pinvoke& marshaled)
{
}
IL2CPP_EXTERN_C void GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshal_com(const GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231& unmarshaled, GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshaled_com& marshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231____errorShader_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___errorShaderException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231____errorShader_FieldInfo_var, GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___errorShaderException, NULL);
}
IL2CPP_EXTERN_C void GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshal_com_back(const GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshaled_com& marshaled, GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231____errorShader_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* ___errorShaderException = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '%s' of type '%s': Reference type field marshaling is not supported.", GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231____errorShader_FieldInfo_var, GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_0_0_0_var);
	IL2CPP_RAISE_MANAGED_EXCEPTION(___errorShaderException, NULL);
}
IL2CPP_EXTERN_C void GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshal_com_cleanup(GPUResidentDrawerSettings_tADE99E022C133C2D383D056788BA763D4BC43231_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IGPUResidentRenderPipeline_ReinitializeGPUResidentDrawer_m6D9AB828C92C7E97A8B441028C3056A905005E3F (const RuntimeMethod* method) 
{
	{
		GPUResidentDrawer_Reinitialize_m542E6537EC9C14A35291824BA6798D5D0D747190(NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IGPUResidentRenderPipeline_IsGPUResidentDrawerSupportedBySRP_mFED552B69E782E4125B03C0EC1B2007FEB023553 (RuntimeObject* __this, bool ___0_logReason, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGPUResidentRenderPipeline_t515F75DEF0110D5B2559A5A58C7588566A0C9BA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		bool L_0;
		L_0 = InterfaceFuncInvoker2< bool, String_t**, int32_t* >::Invoke(4, IGPUResidentRenderPipeline_t515F75DEF0110D5B2559A5A58C7588566A0C9BA4_il2cpp_TypeInfo_var, __this, (&V_1), (&V_2));
		V_0 = L_0;
		bool L_1 = ___0_logReason;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = V_0;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_3 = V_1;
		int32_t L_4 = V_2;
		GPUResidentDrawer_LogMessage_m7FF3E65D1A87DF183F9D29254AE637D842B88D41(L_3, L_4, NULL);
	}

IL_0018:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IGPUResidentRenderPipeline_IsGPUResidentDrawerSupportedBySRP_mAC46B52099ED2E34F12F8B7E802DC67E0113A0A9 (RuntimeObject* __this, String_t** ___0_message, int32_t* ___1_severity, const RuntimeMethod* method) 
{
	{
		String_t** L_0 = ___0_message;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		*(((RuntimeObject**)L_0)) = ((RuntimeObject*)L_1);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_0), (void*)((RuntimeObject*)L_1));
		int32_t* L_2 = ___1_severity;
		*(((int32_t*)L_2)) = 3;
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IGPUResidentRenderPipeline_IsGPUResidentDrawerSupportedByProjectConfiguration_m5CE31EEE661C5F8B23636A4F3452CEA8A7AC0B66 (bool ___0_logReason, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit);
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	bool G_B3_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	{
		bool L_0;
		L_0 = GPUResidentDrawer_IsProjectSupported_m4F5CDE5F81A0BE7CF42E37F1545E85A8C5A07DE3((&V_0), (&V_1), NULL);
		bool L_1 = ___0_logReason;
		if (!L_1)
		{
			G_B3_0 = L_0;
			goto IL_001a;
		}
		G_B1_0 = L_0;
	}
	{
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_001a;
		}
		G_B2_0 = G_B1_0;
	}
	{
		String_t* L_4 = V_0;
		CHECKED_LOCAL_INIT(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticInit,(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_4, NULL);
		G_B3_0 = G_B2_0;
	}

IL_001a:
	{
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IGPUResidentRenderPipeline_IsGPUResidentDrawerEnabled_m4B17CE9EBDCEADAB2C6378F8DACE655817DD1757 (const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = GPUResidentDrawer_IsInitialized_m73E4C12B8404C762646ECEC57CAC05DEE3BA3E73(NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A Vector2Int_get_zero_mF92C338E9CB9434105090E675E04D20A29649553_inline (const RuntimeMethod* method) 
{
	{
		Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A L_0 = ((Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields*)il2cpp_codegen_static_fields_for(Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_il2cpp_TypeInfo_var))->___s_Zero;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 TextureHandle_get_nullHandle_m077A7652CAF9B2004942375C6F1CCFD714AA9E19_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_StaticInit);
	{
		CHECKED_LOCAL_INIT(TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_StaticInit,(TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388 L_0 = ((TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_StaticFields*)il2cpp_codegen_static_fields_for(TextureHandle_t680ABA3F8B50859351BA5DD66220084F87F37388_il2cpp_TypeInfo_var))->___s_NullHandle;
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
