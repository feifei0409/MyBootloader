
/**************************** (C) COPYRIGHT 2019 ****************************
* 设计师:   Tigerots
* 创建时间: 2019.12.28
* 功能描述: 基于STM32F103xx(HAL库)的bootloader, 不同芯片的map方式详见iap.h
*       
*****************************************************************************
* ********************************修改历史记录********************************
* 修改时间: 
* 版本号:
* 修改内容:
*****************************************************************************/

#include "my_iap.h"
#include "rtthread.h"
#include "stm32f1xx_hal.h"

/**********************************函数描述***********************************
* 创建人:   侍任伟
* 创建时间: 2019.12.28
* 功能描述: IAP主函数
            1. 初始化片内外设
            2. 读取升级标志数据结构
            3. 转存用户代码到执行区
            4. 如果升级失败,可直接传输固件(待定)
* 入口参数: 
* 函数返回: 
*****************************************************************************/
int main(void)
{
    //调用iap线程初始化
    iap_thread_init();
    while (1)
    {
        rt_thread_mdelay(100);
    }
}

