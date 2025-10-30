int __fastcall sub_3DD3C(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v5; // lr
  char v6; // r0
  char v7; // r2
  int v8; // r5
  unsigned int v9; // r3
  int *v10; // r4
  unsigned int *v11; // r8
  double v12; // r0
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  unsigned int *v17; // r1
  int *v18; // r2
  unsigned int v19; // t1
  int v20; // r3
  bool v21; // zf
  char *v22; // r4
  unsigned int *v23; // r3
  unsigned int v24; // r2
  char *v25; // r0
  bool v26; // cc
  unsigned int v27; // t1
  unsigned __int16 v31[2]; // [sp+18h] [bp+0h] BYREF
  unsigned int v32; // [sp+1Ch] [bp+4h]
  int v33; // [sp+20h] [bp+8h]
  int v34; // [sp+24h] [bp+Ch]
  int v35; // [sp+28h] [bp+10h]
  int v36; // [sp+2Ch] [bp+14h]
  int v37; // [sp+30h] [bp+18h]
  unsigned int s[82]; // [sp+34h] [bp+1Ch] BYREF

  v5 = *(unsigned __int16 *)(a3 + 4);
  v6 = *(_BYTE *)(a3 + 2);
  v7 = *(_BYTE *)(a3 + 3);
  dword_BDB3C = (int)a1;
  v8 = (((unsigned __int16)(v5 >> 8) | (unsigned __int16)((_WORD)v5 << 8)) & 0xFFF) - 1;
  dword_BDB38 = a2;
  byte_BD93B = v7;
  byte_BD93A = v6;
  word_BD93E = 19457;
  dword_BD92C = 332;
  dword_BDB34 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  v31[0] = 2;
  v31[1] = 31488;
  if ( (((unsigned __int16)(v5 >> 8) | (unsigned __int16)((_WORD)v5 << 8)) & 0xFFF) == 0 )
    return sub_3B8C4();
  v9 = *(_DWORD *)(a3 + 8);
  v10 = &dword_BD940;
  v11 = (unsigned int *)(a3 + 12);
  v32 = v9;
  do
  {
    if ( bswap32(v9) >> 16 << 16 != 2139029504 )
      break;
    if ( !sub_31F34(v31, 0, 0, -1, 0, 0) )
      break;
    memset(s, 0, sizeof(s));
    HIDWORD(v12) = s;
    LODWORD(v12) = v31;
    sub_3AEC8(v12);
    if ( !LOWORD(s[0]) )
      break;
    v13 = HIWORD(s[0]);
    *v10 = v32;
    v14 = LOBYTE(s[0]);
    if ( LOBYTE(s[0]) >= 0x10u )
      v14 = 16;
    *((_BYTE *)v10 + 4) = v14;
    *((_WORD *)v10 + 3) = ((v13 & (unsigned int)~(-1 << v14)) >> 8)
                        | (((unsigned __int16)v13 & (unsigned __int16)~(-1 << v14)) << 8);
    if ( v14 )
    {
      v15 = v14 + 2;
      v16 = v15 * 4 + 4;
      v17 = &s[v15];
      v18 = (int *)((char *)v10 + v16);
      do
      {
        v19 = *--v17;
        *--v18 = bswap32(v19);
      }
      while ( v18 != v10 + 3 );
    }
    v20 = BYTE1(s[0]);
    if ( BYTE1(s[0]) >= 0x20u )
      v20 = 32;
    *((_BYTE *)v10 + 5) = v20;
    v21 = v20 == 0;
    if ( v20 )
      v20 *= 8;
    v10[2] = bswap32(s[1]);
    if ( !v21 )
    {
      v22 = (char *)v10 + v20;
      v23 = (unsigned int *)((char *)s + v20);
      do
      {
        v24 = v23[16];
        v23 -= 2;
        v22 -= 8;
        *((_DWORD *)v22 + 19) = bswap32(v24);
        *((_DWORD *)v22 + 20) = bswap32(v23[19]);
      }
      while ( v23 != s );
    }
    v25 = sub_3B168();
    v26 = (int)v25 <= 0;
    if ( v25 )
      v26 = v8 <= 0;
    v10 = (int *)v25;
    if ( v26 )
      return sub_3B8C4();
    --v8;
    v27 = *v11++;
    v9 = v27;
    v32 = v27;
  }
  while ( v31[0] == 2 );
  return sub_3B5D8(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}
