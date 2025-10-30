int __fastcall sub_83700(unsigned __int8 *a1, int *a2)
{
  _BYTE *v2; // r5
  int *v3; // r8
  char *v4; // r3
  unsigned int v5; // r6
  int result; // r0
  unsigned __int8 *v7; // r7
  char *v8; // r4
  int v9; // r3
  char *v10; // r0
  int v11; // t1
  int v12; // [sp+0h] [bp-Ch] BYREF

  v2 = a1;
  v3 = a2;
  v4 = (char *)(a1 + 1);
  v5 = *a1;
  result = a1[1];
  if ( !a2 )
    v3 = &v12;
  v12 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_4:
      while ( v5 == result )
      {
LABEL_9:
        v8 = v4 + 1;
        *v2 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v5 = (unsigned __int8)*v8;
            if ( v5 > 0x7F || (dword_A0784[v5] & 0xC01) == 0 )
              break;
            ++v8;
            if ( v5 == 10 )
              ++*v3;
          }
          if ( v5 == 39 )
            goto LABEL_30;
          if ( v5 != 47 )
            break;
          v9 = (unsigned __int8)v8[1];
          if ( v9 == 42 )
          {
            v10 = strstr(v8 + 2, "*/");
            if ( !v10 )
              return 0;
            if ( v8 < v10 )
            {
              while ( v8 != v10 - 1 )
              {
                v11 = (unsigned __int8)*++v8;
                if ( v11 == 10 )
                  ++*v3;
              }
            }
            v8 = v10 + 2;
          }
          else
          {
            if ( v9 != 47 )
              return 0;
            v8 = strchr(v8, 10);
            if ( !v8 )
              return (int)v8;
          }
        }
        if ( v5 != 34 )
          return (int)v8;
LABEL_30:
        v4 = v8 + 1;
        result = (unsigned __int8)v8[1];
      }
      while ( 1 )
      {
        *v2 = result;
        v7 = (unsigned __int8 *)(v4 + 1);
        if ( result == 10 )
        {
          ++v2;
          ++*v3;
          result = (unsigned __int8)*++v4;
          goto LABEL_4;
        }
        if ( result == 92 )
          break;
        if ( !result )
          return result;
        result = (unsigned __int8)v4[1];
        ++v2;
        ++v4;
        if ( v5 == result )
          goto LABEL_9;
      }
      result = (unsigned __int8)v4[1];
      if ( result != 10 )
        break;
      v4 += 2;
      ++*v3;
      result = (unsigned __int8)*v4;
    }
    if ( v5 != 39 )
      break;
    if ( result == 39 || result == 92 || result == 35 )
    {
      *v2 = result;
      v4 += 2;
      result = (unsigned __int8)*v4;
      ++v2;
    }
    else
    {
      ++v4;
      ++v2;
    }
  }
  result = sub_83324(v4 + 1, v2, 10);
  if ( result )
  {
    v4 = (char *)&v7[result];
    ++v2;
    result = v7[result];
    goto LABEL_4;
  }
  return result;
}
