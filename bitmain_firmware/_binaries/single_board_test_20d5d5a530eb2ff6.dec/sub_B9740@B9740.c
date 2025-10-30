int __fastcall sub_B9740(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r4
  int result; // r0
  int v11; // r1
  int *v12; // r6
  int *v13; // r1
  int v14; // r3
  int v15; // r3
  bool v16; // zf
  int v17; // r3
  int v18; // r2
  int v19; // r2
  int v20; // r2
  _DWORD *v21; // r3
  int v22; // r2
  int v23; // r5
  int v24; // r1
  int v25; // r5
  int v26; // r1
  int v27; // r5
  int v28; // r1
  int v29; // r5
  int v30; // r1
  int v31; // r4
  int *v32; // r0
  int v33; // r3

  v6 = a5;
  result = bn_sub_words(a1, a2, a3, a4);
  if ( a5 )
  {
    v11 = 4 * a4;
    v12 = (int *)(a1 + 4 * a4);
    if ( a5 < 0 )
    {
      v21 = v12 + 4;
      v22 = a3 + v11 + 16;
      do
      {
        v29 = *(_DWORD *)(v22 - 16);
        v30 = result + v29;
        if ( v29 )
          result = 1;
        *(v21 - 4) = -v30;
        if ( v6 == -1 )
          break;
        v23 = *(_DWORD *)(v22 - 12);
        v24 = result + v23;
        if ( v23 )
          result = 1;
        *(v21 - 3) = -v24;
        if ( v6 == -2 )
          break;
        v25 = *(_DWORD *)(v22 - 8);
        v26 = -(result + v25);
        if ( v25 )
          result = 1;
        *(v21 - 2) = v26;
        if ( v6 == -3 )
          break;
        v27 = *(_DWORD *)(v22 - 4);
        v21 += 4;
        v22 += 16;
        v28 = result + v27;
        if ( v27 )
          result = 1;
        v6 += 4;
        *(v21 - 5) = -v28;
      }
      while ( v6 );
    }
    else
    {
      v13 = (int *)(v11 + a2);
      if ( result )
      {
        while ( 1 )
        {
          v14 = *v13 - result;
          if ( *v13 )
            result = 0;
          *v12 = v14;
          if ( v6 == 1 )
            break;
          v15 = v13[1];
          v16 = v15 == 0;
          v17 = v15 - result;
          if ( !v16 )
            result = 0;
          v12[1] = v17;
          if ( v6 == 2 )
            break;
          v18 = v13[2];
          v16 = v18 == 0;
          v19 = v18 - result;
          if ( !v16 )
            result = 0;
          v12[2] = v19;
          if ( v6 == 3 )
            break;
          v20 = v13[3];
          v12[3] = v20 - result;
          if ( v20 )
          {
            v6 -= 4;
            if ( !v6 )
              return 0;
            v13 += 4;
            v12 += 4;
            goto LABEL_34;
          }
          v6 -= 4;
          v13 += 4;
          v12 += 4;
          if ( !v6 )
            return result;
          if ( !result )
            goto LABEL_34;
        }
      }
      else
      {
LABEL_34:
        *v12 = *v13;
        if ( v6 != 1 )
        {
          v12[1] = v13[1];
          if ( v6 != 2 )
          {
            v12[2] = v13[2];
            if ( v6 != 3 )
            {
              v31 = v6 - 4;
              v12[3] = v13[3];
              if ( v31 )
              {
                v32 = v12;
                do
                {
                  v32[4] = v13[4];
                  if ( v31 == 1 )
                    break;
                  v32[5] = v13[5];
                  if ( v31 == 2 )
                    break;
                  v32[6] = v13[6];
                  if ( v31 == 3 )
                    break;
                  v33 = v13[7];
                  v31 -= 4;
                  v13 += 4;
                  v32 += 4;
                  v32[3] = v33;
                }
                while ( v31 );
              }
            }
          }
        }
        return 0;
      }
    }
  }
  return result;
}
