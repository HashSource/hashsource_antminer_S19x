char *__fastcall sub_EAC84(int a1)
{
  int v1; // r2
  int v2; // r0
  _DWORD *v4; // r0
  int v5; // [sp+Ch] [bp-Ch] BYREF
  _DWORD v6[2]; // [sp+10h] [bp-8h] BYREF

  v5 = a1;
  if ( !a1 )
    return 0;
  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 )
    return (char *)v1;
  if ( !*(_DWORD *)(a1 + 12) )
    return 0;
  if ( dword_6E1AA8 )
  {
    v6[0] = 0;
    v6[1] = a1;
    v2 = sub_DFA98(dword_6E1AA8, (int)v6);
    if ( v2 )
      return *(char **)(*(_DWORD *)(v2 + 4) + 8);
  }
  v4 = (_DWORD *)sub_EAC70((int)&v5, (int)&unk_1B665C, 1071, 4, (int (__fastcall *)(int, int))sub_EA858);
  if ( v4 )
    return off_2078B0[6 * *v4 + 2];
  else
    return 0;
}
