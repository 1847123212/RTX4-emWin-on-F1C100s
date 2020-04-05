// ���ļ��ɺ���ҫ��ƣ���ʹ��Ȩ�ַ�Ȩ���������㣡
// ����ͨ��QQ��ϵ���ˣ�26750452��24Сʱ�����غ�
#ifndef __LIB_F1C100S_H__
#define __LIB_F1C100S_H__

#include <stdint.h>

// �������ԣ�F1C100s��[0x00000000-0x0000b5ff]�ռ���45.5kB��SRAM��
// ��[0x00010000-0x00019FFF]����������40kB��SRAM A������datashit��

// spiflash����ʱ��BROM���û���spl���ص�0x00000000��SRAM�ռ䡿��ַ��
// �ٰѶ�ջָ��SP����Ϊ0x00009FF4��Ȼ����ת��spl���롣

// spiflash����ʱ��CPU����SVCģʽ��IRQ��FIQ���رգ�

#ifdef __cplusplus
extern "C" {
#endif


/* types declared by <f1c100s-intc.c> */

typedef void (*IRQHandleTypeDef)(void);

uint8_t   f1c100s_intc_get_nirq(void);
void      f1c100s_intc_dispatch(uint8_t nIRQ);
void      f1c100s_intc_set_isr(uint8_t nIRQ, void (*handle)(void));
void      f1c100s_intc_enable_irq(uint8_t nIRQ);
void      f1c100s_intc_disable_irq(uint8_t nIRQ);
void      f1c100s_intc_unmask_irq(uint8_t nIRQ);
void      f1c100s_intc_mask_irq(uint8_t nIRQ);
void      f1c100s_intc_force_irq(uint8_t nIRQ);
void      f1c100s_intc_clear_pend(uint8_t nIRQ);
void      f1c100s_intc_init(void);

#ifdef __cplusplus
}
#endif

#endif /* __LIB_F1C100S_H__ */
