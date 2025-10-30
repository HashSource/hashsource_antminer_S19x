_DWORD *__fastcall sub_65BBC(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v8; // [sp+Ch] [bp-10h]
  _DWORD *v9; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v9 = sub_651D4();
  if ( !v9 )
    return 0;
  v2 = sub_65860(a1);
  for ( i = sub_6599C(v2); i; i = sub_6599C(v4) )
  {
    v5 = sub_65A8C(i);
    v8 = sub_659D8(v5);
    if ( !v8 )
      break;
    sub_65118((int)v9, i, v8);
    v3 = sub_65A8C(i);
    v4 = sub_6592C(a1, v3);
  }
  return v9;
}
