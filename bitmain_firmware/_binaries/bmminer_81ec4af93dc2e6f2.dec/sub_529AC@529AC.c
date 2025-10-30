int sub_529AC()
{
  char v2[4]; // [sp+8h] [bp-804h] BYREF

  if ( dword_531040 )
    return 0;
  dword_531044 = open("/dev/axi_fpga_dev", 2);
  if ( dword_531044 >= 0 )
  {
    dword_531048 = (int)mmap(0, 0x1200u, 3, 1, dword_531044, 0);
    if ( dword_531048 )
    {
      dword_53104C = open("/dev/fpga_mem", 2);
      if ( dword_53104C >= 0 )
      {
        dword_531050 = (int)mmap(0, 0x1000000u, 3, 1, dword_53104C, 0);
        if ( dword_531050 )
        {
          snprintf(v2, 0x800u, "mmap fpga_mem_addr_hal = 0x%x\n", dword_531050);
          sub_3AF5C(3, v2, 0, (int)v2);
          dword_531040 = 1;
          return 0;
        }
        else
        {
          snprintf(v2, 0x800u, "mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x\n", 0);
          sub_3AF5C(0, v2, 0, (int)v2);
          munmap((void *)dword_531048, 0x1200u);
          close(dword_531044);
          close(dword_53104C);
          return -1;
        }
      }
      else
      {
        snprintf(v2, 0x800u, "/dev/fpga_mem open failed. fd_fpga_mem_hal = %d\n", dword_53104C);
        sub_3AF5C(0, v2, 0, (int)v2);
        perror("open");
        munmap((void *)dword_531048, 0x1200u);
        close(dword_531044);
        return -1;
      }
    }
    else
    {
      snprintf(v2, 0x800u, "mmap axi_fpga_addr failed. axi_fpga_addr = %p\n", 0);
      sub_3AF5C(0, v2, 0, (int)v2);
      close(dword_531044);
      return -2;
    }
  }
  else
  {
    snprintf(v2, 0x800u, "/dev/axi_fpga_dev open failed. fd = %d\n", dword_531044);
    sub_3AF5C(0, v2, 0, (int)v2);
    return -1;
  }
}
