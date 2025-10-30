int __fastcall sub_334D8(int a1)
{
  int v2; // r10
  int v3; // s18
  int v4; // r0
  int v5; // r7
  char *v6; // r5
  float *v7; // r6
  char v8; // r0
  int v9; // r0
  int v10; // s16
  int v11; // r3
  int *v12; // r5
  int j; // r4
  int result; // r0
  int *v15; // r3
  int v16; // r2
  int v17; // r1
  int v18; // r1
  int v19; // [sp+20h] [bp-182Ch]
  int v20; // [sp+24h] [bp-1828h]
  int v21; // [sp+28h] [bp-1824h]
  float *v22; // [sp+2Ch] [bp-1820h]
  char *i; // [sp+30h] [bp-181Ch]
  float *v24; // [sp+34h] [bp-1818h]
  char v25[4]; // [sp+3Ch] [bp-1810h] BYREF
  int v26; // [sp+40h] [bp-180Ch] BYREF
  int v27; // [sp+44h] [bp-1808h]
  char s[2040]; // [sp+48h] [bp-1804h] BYREF
  int v29; // [sp+848h] [bp-1004h] BYREF

  v2 = 0;
  v3 = sub_27B30();
  v20 = sub_26A34();
  v4 = sub_26A54();
  v24 = (float *)&v29;
  v21 = 4 * v4;
  v19 = v4;
  do
  {
    if ( sub_26C0C(v2) && v19 > 0 )
    {
      v22 = v24;
      for ( i = 0; i != (char *)v19; ++i )
      {
        if ( v20 > 0 )
        {
          v5 = 0;
          v6 = i;
          v7 = v22;
          do
          {
            v9 = sub_32CF8(v2, v6);
            v26 = 0;
            v27 = 0;
            v10 = v9;
            sub_28314(v2, 0, (unsigned __int8)(2 * (_BYTE)v6), (unsigned __int8)byte_534B58);
            sub_791C0(&v26, v25, 0);
            if ( a1 )
              *v7 = (float)v10;
            else
              *v7 = (float)(v10 - v3);
            ++v5;
            BYTE2(v27) = v25[0];
            v8 = sub_26AB4();
            sub_283A0(v2, 0, (unsigned __int8)(v8 * (_BYTE)v6), (unsigned __int8)byte_534B58, v26, v27);
            if ( (unsigned int)dword_B308C > 4 )
            {
              snprintf(
                s,
                0x800u,
                "middle chain = %d asic=%d set freq to %.2f asic_freq:%d delta:%d",
                v2,
                v6,
                *v7,
                v10,
                v3);
              sub_3B6AC(4, s, 0, v11);
            }
            v6 += v19;
            v7 = (float *)((char *)v7 + v21);
          }
          while ( v5 != v20 );
        }
        ++v22;
      }
    }
    ++v2;
    v24 += 256;
  }
  while ( v2 != 4 );
  v12 = dword_533B44;
  for ( j = 0; j != 4; ++j )
  {
    result = sub_26C0C(j);
    if ( result )
    {
      result = sub_26A44();
      if ( result )
      {
        v15 = v12;
        v16 = 0;
        do
        {
          v17 = *v15;
          ++v16;
          ++v15;
          if ( a1 )
            v18 = v17 + 10;
          else
            v18 = v17 - 10;
          *(v15 - 1) = v18;
        }
        while ( result != v16 );
      }
    }
    v12 += 256;
  }
  return result;
}
