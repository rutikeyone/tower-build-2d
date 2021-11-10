#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// Ads
struct Ads_t8DCCC8416DC818E87B92B88E0966AED5AA729A8F;
// AssemblyCSharp.Assets.Ads.AdsInitialize
struct AdsInitialize_t98E231D219FCF0A94D7B39BA77193D7A0D380C92;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// AssemblyCSharp.Assets.Scripts.Points.AreaGO
struct AreaGO_t98118C83C02664A386549A9802DCCE82E6428D93;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BaseBuilding
struct BaseBuilding_tEA6BCCE436C7BD4D4A065E05CA1FFE92B0122E21;
// AssemblyCSharp.Assets.Scripts.Levels.BaseLevel
struct BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9;
// Assets.Scripts.Building.Building
struct Building_tFF0D4E4A16B17F9D1489AB449CD7B4D6B3AEA410;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// ButtonPause
struct ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// AssemblyCSharp.Assets.Scripts.Clouds.Cloud
struct Cloud_t250B107B3A19EA06C2596C49DD26DB9CD48D38FC;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// AssemblyCSharp.Assets.Scripts.Crane.Crane
struct Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C;
// AssemblyCSharp.Assets.Scripts.Loader.CraneLoader
struct CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// Assets.Scripts.Crane.FullCrane
struct FullCrane_t31A4257B6DFBFE9E24DF37BAC482F87DB16B7B55;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// AssemblyCSharp.Assets.Scripts.Crane.Generator
struct Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186;
// GetRecord
struct GetRecord_tC3CAB4A322CC2F7066BEB819E874913B0635CB45;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// AssemblyCSharp.Assets.Scripts.Levels.Level
struct Level_t383AE4BBBB6F2364DF233109902E12B8C05D80E5;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// AssemblyCSharp.Assets.Scripts.Crane.MoveCrane
struct MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB;
// Music
struct Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F;
// MusicButton
struct MusicButton_tE4A555F4C61CF8C24F1DE1650A3D517149A3E0EE;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// Assets.Scripts.Points.PointLeft
struct PointLeft_t8E54EAB6B921BAA6096C739EF25572B3F8788BEC;
// Assets.Scripts.Points.PointRight
struct PointRight_tD7B011B84070278D657F7D68F0570584226FABFC;
// Assets.Scripts.Points.PointSpawn
struct PointSpawn_t1C0D69FFE23A748F66497A9075758725A2466FD3;
// Quit
struct Quit_t390EF75E1E4AA071D5D1A4911600D450776363D6;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// Record
struct Record_t10FEA7B5972258F9A949A81DD517DF6226BD6F8D;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// AssemblyCSharp.Assets.Scripts.Buttons.Restart.Restart
struct Restart_tFAE6D95F16B1DB4215B71F928737F624665A1BD0;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// Rules
struct Rules_tFD7922E991F7DC42880D116739BCEED4AAB36F5D;
// Assets.Scripts.Score
struct Score_t960DA7E8E63C60FFE82B970C5CEE780C97AFEEA3;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// AssemblyCSharp.Assets.Scripts.Buttons.ShowHidden
struct ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE;
// AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding
struct SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4;
// SpawnClouds
struct SpawnClouds_t96DA08FAE86706D7EC2EC90DE5AC970497234BC5;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// TextOfTheFloors
struct TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// Trigger
struct Trigger_tBC1A4B5644EA74E47F0406196C6706050977FA4E;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Advertisement_t05979DABE3C57D3AFE739C5776027CE11F4EB7E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0021AC5AC95A0A5C19FA408516B7B9AB9C2FC6A2;
IL2CPP_EXTERN_C String_t* _stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC;
IL2CPP_EXTERN_C String_t* _stringLiteral30B24FA98B189A7A3EDB0D87F4BFD2204B15F691;
IL2CPP_EXTERN_C String_t* _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF;
IL2CPP_EXTERN_C String_t* _stringLiteral753D2F1D8AFBFC4863CC0FE16F4B105A6D77FD83;
IL2CPP_EXTERN_C String_t* _stringLiteralB604B894767E03370B687089F53E8675CBB26BE0;
IL2CPP_EXTERN_C String_t* _stringLiteralCD89179999423E4F200B06CE7390E47A4F8E59B1;
IL2CPP_EXTERN_C String_t* _stringLiteralD50AEC80D16CFABEE291C403053E2600869C843A;
IL2CPP_EXTERN_C String_t* _stringLiteralD6695A8FCC90609904AFFDF0E14492DF51EE8942;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5_mDD3D9C969865074EB9FD0406315FFA02F336FF95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Score_GetMultiply_mE1C621916FFAD1F9248D71242C9FC926AFB33E8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// AssemblyCSharp.Assets.Scripts.Levels.BaseLevel
struct  BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716  : public RuntimeObject
{
public:

public:
};


// AssemblyCSharp.Assets.Scripts.Crane.Generator
struct  Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186  : public RuntimeObject
{
public:
	// System.Random AssemblyCSharp.Assets.Scripts.Crane.Generator::Random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___Random_0;

public:
	inline static int32_t get_offset_of_Random_0() { return static_cast<int32_t>(offsetof(Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186, ___Random_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_Random_0() const { return ___Random_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_Random_0() { return &___Random_0; }
	inline void set_Random_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___Random_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Random_0), (void*)value);
	}
};


// System.Random
struct  Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
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


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct  UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
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


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct  UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.Collision2D
struct  Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
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

// UnityEngine.RigidbodyType2D
struct  RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyType2D_tEF016AC6D4D54AF47773D68E833159CC995DF1E9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// AssemblyCSharp.Assets.Scripts.Crane.StateCrane
struct  StateCrane_tF3F84709F262C3240E8137282626137A944BC524 
{
public:
	// System.Int32 AssemblyCSharp.Assets.Scripts.Crane.StateCrane::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StateCrane_tF3F84709F262C3240E8137282626137A944BC524, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
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

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Int32>
struct  UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// Ads
struct  Ads_t8DCCC8416DC818E87B92B88E0966AED5AA729A8F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button Ads::X2
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___X2_4;
	// UnityEngine.UI.Button Ads::X3
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___X3_5;
	// UnityEngine.Sprite Ads::SpriteX2
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SpriteX2_6;
	// UnityEngine.Sprite Ads::SpriteX3
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SpriteX3_7;

public:
	inline static int32_t get_offset_of_X2_4() { return static_cast<int32_t>(offsetof(Ads_t8DCCC8416DC818E87B92B88E0966AED5AA729A8F, ___X2_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_X2_4() const { return ___X2_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_X2_4() { return &___X2_4; }
	inline void set_X2_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___X2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___X2_4), (void*)value);
	}

	inline static int32_t get_offset_of_X3_5() { return static_cast<int32_t>(offsetof(Ads_t8DCCC8416DC818E87B92B88E0966AED5AA729A8F, ___X3_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_X3_5() const { return ___X3_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_X3_5() { return &___X3_5; }
	inline void set_X3_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___X3_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___X3_5), (void*)value);
	}

	inline static int32_t get_offset_of_SpriteX2_6() { return static_cast<int32_t>(offsetof(Ads_t8DCCC8416DC818E87B92B88E0966AED5AA729A8F, ___SpriteX2_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SpriteX2_6() const { return ___SpriteX2_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SpriteX2_6() { return &___SpriteX2_6; }
	inline void set_SpriteX2_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SpriteX2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpriteX2_6), (void*)value);
	}

	inline static int32_t get_offset_of_SpriteX3_7() { return static_cast<int32_t>(offsetof(Ads_t8DCCC8416DC818E87B92B88E0966AED5AA729A8F, ___SpriteX3_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SpriteX3_7() const { return ___SpriteX3_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SpriteX3_7() { return &___SpriteX3_7; }
	inline void set_SpriteX3_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SpriteX3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpriteX3_7), (void*)value);
	}
};


// AssemblyCSharp.Assets.Ads.AdsInitialize
struct  AdsInitialize_t98E231D219FCF0A94D7B39BA77193D7A0D380C92  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// AssemblyCSharp.Assets.Scripts.Levels.BaseLevel AssemblyCSharp.Assets.Ads.AdsInitialize::Base
	BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * ___Base_4;

public:
	inline static int32_t get_offset_of_Base_4() { return static_cast<int32_t>(offsetof(AdsInitialize_t98E231D219FCF0A94D7B39BA77193D7A0D380C92, ___Base_4)); }
	inline BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * get_Base_4() const { return ___Base_4; }
	inline BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 ** get_address_of_Base_4() { return &___Base_4; }
	inline void set_Base_4(BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * value)
	{
		___Base_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Base_4), (void*)value);
	}
};


// AssemblyCSharp.Assets.Scripts.Points.AreaGO
struct  AreaGO_t98118C83C02664A386549A9802DCCE82E6428D93  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent AssemblyCSharp.Assets.Scripts.Points.AreaGO::EventGO
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___EventGO_4;

public:
	inline static int32_t get_offset_of_EventGO_4() { return static_cast<int32_t>(offsetof(AreaGO_t98118C83C02664A386549A9802DCCE82E6428D93, ___EventGO_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_EventGO_4() const { return ___EventGO_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_EventGO_4() { return &___EventGO_4; }
	inline void set_EventGO_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___EventGO_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventGO_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BaseBuilding
struct  BaseBuilding_tEA6BCCE436C7BD4D4A065E05CA1FFE92B0122E21  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite BaseBuilding::LightGray
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___LightGray_4;
	// UnityEngine.Sprite BaseBuilding::Gray
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___Gray_5;

public:
	inline static int32_t get_offset_of_LightGray_4() { return static_cast<int32_t>(offsetof(BaseBuilding_tEA6BCCE436C7BD4D4A065E05CA1FFE92B0122E21, ___LightGray_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_LightGray_4() const { return ___LightGray_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_LightGray_4() { return &___LightGray_4; }
	inline void set_LightGray_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___LightGray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LightGray_4), (void*)value);
	}

	inline static int32_t get_offset_of_Gray_5() { return static_cast<int32_t>(offsetof(BaseBuilding_tEA6BCCE436C7BD4D4A065E05CA1FFE92B0122E21, ___Gray_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_Gray_5() const { return ___Gray_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_Gray_5() { return &___Gray_5; }
	inline void set_Gray_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___Gray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Gray_5), (void*)value);
	}
};


// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// Assets.Scripts.Building.Building
struct  Building_tFF0D4E4A16B17F9D1489AB449CD7B4D6B3AEA410  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource Assets.Scripts.Building.Building::Audio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___Audio_4;
	// UnityEngine.AudioClip Assets.Scripts.Building.Building::FallClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___FallClip_5;
	// UnityEngine.AudioClip Assets.Scripts.Building.Building::GameOverClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___GameOverClip_6;
	// System.Boolean Assets.Scripts.Building.Building::FellAlready
	bool ___FellAlready_7;

public:
	inline static int32_t get_offset_of_Audio_4() { return static_cast<int32_t>(offsetof(Building_tFF0D4E4A16B17F9D1489AB449CD7B4D6B3AEA410, ___Audio_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_Audio_4() const { return ___Audio_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_Audio_4() { return &___Audio_4; }
	inline void set_Audio_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___Audio_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Audio_4), (void*)value);
	}

	inline static int32_t get_offset_of_FallClip_5() { return static_cast<int32_t>(offsetof(Building_tFF0D4E4A16B17F9D1489AB449CD7B4D6B3AEA410, ___FallClip_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_FallClip_5() const { return ___FallClip_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_FallClip_5() { return &___FallClip_5; }
	inline void set_FallClip_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___FallClip_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FallClip_5), (void*)value);
	}

	inline static int32_t get_offset_of_GameOverClip_6() { return static_cast<int32_t>(offsetof(Building_tFF0D4E4A16B17F9D1489AB449CD7B4D6B3AEA410, ___GameOverClip_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_GameOverClip_6() const { return ___GameOverClip_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_GameOverClip_6() { return &___GameOverClip_6; }
	inline void set_GameOverClip_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___GameOverClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOverClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_FellAlready_7() { return static_cast<int32_t>(offsetof(Building_tFF0D4E4A16B17F9D1489AB449CD7B4D6B3AEA410, ___FellAlready_7)); }
	inline bool get_FellAlready_7() const { return ___FellAlready_7; }
	inline bool* get_address_of_FellAlready_7() { return &___FellAlready_7; }
	inline void set_FellAlready_7(bool value)
	{
		___FellAlready_7 = value;
	}
};


// ButtonPause
struct  ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button ButtonPause::Pause
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Pause_4;
	// UnityEngine.Sprite ButtonPause::OnImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___OnImage_5;
	// UnityEngine.Sprite ButtonPause::OffImage
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___OffImage_6;
	// UnityEngine.GameObject ButtonPause::ButtonStopGame
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ButtonStopGame_7;
	// UnityEngine.GameObject ButtonPause::TablePause
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TablePause_8;
	// UnityEngine.GameObject ButtonPause::EventClick
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___EventClick_9;
	// UnityEngine.GameObject ButtonPause::TableGameOver
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TableGameOver_10;
	// System.Boolean ButtonPause::IsPause
	bool ___IsPause_11;

public:
	inline static int32_t get_offset_of_Pause_4() { return static_cast<int32_t>(offsetof(ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1, ___Pause_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Pause_4() const { return ___Pause_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Pause_4() { return &___Pause_4; }
	inline void set_Pause_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Pause_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pause_4), (void*)value);
	}

	inline static int32_t get_offset_of_OnImage_5() { return static_cast<int32_t>(offsetof(ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1, ___OnImage_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_OnImage_5() const { return ___OnImage_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_OnImage_5() { return &___OnImage_5; }
	inline void set_OnImage_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___OnImage_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnImage_5), (void*)value);
	}

	inline static int32_t get_offset_of_OffImage_6() { return static_cast<int32_t>(offsetof(ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1, ___OffImage_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_OffImage_6() const { return ___OffImage_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_OffImage_6() { return &___OffImage_6; }
	inline void set_OffImage_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___OffImage_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OffImage_6), (void*)value);
	}

	inline static int32_t get_offset_of_ButtonStopGame_7() { return static_cast<int32_t>(offsetof(ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1, ___ButtonStopGame_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ButtonStopGame_7() const { return ___ButtonStopGame_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ButtonStopGame_7() { return &___ButtonStopGame_7; }
	inline void set_ButtonStopGame_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ButtonStopGame_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ButtonStopGame_7), (void*)value);
	}

	inline static int32_t get_offset_of_TablePause_8() { return static_cast<int32_t>(offsetof(ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1, ___TablePause_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TablePause_8() const { return ___TablePause_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TablePause_8() { return &___TablePause_8; }
	inline void set_TablePause_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TablePause_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TablePause_8), (void*)value);
	}

	inline static int32_t get_offset_of_EventClick_9() { return static_cast<int32_t>(offsetof(ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1, ___EventClick_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_EventClick_9() const { return ___EventClick_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_EventClick_9() { return &___EventClick_9; }
	inline void set_EventClick_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___EventClick_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventClick_9), (void*)value);
	}

	inline static int32_t get_offset_of_TableGameOver_10() { return static_cast<int32_t>(offsetof(ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1, ___TableGameOver_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TableGameOver_10() const { return ___TableGameOver_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TableGameOver_10() { return &___TableGameOver_10; }
	inline void set_TableGameOver_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TableGameOver_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TableGameOver_10), (void*)value);
	}

	inline static int32_t get_offset_of_IsPause_11() { return static_cast<int32_t>(offsetof(ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1, ___IsPause_11)); }
	inline bool get_IsPause_11() const { return ___IsPause_11; }
	inline bool* get_address_of_IsPause_11() { return &___IsPause_11; }
	inline void set_IsPause_11(bool value)
	{
		___IsPause_11 = value;
	}
};


// AssemblyCSharp.Assets.Scripts.Clouds.Cloud
struct  Cloud_t250B107B3A19EA06C2596C49DD26DB9CD48D38FC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single AssemblyCSharp.Assets.Scripts.Clouds.Cloud::Speed
	float ___Speed_4;

public:
	inline static int32_t get_offset_of_Speed_4() { return static_cast<int32_t>(offsetof(Cloud_t250B107B3A19EA06C2596C49DD26DB9CD48D38FC, ___Speed_4)); }
	inline float get_Speed_4() const { return ___Speed_4; }
	inline float* get_address_of_Speed_4() { return &___Speed_4; }
	inline void set_Speed_4(float value)
	{
		___Speed_4 = value;
	}
};


// AssemblyCSharp.Assets.Scripts.Crane.Crane
struct  Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent AssemblyCSharp.Assets.Scripts.Crane.Crane::MoveRight
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___MoveRight_4;
	// UnityEngine.Events.UnityEvent AssemblyCSharp.Assets.Scripts.Crane.Crane::MoveLeft
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___MoveLeft_5;
	// UnityEngine.Events.UnityEvent AssemblyCSharp.Assets.Scripts.Crane.Crane::MoveSpawn
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___MoveSpawn_6;
	// UnityEngine.Events.UnityEvent AssemblyCSharp.Assets.Scripts.Crane.Crane::MoveUp
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___MoveUp_7;
	// UnityEngine.Events.UnityEvent AssemblyCSharp.Assets.Scripts.Crane.Crane::ChangeSpeed
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___ChangeSpeed_8;
	// UnityEngine.Events.UnityEvent AssemblyCSharp.Assets.Scripts.Crane.Crane::TurnOnPointRight
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___TurnOnPointRight_9;
	// UnityEngine.Events.UnityEvent AssemblyCSharp.Assets.Scripts.Crane.Crane::TurnOffPointRight
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___TurnOffPointRight_10;
	// System.Boolean AssemblyCSharp.Assets.Scripts.Crane.Crane::IsSpawnBuilding
	bool ___IsSpawnBuilding_11;
	// System.Boolean AssemblyCSharp.Assets.Scripts.Crane.Crane::IsLeft
	bool ___IsLeft_12;
	// System.Boolean AssemblyCSharp.Assets.Scripts.Crane.Crane::IsRight
	bool ___IsRight_13;
	// System.Boolean AssemblyCSharp.Assets.Scripts.Crane.Crane::IsUp
	bool ___IsUp_14;
	// System.Boolean AssemblyCSharp.Assets.Scripts.Crane.Crane::IsFirstTime
	bool ___IsFirstTime_15;
	// UnityEngine.Events.UnityEvent AssemblyCSharp.Assets.Scripts.Crane.Crane::EventCollision
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___EventCollision_16;

public:
	inline static int32_t get_offset_of_MoveRight_4() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___MoveRight_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_MoveRight_4() const { return ___MoveRight_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_MoveRight_4() { return &___MoveRight_4; }
	inline void set_MoveRight_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___MoveRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveRight_4), (void*)value);
	}

	inline static int32_t get_offset_of_MoveLeft_5() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___MoveLeft_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_MoveLeft_5() const { return ___MoveLeft_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_MoveLeft_5() { return &___MoveLeft_5; }
	inline void set_MoveLeft_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___MoveLeft_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveLeft_5), (void*)value);
	}

	inline static int32_t get_offset_of_MoveSpawn_6() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___MoveSpawn_6)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_MoveSpawn_6() const { return ___MoveSpawn_6; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_MoveSpawn_6() { return &___MoveSpawn_6; }
	inline void set_MoveSpawn_6(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___MoveSpawn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveSpawn_6), (void*)value);
	}

	inline static int32_t get_offset_of_MoveUp_7() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___MoveUp_7)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_MoveUp_7() const { return ___MoveUp_7; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_MoveUp_7() { return &___MoveUp_7; }
	inline void set_MoveUp_7(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___MoveUp_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveUp_7), (void*)value);
	}

	inline static int32_t get_offset_of_ChangeSpeed_8() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___ChangeSpeed_8)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_ChangeSpeed_8() const { return ___ChangeSpeed_8; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_ChangeSpeed_8() { return &___ChangeSpeed_8; }
	inline void set_ChangeSpeed_8(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___ChangeSpeed_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChangeSpeed_8), (void*)value);
	}

	inline static int32_t get_offset_of_TurnOnPointRight_9() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___TurnOnPointRight_9)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_TurnOnPointRight_9() const { return ___TurnOnPointRight_9; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_TurnOnPointRight_9() { return &___TurnOnPointRight_9; }
	inline void set_TurnOnPointRight_9(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___TurnOnPointRight_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TurnOnPointRight_9), (void*)value);
	}

	inline static int32_t get_offset_of_TurnOffPointRight_10() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___TurnOffPointRight_10)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_TurnOffPointRight_10() const { return ___TurnOffPointRight_10; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_TurnOffPointRight_10() { return &___TurnOffPointRight_10; }
	inline void set_TurnOffPointRight_10(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___TurnOffPointRight_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TurnOffPointRight_10), (void*)value);
	}

	inline static int32_t get_offset_of_IsSpawnBuilding_11() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___IsSpawnBuilding_11)); }
	inline bool get_IsSpawnBuilding_11() const { return ___IsSpawnBuilding_11; }
	inline bool* get_address_of_IsSpawnBuilding_11() { return &___IsSpawnBuilding_11; }
	inline void set_IsSpawnBuilding_11(bool value)
	{
		___IsSpawnBuilding_11 = value;
	}

	inline static int32_t get_offset_of_IsLeft_12() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___IsLeft_12)); }
	inline bool get_IsLeft_12() const { return ___IsLeft_12; }
	inline bool* get_address_of_IsLeft_12() { return &___IsLeft_12; }
	inline void set_IsLeft_12(bool value)
	{
		___IsLeft_12 = value;
	}

	inline static int32_t get_offset_of_IsRight_13() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___IsRight_13)); }
	inline bool get_IsRight_13() const { return ___IsRight_13; }
	inline bool* get_address_of_IsRight_13() { return &___IsRight_13; }
	inline void set_IsRight_13(bool value)
	{
		___IsRight_13 = value;
	}

	inline static int32_t get_offset_of_IsUp_14() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___IsUp_14)); }
	inline bool get_IsUp_14() const { return ___IsUp_14; }
	inline bool* get_address_of_IsUp_14() { return &___IsUp_14; }
	inline void set_IsUp_14(bool value)
	{
		___IsUp_14 = value;
	}

	inline static int32_t get_offset_of_IsFirstTime_15() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___IsFirstTime_15)); }
	inline bool get_IsFirstTime_15() const { return ___IsFirstTime_15; }
	inline bool* get_address_of_IsFirstTime_15() { return &___IsFirstTime_15; }
	inline void set_IsFirstTime_15(bool value)
	{
		___IsFirstTime_15 = value;
	}

	inline static int32_t get_offset_of_EventCollision_16() { return static_cast<int32_t>(offsetof(Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C, ___EventCollision_16)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_EventCollision_16() const { return ___EventCollision_16; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_EventCollision_16() { return &___EventCollision_16; }
	inline void set_EventCollision_16(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___EventCollision_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventCollision_16), (void*)value);
	}
};


// AssemblyCSharp.Assets.Scripts.Loader.CraneLoader
struct  CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::IsRight
	bool ___IsRight_4;
	// System.Boolean AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::IsLeft
	bool ___IsLeft_5;
	// UnityEngine.Events.UnityEvent AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::MoveRight
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___MoveRight_6;
	// UnityEngine.Events.UnityEvent AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::MoveLeft
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___MoveLeft_7;

public:
	inline static int32_t get_offset_of_IsRight_4() { return static_cast<int32_t>(offsetof(CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3, ___IsRight_4)); }
	inline bool get_IsRight_4() const { return ___IsRight_4; }
	inline bool* get_address_of_IsRight_4() { return &___IsRight_4; }
	inline void set_IsRight_4(bool value)
	{
		___IsRight_4 = value;
	}

	inline static int32_t get_offset_of_IsLeft_5() { return static_cast<int32_t>(offsetof(CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3, ___IsLeft_5)); }
	inline bool get_IsLeft_5() const { return ___IsLeft_5; }
	inline bool* get_address_of_IsLeft_5() { return &___IsLeft_5; }
	inline void set_IsLeft_5(bool value)
	{
		___IsLeft_5 = value;
	}

	inline static int32_t get_offset_of_MoveRight_6() { return static_cast<int32_t>(offsetof(CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3, ___MoveRight_6)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_MoveRight_6() const { return ___MoveRight_6; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_MoveRight_6() { return &___MoveRight_6; }
	inline void set_MoveRight_6(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___MoveRight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveRight_6), (void*)value);
	}

	inline static int32_t get_offset_of_MoveLeft_7() { return static_cast<int32_t>(offsetof(CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3, ___MoveLeft_7)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_MoveLeft_7() const { return ___MoveLeft_7; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_MoveLeft_7() { return &___MoveLeft_7; }
	inline void set_MoveLeft_7(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___MoveLeft_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveLeft_7), (void*)value);
	}
};


// Assets.Scripts.Crane.FullCrane
struct  FullCrane_t31A4257B6DFBFE9E24DF37BAC482F87DB16B7B55  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera Assets.Scripts.Crane.FullCrane::Camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___Camera_4;
	// System.Int32 Assets.Scripts.Crane.FullCrane::SpeedUp
	int32_t ___SpeedUp_5;

public:
	inline static int32_t get_offset_of_Camera_4() { return static_cast<int32_t>(offsetof(FullCrane_t31A4257B6DFBFE9E24DF37BAC482F87DB16B7B55, ___Camera_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_Camera_4() const { return ___Camera_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_Camera_4() { return &___Camera_4; }
	inline void set_Camera_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___Camera_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Camera_4), (void*)value);
	}

	inline static int32_t get_offset_of_SpeedUp_5() { return static_cast<int32_t>(offsetof(FullCrane_t31A4257B6DFBFE9E24DF37BAC482F87DB16B7B55, ___SpeedUp_5)); }
	inline int32_t get_SpeedUp_5() const { return ___SpeedUp_5; }
	inline int32_t* get_address_of_SpeedUp_5() { return &___SpeedUp_5; }
	inline void set_SpeedUp_5(int32_t value)
	{
		___SpeedUp_5 = value;
	}
};


// GetRecord
struct  GetRecord_tC3CAB4A322CC2F7066BEB819E874913B0635CB45  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text GetRecord::Record
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Record_4;
	// System.String GetRecord::NameTextRecord
	String_t* ___NameTextRecord_5;

public:
	inline static int32_t get_offset_of_Record_4() { return static_cast<int32_t>(offsetof(GetRecord_tC3CAB4A322CC2F7066BEB819E874913B0635CB45, ___Record_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Record_4() const { return ___Record_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Record_4() { return &___Record_4; }
	inline void set_Record_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Record_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Record_4), (void*)value);
	}

	inline static int32_t get_offset_of_NameTextRecord_5() { return static_cast<int32_t>(offsetof(GetRecord_tC3CAB4A322CC2F7066BEB819E874913B0635CB45, ___NameTextRecord_5)); }
	inline String_t* get_NameTextRecord_5() const { return ___NameTextRecord_5; }
	inline String_t** get_address_of_NameTextRecord_5() { return &___NameTextRecord_5; }
	inline void set_NameTextRecord_5(String_t* value)
	{
		___NameTextRecord_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameTextRecord_5), (void*)value);
	}
};


// AssemblyCSharp.Assets.Scripts.Levels.Level
struct  Level_t383AE4BBBB6F2364DF233109902E12B8C05D80E5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// AssemblyCSharp.Assets.Scripts.Levels.BaseLevel AssemblyCSharp.Assets.Scripts.Levels.Level::Base
	BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * ___Base_4;

public:
	inline static int32_t get_offset_of_Base_4() { return static_cast<int32_t>(offsetof(Level_t383AE4BBBB6F2364DF233109902E12B8C05D80E5, ___Base_4)); }
	inline BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * get_Base_4() const { return ___Base_4; }
	inline BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 ** get_address_of_Base_4() { return &___Base_4; }
	inline void set_Base_4(BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * value)
	{
		___Base_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Base_4), (void*)value);
	}
};


// AssemblyCSharp.Assets.Scripts.Crane.MoveCrane
struct  MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single AssemblyCSharp.Assets.Scripts.Crane.MoveCrane::<Speed>k__BackingField
	float ___U3CSpeedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CSpeedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB, ___U3CSpeedU3Ek__BackingField_4)); }
	inline float get_U3CSpeedU3Ek__BackingField_4() const { return ___U3CSpeedU3Ek__BackingField_4; }
	inline float* get_address_of_U3CSpeedU3Ek__BackingField_4() { return &___U3CSpeedU3Ek__BackingField_4; }
	inline void set_U3CSpeedU3Ek__BackingField_4(float value)
	{
		___U3CSpeedU3Ek__BackingField_4 = value;
	}
};


// Music
struct  Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip Music::Music1
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Music1_4;
	// UnityEngine.AudioClip Music::Music2
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Music2_5;
	// UnityEngine.AudioClip Music::Music3
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Music3_6;
	// UnityEngine.AudioClip Music::Music4
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Music4_7;
	// UnityEngine.AudioClip Music::Music5
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___Music5_8;
	// UnityEngine.AudioClip[] Music::Musics
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___Musics_9;
	// UnityEngine.AudioSource Music::MusicSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___MusicSource_11;
	// UnityEngine.AudioClip Music::LastClip
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___LastClip_12;

public:
	inline static int32_t get_offset_of_Music1_4() { return static_cast<int32_t>(offsetof(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F, ___Music1_4)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Music1_4() const { return ___Music1_4; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Music1_4() { return &___Music1_4; }
	inline void set_Music1_4(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Music1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Music1_4), (void*)value);
	}

	inline static int32_t get_offset_of_Music2_5() { return static_cast<int32_t>(offsetof(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F, ___Music2_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Music2_5() const { return ___Music2_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Music2_5() { return &___Music2_5; }
	inline void set_Music2_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Music2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Music2_5), (void*)value);
	}

	inline static int32_t get_offset_of_Music3_6() { return static_cast<int32_t>(offsetof(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F, ___Music3_6)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Music3_6() const { return ___Music3_6; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Music3_6() { return &___Music3_6; }
	inline void set_Music3_6(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Music3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Music3_6), (void*)value);
	}

	inline static int32_t get_offset_of_Music4_7() { return static_cast<int32_t>(offsetof(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F, ___Music4_7)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Music4_7() const { return ___Music4_7; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Music4_7() { return &___Music4_7; }
	inline void set_Music4_7(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Music4_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Music4_7), (void*)value);
	}

	inline static int32_t get_offset_of_Music5_8() { return static_cast<int32_t>(offsetof(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F, ___Music5_8)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_Music5_8() const { return ___Music5_8; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_Music5_8() { return &___Music5_8; }
	inline void set_Music5_8(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___Music5_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Music5_8), (void*)value);
	}

	inline static int32_t get_offset_of_Musics_9() { return static_cast<int32_t>(offsetof(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F, ___Musics_9)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_Musics_9() const { return ___Musics_9; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_Musics_9() { return &___Musics_9; }
	inline void set_Musics_9(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___Musics_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Musics_9), (void*)value);
	}

	inline static int32_t get_offset_of_MusicSource_11() { return static_cast<int32_t>(offsetof(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F, ___MusicSource_11)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_MusicSource_11() const { return ___MusicSource_11; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_MusicSource_11() { return &___MusicSource_11; }
	inline void set_MusicSource_11(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___MusicSource_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MusicSource_11), (void*)value);
	}

	inline static int32_t get_offset_of_LastClip_12() { return static_cast<int32_t>(offsetof(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F, ___LastClip_12)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get_LastClip_12() const { return ___LastClip_12; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of_LastClip_12() { return &___LastClip_12; }
	inline void set_LastClip_12(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		___LastClip_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LastClip_12), (void*)value);
	}
};

struct Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_StaticFields
{
public:
	// Music Music::MusicInstance
	Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * ___MusicInstance_10;

public:
	inline static int32_t get_offset_of_MusicInstance_10() { return static_cast<int32_t>(offsetof(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_StaticFields, ___MusicInstance_10)); }
	inline Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * get_MusicInstance_10() const { return ___MusicInstance_10; }
	inline Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F ** get_address_of_MusicInstance_10() { return &___MusicInstance_10; }
	inline void set_MusicInstance_10(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * value)
	{
		___MusicInstance_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MusicInstance_10), (void*)value);
	}
};


// MusicButton
struct  MusicButton_tE4A555F4C61CF8C24F1DE1650A3D517149A3E0EE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite MusicButton::TurnOff
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___TurnOff_4;
	// UnityEngine.Sprite MusicButton::TurnOn
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___TurnOn_5;

public:
	inline static int32_t get_offset_of_TurnOff_4() { return static_cast<int32_t>(offsetof(MusicButton_tE4A555F4C61CF8C24F1DE1650A3D517149A3E0EE, ___TurnOff_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_TurnOff_4() const { return ___TurnOff_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_TurnOff_4() { return &___TurnOff_4; }
	inline void set_TurnOff_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___TurnOff_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TurnOff_4), (void*)value);
	}

	inline static int32_t get_offset_of_TurnOn_5() { return static_cast<int32_t>(offsetof(MusicButton_tE4A555F4C61CF8C24F1DE1650A3D517149A3E0EE, ___TurnOn_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_TurnOn_5() const { return ___TurnOn_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_TurnOn_5() { return &___TurnOn_5; }
	inline void set_TurnOn_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___TurnOn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TurnOn_5), (void*)value);
	}
};


// Assets.Scripts.Points.PointLeft
struct  PointLeft_t8E54EAB6B921BAA6096C739EF25572B3F8788BEC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent Assets.Scripts.Points.PointLeft::EventLeft
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___EventLeft_4;

public:
	inline static int32_t get_offset_of_EventLeft_4() { return static_cast<int32_t>(offsetof(PointLeft_t8E54EAB6B921BAA6096C739EF25572B3F8788BEC, ___EventLeft_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_EventLeft_4() const { return ___EventLeft_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_EventLeft_4() { return &___EventLeft_4; }
	inline void set_EventLeft_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___EventLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventLeft_4), (void*)value);
	}
};


// Assets.Scripts.Points.PointRight
struct  PointRight_tD7B011B84070278D657F7D68F0570584226FABFC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent Assets.Scripts.Points.PointRight::EventRight
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___EventRight_4;
	// UnityEngine.Collider2D Assets.Scripts.Points.PointRight::Collider
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___Collider_5;

public:
	inline static int32_t get_offset_of_EventRight_4() { return static_cast<int32_t>(offsetof(PointRight_tD7B011B84070278D657F7D68F0570584226FABFC, ___EventRight_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_EventRight_4() const { return ___EventRight_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_EventRight_4() { return &___EventRight_4; }
	inline void set_EventRight_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___EventRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventRight_4), (void*)value);
	}

	inline static int32_t get_offset_of_Collider_5() { return static_cast<int32_t>(offsetof(PointRight_tD7B011B84070278D657F7D68F0570584226FABFC, ___Collider_5)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_Collider_5() const { return ___Collider_5; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_Collider_5() { return &___Collider_5; }
	inline void set_Collider_5(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___Collider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Collider_5), (void*)value);
	}
};


// Assets.Scripts.Points.PointSpawn
struct  PointSpawn_t1C0D69FFE23A748F66497A9075758725A2466FD3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent Assets.Scripts.Points.PointSpawn::EventSpawn
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___EventSpawn_4;

public:
	inline static int32_t get_offset_of_EventSpawn_4() { return static_cast<int32_t>(offsetof(PointSpawn_t1C0D69FFE23A748F66497A9075758725A2466FD3, ___EventSpawn_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_EventSpawn_4() const { return ___EventSpawn_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_EventSpawn_4() { return &___EventSpawn_4; }
	inline void set_EventSpawn_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___EventSpawn_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventSpawn_4), (void*)value);
	}
};


// Quit
struct  Quit_t390EF75E1E4AA071D5D1A4911600D450776363D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// AssemblyCSharp.Assets.Scripts.Buttons.Restart.Restart
struct  Restart_tFAE6D95F16B1DB4215B71F928737F624665A1BD0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Rules
struct  Rules_tFD7922E991F7DC42880D116739BCEED4AAB36F5D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent Rules::EventFirstTime
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___EventFirstTime_4;
	// UnityEngine.Events.UnityEvent Rules::EventNextTime
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___EventNextTime_5;

public:
	inline static int32_t get_offset_of_EventFirstTime_4() { return static_cast<int32_t>(offsetof(Rules_tFD7922E991F7DC42880D116739BCEED4AAB36F5D, ___EventFirstTime_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_EventFirstTime_4() const { return ___EventFirstTime_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_EventFirstTime_4() { return &___EventFirstTime_4; }
	inline void set_EventFirstTime_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___EventFirstTime_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventFirstTime_4), (void*)value);
	}

	inline static int32_t get_offset_of_EventNextTime_5() { return static_cast<int32_t>(offsetof(Rules_tFD7922E991F7DC42880D116739BCEED4AAB36F5D, ___EventNextTime_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_EventNextTime_5() const { return ___EventNextTime_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_EventNextTime_5() { return &___EventNextTime_5; }
	inline void set_EventNextTime_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___EventNextTime_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventNextTime_5), (void*)value);
	}
};


// Assets.Scripts.Score
struct  Score_t960DA7E8E63C60FFE82B970C5CEE780C97AFEEA3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text Assets.Scripts.Score::Text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Text_4;
	// UnityEngine.UI.Text Assets.Scripts.Score::ScoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___ScoreText_5;
	// TextOfTheFloors Assets.Scripts.Score::TextFloor
	TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 * ___TextFloor_6;
	// UnityEngine.GameObject Assets.Scripts.Score::TextOfFloor
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TextOfFloor_7;

public:
	inline static int32_t get_offset_of_Text_4() { return static_cast<int32_t>(offsetof(Score_t960DA7E8E63C60FFE82B970C5CEE780C97AFEEA3, ___Text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Text_4() const { return ___Text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Text_4() { return &___Text_4; }
	inline void set_Text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Text_4), (void*)value);
	}

	inline static int32_t get_offset_of_ScoreText_5() { return static_cast<int32_t>(offsetof(Score_t960DA7E8E63C60FFE82B970C5CEE780C97AFEEA3, ___ScoreText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_ScoreText_5() const { return ___ScoreText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_ScoreText_5() { return &___ScoreText_5; }
	inline void set_ScoreText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___ScoreText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ScoreText_5), (void*)value);
	}

	inline static int32_t get_offset_of_TextFloor_6() { return static_cast<int32_t>(offsetof(Score_t960DA7E8E63C60FFE82B970C5CEE780C97AFEEA3, ___TextFloor_6)); }
	inline TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 * get_TextFloor_6() const { return ___TextFloor_6; }
	inline TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 ** get_address_of_TextFloor_6() { return &___TextFloor_6; }
	inline void set_TextFloor_6(TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 * value)
	{
		___TextFloor_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextFloor_6), (void*)value);
	}

	inline static int32_t get_offset_of_TextOfFloor_7() { return static_cast<int32_t>(offsetof(Score_t960DA7E8E63C60FFE82B970C5CEE780C97AFEEA3, ___TextOfFloor_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TextOfFloor_7() const { return ___TextOfFloor_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TextOfFloor_7() { return &___TextOfFloor_7; }
	inline void set_TextOfFloor_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TextOfFloor_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextOfFloor_7), (void*)value);
	}
};


// AssemblyCSharp.Assets.Scripts.Buttons.ShowHidden
struct  ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Buttons.ShowHidden::Play
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Play_4;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Buttons.ShowHidden::Quit
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Quit_5;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Buttons.ShowHidden::NameGame
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___NameGame_6;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Buttons.ShowHidden::Data
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Data_7;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Buttons.ShowHidden::AboutMe
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___AboutMe_8;

public:
	inline static int32_t get_offset_of_Play_4() { return static_cast<int32_t>(offsetof(ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE, ___Play_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Play_4() const { return ___Play_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Play_4() { return &___Play_4; }
	inline void set_Play_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Play_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Play_4), (void*)value);
	}

	inline static int32_t get_offset_of_Quit_5() { return static_cast<int32_t>(offsetof(ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE, ___Quit_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Quit_5() const { return ___Quit_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Quit_5() { return &___Quit_5; }
	inline void set_Quit_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Quit_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Quit_5), (void*)value);
	}

	inline static int32_t get_offset_of_NameGame_6() { return static_cast<int32_t>(offsetof(ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE, ___NameGame_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_NameGame_6() const { return ___NameGame_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_NameGame_6() { return &___NameGame_6; }
	inline void set_NameGame_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___NameGame_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameGame_6), (void*)value);
	}

	inline static int32_t get_offset_of_Data_7() { return static_cast<int32_t>(offsetof(ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE, ___Data_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Data_7() const { return ___Data_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Data_7() { return &___Data_7; }
	inline void set_Data_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Data_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Data_7), (void*)value);
	}

	inline static int32_t get_offset_of_AboutMe_8() { return static_cast<int32_t>(offsetof(ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE, ___AboutMe_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_AboutMe_8() const { return ___AboutMe_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_AboutMe_8() { return &___AboutMe_8; }
	inline void set_AboutMe_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___AboutMe_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AboutMe_8), (void*)value);
	}
};


// AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding
struct  SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingOne
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingOne_4;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingTwo
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingTwo_5;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingThree
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingThree_6;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingFour
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingFour_7;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingFive
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingFive_8;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingSix
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingSix_9;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingSeven
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingSeven_10;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingEigth
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingEigth_11;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingNine
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingNine_12;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingTen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingTen_13;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingEleven
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingEleven_14;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingTwelve
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingTwelve_15;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingThirteen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingThirteen_16;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingFourteen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingFourteen_17;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingFifteen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingFifteen_18;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingSixteen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingSixteen_19;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingSeventeen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingSeventeen_20;
	// UnityEngine.GameObject AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::BuildingEighteen
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BuildingEighteen_21;
	// UnityEngine.GameObject[0...,0...] AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::ArrayBuildings
	GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* ___ArrayBuildings_22;
	// UnityEngine.Transform AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::PointSpawn
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___PointSpawn_23;
	// AssemblyCSharp.Assets.Scripts.Crane.Generator AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::Generator
	Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186 * ___Generator_24;
	// System.Int32 AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::NumberArray
	int32_t ___NumberArray_25;
	// System.Int32 AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::RandomNumber
	int32_t ___RandomNumber_26;
	// System.Int32 AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::NumberOfFloors
	int32_t ___NumberOfFloors_27;

public:
	inline static int32_t get_offset_of_BuildingOne_4() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingOne_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingOne_4() const { return ___BuildingOne_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingOne_4() { return &___BuildingOne_4; }
	inline void set_BuildingOne_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingOne_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingOne_4), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingTwo_5() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingTwo_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingTwo_5() const { return ___BuildingTwo_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingTwo_5() { return &___BuildingTwo_5; }
	inline void set_BuildingTwo_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingTwo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingTwo_5), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingThree_6() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingThree_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingThree_6() const { return ___BuildingThree_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingThree_6() { return &___BuildingThree_6; }
	inline void set_BuildingThree_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingThree_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingThree_6), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingFour_7() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingFour_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingFour_7() const { return ___BuildingFour_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingFour_7() { return &___BuildingFour_7; }
	inline void set_BuildingFour_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingFour_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingFour_7), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingFive_8() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingFive_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingFive_8() const { return ___BuildingFive_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingFive_8() { return &___BuildingFive_8; }
	inline void set_BuildingFive_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingFive_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingFive_8), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingSix_9() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingSix_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingSix_9() const { return ___BuildingSix_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingSix_9() { return &___BuildingSix_9; }
	inline void set_BuildingSix_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingSix_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingSix_9), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingSeven_10() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingSeven_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingSeven_10() const { return ___BuildingSeven_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingSeven_10() { return &___BuildingSeven_10; }
	inline void set_BuildingSeven_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingSeven_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingSeven_10), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingEigth_11() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingEigth_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingEigth_11() const { return ___BuildingEigth_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingEigth_11() { return &___BuildingEigth_11; }
	inline void set_BuildingEigth_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingEigth_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingEigth_11), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingNine_12() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingNine_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingNine_12() const { return ___BuildingNine_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingNine_12() { return &___BuildingNine_12; }
	inline void set_BuildingNine_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingNine_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingNine_12), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingTen_13() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingTen_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingTen_13() const { return ___BuildingTen_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingTen_13() { return &___BuildingTen_13; }
	inline void set_BuildingTen_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingTen_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingTen_13), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingEleven_14() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingEleven_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingEleven_14() const { return ___BuildingEleven_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingEleven_14() { return &___BuildingEleven_14; }
	inline void set_BuildingEleven_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingEleven_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingEleven_14), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingTwelve_15() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingTwelve_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingTwelve_15() const { return ___BuildingTwelve_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingTwelve_15() { return &___BuildingTwelve_15; }
	inline void set_BuildingTwelve_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingTwelve_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingTwelve_15), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingThirteen_16() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingThirteen_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingThirteen_16() const { return ___BuildingThirteen_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingThirteen_16() { return &___BuildingThirteen_16; }
	inline void set_BuildingThirteen_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingThirteen_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingThirteen_16), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingFourteen_17() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingFourteen_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingFourteen_17() const { return ___BuildingFourteen_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingFourteen_17() { return &___BuildingFourteen_17; }
	inline void set_BuildingFourteen_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingFourteen_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingFourteen_17), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingFifteen_18() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingFifteen_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingFifteen_18() const { return ___BuildingFifteen_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingFifteen_18() { return &___BuildingFifteen_18; }
	inline void set_BuildingFifteen_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingFifteen_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingFifteen_18), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingSixteen_19() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingSixteen_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingSixteen_19() const { return ___BuildingSixteen_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingSixteen_19() { return &___BuildingSixteen_19; }
	inline void set_BuildingSixteen_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingSixteen_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingSixteen_19), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingSeventeen_20() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingSeventeen_20)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingSeventeen_20() const { return ___BuildingSeventeen_20; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingSeventeen_20() { return &___BuildingSeventeen_20; }
	inline void set_BuildingSeventeen_20(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingSeventeen_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingSeventeen_20), (void*)value);
	}

	inline static int32_t get_offset_of_BuildingEighteen_21() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___BuildingEighteen_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BuildingEighteen_21() const { return ___BuildingEighteen_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BuildingEighteen_21() { return &___BuildingEighteen_21; }
	inline void set_BuildingEighteen_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BuildingEighteen_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuildingEighteen_21), (void*)value);
	}

	inline static int32_t get_offset_of_ArrayBuildings_22() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___ArrayBuildings_22)); }
	inline GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* get_ArrayBuildings_22() const { return ___ArrayBuildings_22; }
	inline GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9** get_address_of_ArrayBuildings_22() { return &___ArrayBuildings_22; }
	inline void set_ArrayBuildings_22(GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* value)
	{
		___ArrayBuildings_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ArrayBuildings_22), (void*)value);
	}

	inline static int32_t get_offset_of_PointSpawn_23() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___PointSpawn_23)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_PointSpawn_23() const { return ___PointSpawn_23; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_PointSpawn_23() { return &___PointSpawn_23; }
	inline void set_PointSpawn_23(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___PointSpawn_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PointSpawn_23), (void*)value);
	}

	inline static int32_t get_offset_of_Generator_24() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___Generator_24)); }
	inline Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186 * get_Generator_24() const { return ___Generator_24; }
	inline Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186 ** get_address_of_Generator_24() { return &___Generator_24; }
	inline void set_Generator_24(Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186 * value)
	{
		___Generator_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Generator_24), (void*)value);
	}

	inline static int32_t get_offset_of_NumberArray_25() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___NumberArray_25)); }
	inline int32_t get_NumberArray_25() const { return ___NumberArray_25; }
	inline int32_t* get_address_of_NumberArray_25() { return &___NumberArray_25; }
	inline void set_NumberArray_25(int32_t value)
	{
		___NumberArray_25 = value;
	}

	inline static int32_t get_offset_of_RandomNumber_26() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___RandomNumber_26)); }
	inline int32_t get_RandomNumber_26() const { return ___RandomNumber_26; }
	inline int32_t* get_address_of_RandomNumber_26() { return &___RandomNumber_26; }
	inline void set_RandomNumber_26(int32_t value)
	{
		___RandomNumber_26 = value;
	}

	inline static int32_t get_offset_of_NumberOfFloors_27() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4, ___NumberOfFloors_27)); }
	inline int32_t get_NumberOfFloors_27() const { return ___NumberOfFloors_27; }
	inline int32_t* get_address_of_NumberOfFloors_27() { return &___NumberOfFloors_27; }
	inline void set_NumberOfFloors_27(int32_t value)
	{
		___NumberOfFloors_27 = value;
	}
};

struct SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_StaticFields
{
public:
	// System.Action AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::EventSpawn
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___EventSpawn_28;

public:
	inline static int32_t get_offset_of_EventSpawn_28() { return static_cast<int32_t>(offsetof(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_StaticFields, ___EventSpawn_28)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_EventSpawn_28() const { return ___EventSpawn_28; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_EventSpawn_28() { return &___EventSpawn_28; }
	inline void set_EventSpawn_28(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___EventSpawn_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventSpawn_28), (void*)value);
	}
};


// SpawnClouds
struct  SpawnClouds_t96DA08FAE86706D7EC2EC90DE5AC970497234BC5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject SpawnClouds::CloudObj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CloudObj_4;

public:
	inline static int32_t get_offset_of_CloudObj_4() { return static_cast<int32_t>(offsetof(SpawnClouds_t96DA08FAE86706D7EC2EC90DE5AC970497234BC5, ___CloudObj_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CloudObj_4() const { return ___CloudObj_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CloudObj_4() { return &___CloudObj_4; }
	inline void set_CloudObj_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CloudObj_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CloudObj_4), (void*)value);
	}
};


// TextOfTheFloors
struct  TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text TextOfTheFloors::TextFloors
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TextFloors_4;
	// UnityEngine.Events.UnityEvent TextOfTheFloors::EventChangeText
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___EventChangeText_5;
	// System.Int32 TextOfTheFloors::Result
	int32_t ___Result_6;
	// System.Int32 TextOfTheFloors::FirstRecord
	int32_t ___FirstRecord_7;
	// System.Int32 TextOfTheFloors::SecondRecord
	int32_t ___SecondRecord_8;
	// UnityEngine.Events.UnityEvent`1<System.Int32> TextOfTheFloors::EventRecord
	UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * ___EventRecord_9;

public:
	inline static int32_t get_offset_of_TextFloors_4() { return static_cast<int32_t>(offsetof(TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5, ___TextFloors_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TextFloors_4() const { return ___TextFloors_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TextFloors_4() { return &___TextFloors_4; }
	inline void set_TextFloors_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TextFloors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TextFloors_4), (void*)value);
	}

	inline static int32_t get_offset_of_EventChangeText_5() { return static_cast<int32_t>(offsetof(TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5, ___EventChangeText_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_EventChangeText_5() const { return ___EventChangeText_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_EventChangeText_5() { return &___EventChangeText_5; }
	inline void set_EventChangeText_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___EventChangeText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventChangeText_5), (void*)value);
	}

	inline static int32_t get_offset_of_Result_6() { return static_cast<int32_t>(offsetof(TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5, ___Result_6)); }
	inline int32_t get_Result_6() const { return ___Result_6; }
	inline int32_t* get_address_of_Result_6() { return &___Result_6; }
	inline void set_Result_6(int32_t value)
	{
		___Result_6 = value;
	}

	inline static int32_t get_offset_of_FirstRecord_7() { return static_cast<int32_t>(offsetof(TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5, ___FirstRecord_7)); }
	inline int32_t get_FirstRecord_7() const { return ___FirstRecord_7; }
	inline int32_t* get_address_of_FirstRecord_7() { return &___FirstRecord_7; }
	inline void set_FirstRecord_7(int32_t value)
	{
		___FirstRecord_7 = value;
	}

	inline static int32_t get_offset_of_SecondRecord_8() { return static_cast<int32_t>(offsetof(TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5, ___SecondRecord_8)); }
	inline int32_t get_SecondRecord_8() const { return ___SecondRecord_8; }
	inline int32_t* get_address_of_SecondRecord_8() { return &___SecondRecord_8; }
	inline void set_SecondRecord_8(int32_t value)
	{
		___SecondRecord_8 = value;
	}

	inline static int32_t get_offset_of_EventRecord_9() { return static_cast<int32_t>(offsetof(TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5, ___EventRecord_9)); }
	inline UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * get_EventRecord_9() const { return ___EventRecord_9; }
	inline UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF ** get_address_of_EventRecord_9() { return &___EventRecord_9; }
	inline void set_EventRecord_9(UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * value)
	{
		___EventRecord_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventRecord_9), (void*)value);
	}
};


// Trigger
struct  Trigger_tBC1A4B5644EA74E47F0406196C6706050977FA4E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Events.UnityEvent Trigger::EventUp
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___EventUp_4;
	// UnityEngine.Events.UnityEvent Trigger::EventStop
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___EventStop_5;

public:
	inline static int32_t get_offset_of_EventUp_4() { return static_cast<int32_t>(offsetof(Trigger_tBC1A4B5644EA74E47F0406196C6706050977FA4E, ___EventUp_4)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_EventUp_4() const { return ___EventUp_4; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_EventUp_4() { return &___EventUp_4; }
	inline void set_EventUp_4(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___EventUp_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventUp_4), (void*)value);
	}

	inline static int32_t get_offset_of_EventStop_5() { return static_cast<int32_t>(offsetof(Trigger_tBC1A4B5644EA74E47F0406196C6706050977FA4E, ___EventStop_5)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_EventStop_5() const { return ___EventStop_5; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_EventStop_5() { return &___EventStop_5; }
	inline void set_EventStop_5(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___EventStop_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventStop_5), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Record
struct  Record_t10FEA7B5972258F9A949A81DD517DF6226BD6F8D  : public ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE
{
public:

public:
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_gshared (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, int32_t ___arg00, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Advertisements.Advertisement::get_isInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Advertisement_get_isInitialized_mB5903A36D04BA275B1CE3348213BB636FAE29495 (const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Show(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Show_m0FFAACDAFCF01DFFFA56C99B76127F758C85D278 (String_t* ___placementId0, const RuntimeMethod* method);
// System.Void Ads::HideButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ads_HideButton_m5C75FF93B8EA2E0C392492F365F92265B3E0F141 (Ads_t8DCCC8416DC818E87B92B88E0966AED5AA729A8F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void AssemblyCSharp.Assets.Scripts.Levels.BaseLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseLevel__ctor_mE08C0F17BFEBDD7DABF11C258C24C8004C245277 (BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Advertisements.Advertisement::Initialize(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Advertisement_Initialize_mC6D70356A2E5939829CE867C668E9BC32FF6F988 (String_t* ___gameId0, bool ___testMode1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void AssemblyCSharp.Assets.Scripts.Levels.BaseLevel::LoadMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseLevel_LoadMenu_m73CA42166A0DE9FD49ECE030CF92C0C9DE97C2DC (BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Collider2D::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Collider2D_get_offset_m63144560DFF782608BA6627DE192D6337821995C (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Collider2D::set_offset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38 (Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  BoxCollider2D_get_size_m011E7AA7861BF58898A64D986A4235C1E2061BF9 (BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider2D::set_size(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760 (BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void BaseBuilding::SetSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseBuilding_SetSprite_m63CAECB897D4A4640E70B00069A84E0547559791 (BaseBuilding_tEA6BCCE436C7BD4D4A065E05CA1FFE92B0122E21 * __this, const RuntimeMethod* method);
// System.Int32 BaseBuilding::GetParity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseBuilding_GetParity_mB84BD4997A01CBFB2A4384E0073CF5642792A771 (BaseBuilding_tEA6BCCE436C7BD4D4A065E05CA1FFE92B0122E21 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827 (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void AssemblyCSharp.Assets.Scripts.Clouds.Cloud::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cloud_Move_mD2CE0EB18690399EC087A5B2F20F2F204D5A23B2 (Cloud_t250B107B3A19EA06C2596C49DD26DB9CD48D38FC * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::ManagerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_ManagerMove_m82173002F4C5A82204198AA150B6FBDD8A3503C3 (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method);
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::Move(AssemblyCSharp.Assets.Scripts.Crane.StateCrane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_Move_m7ACA468C3B9C0A844D4815744817C1924BF64293 (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::ManagerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CraneLoader_ManagerMove_m18D7E81B74EB04D52134768028F2B4AC7EA90C65 (CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3 * __this, const RuntimeMethod* method);
// System.Void AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::Move(AssemblyCSharp.Assets.Scripts.Crane.StateCrane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CraneLoader_Move_mAF1A8F4B2E99729A086A512200BE11F08DC34A17 (CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3 * __this, int32_t ___state0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void AssemblyCSharp.Assets.Scripts.Levels.BaseLevel::LoadInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseLevel_LoadInfinity_m907B3C61C31CB948DD2D2DC5F831AE107F5FCB6C (BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF (const RuntimeMethod* method);
// System.Single AssemblyCSharp.Assets.Scripts.Crane.MoveCrane::get_Speed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MoveCrane_get_Speed_m0A7A820BA8FAF2DE3FF0429DE184F7D0CDF9AB83_inline (MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB * __this, const RuntimeMethod* method);
// System.Void AssemblyCSharp.Assets.Scripts.Crane.MoveCrane::set_Speed(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MoveCrane_set_Speed_mD709D3186AF39620484A677DBF6A431D8445245A_inline (MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB * __this, float ___value0, const RuntimeMethod* method);
// System.Void Music::PlayRandomClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Music_PlayRandomClip_mAF7A0C26A08204CD74CDBA2502DB546D41237FE5 (Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Void MusicButton::GetMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicButton_GetMusic_m1C54838C4FCEBF9A276E6FFF10F09E4EE02EFB89 (MusicButton_tE4A555F4C61CF8C24F1DE1650A3D517149A3E0EE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void AssemblyCSharp.Assets.Scripts.Buttons.ShowHidden::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowHidden__ctor_m47D79654D8B3C4F31585AB3CF15E021FB310997F (ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE * __this, const RuntimeMethod* method);
// System.Void Rules::CheckFirstTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rules_CheckFirstTime_m55010A2845703D3F57E8FF871D558FBAFE8D4F4B (Rules_tFD7922E991F7DC42880D116739BCEED4AAB36F5D * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m85FE22B779E69576B3251DEC1E27BC8004485288 (int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<TextOfTheFloors>()
inline TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 * GameObject_GetComponent_TisTextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5_mDD3D9C969865074EB9FD0406315FFA02F336FF95 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2 (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *, UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *, const RuntimeMethod*))UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_gshared)(__this, ___call0, method);
}
// System.Void Assets.Scripts.Score::GetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_GetText_m4F024650E2A09C8DD217093AFC535B30CA1B0439 (Score_t960DA7E8E63C60FFE82B970C5CEE780C97AFEEA3 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Generator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator__ctor_mF97955AC8BFC7E89FB29B7DB121588494241567D (Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Int32 AssemblyCSharp.Assets.Scripts.Crane.Generator::GenerateRandomNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Generator_GenerateRandomNumber_m8E7DDB730B15A8AD952AE7C4474A8C1D73CA9205 (Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186 * __this, int32_t ___numberOfFloors0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void SpawnClouds::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnClouds_Spawn_m418203C2CF2F6D70203AA5D625CB8989A83D2317 (SpawnClouds_t96DA08FAE86706D7EC2EC90DE5AC970497234BC5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(!0)
inline void UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530 (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF *, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
// System.Void Ads::HideButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ads_HideButton_m5C75FF93B8EA2E0C392492F365F92265B3E0F141 (Ads_t8DCCC8416DC818E87B92B88E0966AED5AA729A8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// X2.GetComponent<Image>().sprite = SpriteX2;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_X2_4();
		NullCheck(L_0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1;
		L_1 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_0, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_SpriteX2_6();
		NullCheck(L_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_1, L_2, /*hidden argument*/NULL);
		// X2.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_X2_4();
		NullCheck(L_3);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_3, (bool)0, /*hidden argument*/NULL);
		// X3.GetComponent<Image>().sprite = SpriteX3;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_X3_5();
		NullCheck(L_4);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5;
		L_5 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_4, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = __this->get_SpriteX3_7();
		NullCheck(L_5);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_5, L_6, /*hidden argument*/NULL);
		// X3.interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = __this->get_X3_5();
		NullCheck(L_7);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ads::ShowAds(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ads_ShowAds_m22CCE9FB0369A8FBED63EEE4A674D37E7AEE1540 (Ads_t8DCCC8416DC818E87B92B88E0966AED5AA729A8F * __this, String_t* ___nameAds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_t05979DABE3C57D3AFE739C5776027CE11F4EB7E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Advertisement.isInitialized)
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t05979DABE3C57D3AFE739C5776027CE11F4EB7E8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Advertisement_get_isInitialized_mB5903A36D04BA275B1CE3348213BB636FAE29495(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// Advertisement.Show(nameAds);
		String_t* L_1 = ___nameAds0;
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t05979DABE3C57D3AFE739C5776027CE11F4EB7E8_il2cpp_TypeInfo_var);
		Advertisement_Show_m0FFAACDAFCF01DFFFA56C99B76127F758C85D278(L_1, /*hidden argument*/NULL);
	}

IL_000d:
	{
		// HideButton();
		Ads_HideButton_m5C75FF93B8EA2E0C392492F365F92265B3E0F141(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Ads::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ads__ctor_mBAFDF16CDD85DCC6A843CD76DDF20ECEC80AA91E (Ads_t8DCCC8416DC818E87B92B88E0966AED5AA729A8F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AssemblyCSharp.Assets.Ads.AdsInitialize::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitialize_Start_mC17066B4BBEDE2B4AA3EBEA5DD870F7BA82E0F62 (AdsInitialize_t98E231D219FCF0A94D7B39BA77193D7A0D380C92 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Advertisement_t05979DABE3C57D3AFE739C5776027CE11F4EB7E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD89179999423E4F200B06CE7390E47A4F8E59B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6695A8FCC90609904AFFDF0E14492DF51EE8942);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Advertisement.isInitialized)
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t05979DABE3C57D3AFE739C5776027CE11F4EB7E8_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Advertisement_get_isInitialized_mB5903A36D04BA275B1CE3348213BB636FAE29495(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		// Base = new BaseLevel();
		BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * L_1 = (BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 *)il2cpp_codegen_object_new(BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716_il2cpp_TypeInfo_var);
		BaseLevel__ctor_mE08C0F17BFEBDD7DABF11C258C24C8004C245277(L_1, /*hidden argument*/NULL);
		__this->set_Base_4(L_1);
		// Advertisement.Initialize("3902229", false);
		IL2CPP_RUNTIME_CLASS_INIT(Advertisement_t05979DABE3C57D3AFE739C5776027CE11F4EB7E8_il2cpp_TypeInfo_var);
		Advertisement_Initialize_mC6D70356A2E5939829CE867C668E9BC32FF6F988(_stringLiteralD6695A8FCC90609904AFFDF0E14492DF51EE8942, (bool)0, /*hidden argument*/NULL);
		// Invoke("LoadMenu", 3f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralCD89179999423E4F200B06CE7390E47A4F8E59B1, (3.0f), /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Ads.AdsInitialize::LoadMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitialize_LoadMenu_m1DFD573FFB2672CD6A5E2CE89C71DCC6B96C946F (AdsInitialize_t98E231D219FCF0A94D7B39BA77193D7A0D380C92 * __this, const RuntimeMethod* method)
{
	{
		// Base.LoadMenu();
		BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * L_0 = __this->get_Base_4();
		NullCheck(L_0);
		BaseLevel_LoadMenu_m73CA42166A0DE9FD49ECE030CF92C0C9DE97C2DC(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Ads.AdsInitialize::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdsInitialize__ctor_m2B8287897F4D7157EDC0455FBD236E7631A017C4 (AdsInitialize_t98E231D219FCF0A94D7B39BA77193D7A0D380C92 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AssemblyCSharp.Assets.Scripts.Points.AreaGO::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AreaGO_OnTriggerStay2D_m6FDB965462C71CF23833FBEA52726AC59496ECB4 (AreaGO_t98118C83C02664A386549A9802DCCE82E6428D93 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B3_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	{
		// if (col.gameObject.tag == "Building")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// EventGO?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = __this->get_EventGO_4();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B3_0, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Points.AreaGO::ChangeHeightCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AreaGO_ChangeHeightCollider_m3712A453F2C3F1822D2A28B4C3A635628B0D42C4 (AreaGO_t98118C83C02664A386549A9802DCCE82E6428D93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<BoxCollider2D>().offset = new Vector2(0f, gameObject.GetComponent<BoxCollider2D>().offset.y - 1.5f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C(L_0, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_3;
		L_3 = GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C(L_2, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C_RuntimeMethod_var);
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Collider2D_get_offset_m63144560DFF782608BA6627DE192D6337821995C(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), (0.0f), ((float)il2cpp_codegen_subtract((float)L_5, (float)(1.5f))), /*hidden argument*/NULL);
		NullCheck(L_1);
		Collider2D_set_offset_m496DDE5487C59E9E8D6B468E8918EE1EFC625E38(L_1, L_6, /*hidden argument*/NULL);
		// gameObject.GetComponent<BoxCollider2D>().size = new Vector2(1, gameObject.GetComponent<BoxCollider2D>().size.y + 3f);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_8;
		L_8 = GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C(L_7, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_10;
		L_10 = GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C(L_9, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C_RuntimeMethod_var);
		NullCheck(L_10);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = BoxCollider2D_get_size_m011E7AA7861BF58898A64D986A4235C1E2061BF9(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_13), (1.0f), ((float)il2cpp_codegen_add((float)L_12, (float)(3.0f))), /*hidden argument*/NULL);
		NullCheck(L_8);
		BoxCollider2D_set_size_m8460A38ADDD4BE82BE1F416DE3D7AFB87EBA6760(L_8, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Points.AreaGO::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AreaGO__ctor_m27A3BD3157FB2F6694EB4A4CDA1C04A71E6932D6 (AreaGO_t98118C83C02664A386549A9802DCCE82E6428D93 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BaseBuilding::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseBuilding_Start_mF9E3786535F6F4C46B934AE104A057B46F6E9AC3 (BaseBuilding_tEA6BCCE436C7BD4D4A065E05CA1FFE92B0122E21 * __this, const RuntimeMethod* method)
{
	{
		// SetSprite();
		BaseBuilding_SetSprite_m63CAECB897D4A4640E70B00069A84E0547559791(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BaseBuilding::SetSprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseBuilding_SetSprite_m63CAECB897D4A4640E70B00069A84E0547559791 (BaseBuilding_tEA6BCCE436C7BD4D4A065E05CA1FFE92B0122E21 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (GetParity() != 0)
		int32_t L_0;
		L_0 = BaseBuilding_GetParity_mB84BD4997A01CBFB2A4384E0073CF5642792A771(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		// gameObject.GetComponent<SpriteRenderer>().sprite = LightGray;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_1, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = __this->get_LightGray_4();
		NullCheck(L_2);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_2, L_3, /*hidden argument*/NULL);
		// }
		goto IL_0036;
	}

IL_0020:
	{
		// gameObject.GetComponent<SpriteRenderer>().sprite = Gray;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5;
		L_5 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_4, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = __this->get_Gray_5();
		NullCheck(L_5);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// gameObject.AddComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_8;
		L_8 = GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310(L_7, /*hidden argument*/GameObject_AddComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mBA70B6609B066A5B5023A12A3CF92199A2CC8310_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 BaseBuilding::GetParity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseBuilding_GetParity_mB84BD4997A01CBFB2A4384E0073CF5642792A771 (BaseBuilding_tEA6BCCE436C7BD4D4A065E05CA1FFE92B0122E21 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0021AC5AC95A0A5C19FA408516B7B9AB9C2FC6A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753D2F1D8AFBFC4863CC0FE16F4B105A6D77FD83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (PlayerPrefs.GetInt("FirstRecord") + PlayerPrefs.GetInt("SecondRecord")) % 2;
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral753D2F1D8AFBFC4863CC0FE16F4B105A6D77FD83, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral0021AC5AC95A0A5C19FA408516B7B9AB9C2FC6A2, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))%(int32_t)2));
	}
}
// System.Void BaseBuilding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseBuilding__ctor_m53F324EE40C9E19B7144E4FAD63DCED7707BF501 (BaseBuilding_tEA6BCCE436C7BD4D4A065E05CA1FFE92B0122E21 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AssemblyCSharp.Assets.Scripts.Levels.BaseLevel::LoadInfinity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseLevel_LoadInfinity_m907B3C61C31CB948DD2D2DC5F831AE107F5FCB6C (BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// SceneManager.LoadScene(2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Levels.BaseLevel::LoadMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseLevel_LoadMenu_m73CA42166A0DE9FD49ECE030CF92C0C9DE97C2DC (BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Levels.BaseLevel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseLevel__ctor_mE08C0F17BFEBDD7DABF11C258C24C8004C245277 (BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Assets.Scripts.Building.Building::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_Start_m11A1D2CE71DD5812CE570650902848607D9E92D1 (Building_tFF0D4E4A16B17F9D1489AB449CD7B4D6B3AEA410 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Audio = gameObject.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		__this->set_Audio_4(L_1);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Building.Building::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_OnCollisionEnter2D_m3B86CC2C2B82BB85C4E63C3E9EFAE5DD8BB0E399 (Building_tFF0D4E4A16B17F9D1489AB449CD7B4D6B3AEA410 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD50AEC80D16CFABEE291C403053E2600869C843A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.name.Equals("Crane"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, _stringLiteralD50AEC80D16CFABEE291C403053E2600869C843A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		// gameObject.transform.parent = col.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_6 = ___col0;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Collision2D_get_transform_mC5A1F1938F67668E8B6BDE1048C727C8578AD827(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_5, L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// if (col.gameObject.tag.Equals("Building"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_8 = ___col0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_10, _stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// if (!FellAlready)
		bool L_12 = __this->get_FellAlready_7();
		if (L_12)
		{
			goto IL_0064;
		}
	}
	{
		// Audio.PlayOneShot(FallClip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = __this->get_Audio_4();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_14 = __this->get_FallClip_5();
		NullCheck(L_13);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_13, L_14, /*hidden argument*/NULL);
		// FellAlready = true;
		__this->set_FellAlready_7((bool)1);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void Assets.Scripts.Building.Building::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building_OnCollisionExit2D_m38F4966A21DF4DD23445E661B42A52AF4A6DC477 (Building_tFF0D4E4A16B17F9D1489AB449CD7B4D6B3AEA410 * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD50AEC80D16CFABEE291C403053E2600869C843A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.name.Equals("Crane"))
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, _stringLiteralD50AEC80D16CFABEE291C403053E2600869C843A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// gameObject.transform.parent = null;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_5, (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Assets.Scripts.Building.Building::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Building__ctor_mA17CF33C0BD2E9C452C054C1D42456275685BD16 (Building_tFF0D4E4A16B17F9D1489AB449CD7B4D6B3AEA410 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ButtonPause::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonPause_Start_mBF0A2A3644203A2BDE450FD69738C9079D7F79C2 (ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TableGameOver.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_TableGameOver_10();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// TablePause.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_TablePause_8();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// EventClick.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_EventClick_9();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// ButtonStopGame.GetComponent<Image>().sprite = OnImage;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_ButtonStopGame_7();
		NullCheck(L_3);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_3, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = __this->get_OnImage_5();
		NullCheck(L_4);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonPause::StopOrContinueGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonPause_StopOrContinueGame_m88E967C739B7BC32A77DC69CC3AD741D37880CEF (ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!IsPause)
		bool L_0 = __this->get_IsPause_11();
		if (L_0)
		{
			goto IL_0048;
		}
	}
	{
		// TablePause.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_TablePause_8();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// EventClick.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_EventClick_9();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// ButtonStopGame.GetComponent<Image>().sprite = OffImage;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_ButtonStopGame_7();
		NullCheck(L_3);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_3, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = __this->get_OffImage_6();
		NullCheck(L_4);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		// IsPause = true;
		__this->set_IsPause_11((bool)1);
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0048:
	{
		// TablePause.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_TablePause_8();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// EventClick.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_EventClick_9();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// ButtonStopGame.GetComponent<Image>().sprite = OnImage;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_ButtonStopGame_7();
		NullCheck(L_8);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9;
		L_9 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_8, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = __this->get_OnImage_5();
		NullCheck(L_9);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_9, L_10, /*hidden argument*/NULL);
		// IsPause = false;
		__this->set_IsPause_11((bool)0);
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonPause::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonPause_GameOver_m7331B04457FA4A7C965FD52DDA4F966657573774 (ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1 * __this, const RuntimeMethod* method)
{
	{
		// Pause.enabled = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_Pause_4();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// TableGameOver.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_TableGameOver_10();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonPause::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonPause__ctor_m8B362597736EBC559A22FF8101788A77A2EFEF4C (ButtonPause_t9581E3964D05106519F8F500C8546B4342FED4F1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AssemblyCSharp.Assets.Scripts.Clouds.Cloud::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cloud_FixedUpdate_m7658B70A9A6712720B1D89802E9F47C5C8E17116 (Cloud_t250B107B3A19EA06C2596C49DD26DB9CD48D38FC * __this, const RuntimeMethod* method)
{
	{
		// Move();
		Cloud_Move_mD2CE0EB18690399EC087A5B2F20F2F204D5A23B2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Clouds.Cloud::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cloud_Move_mD2CE0EB18690399EC087A5B2F20F2F204D5A23B2 (Cloud_t250B107B3A19EA06C2596C49DD26DB9CD48D38FC * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(Vector2.left * Speed * Time.deltaTime); 
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_2 = __this->get_Speed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Clouds.Cloud::OnBecameInvisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cloud_OnBecameInvisible_m933EB7BBD2A5295D6B59E3E514443F8997F8AF16 (Cloud_t250B107B3A19EA06C2596C49DD26DB9CD48D38FC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Clouds.Cloud::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cloud__ctor_m457B80043DEB16C379B52D3255E7808BD1A956D9 (Cloud_t250B107B3A19EA06C2596C49DD26DB9CD48D38FC * __this, const RuntimeMethod* method)
{
	{
		// private float Speed = 1.5f;
		__this->set_Speed_4((1.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_FixedUpdate_m783008B7C32391F69F96503061CF8AFC07FBCB6B (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method)
{
	{
		// ManagerMove();
		Crane_ManagerMove_m82173002F4C5A82204198AA150B6FBDD8A3503C3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::ManagerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_ManagerMove_m82173002F4C5A82204198AA150B6FBDD8A3503C3 (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B7_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B6_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B14_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B13_0 = NULL;
	{
		// if (!IsFirstTime)
		bool L_0 = __this->get_IsFirstTime_15();
		if (L_0)
		{
			goto IL_00b9;
		}
	}
	{
		// if (!IsSpawnBuilding && (IsLeft || IsRight) && !IsUp) 
		bool L_1 = __this->get_IsSpawnBuilding_11();
		if (L_1)
		{
			goto IL_0043;
		}
	}
	{
		bool L_2 = __this->get_IsLeft_12();
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		bool L_3 = __this->get_IsRight_13();
		if (!L_3)
		{
			goto IL_0043;
		}
	}

IL_0023:
	{
		bool L_4 = __this->get_IsUp_14();
		if (L_4)
		{
			goto IL_0043;
		}
	}
	{
		// Move(StateCrane.Spawn);
		Crane_Move_m7ACA468C3B9C0A844D4815744817C1924BF64293(__this, 2, /*hidden argument*/NULL);
		// TurnOffPointRight?.Invoke(); 
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_5 = __this->get_TurnOffPointRight_10();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_6 = L_5;
		G_B6_0 = L_6;
		if (L_6)
		{
			G_B7_0 = L_6;
			goto IL_003e;
		}
	}
	{
		goto IL_0043;
	}

IL_003e:
	{
		NullCheck(G_B7_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B7_0, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// if (IsSpawnBuilding && !IsLeft && IsRight && !IsUp) 
		bool L_7 = __this->get_IsSpawnBuilding_11();
		if (!L_7)
		{
			goto IL_007b;
		}
	}
	{
		bool L_8 = __this->get_IsLeft_12();
		if (L_8)
		{
			goto IL_007b;
		}
	}
	{
		bool L_9 = __this->get_IsRight_13();
		if (!L_9)
		{
			goto IL_007b;
		}
	}
	{
		bool L_10 = __this->get_IsUp_14();
		if (L_10)
		{
			goto IL_007b;
		}
	}
	{
		// Move(StateCrane.Right);
		Crane_Move_m7ACA468C3B9C0A844D4815744817C1924BF64293(__this, 1, /*hidden argument*/NULL);
		// TurnOnPointRight?.Invoke(); 
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_11 = __this->get_TurnOnPointRight_9();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_12 = L_11;
		G_B13_0 = L_12;
		if (L_12)
		{
			G_B14_0 = L_12;
			goto IL_0076;
		}
	}
	{
		goto IL_007b;
	}

IL_0076:
	{
		NullCheck(G_B14_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B14_0, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// if (IsSpawnBuilding && IsLeft && !IsRight && !IsUp) 
		bool L_13 = __this->get_IsSpawnBuilding_11();
		if (!L_13)
		{
			goto IL_00a2;
		}
	}
	{
		bool L_14 = __this->get_IsLeft_12();
		if (!L_14)
		{
			goto IL_00a2;
		}
	}
	{
		bool L_15 = __this->get_IsRight_13();
		if (L_15)
		{
			goto IL_00a2;
		}
	}
	{
		bool L_16 = __this->get_IsUp_14();
		if (L_16)
		{
			goto IL_00a2;
		}
	}
	{
		// Move(StateCrane.Left);
		Crane_Move_m7ACA468C3B9C0A844D4815744817C1924BF64293(__this, 0, /*hidden argument*/NULL);
	}

IL_00a2:
	{
		// if (IsUp && !IsSpawnBuilding)
		bool L_17 = __this->get_IsUp_14();
		if (!L_17)
		{
			goto IL_00b9;
		}
	}
	{
		bool L_18 = __this->get_IsSpawnBuilding_11();
		if (L_18)
		{
			goto IL_00b9;
		}
	}
	{
		// Move(StateCrane.Up);
		Crane_Move_m7ACA468C3B9C0A844D4815744817C1924BF64293(__this, 3, /*hidden argument*/NULL);
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::Move(AssemblyCSharp.Assets.Scripts.Crane.StateCrane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_Move_m7ACA468C3B9C0A844D4815744817C1924BF64293 (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, int32_t ___state0, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B7_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B6_0 = NULL;
	{
		int32_t L_0 = ___state0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_002f;
			}
			case 3:
			{
				goto IL_003b;
			}
		}
	}
	{
		return;
	}

IL_0017:
	{
		// MoveLeft.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_MoveLeft_5();
		NullCheck(L_1);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0023:
	{
		// MoveRight.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = __this->get_MoveRight_4();
		NullCheck(L_2);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_2, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_002f:
	{
		// MoveSpawn.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = __this->get_MoveSpawn_6();
		NullCheck(L_3);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_3, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_003b:
	{
		// MoveUp?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = __this->get_MoveUp_7();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_5 = L_4;
		G_B6_0 = L_5;
		if (L_5)
		{
			G_B7_0 = L_5;
			goto IL_0046;
		}
	}
	{
		return;
	}

IL_0046:
	{
		NullCheck(G_B7_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B7_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::SetSpawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_SetSpawn_m46283B76E90FC63948901A80FC787B1E931E15CA (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method)
{
	{
		// IsSpawnBuilding = true;
		__this->set_IsSpawnBuilding_11((bool)1);
		// IsRight = false;
		__this->set_IsRight_13((bool)0);
		// IsLeft = true;
		__this->set_IsLeft_12((bool)1);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::SetLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_SetLeft_m622203EB0679DE7A34CD06345CAD5671D8E1C840 (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method)
{
	{
		// IsRight = false;
		__this->set_IsRight_13((bool)0);
		// IsLeft = true;
		__this->set_IsLeft_12((bool)1);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::SetRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_SetRight_m5417121A4D63F49617F0F42E93F86BAB98C6F35F (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method)
{
	{
		// IsRight = true;
		__this->set_IsRight_13((bool)1);
		// IsLeft = false;
		__this->set_IsLeft_12((bool)0);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::SetTrueUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_SetTrueUp_m72C9136CA3EEEB576B73A55911F113B6AFB83151 (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method)
{
	{
		// IsUp = true;
		__this->set_IsUp_14((bool)1);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::SetFalseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_SetFalseUp_mA8E78623D9EC31350EB3F3631DC981339EB29CCD (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method)
{
	{
		// IsUp = false;
		__this->set_IsUp_14((bool)0);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::DetachmentBlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_DetachmentBlock_mA33F4D7E47D600813C0F81ABD9AB680A8C29E956 (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B3_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B8_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B7_0 = NULL;
	{
		// if (IsSpawnBuilding)
		bool L_0 = __this->get_IsSpawnBuilding_11();
		if (!L_0)
		{
			goto IL_0087;
		}
	}
	{
		// ChangeSpeed?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_ChangeSpeed_8();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0014:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B3_0, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// IsUp = true;
		__this->set_IsUp_14((bool)1);
		// foreach (Transform Child in transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006c;
		}

IL_002e:
		{
			// foreach (Transform Child in transform)
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			RuntimeObject * L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_5);
			// Child.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_6, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var));
			NullCheck(L_7);
			Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_8;
			L_8 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(L_7, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
			NullCheck(L_8);
			Rigidbody2D_set_bodyType_m8D34999918D42B2DF16FAAB4F237A8663EA8406B(L_8, 0, /*hidden argument*/NULL);
			// Child.gameObject.tag = "Building";
			NullCheck(L_7);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
			L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
			NullCheck(L_9);
			GameObject_set_tag_m0EBA46574304C71E047A33BDD5F5D49E9D9A25BE(L_9, _stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC, /*hidden argument*/NULL);
			// IsSpawnBuilding = false;
			__this->set_IsSpawnBuilding_11((bool)0);
			// EventCollision?.Invoke();
			UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_10 = __this->get_EventCollision_16();
			UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_11 = L_10;
			G_B7_0 = L_11;
			if (L_11)
			{
				G_B8_0 = L_11;
				goto IL_0067;
			}
		}

IL_0064:
		{
			goto IL_006c;
		}

IL_0067:
		{
			NullCheck(G_B8_0);
			UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B8_0, /*hidden argument*/NULL);
		}

IL_006c:
		{
			// foreach (Transform Child in transform)
			RuntimeObject* L_12 = V_0;
			NullCheck(L_12);
			bool L_13;
			L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_002e;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x87, FINALLY_0076);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0076;
	}

FINALLY_0076:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_15 = V_1;
			if (!L_15)
			{
				goto IL_0086;
			}
		}

IL_0080:
		{
			RuntimeObject* L_16 = V_1;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_16);
		}

IL_0086:
		{
			IL2CPP_END_FINALLY(118)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(118)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x87, IL_0087)
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::SetTrueFirstTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_SetTrueFirstTime_m43842A91299E462E69031F8AC36FAF0F33BD131F (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method)
{
	{
		// IsFirstTime = true;
		__this->set_IsFirstTime_15((bool)1);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::SetFalseFirstTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane_SetFalseFirstTime_m5A14D45E6ADE195FFE0760DBC9C8575839CDF8A0 (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method)
{
	{
		// IsFirstTime = false;
		__this->set_IsFirstTime_15((bool)0);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Crane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Crane__ctor_mFA1E90BE26B661B8C257BCB7E556E68E4743C0E1 (Crane_t9FFD93BB4CEF5382677BAE1ECC9FAA2492477A7C * __this, const RuntimeMethod* method)
{
	{
		// private bool IsLeft = true; 
		__this->set_IsLeft_12((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CraneLoader_Update_m1EC0D946AC92DE179D6E213E793E1AB1F02617F5 (CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3 * __this, const RuntimeMethod* method)
{
	{
		// ManagerMove();
		CraneLoader_ManagerMove_m18D7E81B74EB04D52134768028F2B4AC7EA90C65(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::ManagerMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CraneLoader_ManagerMove_m18D7E81B74EB04D52134768028F2B4AC7EA90C65 (CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3 * __this, const RuntimeMethod* method)
{
	{
		// if(IsRight && !IsLeft)
		bool L_0 = __this->get_IsRight_4();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->get_IsLeft_5();
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Move(StateCrane.Right);
		CraneLoader_Move_mAF1A8F4B2E99729A086A512200BE11F08DC34A17(__this, 1, /*hidden argument*/NULL);
	}

IL_0017:
	{
		// if(!IsRight && IsLeft)
		bool L_2 = __this->get_IsRight_4();
		if (L_2)
		{
			goto IL_002e;
		}
	}
	{
		bool L_3 = __this->get_IsLeft_5();
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Move(StateCrane.Left);
		CraneLoader_Move_mAF1A8F4B2E99729A086A512200BE11F08DC34A17(__this, 0, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::Move(AssemblyCSharp.Assets.Scripts.Crane.StateCrane)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CraneLoader_Move_mAF1A8F4B2E99729A086A512200BE11F08DC34A17 (CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B5_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B4_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B8_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B7_0 = NULL;
	{
		int32_t L_0 = ___state0;
		if (!L_0)
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_1 = ___state0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		return;
	}

IL_0008:
	{
		// MoveLeft?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = __this->get_MoveLeft_7();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = L_2;
		G_B4_0 = L_3;
		if (L_3)
		{
			G_B5_0 = L_3;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NullCheck(G_B5_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B5_0, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0019:
	{
		// MoveRight?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = __this->get_MoveRight_6();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_5 = L_4;
		G_B7_0 = L_5;
		if (L_5)
		{
			G_B8_0 = L_5;
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		NullCheck(G_B8_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B8_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::SetLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CraneLoader_SetLeft_m3D71A3D12EC50FDE5A14D20A616B30A4CF6CB6EE (CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3 * __this, const RuntimeMethod* method)
{
	{
		// IsRight = false;
		__this->set_IsRight_4((bool)0);
		// IsLeft = true;
		__this->set_IsLeft_5((bool)1);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::SetRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CraneLoader_SetRight_m3B4E5FD56D4871B614C793E7BA9D2730501C1143 (CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3 * __this, const RuntimeMethod* method)
{
	{
		// IsRight = true;
		__this->set_IsRight_4((bool)1);
		// IsLeft = false;
		__this->set_IsLeft_5((bool)0);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Loader.CraneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CraneLoader__ctor_m57FF2BDE46425AEFB9B68137BCD8951B1261F4E5 (CraneLoader_t09BE918B50C313BA8AB6CED3A148172A91962BD3 * __this, const RuntimeMethod* method)
{
	{
		// private bool IsRight = true;
		__this->set_IsRight_4((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Assets.Scripts.Crane.FullCrane::MoveUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FullCrane_MoveUp_mE22D170A4149BC5CD455126C419C9ACFB635D354 (FullCrane_t31A4257B6DFBFE9E24DF37BAC482F87DB16B7B55 * __this, const RuntimeMethod* method)
{
	{
		// Camera.transform.Translate(Vector2.up * SpeedUp * Time.deltaTime);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_Camera_4();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		int32_t L_3 = __this->get_SpeedUp_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_2, ((float)((float)L_3)), /*hidden argument*/NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_4, L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_1, L_7, /*hidden argument*/NULL);
		// transform.Translate(Vector2.up * SpeedUp * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		int32_t L_10 = __this->get_SpeedUp_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_9, ((float)((float)L_10)), /*hidden argument*/NULL);
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13;
		L_13 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_11, L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_8, L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Crane.FullCrane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FullCrane__ctor_mA42AA5DC1F01CF9B1A10783DFCE3885F4B7866DE (FullCrane_t31A4257B6DFBFE9E24DF37BAC482F87DB16B7B55 * __this, const RuntimeMethod* method)
{
	{
		// private int SpeedUp = 4;
		__this->set_SpeedUp_5(4);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AssemblyCSharp.Assets.Scripts.Crane.Generator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Generator__ctor_mF97955AC8BFC7E89FB29B7DB121588494241567D (Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Generator()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Random = new Random();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_0 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_mF40AD1812BABC06235B661CCE513E4F74EEE9F05(L_0, /*hidden argument*/NULL);
		__this->set_Random_0(L_0);
		// }
		return;
	}
}
// System.Int32 AssemblyCSharp.Assets.Scripts.Crane.Generator::GenerateRandomNumber(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Generator_GenerateRandomNumber_m8E7DDB730B15A8AD952AE7C4474A8C1D73CA9205 (Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186 * __this, int32_t ___numberOfFloors0, const RuntimeMethod* method)
{
	{
		// if (numberOfFloors < 10)
		int32_t L_0 = ___numberOfFloors0;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0013;
		}
	}
	{
		// return Random.Next(0, 2);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = __this->get_Random_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_1, 0, 2);
		return L_2;
	}

IL_0013:
	{
		// else if (numberOfFloors > 10 && numberOfFloors <= 45)
		int32_t L_3 = ___numberOfFloors0;
		if ((((int32_t)L_3) <= ((int32_t)((int32_t)10))))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = ___numberOfFloors0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)45))))
		{
			goto IL_002b;
		}
	}
	{
		// return Random.Next(3, 5);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_5 = __this->get_Random_0();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_5, 3, 5);
		return L_6;
	}

IL_002b:
	{
		// else if(numberOfFloors > 45)
		int32_t L_7 = ___numberOfFloors0;
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)45))))
		{
			goto IL_003e;
		}
	}
	{
		// return Random.Next(6, 8);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_8 = __this->get_Random_0();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_8, 6, 8);
		return L_9;
	}

IL_003e:
	{
		// return 1; 
		return 1;
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
// System.Void GetRecord::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecord_Start_m7BA3C6DC1ACF4579BA8FD8BB72893A7CC3A02222 (GetRecord_tC3CAB4A322CC2F7066BEB819E874913B0635CB45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Record = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_Record_4(L_0);
		// Record.text = PlayerPrefs.GetInt(NameTextRecord).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_Record_4();
		String_t* L_2 = __this->get_NameTextRecord_5();
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4;
		L_4 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		// }
		return;
	}
}
// System.Void GetRecord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetRecord__ctor_mC44C3D97A413A3F95F72F3BCBCE58DD00ACB376C (GetRecord_tC3CAB4A322CC2F7066BEB819E874913B0635CB45 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AssemblyCSharp.Assets.Scripts.Levels.Level::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_Start_m16E4140743ED1BBB01D9FC447DAC3319ECE510C9 (Level_t383AE4BBBB6F2364DF233109902E12B8C05D80E5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Base = new BaseLevel();
		BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * L_0 = (BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 *)il2cpp_codegen_object_new(BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716_il2cpp_TypeInfo_var);
		BaseLevel__ctor_mE08C0F17BFEBDD7DABF11C258C24C8004C245277(L_0, /*hidden argument*/NULL);
		__this->set_Base_4(L_0);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Levels.Level::LoadInfinityLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_LoadInfinityLevel_m6EE582055D4DD538AFD022E6F8CE27BD700F6F80 (Level_t383AE4BBBB6F2364DF233109902E12B8C05D80E5 * __this, const RuntimeMethod* method)
{
	{
		// Base.LoadInfinity();
		BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * L_0 = __this->get_Base_4();
		NullCheck(L_0);
		BaseLevel_LoadInfinity_m907B3C61C31CB948DD2D2DC5F831AE107F5FCB6C(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Levels.Level::LoadMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level_LoadMenu_m9C2C68E11E23332F063987547D26D61B1496E432 (Level_t383AE4BBBB6F2364DF233109902E12B8C05D80E5 * __this, const RuntimeMethod* method)
{
	{
		// Base.LoadMenu();
		BaseLevel_t3F1C95555FDD9720936E19201D5941A1FB383716 * L_0 = __this->get_Base_4();
		NullCheck(L_0);
		BaseLevel_LoadMenu_m73CA42166A0DE9FD49ECE030CF92C0C9DE97C2DC(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Levels.Level::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Level__ctor_m66400E34E16EEE16E8BCD6807F5BF0A0E9ED84E5 (Level_t383AE4BBBB6F2364DF233109902E12B8C05D80E5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Single AssemblyCSharp.Assets.Scripts.Crane.MoveCrane::get_Speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MoveCrane_get_Speed_m0A7A820BA8FAF2DE3FF0429DE184F7D0CDF9AB83 (MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB * __this, const RuntimeMethod* method)
{
	{
		// private float Speed { get; set; } = 4f;
		float L_0 = __this->get_U3CSpeedU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.MoveCrane::set_Speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCrane_set_Speed_mD709D3186AF39620484A677DBF6A431D8445245A (MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// private float Speed { get; set; } = 4f;
		float L_0 = ___value0;
		__this->set_U3CSpeedU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.MoveCrane::MoveRight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCrane_MoveRight_m8E1657E1386B76B1E32F52EB7A5C80A738E96356 (MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB * __this, float ___coef0, const RuntimeMethod* method)
{
	{
		// transform.Translate(Vector2.right * Speed * coef * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_right_m42ED15112D219375D2B6879E62ED925D002F15AF(/*hidden argument*/NULL);
		float L_2;
		L_2 = MoveCrane_get_Speed_m0A7A820BA8FAF2DE3FF0429DE184F7D0CDF9AB83_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = ___coef0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.MoveCrane::MoveLeft(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCrane_MoveLeft_m5935CD461A6E889917876BD81266CBE17E390973 (MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB * __this, float ___coef0, const RuntimeMethod* method)
{
	{
		// transform.Translate(Vector2.left * Speed * coef * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_2;
		L_2 = MoveCrane_get_Speed_m0A7A820BA8FAF2DE3FF0429DE184F7D0CDF9AB83_inline(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = ___coef0;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_5, L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_7, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.MoveCrane::ChangeSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCrane_ChangeSpeed_mFFB8EDAF77CDE129009799DD73C88E663345D56B (MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB * __this, const RuntimeMethod* method)
{
	{
		// if(Speed < 10)
		float L_0;
		L_0 = MoveCrane_get_Speed_m0A7A820BA8FAF2DE3FF0429DE184F7D0CDF9AB83_inline(__this, /*hidden argument*/NULL);
		if ((!(((float)L_0) < ((float)(10.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		// Speed += 0.2f;
		float L_1;
		L_1 = MoveCrane_get_Speed_m0A7A820BA8FAF2DE3FF0429DE184F7D0CDF9AB83_inline(__this, /*hidden argument*/NULL);
		MoveCrane_set_Speed_mD709D3186AF39620484A677DBF6A431D8445245A_inline(__this, ((float)il2cpp_codegen_add((float)L_1, (float)(0.200000003f))), /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.MoveCrane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCrane__ctor_m258B89D49BCBCBF862F9D7A60773C0A72D4CC728 (MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB * __this, const RuntimeMethod* method)
{
	{
		// private float Speed { get; set; } = 4f;
		__this->set_U3CSpeedU3Ek__BackingField_4((4.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Music::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Music_Start_m5EC9503404FCF51C506943FB581C28EA45C5523D (Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Musics = new AudioClip[5] {
		// Music1,
		// Music2,
		// Music3,
		// Music4,
		// Music5
		// };
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = (AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE*)SZArrayNew(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE_il2cpp_TypeInfo_var, (uint32_t)5);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = L_0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = __this->get_Music1_4();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_2);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_3 = L_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = __this->get_Music2_5();
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_4);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_5 = L_3;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = __this->get_Music3_6();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_6);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_7 = L_5;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_8 = __this->get_Music4_7();
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_8);
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_9 = L_7;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_10 = __this->get_Music5_8();
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE *)L_10);
		__this->set_Musics_9(L_9);
		// MusicSource = gameObject.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_12;
		L_12 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_11, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		__this->set_MusicSource_11(L_12);
		// PlayRandomClip();
		Music_PlayRandomClip_mAF7A0C26A08204CD74CDBA2502DB546D41237FE5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Music::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Music_Awake_m847F55C954841FFD6852DBE7F6D063F9C37D3E23 (Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (MusicInstance != null && MusicInstance != this)
		Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * L_0 = ((Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_StaticFields*)il2cpp_codegen_static_fields_for(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_il2cpp_TypeInfo_var))->get_MusicInstance_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * L_2 = ((Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_StaticFields*)il2cpp_codegen_static_fields_for(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_il2cpp_TypeInfo_var))->get_MusicInstance_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0026:
	{
		// MusicInstance = this;
		((Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_StaticFields*)il2cpp_codegen_static_fields_for(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_il2cpp_TypeInfo_var))->set_MusicInstance_10(__this);
		// DontDestroyOnLoad(this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Music::PlayRandomClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Music_PlayRandomClip_mAF7A0C26A08204CD74CDBA2502DB546D41237FE5 (Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB604B894767E03370B687089F53E8675CBB26BE0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * V_1 = NULL;
	{
		// int Attempts = 3;
		V_0 = 3;
		// AudioClip NewClip = Musics[Random.Range(0, Musics.Length)]; 
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = __this->get_Musics_9();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_1 = __this->get_Musics_9();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		goto IL_0034;
	}

IL_001a:
	{
		// NewClip = Musics[Random.Range(0, Musics.Length)];
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_5 = __this->get_Musics_9();
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_6 = __this->get_Musics_9();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_8 = L_7;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_1 = L_9;
		// Attempts--;
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
	}

IL_0034:
	{
		// while (NewClip == LastClip && Attempts > 0) 
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = V_1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_12 = __this->get_LastClip_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_001a;
		}
	}

IL_0046:
	{
		// LastClip = NewClip;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_15 = V_1;
		__this->set_LastClip_12(L_15);
		// MusicSource.PlayOneShot(NewClip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_16 = __this->get_MusicSource_11();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_17 = V_1;
		NullCheck(L_16);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_16, L_17, /*hidden argument*/NULL);
		// Invoke("PlayRandomClip", NewClip.length);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_18 = V_1;
		NullCheck(L_18);
		float L_19;
		L_19 = AudioClip_get_length_m2223F2281D853F847BE0048620BA6F61F26440E4(L_18, /*hidden argument*/NULL);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralB604B894767E03370B687089F53E8675CBB26BE0, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Music::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Music__ctor_mE05E2E4BBEA4524B1F2AABDE4720C09497BC2ED7 (Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MusicButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicButton_Start_m1893BA4B879227007A2F24921FBA9AAA42D0D63C (MusicButton_tE4A555F4C61CF8C24F1DE1650A3D517149A3E0EE * __this, const RuntimeMethod* method)
{
	{
		// GetMusic();
		MusicButton_GetMusic_m1C54838C4FCEBF9A276E6FFF10F09E4EE02EFB89(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MusicButton::MusicToggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicButton_MusicToggle_mE9B4B76CC3A4CD8642D904D9C9C913883CB2F639 (MusicButton_tE4A555F4C61CF8C24F1DE1650A3D517149A3E0EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Music.MusicInstance.MusicSource.volume > 0)
		Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * L_0 = ((Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_StaticFields*)il2cpp_codegen_static_fields_for(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_il2cpp_TypeInfo_var))->get_MusicInstance_10();
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = L_0->get_MusicSource_11();
		NullCheck(L_1);
		float L_2;
		L_2 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_1, /*hidden argument*/NULL);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_0041;
		}
	}
	{
		// Music.MusicInstance.MusicSource.volume = 0;
		Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * L_3 = ((Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_StaticFields*)il2cpp_codegen_static_fields_for(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_il2cpp_TypeInfo_var))->get_MusicInstance_10();
		NullCheck(L_3);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = L_3->get_MusicSource_11();
		NullCheck(L_4);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_4, (0.0f), /*hidden argument*/NULL);
		// gameObject.GetComponent<Image>().sprite = TurnOff;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6;
		L_6 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_5, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_TurnOff_4();
		NullCheck(L_6);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0041:
	{
		// Music.MusicInstance.MusicSource.volume = 0.2f;
		Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * L_8 = ((Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_StaticFields*)il2cpp_codegen_static_fields_for(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_il2cpp_TypeInfo_var))->get_MusicInstance_10();
		NullCheck(L_8);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_9 = L_8->get_MusicSource_11();
		NullCheck(L_9);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_9, (0.200000003f), /*hidden argument*/NULL);
		// gameObject.GetComponent<Image>().sprite = TurnOn;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11;
		L_11 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_10, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_12 = __this->get_TurnOn_5();
		NullCheck(L_11);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MusicButton::GetMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicButton_GetMusic_m1C54838C4FCEBF9A276E6FFF10F09E4EE02EFB89 (MusicButton_tE4A555F4C61CF8C24F1DE1650A3D517149A3E0EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Music.MusicInstance.MusicSource.volume > 0)
		Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F * L_0 = ((Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_StaticFields*)il2cpp_codegen_static_fields_for(Music_t4EE39761E89D9F3B3BE1D1D903CB957E1EA3CC4F_il2cpp_TypeInfo_var))->get_MusicInstance_10();
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1 = L_0->get_MusicSource_11();
		NullCheck(L_1);
		float L_2;
		L_2 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_1, /*hidden argument*/NULL);
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_002d;
		}
	}
	{
		// gameObject.GetComponent<Image>().sprite = TurnOn;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_3, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = __this->get_TurnOn_5();
		NullCheck(L_4);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002d:
	{
		// gameObject.GetComponent<Image>().sprite = TurnOff;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7;
		L_7 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_6, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_TurnOff_4();
		NullCheck(L_7);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MusicButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MusicButton__ctor_m3AB0B5C3A9A07CD326A29D115521FA0E1657E70A (MusicButton_tE4A555F4C61CF8C24F1DE1650A3D517149A3E0EE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Assets.Scripts.Points.PointLeft::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointLeft_OnTriggerEnter2D_m8D373E2AFEA418EF5CAFF25E798D8178CDCFF60C (PointLeft_t8E54EAB6B921BAA6096C739EF25572B3F8788BEC * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD50AEC80D16CFABEE291C403053E2600869C843A);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B3_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	{
		// if (col.tag.Equals("Crane"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, _stringLiteralD50AEC80D16CFABEE291C403053E2600869C843A, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// EventLeft?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = __this->get_EventLeft_4();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B3_0, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Assets.Scripts.Points.PointLeft::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointLeft__ctor_mEBB17D6A8BD21E2D1C37752176F899FF078D3073 (PointLeft_t8E54EAB6B921BAA6096C739EF25572B3F8788BEC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Assets.Scripts.Points.PointRight::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointRight_Start_m172DDBF7D13FAC52CE4C9B33FC455D9D78B94CED (PointRight_tD7B011B84070278D657F7D68F0570584226FABFC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Collider = gameObject.GetComponent<BoxCollider2D>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		BoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9 * L_1;
		L_1 = GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C(L_0, /*hidden argument*/GameObject_GetComponent_TisBoxCollider2D_t929D014FDE69DCA5443296C432D640BCBE7E30B9_mAA495A9AAD3FB4D260B3E2B6DDBAFEC18DC49C3C_RuntimeMethod_var);
		__this->set_Collider_5(L_1);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Points.PointRight::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointRight_OnTriggerEnter2D_m7ACEC3873000ECF0DBAA5C5A2C0C543F2C161111 (PointRight_tD7B011B84070278D657F7D68F0570584226FABFC * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD50AEC80D16CFABEE291C403053E2600869C843A);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B3_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	{
		// if (col.tag.Equals("Crane"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, _stringLiteralD50AEC80D16CFABEE291C403053E2600869C843A, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// EventRight?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = __this->get_EventRight_4();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B3_0, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Assets.Scripts.Points.PointRight::TurnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointRight_TurnOff_m801BE8D9110394B988A26D5147D967568DD65775 (PointRight_tD7B011B84070278D657F7D68F0570584226FABFC * __this, const RuntimeMethod* method)
{
	{
		// Collider.enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = __this->get_Collider_5();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Points.PointRight::TurnOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointRight_TurnOn_m894818AF88D50724976AAF32834D34FEFF844D33 (PointRight_tD7B011B84070278D657F7D68F0570584226FABFC * __this, const RuntimeMethod* method)
{
	{
		// Collider.enabled = true;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = __this->get_Collider_5();
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Points.PointRight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointRight__ctor_m0AF5C55562EA7862A004F94124F29431A5FEEC95 (PointRight_tD7B011B84070278D657F7D68F0570584226FABFC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Assets.Scripts.Points.PointSpawn::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSpawn_OnTriggerEnter2D_m3B06FC54CD87BC73D181271F485BA948A5571C6E (PointSpawn_t1C0D69FFE23A748F66497A9075758725A2466FD3 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD50AEC80D16CFABEE291C403053E2600869C843A);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B3_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	{
		// if (col.tag.Equals("Crane"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, _stringLiteralD50AEC80D16CFABEE291C403053E2600869C843A, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// EventSpawn?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = __this->get_EventSpawn_4();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B3_0, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Assets.Scripts.Points.PointSpawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointSpawn__ctor_mCE33B67A02066E91BCC0FFDA3F42094C62A4A743 (PointSpawn_t1C0D69FFE23A748F66497A9075758725A2466FD3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Quit::CloseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit_CloseGame_m14632BC18CAF89B2D72ECAB3B885A9912A8CD7BB (Quit_t390EF75E1E4AA071D5D1A4911600D450776363D6 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Quit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Quit__ctor_mEB6E7FE6F53362692AD96E4DEE1D3906A592A7C4 (Quit_t390EF75E1E4AA071D5D1A4911600D450776363D6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Record::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_Show_m1C71D729C6928D300BFF37A32E959B61754CD6BB (Record_t10FEA7B5972258F9A949A81DD517DF6226BD6F8D * __this, const RuntimeMethod* method)
{
	{
		// AboutMe.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ((ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE *)__this)->get_AboutMe_8();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// Play.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ((ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE *)__this)->get_Play_4();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// Quit.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ((ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE *)__this)->get_Quit_5();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// NameGame.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ((ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE *)__this)->get_NameGame_6();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// Data.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ((ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE *)__this)->get_Data_7();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Record::Hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record_Hidden_mDA82F99C32D53413985EABC5F967F6DF6E17CAF4 (Record_t10FEA7B5972258F9A949A81DD517DF6226BD6F8D * __this, const RuntimeMethod* method)
{
	{
		// AboutMe.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ((ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE *)__this)->get_AboutMe_8();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Play.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ((ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE *)__this)->get_Play_4();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// Quit.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ((ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE *)__this)->get_Quit_5();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// NameGame.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ((ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE *)__this)->get_NameGame_6();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// Data.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ((ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE *)__this)->get_Data_7();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Record::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Record__ctor_mA1FAB02A3F3CE8F3B3948E834F06AC4DC86F90B4 (Record_t10FEA7B5972258F9A949A81DD517DF6226BD6F8D * __this, const RuntimeMethod* method)
{
	{
		ShowHidden__ctor_m47D79654D8B3C4F31585AB3CF15E021FB310997F(__this, /*hidden argument*/NULL);
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
// System.Void AssemblyCSharp.Assets.Scripts.Buttons.Restart.Restart::RestartLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Restart_RestartLevel_m28E2BF7613194B09A348F722AC7307F4139CE4DB (Restart_tFAE6D95F16B1DB4215B71F928737F624665A1BD0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Buttons.Restart.Restart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Restart__ctor_m351A28773012B3FA5AE55899A7438E26049E4676 (Restart_tFAE6D95F16B1DB4215B71F928737F624665A1BD0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Rules::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rules_Start_mC49F1CF946A89C5AF0FCB1DA39A1E4C6EA866238 (Rules_tFD7922E991F7DC42880D116739BCEED4AAB36F5D * __this, const RuntimeMethod* method)
{
	{
		// CheckFirstTime();
		Rules_CheckFirstTime_m55010A2845703D3F57E8FF871D558FBAFE8D4F4B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rules::CheckFirstTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rules_CheckFirstTime_m55010A2845703D3F57E8FF871D558FBAFE8D4F4B (Rules_tFD7922E991F7DC42880D116739BCEED4AAB36F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30B24FA98B189A7A3EDB0D87F4BFD2204B15F691);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B3_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	{
		// if (!PlayerPrefs.HasKey("IsFirstTime"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteral30B24FA98B189A7A3EDB0D87F4BFD2204B15F691, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// PlayerPrefs.SetInt("IsFirstTime", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral30B24FA98B189A7A3EDB0D87F4BFD2204B15F691, 0, /*hidden argument*/NULL);
		// EventFirstTime?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_EventFirstTime_4();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B3_0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0028:
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rules::ChangeIsFirstTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rules_ChangeIsFirstTime_m334C400AE76397D10972B10E607B36E4A44267F2 (Rules_tFD7922E991F7DC42880D116739BCEED4AAB36F5D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30B24FA98B189A7A3EDB0D87F4BFD2204B15F691);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("IsFirstTime", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral30B24FA98B189A7A3EDB0D87F4BFD2204B15F691, 0, /*hidden argument*/NULL);
		// EventNextTime?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_EventNextTime_5();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0022;
		}
	}
	{
		return;
	}

IL_0022:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Rules::ConvertToBool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rules_ConvertToBool_mD370FF2CD15948A9EF8D928087E764028388E73A (Rules_tFD7922E991F7DC42880D116739BCEED4AAB36F5D * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Convert.ToBoolean(number);
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Convert_ToBoolean_m85FE22B779E69576B3251DEC1E27BC8004485288(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Rules::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rules__ctor_mF0AA5672720803EBAE6FF1D9ECFAF4C3A9EC3A8F (Rules_tFD7922E991F7DC42880D116739BCEED4AAB36F5D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Assets.Scripts.Score::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_Start_mD5A306A071A045E8B768E0D35C3ECD1626551F60 (Score_t960DA7E8E63C60FFE82B970C5CEE780C97AFEEA3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5_mDD3D9C969865074EB9FD0406315FFA02F336FF95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_GetMultiply_mE1C621916FFAD1F9248D71242C9FC926AFB33E8D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TextFloor = TextOfFloor.GetComponent<TextOfTheFloors>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_TextOfFloor_7();
		NullCheck(L_0);
		TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 * L_1;
		L_1 = GameObject_GetComponent_TisTextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5_mDD3D9C969865074EB9FD0406315FFA02F336FF95(L_0, /*hidden argument*/GameObject_GetComponent_TisTextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5_mDD3D9C969865074EB9FD0406315FFA02F336FF95_RuntimeMethod_var);
		__this->set_TextFloor_6(L_1);
		// TextFloor.EventRecord.AddListener(GetMultiply);
		TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 * L_2 = __this->get_TextFloor_6();
		NullCheck(L_2);
		UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * L_3 = L_2->get_EventRecord_9();
		UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 * L_4 = (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)il2cpp_codegen_object_new(UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F(L_4, __this, (intptr_t)((intptr_t)Score_GetMultiply_mE1C621916FFAD1F9248D71242C9FC926AFB33E8D_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m595DA2ECB187B2DF951D640BFEBCE02F3F800A3F_RuntimeMethod_var);
		NullCheck(L_3);
		UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2(L_3, L_4, /*hidden argument*/UnityEvent_1_AddListener_mFCFAC8ACA3F75283268DC2629ADEB5504E8FC0C2_RuntimeMethod_var);
		// GetText();
		Score_GetText_m4F024650E2A09C8DD217093AFC535B30CA1B0439(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Score::GetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_GetText_m4F024650E2A09C8DD217093AFC535B30CA1B0439 (Score_t960DA7E8E63C60FFE82B970C5CEE780C97AFEEA3 * __this, const RuntimeMethod* method)
{
	{
		// ScoreText.text = Text.text;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_ScoreText_5();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_Text_4();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Score::GetMultiply(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_GetMultiply_mE1C621916FFAD1F9248D71242C9FC926AFB33E8D (Score_t960DA7E8E63C60FFE82B970C5CEE780C97AFEEA3 * __this, int32_t ___result0, const RuntimeMethod* method)
{
	{
		// ScoreText.text = result.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_ScoreText_5();
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___result0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void Assets.Scripts.Score::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_m80F15B4D6D21E0DF9B1F1CA7F814A17908EDB39E (Score_t960DA7E8E63C60FFE82B970C5CEE780C97AFEEA3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AssemblyCSharp.Assets.Scripts.Buttons.ShowHidden::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowHidden__ctor_m47D79654D8B3C4F31585AB3CF15E021FB310997F (ShowHidden_tA81CB9DF36D869AB57488D0D5E4D12A9B94ACAAE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::add_EventSpawn(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBuilding_add_EventSpawn_m7D1BDBE4C9C62678BAC44070A26779A7F4F854FA (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_il2cpp_TypeInfo_var))->get_EventSpawn_28();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_il2cpp_TypeInfo_var))->get_address_of_EventSpawn_28()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::remove_EventSpawn(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBuilding_remove_EventSpawn_m566F86E1EF88EF657DBF422A64D3FCC093CCE92F (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_1 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * V_2 = NULL;
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_il2cpp_TypeInfo_var))->get_EventSpawn_28();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = V_0;
		V_1 = L_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_2 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_3 = ___value0;
		Delegate_t * L_4;
		L_4 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)CastclassSealed((RuntimeObject*)L_4, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var));
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_5 = V_2;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_6 = V_1;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *>((Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 **)(((SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_il2cpp_TypeInfo_var))->get_address_of_EventSpawn_28()), L_5, L_6);
		V_0 = L_7;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_8 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_8) == ((RuntimeObject*)(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBuilding_Start_mA5E9885BD40053069E65AE3AF24BAF6AE47A89E1 (SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0021AC5AC95A0A5C19FA408516B7B9AB9C2FC6A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753D2F1D8AFBFC4863CC0FE16F4B105A6D77FD83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NumberArray = (PlayerPrefs.GetInt("FirstRecord") + PlayerPrefs.GetInt("SecondRecord")) % 2;
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral753D2F1D8AFBFC4863CC0FE16F4B105A6D77FD83, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral0021AC5AC95A0A5C19FA408516B7B9AB9C2FC6A2, /*hidden argument*/NULL);
		__this->set_NumberArray_25(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))%(int32_t)2)));
		// ArrayBuildings = new GameObject[2, 9] { { BuildingOne, BuildingTwo, BuildingThree, BuildingFour, BuildingFive, BuildingSix, BuildingSeven, BuildingEigth, BuildingNine }, { BuildingTen, BuildingEleven, BuildingTwelve, BuildingThirteen, BuildingFourteen, BuildingFifteen, BuildingSixteen, BuildingSeventeen, BuildingEighteen } };
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)2, (il2cpp_array_size_t)((int32_t)9) };
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_2 = (GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9*)GenArrayNew(GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9_il2cpp_TypeInfo_var, L_3);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_4 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_BuildingOne_4();
		NullCheck(L_4);
		(L_4)->SetAt(0, 0, L_5);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_6 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_BuildingTwo_5();
		NullCheck(L_6);
		(L_6)->SetAt(0, 1, L_7);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_8 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_BuildingThree_6();
		NullCheck(L_8);
		(L_8)->SetAt(0, 2, L_9);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_10 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_BuildingFour_7();
		NullCheck(L_10);
		(L_10)->SetAt(0, 3, L_11);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_12 = L_10;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_BuildingFive_8();
		NullCheck(L_12);
		(L_12)->SetAt(0, 4, L_13);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_14 = L_12;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_BuildingSix_9();
		NullCheck(L_14);
		(L_14)->SetAt(0, 5, L_15);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_16 = L_14;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_BuildingSeven_10();
		NullCheck(L_16);
		(L_16)->SetAt(0, 6, L_17);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_18 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_BuildingEigth_11();
		NullCheck(L_18);
		(L_18)->SetAt(0, 7, L_19);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_20 = L_18;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_BuildingNine_12();
		NullCheck(L_20);
		(L_20)->SetAt(0, 8, L_21);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_22 = L_20;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_BuildingTen_13();
		NullCheck(L_22);
		(L_22)->SetAt(1, 0, L_23);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_24 = L_22;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_BuildingEleven_14();
		NullCheck(L_24);
		(L_24)->SetAt(1, 1, L_25);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_26 = L_24;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_BuildingTwelve_15();
		NullCheck(L_26);
		(L_26)->SetAt(1, 2, L_27);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_28 = L_26;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_BuildingThirteen_16();
		NullCheck(L_28);
		(L_28)->SetAt(1, 3, L_29);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_30 = L_28;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_BuildingFourteen_17();
		NullCheck(L_30);
		(L_30)->SetAt(1, 4, L_31);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_32 = L_30;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = __this->get_BuildingFifteen_18();
		NullCheck(L_32);
		(L_32)->SetAt(1, 5, L_33);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_34 = L_32;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_BuildingSixteen_19();
		NullCheck(L_34);
		(L_34)->SetAt(1, 6, L_35);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_36 = L_34;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = __this->get_BuildingSeventeen_20();
		NullCheck(L_36);
		(L_36)->SetAt(1, 7, L_37);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_38 = L_36;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = __this->get_BuildingEighteen_21();
		NullCheck(L_38);
		(L_38)->SetAt(1, 8, L_39);
		__this->set_ArrayBuildings_22(L_38);
		// Generator = new Generator();
		Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186 * L_40 = (Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186 *)il2cpp_codegen_object_new(Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186_il2cpp_TypeInfo_var);
		Generator__ctor_mF97955AC8BFC7E89FB29B7DB121588494241567D(L_40, /*hidden argument*/NULL);
		__this->set_Generator_24(L_40);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBuilding_Spawn_mEBEA0B9E3BBA5B6398BBEEF1ECF9AC8B476C7F30 (SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// EventSpawn?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = ((SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_StaticFields*)il2cpp_codegen_static_fields_for(SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4_il2cpp_TypeInfo_var))->get_EventSpawn_28();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		goto IL_0010;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
	}

IL_0010:
	{
		// RandomNumber = Generator.GenerateRandomNumber(NumberOfFloors);
		Generator_t75381AF99D6DD1E42E7AA21B4AB5192450E01186 * L_2 = __this->get_Generator_24();
		int32_t L_3 = __this->get_NumberOfFloors_27();
		NullCheck(L_2);
		int32_t L_4;
		L_4 = Generator_GenerateRandomNumber_m8E7DDB730B15A8AD952AE7C4474A8C1D73CA9205(L_2, L_3, /*hidden argument*/NULL);
		__this->set_RandomNumber_26(L_4);
		// Instantiate(ArrayBuildings[NumberArray, RandomNumber], PointSpawn.transform.position, PointSpawn.transform.rotation);
		GameObjectU5BU2CU5D_t21BFB7BF24ABCC4325F4CD839223D6CA713750D9* L_5 = __this->get_ArrayBuildings_22();
		int32_t L_6 = __this->get_NumberArray_25();
		int32_t L_7 = __this->get_RandomNumber_26();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = (L_5)->GetAt(L_6, L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_PointSpawn_23();
		NullCheck(L_9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = __this->get_PointSpawn_23();
		NullCheck(L_12);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_8, L_11, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::SetNumberOfFloors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBuilding_SetNumberOfFloors_mFF3B8876272531FC8A6258749788A4B049757EC0 (SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4 * __this, const RuntimeMethod* method)
{
	{
		// NumberOfFloors += 1;
		int32_t L_0 = __this->get_NumberOfFloors_27();
		__this->set_NumberOfFloors_27(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void AssemblyCSharp.Assets.Scripts.Crane.SpawnBuilding::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnBuilding__ctor_mDEA5F5B23E0B43E216CEFB1140311514571A4FF9 (SpawnBuilding_t2F0905E73B0724AE10993723C9C90CF2E83861A4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SpawnClouds::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnClouds_Start_m4F6582D9A07BF97B826655BAC350AEAE908941D7 (SpawnClouds_t96DA08FAE86706D7EC2EC90DE5AC970497234BC5 * __this, const RuntimeMethod* method)
{
	{
		// Spawn();
		SpawnClouds_Spawn_m418203C2CF2F6D70203AA5D625CB8989A83D2317(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpawnClouds::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnClouds_Spawn_m418203C2CF2F6D70203AA5D625CB8989A83D2317 (SpawnClouds_t96DA08FAE86706D7EC2EC90DE5AC970497234BC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(this.CloudObj, transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_CloudObj_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// Invoke("Spawn", 8f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF, (8.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpawnClouds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpawnClouds__ctor_mAFB871FE31C115C2100F53AD3CF5856F9D1AC341 (SpawnClouds_t96DA08FAE86706D7EC2EC90DE5AC970497234BC5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TextOfTheFloors::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextOfTheFloors_Start_m8690407C51805C8A1E00F03C09E028525F9DC93E (TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0021AC5AC95A0A5C19FA408516B7B9AB9C2FC6A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753D2F1D8AFBFC4863CC0FE16F4B105A6D77FD83);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FirstRecord = PlayerPrefs.GetInt("FirstRecord");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral753D2F1D8AFBFC4863CC0FE16F4B105A6D77FD83, /*hidden argument*/NULL);
		__this->set_FirstRecord_7(L_0);
		// SecondRecord = PlayerPrefs.GetInt("SecondRecord");
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral0021AC5AC95A0A5C19FA408516B7B9AB9C2FC6A2, /*hidden argument*/NULL);
		__this->set_SecondRecord_8(L_1);
		// TextFloors = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2;
		L_2 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_TextFloors_4(L_2);
		// TextFloors.text = Result.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_TextFloors_4();
		int32_t* L_4 = __this->get_address_of_Result_6();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// }
		return;
	}
}
// System.Void TextOfTheFloors::ChangeText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextOfTheFloors_ChangeText_mE2737A320EAB5CBC7CFC5A59D815E13DC70864D4 (TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 * __this, const RuntimeMethod* method)
{
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B1_0 = NULL;
	{
		// Result += 1;
		int32_t L_0 = __this->get_Result_6();
		__this->set_Result_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// TextFloors.text = Result.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_TextFloors_4();
		int32_t* L_2 = __this->get_address_of_Result_6();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// EventChangeText?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = __this->get_EventChangeText_5();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_002f;
		}
	}
	{
		return;
	}

IL_002f:
	{
		NullCheck(G_B2_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TextOfTheFloors::SetRecort(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextOfTheFloors_SetRecort_m3283E03FEF297FBEB04B3FA4BAD9566DA0DBB9C6 (TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 * __this, int32_t ___coef0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0021AC5AC95A0A5C19FA408516B7B9AB9C2FC6A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral753D2F1D8AFBFC4863CC0FE16F4B105A6D77FD83);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * G_B8_0 = NULL;
	UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * G_B7_0 = NULL;
	{
		// Result *= coef;
		int32_t L_0 = __this->get_Result_6();
		int32_t L_1 = ___coef0;
		__this->set_Result_6(((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)L_1)));
		// if (Result < FirstRecord && Result > SecondRecord)
		int32_t L_2 = __this->get_Result_6();
		int32_t L_3 = __this->get_FirstRecord_7();
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_4 = __this->get_Result_6();
		int32_t L_5 = __this->get_SecondRecord_8();
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_003a;
		}
	}
	{
		// PlayerPrefs.SetInt("SecondRecord", Result);
		int32_t L_6 = __this->get_Result_6();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral0021AC5AC95A0A5C19FA408516B7B9AB9C2FC6A2, L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// if (Result > FirstRecord && Result > SecondRecord)
		int32_t L_7 = __this->get_Result_6();
		int32_t L_8 = __this->get_FirstRecord_7();
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_9 = __this->get_Result_6();
		int32_t L_10 = __this->get_SecondRecord_8();
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0076;
		}
	}
	{
		// PlayerPrefs.SetInt("FirstRecord", Result);
		int32_t L_11 = __this->get_Result_6();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral753D2F1D8AFBFC4863CC0FE16F4B105A6D77FD83, L_11, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("SecondRecord", FirstRecord);
		int32_t L_12 = __this->get_FirstRecord_7();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral0021AC5AC95A0A5C19FA408516B7B9AB9C2FC6A2, L_12, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// TextFloors.text = Result.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_TextFloors_4();
		int32_t* L_14 = __this->get_address_of_Result_6();
		String_t* L_15;
		L_15 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_15);
		// EventRecord?.Invoke(Result);
		UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * L_16 = __this->get_EventRecord_9();
		UnityEvent_1_tB235B5DAD099AC425DC059D10DEB8B97A35E2BBF * L_17 = L_16;
		G_B7_0 = L_17;
		if (L_17)
		{
			G_B8_0 = L_17;
			goto IL_0097;
		}
	}
	{
		return;
	}

IL_0097:
	{
		int32_t L_18 = __this->get_Result_6();
		NullCheck(G_B8_0);
		UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530(G_B8_0, L_18, /*hidden argument*/UnityEvent_1_Invoke_m75A79471AE45A1246054BDE3A9BFCEBA14967530_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TextOfTheFloors::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextOfTheFloors__ctor_mD194E54F4DD5DB23858ECF3B89A24D816980FF20 (TextOfTheFloors_t571518976D34F96E6353E57815AF281FC886CFF5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Trigger::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger_OnTriggerEnter2D_mCCA0D6D46365731C3771FFC18827548E7C7648F0 (Trigger_tBC1A4B5644EA74E47F0406196C6706050977FA4E * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B3_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	{
		// if (col.tag == "Building")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// EventUp?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = __this->get_EventUp_4();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B3_0, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Trigger::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger_OnTriggerExit2D_m3E264D1C190AD35159FE64AF8909CE14CE1875A3 (Trigger_tBC1A4B5644EA74E47F0406196C6706050977FA4E * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC);
		s_Il2CppMethodInitialized = true;
	}
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B3_0 = NULL;
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * G_B2_0 = NULL;
	{
		// if(col.tag == "Building")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___col0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral2CCDE1B3CB1052EFA6B5174A8A67F30A4F9F1CBC, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// EventStop?.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_3 = __this->get_EventStop_5();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_4 = L_3;
		G_B2_0 = L_4;
		if (L_4)
		{
			G_B3_0 = L_4;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		NullCheck(G_B3_0);
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(G_B3_0, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Trigger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Trigger__ctor_m42036DF1067B2973F4CF5F07DF83F4162A21081C (Trigger_tBC1A4B5644EA74E47F0406196C6706050977FA4E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MoveCrane_get_Speed_m0A7A820BA8FAF2DE3FF0429DE184F7D0CDF9AB83_inline (MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB * __this, const RuntimeMethod* method)
{
	{
		// private float Speed { get; set; } = 4f;
		float L_0 = __this->get_U3CSpeedU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MoveCrane_set_Speed_mD709D3186AF39620484A677DBF6A431D8445245A_inline (MoveCrane_t52BC180751FAE1BC006423EEB54C6CA888237BFB * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// private float Speed { get; set; } = 4f;
		float L_0 = ___value0;
		__this->set_U3CSpeedU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
