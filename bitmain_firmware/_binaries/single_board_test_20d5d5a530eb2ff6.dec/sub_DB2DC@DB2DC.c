_DWORD *__fastcall sub_DB2DC(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4

  v4 = (_DWORD *)sub_E0740(132, "crypto/evp/pmeth_lib.c", 174);
  v5 = v4;
  if ( v4 )
  {
    *v4 = a1;
    v4[1] = a2 | 1;
  }
  else
  {
    sub_D0048(6, 195, 65, (int)"crypto/evp/pmeth_lib.c", 176);
  }
  return v5;
}
