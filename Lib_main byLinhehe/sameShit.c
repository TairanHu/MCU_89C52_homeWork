#include "..\sameShit.h"

void Delay_us(uint us)
{
	for(;us>0;us--)
		_nop_();
		_nop_();
}
/**************************************
延时5微秒(STC90C52RC@12M)
不同的工作环境,需要调整此函数，注意时钟过快时需要修改
当改用1T的MCU时,请调整此延时函数
**************************************/
void Delay5us()
{
    _nop_();_nop_();_nop_();_nop_();
    _nop_();_nop_();_nop_();_nop_();
	_nop_();_nop_();_nop_();_nop_();
}
/**************************************
延时5毫秒(STC90C52RC@12M)
不同的工作环境,需要调整此函数
当改用1T的MCU时,请调整此延时函数
**************************************/
void Delay5ms()
{
    uint n = 560;

    while (n--);
}

void Delay(uint s)
{
	uint i;
	for(;s>0; s--){
		for(i=0;i<1000;i++){
		_nop_();
		_nop_();
		}
	}
}