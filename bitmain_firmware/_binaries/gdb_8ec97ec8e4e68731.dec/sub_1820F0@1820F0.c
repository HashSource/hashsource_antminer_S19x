_DWORD *__fastcall sub_1820F0(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r5
  _DWORD *v9; // r4
  _DWORD *result; // r0
  _BYTE s[40]; // [sp+10h] [bp-28h] BYREF

  v5 = a4;
  if ( a4 )
    v5 = 1;
  memset(s, 0, sizeof(s));
  if ( dword_4878EC != dword_475848 || dword_4878F0 != dword_47584C || dword_4878F4 != dword_475850 )
  {
    ((void (__fastcall *)(_BYTE *))loc_23FF20)(s);
    s[36] = 1;
  }
  v6 = sub_23E408(a1, a2, a3);
  sub_23F8E4(v6);
  v7 = ((int (__fastcall *)(int, int, int))loc_23F1FC)(dword_4878EC, dword_4878F0, dword_4878F4);
  if ( v7 )
  {
    v8 = sub_183688(v7);
    sub_231EB4(dword_4878EC, dword_4878F0, dword_4878F4);
    *(_DWORD *)(v8 + 24) = 2;
    v9 = sub_93028(0xCu);
    *v9 = sub_327254("");
    v9[1] = a5;
    v9[2] = v5;
    result = sub_F84E4((int)sub_181EE8, (int)v9, (int)sub_17E844);
  }
  else
  {
    result = (_DWORD *)sub_181D30(a5, v5);
  }
  if ( s[36] )
  {
    s[36] = 0;
    return (_DWORD *)((int (__fastcall *)(_BYTE *))loc_23FC8C)(s);
  }
  return result;
}
