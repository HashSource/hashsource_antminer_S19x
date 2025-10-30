char *__fastcall sub_11257C(char *a1, char *a2, _QWORD *a3)
{
  char *result; // r0
  __int64 v5; // r4
  char v6; // r12
  char v7; // t1
  unsigned int v8; // r10

  if ( a1 >= a2 )
    goto LABEL_6;
  LODWORD(v5) = *a1 & 0x7F;
  result = a1 + 1;
  v5 = (unsigned int)v5;
  if ( (v5 & 0x80) != 0 )
  {
    v6 = 0;
    do
    {
      v6 += 7;
      if ( a2 == result )
        goto LABEL_6;
      v7 = *result++;
      v8 = v7 & 0x7F;
      LODWORD(v5) = v5 | (v8 << v6);
      HIDWORD(v5) |= (v8 << (v6 - 32)) | (v8 >> (32 - v6));
    }
    while ( v7 < 0 );
    *a3 = v5;
    if ( result == a1 )
LABEL_6:
      sub_946E0("DWARF expression error: ran off end of buffer reading uleb128 value");
  }
  else
  {
    *a3 = (unsigned int)v5;
    if ( !result )
      goto LABEL_6;
  }
  return result;
}
