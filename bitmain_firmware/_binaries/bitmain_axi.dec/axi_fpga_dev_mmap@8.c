int __fastcall axi_fpga_dev_mmap(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r2
  int result; // r0

  v3 = a2[9] & 0xFFFFFFC3;
  a2[10] |= 0x4044000u;
  a2[9] = v3;
  result = remap_pfn_range(a2, *a2, 0x40000, a2[1] - *a2, v3, a2, a3);
  if ( result )
  {
    printk("axi_fpga_dev_mmap error!\n");
    return -11;
  }
  return result;
}
