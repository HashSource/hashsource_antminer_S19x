_DWORD *__fastcall sub_16C394(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4

  v4 = sub_E0740((void *)0x18);
  v5 = v4;
  if ( v4 )
  {
    v4[1] = a1;
    v4[2] = a2;
    *v4 = 2;
  }
  else
  {
    sub_D0048(44, 133, 65, (int)"crypto/store/store_lib.c", 508);
  }
  return v5;
}
