_DWORD *__fastcall sub_7349C(_DWORD *a1)
{
  int v2; // r0
  int v5; // [sp+8h] [bp-14h]
  char *v6; // [sp+Ch] [bp-10h]
  _DWORD *v7; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v7 = sub_729F4();
  if ( !v7 )
    return 0;
  for ( i = sub_73080(a1); i; i = sub_7314C(a1, i) )
  {
    v6 = (char *)sub_731BC(i);
    v5 = sub_731F8(i);
    v2 = sub_74ED8(v5);
    sub_72B80(v7, v6, v2);
  }
  return v7;
}
