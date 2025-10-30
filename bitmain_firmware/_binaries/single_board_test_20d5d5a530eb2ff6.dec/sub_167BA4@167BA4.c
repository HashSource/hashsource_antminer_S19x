unsigned int __fastcall sub_167BA4(unsigned int result, _BYTE *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r5
  unsigned int v6; // lr
  _DWORD *v7; // r1
  _BOOL4 v8; // r12
  unsigned int v9; // t1
  int v10; // r3
  unsigned int v11; // r2
  int v12; // r8
  int v13; // r0
  unsigned int v14; // r3
  unsigned int v15; // r12
  int v16; // r0
  int v17; // r8
  unsigned int v18; // r3
  unsigned int v19; // r7
  unsigned int v20; // r2
  unsigned int v21; // r1
  unsigned int v22; // r3
  unsigned int v23; // r3
  int i; // r8
  int v25; // r2
  unsigned int v26; // [sp+4h] [bp-E0h]
  _DWORD *v27; // [sp+Ch] [bp-D8h]
  unsigned __int64 *v28; // [sp+10h] [bp-D4h]
  unsigned __int64 v29[25]; // [sp+18h] [bp-CCh] BYREF

  v28 = (unsigned __int64 *)result;
  v26 = a4 >> 3;
  if ( a3 )
  {
    v5 = a3;
    v27 = (_DWORD *)(result - 8);
    while ( 1 )
    {
      v6 = 0;
      v7 = v27;
      if ( v26 )
        break;
LABEL_19:
      for ( i = 0; i != 24; i += 2 )
      {
        sub_1670FC(v29, (int)v28, i);
        v25 = i + 1;
        sub_1670FC(v28, (int)v29, v25);
      }
    }
    while ( 1 )
    {
      __pld(v7 + 8);
      v9 = v7[2];
      v7 += 2;
      ++v6;
      v10 = v7[1];
      v11 = v10 & 0xFFFF0000;
      v12 = (HIWORD(v9) | (HIWORD(v9) << 8)) & 0xFF00FF;
      v13 = (unsigned __int8)v9 | ((unsigned __int16)v9 << 8) & 0xFF00FF;
      v14 = (v10 << 16) & 0xFF00FF00 | (v10 << 8) & 0xFF00;
      v15 = (v11 | (v11 >> 8)) & 0xF000F000 | (((v11 | (v11 >> 8)) & 0xFF00FF00) >> 4) & 0xF0F0F0F0;
      v16 = (v13 | (16 * v13)) & 0x3030303 | (4 * ((v13 | (16 * v13)) & 0xF0F0F0F)) & 0x33333333;
      v17 = (v12 | (16 * v12)) & 0x3030303 | (4 * ((v12 | (16 * v12)) & 0xF0F0F0F)) & 0x33333333;
      v18 = (v14 | (v14 >> 4)) & 0xC0C0C0C0 | (((v14 | (v14 >> 4)) & 0xF0F0F0F0) >> 2) & 0xCCCCCCCC;
      v19 = (v17 | (2 * v17)) & 0x55555555
          | (v15 | (v15 >> 2)) & 0x88888888
          | (((v15 | (v15 >> 2)) & 0xCCCCCCCC) >> 1) & 0xAAAAAAAA;
      v20 = (v18 | (v18 >> 1)) & 0xAAAAAAAA | (v16 | (2 * v16)) & 0x55555555;
      if ( v5 <= 7 )
        break;
      v5 -= 8;
      a2[1] = BYTE1(v20);
      a2 += 8;
      *(a2 - 8) = v20;
      v8 = v26 > v6 && v5 != 0;
      *(a2 - 6) = BYTE2(v20);
      result = v8;
      *(a2 - 5) = HIBYTE(v20);
      *((_DWORD *)a2 - 1) = v19;
      if ( !v8 )
      {
        if ( !v5 )
          return result;
        goto LABEL_19;
      }
    }
    *a2 = v20;
    result = (v20 >> 8) | (v19 << 24);
    if ( v5 != 1 )
    {
      a2[1] = BYTE1(v20);
      if ( v5 != 2 )
      {
        a2[2] = BYTE2(v20);
        v21 = (result >> 8) | (v19 >> 8 << 24);
        if ( v5 != 3 )
        {
          a2[3] = (unsigned __int16)(result >> 8) >> 8;
          v22 = (((v21 >> 8) | (HIWORD(v19) << 24)) >> 8) | (HIBYTE(v19) << 24);
          if ( v5 != 4 )
          {
            a2[4] = (unsigned __int16)(v21 >> 8) >> 8;
            if ( v5 != 5 )
            {
              a2[5] = BYTE1(v22);
              v23 = HIWORD(v22);
              if ( v5 == 7 )
                a2[6] = v23;
            }
          }
        }
      }
    }
  }
  return result;
}
