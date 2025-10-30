int __fastcall sub_2816C(unsigned int *a1)
{
  int v1; // r0
  int v2; // r5
  int v3; // r10
  const char *v4; // r6
  int v5; // r4
  int *v6; // r7
  _DWORD *v8; // r0

  v1 = sub_27C64(a1 + 5, bswap32(a1[4]), bswap32(a1[3]));
  v2 = v1;
  if ( v1 )
  {
    v3 = cinfo;
    if ( cinfo )
    {
      v4 = *(const char **)(v1 + 48);
      v5 = cinfo;
      v6 = &cinfo;
      while ( strcmp(v4, *(const char **)(v5 + 48)) || strcmp(*(const char **)(v2 + 52), *(const char **)(v5 + 52)) )
      {
        v6 = (int *)v5;
        v5 = *(_DWORD *)v5;
        if ( !v5 )
          goto LABEL_7;
      }
      if ( bswap32(*(_DWORD *)(v2 + 64)) <= bswap32(*(_DWORD *)(v5 + 64)) )
      {
        v8 = (_DWORD *)v2;
        v2 = v5;
        sub_27BCC(v8);
        goto LABEL_8;
      }
      *v6 = *(_DWORD *)v5;
      sub_27BCC((_DWORD *)v5);
      v3 = cinfo;
    }
LABEL_7:
    *(_DWORD *)v2 = v3;
    cinfo = v2;
LABEL_8:
    *(_DWORD *)(v2 + 4) |= 4u;
    sub_279FC();
  }
  return v2;
}
