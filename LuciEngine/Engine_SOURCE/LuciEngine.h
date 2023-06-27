#pragma once
#include <string>
#include <Windows.h>
#include <assert.h>

#include <vector> // �迭
#include <list> //��ũ�帮��Ʈ 
#include <map> // 2��Ʈ��
#include <bitset> // ��Ʈ �迭 ���ϰ� ������ִ� ���̺귯��
#include <set> // �ؽ� ���̺�
#include <functional> // �Լ� ������

#include <cmath> //����
#include <algorithm> //���� �˰���
#include <limits> //�ε� �Ҽ��� ǥ�� �� �ݿø��� ���õ� Ŭ���� ���ø� numeric_limits �� �� ���� �������� �����մϴ�.
#include <memory> //�޸� ���õ� ���̺귯��
#include <filesystem> // ��������� ���ϰ� �����ִ� ���̺귯��
#include <wrl.h>

#include "CommonInclude.h"
#include "LEnums.h"
#include "LMath.h"
#include <random>

int GetRandomInt(int min, int max)
{
    if (min >= max) return min;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(min, max);
    int randomNumber = distrib(gen);
    return randomNumber;
}