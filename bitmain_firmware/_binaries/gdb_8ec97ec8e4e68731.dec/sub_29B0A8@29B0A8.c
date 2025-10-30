_BYTE *__fastcall sub_29B0A8(const char *a1)
{
  size_t v2; // r0
  _BYTE *result; // r0
  const char *v4; // r1
  _BYTE *v5; // r2
  int v6; // r3
  int v7; // t1

  v2 = strlen(a1);
  result = sub_93028(4 * v2 + 3);
  v4 = a1;
  v5 = result + 1;
  *result = 39;
  do
  {
    v7 = *(unsigned __int8 *)v4++;
    v6 = v7;
    if ( !v7 )
      break;
    *v5 = v6;
    if ( v6 == 39 )
      v5[1] = 92;
    else
      ++v5;
    if ( v6 == 39 )
    {
      v5[2] = 39;
      v5[3] = 39;
      v5 += 4;
    }
  }
  while ( v4 );
  *v5 = 39;
  v5[1] = 0;
  return result;
}
