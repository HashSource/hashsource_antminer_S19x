void __fastcall sub_26148(int a1, int a2, int a3)
{
  __int64 v5; // r4
  __int64 v6; // r6
  int v7; // r3
  char v8; // r2
  __int64 v9; // [sp+10h] [bp-8h]

  v5 = sub_20B88(a2, 0);
  if ( *(_DWORD *)(a3 + 144) == 8 )
    v9 = sub_20B88(a2, 1);
  else
    v9 = 0;
  v6 = sub_20B88(a2, 2);
  sub_25B70(a2, a3, 0, *(_DWORD *)(a3 + 12), *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12), 4);
  if ( *(int *)(a3 + 144) > 4 )
    sub_25B70(a2, a3, 1, *(_DWORD *)(a3 + 20), *(_DWORD *)(a3 + 16), *(_DWORD *)(a3 + 20), 4);
  sub_25B70(a2, a3, 2, *(_DWORD *)(a3 + 28), *(_DWORD *)(a3 + 24), *(_DWORD *)(a3 + 28), 4);
  v8 = *(_BYTE *)(a3 + 152);
  if ( (v8 & 1) == 0 )
  {
    sub_25B70(a2, a3, 3, *(_DWORD *)(a3 + 36), *(_DWORD *)(a3 + 32), *(_DWORD *)(a3 + 36), 4);
    v8 = *(_BYTE *)(a3 + 152);
  }
  if ( (v8 & 2) != 0 )
    sub_25B70(a2, a3, *(_DWORD *)(a3 + 148), 4, v6, SHIDWORD(v6), 4);
  sub_25B70(a2, a3, *(_DWORD *)(a3 + 136), v7, v5, SHIDWORD(v5), 2);
  if ( *(_DWORD *)(a3 + 144) == 8 )
    sub_25B70(a2, a3, *(_DWORD *)(a3 + 136) + 1, 8, v9, SHIDWORD(v9), 2);
}
