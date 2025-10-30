bool __fastcall sub_8F6EC(_DWORD *a1, int a2, int a3, int a4)
{
  char v5; // r4
  char v6; // r5
  int v9; // r3

  if ( (a2 & a3) == 0 )
    return 0;
  v5 = a2;
  v6 = a3;
  if ( !sub_8F1B0(a1, a2, a3) )
    return 0;
  if ( (v5 & 0x20) == 0 || (v6 & 0x80) == 0 )
    return 1;
  v9 = (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) >> 3) & 1;
  if ( a4 < 772 )
    v9 = 1;
  return !v9;
}
