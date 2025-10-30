int sub_6DE64()
{
  int fd; // r0
  int v1; // r0
  void *v2; // r0
  int result; // r0
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  fd = open("/dev/axi_fpga_dev", 2);
  dword_65DF74 = fd;
  if ( fd < 0 )
  {
    snprintf(s, 0x800u, "/dev/axi_fpga_dev open failed. fd = %d\n", fd);
    nullsub_8();
    return -1;
  }
  else
  {
    dword_65DF78 = (int)mmap(0, 0x1200u, 3, 1, fd, 0);
    if ( dword_65DF78 )
    {
      v1 = open("/dev/fpga_mem", 2);
      dword_65DF7C = v1;
      if ( v1 < 0 )
      {
        snprintf(s, 0x800u, "/dev/fpga_mem open failed. fd_fpga_mem_hal = %d\n", v1);
        nullsub_8();
        perror("open");
        munmap((void *)dword_65DF78, 0x1200u);
        close(dword_65DF74);
        return -1;
      }
      else
      {
        v2 = mmap(0, 0x1000000u, 3, 1, v1, 0);
        dword_65DF80 = (int)v2;
        if ( v2 )
        {
          snprintf(s, 0x800u, "mmap fpga_mem_addr_hal = 0x%x\n", v2);
          nullsub_8();
          result = 0;
          dword_65DF84 = 1;
        }
        else
        {
          snprintf(s, 0x800u, "mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x\n", 0);
          nullsub_8();
          munmap((void *)dword_65DF78, 0x1200u);
          close(dword_65DF74);
          close(dword_65DF7C);
          return -1;
        }
      }
    }
    else
    {
      snprintf(s, 0x800u, "mmap axi_fpga_addr failed. axi_fpga_addr = %p\n", 0);
      nullsub_8();
      close(dword_65DF74);
      return -2;
    }
  }
  return result;
}
