int __fastcall sub_2E8C90(int result, int a2, int a3)
{
  char v3; // r12
  unsigned int v4; // r6
  char v5; // r3
  int v6; // lr
  char v7; // r3
  _DWORD *v8; // r3
  int v9; // r12
  int v10; // lr
  int v11; // r0
  int v12; // r12
  int v13; // lr
  int v16; // r1
  int v17; // r0

  v3 = *(_BYTE *)(a2 + 52);
  if ( (v3 & 6) != 6 )
    *(_BYTE *)(a2 + 51) = *(_BYTE *)(a2 + 51) & 0xFB
                        | (4 * ((*(_BYTE *)(a2 + 51) & 4) != 0 || (*(_BYTE *)(a3 + 51) & 4) != 0));
  v4 = *(unsigned __int8 *)(a2 + 53);
  v5 = *(_BYTE *)(a2 + 51) & 0xFE | *(_BYTE *)(a2 + 51) & 1 | *(_BYTE *)(a3 + 51) & 1;
  *(_BYTE *)(a2 + 51) = v5;
  v6 = (v4 >> 1) & 1;
  *(_BYTE *)(a2 + 51) = v5 & 0xEF | (16 * ((v5 & 0x10) != 0 || (*(_BYTE *)(a3 + 51) & 0x10) != 0));
  v7 = v4;
  LOBYTE(v4) = *(_BYTE *)(a2 + 51);
  *(_BYTE *)(a2 + 52) = v3 & 0xBF | (((v3 & 0x40) != 0 || (*(_BYTE *)(a3 + 52) & 0x40) != 0) << 6);
  *(_BYTE *)(a2 + 51) = v4 & 0x7F | (((*(_BYTE *)(a3 + 51) >> 7) | ((v4 & 0x80) != 0)) << 7);
  *(_BYTE *)(a2 + 53) = v7 & 0xFD | (2 * (v6 & 1 | ((*(_BYTE *)(a3 + 53) & 2) != 0)));
  if ( *(_BYTE *)(a3 + 12) == 6 )
  {
    v8 = *(_DWORD **)(result + 28);
    v9 = *(_DWORD *)(a3 + 36);
    v10 = v8[15];
    if ( v9 > v10 )
    {
      v11 = *(_DWORD *)(a2 + 36);
      if ( v11 < 0 )
      {
        v11 = 0;
        *(_DWORD *)(a2 + 36) = 0;
        v9 = *(_DWORD *)(a3 + 36);
      }
      *(_DWORD *)(a2 + 36) = v11 + v9;
      *(_DWORD *)(a3 + 36) = v10;
    }
    v12 = *(_DWORD *)(a3 + 40);
    v13 = v8[16];
    if ( v12 > v13 )
    {
      v17 = *(_DWORD *)(a2 + 40);
      if ( v17 < 0 )
      {
        v17 = 0;
        *(_DWORD *)(a2 + 40) = 0;
        v12 = *(_DWORD *)(a3 + 40);
      }
      *(_DWORD *)(a2 + 40) = v17 + v12;
      *(_DWORD *)(a3 + 40) = v13;
    }
    result = *(_DWORD *)(a3 + 32);
    if ( result != -1 )
    {
      if ( *(_DWORD *)(a2 + 32) != -1 )
      {
        sub_2F02DC(v8[21], *(_DWORD *)(a2 + 56));
        result = *(_DWORD *)(a3 + 32);
      }
      v16 = *(_DWORD *)(a3 + 56);
      *(_DWORD *)(a2 + 32) = result;
      *(_DWORD *)(a2 + 56) = v16;
      *(_DWORD *)(a3 + 32) = -1;
      *(_DWORD *)(a3 + 56) = 0;
    }
  }
  return result;
}
