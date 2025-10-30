int __fastcall sub_2F9DD8(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int *a5)
{
  int v5; // r12
  _DWORD *v6; // lr
  int v7; // r4
  int v8; // r5
  int v10; // lr

  v5 = *a5;
  if ( !*a5 )
    return 0;
  v6 = *(_DWORD **)(v5 + 104);
  if ( !v6 )
    return 0;
  v7 = v6[1];
  if ( !v7 )
    return 0;
  v8 = v6[2];
  v10 = v6[4];
  *a2 = v8;
  *a3 = *(_DWORD *)(v7 + 32);
  *a4 = v10;
  *(_DWORD *)(v5 + 104) = v7;
  return 1;
}
