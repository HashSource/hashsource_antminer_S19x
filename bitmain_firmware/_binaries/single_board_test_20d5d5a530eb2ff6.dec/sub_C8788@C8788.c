int __fastcall sub_C8788(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  int v4; // r6
  int v5; // lr
  bool v6; // zf

  v2 = (_DWORD *)*a1;
  if ( !*(_DWORD *)(*a1 + 80) && (*v2 & 1) == 0 )
  {
    sub_D0048(16, 295, 66, "crypto/ec/ec_oct.c", 24);
    return 0;
  }
  if ( v2 != (_DWORD *)*a2 )
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
      sub_D0048(16, 295, 101, "crypto/ec/ec_oct.c", 29);
      return 0;
    }
  }
  if ( (*v2 & 1) == 0 )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 80))(a1);
  if ( v2[1] == 406 )
    return sub_CA430();
  return sub_157E08();
}
