int __fastcall sub_E442C(
        int result,
        int a2,
        int a3,
        int a4,
        unsigned __int8 *a5,
        int a6,
        int a7,
        void (__fastcall *a8)(unsigned __int8 *, unsigned __int8 *, int))
{
  unsigned int v8; // r8
  unsigned int v9; // r5
  unsigned int v10; // r11
  char v11; // r4
  unsigned int v12; // r7
  int v13; // [sp+10h] [bp-44h]
  int v16; // [sp+20h] [bp-34h]
  int v18; // [sp+2Ch] [bp-28h]
  int v19; // [sp+30h] [bp-24h]
  int v20; // [sp+34h] [bp-20h]
  int v21; // [sp+38h] [bp-1Ch]

  if ( a3 )
  {
    v8 = 0;
    v16 = result;
    do
    {
      v10 = v8 >> 3;
      v11 = ~(_BYTE)v8 & 7;
      v9 = 128;
      LOBYTE(v12) = (((int)*(unsigned __int8 *)(v16 + (v8 >> 3)) >> v11) & 1) != 0;
      if ( (((int)*(unsigned __int8 *)(v16 + (v8 >> 3)) >> v11) & 1) == 0 )
        v9 = 0;
      v18 = *(_DWORD *)a5;
      v19 = *((_DWORD *)a5 + 1);
      v20 = *((_DWORD *)a5 + 2);
      v21 = *((_DWORD *)a5 + 3);
      a8(a5, a5, a4);
      if ( a7 )
      {
        v9 ^= *a5;
        v12 = v9 >> 7;
      }
      else
      {
        LOBYTE(v9) = v9 ^ *a5;
      }
      v13 = (int)(v9 & 0x80) >> (v8++ & 7);
      *a5 = ((int)BYTE1(v18) >> 7) | (2 * v18);
      a5[1] = ((int)BYTE2(v18) >> 7) | (2 * BYTE1(v18));
      a5[2] = ((int)HIBYTE(v18) >> 7) | (2 * BYTE2(v18));
      a5[3] = ((int)(unsigned __int8)v19 >> 7) | (2 * HIBYTE(v18));
      a5[4] = ((int)BYTE1(v19) >> 7) | (2 * v19);
      a5[5] = ((int)BYTE2(v19) >> 7) | (2 * BYTE1(v19));
      a5[14] = ((int)HIBYTE(v21) >> 7) | (2 * BYTE2(v21));
      a5[12] = ((int)BYTE1(v21) >> 7) | (2 * v21);
      a5[6] = ((int)HIBYTE(v19) >> 7) | (2 * BYTE2(v19));
      a5[11] = ((int)(unsigned __int8)v21 >> 7) | (2 * HIBYTE(v20));
      a5[7] = ((int)(unsigned __int8)v20 >> 7) | (2 * HIBYTE(v19));
      result = ((int)HIBYTE(v20) >> 7) | (2 * BYTE2(v20));
      a5[13] = ((int)BYTE2(v21) >> 7) | (2 * BYTE1(v21));
      a5[10] = result;
      a5[15] = v12 | (2 * HIBYTE(v21));
      a5[9] = ((int)BYTE2(v20) >> 7) | (2 * BYTE1(v20));
      a5[8] = ((int)BYTE1(v20) >> 7) | (2 * v20);
      *(_BYTE *)(a2 + v10) = *(_BYTE *)(a2 + v10) & ~(unsigned __int8)(1 << v11) | v13;
    }
    while ( a3 != v8 );
  }
  return result;
}
