#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>
struct IReadOnlyDictionary_2_t7E602F68B800E9FD97AE5462BAAEB2B2A0A6A6FD;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>
struct IReadOnlyDictionary_2_t1C9E4278DD0992BFB53341CF2B1D31E871D5CB59;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>
struct IReadOnlyDictionary_2_t727071262B8B87C9F1C794CCE7F03282F35F8F4C;
// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>
struct IReadOnlyDictionary_2_tC190C0DF3FC65E46AC2382576C1FF9A793C41951;
// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric>
struct IReadOnlyList_1_tACBB2E1C257871194507D0C10E16FD03C486E45A;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver
struct IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67;
// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA;
// Unity.Multiplayer.Tools.MetricObserver
struct MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205;
// Unity.Multiplayer.Tools.NoOpMetricObserver
struct NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C;

IL2CPP_EXTERN_C RuntimeClass* IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t3EBE2582CCEEDAB032728DD564F7DBD8B8E859C0 
{
};

// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA  : public RuntimeObject
{
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Counters
	RuntimeObject* ___m_Counters_0;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Gauges
	RuntimeObject* ___m_Gauges_1;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_Timers
	RuntimeObject* ___m_Timers_2;
	// System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::m_PayloadEvents
	RuntimeObject* ___m_PayloadEvents_3;
	// System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IMetric> Unity.Multiplayer.Tools.NetStats.MetricCollection::<Metrics>k__BackingField
	RuntimeObject* ___U3CMetricsU3Ek__BackingField_4;
	// System.UInt64 Unity.Multiplayer.Tools.NetStats.MetricCollection::<ConnectionId>k__BackingField
	uint64_t ___U3CConnectionIdU3Ek__BackingField_5;
};

// Unity.Multiplayer.Tools.MetricObserver
struct MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.MetricObserver::m_profilerMetricObserver
	RuntimeObject* ___m_profilerMetricObserver_0;
	// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.MetricObserver::m_rnsmMetricObserver
	RuntimeObject* ___m_rnsmMetricObserver_1;
};

// Unity.Multiplayer.Tools.MetricObserverFactory
struct MetricObserverFactory_t9F9B2B7832E97276E2A09CC857A730D3DA84BB9F  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.NoOpMetricObserver
struct NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C  : public RuntimeObject
{
};

// Unity.Multiplayer.Tools.RnsmMetricObserverFactory
struct RnsmMetricObserverFactory_t74D3DDC07DB50A6D4B825A90E21E2FA13240342D  : public RuntimeObject
{
};

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

// <Module>

// <Module>

// Unity.Multiplayer.Tools.NetStats.MetricCollection

// Unity.Multiplayer.Tools.NetStats.MetricCollection

// Unity.Multiplayer.Tools.MetricObserver

// Unity.Multiplayer.Tools.MetricObserver

// Unity.Multiplayer.Tools.MetricObserverFactory

// Unity.Multiplayer.Tools.MetricObserverFactory

// Unity.Multiplayer.Tools.NoOpMetricObserver
struct NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_StaticFields
{
	// Unity.Multiplayer.Tools.NoOpMetricObserver Unity.Multiplayer.Tools.NoOpMetricObserver::<Instance>k__BackingField
	NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* ___U3CInstanceU3Ek__BackingField_0;
};

// Unity.Multiplayer.Tools.NoOpMetricObserver

// Unity.Multiplayer.Tools.RnsmMetricObserverFactory

// Unity.Multiplayer.Tools.RnsmMetricObserverFactory

// System.Void

// System.Void
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void Unity.Multiplayer.Tools.MetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricObserver__ctor_m10F30E6F192E2076BFB96A14B90C802D4E4254AD (MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProfilerMetricObserverFactory_Construct_m6ABBC8031C6A462A5A2648B81DB095914F082341 (const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.RnsmMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RnsmMetricObserverFactory_Construct_m192920D108D3C75E8B062E6DD9F367E54A3325B6 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver__ctor_mEE70C11AB39A75FB09DD286B4A9DFEDF91079AA4 (NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* __this, const RuntimeMethod* method) ;
// Unity.Multiplayer.Tools.NoOpMetricObserver Unity.Multiplayer.Tools.NoOpMetricObserver::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* NoOpMetricObserver_get_Instance_mE28DBCD2135E7B48CB6E4116612662F40BD3F71B_inline (const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.MetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MetricObserverFactory_Construct_m010B1B7D0A896B713F7D4721CD5E8C52BD66500C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IMetricObserver Construct() => new MetricObserver();
		MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205* L_0 = (MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205*)il2cpp_codegen_object_new(MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		MetricObserver__ctor_m10F30E6F192E2076BFB96A14B90C802D4E4254AD(L_0, NULL);
		return L_0;
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
// System.Void Unity.Multiplayer.Tools.MetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricObserver_Observe_mFBF7C9D9BBB297139C5C6875A545BC5B954FDAC7 (MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___0_collection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_profilerMetricObserver.Observe(collection);
		RuntimeObject* L_0 = __this->___m_profilerMetricObserver_0;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_1 = ___0_collection;
		NullCheck(L_0);
		InterfaceActionInvoker1< MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection) */, IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67_il2cpp_TypeInfo_var, L_0, L_1);
		// m_rnsmMetricObserver.Observe(collection);
		RuntimeObject* L_2 = __this->___m_rnsmMetricObserver_1;
		MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* L_3 = ___0_collection;
		NullCheck(L_2);
		InterfaceActionInvoker1< MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* >::Invoke(0 /* System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection) */, IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67_il2cpp_TypeInfo_var, L_2, L_3);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.MetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetricObserver__ctor_m10F30E6F192E2076BFB96A14B90C802D4E4254AD (MetricObserver_tD4247F407B1FDBA96D7FBCC0A8DB4244D091E205* __this, const RuntimeMethod* method) 
{
	{
		// private IMetricObserver m_profilerMetricObserver = ProfilerMetricObserverFactory.Construct();
		RuntimeObject* L_0;
		L_0 = ProfilerMetricObserverFactory_Construct_m6ABBC8031C6A462A5A2648B81DB095914F082341(NULL);
		__this->___m_profilerMetricObserver_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_profilerMetricObserver_0), (void*)L_0);
		// private IMetricObserver m_rnsmMetricObserver = RnsmMetricObserverFactory.Construct();
		RuntimeObject* L_1;
		L_1 = RnsmMetricObserverFactory_Construct_m192920D108D3C75E8B062E6DD9F367E54A3325B6(NULL);
		__this->___m_rnsmMetricObserver_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rnsmMetricObserver_1), (void*)L_1);
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
// Unity.Multiplayer.Tools.NoOpMetricObserver Unity.Multiplayer.Tools.NoOpMetricObserver::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* NoOpMetricObserver_get_Instance_mE28DBCD2135E7B48CB6E4116612662F40BD3F71B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NoOpMetricObserver Instance { get; } = new NoOpMetricObserver();
		il2cpp_codegen_runtime_class_init_inline(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* L_0 = ((NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_StaticFields*)il2cpp_codegen_static_fields_for(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver__ctor_mEE70C11AB39A75FB09DD286B4A9DFEDF91079AA4 (NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* __this, const RuntimeMethod* method) 
{
	{
		// private NoOpMetricObserver() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// private NoOpMetricObserver() {}
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver_Observe_m625E56B653A35C014BCEB744055992E5F05EB75F (NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___0_collection, const RuntimeMethod* method) 
{
	{
		// public void Observe(MetricCollection collection) {}
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NoOpMetricObserver::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoOpMetricObserver__cctor_m973080DE32F5E9E9232E08BB27B030A24F1DB8AB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NoOpMetricObserver Instance { get; } = new NoOpMetricObserver();
		NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* L_0 = (NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C*)il2cpp_codegen_object_new(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NoOpMetricObserver__ctor_mEE70C11AB39A75FB09DD286B4A9DFEDF91079AA4(L_0, NULL);
		((NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_StaticFields*)il2cpp_codegen_static_fields_for(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_StaticFields*)il2cpp_codegen_static_fields_for(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
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
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.RnsmMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RnsmMetricObserverFactory_Construct_m192920D108D3C75E8B062E6DD9F367E54A3325B6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return NoOpMetricObserver.Instance;
		il2cpp_codegen_runtime_class_init_inline(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* L_0;
		L_0 = NoOpMetricObserver_get_Instance_mE28DBCD2135E7B48CB6E4116612662F40BD3F71B_inline(NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* NoOpMetricObserver_get_Instance_mE28DBCD2135E7B48CB6E4116612662F40BD3F71B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NoOpMetricObserver Instance { get; } = new NoOpMetricObserver();
		il2cpp_codegen_runtime_class_init_inline(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var);
		NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C* L_0 = ((NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_StaticFields*)il2cpp_codegen_static_fields_for(NoOpMetricObserver_t9C5A78901D502DED42BA951F27F5BC7D3538801C_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
