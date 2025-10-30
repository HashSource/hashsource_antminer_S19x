// Decompiled: cv183x_base.ko_be9bec653d3c9f6b_debug


undefined8 FUN_00100028(void)

{
  _mcount();
  return 0;
}




undefined8 FUN_00100044(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  _mcount();
  pcVar2 = *(code **)(*(long *)(param_1 + 0x28) + 0x48);
  if (pcVar2 == (code *)0x0) {
    uVar1 = 0xfffffffffffffdfd;
  }
  else {
    uVar1 = (*pcVar2)(param_1,param_2,param_3);
  }
  return uVar1;
}




undefined8 FUN_00100048(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  
  _mcount();
  pcVar2 = *(code **)(*(long *)(param_1 + 0x28) + 0x48);
  if (pcVar2 == (code *)0x0) {
    uVar1 = 0xfffffffffffffdfd;
  }
  else {
    uVar1 = (*pcVar2)(param_1,param_2,param_3);
  }
  return uVar1;
}




undefined8 vip_sys_register_cmm_cb(ulong param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  _mcount();
  if ((param_2 == 0 || param_3 == 0) || 1 < param_1) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar1 = &DAT_00104180;
    if (param_1 != 0) {
      puVar1 = &DAT_00104198;
    }
    *puVar1 = (int)param_1;
    *(long *)(puVar1 + 2) = param_2;
    *(long *)(puVar1 + 4) = param_3;
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 vip_sys_cmm_cb_i2c(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _mcount();
  if ((DAT_00104180 == 0) && (DAT_00104190 != (code *)0x0)) {
    uVar1 = (*DAT_00104190)(DAT_00104188,param_1,param_2);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}




undefined8 vip_sys_cmm_cb_ssp(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _mcount();
  if ((DAT_00104198 == 1) && (DAT_001041a8 != (code *)0x0)) {
    uVar1 = (*DAT_001041a8)(DAT_001041a0,param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}




undefined8 vip_sys_register_cif_cb(long param_1,long param_2)

{
  undefined8 uVar1;
  
  _mcount();
  if (param_1 == 0 || param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    DAT_001041b0 = param_1;
    DAT_001041b8 = param_2;
  }
  return uVar1;
}




undefined8 vip_sys_cif_cb(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _mcount();
  if (DAT_001041b8 == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (*DAT_001041b8)(DAT_001041b0,param_1,param_2);
  }
  return uVar1;
}




long FUN_00100288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  _mcount();
  iVar1 = tee_cv_efuse_read(0,0x1000,param_3);
  return (long)iVar1;
}




long FUN_001002c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  _mcount();
  local_c = 0xdeafbeef;
  iVar1 = kstrtoull(param_3,0,&local_8);
  if (-1 < iVar1) {
    uVar2 = tee_cv_efuse_read(local_8,4,&local_c);
    printk(&DAT_00102c30,CONCAT44(uStack_4,local_8),local_c,uVar2);
    return param_4;
  }
  printk(&DAT_00102c18,iVar1);
  return (long)iVar1;
}




long FUN_00100368(undefined8 param_1,undefined8 param_2,char *param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  _mcount();
  local_8 = 0;
  local_4 = 0;
  iVar1 = sscanf(param_3,"0x%x=0x%x",&local_8);
  lVar2 = -0xc;
  if (iVar1 == 2) {
    printk(&DAT_00102c68,local_8,local_4);
    iVar1 = tee_cv_efuse_write(local_8,local_4);
    lVar2 = (long)iVar1;
    if (-1 < iVar1) {
      lVar2 = param_4;
    }
  }
  return lVar2;
}




long FUN_001003f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  _mcount();
  iVar1 = scnprintf(param_3,0x1000,&DAT_00102c90,"PROG_SHOW");
  return (long)iVar1;
}




undefined4 cvi_base_read_chip_id(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  _mcount();
  DataSynchronizationBarrier(3,1,0);
  uVar1 = *(uint *)(DAT_001041c0 + 0x8c) & 0xffff;
  if ((DAT_00103d92 >> 2 & 1) != 0) {
    __dynamic_pr_debug(&PTR_s_cv183x_base_00103d70,"chip_id=0x%x\n",uVar1);
  }
  uVar1 = uVar1 - 0x1822;
  uVar2 = 2;
  if (uVar1 < 0x17) {
    uVar2 = *(undefined4 *)(&DAT_00102298 + (ulong)uVar1 * 4);
  }
  return uVar2;
}




char cvi_base_read_chip_version(void)

{
  int iVar1;
  
  _mcount();
  iVar1 = *DAT_001041c0;
  DataSynchronizationBarrier(3,1,0);
  if ((DAT_00103dba >> 2 & 1) == 0) {
    return (iVar1 == 0x18802001) + '\x01';
  }
  __dynamic_pr_debug(&PTR_s_cv183x_base_00103d98,"chip_version=0x%x\n",iVar1);
  return (iVar1 == 0x18802001) + '\x01';
}




int FUN_00100570(long param_1)

{
  ushort uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  _mcount();
  if ((DAT_00103de2 >> 2 & 1) != 0) {
    __dynamic_pr_debug(&PTR_s_cv183x_base_00103dc0,"base_probe start\n");
  }
  plVar3 = (long *)devm_kmalloc(param_1 + 0x10,0x68,0x24080c0);
  if (plVar3 != (long *)0x0) {
    lVar4 = kmalloc_order_trace(0xa0000,0x24080c0,8);
    plVar3[0xb] = lVar4;
    if (lVar4 != 0) {
      DAT_001041c8 = proc_mkdir("cvitek",0);
      iVar2 = vb_proc_init(DAT_001041c8,plVar3[0xb]);
      if (iVar2 < 0) {
        printk(&DAT_00102ce0);
      }
      iVar2 = log_proc_init(DAT_001041c8,plVar3[0xb]);
      if (iVar2 < 0) {
        printk(&DAT_00102cf8);
      }
      iVar2 = sys_proc_init(DAT_001041c8,plVar3[0xb]);
      if (iVar2 < 0) {
        printk(&DAT_00102d10);
      }
      plVar3[2] = (long)"cvi-base";
      *(undefined4 *)(plVar3 + 1) = 0xff;
      *plVar3 = param_1 + 0x10;
      plVar3[3] = (long)&PTR___this_module_001022f8;
      iVar2 = misc_register(plVar3 + 1);
      if ((iVar2 != 0) && (dev_err(*plVar3,"cvi_base: failed to register misc device.\n"), iVar2 < 0)) {
        printk(&DAT_00102d68);
        return iVar2;
      }
      uVar1 = DAT_00103e0a;
      *(long **)(param_1 + 200) = plVar3;
      if ((uVar1 >> 2 & 1) == 0) {
        return 0;
      }
      __dynamic_pr_debug(&PTR_s_cv183x_base_00103de8,"%s DONE\n","base_probe");
      return 0;
    }
  }
  return -0xc;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00100748(long param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  _mcount();
  iVar6 = (int)param_2[1] - (int)*param_2;
  uVar4 = *(ulong *)(*(long *)(param_1 + 0x100) + 0x50);
  if ((uint)(iVar6 + (int)param_2[0x13] * 0x1000) < 0xa0001) {
    lVar5 = *param_2 - uVar4;
    for (; iVar6 != 0; iVar6 = iVar6 + -0x1000) {
      while( true ) {
        lVar3 = uVar4 + lVar5;
        if ((uVar4 >> 0x26 & 1) == 0) {
          iVar1 = remap_pfn_range(param_2,lVar3,uVar4 - _kimage_voffset >> 0xc,0x1000,param_2[9]);
        }
        else {
          iVar1 = remap_pfn_range(param_2,lVar3,(uVar4 & 0x3fffffffff) + _memstart_addr >> 0xc,0x1000,param_2[9]);
        }
        if (iVar1 != 0) {
          return 0xfffffff5;
        }
        if ((DAT_00103e32 >> 2 & 1) == 0) break;
        if ((uVar4 & 0x4000000000) == 0) {
          lVar3 = uVar4 - _kimage_voffset;
        }
        else {
          lVar3 = (uVar4 & 0x3fffffffff) + _memstart_addr;
        }
        __dynamic_pr_debug(&PTR_s_cv183x_base_00103e10,"mmap vir(%p) phys(%#llx)\n",uVar4,lVar3);
        uVar4 = uVar4 + 0x1000;
        iVar6 = iVar6 + -0x1000;
        if (iVar6 == 0) goto LAB_0010086c;
      }
      uVar4 = uVar4 + 0x1000;
    }
LAB_0010086c:
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}




undefined8 FUN_001008c8(undefined8 param_1,int param_2,ulong param_3)

{
  long lVar1;
  ulong local_8;
  
  _mcount();
  if (param_2 == -0x7ffb8cff) {
    local_8 = 0;
    local_8 = cvi_base_read_chip_id();
  }
  else {
    if (param_2 != -0x7ffb8cfe) {
      printk(&DAT_00102db8);
      return 0xffffffffffffffe7;
    }
    local_8 = 0;
    local_8 = cvi_base_read_chip_version();
  }
  local_8 = local_8 & 0xffffffff;
  lVar1 = sp_el0;
  if ((param_3 < 0xfffffffffffffffc && param_3 + 4 <= *(ulong *)(lVar1 + 8)) &&
     (lVar1 = __arch_copy_to_user(param_3,&local_8,4), lVar1 == 0)) {
    return 0;
  }
  return 0xfffffffffffffff2;
}




undefined8 FUN_00100990(long param_1)

{
  long lVar1;
  
  _mcount();
  lVar1 = *(long *)(param_1 + 200);
  vb_proc_remove(DAT_001041c8);
  log_proc_remove(DAT_001041c8);
  sys_proc_remove(DAT_001041c8);
  proc_remove(DAT_001041c8);
  DAT_001041c8 = 0;
  kfree(*(undefined8 *)(lVar1 + 0x58));
  *(undefined8 *)(lVar1 + 0x58) = 0;
  misc_deregister(lVar1 + 8);
  *(undefined8 *)(param_1 + 200) = 0;
  if ((DAT_00103e5a >> 2 & 1) == 0) {
    return 0;
  }
  __dynamic_pr_debug(&PTR_s_cv183x_base_00103e38,"%s DONE\n","base_remove");
  return 0;
}




undefined8 FUN_00100a60(void)

{
  _mcount();
  return 0;
}




uint vip_get_isp_clk(void)

{
  uint uVar1;
  
  _mcount();
  uVar1 = *DAT_001041d8;
  DataSynchronizationBarrier(3,1,0);
  return (uVar1 >> 0x12 & 1) << 0x12 | (uVar1 >> 0x13 & 1) << 0x13 | (uVar1 >> 0x14 & 1) << 0x14 |
         (uVar1 >> 0x15 & 1) << 0x15;
}




void vip_set_isp_clk(ulong param_1)

{
  param_1 = param_1 & 0xffffffff;
  _mcount();
  DataSynchronizationBarrier(3,1,0);
  DataSynchronizationBarrier(3,2,0);
  *DAT_001041d8 =
       *DAT_001041d8 & 0xffc00000 |
       *DAT_001041d8 & 0x3ffff | ((uint)(param_1 >> 0x12) & 1) << 0x12 | ((uint)(param_1 >> 0x13) & 1) << 0x13 |
       ((uint)(param_1 >> 0x14) & 1) << 0x14 | ((uint)(param_1 >> 0x15) & 1) << 0x15;
  return;
}




undefined4 vip_get_clk_lp(void)

{
  _mcount();
  DataSynchronizationBarrier(3,1,0);
  return *(undefined4 *)(DAT_001041d8 + 0x14);
}




void vip_set_clk_lp(undefined4 param_1)

{
  _mcount();
  DataSynchronizationBarrier(3,2,0);
  *(undefined4 *)(DAT_001041d8 + 0x14) = param_1;
  return;
}




uint vip_get_reset(void)

{
  _mcount();
  DataSynchronizationBarrier(3,1,0);
  DataSynchronizationBarrier(3,1,0);
  return (DAT_001041d8[1] & 3) << 0xc | *DAT_001041d8 & 0xcfff;
}




void vip_set_reset(uint param_1)

{
  _mcount();
  DataSynchronizationBarrier(3,1,0);
  DataSynchronizationBarrier(3,2,0);
  *DAT_001041d8 = *DAT_001041d8 & 0xffff0000 | param_1 & 0xcfff;
  DataSynchronizationBarrier(3,2,0);
  DAT_001041d8[1] = param_1 >> 0xc & 3;
  return;
}




undefined4 vip_get_intr_status(void)

{
  _mcount();
  DataSynchronizationBarrier(3,1,0);
  return *(undefined4 *)(DAT_001041d8 + 8);
}




undefined4 vip_get_intr_mask(void)

{
  _mcount();
  DataSynchronizationBarrier(3,1,0);
  return *(undefined4 *)(DAT_001041d8 + 0xc);
}




void vip_set_intr_mask(undefined4 param_1)

{
  _mcount();
  DataSynchronizationBarrier(3,2,0);
  *(undefined4 *)(DAT_001041d8 + 0xc) = param_1;
  return;
}




void vip_sys_reg_read(void)

{
  _mcount();
  DataSynchronizationBarrier(3,1,0);
  return;
}




void vip_set_base_addr(undefined8 param_1)

{
  _mcount();
  DAT_001041d8 = param_1;
  __raw_spin_lock_init(&DAT_001041e0,"&(&lock)->rlock");
  return;
}




void vip_toggle_reset(uint param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  _mcount();
  uVar2 = _raw_spin_lock_irqsave(&DAT_001041e0);
  uVar1 = vip_get_reset();
  vip_set_reset(param_1 | uVar1);
  __const_udelay(0x14f8c);
  vip_set_reset(uVar1 & (param_1 ^ 0xffffffff));
  _raw_spin_unlock_irqrestore(&DAT_001041e0,uVar2);
  return;
}




void vip_isp_clk_reset(void)

{
  uint *puVar1;
  undefined8 uVar2;
  
  _mcount();
  puVar1 = (uint *)__ioremap(0x3002030,4,0xe8000000000707);
  uVar2 = _raw_spin_lock_irqsave(&DAT_001041e0);
  vip_set_reset(0x3003);
  vip_set_isp_clk(0xffffffff);
  vip_set_isp_clk(0);
  vip_set_isp_clk(0x80000);
  vip_set_reset(0x3002);
  vip_set_isp_clk(0);
  vip_set_isp_clk(0x40000);
  vip_set_reset(0x3000);
  vip_set_isp_clk(0);
  vip_set_isp_clk(0x300000);
  vip_set_reset(0);
  vip_set_isp_clk(0);
  vip_set_isp_clk(0xffffffff);
  DataSynchronizationBarrier(3,1,0);
  DataSynchronizationBarrier(3,2,0);
  *puVar1 = *puVar1 & 0xfc1fffff;
  _raw_spin_unlock_irqrestore(&DAT_001041e0,uVar2);
  __iounmap(puVar1);
  return;
}




void vip_sys_reg_write_mask(long param_1,undefined4 param_2,undefined4 param_3)

{
  _mcount();
  _reg_write_mask(param_1 + DAT_001041d8,param_2,param_3);
  return;
}




void vip_sys_set_offline(ulong param_1,char param_2)

{
  uint uVar1;
  long lVar2;
  
  _mcount();
  lVar2 = 1L << (param_1 & 0x3f);
  uVar1 = (uint)lVar2;
  if (param_2 == '\0') {
    uVar1 = ~uVar1;
  }
  _reg_write_mask(DAT_001041d8 + 0x10,lVar2,uVar1);
  return;
}




void _reg_write_mask(uint *param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  
  _mcount();
  uVar1 = _raw_spin_lock_irqsave(&DAT_00103d58);
  DataSynchronizationBarrier(3,2,0);
  *param_1 = (param_3 ^ *param_1) & param_2 ^ *param_1;
  _raw_spin_unlock_irqrestore(&DAT_00103d58,uVar1);
  return;
}




void FUN_00101070(undefined8 param_1,undefined8 param_2)

{
  _mcount();
  single_open(param_2,FUN_00101590,0);
  return;
}




void FUN_001010b0(undefined8 param_1)

{
  ulong *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined4 local_8;
  
  _mcount();
  lVar4 = DAT_001041f8;
  seq_printf(param_1,"\nModule: [VB], Build Time[%s]\n","#1 SMP PREEMPT Wed May 12 01:18:51 CST 2021");
  plVar5 = (long *)(lVar4 + 0x18);
  seq_puts(param_1,
           "-----VB PUB CONFIG-----------------------------------------------------------------------------------------------------------------\n"
          );
  seq_printf(param_1,"%10s(%3d)\n","MaxPoolCnt",0x200);
  seq_puts(param_1,
           "\n-----COMMON POOL CONFIG------------------------------------------------------------------------------------------------------------\n"
          );
  iVar8 = 0;
  do {
    while (*plVar5 == 0) {
      iVar8 = iVar8 + 1;
      plVar5 = plVar5 + 0x11;
      if (iVar8 == 0x200) goto LAB_00101180;
    }
    iVar2 = iVar8 + 1;
    seq_printf(param_1,"%10s(%3d)\t%10s(%12d)\t%10s(%3d)\n","PoolId",iVar8,&DAT_001030a0,(int)plVar5[5],"Count",
               *(undefined4 *)((long)plVar5 + 0x2c));
    plVar5 = plVar5 + 0x11;
    iVar8 = iVar2;
  } while (iVar2 != 0x200);
LAB_00101180:
  lVar7 = lVar4 + 0x78;
  seq_puts(param_1,
           "\n-----------------------------------------------------------------------------------------------------------------------------------\n"
          );
  local_9c = 0x11010;
  do {
    while (*(long *)(lVar7 + -0x60) == 0) {
      lVar7 = lVar7 + 0x88;
      local_9c = local_9c + 0x400;
      if (lVar7 == lVar4 + 0x11078) {
        return;
      }
    }
    seq_printf(param_1,"%-10s: %s\n","PoolName",lVar7);
    seq_printf(param_1,"%-10s: %d\n","PoolId",*(undefined4 *)(lVar7 + -0x68));
    seq_printf(param_1,"%-10s: 0x%llx\n","PhysAddr",*(undefined8 *)(lVar7 + -0x60));
    seq_printf(param_1,"%-10s: 0x%lx\n","VirtAddr",*(undefined8 *)(lVar7 + -0x58));
    seq_printf(param_1,"%-10s: %d\n","IsComm",*(undefined1 *)(lVar7 + -0xc));
    seq_printf(param_1,"%-10s: %d\n","Owner",(long)*(short *)(lVar7 + -100));
    seq_printf(param_1,"%-10s: %d\n","BlkSz",*(undefined4 *)(lVar7 + -0x38));
    seq_printf(param_1,"%-10s: %d\n","BlkCnt",*(undefined4 *)(lVar7 + -0x34));
    seq_printf(param_1,"%-10s: %d\n",&DAT_001031e8,*(undefined4 *)(lVar7 + -8));
    seq_printf(param_1,"%-10s: %d\n","MinFree",*(undefined4 *)(lVar7 + -4));
    seq_puts(param_1,&DAT_001031f8);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    uStack_10 = 0;
    local_8 = 0;
    seq_puts(param_1,
             "BLK\tBASE\tVB\tSYS\tRGN\tCHNL\tVDEC\tVPSS\tVENC\tH264E\tJPEGE\tMPEG4E\tH265E\tJPEGD\tVO\tVI\tDIS\n");
    seq_puts(param_1,"RC\tAIO\tAI\tAO\tAENC\tADEC\tAUD\tVPU\tISP\tIVE\tUSER\tPROC\tLOG\tH264D\tGDC\tPHOTO\tFB\n");
    if (*(int *)(lVar7 + -0x34) != 0) {
      local_98 = 0;
      local_94 = local_9c;
      do {
        uVar9 = 0;
        seq_printf(param_1,"%s%d\t",&DAT_001032b8,local_98);
        puVar1 = (ulong *)(DAT_001041f8 + (ulong)local_94);
        do {
          while (iVar8 = (int)uVar9, (1L << (uVar9 & 0x3f) & *puVar1) == 0) {
            seq_puts(param_1,&DAT_001032d0);
            if (iVar8 != 0x20 && iVar8 != 0xf) goto LAB_00101358;
LAB_00101398:
            uVar9 = uVar9 + 1;
            seq_puts(param_1,&DAT_001031f8);
            if (uVar9 == 0x21) goto LAB_001013ac;
          }
          seq_puts(param_1,&DAT_001032c8);
          *(int *)((long)&local_88 + uVar9 * 4) = *(int *)((long)&local_88 + uVar9 * 4) + 1;
          if (iVar8 == 0x20 || iVar8 == 0xf) goto LAB_00101398;
LAB_00101358:
          uVar9 = uVar9 + 1;
        } while (uVar9 != 0x21);
LAB_001013ac:
        local_98 = local_98 + 1;
        local_94 = local_94 + 8;
      } while (local_98 < *(uint *)(lVar7 + -0x34));
    }
    puVar6 = (undefined4 *)((long)&local_88 + 4);
    iVar8 = 0;
    seq_puts(param_1,&DAT_001032a8);
    seq_printf(param_1,&DAT_001032b0,local_88 & 0xffffffff);
    while (iVar8 = iVar8 + 1, iVar8 != 0x21) {
      while( true ) {
        uVar3 = *puVar6;
        puVar6 = puVar6 + 1;
        seq_printf(param_1,&DAT_001032b0,uVar3);
        if (iVar8 != 0x20 && iVar8 != 0xf) break;
        iVar8 = iVar8 + 1;
        seq_puts(param_1,&DAT_001031f8);
        if (iVar8 == 0x21) goto LAB_0010143c;
      }
    }
LAB_0010143c:
    lVar7 = lVar7 + 0x88;
    seq_puts(param_1,
             "\n-----------------------------------------------------------------------------------------------------------------------------------\n"
            );
    local_9c = local_9c + 0x400;
    if (lVar7 == lVar4 + 0x11078) {
      return;
    }
  } while( true );
}




undefined8 FUN_00101590(undefined8 param_1)

{
  _mcount();
  FUN_001010b0(param_1);
  return 0;
}




undefined8 vb_proc_init(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _mcount();
  lVar1 = proc_create_data(&DAT_001032d8,0x1a4,param_1,&PTR___this_module_001025e0,0);
  if (lVar1 == 0) {
    printk(&DAT_001032e0);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  DAT_001041f8 = param_2;
  return uVar2;
}




undefined8 vb_proc_remove(undefined8 param_1)

{
  _mcount();
  remove_proc_entry(&DAT_001032d8,param_1);
  DAT_001041f8 = 0;
  return 0;
}




void FUN_00101690(undefined8 param_1,undefined8 param_2)

{
  _mcount();
  single_open(param_2,FUN_001016d0,0);
  return;
}




undefined8 FUN_001016d0(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  
  _mcount();
  lVar1 = DAT_00104200;
  seq_puts(param_1,
           "-----CURRENT LOG LEVEL-------------------------------------------------------------------------------------------------------------\n"
          );
  ppuVar4 = &PTR_DAT_001026d0;
  puVar2 = &DAT_00103300;
  puVar3 = (undefined4 *)(lVar1 + 0x91010);
  while( true ) {
    ppuVar4 = ppuVar4 + 1;
    seq_printf(param_1,"%-10s(%2d)\n",puVar2,*puVar3);
    if (ppuVar4 == &PTR_DAT_001027d8) break;
    puVar2 = *ppuVar4;
    puVar3 = puVar3 + 1;
  }
  seq_puts(param_1,
           "\n-----------------------------------------------------------------------------------------------------------------------------------\n"
          );
  return 0;
}




ulong FUN_00101798(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  ulong __n;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined4 local_44;
  char local_40 [64];
  
  _mcount();
  local_40[0] = '\0';
  local_40[1] = '\0';
  local_40[2] = '\0';
  local_40[3] = '\0';
  local_40[4] = '\0';
  local_40[5] = '\0';
  local_40[6] = '\0';
  local_40[7] = '\0';
  local_40[8] = '\0';
  local_40[9] = '\0';
  local_40[10] = '\0';
  local_40[0xb] = '\0';
  local_40[0xc] = '\0';
  local_40[0xd] = '\0';
  local_40[0xe] = '\0';
  local_40[0xf] = '\0';
  local_40[0x10] = '\0';
  local_40[0x11] = '\0';
  local_40[0x12] = '\0';
  local_40[0x13] = '\0';
  local_40[0x14] = '\0';
  local_40[0x15] = '\0';
  local_40[0x16] = '\0';
  local_40[0x17] = '\0';
  local_40[0x18] = '\0';
  local_40[0x19] = '\0';
  local_40[0x1a] = '\0';
  local_40[0x1b] = '\0';
  local_40[0x1c] = '\0';
  local_40[0x1d] = '\0';
  local_40[0x1e] = '\0';
  local_40[0x1f] = '\0';
  if (param_2 == 0 || 0x1f < param_3) {
    printk(&DAT_00103428);
    param_3 = 0xffffffffffffffea;
  }
  else {
    lVar6 = sp_el0;
    if (CARRY8(param_2,param_3) || *(ulong *)(lVar6 + 8) < param_2 + param_3) {
      __n = param_3;
      if (param_3 != 0) {
LAB_00101908:
        memset(local_40 + (param_3 - __n),0,__n);
        printk(&DAT_00103440);
        return 0xfffffffffffffff2;
      }
    }
    else {
      __n = __arch_copy_from_user(local_40,param_2,param_3);
      if (__n != 0) goto LAB_00101908;
    }
    lVar6 = DAT_00104200;
    puVar7 = &DAT_00103458;
    local_40[0x20] = '\0';
    local_40[0x21] = '\0';
    local_40[0x22] = '\0';
    local_40[0x23] = '\0';
    local_40[0x24] = '\0';
    local_40[0x25] = '\0';
    local_40[0x26] = '\0';
    local_40[0x27] = '\0';
    local_40[0x28] = '\0';
    local_40[0x29] = '\0';
    local_40[0x2a] = '\0';
    local_40[0x2b] = '\0';
    local_40[0x2c] = '\0';
    local_40[0x2d] = '\0';
    local_40[0x2e] = '\0';
    local_40[0x2f] = '\0';
    local_40[0x30] = '\0';
    local_40[0x31] = '\0';
    local_40[0x32] = '\0';
    local_40[0x33] = '\0';
    local_40[0x34] = '\0';
    local_40[0x35] = '\0';
    local_40[0x36] = '\0';
    local_40[0x37] = '\0';
    local_40[0x38] = '\0';
    local_40[0x39] = '\0';
    local_40[0x3a] = '\0';
    local_40[0x3b] = '\0';
    local_40[0x3c] = '\0';
    local_40[0x3d] = '\0';
    local_40[0x3e] = '\0';
    local_40[0x3f] = '\0';
    snprintf(local_40 + 0x20,0x20,"%s=",&DAT_00103458);
    sVar3 = strlen(local_40 + 0x20);
    puVar4 = (undefined4 *)(lVar6 + 0x91010);
    iVar1 = strncmp(local_40,local_40 + 0x20,sVar3);
    if (iVar1 == 0) {
      iVar1 = kstrtouint(local_40 + sVar3,10,&local_44);
      if (iVar1 == 0) {
        do {
          puVar5 = puVar4 + 1;
          *puVar4 = local_44;
          puVar4 = puVar5;
        } while (puVar5 != (undefined4 *)(lVar6 + 0x91094));
        return param_3;
      }
    }
    else {
      lVar6 = 0;
      puVar7 = &DAT_00103300;
      while( true ) {
        local_40[0x20] = '\0';
        local_40[0x21] = '\0';
        local_40[0x22] = '\0';
        local_40[0x23] = '\0';
        local_40[0x24] = '\0';
        local_40[0x25] = '\0';
        local_40[0x26] = '\0';
        local_40[0x27] = '\0';
        local_40[0x28] = '\0';
        local_40[0x29] = '\0';
        local_40[0x2a] = '\0';
        local_40[0x2b] = '\0';
        local_40[0x2c] = '\0';
        local_40[0x2d] = '\0';
        local_40[0x2e] = '\0';
        local_40[0x2f] = '\0';
        local_40[0x30] = '\0';
        local_40[0x31] = '\0';
        local_40[0x32] = '\0';
        local_40[0x33] = '\0';
        local_40[0x34] = '\0';
        local_40[0x35] = '\0';
        local_40[0x36] = '\0';
        local_40[0x37] = '\0';
        local_40[0x38] = '\0';
        local_40[0x39] = '\0';
        local_40[0x3a] = '\0';
        local_40[0x3b] = '\0';
        local_40[0x3c] = '\0';
        local_40[0x3d] = '\0';
        local_40[0x3e] = '\0';
        local_40[0x3f] = '\0';
        snprintf(local_40 + 0x20,0x20,"%s=",puVar7);
        iVar1 = (int)lVar6;
        sVar3 = strlen(local_40 + 0x20);
        lVar6 = lVar6 + 1;
        iVar2 = strncmp(local_40,local_40 + 0x20,sVar3);
        if (iVar2 == 0) break;
        if (lVar6 == 0x21) {
          printk(&DAT_00103498,local_40);
          return param_3;
        }
        puVar7 = (&PTR_DAT_001026d0)[lVar6];
      }
      iVar1 = kstrtouint(local_40 + sVar3,10,puVar4 + iVar1);
      if (iVar1 == 0) {
        return param_3;
      }
    }
    sVar3 = strlen(local_40 + 0x20);
    printk(&DAT_00103460,puVar7,local_40 + sVar3);
  }
  return param_3;
}




undefined8 log_proc_init(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar4;
  undefined4 *puVar3;
  
  _mcount();
  lVar1 = proc_create_data(&DAT_001034c0,0x1a4,param_1,&PTR___this_module_001027e0,0);
  uVar4 = 0;
  if (lVar1 == 0) {
    printk(&DAT_001034c8);
    uVar4 = 0xffffffff;
  }
  puVar2 = (undefined4 *)(param_2 + 0x91010);
  DAT_00104200 = param_2;
  do {
    puVar3 = puVar2 + 1;
    *puVar2 = 4;
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)(param_2 + 0x91094));
  return uVar4;
}




undefined8 log_proc_remove(undefined8 param_1)

{
  _mcount();
  remove_proc_entry(&DAT_001034c0,param_1);
  DAT_00104200 = 0;
  return 0;
}




void FUN_00101b00(undefined8 param_1,undefined8 param_2)

{
  _mcount();
  single_open(param_2,&LAB_00101b40,0);
  return;
}




undefined8 sys_proc_init(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _mcount();
  lVar1 = proc_create_data(&DAT_00103810,0x1a4,param_1,&PTR___this_module_001029e0,0);
  if (lVar1 == 0) {
    printk(&DAT_00103818);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  DAT_00104208 = param_2;
  return uVar2;
}




undefined8 sys_proc_remove(undefined8 param_1)

{
  _mcount();
  remove_proc_entry(&DAT_00103810,param_1);
  DAT_00104208 = 0;
  return 0;
}




void FUN_00101f78(void)

{
  _mcount();
  class_remove_file_ns(pbase_class,&class_attr_base_efuse_shadow,0);
  class_remove_file_ns(pbase_class,class_attr_base_efuse_prog,0);
  class_destroy(pbase_class);
  return;
}




int init_module(void)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_001041c0 = __ioremap(0x3000000,0x10000,0xe8000000000707);
  pbase_class = __class_create(&__this_module,"cvi-base",&DAT_001041d8);
  if (pbase_class < 0xfffffffffffff001) {
    iVar1 = class_create_file_ns(pbase_class,&class_attr_base_efuse_shadow,0);
    if (iVar1 == 0) {
      iVar1 = class_create_file_ns(pbase_class,class_attr_base_efuse_prog,0);
      if (iVar1 == 0) {
        __platform_driver_register(&PTR_FUN_00103ca8,&__this_module);
        uVar2 = cvi_base_read_chip_id();
        printk(&DAT_00102e58,uVar2);
        return 0;
      }
      printk(&DAT_00102e20);
    }
    else {
      printk(&DAT_00102de8);
    }
  }
  else {
    printk(&DAT_00102dd0);
    iVar1 = (int)pbase_class;
  }
  FUN_00101f78();
  return iVar1;
}




void cleanup_module(void)

{
  platform_driver_unregister(&PTR_FUN_00103ca8);
  FUN_00101f78();
  __iounmap(DAT_001041c0);
  return;
}



