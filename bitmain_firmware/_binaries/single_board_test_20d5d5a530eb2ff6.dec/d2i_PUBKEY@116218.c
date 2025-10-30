int __fastcall d2i_PUBKEY(int *a1, void **a2, int a3)
{
  int v5; // r0
  int v6; // r7
  int v7; // r4
  int result; // r0
  void *v9; // [sp+4h] [bp-8h] BYREF

  v9 = *a2;
  v5 = sub_1160B8(0, &v9, a3);
  if ( !v5 )
    return 0;
  v6 = v5;
  v7 = sub_1161E4(v5);
  sub_1160FC(v6);
  if ( !v7 )
    return 0;
  result = v7;
  *a2 = v9;
  if ( a1 )
  {
    sub_DA240(*a1);
    result = v7;
    *a1 = v7;
  }
  return result;
}
