int __fastcall sub_70CBC(_DWORD *a1, int a2, int a3)
{
  int v8; // [sp+10h] [bp-Ch]
  int v9; // [sp+14h] [bp-8h]

  v9 = sub_73538(a1);
  if ( !v9 )
    return 0;
  sub_70664(a1, a3);
  if ( a1[15] == 93 )
    return v9;
  while ( a1[15] )
  {
    v8 = sub_70DE4(a1, a2, a3);
    if ( !v8 || sub_739D4(v9, v8) )
      goto LABEL_13;
    sub_70664(a1, a3);
    if ( a1[15] != 44 )
      break;
    sub_70664(a1, a3);
  }
  if ( a1[15] == 93 )
    return v9;
  sub_6F2A8(a3, a1, 8, "']' expected");
LABEL_13:
  sub_6F240(v9);
  return 0;
}
