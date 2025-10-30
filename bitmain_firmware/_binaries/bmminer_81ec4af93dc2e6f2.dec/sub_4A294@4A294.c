int __fastcall sub_4A294(int result, int a2)
{
  int v2; // r6
  const char *v4; // r3
  int v5; // r3
  int v6; // r4
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v2 = result;
  if ( (unsigned int)off_AFC24 > 3 )
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
    result = sub_3AF5C(3, s, 0, v5);
    if ( !dword_530F08 || !*(_DWORD *)(dword_530F08 + 4) )
    {
      if ( (unsigned int)off_AFC24 > 3 )
      {
        strcpy(s, "Handle is NULL.\n");
        return sub_3AF5C(3, s, 0, *(int *)"LL.\n");
      }
      return result;
    }
LABEL_12:
    v6 = 0;
    while ( 1 )
    {
      result = sub_266F0(v6);
      if ( result )
      {
        if ( v2 == 255 )
        {
          *(_DWORD *)(dword_530F08 + 4 * (v6 + 2)) = a2;
        }
        else if ( v2 == v6 )
        {
          *(_DWORD *)(dword_530F08 + 4 * (v2 + 2)) = a2;
          return result;
        }
      }
      if ( ++v6 == 4 )
        return result;
    }
  }
  if ( dword_530F08 && *(_DWORD *)(dword_530F08 + 4) )
    goto LABEL_12;
  return result;
}
