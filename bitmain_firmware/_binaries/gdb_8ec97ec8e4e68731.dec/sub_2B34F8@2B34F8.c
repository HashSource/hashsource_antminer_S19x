int __fastcall sub_2B34F8(int a1)
{
  int v1; // r2
  int v4; // r5
  char *v5; // r2
  int v6; // r5
  _DWORD *v7; // r3
  char *v8; // r1

  v1 = *(_DWORD *)(a1 + 160);
  if ( *(_DWORD *)(v1 + 540) )
    return 1;
  v4 = *(_DWORD *)(v1 + 104);
  v5 = (char *)sub_2AD09C(a1, 13 * v4);
  if ( !v5 )
    return 0;
  v6 = 4 * v4;
  v7 = *(_DWORD **)(a1 + 160);
  v8 = &v5[v6 + v6];
  v7[135] = v5;
  v7[590] = &v5[v6];
  v7[588] = &v8[v6];
  v7[589] = v8;
  return 1;
}
