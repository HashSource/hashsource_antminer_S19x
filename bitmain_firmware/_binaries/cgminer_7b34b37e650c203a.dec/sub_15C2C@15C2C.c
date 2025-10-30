const char *__fastcall sub_15C2C(const char *s, int a2)
{
  const char *v2; // r5
  unsigned int v3; // r4
  const char *v5; // r2
  unsigned int v6; // r3
  int v7; // r6
  unsigned int v8; // t1
  unsigned int v9; // t1
  size_t v10; // r6
  char *v11; // r3
  char *v12; // r2
  char *v13; // r1
  unsigned int v14; // t1
  char *v15; // r2
  char *v16; // r1
  char sa[2048]; // [sp+10h] [bp-800h] BYREF

  v2 = s;
  v3 = *(unsigned __int8 *)s;
  if ( *s )
  {
    v5 = s;
    v6 = *(unsigned __int8 *)s;
    v7 = 0;
    while ( 1 )
    {
      if ( v6 == 61 )
        goto LABEL_11;
      if ( v6 <= 0x3D )
      {
        if ( v6 != 34 )
        {
          if ( v6 != 44 )
            goto LABEL_6;
          if ( a2 )
            goto LABEL_12;
LABEL_5:
          ++v7;
          goto LABEL_6;
        }
        if ( a2 )
          goto LABEL_5;
LABEL_6:
        v8 = *(unsigned __int8 *)++v5;
        v6 = v8;
        if ( !v8 )
          goto LABEL_13;
      }
      else
      {
        if ( v6 == 92 )
          goto LABEL_5;
        if ( v6 != 124 )
          goto LABEL_6;
LABEL_11:
        if ( !a2 )
          goto LABEL_5;
LABEL_12:
        v9 = *(unsigned __int8 *)++v5;
        v6 = v9;
        if ( !v9 )
        {
LABEL_13:
          if ( !v7 )
            return s;
          v10 = strlen(s) + v7 + 1;
          s = (const char *)malloc(v10);
          if ( !s )
          {
            snprintf(sa, 0x800u, "Failed to malloc escape buf %d in %s %s():%d", v10, "api.c", "escape_string", 836);
            sub_20F58(3, sa, 1);
            sub_3EBA0(1);
          }
          v11 = (char *)s;
          while ( 2 )
          {
            if ( !v3 )
            {
              *v11 = 0;
              return s;
            }
            if ( v3 != 61 )
            {
              if ( v3 <= 0x3D )
              {
                if ( v3 == 34 )
                {
                  v12 = v11 + 1;
                  if ( a2 )
                  {
                    v13 = v11++;
                    *v13 = 92;
                    v12 = v13 + 2;
                  }
                  *v11 = 34;
                  v11 = v12;
                  goto LABEL_24;
                }
                if ( v3 != 44 )
                  goto LABEL_35;
              }
              else
              {
                if ( v3 == 92 )
                {
                  *v11 = 92;
                  v11[1] = 92;
                  v11 += 2;
LABEL_24:
                  v14 = *(unsigned __int8 *)++v2;
                  v3 = v14;
                  continue;
                }
                if ( v3 != 124 )
                {
LABEL_35:
                  *v11++ = v3;
                  goto LABEL_24;
                }
              }
            }
            break;
          }
          v15 = v11 + 1;
          if ( !a2 )
          {
            v16 = v11++;
            *v16 = 92;
            v15 = v16 + 2;
          }
          *v11 = v3;
          v11 = v15;
          goto LABEL_24;
        }
      }
    }
  }
  return s;
}
