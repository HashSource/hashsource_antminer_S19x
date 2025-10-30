bool __fastcall sub_110E50(int a1, int a2, unsigned int a3)
{
  int v3; // r5
  int v4; // r3
  time_t *v5; // r5
  unsigned int v6; // r7
  _DWORD *v10; // r0
  int v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // r3
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r7
  int v19; // r0
  int v20; // r3

  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_DWORD *)(v3 + 12);
  if ( (v4 & 2) != 0 )
  {
    v5 = (time_t *)(v3 + 4);
  }
  else
  {
    if ( (v4 & 0x200000) != 0 )
      return 1;
    v5 = 0;
  }
  v6 = a3 >> 31;
  v10 = (_DWORD *)sub_10FD3C(a2);
  v11 = sub_110DC0(v10, v5);
  if ( v11 >= 0 )
    v12 = v6 & 1;
  else
    v12 = 0;
  if ( v12 )
    return 0;
  if ( v11 )
  {
    if ( v11 <= 0 )
      goto LABEL_16;
    *(_DWORD *)(a1 + 92) = a3;
    v13 = a2;
    if ( !a2 )
      v13 = sub_10C01C(*(_DWORD **)(a1 + 80), a3);
    v14 = 9;
  }
  else
  {
    *(_DWORD *)(a1 + 92) = a3;
    v13 = a2;
    if ( !a2 )
      v13 = sub_10C01C(*(_DWORD **)(a1 + 80), a3);
    v14 = 13;
  }
  *(_DWORD *)(a1 + 100) = v13;
  *(_DWORD *)(a1 + 96) = v14;
  if ( !(*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) )
    return 0;
LABEL_16:
  v15 = (_DWORD *)sub_10FD40(a2);
  v16 = sub_110DC0(v15, v5);
  if ( v16 <= 0 )
    v17 = v6 & 1;
  else
    v17 = 0;
  if ( v17 )
    return 0;
  if ( v16 )
  {
    if ( v16 >= 0 )
      return 1;
    *(_DWORD *)(a1 + 92) = a3;
    v19 = a2;
    if ( !a2 )
      v19 = sub_10C01C(*(_DWORD **)(a1 + 80), a3);
    v20 = 10;
  }
  else
  {
    *(_DWORD *)(a1 + 92) = a3;
    v19 = a2;
    if ( !a2 )
      v19 = sub_10C01C(*(_DWORD **)(a1 + 80), a3);
    v20 = 14;
  }
  *(_DWORD *)(a1 + 100) = v19;
  *(_DWORD *)(a1 + 96) = v20;
  return (*(int (__fastcall **)(_DWORD, int))(a1 + 28))(0, a1) != 0;
}
