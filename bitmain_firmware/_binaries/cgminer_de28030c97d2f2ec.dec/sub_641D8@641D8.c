int __fastcall sub_641D8(_DWORD *a1, int a2, int a3)
{
  int v8; // [sp+10h] [bp-Ch]
  int v9; // [sp+14h] [bp-8h]

  v9 = sub_66A14(a1);
  if ( !v9 )
    return 0;
  sub_63B78(a1, a3);
  if ( a1[15] == 93 )
    return v9;
  while ( a1[15] )
  {
    v8 = sub_642FC(a1, a2, a3);
    if ( !v8 || sub_66EA4(v9, v8) )
      goto LABEL_14;
    sub_63B78(a1, a3);
    if ( a1[15] != 44 )
      break;
    sub_63B78(a1, a3);
  }
  if ( a1[15] == 93 )
    return v9;
  sub_627E0(a3, a1, 8, "']' expected");
LABEL_14:
  sub_6277C(v9);
  return 0;
}
