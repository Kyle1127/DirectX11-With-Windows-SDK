#ifndef GEOMETRY_H_
#define GEOMETRY_H_

#include <Windows.h>
#include <DirectXMath.h>
#include <vector>


class Geometry
{
public:
	struct MeshData
	{
		std::vector<DirectX::XMFLOAT3> posVec;		// λ������
		std::vector<DirectX::XMFLOAT3> normalVec;	// ����������
		std::vector<DirectX::XMFLOAT2> texVec;		// ������������
		std::vector<WORD> indexVec;					// ��������
	};

	// ��������ģ�����ݣ�levels��slicesԽ�󣬾���Խ�ߡ�
	static MeshData CreateSphere(float radius = 1.0f, int levels = 20, int slices = 20);

	// ����������ģ������
	static MeshData CreateBox(float width = 2.0f, float height = 2.0f, float depth = 2.0f);

	// ����Բ����ģ�����ݣ�slicesԽ�󣬾���Խ�ߡ�
	static MeshData CreateCylinder(float radius = 1.0f, float height = 2.0f, int slices = 20);

	// ����һ������NDC��Ļ����
	static MeshData Create2DShow(float centerX = 0.0f, float centerY = 0.0f, float scaleX = 1.0f, float scaleY = 1.0f);
};



#endif