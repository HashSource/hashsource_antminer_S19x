int __fastcall sub_860C4(int a1, int a2, int a3)
{
  if ( !*(_DWORD *)(*(_DWORD *)(a2 + 8) + 316) )
    gettimeofday((struct timeval *)(*(_DWORD *)(a2 + 8) + 316), 0);
  return sub_8ABF0(a3, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 320) / 1000, 3);
}
