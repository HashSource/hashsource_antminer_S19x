int __fastcall sub_2228FC(int result, int *a2)
{
  int *v2; // r9
  int *v4; // r4
  int v5; // r8
  int *v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // r9
  int v12; // lr
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // [sp-30h] [bp-30h]
  int v18; // [sp-2Ch] [bp-2Ch]
  int v19; // [sp-28h] [bp-28h]
  int v20; // [sp-24h] [bp-24h]

  if ( a2 != (int *)result )
  {
    v2 = (int *)(result + 16);
    if ( (int *)(result + 16) != a2 )
    {
      v4 = (int *)result;
      v5 = -16 - result;
      do
      {
        while ( 1 )
        {
          v6 = v2 + 4;
          if ( sub_21EFDC(v2, v4) < 0 )
            break;
          result = sub_2228A4(v2);
          v2 += 4;
          if ( a2 == v6 )
            return result;
        }
        v7 = *v2;
        v8 = v2[1];
        v9 = v2[2];
        v10 = v2[3];
        v11 = v2 + 4;
        v12 = ((int)v6 + v5) >> 4;
        v17 = v7;
        v18 = v8;
        v19 = v9;
        v20 = v10;
        if ( (int)v6 + v5 > 0 )
        {
          do
          {
            --v12;
            v13 = *(v11 - 8);
            v14 = *(v11 - 7);
            v15 = *(v11 - 6);
            v16 = *(v11 - 5);
            v11 -= 4;
            *v11 = v13;
            v11[1] = v14;
            v11[2] = v15;
            v11[3] = v16;
          }
          while ( v12 );
        }
        v2 = v6;
        result = v17;
        *v4 = v17;
        v4[1] = v18;
        v4[2] = v19;
        v4[3] = v20;
      }
      while ( a2 != v6 );
    }
  }
  return result;
}
