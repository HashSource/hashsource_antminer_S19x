int __fastcall sub_29AE14(const char *a1, int a2, int a3)
{
  unsigned int v4; // r7
  int v5; // r10
  int v6; // r11
  signed int v7; // r9
  const char *v8; // r4
  signed int v9; // r0
  int v10; // r5
  int v11; // r10
  int v12; // r6
  int v13; // r5
  const char *v14; // r1
  int v16; // r6
  const char *v17; // r4
  const char *v19; // r1
  unsigned int v20; // [sp+4h] [bp-18h]
  int v22; // [sp+Ch] [bp-10h]
  int v23; // [sp+14h] [bp-8h]

  v4 = dword_490164;
  v20 = (unsigned int)a2 >> 31;
  if ( a1 && *a1 && dword_490158 )
  {
    if ( dword_490158 > dword_490164 )
    {
LABEL_5:
      v5 = a2;
      v6 = sub_297908();
      v7 = strlen(a1);
      v22 = dword_490158;
      while ( 1 )
      {
        if ( (v20 & (v4 >> 31)) != 0 )
          return -1;
        if ( v5 < 0 )
        {
          v8 = **(const char ***)(v6 + 4 * v4);
          v9 = strlen(v8);
          if ( v7 > v9 )
            goto LABEL_22;
        }
        else
        {
          if ( v22 == v4 )
            return -1;
          v8 = **(const char ***)(v6 + 4 * v4);
          v9 = strlen(v8);
          if ( v7 > v9 )
            goto LABEL_20;
        }
        if ( a3 == 1 )
        {
          if ( !v7 || *(unsigned __int8 *)a1 == *(unsigned __int8 *)v8 && !strncmp(a1, v8, v7) )
          {
            dword_490164 = v4;
            return 0;
          }
          if ( v5 < 0 )
            goto LABEL_22;
          ++v4;
        }
        else
        {
          v10 = v9 - v7;
          if ( v5 < 0 )
          {
            if ( v10 >= 0 )
            {
              if ( v7 )
              {
                v16 = *(unsigned __int8 *)a1;
                v17 = &v8[v10];
                while ( 1 )
                {
                  v19 = v17--;
                  if ( *(unsigned __int8 *)v19 == v16 && !strncmp(a1, v19, v7) )
                    break;
                  if ( v10-- == 0 )
                    goto LABEL_22;
                }
              }
              v12 = v10;
              goto LABEL_18;
            }
LABEL_22:
            --v4;
          }
          else
          {
            if ( v10 >= 0 )
            {
              if ( v7 )
              {
                v23 = v5;
                v11 = v9 - v7;
                v12 = a3;
                v13 = *(unsigned __int8 *)a1;
                while ( 1 )
                {
                  v14 = v8++;
                  if ( *(unsigned __int8 *)v14 == v13 && !strncmp(a1, v14, v7) )
                    break;
                  if ( ++v12 > v11 )
                  {
                    v5 = v23;
                    goto LABEL_20;
                  }
                }
              }
              else
              {
                v12 = a3;
              }
LABEL_18:
              dword_490164 = v4;
              return v12;
            }
LABEL_20:
            ++v4;
          }
        }
      }
    }
    if ( a2 < 0 )
    {
      v4 = dword_490158 - 1;
      goto LABEL_5;
    }
  }
  return -1;
}
