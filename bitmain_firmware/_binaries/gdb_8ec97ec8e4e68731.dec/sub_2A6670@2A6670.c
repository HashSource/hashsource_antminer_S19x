int __fastcall sub_2A6670(int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r5
  int v6; // r3

  v3 = *(_DWORD *)(a1 + 132);
  v4 = a2;
  if ( *(_DWORD *)(v3 + 12) )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 132) + 12) )
      return (*(int (__fastcall **)(_DWORD))(v3 + 36))(*(_DWORD *)(a1 + 132));
    v6 = a1;
    a1 = a2;
    v4 = v6;
  }
  if ( a3 || !strcmp(**(const char ***)(a1 + 4), "binary") )
    return *(_DWORD *)(v4 + 132);
  else
    return 0;
}
