#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>



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
// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver
struct ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D;
// Unity.Multiplayer.Tools.NetStats.IMetricObserver
struct IMetricObserver_t5D65C0C42ABF58C4C91CA67FA7635EEF8F355E67;
// Unity.Multiplayer.Tools.NetStats.INetStatSerializer
struct INetStatSerializer_t7FEF6F737369EE918021C4D9587B3F3B8F2948D9;
// Unity.Multiplayer.Tools.NetStats.MetricCollection
struct MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA;
// Unity.Multiplayer.Tools.NetStats.MetricFactory
struct MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14;
// Unity.Multiplayer.Tools.NetStats.NetStatSerializer
struct NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E;

IL2CPP_EXTERN_C RuntimeClass* ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E_il2cpp_TypeInfo_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC31A2036100965F301C42B388772D5A31720F65E 
{
};

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver
struct ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.INetStatSerializer Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver::m_NetStatSerializer
	RuntimeObject* ___m_NetStatSerializer_0;
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

// Unity.Multiplayer.Tools.NetStats.NetStatSerializer
struct NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E  : public RuntimeObject
{
	// Unity.Multiplayer.Tools.NetStats.MetricFactory Unity.Multiplayer.Tools.NetStats.NetStatSerializer::m_MetricFactory
	MetricFactory_tD1472F5A6AC3B2A052EBDE1E022152830B518E14* ___m_MetricFactory_0;
};

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory
struct ProfilerMetricObserverFactory_t4C42AAA2AEABE9FEC9E9F6633B0D51B8F8E015D0  : public RuntimeObject
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

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver

// Unity.Multiplayer.Tools.NetStats.MetricCollection

// Unity.Multiplayer.Tools.NetStats.MetricCollection

// Unity.Multiplayer.Tools.NetStats.NetStatSerializer

// Unity.Multiplayer.Tools.NetStats.NetStatSerializer

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory

// Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory

// System.Void

// System.Void
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetStats.NetStatSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetStatSerializer__ctor_m9C4C58C9E498B39BD958D5596470165CC74318F2 (NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E* __this, const RuntimeMethod* method) ;
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibilityProfilerMetricObserver__ctor_m6BEA62E9B202B5E16B569BC5317A001A5C34F581 (ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D* __this, const RuntimeMethod* method) ;
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
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibilityProfilerMetricObserver__ctor_m6BEA62E9B202B5E16B569BC5317A001A5C34F581 (ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ExtensibilityProfilerMetricObserver()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_NetStatSerializer = new NetStatSerializer();
		NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E* L_0 = (NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E*)il2cpp_codegen_object_new(NetStatSerializer_t9F27B48ACF02B224520014E32721BDFE2B25697E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NetStatSerializer__ctor_m9C4C58C9E498B39BD958D5596470165CC74318F2(L_0, NULL);
		__this->___m_NetStatSerializer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_NetStatSerializer_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ExtensibilityProfilerMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExtensibilityProfilerMetricObserver_Observe_m821FC424B17561D3F81E99071C0572C124246BBC (ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D* __this, MetricCollection_tC854AC2B17132ADE592D32683C1EF00AB6B2B8AA* ___0_collection, const RuntimeMethod* method) 
{
	{
		// }
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
// Unity.Multiplayer.Tools.NetStats.IMetricObserver Unity.Multiplayer.Tools.NetworkProfiler.Runtime.ProfilerMetricObserverFactory::Construct()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProfilerMetricObserverFactory_Construct_m6ABBC8031C6A462A5A2648B81DB095914F082341 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ExtensibilityProfilerMetricObserver();
		ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D* L_0 = (ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D*)il2cpp_codegen_object_new(ExtensibilityProfilerMetricObserver_tA6699910F2D52D3E237CAC60BD495B2B69374D0D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ExtensibilityProfilerMetricObserver__ctor_m6BEA62E9B202B5E16B569BC5317A001A5C34F581(L_0, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
