__int64 __fastcall sub_25A78(int a1, int a2, int a3)
{
  int v3; // r4
  unsigned int v4; // r4
  _DWORD *v6; // r0

  if ( a3 != 15 )
    return sub_20B88(a1, a3);
  v3 = *(_DWORD *)(a2 + 204);
  if ( *(_DWORD *)(a2 + 164) )
    v4 = v3 + 4;
  else
    v4 = v3 + 8;
  if ( dword_487978 )
  {
    v6 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v6, "displaced: read pc value %.8lx\n", v4);
  }
  return v4;
}
