int __fastcall sub_110914(_DWORD *a1, int a2)
{
  int result; // r0
  int (__fastcall *v5)(_DWORD, _DWORD *); // r3
  int v6; // [sp+Ch] [bp-8h] BYREF

  if ( (*(_DWORD *)(a1[4] + 12) & 0x10) != 0
    || (*(_DWORD *)(a2 + 72) & 0x200) == 0
    || (a1[24] = 36, (result = ((int (__fastcall *)(_DWORD, _DWORD *))a1[7])(0, a1)) != 0) )
  {
    if ( sub_1154F0(a2, &v6) )
    {
      if ( *(_DWORD *)(v6 + 28) == 8 )
      {
        return 2;
      }
      else
      {
        v5 = (int (__fastcall *)(_DWORD, _DWORD *))a1[7];
        a1[24] = 23;
        return v5(0, a1) != 0;
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
