int __fastcall sub_2DB2B8(int a1, _DWORD *a2, int a3, int a4)
{
  int v4; // r3

  v4 = a4 + *a2;
  if ( (*(_WORD *)(*(_DWORD *)a3 + 24) & 0x380) == 0x100 )
    return sub_30061C(a1, a3, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a3 + 140) + 136), v4);
  else
    return v4;
}
