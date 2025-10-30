int __fastcall sub_8C230(int a1, int a2, int a3)
{
  if ( a2 && sub_92728(a1, 18) )
  {
    sub_D0048(20, 396, 206, "ssl/ssl_lib.c", 4956);
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 268) = a2;
    *(_DWORD *)(a1 + 272) = a3;
    return 1;
  }
}
