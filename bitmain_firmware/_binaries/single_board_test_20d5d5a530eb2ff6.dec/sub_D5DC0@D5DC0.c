int __fastcall sub_D5DC0(int a1, unsigned __int8 *a2, void *src)
{
  bool v3; // zf
  int v4; // r4
  signed int v5; // r3
  int v8; // r2
  int v9; // r3
  _DWORD v11[5]; // [sp+0h] [bp-14h] BYREF

  v3 = a2 == 0;
  if ( !a2 )
    v3 = src == 0;
  if ( !v3 )
  {
    v4 = *(_DWORD *)(a1 + 96);
    *(_DWORD *)(v4 + 184) = 0;
    *(_DWORD *)(v4 + 188) = 0;
    *(_DWORD *)(v4 + 200) = -1;
    *(_QWORD *)(v4 + 168) = 0;
    *(_QWORD *)(v4 + 176) = 0;
    if ( src )
    {
      v5 = *(_DWORD *)(v4 + 196);
      memset(v11, 0, 16);
      if ( v5 <= 16 )
        memcpy((char *)v11 + 16 - v5, src, v5);
      sub_D4FBC(a1, a2, (unsigned __int8 *)v11);
      v8 = *(_DWORD *)(v4 + 40);
      v9 = *(_DWORD *)(v4 + 44);
      *(_DWORD *)(v4 + 120) = *(_DWORD *)(v4 + 36);
      *(_DWORD *)(v4 + 124) = v8;
      *(_DWORD *)(v4 + 128) = v9;
    }
    else
    {
      if ( a2 )
      {
        *(_DWORD *)v4 = *a2 | (a2[1] << 8) | (a2[2] << 16) | (a2[3] << 24);
        *(_DWORD *)(v4 + 4) = a2[4] | (a2[6] << 16) | (a2[5] << 8) | (a2[7] << 24);
        *(_DWORD *)(v4 + 8) = a2[8] | (a2[10] << 16) | (a2[9] << 8) | (a2[11] << 24);
        *(_DWORD *)(v4 + 12) = a2[12] | (a2[14] << 16) | (a2[13] << 8) | (a2[15] << 24);
        *(_DWORD *)(v4 + 16) = a2[16] | (a2[18] << 16) | (a2[17] << 8) | (a2[19] << 24);
        *(_DWORD *)(v4 + 20) = a2[20] | (a2[22] << 16) | (a2[21] << 8) | (a2[23] << 24);
        *(_DWORD *)(v4 + 24) = a2[24] | (a2[26] << 16) | (a2[25] << 8) | (a2[27] << 24);
        *(_DWORD *)(v4 + 28) = a2[28] | (a2[30] << 16) | (a2[29] << 8) | (a2[31] << 24);
      }
      *(_DWORD *)(v4 + 112) = 0;
    }
  }
  return 1;
}
