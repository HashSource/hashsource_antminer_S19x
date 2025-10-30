int __fastcall sub_41414(int result, int a2, int a3)
{
  int v3; // r10
  int v4; // r11
  int v5; // r6
  float v6; // s16
  unsigned int v7; // r5
  unsigned int v8; // r10
  int v9; // r3
  double v10; // d8
  int v11; // [sp+0h] [bp-7Ch]
  float *v12; // [sp+Ch] [bp-70h]
  int v13; // [sp+10h] [bp-6Ch]
  int v14; // [sp+14h] [bp-68h]
  int v16; // [sp+20h] [bp-5Ch]
  float *v17; // [sp+28h] [bp-54h]
  int i; // [sp+2Ch] [bp-50h]
  _BYTE v19[4]; // [sp+34h] [bp-48h] BYREF
  int v20; // [sp+38h] [bp-44h] BYREF
  int v21; // [sp+3Ch] [bp-40h]
  int v22; // [sp+40h] [bp-3Ch]
  int v23; // [sp+44h] [bp-38h]
  char v24[52]; // [sp+48h] [bp-34h] BYREF

  v13 = *(_DWORD *)(dword_705300 + 12);
  v14 = *(_DWORD *)(dword_705300 + 8);
  if ( v13 > 0 )
  {
    v17 = (float *)result;
    for ( i = 0; i != v13; ++i )
    {
      if ( v14 > 0 )
      {
        v3 = 0;
        v4 = i;
        v12 = v17;
        do
        {
          v5 = *(unsigned __int8 *)(a3 + v4);
          if ( !*(_BYTE *)(a3 + v4) )
          {
            v6 = *v12;
            sub_3DD88(*(_DWORD *)dword_705300, (unsigned __int8)(2 * v4), *(unsigned __int8 *)(a3 + v4));
            if ( (unsigned int)(((float)((float)(v6 - 50.0) + flt_7050B0) - 0.01) / flt_7050B0) )
            {
              v16 = v3;
              v7 = 1;
              v8 = (unsigned int)(((float)((float)(v6 - 50.0) + flt_7050B0) - 0.01) / flt_7050B0);
              do
              {
                v20 = v5;
                v21 = v5;
                ++v7;
                sub_77A24(&v20, v19, 0);
                BYTE2(v21) = v19[0];
                v9 = *(_DWORD *)dword_705300;
                v22 = v20;
                v23 = v21;
                LOWORD(v11) = v21;
                sub_77C04((unsigned __int8)v9, (unsigned __int8)(2 * v4), 0, v20, v11);
              }
              while ( v8 >= v7 );
              v3 = v16;
            }
            sub_1E938(v24, 0x30u);
            printf("%s ", v24);
            v10 = v6;
            printf("%s : reset asic[%d] from 50 to freq:%f\n\n\n", "reset_bad_asic_freq", v4, v10);
            snprintf(byte_63C8D0, 0x100u, "reset asic[%d] from 50 to freq:%f\n\n", v4, v10);
            result = sub_3CC5C((int)byte_63C8D0, v24);
          }
          ++v3;
          v4 += v13;
          v12 += v13;
        }
        while ( v14 != v3 );
      }
      ++v17;
    }
  }
  return result;
}
