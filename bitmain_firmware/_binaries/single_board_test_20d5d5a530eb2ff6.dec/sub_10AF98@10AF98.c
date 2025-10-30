int __fastcall sub_10AF98(_DWORD *a1, int *a2, char *a3, char *s)
{
  int v7; // r1
  _DWORD *v8; // r0
  int v9; // r1
  _DWORD *v10; // r0
  char v12[2500]; // [sp+4h] [bp-9C4h] BYREF

  *a2 = 0;
  *a1 = 0;
  v7 = sub_10AE80(v12, s);
  if ( v7 < 0 )
    return 0;
  v8 = sub_B8AEC(v12, v7, 0);
  *a2 = (int)v8;
  if ( !v8 )
    return 0;
  v9 = sub_10AE80(v12, a3);
  if ( v9 >= 0 )
  {
    v10 = sub_B8AEC(v12, v9, 0);
    *a1 = v10;
    if ( v10 )
      return 1;
  }
  sub_B895C(*a2);
  *a2 = 0;
  return 0;
}
