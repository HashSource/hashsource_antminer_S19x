int __fastcall sub_72E80(_DWORD *a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v10; // [sp+8h] [bp-Ch]
  char *i; // [sp+Ch] [bp-8h]

  if ( !a1 || *a1 || !a2 || *a2 )
    return -1;
  v3 = sub_73080(a2);
  for ( i = (char *)sub_731BC(v3); i; i = (char *)sub_731BC(v5) )
  {
    v6 = sub_732AC(i);
    v10 = sub_731F8(v6);
    if ( !v10 )
      break;
    if ( sub_72B10(a1, i) )
      sub_72938((int)a1, (int)i, v10);
    v4 = sub_732AC(i);
    v5 = sub_7314C(a2, v4);
  }
  return 0;
}
