int __fastcall sub_C6A30(int a1, _DWORD *a2)
{
  int (*v2)(void); // r2

  v2 = *(int (**)(void))(*(_DWORD *)a1 + 60);
  if ( !v2 )
  {
    sub_D0048(16, 127, 66, "crypto/ec/ec_lib.c", 748);
    return 0;
  }
  if ( *(_DWORD *)a1 != *a2 )
  {
    sub_D0048(16, 127, 101, "crypto/ec/ec_lib.c", 752);
    return 0;
  }
  return v2();
}
