int __fastcall sub_85F78(int a1, int a2, int a3)
{
  size_t v3; // r0
  time_t timer; // [sp+14h] [bp-10h] BYREF
  struct tm *tp; // [sp+18h] [bp-Ch]
  char *s; // [sp+1Ch] [bp-8h]

  s = (char *)(*(_DWORD *)(*(_DWORD *)(a2 + 8) + 372) + 4108 * *(_DWORD *)(a1 + 4108));
  timer = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 316);
  tp = (struct tm *)(*(_DWORD *)(a2 + 8) + 328);
  if ( !timer )
  {
    gettimeofday((struct timeval *)(*(_DWORD *)(a2 + 8) + 316), 0);
    timer = *(_DWORD *)(*(_DWORD *)(a2 + 8) + 316);
  }
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 8) + 324) != timer )
  {
    localtime_r(&timer, tp);
    *(_DWORD *)(*(_DWORD *)(a2 + 8) + 324) = timer;
  }
  if ( *((_DWORD *)s + 1026) != timer )
  {
    v3 = strftime(s, 0x1001u, (const char *)(a1 + 8), tp);
    *((_DWORD *)s + 1025) = v3;
    *((_DWORD *)s + 1026) = timer;
  }
  return sub_8B584(a3, s, *((_DWORD *)s + 1025));
}
