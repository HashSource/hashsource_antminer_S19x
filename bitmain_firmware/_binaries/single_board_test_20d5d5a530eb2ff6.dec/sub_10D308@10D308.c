int __fastcall sub_10D308(int a1, int a2, char *a3, int a4)
{
  int v4; // r5
  int v6; // r4
  int v7; // r0
  char *v8; // r0
  char *v9; // r0

  if ( a2 != 2 )
    return 0;
  v4 = *(_DWORD *)(a1 + 12);
  if ( a4 != 3 )
    return sub_10D15C((int *)(v4 + 4), a3, a4);
  v7 = sub_10ED00();
  v8 = (char *)j_j_secure_getenv(v7);
  if ( !v8 )
  {
    v9 = (char *)sub_10ECE8();
    v6 = sub_10D15C((int *)(v4 + 4), v9, 1);
    if ( v6 )
      return v6;
    goto LABEL_8;
  }
  v6 = sub_10D15C((int *)(v4 + 4), v8, 1);
  if ( !v6 )
LABEL_8:
    sub_D0048(11, 102, 103, (int)"crypto/x509/by_dir.c", 84);
  return v6;
}
