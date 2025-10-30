char *__fastcall sub_1A048(int a1, signed int a2)
{
  int v4; // r5
  int v5; // r2
  _BOOL4 v6; // r3

  v4 = ((int (*)(void))loc_166E9C)();
  v5 = *(_DWORD *)(sub_163E78(a1) + 20);
  v6 = v4 <= a2;
  if ( !v5 )
    v6 = 0;
  if ( !v6 )
  {
    if ( !*(_DWORD *)(sub_163E78(a1) + 24) || v4 + 31 >= a2 )
      goto LABEL_6;
LABEL_11:
    if ( v4 + 47 >= a2 )
      return (&off_349348)[a2 - v4];
    goto LABEL_6;
  }
  if ( v4 + 31 >= a2 )
    return (&off_349348)[a2 - v4];
  if ( *(_DWORD *)(sub_163E78(a1) + 24) )
    goto LABEL_11;
LABEL_6:
  if ( (unsigned int)a2 > 0x19 )
    return "";
  else
    return (&off_349348)[a2 + 48];
}
