_DWORD *__fastcall sub_65468(int *a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r1
  int v5; // r2
  int v6; // r8
  int v7; // r3
  int v8; // r5
  _DWORD *v9; // r10
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD *v13; // r2
  unsigned int v15; // r3

  v2 = *a1;
  v3 = dword_107118[0];
  v4 = a1[1];
  v5 = a1[2];
  v6 = 8 * dword_107118[0];
  v7 = a1[3];
  v8 = 7 * dword_107118[0];
  v9 = (_DWORD *)((char *)&unk_10711C + 28 * dword_107118[0]);
  dword_107118[0] = (LOBYTE(dword_107118[0]) + 1) & 7;
  *v9 = v2;
  v9[1] = v4;
  v9[2] = v5;
  v9[3] = v7;
  v10 = a1[5];
  v11 = a1[6];
  v9[4] = a1[4];
  v9[5] = v10;
  v9[6] = v11;
  v12 = LOWORD(dword_107118[v8 + 1]);
  if ( v12 == 2 )
  {
    v15 = bswap32(dword_107118[v8 + 2]);
    if ( (v15 & 0xE0000000) == 0xC0000000 )
    {
      v15 &= 0xFFFFFF00;
    }
    else if ( (v15 & 0xC0000000) == 0x80000000 )
    {
      v15 = HIWORD(v15) << 16;
    }
    dword_107118[v6 - v3 + 2] = bswap32(v15);
  }
  else if ( v12 == 10 )
  {
    v13 = (_DWORD *)((char *)&unk_10711C + v8 * 4 + 16);
    *v13 = 0;
    v13[1] = 0;
  }
  return v9;
}
