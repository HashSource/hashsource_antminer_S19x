int __fastcall sub_2D4C58(int a1, int a2, int a3, int a4, _BYTE *a5)
{
  _BOOL4 v5; // r4
  int result; // r0
  _DWORD *v8; // r3
  _DWORD *v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r2
  int v15; // r0
  bool v16; // zf
  int v17; // r2
  int v18; // r12
  int v19; // r12
  int v20; // r2

  if ( a5 )
    v5 = (*a5 & 3) != 2;
  else
    v5 = 0;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) != 5 || *(_DWORD *)(*(_DWORD *)(a3 + 4) + 4) != 5 )
    return 1;
  v8 = *(_DWORD **)(a4 + 140);
  if ( !v8 )
  {
    sub_2A6BBC("elf.c", 7444);
    v8 = *(_DWORD **)(a4 + 140);
  }
  v11 = *(_DWORD **)(a2 + 140);
  if ( !v8[1] )
  {
    v12 = *(_DWORD *)(a4 + 20);
    v13 = *(_DWORD *)(a2 + 20);
    if ( v12 == v13 || v5 && ((v12 ^ v13) & 0xFFF1FFFB) == 0 )
      v8[1] = v11[1];
  }
  v14 = (v11[2] >> 20 << 20) | v8[2];
  v8[2] = v14;
  v15 = v11[2];
  if ( (v15 & 0x1000000) != 0 )
    v8[8] = v11[8];
  if ( !a5 || (a5[1] & 0x10) == 0 )
  {
    v18 = v11[30];
    if ( !v18 || (*(_DWORD *)(v18 + 20) & 0x100000) == 0 )
    {
      v19 = v11[31];
      if ( (v15 & 0x200) != 0 )
        v8[2] = v14 | 0x200;
      v20 = v11[29];
      if ( (v15 & 0x200) != 0 )
        v15 = v11[2];
      v8[31] = v19;
      v8[29] = v20;
    }
  }
  if ( !v5 && (*(_DWORD *)(a1 + 40) & 0x100000) == 0 )
  {
    v8[2] |= v15 & 0x800;
    v15 = v11[2];
  }
  v16 = (v15 & 0x80) == 0;
  result = 1;
  if ( !v16 )
  {
    v17 = v8[2] | 0x80;
    v8[25] = v11[25];
    v8[2] = v17;
  }
  *(_BYTE *)(a4 + 25) = *(_BYTE *)(a4 + 25) & 0xFB | (4 * ((*(_BYTE *)(a2 + 25) & 4) != 0));
  return result;
}
