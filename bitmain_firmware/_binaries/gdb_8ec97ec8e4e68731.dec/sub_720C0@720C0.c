int *__fastcall sub_720C0(int a1, int a2)
{
  unsigned int v2; // r6
  int v5; // lr
  int v6; // r0
  int v7; // r3
  char v8; // t1
  int *result; // r0

  v2 = a2 + 2;
  v5 = sub_93028(a2 + 2);
  if ( a2 > 0 )
  {
    v6 = a1 - 1;
    v7 = v5 - 1;
    do
    {
      v8 = *(_BYTE *)++v6;
      *(_BYTE *)++v7 = v8;
    }
    while ( v6 != a1 - 1 + a2 );
  }
  *(_BYTE *)(v5 + a2 + 1) = 0;
  *(_BYTE *)(v5 + a2) = 0;
  result = sub_72040(v5, v2);
  if ( !result )
    sub_70650("bad buffer in yy_scan_bytes()");
  result[5] = 1;
  return result;
}
