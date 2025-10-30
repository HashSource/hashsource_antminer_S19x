char *__fastcall sub_821C8(unsigned __int8 *a1, int *a2)
{
  _BYTE *v2; // r11
  int *v3; // r7
  char *v4; // r2
  unsigned int v5; // r5
  int i; // r3
  char *v7; // r4
  int v8; // r3
  int v10; // r0
  char *v11; // r0
  char *j; // r4
  int v13; // t1
  int v14; // [sp+0h] [bp-Ch] BYREF

  v2 = a1;
  v3 = a2;
  v4 = (char *)(a1 + 1);
  v5 = *a1;
  v14 = 0;
  if ( !a2 )
    v3 = &v14;
  for ( i = a1[1]; ; i = (unsigned __int8)v7[v10] )
  {
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_4:
        while ( 1 )
        {
          v7 = v4 + 1;
          if ( i != v5 )
            break;
LABEL_9:
          *v2 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              v5 = (unsigned __int8)*v7;
              if ( v5 > 0x7F || (dword_9F184[v5] & 0xC01) == 0 )
                break;
              ++v7;
              if ( v5 == 10 )
                ++*v3;
            }
            if ( v5 == 39 )
              break;
            if ( v5 != 47 )
            {
              if ( v5 != 34 )
                return v7;
              break;
            }
            v8 = (unsigned __int8)v7[1];
            if ( v8 == 42 )
            {
              v11 = strstr(v7 + 2, "*/");
              if ( !v11 )
                return 0;
              if ( v7 < v11 )
              {
                for ( j = v7 + 1; v11 != j; ++j )
                {
                  v13 = (unsigned __int8)*j;
                  if ( v13 == 10 )
                    ++*v3;
                }
              }
              v7 = v11 + 2;
            }
            else
            {
              if ( v8 != 47 )
                return 0;
              v7 = strchr(v7, 10);
              if ( !v7 )
                return 0;
            }
          }
          v4 = v7 + 1;
          i = (unsigned __int8)v7[1];
        }
        while ( 1 )
        {
          *v2 = i;
          if ( i == 10 )
          {
            ++v2;
            ++*v3;
            i = (unsigned __int8)v4[1];
            v4 = v7;
            goto LABEL_4;
          }
          if ( i == 92 )
            break;
          if ( !i )
            return 0;
          i = (unsigned __int8)v4[1];
          v4 = v7;
          ++v2;
          ++v7;
          if ( i == v5 )
            goto LABEL_9;
        }
        i = (unsigned __int8)v4[1];
        if ( i != 10 )
          break;
        v4 += 2;
        ++*v3;
        i = (unsigned __int8)*v4;
      }
      if ( v5 != 39 )
        break;
      if ( i == 39 || i == 92 || i == 35 )
      {
        *v2 = i;
        v4 += 2;
        i = (unsigned __int8)*v4;
        ++v2;
      }
      else
      {
        v4 = v7;
        ++v2;
      }
    }
    v10 = sub_81DDC(v7, v2, 10);
    if ( !v10 )
      break;
    ++v2;
    v4 = &v7[v10];
  }
  return 0;
}
