int __fastcall sub_168570(void *a1, int a2, _DWORD *a3)
{
  int v4; // r0
  void *v6; // [sp+Ch] [bp-8h] BYREF

  v6 = a1;
  v4 = sub_168518(0, &v6, a2);
  if ( v4 )
  {
    *a3 = **(_DWORD **)(v4 + 12);
    sub_16855C(v4);
    return 1;
  }
  else
  {
    sub_D0048(53, 104, 104, (int)"crypto/sm2/sm2_crypt.c", 71);
    return 0;
  }
}
