int __fastcall sub_4A408(int a1)
{
  int v2; // r2
  int v3; // r2
  const char *v4; // r3
  int v5; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v2 = dword_530F08;
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v3 = *(_DWORD *)(dword_530F08 + 4 * (a1 + 2));
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
    sub_3AF5C(4, s, 0, v5);
    v2 = dword_530F08;
  }
  if ( v2 && *(_DWORD *)(v2 + 4) )
    return *(_DWORD *)(v2 + 4 * (a1 + 2));
  if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(s, "Handle is NULL.\n");
    sub_3AF5C(3, s, 0, *(int *)"LL.\n");
  }
  return 2;
}
