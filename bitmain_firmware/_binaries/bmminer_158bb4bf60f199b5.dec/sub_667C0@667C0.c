void sub_667C0()
{
  char v0[2048]; // [sp+0h] [bp-800h] BYREF

  if ( dword_1B0E74 )
  {
    if ( munmap((void *)dword_1B0E68, 0x1200u) < 0 )
    {
      strcpy(v0, "munmap failed!\n");
      sub_47AB4(0, v0, 0);
    }
    if ( munmap((void *)dword_1B0E70, 0x1000000u) < 0 )
    {
      strcpy(v0, "munmap fpga_mem_addr_hal failed!\n");
      sub_47AB4(0, v0, 0);
    }
    dword_1B0E74 = 0;
    close(dword_1B0E64);
    close(dword_1B0E6C);
  }
}
