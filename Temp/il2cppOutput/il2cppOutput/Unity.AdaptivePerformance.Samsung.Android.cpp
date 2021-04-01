#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B;
// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>
struct List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor[]
struct AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.AdaptivePerformance.AdaptiveFramerate
struct AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexer
struct AdaptivePerformanceIndexer_t27E98221789359B3040E2241EC7A66B6A62BDC98;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexerSettings
struct AdaptivePerformanceIndexerSettings_t2D2CACD94BE12D695CBE889026CD4016E8EBD1FD;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper
struct AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings
struct AdaptivePerformanceScalerSettings_t90FCA77DC518421FBEDC94E5294FD8016BA2B6B3;
// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase
struct AdaptivePerformanceScalerSettingsBase_tB0A45A1909F77D8F3B8D1DC4A8A4E0DEA6573B96;
// UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate
struct AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings
struct IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.ISubsystem
struct ISubsystem_t64464AB5EA37383499172853FA932A96C7841789;
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate
struct IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader
struct SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2;
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings
struct SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A;
// System.String
struct String_t;
// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler
struct VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralCBD515F486F3F029991E3220BC5E926A5E96554D;
IL2CPP_EXTERN_C const RuntimeMethod* AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m437E6C5DE2D7E16E015E843E8C8A8F32A6360E60_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tA953AD12D431C851CF7AC1E3C6A444FDB1ED0AB9 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>
struct  List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4, ____items_1)); }
	inline AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* get__items_1() const { return ____items_1; }
	inline AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4_StaticFields, ____emptyArray_5)); }
	inline AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AdaptivePerformanceSubsystemDescriptorU5BU5D_tF42DD815D969B9C584B072F121DBB5B45A39B30E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderConstants
struct  SamsungAndroidProviderConstants_t0F425F6BD00C416B8885155B6D2240507E4D3E5A  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate
struct  VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD  : public RuntimeObject
{
public:

public:
};

struct VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_StaticFields
{
public:
	// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_StaticFields, ___U3CInstanceU3Ek__BackingField_0)); }
	inline RuntimeObject* get_U3CInstanceU3Ek__BackingField_0() const { return ___U3CInstanceU3Ek__BackingField_0; }
	inline RuntimeObject** get_address_of_U3CInstanceU3Ek__BackingField_0() { return &___U3CInstanceU3Ek__BackingField_0; }
	inline void set_U3CInstanceU3Ek__BackingField_0(RuntimeObject* value)
	{
		___U3CInstanceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoader
struct  AdaptivePerformanceLoader_tFB6587AF07FA8F496330C209FD21A7A25C5C0F53  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler
struct  AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexer UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_Indexer
	AdaptivePerformanceIndexer_t27E98221789359B3040E2241EC7A66B6A62BDC98 * ___m_Indexer_4;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<CurrentLevel>k__BackingField
	int32_t ___U3CCurrentLevelU3Ek__BackingField_5;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<GpuImpact>k__BackingField
	int32_t ___U3CGpuImpactU3Ek__BackingField_6;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::<CpuImpact>k__BackingField
	int32_t ___U3CCpuImpactU3Ek__BackingField_7;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_OverrideLevel
	int32_t ___m_OverrideLevel_8;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_defaultSetting
	AdaptivePerformanceScalerSettingsBase_tB0A45A1909F77D8F3B8D1DC4A8A4E0DEA6573B96 * ___m_defaultSetting_9;
	// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::m_Settings
	IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * ___m_Settings_10;

public:
	inline static int32_t get_offset_of_m_Indexer_4() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___m_Indexer_4)); }
	inline AdaptivePerformanceIndexer_t27E98221789359B3040E2241EC7A66B6A62BDC98 * get_m_Indexer_4() const { return ___m_Indexer_4; }
	inline AdaptivePerformanceIndexer_t27E98221789359B3040E2241EC7A66B6A62BDC98 ** get_address_of_m_Indexer_4() { return &___m_Indexer_4; }
	inline void set_m_Indexer_4(AdaptivePerformanceIndexer_t27E98221789359B3040E2241EC7A66B6A62BDC98 * value)
	{
		___m_Indexer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indexer_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentLevelU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___U3CCurrentLevelU3Ek__BackingField_5)); }
	inline int32_t get_U3CCurrentLevelU3Ek__BackingField_5() const { return ___U3CCurrentLevelU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CCurrentLevelU3Ek__BackingField_5() { return &___U3CCurrentLevelU3Ek__BackingField_5; }
	inline void set_U3CCurrentLevelU3Ek__BackingField_5(int32_t value)
	{
		___U3CCurrentLevelU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CGpuImpactU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___U3CGpuImpactU3Ek__BackingField_6)); }
	inline int32_t get_U3CGpuImpactU3Ek__BackingField_6() const { return ___U3CGpuImpactU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CGpuImpactU3Ek__BackingField_6() { return &___U3CGpuImpactU3Ek__BackingField_6; }
	inline void set_U3CGpuImpactU3Ek__BackingField_6(int32_t value)
	{
		___U3CGpuImpactU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCpuImpactU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___U3CCpuImpactU3Ek__BackingField_7)); }
	inline int32_t get_U3CCpuImpactU3Ek__BackingField_7() const { return ___U3CCpuImpactU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCpuImpactU3Ek__BackingField_7() { return &___U3CCpuImpactU3Ek__BackingField_7; }
	inline void set_U3CCpuImpactU3Ek__BackingField_7(int32_t value)
	{
		___U3CCpuImpactU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_m_OverrideLevel_8() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___m_OverrideLevel_8)); }
	inline int32_t get_m_OverrideLevel_8() const { return ___m_OverrideLevel_8; }
	inline int32_t* get_address_of_m_OverrideLevel_8() { return &___m_OverrideLevel_8; }
	inline void set_m_OverrideLevel_8(int32_t value)
	{
		___m_OverrideLevel_8 = value;
	}

	inline static int32_t get_offset_of_m_defaultSetting_9() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___m_defaultSetting_9)); }
	inline AdaptivePerformanceScalerSettingsBase_tB0A45A1909F77D8F3B8D1DC4A8A4E0DEA6573B96 * get_m_defaultSetting_9() const { return ___m_defaultSetting_9; }
	inline AdaptivePerformanceScalerSettingsBase_tB0A45A1909F77D8F3B8D1DC4A8A4E0DEA6573B96 ** get_address_of_m_defaultSetting_9() { return &___m_defaultSetting_9; }
	inline void set_m_defaultSetting_9(AdaptivePerformanceScalerSettingsBase_tB0A45A1909F77D8F3B8D1DC4A8A4E0DEA6573B96 * value)
	{
		___m_defaultSetting_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSetting_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_Settings_10() { return static_cast<int32_t>(offsetof(AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3, ___m_Settings_10)); }
	inline IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * get_m_Settings_10() const { return ___m_Settings_10; }
	inline IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF ** get_address_of_m_Settings_10() { return &___m_Settings_10; }
	inline void set_m_Settings_10(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * value)
	{
		___m_Settings_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Settings_10), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings
struct  IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_Logging
	bool ___m_Logging_4;
	// System.Boolean UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_AutomaticPerformanceModeEnabled
	bool ___m_AutomaticPerformanceModeEnabled_5;
	// System.Int32 UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_StatsLoggingFrequencyInFrames
	int32_t ___m_StatsLoggingFrequencyInFrames_6;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceIndexerSettings UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_IndexerSettings
	AdaptivePerformanceIndexerSettings_t2D2CACD94BE12D695CBE889026CD4016E8EBD1FD * ___m_IndexerSettings_7;
	// UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::m_ScalerSettings
	AdaptivePerformanceScalerSettings_t90FCA77DC518421FBEDC94E5294FD8016BA2B6B3 * ___m_ScalerSettings_8;

public:
	inline static int32_t get_offset_of_m_Logging_4() { return static_cast<int32_t>(offsetof(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF, ___m_Logging_4)); }
	inline bool get_m_Logging_4() const { return ___m_Logging_4; }
	inline bool* get_address_of_m_Logging_4() { return &___m_Logging_4; }
	inline void set_m_Logging_4(bool value)
	{
		___m_Logging_4 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticPerformanceModeEnabled_5() { return static_cast<int32_t>(offsetof(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF, ___m_AutomaticPerformanceModeEnabled_5)); }
	inline bool get_m_AutomaticPerformanceModeEnabled_5() const { return ___m_AutomaticPerformanceModeEnabled_5; }
	inline bool* get_address_of_m_AutomaticPerformanceModeEnabled_5() { return &___m_AutomaticPerformanceModeEnabled_5; }
	inline void set_m_AutomaticPerformanceModeEnabled_5(bool value)
	{
		___m_AutomaticPerformanceModeEnabled_5 = value;
	}

	inline static int32_t get_offset_of_m_StatsLoggingFrequencyInFrames_6() { return static_cast<int32_t>(offsetof(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF, ___m_StatsLoggingFrequencyInFrames_6)); }
	inline int32_t get_m_StatsLoggingFrequencyInFrames_6() const { return ___m_StatsLoggingFrequencyInFrames_6; }
	inline int32_t* get_address_of_m_StatsLoggingFrequencyInFrames_6() { return &___m_StatsLoggingFrequencyInFrames_6; }
	inline void set_m_StatsLoggingFrequencyInFrames_6(int32_t value)
	{
		___m_StatsLoggingFrequencyInFrames_6 = value;
	}

	inline static int32_t get_offset_of_m_IndexerSettings_7() { return static_cast<int32_t>(offsetof(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF, ___m_IndexerSettings_7)); }
	inline AdaptivePerformanceIndexerSettings_t2D2CACD94BE12D695CBE889026CD4016E8EBD1FD * get_m_IndexerSettings_7() const { return ___m_IndexerSettings_7; }
	inline AdaptivePerformanceIndexerSettings_t2D2CACD94BE12D695CBE889026CD4016E8EBD1FD ** get_address_of_m_IndexerSettings_7() { return &___m_IndexerSettings_7; }
	inline void set_m_IndexerSettings_7(AdaptivePerformanceIndexerSettings_t2D2CACD94BE12D695CBE889026CD4016E8EBD1FD * value)
	{
		___m_IndexerSettings_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_IndexerSettings_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScalerSettings_8() { return static_cast<int32_t>(offsetof(IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF, ___m_ScalerSettings_8)); }
	inline AdaptivePerformanceScalerSettings_t90FCA77DC518421FBEDC94E5294FD8016BA2B6B3 * get_m_ScalerSettings_8() const { return ___m_ScalerSettings_8; }
	inline AdaptivePerformanceScalerSettings_t90FCA77DC518421FBEDC94E5294FD8016BA2B6B3 ** get_address_of_m_ScalerSettings_8() { return &___m_ScalerSettings_8; }
	inline void set_m_ScalerSettings_8(AdaptivePerformanceScalerSettings_t90FCA77DC518421FBEDC94E5294FD8016BA2B6B3 * value)
	{
		___m_ScalerSettings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScalerSettings_8), (void*)value);
	}
};


// UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler
struct  VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AdaptivePerformance.AdaptiveFramerate
struct  AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F  : public AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3
{
public:
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveFramerate::m_DefaultFPS
	int32_t ___m_DefaultFPS_11;

public:
	inline static int32_t get_offset_of_m_DefaultFPS_11() { return static_cast<int32_t>(offsetof(AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F, ___m_DefaultFPS_11)); }
	inline int32_t get_m_DefaultFPS_11() const { return ___m_DefaultFPS_11; }
	inline int32_t* get_address_of_m_DefaultFPS_11() { return &___m_DefaultFPS_11; }
	inline void set_m_DefaultFPS_11(int32_t value)
	{
		___m_DefaultFPS_11 = value;
	}
};


// UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper
struct  AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441  : public AdaptivePerformanceLoader_tFB6587AF07FA8F496330C209FD21A7A25C5C0F53
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t4F3B5B526335E16355EDBC766052AEAB07B1777B * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings
struct  SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A  : public IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF
{
public:
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_SamsungProviderLogging
	bool ___m_SamsungProviderLogging_9;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_HighSpeedVRR
	bool ___m_HighSpeedVRR_10;
	// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::m_AutomaticVRR
	bool ___m_AutomaticVRR_11;

public:
	inline static int32_t get_offset_of_m_SamsungProviderLogging_9() { return static_cast<int32_t>(offsetof(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A, ___m_SamsungProviderLogging_9)); }
	inline bool get_m_SamsungProviderLogging_9() const { return ___m_SamsungProviderLogging_9; }
	inline bool* get_address_of_m_SamsungProviderLogging_9() { return &___m_SamsungProviderLogging_9; }
	inline void set_m_SamsungProviderLogging_9(bool value)
	{
		___m_SamsungProviderLogging_9 = value;
	}

	inline static int32_t get_offset_of_m_HighSpeedVRR_10() { return static_cast<int32_t>(offsetof(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A, ___m_HighSpeedVRR_10)); }
	inline bool get_m_HighSpeedVRR_10() const { return ___m_HighSpeedVRR_10; }
	inline bool* get_address_of_m_HighSpeedVRR_10() { return &___m_HighSpeedVRR_10; }
	inline void set_m_HighSpeedVRR_10(bool value)
	{
		___m_HighSpeedVRR_10 = value;
	}

	inline static int32_t get_offset_of_m_AutomaticVRR_11() { return static_cast<int32_t>(offsetof(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A, ___m_AutomaticVRR_11)); }
	inline bool get_m_AutomaticVRR_11() const { return ___m_AutomaticVRR_11; }
	inline bool* get_address_of_m_AutomaticVRR_11() { return &___m_AutomaticVRR_11; }
	inline void set_m_AutomaticVRR_11(bool value)
	{
		___m_AutomaticVRR_11 = value;
	}
};

struct SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_StaticFields
{
public:
	// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::s_RuntimeInstance
	SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * ___s_RuntimeInstance_12;

public:
	inline static int32_t get_offset_of_s_RuntimeInstance_12() { return static_cast<int32_t>(offsetof(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_StaticFields, ___s_RuntimeInstance_12)); }
	inline SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * get_s_RuntimeInstance_12() const { return ___s_RuntimeInstance_12; }
	inline SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A ** get_address_of_s_RuntimeInstance_12() { return &___s_RuntimeInstance_12; }
	inline void set_s_RuntimeInstance_12(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * value)
	{
		___s_RuntimeInstance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RuntimeInstance_12), (void*)value);
	}
};


// UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate
struct  AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818  : public AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F
{
public:
	// System.Boolean UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_AdaptiveVRREnabled
	bool ___m_AdaptiveVRREnabled_12;
	// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_VRR
	RuntimeObject* ___m_VRR_13;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_CurrentRefreshRateIndex
	int32_t ___m_CurrentRefreshRateIndex_14;
	// System.Int32 UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::m_DefaultRefreshRateIndex
	int32_t ___m_DefaultRefreshRateIndex_15;

public:
	inline static int32_t get_offset_of_m_AdaptiveVRREnabled_12() { return static_cast<int32_t>(offsetof(AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818, ___m_AdaptiveVRREnabled_12)); }
	inline bool get_m_AdaptiveVRREnabled_12() const { return ___m_AdaptiveVRREnabled_12; }
	inline bool* get_address_of_m_AdaptiveVRREnabled_12() { return &___m_AdaptiveVRREnabled_12; }
	inline void set_m_AdaptiveVRREnabled_12(bool value)
	{
		___m_AdaptiveVRREnabled_12 = value;
	}

	inline static int32_t get_offset_of_m_VRR_13() { return static_cast<int32_t>(offsetof(AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818, ___m_VRR_13)); }
	inline RuntimeObject* get_m_VRR_13() const { return ___m_VRR_13; }
	inline RuntimeObject** get_address_of_m_VRR_13() { return &___m_VRR_13; }
	inline void set_m_VRR_13(RuntimeObject* value)
	{
		___m_VRR_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VRR_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentRefreshRateIndex_14() { return static_cast<int32_t>(offsetof(AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818, ___m_CurrentRefreshRateIndex_14)); }
	inline int32_t get_m_CurrentRefreshRateIndex_14() const { return ___m_CurrentRefreshRateIndex_14; }
	inline int32_t* get_address_of_m_CurrentRefreshRateIndex_14() { return &___m_CurrentRefreshRateIndex_14; }
	inline void set_m_CurrentRefreshRateIndex_14(int32_t value)
	{
		___m_CurrentRefreshRateIndex_14 = value;
	}

	inline static int32_t get_offset_of_m_DefaultRefreshRateIndex_15() { return static_cast<int32_t>(offsetof(AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818, ___m_DefaultRefreshRateIndex_15)); }
	inline int32_t get_m_DefaultRefreshRateIndex_15() const { return ___m_DefaultRefreshRateIndex_15; }
	inline int32_t* get_address_of_m_DefaultRefreshRateIndex_15() { return &___m_DefaultRefreshRateIndex_15; }
	inline void set_m_DefaultRefreshRateIndex_15(int32_t value)
	{
		___m_DefaultRefreshRateIndex_15 = value;
	}
};


// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader
struct  SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2  : public AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441
{
public:

public:
};

struct SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor> UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::s_SamsungGameSDKSubsystemDescriptors
	List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * ___s_SamsungGameSDKSubsystemDescriptors_5;

public:
	inline static int32_t get_offset_of_s_SamsungGameSDKSubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_StaticFields, ___s_SamsungGameSDKSubsystemDescriptors_5)); }
	inline List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * get_s_SamsungGameSDKSubsystemDescriptors_5() const { return ___s_SamsungGameSDKSubsystemDescriptors_5; }
	inline List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 ** get_address_of_s_SamsungGameSDKSubsystemDescriptors_5() { return &___s_SamsungGameSDKSubsystemDescriptors_5; }
	inline void set_s_SamsungGameSDKSubsystemDescriptors_5(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * value)
	{
		___s_SamsungGameSDKSubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SamsungGameSDKSubsystemDescriptors_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_gshared (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_Awake_m2901D3518B13C9D60696D9A2287A7B673148E2BE (AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline (const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler__ctor_mE2BC720F515C20D25FC2ED862998C3D072CB2230 (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0)
inline int32_t Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_gshared)(___array0, ___value1, method);
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::OnDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_OnDisabled_m82036310F44027467DF42B4F9DD60A0832C0A954 (AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::OnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate_OnEnabled_m4AD7A50ACB2E0AE57290E09F5198D9CA6AD2235E (AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.AdaptiveFramerate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveFramerate__ctor_m694304B14B58592958A80FB83E43A309ABF8D77A (AdaptiveFramerate_t36C9F58174C8E949088A8B300BAD24B14382B81F * __this, const RuntimeMethod* method);
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::GetSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * SamsungAndroidProviderSettings_GetSettings_m5F3D48F7276BAC793B6E1B0174B71E8010BC5EDA_inline (const RuntimeMethod* method);
// System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptivePerformanceLoaderHelper__ctor_mE84DD1B4F467A7999870517C658B85B4C5109EB2 (AdaptivePerformanceLoaderHelper_t640C781590CAA0FF7B63C4E702CA325C1ABD8441 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.AdaptivePerformance.Provider.AdaptivePerformanceSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m437E6C5DE2D7E16E015E843E8C8A8F32A6360E60 (List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IAdaptivePerformanceSettings__ctor_m54D83D51CB50D235F0F7F8AAB4D0CCFD57D8B96B (IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdaptiveVariableRefreshRate_get_Name_m8EFF1F14278E253433101F24DAD5183578B07921 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBD515F486F3F029991E3220BC5E926A5E96554D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override string Name  => "Adaptive VRR";
		return _stringLiteralCBD515F486F3F029991E3220BC5E926A5E96554D;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::get_Enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdaptiveVariableRefreshRate_get_Enabled_m3DFDC6FA398A99E94DC8AE1FA7D622937FE2B791 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	{
		// public override bool Enabled { get => m_AdaptiveVRREnabled; set => m_AdaptiveVRREnabled = value; }
		bool L_0 = __this->get_m_AdaptiveVRREnabled_12();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::set_Enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_set_Enabled_mDB51982E4C4F994D212BAC96372B280441C8C0A4 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public override bool Enabled { get => m_AdaptiveVRREnabled; set => m_AdaptiveVRREnabled = value; }
		bool L_0 = ___value0;
		__this->set_m_AdaptiveVRREnabled_12(L_0);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_Awake_m51C73975E744D7D2405656EBA17BBCFBF5A8E47B (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		AdaptiveFramerate_Awake_m2901D3518B13C9D60696D9A2287A7B673148E2BE(__this, /*hidden argument*/NULL);
		// if (m_Settings == null)
		IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * L_0 = ((AdaptivePerformanceScaler_t04EE49F7531BB9AD7A93FA9F978C4469E0ED0BA3 *)__this)->get_m_Settings_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return;
		return;
	}

IL_0015:
	{
		// m_VRR = VariableRefreshRate.Instance;
		RuntimeObject* L_2;
		L_2 = VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline(/*hidden argument*/NULL);
		__this->set_m_VRR_13(L_2);
		// if (m_VRR == null)
		RuntimeObject* L_3 = __this->get_m_VRR_13();
		if (L_3)
		{
			goto IL_0030;
		}
	}
	{
		// Enabled = false;
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::set_Enabled(System.Boolean) */, __this, (bool)0);
		// return;
		return;
	}

IL_0030:
	{
		// m_VRR.RefreshRateChanged += RefreshRateChanged;
		RuntimeObject* L_4 = __this->get_m_VRR_13();
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_5 = (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *)il2cpp_codegen_object_new(VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var);
		VariableRefreshRateEventHandler__ctor_mE2BC720F515C20D25FC2ED862998C3D072CB2230(L_5, __this, (intptr_t)((intptr_t)AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * >::Invoke(3 /* System.Void UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::add_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler) */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_4, L_5);
		// m_CurrentRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_6 = __this->get_m_VRR_13();
		NullCheck(L_6);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7;
		L_7 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_6);
		RuntimeObject* L_8 = __this->get_m_VRR_13();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_8);
		int32_t L_10;
		L_10 = Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E(L_7, L_9, /*hidden argument*/Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		__this->set_m_CurrentRefreshRateIndex_14(L_10);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnDisabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnDisabled_m5219862BE30D5C7FCB23E6ADF6AE3DB6B0BABDC3 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisabled();
		AdaptiveFramerate_OnDisabled_m82036310F44027467DF42B4F9DD60A0832C0A954(__this, /*hidden argument*/NULL);
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_VRR.SetRefreshRateByIndex(m_DefaultRefreshRateIndex);
		RuntimeObject* L_1 = __this->get_m_VRR_13();
		int32_t L_2 = __this->get_m_DefaultRefreshRateIndex_15();
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnEnabled_mA2BB05BC4CFCDC9D9676DA5273237585977C97C9 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnabled();
		AdaptiveFramerate_OnEnabled_m4AD7A50ACB2E0AE57290E09F5198D9CA6AD2235E(__this, /*hidden argument*/NULL);
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// m_DefaultRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_1 = __this->get_m_VRR_13();
		NullCheck(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2;
		L_2 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = __this->get_m_VRR_13();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_3);
		int32_t L_5;
		L_5 = Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E(L_2, L_4, /*hidden argument*/Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		__this->set_m_DefaultRefreshRateIndex_15(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnDestroy_mF3DA210CDF44A6AE86F1955E48D27A7CD488DC12 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_VRR.RefreshRateChanged -= RefreshRateChanged;
		RuntimeObject* L_1 = __this->get_m_VRR_13();
		VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * L_2 = (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 *)il2cpp_codegen_object_new(VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83_il2cpp_TypeInfo_var);
		VariableRefreshRateEventHandler__ctor_mE2BC720F515C20D25FC2ED862998C3D072CB2230(L_2, __this, (intptr_t)((intptr_t)AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * >::Invoke(4 /* System.Void UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::remove_RefreshRateChanged(UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler) */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::RefreshRateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_RefreshRateChanged_mF193DBF673D4AA6593CDBC2466505413B3CBBEA0 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_CurrentRefreshRateIndex = Array.IndexOf(m_VRR.SupportedRefreshRates, m_VRR.CurrentRefreshRate);
		RuntimeObject* L_1 = __this->get_m_VRR_13();
		NullCheck(L_1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2;
		L_2 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = __this->get_m_VRR_13();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_CurrentRefreshRate() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_3);
		int32_t L_5;
		L_5 = Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E(L_2, L_4, /*hidden argument*/Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m1F0420BEEDFC9FDB3682212205F4F8124BA3EA7E_RuntimeMethod_var);
		__this->set_m_CurrentRefreshRateIndex_14(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnLevelIncrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnLevelIncrease_m2232865C6FC8800A6588712ECF4DF56579EDF0BC (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_CurrentRefreshRateIndex > 0)
		int32_t L_1 = __this->get_m_CurrentRefreshRateIndex_14();
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// var rateIndex = m_CurrentRefreshRateIndex - 1;
		int32_t L_2 = __this->get_m_CurrentRefreshRateIndex_14();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		// var fps = m_VRR.SupportedRefreshRates[rateIndex];
		RuntimeObject* L_3 = __this->get_m_VRR_13();
		NullCheck(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4;
		L_4 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		// if (fps < MinBound || fps > MaxBound)
		int32_t L_8 = V_1;
		float L_9;
		L_9 = VirtualFuncInvoker0< float >::Invoke(16 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MinBound() */, __this);
		if ((((float)((float)((float)L_8))) < ((float)L_9)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_10 = V_1;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(18 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MaxBound() */, __this);
		if ((!(((float)((float)((float)L_10))) > ((float)L_11))))
		{
			goto IL_003e;
		}
	}

IL_003d:
	{
		// return;
		return;
	}

IL_003e:
	{
		// if (m_VRR.SetRefreshRateByIndex(rateIndex))
		RuntimeObject* L_12 = __this->get_m_VRR_13();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		bool L_14;
		L_14 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_12, L_13);
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		// m_CurrentRefreshRateIndex = rateIndex;
		int32_t L_15 = V_0;
		__this->set_m_CurrentRefreshRateIndex_14(L_15);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::OnLevelDecrease()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate_OnLevelDecrease_m68E109801B68F904B51D3E523B34F9BC1DCE97A1 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (m_VRR == null)
		RuntimeObject* L_0 = __this->get_m_VRR_13();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (m_CurrentRefreshRateIndex < m_VRR.SupportedRefreshRates.Length - 1)
		int32_t L_1 = __this->get_m_CurrentRefreshRateIndex_14();
		RuntimeObject* L_2 = __this->get_m_VRR_13();
		NullCheck(L_2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3;
		L_3 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), (int32_t)1)))))
		{
			goto IL_0061;
		}
	}
	{
		// var rateIndex = m_CurrentRefreshRateIndex + 1;
		int32_t L_4 = __this->get_m_CurrentRefreshRateIndex_14();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		// var fps = m_VRR.SupportedRefreshRates[rateIndex];
		RuntimeObject* L_5 = __this->get_m_VRR_13();
		NullCheck(L_5);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6;
		L_6 = InterfaceFuncInvoker0< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(0 /* System.Int32[] UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::get_SupportedRefreshRates() */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_5);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// if (fps < MinBound || fps > MaxBound)
		int32_t L_10 = V_1;
		float L_11;
		L_11 = VirtualFuncInvoker0< float >::Invoke(16 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MinBound() */, __this);
		if ((((float)((float)((float)L_10))) < ((float)L_11)))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_12 = V_1;
		float L_13;
		L_13 = VirtualFuncInvoker0< float >::Invoke(18 /* System.Single UnityEngine.AdaptivePerformance.AdaptivePerformanceScaler::get_MaxBound() */, __this);
		if ((!(((float)((float)((float)L_12))) > ((float)L_13))))
		{
			goto IL_004c;
		}
	}

IL_004b:
	{
		// return;
		return;
	}

IL_004c:
	{
		// if (m_VRR.SetRefreshRateByIndex(rateIndex))
		RuntimeObject* L_14 = __this->get_m_VRR_13();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		bool L_16;
		L_16 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(2 /* System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate::SetRefreshRateByIndex(System.Int32) */, IVariableRefreshRate_tDE89F043B8996572722116FCB1A8BC2EB4B3DD77_il2cpp_TypeInfo_var, L_14, L_15);
		if (!L_16)
		{
			goto IL_0061;
		}
	}
	{
		// m_CurrentRefreshRateIndex = rateIndex;
		int32_t L_17 = V_0;
		__this->set_m_CurrentRefreshRateIndex_14(L_17);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.AdaptiveVariableRefreshRate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdaptiveVariableRefreshRate__ctor_m1BDED88613C327F54A57CA29B1B7589066F3B405 (AdaptiveVariableRefreshRate_t191947991F52574C0BF26A6156720B6757C1D818 * __this, const RuntimeMethod* method)
{
	{
		AdaptiveFramerate__ctor_m694304B14B58592958A80FB83E43A309ABF8D77A(__this, /*hidden argument*/NULL);
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
// UnityEngine.ISubsystem UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::GetDefaultSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SamsungAndroidProviderLoader_GetDefaultSubsystem_m21CE0BA6637633939066D49CCB735113F91A0076 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IAdaptivePerformanceSettings_tA1BEAD4827B883C1A94BADD21AC4582054DAA6DF * SamsungAndroidProviderLoader_GetSettings_m5142C16141C6A67402F594FF986BEE47F62608F2 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return SamsungAndroidProviderSettings.GetSettings();
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0;
		L_0 = SamsungAndroidProviderSettings_GetSettings_m5F3D48F7276BAC793B6E1B0174B71E8010BC5EDA_inline(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Initialize_mD8B7358FD468F612096722DDD533A3870C918271 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Start_m4A8C3409675027A2204351FB90DE2572D0AFFBCC (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Stop_mB5FB11A342D68015336C6673E75BF98FCB9AE883 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderLoader_Deinitialize_m41518761704AB1B66B9D209DFA76BBD9C071CACC (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderLoader__ctor_mEE7CF6845D0EEA728F694CF91A8EC5B7B16389C3 (SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2 * __this, const RuntimeMethod* method)
{
	{
		AdaptivePerformanceLoaderHelper__ctor_mE84DD1B4F467A7999870517C658B85B4C5109EB2(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderLoader__cctor_m67974FF9C54676C03A9B2BED012BCBDC545F3427 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m437E6C5DE2D7E16E015E843E8C8A8F32A6360E60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<AdaptivePerformanceSubsystemDescriptor> s_SamsungGameSDKSubsystemDescriptors =
		//     new List<AdaptivePerformanceSubsystemDescriptor>();
		List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 * L_0 = (List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4 *)il2cpp_codegen_object_new(List_1_tDC3CCB2B6EC9D3D4B4CDA5C96CB5BB341E2454A4_il2cpp_TypeInfo_var);
		List_1__ctor_m437E6C5DE2D7E16E015E843E8C8A8F32A6360E60(L_0, /*hidden argument*/List_1__ctor_m437E6C5DE2D7E16E015E843E8C8A8F32A6360E60_RuntimeMethod_var);
		((SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderLoader_tF4EF35A26133E653D4A7D8EDD8AA52F555C471C2_il2cpp_TypeInfo_var))->set_s_SamsungGameSDKSubsystemDescriptors_5(L_0);
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
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_samsungProviderLogging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_samsungProviderLogging_m71DA5B62D909EA7009C760C09856D986751522F4 (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_SamsungProviderLogging; }
		bool L_0 = __this->get_m_SamsungProviderLogging_9();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_samsungProviderLogging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_samsungProviderLogging_mD8BA16D5FFCC4658C6175BDC28B539FA97DAE1F9 (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_SamsungProviderLogging = value; }
		bool L_0 = ___value0;
		__this->set_m_SamsungProviderLogging_9(L_0);
		// set { m_SamsungProviderLogging = value; }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_highSpeedVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_highSpeedVRR_mA9BB44B728682221720176AFAF52FB5EF9DC39EB (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_HighSpeedVRR; }
		bool L_0 = __this->get_m_HighSpeedVRR_10();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_highSpeedVRR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_highSpeedVRR_m756BCF71965416D652AF5FC0B7B84AE649F9F45A (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_HighSpeedVRR = value; }
		bool L_0 = ___value0;
		__this->set_m_HighSpeedVRR_10(L_0);
		// set { m_HighSpeedVRR = value; }
		return;
	}
}
// System.Boolean UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::get_automaticVRR()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SamsungAndroidProviderSettings_get_automaticVRR_m4221B3258B342205B45B533671E17B29B81A6686 (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_AutomaticVRR; }
		bool L_0 = __this->get_m_AutomaticVRR_11();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::set_automaticVRR(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_set_automaticVRR_mB8D70EDEEE0B7E821C6CF92D8592B3CF382AAD5C (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_AutomaticVRR = value; }
		bool L_0 = ___value0;
		__this->set_m_AutomaticVRR_11(L_0);
		// set { m_AutomaticVRR = value; }
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings_Awake_m13AD94174995C143EA546BEBEE03D251965F753E (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_RuntimeInstance = this;
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		((SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var))->set_s_RuntimeInstance_12(__this);
		// }
		return;
	}
}
// UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * SamsungAndroidProviderSettings_GetSettings_m5F3D48F7276BAC793B6E1B0174B71E8010BC5EDA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = s_RuntimeInstance;
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0 = ((SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var))->get_s_RuntimeInstance_12();
		// return settings;
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings__ctor_m4FDF5371E2CD6413668E22189FED1652EDCCDB4E (SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * __this, const RuntimeMethod* method)
{
	{
		// bool m_AutomaticVRR = true;
		__this->set_m_AutomaticVRR_11((bool)1);
		IAdaptivePerformanceSettings__ctor_m54D83D51CB50D235F0F7F8AAB4D0CCFD57D8B96B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.SamsungAndroidProviderSettings::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SamsungAndroidProviderSettings__cctor_m8B37F5F9DA633683D534287F61B77D054A09D170 (const RuntimeMethod* method)
{
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
// UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ((VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRate::set_Instance(UnityEngine.AdaptivePerformance.Samsung.Android.IVariableRefreshRate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRate_set_Instance_mA2EE58BBB76707BB9BF63B80898DB64E9D4D7782 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ___value0;
		((VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_0(L_0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler__ctor_mE2BC720F515C20D25FC2ED862998C3D072CB2230 (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_Invoke_mE450A684864C914BB2E39BF846FC5895B32084B6 (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRateEventHandler_BeginInvoke_m7D0DF5E64153831C5C0B742ED9D933DD8121389E (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Void UnityEngine.AdaptivePerformance.Samsung.Android.VariableRefreshRateEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableRefreshRateEventHandler_EndInvoke_m92C0AB3623EE5CCE4AE2F1A65EE119D8FDAB7062 (VariableRefreshRateEventHandler_t06D300F6DD7FDB78D3404003A1C81A149DBFAC83 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* VariableRefreshRate_get_Instance_mEF8EA6B518B43B9ECF2F493D20AE908A66934765_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public IVariableRefreshRate Instance { get; set; }
		RuntimeObject* L_0 = ((VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_StaticFields*)il2cpp_codegen_static_fields_for(VariableRefreshRate_t57603D16D53370D4A4A0485DA7D22C0D9980C9BD_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * SamsungAndroidProviderSettings_GetSettings_m5F3D48F7276BAC793B6E1B0174B71E8010BC5EDA_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = s_RuntimeInstance;
		IL2CPP_RUNTIME_CLASS_INIT(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var);
		SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A * L_0 = ((SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_StaticFields*)il2cpp_codegen_static_fields_for(SamsungAndroidProviderSettings_tBEEAB62061DF28F7475E9F0D4DBDFE1B6897434A_il2cpp_TypeInfo_var))->get_s_RuntimeInstance_12();
		// return settings;
		return L_0;
	}
}
