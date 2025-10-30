bool __fastcall sub_A33DC(int a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // r7
  _BOOL4 v8; // r12
  int v10; // r3
  int v11; // r5
  int v12; // r3

  v4 = *(_DWORD **)(a1 + 124);
  v5 = a2[4];
  if ( (v5 & v4[168]) != 0 )
    return 1;
  if ( (a2[5] & v4[169]) != 0 )
    return 1;
  v6 = v4[171];
  if ( !v6 )
    return 1;
  if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8) != 0 )
  {
    v10 = a2[10];
    if ( v10 == 256 )
    {
      if ( v6 == 256 )
        goto LABEL_18;
      v10 = 65280;
    }
    else if ( v6 == 256 )
    {
      v6 = 65280;
    }
    if ( v6 > v10 )
      return 1;
LABEL_18:
    v11 = a2[11];
    v12 = v4[170];
    if ( v11 == 256 )
    {
      if ( v12 == 256 )
        return sub_854EC(a1, a3) == 0;
      v11 = 65280;
    }
    else if ( v12 == 256 )
    {
      v12 = 65280;
    }
    if ( v12 < v11 )
      return 1;
    return sub_854EC(a1, a3) == 0;
  }
  v7 = a2[8];
  v8 = v7 == 769;
  if ( !a4 )
    v8 = 0;
  if ( v8 )
  {
    if ( (v5 & 0x84) != 0 )
      v7 = 768;
    else
      v7 = 769;
  }
  if ( v7 <= v6 && a2[9] >= v4[170] )
    return sub_854EC(a1, a3) == 0;
  return 1;
}
