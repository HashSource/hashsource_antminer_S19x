// Decompiled: bitmain_axi.ko_32da56d0a8aa1315_debug


undefined4 axi_fpga_dev_open(void)

{
  return 0;
}




int axi_fpga_dev_mmap(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2[9];
  param_2[10] = param_2[10] | 0x4044000;
  param_2[9] = uVar2 & 0xffffffc3;
  iVar1 = remap_pfn_range(param_2,*param_2,0x40000,param_2[1] - *param_2,uVar2 & 0xffffffc3,param_2,param_3);
  if (iVar1 != 0) {
    printk("axi_fpga_dev_mmap error!\n");
    iVar1 = -0xb;
  }
  return iVar1;
}




undefined4 axi_fpga_dev_release(void)

{
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int init_module(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  printk("In axi fpga driver!\n");
  iVar2 = alloc_chrdev_region(&axi_fpga_dev_num,0,1,"axi_fpga_dev",param_1,param_2,param_3);
  if (iVar2 < 0) {
    pcVar3 = "alloc axi_fpga_dev fail!\n";
LAB_00010110:
    printk(pcVar3);
  }
  else {
    p_axi_fpga_dev = kmem_cache_alloc(_DAT_0001105c,0x24000c0);
    if (p_axi_fpga_dev == 0) {
      pcVar3 = "kmalloc cdev fail!\n";
    }
    else {
      cdev_init(p_axi_fpga_dev,&axi_fpga_dev_fops);
      iVar2 = p_axi_fpga_dev;
      uVar1 = axi_fpga_dev_num;
      *(undefined1 **)(p_axi_fpga_dev + 0x24) = &__this_module;
      iVar2 = cdev_add(iVar2,uVar1,1);
      if (iVar2 != 0) {
        pcVar3 = "add axi_fpga_dev fail!\n";
        goto LAB_00010110;
      }
      base_vir_mem_addr = __request_region(&iomem_resource,0x40000000,0x1400,"axi_fpga_vir_mem",0);
      if (base_vir_mem_addr != 0) {
        printk("request_mem_region OK!\n");
        base_vir_addr = (undefined4 *)ioremap(0x40000000,0x1400);
        if (base_vir_addr == (undefined4 *)0x0) {
          printk("ioremap fail!\n",0);
          printk("!!!*base_vir_addr = 0x%x\n",base_vir_addr);
        }
        else {
          printk("AXI fpga dev virtual address is 0x%x\n",base_vir_addr);
          DataSynchronizationBarrier(0xf);
          printk("*base_vir_addr = 0x%x\n",*base_vir_addr);
          axi_fpga_class = __class_create(&__this_module,"axi_fpga_dev",&axi_fpga_class);
          if (axi_fpga_class < 0xfffff001) {
            device_create(axi_fpga_class,0,axi_fpga_dev_num,0,"axi_fpga_dev");
            return 0;
          }
          printk("Err:failed in creating axi fpga class.\n");
        }
        return -1;
      }
      pcVar3 = "request_mem_region failed!\n";
      base_vir_mem_addr = 0;
    }
    printk(pcVar3);
    iVar2 = 1;
  }
  return iVar2;
}




void cleanup_module(void)

{
  unregister_chrdev_region(axi_fpga_dev_num,1);
  cdev_del(p_axi_fpga_dev);
  kfree(p_axi_fpga_dev);
  iounmap(base_vir_addr);
  __release_region(&iomem_resource,0x40000000,0x1400);
  device_destroy(axi_fpga_class,axi_fpga_dev_num);
  class_destroy(axi_fpga_class);
  printk("Bye Bye axi fpga driver!\n");
  return;
}



