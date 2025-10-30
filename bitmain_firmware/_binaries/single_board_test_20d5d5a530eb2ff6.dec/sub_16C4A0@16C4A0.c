_DWORD *__fastcall sub_16C4A0(const char *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4

  v2 = sub_E0740((void *)0x18);
  v3 = v2;
  if ( v2 )
  {
    v2[4] = a1;
    *v2 = 4;
    v2[5] = strlen(a1);
  }
  else
  {
    sub_D0048(44, 132, 65, (int)"crypto/store/store_lib.c", 554);
  }
  return v3;
}
