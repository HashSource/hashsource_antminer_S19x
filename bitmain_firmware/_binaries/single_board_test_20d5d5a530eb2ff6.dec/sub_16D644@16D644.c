int __fastcall sub_16D644(_DWORD *a1)
{
  int (*v1)(void); // r2
  int v3; // r0

  v1 = *(int (**)(void))(*a1 + 24);
  if ( v1 && *(_DWORD *)(*a1 + 28) )
  {
    v3 = v1();
    if ( v3 )
    {
      sub_16D61C(a1, v3);
      a1[4] |= 2u;
      return 0;
    }
    else
    {
      sub_D0048(40, 118, 65, (int)"crypto/ui/ui_lib.c", 417);
      return -1;
    }
  }
  else
  {
    sub_D0048(40, 118, 112, (int)"crypto/ui/ui_lib.c", 411);
    return -1;
  }
}
