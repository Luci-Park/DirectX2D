#pragma once
#include <windows.h>
#include <wingdi.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <assert.h>
#include <string>

#include <vector> // �迭
#include <list> //��ũ�帮��Ʈ 
#include <map> // 2��Ʈ��
#include <bitset> // ��Ʈ �迭 ���ϰ� ������ִ� ���̺귯��
#include <set> // �ؽ� ���̺�
#include <functional> // �Լ� ������

#include <cmath> //����
#include <numbers>
#include <algorithm> //���� �˰���
#include <limits> //�ε� �Ҽ��� ǥ�� �� �ݿø��� ���õ� Ŭ���� ���ø� numeric_limits �� �� ���� �������� �����մϴ�.
#include <memory> //�޸� ���õ� ���̺귯��
#include <filesystem> // ��������� ���ϰ� �����ִ� ���̺귯��
#include <wrl.h>
#include <random>

#include "CommonInclude.h"
#include "LEnums.h"
#include "LMath.h"


#pragma comment(lib, "Msimg32.lib")

int GetRandomInt(int min, int max)
{
	if (min >= max) return min;
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> distrib(min, max);
	int randomNumber = distrib(gen);
	return randomNumber;
}