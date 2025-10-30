_DWORD *__fastcall sub_65C7C(_DWORD *a1)
{
  int v2; // r0
  int v5; // [sp+8h] [bp-14h]
  char *v6; // [sp+Ch] [bp-10h]
  _DWORD *v7; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v7 = sub_651D4();
  if ( !v7 )
    return 0;
  for ( i = sub_65860(a1); i; i = sub_6592C(a1, i) )
  {
    v6 = (char *)sub_6599C(i);
    v5 = sub_659D8(i);
    v2 = sub_676B8(v5);
    sub_65360(v7, v6, v2);
  }
  return v7;
}
