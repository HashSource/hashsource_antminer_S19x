int __fastcall sub_108F00(int result, int a2)
{
  int v2; // r4
  void *v4; // r8
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r0
  _DWORD *v8; // r0

  v2 = result;
  if ( *(_BYTE *)(result + 52) )
  {
    v6 = (_DWORD *)sub_242FB4(result);
    return sub_2594B0(*v6, "Psymtab for %s already read in.  Shouldn't happen.\n", *(const char **)(v2 + 4));
  }
  else if ( *(_DWORD *)(*(_DWORD *)(result + 64) + 4) || *(_DWORD *)(result + 32) )
  {
    if ( dword_48A514 )
    {
      v7 = sub_259F10("Reading in symbols for %s...", *(const char **)(result + 4));
      v8 = (_DWORD *)sub_242F8C(v7);
      sub_25680C(*v8);
    }
    off_478984 = sub_10508C;
    v4 = sub_9253C((int)nullsub_39, 0);
    if ( *(_DWORD *)(sub_1B6B24(a2, dword_47B26C) + 60) )
    {
      v5 = sub_1B6B24(a2, dword_47B26C);
      dword_47B240 = ((int (__fastcall *)(int, _DWORD, _DWORD))loc_214DE8)(a2, *(_DWORD *)(v5 + 60), 0);
      if ( dword_47B240 )
        sub_9253C((int)sub_2589B8, (int)&dword_47B240);
    }
    sub_108928(a2, v2);
    sub_92620(v4);
    result = ((int (__fastcall *)(int))loc_20BE64)(a2);
    if ( dword_48A514 )
      return sub_259F10("done.\n");
  }
  return result;
}
