int __fastcall sub_292CD4(FILE *stream)
{
  int v2; // r0
  ssize_t v3; // r0
  int v4; // r3
  int v6; // r0
  _BYTE buf[5]; // [sp+7h] [bp-5h] BYREF

  while ( 1 )
  {
    if ( dword_48B6B8 )
      sub_291120(dword_48B6B8);
    v2 = fileno(stream);
    v3 = read(v2, buf, 1u);
    if ( v3 == 1 )
      break;
    if ( !v3 )
      return -1;
    v4 = *_errno_location();
    if ( v4 == 11 )
    {
      v6 = fileno(stream);
      if ( sub_29B1B4(v6) < 0 )
        return -1;
    }
    else if ( v4 != 4 )
    {
      if ( (dword_48AAA0 & 8) != 0 )
        return -2;
      return -1;
    }
  }
  return buf[0];
}
