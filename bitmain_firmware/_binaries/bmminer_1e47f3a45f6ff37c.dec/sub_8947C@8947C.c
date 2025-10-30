int __fastcall sub_8947C(int a1, int a2, int a3)
{
  if ( !*(_DWORD *)(*(_DWORD *)(a2 + 8) + 316) )
    gettimeofday((struct timeval *)(*(_DWORD *)(a2 + 8) + 316), 0);
  return sub_8DF84(a3, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 320) / 1000, 3);
}
