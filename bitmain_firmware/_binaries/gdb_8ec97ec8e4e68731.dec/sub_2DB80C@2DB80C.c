int __fastcall sub_2DB80C(int *a1, int *a2)
{
  int v2; // r12
  int v3; // r2
  int v4; // r1
  bool v5; // zf
  bool v6; // nf
  int v7; // r1
  int v8; // r3
  int result; // r0
  int v10; // r2

  v2 = *a1;
  v3 = *a2;
  v4 = *(_DWORD *)(*a2 + 24);
  v5 = *(_DWORD *)(*a1 + 24) == v4;
  v6 = *(_DWORD *)(*a1 + 24) - v4 < 0;
  if ( *(_DWORD *)(*a1 + 24) != v4 )
    goto LABEL_3;
  v7 = *(_DWORD *)(v2 + 20);
  v8 = *(_DWORD *)(*(_DWORD *)(v3 + 20) + 4);
  result = *(_DWORD *)(v7 + 4) - v8;
  v5 = *(_DWORD *)(v7 + 4) == v8;
  v6 = result < 0;
  if ( *(_DWORD *)(v7 + 4) != v8
    || (v10 = *(_DWORD *)(v3 + 44),
        v5 = *(_DWORD *)(v2 + 44) == v10,
        v6 = *(_DWORD *)(v2 + 44) - v10 < 0,
        *(_DWORD *)(v2 + 44) != v10) )
  {
LABEL_3:
    if ( v6 || v5 )
      return -1;
    else
      return 1;
  }
  return result;
}
