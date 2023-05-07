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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Pointers.Pointer>
struct Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs>
struct EventHandler_1_t945874111F5012948AA203719B1A7FFEE1A50F51;
// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>
struct EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<TouchScript.PointerEventArgs>
struct EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216;
// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs>
struct EventHandler_1_t2EB444F3FA1B60ACDF19080C2A7C0C94C97B2C5B;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer>
struct IList_1_t59DA1ED502578BB9932F06476B79B8BEC0BA6D06;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,TouchScript.Pointers.Pointer>
struct KeyCollection_tA4674CCE45E7254A1B85AAF54158AA8247FCAD05;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF;
// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture>
struct List_1_t3922AAAE5EF2642C413CC0095B6D167382279A2B;
// System.Collections.Generic.List`1<TouchScript.Hit.HitTest>
struct List_1_t7732A96371C54AE5971F79E0B8F9F5ADD7DF18F4;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<TouchScript.Pointers.Pointer>
struct List_1_tE67194E33860F427C7F44674FBA7174A52DD7502;
// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.Pointers.Pointer>
struct ReadOnlyCollection_1_tDFE83C50A6E3876723B567DDA4EA6BF0A4035182;
// TouchScript.Utils.TimedSequence`1<TouchScript.Pointers.Pointer>
struct TimedSequence_1_t8A53DB0C7E41125D0F2CB4272328ED0310D0C4C7;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TouchScript.Pointers.Pointer>
struct ValueCollection_tDB1E83B20ECDFB8ECFDFFA01BA6A65E69343DD18;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,TouchScript.Pointers.Pointer>[]
struct EntryU5BU5D_t26C2AA0D7AEDCF0510EB4CAEC64F5E518DDD37A9;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TouchScript.Examples.RawInput.Ball
struct Ball_t891D07D35BF819E0570CB69DA675794057F35304;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// TouchScript.Examples.Checkers.Board
struct Board_t164880A2CE4D7C370BF241163022ECD62FB9C1E6;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// TouchScript.Examples.CameraControl.CameraController
struct CameraController_tB9F2119450A667D620CF1480955257EB7674C70E;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// TouchScript.Examples.Colors.Circle
struct Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// TouchScript.Examples.Colors.Colors
struct Colors_t709774888BF67DF58B99729863E962582965985A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// TouchScript.Examples.Photos.Container
struct Container_t049DA32B3E25F2869749297EAE6B5DFA04AE6A4F;
// TouchScript.Examples.Cube.CustomPointerProxy
struct CustomPointerProxy_tD0D2F4BF50F3F28B58F6AB5964F1278E0D0670E4;
// UnityEngine.Profiling.CustomSampler
struct CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// TouchScript.Examples.Checkers.Exclusive
struct Exclusive_tD384CBC9D4B4C3D09B4D67148D7F64E0AD34F051;
// TouchScript.Pointers.FakePointer
struct FakePointer_tC539FC4F48E5A07EDF91D7D5314A63CD19144955;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// TouchScript.Gestures.Gesture
struct Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328;
// TouchScript.Core.GestureManagerInstance
struct GestureManagerInstance_t52A67A494FB7D4F0D03E9952FBAE61EA2D4E343D;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// TouchScript.InputSources.ICoordinatesRemapper
struct ICoordinatesRemapper_tF7AD3C4B90342DB4BD36A3499A75A4A6AE421370;
// TouchScript.IGestureDelegate
struct IGestureDelegate_t746CF3C3F4773521BF213B41708A6AFF02EA12E2;
// TouchScript.IGestureManager
struct IGestureManager_t356CF9FE98AF8E3BEF2DCFBFC08BA35F0260DE65;
// TouchScript.InputSources.IInputSource
struct IInputSource_tC4C9ADC896006A1CF4FED3EA988858ECB2588060;
// TouchScript.Layers.ILayerDelegate
struct ILayerDelegate_t1BD00789A1CDEA882E9FB63A0B777CA8901953DA;
// TouchScript.ILayerManager
struct ILayerManager_t014A9EDA9C1EED6407459B5AB0AC05CA9436CE53;
// TouchScript.Pointers.IPointer
struct IPointer_tEDEFB0F87D471C54BFF4E34AD796CE7927527390;
// TouchScript.ITouchManager
struct ITouchManager_t2C48F986D2036DB7CEDEC10F514BF6DFAC2DDB3B;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// TouchScript.Examples.Cube.Init
struct Init_t11C835BA6D234DD2CCF0DDCEBBBDAB850461753F;
// TouchScript.InputSources.InputSource
struct InputSource_t5F35F4CBFE549A83F66BA3DA824DB56EAFECB34D;
// TouchScript.Examples.Tap.Kick
struct Kick_t4D0A51FC8FE23046F1F101773E10F0821E3740AB;
// TouchScript.Examples.Cube.LayerDelegate
struct LayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9;
// TouchScript.Core.LayerManagerInstance
struct LayerManagerInstance_tDCFB98B38331D8A077A470A6256761410B34ABB9;
// TouchScript.Examples.Multiuser.Logo
struct Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// TouchScript.Gestures.MetaGesture
struct MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1;
// TouchScript.Gestures.MetaGestureEventArgs
struct MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// TouchScript.Gestures.TransformGestures.PinnedTransformGesture
struct PinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B;
// TouchScript.Examples.Portal.Planet
struct Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5;
// TouchScript.Pointers.Pointer
struct Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9;
// TouchScript.Behaviors.Cursors.PointerCursor
struct PointerCursor_t2129BB96AA7A3D5778B1745F3D14C32713B62C8F;
// TouchScript.PointerEventArgs
struct PointerEventArgs_t34E1B84AA12A97F9C4C8E597B04CBB3D09E14506;
// TouchScript.Gestures.PressGesture
struct PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC;
// TouchScript.Layers.ProjectionParams
struct ProjectionParams_tA7F34320AE2E2D38ACC717FEEB35D7CF4E68A031;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// TouchScript.Examples.Cube.RedirectInput
struct RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664;
// TouchScript.Gestures.ReleaseGesture
struct ReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// TouchScript.Examples.Portal.Rotator
struct Rotator_tA915D33647DE1B938F586B9A943F27EDF0E85BA0;
// TouchScript.Gestures.TransformGestures.ScreenTransformGesture
struct ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302;
// TouchScript.Examples.UI.SetColor
struct SetColor_t29AB8D3C1DEFAABDCDC85E2FEA54DC489CDD577D;
// TouchScript.Examples.Tap.Spawn
struct Spawn_tF5B494AB0A9CCDCDD94722E4BF2A66481770CFCA;
// TouchScript.Examples.Portal.Spawner
struct Spawner_t06C1D4F57ECCA1D163E35395EAF724C2FAF1535F;
// TouchScript.Examples.RawInput.Spawner
struct Spawner_tD4CDFFA2D4208FD417F476752B102364C2A0BF30;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// TouchScript.Gestures.TapGesture
struct TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// TouchScript.Layers.TouchLayer
struct TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC;
// TouchScript.Core.TouchManagerInstance
struct TouchManagerInstance_t994F9C383E00DB02613F390A02C82BC550FB9171;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TouchScript.Gestures.TransformGestures.TransformGesture
struct TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277;
// TouchScript.Gestures.TransformGestures.Base.TransformGestureBase
struct TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// TouchScript.Examples.Portal.Vortex
struct Vortex_tF50697499748E298C7E0472F113FB5CC6204CC10;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// TouchScript.Gestures.Gesture/GestureEvent
struct GestureEvent_t60F4776CB6B1917B65764E10319F1D213EBA2884;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t488723656309FDE4A8FC46BDDD268D005B96FE13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t21A0FE497C0943B2CA8170D99841CFDAE8EAB974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGestureManager_t356CF9FE98AF8E3BEF2DCFBFC08BA35F0260DE65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILayerManager_t014A9EDA9C1EED6407459B5AB0AC05CA9436CE53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPointer_tEDEFB0F87D471C54BFF4E34AD796CE7927527390_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITouchManager_t2C48F986D2036DB7CEDEC10F514BF6DFAC2DDB3B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchManager_tB2943219221554D6C2480E583CDEB5D773FBC6FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0CB51CF3B3853A43D70B8C2965E5A131A716930E;
IL2CPP_EXTERN_C String_t* _stringLiteral39307C9568DA7F23605DF7F649F89A319906DB74;
IL2CPP_EXTERN_C String_t* _stringLiteral3DFAD432C6366D1DCA70C09F24B77B557EA5F4E1;
IL2CPP_EXTERN_C String_t* _stringLiteral570059DAA6BA36583F759B87A49DCE91093D6090;
IL2CPP_EXTERN_C String_t* _stringLiteral5DC25B34B12D85BCF6B8E7DC5A4D94A5EBA01D03;
IL2CPP_EXTERN_C String_t* _stringLiteral899C4CA9F8694026FA5B50E67227A4F3E06AC520;
IL2CPP_EXTERN_C String_t* _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928;
IL2CPP_EXTERN_C String_t* _stringLiteralF8851D9BD6F74890B3B8707221A22FD5C9A3A894;
IL2CPP_EXTERN_C const RuntimeMethod* Board_transformedHandler_mB5B8899E1145547817E09C479F08EBF549FF03A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraController_manipulationTransformedHandler_m9C719CD67A8AAA4BB0CAFA3C5CBA532EF074E4CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CameraController_twoFingerTransformHandler_m8A7FACA7C04B4DF9D5C3914E3260F948824C0E6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCircle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED_m08848E63B3A36D739FFF2220AD544216271575DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9_m8F9B169C4582D5B1768F65B67F98D093612F0C83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1_m7DEB8B863C6327C15FBF4D7729371BBCEFB99D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B_mD034F9502588767567CB2372E9CDA2BFA8DC9A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlanet_tC0057A04D392837CE56516897DF1CE245B0FD5D5_m748EAE8A83042AFCD59BB98885FD8B3A98A65441_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553_m0C36D5E272F7B39B73358962F2A31B0D60D421C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Container_pressedHandler_m3E522CB3BFDF428CD0B7F93F086E855FAD8BA38D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9C473954D69A3BDB36E3CBA02713674BD5B54490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m92CCAA6A5194E87FED6A5EA6A36500A8DC358C78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m1CAC41A5B1CCFB997BA9D49A3CE480CDD4F2F82E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mABDFF1DC03570A3D7B0B66A0C01FA0F21E459FFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC_m5B160E21C2C5053F23FCF10C33334E4CF48330F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Kick_tappedHandler_mE9D5591CC441851AEEA1E51084FF2323A42F483D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Logo_tappedHandler_m4F7BDBC091CB6B9A897F822C15FAFD72F2C383D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m2E2C8E63B5A6D0A40ADCE97453E32B95C7E1842C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Planet_pressedhandler_m95FD64C6E7E030C30EBC280F8856655A4FB829AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Planet_releasedHandler_mF842F6988CA723B3B2E255E836055DD2ABA1B23D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RedirectInput_pointerCancelledhandler_m9602187F707C2F2E151BD2FCAC03692FD1CB462A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RedirectInput_pointerPressedHandler_m19CA948504B72160D6CF36B31962952D6DFE5179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RedirectInput_pointerReleasedHandler_m78248AD81D0E2DE942C54DC57C977B83C919B3A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RedirectInput_pointerUpdatedHandler_m63BFB21BDB4E4052DF17421EAFADF460CC0E682C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Spawn_tappedHandler_m3A7D76071BA4A7B889244313032928F89CCCEC6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Spawner_pointersPressedHandler_mA4B1C0C0D7559C6E3B82D513602DBF4A1AA9FA9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Spawner_pressHandler_m62E05A68961539EE326DF9C1CE5D56F2810895A9_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Pointers.Pointer>
struct Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t26C2AA0D7AEDCF0510EB4CAEC64F5E518DDD37A9* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA4674CCE45E7254A1B85AAF54158AA8247FCAD05* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDB1E83B20ECDFB8ECFDFFA01BA6A65E69343DD18* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// TouchScript.Gestures.MetaGestureEventArgs
struct MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// TouchScript.Pointers.Pointer TouchScript.Gestures.MetaGestureEventArgs::<Pointer>k__BackingField
	Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* ___U3CPointerU3Ek__BackingField_1;
};

// TouchScript.PointerEventArgs
struct PointerEventArgs_t34E1B84AA12A97F9C4C8E597B04CBB3D09E14506  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer> TouchScript.PointerEventArgs::<Pointers>k__BackingField
	RuntimeObject* ___U3CPointersU3Ek__BackingField_1;
};

struct PointerEventArgs_t34E1B84AA12A97F9C4C8E597B04CBB3D09E14506_StaticFields
{
	// TouchScript.PointerEventArgs TouchScript.PointerEventArgs::instance
	PointerEventArgs_t34E1B84AA12A97F9C4C8E597B04CBB3D09E14506* ___instance_2;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// TouchScript.Hit.RaycastHitUI
struct RaycastHitUI_tEDF3CCFEC103191D61753779D4EB61F989F55639 
{
	// UnityEngine.Transform TouchScript.Hit.RaycastHitUI::Target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target_0;
	// UnityEngine.EventSystems.BaseRaycaster TouchScript.Hit.RaycastHitUI::Raycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___Raycaster_1;
	// System.Int32 TouchScript.Hit.RaycastHitUI::GraphicIndex
	int32_t ___GraphicIndex_2;
	// System.Int32 TouchScript.Hit.RaycastHitUI::Depth
	int32_t ___Depth_3;
	// System.Int32 TouchScript.Hit.RaycastHitUI::SortingLayer
	int32_t ___SortingLayer_4;
	// System.Int32 TouchScript.Hit.RaycastHitUI::SortingOrder
	int32_t ___SortingOrder_5;
	// UnityEngine.UI.Graphic TouchScript.Hit.RaycastHitUI::Graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___Graphic_6;
	// UnityEngine.Vector3 TouchScript.Hit.RaycastHitUI::WorldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___WorldPosition_7;
	// UnityEngine.Vector3 TouchScript.Hit.RaycastHitUI::WorldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___WorldNormal_8;
	// System.Single TouchScript.Hit.RaycastHitUI::Distance
	float ___Distance_9;
};
// Native definition for P/Invoke marshalling of TouchScript.Hit.RaycastHitUI
struct RaycastHitUI_tEDF3CCFEC103191D61753779D4EB61F989F55639_marshaled_pinvoke
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___Raycaster_1;
	int32_t ___GraphicIndex_2;
	int32_t ___Depth_3;
	int32_t ___SortingLayer_4;
	int32_t ___SortingOrder_5;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___Graphic_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___WorldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___WorldNormal_8;
	float ___Distance_9;
};
// Native definition for COM marshalling of TouchScript.Hit.RaycastHitUI
struct RaycastHitUI_tEDF3CCFEC103191D61753779D4EB61F989F55639_marshaled_com
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Target_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___Raycaster_1;
	int32_t ___GraphicIndex_2;
	int32_t ___Depth_3;
	int32_t ___SortingLayer_4;
	int32_t ___SortingOrder_5;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___Graphic_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___WorldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___WorldNormal_8;
	float ___Distance_9;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// TouchScript.Hit.HitData
struct HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 
{
	// TouchScript.Hit.HitData/HitType TouchScript.Hit.HitData::type
	int32_t ___type_0;
	// UnityEngine.Transform TouchScript.Hit.HitData::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_1;
	// System.Boolean TouchScript.Hit.HitData::screenSpace
	bool ___screenSpace_2;
	// TouchScript.Layers.TouchLayer TouchScript.Hit.HitData::layer
	TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* ___layer_3;
	// UnityEngine.RaycastHit TouchScript.Hit.HitData::raycastHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___raycastHit_4;
	// UnityEngine.RaycastHit2D TouchScript.Hit.HitData::raycastHit2D
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___raycastHit2D_5;
	// TouchScript.Hit.RaycastHitUI TouchScript.Hit.HitData::raycastHitUI
	RaycastHitUI_tEDF3CCFEC103191D61753779D4EB61F989F55639 ___raycastHitUI_6;
	// System.Int32 TouchScript.Hit.HitData::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 TouchScript.Hit.HitData::sortingOrder
	int32_t ___sortingOrder_8;
};
// Native definition for P/Invoke marshalling of TouchScript.Hit.HitData
struct HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8_marshaled_pinvoke
{
	int32_t ___type_0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_1;
	int32_t ___screenSpace_2;
	TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* ___layer_3;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___raycastHit_4;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___raycastHit2D_5;
	RaycastHitUI_tEDF3CCFEC103191D61753779D4EB61F989F55639_marshaled_pinvoke ___raycastHitUI_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
};
// Native definition for COM marshalling of TouchScript.Hit.HitData
struct HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8_marshaled_com
{
	int32_t ___type_0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_1;
	int32_t ___screenSpace_2;
	TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* ___layer_3;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___raycastHit_4;
	RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA ___raycastHit2D_5;
	RaycastHitUI_tEDF3CCFEC103191D61753779D4EB61F989F55639_marshaled_com ___raycastHitUI_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>
struct EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA  : public MulticastDelegate_t
{
};

// System.EventHandler`1<TouchScript.PointerEventArgs>
struct EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TouchScript.Pointers.Pointer
struct Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9  : public RuntimeObject
{
	// System.Int32 TouchScript.Pointers.Pointer::<Id>k__BackingField
	int32_t ___U3CIdU3Ek__BackingField_4;
	// TouchScript.Pointers.Pointer/PointerType TouchScript.Pointers.Pointer::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_5;
	// TouchScript.Pointers.Pointer/PointerButtonState TouchScript.Pointers.Pointer::<Buttons>k__BackingField
	int32_t ___U3CButtonsU3Ek__BackingField_6;
	// TouchScript.InputSources.IInputSource TouchScript.Pointers.Pointer::<InputSource>k__BackingField
	RuntimeObject* ___U3CInputSourceU3Ek__BackingField_7;
	// UnityEngine.Vector2 TouchScript.Pointers.Pointer::<PreviousPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CPreviousPositionU3Ek__BackingField_8;
	// System.UInt32 TouchScript.Pointers.Pointer::<Flags>k__BackingField
	uint32_t ___U3CFlagsU3Ek__BackingField_9;
	// TouchScript.Core.LayerManagerInstance TouchScript.Pointers.Pointer::layerManager
	LayerManagerInstance_tDCFB98B38331D8A077A470A6256761410B34ABB9* ___layerManager_11;
	// System.Int32 TouchScript.Pointers.Pointer::refCount
	int32_t ___refCount_12;
	// UnityEngine.Vector2 TouchScript.Pointers.Pointer::position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position_13;
	// UnityEngine.Vector2 TouchScript.Pointers.Pointer::newPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___newPosition_14;
	// TouchScript.Hit.HitData TouchScript.Pointers.Pointer::pressData
	HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 ___pressData_15;
	// TouchScript.Hit.HitData TouchScript.Pointers.Pointer::overData
	HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 ___overData_16;
	// System.Boolean TouchScript.Pointers.Pointer::overDataIsDirty
	bool ___overDataIsDirty_17;
};

struct Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9_StaticFields
{
	// System.Text.StringBuilder TouchScript.Pointers.Pointer::builder
	StringBuilder_t* ___builder_10;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// TouchScript.Examples.RawInput.Ball
struct Ball_t891D07D35BF819E0570CB69DA675794057F35304  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TouchScript.Examples.RawInput.Ball::Speed
	float ___Speed_4;
};

// TouchScript.Examples.Checkers.Board
struct Board_t164880A2CE4D7C370BF241163022ECD62FB9C1E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TouchScript.Gestures.TransformGestures.PinnedTransformGesture TouchScript.Examples.Checkers.Board::gesture
	PinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B* ___gesture_4;
};

// TouchScript.Examples.CameraControl.CameraController
struct CameraController_tB9F2119450A667D620CF1480955257EB7674C70E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TouchScript.Gestures.TransformGestures.ScreenTransformGesture TouchScript.Examples.CameraControl.CameraController::TwoFingerMoveGesture
	ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302* ___TwoFingerMoveGesture_4;
	// TouchScript.Gestures.TransformGestures.ScreenTransformGesture TouchScript.Examples.CameraControl.CameraController::ManipulationGesture
	ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302* ___ManipulationGesture_5;
	// System.Single TouchScript.Examples.CameraControl.CameraController::PanSpeed
	float ___PanSpeed_6;
	// System.Single TouchScript.Examples.CameraControl.CameraController::RotationSpeed
	float ___RotationSpeed_7;
	// System.Single TouchScript.Examples.CameraControl.CameraController::ZoomSpeed
	float ___ZoomSpeed_8;
	// UnityEngine.Transform TouchScript.Examples.CameraControl.CameraController::pivot
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pivot_9;
	// UnityEngine.Transform TouchScript.Examples.CameraControl.CameraController::cam
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cam_10;
};

// TouchScript.Examples.Colors.Circle
struct Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean TouchScript.Examples.Colors.Circle::isDestroyed
	bool ___isDestroyed_4;
};

// TouchScript.Examples.Colors.Colors
struct Colors_t709774888BF67DF58B99729863E962582965985A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform TouchScript.Examples.Colors.Colors::Prefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Prefab_4;
	// System.Int32 TouchScript.Examples.Colors.Colors::Total
	int32_t ___Total_5;
	// System.Collections.Generic.List`1<UnityEngine.Color> TouchScript.Examples.Colors.Colors::colors
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___colors_6;
};

// TouchScript.Examples.Photos.Container
struct Container_t049DA32B3E25F2869749297EAE6B5DFA04AE6A4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 TouchScript.Examples.Photos.Container::Width
	int32_t ___Width_4;
	// System.Int32 TouchScript.Examples.Photos.Container::Height
	int32_t ___Height_5;
};

// TouchScript.Core.DebuggableMonoBehaviour
struct DebuggableMonoBehaviour_tB8E7E5E9428B34D292319AA0EB9BFF1AB791910E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TouchScript.Examples.Checkers.Exclusive
struct Exclusive_tD384CBC9D4B4C3D09B4D67148D7F64E0AD34F051  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TouchScript.Gestures.TransformGestures.TransformGesture TouchScript.Examples.Checkers.Exclusive::Target
	TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* ___Target_4;
	// UnityEngine.Color TouchScript.Examples.Checkers.Exclusive::Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___Color_5;
	// System.Boolean TouchScript.Examples.Checkers.Exclusive::exclusive
	bool ___exclusive_6;
	// UnityEngine.Renderer TouchScript.Examples.Checkers.Exclusive::cachedRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___cachedRenderer_7;
	// System.Single TouchScript.Examples.Checkers.Exclusive::shininess
	float ___shininess_8;
};

// TouchScript.Examples.Cube.Init
struct Init_t11C835BA6D234DD2CCF0DDCEBBBDAB850461753F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TouchScript.InputSources.InputSource
struct InputSource_t5F35F4CBFE549A83F66BA3DA824DB56EAFECB34D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean TouchScript.InputSources.InputSource::basicEditor
	bool ___basicEditor_4;
	// TouchScript.InputSources.ICoordinatesRemapper TouchScript.InputSources.InputSource::coordinatesRemapper
	RuntimeObject* ___coordinatesRemapper_5;
	// TouchScript.Core.TouchManagerInstance TouchScript.InputSources.InputSource::manager
	TouchManagerInstance_t994F9C383E00DB02613F390A02C82BC550FB9171* ___manager_6;
};

// TouchScript.Examples.Tap.Kick
struct Kick_t4D0A51FC8FE23046F1F101773E10F0821E3740AB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TouchScript.Examples.Tap.Kick::Force
	float ___Force_4;
	// UnityEngine.ParticleSystem TouchScript.Examples.Tap.Kick::Particles
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___Particles_5;
	// TouchScript.Gestures.TapGesture TouchScript.Examples.Tap.Kick::gesture
	TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* ___gesture_6;
	// UnityEngine.Rigidbody TouchScript.Examples.Tap.Kick::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_7;
	// UnityEngine.Camera TouchScript.Examples.Tap.Kick::activeCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___activeCamera_8;
};

// TouchScript.Examples.Cube.LayerDelegate
struct LayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TouchScript.Examples.Cube.RedirectInput TouchScript.Examples.Cube.LayerDelegate::Source
	RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* ___Source_4;
	// TouchScript.Layers.TouchLayer TouchScript.Examples.Cube.LayerDelegate::RenderTextureLayer
	TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* ___RenderTextureLayer_5;
};

// TouchScript.Examples.Multiuser.Logo
struct Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_StaticFields
{
	// UnityEngine.Color[] TouchScript.Examples.Multiuser.Logo::COLORS
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___COLORS_4;
};

// TouchScript.Examples.Portal.Planet
struct Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TouchScript.Examples.Portal.Planet::Speed
	float ___Speed_4;
	// System.Single TouchScript.Examples.Portal.Planet::RotationSpeed
	float ___RotationSpeed_5;
	// System.Single TouchScript.Examples.Portal.Planet::FallSpeed
	float ___FallSpeed_6;
	// TouchScript.Examples.Portal.Planet/PlanetStatus TouchScript.Examples.Portal.Planet::status
	int32_t ___status_7;
};

// TouchScript.Behaviors.Cursors.PointerCursor
struct PointerCursor_t2129BB96AA7A3D5778B1745F3D14C32713B62C8F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TouchScript.Behaviors.Cursors.PointerCursor/CursorState TouchScript.Behaviors.Cursors.PointerCursor::state
	int32_t ___state_4;
	// System.Object TouchScript.Behaviors.Cursors.PointerCursor::stateData
	RuntimeObject* ___stateData_5;
	// UnityEngine.RectTransform TouchScript.Behaviors.Cursors.PointerCursor::rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect_6;
	// UnityEngine.Canvas TouchScript.Behaviors.Cursors.PointerCursor::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_7;
	// System.Single TouchScript.Behaviors.Cursors.PointerCursor::size
	float ___size_8;
	// System.Single TouchScript.Behaviors.Cursors.PointerCursor::defaultSize
	float ___defaultSize_9;
	// System.UInt32 TouchScript.Behaviors.Cursors.PointerCursor::hash
	uint32_t ___hash_10;
};

// TouchScript.Examples.Portal.Rotator
struct Rotator_tA915D33647DE1B938F586B9A943F27EDF0E85BA0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single TouchScript.Examples.Portal.Rotator::RotationSpeed
	float ___RotationSpeed_4;
};

// TouchScript.Examples.UI.SetColor
struct SetColor_t29AB8D3C1DEFAABDCDC85E2FEA54DC489CDD577D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<UnityEngine.Color> TouchScript.Examples.UI.SetColor::Colors
	List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* ___Colors_4;
};

// TouchScript.Examples.Tap.Spawn
struct Spawn_tF5B494AB0A9CCDCDD94722E4BF2A66481770CFCA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform TouchScript.Examples.Tap.Spawn::CubePrefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___CubePrefab_4;
	// UnityEngine.Transform TouchScript.Examples.Tap.Spawn::Container
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Container_5;
	// System.Single TouchScript.Examples.Tap.Spawn::Scale
	float ___Scale_6;
};

// TouchScript.Examples.Portal.Spawner
struct Spawner_t06C1D4F57ECCA1D163E35395EAF724C2FAF1535F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform TouchScript.Examples.Portal.Spawner::Prefab
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Prefab_4;
	// UnityEngine.Transform TouchScript.Examples.Portal.Spawner::Position
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Position_5;
	// TouchScript.Gestures.PressGesture TouchScript.Examples.Portal.Spawner::press
	PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* ___press_6;
};

// TouchScript.Examples.RawInput.Spawner
struct Spawner_tD4CDFFA2D4208FD417F476752B102364C2A0BF30  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject TouchScript.Examples.RawInput.Spawner::Prefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Prefab_4;
};

// TouchScript.Layers.TouchLayer
struct TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.EventHandler`1<TouchScript.Layers.TouchLayerEventArgs> TouchScript.Layers.TouchLayer::pointerPressInvoker
	EventHandler_1_t2EB444F3FA1B60ACDF19080C2A7C0C94C97B2C5B* ___pointerPressInvoker_4;
	// System.String TouchScript.Layers.TouchLayer::Name
	String_t* ___Name_5;
	// TouchScript.Layers.ILayerDelegate TouchScript.Layers.TouchLayer::<Delegate>k__BackingField
	RuntimeObject* ___U3CDelegateU3Ek__BackingField_6;
	// TouchScript.Layers.ProjectionParams TouchScript.Layers.TouchLayer::layerProjectionParams
	ProjectionParams_tA7F34320AE2E2D38ACC717FEEB35D7CF4E68A031* ___layerProjectionParams_7;
	// TouchScript.ILayerManager TouchScript.Layers.TouchLayer::manager
	RuntimeObject* ___manager_8;
	// System.Collections.Generic.List`1<TouchScript.Hit.HitTest> TouchScript.Layers.TouchLayer::tmpHitTestList
	List_1_t7732A96371C54AE5971F79E0B8F9F5ADD7DF18F4* ___tmpHitTestList_9;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TouchScript.Examples.Portal.Vortex
struct Vortex_tF50697499748E298C7E0472F113FB5CC6204CC10  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// TouchScript.Examples.Cube.CustomPointerProxy
struct CustomPointerProxy_tD0D2F4BF50F3F28B58F6AB5964F1278E0D0670E4  : public PointerCursor_t2129BB96AA7A3D5778B1745F3D14C32713B62C8F
{
};

// TouchScript.Gestures.Gesture
struct Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328  : public DebuggableMonoBehaviour_tB8E7E5E9428B34D292319AA0EB9BFF1AB791910E
{
	// System.EventHandler`1<TouchScript.Gestures.GestureStateChangeEventArgs> TouchScript.Gestures.Gesture::stateChangedInvoker
	EventHandler_1_t945874111F5012948AA203719B1A7FFEE1A50F51* ___stateChangedInvoker_6;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.Gesture::cancelledInvoker
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___cancelledInvoker_7;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.Gesture::OnStateChange
	GestureEvent_t60F4776CB6B1917B65764E10319F1D213EBA2884* ___OnStateChange_8;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::<PreviousState>k__BackingField
	int32_t ___U3CPreviousStateU3Ek__BackingField_9;
	// TouchScript.IGestureDelegate TouchScript.Gestures.Gesture::<Delegate>k__BackingField
	RuntimeObject* ___U3CDelegateU3Ek__BackingField_10;
	// TouchScript.Core.TouchManagerInstance TouchScript.Gestures.Gesture::<touchManager>k__BackingField
	TouchManagerInstance_t994F9C383E00DB02613F390A02C82BC550FB9171* ___U3CtouchManagerU3Ek__BackingField_11;
	// TouchScript.Gestures.Gesture/PointersNumState TouchScript.Gestures.Gesture::<pointersNumState>k__BackingField
	int32_t ___U3CpointersNumStateU3Ek__BackingField_12;
	// System.Collections.Generic.List`1<TouchScript.Pointers.Pointer> TouchScript.Gestures.Gesture::activePointers
	List_1_tE67194E33860F427C7F44674FBA7174A52DD7502* ___activePointers_13;
	// UnityEngine.Transform TouchScript.Gestures.Gesture::cachedTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cachedTransform_14;
	// System.Boolean TouchScript.Gestures.Gesture::basicEditor
	bool ___basicEditor_15;
	// System.Boolean TouchScript.Gestures.Gesture::generalProps
	bool ___generalProps_16;
	// System.Boolean TouchScript.Gestures.Gesture::limitsProps
	bool ___limitsProps_17;
	// System.Boolean TouchScript.Gestures.Gesture::advancedProps
	bool ___advancedProps_18;
	// System.Int32 TouchScript.Gestures.Gesture::minPointers
	int32_t ___minPointers_19;
	// System.Int32 TouchScript.Gestures.Gesture::maxPointers
	int32_t ___maxPointers_20;
	// System.Boolean TouchScript.Gestures.Gesture::useSendMessage
	bool ___useSendMessage_21;
	// System.Boolean TouchScript.Gestures.Gesture::sendStateChangeMessages
	bool ___sendStateChangeMessages_22;
	// UnityEngine.GameObject TouchScript.Gestures.Gesture::sendMessageTarget
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sendMessageTarget_23;
	// System.Boolean TouchScript.Gestures.Gesture::useUnityEvents
	bool ___useUnityEvents_24;
	// System.Boolean TouchScript.Gestures.Gesture::sendStateChangeEvents
	bool ___sendStateChangeEvents_25;
	// TouchScript.Gestures.Gesture TouchScript.Gestures.Gesture::requireGestureToFail
	Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328* ___requireGestureToFail_26;
	// System.Collections.Generic.List`1<TouchScript.Gestures.Gesture> TouchScript.Gestures.Gesture::friendlyGestures
	List_1_t3922AAAE5EF2642C413CC0095B6D167382279A2B* ___friendlyGestures_27;
	// System.Int32 TouchScript.Gestures.Gesture::numPointers
	int32_t ___numPointers_28;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<TouchScript.Pointers.Pointer> TouchScript.Gestures.Gesture::readonlyActivePointers
	ReadOnlyCollection_1_tDFE83C50A6E3876723B567DDA4EA6BF0A4035182* ___readonlyActivePointers_29;
	// TouchScript.Core.GestureManagerInstance TouchScript.Gestures.Gesture::gestureManagerInstance
	GestureManagerInstance_t52A67A494FB7D4F0D03E9952FBAE61EA2D4E343D* ___gestureManagerInstance_30;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::delayedStateChange
	int32_t ___delayedStateChange_31;
	// System.Boolean TouchScript.Gestures.Gesture::requiredGestureFailed
	bool ___requiredGestureFailed_32;
	// TouchScript.Pointers.FakePointer TouchScript.Gestures.Gesture::fakePointer
	FakePointer_tC539FC4F48E5A07EDF91D7D5314A63CD19144955* ___fakePointer_33;
	// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::state
	int32_t ___state_34;
	// UnityEngine.Vector2 TouchScript.Gestures.Gesture::cachedScreenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cachedScreenPosition_35;
	// UnityEngine.Vector2 TouchScript.Gestures.Gesture::cachedPreviousScreenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___cachedPreviousScreenPosition_36;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// TouchScript.Examples.Cube.RedirectInput
struct RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664  : public InputSource_t5F35F4CBFE549A83F66BA3DA824DB56EAFECB34D
{
	// System.Int32 TouchScript.Examples.Cube.RedirectInput::Width
	int32_t ___Width_7;
	// System.Int32 TouchScript.Examples.Cube.RedirectInput::Height
	int32_t ___Height_8;
	// TouchScript.Gestures.MetaGesture TouchScript.Examples.Cube.RedirectInput::gesture
	MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* ___gesture_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Pointers.Pointer> TouchScript.Examples.Cube.RedirectInput::map
	Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* ___map_10;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TouchScript.Gestures.MetaGesture
struct MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1  : public Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328
{
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::pointerPressedInvoker
	EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___pointerPressedInvoker_41;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::pointerUpdatedInvoker
	EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___pointerUpdatedInvoker_42;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::pointerReleasedInvoker
	EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___pointerReleasedInvoker_43;
	// System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs> TouchScript.Gestures.MetaGesture::pointerCancelledInvoker
	EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___pointerCancelledInvoker_44;
	// UnityEngine.Profiling.CustomSampler TouchScript.Gestures.MetaGesture::gestureSampler
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___gestureSampler_45;
};

// TouchScript.Gestures.PressGesture
struct PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC  : public Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.PressGesture::pressedInvoker
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___pressedInvoker_38;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.PressGesture::OnPress
	GestureEvent_t60F4776CB6B1917B65764E10319F1D213EBA2884* ___OnPress_39;
	// System.Boolean TouchScript.Gestures.PressGesture::ignoreChildren
	bool ___ignoreChildren_40;
	// UnityEngine.Profiling.CustomSampler TouchScript.Gestures.PressGesture::gestureSampler
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___gestureSampler_41;
};

// TouchScript.Gestures.ReleaseGesture
struct ReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553  : public Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.ReleaseGesture::releasedInvoker
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___releasedInvoker_38;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.ReleaseGesture::OnRelease
	GestureEvent_t60F4776CB6B1917B65764E10319F1D213EBA2884* ___OnRelease_39;
	// System.Boolean TouchScript.Gestures.ReleaseGesture::ignoreChildren
	bool ___ignoreChildren_40;
	// UnityEngine.Profiling.CustomSampler TouchScript.Gestures.ReleaseGesture::gestureSampler
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___gestureSampler_41;
};

// TouchScript.Gestures.TapGesture
struct TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA  : public Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.TapGesture::tappedInvoker
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___tappedInvoker_38;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.TapGesture::OnTap
	GestureEvent_t60F4776CB6B1917B65764E10319F1D213EBA2884* ___OnTap_39;
	// System.Int32 TouchScript.Gestures.TapGesture::numberOfTapsRequired
	int32_t ___numberOfTapsRequired_40;
	// System.Single TouchScript.Gestures.TapGesture::timeLimit
	float ___timeLimit_41;
	// System.Single TouchScript.Gestures.TapGesture::distanceLimit
	float ___distanceLimit_42;
	// System.Boolean TouchScript.Gestures.TapGesture::combinePointers
	bool ___combinePointers_43;
	// System.Single TouchScript.Gestures.TapGesture::combinePointersInterval
	float ___combinePointersInterval_44;
	// System.Single TouchScript.Gestures.TapGesture::distanceLimitInPixelsSquared
	float ___distanceLimitInPixelsSquared_45;
	// System.Boolean TouchScript.Gestures.TapGesture::isActive
	bool ___isActive_46;
	// System.Int32 TouchScript.Gestures.TapGesture::tapsDone
	int32_t ___tapsDone_47;
	// UnityEngine.Vector2 TouchScript.Gestures.TapGesture::startPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startPosition_48;
	// UnityEngine.Vector2 TouchScript.Gestures.TapGesture::totalMovement
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___totalMovement_49;
	// TouchScript.Utils.TimedSequence`1<TouchScript.Pointers.Pointer> TouchScript.Gestures.TapGesture::pointerSequence
	TimedSequence_1_t8A53DB0C7E41125D0F2CB4272328ED0310D0C4C7* ___pointerSequence_50;
	// UnityEngine.Profiling.CustomSampler TouchScript.Gestures.TapGesture::gestureSampler
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___gestureSampler_51;
};

// TouchScript.Gestures.TransformGestures.Base.TransformGestureBase
struct TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A  : public Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328
{
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::transformStartedInvoker
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___transformStartedInvoker_40;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::transformedInvoker
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___transformedInvoker_41;
	// System.EventHandler`1<System.EventArgs> TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::transformCompletedInvoker
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___transformCompletedInvoker_42;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::OnTransformStart
	GestureEvent_t60F4776CB6B1917B65764E10319F1D213EBA2884* ___OnTransformStart_43;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::OnTransform
	GestureEvent_t60F4776CB6B1917B65764E10319F1D213EBA2884* ___OnTransform_44;
	// TouchScript.Gestures.Gesture/GestureEvent TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::OnTransformComplete
	GestureEvent_t60F4776CB6B1917B65764E10319F1D213EBA2884* ___OnTransformComplete_45;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::screenTransformPixelThreshold
	float ___screenTransformPixelThreshold_46;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::screenTransformPixelThresholdSquared
	float ___screenTransformPixelThresholdSquared_47;
	// TouchScript.Gestures.TransformGestures.TransformGesture/TransformType TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::transformMask
	int32_t ___transformMask_48;
	// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::deltaPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___deltaPosition_49;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::deltaRotation
	float ___deltaRotation_50;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::deltaScale
	float ___deltaScale_51;
	// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::rotationAxis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationAxis_52;
	// System.Boolean TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::isTransforming
	bool ___isTransforming_53;
	// System.Boolean TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::targetPositionOverridden
	bool ___targetPositionOverridden_54;
	// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::targetPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetPosition_55;
	// TouchScript.Gestures.TransformGestures.TransformGesture/TransformType TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::type
	int32_t ___type_56;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::screenTransformThreshold
	float ___screenTransformThreshold_57;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// TouchScript.Gestures.TransformGestures.Base.OnePointTrasformGestureBase
struct OnePointTrasformGestureBase_tF090D106303D0C44F1DA7413D9F41AB98412F2BF  : public TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A
{
	// UnityEngine.Vector2 TouchScript.Gestures.TransformGestures.Base.OnePointTrasformGestureBase::screenPixelTranslationBuffer
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPixelTranslationBuffer_58;
	// System.Single TouchScript.Gestures.TransformGestures.Base.OnePointTrasformGestureBase::screenPixelRotationBuffer
	float ___screenPixelRotationBuffer_59;
	// System.Single TouchScript.Gestures.TransformGestures.Base.OnePointTrasformGestureBase::angleBuffer
	float ___angleBuffer_60;
	// System.Single TouchScript.Gestures.TransformGestures.Base.OnePointTrasformGestureBase::screenPixelScalingBuffer
	float ___screenPixelScalingBuffer_61;
	// System.Single TouchScript.Gestures.TransformGestures.Base.OnePointTrasformGestureBase::scaleBuffer
	float ___scaleBuffer_62;
};

// TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase
struct TwoPointTransformGestureBase_tA9E5F466EE9DA92980EF98F938189DF3793AF1D4  : public TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A
{
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::minScreenPointsPixelDistance
	float ___minScreenPointsPixelDistance_58;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::minScreenPointsPixelDistanceSquared
	float ___minScreenPointsPixelDistanceSquared_59;
	// UnityEngine.Vector2 TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::screenPixelTranslationBuffer
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPixelTranslationBuffer_60;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::screenPixelRotationBuffer
	float ___screenPixelRotationBuffer_61;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::angleBuffer
	float ___angleBuffer_62;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::screenPixelScalingBuffer
	float ___screenPixelScalingBuffer_63;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::scaleBuffer
	float ___scaleBuffer_64;
	// System.Single TouchScript.Gestures.TransformGestures.Base.TwoPointTransformGestureBase::minScreenPointsDistance
	float ___minScreenPointsDistance_65;
};

// TouchScript.Gestures.TransformGestures.PinnedTransformGesture
struct PinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B  : public OnePointTrasformGestureBase_tF090D106303D0C44F1DA7413D9F41AB98412F2BF
{
	// System.Boolean TouchScript.Gestures.TransformGestures.PinnedTransformGesture::projectionProps
	bool ___projectionProps_63;
	// TouchScript.Gestures.TransformGestures.TransformGesture/ProjectionType TouchScript.Gestures.TransformGestures.PinnedTransformGesture::projection
	int32_t ___projection_64;
	// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.PinnedTransformGesture::projectionPlaneNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___projectionPlaneNormal_65;
	// TouchScript.Layers.TouchLayer TouchScript.Gestures.TransformGestures.PinnedTransformGesture::projectionLayer
	TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* ___projectionLayer_66;
	// UnityEngine.Plane TouchScript.Gestures.TransformGestures.PinnedTransformGesture::transformPlane
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___transformPlane_67;
	// UnityEngine.Profiling.CustomSampler TouchScript.Gestures.TransformGestures.PinnedTransformGesture::gestureSampler
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___gestureSampler_68;
};

// TouchScript.Gestures.TransformGestures.ScreenTransformGesture
struct ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302  : public TwoPointTransformGestureBase_tA9E5F466EE9DA92980EF98F938189DF3793AF1D4
{
	// UnityEngine.Profiling.CustomSampler TouchScript.Gestures.TransformGestures.ScreenTransformGesture::gestureSampler
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___gestureSampler_66;
};

// TouchScript.Gestures.TransformGestures.TransformGesture
struct TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277  : public TwoPointTransformGestureBase_tA9E5F466EE9DA92980EF98F938189DF3793AF1D4
{
	// System.Boolean TouchScript.Gestures.TransformGestures.TransformGesture::projectionProps
	bool ___projectionProps_66;
	// TouchScript.Gestures.TransformGestures.TransformGesture/ProjectionType TouchScript.Gestures.TransformGestures.TransformGesture::projection
	int32_t ___projection_67;
	// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.TransformGesture::projectionPlaneNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___projectionPlaneNormal_68;
	// TouchScript.Layers.TouchLayer TouchScript.Gestures.TransformGestures.TransformGesture::projectionLayer
	TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* ___projectionLayer_69;
	// UnityEngine.Plane TouchScript.Gestures.TransformGestures.TransformGesture::transformPlane
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___transformPlane_70;
	// UnityEngine.Profiling.CustomSampler TouchScript.Gestures.TransformGestures.TransformGesture::gestureSampler
	CustomSampler_tDA472186F08B4016626F032F944036BADFDB5487* ___gestureSampler_71;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_gshared (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_gshared_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_gshared (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_gshared_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___item0, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TouchScript.Gestures.TapGesture>()
inline TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0 (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void TouchScript.Gestures.TapGesture::add_Tapped(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGesture_add_Tapped_mB08594B176B95B1A776A58080D3599D41EBEA84A (TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.TapGesture::remove_Tapped(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TapGesture_remove_Tapped_mD5DB7DE0700F9E7EA5310D5566B9A8C4E15102F2 (TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForceAtPosition(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, int32_t ___mode2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.ParticleSystem>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* (*) (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Transform>(T)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___original0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TouchScript.Hit.HitData::get_Point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HitData_get_Point_mB80D6305358C6C3562D4C575E90DED1F512F47BF (HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TouchScript.Hit.HitData::get_Normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 HitData_get_Normal_m1E2DAC432C8841A1FAC18206B721E6BCD53DFA5B (HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// TouchScript.ITouchManager TouchScript.TouchManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TouchManager_get_Instance_m7E3807C8753B49D1A16A9230CF545085FA981282 (const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<TouchScript.PointerEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m7DE7F8D3FFDDD0E3FE0CE47C86B7FE230638DC0A (EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<TouchScript.Pointers.Pointer> TouchScript.PointerEventArgs::get_Pointers()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointerEventArgs_get_Pointers_mAB560A5983995A1FDCE5D6CD33CC2B23AC085019_inline (PointerEventArgs_t34E1B84AA12A97F9C4C8E597B04CBB3D09E14506* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 TouchScript.Pointers.Pointer::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Pointer_get_Position_mCC964F3067241BEBB1FCC1AFACE9CFE86C690EA7_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) ;
// System.Void TouchScript.Examples.RawInput.Spawner::spawnPrefabAt(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_spawnPrefabAt_m08F713BCA36BBECD55B7DA348172CB2AD42A2EDA (Spawner_tD4CDFFA2D4208FD417F476752B102364C2A0BF30* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TouchScript.Gestures.TransformGestures.TransformGesture>()
inline TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.Gesture::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gesture_Cancel_m88BE5C51DA05CB0A74343B2AB6395AAE9F568914 (Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TouchScript.Gestures.PressGesture>()
inline PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TouchScript.Gestures.PressGesture::add_Pressed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressGesture_add_Pressed_m548E406C046234840C45544EE930A1AD9AC8B6DF (PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TouchScript.Gestures.ReleaseGesture>()
inline ReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553* Component_GetComponent_TisReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553_m0C36D5E272F7B39B73358962F2A31B0D60D421C0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TouchScript.Gestures.ReleaseGesture::add_Released(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseGesture_add_Released_m8B7C16F818F7603BAAE67D3E87406321B05D2276 (ReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.PressGesture::remove_Pressed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressGesture_remove_Pressed_mF1AEE5AF0961737208002C0AFB02E4D1B6E7955E (PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.ReleaseGesture::remove_Released(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReleaseGesture_remove_Released_mCAFC9693E547D8B7F703EB9D29A8E096854C457C (ReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, float ___angle2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.Transform>(T,UnityEngine.Transform)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m2E2C8E63B5A6D0A40ADCE97453E32B95C7E1842C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// TouchScript.ILayerManager TouchScript.LayerManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LayerManager_get_Instance_m4F884E1DBFAB83401A56D7FF7A347489F091AFF6 (const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.Gesture::Cancel(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gesture_Cancel_m8D7C4119C62D103DAC966B99819529A50BEC843C (Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328* __this, bool ___cancelPointers0, bool ___returnPointers1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TouchScript.Examples.Portal.Planet>()
inline Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* Component_GetComponent_TisPlanet_tC0057A04D392837CE56516897DF1CE245B0FD5D5_m748EAE8A83042AFCD59BB98885FD8B3A98A65441 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TouchScript.Examples.Portal.Planet::Fall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planet_Fall_m6ABE20F8368BAD50B7912562918F323D3A006711 (Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Color>::get_Item(System.Int32)
inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Color_tD001788D726C3A7F1379BEED0260B9591F440C1F (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, int32_t, const RuntimeMethod*))List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_gshared)(__this, ___index0, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void TouchScript.Examples.Photos.Container::initChild(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_initChild_mF8B89CD99C9D125270B0F70FCC3119E3B0F38A4A (Container_t049DA32B3E25F2869749297EAE6B5DFA04AE6A4F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___child0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Examples.Multiuser.Logo::changeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logo_changeColor_m9B96C35C674A7A37DDE091689D920871A6A60358 (Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_magenta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) ;
// System.Void TouchScript.Behaviors.Cursors.PointerCursor::Hide()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCursor_Hide_mA7E7AA39EBFE37B6355D0419EF2AA784D867CFED (PointerCursor_t2129BB96AA7A3D5778B1745F3D14C32713B62C8F* __this, const RuntimeMethod* method) ;
// System.Void TouchScript.Behaviors.Cursors.PointerCursor::updateOnce(TouchScript.Pointers.IPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCursor_updateOnce_mC5A041CB55750A83B82693951932D9B0507FDEBD (PointerCursor_t2129BB96AA7A3D5778B1745F3D14C32713B62C8F* __this, RuntimeObject* ___pointer0, const RuntimeMethod* method) ;
// System.Void TouchScript.Behaviors.Cursors.PointerCursor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerCursor__ctor_m81B5AF84010FBFBAAA5A10E96AD86E0325DAD47D (PointerCursor_t2129BB96AA7A3D5778B1745F3D14C32713B62C8F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TouchScript.Examples.Cube.LayerDelegate>()
inline LayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9* Component_GetComponent_TisLayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9_m8F9B169C4582D5B1768F65B67F98D093612F0C83 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  LayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<TouchScript.Layers.TouchLayer>()
inline TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* GameObject_GetComponent_TisTouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC_m5B160E21C2C5053F23FCF10C33334E4CF48330F6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void TouchScript.Layers.TouchLayer::set_Delegate(TouchScript.Layers.ILayerDelegate)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchLayer_set_Delegate_mB04E28606ABA281FB3F1116DF03720050FE461E4_inline (TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Boolean TouchScript.InputSources.InputSource::CancelPointer(TouchScript.Pointers.Pointer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputSource_CancelPointer_m15EDFF7BDA2F13E765E9E7CD292646AB5F7CF37C (InputSource_t5F35F4CBFE549A83F66BA3DA824DB56EAFECB34D* __this, Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* ___pointer0, bool ___shouldReturn1, const RuntimeMethod* method) ;
// System.Int32 TouchScript.Pointers.Pointer::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Id_m9C5467EDDE02A8BB7F16B93549BD98D1B623044B_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Pointers.Pointer>::Remove(TKey)
inline bool Dictionary_2_Remove_m92CCAA6A5194E87FED6A5EA6A36500A8DC358C78 (Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Boolean TouchScript.Utils.PointerUtils::IsPointerOnTarget(TouchScript.Pointers.IPointer,UnityEngine.Transform,TouchScript.Hit.HitData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PointerUtils_IsPointerOnTarget_m6671A9B9F1910CC008695D114E8DD976D8E36451 (RuntimeObject* ___pointer0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target1, HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8* ___hit2, const RuntimeMethod* method) ;
// TouchScript.Pointers.Pointer/PointerType TouchScript.Pointers.Pointer::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Type_m9A7E3A5AB7479815826D65C54225DD600DB05B12_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) ;
// TouchScript.Pointers.Pointer TouchScript.Pointers.PointerFactory::Create(TouchScript.Pointers.Pointer/PointerType,TouchScript.InputSources.IInputSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* PointerFactory_Create_m64972F49E308ACCCF358F589880FE5C96D8FC892 (int32_t ___type0, RuntimeObject* ___input1, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit TouchScript.Hit.HitData::get_RaycastHit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 HitData_get_RaycastHit_m7778416AE51247795097D9F6FD41286D235D9156_inline (HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RaycastHit::get_textureCoord()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 TouchScript.Examples.Cube.RedirectInput::processCoords(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RedirectInput_processCoords_mD7E3DEE8AFBED885D874ECB953626EC39608B604 (RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Pointers.Pointer::set_Position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pointer_set_Position_m8BB3AEBFF0E6A2BB1CE2F62C44F964F0AAF9B96B_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Pointers.Pointer>::Add(TKey,TValue)
inline void Dictionary_2_Add_m9C473954D69A3BDB36E3CBA02713674BD5B54490 (Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* __this, int32_t ___key0, Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1*, int32_t, Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TouchScript.InputSources.InputSource::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSource_OnEnable_m7C5A204C2FC5F5A20F05983D6C4FAAB532A3CD18 (InputSource_t5F35F4CBFE549A83F66BA3DA824DB56EAFECB34D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TouchScript.Gestures.MetaGesture>()
inline MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* Component_GetComponent_TisMetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1_m7DEB8B863C6327C15FBF4D7729371BBCEFB99D60 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m06CD96CE19ABBFBB7F9C16D609382A5D8603A617 (EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void TouchScript.Gestures.MetaGesture::add_PointerPressed(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaGesture_add_PointerPressed_m7E689DD8911A9CD83AEDA162C0EC128862998E5E (MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* __this, EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.MetaGesture::add_PointerUpdated(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaGesture_add_PointerUpdated_m5EC1647AE6BECC40F16BDB1228A058CE44F47AD5 (MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* __this, EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.MetaGesture::add_PointerCancelled(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaGesture_add_PointerCancelled_m0F12762E04641BAFC105266CD2584EA6A06E4916 (MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* __this, EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.MetaGesture::add_PointerReleased(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaGesture_add_PointerReleased_m1620231E965F1B4B39BA55CD30EEF29967FA05B3 (MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* __this, EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.InputSources.InputSource::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSource_OnDisable_m2B39BA44E4BC0DD69A76A7B36B818A959547BFB0 (InputSource_t5F35F4CBFE549A83F66BA3DA824DB56EAFECB34D* __this, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.MetaGesture::remove_PointerPressed(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaGesture_remove_PointerPressed_m50805370EA308EB6D41737C4A56779FEE4350ABC (MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* __this, EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.MetaGesture::remove_PointerUpdated(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaGesture_remove_PointerUpdated_m83BCBCB9B6803FD4AFC1E329D956A00F21E0866E (MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* __this, EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.MetaGesture::remove_PointerCancelled(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaGesture_remove_PointerCancelled_m492E83BF6693D2CE4A2CC736F315C3E8528D4358 (MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* __this, EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.MetaGesture::remove_PointerReleased(System.EventHandler`1<TouchScript.Gestures.MetaGestureEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetaGesture_remove_PointerReleased_m9851B6FF74FD3427A59B5E89424D06497C463A4C (MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* __this, EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// TouchScript.Pointers.Pointer TouchScript.Gestures.MetaGestureEventArgs::get_Pointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* MetaGestureEventArgs_get_Pointer_mD0BF2306FF9ECDF8A99379A80250AEEB46811A69_inline (MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882* __this, const RuntimeMethod* method) ;
// TouchScript.InputSources.IInputSource TouchScript.Pointers.Pointer::get_InputSource()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Pointer_get_InputSource_m306BF9822AE2DD68F975664BFFD93E728A18B1CF_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) ;
// TouchScript.Hit.HitData TouchScript.Pointers.Pointer::GetPressData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 Pointer_GetPressData_mFD643B1E884273BBEBF2BE9D5937A3ED5CB9DBAC_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) ;
// System.UInt32 TouchScript.Pointers.Pointer::get_Flags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Pointer_get_Flags_m9B05FE393C3CAAE7082E8A93C342693A433F26BB_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) ;
// System.Void TouchScript.Pointers.Pointer::set_Flags(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pointer_set_Flags_mF86CFDD45413FFA8B143EB0F087BFC0DEFFDBC1C_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Pointers.Pointer>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m1CAC41A5B1CCFB997BA9D49A3CE480CDD4F2F82E (Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* __this, int32_t ___key0, Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1*, int32_t, Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TouchScript.Pointers.Pointer>::.ctor()
inline void Dictionary_2__ctor_mABDFF1DC03570A3D7B0B66A0C01FA0F21E459FFB (Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void TouchScript.InputSources.InputSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputSource__ctor_m67D68C29DA6EB4473AF36546A6A045D9953E8DC1 (InputSource_t5F35F4CBFE549A83F66BA3DA824DB56EAFECB34D* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// TouchScript.Gestures.Gesture/GestureState TouchScript.Gestures.Gesture::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gesture_get_State_m3ABDFFD4DEA6B22E22F2559D768EF08FDEE26412_inline (Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TouchScript.Examples.Colors.Circle>()
inline Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* Component_GetComponent_TisCircle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED_m08848E63B3A36D739FFF2220AD544216271575DD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Color TouchScript.Examples.Colors.Circle::Kill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Circle_Kill_mED9E6081A550602A5D45551E2B9E522EFB21ABD5 (Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Color>::get_Count()
inline int32_t List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, const RuntimeMethod*))List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::.ctor()
inline void List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, const RuntimeMethod*))List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Color>::Add(T)
inline void List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Color UnityEngine.Color::get_gray()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TouchScript.Gestures.TransformGestures.PinnedTransformGesture>()
inline PinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B* Component_GetComponent_TisPinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B_mD034F9502588767567CB2372E9CDA2BFA8DC9A69 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  PinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::add_Transformed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformGestureBase_add_Transformed_m1AD08C336A6B7D9ABC94D736CCB6031DA80E5FC7 (TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Void TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::remove_Transformed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformGestureBase_remove_Transformed_mE642B124DCF83ECD5192F6977201BDC96EE73D60 (TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) ;
// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::get_DeltaRotation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TransformGestureBase_get_DeltaRotation_m4FDEA2D458A857979C4CF2D1E65D2BAD80D72D98_inline (TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::get_RotationAxis()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformGestureBase_get_RotationAxis_m371085DAA16F819A40EBAC5415EE08772CE70C83_inline (TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// TouchScript.IGestureManager TouchScript.GestureManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GestureManager_get_Instance_mAA2400C542ABC7F5492A61DE3DCCBFFE91B16D92 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Material::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::get_DeltaPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformGestureBase_get_DeltaPosition_mF7D11CA54C34FB1179C40C4BC2624041955E302E_inline (TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Single TouchScript.Gestures.TransformGestures.Base.TransformGestureBase::get_DeltaScale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TransformGestureBase_get_DeltaScale_mA042D1868ADCD87EDF62ECC7E847F8937E098DCD_inline (TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TouchScript.Examples.Tap.Kick::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kick_OnEnable_m9CDFF14178F9E4BD8C25EEFDE4BC5EC923ED2FB6 (Kick_t4D0A51FC8FE23046F1F101773E10F0821E3740AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kick_tappedHandler_mE9D5591CC441851AEEA1E51084FF2323A42F483D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DC25B34B12D85BCF6B8E7DC5A4D94A5EBA01D03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rb_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_7), (void*)L_0);
		// activeCamera = GameObject.Find("Scene Camera").GetComponent<Camera>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5DC25B34B12D85BCF6B8E7DC5A4D94A5EBA01D03, NULL);
		NullCheck(L_1);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2;
		L_2 = GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6(L_1, GameObject_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m3B3C11550E48AA36AFF82788636EB163CC51FEE6_RuntimeMethod_var);
		__this->___activeCamera_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeCamera_8), (void*)L_2);
		// gesture = GetComponent<TapGesture>();
		TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* L_3;
		L_3 = Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7(__this, Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7_RuntimeMethod_var);
		__this->___gesture_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gesture_6), (void*)L_3);
		// gesture.Tapped += tappedHandler;
		TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* L_4 = __this->___gesture_6;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)Kick_tappedHandler_mE9D5591CC441851AEEA1E51084FF2323A42F483D_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		TapGesture_add_Tapped_mB08594B176B95B1A776A58080D3599D41EBEA84A(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Tap.Kick::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kick_OnDisable_m8792AAE03881103B16791DD0D0996F040C94BAB9 (Kick_t4D0A51FC8FE23046F1F101773E10F0821E3740AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Kick_tappedHandler_mE9D5591CC441851AEEA1E51084FF2323A42F483D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gesture.Tapped -= tappedHandler;
		TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* L_0 = __this->___gesture_6;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)Kick_tappedHandler_mE9D5591CC441851AEEA1E51084FF2323A42F483D_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		TapGesture_remove_Tapped_mD5DB7DE0700F9E7EA5310D5566B9A8C4E15102F2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Tap.Kick::tappedHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kick_tappedHandler_mE9D5591CC441851AEEA1E51084FF2323A42F483D (Kick_t4D0A51FC8FE23046F1F101773E10F0821E3740AB* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var ray = activeCamera.ScreenPointToRay(gesture.ScreenPosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___activeCamera_8;
		TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* L_1 = __this->___gesture_6;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = VirtualFuncInvoker0< Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 >::Invoke(8 /* UnityEngine.Vector2 TouchScript.Gestures.Gesture::get_ScreenPosition() */, L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_2, NULL);
		NullCheck(L_0);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4;
		L_4 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_3, NULL);
		V_0 = L_4;
		// if (Physics.Raycast(ray, out hit) && hit.transform == transform)
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_5 = V_0;
		bool L_6;
		L_6 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_5, (&V_1), NULL);
		if (!L_6)
		{
			goto IL_0077;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = RaycastHit_get_transform_m89DB7FCFC50E0213A37CBE089400064B8FA19155((&V_1), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		// rb.AddForceAtPosition(ray.direction*Force, hit.point, ForceMode.Impulse);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10 = __this->___rb_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_0), NULL);
		float L_12 = __this->___Force_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		NullCheck(L_10);
		Rigidbody_AddForceAtPosition_m61575E676B16690BEC0FD29841EAD35CC40B642C(L_10, L_13, L_14, 1, NULL);
		// Instantiate(Particles, hit.point, Quaternion.identity);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_15 = __this->___Particles_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_18;
		L_18 = Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2(L_15, L_16, L_17, Object_Instantiate_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4D124F2FEF37B79E055EECB4988220B0F2F98CE2_RuntimeMethod_var);
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Tap.Kick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Kick__ctor_mC29D6DB49FDA2208BB11B04BAA690BF0D3D3CFAD (Kick_t4D0A51FC8FE23046F1F101773E10F0821E3740AB* __this, const RuntimeMethod* method) 
{
	{
		// public float Force = 3f;
		__this->___Force_4 = (3.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.Tap.Spawn::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawn_OnEnable_m735A2333D3B4BA6C92D3A4AA20753C46B85268AB (Spawn_tF5B494AB0A9CCDCDD94722E4BF2A66481770CFCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawn_tappedHandler_m3A7D76071BA4A7B889244313032928F89CCCEC6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<TapGesture>().Tapped += tappedHandler;
		TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* L_0;
		L_0 = Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7(__this, Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7_RuntimeMethod_var);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)Spawn_tappedHandler_m3A7D76071BA4A7B889244313032928F89CCCEC6E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		TapGesture_add_Tapped_mB08594B176B95B1A776A58080D3599D41EBEA84A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Tap.Spawn::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawn_OnDisable_m51D109BD27D425EEE627D48A4A86EE584DB16C6F (Spawn_tF5B494AB0A9CCDCDD94722E4BF2A66481770CFCA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawn_tappedHandler_m3A7D76071BA4A7B889244313032928F89CCCEC6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<TapGesture>().Tapped -= tappedHandler;
		TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* L_0;
		L_0 = Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7(__this, Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7_RuntimeMethod_var);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)Spawn_tappedHandler_m3A7D76071BA4A7B889244313032928F89CCCEC6E_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		TapGesture_remove_Tapped_mD5DB7DE0700F9E7EA5310D5566B9A8C4E15102F2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Tap.Spawn::tappedHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawn_tappedHandler_m3A7D76071BA4A7B889244313032928F89CCCEC6E (Spawn_tF5B494AB0A9CCDCDD94722E4BF2A66481770CFCA* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928);
		s_Il2CppMethodInitialized = true;
	}
	HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		// var gesture = sender as TapGesture;
		RuntimeObject* L_0 = ___sender0;
		// HitData hit = gesture.GetScreenPositionHitData();
		NullCheck(((TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA*)IsInstClass((RuntimeObject*)L_0, TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_il2cpp_TypeInfo_var)));
		HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 L_1;
		L_1 = VirtualFuncInvoker0< HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 >::Invoke(14 /* TouchScript.Hit.HitData TouchScript.Gestures.Gesture::GetScreenPositionHitData() */, ((TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA*)IsInstClass((RuntimeObject*)L_0, TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_il2cpp_TypeInfo_var)));
		V_0 = L_1;
		// var cube = Instantiate(CubePrefab) as Transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___CubePrefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB(L_2, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		V_1 = L_3;
		// cube.parent = Container;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___Container_5;
		NullCheck(L_4);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_4, L_5, NULL);
		// cube.name = "Cube";
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_1;
		NullCheck(L_6);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_6, _stringLiteralD08387DC2F0400CAF5E896C48C4ABC4A6351B928, NULL);
		// cube.localScale = Vector3.one*Scale*cube.localScale.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		float L_9 = __this->___Scale_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_8, L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_11, NULL);
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_13, NULL);
		NullCheck(L_7);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_7, L_14, NULL);
		// cube.position = hit.Point + hit.Normal*.5f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = HitData_get_Point_mB80D6305358C6C3562D4C575E90DED1F512F47BF((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = HitData_get_Normal_m1E2DAC432C8841A1FAC18206B721E6BCD53DFA5B((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_18, NULL);
		NullCheck(L_15);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_15, L_19, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Tap.Spawn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawn__ctor_mC4837DB705D81ED504EF41ACB5ABDC7314DC6B1D (Spawn_tF5B494AB0A9CCDCDD94722E4BF2A66481770CFCA* __this, const RuntimeMethod* method) 
{
	{
		// public float Scale = .5f;
		__this->___Scale_6 = (0.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.RawInput.Ball::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball_Update_m5A14F01C060B0356352DBA685D31D9148DFF8362 (Ball_t891D07D35BF819E0570CB69DA675794057F35304* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Speed *= 1.01f;
		float L_0 = __this->___Speed_4;
		__this->___Speed_4 = ((float)il2cpp_codegen_multiply(L_0, (1.00999999f)));
		// transform.position += transform.forward * Speed * Time.unscaledDeltaTime;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = L_1;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_4, NULL);
		float L_6 = __this->___Speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		float L_8;
		L_8 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_9, NULL);
		NullCheck(L_2);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_10, NULL);
		// if (Speed > 1000) Destroy(gameObject);
		float L_11 = __this->___Speed_4;
		if ((!(((float)L_11) > ((float)(1000.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		// if (Speed > 1000) Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_12, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Examples.RawInput.Ball::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ball__ctor_mE3BB00104C2AB51B5C8946C2FCE664B843E3D006 (Ball_t891D07D35BF819E0570CB69DA675794057F35304* __this, const RuntimeMethod* method) 
{
	{
		// public float Speed = 1f;
		__this->___Speed_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.RawInput.Spawner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_OnEnable_mEAE3700164F67BBDB2166DA2484D1470DC613144 (Spawner_tD4CDFFA2D4208FD417F476752B102364C2A0BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchManager_t2C48F986D2036DB7CEDEC10F514BF6DFAC2DDB3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawner_pointersPressedHandler_mA4B1C0C0D7559C6E3B82D513602DBF4A1AA9FA9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_tB2943219221554D6C2480E583CDEB5D773FBC6FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TouchManager.Instance != null)
		il2cpp_codegen_runtime_class_init_inline(TouchManager_tB2943219221554D6C2480E583CDEB5D773FBC6FE_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TouchManager_get_Instance_m7E3807C8753B49D1A16A9230CF545085FA981282(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// TouchManager.Instance.PointersPressed += pointersPressedHandler;
		il2cpp_codegen_runtime_class_init_inline(TouchManager_tB2943219221554D6C2480E583CDEB5D773FBC6FE_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = TouchManager_get_Instance_m7E3807C8753B49D1A16A9230CF545085FA981282(NULL);
		EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216* L_2 = (EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216*)il2cpp_codegen_object_new(EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler_1__ctor_m7DE7F8D3FFDDD0E3FE0CE47C86B7FE230638DC0A(L_2, __this, (intptr_t)((void*)Spawner_pointersPressedHandler_mA4B1C0C0D7559C6E3B82D513602DBF4A1AA9FA9E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216* >::Invoke(8 /* System.Void TouchScript.ITouchManager::add_PointersPressed(System.EventHandler`1<TouchScript.PointerEventArgs>) */, ITouchManager_t2C48F986D2036DB7CEDEC10F514BF6DFAC2DDB3B_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Examples.RawInput.Spawner::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_OnDisable_m3C8C024B85C2EDAB593CFD2FB931139AFD3D9E5A (Spawner_tD4CDFFA2D4208FD417F476752B102364C2A0BF30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITouchManager_t2C48F986D2036DB7CEDEC10F514BF6DFAC2DDB3B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawner_pointersPressedHandler_mA4B1C0C0D7559C6E3B82D513602DBF4A1AA9FA9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchManager_tB2943219221554D6C2480E583CDEB5D773FBC6FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TouchManager.Instance != null)
		il2cpp_codegen_runtime_class_init_inline(TouchManager_tB2943219221554D6C2480E583CDEB5D773FBC6FE_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TouchManager_get_Instance_m7E3807C8753B49D1A16A9230CF545085FA981282(NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// TouchManager.Instance.PointersPressed -= pointersPressedHandler;
		il2cpp_codegen_runtime_class_init_inline(TouchManager_tB2943219221554D6C2480E583CDEB5D773FBC6FE_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = TouchManager_get_Instance_m7E3807C8753B49D1A16A9230CF545085FA981282(NULL);
		EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216* L_2 = (EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216*)il2cpp_codegen_object_new(EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler_1__ctor_m7DE7F8D3FFDDD0E3FE0CE47C86B7FE230638DC0A(L_2, __this, (intptr_t)((void*)Spawner_pointersPressedHandler_mA4B1C0C0D7559C6E3B82D513602DBF4A1AA9FA9E_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< EventHandler_1_tCD29F0FF60BB3FB43C5CC6EF500FFED59E9FA216* >::Invoke(9 /* System.Void TouchScript.ITouchManager::remove_PointersPressed(System.EventHandler`1<TouchScript.PointerEventArgs>) */, ITouchManager_t2C48F986D2036DB7CEDEC10F514BF6DFAC2DDB3B_il2cpp_TypeInfo_var, L_1, L_2);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Examples.RawInput.Spawner::spawnPrefabAt(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_spawnPrefabAt_m08F713BCA36BBECD55B7DA348172CB2AD42A2EDA (Spawner_tD4CDFFA2D4208FD417F476752B102364C2A0BF30* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var obj = Instantiate(Prefab) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___Prefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// obj.transform.position = Camera.main.ScreenToWorldPoint(new Vector3(position.x, position.y, 10));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = L_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___position0;
		float L_6 = L_5.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___position0;
		float L_8 = L_7.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), L_6, L_8, (10.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_4, L_9, NULL);
		NullCheck(L_3);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_3, L_10, NULL);
		// obj.transform.rotation = transform.rotation;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.RawInput.Spawner::pointersPressedHandler(System.Object,TouchScript.PointerEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_pointersPressedHandler_mA4B1C0C0D7559C6E3B82D513602DBF4A1AA9FA9E (Spawner_tD4CDFFA2D4208FD417F476752B102364C2A0BF30* __this, RuntimeObject* ___sender0, PointerEventArgs_t34E1B84AA12A97F9C4C8E597B04CBB3D09E14506* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t488723656309FDE4A8FC46BDDD268D005B96FE13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t21A0FE497C0943B2CA8170D99841CFDAE8EAB974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* V_1 = NULL;
	{
		// foreach (var pointer in e.Pointers)
		PointerEventArgs_t34E1B84AA12A97F9C4C8E597B04CBB3D09E14506* L_0 = ___e1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = PointerEventArgs_get_Pointers_mAB560A5983995A1FDCE5D6CD33CC2B23AC085019_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TouchScript.Pointers.Pointer>::GetEnumerator() */, IEnumerable_1_t488723656309FDE4A8FC46BDDD268D005B96FE13_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0021_1;
			}

IL_000e_1:
			{
				// foreach (var pointer in e.Pointers)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_6;
				L_6 = InterfaceFuncInvoker0< Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<TouchScript.Pointers.Pointer>::get_Current() */, IEnumerator_1_t21A0FE497C0943B2CA8170D99841CFDAE8EAB974_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				// spawnPrefabAt(pointer.Position);
				Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_7 = V_1;
				NullCheck(L_7);
				Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
				L_8 = Pointer_get_Position_mCC964F3067241BEBB1FCC1AFACE9CFE86C690EA7_inline(L_7, NULL);
				Spawner_spawnPrefabAt_m08F713BCA36BBECD55B7DA348172CB2AD42A2EDA(__this, L_8, NULL);
			}

IL_0021_1:
			{
				// foreach (var pointer in e.Pointers)
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0035;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Examples.RawInput.Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_m95A8DB0589F5BD293B321DB752D97CFB8028D018 (Spawner_tD4CDFFA2D4208FD417F476752B102364C2A0BF30* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.Portal.Planet::Fall()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planet_Fall_m6ABE20F8368BAD50B7912562918F323D3A006711 (Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* V_0 = NULL;
	{
		// status = PlanetStatus.Falling;
		__this->___status_7 = 2;
		// var gesture = GetComponent<TransformGesture>();
		TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* L_0;
		L_0 = Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A(__this, Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A_RuntimeMethod_var);
		V_0 = L_0;
		// if (gesture != null) gesture.Cancel();
		TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// if (gesture != null) gesture.Cancel();
		TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* L_3 = V_0;
		NullCheck(L_3);
		Gesture_Cancel_m88BE5C51DA05CB0A74343B2AB6395AAE9F568914(L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Planet::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planet_OnEnable_m48B8E005EAEBC48E792B04F8306AF7B7C53246A4 (Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553_m0C36D5E272F7B39B73358962F2A31B0D60D421C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Planet_pressedhandler_m95FD64C6E7E030C30EBC280F8856655A4FB829AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Planet_releasedHandler_mF842F6988CA723B3B2E255E836055DD2ABA1B23D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<PressGesture>().Pressed += pressedhandler;
		PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* L_0;
		L_0 = Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4(__this, Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4_RuntimeMethod_var);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)Planet_pressedhandler_m95FD64C6E7E030C30EBC280F8856655A4FB829AC_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		PressGesture_add_Pressed_m548E406C046234840C45544EE930A1AD9AC8B6DF(L_0, L_1, NULL);
		// GetComponent<ReleaseGesture>().Released += releasedHandler;
		ReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553* L_2;
		L_2 = Component_GetComponent_TisReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553_m0C36D5E272F7B39B73358962F2A31B0D60D421C0(__this, Component_GetComponent_TisReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553_m0C36D5E272F7B39B73358962F2A31B0D60D421C0_RuntimeMethod_var);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_3, __this, (intptr_t)((void*)Planet_releasedHandler_mF842F6988CA723B3B2E255E836055DD2ABA1B23D_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		ReleaseGesture_add_Released_m8B7C16F818F7603BAAE67D3E87406321B05D2276(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Planet::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planet_OnDisable_m424CD7788EEB924899A4A9E9EC38523F1B8FED1C (Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553_m0C36D5E272F7B39B73358962F2A31B0D60D421C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Planet_pressedhandler_m95FD64C6E7E030C30EBC280F8856655A4FB829AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Planet_releasedHandler_mF842F6988CA723B3B2E255E836055DD2ABA1B23D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<PressGesture>().Pressed -= pressedhandler;
		PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* L_0;
		L_0 = Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4(__this, Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4_RuntimeMethod_var);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)Planet_pressedhandler_m95FD64C6E7E030C30EBC280F8856655A4FB829AC_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		PressGesture_remove_Pressed_mF1AEE5AF0961737208002C0AFB02E4D1B6E7955E(L_0, L_1, NULL);
		// GetComponent<ReleaseGesture>().Released -= releasedHandler;
		ReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553* L_2;
		L_2 = Component_GetComponent_TisReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553_m0C36D5E272F7B39B73358962F2A31B0D60D421C0(__this, Component_GetComponent_TisReleaseGesture_tD704A0A28024B2091E64FF3BCC1A8EAC0D208553_m0C36D5E272F7B39B73358962F2A31B0D60D421C0_RuntimeMethod_var);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_3, __this, (intptr_t)((void*)Planet_releasedHandler_mF842F6988CA723B3B2E255E836055DD2ABA1B23D_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		ReleaseGesture_remove_Released_mCAFC9693E547D8B7F703EB9D29A8E096854C457C(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Planet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planet_Update_m62CB32B2B2AB64251484552172B7F916CB6078DB (Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// switch (status)
		int32_t L_0 = __this->___status_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001e;
			}
			case 1:
			{
				goto IL_00cf;
			}
			case 2:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_00cf;
	}

IL_001e:
	{
		// transform.RotateAround(transform.parent.position, Vector3.up,
		//     Speed * Time.unscaledDeltaTime / transform.localPosition.sqrMagnitude);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		float L_7 = __this->___Speed_4;
		float L_8;
		L_8 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_9, NULL);
		V_1 = L_10;
		float L_11;
		L_11 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_1), NULL);
		NullCheck(L_2);
		Transform_RotateAround_m489C5BE8B8B15D0A5F4863DE6D23FF2CC8FA76C6(L_2, L_5, L_6, ((float)(((float)il2cpp_codegen_multiply(L_7, L_8))/L_11)), NULL);
		// break;
		goto IL_00cf;
	}

IL_0060:
	{
		// transform.localScale *= 1 - FallSpeed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = L_12;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		float L_15 = __this->___FallSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_14, ((float)il2cpp_codegen_subtract((1.0f), L_15)), NULL);
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_16, NULL);
		// transform.localPosition = Vector3.Lerp(transform.localPosition, Vector3.zero, FallSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		float L_21 = __this->___FallSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_19, L_20, L_21, NULL);
		NullCheck(L_17);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_17, L_22, NULL);
		// if (transform.localScale.x < 0.01) Destroy(gameObject);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_23, NULL);
		float L_25 = L_24.___x_2;
		if ((!(((double)((double)L_25)) < ((double)(0.01)))))
		{
			goto IL_00cf;
		}
	}
	{
		// if (transform.localScale.x < 0.01) Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_26, NULL);
	}

IL_00cf:
	{
		// transform.Rotate(0, 0, Time.unscaledDeltaTime * RotationSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_28;
		L_28 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		float L_29 = __this->___RotationSpeed_5;
		NullCheck(L_27);
		Transform_Rotate_m7EA47AD57F43D478CCB0523D179950EE49CDA3E2(L_27, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_28, L_29)), NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Planet::pressedhandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planet_pressedhandler_m95FD64C6E7E030C30EBC280F8856655A4FB829AC (Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	{
		// status = PlanetStatus.Manual;
		__this->___status_7 = 1;
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Planet::releasedHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planet_releasedHandler_mF842F6988CA723B3B2E255E836055DD2ABA1B23D (Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	{
		// if (status != PlanetStatus.Manual) return;
		int32_t L_0 = __this->___status_7;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_000a;
		}
	}
	{
		// if (status != PlanetStatus.Manual) return;
		return;
	}

IL_000a:
	{
		// status = PlanetStatus.Free;
		__this->___status_7 = 0;
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Planet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Planet__ctor_mE0DEA711F52558FE633D2BF3F66011C0D3C78AC9 (Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* __this, const RuntimeMethod* method) 
{
	{
		// public float Speed = 30f;
		__this->___Speed_4 = (30.0f);
		// public float RotationSpeed = 30f;
		__this->___RotationSpeed_5 = (30.0f);
		// public float FallSpeed = .01f;
		__this->___FallSpeed_6 = (0.00999999978f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.Portal.Rotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator_Update_m5E5DE26F02F4931A421A16DB4D47AA4328467B8A (Rotator_tA915D33647DE1B938F586B9A943F27EDF0E85BA0* __this, const RuntimeMethod* method) 
{
	{
		// transform.localRotation *= Quaternion.Euler(0, 0, Time.unscaledDeltaTime * RotationSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_1, NULL);
		float L_3;
		L_3 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		float L_4 = __this->___RotationSpeed_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_3, L_4)), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_2, L_5, NULL);
		NullCheck(L_1);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_1, L_6, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Rotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotator__ctor_m23F801905911333492AC806813C28A7E76ADCE9C (Rotator_tA915D33647DE1B938F586B9A943F27EDF0E85BA0* __this, const RuntimeMethod* method) 
{
	{
		// public float RotationSpeed = 1f;
		__this->___RotationSpeed_4 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.Portal.Spawner::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_OnEnable_m673467B8F51E4F025B655DA65D8E4A79917C735E (Spawner_t06C1D4F57ECCA1D163E35395EAF724C2FAF1535F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawner_pressHandler_m62E05A68961539EE326DF9C1CE5D56F2810895A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// press = GetComponent<PressGesture>();
		PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* L_0;
		L_0 = Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4(__this, Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4_RuntimeMethod_var);
		__this->___press_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___press_6), (void*)L_0);
		// press.Pressed += pressHandler;
		PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* L_1 = __this->___press_6;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_2, __this, (intptr_t)((void*)Spawner_pressHandler_m62E05A68961539EE326DF9C1CE5D56F2810895A9_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		PressGesture_add_Pressed_m548E406C046234840C45544EE930A1AD9AC8B6DF(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Spawner::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_OnDisable_m848B298996D76E3B81AABFC5D7C1314BFF84450A (Spawner_t06C1D4F57ECCA1D163E35395EAF724C2FAF1535F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawner_pressHandler_m62E05A68961539EE326DF9C1CE5D56F2810895A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// press.Pressed -= pressHandler;
		PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* L_0 = __this->___press_6;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)Spawner_pressHandler_m62E05A68961539EE326DF9C1CE5D56F2810895A9_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		PressGesture_remove_Pressed_mF1AEE5AF0961737208002C0AFB02E4D1B6E7955E(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Spawner::pressHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_pressHandler_m62E05A68961539EE326DF9C1CE5D56F2810895A9 (Spawner_t06C1D4F57ECCA1D163E35395EAF724C2FAF1535F* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___eventArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILayerManager_t014A9EDA9C1EED6407459B5AB0AC05CA9436CE53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m2E2C8E63B5A6D0A40ADCE97453E32B95C7E1842C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	{
		// var target = Instantiate(Prefab, Position.parent);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Prefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___Position_5;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m2E2C8E63B5A6D0A40ADCE97453E32B95C7E1842C(L_0, L_2, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m2E2C8E63B5A6D0A40ADCE97453E32B95C7E1842C_RuntimeMethod_var);
		V_0 = L_3;
		// target.position = Position.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___Position_5;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_6, NULL);
		// LayerManager.Instance.SetExclusive(target);
		RuntimeObject* L_7;
		L_7 = LayerManager_get_Instance_m4F884E1DBFAB83401A56D7FF7A347489F091AFF6(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		NullCheck(L_7);
		InterfaceActionInvoker2< Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool >::Invoke(8 /* System.Void TouchScript.ILayerManager::SetExclusive(UnityEngine.Transform,System.Boolean) */, ILayerManager_t014A9EDA9C1EED6407459B5AB0AC05CA9436CE53_il2cpp_TypeInfo_var, L_7, L_8, (bool)0);
		// press.Cancel(true, true);
		PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* L_9 = __this->___press_6;
		NullCheck(L_9);
		Gesture_Cancel_m8D7C4119C62D103DAC966B99819529A50BEC843C(L_9, (bool)1, (bool)1, NULL);
		// LayerManager.Instance.ClearExclusive();
		RuntimeObject* L_10;
		L_10 = LayerManager_get_Instance_m4F884E1DBFAB83401A56D7FF7A347489F091AFF6(NULL);
		NullCheck(L_10);
		InterfaceActionInvoker0::Invoke(11 /* System.Void TouchScript.ILayerManager::ClearExclusive() */, ILayerManager_t014A9EDA9C1EED6407459B5AB0AC05CA9436CE53_il2cpp_TypeInfo_var, L_10);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_mA3039577ED58670718A757F39FF853033AF0151C (Spawner_t06C1D4F57ECCA1D163E35395EAF724C2FAF1535F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.Portal.Vortex::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vortex_OnTriggerEnter_mC90097E9258DD4188DFF4D3444000C263FCACA8B (Vortex_tF50697499748E298C7E0472F113FB5CC6204CC10* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPlanet_tC0057A04D392837CE56516897DF1CE245B0FD5D5_m748EAE8A83042AFCD59BB98885FD8B3A98A65441_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* V_0 = NULL;
	{
		// var planet = other.GetComponent<Planet>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___other0;
		NullCheck(L_0);
		Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* L_1;
		L_1 = Component_GetComponent_TisPlanet_tC0057A04D392837CE56516897DF1CE245B0FD5D5_m748EAE8A83042AFCD59BB98885FD8B3A98A65441(L_0, Component_GetComponent_TisPlanet_tC0057A04D392837CE56516897DF1CE245B0FD5D5_m748EAE8A83042AFCD59BB98885FD8B3A98A65441_RuntimeMethod_var);
		V_0 = L_1;
		// if (planet == null) return;
		Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0011;
		}
	}
	{
		// if (planet == null) return;
		return;
	}

IL_0011:
	{
		// planet.Fall();
		Planet_tC0057A04D392837CE56516897DF1CE245B0FD5D5* L_4 = V_0;
		NullCheck(L_4);
		Planet_Fall_m6ABE20F8368BAD50B7912562918F323D3A006711(L_4, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Portal.Vortex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vortex__ctor_mAF8775EC3F9A650CD9DA294A67C56A0A31F8B5D2 (Vortex_tF50697499748E298C7E0472F113FB5CC6204CC10* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.UI.SetColor::Set(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetColor_Set_m3A31266C72C780665AE5E0B78C502DD835B42306 (SetColor_t29AB8D3C1DEFAABDCDC85E2FEA54DC489CDD577D* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<Image>().color = Colors[id];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_1 = __this->___Colors_4;
		int32_t L_2 = ___id0;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F(L_1, L_2, List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var);
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.UI.SetColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetColor__ctor_m1A18A9B14AC3F0637FF59574AD8D84BA0D88CA23 (SetColor_t29AB8D3C1DEFAABDCDC85E2FEA54DC489CDD577D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.Photos.Container::Add()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_Add_m8C6206E04C9110D07662CEF01D598B4810A6034F (Container_t049DA32B3E25F2869749297EAE6B5DFA04AE6A4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// var toClone = transform.GetChild(Random.Range(0, transform.childCount));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_2, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, L_3, NULL);
		V_0 = L_4;
		// var clone = Instantiate(toClone.gameObject) as GameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_1 = L_7;
		// clone.transform.SetParent(transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_9, L_10, NULL);
		// clone.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_1;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_12);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_12, L_13, NULL);
		// clone.transform.localRotation = Quaternion.Euler(0f, 0f, Random.Range(0f, 360f));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((0.0f), (360.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_16, NULL);
		NullCheck(L_15);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_15, L_17, NULL);
		// clone.transform.localPosition = new Vector3(Random.Range(-Width/2, Width/2),
		//     Random.Range(-Height/2, Height/2), toClone.localPosition.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_1;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		int32_t L_20 = __this->___Width_4;
		int32_t L_21 = __this->___Width_4;
		int32_t L_22;
		L_22 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)(((-L_20))/2)), ((int32_t)(L_21/2)), NULL);
		int32_t L_23 = __this->___Height_5;
		int32_t L_24 = __this->___Height_5;
		int32_t L_25;
		L_25 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)(((-L_23))/2)), ((int32_t)(L_24/2)), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = V_0;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_26, NULL);
		float L_28 = L_27.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), ((float)L_22), ((float)L_25), L_28, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_19, L_29, NULL);
		// initChild(clone.transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_1;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Container_initChild_mF8B89CD99C9D125270B0F70FCC3119E3B0F38A4A(__this, L_31, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Photos.Container::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_Start_mEF5452121995315D35F57793F39DAEED01415C96 (Container_t049DA32B3E25F2869749297EAE6B5DFA04AE6A4F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		// var count = transform.childCount;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0028;
	}

IL_0010:
	{
		// var child = transform.GetChild(i);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_2, L_3, NULL);
		V_2 = L_4;
		// initChild(child);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_2;
		Container_initChild_mF8B89CD99C9D125270B0F70FCC3119E3B0F38A4A(__this, L_5, NULL);
		// for (var i = 0; i < count; i++)
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0028:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Photos.Container::initChild(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_initChild_mF8B89CD99C9D125270B0F70FCC3119E3B0F38A4A (Container_t049DA32B3E25F2869749297EAE6B5DFA04AE6A4F* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___child0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Container_pressedHandler_m3E522CB3BFDF428CD0B7F93F086E855FAD8BA38D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* V_0 = NULL;
	{
		// var pressGesture = child.GetComponent<PressGesture>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___child0;
		NullCheck(L_0);
		PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* L_1;
		L_1 = Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4(L_0, Component_GetComponent_TisPressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC_m729DD1998E619F427A4FAAA7184A3001AF76EDD4_RuntimeMethod_var);
		V_0 = L_1;
		// if (pressGesture != null) pressGesture.Pressed += pressedHandler;
		PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// if (pressGesture != null) pressGesture.Pressed += pressedHandler;
		PressGesture_t566B4DCEB42A1FC5190CADDCE61DE05E65DF84EC* L_4 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)Container_pressedHandler_m3E522CB3BFDF428CD0B7F93F086E855FAD8BA38D_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		PressGesture_add_Pressed_m548E406C046234840C45544EE930A1AD9AC8B6DF(L_4, L_5, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Photos.Container::pressedHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container_pressedHandler_m3E522CB3BFDF428CD0B7F93F086E855FAD8BA38D (Container_t049DA32B3E25F2869749297EAE6B5DFA04AE6A4F* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var child = (sender as Gesture).transform;
		RuntimeObject* L_0 = ___sender0;
		NullCheck(((Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328*)IsInstClass((RuntimeObject*)L_0, Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328_il2cpp_TypeInfo_var)));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(((Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328*)IsInstClass((RuntimeObject*)L_0, Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328_il2cpp_TypeInfo_var)), NULL);
		// child.SetAsLastSibling();
		NullCheck(L_1);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_1, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Photos.Container::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Container__ctor_mDD490564908E0CDF29F24081E7C29298C5A3F1B3 (Container_t049DA32B3E25F2869749297EAE6B5DFA04AE6A4F* __this, const RuntimeMethod* method) 
{
	{
		// public int Width = 500;
		__this->___Width_4 = ((int32_t)500);
		// public int Height = 500;
		__this->___Height_5 = ((int32_t)500);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.Multiuser.Logo::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logo_OnEnable_m65D5A08F572A4B42F1689E117A2C2C92A00789DA (Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logo_tappedHandler_m4F7BDBC091CB6B9A897F822C15FAFD72F2C383D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<TapGesture>().Tapped += tappedHandler;
		TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* L_0;
		L_0 = Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7(__this, Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7_RuntimeMethod_var);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)Logo_tappedHandler_m4F7BDBC091CB6B9A897F822C15FAFD72F2C383D7_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		TapGesture_add_Tapped_mB08594B176B95B1A776A58080D3599D41EBEA84A(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Multiuser.Logo::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logo_OnDisable_mD877B8F1584D08308DEE3DF8AC6FEF2DB9B6642A (Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logo_tappedHandler_m4F7BDBC091CB6B9A897F822C15FAFD72F2C383D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<TapGesture>().Tapped -= tappedHandler;
		TapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA* L_0;
		L_0 = Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7(__this, Component_GetComponent_TisTapGesture_t076DF500777926C314B0FC525A752F95D76B6CDA_mCD0959F0DE27D836BB59438D31864903A7138EC7_RuntimeMethod_var);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)Logo_tappedHandler_m4F7BDBC091CB6B9A897F822C15FAFD72F2C383D7_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		TapGesture_remove_Tapped_mD5DB7DE0700F9E7EA5310D5566B9A8C4E15102F2(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Multiuser.Logo::changeColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logo_changeColor_m9B96C35C674A7A37DDE091689D920871A6A60358 (Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Color newColor = COLORS[Random.Range(0, COLORS.Length)];
		il2cpp_codegen_runtime_class_init_inline(Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_il2cpp_TypeInfo_var);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = ((Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_StaticFields*)il2cpp_codegen_static_fields_for(Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_il2cpp_TypeInfo_var))->___COLORS_4;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = ((Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_StaticFields*)il2cpp_codegen_static_fields_for(Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_il2cpp_TypeInfo_var))->___COLORS_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), NULL);
		NullCheck(L_0);
		int32_t L_3 = L_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		goto IL_0032;
	}

IL_001a:
	{
		// newColor = COLORS[Random.Range(0, COLORS.Length)];
		il2cpp_codegen_runtime_class_init_inline(Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_il2cpp_TypeInfo_var);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = ((Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_StaticFields*)il2cpp_codegen_static_fields_for(Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_il2cpp_TypeInfo_var))->___COLORS_4;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = ((Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_StaticFields*)il2cpp_codegen_static_fields_for(Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_il2cpp_TypeInfo_var))->___COLORS_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		NullCheck(L_5);
		int32_t L_8 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
	}

IL_0032:
	{
		// while (newColor == GetComponent<Renderer>().material.color)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = V_0;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11;
		L_11 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_11);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_12;
		L_12 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_11, NULL);
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_12, NULL);
		bool L_14;
		L_14 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_10, L_13, NULL);
		if (L_14)
		{
			goto IL_001a;
		}
	}
	{
		// GetComponent<Renderer>().material.color = newColor;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15;
		L_15 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_15);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16;
		L_16 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_15, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		NullCheck(L_16);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Multiuser.Logo::tappedHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logo_tappedHandler_m4F7BDBC091CB6B9A897F822C15FAFD72F2C383D7 (Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___eventArgs1, const RuntimeMethod* method) 
{
	{
		// changeColor();
		Logo_changeColor_m9B96C35C674A7A37DDE091689D920871A6A60358(__this, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Multiuser.Logo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logo__ctor_m19902705FC3C7A206062C294FBA4DA4672367209 (Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void TouchScript.Examples.Multiuser.Logo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Logo__cctor_m2480BEFDB0B32873A1BF87E3A2BD744BAB4B7E36 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Color[] COLORS = new[]
		// {Color.yellow, Color.red, Color.magenta, Color.green, Color.cyan, Color.blue};
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_0 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)6);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_2);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_3 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_4);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_6);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_7 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_8);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_9 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_10);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_11 = L_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_12);
		((Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_StaticFields*)il2cpp_codegen_static_fields_for(Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_il2cpp_TypeInfo_var))->___COLORS_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_StaticFields*)il2cpp_codegen_static_fields_for(Logo_tEF5CFD7C7DE440FA093EEE2C651C92EBB516F514_il2cpp_TypeInfo_var))->___COLORS_4), (void*)L_11);
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
// System.Void TouchScript.Examples.Cube.CustomPointerProxy::updateOnce(TouchScript.Pointers.IPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPointerProxy_updateOnce_m1CC77096E851552F6E71E32C8A1E768A4F6E0866 (CustomPointerProxy_tD0D2F4BF50F3F28B58F6AB5964F1278E0D0670E4* __this, RuntimeObject* ___pointer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointer_tEDEFB0F87D471C54BFF4E34AD796CE7927527390_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer.InputSource is RedirectInput) Hide();
		RuntimeObject* L_0 = ___pointer0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* TouchScript.InputSources.IInputSource TouchScript.Pointers.IPointer::get_InputSource() */, IPointer_tEDEFB0F87D471C54BFF4E34AD796CE7927527390_il2cpp_TypeInfo_var, L_0);
		if (!((RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664*)IsInstClass((RuntimeObject*)L_1, RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		// if (pointer.InputSource is RedirectInput) Hide();
		PointerCursor_Hide_mA7E7AA39EBFE37B6355D0419EF2AA784D867CFED(__this, NULL);
	}

IL_0013:
	{
		// base.updateOnce(pointer);
		RuntimeObject* L_2 = ___pointer0;
		PointerCursor_updateOnce_mC5A041CB55750A83B82693951932D9B0507FDEBD(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Cube.CustomPointerProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomPointerProxy__ctor_mE30E09A399E8E025D922D74941D4C8152CCBD556 (CustomPointerProxy_tD0D2F4BF50F3F28B58F6AB5964F1278E0D0670E4* __this, const RuntimeMethod* method) 
{
	{
		PointerCursor__ctor_m81B5AF84010FBFBAAA5A10E96AD86E0325DAD47D(__this, NULL);
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
// System.Void TouchScript.Examples.Cube.Init::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Init_Start_m853197AF263A5957787E1873709E8DE357A25707 (Init_t11C835BA6D234DD2CCF0DDCEBBBDAB850461753F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9_m8F9B169C4582D5B1768F65B67F98D093612F0C83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC_m5B160E21C2C5053F23FCF10C33334E4CF48330F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral570059DAA6BA36583F759B87A49DCE91093D6090);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5DC25B34B12D85BCF6B8E7DC5A4D94A5EBA01D03);
		s_Il2CppMethodInitialized = true;
	}
	LayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9* V_0 = NULL;
	{
		// var d = GetComponent<LayerDelegate>();
		LayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9* L_0;
		L_0 = Component_GetComponent_TisLayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9_m8F9B169C4582D5B1768F65B67F98D093612F0C83(__this, Component_GetComponent_TisLayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9_m8F9B169C4582D5B1768F65B67F98D093612F0C83_RuntimeMethod_var);
		V_0 = L_0;
		// var go = GameObject.Find("Scene Camera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral5DC25B34B12D85BCF6B8E7DC5A4D94A5EBA01D03, NULL);
		// go.GetComponent<TouchLayer>().Delegate = d;
		NullCheck(L_1);
		TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* L_2;
		L_2 = GameObject_GetComponent_TisTouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC_m5B160E21C2C5053F23FCF10C33334E4CF48330F6(L_1, GameObject_GetComponent_TisTouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC_m5B160E21C2C5053F23FCF10C33334E4CF48330F6_RuntimeMethod_var);
		LayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9* L_3 = V_0;
		NullCheck(L_2);
		TouchLayer_set_Delegate_mB04E28606ABA281FB3F1116DF03720050FE461E4_inline(L_2, L_3, NULL);
		// go = GameObject.Find("Camera");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral570059DAA6BA36583F759B87A49DCE91093D6090, NULL);
		// go.GetComponent<TouchLayer>().Delegate = d;
		NullCheck(L_4);
		TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* L_5;
		L_5 = GameObject_GetComponent_TisTouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC_m5B160E21C2C5053F23FCF10C33334E4CF48330F6(L_4, GameObject_GetComponent_TisTouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC_m5B160E21C2C5053F23FCF10C33334E4CF48330F6_RuntimeMethod_var);
		LayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9* L_6 = V_0;
		NullCheck(L_5);
		TouchLayer_set_Delegate_mB04E28606ABA281FB3F1116DF03720050FE461E4_inline(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Cube.Init::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Init__ctor_mAE96CBBD197BC089A64439CE72A26E7EB5805008 (Init_t11C835BA6D234DD2CCF0DDCEBBBDAB850461753F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean TouchScript.Examples.Cube.LayerDelegate::ShouldReceivePointer(TouchScript.Layers.TouchLayer,TouchScript.Pointers.IPointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LayerDelegate_ShouldReceivePointer_mA38181283DE71C458A29FEA04D8EC5ED59051355 (LayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9* __this, TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* ___layer0, RuntimeObject* ___pointer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPointer_tEDEFB0F87D471C54BFF4E34AD796CE7927527390_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (layer == RenderTextureLayer)
		TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* L_0 = ___layer0;
		TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* L_1 = __this->___RenderTextureLayer_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// return pointer.InputSource == (IInputSource)Source;
		RuntimeObject* L_3 = ___pointer1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* TouchScript.InputSources.IInputSource TouchScript.Pointers.IPointer::get_InputSource() */, IPointer_tEDEFB0F87D471C54BFF4E34AD796CE7927527390_il2cpp_TypeInfo_var, L_3);
		RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* L_5 = __this->___Source_4;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664*)L_5))? 1 : 0);
	}

IL_001d:
	{
		// return pointer.InputSource != (IInputSource)Source;
		RuntimeObject* L_6 = ___pointer1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* TouchScript.InputSources.IInputSource TouchScript.Pointers.IPointer::get_InputSource() */, IPointer_tEDEFB0F87D471C54BFF4E34AD796CE7927527390_il2cpp_TypeInfo_var, L_6);
		RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* L_8 = __this->___Source_4;
		return (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_7) == ((RuntimeObject*)(RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664*)L_8))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void TouchScript.Examples.Cube.LayerDelegate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayerDelegate__ctor_mC61F6664CA20EC8E33252C367D806A17889180C9 (LayerDelegate_tAC11395B2B6721B410269532EDF6DE7FC70B2FF9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Boolean TouchScript.Examples.Cube.RedirectInput::CancelPointer(TouchScript.Pointers.Pointer,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RedirectInput_CancelPointer_m085F8470BE242D5C0702CCCE4175FDCC2996F89D (RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* __this, Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* ___pointer0, bool ___shouldReturn1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9C473954D69A3BDB36E3CBA02713674BD5B54490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m92CCAA6A5194E87FED6A5EA6A36500A8DC358C78_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* V_1 = NULL;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// base.CancelPointer(pointer, shouldReturn);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_0 = ___pointer0;
		bool L_1 = ___shouldReturn1;
		bool L_2;
		L_2 = InputSource_CancelPointer_m15EDFF7BDA2F13E765E9E7CD292646AB5F7CF37C(__this, L_0, L_1, NULL);
		// map.Remove(pointer.Id);
		Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* L_3 = __this->___map_10;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_4 = ___pointer0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Pointer_get_Id_m9C5467EDDE02A8BB7F16B93549BD98D1B623044B_inline(L_4, NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = Dictionary_2_Remove_m92CCAA6A5194E87FED6A5EA6A36500A8DC358C78(L_3, L_5, Dictionary_2_Remove_m92CCAA6A5194E87FED6A5EA6A36500A8DC358C78_RuntimeMethod_var);
		// if (shouldReturn)
		bool L_7 = ___shouldReturn1;
		if (!L_7)
		{
			goto IL_007d;
		}
	}
	{
		// if (PointerUtils.IsPointerOnTarget(pointer, transform, out hit))
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_8 = ___pointer0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		bool L_10;
		L_10 = PointerUtils_IsPointerOnTarget_m6671A9B9F1910CC008695D114E8DD976D8E36451(L_8, L_9, (&V_0), NULL);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		// var newPointer = PointerFactory.Create(pointer.Type, this);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_11 = ___pointer0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Pointer_get_Type_m9A7E3A5AB7479815826D65C54225DD600DB05B12_inline(L_11, NULL);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_13;
		L_13 = PointerFactory_Create_m64972F49E308ACCCF358F589880FE5C96D8FC892(L_12, __this, NULL);
		V_1 = L_13;
		// newPointer.CopyFrom(pointer);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_14 = V_1;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_15 = ___pointer0;
		NullCheck(L_14);
		VirtualActionInvoker1< Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* >::Invoke(14 /* System.Void TouchScript.Pointers.Pointer::CopyFrom(TouchScript.Pointers.Pointer) */, L_14, L_15);
		// newPointer.Position = processCoords(hit.RaycastHit.textureCoord);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_16 = V_1;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_17;
		L_17 = HitData_get_RaycastHit_m7778416AE51247795097D9F6FD41286D235D9156_inline((&V_0), NULL);
		V_2 = L_17;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D((&V_2), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = RedirectInput_processCoords_mD7E3DEE8AFBED885D874ECB953626EC39608B604(__this, L_18, NULL);
		NullCheck(L_16);
		Pointer_set_Position_m8BB3AEBFF0E6A2BB1CE2F62C44F964F0AAF9B96B_inline(L_16, L_19, NULL);
		// addPointer(newPointer);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_20 = V_1;
		VirtualActionInvoker1< Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* >::Invoke(16 /* System.Void TouchScript.InputSources.InputSource::addPointer(TouchScript.Pointers.Pointer) */, __this, L_20);
		// pressPointer(newPointer);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_21 = V_1;
		VirtualActionInvoker1< Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* >::Invoke(18 /* System.Void TouchScript.InputSources.InputSource::pressPointer(TouchScript.Pointers.Pointer) */, __this, L_21);
		// map.Add(pointer.Id, newPointer);
		Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* L_22 = __this->___map_10;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_23 = ___pointer0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = Pointer_get_Id_m9C5467EDDE02A8BB7F16B93549BD98D1B623044B_inline(L_23, NULL);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_25 = V_1;
		NullCheck(L_22);
		Dictionary_2_Add_m9C473954D69A3BDB36E3CBA02713674BD5B54490(L_22, L_24, L_25, Dictionary_2_Add_m9C473954D69A3BDB36E3CBA02713674BD5B54490_RuntimeMethod_var);
	}

IL_007d:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void TouchScript.Examples.Cube.RedirectInput::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedirectInput_OnEnable_mD5CFD1526045A3F2B6D101F6DF5D10ADC4235BCC (RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1_m7DEB8B863C6327C15FBF4D7729371BBCEFB99D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectInput_pointerCancelledhandler_m9602187F707C2F2E151BD2FCAC03692FD1CB462A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectInput_pointerPressedHandler_m19CA948504B72160D6CF36B31962952D6DFE5179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectInput_pointerReleasedHandler_m78248AD81D0E2DE942C54DC57C977B83C919B3A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectInput_pointerUpdatedHandler_m63BFB21BDB4E4052DF17421EAFADF460CC0E682C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		InputSource_OnEnable_m7C5A204C2FC5F5A20F05983D6C4FAAB532A3CD18(__this, NULL);
		// gesture = GetComponent<MetaGesture>();
		MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* L_0;
		L_0 = Component_GetComponent_TisMetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1_m7DEB8B863C6327C15FBF4D7729371BBCEFB99D60(__this, Component_GetComponent_TisMetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1_m7DEB8B863C6327C15FBF4D7729371BBCEFB99D60_RuntimeMethod_var);
		__this->___gesture_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gesture_9), (void*)L_0);
		// if (gesture)
		MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* L_1 = __this->___gesture_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_1, NULL);
		if (!L_2)
		{
			goto IL_007b;
		}
	}
	{
		// gesture.PointerPressed += pointerPressedHandler;
		MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* L_3 = __this->___gesture_9;
		EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* L_4 = (EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA*)il2cpp_codegen_object_new(EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EventHandler_1__ctor_m06CD96CE19ABBFBB7F9C16D609382A5D8603A617(L_4, __this, (intptr_t)((void*)RedirectInput_pointerPressedHandler_m19CA948504B72160D6CF36B31962952D6DFE5179_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		MetaGesture_add_PointerPressed_m7E689DD8911A9CD83AEDA162C0EC128862998E5E(L_3, L_4, NULL);
		// gesture.PointerUpdated += pointerUpdatedHandler;
		MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* L_5 = __this->___gesture_9;
		EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* L_6 = (EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA*)il2cpp_codegen_object_new(EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		EventHandler_1__ctor_m06CD96CE19ABBFBB7F9C16D609382A5D8603A617(L_6, __this, (intptr_t)((void*)RedirectInput_pointerUpdatedHandler_m63BFB21BDB4E4052DF17421EAFADF460CC0E682C_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		MetaGesture_add_PointerUpdated_m5EC1647AE6BECC40F16BDB1228A058CE44F47AD5(L_5, L_6, NULL);
		// gesture.PointerCancelled += pointerCancelledhandler;
		MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* L_7 = __this->___gesture_9;
		EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* L_8 = (EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA*)il2cpp_codegen_object_new(EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		EventHandler_1__ctor_m06CD96CE19ABBFBB7F9C16D609382A5D8603A617(L_8, __this, (intptr_t)((void*)RedirectInput_pointerCancelledhandler_m9602187F707C2F2E151BD2FCAC03692FD1CB462A_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		MetaGesture_add_PointerCancelled_m0F12762E04641BAFC105266CD2584EA6A06E4916(L_7, L_8, NULL);
		// gesture.PointerReleased += pointerReleasedHandler;
		MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* L_9 = __this->___gesture_9;
		EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* L_10 = (EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA*)il2cpp_codegen_object_new(EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EventHandler_1__ctor_m06CD96CE19ABBFBB7F9C16D609382A5D8603A617(L_10, __this, (intptr_t)((void*)RedirectInput_pointerReleasedHandler_m78248AD81D0E2DE942C54DC57C977B83C919B3A4_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		MetaGesture_add_PointerReleased_m1620231E965F1B4B39BA55CD30EEF29967FA05B3(L_9, L_10, NULL);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Cube.RedirectInput::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedirectInput_OnDisable_m10E121C822CD8334FFE7DC524894ECAED18AF927 (RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectInput_pointerCancelledhandler_m9602187F707C2F2E151BD2FCAC03692FD1CB462A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectInput_pointerPressedHandler_m19CA948504B72160D6CF36B31962952D6DFE5179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectInput_pointerReleasedHandler_m78248AD81D0E2DE942C54DC57C977B83C919B3A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RedirectInput_pointerUpdatedHandler_m63BFB21BDB4E4052DF17421EAFADF460CC0E682C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		InputSource_OnDisable_m2B39BA44E4BC0DD69A76A7B36B818A959547BFB0(__this, NULL);
		// if (gesture)
		MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* L_0 = __this->___gesture_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_0, NULL);
		if (!L_1)
		{
			goto IL_006f;
		}
	}
	{
		// gesture.PointerPressed -= pointerPressedHandler;
		MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* L_2 = __this->___gesture_9;
		EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* L_3 = (EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA*)il2cpp_codegen_object_new(EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_m06CD96CE19ABBFBB7F9C16D609382A5D8603A617(L_3, __this, (intptr_t)((void*)RedirectInput_pointerPressedHandler_m19CA948504B72160D6CF36B31962952D6DFE5179_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		MetaGesture_remove_PointerPressed_m50805370EA308EB6D41737C4A56779FEE4350ABC(L_2, L_3, NULL);
		// gesture.PointerUpdated -= pointerUpdatedHandler;
		MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* L_4 = __this->___gesture_9;
		EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* L_5 = (EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA*)il2cpp_codegen_object_new(EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_m06CD96CE19ABBFBB7F9C16D609382A5D8603A617(L_5, __this, (intptr_t)((void*)RedirectInput_pointerUpdatedHandler_m63BFB21BDB4E4052DF17421EAFADF460CC0E682C_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		MetaGesture_remove_PointerUpdated_m83BCBCB9B6803FD4AFC1E329D956A00F21E0866E(L_4, L_5, NULL);
		// gesture.PointerCancelled -= pointerCancelledhandler;
		MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* L_6 = __this->___gesture_9;
		EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* L_7 = (EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA*)il2cpp_codegen_object_new(EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_m06CD96CE19ABBFBB7F9C16D609382A5D8603A617(L_7, __this, (intptr_t)((void*)RedirectInput_pointerCancelledhandler_m9602187F707C2F2E151BD2FCAC03692FD1CB462A_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		MetaGesture_remove_PointerCancelled_m492E83BF6693D2CE4A2CC736F315C3E8528D4358(L_6, L_7, NULL);
		// gesture.PointerReleased -= pointerReleasedHandler;
		MetaGesture_tF6E54B06DFC7E68B318A9893F141A6612671C1F1* L_8 = __this->___gesture_9;
		EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA* L_9 = (EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA*)il2cpp_codegen_object_new(EventHandler_1_tE905A28DD51539FEF06083E17205B724393BC4FA_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_m06CD96CE19ABBFBB7F9C16D609382A5D8603A617(L_9, __this, (intptr_t)((void*)RedirectInput_pointerReleasedHandler_m78248AD81D0E2DE942C54DC57C977B83C919B3A4_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		MetaGesture_remove_PointerReleased_m9851B6FF74FD3427A59B5E89424D06497C463A4C(L_8, L_9, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 TouchScript.Examples.Cube.RedirectInput::processCoords(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RedirectInput_processCoords_mD7E3DEE8AFBED885D874ECB953626EC39608B604 (RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// return new Vector2(value.x * Width, value.y * Height);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		float L_1 = L_0.___x_0;
		int32_t L_2 = __this->___Width_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___value0;
		float L_4 = L_3.___y_1;
		int32_t L_5 = __this->___Height_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, ((float)L_2))), ((float)il2cpp_codegen_multiply(L_4, ((float)L_5))), /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void TouchScript.Examples.Cube.RedirectInput::pointerPressedHandler(System.Object,TouchScript.Gestures.MetaGestureEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedirectInput_pointerPressedHandler_m19CA948504B72160D6CF36B31962952D6DFE5179 (RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* __this, RuntimeObject* ___sender0, MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882* ___metaGestureEventArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9C473954D69A3BDB36E3CBA02713674BD5B54490_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* V_0 = NULL;
	Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* V_1 = NULL;
	HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var pointer = metaGestureEventArgs.Pointer;
		MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882* L_0 = ___metaGestureEventArgs1;
		NullCheck(L_0);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_1;
		L_1 = MetaGestureEventArgs_get_Pointer_mD0BF2306FF9ECDF8A99379A80250AEEB46811A69_inline(L_0, NULL);
		V_0 = L_1;
		// if (pointer.InputSource == (IInputSource)this) return;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Pointer_get_InputSource_m306BF9822AE2DD68F975664BFFD93E728A18B1CF_inline(L_2, NULL);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664*)__this))))
		{
			goto IL_0011;
		}
	}
	{
		// if (pointer.InputSource == (IInputSource)this) return;
		return;
	}

IL_0011:
	{
		// var newPointer = PointerFactory.Create(pointer.Type, this);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Pointer_get_Type_m9A7E3A5AB7479815826D65C54225DD600DB05B12_inline(L_4, NULL);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_6;
		L_6 = PointerFactory_Create_m64972F49E308ACCCF358F589880FE5C96D8FC892(L_5, __this, NULL);
		V_1 = L_6;
		// newPointer.CopyFrom(pointer);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_7 = V_1;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_8 = V_0;
		NullCheck(L_7);
		VirtualActionInvoker1< Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* >::Invoke(14 /* System.Void TouchScript.Pointers.Pointer::CopyFrom(TouchScript.Pointers.Pointer) */, L_7, L_8);
		// newPointer.Position = processCoords(pointer.GetPressData().RaycastHit.textureCoord);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_9 = V_1;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_10 = V_0;
		NullCheck(L_10);
		HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 L_11;
		L_11 = Pointer_GetPressData_mFD643B1E884273BBEBF2BE9D5937A3ED5CB9DBAC_inline(L_10, NULL);
		V_2 = L_11;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_12;
		L_12 = HitData_get_RaycastHit_m7778416AE51247795097D9F6FD41286D235D9156_inline((&V_2), NULL);
		V_3 = L_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RedirectInput_processCoords_mD7E3DEE8AFBED885D874ECB953626EC39608B604(__this, L_13, NULL);
		NullCheck(L_9);
		Pointer_set_Position_m8BB3AEBFF0E6A2BB1CE2F62C44F964F0AAF9B96B_inline(L_9, L_14, NULL);
		// newPointer.Flags = pointer.Flags | Pointer.FLAG_ARTIFICIAL | Pointer.FLAG_INTERNAL;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_15 = V_1;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_16 = V_0;
		NullCheck(L_16);
		uint32_t L_17;
		L_17 = Pointer_get_Flags_m9B05FE393C3CAAE7082E8A93C342693A433F26BB_inline(L_16, NULL);
		NullCheck(L_15);
		Pointer_set_Flags_mF86CFDD45413FFA8B143EB0F087BFC0DEFFDBC1C_inline(L_15, ((int32_t)(((int32_t)((int32_t)L_17|1))|4)), NULL);
		// addPointer(newPointer);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_18 = V_1;
		VirtualActionInvoker1< Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* >::Invoke(16 /* System.Void TouchScript.InputSources.InputSource::addPointer(TouchScript.Pointers.Pointer) */, __this, L_18);
		// pressPointer(newPointer);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_19 = V_1;
		VirtualActionInvoker1< Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* >::Invoke(18 /* System.Void TouchScript.InputSources.InputSource::pressPointer(TouchScript.Pointers.Pointer) */, __this, L_19);
		// map.Add(pointer.Id, newPointer);
		Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* L_20 = __this->___map_10;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = Pointer_get_Id_m9C5467EDDE02A8BB7F16B93549BD98D1B623044B_inline(L_21, NULL);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_23 = V_1;
		NullCheck(L_20);
		Dictionary_2_Add_m9C473954D69A3BDB36E3CBA02713674BD5B54490(L_20, L_22, L_23, Dictionary_2_Add_m9C473954D69A3BDB36E3CBA02713674BD5B54490_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Cube.RedirectInput::pointerUpdatedHandler(System.Object,TouchScript.Gestures.MetaGestureEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedirectInput_pointerUpdatedHandler_m63BFB21BDB4E4052DF17421EAFADF460CC0E682C (RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* __this, RuntimeObject* ___sender0, MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882* ___metaGestureEventArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1CAC41A5B1CCFB997BA9D49A3CE480CDD4F2F82E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* V_0 = NULL;
	Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* V_1 = NULL;
	HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var pointer = metaGestureEventArgs.Pointer;
		MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882* L_0 = ___metaGestureEventArgs1;
		NullCheck(L_0);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_1;
		L_1 = MetaGestureEventArgs_get_Pointer_mD0BF2306FF9ECDF8A99379A80250AEEB46811A69_inline(L_0, NULL);
		V_0 = L_1;
		// if (pointer.InputSource == (IInputSource)this) return;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Pointer_get_InputSource_m306BF9822AE2DD68F975664BFFD93E728A18B1CF_inline(L_2, NULL);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664*)__this))))
		{
			goto IL_0011;
		}
	}
	{
		// if (pointer.InputSource == (IInputSource)this) return;
		return;
	}

IL_0011:
	{
		// if (!map.TryGetValue(pointer.Id, out newPointer)) return;
		Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* L_4 = __this->___map_10;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Pointer_get_Id_m9C5467EDDE02A8BB7F16B93549BD98D1B623044B_inline(L_5, NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m1CAC41A5B1CCFB997BA9D49A3CE480CDD4F2F82E(L_4, L_6, (&V_1), Dictionary_2_TryGetValue_m1CAC41A5B1CCFB997BA9D49A3CE480CDD4F2F82E_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		// if (!map.TryGetValue(pointer.Id, out newPointer)) return;
		return;
	}

IL_0027:
	{
		// if (!PointerUtils.IsPointerOnTarget(pointer, transform, out hit)) return;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_8 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		bool L_10;
		L_10 = PointerUtils_IsPointerOnTarget_m6671A9B9F1910CC008695D114E8DD976D8E36451(L_8, L_9, (&V_2), NULL);
		if (L_10)
		{
			goto IL_0038;
		}
	}
	{
		// if (!PointerUtils.IsPointerOnTarget(pointer, transform, out hit)) return;
		return;
	}

IL_0038:
	{
		// newPointer.Position = processCoords(hit.RaycastHit.textureCoord);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_11 = V_1;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_12;
		L_12 = HitData_get_RaycastHit_m7778416AE51247795097D9F6FD41286D235D9156_inline((&V_2), NULL);
		V_3 = L_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = RaycastHit_get_textureCoord_m71F12781E6A806033B42B2D6D1D42DDA2069FE6D((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RedirectInput_processCoords_mD7E3DEE8AFBED885D874ECB953626EC39608B604(__this, L_13, NULL);
		NullCheck(L_11);
		Pointer_set_Position_m8BB3AEBFF0E6A2BB1CE2F62C44F964F0AAF9B96B_inline(L_11, L_14, NULL);
		// newPointer.Flags = pointer.Flags | Pointer.FLAG_ARTIFICIAL;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_15 = V_1;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_16 = V_0;
		NullCheck(L_16);
		uint32_t L_17;
		L_17 = Pointer_get_Flags_m9B05FE393C3CAAE7082E8A93C342693A433F26BB_inline(L_16, NULL);
		NullCheck(L_15);
		Pointer_set_Flags_mF86CFDD45413FFA8B143EB0F087BFC0DEFFDBC1C_inline(L_15, ((int32_t)((int32_t)L_17|1)), NULL);
		// updatePointer(newPointer);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_18 = V_1;
		VirtualActionInvoker1< Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* >::Invoke(17 /* System.Void TouchScript.InputSources.InputSource::updatePointer(TouchScript.Pointers.Pointer) */, __this, L_18);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Cube.RedirectInput::pointerReleasedHandler(System.Object,TouchScript.Gestures.MetaGestureEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedirectInput_pointerReleasedHandler_m78248AD81D0E2DE942C54DC57C977B83C919B3A4 (RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* __this, RuntimeObject* ___sender0, MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882* ___metaGestureEventArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m92CCAA6A5194E87FED6A5EA6A36500A8DC358C78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1CAC41A5B1CCFB997BA9D49A3CE480CDD4F2F82E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* V_0 = NULL;
	Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* V_1 = NULL;
	{
		// var pointer = metaGestureEventArgs.Pointer;
		MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882* L_0 = ___metaGestureEventArgs1;
		NullCheck(L_0);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_1;
		L_1 = MetaGestureEventArgs_get_Pointer_mD0BF2306FF9ECDF8A99379A80250AEEB46811A69_inline(L_0, NULL);
		V_0 = L_1;
		// if (pointer.InputSource == (IInputSource)this) return;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Pointer_get_InputSource_m306BF9822AE2DD68F975664BFFD93E728A18B1CF_inline(L_2, NULL);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664*)__this))))
		{
			goto IL_0011;
		}
	}
	{
		// if (pointer.InputSource == (IInputSource)this) return;
		return;
	}

IL_0011:
	{
		// if (!map.TryGetValue(pointer.Id, out newPointer)) return;
		Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* L_4 = __this->___map_10;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Pointer_get_Id_m9C5467EDDE02A8BB7F16B93549BD98D1B623044B_inline(L_5, NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m1CAC41A5B1CCFB997BA9D49A3CE480CDD4F2F82E(L_4, L_6, (&V_1), Dictionary_2_TryGetValue_m1CAC41A5B1CCFB997BA9D49A3CE480CDD4F2F82E_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		// if (!map.TryGetValue(pointer.Id, out newPointer)) return;
		return;
	}

IL_0027:
	{
		// map.Remove(pointer.Id);
		Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* L_8 = __this->___map_10;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Pointer_get_Id_m9C5467EDDE02A8BB7F16B93549BD98D1B623044B_inline(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_Remove_m92CCAA6A5194E87FED6A5EA6A36500A8DC358C78(L_8, L_10, Dictionary_2_Remove_m92CCAA6A5194E87FED6A5EA6A36500A8DC358C78_RuntimeMethod_var);
		// releasePointer(newPointer);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_12 = V_1;
		VirtualActionInvoker1< Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* >::Invoke(19 /* System.Void TouchScript.InputSources.InputSource::releasePointer(TouchScript.Pointers.Pointer) */, __this, L_12);
		// removePointer(newPointer);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_13 = V_1;
		VirtualActionInvoker1< Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* >::Invoke(20 /* System.Void TouchScript.InputSources.InputSource::removePointer(TouchScript.Pointers.Pointer) */, __this, L_13);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Cube.RedirectInput::pointerCancelledhandler(System.Object,TouchScript.Gestures.MetaGestureEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedirectInput_pointerCancelledhandler_m9602187F707C2F2E151BD2FCAC03692FD1CB462A (RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* __this, RuntimeObject* ___sender0, MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882* ___metaGestureEventArgs1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m92CCAA6A5194E87FED6A5EA6A36500A8DC358C78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m1CAC41A5B1CCFB997BA9D49A3CE480CDD4F2F82E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* V_0 = NULL;
	Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* V_1 = NULL;
	{
		// var pointer = metaGestureEventArgs.Pointer;
		MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882* L_0 = ___metaGestureEventArgs1;
		NullCheck(L_0);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_1;
		L_1 = MetaGestureEventArgs_get_Pointer_mD0BF2306FF9ECDF8A99379A80250AEEB46811A69_inline(L_0, NULL);
		V_0 = L_1;
		// if (pointer.InputSource == (IInputSource)this) return;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Pointer_get_InputSource_m306BF9822AE2DD68F975664BFFD93E728A18B1CF_inline(L_2, NULL);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_3) == ((RuntimeObject*)(RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664*)__this))))
		{
			goto IL_0011;
		}
	}
	{
		// if (pointer.InputSource == (IInputSource)this) return;
		return;
	}

IL_0011:
	{
		// if (!map.TryGetValue(pointer.Id, out newPointer)) return;
		Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* L_4 = __this->___map_10;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Pointer_get_Id_m9C5467EDDE02A8BB7F16B93549BD98D1B623044B_inline(L_5, NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m1CAC41A5B1CCFB997BA9D49A3CE480CDD4F2F82E(L_4, L_6, (&V_1), Dictionary_2_TryGetValue_m1CAC41A5B1CCFB997BA9D49A3CE480CDD4F2F82E_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		// if (!map.TryGetValue(pointer.Id, out newPointer)) return;
		return;
	}

IL_0027:
	{
		// map.Remove(pointer.Id);
		Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* L_8 = __this->___map_10;
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Pointer_get_Id_m9C5467EDDE02A8BB7F16B93549BD98D1B623044B_inline(L_9, NULL);
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_Remove_m92CCAA6A5194E87FED6A5EA6A36500A8DC358C78(L_8, L_10, Dictionary_2_Remove_m92CCAA6A5194E87FED6A5EA6A36500A8DC358C78_RuntimeMethod_var);
		// cancelPointer(newPointer);
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_12 = V_1;
		VirtualActionInvoker1< Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* >::Invoke(21 /* System.Void TouchScript.InputSources.InputSource::cancelPointer(TouchScript.Pointers.Pointer) */, __this, L_12);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Cube.RedirectInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RedirectInput__ctor_m1B8EE9F17DC26DBFC1FDB88CD5D227FDF62332B7 (RedirectInput_tE52CDFA41841A43E4EEEAC4F6016E1D5816B5664* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mABDFF1DC03570A3D7B0B66A0C01FA0F21E459FFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Width = 512;
		__this->___Width_7 = ((int32_t)512);
		// public int Height = 512;
		__this->___Height_8 = ((int32_t)512);
		// private Dictionary<int, Pointer> map = new Dictionary<int, Pointer>();
		Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1* L_0 = (Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1*)il2cpp_codegen_object_new(Dictionary_2_tA85A639F227B44E8CCA9C46214C1097E8FDF79A1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mABDFF1DC03570A3D7B0B66A0C01FA0F21E459FFB(L_0, Dictionary_2__ctor_mABDFF1DC03570A3D7B0B66A0C01FA0F21E459FFB_RuntimeMethod_var);
		__this->___map_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___map_10), (void*)L_0);
		InputSource__ctor_m67D68C29DA6EB4473AF36546A6A045D9953E8DC1(__this, NULL);
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
// UnityEngine.Color TouchScript.Examples.Colors.Circle::Kill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Circle_Kill_mED9E6081A550602A5D45551E2B9E522EFB21ABD5 (Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isDestroyed = true;
		__this->___isDestroyed_4 = (bool)1;
		// GetComponent<TransformGesture>().Cancel(true, true);
		TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* L_0;
		L_0 = Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A(__this, Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A_RuntimeMethod_var);
		NullCheck(L_0);
		Gesture_Cancel_m8D7C4119C62D103DAC966B99819529A50BEC843C(L_0, (bool)1, (bool)1, NULL);
		// GetComponent<TransformGesture>().Cancel(true, true);
		TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* L_1;
		L_1 = Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A(__this, Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A_RuntimeMethod_var);
		NullCheck(L_1);
		Gesture_Cancel_m8D7C4119C62D103DAC966B99819529A50BEC843C(L_1, (bool)1, (bool)1, NULL);
		// var color = GetComponent<Renderer>().sharedMaterial.color;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_2);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3;
		L_3 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_2, NULL);
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_3, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// return color;
		return L_4;
	}
}
// System.Void TouchScript.Examples.Colors.Circle::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Circle_OnTriggerEnter2D_mC9AF3748E14FE7972036390026B16381F1913A6D (Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCircle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED_m08848E63B3A36D739FFF2220AD544216271575DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* V_0 = NULL;
	Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (isDestroyed) return;
		bool L_0 = __this->___isDestroyed_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (isDestroyed) return;
		return;
	}

IL_0009:
	{
		// var gesture = GetComponent<TransformGesture>();
		TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* L_1;
		L_1 = Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A(__this, Component_GetComponent_TisTransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277_m67501ED427A507B1F0F563021F57C416E81C833A_RuntimeMethod_var);
		V_0 = L_1;
		// if (gesture.State != Gesture.GestureState.Changed && gesture.State != Gesture.GestureState.Began) return;
		TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Gesture_get_State_m3ABDFFD4DEA6B22E22F2559D768EF08FDEE26412_inline(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0023;
		}
	}
	{
		TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Gesture_get_State_m3ABDFFD4DEA6B22E22F2559D768EF08FDEE26412_inline(L_4, NULL);
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		// if (gesture.State != Gesture.GestureState.Changed && gesture.State != Gesture.GestureState.Began) return;
		return;
	}

IL_0023:
	{
		// var otherCircle = other.GetComponent<Circle>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_6 = ___other0;
		NullCheck(L_6);
		Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* L_7;
		L_7 = Component_GetComponent_TisCircle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED_m08848E63B3A36D739FFF2220AD544216271575DD(L_6, Component_GetComponent_TisCircle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED_m08848E63B3A36D739FFF2220AD544216271575DD_RuntimeMethod_var);
		V_1 = L_7;
		// if (!otherCircle) return;
		Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_8, NULL);
		if (L_9)
		{
			goto IL_0033;
		}
	}
	{
		// if (!otherCircle) return;
		return;
	}

IL_0033:
	{
		// var otherColor = otherCircle.Kill();
		Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* L_10 = V_1;
		NullCheck(L_10);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Circle_Kill_mED9E6081A550602A5D45551E2B9E522EFB21ABD5(L_10, NULL);
		V_2 = L_11;
		// var scale =
		//     Mathf.Sqrt(otherCircle.transform.localScale.x*otherCircle.transform.localScale.x +
		//                transform.localScale.x*transform.localScale.x);
		Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* L_12 = V_1;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_13, NULL);
		float L_15 = L_14.___x_2;
		Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* L_16 = V_1;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_17, NULL);
		float L_19 = L_18.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_20, NULL);
		float L_22 = L_21.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_23, NULL);
		float L_25 = L_24.___x_2;
		float L_26;
		L_26 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_15, L_19)), ((float)il2cpp_codegen_multiply(L_22, L_25)))));
		V_3 = L_26;
		// var color = Color.Lerp(GetComponent<Renderer>().sharedMaterial.color, otherColor, .5f);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_27;
		L_27 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_27);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28;
		L_28 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_27, NULL);
		NullCheck(L_28);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_28, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = V_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		L_31 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_29, L_30, (0.5f), NULL);
		V_4 = L_31;
		// var obj = Instantiate(gameObject) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_32, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// obj.transform.SetParent(transform.parent);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = L_33;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_36, NULL);
		NullCheck(L_35);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_35, L_37, NULL);
		// obj.transform.localPosition = transform.localPosition;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = L_34;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_38, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_40);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_40, NULL);
		NullCheck(L_39);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_39, L_41, NULL);
		// obj.transform.localRotation = transform.localRotation;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = L_38;
		NullCheck(L_42);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_42, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_44);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_45;
		L_45 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_44, NULL);
		NullCheck(L_43);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_43, L_45, NULL);
		// obj.transform.localScale = new Vector3(scale, 1, scale);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = L_42;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		float L_48 = V_3;
		float L_49 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), L_48, (1.0f), L_49, /*hidden argument*/NULL);
		NullCheck(L_47);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_47, L_50, NULL);
		// obj.GetComponent<Renderer>().sharedMaterial.color = color;
		NullCheck(L_46);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_51;
		L_51 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_46, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		NullCheck(L_51);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_52;
		L_52 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_51, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53 = V_4;
		NullCheck(L_52);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_52, L_53, NULL);
		// Kill();
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54;
		L_54 = Circle_Kill_mED9E6081A550602A5D45551E2B9E522EFB21ABD5(__this, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Colors.Circle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Circle__ctor_m2924C6F1BEAD8C8FDAEABF8FB9C0A1B2A033381A (Circle_tD2D857CD72441BD9EB1EFA972AB45F3E28250FED* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.Colors.Colors::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Colors_Start_m326BAD361CD5A705575E067631686B5F91EBB838 (Colors_t709774888BF67DF58B99729863E962582965985A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral899C4CA9F8694026FA5B50E67227A4F3E06AC520);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var container = transform.Find("Container");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteral899C4CA9F8694026FA5B50E67227A4F3E06AC520, NULL);
		V_0 = L_1;
		// for (var i = 0; i < Total; i++)
		V_1 = 0;
		goto IL_007a;
	}

IL_0015:
	{
		// var obj = Instantiate(Prefab) as Transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___Prefab_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB(L_2, Object_Instantiate_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m0B9074AE90D43856913C96B1141E260D4BFBD2EB_RuntimeMethod_var);
		// obj.SetParent(container);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = L_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_4);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_4, L_5, NULL);
		// obj.localPosition = new Vector3(Random.Range(-100, 100), Random.Range(-100, 100), 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = L_4;
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-100), ((int32_t)100), NULL);
		int32_t L_8;
		L_8 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)-100), ((int32_t)100), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)L_7), ((float)L_8), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_6, L_9, NULL);
		// obj.GetComponent<Renderer>().material.color = colors[Random.Range(0, colors.Count)];
		NullCheck(L_6);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_10;
		L_10 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_6, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		NullCheck(L_10);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_11;
		L_11 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_10, NULL);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_12 = __this->___colors_6;
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_13 = __this->___colors_6;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_inline(L_13, List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_RuntimeMethod_var);
		int32_t L_15;
		L_15 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, L_14, NULL);
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F(L_12, L_15, List_1_get_Item_mE616D49F5F6197745A12A06084EEE9E6FFCF017F_RuntimeMethod_var);
		NullCheck(L_11);
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_11, L_16, NULL);
		// for (var i = 0; i < Total; i++)
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_007a:
	{
		// for (var i = 0; i < Total; i++)
		int32_t L_18 = V_1;
		int32_t L_19 = __this->___Total_5;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0015;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Colors.Colors::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Colors__ctor_m0EFE36D2B150EED719C256FE07EA00ECF8D0ECE3 (Colors_t709774888BF67DF58B99729863E962582965985A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Total = 10;
		__this->___Total_5 = ((int32_t)10);
		// private List<Color> colors = new List<Color>()
		// {
		//     Color.blue,
		//     Color.cyan,
		//     Color.gray,
		//     Color.green,
		//     Color.magenta,
		//     Color.red,
		//     Color.white,
		//     Color.yellow,
		//     Color.black
		// };
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_0 = (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*)il2cpp_codegen_object_new(List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D(L_0, List_1__ctor_mE1298EFE02E4CF09A9513D04C6D0FE12C4A5A96D_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_1 = L_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		L_2 = Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline(NULL);
		NullCheck(L_1);
		List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline(L_1, L_2, List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_3 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		L_4 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		NullCheck(L_3);
		List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline(L_3, L_4, List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_5 = L_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline(NULL);
		NullCheck(L_5);
		List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline(L_5, L_6, List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_7 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_7);
		List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline(L_7, L_8, List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_9 = L_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline(NULL);
		NullCheck(L_9);
		List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline(L_9, L_10, List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_11 = L_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_11);
		List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline(L_11, L_12, List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_13 = L_11;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_13);
		List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline(L_13, L_14, List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_15 = L_13;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_15);
		List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline(L_15, L_16, List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* L_17 = L_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		L_18 = Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline(NULL);
		NullCheck(L_17);
		List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_inline(L_17, L_18, List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_RuntimeMethod_var);
		__this->___colors_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colors_6), (void*)L_17);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.Checkers.Board::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_OnEnable_mBE97AAD61A65E1A946C2D0748DEBDBD7B3D915BF (Board_t164880A2CE4D7C370BF241163022ECD62FB9C1E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_transformedHandler_mB5B8899E1145547817E09C479F08EBF549FF03A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B_mD034F9502588767567CB2372E9CDA2BFA8DC9A69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gesture = GetComponent<PinnedTransformGesture>();
		PinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B* L_0;
		L_0 = Component_GetComponent_TisPinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B_mD034F9502588767567CB2372E9CDA2BFA8DC9A69(__this, Component_GetComponent_TisPinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B_mD034F9502588767567CB2372E9CDA2BFA8DC9A69_RuntimeMethod_var);
		__this->___gesture_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gesture_4), (void*)L_0);
		// gesture.Transformed += transformedHandler;
		PinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B* L_1 = __this->___gesture_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_2, __this, (intptr_t)((void*)Board_transformedHandler_mB5B8899E1145547817E09C479F08EBF549FF03A5_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		TransformGestureBase_add_Transformed_m1AD08C336A6B7D9ABC94D736CCB6031DA80E5FC7(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Checkers.Board::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_OnDisable_m00311C4E5D3580ACB708EF70F395EA70D7904A78 (Board_t164880A2CE4D7C370BF241163022ECD62FB9C1E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_transformedHandler_mB5B8899E1145547817E09C479F08EBF549FF03A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gesture.Transformed -= transformedHandler;
		PinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B* L_0 = __this->___gesture_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)Board_transformedHandler_mB5B8899E1145547817E09C479F08EBF549FF03A5_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		TransformGestureBase_remove_Transformed_mE642B124DCF83ECD5192F6977201BDC96EE73D60(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Checkers.Board::transformedHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_transformedHandler_mB5B8899E1145547817E09C479F08EBF549FF03A5 (Board_t164880A2CE4D7C370BF241163022ECD62FB9C1E6* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	{
		// transform.localRotation *= Quaternion.AngleAxis(gesture.DeltaRotation, gesture.RotationAxis);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_1, NULL);
		PinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B* L_3 = __this->___gesture_4;
		NullCheck(L_3);
		float L_4;
		L_4 = TransformGestureBase_get_DeltaRotation_m4FDEA2D458A857979C4CF2D1E65D2BAD80D72D98_inline(L_3, NULL);
		PinnedTransformGesture_t0052C19D0F7F46CA148636F8CCA9DF5E4FFF0D0B* L_5 = __this->___gesture_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = TransformGestureBase_get_RotationAxis_m371085DAA16F819A40EBAC5415EE08772CE70C83_inline(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_4, L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_2, L_7, NULL);
		NullCheck(L_1);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_1, L_8, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Checkers.Board::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board__ctor_m69F2AB9A1E048E21F712D808383033176D8CEA9D (Board_t164880A2CE4D7C370BF241163022ECD62FB9C1E6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.Checkers.Exclusive::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exclusive_Awake_mFD0140200CFA1CB31015714085DF7FE32B012DF5 (Exclusive_tD384CBC9D4B4C3D09B4D67148D7F64E0AD34F051* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGestureManager_t356CF9FE98AF8E3BEF2DCFBFC08BA35F0260DE65_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB51CF3B3853A43D70B8C2965E5A131A716930E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GestureManager.Instance.GlobalGestureDelegate = this;
		RuntimeObject* L_0;
		L_0 = GestureManager_get_Instance_mAA2400C542ABC7F5492A61DE3DCCBFFE91B16D92(NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(1 /* System.Void TouchScript.IGestureManager::set_GlobalGestureDelegate(TouchScript.IGestureDelegate) */, IGestureManager_t356CF9FE98AF8E3BEF2DCFBFC08BA35F0260DE65_il2cpp_TypeInfo_var, L_0, __this);
		// cachedRenderer = Target.GetComponent<Renderer>();
		TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* L_1 = __this->___Target_4;
		NullCheck(L_1);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_2;
		L_2 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_1, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___cachedRenderer_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cachedRenderer_7), (void*)L_2);
		// shininess = cachedRenderer.sharedMaterial.GetFloat("_Shininess");
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->___cachedRenderer_7;
		NullCheck(L_3);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_sharedMaterial_mA2E0CA0A564617FFC3E0E50947C6300082C35F81(L_3, NULL);
		NullCheck(L_4);
		float L_5;
		L_5 = Material_GetFloat_m2A77F10E6AA13EA3FA56166EFEA897115A14FA5A(L_4, _stringLiteral0CB51CF3B3853A43D70B8C2965E5A131A716930E, NULL);
		__this->___shininess_8 = L_5;
		// }
		return;
	}
}
// System.Void TouchScript.Examples.Checkers.Exclusive::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exclusive_Update_m168605230E1EE7F9A95A8FCF7AE73E1B63077324 (Exclusive_tD384CBC9D4B4C3D09B4D67148D7F64E0AD34F051* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0CB51CF3B3853A43D70B8C2965E5A131A716930E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39307C9568DA7F23605DF7F649F89A319906DB74);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKey(KeyCode.Space))
		bool L_0;
		L_0 = Input_GetKey_mE5681EF775F3CEBA7EAD7C63984F7B34C8E8D434(((int32_t)32), NULL);
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		// exclusive = true;
		__this->___exclusive_6 = (bool)1;
		// cachedRenderer.material.SetColor("_SpecColor", Color);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1 = __this->___cachedRenderer_7;
		NullCheck(L_1);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2;
		L_2 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_1, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = __this->___Color_5;
		NullCheck(L_2);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_2, _stringLiteral39307C9568DA7F23605DF7F649F89A319906DB74, L_3, NULL);
		// cachedRenderer.material.SetFloat("_Shininess", 0);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_4 = __this->___cachedRenderer_7;
		NullCheck(L_4);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_5;
		L_5 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_4, NULL);
		NullCheck(L_5);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_5, _stringLiteral0CB51CF3B3853A43D70B8C2965E5A131A716930E, (0.0f), NULL);
		return;
	}

IL_0046:
	{
		// exclusive = false;
		__this->___exclusive_6 = (bool)0;
		// cachedRenderer.material.SetColor("_SpecColor", Color.white);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_6 = __this->___cachedRenderer_7;
		NullCheck(L_6);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_7;
		L_7 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_6, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		NullCheck(L_7);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_7, _stringLiteral39307C9568DA7F23605DF7F649F89A319906DB74, L_8, NULL);
		// cachedRenderer.material.SetFloat("_Shininess", shininess);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9 = __this->___cachedRenderer_7;
		NullCheck(L_9);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_9, NULL);
		float L_11 = __this->___shininess_8;
		NullCheck(L_10);
		Material_SetFloat_m879CF81D740BAE6F23C9822400679F4D16365836(L_10, _stringLiteral0CB51CF3B3853A43D70B8C2965E5A131A716930E, L_11, NULL);
		// }
		return;
	}
}
// System.Boolean TouchScript.Examples.Checkers.Exclusive::ShouldBegin(TouchScript.Gestures.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Exclusive_ShouldBegin_m3A13D85B590E59915D06AA571349409048F30E0D (Exclusive_tD384CBC9D4B4C3D09B4D67148D7F64E0AD34F051* __this, Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328* ___gesture0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (exclusive) return gesture == Target;
		bool L_0 = __this->___exclusive_6;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// if (exclusive) return gesture == Target;
		Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328* L_1 = ___gesture0;
		TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* L_2 = __this->___Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean TouchScript.Examples.Checkers.Exclusive::ShouldReceivePointer(TouchScript.Gestures.Gesture,TouchScript.Pointers.Pointer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Exclusive_ShouldReceivePointer_mB6C5F06313782BB014FDC7771A8C2128EC79EB86 (Exclusive_tD384CBC9D4B4C3D09B4D67148D7F64E0AD34F051* __this, Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328* ___gesture0, Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* ___pointer1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (exclusive) return gesture == Target;
		bool L_0 = __this->___exclusive_6;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// if (exclusive) return gesture == Target;
		Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328* L_1 = ___gesture0;
		TransformGesture_tA4896E2520B5D0D838E626087C4AF3B240D39277* L_2 = __this->___Target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean TouchScript.Examples.Checkers.Exclusive::ShouldRecognizeSimultaneously(TouchScript.Gestures.Gesture,TouchScript.Gestures.Gesture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Exclusive_ShouldRecognizeSimultaneously_mBA0DD9EBA86262FAF663A868ECE6E0A3C799164C (Exclusive_tD384CBC9D4B4C3D09B4D67148D7F64E0AD34F051* __this, Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328* ___first0, Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328* ___second1, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// System.Void TouchScript.Examples.Checkers.Exclusive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exclusive__ctor_m37C15667D05C1CE176F114BF9E00D145E47B3FDD (Exclusive_tD384CBC9D4B4C3D09B4D67148D7F64E0AD34F051* __this, const RuntimeMethod* method) 
{
	{
		// public Color Color = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		__this->___Color_5 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void TouchScript.Examples.CameraControl.CameraController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Awake_mE5AC80A825D65FB8F7B48A005E07D325E94F4F57 (CameraController_tB9F2119450A667D620CF1480955257EB7674C70E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DFAD432C6366D1DCA70C09F24B77B557EA5F4E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8851D9BD6F74890B3B8707221A22FD5C9A3A894);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pivot = transform.Find("Pivot");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_0, _stringLiteralF8851D9BD6F74890B3B8707221A22FD5C9A3A894, NULL);
		__this->___pivot_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pivot_9), (void*)L_1);
		// cam = transform.Find("Pivot/Camera");
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_2, _stringLiteral3DFAD432C6366D1DCA70C09F24B77B557EA5F4E1, NULL);
		__this->___cam_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_10), (void*)L_3);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.CameraControl.CameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_OnEnable_m39D5153F05EC11E1B9126AE41036FAB56B6BCE4D (CameraController_tB9F2119450A667D620CF1480955257EB7674C70E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_manipulationTransformedHandler_m9C719CD67A8AAA4BB0CAFA3C5CBA532EF074E4CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_twoFingerTransformHandler_m8A7FACA7C04B4DF9D5C3914E3260F948824C0E6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TwoFingerMoveGesture.Transformed += twoFingerTransformHandler;
		ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302* L_0 = __this->___TwoFingerMoveGesture_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)CameraController_twoFingerTransformHandler_m8A7FACA7C04B4DF9D5C3914E3260F948824C0E6B_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		TransformGestureBase_add_Transformed_m1AD08C336A6B7D9ABC94D736CCB6031DA80E5FC7(L_0, L_1, NULL);
		// ManipulationGesture.Transformed += manipulationTransformedHandler;
		ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302* L_2 = __this->___ManipulationGesture_5;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_3, __this, (intptr_t)((void*)CameraController_manipulationTransformedHandler_m9C719CD67A8AAA4BB0CAFA3C5CBA532EF074E4CF_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		TransformGestureBase_add_Transformed_m1AD08C336A6B7D9ABC94D736CCB6031DA80E5FC7(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.CameraControl.CameraController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_OnDisable_m4EFCFC359DA533301284CB89CF08349812703E02 (CameraController_tB9F2119450A667D620CF1480955257EB7674C70E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_manipulationTransformedHandler_m9C719CD67A8AAA4BB0CAFA3C5CBA532EF074E4CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_twoFingerTransformHandler_m8A7FACA7C04B4DF9D5C3914E3260F948824C0E6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TwoFingerMoveGesture.Transformed -= twoFingerTransformHandler;
		ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302* L_0 = __this->___TwoFingerMoveGesture_4;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_1, __this, (intptr_t)((void*)CameraController_twoFingerTransformHandler_m8A7FACA7C04B4DF9D5C3914E3260F948824C0E6B_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		TransformGestureBase_remove_Transformed_mE642B124DCF83ECD5192F6977201BDC96EE73D60(L_0, L_1, NULL);
		// ManipulationGesture.Transformed -= manipulationTransformedHandler;
		ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302* L_2 = __this->___ManipulationGesture_5;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_3, __this, (intptr_t)((void*)CameraController_manipulationTransformedHandler_m9C719CD67A8AAA4BB0CAFA3C5CBA532EF074E4CF_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		TransformGestureBase_remove_Transformed_mE642B124DCF83ECD5192F6977201BDC96EE73D60(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.CameraControl.CameraController::manipulationTransformedHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_manipulationTransformedHandler_m9C719CD67A8AAA4BB0CAFA3C5CBA532EF074E4CF (CameraController_tB9F2119450A667D620CF1480955257EB7674C70E* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var rotation = Quaternion.Euler(ManipulationGesture.DeltaPosition.y/Screen.height*RotationSpeed,
		//     -ManipulationGesture.DeltaPosition.x/Screen.width*RotationSpeed,
		//     ManipulationGesture.DeltaRotation);
		ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302* L_0 = __this->___ManipulationGesture_5;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = TransformGestureBase_get_DeltaPosition_mF7D11CA54C34FB1179C40C4BC2624041955E302E_inline(L_0, NULL);
		float L_2 = L_1.___y_3;
		int32_t L_3;
		L_3 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		float L_4 = __this->___RotationSpeed_7;
		ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302* L_5 = __this->___ManipulationGesture_5;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = TransformGestureBase_get_DeltaPosition_mF7D11CA54C34FB1179C40C4BC2624041955E302E_inline(L_5, NULL);
		float L_7 = L_6.___x_2;
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		float L_9 = __this->___RotationSpeed_7;
		ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302* L_10 = __this->___ManipulationGesture_5;
		NullCheck(L_10);
		float L_11;
		L_11 = TransformGestureBase_get_DeltaRotation_m4FDEA2D458A857979C4CF2D1E65D2BAD80D72D98_inline(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_multiply(((float)(L_2/((float)L_3))), L_4)), ((float)il2cpp_codegen_multiply(((float)(((-L_7))/((float)L_8))), L_9)), L_11, NULL);
		V_0 = L_12;
		// pivot.localRotation *= rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___pivot_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = L_13;
		NullCheck(L_14);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_15, L_16, NULL);
		NullCheck(L_14);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_14, L_17, NULL);
		// cam.transform.localPosition += Vector3.forward*(ManipulationGesture.DeltaScale - 1f)*ZoomSpeed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___cam_10;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = L_19;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302* L_23 = __this->___ManipulationGesture_5;
		NullCheck(L_23);
		float L_24;
		L_24 = TransformGestureBase_get_DeltaScale_mA042D1868ADCD87EDF62ECC7E847F8937E098DCD_inline(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_22, ((float)il2cpp_codegen_subtract(L_24, (1.0f))), NULL);
		float L_26 = __this->___ZoomSpeed_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_27, NULL);
		NullCheck(L_20);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_20, L_28, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.CameraControl.CameraController::twoFingerTransformHandler(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_twoFingerTransformHandler_m8A7FACA7C04B4DF9D5C3914E3260F948824C0E6B (CameraController_tB9F2119450A667D620CF1480955257EB7674C70E* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	{
		// pivot.localPosition += pivot.rotation*TwoFingerMoveGesture.DeltaPosition*PanSpeed;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___pivot_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___pivot_9;
		NullCheck(L_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		ScreenTransformGesture_t2529BD4E088BB934D20F2D3487283FA4E9644302* L_5 = __this->___TwoFingerMoveGesture_4;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = TransformGestureBase_get_DeltaPosition_mF7D11CA54C34FB1179C40C4BC2624041955E302E_inline(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_4, L_6, NULL);
		float L_8 = __this->___PanSpeed_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_9, NULL);
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_10, NULL);
		// }
		return;
	}
}
// System.Void TouchScript.Examples.CameraControl.CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m74E595B5B37210FE21DE29C6B1F6A1BFAF0D7450 (CameraController_tB9F2119450A667D620CF1480955257EB7674C70E* __this, const RuntimeMethod* method) 
{
	{
		// public float PanSpeed = 200f;
		__this->___PanSpeed_6 = (200.0f);
		// public float RotationSpeed = 200f;
		__this->___RotationSpeed_7 = (200.0f);
		// public float ZoomSpeed = 10f;
		__this->___ZoomSpeed_8 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* PointerEventArgs_get_Pointers_mAB560A5983995A1FDCE5D6CD33CC2B23AC085019_inline (PointerEventArgs_t34E1B84AA12A97F9C4C8E597B04CBB3D09E14506* __this, const RuntimeMethod* method) 
{
	{
		// public IList<Pointer> Pointers { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointersU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Pointer_get_Position_mCC964F3067241BEBB1FCC1AFACE9CFE86C690EA7_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) 
{
	{
		// get { return position; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___position_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_magenta_mE31C432891E0B3D23C8FB03CB3A38A60E7F52A9A_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_blue_mF04A26CE61D6DA3C0D8B1C4720901B1028C7AB87_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TouchLayer_set_Delegate_mB04E28606ABA281FB3F1116DF03720050FE461E4_inline (TouchLayer_t1BF7B9CFDF3349B3FB08C0AEE203CA748B9383FC* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public ILayerDelegate Delegate { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CDelegateU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDelegateU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Id_m9C5467EDDE02A8BB7F16B93549BD98D1B623044B_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) 
{
	{
		// public int Id { get; private set; }
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Pointer_get_Type_m9A7E3A5AB7479815826D65C54225DD600DB05B12_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) 
{
	{
		// public PointerType Type { get; protected set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 HitData_get_RaycastHit_m7778416AE51247795097D9F6FD41286D235D9156_inline (HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8* __this, const RuntimeMethod* method) 
{
	{
		// get { return raycastHit; }
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_0 = __this->___raycastHit_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pointer_set_Position_m8BB3AEBFF0E6A2BB1CE2F62C44F964F0AAF9B96B_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) 
{
	{
		// set { newPosition = value; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___value0;
		__this->___newPosition_14 = L_0;
		// set { newPosition = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* MetaGestureEventArgs_get_Pointer_mD0BF2306FF9ECDF8A99379A80250AEEB46811A69_inline (MetaGestureEventArgs_t8BF69AFC2E9619FF718C89F5F27CF2974D6CD882* __this, const RuntimeMethod* method) 
{
	{
		// public Pointer Pointer { get; private set; }
		Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* L_0 = __this->___U3CPointerU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Pointer_get_InputSource_m306BF9822AE2DD68F975664BFFD93E728A18B1CF_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) 
{
	{
		// public IInputSource InputSource { get; private set; }
		RuntimeObject* L_0 = __this->___U3CInputSourceU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 Pointer_GetPressData_mFD643B1E884273BBEBF2BE9D5937A3ED5CB9DBAC_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) 
{
	{
		// return pressData;
		HitData_tB88E64A395B361760FD4FAB14ADF9AE2157AF8D8 L_0 = __this->___pressData_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t Pointer_get_Flags_m9B05FE393C3CAAE7082E8A93C342693A433F26BB_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, const RuntimeMethod* method) 
{
	{
		// public uint Flags { get; set; }
		uint32_t L_0 = __this->___U3CFlagsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Pointer_set_Flags_mF86CFDD45413FFA8B143EB0F087BFC0DEFFDBC1C_inline (Pointer_t4F1D5FF76DD7F9CE887D483BAFDED257B9D884A9* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public uint Flags { get; set; }
		uint32_t L_0 = ___value0;
		__this->___U3CFlagsU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Gesture_get_State_m3ABDFFD4DEA6B22E22F2559D768EF08FDEE26412_inline (Gesture_t5E5DEDAA68FD273A982635BA166380B0C3AFD328* __this, const RuntimeMethod* method) 
{
	{
		// get { return state; }
		int32_t L_0 = __this->___state_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___a0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___b1, float ___t2, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___t2 = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___a0;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___b1;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___a0;
		float L_7 = L_6.___r_0;
		float L_8 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___a0;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___b1;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___a0;
		float L_14 = L_13.___g_1;
		float L_15 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___a0;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___b1;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___a0;
		float L_21 = L_20.___b_2;
		float L_22 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___a0;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___b1;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___a0;
		float L_28 = L_27.___a_3;
		float L_29 = ___t2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_gray_m6D01087E0F20F34718EBA5B213853B4BB49F1DEF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.5f), (0.5f), (0.5f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_black_mB50217951591A045844C61E7FF31EEE3FEF16737_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TransformGestureBase_get_DeltaRotation_m4FDEA2D458A857979C4CF2D1E65D2BAD80D72D98_inline (TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A* __this, const RuntimeMethod* method) 
{
	{
		// get { return deltaRotation; }
		float L_0 = __this->___deltaRotation_50;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformGestureBase_get_RotationAxis_m371085DAA16F819A40EBAC5415EE08772CE70C83_inline (TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A* __this, const RuntimeMethod* method) 
{
	{
		// get { return rotationAxis; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___rotationAxis_52;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 TransformGestureBase_get_DeltaPosition_mF7D11CA54C34FB1179C40C4BC2624041955E302E_inline (TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A* __this, const RuntimeMethod* method) 
{
	{
		// get { return deltaPosition; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___deltaPosition_49;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TransformGestureBase_get_DeltaScale_mA042D1868ADCD87EDF62ECC7E847F8937E098DCD_inline (TransformGestureBase_tEAB3A8BCB5558B0499DDEDFB62EFD6164341B19A* __this, const RuntimeMethod* method) 
{
	{
		// get { return deltaScale; }
		float L_0 = __this->___deltaScale_51;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m9D26655D9E25702CE9561783BA482298CA9CCA77_gshared_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m4EA3769821DBDED34CA0EBACD784AC6C1A536C1A_gshared_inline (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___item0, const RuntimeMethod* method) 
{
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_1 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_6 = V_0;
		int32_t L_7 = V_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_8);
		return;
	}

IL_0034:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___item0;
		((  void (*) (List_1_t242CDEAEC9C92000DA96982CDB9D592DDE2AADAF*, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
