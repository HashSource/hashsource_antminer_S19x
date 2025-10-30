int sub_7B964()
{
  unsigned __int8 *v0; // r7
  unsigned int v1; // r4
  char *v2; // r0
  unsigned int v4; // r2
  unsigned int v5; // r2
  int v6; // r0

  v0 = (unsigned __int8 *)dword_474F5C++;
  v1 = *v0;
  v2 = strchr(aAbefnrtv, v1);
  if ( v2 )
    return (unsigned __int8)aDemangleCompon[v2 - aAbefnrtv + 252];
  if ( v1 > 0x37 )
  {
    if ( v1 == 94 )
    {
      dword_474F5C = (int)(v0 + 2);
      v6 = v0[1];
      if ( v6 == 63 )
      {
        return 127;
      }
      else
      {
        if ( v6 == 92 )
          LOBYTE(v6) = sub_7B964();
        return v6 & 0x1F;
      }
    }
  }
  else if ( v1 >= 0x30 )
  {
    v1 -= 48;
    v4 = v0[1] - 48;
    if ( v4 <= 7 )
    {
      v1 = v4 + 8 * v1;
      dword_474F5C = (int)(v0 + 2);
      v5 = v0[2] - 48;
      if ( v5 <= 7 )
      {
        v1 = v5 + 8 * v1;
        dword_474F5C = (int)(v0 + 3);
      }
    }
  }
  else if ( v1 )
  {
    if ( v1 == 10 )
      return -2;
  }
  else
  {
    dword_474F5C = (int)v0;
  }
  return v1;
}
