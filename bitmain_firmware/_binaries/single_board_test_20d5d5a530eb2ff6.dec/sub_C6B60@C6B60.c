int __fastcall sub_C6B60(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // r4
  int v6; // lr
  int v7; // r6
  bool v8; // zf
  int v9; // r6
  bool v10; // zf
  int v11; // r4
  bool v12; // zf

  v4 = *a1;
  if ( !*(_DWORD *)(*a1 + 92) )
  {
    sub_D0048(16, 112, 66, "crypto/ec/ec_lib.c", 879);
    return 0;
  }
  if ( v4 != *a2 )
  {
LABEL_3:
    sub_D0048(16, 112, 101, "crypto/ec/ec_lib.c", 884);
    return 0;
  }
  v6 = a1[4];
  if ( v6 )
  {
    v7 = a2[1];
    v8 = v6 == v7;
    if ( v6 != v7 )
      v8 = v7 == 0;
    if ( !v8 || v4 != *a3 )
      goto LABEL_3;
    v9 = a3[1];
    v10 = v6 == v9;
    if ( v6 != v9 )
      v10 = v9 == 0;
    if ( !v10 || v4 != *a4 )
      goto LABEL_3;
    v11 = a4[1];
    v12 = v11 == 0;
    if ( v11 )
      v12 = v6 == v11;
    if ( !v12 )
      goto LABEL_3;
  }
  else if ( v4 != *a3 || v4 != *a4 )
  {
    goto LABEL_3;
  }
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 92))(a1);
}
