void __fastcall sub_480A4(int a1, _DWORD *a2)
{
  int v2; // r3
  int v4; // [sp+8h] [bp-Ch]

  --*(_DWORD *)(a1 + 360);
  if ( a2[87] || a2[88] )
  {
    if ( (_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 16)
                  - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 20)) == a2 )
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 16) = a2[87]
                                                                 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344)
                                                                             + 20);
    if ( a2[87] )
      *(_DWORD *)(a2[87] + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 20) + 8) = a2[88];
    else
      *(_DWORD *)(a1 + 352) = a2[88];
    if ( a2[88] )
      *(_DWORD *)(a2[88] + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 20) + 4) = a2[87];
    v4 = (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 4) - 1) & a2[93];
    v2 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + 12 * v4;
    --*(_DWORD *)(v2 + 4);
    if ( *(_DWORD **)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + 12 * v4) == a2 + 86 )
      *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + 12 * v4) = a2[90];
    if ( a2[89] )
      *(_DWORD *)(a2[89] + 16) = a2[90];
    if ( a2[90] )
      *(_DWORD *)(a2[90] + 12) = a2[89];
    --*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 12);
  }
  else
  {
    free(**(void ***)(*(_DWORD *)(a1 + 352) + 344));
    free(*(void **)(*(_DWORD *)(a1 + 352) + 344));
    *(_DWORD *)(a1 + 352) = 0;
  }
}
