int __fastcall sub_32E54(int a1)
{
  int v2; // r10
  int v3; // s18
  int i; // r4
  int result; // r0
  int v6; // r7
  int v7; // r5
  float *v8; // r6
  char v9; // r0
  int v10; // s16
  int v11; // r3
  int *v13; // r3
  int v14; // r2
  int v15; // t1
  int v16; // r2
  int v17; // [sp+4h] [bp-1848h]
  int v18; // [sp+1Ch] [bp-1830h]
  int v19; // [sp+20h] [bp-182Ch]
  int v20; // [sp+2Ch] [bp-1820h]
  _BYTE v21[4]; // [sp+3Ch] [bp-1810h] BYREF
  int v22; // [sp+40h] [bp-180Ch] BYREF
  int v23; // [sp+44h] [bp-1808h]
  char s[6148]; // [sp+48h] [bp-1804h] BYREF

  v2 = 0;
  v3 = sub_275B8();
  v19 = sub_26530();
  v18 = sub_26550();
  do
  {
    if ( sub_266F0(v2) && v18 > 0 )
    {
      v20 = 0;
      do
      {
        if ( v19 > 0 )
        {
          v6 = 0;
          v7 = v20;
          v8 = (float *)&s[1024 * v2 + 2048 + 4 * v20];
          do
          {
            v10 = sub_32690(v2, v7);
            v22 = 0;
            v23 = 0;
            sub_27D94(v2, 0, (unsigned __int8)(2 * v7), (unsigned __int8)byte_4B6CCC);
            sub_75D54(&v22, v21, 0);
            if ( a1 )
              *v8 = (float)v10;
            else
              *v8 = (float)(v10 - v3);
            ++v6;
            BYTE2(v23) = v21[0];
            v9 = sub_265B0();
            sub_27E18(v2, 0, (unsigned __int8)(v9 * v7), (unsigned __int8)byte_4B6CCC, v22, v23);
            if ( (unsigned int)off_AFC24 > 4 )
            {
              snprintf(
                s,
                0x800u,
                "middle chain = %d asic=%d set freq to %.2f asic_freq:%d delta:%d",
                v2,
                v7,
                v17,
                *v8,
                v10,
                v3);
              sub_3AF5C(4, s, 0, v11);
            }
            v7 += v18;
            v8 += v18;
          }
          while ( v19 != v6 );
        }
      }
      while ( v18 != ++v20 );
    }
    ++v2;
  }
  while ( v2 != 4 );
  for ( i = 0; i != 4; ++i )
  {
    result = sub_266F0(i);
    if ( result )
    {
      result = sub_26540();
      if ( result )
      {
        v13 = &dword_52FE68[256 * i];
        do
        {
          v15 = *v13++;
          v14 = v15;
          if ( a1 )
            v16 = v14 + 10;
          else
            v16 = v14 - 10;
          *(v13 - 1) = v16;
        }
        while ( v13 != &dword_52FE68[256 * i + result] );
      }
    }
  }
  return result;
}
