int __fastcall sub_10D6A8(int a1, int a2, int a3, int a4)
{
  _BOOL4 v4; // r4
  int v7; // r0
  int v8; // r0

  if ( a2 != 1 )
    return 0;
  if ( a4 == 3 )
  {
    v7 = sub_10ED0C();
    v8 = j_j_secure_getenv(v7);
    if ( !v8 )
      v8 = sub_10ECF4();
    v4 = sub_10D5B0(a1, v8, 1) != 0;
    if ( v4 )
      return 1;
    sub_D0048(11, 101, 104, (int)"crypto/x509/by_file.c", 60);
    return v4;
  }
  if ( a4 != 1 )
    return sub_10D390(a1, a3, a4) != 0;
  return sub_10D5B0(a1, a3, 1) != 0;
}
