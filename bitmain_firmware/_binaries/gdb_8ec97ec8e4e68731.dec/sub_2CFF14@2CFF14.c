char **__fastcall sub_2CFF14(const char *a1, char **a2, int a3)
{
  size_t v6; // r0
  char *v7; // r6
  signed int v8; // r7
  signed int v9; // r5
  signed int v10; // r2
  char *v11; // t1

  v6 = strlen(a1);
  v7 = *a2;
  if ( !*a2 )
    return (char **)v7;
  v8 = v6;
  while ( 1 )
  {
    v9 = (signed int)a2[1];
    if ( v8 < v9 || memcmp(a1, v7, (size_t)a2[1]) )
      goto LABEL_11;
    v10 = (signed int)a2[2];
    if ( v10 <= 0 )
      break;
    if ( v9 + v10 <= v8 && !memcmp(&a1[v8 - v10], &v7[v9], v10) )
      return a2;
LABEL_11:
    v11 = a2[5];
    a2 += 5;
    v7 = v11;
    if ( !v11 )
      return (char **)v7;
  }
  if ( a1[v9] && (!v10 || a1[v9] != 46 && (v10 == -2 || a3 && a2[3] == (char *)9)) )
    goto LABEL_11;
  return a2;
}
