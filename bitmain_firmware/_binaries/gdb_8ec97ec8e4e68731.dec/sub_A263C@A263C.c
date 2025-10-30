int __fastcall sub_A263C(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r2
  int v6; // r1

  while ( sub_A2514(a1) )
  {
    v3 = sub_A0870(a1);
    v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v3 + 24) + 24) + 12);
    v5 = *(_DWORD *)(v4 + 24);
    if ( v4 && (*(_DWORD *)(v5 + 8) || *(_DWORD *)(v5 + 12)) )
    {
      a1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v3 + 24) + 24) + 12);
    }
    else
    {
      if ( a1 )
      {
        v6 = *(_DWORD *)(a1 + 24);
        a1 = *(_DWORD *)(v6 + 8);
        if ( !a1 )
          a1 = *(_DWORD *)(v6 + 12);
      }
      *(_DWORD *)(v5 + 8) = a1;
      a1 = v4;
    }
  }
  result = sub_A2598(a1);
  if ( a1 != result )
    return sub_A2950();
  return result;
}
