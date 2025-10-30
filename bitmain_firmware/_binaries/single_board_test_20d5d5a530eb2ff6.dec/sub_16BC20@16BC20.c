_DWORD *__fastcall sub_16BC20(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4

  v2 = sub_E0740((void *)0x30);
  v3 = v2;
  if ( v2 )
  {
    v2[3] = a1;
    *v2 = 1;
  }
  else
  {
    sub_D0048(44, 128, 65, (int)"crypto/store/loader_file.c", 1007);
  }
  return v3;
}
