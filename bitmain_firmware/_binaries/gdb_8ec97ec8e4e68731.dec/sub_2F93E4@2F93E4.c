int __fastcall sub_2F93E4(_DWORD *a1, _DWORD *a2, unsigned int a3, int **a4, int **a5, _DWORD *a6)
{
  int result; // r0
  const char *v10; // r2
  int *v11; // r10
  int **v12; // r4
  const char *v13; // r6
  int *v14; // r5
  const char *v15; // r1
  int *v16; // r3
  bool v17; // zf
  int *v18; // r3
  int *v19; // r8
  _DWORD *v20; // r11
  _DWORD *v21; // r4
  _BOOL4 v22; // r7
  unsigned int v23; // r5
  unsigned int v24; // r6
  unsigned int v25; // r5
  unsigned int v26; // r3
  int *v27; // r1
  int *v28; // r2
  char *s1; // [sp+8h] [bp-Ch]
  unsigned int v31; // [sp+Ch] [bp-8h]

  result = sub_2F9368(a1, a6);
  if ( result )
  {
    v10 = (const char *)a2[1];
    v11 = (int *)a2[4];
    if ( (a2[3] & 8) != 0 )
    {
      v19 = (int *)a1[17];
      if ( v19 )
      {
        s1 = (char *)a2[1];
        v20 = 0;
        v31 = 0;
        do
        {
          v21 = v19 + 9;
          v22 = v19[12] == (_DWORD)v11;
          if ( !v19[12] )
            v22 = 1;
          do
          {
            if ( v22 )
            {
              v23 = v21[1];
              if ( a3 >= v23 )
              {
                v24 = v21[2];
                if ( a3 < v24 )
                {
                  if ( v19[8] )
                  {
                    v25 = v24 - v23;
                    if ( !strcmp(s1, (const char *)v19[8]) )
                    {
                      if ( v20 )
                      {
                        v26 = v31;
                        if ( v25 < v31 )
                        {
                          v20 = v19;
                          v26 = v25;
                        }
                        v31 = v26;
                      }
                      else
                      {
                        v31 = v25;
                        v20 = v19;
                      }
                    }
                  }
                }
              }
            }
            v21 = (_DWORD *)*v21;
          }
          while ( v21 );
          v19 = (int *)*v19;
        }
        while ( v19 );
        if ( v20 )
        {
          v27 = (int *)v20[3];
          v28 = (int *)v20[5];
          v20[12] = v11;
          *a4 = v27;
          *a5 = v28;
          return 1;
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      v12 = (int **)a1[20];
      if ( v12 )
      {
        v13 = v10;
        while ( 1 )
        {
          if ( ((_BYTE)v12[7] & 1) == 0 )
          {
            v14 = v12[1];
            if ( v14 )
            {
              v15 = (const char *)v12[4];
              if ( v15 )
              {
                if ( (int *)a3 == v12[5] )
                {
                  v16 = v12[6];
                  v17 = v11 == v16;
                  if ( v11 != v16 )
                    v17 = v16 == 0;
                  if ( v17 && !strcmp(v13, v15) )
                    break;
                }
              }
            }
          }
          v12 = (int **)*v12;
          if ( !v12 )
            return (int)v12;
        }
        result = 1;
        v18 = v12[2];
        v12[6] = v11;
        *a4 = v14;
        *a5 = v18;
      }
      else
      {
        return (int)v12;
      }
    }
  }
  return result;
}
