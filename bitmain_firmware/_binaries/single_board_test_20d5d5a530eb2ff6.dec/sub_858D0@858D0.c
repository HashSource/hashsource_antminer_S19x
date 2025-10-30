int __fastcall sub_858D0(int *a1, int *a2, int a3)
{
  int v6; // r1
  int v7; // r2
  int v8; // r5
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r0
  int v13; // r4
  int v14; // r0
  int v15; // r2
  int v16; // r4

  v8 = sub_10BDE0(*a1);
  if ( !v8 )
    return 0;
  while ( 1 )
  {
    v12 = sub_10C010(v8, v6, v7);
    v11 = 0;
    if ( v12 <= 0 )
      break;
    v10 = *(_DWORD *)(sub_10C01C(v8, 0) + 32);
    v11 = 0;
    if ( v10 != 772 )
      break;
    sub_10BC04(v8, 0);
  }
  v13 = 0;
  while ( v13 < sub_10C010(a3, v11, v9) )
  {
    v14 = sub_10C01C(a3, v13);
    v15 = v13++;
    sub_10BA90(v8, v14, v15);
  }
  v16 = sub_10BDE0(v8);
  if ( !v16 )
    return 0;
  sub_10BDB4(*a2);
  *a2 = v16;
  sub_10B9F0(v16, ssl_cipher_ptr_id_cmp);
  sub_10C070(*a2);
  sub_10BDB4(*a1);
  *a1 = v8;
  return 1;
}
