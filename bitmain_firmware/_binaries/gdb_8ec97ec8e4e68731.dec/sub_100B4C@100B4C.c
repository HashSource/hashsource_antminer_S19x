_DWORD *__fastcall sub_100B4C(_DWORD *a1, char *a2, int a3, _DWORD *a4)
{
  int v7; // r0
  void *v8; // r4
  void *v9; // r6
  int v11; // r6
  _DWORD *v12; // r4
  void *v13; // r4
  void *v14; // [sp+4h] [bp-8h] BYREF

  if ( *a2 == 95 && a2[1] == 90 )
  {
    v11 = sub_31E68C(a2, 2);
    if ( v11 )
    {
      v12 = sub_9836C(0x34u);
      sub_7F58C((int)v12);
      v12[1] = v11;
      *a4 = 0;
      *a1 = v12;
      return a1;
    }
  }
  v7 = sub_1008BC(a2);
  v8 = (void *)v7;
  if ( !v7 )
  {
    *a1 = 0;
    return a1;
  }
  sub_7F64C(&v14, v7, 0);
  v9 = v14;
  if ( v14 )
  {
    *a4 = v8;
    *a1 = v9;
    return a1;
  }
  free(v8);
  v13 = v14;
  *a1 = 0;
  if ( !v13 )
    return a1;
  sub_7F5D0((int)v13);
  sub_33AC04(v13);
  return a1;
}
