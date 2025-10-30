char *__fastcall sub_240128(int a1)
{
  char *v2; // r0
  char *v3; // r4
  int v4; // r12

  v2 = sub_98850();
  v3 = v2;
  if ( *(_DWORD *)(dword_487918 + 4) )
  {
    v4 = *(_DWORD *)(a1 + 24);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( *(_DWORD *)(dword_487918 + 8) == 1 )
    {
      sub_93170(v2, 0x32u, "%d", *(_DWORD *)(a1 + 24));
      return v3;
    }
  }
  sub_93170(v2, 0x32u, "%d.%d", *(_DWORD *)(*(_DWORD *)(a1 + 28) + 8), v4);
  return v3;
}
