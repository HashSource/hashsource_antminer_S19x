int __fastcall sub_1599CC(int a1)
{
  _BYTE *v2; // r4

  v2 = sub_E0740((void *)0x20);
  if ( v2 )
  {
    v2[13] = 1;
    v2[12] = -1;
    *(_DWORD *)(a1 + 20) = v2;
    return 1;
  }
  else
  {
    sub_D0048(16, 282, 65, (int)"crypto/ec/ec_pmeth.c", 46);
    return 0;
  }
}
