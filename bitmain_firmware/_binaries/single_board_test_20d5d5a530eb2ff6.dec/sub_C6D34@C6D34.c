int __fastcall sub_C6D34(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v9; // r3
  int v11; // r2
  bool v12; // zf

  if ( !*(_DWORD *)(*a1 + 76) )
  {
    sub_D0048(16, 293, 66, "crypto/ec/ec_lib.c", 843);
    return 0;
  }
  if ( *a1 != *a2 )
    goto LABEL_3;
  v9 = a1[4];
  if ( v9 )
  {
    v11 = a2[1];
    v12 = v9 == v11;
    if ( v9 != v11 )
      v12 = v11 == 0;
    if ( !v12 )
    {
LABEL_3:
      sub_D0048(16, 293, 101, "crypto/ec/ec_lib.c", 847);
      return 0;
    }
  }
  if ( !sub_C6CD4(a1, a2) )
    return (*(int (__fastcall **)(_DWORD *, _DWORD *, int, int, int))(*a1 + 76))(a1, a2, a3, a4, a5);
  sub_D0048(16, 293, 106, "crypto/ec/ec_lib.c", 851);
  return 0;
}
