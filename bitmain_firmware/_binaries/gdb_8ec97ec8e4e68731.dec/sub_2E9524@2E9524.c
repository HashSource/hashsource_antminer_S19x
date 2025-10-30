_DWORD *__fastcall sub_2E9524(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4
  int v5; // r3
  int v6; // r2
  int v8; // r3
  _DWORD *v9; // r7

  v2 = (_DWORD *)a1[31];
  if ( v2 )
  {
    if ( (v2[5] & 0x2000000) != 0 )
    {
      v8 = v2[35];
      v9 = *(_DWORD **)(v8 + 124);
      if ( !v9 )
      {
LABEL_8:
        v2 = 0;
LABEL_9:
        a1[31] = v2;
        return v2;
      }
      v2 = *(_DWORD **)(v8 + 124);
      while ( !sub_2DBEE8((int)v2, (int)a1, a2) )
      {
        v2 = *(_DWORD **)(v2[35] + 124);
        if ( v9 == v2 || !v2 )
          goto LABEL_8;
      }
    }
    v5 = a1[10];
    if ( !v5 )
      v5 = a1[9];
    v6 = v2[10];
    if ( !v6 )
      v6 = v2[9];
    if ( v5 == v6 )
      goto LABEL_9;
    goto LABEL_8;
  }
  return v2;
}
