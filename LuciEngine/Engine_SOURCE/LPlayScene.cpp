#include "LPlayScene.h"
#include "LMeshRenderer.h"
#include "LResources.h"
#include "LCameraScript.h"
#include "LTransform.h"
namespace lu
{
	PlayScene::PlayScene()
	{
	}
	PlayScene::~PlayScene()
	{
	}
	void PlayScene::Initialize()
	{
		Scene::Initialize();
		GameObject* player = new GameObject();
		AddGameObject(eLayerType::Player, player);
		MeshRenderer* mr = player->AddComponent<MeshRenderer>();
		mr->SetMesh(Resources::Find<Mesh>(L"RectMesh"));
		mr->SetMaterial(Resources::Find<Material>(L"SpriteMaterial"));
		
		player->AddComponent<CameraScript>();

		Transform* tr = player->GetComponent<Transform>();
		tr->SetPos(Vector3(0.5f, 0.5f, 0.5f));
	}
	void PlayScene::Update()
	{
		Scene::Update();
	}
	void PlayScene::LateUpdate()
	{
		Scene::LateUpdate();
	}
	void PlayScene::Render()
	{
		Scene::Render();
	}
}