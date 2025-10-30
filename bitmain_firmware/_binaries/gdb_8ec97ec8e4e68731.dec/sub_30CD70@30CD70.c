_DWORD *__fastcall sub_30CD70(int a1, int a2)
{
  int v3; // r3
  int v5; // r1
  int v6; // r1
  _DWORD *result; // r0

  v3 = *(_DWORD *)(a1 + 92);
  v5 = *(_DWORD *)(a1 + 88);
  if ( v3 < v5 )
  {
    result = *(_DWORD **)(a1 + 84);
    goto LABEL_7;
  }
  if ( !v5 )
    goto LABEL_12;
  if ( v5 > 15 )
  {
    if ( v5 <= 1431655764 )
    {
      v6 = (3 * v5) >> 1;
      *(_DWORD *)(a1 + 88) = v6;
      goto LABEL_6;
    }
    sub_930D8(0x7FFFFFFF);
LABEL_12:
    *(_DWORD *)(a1 + 88) = 4;
    result = sub_93028(0x10u);
    v3 = *(_DWORD *)(a1 + 92);
    *(_DWORD *)(a1 + 84) = result;
    goto LABEL_7;
  }
  v6 = 2 * v5;
  *(_DWORD *)(a1 + 88) = v6;
LABEL_6:
  result = sub_93050(*(void **)(a1 + 84), 4 * v6);
  v3 = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 84) = result;
LABEL_7:
  *(_DWORD *)(a1 + 92) = v3 + 1;
  result[v3] = a2;
  return result;
}
