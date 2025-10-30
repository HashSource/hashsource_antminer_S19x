int __fastcall sub_37BD4(int a1, int a2)
{
  const char *v4; // r3
  int result; // r0
  int v6; // r3
  int i; // r2
  int v8; // t1
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 3 )
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
    snprintf(s, 0x800u, "chain = %d, status = %s\n", a1, v4);
    sub_47AB4(3, s, 0);
    result = dword_1AEA78;
    if ( !dword_1AEA78 || !*(_DWORD *)(dword_1AEA78 + 4) )
    {
      if ( (unsigned int)dword_9E31C > 3 )
      {
        strcpy(s, "Handle is NULL.\n");
        return sub_47AB4(3, s, 0);
      }
      return result;
    }
LABEL_12:
    v6 = 0;
    for ( i = dword_A0D68; ; i += 4 )
    {
      v8 = *(_DWORD *)(i + 4);
      if ( v8 == 1 )
      {
        if ( a1 == 255 )
        {
          *(_DWORD *)(result + 4 * v6 + 8) = a2;
        }
        else if ( a1 == v6 )
        {
          *(_DWORD *)(result + 4 * (a1 + 2)) = a2;
          return result;
        }
      }
      if ( ++v6 == 16 )
        return result;
    }
  }
  result = dword_1AEA78;
  if ( dword_1AEA78 && *(_DWORD *)(dword_1AEA78 + 4) )
    goto LABEL_12;
  return result;
}
