#pragma once
class cTimeLine_Zako7 : public cTimeLine
{
public:
	cTimeLine_Zako7();
	~cTimeLine_Zako7();

	// cTimeLine��(��) ���� ��ӵ�
	virtual void Init() override;
	virtual void Update() override;
	virtual void Render() override;
	virtual void RenderGlobal() override;
	virtual void Release() override;
};
