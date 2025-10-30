int __fastcall sub_EBC54(int a1, int a2, int a3, int a4, int a5, void *a6, int a7, int a8)
{
  int v13; // r8
  int v14; // r0

  if ( !*(_DWORD *)(a8 + 12) || !sub_1012C0() )
    return sub_1023A4(a1, a2, a3, a3 >> 31, a4, a5, a6, a7, a8, 0);
  v13 = sub_170040(a1);
  v14 = sub_15AEA8(
          a2 + a3 + *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + 48) / 8LL,
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + 60));
  return sub_267E04(a8, v13, v14, a5);
}
