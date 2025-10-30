_BYTE *__fastcall sub_5DF7C(int a1)
{
  int v1; // r7
  int *v2; // r4
  const char *v3; // r5
  char *v4; // r8
  _BYTE *result; // r0
  _BYTE *v6; // r3
  int v7; // r1
  int v8; // r1
  int *v9; // r6
  int v10; // r3
  int v11; // r2
  int v12; // r3
  size_t v13; // r2
  _BYTE *v14; // r2
  int v15; // r11
  int v16; // r5
  _BYTE *v17; // r10
  void *v18; // r3
  size_t v19; // r0
  int v20; // r3
  int v21; // r5
  int v22; // r3
  _BYTE *v23; // [sp+14h] [bp-18h]
  _DWORD v24[2]; // [sp+1Ch] [bp-10h] BYREF

  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(int **)(v1 + 84);
  v3 = (const char *)(v2 + 14);
  v4 = (char *)*v2;
  result = sub_3A6D4(a1, (bool *)v2 + 56, 128, v24);
  v6 = result;
  v2[46] = (int)result;
  if ( result )
  {
    if ( (v2[192] & 2) != 0 )
    {
      v7 = v24[1];
      v2[58] = v24[0];
      v2[59] = v7;
    }
    v8 = *((_DWORD *)v4 + 51);
    if ( v8 <= 0 )
    {
      if ( result == (_BYTE *)&dword_0 + 1 )
      {
        result = (_BYTE *)strtol(v3, 0, 10);
        *((_DWORD *)v4 + 51) = result;
      }
      else
      {
        v9 = (int *)(v4 + 4);
        sub_42D0C(v1 + 16, v4 + 4);
        v4[4] = 0;
        v10 = v2[46];
        *(_DWORD *)v4 = v4 + 4;
        if ( v10 > 18
          && sscanf(v3, "%2d:%3d:%2d:%2d:%2d.%3ld", v2 + 47, v2 + 48, v2 + 49, v2 + 50, v2 + 51, v2 + 52) == 6 )
        {
          v11 = *((unsigned __int8 *)v2 + 58);
          v12 = (_DWORD)&unk_F4240 * v2[52];
          if ( v11 == 58 )
            *((_BYTE *)v2 + 40) = 0;
          v2[52] = v12;
          if ( v11 != 58 )
            *((_BYTE *)v2 + 40) = 3;
          if ( sub_3A4E8(v2) )
          {
            result = *(_BYTE **)v4;
            v13 = v2[46];
            if ( (int)(*(_DWORD *)v4 - (_DWORD)v9 + v13) <= 198 )
            {
              result = memcpy(result, v3, v13);
              v14 = *(_BYTE **)v4;
              v15 = v2[46];
              v16 = *(_DWORD *)v4 + v15;
              *(_DWORD *)v4 = v16;
              v23 = v14;
              if ( (v2[192] & 8) != 0 )
              {
                result = (_BYTE *)strlen(&aItf[30 * *((_DWORD *)v4 + 52)]);
                if ( (int)&result[v16 - (_DWORD)v9 + 1] <= 198 )
                {
                  *(_DWORD *)v4 = v16 + 1;
                  v23[v15] = 32;
                  v17 = result - 1;
                  memcpy(*(void **)v4, &aItf[30 * *((_DWORD *)v4 + 52)], (size_t)result);
                  v18 = *(void **)v4;
                  *(_DWORD *)v4 += v17;
                  v17[(_DWORD)v18] = 0;
                  v19 = strlen(&aItf[30 * *((_DWORD *)v4 + 52)]);
                  result = (_BYTE *)write(v2[7], &aItf[30 * *((_DWORD *)v4 + 52)], v19);
                  v20 = *((_DWORD *)v4 + 52) + 1;
                  *((_DWORD *)v4 + 52) = v20;
                  v21 = 30 * v20;
                  v22 = (unsigned __int8)aItf[30 * v20];
                  if ( !aItf[v21] )
                    *((_DWORD *)v4 + 52) = v22;
                }
              }
            }
          }
          else
          {
            return (_BYTE *)sub_39C88(v1, 6);
          }
        }
        else
        {
          return (_BYTE *)sub_39C88(v1, 2);
        }
      }
    }
    else
    {
      result = *(_BYTE **)v4;
      *((_DWORD *)v4 + 51) = v8 - 1;
      if ( (int)&v6[result - (v4 + 4)] <= 198 )
      {
        *(_DWORD *)v4 = result + 1;
        *result = 32;
        result = memcpy(*(void **)v4, v3, v2[46] + 1);
        *(_DWORD *)v4 += v2[46];
      }
    }
  }
  return result;
}
