_DWORD *__fastcall sub_74CE8(_DWORD *result, _DWORD *a2)
{
  int v2; // r12
  int v3; // r4
  int v4; // lr
  int v5; // r2
  int v6; // r2

  v2 = *(unsigned __int16 *)a2;
  *result = v2;
  if ( v2 == 2 )
  {
    v6 = a2[1];
    result[5] = 0;
    result[1] = v6;
  }
  else
  {
    if ( v2 != 10 )
      sub_6ECC0((int)"./../lib/isc/netaddr.c", 358, 2, "0");
    v3 = a2[3];
    v4 = a2[4];
    v5 = a2[5];
    result[1] = a2[2];
    result[2] = v3;
    result[3] = v4;
    result[4] = v5;
    result[5] = a2[6];
  }
  return result;
}
