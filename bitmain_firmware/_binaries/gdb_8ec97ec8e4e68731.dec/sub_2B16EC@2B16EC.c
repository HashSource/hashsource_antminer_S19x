size_t __fastcall sub_2B16EC(size_t result, const char *a2)
{
  const char *v2; // r4
  _DWORD *v3; // r6
  _BYTE *v4; // r5
  int v5; // r12
  _BYTE *v6; // r3
  const char *v7; // r1
  char v8; // t1

  v2 = a2;
  v3 = (_DWORD *)result;
  v4 = *(_BYTE **)result;
  if ( !a2 )
    goto LABEL_9;
  result = strlen(a2);
  if ( result <= 0xF )
  {
    if ( result )
    {
      v5 = result - 1;
      *v4 = a0123456789abcd_4[result];
      goto LABEL_5;
    }
LABEL_9:
    *v4 = 49;
    v4[1] = 36;
    *v3 = v4 + 2;
    return result;
  }
  v5 = 15;
  *v4 = 48;
LABEL_5:
  v6 = v4;
  v7 = &v2[v5 + 1];
  do
  {
    v8 = *v2++;
    *++v6 = v8;
  }
  while ( v2 != v7 );
  *v3 = &v4[v5 + 2];
  return result;
}
