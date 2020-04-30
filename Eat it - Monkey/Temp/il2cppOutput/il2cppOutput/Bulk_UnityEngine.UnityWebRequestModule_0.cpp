#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.ArgumentException
struct ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60;
// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Byte
struct Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149;
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.Double
struct Double_t2011D65DAF7D1FCBE71DD4CBDFA69A8F24643159;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.IO.MemoryStream
struct MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0;
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.InvalidOperationException
struct InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B;
// System.Text.DecoderFallback
struct DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5;
// System.Text.EncoderFallback
struct EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2;
// System.Text.Encoding
struct Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1;
// System.Text.RegularExpressions.FactoryCache
struct FactoryCache_t8BE3083C5F3C2185BA9AE97F4886454CB85C06B9;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t44F4CC962A53B1F37D93579205124A16FD0B1471;
// System.Text.RegularExpressions.Regex
struct Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.UInt16
struct UInt16_t1FF1E02102FB09D5656DF30E5299DD359E497E9B;
// System.Uri
struct Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6;
// System.UriParser
struct UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;

extern RuntimeClass* ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var;
extern RuntimeClass* DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_il2cpp_TypeInfo_var;
extern RuntimeClass* Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var;
extern RuntimeClass* FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0_il2cpp_TypeInfo_var;
extern RuntimeClass* Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var;
extern RuntimeClass* WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral091B0CE42EB0BD96169EA00B16DD938F6D63AC95;
extern String_t* _stringLiteral1C5E5F29CEB079B561835055FFA20C2E0B53F397;
extern String_t* _stringLiteral38263C0B87E5FC0881F12EF855C8F694115D8213;
extern String_t* _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B;
extern String_t* _stringLiteral56F03F5F25FB2048BF4AB5FBBF7B5E3D39A3ECEB;
extern String_t* _stringLiteral61FF81C30AA3C76E78AFEA62B2E3BD1DFA49E854;
extern String_t* _stringLiteral70EE7E18113E0328AAE2B1D5D212C2735F1C00F8;
extern String_t* _stringLiteral7138A51661947B19B5088DA5A2BFEDE2876F49B9;
extern String_t* _stringLiteral81D42CE01525C0213D5284260BDB58819D046FB9;
extern String_t* _stringLiteral986F2ED15C79ED805000ECCD85519810B2DB2A93;
extern String_t* _stringLiteralA58AA001D4152D20F7F8E0809B9CD782BE38A82C;
extern String_t* _stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001;
extern String_t* _stringLiteralCE27CB141098FEB00714E758646BE3E99C185B71;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC;
extern String_t* _stringLiteralF030BBBD32966CDE41037B98A8849C46B76E4BC1;
extern String_t* _stringLiteralF37BF1E2A7C84A010A6E65E2E41A03F1C044F04B;
extern String_t* _stringLiteralF6C97A7F64063CFEE7C2DC2157847204D4DBF093;
extern String_t* _stringLiteralF80B07414273FEB6D1B5EAB1E91186C7CE65DE24;
extern String_t* _stringLiteralF92E777F4341930BAD9B2422283C4680D00DBC06;
extern String_t* _stringLiteralFE5567E8D769550852182CDF69D74BB16DFF8E29;
extern const RuntimeMethod* UnityWebRequest_InternalSetCustomMethod_mE9F0C84C6DCD5412AEDD76280EEC4FB82516EF16_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_InternalSetMethod_m636508AA8E6EF12B3255D8ED108BFF7EB1AB68C9_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_InternalSetUrl_m2E2C837A6F32065CAAAF6EFA7D0237C9E206689A_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_set_method_mF2DAC86EB05D65B9BCB52056B7CBB2C1AD87EEC6_RuntimeMethod_var;
extern const RuntimeMethod* UnityWebRequest_set_uploadHandler_m7B33656584914FB3F6FB0FF73C08F671262724A1_RuntimeMethod_var;
extern const RuntimeMethod* WebRequestUtils_MakeInitialUrl_m446CCE4EFB276BE27A9380D55B9E704D01107B83_RuntimeMethod_var;
extern const uint32_t CertificateHandler_Dispose_m9C71BAA51760FDF05AB999B6AB6E6BC71BCB8CA0_MetadataUsageId;
extern const uint32_t DownloadHandler_Dispose_m7478E72B2DBA4B55FAA25F7A1975A13BA5891D4B_MetadataUsageId;
extern const uint32_t UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18_MetadataUsageId;
extern const uint32_t UnityWebRequest_InternalDestroy_mF5D7484808AEAE24A43B678614D257FBF885026B_MetadataUsageId;
extern const uint32_t UnityWebRequest_InternalSetCustomMethod_mE9F0C84C6DCD5412AEDD76280EEC4FB82516EF16_MetadataUsageId;
extern const uint32_t UnityWebRequest_InternalSetMethod_m636508AA8E6EF12B3255D8ED108BFF7EB1AB68C9_MetadataUsageId;
extern const uint32_t UnityWebRequest_InternalSetUrl_m2E2C837A6F32065CAAAF6EFA7D0237C9E206689A_MetadataUsageId;
extern const uint32_t UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E_MetadataUsageId;
extern const uint32_t UnityWebRequest_set_method_mF2DAC86EB05D65B9BCB52056B7CBB2C1AD87EEC6_MetadataUsageId;
extern const uint32_t UnityWebRequest_set_uploadHandler_m7B33656584914FB3F6FB0FF73C08F671262724A1_MetadataUsageId;
extern const uint32_t UnityWebRequest_set_url_mA698FD94C447FF7C1C429D50C2EBAEEDD473007D_MetadataUsageId;
extern const uint32_t UploadHandler_Dispose_m9BBE8D7D2BBAAC2DE84B52BADA0B79CEA6F2DAB2_MetadataUsageId;
extern const uint32_t WWWForm_get_DefaultEncoding_m13BB72339201269AB257B275B20A5A35B233BC3F_MetadataUsageId;
extern const uint32_t WWWTranscoder_Decode_m2533830DAAAE6F33AA6EE85A5BF63C96F5D631D4_MetadataUsageId;
extern const uint32_t WWWTranscoder_URLDecode_m591A567154B1B8737ECBFE065AF4FCA59217F5D8_MetadataUsageId;
extern const uint32_t WWWTranscoder__cctor_m3436CCA2D8667A6BCF6981B6573EF048BDA49F51_MetadataUsageId;
extern const uint32_t WebRequestUtils_MakeInitialUrl_m446CCE4EFB276BE27A9380D55B9E704D01107B83_MetadataUsageId;
extern const uint32_t WebRequestUtils_MakeUriString_m5693EA04230335B9611278EFC189BD58339D01E4_MetadataUsageId;
extern const uint32_t WebRequestUtils_RedirectTo_m8AC7C0BFC562550118F6FF4AE218898717E922C1_MetadataUsageId;
extern const uint32_t WebRequestUtils_URLDecode_m3F75FA29F50FB340B93815988517E9208C52EE62_MetadataUsageId;
extern const uint32_t WebRequestUtils__cctor_m31EB3E45EC49AB6B33C7A10F79F1CD4FF2BE715A_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke;;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke;;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com;;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke;;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke;;

struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;


#ifndef U3CMODULEU3E_T2FBFFC67F8D6B1FA13284515F9BBD8C9333B5C86_H
#define U3CMODULEU3E_T2FBFFC67F8D6B1FA13284515F9BBD8C9333B5C86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2FBFFC67F8D6B1FA13284515F9BBD8C9333B5C86 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2FBFFC67F8D6B1FA13284515F9BBD8C9333B5C86_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#define STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_tCFD27E43C18381861212C0288CACF467FB602009  : public RuntimeObject
{
public:

public:
};

struct Stream_tCFD27E43C18381861212C0288CACF467FB602009_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_tCFD27E43C18381861212C0288CACF467FB602009 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(Stream_tCFD27E43C18381861212C0288CACF467FB602009_StaticFields, ___Null_0)); }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 * get_Null_0() const { return ___Null_0; }
	inline Stream_tCFD27E43C18381861212C0288CACF467FB602009 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(Stream_tCFD27E43C18381861212C0288CACF467FB602009 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_TCFD27E43C18381861212C0288CACF467FB602009_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#define ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___decoder_fallback_3)); }
	inline DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t4AD58720BC0D6BB225C7E80B69930516E3A7CFF5 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___encoder_fallback_4)); }
	inline EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t0A3013798B4707F02F09350FC4D831B0221C48D2 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
#define URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.String System.Uri::cachedLocalPath
	String_t* ___cachedLocalPath_15;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_16;
	// System.UriParser System.Uri::parser
	UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * ___parser_30;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedLocalPath_15() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedLocalPath_15)); }
	inline String_t* get_cachedLocalPath_15() const { return ___cachedLocalPath_15; }
	inline String_t** get_address_of_cachedLocalPath_15() { return &___cachedLocalPath_15; }
	inline void set_cachedLocalPath_15(String_t* value)
	{
		___cachedLocalPath_15 = value;
		Il2CppCodeGenWriteBarrier((&___cachedLocalPath_15), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_16() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___cachedHashCode_16)); }
	inline int32_t get_cachedHashCode_16() const { return ___cachedHashCode_16; }
	inline int32_t* get_address_of_cachedHashCode_16() { return &___cachedHashCode_16; }
	inline void set_cachedHashCode_16(int32_t value)
	{
		___cachedHashCode_16 = value;
	}

	inline static int32_t get_offset_of_parser_30() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E, ___parser_30)); }
	inline UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * get_parser_30() const { return ___parser_30; }
	inline UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A ** get_address_of_parser_30() { return &___parser_30; }
	inline void set_parser_30(UriParser_tD4D7B8A484DAFD6458BBD9AAE2828EBFA77C6D2A * value)
	{
		___parser_30 = value;
		Il2CppCodeGenWriteBarrier((&___parser_30), value);
	}
};

struct Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_17;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_18;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_19;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_20;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_21;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_22;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_23;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_24;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_25;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_26;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_27;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_28;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* ___schemes_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map12
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map12_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map13
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map13_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map14_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map15_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map16_35;

public:
	inline static int32_t get_offset_of_hexUpperChars_17() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___hexUpperChars_17)); }
	inline String_t* get_hexUpperChars_17() const { return ___hexUpperChars_17; }
	inline String_t** get_address_of_hexUpperChars_17() { return &___hexUpperChars_17; }
	inline void set_hexUpperChars_17(String_t* value)
	{
		___hexUpperChars_17 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_17), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_18() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___SchemeDelimiter_18)); }
	inline String_t* get_SchemeDelimiter_18() const { return ___SchemeDelimiter_18; }
	inline String_t** get_address_of_SchemeDelimiter_18() { return &___SchemeDelimiter_18; }
	inline void set_SchemeDelimiter_18(String_t* value)
	{
		___SchemeDelimiter_18 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_19() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeFile_19)); }
	inline String_t* get_UriSchemeFile_19() const { return ___UriSchemeFile_19; }
	inline String_t** get_address_of_UriSchemeFile_19() { return &___UriSchemeFile_19; }
	inline void set_UriSchemeFile_19(String_t* value)
	{
		___UriSchemeFile_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_20() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeFtp_20)); }
	inline String_t* get_UriSchemeFtp_20() const { return ___UriSchemeFtp_20; }
	inline String_t** get_address_of_UriSchemeFtp_20() { return &___UriSchemeFtp_20; }
	inline void set_UriSchemeFtp_20(String_t* value)
	{
		___UriSchemeFtp_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_21() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeGopher_21)); }
	inline String_t* get_UriSchemeGopher_21() const { return ___UriSchemeGopher_21; }
	inline String_t** get_address_of_UriSchemeGopher_21() { return &___UriSchemeGopher_21; }
	inline void set_UriSchemeGopher_21(String_t* value)
	{
		___UriSchemeGopher_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_22() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeHttp_22)); }
	inline String_t* get_UriSchemeHttp_22() const { return ___UriSchemeHttp_22; }
	inline String_t** get_address_of_UriSchemeHttp_22() { return &___UriSchemeHttp_22; }
	inline void set_UriSchemeHttp_22(String_t* value)
	{
		___UriSchemeHttp_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_23() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeHttps_23)); }
	inline String_t* get_UriSchemeHttps_23() const { return ___UriSchemeHttps_23; }
	inline String_t** get_address_of_UriSchemeHttps_23() { return &___UriSchemeHttps_23; }
	inline void set_UriSchemeHttps_23(String_t* value)
	{
		___UriSchemeHttps_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_24() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeMailto_24)); }
	inline String_t* get_UriSchemeMailto_24() const { return ___UriSchemeMailto_24; }
	inline String_t** get_address_of_UriSchemeMailto_24() { return &___UriSchemeMailto_24; }
	inline void set_UriSchemeMailto_24(String_t* value)
	{
		___UriSchemeMailto_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_25() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNews_25)); }
	inline String_t* get_UriSchemeNews_25() const { return ___UriSchemeNews_25; }
	inline String_t** get_address_of_UriSchemeNews_25() { return &___UriSchemeNews_25; }
	inline void set_UriSchemeNews_25(String_t* value)
	{
		___UriSchemeNews_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_26() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNntp_26)); }
	inline String_t* get_UriSchemeNntp_26() const { return ___UriSchemeNntp_26; }
	inline String_t** get_address_of_UriSchemeNntp_26() { return &___UriSchemeNntp_26; }
	inline void set_UriSchemeNntp_26(String_t* value)
	{
		___UriSchemeNntp_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_27() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNetPipe_27)); }
	inline String_t* get_UriSchemeNetPipe_27() const { return ___UriSchemeNetPipe_27; }
	inline String_t** get_address_of_UriSchemeNetPipe_27() { return &___UriSchemeNetPipe_27; }
	inline void set_UriSchemeNetPipe_27(String_t* value)
	{
		___UriSchemeNetPipe_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_27), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_28() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___UriSchemeNetTcp_28)); }
	inline String_t* get_UriSchemeNetTcp_28() const { return ___UriSchemeNetTcp_28; }
	inline String_t** get_address_of_UriSchemeNetTcp_28() { return &___UriSchemeNetTcp_28; }
	inline void set_UriSchemeNetTcp_28(String_t* value)
	{
		___UriSchemeNetTcp_28 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_28), value);
	}

	inline static int32_t get_offset_of_schemes_29() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___schemes_29)); }
	inline UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* get_schemes_29() const { return ___schemes_29; }
	inline UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6** get_address_of_schemes_29() { return &___schemes_29; }
	inline void set_schemes_29(UriSchemeU5BU5D_tA21320F0E7A6C8B70FD19E286075856BFB5DB2E6* value)
	{
		___schemes_29 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_31() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map12_31)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map12_31() const { return ___U3CU3Ef__switchU24map12_31; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map12_31() { return &___U3CU3Ef__switchU24map12_31; }
	inline void set_U3CU3Ef__switchU24map12_31(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map12_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_32() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map13_32)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map13_32() const { return ___U3CU3Ef__switchU24map13_32; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map13_32() { return &___U3CU3Ef__switchU24map13_32; }
	inline void set_U3CU3Ef__switchU24map13_32(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map13_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_33() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map14_33)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map14_33() const { return ___U3CU3Ef__switchU24map14_33; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map14_33() { return &___U3CU3Ef__switchU24map14_33; }
	inline void set_U3CU3Ef__switchU24map14_33(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map14_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_34() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map15_34)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map15_34() const { return ___U3CU3Ef__switchU24map15_34; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map15_34() { return &___U3CU3Ef__switchU24map15_34; }
	inline void set_U3CU3Ef__switchU24map15_34(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map15_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_35() { return static_cast<int32_t>(offsetof(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_StaticFields, ___U3CU3Ef__switchU24map16_35)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map16_35() const { return ___U3CU3Ef__switchU24map16_35; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map16_35() { return &___U3CU3Ef__switchU24map16_35; }
	inline void set_U3CU3Ef__switchU24map16_35(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map16_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_TF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef WWWFORM_T8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24_H
#define WWWFORM_T8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWForm
struct  WWWForm_t8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWFORM_T8D5ED7CAC180C102E377B21A70CC6A9AD5EAAD24_H
#ifndef WWWTRANSCODER_T0B24F1F17629756E6464A925870CC39236F39C61_H
#define WWWTRANSCODER_T0B24F1F17629756E6464A925870CC39236F39C61_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WWWTranscoder
struct  WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61  : public RuntimeObject
{
public:

public:
};

struct WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields
{
public:
	// System.Byte[] UnityEngine.WWWTranscoder::ucHexChars
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___ucHexChars_0;
	// System.Byte[] UnityEngine.WWWTranscoder::lcHexChars
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___lcHexChars_1;
	// System.Byte UnityEngine.WWWTranscoder::urlEscapeChar
	uint8_t ___urlEscapeChar_2;
	// System.Byte[] UnityEngine.WWWTranscoder::urlSpace
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___urlSpace_3;
	// System.Byte[] UnityEngine.WWWTranscoder::dataSpace
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___dataSpace_4;
	// System.Byte[] UnityEngine.WWWTranscoder::urlForbidden
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___urlForbidden_5;
	// System.Byte UnityEngine.WWWTranscoder::qpEscapeChar
	uint8_t ___qpEscapeChar_6;
	// System.Byte[] UnityEngine.WWWTranscoder::qpSpace
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___qpSpace_7;
	// System.Byte[] UnityEngine.WWWTranscoder::qpForbidden
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___qpForbidden_8;

public:
	inline static int32_t get_offset_of_ucHexChars_0() { return static_cast<int32_t>(offsetof(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields, ___ucHexChars_0)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_ucHexChars_0() const { return ___ucHexChars_0; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_ucHexChars_0() { return &___ucHexChars_0; }
	inline void set_ucHexChars_0(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___ucHexChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___ucHexChars_0), value);
	}

	inline static int32_t get_offset_of_lcHexChars_1() { return static_cast<int32_t>(offsetof(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields, ___lcHexChars_1)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_lcHexChars_1() const { return ___lcHexChars_1; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_lcHexChars_1() { return &___lcHexChars_1; }
	inline void set_lcHexChars_1(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___lcHexChars_1 = value;
		Il2CppCodeGenWriteBarrier((&___lcHexChars_1), value);
	}

	inline static int32_t get_offset_of_urlEscapeChar_2() { return static_cast<int32_t>(offsetof(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields, ___urlEscapeChar_2)); }
	inline uint8_t get_urlEscapeChar_2() const { return ___urlEscapeChar_2; }
	inline uint8_t* get_address_of_urlEscapeChar_2() { return &___urlEscapeChar_2; }
	inline void set_urlEscapeChar_2(uint8_t value)
	{
		___urlEscapeChar_2 = value;
	}

	inline static int32_t get_offset_of_urlSpace_3() { return static_cast<int32_t>(offsetof(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields, ___urlSpace_3)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_urlSpace_3() const { return ___urlSpace_3; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_urlSpace_3() { return &___urlSpace_3; }
	inline void set_urlSpace_3(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___urlSpace_3 = value;
		Il2CppCodeGenWriteBarrier((&___urlSpace_3), value);
	}

	inline static int32_t get_offset_of_dataSpace_4() { return static_cast<int32_t>(offsetof(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields, ___dataSpace_4)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_dataSpace_4() const { return ___dataSpace_4; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_dataSpace_4() { return &___dataSpace_4; }
	inline void set_dataSpace_4(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___dataSpace_4 = value;
		Il2CppCodeGenWriteBarrier((&___dataSpace_4), value);
	}

	inline static int32_t get_offset_of_urlForbidden_5() { return static_cast<int32_t>(offsetof(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields, ___urlForbidden_5)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_urlForbidden_5() const { return ___urlForbidden_5; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_urlForbidden_5() { return &___urlForbidden_5; }
	inline void set_urlForbidden_5(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___urlForbidden_5 = value;
		Il2CppCodeGenWriteBarrier((&___urlForbidden_5), value);
	}

	inline static int32_t get_offset_of_qpEscapeChar_6() { return static_cast<int32_t>(offsetof(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields, ___qpEscapeChar_6)); }
	inline uint8_t get_qpEscapeChar_6() const { return ___qpEscapeChar_6; }
	inline uint8_t* get_address_of_qpEscapeChar_6() { return &___qpEscapeChar_6; }
	inline void set_qpEscapeChar_6(uint8_t value)
	{
		___qpEscapeChar_6 = value;
	}

	inline static int32_t get_offset_of_qpSpace_7() { return static_cast<int32_t>(offsetof(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields, ___qpSpace_7)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_qpSpace_7() const { return ___qpSpace_7; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_qpSpace_7() { return &___qpSpace_7; }
	inline void set_qpSpace_7(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___qpSpace_7 = value;
		Il2CppCodeGenWriteBarrier((&___qpSpace_7), value);
	}

	inline static int32_t get_offset_of_qpForbidden_8() { return static_cast<int32_t>(offsetof(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields, ___qpForbidden_8)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_qpForbidden_8() const { return ___qpForbidden_8; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_qpForbidden_8() { return &___qpForbidden_8; }
	inline void set_qpForbidden_8(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___qpForbidden_8 = value;
		Il2CppCodeGenWriteBarrier((&___qpForbidden_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WWWTRANSCODER_T0B24F1F17629756E6464A925870CC39236F39C61_H
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef WEBREQUESTUTILS_TBE8F8607E3A9633419968F6AF2F706A029AE1296_H
#define WEBREQUESTUTILS_TBE8F8607E3A9633419968F6AF2F706A029AE1296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_StaticFields, ___domainRegex_0)); }
	inline Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_TBE8F8607E3A9633419968F6AF2F706A029AE1296_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#define BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t4C3393E6E7EAD06B53234C05564190D9A2D7B149, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T4C3393E6E7EAD06B53234C05564190D9A2D7B149_H
#ifndef CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#define CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T2AF4E0DF8B57497BF49A6A8822F574113ADA8432_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef MEMORYSTREAM_TA2A6655CF733913D13B7AB22E4FF081CB92F5FF0_H
#define MEMORYSTREAM_TA2A6655CF733913D13B7AB22E4FF081CB92F5FF0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0  : public Stream_tCFD27E43C18381861212C0288CACF467FB602009
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_1;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_2;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_3;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_4;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___internalBuffer_5;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_6;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_7;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_8;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_9;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_10;

public:
	inline static int32_t get_offset_of_canWrite_1() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___canWrite_1)); }
	inline bool get_canWrite_1() const { return ___canWrite_1; }
	inline bool* get_address_of_canWrite_1() { return &___canWrite_1; }
	inline void set_canWrite_1(bool value)
	{
		___canWrite_1 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_2() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___allowGetBuffer_2)); }
	inline bool get_allowGetBuffer_2() const { return ___allowGetBuffer_2; }
	inline bool* get_address_of_allowGetBuffer_2() { return &___allowGetBuffer_2; }
	inline void set_allowGetBuffer_2(bool value)
	{
		___allowGetBuffer_2 = value;
	}

	inline static int32_t get_offset_of_capacity_3() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___capacity_3)); }
	inline int32_t get_capacity_3() const { return ___capacity_3; }
	inline int32_t* get_address_of_capacity_3() { return &___capacity_3; }
	inline void set_capacity_3(int32_t value)
	{
		___capacity_3 = value;
	}

	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___length_4)); }
	inline int32_t get_length_4() const { return ___length_4; }
	inline int32_t* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(int32_t value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_5() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___internalBuffer_5)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_internalBuffer_5() const { return ___internalBuffer_5; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_internalBuffer_5() { return &___internalBuffer_5; }
	inline void set_internalBuffer_5(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___internalBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_5), value);
	}

	inline static int32_t get_offset_of_initialIndex_6() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___initialIndex_6)); }
	inline int32_t get_initialIndex_6() const { return ___initialIndex_6; }
	inline int32_t* get_address_of_initialIndex_6() { return &___initialIndex_6; }
	inline void set_initialIndex_6(int32_t value)
	{
		___initialIndex_6 = value;
	}

	inline static int32_t get_offset_of_expandable_7() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___expandable_7)); }
	inline bool get_expandable_7() const { return ___expandable_7; }
	inline bool* get_address_of_expandable_7() { return &___expandable_7; }
	inline void set_expandable_7(bool value)
	{
		___expandable_7 = value;
	}

	inline static int32_t get_offset_of_streamClosed_8() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___streamClosed_8)); }
	inline bool get_streamClosed_8() const { return ___streamClosed_8; }
	inline bool* get_address_of_streamClosed_8() { return &___streamClosed_8; }
	inline void set_streamClosed_8(bool value)
	{
		___streamClosed_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___position_9)); }
	inline int32_t get_position_9() const { return ___position_9; }
	inline int32_t* get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(int32_t value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_10() { return static_cast<int32_t>(offsetof(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0, ___dirty_bytes_10)); }
	inline int32_t get_dirty_bytes_10() const { return ___dirty_bytes_10; }
	inline int32_t* get_address_of_dirty_bytes_10() { return &___dirty_bytes_10; }
	inline void set_dirty_bytes_10(int32_t value)
	{
		___dirty_bytes_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_TA2A6655CF733913D13B7AB22E4FF081CB92F5FF0_H
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#define SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#define ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T62D3E79ABA478354E3BFBA10C9BF16549AF82D60_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * ___data_8;

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
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
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

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_8)); }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * get_data_8() const { return ___data_8; }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T_H
#ifndef FORMATEXCEPTION_T6148832BF22FDB9F1FB5BE067694E8326F42D592_H
#define FORMATEXCEPTION_T6148832BF22FDB9F1FB5BE067694E8326F42D592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T6148832BF22FDB9F1FB5BE067694E8326F42D592_H
#ifndef INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#define INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_TCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_H
#ifndef REGEXOPTIONS_T6DDB25DC8ABB8CFC65500D99B4CDAFF3B26D0624_H
#define REGEXOPTIONS_T6DDB25DC8ABB8CFC65500D99B4CDAFF3B26D0624_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t6DDB25DC8ABB8CFC65500D99B4CDAFF3B26D0624 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t6DDB25DC8ABB8CFC65500D99B4CDAFF3B26D0624, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEXOPTIONS_T6DDB25DC8ABB8CFC65500D99B4CDAFF3B26D0624_H
#ifndef URIKIND_T602575BB5018420CCE336A35E0D95B1E18F13069_H
#define URIKIND_T602575BB5018420CCE336A35E0D95B1E18F13069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t602575BB5018420CCE336A35E0D95B1E18F13069 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriKind_t602575BB5018420CCE336A35E0D95B1E18F13069, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIKIND_T602575BB5018420CCE336A35E0D95B1E18F13069_H
#ifndef ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#define ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T304C51ABED8AE734CC8DDDFE13013D8D5A44641D_H
#ifndef CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#define CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_TBD070BF4150A44AB482FD36EA3882C363117E8C0_H
#ifndef DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#define DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T4A7802ADC97024B469C87FA454B6973951980EE9_H
#ifndef UNITYWEBREQUESTERROR_T0FD8E16D965B4EA8BECD6C42C6BFEA8506E4C327_H
#define UNITYWEBREQUESTERROR_T0FD8E16D965B4EA8BECD6C42C6BFEA8506E4C327_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError
struct  UnityWebRequestError_t0FD8E16D965B4EA8BECD6C42C6BFEA8506E4C327 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestError::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityWebRequestError_t0FD8E16D965B4EA8BECD6C42C6BFEA8506E4C327, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYWEBREQUESTERROR_T0FD8E16D965B4EA8BECD6C42C6BFEA8506E4C327_H
#ifndef UNITYWEBREQUESTMETHOD_T704B7938E8655E8FEDDE169AD54B962166142118_H
#define UNITYWEBREQUESTMETHOD_T704B7938E8655E8FEDDE169AD54B962166142118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod
struct  UnityWebRequestMethod_t704B7938E8655E8FEDDE169AD54B962166142118 
{
public:
	// System.Int32 UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityWebRequestMethod_t704B7938E8655E8FEDDE169AD54B962166142118, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYWEBREQUESTMETHOD_T704B7938E8655E8FEDDE169AD54B962166142118_H
#ifndef UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#define UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T24F4097D30A1E7C689D8881A27F251B4741601E4_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef REGEX_T829CB33C547AB824BFEAFF320BB8F59B3A76620B_H
#define REGEX_T829CB33C547AB824BFEAFF320BB8F59B3A76620B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::machineFactory
	RuntimeObject* ___machineFactory_1;
	// System.Collections.IDictionary System.Text.RegularExpressions.Regex::mapping
	RuntimeObject* ___mapping_2;
	// System.Int32 System.Text.RegularExpressions.Regex::group_count
	int32_t ___group_count_3;
	// System.Int32 System.Text.RegularExpressions.Regex::gap
	int32_t ___gap_4;
	// System.String[] System.Text.RegularExpressions.Regex::group_names
	StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* ___group_names_5;
	// System.Int32[] System.Text.RegularExpressions.Regex::group_numbers
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___group_numbers_6;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_7;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_8;

public:
	inline static int32_t get_offset_of_machineFactory_1() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___machineFactory_1)); }
	inline RuntimeObject* get_machineFactory_1() const { return ___machineFactory_1; }
	inline RuntimeObject** get_address_of_machineFactory_1() { return &___machineFactory_1; }
	inline void set_machineFactory_1(RuntimeObject* value)
	{
		___machineFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&___machineFactory_1), value);
	}

	inline static int32_t get_offset_of_mapping_2() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___mapping_2)); }
	inline RuntimeObject* get_mapping_2() const { return ___mapping_2; }
	inline RuntimeObject** get_address_of_mapping_2() { return &___mapping_2; }
	inline void set_mapping_2(RuntimeObject* value)
	{
		___mapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_2), value);
	}

	inline static int32_t get_offset_of_group_count_3() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___group_count_3)); }
	inline int32_t get_group_count_3() const { return ___group_count_3; }
	inline int32_t* get_address_of_group_count_3() { return &___group_count_3; }
	inline void set_group_count_3(int32_t value)
	{
		___group_count_3 = value;
	}

	inline static int32_t get_offset_of_gap_4() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___gap_4)); }
	inline int32_t get_gap_4() const { return ___gap_4; }
	inline int32_t* get_address_of_gap_4() { return &___gap_4; }
	inline void set_gap_4(int32_t value)
	{
		___gap_4 = value;
	}

	inline static int32_t get_offset_of_group_names_5() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___group_names_5)); }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* get_group_names_5() const { return ___group_names_5; }
	inline StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B** get_address_of_group_names_5() { return &___group_names_5; }
	inline void set_group_names_5(StringU5BU5D_t632E9CB8D244841312F333CBF60404AFA46E0B3B* value)
	{
		___group_names_5 = value;
		Il2CppCodeGenWriteBarrier((&___group_names_5), value);
	}

	inline static int32_t get_offset_of_group_numbers_6() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___group_numbers_6)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_group_numbers_6() const { return ___group_numbers_6; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_group_numbers_6() { return &___group_numbers_6; }
	inline void set_group_numbers_6(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___group_numbers_6 = value;
		Il2CppCodeGenWriteBarrier((&___group_numbers_6), value);
	}

	inline static int32_t get_offset_of_pattern_7() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___pattern_7)); }
	inline String_t* get_pattern_7() const { return ___pattern_7; }
	inline String_t** get_address_of_pattern_7() { return &___pattern_7; }
	inline void set_pattern_7(String_t* value)
	{
		___pattern_7 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_7), value);
	}

	inline static int32_t get_offset_of_roptions_8() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B, ___roptions_8)); }
	inline int32_t get_roptions_8() const { return ___roptions_8; }
	inline int32_t* get_address_of_roptions_8() { return &___roptions_8; }
	inline void set_roptions_8(int32_t value)
	{
		___roptions_8 = value;
	}
};

struct Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B_StaticFields
{
public:
	// System.Text.RegularExpressions.FactoryCache System.Text.RegularExpressions.Regex::cache
	FactoryCache_t8BE3083C5F3C2185BA9AE97F4886454CB85C06B9 * ___cache_0;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B_StaticFields, ___cache_0)); }
	inline FactoryCache_t8BE3083C5F3C2185BA9AE97F4886454CB85C06B9 * get_cache_0() const { return ___cache_0; }
	inline FactoryCache_t8BE3083C5F3C2185BA9AE97F4886454CB85C06B9 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(FactoryCache_t8BE3083C5F3C2185BA9AE97F4886454CB85C06B9 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T829CB33C547AB824BFEAFF320BB8F59B3A76620B_H
#ifndef DOWNLOADHANDLERBUFFER_TF6A73B82C9EC807D36B904A58E1DF2DDA696B255_H
#define DOWNLOADHANDLERBUFFER_TF6A73B82C9EC807D36B904A58E1DF2DDA696B255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandlerBuffer
struct  DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255  : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshaled_pinvoke : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshaled_com : public DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
};
#endif // DOWNLOADHANDLERBUFFER_TF6A73B82C9EC807D36B904A58E1DF2DDA696B255_H
#ifndef UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#define UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
#endif // UNITYWEBREQUEST_T9120F5A2C7D43B936B49C0B7E4CA54C822689129_H
#ifndef UNITYWEBREQUESTASYNCOPERATION_T726E134F16701A2671D40BEBE22110DC57156353_H
#define UNITYWEBREQUESTASYNCOPERATION_T726E134F16701A2671D40BEBE22110DC57156353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};
#endif // UNITYWEBREQUESTASYNCOPERATION_T726E134F16701A2671D40BEBE22110DC57156353_H
#ifndef ACTION_1_TCBF754C290FAE894631BED8FD56E9E22C4C187F9_H
#define ACTION_1_TCBF754C290FAE894631BED8FD56E9E22C4C187F9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.AsyncOperation>
struct  Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_TCBF754C290FAE894631BED8FD56E9E22C4C187F9_H
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};

extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke(const DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9& unmarshaled, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_back(const DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke& marshaled, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9& unmarshaled);
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_cleanup(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke& marshaled);
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke(const UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4& unmarshaled, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke& marshaled);
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_back(const UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke& marshaled, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4& unmarshaled);
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_cleanup(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke& marshaled);
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke(const CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0& unmarshaled, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke& marshaled);
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_back(const CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke& marshaled, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0& unmarshaled);
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_cleanup(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke& marshaled);
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_com(const DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9& unmarshaled, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com& marshaled);
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_com_back(const DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com& marshaled, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9& unmarshaled);
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_com_cleanup(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com& marshaled);
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_com(const UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4& unmarshaled, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com& marshaled);
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_com_back(const UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com& marshaled, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4& unmarshaled);
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_com_cleanup(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com& marshaled);
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_com(const CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0& unmarshaled, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com& marshaled);
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_com_back(const CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com& marshaled, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0& unmarshaled);
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_com_cleanup(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com& marshaled);
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke(const UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129& unmarshaled, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke& marshaled);
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_back(const UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke& marshaled, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129& unmarshaled);
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_cleanup(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke& marshaled);
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_com(const UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129& unmarshaled, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com& marshaled);
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_com_back(const UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com& marshaled, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129& unmarshaled);
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_com_cleanup(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com& marshaled);


// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m9C71BAA51760FDF05AB999B6AB6E6BC71BCB8CA0 (CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
extern "C" IL2CPP_METHOD_ATTR void Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mDA2D3B8121240D007DB220F422397AEBB37CEE91 (intptr_t p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.CertificateHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Release_m8D680D11AF8B070587DA5C73E2AE652208BDA90A (CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_m7478E72B2DBA4B55FAA25F7A1975A13BA5891D4B (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Release_m913DA503E4183F3323A3D0121FFC978D0F220D5D (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m39F80F1C9B379B0D0362DF9264DE42604BDB24E0 (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_m661B598DF8BD7BF86374FD84C52C8AEA8FA7BEF6 (DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
extern "C" IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_m39E26BEA64B617123CEF559999C8352CA9FA5137 (DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 * ___obj0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* DownloadHandlerBuffer_InternalGetData_m9266395B691394754B68543A2FF2F19566C5ABBF (DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* DownloadHandler_InternalGetByteArray_mD6D13BFFBF2F56415E10FFEFDC4A68FE29D6D4FD (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___dh0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
extern "C" IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m98363C34C71AA034B47FA64589711B6F0AEF6698 (const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_m644CC3C1C737838385F0EC9523A8930E696A9309 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_url_mA698FD94C447FF7C1C429D50C2EBAEEDD473007D (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_mF2DAC86EB05D65B9BCB52056B7CBB2C1AD87EEC6 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m7B33656584914FB3F6FB0FF73C08F671262724A1 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_mF2C9BD010E5B32FF9F57C2EB4A9A0C8D0289CA7E (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Release_mD168D309DCE6696163B3357FA21047689D1A7D74 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_mA888301C47844E383DEC96D88CAD6CB8D9E7B9FA (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_mC176753B8AFBB40B69FAD7F1E2B2711CA5D6AA71 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_m8609E1213309D1796E00860ECA9228F6454114AE (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_m0E54EE2A704090B2C2F1F3C90D30A47E3BF2B5C9 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_mF5D7484808AEAE24A43B678614D257FBF885026B (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C" IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m5090ACD12C559AD47AA4FDF5284A0E91A307E048 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3BE68E08A94D92D7076F49CB5196019E6E5E17AA (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C" IL2CPP_METHOD_ATTR DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_mE4A39A3A06DB4450DA49972254B4498A5F8F69DE (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
extern "C" IL2CPP_METHOD_ATTR UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * UnityWebRequest_get_uploadHandler_mB23A35C2412258E44538F37AA540421C95E69A5C (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Dispose_m9BBE8D7D2BBAAC2DE84B52BADA0B79CEA6F2DAB2 (UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m98EFCAC30D637479DC0DC45CFD8A15D402328F99 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
extern "C" IL2CPP_METHOD_ATTR CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * UnityWebRequest_get_certificateHandler_mD3C46D07991190373A7144A6732E390FFBE6DF00 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
extern "C" IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_BeginWebRequest_m1EF3612D316F7924F6E40D63DD3B0D0118C50CC0 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_m07869D44180E2A93042A18260FA5A2BB934AC42F (UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * __this, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_mD7583537BBC7111555FF73846D120103D2563342 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9 (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_mEE55FF0E071E784318B8C2110E3A3688BF4661CB (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, int32_t ___methodType0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m92A1DDF2ADFFF8AEE6B1A7FAE384743C31F9E01D (int32_t ___err0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_mC818FAC0FD8B91FD454C6DFBF7561EEE2D0BA4F4 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___customMethodName0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mE11AFBE023524E785D23831B75C7BE0B74864C02 (String_t* p0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533 (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::ToUpper()
extern "C" IL2CPP_METHOD_ATTR String_t* String_ToUpper_mF7120C9984AE1D1387563419E794CE9AD2663EF6 (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_m636508AA8E6EF12B3255D8ED108BFF7EB1AB68C9 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, int32_t ___methodType0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_mE9F0C84C6DCD5412AEDD76280EEC4FB82516EF16 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___customMethodName0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::GetUrl()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetUrl_m54AFB82BFB0CFD276363E9EC03E2ED3CB89A45CB (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeInitialUrl_m446CCE4EFB276BE27A9380D55B9E704D01107B83 (String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_m2E2C837A6F32065CAAAF6EFA7D0237C9E206689A (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_mED007912E89AA114D1A3D6905586116F74C8D774 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_m046EF4089035441F661AED13F703024DEE030525 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___uh0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_mDE4E6137C34A90754C41B3A0B7B303135771EEDD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___dh0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m2134187D8FB07FBAEA2CE23BFCEB13FD94261A9A (DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m0D2F8F3E1202EF4256D17E91B95DB6CC673FC8D6 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___downloadHandler2, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___uploadHandler3, const RuntimeMethod* method);
// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AsyncOperation__ctor_mEEE6114B72B8807F4AA6FF48FA79E4EFE480293F (AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Release_m1723A22438AF0A7BE616D512E54190D9CE0EC3C4 (UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C" IL2CPP_METHOD_ATTR Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * Encoding_get_ASCII_mD1DE27D92F912DA7E0F095A206F6A9CD2489D461 (const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* WWWTranscoder_Decode_m2533830DAAAE6F33AA6EE85A5BF63C96F5D631D4 (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___space2, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_mBAF8EAD02F4FC869EFCF825C3BD26E40B6892E3E (MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_m268C2A9B31CCF4D81E7BEEF843DF5D477ECA9958 (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array0, int32_t ___index1, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___comperand2, const RuntimeMethod* method);
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_mD417CA540CFBE045FCE32959CD3443EB9C8C7423 (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___b0, int32_t ___offset1, const RuntimeMethod* method);
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
extern "C" IL2CPP_METHOD_ATTR Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * WWWForm_get_DefaultEncoding_m13BB72339201269AB257B275B20A5A35B233BC3F (const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m37247BEBAC92BE67B2C93653120447E7A94977C6 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_mED09ABAB55190847530996718779205FFDE3BAD1 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * p0, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * p1, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m59DD3F774563C79CEAFADC3E0BD66EDAEAE63A9C (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, String_t* p0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m3AABEF0738DC076FE671066AC082050D8E70BD0E (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * p0, String_t* p1, const RuntimeMethod* method);
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" IL2CPP_METHOD_ATTR bool Uri_op_Equality_m4C3147F86E7902064BEC3BEB1AA5690B0D639164 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * p0, Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * p1, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Regex_IsMatch_m24C3FC2D0AD1D4B62B5A237A1CB83EE9C25A4F18 (Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Uri::get_Scheme()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_m5693EA04230335B9611278EFC189BD58339D01E4 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsFile()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsFile_m11FE138565770145768236C351BE0038291E2660 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Boolean System.Uri::get_IsLoopback()
extern "C" IL2CPP_METHOD_ATTR bool Uri_get_IsLoopback_m6FD6098F90BF88C72D722ED78E08419CED0BCFC8 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.String System.Uri::get_OriginalString()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_m126CB1FA8F56E0B9118E38A0C317280AE707B094 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.String System.Uri::get_AbsolutePath()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsolutePath_m1041BB4A254CCBAE0E2BC7B47570180E6A2621AE (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Contains_m7CC0FCABE68C2CD560CA2BB2A499B4E47DFEA1F0 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m3F75FA29F50FB340B93815988517E9208C52EE62 (String_t* ___encoded0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4 (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_m3048A515E1D314060733882877628701D80C16C8 (StringBuilder_t * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770 (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Uri::get_PathAndQuery()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_PathAndQuery_m30CFB76360DC78FCF7B2B5792B8F3EB4B0565B21 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.String System.Uri::get_Fragment()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Fragment_m8A0CF0DAE7681721AD6D9B0A014C27597A708609 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" IL2CPP_METHOD_ATTR Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845 (const RuntimeMethod* method);
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* WWWTranscoder_URLDecode_m591A567154B1B8737ECBFE065AF4FCA59217F5D8 (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___toEncode0, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Regex__ctor_m5F3516AE3DCA276F67885661467C99213AECC093 (Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * __this, String_t* p0, const RuntimeMethod* method);
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
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke(const CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0& unmarshaled, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_back(const CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke& marshaled, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_pinvoke_cleanup(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_com(const CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0& unmarshaled, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_com_back(const CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com& marshaled, CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.CertificateHandler
extern "C" void CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshal_com_cleanup(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.CertificateHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Release_m8D680D11AF8B070587DA5C73E2AE652208BDA90A (CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * __this, const RuntimeMethod* method)
{
	typedef void (*CertificateHandler_Release_m8D680D11AF8B070587DA5C73E2AE652208BDA90A_ftn) (CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 *);
	static CertificateHandler_Release_m8D680D11AF8B070587DA5C73E2AE652208BDA90A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (CertificateHandler_Release_m8D680D11AF8B070587DA5C73E2AE652208BDA90A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.CertificateHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.CertificateHandler::Finalize()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Finalize_m897F6342A2C8D1AC7AA32B6B12E3C961844BF9ED (CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		CertificateHandler_Dispose_m9C71BAA51760FDF05AB999B6AB6E6BC71BCB8CA0(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificate_m10584FA8D39D238AA435AB440279D3943273817D (CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		goto IL_0008;
	}

IL_0008:
	{
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificateNative(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool CertificateHandler_ValidateCertificateNative_mE500FAB5B59229D61E85A5DC0E28A0F583679170 (CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * __this, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___certificateData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = ___certificateData0;
		bool L_1 = VirtFuncInvoker1< bool, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* >::Invoke(5 /* System.Boolean UnityEngine.Networking.CertificateHandler::ValidateCertificate(System.Byte[]) */, __this, L_0);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Networking.CertificateHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void CertificateHandler_Dispose_m9C71BAA51760FDF05AB999B6AB6E6BC71BCB8CA0 (CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CertificateHandler_Dispose_m9C71BAA51760FDF05AB999B6AB6E6BC71BCB8CA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_mDA2D3B8121240D007DB220F422397AEBB37CEE91((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		CertificateHandler_Release_m8D680D11AF8B070587DA5C73E2AE652208BDA90A(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
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
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke(const DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9& unmarshaled, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_back(const DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke& marshaled, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_pinvoke_cleanup(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_com(const DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9& unmarshaled, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_com_back(const DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com& marshaled, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandler
extern "C" void DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshal_com_cleanup(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandler::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler__ctor_m39F80F1C9B379B0D0362DF9264DE42604BDB24E0 (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Release_m913DA503E4183F3323A3D0121FFC978D0F220D5D (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method)
{
	typedef void (*DownloadHandler_Release_m913DA503E4183F3323A3D0121FFC978D0F220D5D_ftn) (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *);
	static DownloadHandler_Release_m913DA503E4183F3323A3D0121FFC978D0F220D5D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_Release_m913DA503E4183F3323A3D0121FFC978D0F220D5D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.DownloadHandler::Finalize()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Finalize_mC6CBFA6D7B38827B12D64D265D5D4FB6B57D50CA (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		DownloadHandler_Dispose_m7478E72B2DBA4B55FAA25F7A1975A13BA5891D4B(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.DownloadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandler_Dispose_m7478E72B2DBA4B55FAA25F7A1975A13BA5891D4B (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DownloadHandler_Dispose_m7478E72B2DBA4B55FAA25F7A1975A13BA5891D4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_mDA2D3B8121240D007DB220F422397AEBB37CEE91((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		DownloadHandler_Release_m913DA503E4183F3323A3D0121FFC978D0F220D5D(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
	{
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* DownloadHandler_get_data_m4AE4E3764FBE186ABA89B5F3A7F91048EE5E38FB (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = VirtFuncInvoker0< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* >::Invoke(5 /* System.Byte[] UnityEngine.Networking.DownloadHandler::GetData() */, __this);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::GetData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* DownloadHandler_GetData_m684807DC14346A128E64E455E8DD147C32125E04 (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	{
		V_0 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)NULL;
		goto IL_0008;
	}

IL_0008:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = V_0;
		return L_0;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* DownloadHandler_InternalGetByteArray_mD6D13BFFBF2F56415E10FFEFDC4A68FE29D6D4FD (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___dh0, const RuntimeMethod* method)
{
	typedef ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* (*DownloadHandler_InternalGetByteArray_mD6D13BFFBF2F56415E10FFEFDC4A68FE29D6D4FD_ftn) (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *);
	static DownloadHandler_InternalGetByteArray_mD6D13BFFBF2F56415E10FFEFDC4A68FE29D6D4FD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandler_InternalGetByteArray_mD6D13BFFBF2F56415E10FFEFDC4A68FE29D6D4FD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)");
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* retVal = _il2cpp_icall_func(___dh0);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke(const DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255& unmarshaled, DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke_back(const DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshaled_pinvoke& marshaled, DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_pinvoke_cleanup(DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_com(const DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255& unmarshaled, DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_com_back(const DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshaled_com& marshaled, DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.DownloadHandlerBuffer
extern "C" void DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshal_com_cleanup(DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m2134187D8FB07FBAEA2CE23BFCEB13FD94261A9A (DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 * __this, const RuntimeMethod* method)
{
	{
		DownloadHandler__ctor_m39F80F1C9B379B0D0362DF9264DE42604BDB24E0(__this, /*hidden argument*/NULL);
		DownloadHandlerBuffer_InternalCreateBuffer_m661B598DF8BD7BF86374FD84C52C8AEA8FA7BEF6(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
extern "C" IL2CPP_METHOD_ATTR intptr_t DownloadHandlerBuffer_Create_m39E26BEA64B617123CEF559999C8352CA9FA5137 (DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 * ___obj0, const RuntimeMethod* method)
{
	typedef intptr_t (*DownloadHandlerBuffer_Create_m39E26BEA64B617123CEF559999C8352CA9FA5137_ftn) (DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 *);
	static DownloadHandlerBuffer_Create_m39E26BEA64B617123CEF559999C8352CA9FA5137_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (DownloadHandlerBuffer_Create_m39E26BEA64B617123CEF559999C8352CA9FA5137_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)");
	intptr_t retVal = _il2cpp_icall_func(___obj0);
	return retVal;
}
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::InternalCreateBuffer()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerBuffer_InternalCreateBuffer_m661B598DF8BD7BF86374FD84C52C8AEA8FA7BEF6 (DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = DownloadHandlerBuffer_Create_m39E26BEA64B617123CEF559999C8352CA9FA5137(__this, /*hidden argument*/NULL);
		((DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *)__this)->set_m_Ptr_0((intptr_t)L_0);
		return;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::GetData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* DownloadHandlerBuffer_GetData_m5A7FFA694EA35F1CE0731803F41E50BBDB16BF14 (DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = DownloadHandlerBuffer_InternalGetData_m9266395B691394754B68543A2FF2F19566C5ABBF(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = V_0;
		return L_1;
	}
}
// System.Byte[] UnityEngine.Networking.DownloadHandlerBuffer::InternalGetData()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* DownloadHandlerBuffer_InternalGetData_m9266395B691394754B68543A2FF2F19566C5ABBF (DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 * __this, const RuntimeMethod* method)
{
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = DownloadHandler_InternalGetByteArray_mD6D13BFFBF2F56415E10FFEFDC4A68FE29D6D4FD(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = V_0;
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






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke(const UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129& unmarshaled, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_back(const UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke& marshaled, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_pinvoke_cleanup(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke& marshaled)
{
}






// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_com(const UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129& unmarshaled, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com& marshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_com_back(const UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com& marshaled, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129& unmarshaled)
{
	Exception_t* ___m_Uri_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Uri' of type 'UnityWebRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Uri_4Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequest
extern "C" void UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshal_com_cleanup(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.String,System.String,UnityEngine.Networking.DownloadHandler,UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m0D2F8F3E1202EF4256D17E91B95DB6CC673FC8D6 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___url0, String_t* ___method1, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___downloadHandler2, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___uploadHandler3, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = UnityWebRequest_Create_m98363C34C71AA034B47FA64589711B6F0AEF6698(/*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_0);
		UnityWebRequest_InternalSetDefaults_m644CC3C1C737838385F0EC9523A8930E696A9309(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		UnityWebRequest_set_url_mA698FD94C447FF7C1C429D50C2EBAEEDD473007D(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___method1;
		UnityWebRequest_set_method_mF2DAC86EB05D65B9BCB52056B7CBB2C1AD87EEC6(__this, L_2, /*hidden argument*/NULL);
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_3 = ___downloadHandler2;
		UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E(__this, L_3, /*hidden argument*/NULL);
		UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * L_4 = ___uploadHandler3;
		UnityWebRequest_set_uploadHandler_m7B33656584914FB3F6FB0FF73C08F671262724A1(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetWebErrorString_m92A1DDF2ADFFF8AEE6B1A7FAE384743C31F9E01D (int32_t ___err0, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetWebErrorString_m92A1DDF2ADFFF8AEE6B1A7FAE384743C31F9E01D_ftn) (int32_t);
	static UnityWebRequest_GetWebErrorString_m92A1DDF2ADFFF8AEE6B1A7FAE384743C31F9E01D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetWebErrorString_m92A1DDF2ADFFF8AEE6B1A7FAE384743C31F9E01D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)");
	String_t* retVal = _il2cpp_icall_func(___err0);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeCertificateHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeCertificateHandlerOnDispose_m98EFCAC30D637479DC0DC45CFD8A15D402328F99 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeCertificateHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeCertificateHandlerOnDispose_m8609E1213309D1796E00860ECA9228F6454114AE (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeDownloadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3BE68E08A94D92D7076F49CB5196019E6E5E17AA (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeDownloadHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeDownloadHandlerOnDispose_mA888301C47844E383DEC96D88CAD6CB8D9E7B9FA (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_disposeUploadHandlerOnDispose()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_disposeUploadHandlerOnDispose_mE4A39A3A06DB4450DA49972254B4498A5F8F69DE (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_disposeUploadHandlerOnDispose(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_disposeUploadHandlerOnDispose_mC176753B8AFBB40B69FAD7F1E2B2711CA5D6AA71 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
extern "C" IL2CPP_METHOD_ATTR intptr_t UnityWebRequest_Create_m98363C34C71AA034B47FA64589711B6F0AEF6698 (const RuntimeMethod* method)
{
	typedef intptr_t (*UnityWebRequest_Create_m98363C34C71AA034B47FA64589711B6F0AEF6698_ftn) ();
	static UnityWebRequest_Create_m98363C34C71AA034B47FA64589711B6F0AEF6698_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Create_m98363C34C71AA034B47FA64589711B6F0AEF6698_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Create()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::Release()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Release_mD168D309DCE6696163B3357FA21047689D1A7D74 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Release_mD168D309DCE6696163B3357FA21047689D1A7D74_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *);
	static UnityWebRequest_Release_mD168D309DCE6696163B3357FA21047689D1A7D74_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Release_mD168D309DCE6696163B3357FA21047689D1A7D74_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalDestroy()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalDestroy_mF5D7484808AEAE24A43B678614D257FBF885026B (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalDestroy_mF5D7484808AEAE24A43B678614D257FBF885026B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_mDA2D3B8121240D007DB220F422397AEBB37CEE91((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		UnityWebRequest_Abort_mF2C9BD010E5B32FF9F57C2EB4A9A0C8D0289CA7E(__this, /*hidden argument*/NULL);
		UnityWebRequest_Release_mD168D309DCE6696163B3357FA21047689D1A7D74(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetDefaults()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetDefaults_m644CC3C1C737838385F0EC9523A8930E696A9309 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_set_disposeDownloadHandlerOnDispose_mA888301C47844E383DEC96D88CAD6CB8D9E7B9FA(__this, (bool)1, /*hidden argument*/NULL);
		UnityWebRequest_set_disposeUploadHandlerOnDispose_mC176753B8AFBB40B69FAD7F1E2B2711CA5D6AA71(__this, (bool)1, /*hidden argument*/NULL);
		UnityWebRequest_set_disposeCertificateHandlerOnDispose_m8609E1213309D1796E00860ECA9228F6454114AE(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Finalize()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Finalize_mEBEE0B5A630F0D75CE9F23CDA91DB5048D92CF2C (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UnityWebRequest_DisposeHandlers_m0E54EE2A704090B2C2F1F3C90D30A47E3BF2B5C9(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_mF5D7484808AEAE24A43B678614D257FBF885026B(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x19, FINALLY_0012);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0012;
	}

FINALLY_0012:
	{ // begin finally (depth: 1)
		Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(18)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(18)
	{
		IL2CPP_JUMP_TBL(0x19, IL_0019)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m6AFA87DA329282058723E5ACE016B0B08CFE806D (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	{
		UnityWebRequest_DisposeHandlers_m0E54EE2A704090B2C2F1F3C90D30A47E3BF2B5C9(__this, /*hidden argument*/NULL);
		UnityWebRequest_InternalDestroy_mF5D7484808AEAE24A43B678614D257FBF885026B(__this, /*hidden argument*/NULL);
		GC_SuppressFinalize_m5090ACD12C559AD47AA4FDF5284A0E91A307E048(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::DisposeHandlers()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_DisposeHandlers_m0E54EE2A704090B2C2F1F3C90D30A47E3BF2B5C9 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * V_0 = NULL;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * V_1 = NULL;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * V_2 = NULL;
	{
		bool L_0 = UnityWebRequest_get_disposeDownloadHandlerOnDispose_m3BE68E08A94D92D7076F49CB5196019E6E5E17AA(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_1 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_3 = V_0;
		NullCheck(L_3);
		DownloadHandler_Dispose_m7478E72B2DBA4B55FAA25F7A1975A13BA5891D4B(L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
	}

IL_0023:
	{
		bool L_4 = UnityWebRequest_get_disposeUploadHandlerOnDispose_mE4A39A3A06DB4450DA49972254B4498A5F8F69DE(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * L_5 = UnityWebRequest_get_uploadHandler_mB23A35C2412258E44538F37AA540421C95E69A5C(__this, /*hidden argument*/NULL);
		V_1 = L_5;
		UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * L_7 = V_1;
		NullCheck(L_7);
		UploadHandler_Dispose_m9BBE8D7D2BBAAC2DE84B52BADA0B79CEA6F2DAB2(L_7, /*hidden argument*/NULL);
	}

IL_0044:
	{
	}

IL_0045:
	{
		bool L_8 = UnityWebRequest_get_disposeCertificateHandlerOnDispose_m98EFCAC30D637479DC0DC45CFD8A15D402328F99(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * L_9 = UnityWebRequest_get_certificateHandler_mD3C46D07991190373A7144A6732E390FFBE6DF00(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * L_10 = V_2;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * L_11 = V_2;
		NullCheck(L_11);
		CertificateHandler_Dispose_m9C71BAA51760FDF05AB999B6AB6E6BC71BCB8CA0(L_11, /*hidden argument*/NULL);
	}

IL_0066:
	{
	}

IL_0067:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
extern "C" IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_BeginWebRequest_m1EF3612D316F7924F6E40D63DD3B0D0118C50CC0 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	typedef UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * (*UnityWebRequest_BeginWebRequest_m1EF3612D316F7924F6E40D63DD3B0D0118C50CC0_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *);
	static UnityWebRequest_BeginWebRequest_m1EF3612D316F7924F6E40D63DD3B0D0118C50CC0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_BeginWebRequest_m1EF3612D316F7924F6E40D63DD3B0D0118C50CC0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::BeginWebRequest()");
	UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
extern "C" IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * V_0 = NULL;
	UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * V_1 = NULL;
	{
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_0 = UnityWebRequest_BeginWebRequest_m1EF3612D316F7924F6E40D63DD3B0D0118C50CC0(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_2 = V_0;
		NullCheck(L_2);
		UnityWebRequestAsyncOperation_set_webRequest_m07869D44180E2A93042A18260FA5A2BB934AC42F(L_2, __this, /*hidden argument*/NULL);
	}

IL_0015:
	{
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_3 = V_0;
		V_1 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_4 = V_1;
		return L_4;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::Abort()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_Abort_mF2C9BD010E5B32FF9F57C2EB4A9A0C8D0289CA7E (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	typedef void (*UnityWebRequest_Abort_mF2C9BD010E5B32FF9F57C2EB4A9A0C8D0289CA7E_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *);
	static UnityWebRequest_Abort_mF2C9BD010E5B32FF9F57C2EB4A9A0C8D0289CA7E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_Abort_mF2C9BD010E5B32FF9F57C2EB4A9A0C8D0289CA7E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::Abort()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetMethod_mEE55FF0E071E784318B8C2110E3A3688BF4661CB (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetMethod_mEE55FF0E071E784318B8C2110E3A3688BF4661CB_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *, int32_t);
	static UnityWebRequest_SetMethod_mEE55FF0E071E784318B8C2110E3A3688BF4661CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetMethod_mEE55FF0E071E784318B8C2110E3A3688BF4661CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)");
	int32_t retVal = _il2cpp_icall_func(__this, ___methodType0);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetMethod_m636508AA8E6EF12B3255D8ED108BFF7EB1AB68C9 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, int32_t ___methodType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalSetMethod_m636508AA8E6EF12B3255D8ED108BFF7EB1AB68C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_mD7583537BBC7111555FF73846D120103D2563342(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_1 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_1, _stringLiteral70EE7E18113E0328AAE2B1D5D212C2735F1C00F8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_InternalSetMethod_m636508AA8E6EF12B3255D8ED108BFF7EB1AB68C9_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_2 = ___methodType0;
		int32_t L_3 = UnityWebRequest_SetMethod_mEE55FF0E071E784318B8C2110E3A3688BF4661CB(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m92A1DDF2ADFFF8AEE6B1A7FAE384743C31F9E01D(L_5, /*hidden argument*/NULL);
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_7 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_InternalSetMethod_m636508AA8E6EF12B3255D8ED108BFF7EB1AB68C9_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetCustomMethod_mC818FAC0FD8B91FD454C6DFBF7561EEE2D0BA4F4 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetCustomMethod_mC818FAC0FD8B91FD454C6DFBF7561EEE2D0BA4F4_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *, String_t*);
	static UnityWebRequest_SetCustomMethod_mC818FAC0FD8B91FD454C6DFBF7561EEE2D0BA4F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetCustomMethod_mC818FAC0FD8B91FD454C6DFBF7561EEE2D0BA4F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___customMethodName0);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetCustomMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetCustomMethod_mE9F0C84C6DCD5412AEDD76280EEC4FB82516EF16 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___customMethodName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalSetCustomMethod_mE9F0C84C6DCD5412AEDD76280EEC4FB82516EF16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_mD7583537BBC7111555FF73846D120103D2563342(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_1 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_1, _stringLiteral70EE7E18113E0328AAE2B1D5D212C2735F1C00F8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_InternalSetCustomMethod_mE9F0C84C6DCD5412AEDD76280EEC4FB82516EF16_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_2 = ___customMethodName0;
		int32_t L_3 = UnityWebRequest_SetCustomMethod_mC818FAC0FD8B91FD454C6DFBF7561EEE2D0BA4F4(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m92A1DDF2ADFFF8AEE6B1A7FAE384743C31F9E01D(L_5, /*hidden argument*/NULL);
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_7 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_InternalSetCustomMethod_mE9F0C84C6DCD5412AEDD76280EEC4FB82516EF16_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_method(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_method_mF2DAC86EB05D65B9BCB52056B7CBB2C1AD87EEC6 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_method_mF2DAC86EB05D65B9BCB52056B7CBB2C1AD87EEC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_mE11AFBE023524E785D23831B75C7BE0B74864C02(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 * L_2 = (ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60 *)il2cpp_codegen_object_new(ArgumentException_t62D3E79ABA478354E3BFBA10C9BF16549AF82D60_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m8917650A5D8F2F36C6B623A720DF2D2A630D3533(L_2, _stringLiteralF37BF1E2A7C84A010A6E65E2E41A03F1C044F04B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, UnityWebRequest_set_method_mF2DAC86EB05D65B9BCB52056B7CBB2C1AD87EEC6_RuntimeMethod_var);
	}

IL_0018:
	{
		String_t* L_3 = ___value0;
		NullCheck(L_3);
		String_t* L_4 = String_ToUpper_mF7120C9984AE1D1387563419E794CE9AD2663EF6(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_009a;
		}
	}
	{
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_6, _stringLiteralF030BBBD32966CDE41037B98A8849C46B76E4BC1, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_8, _stringLiteral61FF81C30AA3C76E78AFEA62B2E3BD1DFA49E854, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0076;
		}
	}
	{
		String_t* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_11 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_10, _stringLiteral091B0CE42EB0BD96169EA00B16DD938F6D63AC95, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_12, _stringLiteral7138A51661947B19B5088DA5A2BFEDE2876F49B9, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_008e;
		}
	}
	{
		goto IL_009a;
	}

IL_006a:
	{
		UnityWebRequest_InternalSetMethod_m636508AA8E6EF12B3255D8ED108BFF7EB1AB68C9(__this, 0, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_0076:
	{
		UnityWebRequest_InternalSetMethod_m636508AA8E6EF12B3255D8ED108BFF7EB1AB68C9(__this, 1, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_0082:
	{
		UnityWebRequest_InternalSetMethod_m636508AA8E6EF12B3255D8ED108BFF7EB1AB68C9(__this, 2, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_008e:
	{
		UnityWebRequest_InternalSetMethod_m636508AA8E6EF12B3255D8ED108BFF7EB1AB68C9(__this, 3, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_009a:
	{
		String_t* L_14 = ___value0;
		NullCheck(L_14);
		String_t* L_15 = String_ToUpper_mF7120C9984AE1D1387563419E794CE9AD2663EF6(L_14, /*hidden argument*/NULL);
		UnityWebRequest_InternalSetCustomMethod_mE9F0C84C6DCD5412AEDD76280EEC4FB82516EF16(__this, L_15, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_00ab:
	{
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_m030A0D89670638A2C0E86A42AA84C767314672C6 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = UnityWebRequest_GetUrl_m54AFB82BFB0CFD276363E9EC03E2ED3CB89A45CB(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_url(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_url_mA698FD94C447FF7C1C429D50C2EBAEEDD473007D (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_url_mA698FD94C447FF7C1C429D50C2EBAEEDD473007D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = _stringLiteralF6C97A7F64063CFEE7C2DC2157847204D4DBF093;
		String_t* L_0 = ___value0;
		String_t* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_il2cpp_TypeInfo_var);
		String_t* L_2 = WebRequestUtils_MakeInitialUrl_m446CCE4EFB276BE27A9380D55B9E704D01107B83(L_0, L_1, /*hidden argument*/NULL);
		UnityWebRequest_InternalSetUrl_m2E2C837A6F32065CAAAF6EFA7D0237C9E206689A(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Networking.UnityWebRequest::GetUrl()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_GetUrl_m54AFB82BFB0CFD276363E9EC03E2ED3CB89A45CB (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*UnityWebRequest_GetUrl_m54AFB82BFB0CFD276363E9EC03E2ED3CB89A45CB_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *);
	static UnityWebRequest_GetUrl_m54AFB82BFB0CFD276363E9EC03E2ED3CB89A45CB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_GetUrl_m54AFB82BFB0CFD276363E9EC03E2ED3CB89A45CB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::GetUrl()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUrl_mED007912E89AA114D1A3D6905586116F74C8D774 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUrl_mED007912E89AA114D1A3D6905586116F74C8D774_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *, String_t*);
	static UnityWebRequest_SetUrl_mED007912E89AA114D1A3D6905586116F74C8D774_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUrl_mED007912E89AA114D1A3D6905586116F74C8D774_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)");
	int32_t retVal = _il2cpp_icall_func(__this, ___url0);
	return retVal;
}
// System.Void UnityEngine.Networking.UnityWebRequest::InternalSetUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_InternalSetUrl_m2E2C837A6F32065CAAAF6EFA7D0237C9E206689A (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_InternalSetUrl_m2E2C837A6F32065CAAAF6EFA7D0237C9E206689A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_mD7583537BBC7111555FF73846D120103D2563342(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_1 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_1, _stringLiteral81D42CE01525C0213D5284260BDB58819D046FB9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_InternalSetUrl_m2E2C837A6F32065CAAAF6EFA7D0237C9E206689A_RuntimeMethod_var);
	}

IL_0017:
	{
		String_t* L_2 = ___url0;
		int32_t L_3 = UnityWebRequest_SetUrl_mED007912E89AA114D1A3D6905586116F74C8D774(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m92A1DDF2ADFFF8AEE6B1A7FAE384743C31F9E01D(L_5, /*hidden argument*/NULL);
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_7 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_InternalSetUrl_m2E2C837A6F32065CAAAF6EFA7D0237C9E206689A_RuntimeMethod_var);
	}

IL_0031:
	{
		return;
	}
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isModifiable_mD7583537BBC7111555FF73846D120103D2563342 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isModifiable_mD7583537BBC7111555FF73846D120103D2563342_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *);
	static UnityWebRequest_get_isModifiable_mD7583537BBC7111555FF73846D120103D2563342_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isModifiable_mD7583537BBC7111555FF73846D120103D2563342_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isModifiable()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isDone_mB3CC99A8DC3DB1DD44B23008688EB2DF20906FDA (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isDone_mB3CC99A8DC3DB1DD44B23008688EB2DF20906FDA_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *);
	static UnityWebRequest_get_isDone_mB3CC99A8DC3DB1DD44B23008688EB2DF20906FDA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isDone_mB3CC99A8DC3DB1DD44B23008688EB2DF20906FDA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isDone()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
extern "C" IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	typedef bool (*UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *);
	static UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::get_isNetworkError()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetUploadHandler_m046EF4089035441F661AED13F703024DEE030525 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___uh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetUploadHandler_m046EF4089035441F661AED13F703024DEE030525_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 *);
	static UnityWebRequest_SetUploadHandler_m046EF4089035441F661AED13F703024DEE030525_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetUploadHandler_m046EF4089035441F661AED13F703024DEE030525_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)");
	int32_t retVal = _il2cpp_icall_func(__this, ___uh0);
	return retVal;
}
// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::get_uploadHandler()
extern "C" IL2CPP_METHOD_ATTR UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * UnityWebRequest_get_uploadHandler_mB23A35C2412258E44538F37AA540421C95E69A5C (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * V_0 = NULL;
	{
		UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * L_0 = __this->get_m_UploadHandler_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m7B33656584914FB3F6FB0FF73C08F671262724A1 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_uploadHandler_m7B33656584914FB3F6FB0FF73C08F671262724A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_mD7583537BBC7111555FF73846D120103D2563342(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_1 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_1, _stringLiteralF80B07414273FEB6D1B5EAB1E91186C7CE65DE24, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_set_uploadHandler_m7B33656584914FB3F6FB0FF73C08F671262724A1_RuntimeMethod_var);
	}

IL_0017:
	{
		UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * L_2 = ___value0;
		int32_t L_3 = UnityWebRequest_SetUploadHandler_m046EF4089035441F661AED13F703024DEE030525(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m92A1DDF2ADFFF8AEE6B1A7FAE384743C31F9E01D(L_5, /*hidden argument*/NULL);
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_7 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_set_uploadHandler_m7B33656584914FB3F6FB0FF73C08F671262724A1_RuntimeMethod_var);
	}

IL_0031:
	{
		UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * L_8 = ___value0;
		__this->set_m_UploadHandler_2(L_8);
		return;
	}
}
// UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR int32_t UnityWebRequest_SetDownloadHandler_mDE4E6137C34A90754C41B3A0B7B303135771EEDD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___dh0, const RuntimeMethod* method)
{
	typedef int32_t (*UnityWebRequest_SetDownloadHandler_mDE4E6137C34A90754C41B3A0B7B303135771EEDD_ftn) (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 *);
	static UnityWebRequest_SetDownloadHandler_mDE4E6137C34A90754C41B3A0B7B303135771EEDD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UnityWebRequest_SetDownloadHandler_mDE4E6137C34A90754C41B3A0B7B303135771EEDD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)");
	int32_t retVal = _il2cpp_icall_func(__this, ___dh0);
	return retVal;
}
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C" IL2CPP_METHOD_ATTR DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * V_0 = NULL;
	{
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_0 = __this->get_m_DownloadHandler_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = UnityWebRequest_get_isModifiable_mD7583537BBC7111555FF73846D120103D2563342(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_1 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_1, _stringLiteralA58AA001D4152D20F7F8E0809B9CD782BE38A82C, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E_RuntimeMethod_var);
	}

IL_0017:
	{
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_2 = ___value0;
		int32_t L_3 = UnityWebRequest_SetDownloadHandler_mDE4E6137C34A90754C41B3A0B7B303135771EEDD(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = UnityWebRequest_GetWebErrorString_m92A1DDF2ADFFF8AEE6B1A7FAE384743C31F9E01D(L_5, /*hidden argument*/NULL);
		InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 * L_7 = (InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07 *)il2cpp_codegen_object_new(InvalidOperationException_tCE0CC6C0C8EE2E780C0736B79AA673751C79CC07_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m14477659FE30FD9CDB5E29104794C7ADB3FF40D9(L_7, L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, UnityWebRequest_set_downloadHandler_mB481C2EE30F84B62396C1A837F46046F12B8FA7E_RuntimeMethod_var);
	}

IL_0031:
	{
		DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_8 = ___value0;
		__this->set_m_DownloadHandler_1(L_8);
		return;
	}
}
// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::get_certificateHandler()
extern "C" IL2CPP_METHOD_ATTR CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * UnityWebRequest_get_certificateHandler_mD3C46D07991190373A7144A6732E390FFBE6DF00 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method)
{
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * V_0 = NULL;
	{
		CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * L_0 = __this->get_m_CertificateHandler_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18 (String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * V_0 = NULL;
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * V_1 = NULL;
	{
		String_t* L_0 = ___uri0;
		DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 * L_1 = (DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255 *)il2cpp_codegen_object_new(DownloadHandlerBuffer_tF6A73B82C9EC807D36B904A58E1DF2DDA696B255_il2cpp_TypeInfo_var);
		DownloadHandlerBuffer__ctor_m2134187D8FB07FBAEA2CE23BFCEB13FD94261A9A(L_1, /*hidden argument*/NULL);
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_2 = (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)il2cpp_codegen_object_new(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_il2cpp_TypeInfo_var);
		UnityWebRequest__ctor_m0D2F8F3E1202EF4256D17E91B95DB6CC673FC8D6(L_2, L_0, _stringLiteralF030BBBD32966CDE41037B98A8849C46B76E4BC1, L_1, (UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 *)NULL, /*hidden argument*/NULL);
		V_0 = L_2;
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_3 = V_0;
		V_1 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_4 = V_1;
		return L_4;
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


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke(const UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353& unmarshaled, UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
extern "C" void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke_back(const UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke& marshaled, UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_pinvoke_cleanup(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_com(const UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353& unmarshaled, UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com& marshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
extern "C" void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_com_back(const UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com& marshaled, UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353& unmarshaled)
{
	Exception_t* ___U3CwebRequestU3Ek__BackingField_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<webRequest>k__BackingField' of type 'UnityWebRequestAsyncOperation': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CwebRequestU3Ek__BackingField_2Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UnityWebRequestAsyncOperation
extern "C" void UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshal_com_cleanup(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation__ctor_mB260FD4CE600B27EB9A2ABA0BDD20FAF8449D523 (UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * __this, const RuntimeMethod* method)
{
	{
		AsyncOperation__ctor_mEEE6114B72B8807F4AA6FF48FA79E4EFE480293F(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Networking.UnityWebRequestAsyncOperation::set_webRequest(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequestAsyncOperation_set_webRequest_m07869D44180E2A93042A18260FA5A2BB934AC42F (UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * __this, UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___value0, const RuntimeMethod* method)
{
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_0 = ___value0;
		__this->set_U3CwebRequestU3Ek__BackingField_2(L_0);
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
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke(const UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4& unmarshaled, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_back(const UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke& marshaled, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_pinvoke_cleanup(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_com(const UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4& unmarshaled, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com& marshaled)
{
	marshaled.___m_Ptr_0 = unmarshaled.get_m_Ptr_0();
}
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_com_back(const UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com& marshaled, UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4& unmarshaled)
{
	intptr_t unmarshaled_m_Ptr_temp_0;
	memset(&unmarshaled_m_Ptr_temp_0, 0, sizeof(unmarshaled_m_Ptr_temp_0));
	unmarshaled_m_Ptr_temp_0 = marshaled.___m_Ptr_0;
	unmarshaled.set_m_Ptr_0(unmarshaled_m_Ptr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.Networking.UploadHandler
extern "C" void UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshal_com_cleanup(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.Networking.UploadHandler::Release()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Release_m1723A22438AF0A7BE616D512E54190D9CE0EC3C4 (UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * __this, const RuntimeMethod* method)
{
	typedef void (*UploadHandler_Release_m1723A22438AF0A7BE616D512E54190D9CE0EC3C4_ftn) (UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 *);
	static UploadHandler_Release_m1723A22438AF0A7BE616D512E54190D9CE0EC3C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (UploadHandler_Release_m1723A22438AF0A7BE616D512E54190D9CE0EC3C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Networking.UploadHandler::Release()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Networking.UploadHandler::Finalize()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Finalize_m68B0CC0B647B11B53908CA4E577AEA5DBA31E4D8 (UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		UploadHandler_Dispose_m9BBE8D7D2BBAAC2DE84B52BADA0B79CEA6F2DAB2(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_mF771ED4CD6EB17CF862AA2B705F0E2CC0B4ADBED(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void UnityEngine.Networking.UploadHandler::Dispose()
extern "C" IL2CPP_METHOD_ATTR void UploadHandler_Dispose_m9BBE8D7D2BBAAC2DE84B52BADA0B79CEA6F2DAB2 (UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UploadHandler_Dispose_m9BBE8D7D2BBAAC2DE84B52BADA0B79CEA6F2DAB2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		bool L_1 = IntPtr_op_Inequality_mDA2D3B8121240D007DB220F422397AEBB37CEE91((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		UploadHandler_Release_m1723A22438AF0A7BE616D512E54190D9CE0EC3C4(__this, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)(0));
	}

IL_0029:
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
// System.Text.Encoding UnityEngine.WWWForm::get_DefaultEncoding()
extern "C" IL2CPP_METHOD_ATTR Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * WWWForm_get_DefaultEncoding_m13BB72339201269AB257B275B20A5A35B233BC3F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWForm_get_DefaultEncoding_m13BB72339201269AB257B275B20A5A35B233BC3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_0 = Encoding_get_ASCII_mD1DE27D92F912DA7E0F095A206F6A9CD2489D461(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_1 = V_0;
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
// System.Byte UnityEngine.WWWTranscoder::Hex2Byte(System.Byte[],System.Int32)
extern "C" IL2CPP_METHOD_ATTR uint8_t WWWTranscoder_Hex2Byte_mD417CA540CFBE045FCE32959CD3443EB9C8C7423 (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___b0, int32_t ___offset1, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		V_0 = (uint8_t)0;
		int32_t L_0 = ___offset1;
		V_1 = L_0;
		goto IL_007a;
	}

IL_000a:
	{
		uint8_t L_1 = V_0;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)16))))));
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = ___b0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_7 = V_2;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)));
		goto IL_005e;
	}

IL_002f:
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)65))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = V_2;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)75))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)55)));
		goto IL_005e;
	}

IL_0049:
	{
		int32_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)97))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_13 = V_2;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)102))))
		{
			goto IL_005e;
		}
	}
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)((int32_t)87)));
	}

IL_005e:
	{
		int32_t L_15 = V_2;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)15))))
		{
			goto IL_006f;
		}
	}
	{
		V_3 = (uint8_t)((int32_t)63);
		goto IL_008a;
	}

IL_006f:
	{
		uint8_t L_16 = V_0;
		int32_t L_17 = V_2;
		V_0 = (uint8_t)(((int32_t)((uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)(((int32_t)((uint8_t)L_17))))))));
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_007a:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___offset1;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)2)))))
		{
			goto IL_000a;
		}
	}
	{
		uint8_t L_21 = V_0;
		V_3 = L_21;
		goto IL_008a;
	}

IL_008a:
	{
		uint8_t L_22 = V_3;
		return L_22;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::URLDecode(System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* WWWTranscoder_URLDecode_m591A567154B1B8737ECBFE065AF4FCA59217F5D8 (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___toEncode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_URLDecode_m591A567154B1B8737ECBFE065AF4FCA59217F5D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = ___toEncode0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var);
		uint8_t L_1 = ((WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var))->get_urlEscapeChar_2();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = ((WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var))->get_urlSpace_3();
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = WWWTranscoder_Decode_m2533830DAAAE6F33AA6EE85A5BF63C96F5D631D4(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0017;
	}

IL_0017:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean UnityEngine.WWWTranscoder::ByteSubArrayEquals(System.Byte[],System.Int32,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool WWWTranscoder_ByteSubArrayEquals_m268C2A9B31CCF4D81E7BEEF843DF5D477ECA9958 (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___array0, int32_t ___index1, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___comperand2, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = ___array0;
		NullCheck(L_0);
		int32_t L_1 = ___index1;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = ___comperand2;
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1))) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_0015;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0044;
	}

IL_0015:
	{
		V_1 = 0;
		goto IL_0034;
	}

IL_001c:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = ___array0;
		int32_t L_4 = ___index1;
		int32_t L_5 = V_1;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5));
		uint8_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_8 = ___comperand2;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_7) == ((int32_t)L_11)))
		{
			goto IL_0030;
		}
	}
	{
		V_0 = (bool)0;
		goto IL_0044;
	}

IL_0030:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0034:
	{
		int32_t L_13 = V_1;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_14 = ___comperand2;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_0044;
	}

IL_0044:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Byte[] UnityEngine.WWWTranscoder::Decode(System.Byte[],System.Byte,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* WWWTranscoder_Decode_m2533830DAAAE6F33AA6EE85A5BF63C96F5D631D4 (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___input0, uint8_t ___escapeChar1, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___space2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder_Decode_m2533830DAAAE6F33AA6EE85A5BF63C96F5D631D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_0 = ___input0;
		NullCheck(L_0);
		MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_1 = (MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 *)il2cpp_codegen_object_new(MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mBAF8EAD02F4FC869EFCF825C3BD26E40B6892E3E(L_1, (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000a:
	try
	{ // begin try (depth: 1)
		{
			V_1 = 0;
			goto IL_0077;
		}

IL_0012:
		{
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = ___input0;
			int32_t L_3 = V_1;
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_4 = ___space2;
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var);
			bool L_5 = WWWTranscoder_ByteSubArrayEquals_m268C2A9B31CCF4D81E7BEEF843DF5D477ECA9958(L_2, L_3, L_4, /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0037;
			}
		}

IL_0020:
		{
			int32_t L_6 = V_1;
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_7 = ___space2;
			NullCheck(L_7);
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), (int32_t)1))));
			MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_8 = V_0;
			NullCheck(L_8);
			VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_8, (uint8_t)((int32_t)32));
			goto IL_0072;
		}

IL_0037:
		{
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_9 = ___input0;
			int32_t L_10 = V_1;
			NullCheck(L_9);
			int32_t L_11 = L_10;
			uint8_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
			uint8_t L_13 = ___escapeChar1;
			if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
			{
				goto IL_0067;
			}
		}

IL_0040:
		{
			int32_t L_14 = V_1;
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_15 = ___input0;
			NullCheck(L_15);
			if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2))) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
			{
				goto IL_0067;
			}
		}

IL_004b:
		{
			int32_t L_16 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
			MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_17 = V_0;
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_18 = ___input0;
			int32_t L_19 = V_1;
			int32_t L_20 = L_19;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
			IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var);
			uint8_t L_21 = WWWTranscoder_Hex2Byte_mD417CA540CFBE045FCE32959CD3443EB9C8C7423(L_18, L_20, /*hidden argument*/NULL);
			NullCheck(L_17);
			VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_17, L_21);
			goto IL_0072;
		}

IL_0067:
		{
			MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_22 = V_0;
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_23 = ___input0;
			int32_t L_24 = V_1;
			NullCheck(L_23);
			int32_t L_25 = L_24;
			uint8_t L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
			NullCheck(L_22);
			VirtActionInvoker1< uint8_t >::Invoke(21 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_22, L_26);
		}

IL_0072:
		{
			int32_t L_27 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
		}

IL_0077:
		{
			int32_t L_28 = V_1;
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_29 = ___input0;
			NullCheck(L_29);
			if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_29)->max_length)))))))
			{
				goto IL_0012;
			}
		}

IL_0080:
		{
			MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_30 = V_0;
			NullCheck(L_30);
			ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_31 = VirtFuncInvoker0< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* >::Invoke(28 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_30);
			V_2 = L_31;
			IL2CPP_LEAVE(0x99, FINALLY_008c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008c;
	}

FINALLY_008c:
	{ // begin finally (depth: 1)
		{
			MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_32 = V_0;
			if (!L_32)
			{
				goto IL_0098;
			}
		}

IL_0092:
		{
			MemoryStream_tA2A6655CF733913D13B7AB22E4FF081CB92F5FF0 * L_33 = V_0;
			NullCheck(L_33);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_tFD576810FF845F49C1CF8F06BEB759FCE2BC31B2_il2cpp_TypeInfo_var, L_33);
		}

IL_0098:
		{
			IL2CPP_END_FINALLY(140)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(140)
	{
		IL2CPP_JUMP_TBL(0x99, IL_0099)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0099:
	{
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_34 = V_2;
		return L_34;
	}
}
// System.Void UnityEngine.WWWTranscoder::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WWWTranscoder__cctor_m3436CCA2D8667A6BCF6981B6573EF048BDA49F51 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WWWTranscoder__cctor_m3436CCA2D8667A6BCF6981B6573EF048BDA49F51_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_0 = WWWForm_get_DefaultEncoding_m13BB72339201269AB257B275B20A5A35B233BC3F(/*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_1 = VirtFuncInvoker1< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteralCE27CB141098FEB00714E758646BE3E99C185B71);
		((WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var))->set_ucHexChars_0(L_1);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_2 = WWWForm_get_DefaultEncoding_m13BB72339201269AB257B275B20A5A35B233BC3F(/*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = VirtFuncInvoker1< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_2, _stringLiteralFE5567E8D769550852182CDF69D74BB16DFF8E29);
		((WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var))->set_lcHexChars_1(L_3);
		((WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var))->set_urlEscapeChar_2((uint8_t)((int32_t)37));
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_4 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)43));
		((WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var))->set_urlSpace_3(L_5);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_6 = WWWForm_get_DefaultEncoding_m13BB72339201269AB257B275B20A5A35B233BC3F(/*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_7 = VirtFuncInvoker1< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_6, _stringLiteral986F2ED15C79ED805000ECCD85519810B2DB2A93);
		((WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var))->set_dataSpace_4(L_7);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_8 = WWWForm_get_DefaultEncoding_m13BB72339201269AB257B275B20A5A35B233BC3F(/*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_9 = VirtFuncInvoker1< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteral1C5E5F29CEB079B561835055FFA20C2E0B53F397);
		((WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var))->set_urlForbidden_5(L_9);
		((WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var))->set_qpEscapeChar_6((uint8_t)((int32_t)61));
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_10 = (ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*)SZArrayNew(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_11 = L_10;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)95));
		((WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var))->set_qpSpace_7(L_11);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_12 = WWWForm_get_DefaultEncoding_m13BB72339201269AB257B275B20A5A35B233BC3F(/*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_13 = VirtFuncInvoker1< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, _stringLiteral38263C0B87E5FC0881F12EF855C8F694115D8213);
		((WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_StaticFields*)il2cpp_codegen_static_fields_for(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var))->set_qpForbidden_8(L_13);
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
// System.String UnityEngineInternal.WebRequestUtils::RedirectTo(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_RedirectTo_m8AC7C0BFC562550118F6FF4AE218898717E922C1 (String_t* ___baseUri0, String_t* ___redirectUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_RedirectTo_m8AC7C0BFC562550118F6FF4AE218898717E922C1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * V_0 = NULL;
	String_t* V_1 = NULL;
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * V_2 = NULL;
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * V_3 = NULL;
	{
		String_t* L_0 = ___redirectUri1;
		NullCheck(L_0);
		Il2CppChar L_1 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_0, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___redirectUri1;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_3 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5(L_3, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0024;
	}

IL_001c:
	{
		String_t* L_4 = ___redirectUri1;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_5 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5(L_5, L_4, 0, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0024:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = Uri_get_IsAbsoluteUri_mD357D3447CF7344F0C508BB3EB280AA538D02822(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003b;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_8 = V_0;
		NullCheck(L_8);
		String_t* L_9 = Uri_get_AbsoluteUri_m37247BEBAC92BE67B2C93653120447E7A94977C6(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0057;
	}

IL_003b:
	{
		String_t* L_10 = ___baseUri0;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_11 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_mAC041F6FAB606234CA88664D1B0A6E44807E2DE5(L_11, L_10, 1, /*hidden argument*/NULL);
		V_2 = L_11;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_12 = V_2;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_13 = V_0;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_14 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_mED09ABAB55190847530996718779205FFDE3BAD1(L_14, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_15 = V_3;
		NullCheck(L_15);
		String_t* L_16 = Uri_get_AbsoluteUri_m37247BEBAC92BE67B2C93653120447E7A94977C6(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		goto IL_0057;
	}

IL_0057:
	{
		String_t* L_17 = V_1;
		return L_17;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeInitialUrl(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeInitialUrl_m446CCE4EFB276BE27A9380D55B9E704D01107B83 (String_t* ___targetUrl0, String_t* ___localUrl1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_MakeInitialUrl_m446CCE4EFB276BE27A9380D55B9E704D01107B83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * V_2 = NULL;
	Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * V_3 = NULL;
	FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592 * V_4 = NULL;
	FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___targetUrl0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_mE11AFBE023524E785D23831B75C7BE0B74864C02(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_00d7;
	}

IL_0017:
	{
		V_1 = (bool)0;
		String_t* L_2 = ___localUrl1;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_3 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_m59DD3F774563C79CEAFADC3E0BD66EDAEAE63A9C(L_3, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		V_3 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)NULL;
		String_t* L_4 = ___targetUrl0;
		NullCheck(L_4);
		Il2CppChar L_5 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_4, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_003c;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_6 = V_2;
		String_t* L_7 = ___targetUrl0;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_8 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_m3AABEF0738DC076FE671066AC082050D8E70BD0E(L_8, L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		V_1 = (bool)1;
	}

IL_003c:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_10 = Uri_op_Equality_m4C3147F86E7902064BEC3BEB1AA5690B0D639164(L_9, (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_il2cpp_TypeInfo_var);
		Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * L_11 = ((WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_il2cpp_TypeInfo_var))->get_domainRegex_0();
		String_t* L_12 = ___targetUrl0;
		NullCheck(L_11);
		bool L_13 = Regex_IsMatch_m24C3FC2D0AD1D4B62B5A237A1CB83EE9C25A4F18(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006f;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_14 = V_2;
		NullCheck(L_14);
		String_t* L_15 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(L_14, /*hidden argument*/NULL);
		String_t* L_16 = ___targetUrl0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_15, _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC, L_16, /*hidden argument*/NULL);
		___targetUrl0 = L_17;
		V_1 = (bool)1;
	}

IL_006f:
	{
		V_4 = (FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592 *)NULL;
	}

IL_0072:
	try
	{ // begin try (depth: 1)
		{
			Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_18 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
			bool L_19 = Uri_op_Equality_m4C3147F86E7902064BEC3BEB1AA5690B0D639164(L_18, (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)NULL, /*hidden argument*/NULL);
			if (!L_19)
			{
				goto IL_0094;
			}
		}

IL_007f:
		{
			String_t* L_20 = ___targetUrl0;
			NullCheck(L_20);
			Il2CppChar L_21 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_20, 0, /*hidden argument*/NULL);
			if ((((int32_t)L_21) == ((int32_t)((int32_t)46))))
			{
				goto IL_0094;
			}
		}

IL_008d:
		{
			String_t* L_22 = ___targetUrl0;
			Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_23 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
			Uri__ctor_m59DD3F774563C79CEAFADC3E0BD66EDAEAE63A9C(L_23, L_22, /*hidden argument*/NULL);
			V_3 = L_23;
		}

IL_0094:
		{
			goto IL_00a7;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009a;
		throw e;
	}

CATCH_009a:
	{ // begin catch(System.FormatException)
		V_5 = ((FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592 *)__exception_local);
		FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592 * L_24 = V_5;
		V_4 = L_24;
		goto IL_00a7;
	} // end catch (depth: 1)

IL_00a7:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		bool L_26 = Uri_op_Equality_m4C3147F86E7902064BEC3BEB1AA5690B0D639164(L_25, (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00c9;
		}
	}

IL_00b3:
	try
	{ // begin try (depth: 1)
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_27 = V_2;
		String_t* L_28 = ___targetUrl0;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_29 = (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E *)il2cpp_codegen_object_new(Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E_il2cpp_TypeInfo_var);
		Uri__ctor_m3AABEF0738DC076FE671066AC082050D8E70BD0E(L_29, L_27, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
		V_1 = (bool)1;
		goto IL_00c9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00c4;
		throw e;
	}

CATCH_00c4:
	{ // begin catch(System.FormatException)
		FormatException_t6148832BF22FDB9F1FB5BE067694E8326F42D592 * L_30 = V_4;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, NULL, WebRequestUtils_MakeInitialUrl_m446CCE4EFB276BE27A9380D55B9E704D01107B83_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_00c9:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_31 = V_3;
		String_t* L_32 = ___targetUrl0;
		bool L_33 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_il2cpp_TypeInfo_var);
		String_t* L_34 = WebRequestUtils_MakeUriString_m5693EA04230335B9611278EFC189BD58339D01E4(L_31, L_32, L_33, /*hidden argument*/NULL);
		V_0 = L_34;
		goto IL_00d7;
	}

IL_00d7:
	{
		String_t* L_35 = V_0;
		return L_35;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::MakeUriString(System.Uri,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_MakeUriString_m5693EA04230335B9611278EFC189BD58339D01E4 (Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * ___targetUri0, String_t* ___targetUrl1, bool ___prependProtocol2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_MakeUriString_m5693EA04230335B9611278EFC189BD58339D01E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_0 = ___targetUri0;
		NullCheck(L_0);
		bool L_1 = Uri_get_IsFile_m11FE138565770145768236C351BE0038291E2660(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_007b;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_2 = ___targetUri0;
		NullCheck(L_2);
		bool L_3 = Uri_get_IsLoopback_m6FD6098F90BF88C72D722ED78E08419CED0BCFC8(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_4 = ___targetUri0;
		NullCheck(L_4);
		String_t* L_5 = Uri_get_OriginalString_m126CB1FA8F56E0B9118E38A0C317280AE707B094(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_015d;
	}

IL_0024:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_6 = ___targetUri0;
		NullCheck(L_6);
		String_t* L_7 = Uri_get_AbsolutePath_m1041BB4A254CCBAE0E2BC7B47570180E6A2621AE(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = String_Contains_m7CC0FCABE68C2CD560CA2BB2A499B4E47DFEA1F0(L_8, _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_il2cpp_TypeInfo_var);
		String_t* L_11 = WebRequestUtils_URLDecode_m3F75FA29F50FB340B93815988517E9208C52EE62(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
	}

IL_0042:
	{
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_14 = V_1;
		NullCheck(L_14);
		Il2CppChar L_15 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_14, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_15) == ((int32_t)((int32_t)47))))
		{
			goto IL_006a;
		}
	}
	{
		Il2CppChar L_16 = ((Il2CppChar)((int32_t)47));
		RuntimeObject * L_17 = Box(Char_t2AF4E0DF8B57497BF49A6A8822F574113ADA8432_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m284DDEFEC7A010140004A73DE74DF4BB93685BEC(L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
	}

IL_006a:
	{
		String_t* L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m3826EAA4F567A88037F77DAA4CA280E199698DC8(_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, L_20, /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_015d;
	}

IL_007b:
	{
		String_t* L_22 = ___targetUrl1;
		NullCheck(L_22);
		bool L_23 = String_Contains_m7CC0FCABE68C2CD560CA2BB2A499B4E47DFEA1F0(L_22, _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0097;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_24 = ___targetUri0;
		NullCheck(L_24);
		String_t* L_25 = Uri_get_OriginalString_m126CB1FA8F56E0B9118E38A0C317280AE707B094(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_015d;
	}

IL_0097:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_26 = ___targetUri0;
		NullCheck(L_26);
		String_t* L_27 = Uri_get_Scheme_m9C23C51DF022F00903DFF7C59A074DEAD2A0B6ED(L_26, /*hidden argument*/NULL);
		V_2 = L_27;
		bool L_28 = ___prependProtocol2;
		if (L_28)
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_29 = ___targetUrl1;
		NullCheck(L_29);
		int32_t L_30 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_29, /*hidden argument*/NULL);
		String_t* L_31 = V_2;
		NullCheck(L_31);
		int32_t L_32 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_31, /*hidden argument*/NULL);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)2)))))
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_33 = ___targetUrl1;
		String_t* L_34 = V_2;
		NullCheck(L_34);
		int32_t L_35 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_34, /*hidden argument*/NULL);
		NullCheck(L_33);
		Il2CppChar L_36 = String_get_Chars_m0FE525C2D5B2F1291870A8AEE594F164F5621393(L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_36) == ((int32_t)((int32_t)47))))
		{
			goto IL_0151;
		}
	}
	{
		String_t* L_37 = V_2;
		String_t* L_38 = ___targetUrl1;
		NullCheck(L_38);
		int32_t L_39 = String_get_Length_m7A1EDB7DD56DC2DDBA48DF416657554133E8A7A4(L_38, /*hidden argument*/NULL);
		StringBuilder_t * L_40 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3048A515E1D314060733882877628701D80C16C8(L_40, L_37, L_39, /*hidden argument*/NULL);
		V_3 = L_40;
		StringBuilder_t * L_41 = V_3;
		NullCheck(L_41);
		StringBuilder_Append_m1F484B542C4F3C021CC03CFC09FE58A360ED4770(L_41, ((int32_t)58), /*hidden argument*/NULL);
		String_t* L_42 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_43 = String_op_Equality_m63C6C48ECFB31D323F34FDE36794C6C384073A55(L_42, _stringLiteralF92E777F4341930BAD9B2422283C4680D00DBC06, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_012b;
		}
	}
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_44 = ___targetUri0;
		NullCheck(L_44);
		String_t* L_45 = Uri_get_AbsolutePath_m1041BB4A254CCBAE0E2BC7B47570180E6A2621AE(L_44, /*hidden argument*/NULL);
		V_4 = L_45;
		String_t* L_46 = V_4;
		NullCheck(L_46);
		bool L_47 = String_Contains_m7CC0FCABE68C2CD560CA2BB2A499B4E47DFEA1F0(L_46, _stringLiteral4345CB1FA27885A8FBFE7C0C830A592CC76A552B, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_0116;
		}
	}
	{
		String_t* L_48 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_il2cpp_TypeInfo_var);
		String_t* L_49 = WebRequestUtils_URLDecode_m3F75FA29F50FB340B93815988517E9208C52EE62(L_48, /*hidden argument*/NULL);
		V_4 = L_49;
	}

IL_0116:
	{
		StringBuilder_t * L_50 = V_3;
		String_t* L_51 = V_4;
		NullCheck(L_50);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_50, L_51, /*hidden argument*/NULL);
		StringBuilder_t * L_52 = V_3;
		NullCheck(L_52);
		String_t* L_53 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_52);
		V_0 = L_53;
		goto IL_015d;
	}

IL_012b:
	{
		StringBuilder_t * L_54 = V_3;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_55 = ___targetUri0;
		NullCheck(L_55);
		String_t* L_56 = Uri_get_PathAndQuery_m30CFB76360DC78FCF7B2B5792B8F3EB4B0565B21(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_54, L_56, /*hidden argument*/NULL);
		StringBuilder_t * L_57 = V_3;
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_58 = ___targetUri0;
		NullCheck(L_58);
		String_t* L_59 = Uri_get_Fragment_m8A0CF0DAE7681721AD6D9B0A014C27597A708609(L_58, /*hidden argument*/NULL);
		NullCheck(L_57);
		StringBuilder_Append_m402C4CFC4FCEC22D0A372742BC40DF2224C41F86(L_57, L_59, /*hidden argument*/NULL);
		StringBuilder_t * L_60 = V_3;
		NullCheck(L_60);
		String_t* L_61 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
		V_0 = L_61;
		goto IL_015d;
	}

IL_0151:
	{
		Uri_tF93A2559917F312C27D9DEAC7CAE4400D3A40F1E * L_62 = ___targetUri0;
		NullCheck(L_62);
		String_t* L_63 = Uri_get_AbsoluteUri_m37247BEBAC92BE67B2C93653120447E7A94977C6(L_62, /*hidden argument*/NULL);
		V_0 = L_63;
		goto IL_015d;
	}

IL_015d:
	{
		String_t* L_64 = V_0;
		return L_64;
	}
}
// System.String UnityEngineInternal.WebRequestUtils::URLDecode(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* WebRequestUtils_URLDecode_m3F75FA29F50FB340B93815988517E9208C52EE62 (String_t* ___encoded0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils_URLDecode_m3F75FA29F50FB340B93815988517E9208C52EE62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_0 = NULL;
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1_il2cpp_TypeInfo_var);
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_0 = Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845(/*hidden argument*/NULL);
		String_t* L_1 = ___encoded0;
		NullCheck(L_0);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_2 = VirtFuncInvoker1< ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		V_0 = L_2;
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(WWWTranscoder_t0B24F1F17629756E6464A925870CC39236F39C61_il2cpp_TypeInfo_var);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_4 = WWWTranscoder_URLDecode_m591A567154B1B8737ECBFE065AF4FCA59217F5D8(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Encoding_t07D1CA045FCD18F862F7308C8477B5C2E1A0CBE1 * L_5 = Encoding_get_UTF8_mAFAA5E651D81F3BB19AB45313D7BBB205733B845(/*hidden argument*/NULL);
		ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_5, L_6);
		V_2 = L_7;
		goto IL_0025;
	}

IL_0025:
	{
		String_t* L_8 = V_2;
		return L_8;
	}
}
// System.Void UnityEngineInternal.WebRequestUtils::.cctor()
extern "C" IL2CPP_METHOD_ATTR void WebRequestUtils__cctor_m31EB3E45EC49AB6B33C7A10F79F1CD4FF2BE715A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestUtils__cctor_m31EB3E45EC49AB6B33C7A10F79F1CD4FF2BE715A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B * L_0 = (Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B *)il2cpp_codegen_object_new(Regex_t829CB33C547AB824BFEAFF320BB8F59B3A76620B_il2cpp_TypeInfo_var);
		Regex__ctor_m5F3516AE3DCA276F67885661467C99213AECC093(L_0, _stringLiteral56F03F5F25FB2048BF4AB5FBBF7B5E3D39A3ECEB, /*hidden argument*/NULL);
		((WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_StaticFields*)il2cpp_codegen_static_fields_for(WebRequestUtils_tBE8F8607E3A9633419968F6AF2F706A029AE1296_il2cpp_TypeInfo_var))->set_domainRegex_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
