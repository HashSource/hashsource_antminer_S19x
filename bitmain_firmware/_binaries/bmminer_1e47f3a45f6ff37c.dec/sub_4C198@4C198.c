int __fastcall sub_4C198(int result, int a2)
{
  int v2; // r6
  const char *v4; // r3
  int v5; // r3
  int i; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = result;
  if ( (unsigned int)dword_B308C <= 3 )
  {
    if ( dword_535D94 && *(_DWORD *)(dword_535D94 + 4) )
    {
LABEL_9:
      for ( i = 0; i != 4; ++i )
      {
        result = sub_26C0C(i);
        if ( result )
        {
          if ( v2 == 255 )
          {
            *(_DWORD *)(dword_535D94 + 4 * (i + 2)) = a2;
          }
          else if ( i == v2 )
          {
            *(_DWORD *)(dword_535D94 + 4 * (i + 2)) = a2;
            return result;
          }
        }
      }
    }
  }
  else
  {
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v4 = "READY";
      }
      else
      {
        v4 = "DONE";
        if ( a2 != 2 )
          v4 = "UNKNOWN";
      }
    }
    else
    {
      v4 = "BLOCK";
    }
    snprintf(s, 0x800u, "chain = %d, status = %s\n", result, v4);
    result = sub_3B6AC(3, s, 0, v5);
    if ( dword_535D94 && *(_DWORD *)(dword_535D94 + 4) )
      goto LABEL_9;
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "Handle is NULL.\n");
      return sub_3B6AC(3, s, 0, *(int *)"LL.\n");
    }
  }
  return result;
}
