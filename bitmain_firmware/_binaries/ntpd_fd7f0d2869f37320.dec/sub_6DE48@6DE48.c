_BYTE *__fastcall sub_6DE48(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  int v4; // r3
  int v5; // t1
  _BYTE *v6; // r6
  int v7; // r7
  const char *v8; // r3

  v2 = a2;
  if ( *a2 == -1 )
  {
LABEL_6:
    v6 = &lib_stringbuf[128 * lib_nextbuf];
    v7 = ((_BYTE)lib_nextbuf + 1) & 0xF;
    memset(v6, 0, 0x80u);
    v8 = (const char *)v2[1];
    lib_nextbuf = v7;
    sub_6D00C((int)v6, 0x80u, "%s_%d", v8, a1);
    return v6;
  }
  if ( *a2 != a1 )
  {
    while ( 1 )
    {
      v5 = v2[3];
      v2 += 3;
      v4 = v5;
      if ( v5 == -1 )
        break;
      if ( v4 == a1 )
        return (_BYTE *)v2[1];
    }
    goto LABEL_6;
  }
  return (_BYTE *)v2[1];
}
