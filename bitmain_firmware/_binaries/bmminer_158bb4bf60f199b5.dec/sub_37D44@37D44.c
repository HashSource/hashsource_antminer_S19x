int __fastcall sub_37D44(int a1)
{
  int v2; // r2
  int v3; // r2
  const char *v4; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = dword_1AEA78;
  if ( (unsigned int)dword_9E31C > 4 )
  {
    v3 = *(_DWORD *)(dword_1AEA78 + 4 * (a1 + 2));
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = "READY";
      }
      else
      {
        v4 = "UNKNOWN";
        if ( v3 == 2 )
          v4 = "DONE";
      }
    }
    else
    {
      v4 = "BLOCK";
    }
    snprintf(s, 0x800u, "[DEBUG] chain = %d, status = %s\n", a1, v4);
    sub_47AB4(4, s, 0);
    v2 = dword_1AEA78;
  }
  if ( v2 && *(_DWORD *)(v2 + 4) )
    return *(_DWORD *)(v2 + 4 * (a1 + 2));
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(s, "Handle is NULL.\n");
    sub_47AB4(3, s, 0);
  }
  return 2;
}
