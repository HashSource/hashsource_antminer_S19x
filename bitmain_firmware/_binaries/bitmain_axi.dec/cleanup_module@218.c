// Alternative name is 'axi_fpga_dev_exit'
int cleanup_module()
{
  unregister_chrdev_region(axi_fpga_dev_num, 1);
  cdev_del(p_axi_fpga_dev);
  kfree(p_axi_fpga_dev);
  iounmap(base_vir_addr);
  _release_region(&iomem_resource, 0x40000000, 5120);
  device_destroy(axi_fpga_class, axi_fpga_dev_num);
  class_destroy(axi_fpga_class);
  return printk("Bye Bye axi fpga driver!\n");
}
