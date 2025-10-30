int __fastcall sub_F2D1C(int a1)
{
  _DWORD *v2; // r0

  v2 = sub_E0740((void *)0x100);
  if ( v2 )
  {
    v2[1] = 4;
    sub_DB980(a1, (int)v2);
    sub_DB978(a1, 0, 0);
    return 1;
  }
  else
  {
    sub_D0048(15, 124, 65, (int)"crypto/poly1305/poly1305_pmeth.c", 32);
    return 0;
  }
}
