unsigned int __fastcall sub_167A78(unsigned __int64 *a1, int *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r10
  int v5; // r9
  unsigned __int64 *v8; // r8
  unsigned __int64 *v9; // r3
  unsigned __int64 *v10; // r12
  int v11; // lr
  int *v12; // r2
  int v13; // r1
  int v14; // r9
  unsigned int v15; // r0
  unsigned int v16; // r11
  unsigned int v17; // r8
  unsigned int v18; // r1
  unsigned int v19; // r0
  unsigned int v20; // r11
  unsigned int v21; // r8
  unsigned int v22; // r1
  unsigned int v23; // r7
  unsigned __int64 v24; // r0
  int i; // r11
  int v26; // r2
  unsigned int v28; // [sp+4h] [bp-D8h]
  int v30; // [sp+Ch] [bp-D0h]
  char v31; // [sp+10h] [bp-CCh] BYREF

  v4 = a3;
  v28 = a4 >> 3;
  if ( a4 <= a3 )
  {
    v5 = -65536;
    v8 = (unsigned __int64 *)&v31;
    v30 = 2 * (a4 >> 3);
    do
    {
      if ( v28 )
      {
        v9 = a1;
        v10 = v8;
        v11 = v5;
        v12 = &a2[v30];
        do
        {
          v13 = *a2;
          v14 = a2[1];
          __pld(a2 + 6);
          a2 += 2;
          v15 = v13 & 0xAAAAAAAA | (2 * (v13 & 0xAAAAAAAA));
          v16 = v13 & 0x11111111 | ((v13 & 0x55555555u) >> 1) & 0x33333333;
          v17 = v14 & 0x88888888 | (2 * (v14 & 0xAAAAAAAA)) & 0xCCCCCCCC;
          v18 = v14 & 0x11111111 | ((v14 & 0x55555555u) >> 1) & 0x33333333;
          v19 = v15 & 0xC0C0C0C0 | (4 * (v15 & 0xCCCCCCCC)) & 0xF0F0F0F0;
          v20 = (v16 | (v16 >> 2)) & 0xF000F | (((v16 | (v16 >> 2)) & 0xF0F0F0F) >> 4) & 0xFF00FF;
          v21 = (v17 | (4 * v17)) & 0xF000F000 | (16 * ((v17 | (4 * v17)) & 0xF0F0F0F0)) & 0xFF00FF00;
          v22 = (v18 | (v18 >> 2)) & 0xF000F | (((v18 | (v18 >> 2)) & 0xF0F0F0F) >> 4) & 0xFF00FF;
          v23 = (v21 | (v21 << 8)) & v11
              | (((v19 | (16 * v19)) & 0xFF00FF00 | (((v19 | (16 * v19)) & 0xFF00FF00) << 8)) >> 16);
          LODWORD(v24) = *(_DWORD *)v9 ^ ((unsigned __int16)(v20 | (v20 >> 8)) | ((v22 | (v22 >> 8)) << 16));
          HIDWORD(v24) = *((_DWORD *)v9 + 1) ^ v23;
          *v9++ = v24;
        }
        while ( v12 != a2 );
        v8 = v10;
        v5 = v11;
      }
      for ( i = 0; i != 24; i += 2 )
      {
        sub_1670FC(v8, (int)a1, i);
        v26 = i + 1;
        sub_1670FC(a1, (int)v8, v26);
      }
      v4 -= a4;
    }
    while ( a4 <= v4 );
  }
  return v4;
}
