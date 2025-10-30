char ***__fastcall sub_11B710(int a1, int a2, char *a3, char *s)
{
  char *v5; // r4
  size_t v8; // r5
  char *v9; // r5
  unsigned int v10; // r0
  int v11; // r8
  char *v12; // r0
  char ***result; // r0
  const char *v14; // r4
  int v15; // r9
  unsigned int v16; // r0
  const char *v17; // r5

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
      goto LABEL_11;
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
  {
LABEL_7:
    v12 = sub_EAFD0((int)a3);
    result = sub_11B4C8(a1, a2, (unsigned int)v12, v11, v5);
    if ( !result )
    {
      sub_D0048(34, 152, 128, (int)"crypto/x509v3/v3_conf.c", 47);
      sub_D1240(4, "name=", a3, ", value=", v5);
      return 0;
    }
    return result;
  }
LABEL_11:
  if ( !strncmp(v5, "DER:", 4u) )
  {
    v14 = v5 + 4;
    v15 = 1;
  }
  else
  {
    if ( v8 == 4 || strncmp(v5, "ASN1:", 5u) )
      goto LABEL_7;
    v14 = v5 + 5;
    v15 = 2;
  }
  do
  {
    v16 = *(unsigned __int8 *)v14;
    v17 = v14++;
  }
  while ( sub_BDB10(v16, 8) );
  return sub_11B3A8(a3, v17, v11, v15, a2);
}
