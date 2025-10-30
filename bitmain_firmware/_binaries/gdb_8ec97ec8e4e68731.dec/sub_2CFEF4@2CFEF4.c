int __fastcall sub_2CFEF4(int a1, unsigned int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 160);
  if ( *(_DWORD *)(v2 + 532) <= a2 )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 64) + 4 * a2) + 44);
}
