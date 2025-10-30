// Alternative name is 'axi_fpga_dev_init'
int __fastcall init_module(int a1, int a2, int a3)
{
  int v3; // r5
  const char *v4; // r0
  int v5; // r0
  const char *v6; // r0
  int v8; // r1
  int v9; // r1
  unsigned int v10; // r0

  printk("In axi fpga driver!\n");
  v3 = alloc_chrdev_region(&axi_fpga_dev_num, 0, 1, "axi_fpga_dev", a1, a2, a3);
  if ( v3 < 0 )
  {
    v4 = "alloc axi_fpga_dev fail!\n";
LABEL_7:
    printk(v4);
    return v3;
  }
  v5 = kmem_cache_alloc(kmalloc_caches[6], 6291648);
  p_axi_fpga_dev = v5;
  if ( !v5 )
  {
    v6 = "kmalloc cdev fail!\n";
LABEL_11:
    printk(v6);
    return 1;
  }
  cdev_init(v5, &axi_fpga_dev_fops);
  *(_DWORD *)(p_axi_fpga_dev + 36) = &_this_module;
  v3 = cdev_add();
  if ( v3 )
  {
    v4 = "add axi_fpga_dev fail!\n";
    goto LABEL_7;
  }
  base_vir_mem_addr = _request_region(&iomem_resource, 0x40000000, 5120, "axi_fpga_vir_mem", 0);
  if ( !base_vir_mem_addr )
  {
    v6 = "request_mem_region failed!\n";
    goto LABEL_11;
  }
  printk("request_mem_region OK!\n");
  v8 = ioremap(0x40000000, 5120);
  base_vir_addr = v8;
  if ( v8 )
  {
    printk("AXI fpga dev virtual address is 0x%x\n", v8);
    v9 = *(_DWORD *)base_vir_addr;
    __dsb(0xFu);
    printk("*base_vir_addr = 0x%x\n", v9);
    v10 = _class_create(&_this_module, "axi_fpga_dev", &axi_fpga_class);
    axi_fpga_class = v10;
    if ( v10 <= 0xFFFFF000 )
    {
      device_create(v10);
      return v3;
    }
    printk("Err:failed in creating axi fpga class.\n");
  }
  else
  {
    printk("ioremap fail!\n");
    printk("!!!*base_vir_addr = 0x%x\n", base_vir_addr);
  }
  return -1;
}
