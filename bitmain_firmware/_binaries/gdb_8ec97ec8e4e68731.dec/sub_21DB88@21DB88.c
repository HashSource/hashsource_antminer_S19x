int __fastcall sub_21DB88(unsigned int a1, int a2)
{
  unsigned int v4; // r3
  unsigned int v5; // r2
  bool v6; // cc
  _DWORD *v7; // r8
  unsigned int v8; // r7
  _DWORD *v9; // r10
  _DWORD *i; // r4
  unsigned int *v11; // r5
  unsigned int v12; // r2
  int v13; // r3
  int (__fastcall *v14)(_DWORD *, int, int, unsigned int, int, _DWORD); // r11
  int result; // r0
  int v16; // r11
  int v17; // r0
  bool v18; // cc
  int v19; // r3
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // r4
  int v23; // r2
  int v24; // r12
  int v25; // [sp+8h] [bp-2Ch]
  int v26; // [sp+10h] [bp-24h] BYREF
  int v27; // [sp+14h] [bp-20h]
  _DWORD v28[7]; // [sp+18h] [bp-1Ch] BYREF

  sub_1B23BC(&v26, a1, a2);
  v25 = v26;
  if ( v26 )
  {
    v4 = *(_BYTE *)(v26 + 32) & 0xF;
    v5 = v4 - 4;
    v4 -= 9;
    v6 = v4 > 1;
    if ( v4 > 1 )
      v6 = v5 > 2;
    if ( !v6 )
      return 0;
  }
  v7 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v7 )
    return 0;
  v8 = 0;
  v9 = 0;
  do
  {
    for ( i = (_DWORD *)v7[5]; i; i = (_DWORD *)*i )
    {
      v11 = *(unsigned int **)(i[8] + 8);
      if ( *v11 > a1 )
        continue;
      v12 = v11[1];
      if ( v12 <= a1 || v8 && v12 - *v11 >= v8 )
        continue;
      if ( (v7[3] & 1) != 0 )
      {
        v13 = v7[33];
        if ( v13 )
        {
          v14 = *(int (__fastcall **)(_DWORD *, int, int, unsigned int, int, _DWORD))(*(_DWORD *)(v13 + 40) + 52);
          v26 = v25;
          result = v14(v7, v25, v27, a1, a2, 0);
          if ( result )
            return result;
        }
      }
      if ( a2 )
      {
        v16 = sub_C28A8(v11, v28);
        if ( !v16 )
          continue;
        while ( 1 )
        {
          v19 = *(unsigned __int8 *)(v16 + 33);
          if ( (v19 & 1) != 0 )
            ((void (__fastcall *)(int, _DWORD *))loc_21C1E0)(v16, v7);
          v17 = *(__int16 *)(v16 + 22);
          v18 = v17 < 0;
          if ( v17 >= 0 )
            v19 = v7[42];
          v20 = 3 * v17;
          v21 = v18 ? 0 : v19 + 4 * v20;
          if ( ((int (__fastcall *)(int, int))loc_21BE10)(v21, a2) )
            break;
          v16 = sub_C28E4((int)v28);
          if ( !v16 )
            goto LABEL_18;
        }
      }
      v9 = i;
      v8 = v11[1] - *v11;
LABEL_18:
      ;
    }
    v7 = (_DWORD *)*v7;
  }
  while ( v7 );
  if ( v9 )
    return (int)v9;
  v22 = *(_DWORD **)(dword_487D2C + 36);
  if ( !v22 )
    return 0;
  while ( 1 )
  {
    v23 = v22[33];
    if ( v23 )
    {
      v24 = *(_DWORD *)(v23 + 40);
      v26 = v25;
      result = (*(int (__fastcall **)(_DWORD *, int, int, unsigned int, int, int))(v24 + 52))(v22, v25, v27, a1, a2, 1);
      if ( result )
        break;
    }
    v22 = (_DWORD *)*v22;
    if ( !v22 )
      return 0;
  }
  return result;
}
