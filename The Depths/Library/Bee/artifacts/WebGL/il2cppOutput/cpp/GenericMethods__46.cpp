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

struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F;
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7;
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1;
struct IntPtr_t;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct RenderGraphPass_tEFB5BD685D417024760D82991EEEA4F4D0454A93;
struct String_t;
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
struct Type_t;
struct UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2;
struct UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926;
struct UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C;
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* IJobExtensions_Schedule_TisConstructJobList_t3EA9493BA14A6EAF46D2C6B1EFE5727F3048778F_m549B4682669E88648E24F766F339DDB43F207B50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeAppendBuffer_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m115C1E10CFF2E5179C099DDD59C5779D0863C1C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1;
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
struct BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06  : public RuntimeObject
{
	CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* ___m_WrappedCommandBuffer;
	RenderGraphPass_tEFB5BD685D417024760D82991EEEA4F4D0454A93* ___m_ExecutingPass;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};
struct UnsafeListExtensions_t9F27C0DDB39954D821115ACDC913DC77BCAC720A  : public RuntimeObject
{
};
struct UnsafePtrListExtensions_t26A84137ED878FA51C011CDA9A68E2B7FD40E6CA  : public RuntimeObject
{
};
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};
struct UnsafeUtilityExtensions_tF7E671E0EC4110CB4F007F8CECFAF9F3C210B635  : public RuntimeObject
{
};
struct UnsafeUtilityInternal_t5FEF1714A0FC54C68B384571076C8DF48E831240  : public RuntimeObject
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
struct KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB 
{
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___m_Buffer;
	int32_t ___m_Index;
	int32_t ___m_Next;
};
struct NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 
{
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___m_ListData;
};
struct ParallelReader_tE9E5B90E22A4BC77DB4B327155E0A9F071FC4839 
{
	Il2CppFullySharedGenericStruct* ___Ptr;
	int32_t ___Length;
};
struct ReadOnly_t620C834D6C54D781225D753876F232E09821956C 
{
	Il2CppFullySharedGenericStruct* ___Ptr;
	int32_t ___Length;
};
struct TypeFlagsCache_1_tB69D927C1F0A7B75C9689E12A04E9F1DF71DC19C 
{
	union
	{
		struct
		{
		};
		uint8_t TypeFlagsCache_1_tEE7E2287CD78A127EF206099D8666647D45296CC__padding[1];
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
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2  : public BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06
{
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
struct UnsafeScratchAllocator_t7AEFFE3C167D549ADBAFEEFB73A2EAD4DB6506BA 
{
	void* ___m_Pointer;
	int32_t ___m_LengthInBytes;
	int32_t ___m_CapacityInBytes;
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
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
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
struct UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 
{
	intptr_t* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 
{
	Il2CppFullySharedGenericStruct* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
};
struct UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5 
{
	Il2CppFullySharedGenericStruct** ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
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
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233  : public RuntimeObject
{
	intptr_t ___m_Ptr;
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
struct GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1  : public RuntimeObject
{
	intptr_t ___m_Ptr;
};
struct GraphicsFormat_tC3D1898F3F3F1F57256C7F3FFD6BA9A37AE7E713 
{
	int32_t ___value__;
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
struct TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D 
{
	int32_t ___value__;
};
struct UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500 
{
	uint8_t* ___Ptr;
	int32_t ___Length;
	int32_t ___Capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___Alignment;
};
struct UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2 
{
	intptr_t ___m_FirstBlock;
	intptr_t ___m_LastBlock;
	int32_t ___m_MaxItems;
	int32_t ___m_CurrentRead;
	uint8_t* ___m_CurrentWriteBlockTLS;
};
struct UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2 
{
	void* ___Ptr;
	int32_t ___m_length;
	int32_t ___m_capacity;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator;
	int32_t ___padding;
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
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 
{
	ByReference_1_t21C88CEA3607E6DA2435F0E317C10A776BCA6DCC ____pointer;
	int32_t ____length;
};
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer;
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
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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
struct Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F  : public MulticastDelegate_t
{
};
struct NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Keys;
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___Values;
};
struct UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
};
struct Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 
{
	Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3 ___m_BlockData;
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock;
	uint8_t* ___m_CurrentPtr;
	uint8_t* ___m_CurrentBlockEnd;
	int32_t ___m_RemainingItemCount;
	int32_t ___m_LastBlockSize;
};
struct ConstructJobList_t3EA9493BA14A6EAF46D2C6B1EFE5727F3048778F 
{
	UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 ___Container;
	UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2* ___List;
};
struct List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4_StaticFields
{
	__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct TypeFlagsCache_1_tB69D927C1F0A7B75C9689E12A04E9F1DF71DC19C_StaticFields
{
	int32_t ___flags;
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
struct CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7_StaticFields
{
	bool ___ThrowOnSetRenderTarget;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m2531BAFE2106A394C11BC9AC37182FCD3DB6FEE5_fshared_inline (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAppendBuffer_Add_TisIl2CppFullySharedGenericStruct_mDDC9C1D1487BB5B9B776AD9F9B6581F838DA5C09_fshared (UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mB190CFDC57C06AF1DF123853DD1278C9DB8EC42E_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mB40434355F9A08D0DA2248B8AA43B5F43DF3BF81_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m0EDB9D505D4D6E4B57D0FD2777645B1D99A65D6A_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mDD01DE312FC030F4A8DF80AD1372BCBD1DC05125_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___3_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mC71C3E90230FC0B882941FBCA180A79CB4B3D7C0_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___1_src, int32_t ___2_size, int32_t ___3_offset, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m80A71B32A2F66B101D42719A336551C45B26FB43_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___1_src, int32_t ___2_size, int32_t ___3_offset, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m1B493216B5E83D012F9115886CCEECD06C1AB25F_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m52B12AC67F1FA2F11EC56A98477C30F17203E95A_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mA68B0253E6ACBB21E5797B846534E3E273E24DFD_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___9_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m32E317ED0628441FF263BC1B940C46B76CC27BD1_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, int32_t ___9_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___10_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m42E911D7FE5A94506B1631439CFFAED6A4C7F919_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, int32_t ___9_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___10_callback, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m086EFD47795E3190149B7619BF9C146710ECB8AB_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m46409F218741C0D24E21228312B5DA8446D174A8_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m22C0E39C23FA8F79F6AF704381F9821ECB636708_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mBF059314517180FE72340F8EA07CC2D0C9FDE3D7_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mA86AD9DC4378D4FAFD843411F356622DC338CC1E_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m14E6204274D0FD89CB6457CE966661D0650A8666_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mCF53CDE2D0D26941A2E556B78EFD306B8185A618_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m51DFEC65C4C610333B2B55F5FBC5441BEA86265F_fshared (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeList_1_get_Item_mB847AC77ACE34F511CEABF3E45B6EAD5D59165AF_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m4C0405202053EC610D5814D16972342C44B04015_fshared (ParallelReader_tE9E5B90E22A4BC77DB4B327155E0A9F071FC4839 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m666B6958EA2FFC68FF7ED5C8350CE4F72D717323_fshared (ReadOnly_t620C834D6C54D781225D753876F232E09821956C ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m57EF2104D6B01A3B93003ABF811294D496610604_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ParallelReader_AsReadOnlySpan_m9816F75DCB61EA633E012C3F5FF1457176DB92EB_fshared (ParallelReader_tE9E5B90E22A4BC77DB4B327155E0A9F071FC4839* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96_fshared (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ReadOnly_AsReadOnlySpan_mC6255AF01C4715D090F363532CBFFE7025B4C17E_fshared (ReadOnly_t620C834D6C54D781225D753876F232E09821956C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m86C560D40D8AAEF07631BFB8D1698688602BFD91_fshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeKeyValueArrays_2_get_Length_m5540F10E36DBBB6005821F5FEAF15610EB68C429_fshared (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_fshared (Il2CppFullySharedGenericStruct* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_fshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisIl2CppFullySharedGenericStruct_mF266365A1A83D3A8671F9B001353E6658E321E57_fshared (Il2CppFullySharedGenericStruct ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763_fshared (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_fshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_Add_TisIl2CppFullySharedGenericStruct_mADE8643D255967F447F5FF97A4E32E2A70D13178_fshared_inline (Il2CppFullySharedGenericStruct* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtilityInternal_AddressOf_TisIl2CppFullySharedGenericStruct_m4556F0DE0C4C5FAA9B2E203DD1D76CC0B1FE567C_fshared_inline (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_fshared_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UnsafeUtilityInternal_As_TisIl2CppSharedGenericObject_mF938497D672DB9C14D0738F1F43F1F449466EB67_gshared_inline (RuntimeObject* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_AsRef_TisIl2CppFullySharedGenericStruct_m4AE204964F54C3F7626BE47CADE4A52CF2797B6B_fshared_inline (void* ___0_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m497ECA325F03B8C0201958D2EDD9088FFB44BBDD_fshared_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m323E735FDEFDBCFEBB7D6566658A860C97410FFB_fshared_inline (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtilityInternal_EnumEquals_TisIl2CppFullySharedGenericStruct_m63392232D0D8C7BCFDFC25F0362A7B109440A899_fshared_inline (Il2CppFullySharedGenericStruct ___0_lhs, Il2CppFullySharedGenericStruct ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_EnumToInt_TisIl2CppFullySharedGenericStruct_mC60FD6D3EC07363A5E5213DDDFBFC9A741C2E8BA_fshared_inline (Il2CppFullySharedGenericStruct ___0_enumValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m939A9FD04DDB2C021F8F2A09A8A13816556D8F2A_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_m788D06C7A78ACE9317501CAAB3ACB95E63B8B3BD_fshared_inline (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_fshared_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsBlittable_TisIl2CppFullySharedGenericStruct_mB5C09765800B4F3193F2569722F9C8E897A44D60_fshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD8DC640103D38E555B272D6E61CA4B06A15E46ED_fshared_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_m43737F191942C3B66CAD8213014C3E89AB211631_fshared_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_fshared_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* ILSupport_AsRef_TisIl2CppFullySharedGenericStruct_mE9195E637265E7F6E317ACE31DCBA0EA7A989E30_fshared_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m06FA487F742A380443BFC89A98F97C63718E2BAA_fshared_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_InternalCopyStructureToPtr_TisIl2CppFullySharedGenericStruct_mECFA8273692D57001184F23BE06202A197831B12_fshared_inline (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_InternalEnumToInt_TisIl2CppFullySharedGenericAny_m03F4ED6927B0D42F835AE8129CDC4A6EA05B2660_fshared_inline (Il2CppFullySharedGenericAny* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_m5144BD426181728CA94C44B8778ECDF811B77843_fshared (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 ___0_span, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_fshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, Il2CppFullySharedGenericAny* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAppendBuffer_SetCapacity_mF80BF3DD388E819E52586A458C10606333611269 (UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9 (uint64_t ___0_offset, int32_t ___1_alignmentPowerOfTwo, const RuntimeMethod* method) ;
inline void UnsafeUtility_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m2531BAFE2106A394C11BC9AC37182FCD3DB6FEE5_inline (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericStruct*, void*, const RuntimeMethod*))UnsafeUtility_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m2531BAFE2106A394C11BC9AC37182FCD3DB6FEE5_fshared_inline)(___0_input, ___1_ptr, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline int32_t NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_fshared_inline)(__this, method);
}
inline void UnsafeAppendBuffer_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m115C1E10CFF2E5179C099DDD59C5779D0863C1C1 (UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))UnsafeAppendBuffer_Add_TisIl2CppFullySharedGenericStruct_mDDC9C1D1487BB5B9B776AD9F9B6581F838DA5C09_fshared)((UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500*)__this, (Il2CppFullySharedGenericStruct)&___0_value, method);
}
inline void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline)(___0_nativeArray, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAppendBuffer_Add_m1CE98EFF1C7CAFEDCDE896B21530D3B2A3311D25 (UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500* __this, void* ___0_ptr, int32_t ___1_structSize, const RuntimeMethod* method) ;
inline void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mB190CFDC57C06AF1DF123853DD1278C9DB8EC42E (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, const RuntimeMethod*))CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mB190CFDC57C06AF1DF123853DD1278C9DB8EC42E_fshared)(__this, ___0_output, ___1_src, ___2_callback, method);
}
inline void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mB40434355F9A08D0DA2248B8AA43B5F43DF3BF81 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, const RuntimeMethod*))CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mB40434355F9A08D0DA2248B8AA43B5F43DF3BF81_fshared)(__this, ___0_output, ___1_src, ___2_callback, method);
}
inline void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m0EDB9D505D4D6E4B57D0FD2777645B1D99A65D6A (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, const RuntimeMethod*))CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m0EDB9D505D4D6E4B57D0FD2777645B1D99A65D6A_fshared)(__this, ___0_output, ___1_src, ___2_callback, method);
}
inline void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mDD01DE312FC030F4A8DF80AD1372BCBD1DC05125 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___3_callback, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, const RuntimeMethod*))CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mDD01DE312FC030F4A8DF80AD1372BCBD1DC05125_fshared)(__this, ___0_output, ___1_src, ___2_mipIndex, ___3_callback, method);
}
inline void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mC71C3E90230FC0B882941FBCA180A79CB4B3D7C0 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___1_src, int32_t ___2_size, int32_t ___3_offset, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, int32_t, int32_t, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, const RuntimeMethod*))CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mC71C3E90230FC0B882941FBCA180A79CB4B3D7C0_fshared)(__this, ___0_output, ___1_src, ___2_size, ___3_offset, ___4_callback, method);
}
inline void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m80A71B32A2F66B101D42719A336551C45B26FB43 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___1_src, int32_t ___2_size, int32_t ___3_offset, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*, int32_t, int32_t, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, const RuntimeMethod*))CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m80A71B32A2F66B101D42719A336551C45B26FB43_fshared)(__this, ___0_output, ___1_src, ___2_size, ___3_offset, ___4_callback, method);
}
inline void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m1B493216B5E83D012F9115886CCEECD06C1AB25F (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t, int32_t, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, const RuntimeMethod*))CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m1B493216B5E83D012F9115886CCEECD06C1AB25F_fshared)(__this, ___0_output, ___1_src, ___2_mipIndex, ___3_dstFormat, ___4_callback, method);
}
inline void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m52B12AC67F1FA2F11EC56A98477C30F17203E95A (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t, int32_t, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, const RuntimeMethod*))CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m52B12AC67F1FA2F11EC56A98477C30F17203E95A_fshared)(__this, ___0_output, ___1_src, ___2_mipIndex, ___3_dstFormat, ___4_callback, method);
}
inline void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mA68B0253E6ACBB21E5797B846534E3E273E24DFD (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___9_callback, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, const RuntimeMethod*))CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mA68B0253E6ACBB21E5797B846534E3E273E24DFD_fshared)(__this, ___0_output, ___1_src, ___2_mipIndex, ___3_x, ___4_width, ___5_y, ___6_height, ___7_z, ___8_depth, ___9_callback, method);
}
inline void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m32E317ED0628441FF263BC1B940C46B76CC27BD1 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, int32_t ___9_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___10_callback, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, const RuntimeMethod*))CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m32E317ED0628441FF263BC1B940C46B76CC27BD1_fshared)(__this, ___0_output, ___1_src, ___2_mipIndex, ___3_x, ___4_width, ___5_y, ___6_height, ___7_z, ___8_depth, ___9_dstFormat, ___10_callback, method);
}
inline void CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m42E911D7FE5A94506B1631439CFFAED6A4C7F919 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, int32_t ___9_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___10_callback, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F*, const RuntimeMethod*))CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m42E911D7FE5A94506B1631439CFFAED6A4C7F919_fshared)(__this, ___0_output, ___1_src, ___2_mipIndex, ___3_x, ___4_width, ___5_y, ___6_height, ___7_z, ___8_depth, ___9_dstFormat, ___10_callback, method);
}
inline void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m086EFD47795E3190149B7619BF9C146710ECB8AB (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m086EFD47795E3190149B7619BF9C146710ECB8AB_fshared)(__this, ___0_buffer, ___1_data, method);
}
inline void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m46409F218741C0D24E21228312B5DA8446D174A8 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m46409F218741C0D24E21228312B5DA8446D174A8_fshared)(__this, ___0_buffer, ___1_data, method);
}
inline void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m22C0E39C23FA8F79F6AF704381F9821ECB636708 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m22C0E39C23FA8F79F6AF704381F9821ECB636708_fshared)(__this, ___0_buffer, ___1_data, method);
}
inline void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mBF059314517180FE72340F8EA07CC2D0C9FDE3D7 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mBF059314517180FE72340F8EA07CC2D0C9FDE3D7_fshared)(__this, ___0_buffer, ___1_data, method);
}
inline void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mA86AD9DC4378D4FAFD843411F356622DC338CC1E (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, int32_t, int32_t, const RuntimeMethod*))CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mA86AD9DC4378D4FAFD843411F356622DC338CC1E_fshared)(__this, ___0_buffer, ___1_data, ___2_managedBufferStartIndex, ___3_graphicsBufferStartIndex, ___4_count, method);
}
inline void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m14E6204274D0FD89CB6457CE966661D0650A8666 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, int32_t, const RuntimeMethod*))CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m14E6204274D0FD89CB6457CE966661D0650A8666_fshared)(__this, ___0_buffer, ___1_data, ___2_nativeBufferStartIndex, ___3_graphicsBufferStartIndex, ___4_count, method);
}
inline void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mCF53CDE2D0D26941A2E556B78EFD306B8185A618 (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, int32_t, int32_t, int32_t, const RuntimeMethod*))CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mCF53CDE2D0D26941A2E556B78EFD306B8185A618_fshared)(__this, ___0_buffer, ___1_data, ___2_managedBufferStartIndex, ___3_graphicsBufferStartIndex, ___4_count, method);
}
inline void CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m51DFEC65C4C610333B2B55F5FBC5441BEA86265F (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method)
{
	((  void (*) (CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7*, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, int32_t, int32_t, const RuntimeMethod*))CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m51DFEC65C4C610333B2B55F5FBC5441BEA86265F_fshared)(__this, ___0_buffer, ___1_data, ___2_nativeBufferStartIndex, ___3_graphicsBufferStartIndex, ___4_count, method);
}
inline int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline)(__this, method);
}
inline void UnsafeList_1_get_Item_mB847AC77ACE34F511CEABF3E45B6EAD5D59165AF_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeList_1_get_Item_mB847AC77ACE34F511CEABF3E45B6EAD5D59165AF_fshared_inline)((UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*)__this, ___0_index, il2cppRetVal, method);
}
inline int32_t UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m4C0405202053EC610D5814D16972342C44B04015 (ParallelReader_tE9E5B90E22A4BC77DB4B327155E0A9F071FC4839 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ParallelReader_tE9E5B90E22A4BC77DB4B327155E0A9F071FC4839, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m4C0405202053EC610D5814D16972342C44B04015_fshared)(___0_container, ___1_value, method);
}
inline int32_t UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m666B6958EA2FFC68FF7ED5C8350CE4F72D717323 (ReadOnly_t620C834D6C54D781225D753876F232E09821956C ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnly_t620C834D6C54D781225D753876F232E09821956C, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m666B6958EA2FFC68FF7ED5C8350CE4F72D717323_fshared)(___0_container, ___1_value, method);
}
inline int32_t UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m57EF2104D6B01A3B93003ABF811294D496610604 (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m57EF2104D6B01A3B93003ABF811294D496610604_fshared)(___0_container, ___1_value, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ParallelReader_AsReadOnlySpan_m9816F75DCB61EA633E012C3F5FF1457176DB92EB (ParallelReader_tE9E5B90E22A4BC77DB4B327155E0A9F071FC4839* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (ParallelReader_tE9E5B90E22A4BC77DB4B327155E0A9F071FC4839*, const RuntimeMethod*))ParallelReader_AsReadOnlySpan_m9816F75DCB61EA633E012C3F5FF1457176DB92EB_fshared)(__this, method);
}
inline int32_t NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96 (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ___0_roSpan, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25, Il2CppFullySharedGenericAny, const RuntimeMethod*))NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96_fshared)(___0_roSpan, ___1_value, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 ReadOnly_AsReadOnlySpan_mC6255AF01C4715D090F363532CBFFE7025B4C17E (ReadOnly_t620C834D6C54D781225D753876F232E09821956C* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (ReadOnly_t620C834D6C54D781225D753876F232E09821956C*, const RuntimeMethod*))ReadOnly_AsReadOnlySpan_mC6255AF01C4715D090F363532CBFFE7025B4C17E_fshared)(__this, method);
}
inline ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400 (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 (*) (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*, const RuntimeMethod*))UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (int64_t ___0_size, int32_t ___1_align, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_ceilpow2_m8691C3C194B41660E1FB2E694F7D209BE60DDCC7_inline (int64_t ___0_x, const RuntimeMethod* method) ;
inline int64_t UnsafeParallelHashMapData_CalculateDataSize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m86C560D40D8AAEF07631BFB8D1698688602BFD91 (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int64_t (*) (int32_t, int64_t, int64_t*, int64_t*, int64_t*, const RuntimeMethod*))UnsafeParallelHashMapData_CalculateDataSize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m86C560D40D8AAEF07631BFB8D1698688602BFD91_fshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t CollectionHelper_Align_mC40859378CEE3C9844C39FAC725566EBA5E7BD82 (int64_t ___0_size, int32_t ___1_alignmentPowerOfTwo, const RuntimeMethod* method) ;
inline void NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct ___1_value, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, Il2CppFullySharedGenericStruct, const RuntimeMethod*))NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_fshared_inline)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_index, ___1_value, method);
}
inline int32_t NativeKeyValueArrays_2_get_Length_m5540F10E36DBBB6005821F5FEAF15610EB68C429 (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1*, const RuntimeMethod*))NativeKeyValueArrays_2_get_Length_m5540F10E36DBBB6005821F5FEAF15610EB68C429_fshared)(__this, method);
}
inline void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271 (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_fshared)(___0_pointer, ___1_allocator, method);
}
inline UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafeUtility_As_TisUnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m6F599F780EA82D7BF0965680C04D31DB38FBB367_inline (UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5* ___0_from, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* (*) (UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5*, const RuntimeMethod*))UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_fshared_inline)(___0_from, method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F (int32_t ___0_size, int32_t ___1_alignmentPowerOfTwo, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared_inline)(method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* __this, int32_t ___0_threadIndex, UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___1_currentWriteBlock, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* UnsafeQueueData_GetCurrentWriteBlockTLS_m51E3B0E146EF03939DC2ADB143AE4A6382F9AF12_inline (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* __this, int32_t ___0_threadIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeScratchAllocator_Allocate_m6C6B645A1CAE920CC0E95EE353ACF36ECBAF1F08 (UnsafeScratchAllocator_t7AEFFE3C167D549ADBAFEEFB73A2EAD4DB6506BA* __this, int32_t ___0_sizeInBytes, int32_t ___1_alignmentInBytes, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeStream_AllocateBlock_m7D6C950B165B889AFCE6D74C784E2BB1291705EE (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* ___0_stream, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
inline UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method)
{
	return ((  UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_fshared_inline)(__this, method);
}
inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 IJobExtensions_Schedule_TisConstructJobList_t3EA9493BA14A6EAF46D2C6B1EFE5727F3048778F_m549B4682669E88648E24F766F339DDB43F207B50 (ConstructJobList_t3EA9493BA14A6EAF46D2C6B1EFE5727F3048778F ___0_jobData, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_dependsOn, const RuntimeMethod* method)
{
	return ((  JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 (*) (Il2CppFullySharedGenericStruct, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, const RuntimeMethod*))IJobExtensions_Schedule_TisIl2CppFullySharedGenericStruct_mF266365A1A83D3A8671F9B001353E6658E321E57_fshared)((Il2CppFullySharedGenericStruct)&___0_jobData, ___1_dependsOn, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeStream_Count_m3B4572A2DA203BFBE2E9A61B87908A592F6A35F4 (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* __this, const RuntimeMethod* method) ;
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763 (int32_t ___0_length, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t, const RuntimeMethod*))CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763_fshared)(___0_length, ___1_allocator, ___2_options, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 UnsafeStream_AsReader_m92D6D4B880F294A02844F903D065C0B567AF94B4 (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_BeginForEachIndex_m5FED9BD43AF38BE1CA15C15716F7E57A188D5334 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, int32_t ___0_foreachIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Reader_get_RemainingItemCount_m5AEA4EB51ABCD3C5C15F0DBCF5EBE60ACD330978_inline (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_EndForEachIndex_m51B8AD25E5664B02F27261062B1D5006DA2B8D3E (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Reader_get_ForEachCount_mB9C0CA8701F07528C84A7D7AEBA9EBAF467A2F77 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_Add_TisIl2CppFullySharedGenericStruct_mADE8643D255967F447F5FF97A4E32E2A70D13178_inline (Il2CppFullySharedGenericStruct* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int32_t, const RuntimeMethod*))UnsafeUtilityInternal_Add_TisIl2CppFullySharedGenericStruct_mADE8643D255967F447F5FF97A4E32E2A70D13178_fshared_inline)(___0_source, ___1_elementOffset, method);
}
inline void* UnsafeUtilityInternal_AddressOf_TisIl2CppFullySharedGenericStruct_m4556F0DE0C4C5FAA9B2E203DD1D76CC0B1FE567C_inline (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtilityInternal_AddressOf_TisIl2CppFullySharedGenericStruct_m4556F0DE0C4C5FAA9B2E203DD1D76CC0B1FE567C_fshared_inline)(___0_output, method);
}
inline int32_t UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_fshared_inline)(method);
}
inline Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_inline (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_fshared_inline)(___0_ptr, ___1_index, method);
}
inline Il2CppSharedGenericObject* UnsafeUtilityInternal_As_TisIl2CppSharedGenericObject_mF938497D672DB9C14D0738F1F43F1F449466EB67_inline (RuntimeObject* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (RuntimeObject*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppSharedGenericObject_mF938497D672DB9C14D0738F1F43F1F449466EB67_gshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline)(___0_from, method);
}
inline Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_AsRef_TisIl2CppFullySharedGenericStruct_m4AE204964F54C3F7626BE47CADE4A52CF2797B6B_inline (void* ___0_ptr, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (void*, const RuntimeMethod*))UnsafeUtilityInternal_AsRef_TisIl2CppFullySharedGenericStruct_m4AE204964F54C3F7626BE47CADE4A52CF2797B6B_fshared_inline)(___0_ptr, method);
}
inline void UnsafeUtilityInternal_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m497ECA325F03B8C0201958D2EDD9088FFB44BBDD_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtilityInternal_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m497ECA325F03B8C0201958D2EDD9088FFB44BBDD_fshared_inline)(___0_ptr, ___1_output, method);
}
inline void UnsafeUtilityInternal_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m323E735FDEFDBCFEBB7D6566658A860C97410FFB_inline (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericStruct*, void*, const RuntimeMethod*))UnsafeUtilityInternal_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m323E735FDEFDBCFEBB7D6566658A860C97410FFB_fshared_inline)(___0_input, ___1_ptr, method);
}
inline bool UnsafeUtilityInternal_EnumEquals_TisIl2CppFullySharedGenericStruct_m63392232D0D8C7BCFDFC25F0362A7B109440A899_inline (Il2CppFullySharedGenericStruct ___0_lhs, Il2CppFullySharedGenericStruct ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct, const RuntimeMethod*))UnsafeUtilityInternal_EnumEquals_TisIl2CppFullySharedGenericStruct_m63392232D0D8C7BCFDFC25F0362A7B109440A899_fshared_inline)(___0_lhs, ___1_rhs, method);
}
inline int32_t UnsafeUtilityInternal_EnumToInt_TisIl2CppFullySharedGenericStruct_mC60FD6D3EC07363A5E5213DDDFBFC9A741C2E8BA_inline (Il2CppFullySharedGenericStruct ___0_enumValue, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Il2CppFullySharedGenericStruct, const RuntimeMethod*))UnsafeUtilityInternal_EnumToInt_TisIl2CppFullySharedGenericStruct_mC60FD6D3EC07363A5E5213DDDFBFC9A741C2E8BA_fshared_inline)(___0_enumValue, method);
}
inline __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericStruct_m873C6691215D9DD53FE9D82092C0220C03C702DE_inline (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, const RuntimeMethod* method)
{
	return ((  __Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* (*) (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4*, const RuntimeMethod*))NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m939A9FD04DDB2C021F8F2A09A8A13816556D8F2A_fshared_inline)(___0_list, method);
}
inline Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericStruct_mF8415BE462F218CF45D5AAA3183883F406EFD7BB_inline (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* ___0_array, const RuntimeMethod* method)
{
	return ((  Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD (*) (__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1*, const RuntimeMethod*))MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_m788D06C7A78ACE9317501CAAB3ACB95E63B8B3BD_fshared_inline)(___0_array, method);
}
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_fshared_inline)(___0_span, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtility_GetReasonForTypeNonBlittableImpl_m3F94960798254241B201BFC006DD49A8EB974209 (Type_t* ___0_t, String_t* ___1_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsBlittable_m77522F70929742760B2B80497DD3AE80CFD72D76 (Type_t* ___0_type, const RuntimeMethod* method) ;
inline bool UnsafeUtility_IsBlittable_TisIl2CppFullySharedGenericStruct_mB5C09765800B4F3193F2569722F9C8E897A44D60 (const RuntimeMethod* method)
{
	return ((  bool (*) (const RuntimeMethod*))UnsafeUtility_IsBlittable_TisIl2CppFullySharedGenericStruct_mB5C09765800B4F3193F2569722F9C8E897A44D60_fshared)(method);
}
inline void UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_inline (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_ReadArrayElement_TisIl2CppFullySharedGenericAny_mC729F1975F0494EB9B61C929EAF0F798DCF68563_fshared_inline)(___0_source, ___1_index, il2cppRetVal, method);
}
inline void UnsafeUtilityInternal_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD8DC640103D38E555B272D6E61CA4B06A15E46ED_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))UnsafeUtilityInternal_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD8DC640103D38E555B272D6E61CA4B06A15E46ED_fshared_inline)(___0_source, ___1_index, ___2_stride, il2cppRetVal, method);
}
inline int32_t UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline)(method);
}
inline void UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtilityInternal_WriteArrayElement_TisIl2CppFullySharedGenericAny_mDF23616AEE03407D05BE4CE63658C326ACA1ADC0_fshared_inline)(___0_destination, ___1_index, ___2_value, method);
}
inline void UnsafeUtilityInternal_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_m43737F191942C3B66CAD8213014C3E89AB211631_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtilityInternal_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_m43737F191942C3B66CAD8213014C3E89AB211631_fshared_inline)(___0_destination, ___1_index, ___2_stride, ___3_value, method);
}
inline void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method)
{
	return ((  void* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_fshared_inline)(___0_thing, method);
}
inline Il2CppFullySharedGenericStruct* ILSupport_AsRef_TisIl2CppFullySharedGenericStruct_mE9195E637265E7F6E317ACE31DCBA0EA7A989E30_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, const RuntimeMethod*))ILSupport_AsRef_TisIl2CppFullySharedGenericStruct_mE9195E637265E7F6E317ACE31DCBA0EA7A989E30_fshared_inline)(___0_thing, method);
}
inline void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, const RuntimeMethod* method)
{
	((  void (*) (void*, int32_t, Il2CppFullySharedGenericAny, const RuntimeMethod*))UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared_inline)(___0_destination, ___1_index, (Il2CppFullySharedGenericAny)___2_value, method);
}
inline int32_t UnsafeUtilityInternal_SizeOf_TisAlignOfHelper_1_tA18DF2C95F416AEB06D5F0702F37CBD85E8A7FB8_m934B08DAF1EA7B249CA769E8DCA4EBAC6AEB1885_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_fshared_inline)(method);
}
inline void UnsafeUtilityInternal_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m06FA487F742A380443BFC89A98F97C63718E2BAA_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))UnsafeUtilityInternal_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m06FA487F742A380443BFC89A98F97C63718E2BAA_fshared_inline)(___0_ptr, ___1_output, method);
}
inline void UnsafeUtilityInternal_InternalCopyStructureToPtr_TisIl2CppFullySharedGenericStruct_mECFA8273692D57001184F23BE06202A197831B12_inline (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericStruct*, void*, const RuntimeMethod*))UnsafeUtilityInternal_InternalCopyStructureToPtr_TisIl2CppFullySharedGenericStruct_mECFA8273692D57001184F23BE06202A197831B12_fshared_inline)(___0_input, ___1_ptr, method);
}
inline void UnsafeUtilityInternal_InternalEnumToInt_TisIl2CppFullySharedGenericStruct_mCFEA5D312FE664B15A5B77E095B9D54217AD61C9_inline (Il2CppFullySharedGenericStruct* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method)
{
	((  void (*) (Il2CppFullySharedGenericStruct*, int32_t*, const RuntimeMethod*))UnsafeUtilityInternal_InternalEnumToInt_TisIl2CppFullySharedGenericAny_m03F4ED6927B0D42F835AE8129CDC4A6EA05B2660_fshared_inline)(___0_enumValue, ___1_intValue, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline (int32_t ___0_value, const RuntimeMethod* method) ;
inline void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_fshared_inline)(__this, ___0_array, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___0_targetType, const RuntimeMethod* method) ;
inline Il2CppFullySharedGenericStruct* MemoryMarshal_GetReference_TisIl2CppFullySharedGenericStruct_mE6EF4F8FFA4C5C6F3BA18346118C88E7F3E65F9D (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD, const RuntimeMethod*))MemoryMarshal_GetReference_TisIl2CppFullySharedGenericAny_m5144BD426181728CA94C44B8778ECDF811B77843_fshared)(___0_span, method);
}
inline int32_t Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD*, const RuntimeMethod*))Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline)(__this, method);
}
inline int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericStruct_m5B40ADA085C40138AB7DFD671EED6795DE06E8CB (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_fshared)(method);
}
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_mBA868F06359701D9950DEB1B10F52F848E9FF6DA_fshared_inline)(__this, ___0_ptr, ___1_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mDA4722F94AF13693FCE1583B641A792D2EA47924_fshared (Il2CppFullySharedGenericAny* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9;
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,uint32_t,int32_t,false,false>(L_2,NULL));
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, L_3))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mC89D70E498F759E971238CF82E99E44CC68197DA_fshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m023762698D869AA8F4D477B66833C0BCFC1EA25C_fshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_fshared (Il2CppFullySharedGenericAny* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint64_t,int64_t,false,false>(L_1,NULL));
		intptr_t L_3;
		L_3 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_2, NULL);
		Il2CppFullySharedGenericAny* L_4;
		L_4 = il2cpp_unsafe_add_byte_offset<Il2CppFullySharedGenericAny,intptr_t>(L_0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisIl2CppFullySharedGenericAny_mEFCD9F27093DEB04CA603DC1C6F306CE6DCCDC3C_fshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Unsafe_As_TisIl2CppSharedGenericObject_mEA282A8D403A0B743C8FF21F53E3421FFE98BCCC_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_o;
		return (Il2CppSharedGenericObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAF06A659941D15118FC1E4800E3A7A0F262628A4_fshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mE85961ECFFC7310EBEF309E6E67AD0FED2F9030B_fshared (Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		uintptr_t L_1 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericAny*,intptr_t,false,false>(L_0,NULL));
		return (void*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m088920550101BD3FA6B40E99A5F107C35BE752FA_fshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_mD269D4D95DA51D3CF4E4025805638814158802A3_fshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIl2CppFullySharedGenericAny_m731B9B0C5A4B349E4545E7AAAB44731B9ADB6597_fshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Read_TisIl2CppFullySharedGenericAny_mF6B28073E683AAE891ED373C5F5F29DA2A0708A2_fshared (void* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
	{
		void* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m42C276800437B81F51F1F38619B499B6AAFB0021_fshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
	{
		uint8_t* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_mF9DAA41D685A65A581864DBF65CE23C6F7E72BDF_fshared (uint8_t* ___0_destination, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
	{
		uint8_t* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAppendBuffer_Add_TisIl2CppFullySharedGenericStruct_mDDC9C1D1487BB5B9B776AD9F9B6581F838DA5C09_fshared (UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t968E150614965331C7DD07EE4B335800AC5FBC8D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	void* V_1 = NULL;
	{
		uint32_t L_0 = SizeOf_T_t968E150614965331C7DD07EE4B335800AC5FBC8D;
		V_0 = (int32_t)L_0;
		int32_t L_1 = __this->___Length;
		int32_t L_2 = V_0;
		UnsafeAppendBuffer_SetCapacity_mF80BF3DD388E819E52586A458C10606333611269(__this, ((int32_t)il2cpp_codegen_add(L_1, L_2)), NULL);
		uint8_t* L_3 = __this->___Ptr;
		int32_t L_4 = __this->___Length;
		V_1 = (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_3, L_4));
		void* L_5 = V_1;
		uint64_t L_6 = (il2cpp_codegen_conv<uint64_t,void*,intptr_t,false,false>(L_5,NULL));
		int32_t L_7;
		L_7 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		bool L_8;
		L_8 = CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		void* L_9 = V_1;
		UnsafeUtility_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m2531BAFE2106A394C11BC9AC37182FCD3DB6FEE5_inline((Il2CppFullySharedGenericStruct*)___0_value, L_9, il2cpp_rgctx_method(method->rgctx_data, 2));
		goto IL_0046;
	}

IL_003b:
	{
		void* L_10 = V_1;
		uintptr_t L_11 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>((Il2CppFullySharedGenericStruct*)___0_value,NULL));
		int32_t L_12 = V_0;
		int64_t L_13 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_12,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_10, (void*)L_11, L_13, NULL);
	}

IL_0046:
	{
		int32_t L_14 = __this->___Length;
		int32_t L_15 = V_0;
		__this->___Length = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAppendBuffer_Add_TisIl2CppFullySharedGenericStruct_mBC28FDDA775CF46EBFF35FACA19AB97DA55D7C5C_fshared (UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeAppendBuffer_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m115C1E10CFF2E5179C099DDD59C5779D0863C1C1_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tE3F6B05D1E5A45A817DFAAD5B883AEAC587DD659 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	{
		int32_t L_0;
		L_0 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_value), NULL);
		UnsafeAppendBuffer_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m115C1E10CFF2E5179C099DDD59C5779D0863C1C1(__this, L_0, UnsafeAppendBuffer_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m115C1E10CFF2E5179C099DDD59C5779D0863C1C1_RuntimeMethod_var);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_1 = ___0_value;
		void* L_2;
		L_2 = NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_inline(L_1, NULL);
		uint32_t L_3 = SizeOf_T_tE3F6B05D1E5A45A817DFAAD5B883AEAC587DD659;
		int32_t L_4;
		L_4 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___0_value), NULL);
		UnsafeAppendBuffer_Add_m1CE98EFF1C7CAFEDCDE896B21530D3B2A3311D25(__this, L_2, ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, L_4)), NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAppendBuffer_AddArray_TisIl2CppFullySharedGenericStruct_m5627B5F2DCE95940F3F9DFF77A97789E2CCD5E57_fshared (UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeAppendBuffer_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m115C1E10CFF2E5179C099DDD59C5779D0863C1C1_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tCB7BCEF928A0AD313FE193E3B540DF5281DE8184 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		int32_t L_0 = ___1_length;
		UnsafeAppendBuffer_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m115C1E10CFF2E5179C099DDD59C5779D0863C1C1(__this, L_0, UnsafeAppendBuffer_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m115C1E10CFF2E5179C099DDD59C5779D0863C1C1_RuntimeMethod_var);
		int32_t L_1 = ___1_length;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		void* L_2 = ___0_ptr;
		int32_t L_3 = ___1_length;
		uint32_t L_4 = SizeOf_T_tCB7BCEF928A0AD313FE193E3B540DF5281DE8184;
		UnsafeAppendBuffer_Add_m1CE98EFF1C7CAFEDCDE896B21530D3B2A3311D25(__this, L_2, ((int32_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)), NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeAppendBuffer_Pop_TisIl2CppFullySharedGenericStruct_m504B53F43031CB15FF39BBBA94BE052B3E33D1A9_fshared (UnsafeAppendBuffer_t9EC160EA10485CD9DD96EDCBCEA06C7BCEF81500* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t46B54E1394E86F4EC59651D45B3DFBD912AF848E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_13 = alloca(SizeOf_T_t46B54E1394E86F4EC59651D45B3DFBD912AF848E);
	const Il2CppFullySharedGenericStruct L_21 = L_13;
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	Il2CppFullySharedGenericStruct V_3 = alloca(SizeOf_T_t46B54E1394E86F4EC59651D45B3DFBD912AF848E);
	memset(V_3, 0, SizeOf_T_t46B54E1394E86F4EC59651D45B3DFBD912AF848E);
	{
		uint32_t L_0 = SizeOf_T_t46B54E1394E86F4EC59651D45B3DFBD912AF848E;
		V_0 = (int32_t)L_0;
		uint8_t* L_1 = __this->___Ptr;
		uint64_t L_2 = (il2cpp_codegen_conv<uint64_t,uint8_t*,intptr_t,false,false>(L_1,NULL));
		int32_t L_3 = __this->___Length;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		V_1 = L_4;
		int64_t L_5 = V_1;
		int32_t L_6 = V_0;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_6,NULL));
		V_2 = ((int64_t)il2cpp_codegen_subtract(((int64_t)il2cpp_codegen_add((int64_t)L_2, L_5)), L_7));
		int64_t L_8 = V_2;
		int32_t L_9;
		L_9 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		bool L_10;
		L_10 = CollectionHelper_IsAligned_m4761669B9084B892256349C0FF27DBF494DA9AE9(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0034;
		}
	}
	{
		int64_t L_11 = V_2;
		uintptr_t L_12 = (il2cpp_codegen_conv<uintptr_t,int64_t,int64_t,false,false>(L_11,NULL));
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_12, 0, (Il2CppFullySharedGenericStruct*)L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		il2cpp_codegen_memcpy(V_3, L_13, SizeOf_T_t46B54E1394E86F4EC59651D45B3DFBD912AF848E);
		goto IL_0040;
	}

IL_0034:
	{
		uintptr_t L_14 = (il2cpp_codegen_conv<uintptr_t,Il2CppFullySharedGenericStruct*,intptr_t,false,false>((Il2CppFullySharedGenericStruct*)V_3,NULL));
		int64_t L_15 = V_2;
		uintptr_t L_16 = (il2cpp_codegen_conv<uintptr_t,int64_t,int64_t,false,false>(L_15,NULL));
		int32_t L_17 = V_0;
		int64_t L_18 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_17,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_14, (void*)L_16, L_18, NULL);
	}

IL_0040:
	{
		int32_t L_19 = __this->___Length;
		int32_t L_20 = V_0;
		__this->___Length = ((int32_t)il2cpp_codegen_subtract(L_19, L_20));
		il2cpp_codegen_memcpy(L_21, V_3, SizeOf_T_t46B54E1394E86F4EC59651D45B3DFBD912AF848E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_21, SizeOf_T_t46B54E1394E86F4EC59651D45B3DFBD912AF848E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m4590CF7239319F64DD1DE7F1E5CF341CD5A88678_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_2 = ___1_src;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_3 = ___2_callback;
		CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mB190CFDC57C06AF1DF123853DD1278C9DB8EC42E(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m20D6C46671CDF2A0117036841F76C9EA2E89765B_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_2 = ___1_src;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_3 = ___2_callback;
		CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mB40434355F9A08D0DA2248B8AA43B5F43DF3BF81(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mBB3BE09088AA14350A4E99D0FA9ACE372092D649_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___2_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___1_src;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_3 = ___2_callback;
		CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m0EDB9D505D4D6E4B57D0FD2777645B1D99A65D6A(L_0, L_1, L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mDFF41C29FE9637F59BA78CB79E38512A3CF09AC7_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___3_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___1_src;
		int32_t L_3 = ___2_mipIndex;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_4 = ___3_callback;
		CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mDD01DE312FC030F4A8DF80AD1372BCBD1DC05125(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mFC4D980DAF673130B0757D1BF0C74ECC72AA8C0E_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___1_src, int32_t ___2_size, int32_t ___3_offset, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_2 = ___1_src;
		int32_t L_3 = ___2_size;
		int32_t L_4 = ___3_offset;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_5 = ___4_callback;
		CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mC71C3E90230FC0B882941FBCA180A79CB4B3D7C0(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m1797A693E3B4DD59699F15D1703EA6B1A3490A57_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___1_src, int32_t ___2_size, int32_t ___3_offset, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_2 = ___1_src;
		int32_t L_3 = ___2_size;
		int32_t L_4 = ___3_offset;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_5 = ___4_callback;
		CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m80A71B32A2F66B101D42719A336551C45B26FB43(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mA413BB50721484FE5C2F38E17C1C1E3F3B3D4CB3_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___1_src;
		int32_t L_3 = ___2_mipIndex;
		int32_t L_4 = ___3_dstFormat;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_5 = ___4_callback;
		CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m1B493216B5E83D012F9115886CCEECD06C1AB25F(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mC224093E7F4B147F2A1F86C804DDBBE19384AECB_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___4_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___1_src;
		int32_t L_3 = ___2_mipIndex;
		int32_t L_4 = ___3_dstFormat;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_5 = ___4_callback;
		CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m52B12AC67F1FA2F11EC56A98477C30F17203E95A(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m3DB621F402102565ADA22FE7821F8684ACED6C87_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___9_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___1_src;
		int32_t L_3 = ___2_mipIndex;
		int32_t L_4 = ___3_x;
		int32_t L_5 = ___4_width;
		int32_t L_6 = ___5_y;
		int32_t L_7 = ___6_height;
		int32_t L_8 = ___7_z;
		int32_t L_9 = ___8_depth;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_10 = ___9_callback;
		CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_mA68B0253E6ACBB21E5797B846534E3E273E24DFD(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m076CC5B64DE819DBAF372FE886BA2B90CBD3BC31_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, int32_t ___9_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___10_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___1_src;
		int32_t L_3 = ___2_mipIndex;
		int32_t L_4 = ___3_x;
		int32_t L_5 = ___4_width;
		int32_t L_6 = ___5_y;
		int32_t L_7 = ___6_height;
		int32_t L_8 = ___7_z;
		int32_t L_9 = ___8_depth;
		int32_t L_10 = ___9_dstFormat;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_11 = ___10_callback;
		CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m32E317ED0628441FF263BC1B940C46B76CC27BD1(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m6CE123F7CF5137595A8A743B5AF17BD8D2C3F66B_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_output, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___1_src, int32_t ___2_mipIndex, int32_t ___3_x, int32_t ___4_width, int32_t ___5_y, int32_t ___6_height, int32_t ___7_z, int32_t ___8_depth, int32_t ___9_dstFormat, Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* ___10_callback, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_output;
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_2 = ___1_src;
		int32_t L_3 = ___2_mipIndex;
		int32_t L_4 = ___3_x;
		int32_t L_5 = ___4_width;
		int32_t L_6 = ___5_y;
		int32_t L_7 = ___6_height;
		int32_t L_8 = ___7_z;
		int32_t L_9 = ___8_depth;
		int32_t L_10 = ___9_dstFormat;
		Action_1_t6AC29B34E68BC53AA807670D868CBB59CD5D995F* L_11 = ___10_callback;
		CommandBuffer_RequestAsyncReadbackIntoNativeArray_TisIl2CppFullySharedGenericStruct_m42E911D7FE5A94506B1631439CFFAED6A4C7F919(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m4612A502BC75360BA91CFDF3E61DBCB1D75E90CB_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_2 = ___1_data;
		CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m086EFD47795E3190149B7619BF9C146710ECB8AB(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m27C6E5B0D3DF6CFB5CB1474C6AE92BD28D641399_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___1_data;
		CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m46409F218741C0D24E21228312B5DA8446D174A8(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m9DF8E236C9AD375EAB748CC5715F23ABBEE6BA75_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_1 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_2 = ___1_data;
		CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m22C0E39C23FA8F79F6AF704381F9821ECB636708(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m3F9A4F561905D138501C3EF53CAF41EBF524A8E2_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_1 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___1_data;
		CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mBF059314517180FE72340F8EA07CC2D0C9FDE3D7(L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mE27938896498F85F95486585EB3BB8F54DBEF3D9_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_2 = ___1_data;
		int32_t L_3 = ___2_managedBufferStartIndex;
		int32_t L_4 = ___3_graphicsBufferStartIndex;
		int32_t L_5 = ___4_count;
		CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mA86AD9DC4378D4FAFD843411F356622DC338CC1E(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mD59E7951302BED8F22E9A1C0D3E3EE37ADEFA4AC_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		ComputeBuffer_t51EADA9015EBCC1B982C5584E9AB2734415A8233* L_1 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___1_data;
		int32_t L_3 = ___2_nativeBufferStartIndex;
		int32_t L_4 = ___3_graphicsBufferStartIndex;
		int32_t L_5 = ___4_count;
		CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m14E6204274D0FD89CB6457CE966661D0650A8666(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m146FB8A0C1686793072BF6F4C14A4F38E29FD925_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___1_data, int32_t ___2_managedBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_1 = ___0_buffer;
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_2 = ___1_data;
		int32_t L_3 = ___2_managedBufferStartIndex;
		int32_t L_4 = ___3_graphicsBufferStartIndex;
		int32_t L_5 = ___4_count;
		CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_mCF53CDE2D0D26941A2E556B78EFD306B8185A618(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeCommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m605037FF731BED168BA65C7E3A07F6B48A2F76C5_fshared (UnsafeCommandBuffer_tDE6BB2FE234DC7453CA682AB275888E9E35F22F2* __this, GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* ___0_buffer, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_data, int32_t ___2_nativeBufferStartIndex, int32_t ___3_graphicsBufferStartIndex, int32_t ___4_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		CommandBuffer_tB56007DC84EF56296C325EC32DD12AC1E3DC91F7* L_0 = ((BaseCommandBuffer_tD67BB9B3F740537BD3F3A96FA17D06E6C3BFDC06*)__this)->___m_WrappedCommandBuffer;
		GraphicsBuffer_t91FACD3CD78588C25C361C453D1A2FE055EC4AF1* L_1 = ___0_buffer;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2 = ___1_data;
		int32_t L_3 = ___2_nativeBufferStartIndex;
		int32_t L_4 = ___3_graphicsBufferStartIndex;
		int32_t L_5 = ___4_count;
		CommandBuffer_SetBufferData_TisIl2CppFullySharedGenericStruct_m51DFEC65C4C610333B2B55F5FBC5441BEA86265F(L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeListExtensions_ArraysEqual_TisIl2CppFullySharedGenericStruct_m26517D1B620B6BB143F8CDBCBC9299D6C9AA512F_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___1_other, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t36936CBBA76E77B94AE3777BAF4D0FDDB161EC12 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t36936CBBA76E77B94AE3777BAF4D0FDDB161EC12);
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t36936CBBA76E77B94AE3777BAF4D0FDDB161EC12);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t36936CBBA76E77B94AE3777BAF4D0FDDB161EC12);
	memset(V_1, 0, SizeOf_T_t36936CBBA76E77B94AE3777BAF4D0FDDB161EC12);
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0;
		L_0 = UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline((&___0_container), NULL);
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_1 = ___1_other;
		int32_t L_2;
		L_2 = UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline(L_1, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0042;
	}

IL_0015:
	{
		int32_t L_3 = V_0;
		UnsafeList_1_get_Item_mB847AC77ACE34F511CEABF3E45B6EAD5D59165AF_inline((&___0_container), L_3, (Il2CppFullySharedGenericStruct*)L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(V_1, L_4, SizeOf_T_t36936CBBA76E77B94AE3777BAF4D0FDDB161EC12);
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_5 = ___1_other;
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 L_6 = (*(UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6*)L_5);
		V_2 = L_6;
		int32_t L_7 = V_0;
		UnsafeList_1_get_Item_mB847AC77ACE34F511CEABF3E45B6EAD5D59165AF_inline((&V_2), L_7, (Il2CppFullySharedGenericStruct*)L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		Il2CppConstrainedCallData L_10;
		Il2CppMethodPointer L_11 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 3), (void*)(Il2CppFullySharedGenericStruct*)V_1, &L_10, L_9);
		bool L_12 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericStruct >::Invoke(L_11, L_10.method,L_10.thisPtr, L_8);
		if (L_12)
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0042:
	{
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_inline((&___0_container), NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeListExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m849EF25437A5D844E398509A94A164CA1BD07D7A_fshared (ParallelReader_tE9E5B90E22A4BC77DB4B327155E0A9F071FC4839 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t71E8B5E5C2FEAD5E433A30BDC27D9E9F6C907692 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t71E8B5E5C2FEAD5E433A30BDC27D9E9F6C907692);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t71E8B5E5C2FEAD5E433A30BDC27D9E9F6C907692);
	{
		ParallelReader_tE9E5B90E22A4BC77DB4B327155E0A9F071FC4839 L_0 = ___0_container;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_U_t71E8B5E5C2FEAD5E433A30BDC27D9E9F6C907692);
		int32_t L_3;
		L_3 = UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m4C0405202053EC610D5814D16972342C44B04015(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t71E8B5E5C2FEAD5E433A30BDC27D9E9F6C907692): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeListExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m9A04B9F17C4745874BFCBA06B0CA62B3C1BD8618_fshared (ReadOnly_t620C834D6C54D781225D753876F232E09821956C ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_tDC75599B528D5C6C23F210DE1975466A48F27F8C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_tDC75599B528D5C6C23F210DE1975466A48F27F8C);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_tDC75599B528D5C6C23F210DE1975466A48F27F8C);
	{
		ReadOnly_t620C834D6C54D781225D753876F232E09821956C L_0 = ___0_container;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_U_tDC75599B528D5C6C23F210DE1975466A48F27F8C);
		int32_t L_3;
		L_3 = UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m666B6958EA2FFC68FF7ED5C8350CE4F72D717323(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_tDC75599B528D5C6C23F210DE1975466A48F27F8C): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeListExtensions_Contains_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mEA66444086816FFF6C02FDEDF064DC92D43ABB07_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t79ED4F2F667B96B1F466267D4E93F6567EE08001 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t79ED4F2F667B96B1F466267D4E93F6567EE08001);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t79ED4F2F667B96B1F466267D4E93F6567EE08001);
	{
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 L_0 = ___0_container;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_U_t79ED4F2F667B96B1F466267D4E93F6567EE08001);
		int32_t L_3;
		L_3 = UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m57EF2104D6B01A3B93003ABF811294D496610604(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t79ED4F2F667B96B1F466267D4E93F6567EE08001): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m4C0405202053EC610D5814D16972342C44B04015_fshared (ParallelReader_tE9E5B90E22A4BC77DB4B327155E0A9F071FC4839 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t527490260DD61FB68E8B24509583B4E5B8004E85 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t527490260DD61FB68E8B24509583B4E5B8004E85);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t527490260DD61FB68E8B24509583B4E5B8004E85);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ParallelReader_AsReadOnlySpan_m9816F75DCB61EA633E012C3F5FF1457176DB92EB((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t527490260DD61FB68E8B24509583B4E5B8004E85);
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t527490260DD61FB68E8B24509583B4E5B8004E85): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m666B6958EA2FFC68FF7ED5C8350CE4F72D717323_fshared (ReadOnly_t620C834D6C54D781225D753876F232E09821956C ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t8A2813E5F32C60A802660497A33599DED0C1E01F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t8A2813E5F32C60A802660497A33599DED0C1E01F);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t8A2813E5F32C60A802660497A33599DED0C1E01F);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = ReadOnly_AsReadOnlySpan_mC6255AF01C4715D090F363532CBFFE7025B4C17E((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t8A2813E5F32C60A802660497A33599DED0C1E01F);
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t8A2813E5F32C60A802660497A33599DED0C1E01F): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeListExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_m57EF2104D6B01A3B93003ABF811294D496610604_fshared (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6 ___0_container, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_U_t54CFCA7844B58AFDB181E954D6BBD75E1E48ACF7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_U_t54CFCA7844B58AFDB181E954D6BBD75E1E48ACF7);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_U_t54CFCA7844B58AFDB181E954D6BBD75E1E48ACF7);
	{
		ReadOnlySpan_1_tE8C37D9A05FCAB953169AFFE8A0ABCA809781E25 L_0;
		L_0 = UnsafeList_1_AsReadOnlySpan_m658FB0F8507A508C7EE03D00734D06611B703400((&___0_container), il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___1_value : &___1_value), SizeOf_U_t54CFCA7844B58AFDB181E954D6BBD75E1E48ACF7);
		int32_t L_3;
		L_3 = NativeArrayExtensions_IndexOf_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericAny_mBC24F0A9BF186AF2568D6F9A0567302F4060BD96(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? il2cpp_codegen_memcpy(L_2, L_1, SizeOf_U_t54CFCA7844B58AFDB181E954D6BBD75E1E48ACF7): *(void**)L_1), il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_AllocateHashMap_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mD7F5F49BFAB2AEE159CED53DACA62E9374B0B063_fshared (int32_t ___0_length, int64_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** ___3_outBuf, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* V_1 = NULL;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(((int32_t)64), ((int32_t)il2cpp_codegen_multiply(((int32_t)64), L_1)))),NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___2_label;
		void* L_4;
		L_4 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_2, ((int32_t)64), L_3, NULL);
		V_1 = (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926*)L_4;
		int64_t L_5 = ___1_bucketLength;
		int64_t L_6;
		L_6 = math_ceilpow2_m8691C3C194B41660E1FB2E694F7D209BE60DDCC7_inline(L_5, NULL);
		___1_bucketLength = L_6;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_7 = V_1;
		int32_t L_8 = ___0_length;
		L_7->___keyCapacity = L_8;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_9 = V_1;
		int64_t L_10 = ___1_bucketLength;
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int32_t L_12 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_subtract(L_10, L_11)),NULL));
		L_9->___bucketCapacityMask = L_12;
		int32_t L_13 = ___0_length;
		int64_t L_14 = ___1_bucketLength;
		int64_t L_15;
		L_15 = UnsafeParallelHashMapData_CalculateDataSize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m86C560D40D8AAEF07631BFB8D1698688602BFD91(L_13, L_14, (&V_2), (&V_3), (&V_4), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_5 = L_15;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_16 = V_1;
		int64_t L_17 = V_5;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_18 = ___2_label;
		void* L_19;
		L_19 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_17, ((int32_t)64), L_18, NULL);
		L_16->___values = (uint8_t*)L_19;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = V_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_21 = V_1;
		uint8_t* L_22 = L_21->___values;
		int64_t L_23 = V_2;
		intptr_t L_24 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_23,NULL));
		L_20->___keys = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, L_24));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_25 = V_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = V_1;
		uint8_t* L_27 = L_26->___values;
		int64_t L_28 = V_3;
		intptr_t L_29 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_28,NULL));
		L_25->___next = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, L_29));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_30 = V_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_31 = V_1;
		uint8_t* L_32 = L_31->___values;
		int64_t L_33 = V_4;
		intptr_t L_34 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_33,NULL));
		L_30->___buckets = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_32, L_34));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926** L_35 = ___3_outBuf;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_36 = V_1;
		*(((intptr_t*)L_35)) = ((intptr_t)L_36);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnsafeParallelHashMapData_CalculateDataSize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m86C560D40D8AAEF07631BFB8D1698688602BFD91_fshared (int32_t ___0_length, int64_t ___1_bucketLength, int64_t* ___2_keyOffset, int64_t* ___3_nextOffset, int64_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_tB73822E5C10E34F3A9A9B541102F7CAD7D84853E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const uint32_t SizeOf_TKey_tDBC8C46C28C29C419CF2B4A775A1045FCC9C9F3D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int64_t V_5 = 0;
	{
		uint32_t L_0 = SizeOf_TValue_tB73822E5C10E34F3A9A9B541102F7CAD7D84853E;
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_0,NULL));
		uint32_t L_2 = SizeOf_TKey_tDBC8C46C28C29C419CF2B4A775A1045FCC9C9F3D;
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_2,NULL));
		V_0 = L_3;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		V_1 = L_4;
		int32_t L_5 = ___0_length;
		int64_t L_6 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_5,NULL));
		int64_t L_7;
		L_7 = CollectionHelper_Align_mC40859378CEE3C9844C39FAC725566EBA5E7BD82(((int64_t)il2cpp_codegen_multiply(L_1, L_6)), ((int32_t)64), NULL);
		V_2 = L_7;
		int64_t L_8 = V_0;
		int32_t L_9 = ___0_length;
		int64_t L_10 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_9,NULL));
		int64_t L_11;
		L_11 = CollectionHelper_Align_mC40859378CEE3C9844C39FAC725566EBA5E7BD82(((int64_t)il2cpp_codegen_multiply(L_8, L_10)), ((int32_t)64), NULL);
		V_3 = L_11;
		int64_t L_12 = V_1;
		int32_t L_13 = ___0_length;
		int64_t L_14 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_13,NULL));
		int64_t L_15;
		L_15 = CollectionHelper_Align_mC40859378CEE3C9844C39FAC725566EBA5E7BD82(((int64_t)il2cpp_codegen_multiply(L_12, L_14)), ((int32_t)64), NULL);
		V_4 = L_15;
		int64_t L_16 = V_1;
		int64_t L_17 = ___1_bucketLength;
		int64_t L_18;
		L_18 = CollectionHelper_Align_mC40859378CEE3C9844C39FAC725566EBA5E7BD82(((int64_t)il2cpp_codegen_multiply(L_16, L_17)), ((int32_t)64), NULL);
		V_5 = L_18;
		int64_t L_19 = V_2;
		int64_t L_20 = V_3;
		int64_t L_21 = V_4;
		int64_t L_22 = V_5;
		int64_t* L_23 = ___2_keyOffset;
		int64_t L_24 = V_2;
		*(L_23) = L_24;
		int64_t* L_25 = ___3_nextOffset;
		int64_t* L_26 = ___2_keyOffset;
		int64_t L_27 = *(L_26);
		int64_t L_28 = V_3;
		*(L_25) = ((int64_t)il2cpp_codegen_add(L_27, L_28));
		int64_t* L_29 = ___4_bucketOffset;
		int64_t* L_30 = ___3_nextOffset;
		int64_t L_31 = *(L_30);
		int64_t L_32 = V_4;
		*(L_29) = ((int64_t)il2cpp_codegen_add(L_31, L_32));
		return ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_add(L_19, L_20)), L_21)), L_22));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyArray_TisIl2CppFullySharedGenericStruct_m7137096325EC50712B1665E2B5937352A1B004F2_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_tA421440C75A581A02A933BEA4E233521D2CE2584 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_TKey_tA421440C75A581A02A933BEA4E233521D2CE2584);
	const Il2CppFullySharedGenericStruct L_15 = alloca(SizeOf_TKey_tA421440C75A581A02A933BEA4E233521D2CE2584);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___1_result), NULL);
		V_4 = L_4;
		goto IL_0054;
	}

IL_001d:
	{
		int32_t* L_5 = V_0;
		int32_t L_6 = V_2;
		intptr_t L_7 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_6,NULL));
		int32_t L_8 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)il2cpp_codegen_multiply(L_7, 4)))));
		V_5 = L_8;
		goto IL_004b;
	}

IL_0028:
	{
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_11 = ___0_data;
		uint8_t* L_12 = L_11->___keys;
		int32_t L_13 = V_5;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_12, L_13, (Il2CppFullySharedGenericStruct*)L_14, il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline((&___1_result), L_10, il2cpp_codegen_memcpy(L_15, L_14, SizeOf_TKey_tA421440C75A581A02A933BEA4E233521D2CE2584), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t* L_16 = V_1;
		int32_t L_17 = V_5;
		intptr_t L_18 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_17,NULL));
		int32_t L_19 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_16, ((intptr_t)il2cpp_codegen_multiply(L_18, 4)))));
		V_5 = L_19;
	}

IL_004b:
	{
		int32_t L_20 = V_5;
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0054:
	{
		int32_t L_22 = V_2;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_23 = ___0_data;
		int32_t L_24 = L_23->___bucketCapacityMask;
		if ((((int32_t)L_22) > ((int32_t)L_24)))
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_4;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_001d;
		}
	}

IL_0062:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetKeyValueArrays_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mE7B20EAFC97698B67540C38AF16BB6595C8B786D_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeKeyValueArrays_2_t97DEBC72840B73CFCEE6195C4C495C675E96FAF1 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TKey_t144C42ACB2DDADF052103F43EA00E1E62D94C90F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_TValue_t4FEA332ED977D95FEBFE603FCE1F5250E543CBBF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_TKey_t144C42ACB2DDADF052103F43EA00E1E62D94C90F);
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_TKey_t144C42ACB2DDADF052103F43EA00E1E62D94C90F);
	const Il2CppFullySharedGenericStruct L_23 = alloca(SizeOf_TValue_t4FEA332ED977D95FEBFE603FCE1F5250E543CBBF);
	const Il2CppFullySharedGenericStruct L_24 = alloca(SizeOf_TValue_t4FEA332ED977D95FEBFE603FCE1F5250E543CBBF);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeKeyValueArrays_2_get_Length_m5540F10E36DBBB6005821F5FEAF15610EB68C429((&___1_result), NULL);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_007b;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		int32_t L_10 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, 4)))));
		V_6 = L_10;
		goto IL_0072;
	}

IL_0030:
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&(&___1_result)->___Keys);
		int32_t L_12 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		uint8_t* L_14 = L_13->___keys;
		int32_t L_15 = V_6;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_14, L_15, (Il2CppFullySharedGenericStruct*)L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline(L_11, L_12, il2cpp_codegen_memcpy(L_17, L_16, SizeOf_TKey_t144C42ACB2DDADF052103F43EA00E1E62D94C90F), il2cpp_rgctx_method(method->rgctx_data, 3));
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_18 = (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)(&(&___1_result)->___Values);
		int32_t L_19 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_20 = ___0_data;
		uint8_t* L_21 = L_20->___values;
		int32_t L_22 = V_6;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_21, L_22, (Il2CppFullySharedGenericStruct*)L_23, il2cpp_rgctx_method(method->rgctx_data, 4));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline(L_18, L_19, il2cpp_codegen_memcpy(L_24, L_23, SizeOf_TValue_t4FEA332ED977D95FEBFE603FCE1F5250E543CBBF), il2cpp_rgctx_method(method->rgctx_data, 6));
		int32_t L_25 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
		int32_t* L_26 = V_1;
		int32_t L_27 = V_6;
		intptr_t L_28 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_27,NULL));
		int32_t L_29 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_26, ((intptr_t)il2cpp_codegen_multiply(L_28, 4)))));
		V_6 = L_29;
	}

IL_0072:
	{
		int32_t L_30 = V_6;
		if ((!(((uint32_t)L_30) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_007b:
	{
		int32_t L_32 = V_2;
		int32_t L_33 = V_5;
		if ((((int32_t)L_32) > ((int32_t)L_33)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_34 = V_3;
		int32_t L_35 = V_4;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0025;
		}
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_GetValueArray_TisIl2CppFullySharedGenericStruct_m127A626CD960E02AEBF7B88B7A8F3A9401445A69_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___1_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TValue_t0232C4E00D4E39FC209358F87310CF1B96E0619E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_16 = alloca(SizeOf_TValue_t0232C4E00D4E39FC209358F87310CF1B96E0619E);
	const Il2CppFullySharedGenericStruct L_17 = alloca(SizeOf_TValue_t0232C4E00D4E39FC209358F87310CF1B96E0619E);
	int32_t* V_0 = NULL;
	int32_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = ___0_data;
		uint8_t* L_1 = L_0->___buckets;
		V_0 = (int32_t*)L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		uint8_t* L_3 = L_2->___next;
		V_1 = (int32_t*)L_3;
		V_2 = 0;
		V_3 = 0;
		int32_t L_4;
		L_4 = NativeArray_1_get_Length_mBE5CC8B844994CFC4AB434235F915881575E63C8_inline((&___1_result), NULL);
		V_4 = L_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		int32_t L_6 = L_5->___bucketCapacityMask;
		V_5 = L_6;
		goto IL_005c;
	}

IL_0025:
	{
		int32_t* L_7 = V_0;
		int32_t L_8 = V_2;
		intptr_t L_9 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_8,NULL));
		int32_t L_10 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(L_9, 4)))));
		V_6 = L_10;
		goto IL_0053;
	}

IL_0030:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = L_11;
		V_3 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_13 = ___0_data;
		uint8_t* L_14 = L_13->___values;
		int32_t L_15 = V_6;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_14, L_15, (Il2CppFullySharedGenericStruct*)L_16, il2cpp_rgctx_method(method->rgctx_data, 1));
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline((&___1_result), L_12, il2cpp_codegen_memcpy(L_17, L_16, SizeOf_TValue_t0232C4E00D4E39FC209358F87310CF1B96E0619E), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t* L_18 = V_1;
		int32_t L_19 = V_6;
		intptr_t L_20 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_19,NULL));
		int32_t L_21 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_18, ((intptr_t)il2cpp_codegen_multiply(L_20, 4)))));
		V_6 = L_21;
	}

IL_0053:
	{
		int32_t L_22 = V_6;
		if ((!(((uint32_t)L_22) == ((uint32_t)(-1)))))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_005c:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = V_5;
		if ((((int32_t)L_24) > ((int32_t)L_25)))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_26 = V_3;
		int32_t L_27 = V_4;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0025;
		}
	}

IL_0066:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapData_ReallocateHashMap_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mD75A84E690BE573D5B2F40EF59DFD1AC4703BFED_fshared (UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* ___0_data, int32_t ___1_newCapacity, int64_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const uint32_t SizeOf_TValue_tC69328621FD17954468B8EF13B10C5DE9B45FA92 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	void* L_82 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 2)));
	const Il2CppFullySharedGenericStruct L_81 = alloca(SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2);
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t* V_11 = NULL;
	int32_t* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Il2CppFullySharedGenericStruct V_15 = alloca(SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2);
	memset(V_15, 0, SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2);
	{
		int64_t L_0 = ___2_newBucketCapacity;
		int64_t L_1;
		L_1 = math_ceilpow2_m8691C3C194B41660E1FB2E694F7D209BE60DDCC7_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_2 = ___0_data;
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001e;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_5 = ___0_data;
		int32_t L_6 = L_5->___bucketCapacityMask;
		int64_t L_7 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_6, 1)),NULL));
		int64_t L_8 = ___2_newBucketCapacity;
		if ((!(((uint64_t)L_7) == ((uint64_t)L_8))))
		{
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		int32_t L_9 = ___1_newCapacity;
		int64_t L_10 = ___2_newBucketCapacity;
		int64_t L_11;
		L_11 = UnsafeParallelHashMapData_CalculateDataSize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m86C560D40D8AAEF07631BFB8D1698688602BFD91(L_9, L_10, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_12 = ___3_label;
		void* L_13;
		L_13 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_11, ((int32_t)64), L_12, NULL);
		V_3 = (uint8_t*)L_13;
		uint8_t* L_14 = V_3;
		int64_t L_15 = V_0;
		intptr_t L_16 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_15,NULL));
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_14, L_16));
		uint8_t* L_17 = V_3;
		int64_t L_18 = V_1;
		intptr_t L_19 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_18,NULL));
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_19));
		uint8_t* L_20 = V_3;
		int64_t L_21 = V_2;
		intptr_t L_22 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(L_21,NULL));
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_20, L_22));
		uint8_t* L_23 = V_3;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_24 = ___0_data;
		uint8_t* L_25 = L_24->___values;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_26 = ___0_data;
		int32_t L_27 = L_26->___keyCapacity;
		int64_t L_28 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_27,NULL));
		uint32_t L_29 = SizeOf_TValue_tC69328621FD17954468B8EF13B10C5DE9B45FA92;
		int64_t L_30 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_29,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_23, (void*)L_25, ((int64_t)il2cpp_codegen_multiply(L_28, L_30)), NULL);
		uint8_t* L_31 = V_4;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_32 = ___0_data;
		uint8_t* L_33 = L_32->___keys;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_34 = ___0_data;
		int32_t L_35 = L_34->___keyCapacity;
		int64_t L_36 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_35,NULL));
		uint32_t L_37 = SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2;
		int64_t L_38 = (il2cpp_codegen_conv<int64_t,uint32_t,int32_t,false,false>(L_37,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)il2cpp_codegen_multiply(L_36, L_38)), NULL);
		uint8_t* L_39 = V_5;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_40 = ___0_data;
		uint8_t* L_41 = L_40->___next;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_42 = ___0_data;
		int32_t L_43 = L_42->___keyCapacity;
		int64_t L_44 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_43,NULL));
		int64_t L_45 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(4,NULL));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_39, (void*)L_41, ((int64_t)il2cpp_codegen_multiply(L_44, L_45)), NULL);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_46 = ___0_data;
		int32_t L_47 = L_46->___keyCapacity;
		V_8 = L_47;
		goto IL_00ae;
	}

IL_009e:
	{
		uint8_t* L_48 = V_5;
		int32_t L_49 = V_8;
		intptr_t L_50 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_49,NULL));
		*(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_48, ((intptr_t)il2cpp_codegen_multiply(L_50, 4)))))) = (-1);
		int32_t L_51 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_51, 1));
	}

IL_00ae:
	{
		int32_t L_52 = V_8;
		int32_t L_53 = ___1_newCapacity;
		if ((((int32_t)L_52) < ((int32_t)L_53)))
		{
			goto IL_009e;
		}
	}
	{
		V_9 = 0;
		goto IL_00c8;
	}

IL_00b8:
	{
		uint8_t* L_54 = V_6;
		int32_t L_55 = V_9;
		intptr_t L_56 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_55,NULL));
		*(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(L_56, 4)))))) = (-1);
		int32_t L_57 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_00c8:
	{
		int32_t L_58 = V_9;
		int64_t L_59 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_58,NULL));
		int64_t L_60 = ___2_newBucketCapacity;
		if ((((int64_t)L_59) < ((int64_t)L_60)))
		{
			goto IL_00b8;
		}
	}
	{
		int64_t L_61 = ___2_newBucketCapacity;
		int64_t L_62 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		int32_t L_63 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_subtract(L_61, L_62)),NULL));
		V_7 = L_63;
		V_10 = 0;
		goto IL_0155;
	}

IL_00da:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_64 = ___0_data;
		uint8_t* L_65 = L_64->___buckets;
		V_11 = (int32_t*)L_65;
		uint8_t* L_66 = V_5;
		V_12 = (int32_t*)L_66;
		goto IL_0143;
	}

IL_00e8:
	{
		int32_t* L_67 = V_11;
		int32_t L_68 = V_10;
		intptr_t L_69 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_68,NULL));
		int32_t L_70 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(L_69, 4)))));
		V_13 = L_70;
		int32_t* L_71 = V_11;
		int32_t L_72 = V_10;
		intptr_t L_73 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_72,NULL));
		int32_t* L_74 = V_12;
		int32_t L_75 = V_13;
		intptr_t L_76 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_75,NULL));
		int32_t L_77 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(L_76, 4)))));
		*(((int32_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(L_73, 4))))) = L_77;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_78 = ___0_data;
		uint8_t* L_79 = L_78->___keys;
		int32_t L_80 = V_13;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline((void*)L_79, L_80, (Il2CppFullySharedGenericStruct*)L_81, il2cpp_rgctx_method(method->rgctx_data, 3));
		il2cpp_codegen_memcpy(V_15, L_81, SizeOf_TKey_t5C6CF5C92FA36F580A298FBAD5C0C26409B948E2);
		Il2CppConstrainedCallData L_83;
		Il2CppMethodPointer L_84 = il2cpp_codegen_get_runtime_constrained_call_data(il2cpp_rgctx_data(method->rgctx_data, 2), il2cpp_rgctx_method(method->rgctx_data, 4), (void*)(Il2CppFullySharedGenericStruct*)V_15, &L_83, L_82);
		typedef int32_t ( *func_L_85)(void*,const RuntimeMethod*);
		int32_t L_86 = ((func_L_85)L_84)(L_83.thisPtr,L_83.method);
		int32_t L_87 = V_7;
		V_14 = ((int32_t)(L_86&L_87));
		int32_t* L_88 = V_12;
		int32_t L_89 = V_13;
		intptr_t L_90 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_89,NULL));
		uint8_t* L_91 = V_6;
		int32_t L_92 = V_14;
		intptr_t L_93 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_92,NULL));
		int32_t L_94 = *(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_91, ((intptr_t)il2cpp_codegen_multiply(L_93, 4))))));
		*(((int32_t*)il2cpp_codegen_add((intptr_t)L_88, ((intptr_t)il2cpp_codegen_multiply(L_90, 4))))) = L_94;
		uint8_t* L_95 = V_6;
		int32_t L_96 = V_14;
		intptr_t L_97 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_96,NULL));
		int32_t L_98 = V_13;
		*(((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_95, ((intptr_t)il2cpp_codegen_multiply(L_97, 4)))))) = L_98;
	}

IL_0143:
	{
		int32_t* L_99 = V_11;
		int32_t L_100 = V_10;
		intptr_t L_101 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_100,NULL));
		int32_t L_102 = *(((int32_t*)il2cpp_codegen_add((intptr_t)L_99, ((intptr_t)il2cpp_codegen_multiply(L_101, 4)))));
		if ((((int32_t)L_102) >= ((int32_t)0)))
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_103 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_0155:
	{
		int32_t L_104 = V_10;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_105 = ___0_data;
		int32_t L_106 = L_105->___bucketCapacityMask;
		if ((((int32_t)L_104) <= ((int32_t)L_106)))
		{
			goto IL_00da;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_107 = ___0_data;
		uint8_t* L_108 = L_107->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_109 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_108, L_109, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_110 = ___0_data;
		int32_t L_111 = L_110->___allocatedIndexLength;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_112 = ___0_data;
		int32_t L_113 = L_112->___keyCapacity;
		if ((((int32_t)L_111) <= ((int32_t)L_113)))
		{
			goto IL_0188;
		}
	}
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_114 = ___0_data;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_115 = ___0_data;
		int32_t L_116 = L_115->___keyCapacity;
		L_114->___allocatedIndexLength = L_116;
	}

IL_0188:
	{
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_117 = ___0_data;
		uint8_t* L_118 = V_3;
		L_117->___values = L_118;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_119 = ___0_data;
		uint8_t* L_120 = V_4;
		L_119->___keys = L_120;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_121 = ___0_data;
		uint8_t* L_122 = V_5;
		L_121->___next = L_122;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_123 = ___0_data;
		uint8_t* L_124 = V_6;
		L_123->___buckets = L_124;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_125 = ___0_data;
		int32_t L_126 = ___1_newCapacity;
		L_125->___keyCapacity = L_126;
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_127 = ___0_data;
		int32_t L_128 = V_7;
		L_127->___bucketCapacityMask = L_128;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB UnsafeParallelHashMapDataEnumerator_GetCurrent_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mF329629AC81460B256D980C6CB8DD9E758F034A3_fshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, const RuntimeMethod* method) 
{
	KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB));
		UnsafeParallelHashMapData_t43CAB3170FBB624A9CCB6F30C0EC1BB820D57926* L_0 = __this->___m_Buffer;
		(&V_0)->___m_Buffer = L_0;
		int32_t L_1 = __this->___m_Index;
		(&V_0)->___m_Index = L_1;
		KeyValue_2_t6CF850BB70347624D35C74018B4BBBAE4CED68AB L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeParallelHashMapDataEnumerator_GetCurrentKey_TisIl2CppFullySharedGenericStruct_mCFE6E3FA9A491B1CB54FF3EA51EF2A853ABB2533_fshared (UnsafeParallelHashMapDataEnumerator_t8CD0B557DE7804D4ED6A5599D87CC889C2DDA4F5* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* UnsafePtrListExtensions_ListData_TisIl2CppFullySharedGenericStruct_mFF9507AE135715955F3CF4DD075A2CDFC5BC6B0C_fshared (UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5* ___0_from, const RuntimeMethod* method) 
{
	{
		UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5* L_0 = ___0_from;
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* L_1;
		L_1 = UnsafeUtility_As_TisUnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m6F599F780EA82D7BF0965680C04D31DB38FBB367_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 UnsafePtrListExtensions_ListDataRO_TisIl2CppFullySharedGenericStruct_mFF9DAC69E1BEF0AFC23A8917EC38C644F4873B88_fshared (UnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5 ___0_from, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613* L_0;
		L_0 = UnsafeUtility_As_TisUnsafePtrList_1_tA37C18AF110F20C6437047DBA50BF355602044E5_TisUnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613_m6F599F780EA82D7BF0965680C04D31DB38FBB367_inline((&___0_from), NULL);
		UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613 L_1 = (*(UnsafeList_1_t7F37B06177929AC50704A82689AED5BBFE830613*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeQueueData_AllocateQueue_TisIl2CppFullySharedGenericStruct_mF5F2F17F56ED0720581E604C4A49821E2BB67353_fshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2** ___1_outBuf, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t1DBA8EB390B8E400F799289005C416BE1ABCE55B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* V_2 = NULL;
	int32_t V_3 = 0;
	{
		int32_t L_0;
		L_0 = JobsUtility_get_ThreadIndexCount_m88A954344398143540618B35943F863B92465676(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_inline(UnsafeUtility_SizeOf_TisUnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2_m25193E03B20C96400F243B7A682AF5BB8F030297_RuntimeMethod_var);
		int32_t L_2;
		L_2 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(L_1, ((int32_t)64), NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		int64_t L_5 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)il2cpp_codegen_add(L_3, ((int32_t)il2cpp_codegen_multiply(((int32_t)64), L_4)))),NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_6 = ___0_allocator;
		void* L_7;
		L_7 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_5, ((int32_t)64), L_6, NULL);
		V_2 = (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_7;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_8 = V_2;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_9 = V_2;
		int32_t L_10 = V_1;
		L_8->___m_CurrentWriteBlockTLS = (uint8_t*)((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)il2cpp_codegen_add((intptr_t)L_9, L_10));
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_11 = V_2;
		L_11->___m_FirstBlock = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_12 = V_2;
		L_12->___m_LastBlock = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_13 = V_2;
		int32_t L_14;
		L_14 = UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_inline(UnsafeUtility_SizeOf_TisUnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C_mEBEAA7CA1C71A37FA5CBCF89A0C9B78ABAD5C8C7_RuntimeMethod_var);
		uint32_t L_15 = SizeOf_T_t1DBA8EB390B8E400F799289005C416BE1ABCE55B;
		L_13->___m_MaxItems = ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)16384), L_14))/(int32_t)L_15));
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_16 = V_2;
		L_16->___m_CurrentRead = 0;
		V_3 = 0;
		goto IL_0072;
	}

IL_0065:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_17 = V_2;
		int32_t L_18 = V_3;
		uintptr_t L_19 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_17, L_18, (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_19, NULL);
		int32_t L_20 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0072:
	{
		int32_t L_21 = V_3;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0065;
		}
	}
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2** L_23 = ___1_outBuf;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_24 = V_2;
		*(((intptr_t*)L_23)) = ((intptr_t)L_24);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* UnsafeQueueData_AllocateWriteBlockMT_TisIl2CppFullySharedGenericStruct_m3E881C19E007120AE0E24733B40ED4C45D718211_fshared (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* ___0_data, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, int32_t ___2_threadIndex, const RuntimeMethod* method) 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* V_0 = NULL;
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* V_1 = NULL;
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_0 = ___0_data;
		int32_t L_1 = ___2_threadIndex;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_2;
		L_2 = UnsafeQueueData_GetCurrentWriteBlockTLS_m51E3B0E146EF03939DC2ADB143AE4A6382F9AF12_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_0, L_1, NULL);
		V_0 = L_2;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_3 = V_0;
		uintptr_t L_4 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((((intptr_t)L_3) == ((intptr_t)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_5 = V_0;
		int32_t L_6 = L_5->___m_NumItems;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_7 = ___0_data;
		int32_t L_8 = L_7->___m_MaxItems;
		if ((((int32_t)L_6) == ((int32_t)L_8)))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_9 = V_0;
		return L_9;
	}

IL_001d:
	{
		uintptr_t L_10 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_10;
	}

IL_0020:
	{
		int64_t L_11 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(((int32_t)16384),NULL));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_12 = ___1_allocator;
		void* L_13;
		L_13 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(L_11, ((int32_t)16), L_12, NULL);
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_13;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_14 = V_0;
		uintptr_t L_15 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		L_14->___m_NextBlock = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_15;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_16 = V_0;
		L_16->___m_NumItems = 0;
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_17 = ___0_data;
		intptr_t* L_18 = (intptr_t*)(&L_17->___m_LastBlock);
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_19 = V_0;
		intptr_t L_20;
		L_20 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_19, NULL);
		intptr_t L_21;
		L_21 = il2cpp_intrinsic_interlocked_exchange(L_18, L_20);
		void* L_22;
		L_22 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_21, NULL);
		V_1 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)L_22;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_23 = V_1;
		uintptr_t L_24 = (il2cpp_codegen_conv<uintptr_t,int32_t,int32_t,false,false>(0,NULL));
		if ((!(((uintptr_t)L_23) == ((uintptr_t)L_24))))
		{
			goto IL_0068;
		}
	}
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_25 = ___0_data;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_26 = V_0;
		intptr_t L_27;
		L_27 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)L_26, NULL);
		L_25->___m_FirstBlock = L_27;
		goto IL_006f;
	}

IL_0068:
	{
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_28 = V_1;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_29 = V_0;
		L_28->___m_NextBlock = L_29;
	}

IL_006f:
	{
		UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* L_30 = ___0_data;
		int32_t L_31 = ___2_threadIndex;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_32 = V_0;
		UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline((UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2*)L_30, L_31, L_32, NULL);
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_33 = V_0;
		return L_33;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeScratchAllocator_Allocate_TisIl2CppFullySharedGenericStruct_m3B33D0B6617F34AB8E20C0E9099FE865A885ACC2_fshared (UnsafeScratchAllocator_t7AEFFE3C167D549ADBAFEEFB73A2EAD4DB6506BA* __this, int32_t ___0_count, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBD5AE757D706793329F23CD2574724B9BDADE9F2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tBD5AE757D706793329F23CD2574724B9BDADE9F2;
		int32_t L_1 = ___0_count;
		int32_t L_2;
		L_2 = UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		void* L_3;
		L_3 = UnsafeScratchAllocator_Allocate_m6C6B645A1CAE920CC0E95EE353ACF36ECBAF1F08(__this, ((int32_t)il2cpp_codegen_multiply((int32_t)L_0, L_1)), L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 UnsafeStream_ScheduleConstruct_TisIl2CppFullySharedGenericStruct_mB6BE7367A0E0DCBE2B5BE646A489A31672917F1A_fshared (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* ___0_stream, NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___1_bufferCount, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___2_dependency, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJobExtensions_Schedule_TisConstructJobList_t3EA9493BA14A6EAF46D2C6B1EFE5727F3048778F_m549B4682669E88648E24F766F339DDB43F207B50_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstructJobList_t3EA9493BA14A6EAF46D2C6B1EFE5727F3048778F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* L_0 = ___0_stream;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___3_allocator;
		UnsafeStream_AllocateBlock_m7D6C950B165B889AFCE6D74C784E2BB1291705EE(L_0, L_1, NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(ConstructJobList_t3EA9493BA14A6EAF46D2C6B1EFE5727F3048778F));
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_2;
		L_2 = NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_inline((&___1_bufferCount), NULL);
		(&V_0)->___List = (UntypedUnsafeList_tB7A46F76589C71832F1147292E5123FB99E199B2*)L_2;
		UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* L_3 = ___0_stream;
		UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66 L_4 = (*(UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66*)L_3);
		(&V_0)->___Container = L_4;
		ConstructJobList_t3EA9493BA14A6EAF46D2C6B1EFE5727F3048778F L_5 = V_0;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = ___2_dependency;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_7;
		L_7 = IJobExtensions_Schedule_TisConstructJobList_t3EA9493BA14A6EAF46D2C6B1EFE5727F3048778F_m549B4682669E88648E24F766F339DDB43F207B50(L_5, L_6, IJobExtensions_Schedule_TisConstructJobList_t3EA9493BA14A6EAF46D2C6B1EFE5727F3048778F_m549B4682669E88648E24F766F339DDB43F207B50_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 UnsafeStream_ToNativeArray_TisIl2CppFullySharedGenericStruct_m418267CD08E32A95A5829724C5BCD60D35C261E8_fshared (UnsafeStream_tBBCFB25F307FB24EC6354907DAD0B4B90E967B66* __this, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t50CD57A57302AA159ADA26A020FA5326CAAFC6A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t50CD57A57302AA159ADA26A020FA5326CAAFC6A8);
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t50CD57A57302AA159ADA26A020FA5326CAAFC6A8);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeStream_Count_m3B4572A2DA203BFBE2E9A61B87908A592F6A35F4(__this, NULL);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___0_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_2;
		L_2 = CollectionHelper_CreateNativeArray_TisIl2CppFullySharedGenericStruct_m4005EA9C29BA1075D9F591B6CBD82B5D22255763(L_0, L_1, 0, il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_2;
		Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 L_3;
		L_3 = UnsafeStream_AsReader_m92D6D4B880F294A02844F903D065C0B567AF94B4(__this, NULL);
		V_1 = L_3;
		V_2 = 0;
		V_3 = 0;
		goto IL_0061;
	}

IL_001b:
	{
		int32_t L_4 = V_3;
		int32_t L_5;
		L_5 = Reader_BeginForEachIndex_m5FED9BD43AF38BE1CA15C15716F7E57A188D5334((&V_1), L_4, NULL);
		int32_t L_6;
		L_6 = Reader_get_RemainingItemCount_m5AEA4EB51ABCD3C5C15F0DBCF5EBE60ACD330978_inline((&V_1), NULL);
		V_4 = L_6;
		V_5 = 0;
		goto IL_0050;
	}

IL_0032:
	{
		int32_t L_7 = V_2;
		Il2CppFullySharedGenericStruct* L_8;
		L_8 = Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633((&V_1), il2cpp_rgctx_method(method->rgctx_data, 1));
		il2cpp_codegen_memcpy(L_9, L_8, SizeOf_T_t50CD57A57302AA159ADA26A020FA5326CAAFC6A8);
		NativeArray_1_set_Item_m629BDF69720F9FF193478E89307F9B6A56425379_inline((&V_0), L_7, il2cpp_codegen_memcpy(L_10, L_9, SizeOf_T_t50CD57A57302AA159ADA26A020FA5326CAAFC6A8), il2cpp_rgctx_method(method->rgctx_data, 3));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0050:
	{
		int32_t L_13 = V_5;
		int32_t L_14 = V_4;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0032;
		}
	}
	{
		Reader_EndForEachIndex_m51B8AD25E5664B02F27261062B1D5006DA2B8D3E((&V_1), NULL);
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0061:
	{
		int32_t L_16 = V_3;
		int32_t L_17;
		L_17 = Reader_get_ForEachCount_mB9C0CA8701F07528C84A7D7AEBA9EBAF467A2F77((&V_1), NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_001b;
		}
	}
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_18 = V_0;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_Add_TisIl2CppFullySharedGenericStruct_m4625509781F2C6C3F2D7CD81A4F403FBD0C5F68E_fshared (Il2CppFullySharedGenericStruct* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = UnsafeUtilityInternal_Add_TisIl2CppFullySharedGenericStruct_mADE8643D255967F447F5FF97A4E32E2A70D13178_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisIl2CppFullySharedGenericStruct_m8D42BD9F3A34A0C9A6BF4AA6104B9DAE7B629DE7_fshared (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_output;
		void* L_1;
		L_1 = UnsafeUtilityInternal_AddressOf_TisIl2CppFullySharedGenericStruct_m4556F0DE0C4C5FAA9B2E203DD1D76CC0B1FE567C_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m9BD1C4AD2221B8E77691F613764AAF6D9DA66233_fshared (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UnsafeUtility_As_TisIl2CppSharedGenericObject_m7E4A82367DE96668D1A49E6688B2ABFB2F09A6AF_gshared (RuntimeObject* ___0_from, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_from;
		Il2CppSharedGenericObject* L_1;
		L_1 = UnsafeUtilityInternal_As_TisIl2CppSharedGenericObject_mF938497D672DB9C14D0738F1F43F1F449466EB67_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_fshared (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		Il2CppFullySharedGenericAny* L_1;
		L_1 = UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_fshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = UnsafeUtilityInternal_AsRef_TisIl2CppFullySharedGenericStruct_m4AE204964F54C3F7626BE47CADE4A52CF2797B6B_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_fshared (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		Il2CppFullySharedGenericStruct* L_1 = ___1_output;
		UnsafeUtilityInternal_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m497ECA325F03B8C0201958D2EDD9088FFB44BBDD_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m2531BAFE2106A394C11BC9AC37182FCD3DB6FEE5_fshared (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		void* L_1 = ___1_ptr;
		UnsafeUtilityInternal_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m323E735FDEFDBCFEBB7D6566658A860C97410FFB_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_EnumEquals_TisIl2CppFullySharedGenericStruct_m5C481F0B602D350AD1D467266B1FC020AD37D39F_fshared (Il2CppFullySharedGenericStruct ___0_lhs, Il2CppFullySharedGenericStruct ___1_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
	{
		il2cpp_codegen_memcpy(L_0, ___0_lhs, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
		il2cpp_codegen_memcpy(L_1, ___1_rhs, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9);
		bool L_4;
		L_4 = UnsafeUtilityInternal_EnumEquals_TisIl2CppFullySharedGenericStruct_m63392232D0D8C7BCFDFC25F0362A7B109440A899_inline(il2cpp_codegen_memcpy(L_2, L_0, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9), il2cpp_codegen_memcpy(L_3, L_1, SizeOf_T_t59ABA7CBCA03FA1BDEA675A0F5246CCBCBFA2EF9), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_EnumToInt_TisIl2CppFullySharedGenericStruct_m3B39C49C6E55DD41CE78BCEBD6E575D640D38B3D_fshared (Il2CppFullySharedGenericStruct ___0_enumValue, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA0A5977B9466EC4D9382AEF168A15381805BEFB6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tA0A5977B9466EC4D9382AEF168A15381805BEFB6);
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_tA0A5977B9466EC4D9382AEF168A15381805BEFB6);
	{
		il2cpp_codegen_memcpy(L_0, ___0_enumValue, SizeOf_T_tA0A5977B9466EC4D9382AEF168A15381805BEFB6);
		int32_t L_2;
		L_2 = UnsafeUtilityInternal_EnumToInt_TisIl2CppFullySharedGenericStruct_mC60FD6D3EC07363A5E5213DDDFBFC9A741C2E8BA_inline(il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tA0A5977B9466EC4D9382AEF168A15381805BEFB6), il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 UnsafeUtility_GetByteSpanFromList_TisIl2CppFullySharedGenericStruct_m7644779593338EF0C449D6761DD2578F7DAEB46E_fshared (List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		List_1_tE5211AFE92BF26309D7C5814A29544E9EF496FE4* L_0 = ___0_list;
		__Il2CppFullySharedGenericStructTypeU5BU5D_tF3B929B6E80D0A8C109178E11CE8FF9957B014C1* L_1;
		L_1 = NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericStruct_m873C6691215D9DD53FE9D82092C0220C03C702DE_inline(L_0, NULL);
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_2;
		L_2 = MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericStruct_mF8415BE462F218CF45D5AAA3183883F406EFD7BB_inline(L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_3;
		L_3 = MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_inline(L_2, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtility_GetReasonForGenericListNonBlittable_TisIl2CppFullySharedGenericStruct_mDA4F08805630CA6C3AA67C943056F07F2E14F247_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = L_1;
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7, L_2);
		String_t* L_4;
		L_4 = UnsafeUtility_GetReasonForTypeNonBlittableImpl_m3F94960798254241B201BFC006DD49A8EB974209(L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsBlittable_TisIl2CppFullySharedGenericStruct_mB5C09765800B4F3193F2569722F9C8E897A44D60_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2;
		L_2 = UnsafeUtility_IsBlittable_m77522F70929742760B2B80497DD3AE80CFD72D76(L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsGenericListBlittable_TisIl2CppFullySharedGenericStruct_mE840D5BE4D2FA1CCA6F5463B1F7E08CF3C780EA7_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		bool L_0;
		L_0 = UnsafeUtility_IsBlittable_TisIl2CppFullySharedGenericStruct_mB5C09765800B4F3193F2569722F9C8E897A44D60(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_IsUnmanaged_TisIl2CppFullySharedGenericAny_m16E5DF2CCC596A1F2120DDEA5637F78BF97CE3AA_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(TypeFlagsCache_1_t79400DC2FDFF0F43795E45D222985CB03E26EAA2_StaticInit);
	{
		CHECKED_LOCAL_INIT(TypeFlagsCache_1_t79400DC2FDFF0F43795E45D222985CB03E26EAA2_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_0 = ((TypeFlagsCache_1_tB69D927C1F0A7B75C9689E12A04E9F1DF71DC19C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___flags;
		return (bool)((((int32_t)((int32_t)(L_0&1))) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_fshared (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mA2FA845DC97225E057F01D0D4161C801EECA284F_fshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		UnsafeUtilityInternal_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD8DC640103D38E555B272D6E61CA4B06A15E46ED_inline(L_0, L_1, L_2, (Il2CppFullySharedGenericAny*)L_3, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_fshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0;
		L_0 = UnsafeUtilityInternal_SizeOf_TisIl2CppFullySharedGenericStruct_m9FC95A845D303A9C72ED4044691DD435A70F994A_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_fshared (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD6C17E0F294919C280E583601A298E265D20935A_fshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_value : &___3_value), SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		UnsafeUtilityInternal_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_m43737F191942C3B66CAD8213014C3E89AB211631_inline(L_0, L_1, L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? il2cpp_codegen_memcpy(L_4, L_3, SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520): *(void**)L_3), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtilityExtensions_AddressOf_TisIl2CppFullySharedGenericStruct_m9A8A98C3D874841DE9AB55CBCFD69D17C27A0E2A_fshared (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_value;
		void* L_1;
		L_1 = ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityExtensions_AsRef_TisIl2CppFullySharedGenericStruct_mA320FA8C160898758E36D8C8B586DD147B1831E6_fshared (Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_value;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = ILSupport_AsRef_TisIl2CppFullySharedGenericStruct_mE9195E637265E7F6E317ACE31DCBA0EA7A989E30_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityExtensions_ReadArrayElementBoundsChecked_TisIl2CppFullySharedGenericStruct_m4BD461A86121C4CAE57D01C60FD8B85E61A418F6_fshared (void* ___0_source, int32_t ___1_index, int32_t ___2_capacity, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t663DEFF756B0A98C84B51438BCCAA4794F8EE33F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t663DEFF756B0A98C84B51438BCCAA4794F8EE33F);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericStruct_m45AD40013DEE9AEF8031E0DA6F4D23BFD5AA8F42_inline(L_0, L_1, (Il2CppFullySharedGenericStruct*)L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_t663DEFF756B0A98C84B51438BCCAA4794F8EE33F);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityExtensions_WriteArrayElementBoundsChecked_TisIl2CppFullySharedGenericStruct_mCB46D61A3A888D885A64E27591FA1FB15498C64C_fshared (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericStruct ___2_value, int32_t ___3_capacity, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB59479FB24034EEA4FB4D7F4233CDA4C0C4C0088 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tB59479FB24034EEA4FB4D7F4233CDA4C0C4C0088);
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_tB59479FB24034EEA4FB4D7F4233CDA4C0C4C0088);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		il2cpp_codegen_memcpy(L_2, ___2_value, SizeOf_T_tB59479FB24034EEA4FB4D7F4233CDA4C0C4C0088);
		UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericStruct_m2568B80B56E9BC10FC709C1FC73B9390B9B9797E_inline(L_0, L_1, il2cpp_codegen_memcpy(L_3, L_2, SizeOf_T_tB59479FB24034EEA4FB4D7F4233CDA4C0C4C0088), il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_Add_TisIl2CppFullySharedGenericStruct_mADE8643D255967F447F5FF97A4E32E2A70D13178_fshared (Il2CppFullySharedGenericStruct* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA593F27D8B3730356B3E9F4B5F356622864AEA39 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_source;
		uint32_t L_1 = SizeOf_T_tA593F27D8B3730356B3E9F4B5F356622864AEA39;
		int32_t L_2 = ___1_elementOffset;
		return ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtilityInternal_AddressOf_TisIl2CppFullySharedGenericStruct_m4556F0DE0C4C5FAA9B2E203DD1D76CC0B1FE567C_fshared (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_AlignOf_TisIl2CppFullySharedGenericStruct_m530059660A1E31984686E17CC9E1E8EC5BADDADF_fshared (const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_ArrayElementAsRef_TisIl2CppFullySharedGenericStruct_m15B3F40D2AAAD385E615370BDEEAF11C94C43831_fshared (void* ___0_ptr, int32_t ___1_index, const RuntimeMethod* method) 
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UnsafeUtilityInternal_As_TisIl2CppSharedGenericObject_mF938497D672DB9C14D0738F1F43F1F449466EB67_gshared (RuntimeObject* ___0_from, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_from;
		return (Il2CppSharedGenericObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_AsRef_TisIl2CppFullySharedGenericStruct_m4AE204964F54C3F7626BE47CADE4A52CF2797B6B_fshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m497ECA325F03B8C0201958D2EDD9088FFB44BBDD_fshared (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		Il2CppFullySharedGenericStruct* L_1 = ___1_output;
		UnsafeUtilityInternal_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m06FA487F742A380443BFC89A98F97C63718E2BAA_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m323E735FDEFDBCFEBB7D6566658A860C97410FFB_fshared (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		void* L_1 = ___1_ptr;
		UnsafeUtilityInternal_InternalCopyStructureToPtr_TisIl2CppFullySharedGenericStruct_mECFA8273692D57001184F23BE06202A197831B12_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtilityInternal_EnumEquals_TisIl2CppFullySharedGenericStruct_m63392232D0D8C7BCFDFC25F0362A7B109440A899_fshared (Il2CppFullySharedGenericStruct ___0_lhs, Il2CppFullySharedGenericStruct ___1_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF8B17D8C017C713D5E0BAADFAF5776A0CC860B07 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF8B17D8C017C713D5E0BAADFAF5776A0CC860B07);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tF8B17D8C017C713D5E0BAADFAF5776A0CC860B07);
	{
		il2cpp_codegen_memcpy(L_0, ___0_lhs, SizeOf_T_tF8B17D8C017C713D5E0BAADFAF5776A0CC860B07);
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_0,NULL));
		il2cpp_codegen_memcpy(L_2, ___1_rhs, SizeOf_T_tF8B17D8C017C713D5E0BAADFAF5776A0CC860B07);
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_2,NULL));
		return (bool)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_EnumToInt_TisIl2CppFullySharedGenericStruct_mC60FD6D3EC07363A5E5213DDDFBFC9A741C2E8BA_fshared (Il2CppFullySharedGenericStruct ___0_enumValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		UnsafeUtilityInternal_InternalEnumToInt_TisIl2CppFullySharedGenericStruct_mCFEA5D312FE664B15A5B77E095B9D54217AD61C9_inline((Il2CppFullySharedGenericStruct*)___0_enumValue, (&V_0), NULL);
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m06FA487F742A380443BFC89A98F97C63718E2BAA_fshared (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t096D5B9D40ED0F73F21EBAE175F1DEC3156E3C81 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t096D5B9D40ED0F73F21EBAE175F1DEC3156E3C81);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___1_output;
		void* L_1 = ___0_ptr;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t096D5B9D40ED0F73F21EBAE175F1DEC3156E3C81);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_0, L_2, SizeOf_T_t096D5B9D40ED0F73F21EBAE175F1DEC3156E3C81);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)L_0, (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_InternalCopyStructureToPtr_TisIl2CppFullySharedGenericStruct_mECFA8273692D57001184F23BE06202A197831B12_fshared (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t46FA681AF7AD470383D494C79EA6EE5D768C6E88 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t46FA681AF7AD470383D494C79EA6EE5D768C6E88);
	{
		void* L_0 = ___1_ptr;
		Il2CppFullySharedGenericStruct* L_1 = ___0_input;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t46FA681AF7AD470383D494C79EA6EE5D768C6E88);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_0, L_2, SizeOf_T_t46FA681AF7AD470383D494C79EA6EE5D768C6E88);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)L_0, (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_InternalEnumToInt_TisIl2CppFullySharedGenericAny_m03F4ED6927B0D42F835AE8129CDC4A6EA05B2660_fshared (Il2CppFullySharedGenericAny* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___1_intValue;
		Il2CppFullySharedGenericAny* L_1 = ___0_enumValue;
		int32_t L_2 = *(((int32_t*)L_1));
		*(L_0) = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t math_ceilpow2_m8691C3C194B41660E1FB2E694F7D209BE60DDCC7_inline (int64_t ___0_x, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_x;
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		___0_x = ((int64_t)il2cpp_codegen_subtract(L_0, L_1));
		int64_t L_2 = ___0_x;
		int64_t L_3 = ___0_x;
		___0_x = ((int64_t)(L_2|((int64_t)(L_3>>1))));
		int64_t L_4 = ___0_x;
		int64_t L_5 = ___0_x;
		___0_x = ((int64_t)(L_4|((int64_t)(L_5>>2))));
		int64_t L_6 = ___0_x;
		int64_t L_7 = ___0_x;
		___0_x = ((int64_t)(L_6|((int64_t)(L_7>>4))));
		int64_t L_8 = ___0_x;
		int64_t L_9 = ___0_x;
		___0_x = ((int64_t)(L_8|((int64_t)(L_9>>8))));
		int64_t L_10 = ___0_x;
		int64_t L_11 = ___0_x;
		___0_x = ((int64_t)(L_10|((int64_t)(L_11>>((int32_t)16)))));
		int64_t L_12 = ___0_x;
		int64_t L_13 = ___0_x;
		___0_x = ((int64_t)(L_12|((int64_t)(L_13>>((int32_t)32)))));
		int64_t L_14 = ___0_x;
		int64_t L_15 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(1,NULL));
		return ((int64_t)il2cpp_codegen_add(L_14, L_15));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeQueueData_SetCurrentWriteBlockTLS_mE8BF637642E13044DFF8A34A55B8AE0B33A5F727_inline (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* __this, int32_t ___0_threadIndex, UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* ___1_currentWriteBlock, const RuntimeMethod* method) 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C** V_0 = NULL;
	{
		uint8_t* L_0 = __this->___m_CurrentWriteBlockTLS;
		int32_t L_1 = ___0_threadIndex;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)64))))),NULL));
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)L_2;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C** L_3 = V_0;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* L_4 = ___1_currentWriteBlock;
		*(((intptr_t*)L_3)) = ((intptr_t)L_4);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C* UnsafeQueueData_GetCurrentWriteBlockTLS_m51E3B0E146EF03939DC2ADB143AE4A6382F9AF12_inline (UnsafeQueueData_t43073ABB3262F6905C43F9180FCBB71E301597C2* __this, int32_t ___0_threadIndex, const RuntimeMethod* method) 
{
	UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C** V_0 = NULL;
	{
		uint8_t* L_0 = __this->___m_CurrentWriteBlockTLS;
		int32_t L_1 = ___0_threadIndex;
		uintptr_t L_2 = (il2cpp_codegen_conv<uintptr_t,uint8_t*,intptr_t,false,false>(((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)64))))),NULL));
		V_0 = (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C**)L_2;
		UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C** L_3 = V_0;
		intptr_t L_4 = *(((intptr_t*)L_3));
		return (UnsafeQueueBlockHeader_t93BDD5BE3C4A0486BE2A07B68862CFF1F5870D9C*)(L_4);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Reader_get_RemainingItemCount_m5AEA4EB51ABCD3C5C15F0DBCF5EBE60ACD330978_inline (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_RemainingItemCount;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtility_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m2531BAFE2106A394C11BC9AC37182FCD3DB6FEE5_fshared_inline (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		void* L_1 = ___1_ptr;
		UnsafeUtilityInternal_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m323E735FDEFDBCFEBB7D6566658A860C97410FFB_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisIl2CppFullySharedGenericStruct_m13C618FD69BBAB7D8C77632BF8A9116FCD17D234_fshared_inline (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) 
{
	{
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_0 = ___0_nativeArray;
		void* L_1 = L_0.___m_Buffer;
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeList_1_get_Length_m35C71DFABA31811E9ABCD2FF56F066B449E3C84A_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___m_length;
		int32_t L_1;
		L_1 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeList_1_get_Item_mB847AC77ACE34F511CEABF3E45B6EAD5D59165AF_fshared_inline (UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_t6368C7377A351E8DAE030B3776E2EAB48430F6A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t6368C7377A351E8DAE030B3776E2EAB48430F6A1);
	{
		Il2CppFullySharedGenericStruct* L_0 = __this->___Ptr;
		int32_t L_1 = ___0_index;
		int32_t L_2;
		L_2 = CollectionHelper_AssumePositive_mD1EC1F05F50F605141D9BA5D70C4332AC902B4B1_inline(L_1, NULL);
		intptr_t L_3 = (il2cpp_codegen_conv<intptr_t,int32_t,int32_t,false,false>(L_2,NULL));
		uint32_t L_4 = SizeOf_T_t6368C7377A351E8DAE030B3776E2EAB48430F6A1;
		il2cpp_codegen_memcpy(L_5, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_3, (int32_t)L_4)))), SizeOf_T_t6368C7377A351E8DAE030B3776E2EAB48430F6A1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_5, SizeOf_T_t6368C7377A351E8DAE030B3776E2EAB48430F6A1);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtility_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mD6BECC32C10552E82C8D23115CAF774983D95F0C_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		Il2CppFullySharedGenericAny* L_1;
		L_1 = UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_inline(L_0, NULL);
		return L_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* NativeList_1_GetUnsafeList_m4787F7FF0C74B362B5DC98531C2FF66279A5EAEF_fshared_inline (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) 
{
	{
		UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* L_0 = __this->___m_ListData;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_Add_TisIl2CppFullySharedGenericStruct_mADE8643D255967F447F5FF97A4E32E2A70D13178_fshared_inline (Il2CppFullySharedGenericStruct* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA593F27D8B3730356B3E9F4B5F356622864AEA39 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_source;
		uint32_t L_1 = SizeOf_T_tA593F27D8B3730356B3E9F4B5F356622864AEA39;
		int32_t L_2 = ___1_elementOffset;
		return ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)L_1, L_2))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* UnsafeUtilityInternal_AddressOf_TisIl2CppFullySharedGenericStruct_m4556F0DE0C4C5FAA9B2E203DD1D76CC0B1FE567C_fshared_inline (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_output;
		return (void*)(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* UnsafeUtilityInternal_As_TisIl2CppSharedGenericObject_mF938497D672DB9C14D0738F1F43F1F449466EB67_gshared_inline (RuntimeObject* ___0_from, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_from;
		return (Il2CppSharedGenericObject*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* UnsafeUtilityInternal_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mE1CA751887466B801BE69083C2B0EA3EDE41FF9B_fshared_inline (Il2CppFullySharedGenericAny* ___0_from, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_from;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtilityInternal_AsRef_TisIl2CppFullySharedGenericStruct_m4AE204964F54C3F7626BE47CADE4A52CF2797B6B_fshared_inline (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m497ECA325F03B8C0201958D2EDD9088FFB44BBDD_fshared_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		Il2CppFullySharedGenericStruct* L_1 = ___1_output;
		UnsafeUtilityInternal_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m06FA487F742A380443BFC89A98F97C63718E2BAA_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_CopyStructureToPtr_TisIl2CppFullySharedGenericStruct_m323E735FDEFDBCFEBB7D6566658A860C97410FFB_fshared_inline (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		void* L_1 = ___1_ptr;
		UnsafeUtilityInternal_InternalCopyStructureToPtr_TisIl2CppFullySharedGenericStruct_mECFA8273692D57001184F23BE06202A197831B12_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UnsafeUtilityInternal_EnumEquals_TisIl2CppFullySharedGenericStruct_m63392232D0D8C7BCFDFC25F0362A7B109440A899_fshared_inline (Il2CppFullySharedGenericStruct ___0_lhs, Il2CppFullySharedGenericStruct ___1_rhs, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF8B17D8C017C713D5E0BAADFAF5776A0CC860B07 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF8B17D8C017C713D5E0BAADFAF5776A0CC860B07);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_tF8B17D8C017C713D5E0BAADFAF5776A0CC860B07);
	{
		il2cpp_codegen_memcpy(L_0, ___0_lhs, SizeOf_T_tF8B17D8C017C713D5E0BAADFAF5776A0CC860B07);
		int64_t L_1 = (il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_0,NULL));
		il2cpp_codegen_memcpy(L_2, ___1_rhs, SizeOf_T_tF8B17D8C017C713D5E0BAADFAF5776A0CC860B07);
		int64_t L_3 = (il2cpp_codegen_conv<int64_t,false,false>(il2cpp_rgctx_data(method->rgctx_data, 0), L_2,NULL));
		return (bool)((((int64_t)L_1) == ((int64_t)L_3))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtilityInternal_EnumToInt_TisIl2CppFullySharedGenericStruct_mC60FD6D3EC07363A5E5213DDDFBFC9A741C2E8BA_fshared_inline (Il2CppFullySharedGenericStruct ___0_enumValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		UnsafeUtilityInternal_InternalEnumToInt_TisIl2CppFullySharedGenericStruct_mCFEA5D312FE664B15A5B77E095B9D54217AD61C9_inline((Il2CppFullySharedGenericStruct*)___0_enumValue, (&V_0), NULL);
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* NoAllocHelpers_ExtractArrayFromList_TisIl2CppFullySharedGenericAny_m939A9FD04DDB2C021F8F2A09A8A13816556D8F2A_fshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_list, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 MemoryExtensions_AsSpan_TisIl2CppFullySharedGenericAny_m788D06C7A78ACE9317501CAAB3ACB95E63B8B3BD_fshared_inline (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_inline((&L_1), L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 MemoryMarshal_AsBytes_TisIl2CppFullySharedGenericStruct_mF17987979FA677881AF5A25ECF5A4A8FECDC7FC5_fshared_inline (Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD ___0_span, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(Type_t_StaticInit);
	{
		bool L_0;
		L_0 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_2, NULL);
	}

IL_0016:
	{
		Span_1_t3EBD12B39F51F09620FC7421B894677E0D26E0AD L_3 = ___0_span;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = MemoryMarshal_GetReference_TisIl2CppFullySharedGenericStruct_mE6EF4F8FFA4C5C6F3BA18346118C88E7F3E65F9D(L_3, NULL);
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_as_ref<uint8_t>(L_4);
		int32_t L_6;
		L_6 = Span_1_get_Length_m1AADCDF6D1BB9B4B07BB14C7E31273E22A096E74_inline((&___0_span), NULL);
		int32_t L_7;
		L_7 = Unsafe_SizeOf_TisIl2CppFullySharedGenericStruct_m5B40ADA085C40138AB7DFD671EED6795DE06E8CB(il2cpp_rgctx_method(method->rgctx_data, 5));
		if (((int64_t)L_6 * (int64_t)L_7 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_6 * (int64_t)L_7 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		return L_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD8DC640103D38E555B272D6E61CA4B06A15E46ED_fshared_inline (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tA43FF1096C0DCB01EA2F665B1AE872CB6AB31798 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tA43FF1096C0DCB01EA2F665B1AE872CB6AB31798);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, ((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), SizeOf_T_tA43FF1096C0DCB01EA2F665B1AE872CB6AB31798);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_tA43FF1096C0DCB01EA2F665B1AE872CB6AB31798);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_m43737F191942C3B66CAD8213014C3E89AB211631_fshared_inline (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9E3CA3FDC66F405C1818D76720E23E0FECDA7AEF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t9E3CA3FDC66F405C1818D76720E23E0FECDA7AEF);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int64_t L_2 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_1,NULL));
		int32_t L_3 = ___2_stride;
		int64_t L_4 = (il2cpp_codegen_conv<int64_t,int32_t,int32_t,false,false>(L_3,NULL));
		intptr_t L_5 = (il2cpp_codegen_conv<intptr_t,int64_t,int64_t,false,false>(((int64_t)il2cpp_codegen_multiply(L_2, L_4)),NULL));
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___3_value : &___3_value), SizeOf_T_t9E3CA3FDC66F405C1818D76720E23E0FECDA7AEF);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), L_6, SizeOf_T_t9E3CA3FDC66F405C1818D76720E23E0FECDA7AEF);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_5)), (void*)L_6);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* ILSupport_AddressOf_TisIl2CppFullySharedGenericStruct_m373C1FEADC4248F808294AA8958583E51840E129_fshared_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_thing;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* ILSupport_AsRef_TisIl2CppFullySharedGenericStruct_mE9195E637265E7F6E317ACE31DCBA0EA7A989E30_fshared_inline (Il2CppFullySharedGenericStruct* ___0_thing, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_thing;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_m06FA487F742A380443BFC89A98F97C63718E2BAA_fshared_inline (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t096D5B9D40ED0F73F21EBAE175F1DEC3156E3C81 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t096D5B9D40ED0F73F21EBAE175F1DEC3156E3C81);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___1_output;
		void* L_1 = ___0_ptr;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t096D5B9D40ED0F73F21EBAE175F1DEC3156E3C81);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_0, L_2, SizeOf_T_t096D5B9D40ED0F73F21EBAE175F1DEC3156E3C81);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)L_0, (void*)L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_InternalCopyStructureToPtr_TisIl2CppFullySharedGenericStruct_mECFA8273692D57001184F23BE06202A197831B12_fshared_inline (Il2CppFullySharedGenericStruct* ___0_input, void* ___1_ptr, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t46FA681AF7AD470383D494C79EA6EE5D768C6E88 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t46FA681AF7AD470383D494C79EA6EE5D768C6E88);
	{
		void* L_0 = ___1_ptr;
		Il2CppFullySharedGenericStruct* L_1 = ___0_input;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t46FA681AF7AD470383D494C79EA6EE5D768C6E88);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_0, L_2, SizeOf_T_t46FA681AF7AD470383D494C79EA6EE5D768C6E88);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)L_0, (void*)L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnsafeUtilityInternal_InternalEnumToInt_TisIl2CppFullySharedGenericAny_m03F4ED6927B0D42F835AE8129CDC4A6EA05B2660_fshared_inline (Il2CppFullySharedGenericAny* ___0_enumValue, int32_t* ___1_intValue, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___1_intValue;
		Il2CppFullySharedGenericAny* L_1 = ___0_enumValue;
		int32_t L_2 = *(((int32_t*)L_1));
		*(L_0) = L_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m94A95CF4DF158FDF992CC13DA185B637335D84C6_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	memset(V_0, 0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54));
		return;
	}

IL_000b:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tE7A3A53452487AB9BCB918AC1C5A795CF215388A);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), L_1);
		if (L_2)
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = ___0_array;
		Type_t* L_4;
		L_4 = il2cpp_codegen_object_get_type((RuntimeObject*)L_3);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		ThrowHelper_ThrowArrayTypeMismatchException_m781AD7A903FEA43FAE3137977E6BC5F9BAEBC590(NULL);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = ___0_array;
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		Il2CppFullySharedGenericAny* L_10;
		L_10 = il2cpp_unsafe_as_ref<Il2CppFullySharedGenericAny>(L_9);
		ByReference_1_t607C1F3BC28B0E21B969461CDB0720FB01A82141 L_11;
		memset((&L_11), 0, sizeof(L_11));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_11), L_10);
		__this->____pointer = L_11;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = ___0_array;
		int32_t L_13 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_12)->max_length),NULL));
		__this->____length = L_13;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Span_1_get_Length_m4CED98A19744D579382FDCEDEF16DBC11586BE1C_fshared_inline (Span_1_tDEB40BEFA77B5E4BB49B058CD3050EEA4DD36C54* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____length;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		uint8_t* L_1 = (uint8_t*)(&L_0->___Data);
		return L_1;
	}
}
