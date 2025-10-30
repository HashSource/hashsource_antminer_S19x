int __fastcall sub_306A30(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // r8
  _DWORD *v7; // r4
  int v8; // r3
  int v9; // r3
  unsigned __int16 *v10; // r1
  int v11; // r0
  int v12; // r2
  int v13; // r3
  int v15; // r2
  char *v16; // r0
  size_t v17; // r2

  if ( a1 )
  {
    if ( a1[8] )
    {
      if ( a1[9] )
      {
        v6 = sub_305068((int)a1);
        if ( !v6 )
        {
          v7 = (_DWORD *)a1[7];
          if ( a2 == -1 )
          {
            v8 = 0;
            a2 = 6;
          }
          else
          {
            v8 = a2 > 9;
          }
          if ( a3 > 4 )
            v8 |= 1u;
          if ( !v8 )
          {
            v9 = v7[33];
            if ( v7[34] == a3 )
            {
              if ( dword_468330[3 * a2 + 2] == dword_468330[3 * v9 + 2] || !v7[1456] )
                goto LABEL_12;
            }
            else if ( !v7[1456] )
            {
              goto LABEL_12;
            }
            if ( sub_3058C4((int)a1, 5) != -2 )
            {
              if ( !a1[4] )
                return -5;
              v9 = v7[33];
LABEL_12:
              if ( a2 != v9 )
              {
                if ( !v9 )
                {
                  v15 = v7[1452];
                  if ( v15 )
                  {
                    if ( v15 == 1 )
                    {
                      sub_303B70(v7);
                      v16 = (char *)v7[17];
                      v17 = 2 * (v7[19] + 0x7FFFFFFF);
                    }
                    else
                    {
                      v16 = (char *)v7[17];
                      v17 = 2 * (v7[19] + 0x7FFFFFFF);
                      *(_WORD *)&v16[v17] = 0;
                    }
                    memset(v16, 0, v17);
                    v7[1452] = 0;
                  }
                }
                v7[33] = a2;
                v10 = (unsigned __int16 *)&dword_468330[3 * a2];
                v11 = v10[1];
                v12 = v10[2];
                v13 = v10[3];
                v7[35] = *v10;
                v7[32] = v11;
                v7[36] = v12;
                v7[31] = v13;
              }
              v7[34] = a3;
              return v6;
            }
          }
        }
      }
    }
  }
  return -2;
}
