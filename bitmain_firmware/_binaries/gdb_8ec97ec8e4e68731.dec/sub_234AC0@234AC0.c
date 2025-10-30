int __fastcall sub_234AC0(int a1, unsigned int a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_48A4B4);
  if ( a2 >= (v3[1] - *v3) >> 3 )
    return 0;
  else
    return *v3 + 8 * a2;
}
