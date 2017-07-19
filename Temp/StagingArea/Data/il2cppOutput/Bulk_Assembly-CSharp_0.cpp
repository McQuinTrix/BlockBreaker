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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_BallScript652658930.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_AudioSource1135106623.h"
#include "AssemblyU2DCSharp_brickScript3740699742.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Sprite309593783.h"
#include "AssemblyU2DCSharp_LevelManager3355282079.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene1684909666.h"
#include "AssemblyU2DCSharp_LoseCollider1155462885.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "AssemblyU2DCSharp_MusicPlayer3223126890.h"
#include "AssemblyU2DCSharp_PaddleScript3839513181.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_RectTransform3349966182.h"

// BallScript
struct BallScript_t652658930;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// System.Object
struct Il2CppObject;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// brickScript
struct brickScript_t3740699742;
// LevelManager
struct LevelManager_t3355282079;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// LoseCollider
struct LoseCollider_t1155462885;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// MusicPlayer
struct MusicPlayer_t3223126890;
// PaddleScript
struct PaddleScript_t3839513181;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t BallScript_Start_m1258677503_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern const uint32_t BallScript_Update_m3655565148_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3712348323;
extern Il2CppCodeGenString* _stringLiteral2348017801;
extern Il2CppCodeGenString* _stringLiteral1491189398;
extern const uint32_t BallScript_OnCollisionEnter2D_m1041575741_MetadataUsageId;
extern Il2CppClass* brickScript_t3740699742_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480_MethodInfo_var;
extern const uint32_t brickScript_Start_m4165681209_MetadataUsageId;
extern const uint32_t brickScript_HandleHits_m2552652281_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var;
extern const uint32_t brickScript_LoadSprites_m489191201_MetadataUsageId;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2889247667;
extern const uint32_t LevelManager_LoadLevel_m3771066388_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral4098824534;
extern const uint32_t LevelManager_QuitRequest_m3014183236_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral4158107630;
extern Il2CppCodeGenString* _stringLiteral1414246213;
extern const uint32_t LevelManager_Correct_m1128209918_MetadataUsageId;
extern const uint32_t LevelManager_brickDestroyed_m1365395270_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral277505782;
extern const uint32_t LoseCollider_OnTriggerEnter2D_m554453592_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral3223782982;
extern const uint32_t LoseCollider_OnCollisionEnter2D_m2634041086_MetadataUsageId;
extern Il2CppClass* MusicPlayer_t3223126890_il2cpp_TypeInfo_var;
extern const uint32_t MusicPlayer_Awake_m2670478726_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral405904531;
extern const uint32_t PaddleScript_Start_m604359402_MetadataUsageId;
extern Il2CppClass* RectTransform_t3349966182_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t PaddleScript_RoboPlay_m356297570_MetadataUsageId;
extern const uint32_t PaddleScript_mouseMove_m1455474548_MetadataUsageId;

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Sprite_t309593783 * m_Items[1];

public:
	inline Sprite_t309593783 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t309593783 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t309593783 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Sprite_t309593783 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t309593783 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t309593783 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C"  Il2CppObject * Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared (Il2CppObject * __this /* static, unused */, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Subtraction_m2407545601 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Addition_m3146764857 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m47917805 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3067419446 (Vector2_t2243707579 * __this, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
extern "C"  void Rigidbody2D_set_velocity_m3592751374 (Rigidbody2D_t502193897 * __this, Vector2_t2243707579  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
extern "C"  GameObject_t1756533147 * Collision2D_get_gameObject_m4234358314 (Collision2D_t1539500754 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GameObject::get_tag()
extern "C"  String_t* GameObject_get_tag_m1425941094 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1790663636 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Play()
extern "C"  void AudioSource_Play_m353744792 (AudioSource_t1135106623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BallScript::Tweaker()
extern "C"  void BallScript_Tweaker_m1693544058 (BallScript_t652658930 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2884721203 (Il2CppObject * __this /* static, unused */, float p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
extern "C"  Vector2_t2243707579  Rigidbody2D_get_velocity_m3310151195 (Rigidbody2D_t502193897 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  Vector2_op_Addition_m1389598521 (Il2CppObject * __this /* static, unused */, Vector2_t2243707579  p0, Vector2_t2243707579  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Component::get_tag()
extern "C"  String_t* Component_get_tag_m357168014 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::FindObjectOfType<LevelManager>()
#define Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480(__this /* static, unused */, method) ((  LevelManager_t3355282079 * (*) (Il2CppObject * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisIl2CppObject_m483057723_gshared)(__this /* static, unused */, method)
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m3437620292 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void brickScript::HandleHits()
extern "C"  void brickScript_HandleHits_m2552652281 (brickScript_t3740699742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::brickDestroyed()
extern "C"  void LevelManager_brickDestroyed_m1365395270 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m4145850038 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void brickScript::LoadSprites()
extern "C"  void brickScript_LoadSprites_m489191201 (brickScript_t3740699742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m2856731593 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(__this, method) ((  SpriteRenderer_t1209076198 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m617298623 (SpriteRenderer_t1209076198 * __this, Sprite_t309593783 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadNextLevel()
extern "C"  void LevelManager_LoadNextLevel_m4205287453 (LevelManager_t3355282079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m2596409543 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1619949821 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m3885595876 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t1684909666  SceneManager_GetActiveScene_m2964039490 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
extern "C"  int32_t Scene_get_buildIndex_m3735680091 (Scene_t1684909666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C"  void SceneManager_LoadScene_m87258056 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3771066388 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m2402264703 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, Object_t1021602117 * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m2330762974 (Il2CppObject * __this /* static, unused */, Object_t1021602117 * p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C"  GameObject_t1756533147 * GameObject_FindGameObjectWithTag_m829057129 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaddleScript::mouseMove()
extern "C"  void PaddleScript_mouseMove_m1455474548 (PaddleScript_t3839513181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaddleScript::RoboPlay()
extern "C"  void PaddleScript_RoboPlay_m356297570 (PaddleScript_t3839513181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C"  Rect_t3681755626  RectTransform_get_rect_m73954734 (RectTransform_t3349966182 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m1138015702 (Rect_t3681755626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m41137238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Clamp_m2354025655 (Il2CppObject * __this /* static, unused */, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m146923508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BallScript::.ctor()
extern "C"  void BallScript__ctor_m1144963787 (BallScript_t652658930 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallScript::Start()
extern "C"  void BallScript_Start_m1258677503 (BallScript_t652658930 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallScript_Start_m1258677503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = __this->get_p_2();
		Transform_t3275118058 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Vector3_op_Subtraction_m2407545601(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_paddleToBallVector_3(L_5);
		Rigidbody2D_t502193897 * L_6 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rigi_5(L_6);
		return;
	}
}
// System.Void BallScript::Update()
extern "C"  void BallScript_Update_m3655565148 (BallScript_t652658930 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallScript_Update_m3655565148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_launched_4();
		if (L_0)
		{
			goto IL_005d;
		}
	}
	{
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = __this->get_p_2();
		Transform_t3275118058 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = __this->get_paddleToBallVector_3();
		Vector3_t2243707580  L_6 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_1, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005d;
		}
	}
	{
		__this->set_launched_4((bool)1);
		Rigidbody2D_t502193897 * L_8 = __this->get_rigi_5();
		Vector2_t2243707579  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector2__ctor_m3067419446(&L_9, (5.0f), (8.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_8, L_9, /*hidden argument*/NULL);
	}

IL_005d:
	{
		return;
	}
}
// System.Void BallScript::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void BallScript_OnCollisionEnter2D_m1041575741 (BallScript_t652658930 * __this, Collision2D_t1539500754 * ___coll0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BallScript_OnCollisionEnter2D_m1041575741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_launched_4();
		if (!L_0)
		{
			goto IL_0090;
		}
	}
	{
		Collision2D_t1539500754 * L_1 = ___coll0;
		GameObject_t1756533147 * L_2 = Collision2D_get_gameObject_m4234358314(L_1, /*hidden argument*/NULL);
		String_t* L_3 = GameObject_get_tag_m1425941094(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_3, _stringLiteral3712348323, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		AudioSource_t1135106623 * L_5 = __this->get_steel_6();
		AudioSource_Play_m353744792(L_5, /*hidden argument*/NULL);
		BallScript_Tweaker_m1693544058(__this, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_003b:
	{
		Collision2D_t1539500754 * L_6 = ___coll0;
		GameObject_t1756533147 * L_7 = Collision2D_get_gameObject_m4234358314(L_6, /*hidden argument*/NULL);
		String_t* L_8 = GameObject_get_tag_m1425941094(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_8, _stringLiteral2348017801, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		AudioSource_t1135106623 * L_10 = __this->get_brick_7();
		AudioSource_Play_m353744792(L_10, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0065:
	{
		Collision2D_t1539500754 * L_11 = ___coll0;
		GameObject_t1756533147 * L_12 = Collision2D_get_gameObject_m4234358314(L_11, /*hidden argument*/NULL);
		String_t* L_13 = GameObject_get_tag_m1425941094(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_14 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_13, _stringLiteral1491189398, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0090;
		}
	}
	{
		AudioSource_t1135106623 * L_15 = __this->get_paddle_8();
		AudioSource_Play_m353744792(L_15, /*hidden argument*/NULL);
		BallScript_Tweaker_m1693544058(__this, /*hidden argument*/NULL);
	}

IL_0090:
	{
		return;
	}
}
// System.Void BallScript::Tweaker()
extern "C"  void BallScript_Tweaker_m1693544058 (BallScript_t652658930 * __this, const MethodInfo* method)
{
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		float L_0 = Random_Range_m2884721203(NULL /*static, unused*/, (0.0f), (0.2f), /*hidden argument*/NULL);
		float L_1 = Random_Range_m2884721203(NULL /*static, unused*/, (0.0f), (0.2f), /*hidden argument*/NULL);
		Vector2__ctor_m3067419446((&V_0), L_0, L_1, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_2 = __this->get_rigi_5();
		Rigidbody2D_t502193897 * L_3 = L_2;
		Vector2_t2243707579  L_4 = Rigidbody2D_get_velocity_m3310151195(L_3, /*hidden argument*/NULL);
		Vector2_t2243707579  L_5 = V_0;
		Vector2_t2243707579  L_6 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m3592751374(L_3, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void brickScript::.ctor()
extern "C"  void brickScript__ctor_m1749351129 (brickScript_t3740699742 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void brickScript::Start()
extern "C"  void brickScript_Start_m4165681209 (brickScript_t3740699742 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (brickScript_Start_m4165681209_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Component_get_tag_m357168014(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_0, _stringLiteral2348017801, /*hidden argument*/NULL);
		__this->set_breakable_6(L_1);
		bool L_2 = __this->get_breakable_6();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(brickScript_t3740699742_il2cpp_TypeInfo_var);
		int32_t L_3 = ((brickScript_t3740699742_StaticFields*)brickScript_t3740699742_il2cpp_TypeInfo_var->static_fields)->get_brickCount_7();
		((brickScript_t3740699742_StaticFields*)brickScript_t3740699742_il2cpp_TypeInfo_var->static_fields)->set_brickCount_7(((int32_t)((int32_t)L_3+(int32_t)1)));
	}

IL_002d:
	{
		__this->set_timesHit_5(0);
		SpriteU5BU5D_t3359083662* L_4 = __this->get_hitSprite_4();
		__this->set_maxHits_2(((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_4)->max_length))))+(int32_t)1)));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		LevelManager_t3355282079 * L_5 = Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisLevelManager_t3355282079_m1351033480_MethodInfo_var);
		__this->set_lvl_3(L_5);
		LevelManager_t3355282079 * L_6 = __this->get_lvl_3();
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void brickScript::Update()
extern "C"  void brickScript_Update_m2561336572 (brickScript_t3740699742 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void brickScript::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void brickScript_OnCollisionEnter2D_m1055283731 (brickScript_t3740699742 * __this, Collision2D_t1539500754 * ___coll0, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_breakable_6();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		brickScript_HandleHits_m2552652281(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void brickScript::HandleHits()
extern "C"  void brickScript_HandleHits_m2552652281 (brickScript_t3740699742 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (brickScript_HandleHits_m2552652281_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_timesHit_5();
		__this->set_timesHit_5(((int32_t)((int32_t)L_0+(int32_t)1)));
		int32_t L_1 = __this->get_timesHit_5();
		int32_t L_2 = __this->get_maxHits_2();
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(brickScript_t3740699742_il2cpp_TypeInfo_var);
		int32_t L_3 = ((brickScript_t3740699742_StaticFields*)brickScript_t3740699742_il2cpp_TypeInfo_var->static_fields)->get_brickCount_7();
		((brickScript_t3740699742_StaticFields*)brickScript_t3740699742_il2cpp_TypeInfo_var->static_fields)->set_brickCount_7(((int32_t)((int32_t)L_3-(int32_t)1)));
		LevelManager_t3355282079 * L_4 = __this->get_lvl_3();
		LevelManager_brickDestroyed_m1365395270(L_4, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_5 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		goto IL_004c;
	}

IL_0046:
	{
		brickScript_LoadSprites_m489191201(__this, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Void brickScript::LoadSprites()
extern "C"  void brickScript_LoadSprites_m489191201 (brickScript_t3740699742 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (brickScript_LoadSprites_m489191201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_timesHit_5();
		V_0 = ((int32_t)((int32_t)L_0-(int32_t)1));
		SpriteU5BU5D_t3359083662* L_1 = __this->get_hitSprite_4();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		Sprite_t309593783 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		SpriteRenderer_t1209076198 * L_6 = Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t1209076198_m2178781570_MethodInfo_var);
		SpriteU5BU5D_t3359083662* L_7 = __this->get_hitSprite_4();
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		Sprite_t309593783 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		SpriteRenderer_set_sprite_m617298623(L_6, L_10, /*hidden argument*/NULL);
	}

IL_002e:
	{
		return;
	}
}
// System.Void brickScript::completeLevel()
extern "C"  void brickScript_completeLevel_m1774790402 (brickScript_t3740699742 * __this, const MethodInfo* method)
{
	{
		LevelManager_t3355282079 * L_0 = __this->get_lvl_3();
		LevelManager_LoadNextLevel_m4205287453(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void brickScript::.cctor()
extern "C"  void brickScript__cctor_m4143069960 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void LevelManager::.ctor()
extern "C"  void LevelManager__ctor_m1225645824 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern "C"  void LevelManager_LoadLevel_m3771066388 (LevelManager_t3355282079 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_LoadLevel_m3771066388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m2596409543(NULL /*static, unused*/, _stringLiteral2889247667, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___name0;
		SceneManager_LoadScene_m1619949821(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::QuitRequest()
extern "C"  void LevelManager_QuitRequest_m3014183236 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_QuitRequest_m3014183236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral4098824534, /*hidden argument*/NULL);
		Application_Quit_m3885595876(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadNextLevel()
extern "C"  void LevelManager_LoadNextLevel_m4205287453 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	Scene_t1684909666  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Scene_t1684909666  L_0 = SceneManager_GetActiveScene_m2964039490(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Scene_get_buildIndex_m3735680091((&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, ((int32_t)((int32_t)L_1+(int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::Correct()
extern "C"  void LevelManager_Correct_m1128209918 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_Correct_m1128209918_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral4158107630, /*hidden argument*/NULL);
		LevelManager_LoadLevel_m3771066388(__this, _stringLiteral1414246213, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::brickDestroyed()
extern "C"  void LevelManager_brickDestroyed_m1365395270 (LevelManager_t3355282079 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LevelManager_brickDestroyed_m1365395270_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(brickScript_t3740699742_il2cpp_TypeInfo_var);
		int32_t L_0 = ((brickScript_t3740699742_StaticFields*)brickScript_t3740699742_il2cpp_TypeInfo_var->static_fields)->get_brickCount_7();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0011;
		}
	}
	{
		LevelManager_LoadNextLevel_m4205287453(__this, /*hidden argument*/NULL);
	}

IL_0011:
	{
		return;
	}
}
// System.Void LoseCollider::.ctor()
extern "C"  void LoseCollider__ctor_m1456583376 (LoseCollider_t1155462885 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoseCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void LoseCollider_OnTriggerEnter2D_m554453592 (LoseCollider_t1155462885 * __this, Collider2D_t646061738 * ___trigger0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoseCollider_OnTriggerEnter2D_m554453592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, _stringLiteral277505782, /*hidden argument*/NULL);
		LevelManager_t3355282079 * L_0 = __this->get_levelManager_2();
		LevelManager_LoadLevel_m3771066388(L_0, _stringLiteral1414246213, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LoseCollider::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void LoseCollider_OnCollisionEnter2D_m2634041086 (LoseCollider_t1155462885 * __this, Collision2D_t1539500754 * ___coll0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LoseCollider_OnCollisionEnter2D_m2634041086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour_print_m3437620292(NULL /*static, unused*/, _stringLiteral3223782982, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::.ctor()
extern "C"  void MusicPlayer__ctor_m3135785557 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::Awake()
extern "C"  void MusicPlayer_Awake_m2670478726 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MusicPlayer_Awake_m2670478726_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		MusicPlayer_t3223126890 * L_0 = ((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m2402264703(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		GameObject_t1756533147 * L_2 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		goto IL_0031;
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t3223126890_il2cpp_TypeInfo_var);
		((MusicPlayer_t3223126890_StaticFields*)MusicPlayer_t3223126890_il2cpp_TypeInfo_var->static_fields)->set_instance_2(__this);
		GameObject_t1756533147 * L_3 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m2330762974(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void MusicPlayer::Start()
extern "C"  void MusicPlayer_Start_m704446533 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::Update()
extern "C"  void MusicPlayer_Update_m56837000 (MusicPlayer_t3223126890 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::.cctor()
extern "C"  void MusicPlayer__cctor_m1372585940 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PaddleScript::.ctor()
extern "C"  void PaddleScript__ctor_m322828834 (PaddleScript_t3839513181 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PaddleScript::Start()
extern "C"  void PaddleScript_Start_m604359402 (PaddleScript_t3839513181 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PaddleScript_Start_m604359402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = GameObject_FindGameObjectWithTag_m829057129(NULL /*static, unused*/, _stringLiteral405904531, /*hidden argument*/NULL);
		__this->set_Ball_4(L_0);
		return;
	}
}
// System.Void PaddleScript::Update()
extern "C"  void PaddleScript_Update_m2708463265 (PaddleScript_t3839513181 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_autoPlay_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		PaddleScript_mouseMove_m1455474548(__this, /*hidden argument*/NULL);
		goto IL_001c;
	}

IL_0016:
	{
		PaddleScript_RoboPlay_m356297570(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void PaddleScript::RoboPlay()
extern "C"  void PaddleScript_RoboPlay_m356297570 (PaddleScript_t3839513181 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PaddleScript_RoboPlay_m356297570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RectTransform_t3349966182 * V_3 = NULL;
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Rect_t3681755626  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_y_2();
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_z_3();
		Vector3__ctor_m2638739322((&V_0), (0.0f), L_2, L_5, /*hidden argument*/NULL);
		Transform_t3275118058 * L_6 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		V_3 = ((RectTransform_t3349966182 *)CastclassSealed(L_6, RectTransform_t3349966182_il2cpp_TypeInfo_var));
		GameObject_t1756533147 * L_7 = __this->get_Ball_4();
		Transform_t3275118058 * L_8 = GameObject_get_transform_m909382139(L_7, /*hidden argument*/NULL);
		Vector3_t2243707580  L_9 = Transform_get_position_m1104419803(L_8, /*hidden argument*/NULL);
		V_4 = L_9;
		float L_10 = (&V_4)->get_x_1();
		RectTransform_t3349966182 * L_11 = V_3;
		Rect_t3681755626  L_12 = RectTransform_get_rect_m73954734(L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		float L_13 = Rect_get_width_m1138015702((&V_5), /*hidden argument*/NULL);
		int32_t L_14 = Screen_get_width_m41137238(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, L_10, ((float)((float)L_13/(float)(2.0f))), ((float)((float)(((float)((float)((int32_t)((int32_t)L_14/(int32_t)((int32_t)50))))))-(float)(1.06f))), /*hidden argument*/NULL);
		(&V_0)->set_x_1(L_15);
		Transform_t3275118058 * L_16 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = V_0;
		Transform_set_position_m2469242620(L_16, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PaddleScript::mouseMove()
extern "C"  void PaddleScript_mouseMove_m1455474548 (PaddleScript_t3839513181 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PaddleScript_mouseMove_m1455474548_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RectTransform_t3349966182 * V_3 = NULL;
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Rect_t3681755626  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Rect_t3681755626  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_y_2();
		Transform_t3275118058 * L_3 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_z_3();
		Vector3__ctor_m2638739322((&V_0), (0.0f), L_2, L_5, /*hidden argument*/NULL);
		Transform_t3275118058 * L_6 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		V_3 = ((RectTransform_t3349966182 *)CastclassSealed(L_6, RectTransform_t3349966182_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_7 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_7;
		float L_8 = (&V_4)->get_x_1();
		RectTransform_t3349966182 * L_9 = V_3;
		Rect_t3681755626  L_10 = RectTransform_get_rect_m73954734(L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		float L_11 = Rect_get_width_m1138015702((&V_5), /*hidden argument*/NULL);
		int32_t L_12 = Screen_get_width_m41137238(NULL /*static, unused*/, /*hidden argument*/NULL);
		RectTransform_t3349966182 * L_13 = V_3;
		Rect_t3681755626  L_14 = RectTransform_get_rect_m73954734(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = Rect_get_width_m1138015702((&V_6), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_16 = Mathf_Clamp_m2354025655(NULL /*static, unused*/, ((float)((float)L_8/(float)(50.0f))), ((float)((float)L_11/(float)(2.0f))), ((float)((float)(((float)((float)((int32_t)((int32_t)L_12/(int32_t)((int32_t)50))))))-(float)((float)((float)L_15/(float)(2.0f))))), /*hidden argument*/NULL);
		(&V_0)->set_x_1(L_16);
		Transform_t3275118058 * L_17 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_18 = V_0;
		Transform_set_position_m2469242620(L_17, L_18, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
