const char **__fastcall sub_2AD864(int a1, const char *a2)
{
  char *v2; // r0
  const char **v3; // r1
  char *v4; // r0

  v2 = sub_2AAC2C((_DWORD *)(a1 + 72), a2, 0, 0);
  if ( v2 )
  {
    v3 = (const char **)(v2 + 16);
    if ( (*((_DWORD *)v2 + 9) & 0x100000) != 0 )
      return v3;
    while ( 1 )
    {
      v4 = sub_2AD7CC(0, v3);
      v3 = (const char **)v4;
      if ( !v4 )
        break;
      if ( (*((_DWORD *)v4 + 5) & 0x100000) != 0 )
        return v3;
    }
  }
  return 0;
}
