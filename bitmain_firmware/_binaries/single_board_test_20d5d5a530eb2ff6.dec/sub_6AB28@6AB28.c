unsigned int __fastcall sub_6AB28(unsigned int result, int a2, unsigned int a3)
{
  _DWORD *v3; // r4
  unsigned int v4; // r6
  _DWORD *v5; // r12
  int v6; // t1
  _BYTE *v7; // r5
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  char v14; // r3
  unsigned int v15; // t1
  unsigned int *v16; // r3
  _BYTE *v17; // r4
  unsigned int v18; // r2
  unsigned int v19; // r1
  char v20; // r2
  unsigned int v21; // r5
  unsigned int *v22; // r3
  unsigned int *v23; // r1
  unsigned int v24; // t1
  unsigned int v25[16]; // [sp+0h] [bp-128h] BYREF
  _DWORD v26[58]; // [sp+40h] [bp-E8h] BYREF

  memset(v25, 0, sizeof(v25));
  if ( result )
  {
    v3 = &v26[2];
    v4 = bswap32(a3);
    v6 = *(_DWORD *)(result + 32 * a2 + 20);
    v5 = (_DWORD *)(result + 32 * a2 + 20);
    v7 = (char *)&v26[9] + 3;
    v8 = *(_DWORD *)(result + 32 * a2 + 24);
    v9 = v5[2];
    v10 = v5[3];
    v26[2] = v6;
    v26[3] = v8;
    v26[4] = v9;
    v26[5] = v10;
    v11 = v5[5];
    v12 = v5[6];
    v13 = v5[7];
    v26[6] = v5[4];
    v26[7] = v11;
    v26[8] = v12;
    v26[9] = v13;
    do
    {
      v14 = *(_BYTE *)v3;
      *(_BYTE *)v3 = *v7;
      v3 = (_DWORD *)((char *)v3 + 1);
      *v7-- = v14;
    }
    while ( &v26[6] != v3 );
    v15 = *(_DWORD *)(result + 8);
    v16 = v25;
    v17 = (char *)&v25[2] + 3;
    v18 = *(_DWORD *)(result + 16);
    v19 = *(_DWORD *)(result + 12);
    v26[0] = 80;
    v25[0] = v15;
    v25[1] = v19;
    v25[2] = v18;
    v26[1] = 0;
    do
    {
      v20 = *(_BYTE *)v16;
      *(_BYTE *)v16 = *v17;
      v16 = (unsigned int *)((char *)v16 + 1);
      *v17-- = v20;
    }
    while ( v16 != (unsigned int *)((char *)&v25[1] + 2) );
    v21 = v25[0];
    LOBYTE(v25[0]) = HIBYTE(v4);
    BYTE2(v25[0]) = BYTE1(v4);
    HIBYTE(v25[0]) = v4;
    BYTE1(v25[0]) = BYTE2(v4);
    v26[10] = bswap32(v21);
    v26[11] = bswap32(v25[1]);
    v26[13] = bswap32(v25[0]);
    v26[12] = bswap32(v25[2]);
    sub_6D8D8((int)v26);
    memset(v26, 0, sizeof(v26));
    sub_6D9DC(v25);
    v22 = &v25[7];
    v23 = &v25[-1];
    do
    {
      v24 = v22[1];
      ++v22;
      v23[1] = bswap32(v24);
      ++v23;
    }
    while ( v22 != &v25[15] );
    result = v25[7];
    if ( v25[7] )
      return 1;
  }
  return result;
}
