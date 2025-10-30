int __fastcall sub_11A1B8(int **a1, int *a2)
{
  int *v2; // r4
  int v3; // r5
  int v4; // r3
  int v5; // r0
  int v6; // r1
  int result; // r0

  v2 = *a1;
  v3 = *a2;
  v4 = **a1;
  if ( v4 )
  {
    if ( v4 == 1 && *(_DWORD *)v3 == 1 )
    {
      result = sub_126528(*(_DWORD *)v2[1], **(_DWORD **)(v3 + 4));
      if ( !result )
        return sub_126528(*(_DWORD *)(v2[1] + 4), *(_DWORD *)(*(_DWORD *)(v3 + 4) + 4));
    }
    else
    {
      return sub_126528(*(_DWORD *)v2[1], *(_DWORD *)(v3 + 4));
    }
  }
  else
  {
    if ( *(_DWORD *)v3 )
    {
      v5 = v2[1];
      v6 = **(_DWORD **)(v3 + 4);
    }
    else
    {
      v6 = *(_DWORD *)(v3 + 4);
      v5 = v2[1];
    }
    return sub_126528(v5, v6);
  }
  return result;
}
