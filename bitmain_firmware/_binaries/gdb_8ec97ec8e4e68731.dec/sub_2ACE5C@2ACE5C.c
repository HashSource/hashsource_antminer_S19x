bool __fastcall sub_2ACE5C(int a1, int a2)
{
  void **v4; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r5
  _BOOL4 v8; // r4
  int v9; // r0
  size_t *v10; // r0

  if ( a1 )
  {
    if ( a2 )
      goto LABEL_3;
  }
  else
  {
    sub_2A6BBC("opncls.c", 1982);
    if ( a2 )
      goto LABEL_3;
  }
  sub_2A6BBC("opncls.c", 1983);
LABEL_3:
  v4 = sub_2AC610(a1, 0, "r", -1);
  v7 = (int)v4;
  if ( !v4 )
    return 0;
  v8 = sub_2AA86C((int)v4, 1, v5, v6);
  v9 = v7;
  if ( v8 )
  {
    v10 = sub_2ACC78(v7);
    v8 = (_BOOL4)v10;
    if ( v10 )
      v8 = *v10 == **(_DWORD **)a2 && memcmp(v10 + 1, (const void *)(*(_DWORD *)a2 + 4), *v10) == 0;
    v9 = v7;
  }
  sub_2AC9DC(v9);
  return v8;
}
