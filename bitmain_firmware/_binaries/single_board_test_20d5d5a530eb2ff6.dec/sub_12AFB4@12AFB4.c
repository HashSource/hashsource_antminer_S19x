_DWORD *__fastcall sub_12AFB4(size_t *a1, _DWORD *a2, int a3)
{
  int v3; // r5
  _DWORD *v4; // r4
  _DWORD *v6; // r3
  const void *v8; // r0
  int v9; // r0
  size_t *v10; // r0

  v3 = a3;
  v4 = a1;
  switch ( a3 )
  {
    case -1:
      if ( (unsigned int)(a2[5] - 50) <= 0x63 )
        v3 = 23;
      else
        v3 = 24;
      break;
    case 23:
      if ( (unsigned int)(a2[5] - 50) > 0x63 )
        goto LABEL_4;
      if ( a1 )
        goto LABEL_13;
      goto LABEL_20;
    case 24:
      break;
    default:
LABEL_4:
      if ( !a1 )
        return 0;
      v4 = 0;
LABEL_6:
      ASN1_STRING_free((int)v4);
      return 0;
  }
  if ( a1 )
  {
LABEL_13:
    if ( !sub_AE088(a1, 0, 20) )
      return 0;
    goto LABEL_14;
  }
LABEL_20:
  v10 = (size_t *)sub_AE1D0();
  v4 = v10;
  if ( !v10 )
    return 0;
  if ( !sub_AE088(v10, 0, 20) )
    goto LABEL_6;
LABEL_14:
  v4[1] = v3;
  v8 = (const void *)v4[2];
  if ( v3 == 24 )
  {
    v9 = sub_B5560(v8, 0x14u, "%04d%02d%02d%02d%02d%02dZ", a2[5] + 1900, a2[4] + 1, a2[3], a2[2], a2[1], *a2);
    v6 = v4;
    *v4 = v9;
    return v6;
  }
  *v4 = sub_B5560(v8, 0x14u, "%02d%02d%02d%02d%02d%02dZ", a2[5] % 100, a2[4] + 1, a2[3], a2[2], a2[1], *a2);
  return v4;
}
