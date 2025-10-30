int __fastcall sub_502B8(int result, _DWORD *a2)
{
  _DWORD *v2; // r10
  _DWORD *v4; // r6
  int *v5; // r8
  _DWORD *v6; // r7
  _DWORD *v7; // r0
  _DWORD *v8; // r4
  _DWORD *v9; // r11
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int *v14; // r12
  int v15; // r10
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int *v20; // lr
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // [sp+4h] [bp-54h]
  int v27; // [sp+8h] [bp-50h]
  int v28; // [sp+Ch] [bp-4Ch]
  int v29; // [sp+10h] [bp-48h]
  int v30; // [sp+14h] [bp-44h]
  int v31; // [sp+18h] [bp-40h]
  int v32; // [sp+1Ch] [bp-3Ch]
  int v33; // [sp+20h] [bp-38h]
  int v34; // [sp+24h] [bp-34h]
  int v35; // [sp+28h] [bp-30h]
  int v36; // [sp+2Ch] [bp-2Ch]

  if ( (_DWORD *)result != a2 )
  {
    v2 = (_DWORD *)(result + 40);
    if ( a2 != (_DWORD *)(result + 40) )
    {
      v4 = (_DWORD *)result;
      v26 = -40 - result;
      v5 = (int *)(result + 4);
      v6 = (_DWORD *)(result + 16);
      do
      {
        while ( 1 )
        {
          v8 = v2 + 10;
          if ( sub_4FC3C(v2 + 1, v2 + 4, v5, v6) < 0 )
            break;
          v7 = v2;
          v2 += 10;
          result = sub_50218(v7);
          if ( a2 == v8 )
            return result;
        }
        v9 = v2 + 10;
        v27 = *v2;
        v28 = v2[1];
        v29 = v2[2];
        v30 = v2[3];
        v10 = v2[4];
        v11 = v2[5];
        v12 = v2[6];
        v13 = v2[7];
        v14 = v2 + 8;
        v15 = -858993459 * (((int)v8 + v26) >> 3);
        v31 = v10;
        v32 = v11;
        v33 = v12;
        v34 = v13;
        v35 = *v14;
        v36 = v14[1];
        if ( (int)v8 + v26 > 0 )
        {
          do
          {
            v16 = *(v9 - 20);
            v17 = *(v9 - 19);
            v18 = *(v9 - 18);
            v19 = *(v9 - 17);
            v20 = v9 - 16;
            v9 -= 10;
            --v15;
            *v9 = v16;
            v9[1] = v17;
            v9[2] = v18;
            v9[3] = v19;
            v21 = *v20;
            v22 = v20[1];
            v23 = v20[2];
            v24 = v20[3];
            v20 += 4;
            v9[4] = v21;
            v9[5] = v22;
            v9[6] = v23;
            v9[7] = v24;
            v25 = v20[1];
            v9[8] = *v20;
            v9[9] = v25;
          }
          while ( v15 );
        }
        v2 = v8;
        *v4 = v27;
        v4[1] = v28;
        v4[2] = v29;
        v4[3] = v30;
        v4[4] = v31;
        v4[5] = v32;
        v4[6] = v33;
        v4[7] = v34;
        result = v35;
        v4[8] = v35;
        v4[9] = v36;
      }
      while ( a2 != v8 );
    }
  }
  return result;
}
