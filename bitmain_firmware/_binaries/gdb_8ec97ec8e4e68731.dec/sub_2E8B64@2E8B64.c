int __fastcall sub_2E8B64(int a1, int a2)
{
  int v2; // r12
  _DWORD *i; // r4
  int j; // r5
  int v8; // r10
  int v9; // r2

  v2 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v2 + 40) != 1 )
    return 0;
  for ( i = *(_DWORD **)(a2 + 56); i; i = (_DWORD *)i[39] )
  {
    if ( (i[10] & 0x800) == 0
      && *(_DWORD *)(i[1] + 4) == 5
      && *(unsigned __int8 *)(i[40] + 4) == *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 392)
                                                               + 12) )
    {
      for ( j = i[25]; j; j = *(_DWORD *)(j + 12) )
      {
        if ( (*(_DWORD *)(j + 20) & 0x800000) != 0 && *(char ***)(j + 60) != &off_470950 )
        {
          v8 = *(_DWORD *)(j + 140);
          if ( !sub_2FFB54(a1, v2 + 128, j, v8 + 136) )
            return 0;
          if ( *(_DWORD *)(v8 + 136) )
            *(_WORD *)(j + 24) = *(_WORD *)(j + 24) & 0xFC7F | 0x100;
          v2 = *(_DWORD *)(a2 + 28);
        }
      }
    }
  }
  v9 = *(_DWORD *)(v2 + 128);
  if ( v9 )
    sub_2FFDAC(a1, a2, v9, sub_2DBAC8);
  return 1;
}
