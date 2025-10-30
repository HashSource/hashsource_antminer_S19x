int __fastcall sub_106F48(int a1)
{
  _DWORD *v2; // r0

  v2 = sub_E0740((void *)0x50);
  if ( v2 )
  {
    v2[1] = 4;
    sub_DB980(a1, (int)v2);
    sub_DB978(a1, 0, 0);
    return 1;
  }
  else
  {
    sub_D0048(15, 125, 65, (int)"crypto/siphash/siphash_pmeth.c", 32);
    return 0;
  }
}
