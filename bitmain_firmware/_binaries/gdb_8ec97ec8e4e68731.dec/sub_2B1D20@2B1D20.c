int __fastcall sub_2B1D20(_DWORD *a1, int a2, _BYTE *a3, int a4, __int64 a5, int a6)
{
  if ( (*(_DWORD *)(a2 + 20) & 3) == 0 )
    return 0;
  sub_2B1B8C(a1, (int *)(a2 + 28), a3, a6, a5, a6, 1);
  return 1;
}
