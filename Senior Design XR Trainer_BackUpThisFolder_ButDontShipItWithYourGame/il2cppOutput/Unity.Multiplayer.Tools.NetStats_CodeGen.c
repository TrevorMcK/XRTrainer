#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_mE8953328CE7A71AAA908CC05046EAA3CB7CD7E9F (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor()
extern void IsUnmanagedAttribute__ctor_m15D9FD1EA78C5BE72818D1DBC9307855DC5A08BD (void);
// 0x00000003 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::RegisterObserver(Unity.Multiplayer.Tools.NetStats.IMetricObserver)
// 0x00000004 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::SetConnectionId(System.UInt64)
// 0x00000005 System.Void Unity.Multiplayer.Tools.NetStats.IMetricDispatcher::Dispatch()
// 0x00000006 System.Void Unity.Multiplayer.Tools.NetStats.IMetricObserver::Observe(Unity.Multiplayer.Tools.NetStats.MetricCollection)
// 0x00000007 System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Int64>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.Double>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IMetric`1<System.TimeSpan>>,System.Collections.Generic.IReadOnlyDictionary`2<Unity.Multiplayer.Tools.NetStats.MetricId,Unity.Multiplayer.Tools.NetStats.IEventMetric>)
extern void MetricCollection__ctor_m0F2BEBC3670B9D43220027FE76CA1F195857C259 (void);
// 0x00000008 System.Void Unity.Multiplayer.Tools.NetStats.MetricCollection::set_ConnectionId(System.UInt64)
extern void MetricCollection_set_ConnectionId_m3DF3CCC3C1EA2F75D54F4A36F7D850904E013DFA (void);
// 0x00000009 System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::.ctor(Unity.Multiplayer.Tools.NetStats.MetricCollection,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IResettable>,System.Collections.Generic.IReadOnlyList`1<Unity.Multiplayer.Tools.NetStats.IEventMetric>)
extern void MetricDispatcher__ctor_m7DC37197A5C4922FF961C302C761494704523192 (void);
// 0x0000000A System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::RegisterObserver(Unity.Multiplayer.Tools.NetStats.IMetricObserver)
extern void MetricDispatcher_RegisterObserver_m4F1ED3A966650406B9D5C312ACFF0214EAF9D0BB (void);
// 0x0000000B System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::SetConnectionId(System.UInt64)
extern void MetricDispatcher_SetConnectionId_mC54B8A47BBCF3E094236FBA92E467DD2206ACAEA (void);
// 0x0000000C System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcher::Dispatch()
extern void MetricDispatcher_Dispatch_mC64EB2D2E70E75E70752FD6E9B5C6D29F95F7C22 (void);
// 0x0000000D Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithCounters(Unity.Multiplayer.Tools.NetStats.Counter[])
extern void MetricDispatcherBuilder_WithCounters_m1B7A69395A8AC0AA9BE565B9389998CE10F9BBF6 (void);
// 0x0000000E Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithGauges(Unity.Multiplayer.Tools.NetStats.Gauge[])
extern void MetricDispatcherBuilder_WithGauges_m38E87A8E3D90DF52D90DA328C3F892317D882A63 (void);
// 0x0000000F Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::WithMetricEvents(Unity.Multiplayer.Tools.NetStats.EventMetric`1<TEvent>[])
// 0x00000010 Unity.Multiplayer.Tools.NetStats.IMetricDispatcher Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::Build()
extern void MetricDispatcherBuilder_Build_m80084EAA320C3C2E1845EEB7172B736D073AAC0D (void);
// 0x00000011 System.Void Unity.Multiplayer.Tools.NetStats.MetricDispatcherBuilder::.ctor()
extern void MetricDispatcherBuilder__ctor_m80893365A07A440984F93D65D9C0C12A1832745A (void);
// 0x00000012 System.Void Unity.Multiplayer.Tools.NetStats.Counter::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Int64)
extern void Counter__ctor_mCB54ABE3AE825D387164EEC11DBF801FD7C2D4DF (void);
// 0x00000013 System.Void Unity.Multiplayer.Tools.NetStats.Counter::Increment(System.Int64)
extern void Counter_Increment_m10F204BD8C1E1BBDC08D70D221FB37B80CB62A73 (void);
// 0x00000014 System.Void Unity.Multiplayer.Tools.NetStats.CounterFactory::.ctor()
extern void CounterFactory__ctor_m859B650A9C8FE13C03EF036D8B6798B719714500 (void);
// 0x00000015 System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId)
// 0x00000016 Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_Id()
// 0x00000017 System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_ShouldResetOnDispatch()
// 0x00000018 System.UInt32 Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_MaxNumberOfValues()
// 0x00000019 System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetric`1::get_WentOverLimit()
// 0x0000001A System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::set_WentOverLimit(System.Boolean)
// 0x0000001B System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::Mark(TValue)
// 0x0000001C System.Void Unity.Multiplayer.Tools.NetStats.EventMetric`1::Reset()
// 0x0000001D System.Boolean Unity.Multiplayer.Tools.NetStats.EventMetricFactory::TryGetFactoryTypeName(System.Type,Unity.Collections.FixedString128Bytes&)
extern void EventMetricFactory_TryGetFactoryTypeName_m47CB84CA58DF42E0A1C672D5EDB3FB580217D78F (void);
// 0x0000001E System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::.cctor()
extern void EventMetricFactory__cctor_m1B0E9EAF269322F7F4777E8C84F4E010F24B2F3A (void);
// 0x0000001F System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::RegisterType()
// 0x00000020 System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory::.ctor()
extern void EventMetricFactory__ctor_m2C266F88FE68AE0337F27A604F9F1A76F5007007 (void);
// 0x00000021 System.Void Unity.Multiplayer.Tools.NetStats.EventMetricFactory/EventMetricFactoryImpl`1::.ctor()
// 0x00000022 System.Void Unity.Multiplayer.Tools.NetStats.Gauge::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,System.Double)
extern void Gauge__ctor_mDE81593A7077731A18681766F02C8DC6256BA105 (void);
// 0x00000023 System.Void Unity.Multiplayer.Tools.NetStats.Gauge::Set(System.Double)
extern void Gauge_Set_m6537B380248D703408B64C0F9EC5A4F8AA7C3E81 (void);
// 0x00000024 System.Void Unity.Multiplayer.Tools.NetStats.GaugeFactory::.ctor()
extern void GaugeFactory__ctor_m4794579EEE0FA862FF96B8B2B12F5ADCCB1DF04C (void);
// 0x00000025 System.Boolean Unity.Multiplayer.Tools.NetStats.IEventMetric::get_WentOverLimit()
// 0x00000026 System.Boolean Unity.Multiplayer.Tools.NetStats.IResettable::get_ShouldResetOnDispatch()
// 0x00000027 System.Void Unity.Multiplayer.Tools.NetStats.IResettable::Reset()
// 0x00000028 System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::.ctor(Unity.Multiplayer.Tools.NetStats.MetricId,TValue)
// 0x00000029 Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.Metric`1::get_Id()
// 0x0000002A TValue Unity.Multiplayer.Tools.NetStats.Metric`1::get_Value()
// 0x0000002B System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::set_Value(TValue)
// 0x0000002C TValue Unity.Multiplayer.Tools.NetStats.Metric`1::get_DefaultValue()
// 0x0000002D System.Boolean Unity.Multiplayer.Tools.NetStats.Metric`1::get_ShouldResetOnDispatch()
// 0x0000002E System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::set_ShouldResetOnDispatch(System.Boolean)
// 0x0000002F System.Void Unity.Multiplayer.Tools.NetStats.Metric`1::Reset()
// 0x00000030 System.Void Unity.Multiplayer.Tools.NetStats.MetricFactory::.ctor()
extern void MetricFactory__ctor_m0AA1857A34167CA308EA43C5EA1CBB9D2D7478B1 (void);
// 0x00000031 System.Void Unity.Multiplayer.Tools.NetStats.AssemblyRequiresTypeRegistrationAttribute::.ctor()
extern void AssemblyRequiresTypeRegistrationAttribute__ctor_mFD6C49C9405D39D8065CB8AFCE67EBD2D9C8BA30 (void);
// 0x00000032 System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_TypeIndex()
extern void MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017 (void);
// 0x00000033 System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_TypeIndex(System.Int32)
extern void MetricId_set_TypeIndex_m35BFB09D6B12975453CFD648862C804D9CEF7706 (void);
// 0x00000034 System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::get_EnumValue()
extern void MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232 (void);
// 0x00000035 System.Void Unity.Multiplayer.Tools.NetStats.MetricId::set_EnumValue(System.Int32)
extern void MetricId_set_EnumValue_mE332E6235CFD5A526BE6BFE35CE1A1C1DB4D7A88 (void);
// 0x00000036 System.String Unity.Multiplayer.Tools.NetStats.MetricId::get_Name()
extern void MetricId_get_Name_m77C796F0ED1F016FA4E7544052B413E5D050F9A1 (void);
// 0x00000037 System.Void Unity.Multiplayer.Tools.NetStats.MetricId::.ctor(System.Type,System.Int32)
extern void MetricId__ctor_mC06CB56F550123B905DB1CF07ACF589FD1B78D10 (void);
// 0x00000038 Unity.Multiplayer.Tools.NetStats.MetricId Unity.Multiplayer.Tools.NetStats.MetricId::Create(T)
// 0x00000039 System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(Unity.Multiplayer.Tools.NetStats.MetricId)
extern void MetricId_Equals_mB139C11FD4DD1F71F240678724495EA5DE813921 (void);
// 0x0000003A System.Boolean Unity.Multiplayer.Tools.NetStats.MetricId::Equals(System.Object)
extern void MetricId_Equals_m0EE3289E6E1EB6B2E027E0FC14E6ED2F78D1CD8C (void);
// 0x0000003B System.Int32 Unity.Multiplayer.Tools.NetStats.MetricId::GetHashCode()
extern void MetricId_GetHashCode_mD58717DF7E335A5A1652CFBF074DE11B9435EB6B (void);
// 0x0000003C System.String Unity.Multiplayer.Tools.NetStats.MetricId::ToString()
extern void MetricId_ToString_mAEF8B4F7C84541DBB2915779FB804DC44F7FAF90 (void);
// 0x0000003D System.String Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_DisplayName()
extern void MetricMetadataAttribute_get_DisplayName_m74AA6C6CBD2C2559878B3C5D6C3AFDE9645717A6 (void);
// 0x0000003E System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_DisplayName(System.String)
extern void MetricMetadataAttribute_set_DisplayName_mB66532072C5EAEC12AC667E0402BE813EB83673E (void);
// 0x0000003F Unity.Multiplayer.Tools.NetStats.MetricKind Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_MetricKind()
extern void MetricMetadataAttribute_get_MetricKind_m1FB56CD89F7EDC9A93E476206F3F506C43D7E4DF (void);
// 0x00000040 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_MetricKind(Unity.Multiplayer.Tools.NetStats.MetricKind)
extern void MetricMetadataAttribute_set_MetricKind_m514BE8A61406CCA54489B46F4DB69464163FD4B0 (void);
// 0x00000041 Unity.Multiplayer.Tools.NetStats.Units Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_Units()
extern void MetricMetadataAttribute_get_Units_mCD1CCB0FE96CB571BB8C8EF41B94297D4CB9D163 (void);
// 0x00000042 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_Units(Unity.Multiplayer.Tools.NetStats.Units)
extern void MetricMetadataAttribute_set_Units_mC779F22B265138D9E75C5759A67E936157695FD5 (void);
// 0x00000043 System.Boolean Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::get_DisplayAsPercentage()
extern void MetricMetadataAttribute_get_DisplayAsPercentage_mDA7C24E54E8E22595F8746BDCE23A111A1C0CFF8 (void);
// 0x00000044 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::set_DisplayAsPercentage(System.Boolean)
extern void MetricMetadataAttribute_set_DisplayAsPercentage_mAD92D1120BFE4114220AB86B88253C9BC60D8919 (void);
// 0x00000045 System.Void Unity.Multiplayer.Tools.NetStats.MetricMetadataAttribute::.ctor()
extern void MetricMetadataAttribute__ctor_m0571080394DD36DBAE628A21AAAEB99C38062C39 (void);
// 0x00000046 System.String Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::get_DisplayName()
extern void MetricTypeEnumAttribute_get_DisplayName_m1AE91E6508DEC1BEEE990827A29E587AA3070451 (void);
// 0x00000047 System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::set_DisplayName(System.String)
extern void MetricTypeEnumAttribute_set_DisplayName_m06F413FF4E108DF065B807029D842D31D6FDB66A (void);
// 0x00000048 System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeEnumAttribute::.ctor()
extern void MetricTypeEnumAttribute__ctor_m3C261D0D0797E474B60AB21C21CDB8674CEE0DE0 (void);
// 0x00000049 Unity.Multiplayer.Tools.NetStats.SortPriority Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute::get_SortPriority()
extern void MetricTypeSortPriorityAttribute_get_SortPriority_mE67EA96103A67FFE511FF45381E89FC516F1A0C0 (void);
// 0x0000004A System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute::set_SortPriority(Unity.Multiplayer.Tools.NetStats.SortPriority)
extern void MetricTypeSortPriorityAttribute_set_SortPriority_m7DBB99E0A2CB7A2C24FD4398FAF5343BDBA8802A (void);
// 0x0000004B System.Void Unity.Multiplayer.Tools.NetStats.MetricTypeSortPriorityAttribute::.ctor()
extern void MetricTypeSortPriorityAttribute__ctor_mF28F271E423AADF78B1377567A0C3E7E3DCA477B (void);
// 0x0000004C System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::.cctor()
extern void MetricIdTypeLibrary__cctor_m86B1E5DFEEB0806BDFF09644CF3FE56E05C29685 (void);
// 0x0000004D System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::TypeRegistrationPostProcess()
extern void MetricIdTypeLibrary_TypeRegistrationPostProcess_m1D182352CFED93586A12CE14589DD7FABA51675C (void);
// 0x0000004E System.Int32 Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetTypeIndex(System.Type)
extern void MetricIdTypeLibrary_GetTypeIndex_mCD3F12FE1A7830125CD5F3368BEC1BDE662FAE37 (void);
// 0x0000004F System.String Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumName(System.Int32,System.Int32)
extern void MetricIdTypeLibrary_GetEnumName_m469F95312636FDC53224D55B774ABBA59A4B0154 (void);
// 0x00000050 T Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary::GetEnumMetadata(System.Collections.Generic.List`1<T[]>,System.Int32,System.Int32)
// 0x00000051 System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::.cctor()
extern void U3CU3Ec__cctor_mFF6C6282B713AB66D6B4828905CEF0C48E442DF6 (void);
// 0x00000052 System.Void Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::.ctor()
extern void U3CU3Ec__ctor_m776FB9AE40AE9C8BFC9750F21B728EE21FD7DDFA (void);
// 0x00000053 System.Int32 Unity.Multiplayer.Tools.NetStats.MetricIdTypeLibrary/<>c::<TypeRegistrationPostProcess>b__14_0(System.Type,System.Type)
extern void U3CU3Ec_U3CTypeRegistrationPostProcessU3Eb__14_0_mC664D27316976758CB5A20F811D628EEECA26F1A (void);
// 0x00000054 System.Void Unity.Multiplayer.Tools.NetStats.TimerFactory::.ctor()
extern void TimerFactory__ctor_m4B01373093DB32A2E41A84060DCED926E91F34E2 (void);
// 0x00000055 System.Void Unity.Multiplayer.Tools.NetStats.TypeRegistration::RunIfNeeded()
extern void TypeRegistration_RunIfNeeded_mFDCE53630297A2807B6759D8B367F15E66BF4046 (void);
// 0x00000056 System.Void Unity.Multiplayer.Tools.NetStats.TypeRegistration::.cctor()
extern void TypeRegistration__cctor_mC17C04FC5A2A3F3019D3A101DFCBC237426A8328 (void);
// 0x00000057 System.Void Unity.Multiplayer.Tools.NetStats.NetStatSerializer::.ctor()
extern void NetStatSerializer__ctor_m9C4C58C9E498B39BD958D5596470165CC74318F2 (void);
// 0x00000058 System.String Unity.Multiplayer.Tools.NetStats.BaseUnitExtensions::GetSymbol(Unity.Multiplayer.Tools.NetStats.BaseUnit)
extern void BaseUnitExtensions_GetSymbol_m3BEBBDDB70EBEC3230CA06D7740BE09CA1ACD31C (void);
// 0x00000059 System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::get_BytesExponent()
extern void BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381 (void);
// 0x0000005A System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::get_SecondsExponent()
extern void BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D (void);
// 0x0000005B System.Void Unity.Multiplayer.Tools.NetStats.BaseUnits::.ctor(System.SByte,System.SByte)
extern void BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB (void);
// 0x0000005C Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.BaseUnits::WithSeconds(System.SByte)
extern void BaseUnits_WithSeconds_mFD21BAC0D894F823308F0F2D619F94606A4CBADB (void);
// 0x0000005D System.Boolean Unity.Multiplayer.Tools.NetStats.BaseUnits::Equals(Unity.Multiplayer.Tools.NetStats.BaseUnits)
extern void BaseUnits_Equals_mDAA4768D7DCB7D50AA930945136ADDA4C80BEDEB (void);
// 0x0000005E System.Boolean Unity.Multiplayer.Tools.NetStats.BaseUnits::Equals(System.Object)
extern void BaseUnits_Equals_m46333FD6C5E022609052AAD645FFBD9C97F7AFD9 (void);
// 0x0000005F System.Int32 Unity.Multiplayer.Tools.NetStats.BaseUnits::GetHashCode()
extern void BaseUnits_GetHashCode_mE898D17E79859C71E703604A5999791AB6D5EB81 (void);
// 0x00000060 System.SByte Unity.Multiplayer.Tools.NetStats.BaseUnits::GetExponent(Unity.Multiplayer.Tools.NetStats.BaseUnit)
extern void BaseUnits_GetExponent_m1BCF3144E65E04EA6BA9BAA35E6216B3BF064832 (void);
// 0x00000061 System.ValueTuple`2<System.String,System.String> Unity.Multiplayer.Tools.NetStats.BaseUnits::get_NumeratorAndDenominatorDisplayStrings()
extern void BaseUnits_get_NumeratorAndDenominatorDisplayStrings_m965543E1330059B9EB03384A853042532B5B108E (void);
// 0x00000062 System.String Unity.Multiplayer.Tools.NetStats.BaseUnits::get_DisplayString()
extern void BaseUnits_get_DisplayString_m514319D1EDF3CCBE1E7416D4513236760664BF5D (void);
// 0x00000063 System.String Unity.Multiplayer.Tools.NetStats.BaseUnits::ToString()
extern void BaseUnits_ToString_m4F328455C1BF2F8CC616E1AD01E928F5D9100CAD (void);
// 0x00000064 System.Void Unity.Multiplayer.Tools.NetStats.BaseUnits::.cctor()
extern void BaseUnits__cctor_m41B30C6EF9CD1D0695E00FBAFA2262BE42491531 (void);
// 0x00000065 System.Void Unity.Multiplayer.Tools.NetStats.BaseUnits::<get_NumeratorAndDenominatorDisplayStrings>g__AddUnit|14_0(Unity.Multiplayer.Tools.NetStats.BaseUnit,System.SByte,System.String&)
extern void BaseUnits_U3Cget_NumeratorAndDenominatorDisplayStringsU3Eg__AddUnitU7C14_0_m4AD86A0CCAF911923D79A6E4D77D7BFEAA34D90E (void);
// 0x00000066 Unity.Multiplayer.Tools.NetStats.BaseUnits Unity.Multiplayer.Tools.NetStats.UnitExtensions::GetBaseUnits(Unity.Multiplayer.Tools.NetStats.Units)
extern void UnitExtensions_GetBaseUnits_m3A75E6DC45886D47530D6DF2F57DC1B3F773FCFB (void);
static Il2CppMethodPointer s_methodPointers[102] = 
{
	EmbeddedAttribute__ctor_mE8953328CE7A71AAA908CC05046EAA3CB7CD7E9F,
	IsUnmanagedAttribute__ctor_m15D9FD1EA78C5BE72818D1DBC9307855DC5A08BD,
	NULL,
	NULL,
	NULL,
	NULL,
	MetricCollection__ctor_m0F2BEBC3670B9D43220027FE76CA1F195857C259,
	MetricCollection_set_ConnectionId_m3DF3CCC3C1EA2F75D54F4A36F7D850904E013DFA,
	MetricDispatcher__ctor_m7DC37197A5C4922FF961C302C761494704523192,
	MetricDispatcher_RegisterObserver_m4F1ED3A966650406B9D5C312ACFF0214EAF9D0BB,
	MetricDispatcher_SetConnectionId_mC54B8A47BBCF3E094236FBA92E467DD2206ACAEA,
	MetricDispatcher_Dispatch_mC64EB2D2E70E75E70752FD6E9B5C6D29F95F7C22,
	MetricDispatcherBuilder_WithCounters_m1B7A69395A8AC0AA9BE565B9389998CE10F9BBF6,
	MetricDispatcherBuilder_WithGauges_m38E87A8E3D90DF52D90DA328C3F892317D882A63,
	NULL,
	MetricDispatcherBuilder_Build_m80084EAA320C3C2E1845EEB7172B736D073AAC0D,
	MetricDispatcherBuilder__ctor_m80893365A07A440984F93D65D9C0C12A1832745A,
	Counter__ctor_mCB54ABE3AE825D387164EEC11DBF801FD7C2D4DF,
	Counter_Increment_m10F204BD8C1E1BBDC08D70D221FB37B80CB62A73,
	CounterFactory__ctor_m859B650A9C8FE13C03EF036D8B6798B719714500,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	EventMetricFactory_TryGetFactoryTypeName_m47CB84CA58DF42E0A1C672D5EDB3FB580217D78F,
	EventMetricFactory__cctor_m1B0E9EAF269322F7F4777E8C84F4E010F24B2F3A,
	NULL,
	EventMetricFactory__ctor_m2C266F88FE68AE0337F27A604F9F1A76F5007007,
	NULL,
	Gauge__ctor_mDE81593A7077731A18681766F02C8DC6256BA105,
	Gauge_Set_m6537B380248D703408B64C0F9EC5A4F8AA7C3E81,
	GaugeFactory__ctor_m4794579EEE0FA862FF96B8B2B12F5ADCCB1DF04C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	MetricFactory__ctor_m0AA1857A34167CA308EA43C5EA1CBB9D2D7478B1,
	AssemblyRequiresTypeRegistrationAttribute__ctor_mFD6C49C9405D39D8065CB8AFCE67EBD2D9C8BA30,
	MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017,
	MetricId_set_TypeIndex_m35BFB09D6B12975453CFD648862C804D9CEF7706,
	MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232,
	MetricId_set_EnumValue_mE332E6235CFD5A526BE6BFE35CE1A1C1DB4D7A88,
	MetricId_get_Name_m77C796F0ED1F016FA4E7544052B413E5D050F9A1,
	MetricId__ctor_mC06CB56F550123B905DB1CF07ACF589FD1B78D10,
	NULL,
	MetricId_Equals_mB139C11FD4DD1F71F240678724495EA5DE813921,
	MetricId_Equals_m0EE3289E6E1EB6B2E027E0FC14E6ED2F78D1CD8C,
	MetricId_GetHashCode_mD58717DF7E335A5A1652CFBF074DE11B9435EB6B,
	MetricId_ToString_mAEF8B4F7C84541DBB2915779FB804DC44F7FAF90,
	MetricMetadataAttribute_get_DisplayName_m74AA6C6CBD2C2559878B3C5D6C3AFDE9645717A6,
	MetricMetadataAttribute_set_DisplayName_mB66532072C5EAEC12AC667E0402BE813EB83673E,
	MetricMetadataAttribute_get_MetricKind_m1FB56CD89F7EDC9A93E476206F3F506C43D7E4DF,
	MetricMetadataAttribute_set_MetricKind_m514BE8A61406CCA54489B46F4DB69464163FD4B0,
	MetricMetadataAttribute_get_Units_mCD1CCB0FE96CB571BB8C8EF41B94297D4CB9D163,
	MetricMetadataAttribute_set_Units_mC779F22B265138D9E75C5759A67E936157695FD5,
	MetricMetadataAttribute_get_DisplayAsPercentage_mDA7C24E54E8E22595F8746BDCE23A111A1C0CFF8,
	MetricMetadataAttribute_set_DisplayAsPercentage_mAD92D1120BFE4114220AB86B88253C9BC60D8919,
	MetricMetadataAttribute__ctor_m0571080394DD36DBAE628A21AAAEB99C38062C39,
	MetricTypeEnumAttribute_get_DisplayName_m1AE91E6508DEC1BEEE990827A29E587AA3070451,
	MetricTypeEnumAttribute_set_DisplayName_m06F413FF4E108DF065B807029D842D31D6FDB66A,
	MetricTypeEnumAttribute__ctor_m3C261D0D0797E474B60AB21C21CDB8674CEE0DE0,
	MetricTypeSortPriorityAttribute_get_SortPriority_mE67EA96103A67FFE511FF45381E89FC516F1A0C0,
	MetricTypeSortPriorityAttribute_set_SortPriority_m7DBB99E0A2CB7A2C24FD4398FAF5343BDBA8802A,
	MetricTypeSortPriorityAttribute__ctor_mF28F271E423AADF78B1377567A0C3E7E3DCA477B,
	MetricIdTypeLibrary__cctor_m86B1E5DFEEB0806BDFF09644CF3FE56E05C29685,
	MetricIdTypeLibrary_TypeRegistrationPostProcess_m1D182352CFED93586A12CE14589DD7FABA51675C,
	MetricIdTypeLibrary_GetTypeIndex_mCD3F12FE1A7830125CD5F3368BEC1BDE662FAE37,
	MetricIdTypeLibrary_GetEnumName_m469F95312636FDC53224D55B774ABBA59A4B0154,
	NULL,
	U3CU3Ec__cctor_mFF6C6282B713AB66D6B4828905CEF0C48E442DF6,
	U3CU3Ec__ctor_m776FB9AE40AE9C8BFC9750F21B728EE21FD7DDFA,
	U3CU3Ec_U3CTypeRegistrationPostProcessU3Eb__14_0_mC664D27316976758CB5A20F811D628EEECA26F1A,
	TimerFactory__ctor_m4B01373093DB32A2E41A84060DCED926E91F34E2,
	TypeRegistration_RunIfNeeded_mFDCE53630297A2807B6759D8B367F15E66BF4046,
	TypeRegistration__cctor_mC17C04FC5A2A3F3019D3A101DFCBC237426A8328,
	NetStatSerializer__ctor_m9C4C58C9E498B39BD958D5596470165CC74318F2,
	BaseUnitExtensions_GetSymbol_m3BEBBDDB70EBEC3230CA06D7740BE09CA1ACD31C,
	BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381,
	BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D,
	BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB,
	BaseUnits_WithSeconds_mFD21BAC0D894F823308F0F2D619F94606A4CBADB,
	BaseUnits_Equals_mDAA4768D7DCB7D50AA930945136ADDA4C80BEDEB,
	BaseUnits_Equals_m46333FD6C5E022609052AAD645FFBD9C97F7AFD9,
	BaseUnits_GetHashCode_mE898D17E79859C71E703604A5999791AB6D5EB81,
	BaseUnits_GetExponent_m1BCF3144E65E04EA6BA9BAA35E6216B3BF064832,
	BaseUnits_get_NumeratorAndDenominatorDisplayStrings_m965543E1330059B9EB03384A853042532B5B108E,
	BaseUnits_get_DisplayString_m514319D1EDF3CCBE1E7416D4513236760664BF5D,
	BaseUnits_ToString_m4F328455C1BF2F8CC616E1AD01E928F5D9100CAD,
	BaseUnits__cctor_m41B30C6EF9CD1D0695E00FBAFA2262BE42491531,
	BaseUnits_U3Cget_NumeratorAndDenominatorDisplayStringsU3Eg__AddUnitU7C14_0_m4AD86A0CCAF911923D79A6E4D77D7BFEAA34D90E,
	UnitExtensions_GetBaseUnits_m3A75E6DC45886D47530D6DF2F57DC1B3F773FCFB,
};
extern void MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_AdjustorThunk (void);
extern void MetricId_set_TypeIndex_m35BFB09D6B12975453CFD648862C804D9CEF7706_AdjustorThunk (void);
extern void MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_AdjustorThunk (void);
extern void MetricId_set_EnumValue_mE332E6235CFD5A526BE6BFE35CE1A1C1DB4D7A88_AdjustorThunk (void);
extern void MetricId_get_Name_m77C796F0ED1F016FA4E7544052B413E5D050F9A1_AdjustorThunk (void);
extern void MetricId__ctor_mC06CB56F550123B905DB1CF07ACF589FD1B78D10_AdjustorThunk (void);
extern void MetricId_Equals_mB139C11FD4DD1F71F240678724495EA5DE813921_AdjustorThunk (void);
extern void MetricId_Equals_m0EE3289E6E1EB6B2E027E0FC14E6ED2F78D1CD8C_AdjustorThunk (void);
extern void MetricId_GetHashCode_mD58717DF7E335A5A1652CFBF074DE11B9435EB6B_AdjustorThunk (void);
extern void MetricId_ToString_mAEF8B4F7C84541DBB2915779FB804DC44F7FAF90_AdjustorThunk (void);
extern void BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381_AdjustorThunk (void);
extern void BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D_AdjustorThunk (void);
extern void BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB_AdjustorThunk (void);
extern void BaseUnits_WithSeconds_mFD21BAC0D894F823308F0F2D619F94606A4CBADB_AdjustorThunk (void);
extern void BaseUnits_Equals_mDAA4768D7DCB7D50AA930945136ADDA4C80BEDEB_AdjustorThunk (void);
extern void BaseUnits_Equals_m46333FD6C5E022609052AAD645FFBD9C97F7AFD9_AdjustorThunk (void);
extern void BaseUnits_GetHashCode_mE898D17E79859C71E703604A5999791AB6D5EB81_AdjustorThunk (void);
extern void BaseUnits_GetExponent_m1BCF3144E65E04EA6BA9BAA35E6216B3BF064832_AdjustorThunk (void);
extern void BaseUnits_get_NumeratorAndDenominatorDisplayStrings_m965543E1330059B9EB03384A853042532B5B108E_AdjustorThunk (void);
extern void BaseUnits_get_DisplayString_m514319D1EDF3CCBE1E7416D4513236760664BF5D_AdjustorThunk (void);
extern void BaseUnits_ToString_m4F328455C1BF2F8CC616E1AD01E928F5D9100CAD_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[21] = 
{
	{ 0x06000032, MetricId_get_TypeIndex_mB47390ADDA4ED9C9EF66FF29880617017CF5E017_AdjustorThunk },
	{ 0x06000033, MetricId_set_TypeIndex_m35BFB09D6B12975453CFD648862C804D9CEF7706_AdjustorThunk },
	{ 0x06000034, MetricId_get_EnumValue_m670241EB9638DCBB49A2767A6A97CFB99096E232_AdjustorThunk },
	{ 0x06000035, MetricId_set_EnumValue_mE332E6235CFD5A526BE6BFE35CE1A1C1DB4D7A88_AdjustorThunk },
	{ 0x06000036, MetricId_get_Name_m77C796F0ED1F016FA4E7544052B413E5D050F9A1_AdjustorThunk },
	{ 0x06000037, MetricId__ctor_mC06CB56F550123B905DB1CF07ACF589FD1B78D10_AdjustorThunk },
	{ 0x06000039, MetricId_Equals_mB139C11FD4DD1F71F240678724495EA5DE813921_AdjustorThunk },
	{ 0x0600003A, MetricId_Equals_m0EE3289E6E1EB6B2E027E0FC14E6ED2F78D1CD8C_AdjustorThunk },
	{ 0x0600003B, MetricId_GetHashCode_mD58717DF7E335A5A1652CFBF074DE11B9435EB6B_AdjustorThunk },
	{ 0x0600003C, MetricId_ToString_mAEF8B4F7C84541DBB2915779FB804DC44F7FAF90_AdjustorThunk },
	{ 0x06000059, BaseUnits_get_BytesExponent_mE5D600EFB12E76FE429AF434BDA8CC5B5B577381_AdjustorThunk },
	{ 0x0600005A, BaseUnits_get_SecondsExponent_m905E59F6D200DE506E44B39F8F76F0D9519BD44D_AdjustorThunk },
	{ 0x0600005B, BaseUnits__ctor_m2080F099E655C0ACF02ADDEBB9B41491BCCC7EBB_AdjustorThunk },
	{ 0x0600005C, BaseUnits_WithSeconds_mFD21BAC0D894F823308F0F2D619F94606A4CBADB_AdjustorThunk },
	{ 0x0600005D, BaseUnits_Equals_mDAA4768D7DCB7D50AA930945136ADDA4C80BEDEB_AdjustorThunk },
	{ 0x0600005E, BaseUnits_Equals_m46333FD6C5E022609052AAD645FFBD9C97F7AFD9_AdjustorThunk },
	{ 0x0600005F, BaseUnits_GetHashCode_mE898D17E79859C71E703604A5999791AB6D5EB81_AdjustorThunk },
	{ 0x06000060, BaseUnits_GetExponent_m1BCF3144E65E04EA6BA9BAA35E6216B3BF064832_AdjustorThunk },
	{ 0x06000061, BaseUnits_get_NumeratorAndDenominatorDisplayStrings_m965543E1330059B9EB03384A853042532B5B108E_AdjustorThunk },
	{ 0x06000062, BaseUnits_get_DisplayString_m514319D1EDF3CCBE1E7416D4513236760664BF5D_AdjustorThunk },
	{ 0x06000063, BaseUnits_ToString_m4F328455C1BF2F8CC616E1AD01E928F5D9100CAD_AdjustorThunk },
};
static const int32_t s_InvokerIndices[102] = 
{
	5678,
	5678,
	0,
	0,
	0,
	0,
	826,
	4584,
	1209,
	4491,
	4584,
	5678,
	3928,
	3928,
	0,
	5559,
	5678,
	2375,
	4458,
	5678,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	7333,
	8605,
	0,
	5678,
	0,
	2374,
	4414,
	5678,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5678,
	5678,
	5521,
	4457,
	5521,
	4457,
	5559,
	2394,
	0,
	3092,
	3108,
	5521,
	5559,
	5559,
	4491,
	5521,
	4457,
	5521,
	4457,
	5457,
	4391,
	5678,
	5559,
	4491,
	5678,
	5521,
	4457,
	5678,
	8605,
	8605,
	8116,
	7551,
	0,
	8605,
	5678,
	1640,
	5678,
	8605,
	8605,
	5678,
	8210,
	5602,
	5602,
	2432,
	2739,
	3005,
	3108,
	5521,
	4000,
	5445,
	5559,
	5559,
	8605,
	7158,
	8005,
};
static const Il2CppTokenRangePair s_rgctxIndices[6] = 
{
	{ 0x0200000B, { 2, 8 } },
	{ 0x02000016, { 13, 2 } },
	{ 0x0600000F, { 0, 2 } },
	{ 0x0600001F, { 10, 3 } },
	{ 0x06000038, { 15, 3 } },
	{ 0x06000050, { 18, 2 } },
};
extern const uint32_t g_rgctx_EventMetric_1_tFA868A37583453A9D8294A49DDA03CA12EFCDD6A;
extern const uint32_t g_rgctx_EventMetric_1_get_Id_mB4A8EEC51707E92C5674E59AE07D9DE5BEB111DC;
extern const uint32_t g_rgctx_List_1_tA2ABD0D6068C45CA42AA477C5A3A1F6F35F94945;
extern const uint32_t g_rgctx_List_1__ctor_m1D50FA65DA1A94232C0F00D270598B5E2867DDD5;
extern const uint32_t g_rgctx_TValue_t1C1F85FF4625481EF333132C35A48AF540056918;
extern const uint32_t g_rgctx_List_1_get_Count_m3A9CAF7700EE19FA663BB92F76CCE33B3F2BD264;
extern const uint32_t g_rgctx_EventMetric_1_get_MaxNumberOfValues_m98AA7365B74154A18E5A334851A82A6F8876368F;
extern const uint32_t g_rgctx_EventMetric_1_set_WentOverLimit_m83E2C29BC411555EEDF2E073132179C6023774CD;
extern const uint32_t g_rgctx_List_1_Add_m9A0AF12AE9225E94BCF1442B041212AB07B3CDD3;
extern const uint32_t g_rgctx_List_1_Clear_m1A43A07C900E2139782577CCC52CD46C916AE34A;
extern const uint32_t g_rgctx_T_t9E52531ADCB3D9C7381B0B2B2E89351AB5BFEFDA;
extern const uint32_t g_rgctx_EventMetricFactoryImpl_1_t4C6BF9F89520D6A3A9BCFEA701C2CE8E62B032E9;
extern const uint32_t g_rgctx_EventMetricFactoryImpl_1__ctor_m72F222364AA34A22AFE1A6C7D8E12CCBE2098E5C;
extern const uint32_t g_rgctx_Metric_1_set_Value_mDCA68B1C4E86B48C6EB75C1E2F2441509321D611;
extern const uint32_t g_rgctx_Metric_1_get_DefaultValue_mB35C1D696CD363BF389CA608CCD23E242CE7CEAE;
extern const uint32_t g_rgctx_T_t2A5B1407F87C226339ACED50924B9B8848BD05D2;
extern const uint32_t g_rgctx_T_t2A5B1407F87C226339ACED50924B9B8848BD05D2;
extern const Il2CppRGCTXConstrainedData g_rgctx_T_t2A5B1407F87C226339ACED50924B9B8848BD05D2_IConvertible_ToInt32_mDAB0654BDF9809E4E18D8340AE02C63B3CD32725;
extern const uint32_t g_rgctx_List_1_t55CFE0354552D090E56DB64F698B240DBC741BB5;
extern const uint32_t g_rgctx_List_1_get_Item_m977E2EB2E1DFAB64A6D1E6C829BA1A43C4DA337A;
static const Il2CppRGCTXDefinition s_rgctxValues[20] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EventMetric_1_tFA868A37583453A9D8294A49DDA03CA12EFCDD6A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EventMetric_1_get_Id_mB4A8EEC51707E92C5674E59AE07D9DE5BEB111DC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_tA2ABD0D6068C45CA42AA477C5A3A1F6F35F94945 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1__ctor_m1D50FA65DA1A94232C0F00D270598B5E2867DDD5 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_TValue_t1C1F85FF4625481EF333132C35A48AF540056918 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Count_m3A9CAF7700EE19FA663BB92F76CCE33B3F2BD264 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EventMetric_1_get_MaxNumberOfValues_m98AA7365B74154A18E5A334851A82A6F8876368F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EventMetric_1_set_WentOverLimit_m83E2C29BC411555EEDF2E073132179C6023774CD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Add_m9A0AF12AE9225E94BCF1442B041212AB07B3CDD3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_Clear_m1A43A07C900E2139782577CCC52CD46C916AE34A },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t9E52531ADCB3D9C7381B0B2B2E89351AB5BFEFDA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EventMetricFactoryImpl_1_t4C6BF9F89520D6A3A9BCFEA701C2CE8E62B032E9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EventMetricFactoryImpl_1__ctor_m72F222364AA34A22AFE1A6C7D8E12CCBE2098E5C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Metric_1_set_Value_mDCA68B1C4E86B48C6EB75C1E2F2441509321D611 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Metric_1_get_DefaultValue_mB35C1D696CD363BF389CA608CCD23E242CE7CEAE },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t2A5B1407F87C226339ACED50924B9B8848BD05D2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t2A5B1407F87C226339ACED50924B9B8848BD05D2 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_T_t2A5B1407F87C226339ACED50924B9B8848BD05D2_IConvertible_ToInt32_mDAB0654BDF9809E4E18D8340AE02C63B3CD32725 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t55CFE0354552D090E56DB64F698B240DBC741BB5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Item_m977E2EB2E1DFAB64A6D1E6C829BA1A43C4DA337A },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Multiplayer_Tools_NetStats_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Multiplayer_Tools_NetStats_CodeGenModule = 
{
	"Unity.Multiplayer.Tools.NetStats.dll",
	102,
	s_methodPointers,
	21,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	6,
	s_rgctxIndices,
	20,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
