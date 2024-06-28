#include<stdio.h>
enum Bitstate
{
	Base = 0,			//00000000
	Poison = 1 << 0,	//00000001
	Sleep = 1 << 1,		//00000010
	Paralysis = 1 << 2, //00000100
	Burn = 1 << 3,		//00001000
	AtkUp = 1 << 4,		//00010000
	AtkDown = 1 << 5    //00100000
};
typedef unsigned int UINT;
void DisplyayStatus(UINT s);
void ChangeFlag(UINT* s);
void CleaFlag(UINT* s);
main()
{
	//ó‘Ô‚ðŠÇ—‚·‚é•Ï”MyState
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayeStatus(&MyState);
	ClearFlag(&MyState);
	DisplyayStatus(&MyState):

}
