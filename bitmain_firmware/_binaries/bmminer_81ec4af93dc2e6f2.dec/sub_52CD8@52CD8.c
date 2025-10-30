void sub_52CD8()
{
  char v0[2048]; // [sp+4h] [bp-808h] BYREF
  int v1; // [sp+804h] [bp-8h]

  if ( dword_531040 )
  {
    v1 = munmap((void *)dword_531048, 0x1200u);
    if ( v1 < 0 )
    {
      strcpy(v0, "munmap failed!\n");
      sub_3AF5C(0, v0, 0, (int)v0);
    }
    v1 = munmap((void *)dword_531050, 0x1000000u);
    if ( v1 < 0 )
    {
      strcpy(v0, "munmap fpga_mem_addr_hal failed!\n");
      sub_3AF5C(0, v0, 0, (int)v0);
    }
    dword_531040 = 0;
    close(dword_531044);
    close(dword_53104C);
  }
}
