#pragma once
class cTimeLine_Zako2 : public cTimeLine
{
public:
	cTimeLine_Zako2();
	~cTimeLine_Zako2();

	// cTimeLine��(��) ���� ��ӵ�
	virtual void Init() override;
	virtual void Update() override;
	virtual void Render() override;
	virtual void RenderGlobal() override;
	virtual void Release() override;
};
