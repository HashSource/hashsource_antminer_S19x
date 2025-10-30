int __fastcall sub_3D294(struct sockaddr *a1, int a2, int a3)
{
  unsigned int v4; // r5
  char v5; // r2
  unsigned int v6; // r5
  char v7; // r2
  unsigned int *v8; // r8
  unsigned int v9; // r9
  signed int v10; // r5
  int *v11; // r4
  __int64 v12; // r0
  int v13; // r2
  int v14; // r1
  int v15; // r3
  int v16; // r3
  unsigned int *v17; // r0
  int *v18; // r3
  unsigned int v19; // t1
  int v20; // r2
  int v21; // r3
  int v22; // r3
  unsigned int *v23; // r9
  int *v24; // r3
  unsigned int v25; // r2
  int *v26; // r0
  bool v27; // cc
  unsigned int v28; // r3
  unsigned int v29; // t1
  int v33; // [sp+18h] [bp-16Ch] BYREF
  int v34; // [sp+1Ch] [bp-168h]
  int v35; // [sp+20h] [bp-164h]
  int v36; // [sp+24h] [bp-160h]
  int v37; // [sp+28h] [bp-15Ch]
  int v38; // [sp+2Ch] [bp-158h]
  int v39; // [sp+30h] [bp-154h]
  unsigned int s[82]; // [sp+34h] [bp-150h] BYREF

  v4 = *(unsigned __int16 *)(a3 + 4);
  dword_BCB28 = (int)a1;
  v5 = *(_BYTE *)(a3 + 2);
  v6 = __rev16(v4) & 0xFFF;
  dword_BC91C = 332;
  byte_BC926 = v5;
  v7 = *(_BYTE *)(a3 + 3);
  dword_BCB24 = a2;
  word_BC92A = 19457;
  byte_BC927 = v7;
  v33 = 2063597570;
  dword_BCB20 = 0;
  v34 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( !v6 )
    return sub_3B02C();
  v8 = (unsigned int *)(a3 + 12);
  v9 = bswap32(*(_DWORD *)(a3 + 8));
  v34 = *(_DWORD *)(a3 + 8);
  if ( (v9 & 0xFFFF0000) == 0x7F7F0000 )
  {
    v10 = v6 - 1;
    v11 = &dword_BC92C;
    while ( sub_31A44((unsigned __int16 *)&v33, 0, 0, -1, 0, 0) )
    {
      memset(s, 0, sizeof(s));
      HIDWORD(v12) = s;
      LODWORD(v12) = &v33;
      sub_3A698(v12);
      if ( !LOWORD(s[0]) )
        break;
      v13 = HIWORD(s[0]);
      *v11 = v34;
      v14 = LOBYTE(s[0]);
      if ( LOBYTE(s[0]) >= 0x10u )
        v15 = 16;
      else
        v15 = LOBYTE(s[0]);
      *((_BYTE *)v11 + 4) = v15;
      *((_WORD *)v11 + 3) = __rev16(v13 & ~(-1 << v15));
      if ( v14 )
      {
        v16 = v15 + 1;
        v17 = &s[v16 + 1];
        v18 = &v11[v16 + 2];
        do
        {
          v19 = *--v17;
          *--v18 = bswap32(v19);
        }
        while ( v18 != v11 + 3 );
      }
      v20 = BYTE1(s[0]);
      if ( BYTE1(s[0]) >= 0x20u )
        v21 = 32;
      else
        v21 = BYTE1(s[0]);
      *((_BYTE *)v11 + 5) = v21;
      v11[2] = bswap32(s[1]);
      if ( v20 )
      {
        v22 = 2 * v21;
        v23 = &s[v22];
        v24 = &v11[v22];
        do
        {
          v25 = v23[16];
          v24 -= 2;
          v23 -= 2;
          v24[19] = bswap32(v25);
          v24[20] = bswap32(v23[19]);
        }
        while ( v11 != v24 );
      }
      v26 = (int *)sub_3A918();
      v27 = (int)v26 <= 0;
      if ( v26 )
        v27 = v10 <= 0;
      v11 = v26;
      if ( v27 )
        return sub_3B02C();
      v29 = *v8++;
      v28 = v29;
      v34 = v29;
      if ( (unsigned __int16)v33 == 2 )
      {
        --v10;
        if ( (bswap32(v28) & 0xFFFF0000) == 0x7F7F0000 )
          continue;
      }
      return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
    }
  }
  return sub_3AD58(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}
