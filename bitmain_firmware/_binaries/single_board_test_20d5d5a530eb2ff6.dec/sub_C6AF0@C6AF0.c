int __fastcall sub_C6AF0(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v5; // r4
  int v6; // lr
  bool v7; // zf

  if ( !*(_DWORD *)(*a1 + 68) )
  {
    sub_D0048(16, 117, 66, "crypto/ec/ec_lib.c", 784);
    return 0;
  }
  if ( *a1 != *a2 )
    goto LABEL_3;
  v5 = a1[4];
  if ( v5 )
  {
    v6 = a2[1];
    v7 = v5 == v6;
    if ( v5 != v6 )
      v7 = v6 == 0;
    if ( !v7 )
    {
LABEL_3:
      sub_D0048(16, 117, 101, "crypto/ec/ec_lib.c", 789);
      return 0;
    }
  }
  return (*(int (__fastcall **)(_DWORD *, _DWORD *, int, int))(*a1 + 68))(a1, a2, a3, a4);
}
