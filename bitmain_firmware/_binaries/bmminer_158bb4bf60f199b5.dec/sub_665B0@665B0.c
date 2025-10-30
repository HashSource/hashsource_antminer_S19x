int sub_665B0()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int result; // r0
  int v4; // [sp+4h] [bp-810h]
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v0 = open64("/dev/axi_fpga_dev", 2);
  dword_1B0E64 = v0;
  if ( v0 < 0 )
  {
    snprintf(s, 0x800u, "/dev/axi_fpga_dev open failed. fd = %d\n", v0);
    sub_47AB4(0, s, 0);
    return -1;
  }
  else
  {
    dword_1B0E68 = ((int (__fastcall *)(_DWORD, int, int, int, int))mmap64)(0, 4608, 3, 1, v0);
    if ( dword_1B0E68 )
    {
      v1 = open64("/dev/fpga_mem", 2);
      dword_1B0E6C = v1;
      if ( v1 < 0 )
      {
        snprintf(s, 0x800u, "/dev/fpga_mem open failed. fd_fpga_mem_hal = %d\n", v1);
        sub_47AB4(0, s, 0);
        perror("open");
        munmap((void *)dword_1B0E68, 0x1200u);
        close(dword_1B0E64);
        return -1;
      }
      else
      {
        v2 = mmap64(0, 0x1000000, 3, 1, v1, v4, 0, 0);
        dword_1B0E70 = v2;
        if ( v2 )
        {
          snprintf(s, 0x800u, "mmap fpga_mem_addr_hal = 0x%x\n", v2);
          sub_47AB4(3, s, 0);
          result = 0;
          dword_1B0E74 = 1;
        }
        else
        {
          snprintf(s, 0x800u, "mmap fpga_mem_addr_hal failed. fpga_mem_addr_hal = 0x%x\n", 0);
          sub_47AB4(0, s, 0);
          munmap((void *)dword_1B0E68, 0x1200u);
          close(dword_1B0E64);
          close(dword_1B0E6C);
          return -1;
        }
      }
    }
    else
    {
      snprintf(s, 0x800u, "mmap axi_fpga_addr failed. axi_fpga_addr = %p\n", 0);
      sub_47AB4(0, s, 0);
      close(dword_1B0E64);
      return -2;
    }
  }
  return result;
}
