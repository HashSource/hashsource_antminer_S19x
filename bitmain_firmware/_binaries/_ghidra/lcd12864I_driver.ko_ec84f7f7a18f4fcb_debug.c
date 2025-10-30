// Decompiled: lcd12864I_driver.ko_ec84f7f7a18f4fcb_debug


undefined4 bitmain_asic_close(void)

{
  printk("bitmain lcd closed!\n");
  return 0;
}




undefined4 bitmain_asic_open(void)

{
  printk("bitmain lcd opened!\n");
  return 0;
}




undefined4 bitmain_asic_ioctl(void)

{
  printk("bitmain lcd ioctl is not supported!\n");
  return 0;
}




void set_cs_direction(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_direction_addr & 0xfffeffff;
  }
  else {
    uVar1 = *gpio_direction_addr | 0x10000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_direction_addr = uVar1;
  return;
}




void set_sclk_direction(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_direction_addr & 0xffefffff;
  }
  else {
    uVar1 = *gpio_direction_addr | 0x100000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_direction_addr = uVar1;
  return;
}




void set_sid_direction(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_direction_addr & 0xfffdffff;
  }
  else {
    uVar1 = *gpio_direction_addr | 0x20000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_direction_addr = uVar1;
  return;
}




void set_reset_direction(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_direction_addr & 0xffdfffff;
  }
  else {
    uVar1 = *gpio_direction_addr | 0x200000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_direction_addr = uVar1;
  return;
}




void set_cs(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_value_addr & 0xfffeffff;
  }
  else {
    uVar1 = *gpio_value_addr | 0x10000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_value_addr = uVar1;
  return;
}




void set_sclk(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_value_addr & 0xffefffff;
  }
  else {
    uVar1 = *gpio_value_addr | 0x100000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_value_addr = uVar1;
  return;
}




void set_sid(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_value_addr & 0xfffdffff;
  }
  else {
    uVar1 = *gpio_value_addr | 0x20000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_value_addr = uVar1;
  return;
}




void set_reset(int param_1)

{
  uint uVar1;
  
  DataSynchronizationBarrier(0xf);
  if (param_1 == 0) {
    uVar1 = *gpio_value_addr & 0xffdfffff;
  }
  else {
    uVar1 = *gpio_value_addr | 0x200000;
  }
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_value_addr = uVar1;
  return;
}




void enable_gpios(void)

{
  uint uVar1;
  
  uVar1 = *gpio_enable_addr;
  DataSynchronizationBarrier(0xf);
  DataSynchronizationBarrier(0xe);
  arm_heavy_mb();
  *gpio_enable_addr = uVar1 | 0x330000;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SendByte(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    set_sclk(0);
    uVar1 = uVar2 & 0xff;
    uVar2 = uVar2 + 1;
    set_sid((uint)((param_1 << uVar1) << 0x18) >> 0x1f);
    (*_ioremap)(0x346dc);
    set_sclk(1);
    (*_ioremap)(0x346dc);
    set_sclk(0);
  } while (uVar2 != 8);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ReceiveByte(void)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  set_sid_direction(0);
  do {
    set_sclk(0);
    (*_ioremap)(0x346dc);
    set_sclk(1);
    (*_ioremap)(0x346dc);
    set_sclk(0);
    DataSynchronizationBarrier(0xf);
    bVar2 = (byte)((uint)(*gpio_value_addr << 6) >> 0x1f) | (byte)(uVar4 << (uVar3 & 0xff));
    uVar3 = uVar3 + 1;
    (*_ioremap)(0x346dc);
    uVar4 = (uint)bVar2;
  } while (uVar3 != 8);
  uVar3 = 0;
  uVar4 = 0;
  do {
    set_sclk(0);
    (*_ioremap)(0x346dc);
    set_sclk(1);
    (*_ioremap)(0x346dc);
    set_sclk(0);
    DataSynchronizationBarrier(0xf);
    uVar1 = uVar3 & 0xff;
    uVar3 = uVar3 + 1;
    uVar1 = uVar4 << uVar1 & 0xff;
    uVar4 = (uint)(*gpio_value_addr << 6) >> 0x1f | uVar1;
    (*_ioremap)(0x346dc);
  } while (uVar3 != 8);
  set_sid_direction(1);
  return (int)(char)bVar2 & 0xf0U | uVar1 >> 4;
}




void CheckBusy(void)

{
  uint uVar1;
  
  do {
    SendByte(0xfc);
    uVar1 = ReceiveByte();
  } while ((uVar1 & 0x80) != 0);
  return;
}




void SendCommad(uint param_1)

{
  set_cs(1);
  CheckBusy();
  SendByte(0xf8);
  SendByte(param_1 & 0xf0);
  SendByte((param_1 & 0xf) << 4);
  set_cs(0);
  return;
}




void SendData(uint param_1)

{
  set_cs(1);
  CheckBusy();
  SendByte(0xfa);
  SendByte(param_1 & 0xf0);
  SendByte((param_1 & 0xf) << 4);
  set_cs(0);
  return;
}




void bitmain_asic_write(undefined4 param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r1;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [4];
  undefined1 local_64 [64];
  int local_24;
  
  local_24 = __stack_chk_guard;
  memset(local_64,0x20,0x40);
  if (param_3 < 0x41) {
    uVar4 = *(uint *)(((uint)auStack_68 & 0xffffe000) + 8);
    bVar8 = CARRY4(param_2,param_3);
    uVar3 = param_2 + param_3;
    bVar9 = bVar8;
    if (!bVar8) {
      bVar9 = uVar4 < uVar3 || uVar3 - uVar4 < (uint)bVar8;
      uVar3 = uVar3 - (uVar4 + !bVar8);
    }
    if (!bVar9) {
      uVar4 = 0;
    }
    uVar2 = param_3;
    if (uVar4 == 0) {
      uVar4 = coproc_movefrom_Domain_Access_Control();
      uVar3 = uVar4 & 0xfffffff3 | 4;
      coproc_moveto_Domain_Access_Control(uVar3);
      InstructionSynchronizationBarrier(0xf);
      uVar10 = arm_copy_from_user(local_64,param_2,param_3,uVar3);
      uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
      coproc_moveto_Domain_Access_Control(uVar4);
      InstructionSynchronizationBarrier(0xf);
      uVar2 = (uint)uVar10;
    }
    if (uVar2 == 0) {
      puVar6 = local_64;
      iVar5 = 0;
      do {
        iVar7 = 0;
        SendCommad((&addr_tab)[iVar5 * 8],uVar3);
        do {
          puVar1 = puVar6 + iVar7;
          iVar7 = iVar7 + 1;
          SendData(*puVar1);
        } while (iVar7 != 0x10);
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 0x10;
        uVar3 = extraout_r1;
      } while (iVar5 != 4);
      goto LAB_00010848;
    }
  }
  param_3 = 0xfffffff2;
LAB_00010848:
  if (local_24 != __stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_3);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lcd_hw_init(void)

{
  int iVar1;
  
  iVar1 = 0x65;
  enable_gpios();
  set_cs_direction(1);
  set_cs(0);
  set_sclk_direction(1);
  set_sclk(0);
  set_sid_direction(1);
  set_sid(0);
  set_reset_direction(1);
  set_reset(0);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0x65;
  set_reset(1);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0xb;
  SendCommad(0x30);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0xb;
  printk(&DAT_00010eee);
  SendCommad(6);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0xb;
  printk(&DAT_00010f03);
  SendCommad(0xf);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0xb;
  printk(&DAT_00010f17);
  SendCommad(1);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0xb;
  printk(&DAT_00010f2a);
  SendCommad(2);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0xb;
  printk(&DAT_00010f3c);
  SendCommad(0x80);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0x65;
  printk(&DAT_00010f51);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void lcd_display_init(void)

{
  int iVar1;
  
  iVar1 = 0xb;
  SendCommad(0x30);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0xb;
  printk(&DAT_00010eee);
  SendCommad(0x30);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0xb;
  printk(&DAT_00010eee);
  SendCommad(0xc);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0xb;
  printk(&DAT_00010f17);
  SendCommad(1);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  iVar1 = 0x65;
  printk(&DAT_00010f2a);
  while (iVar1 = iVar1 + -1, iVar1 != 0) {
    (*_ioremap)(0xccccb60);
  }
  return;
}




void hanzi_Disp(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_3 + -1);
  SendCommad((&addr_tab)[param_2 + param_1 * 8]);
  while( true ) {
    pcVar1 = pcVar1 + 1;
    if (*pcVar1 == '\0') break;
    SendData();
  }
  return;
}




void Lcd_Fill(undefined4 param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = -0x78;
  cVar2 = -0x80;
  do {
    cVar1 = -0x80;
    cVar3 = cVar2;
    do {
      do {
        SendCommad(0x36);
        SendCommad(cVar1);
        cVar4 = cVar3 + '\x01';
        SendCommad(cVar3);
        SendData(param_1);
        SendData(param_1);
        SendCommad(0x30);
        cVar3 = cVar4;
      } while (cVar5 != cVar4);
      cVar1 = cVar1 + '\x01';
      cVar3 = cVar2;
    } while (cVar1 != -0x60);
    cVar2 = cVar2 + '\b';
    cVar5 = cVar5 + '\b';
  } while (cVar2 != -0x70);
  return;
}




undefined4 lcd_init(void)

{
  int iVar1;
  undefined4 uVar2;
  
  gpio_direction_addr = ioremap(0xe000a244,1);
  gpio_value_addr = ioremap(0xe000a044,1);
  gpio_enable_addr = ioremap(0xe000a248,1);
  lcd_hw_init();
  iVar1 = misc_register(bitmain_lcd);
  if (iVar1 == 0) {
    printk(&DAT_00010f94,"bitmain-lcd");
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
    printk(&DAT_00010f73,"bitmain-lcd");
  }
  return uVar2;
}




void cleanup_module(void)

{
  printk(&DAT_00010fb6);
  return;
}



