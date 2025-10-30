int __fastcall sub_11A9D8(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r1
  int v5; // r4
  _DWORD *v8; // r0
  int v9; // r5
  int *v10; // r0
  _DWORD *v11; // r3
  int v13; // r5

  if ( !a1 )
    return 0;
  if ( a2 )
  {
    if ( a2 != 1 )
      return 0;
    v4 = *(_DWORD **)(a1 + 4);
    v5 = a1 + 4;
  }
  else
  {
    v5 = a1;
    v4 = *(_DWORD **)a1;
  }
  if ( v4 )
  {
    if ( *v4 )
      goto LABEL_7;
    return 0;
  }
  v13 = sub_11A914();
  *(_DWORD *)v5 = v13;
  if ( !v13 )
    return 0;
  *(_DWORD *)(v13 + 4) = sub_10BFD4(sub_11A1B8);
  if ( !*(_DWORD *)(*(_DWORD *)v5 + 4) )
    return 0;
  **(_DWORD **)v5 = 1;
LABEL_7:
  v8 = (_DWORD *)sub_11A668();
  v9 = (int)v8;
  if ( !v8 )
    return 0;
  if ( !a4 )
  {
    *v8 = 0;
    v8[1] = a3;
LABEL_11:
    if ( sub_10BD3C(*(int **)(*(_DWORD *)v5 + 4), v9) )
      return 1;
    goto LABEL_15;
  }
  *v8 = 1;
  v10 = (int *)sub_11A610();
  *(_DWORD *)(v9 + 4) = v10;
  if ( v10 )
  {
    ASN1_INTEGER_free(*v10);
    v11 = *(_DWORD **)(v9 + 4);
    *v11 = a3;
    ASN1_INTEGER_free(v11[1]);
    *(_DWORD *)(*(_DWORD *)(v9 + 4) + 4) = a4;
    goto LABEL_11;
  }
LABEL_15:
  sub_11A67C(v9);
  return 0;
}
