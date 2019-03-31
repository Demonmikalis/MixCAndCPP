#include "AppleWrapper.h"
#include "apple.h"
 
#ifdef __cplusplus
extern "C" {
#endif
struct tagApple
{
	Apple apple;
};
struct tagApple *GetInstance(void)
{
	tagApple *ta = (tagApple*)malloc(sizeof(tagApple));
	return ta;
}
void ReleaseInstance(struct tagApple *ppInstance)
{
	free(ppInstance);
	//*ppInstance = 0;
	
}
void SetColor(struct tagApple *pApple, int color)
{
	pApple->apple.SetColor(color);
}
 
int GetColor(struct tagApple *pApple)
{
	return pApple->apple.GetColor();
}
#ifdef __cplusplus
};
#endif


