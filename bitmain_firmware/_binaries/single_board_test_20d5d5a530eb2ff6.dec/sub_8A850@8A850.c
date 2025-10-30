int __fastcall sub_8A850(int a1)
{
  int v1; // r3
  int v4; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r0

  v1 = 1;
  if ( !*(_DWORD *)(a1 + 16) )
  {
    v4 = sub_B6550();
    v5 = sub_B655C(v4);
    v6 = v5;
    if ( v5 && sub_B6FB4(v5, 117, 1, 0) )
    {
      *(_DWORD *)(a1 + 16) = v6;
      v7 = sub_B70C0(v6, *(_DWORD *)(a1 + 12));
      v1 = 1;
      *(_DWORD *)(a1 + 12) = v7;
    }
    else
    {
      BIO_vfree_0(v6);
      sub_D0048(20, 184, 7, "ssl/ssl_lib.c", 4044);
      return 0;
    }
  }
  return v1;
}
