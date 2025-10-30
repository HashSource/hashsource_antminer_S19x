int __fastcall sub_107460(int a1)
{
  void *v2; // r4

  v2 = sub_E0740((void *)0x14);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 20) = v2;
    return 1;
  }
  else
  {
    sub_D0048(53, 111, 65, (int)"crypto/sm2/sm2_pmeth.c", 37);
    return 0;
  }
}
