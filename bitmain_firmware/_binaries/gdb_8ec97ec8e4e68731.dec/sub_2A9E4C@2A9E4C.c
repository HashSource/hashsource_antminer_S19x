bool __fastcall sub_2A9E4C(int a1, int a2)
{
  size_t n; // r6
  char *v6; // r0
  char *v7; // r7

  if ( (*(_BYTE *)(a1 + 40) & 0x18) != 8
    || (n = *(_DWORD *)(a2 + 36)) == 0
    || *(_DWORD *)(a2 + 40)
    || *(_DWORD *)(a2 + 108)
    || (*(_BYTE *)(a2 + 24) & 0x30) != 0 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return 0;
  }
  else
  {
    v6 = (char *)sub_2AB368(*(_DWORD *)(a2 + 36), a2);
    v7 = v6;
    return v6 && sub_2ADEDC(a1, a2, v6, 0, 0, 0, n) && sub_2A9AAC(a1, a2, v7, n) != 0;
  }
}
