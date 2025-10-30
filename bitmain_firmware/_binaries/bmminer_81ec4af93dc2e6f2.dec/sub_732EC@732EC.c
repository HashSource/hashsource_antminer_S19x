int __fastcall sub_732EC(_DWORD *a1, _DWORD *a2)
{
  int v2; // r4
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v11; // [sp+Ch] [bp-18h]
  int v12; // [sp+10h] [bp-14h]
  char *i; // [sp+14h] [bp-10h]

  v2 = sub_72ABC(a1);
  if ( v2 != sub_72ABC(a2) )
    return 0;
  v4 = sub_73080(a1);
  for ( i = (char *)sub_731BC(v4); i; i = (char *)sub_731BC(v6) )
  {
    v7 = sub_732AC((int)i);
    v12 = sub_731F8(v7);
    if ( !v12 )
      break;
    v11 = sub_72B10(a2, i);
    if ( !sub_74D10(v12, v11) )
      return 0;
    v5 = sub_732AC((int)i);
    v6 = sub_7314C(a1, v5);
  }
  return 1;
}
