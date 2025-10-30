int sub_47FFC()
{
  int v0; // r6
  char v2[48]; // [sp+0h] [bp-30h] BYREF

  v0 = off_7055A0(&dword_6470E4);
  sub_1E938(v2, 0x30u);
  printf("%s ", v2);
  if ( v0 )
  {
    printf("%s : Sweep Fail\n", "sweep_flush");
    strcpy(byte_6473F0, "Sweep Fail");
    sub_3CC5C((int)byte_6473F0, v2);
  }
  else
  {
    printf("%s : Sweep Success\n", "sweep_flush");
    strcpy(byte_6474F0, "Sweep Success");
    sub_3CC5C((int)byte_6474F0, v2);
  }
  if ( dword_6470E4 )
  {
    free((void *)dword_6470E4);
    dword_6470E4 = 0;
  }
  if ( dword_6470E8 )
  {
    free((void *)dword_6470E8);
    dword_6470E8 = 0;
  }
  return v0;
}
