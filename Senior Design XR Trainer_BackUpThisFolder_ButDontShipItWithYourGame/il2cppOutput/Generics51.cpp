﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Boolean>
struct Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41;
// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Boolean>
struct Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22;
// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Boolean>
struct Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E;
// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t92904CE6AE729E23667675B2858ABE16106A0837;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115;
// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B;
// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595;
// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0;
// System.Collections.Generic.IEnumerable`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct IEnumerator_1_t6999C610E1C05F2C90151CD5C41E24528ACB3255;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>
struct List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.InternedString>
struct List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29;
// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E;
// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F;
// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int16>
struct WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16;
// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int32>
struct WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21;
// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int64>
struct WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F;
// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>
struct WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723;
// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt16>
struct WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7;
// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt32>
struct WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8;
// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt64>
struct WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>[]
struct KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.InputSystem.Utilities.InternedString[]
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
// UnityEngine.InputSystem.Utilities.NameAndParameters[]
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
// UnityEngine.InputSystem.Utilities.NamedValue[]
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UIElements.StyleSelectorPart[]
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
// UnityEngine.InputSystem.Utilities.Substring[]
struct SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77;
// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue[]
struct JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;

IL2CPP_EXTERN_C RuntimeClass* FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject* ___current_2;
};

// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>
struct List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyValuePair_2U5BU5D_t23EB7B590043EB535E2B7A8C2765588E9D6DC674* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.InternedString>
struct List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSelectorPart>
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.Substring>
struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SubstringU5BU5D_t9973080FDB519ED771E9FB3E6FDC90DF45211B77* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue>
struct ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 
{
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	// Unity.Netcode.FastBufferWriter/WriterHandle* Unity.Netcode.FastBufferWriter::Handle
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle_0;
};

struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	// System.Byte[] Unity.Netcode.FastBufferWriter::s_ByteArrayCache
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_ByteArrayCache_1;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringOriginalCase
	String_t* ___m_StringOriginalCase_0;
	// System.String UnityEngine.InputSystem.Utilities.InternedString::m_StringLowerCase
	String_t* ___m_StringLowerCase_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase_0;
	char* ___m_StringLowerCase_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.InternedString
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase_0;
	Il2CppChar* ___m_StringLowerCase_1;
};

// UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.TypeCode UnityEngine.InputSystem.Utilities.PrimitiveValue::m_Type
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			// System.Boolean UnityEngine.InputSystem.Utilities.PrimitiveValue::m_BoolValue
			bool ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			// System.Char UnityEngine.InputSystem.Utilities.PrimitiveValue::m_CharValue
			Il2CppChar ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			// System.Byte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ByteValue
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			// System.SByte UnityEngine.InputSystem.Utilities.PrimitiveValue::m_SByteValue
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			// System.Int16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ShortValue
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			// System.UInt16 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UShortValue
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			// System.Int32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_IntValue
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			// System.UInt32 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_UIntValue
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			// System.Int64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_LongValue
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			// System.UInt64 UnityEngine.InputSystem.Utilities.PrimitiveValue::m_ULongValue
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			// System.Single UnityEngine.InputSystem.Utilities.PrimitiveValue::m_FloatValue
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			// System.Double UnityEngine.InputSystem.Utilities.PrimitiveValue::m_DoubleValue
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.PrimitiveValue
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding[4];
			int32_t ___m_BoolValue_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_2_OffsetPadding[4];
			uint8_t ___m_CharValue_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_2_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding[4];
			uint8_t ___m_ByteValue_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_3_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding[4];
			int8_t ___m_SByteValue_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding[4];
			int16_t ___m_ShortValue_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_5_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding[4];
			uint16_t ___m_UShortValue_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_6_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_7_OffsetPadding[4];
			int32_t ___m_IntValue_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_7_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding[4];
			uint32_t ___m_UIntValue_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_8_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_9_OffsetPadding[4];
			int64_t ___m_LongValue_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_9_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding[4];
			uint64_t ___m_ULongValue_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_10_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding[4];
			float ___m_FloatValue_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_11_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding[4];
			double ___m_DoubleValue_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_12_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_12_forAlignmentOnly;
		};
	};
};

// UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	// System.String UnityEngine.UIElements.StyleSelectorPart::m_Value
	String_t* ___m_Value_0;
	// UnityEngine.UIElements.StyleSelectorType UnityEngine.UIElements.StyleSelectorPart::m_Type
	int32_t ___m_Type_1;
	// System.Object UnityEngine.UIElements.StyleSelectorPart::tempData
	RuntimeObject* ___tempData_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.StyleSelectorPart
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value_0;
	int32_t ___m_Type_1;
	Il2CppIUnknown* ___tempData_2;
};

// UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	// System.String UnityEngine.InputSystem.Utilities.Substring::m_String
	String_t* ___m_String_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Index
	int32_t ___m_Index_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.Substring::m_Length
	int32_t ___m_Length_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.Substring
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String_0;
	int32_t ___m_Index_1;
	int32_t ___m_Length_2;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>
struct Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>
struct Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ____current_3;
};

// System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D  : public RuntimeObject
{
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___current_2;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 
{
	// System.String UnityEngine.InputSystem.Utilities.NameAndParameters::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;
	// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.Utilities.NamedValue> UnityEngine.InputSystem.Utilities.NameAndParameters::<parameters>k__BackingField
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NameAndParameters
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField_1;
};

// UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED 
{
	// System.String UnityEngine.InputSystem.Utilities.NamedValue::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_1;
	// UnityEngine.InputSystem.Utilities.PrimitiveValue UnityEngine.InputSystem.Utilities.NamedValue::<value>k__BackingField
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CvalueU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CvalueU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.NamedValue
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_1;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CvalueU3Ek__BackingField_2;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	// UnityEngine.InputSystem.Utilities.Substring UnityEngine.InputSystem.Utilities.JsonParser/JsonString::text
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonString::hasEscapes
	bool ___hasEscapes_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text_0;
	int32_t ___hasEscapes_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonString
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text_0;
	int32_t ___hasEscapes_1;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>
struct Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>
struct Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ____current_3;
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<UnityEngine.InputSystem.Utilities.InternedString>
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 ___enumerator_6;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::type
	int32_t ___type_0;
	// System.Boolean UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::boolValue
	bool ___boolValue_1;
	// System.Double UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::realValue
	double ___realValue_2;
	// System.Int64 UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::integerValue
	int64_t ___integerValue_3;
	// UnityEngine.InputSystem.Utilities.JsonParser/JsonString UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::stringValue
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue_4;
	// System.Collections.Generic.List`1<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::arrayValue
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue> UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::objectValue
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	// System.Object UnityEngine.InputSystem.Utilities.JsonParser/JsonValue::anyValue
	RuntimeObject* ___anyValue_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.Utilities.JsonParser/JsonValue
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type_0;
	int32_t ___boolValue_1;
	double ___realValue_2;
	int64_t ___integerValue_3;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue_4;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue_5;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue_6;
	Il2CppIUnknown* ___anyValue_7;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ____current_3;
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Boolean>
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>
struct Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Boolean>
struct Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Boolean>
struct Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t92904CE6AE729E23667675B2858ABE16106A0837  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Boolean>
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Boolean>
struct Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>
struct Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Boolean>
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0  : public MulticastDelegate_t
{
};

// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>
struct KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value_1;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>
struct WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>
struct WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 ___enumerator_6;
};

// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int16>
struct WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16  : public MulticastDelegate_t
{
};

// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int32>
struct WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21  : public MulticastDelegate_t
{
};

// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int64>
struct WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F  : public MulticastDelegate_t
{
};

// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>
struct WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723  : public MulticastDelegate_t
{
};

// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt16>
struct WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7  : public MulticastDelegate_t
{
};

// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt32>
struct WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8  : public MulticastDelegate_t
{
};

// Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt64>
struct WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>
struct Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C ____current_3;
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Boolean>
struct Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39  : public MulticastDelegate_t
{
};

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC  : public MulticastDelegate_t
{
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>
struct WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator_6;
};

// System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>
struct WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 ___enumerator_6;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_gshared_inline (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7_gshared (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_gshared_inline (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E_gshared (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8_gshared (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5_gshared (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;

// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::get_Current()
inline KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_inline (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C (*) (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*, const RuntimeMethod*))Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>>::MoveNext()
inline bool Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7 (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*, const RuntimeMethod*))Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::get_Current()
inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method)
{
	return ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*, const RuntimeMethod*))Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
inline bool Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*, const RuntimeMethod*))Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::get_Current()
inline NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method)
{
	return ((  NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 (*) (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*, const RuntimeMethod*))Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NameAndParameters>::MoveNext()
inline bool Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8 (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*, const RuntimeMethod*))Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::get_Current()
inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method)
{
	return ((  NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED (*) (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*, const RuntimeMethod*))Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.NamedValue>::MoveNext()
inline bool Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5 (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*, const RuntimeMethod*))Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::get_Current()
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UIElements.StyleSelectorPart>::MoveNext()
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::get_Current()
inline Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  Substring_t2E16755269E6716C22074D6BC0A9099915E67849 (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.Substring>::MoveNext()
inline bool Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06 (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*, const RuntimeMethod*))Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::get_Current()
inline JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  JsonValue_t01DB320267C848E729A400EF2345979978F851D2 (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>::MoveNext()
inline bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*, const RuntimeMethod*))Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2396DCB7282A7B7B02DA7D1FD7AB545A793E8F21_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* ___source0, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* ___predicate1, Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m8635A10BD8B76832003D82090DE167DD6CF91F1D_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_0 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_1 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* L_2 = (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*)__this->___selector_5;
		WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* L_3 = (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65*, List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF87683433A907EC64C1163940FD77B7B240EFAD1_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F* L_3 = (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 L_4;
		L_4 = ((  Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033 (*) (List_1_t8722BDA3E6F39614DB740A6467F64680B62B8D3F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___value_1))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_5 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_6;
		L_6 = Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_7 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39* L_8 = (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*)__this->___predicate_4;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t64B724B221B33F59E8041C54F7EEA09F76429E39*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC* L_11 = (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*)__this->___selector_5;
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tE32F20C3219F9FBFF273C0735FB38DC288042AFC*, KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* L_14 = (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m680D21266204C331A9BC819327CDCC483E571AC7(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.InputSystem.Utilities.JsonParser/JsonValue>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mCF386B618FAA2832977C3F95A2465C8698280DD8_gshared (WhereSelectListIterator_2_tB2BBEE53DFAA8F31DC852A975CC4EC6F88BEFB65* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF85D17BE66C1306EFCDD26409BE55B790F79EAC7_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source0, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate1, Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m937D5D1B7EC49BC4FAFEF932971777D72EED049F_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, const RuntimeMethod* method) 
{
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* L_2 = (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*)__this->___selector_5;
		WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* L_3 = (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76*, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m08D934685D1F2120D36F9765312FE73F71D11A0C_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_3 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D L_4;
		L_4 = ((  Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D (*) (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_5 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_6;
		L_6 = Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_7 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_8 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41* L_11 = (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*)__this->___selector_5;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t653EDD14312DC25B03C1761015E5AE2456B9EE41*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_14 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mBD04923D351FA549D359E8DE870BC9B749151AD5_gshared (WhereSelectListIterator_2_t689CF6744B5DA4348991EEB1526B6218E6AA7B76* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BCE5A345461986F8A5135101B04C991E317945D_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* ___source0, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate1, Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6278EB80D90415F83BFDB8B5371391F709708653_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_0 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_1 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* L_2 = (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*)__this->___selector_5;
		WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* L_3 = (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA*, List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m0CB70971EBB16282B0C9F4643F3FD2738E5BD75E_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6* L_3 = (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D L_4;
		L_4 = ((  Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D (*) (List_1_t5F075F07C02D0CCF50D7FB6C844DE693B2851FC6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringOriginalCase_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_5 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_6;
		L_6 = Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_7 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_8 = (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*)__this->___predicate_4;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB* L_11 = (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*)__this->___selector_5;
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t63BCD2DEBA7363CAD4DAAF9703EF65C11A4C7BBB*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* L_14 = (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mFF6CD854E66A32544CE8D1C58A74C324CE2E822E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m47E63372073B7C4C5AD7436694EFC21E163DF15E_gshared (WhereSelectListIterator_2_t74EFBD313BDAB6E63085AF2C26CFC2273FB7A1CA* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mD72ECEB2A0980E5F93455365BA960143A34085DB_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m796C8279CEB66ADDC80A7EAC36AEE08605979787_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_2 = (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*)__this->___selector_5;
		WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* L_3 = (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mAFCE990F26EBDDF656AA01807375D36544C63124_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = ((  Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 (*) (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22* L_11 = (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t9BBD5547216ABBB82D70EB4C1FA7F517AF448F22*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1B9A768C2B1A26E615BCDB10078F5231CF0C4ADC_gshared (WhereSelectListIterator_2_t8CBDEA25D66F7ED9AE619E7B42005F154E1FAE81* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5B76AF3B3FB2BBABD403C1A3D66C1A5835BA7561_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* ___source0, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* ___predicate1, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF2790E5EEE1D2834008B9010A19FF3E957831704_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_0 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_1 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_2 = (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*)__this->___selector_5;
		WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* L_3 = (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5*, List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m238375EE3AAF7B4CE3F25C85030EB4F8692B3BC9_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43* L_3 = (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 L_4;
		L_4 = ((  Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054 (*) (List_1_tF542FB9F97D34CC06B085D6872645B0DC0AA5E43*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&__this->___enumerator_6))->____current_3))->___U3CparametersU3Ek__BackingField_1))->___m_Array_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_5 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_6;
		L_6 = Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_7 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619* L_8 = (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*)__this->___predicate_4;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t98F39575E3E0D3F315C6098F2B0FEACE3AEEF619*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB* L_11 = (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*)__this->___selector_5;
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t0A5A7E48AA59739587E399BBE7C7E896A81319EB*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* L_14 = (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m43A6E06C5BF5734DB6AD0687EF52131A51F0FCC8(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NameAndParameters,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA426094A845A1CE82FF3AD1193681948DA7603C9_gshared (WhereSelectListIterator_2_t9620CD43165EA820150EA2B2F1938A86D5C2E1F5* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mACC4D7CA5223D22CBC36F756CA54BA80C06723C9_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m89C4946CF9C7CA28F2091618685B85AA11EA3E87_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_2 = (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*)__this->___selector_5;
		WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* L_3 = (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m7DCCE086E23C0D68D4F9AEF5E70291B76432AAF1_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = ((  Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 (*) (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E* L_11 = (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t45E13AF8F7E5050E1CB2DB876E7C6C107B7FAC0E*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mC6AFE32AA08E2CBC27F4433BA2319CA59306DC87_gshared (WhereSelectListIterator_2_tC7B82E7505D8326313C1B549FBFC1B0FFCCB513C* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m0114667628FFFB49A744DF5C3B5A35A1814E363B_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* ___source0, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* ___predicate1, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D39A066ED4134383555E981E6798ABE193987FA_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, const RuntimeMethod* method) 
{
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_0 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_1 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_2 = (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*)__this->___selector_5;
		WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* L_3 = (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562*, List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA38FDC21AFF8361AF5116FA137FCCBCACEA1AD47_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06* L_3 = (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 L_4;
		L_4 = ((  Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06 (*) (List_1_t8A57A4B80A041F8DB4118B5BC7717E3FE6654C06*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___U3CnameU3Ek__BackingField_1), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_5 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_6;
		L_6 = Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_7 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB* L_8 = (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*)__this->___predicate_4;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tCFF3F4E33A60C27D5C04065F0BF14F51AD43B4AB*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E* L_11 = (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*)__this->___selector_5;
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t95F8C5DB83078AC2200EB11F714DEB6262E3AA4E*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* L_14 = (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m8FDA47B1AB6128A33F2C41EAA3448D67A00A51C5(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.NamedValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m760B5F9924376AD216CBF0E0478787D491BBCC1C_gshared (WhereSelectListIterator_2_tE15AF534D167BE39094C8F89856ADBFEBE761562* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF6B7E88239427705172E9C20967757449FE7FCF5_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_mF42081341BA80585066D84F1EB99058CEAEB9529_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_2 = (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*)__this->___selector_5;
		WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* L_3 = (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m800FE72E92DE905CEB928E72485F8A74DDBFFEF0_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t92904CE6AE729E23667675B2858ABE16106A0837* L_11 = (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t92904CE6AE729E23667675B2858ABE16106A0837*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mEA53E9D37F0B4DB9D0E1D26336E8203C5080814B_gshared (WhereSelectListIterator_2_tF87B8F9C03ADBCBD76DE50EE82E24D5FF5DFC266* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____current_3), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_4;
		RuntimeObject* L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)__this->___selector_5;
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9435C8BAA035BE07F3983A2F3C06D5F3F2EF97BF_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m203266656A861AB9FCE85C6265CBB81759D6EC78_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_2 = (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*)__this->___selector_5;
		WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* L_3 = (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m441444FFC4A56B13F1DCFA2E6C732972CC286B71_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115* L_11 = (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t34787AB6BB8F2217CFED1101834AAAEFFEC13115*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2B9342EC90171F99141E32C1E7D1126C61888256_gshared (WhereSelectListIterator_2_tFF1361706039E12FA707C48FE62FD0A43731B6EA* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source0, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate1, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_Value_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___tempData_2), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*)__this->___predicate_4;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*)__this->___selector_5;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.UIElements.StyleSelectorPart,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m76DFD3D8B5B62444383A84BE159C61CBE99D98DA_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m7514B4D4CA43073C8D6D3B10D6B33C562464A0C8_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_2 = (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*)__this->___selector_5;
		WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* L_3 = (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9801C3269DA1FCC381EED100CE2C710B10873FDE_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = ((  Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 (*) (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B* L_11 = (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6E897C5FF3BC8DDD4F3C18D3DFB83BDB8E4F9D2B*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m54A65CB2977BDF55DA3004F81CF889F22E233DE9_gshared (WhereSelectListIterator_2_t783076280AA5A0279F1CF30B5F192A923D62C1E7* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDEC1BA11C8B63FF5BC0568D2F273C66867A0FC83_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* ___source0, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* ___predicate1, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m7F15BA24C1AD78593E0EFF5AA8220436BDB66612_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_0 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_1 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_2 = (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*)__this->___selector_5;
		WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* L_3 = (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC*, List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m56890DBD7344EE51AE2457C222E70BE9AF955C00_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29* L_3 = (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 L_4;
		L_4 = ((  Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785 (*) (List_1_tC4C8D746916C433D3343B92925052F1B9DB34A29*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___m_String_0), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_5 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_6;
		L_6 = Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_7 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F* L_8 = (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*)__this->___predicate_4;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t1786BA7CF27B123F6CFAA174EE698F743702757F*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB* L_11 = (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*)__this->___selector_5;
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_tB87969817D1EDC637904CC3302B8C93B14ACF9FB*, Substring_t2E16755269E6716C22074D6BC0A9099915E67849, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* L_14 = (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_mBD8837024473F97D1F793AD3DF5E27568D7BDD06(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.Substring,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m873C15FE36A52528B396D6A1919D572AFDCA52B6_gshared (WhereSelectListIterator_2_t943FB9C430D28BC0B04E2A8E2B3E914860BCA6BC* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m01258FBF3047EACEBBBE89855BDAE5197B095A79_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*)__this->___selector_5;
		WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* L_3 = (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE119EF6FA88D7E63491FC5611A5F34D3602F5D1B_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_11 = (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = ((  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*) (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringOriginalCase_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current_2))->___m_StringLowerCase_1), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<UnityEngine.InputSystem.Utilities.InternedString>::Dispose() */, (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,UnityEngine.InputSystem.Utilities.InternedString>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAEEE2C3DA2DBA62F84C02FE5EDD8894338DC5D55_gshared (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*, RuntimeObject*, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDB747029572F65F32894254A0E779C445B0B1E15_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source0, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate1, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* ___selector2, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___source0;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___predicate1;
		__this->___predicate_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_4), (void*)L_1);
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = ___selector2;
		__this->___selector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_5), (void*)L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m1509E7222F78F6B89F836EA7A8742EBDFFC020F9_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_2 = (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*)__this->___selector_5;
		WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* L_3 = (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_3);
		((  void (*) (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF219C7B364CA9F7692179ED01E1588FD7862A585_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*)__this->___source_3;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = ((  Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB (*) (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		__this->___enumerator_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator_6))->____list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator_6))->____current_3))->___stringValue_4))->___text_0))->___m_String_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___arrayValue_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___objectValue_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator_6))->____current_3))->___anyValue_7), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state_1 = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*)__this->___predicate_4;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0* L_11 = (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*)__this->___selector_5;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = ((  RuntimeObject* (*) (Func_2_t9D6D0636D7EE282D3C55AA455C0B6CAC61A117F0*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current_2), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator_6);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
		VirtualActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<UnityEngine.InputSystem.Utilities.JsonParser/JsonValue,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mF790B9A9E8480C2654B0FA2B916F50565B9831F1_gshared (WhereSelectListIterator_2_t96704D85C19313BF5304499CA0648C85A9DA5C4F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
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
void WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_Multicast(WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int16_t* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* currentDelegate = reinterpret_cast<WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int16_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_OpenInst(WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int16_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_OpenStatic(WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int16_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_OpenStaticInvoker(WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int16_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int16_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_ClosedStaticInvoker(WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int16_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int16_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int16>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mA61A64E7A96E85962E93C74B99C061B455F5F0E6_gshared (WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_Multicast;
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int16>::Invoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m9640A12565B34A27B3E57ABAB35AFE31BD594564_gshared (WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int16_t* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int16>::BeginInvoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mC64772F2AAC762396BF9487BD2CB3B457851CBAB_gshared (WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int16_t* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int16>::EndInvoke(T& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m9E2B05A3D21DA4E66876522C2F2FCDA10158AA65_gshared (WriteValueDelegate_t024E8A7B3A528B116063E2D7FA17CB14E06E4F16* __this, int16_t* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_Multicast(WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int32_t* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* currentDelegate = reinterpret_cast<WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_OpenInst(WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int32_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_OpenStatic(WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int32_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_OpenStaticInvoker(WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int32_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_ClosedStaticInvoker(WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int32_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mE971953AB8743378971DF8083497FE3F8034CC5A_gshared (WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_Multicast;
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int32>::Invoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m56B44E0F643BCDE45F558B2379B446DAA148BBA6_gshared (WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int32_t* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int32>::BeginInvoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m53A1CC8259D7F417A61A1DDB206B6DF6F6D1CF4E_gshared (WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int32_t* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int32>::EndInvoke(T& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m2867A55DE9BE2A95252EBF290618016F1EB781D9_gshared (WriteValueDelegate_t45D324B20EFBA6F5D66410BDE5FAD8FDFAC3EF21* __this, int32_t* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_Multicast(WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int64_t* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* currentDelegate = reinterpret_cast<WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int64_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_OpenInst(WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int64_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_OpenStatic(WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int64_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_OpenStaticInvoker(WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int64_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int64_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_ClosedStaticInvoker(WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int64_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int64_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mEC2FBABBC2C93C6772386E8E7A44A1BEB1B749D2_gshared (WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_Multicast;
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int64>::Invoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m55EAD95B2DBAD90AADA4F8748FA866C43BCA3F15_gshared (WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int64_t* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, int64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int64>::BeginInvoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m767D68892295CC2725CA4D38A27B4A116B99FA85_gshared (WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, int64_t* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Int64>::EndInvoke(T& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m841C9F82B0C1A86A926247FCE1105C3721CD556E_gshared (WriteValueDelegate_tF07A6D84C76842F9DF7E45B506143D8F6060D15F* __this, int64_t* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_Multicast(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* currentDelegate = reinterpret_cast<WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenInst(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenStatic(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenStaticInvoker(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject** >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_ClosedStaticInvoker(WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject** >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m1C60109154F74BB40DA6F194449FE9A891711B3F_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_Multicast;
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>::Invoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m45247BEDC222A5B539360D481CD6AD6444969C66_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, RuntimeObject**, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>::BeginInvoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m638CCB27A6046324AC5237DCA8AF67730BEC36D3_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, RuntimeObject** ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = *___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.Object>::EndInvoke(T& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m371E39B8BB74D4DC94D472B5835E8F2755ABBABB_gshared (WriteValueDelegate_t5229761A9455193D5D8B28A714E3489CFD860723* __this, RuntimeObject** ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_Multicast(WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint16_t* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* currentDelegate = reinterpret_cast<WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_OpenInst(WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint16_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_OpenStatic(WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint16_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_OpenStaticInvoker(WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint16_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_ClosedStaticInvoker(WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint16_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt16>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_m79D8CB848293AC11C5717F94E519C647665215C0_gshared (WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_Multicast;
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt16>::Invoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m0564D8EC115C4993BC58DE67D5F437FDF1CBB7DE_gshared (WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint16_t* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint16_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt16>::BeginInvoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_mE3424F497F3C2909575182BF6921789D0E11AE5B_gshared (WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint16_t* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt16>::EndInvoke(T& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m659C53890BF735CEA1155FCC4E60BBA4A7D00A1D_gshared (WriteValueDelegate_t87086BD0A9A6D2BE7452749D920C58B9607894C7* __this, uint16_t* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_Multicast(WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* currentDelegate = reinterpret_cast<WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_OpenInst(WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_OpenStatic(WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_OpenStaticInvoker(WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_ClosedStaticInvoker(WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mCF49434F2EF4CD68D67416F00F7065442879AC61_gshared (WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_Multicast;
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt32>::Invoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_mA5618AB69B33125B3BD9ACD7DAE5C4C9E28185E9_gshared (WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint32_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt32>::BeginInvoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m2FE001B6475D1CD372259B735F5D242DCC00DEFB_gshared (WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint32_t* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt32>::EndInvoke(T& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_mACF19CED859A3508BCB3808CAF29B72EF4DB251C_gshared (WriteValueDelegate_t68E2A03463D6DCF3C833BDAB83CFC16ED78E1CD8* __this, uint32_t* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_Multicast(WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint64_t* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* currentDelegate = reinterpret_cast<WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_OpenInst(WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint64_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_OpenStatic(WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint64_t* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___writer0, ___value1, method);
}
void WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_OpenStaticInvoker(WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint64_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___writer0, ___value1);
}
void WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_ClosedStaticInvoker(WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint64_t* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___writer0, ___value1);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt64>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate__ctor_mC5DEEFC6D8BF86C45FB469C085953FDEC6DE721F_gshared (WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_Multicast;
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt64>::Invoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute))
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_Invoke_m3CE85CA817583FB05B8DA387992D6A50E0E0AAE1_gshared (WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint64_t* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC, uint64_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___writer0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt64>::BeginInvoke(Unity.Netcode.FastBufferWriter,T& modreq(System.Runtime.InteropServices.InAttribute),System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WriteValueDelegate_BeginInvoke_m4FF30188D167427F1C0A30AFABDE6B57F9E8C87C_gshared (WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC ___writer0, uint64_t* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var, &___writer0);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &*___value1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Unity.Netcode.UserNetworkVariableSerialization`1/WriteValueDelegate<System.UInt64>::EndInvoke(T& modreq(System.Runtime.InteropServices.InAttribute),System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteValueDelegate_EndInvoke_m5CC607B3A11C4B7FE12838494C316EFE4F4A2B33_gshared (WriteValueDelegate_t20F1B1986CAED121C12F30E899A29DC0906C4931* __this, uint64_t* ___value0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C Enumerator_get_Current_m3D3107CD31B1A80171125849D1294C93E7A50C22_gshared_inline (Enumerator_t1AC8FFDA5444B5A88D22DEB3656C4024CD0DF033* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C L_0 = (KeyValuePair_2_tF857B1C753163D05D6CE5351B5146D32C33F0B0C)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Enumerator_get_Current_m6E5830352E5082086B6B8F79AB4DABC2A18414A3_gshared_inline (Enumerator_tB7F1A96A58CED8A263DA757B6D85EB0C1339F58D* __this, const RuntimeMethod* method) 
{
	{
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_0 = (InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 Enumerator_get_Current_mE64095D45062ABD3FE097C12C8A767F4378A3658_gshared_inline (Enumerator_t8A6E0A03FA966D5367776FAD5C06D879D186F054* __this, const RuntimeMethod* method) 
{
	{
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_0 = (NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED Enumerator_get_Current_m83264A170B9E2284E4A91DD95D9E58A4AC7A065D_gshared_inline (Enumerator_t4FC6C6A75A6B5AFB8EDA87B7A8DA147830118B06* __this, const RuntimeMethod* method) 
{
	{
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_0 = (NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = (StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Substring_t2E16755269E6716C22074D6BC0A9099915E67849 Enumerator_get_Current_m543479141C23CB5A761FFAE440388CA38F12F73A_gshared_inline (Enumerator_tE3E77E493115DC420CF9F8E1A9DBCBE1A2DF1785* __this, const RuntimeMethod* method) 
{
	{
		Substring_t2E16755269E6716C22074D6BC0A9099915E67849 L_0 = (Substring_t2E16755269E6716C22074D6BC0A9099915E67849)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_gshared_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) 
{
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_0 = (JsonValue_t01DB320267C848E729A400EF2345979978F851D2)__this->____current_3;
		return L_0;
	}
}