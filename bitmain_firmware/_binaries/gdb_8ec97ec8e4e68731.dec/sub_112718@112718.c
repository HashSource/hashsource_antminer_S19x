char *__fastcall sub_112718(char *a1, char *a2)
{
  char *v2; // r3
  int v3; // t1

  if ( a1 == a2 )
    goto LABEL_6;
  v2 = a1 + 1;
  if ( *a1 >= 0 )
  {
    if ( a1 != (char *)-1 )
      return a1 + 1;
LABEL_6:
    sub_946E0("DWARF expression error: ran off end of buffer reading leb128 value");
  }
  do
  {
    if ( a2 == v2 )
      goto LABEL_6;
    v3 = *v2++;
  }
  while ( v3 < 0 );
  if ( v2 == a1 )
    goto LABEL_6;
  return v2;
}
