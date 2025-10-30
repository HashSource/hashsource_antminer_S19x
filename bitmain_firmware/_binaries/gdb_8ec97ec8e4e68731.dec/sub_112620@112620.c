char *__fastcall sub_112620(char *a1, char *a2, int *a3)
{
  char v3; // r9
  char *result; // r0
  __int64 v6; // r6
  int v7; // r3
  unsigned int v8; // r12
  int v9; // r8
  char v10; // t1
  unsigned int v11; // r4
  int v12; // r3

  if ( a1 >= a2 )
    goto LABEL_7;
  v3 = *a1;
  LODWORD(v6) = *a1 & 0x7F;
  result = a1 + 1;
  v6 = (unsigned int)v6;
  if ( v3 < 0 )
  {
    v8 = 7;
    do
    {
      if ( a2 == result )
        goto LABEL_7;
      v10 = *result++;
      v3 = v10;
      v11 = v10 & 0x7F;
      v9 = v6 | (v11 << v8);
      v12 = (v11 << (v8 - 32)) | (v11 >> (32 - v8));
      v8 += 7;
      LODWORD(v6) = v9;
      v7 = v12 | HIDWORD(v6);
      HIDWORD(v6) = v7;
    }
    while ( v10 < 0 );
    if ( v8 > 0x3F )
    {
      *a3 = v9;
      a3[1] = v7;
      if ( result == a1 )
        goto LABEL_7;
      return result;
    }
  }
  else
  {
    v7 = 0;
    LOBYTE(v8) = 7;
    v9 = v3 & 0x7F;
  }
  if ( (v3 & 0x40) != 0 )
  {
    LODWORD(v6) = -(1 << v8) | v9;
    HIDWORD(v6) = ((unsigned __int64)-__SPAIR64__((1 << (v8 - 32)) | (1u >> (32 - v8)), 1 << v8) >> 32) | v7;
  }
  *(_QWORD *)a3 = v6;
  if ( result == a1 || !result )
LABEL_7:
    sub_946E0("DWARF expression error: ran off end of buffer reading sleb128 value");
  return result;
}
