_DWORD *__fastcall sub_733DC(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v8; // [sp+Ch] [bp-10h]
  _DWORD *v9; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v9 = sub_729F4();
  if ( !v9 )
    return 0;
  v2 = sub_73080(a1);
  for ( i = sub_731BC(v2); i; i = sub_731BC(v4) )
  {
    v5 = sub_732AC(i);
    v8 = sub_731F8(v5);
    if ( !v8 )
      break;
    sub_72938((int)v9, i, v8);
    v3 = sub_732AC(i);
    v4 = sub_7314C(a1, v3);
  }
  return v9;
}
