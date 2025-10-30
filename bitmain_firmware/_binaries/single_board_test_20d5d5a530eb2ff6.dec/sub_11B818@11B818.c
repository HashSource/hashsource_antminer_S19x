char ***__fastcall sub_11B818(int a1, int a2, unsigned int a3, char *s)
{
  char *v5; // r4
  size_t v8; // r5
  char *v9; // r5
  unsigned int v10; // r0
  int v11; // r8
  const char *v13; // r4
  int v14; // r9
  unsigned int v15; // r0
  const char *v16; // r5
  char *v17; // r0

  v5 = s;
  v8 = strlen(s);
  if ( v8 <= 8 )
  {
    v11 = 0;
  }
  else
  {
    if ( strncmp(v5, "critical,", 9u) )
    {
      v11 = 0;
      goto LABEL_9;
    }
    v9 = v5 + 9;
    do
    {
      v10 = (unsigned __int8)*v9;
      v5 = v9++;
    }
    while ( sub_BDB10(v10, 8) );
    v11 = 1;
    v8 = strlen(v5);
  }
  if ( v8 <= 3 )
    return sub_11B4C8(a1, a2, a3, v11, v5);
LABEL_9:
  if ( !strncmp(v5, "DER:", 4u) )
  {
    v13 = v5 + 4;
    v14 = 1;
  }
  else
  {
    if ( v8 == 4 || strncmp(v5, "ASN1:", 5u) )
      return sub_11B4C8(a1, a2, a3, v11, v5);
    v13 = v5 + 5;
    v14 = 2;
  }
  do
  {
    v15 = *(unsigned __int8 *)v13;
    v16 = v13++;
  }
  while ( sub_BDB10(v15, 8) );
  v17 = sub_EAAB4(a3);
  return sub_11B3A8(v17, v16, v11, v14, a2);
}
