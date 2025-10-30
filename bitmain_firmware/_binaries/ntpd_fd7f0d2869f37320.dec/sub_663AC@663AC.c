_DWORD *__fastcall sub_663AC(_DWORD *a1)
{
  int v1; // r6
  char v2; // r4
  int v3; // r5
  int v4; // r9
  int v5; // r2
  int v6; // r10
  int v7; // r12
  _DWORD *v8; // r3
  int v9; // r7
  int v10; // r6
  int v11; // r0
  _DWORD *v12; // r0
  unsigned int v14; // r1

  v1 = a1[1];
  v2 = LOBYTE(dword_10813C[0]) + 1;
  v3 = a1[2];
  v4 = 4 * dword_10813C[0];
  v5 = 32 * dword_10813C[0];
  v6 = a1[3];
  v7 = 7 * dword_10813C[0];
  v8 = (_DWORD *)((char *)&unk_108140 + 28 * dword_10813C[0]);
  *v8 = *a1;
  v8[1] = v1;
  v8[2] = v3;
  v8[3] = v6;
  v9 = a1[4];
  v10 = a1[5];
  v8[6] = a1[6];
  v8[4] = v9;
  v8[5] = v10;
  v11 = LOWORD(dword_10813C[v7 + 1]);
  dword_10813C[0] = v2 & 7;
  if ( v11 == 2 )
  {
    v14 = bswap32(dword_10813C[v7 + 2]);
    if ( (v14 & 0xE0000000) == 0xC0000000 )
    {
      v14 &= 0xFFFFFF00;
    }
    else if ( (v14 & 0xC0000000) == 0x80000000 )
    {
      v14 = HIWORD(v14) << 16;
    }
    *(int *)((char *)&dword_10813C[2] + v5 - v4) = bswap32(v14);
  }
  else if ( v11 == 10 )
  {
    v12 = (_DWORD *)((char *)&unk_108140 + v7 * 4 + 16);
    *v12 = 0;
    v12[1] = 0;
  }
  return v8;
}
