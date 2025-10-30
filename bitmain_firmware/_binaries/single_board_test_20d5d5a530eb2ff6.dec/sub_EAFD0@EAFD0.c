char *__fastcall sub_EAFD0(int a1)
{
  int v1; // r0
  char *result; // r0
  _DWORD *v3; // [sp+Ch] [bp-24h] BYREF
  _DWORD v4[2]; // [sp+10h] [bp-20h] BYREF
  _DWORD v5[6]; // [sp+18h] [bp-18h] BYREF

  v5[0] = a1;
  v3 = v5;
  if ( dword_6E1AA8 )
  {
    v4[1] = v5;
    v4[0] = 1;
    v1 = sub_DFA98(dword_6E1AA8, (int)v4);
    if ( v1 )
      return *(char **)(*(_DWORD *)(v1 + 4) + 8);
  }
  result = (char *)sub_EAC70((int)&v3, (int)&unk_1B89A0, 1186, 4, (int (__fastcall *)(int, int))sub_EA7A8);
  if ( result )
    return off_2078B0[6 * *(_DWORD *)result + 2];
  return result;
}
