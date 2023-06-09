#include "LScene.h"
#include "LPlayer.h"
#include "LFood.h"
namespace lu
{
	Scene::Scene()
	{
	}
	Scene::~Scene()
	{

	}

	void Scene::Initialize()
	{
		// ���⼭ �ʱ� ���� �ʵ����͸� ��������� �Ѵ�.
		mGameObjects.push_back(new Player());
		//for (int i = 0; i < 10; i++)
		//	mGameObjects.push_back(new Food());
		for (GameObject* gameObj : mGameObjects)
		{
			gameObj->Initialize();

		}	
	}

	void Scene::Update()
	{
		for (GameObject* gameObj : mGameObjects)
		{
			gameObj->Update();
		}
	}

	void Scene::LateUpdate()
	{
	}
	void Scene::Render()
	{
		for (GameObject* gameObj : mGameObjects)
		{
			gameObj->Render();
		}
	}
}