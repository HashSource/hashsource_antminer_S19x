int __fastcall sub_C7110(_DWORD *a1, _DWORD *a2)
{
  int v3; // r3
  int v4; // r5
  bool v5; // zf

  if ( !*(_DWORD *)(*a1 + 116) )
  {
    sub_D0048(16, 120, 66, "crypto/ec/ec_lib.c", 969);
    return 0;
  }
  if ( *a1 != *a2 )
    goto LABEL_3;
  v3 = a1[4];
  if ( v3 )
  {
    v4 = a2[1];
    v5 = v3 == v4;
    if ( v3 != v4 )
      v5 = v4 == 0;
    if ( !v5 )
    {
LABEL_3:
      sub_D0048(16, 120, 101, "crypto/ec/ec_lib.c", 973);
      return 0;
    }
  }
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 116))(a1);
}
