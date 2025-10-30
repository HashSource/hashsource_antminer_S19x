const char **__fastcall sub_2AE464(char *a1, int a2)
{
  char *v2; // r5
  const char **result; // r0
  char v5; // r3

  v2 = a1;
  if ( !a1 && (v2 = getenv("GNUTARGET")) == 0 || !strcmp(v2, "default") )
  {
    result = (const char **)off_470AA4;
    if ( off_470AA4 )
    {
      if ( !a2 )
        return result;
    }
    else
    {
      result = (const char **)*off_470AA0;
      if ( !a2 )
        return result;
    }
    v5 = *(_BYTE *)(a2 + 43);
    *(_DWORD *)(a2 + 4) = result;
    *(_BYTE *)(a2 + 43) = v5 | 4;
    return result;
  }
  if ( !a2 )
    return sub_2AE2E0(v2);
  *(_BYTE *)(a2 + 43) &= ~4u;
  result = sub_2AE2E0(v2);
  if ( result )
    *(_DWORD *)(a2 + 4) = result;
  return result;
}
