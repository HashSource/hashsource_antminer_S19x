int __fastcall sub_AEEC4(int a1, int a2)
{
  int v2; // r8
  _DWORD *v3; // r7
  int v5; // r4
  int v6; // r0
  _DWORD *v7; // r5
  _DWORD *v8; // r0
  int result; // r0

  v2 = 8 * a2;
  v3 = *(_DWORD **)(a1 + 4);
  v5 = *(_DWORD *)a1 + 8 * a2;
  if ( v3 == (_DWORD *)v5 )
  {
    v6 = *(_DWORD *)a1 + 8 * a2;
    goto LABEL_7;
  }
  sub_AEC94(v5, *(char **)(a1 + 4), 2 * (31 - __clz(((int)v3 - v5) >> 3)));
  if ( (int)v3 - v5 <= 128 )
  {
    sub_AF904(v5, v3, 0);
    goto LABEL_11;
  }
  v7 = (_DWORD *)(v5 + 128);
  sub_AF904(v5, v5 + 128, 0);
  if ( v3 == (_DWORD *)(v5 + 128) )
  {
LABEL_11:
    v5 = *(_DWORD *)(a1 + 4);
    v6 = *(_DWORD *)a1 + v2;
    goto LABEL_7;
  }
  do
  {
    v8 = v7;
    v7 += 2;
    sub_A3C08(v8);
  }
  while ( v3 != v7 );
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)a1 + v2;
LABEL_7:
  result = sub_AF748(v6, v5, 0);
  if ( *(_DWORD *)(a1 + 4) != result )
    *(_DWORD *)(a1 + 4) = result;
  return result;
}
