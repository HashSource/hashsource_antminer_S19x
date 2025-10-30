int __fastcall sub_2A7CA0(int a1, int a2)
{
  int v2; // r3
  int v4; // r3

  v2 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(v2 + 4) != 5 )
    return 0;
  if ( a2 == 1 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v2 + 444) + 384);
    if ( v4 )
      goto LABEL_7;
    return 0;
  }
  if ( a2 == 2 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v2 + 444) + 388);
    if ( v4 )
      goto LABEL_7;
    return 0;
  }
  if ( a2 )
    return 0;
  v4 = *(_DWORD *)(*(_DWORD *)(v2 + 444) + 8);
LABEL_7:
  *(_WORD *)(*(_DWORD *)(a1 + 160) + 38) = v4;
  return 1;
}
