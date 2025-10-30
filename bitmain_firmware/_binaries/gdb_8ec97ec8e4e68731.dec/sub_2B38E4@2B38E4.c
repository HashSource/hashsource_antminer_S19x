int __fastcall sub_2B38E4(int a1, int a2, int a3)
{
  _DWORD *v3; // r12
  _DWORD *v6; // lr
  _DWORD *v7; // r6
  int v8; // r0
  _DWORD *v9; // r3
  int v11; // lr
  int v12; // r7
  int v13; // r1
  int v14; // r6
  int v15; // lr
  bool v16; // zf
  int v17; // r0
  int v18; // r1
  int v19; // [sp+4h] [bp-8h]

  v3 = *(_DWORD **)(a3 + 72);
  if ( v3 )
  {
    v6 = *(_DWORD **)(a2 + 72);
    if ( v6 )
    {
      v7 = (_DWORD *)(a3 + 72);
LABEL_5:
      v8 = v3[1];
      v9 = v6;
      if ( v6[1] == v8 )
      {
LABEL_17:
        v11 = v3[2];
        v12 = v3[3];
        v3 = (_DWORD *)*v3;
        v13 = v9[2] + v11;
        v9[3] += v12;
        v9[2] = v13;
        *v7 = v3;
        v6 = *(_DWORD **)(a2 + 72);
        goto LABEL_10;
      }
      while ( 1 )
      {
        v9 = (_DWORD *)*v9;
        if ( !v9 )
          break;
        if ( v9[1] == v8 )
          goto LABEL_17;
      }
      while ( 1 )
      {
        v7 = v3;
        v3 = (_DWORD *)*v3;
LABEL_10:
        if ( !v3 )
          break;
        if ( v6 )
          goto LABEL_5;
      }
      *v7 = v6;
      v3 = *(_DWORD **)(a3 + 72);
    }
    *(_DWORD *)(a2 + 72) = v3;
    *(_DWORD *)(a3 + 72) = 0;
  }
  if ( *(_BYTE *)(a3 + 12) == 6 )
  {
    v14 = *(_DWORD *)(a3 + 80);
    v15 = *(_DWORD *)(a3 + 84);
    v16 = (*(_BYTE *)(a3 + 93) & 1) == 0;
    v17 = *(_DWORD *)(a2 + 80);
    v18 = *(_DWORD *)(a2 + 84);
    *(_DWORD *)(a2 + 76) += *(_DWORD *)(a3 + 76);
    *(_DWORD *)(a3 + 76) = 0;
    *(_DWORD *)(a2 + 80) = v17 + v14;
    *(_DWORD *)(a3 + 80) = 0;
    *(_DWORD *)(a2 + 84) = v18 + v15;
    *(_DWORD *)(a3 + 84) = 0;
    if ( !v16 )
    {
      v19 = a3;
      sub_2A6BBC("elf32-arm.c", 3745);
      a3 = v19;
    }
    if ( *(int *)(a2 + 36) <= 0 )
    {
      *(_BYTE *)(a2 + 92) = *(_BYTE *)(a3 + 92);
      *(_BYTE *)(a3 + 92) = 0;
    }
  }
  return sub_2E8C90(a1, a2);
}
