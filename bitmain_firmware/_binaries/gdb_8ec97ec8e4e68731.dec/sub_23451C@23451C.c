_DWORD *__fastcall sub_23451C(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r5
  int v4; // r7
  _DWORD *v5; // r4
  _DWORD *v6; // r9
  int v7; // r10
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int *v12; // lr
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // [sp-48h] [bp-48h]
  int v19; // [sp-44h] [bp-44h]
  int v20; // [sp-40h] [bp-40h]
  int v21; // [sp-3Ch] [bp-3Ch]
  int v22; // [sp-38h] [bp-38h]
  int v23; // [sp-34h] [bp-34h]
  int v24; // [sp-30h] [bp-30h]
  int v25; // [sp-2Ch] [bp-2Ch]
  int v26; // [sp-28h] [bp-28h]
  int v27; // [sp-24h] [bp-24h]

  if ( a2 != result )
  {
    v2 = result;
    result += 10;
    if ( result != a2 )
    {
      v4 = -40 - (_DWORD)v2;
      do
      {
        v5 = result + 10;
        if ( *result >= *v2 )
        {
          sub_234484(result);
        }
        else
        {
          v6 = result + 10;
          v7 = -858993459 * (((int)v5 + v4) >> 3);
          v18 = *result;
          v19 = result[1];
          v20 = result[2];
          v21 = result[3];
          v22 = result[4];
          v23 = result[5];
          v24 = result[6];
          v25 = result[7];
          v26 = result[8];
          v27 = result[9];
          if ( (int)v5 + v4 > 0 )
          {
            do
            {
              v8 = *(v6 - 20);
              v9 = *(v6 - 19);
              v10 = *(v6 - 18);
              v11 = *(v6 - 17);
              v12 = v6 - 16;
              v6 -= 10;
              --v7;
              *v6 = v8;
              v6[1] = v9;
              v6[2] = v10;
              v6[3] = v11;
              v13 = *v12;
              v14 = v12[1];
              v15 = v12[2];
              v16 = v12[3];
              v12 += 4;
              v6[4] = v13;
              v6[5] = v14;
              v6[6] = v15;
              v6[7] = v16;
              v17 = v12[1];
              v6[8] = *v12;
              v6[9] = v17;
            }
            while ( v7 );
          }
          *v2 = v18;
          v2[1] = v19;
          v2[2] = v20;
          v2[3] = v21;
          v2[4] = v22;
          v2[5] = v23;
          v2[6] = v24;
          v2[7] = v25;
          v2[8] = v26;
          v2[9] = v27;
        }
        result = v5;
      }
      while ( a2 != v5 );
    }
  }
  return result;
}
