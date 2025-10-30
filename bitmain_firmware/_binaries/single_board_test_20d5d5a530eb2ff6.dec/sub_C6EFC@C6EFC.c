int __fastcall sub_C6EFC(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r4
  int v5; // r6
  int v6; // r7
  bool v7; // zf
  int v8; // r4
  bool v9; // zf

  v3 = *a1;
  if ( !*(_DWORD *)(*a1 + 112) )
  {
    sub_D0048(16, 113, 66, "crypto/ec/ec_lib.c", 956);
    return -1;
  }
  if ( v3 != *a2 )
  {
LABEL_3:
    sub_D0048(16, 113, 101, "crypto/ec/ec_lib.c", 960);
    return -1;
  }
  v5 = a1[4];
  if ( v5 )
  {
    v6 = a2[1];
    v7 = v6 == 0;
    if ( v6 )
      v7 = v5 == v6;
    if ( !v7 || v3 != *a3 )
      goto LABEL_3;
    v8 = a3[1];
    v9 = v8 == 0;
    if ( v8 )
      v9 = v5 == v8;
    if ( !v9 )
      goto LABEL_3;
  }
  else if ( v3 != *a3 )
  {
    goto LABEL_3;
  }
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 112))(a1);
}
