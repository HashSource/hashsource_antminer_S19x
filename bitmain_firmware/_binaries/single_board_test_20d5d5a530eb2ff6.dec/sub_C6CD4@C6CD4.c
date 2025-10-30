int __fastcall sub_C6CD4(_DWORD *a1, _DWORD *a2)
{
  int (*v2)(void); // r2
  int v4; // r3
  int v5; // r4
  bool v6; // zf

  v2 = *(int (**)(void))(*a1 + 104);
  if ( !v2 )
  {
    sub_D0048(16, 118, 66, "crypto/ec/ec_lib.c", 921);
    return 0;
  }
  if ( *a1 != *a2 )
    goto LABEL_3;
  v4 = a1[4];
  if ( v4 )
  {
    v5 = a2[1];
    v6 = v4 == v5;
    if ( v4 != v5 )
      v6 = v5 == 0;
    if ( !v6 )
    {
LABEL_3:
      sub_D0048(16, 118, 101, "crypto/ec/ec_lib.c", 925);
      return 0;
    }
  }
  return v2();
}
