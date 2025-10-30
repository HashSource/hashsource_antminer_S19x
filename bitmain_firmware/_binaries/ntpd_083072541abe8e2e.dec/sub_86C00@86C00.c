unsigned __int8 *__fastcall sub_86C00(int a1, char *a2)
{
  char *v4; // r6
  size_t v5; // r5
  char *v6; // r0
  unsigned __int8 *v7; // r4
  int v8; // t1
  unsigned int v9; // r1
  unsigned __int8 *result; // r0
  int v11; // r1
  unsigned __int8 *v12; // r3
  int v13; // t1
  int v14; // [sp+Ch] [bp-10h]

  v4 = (char *)malloc(0xAu);
  if ( !v4 )
    sub_C610(10);
  v5 = strlen(*(const char **)(a1 + 28));
  strcpy(v4, "<?program");
  while ( 1 )
  {
    v6 = (char *)dword_107334;
    v7 = (unsigned __int8 *)(a2 + 1);
    if ( !dword_107334 )
      v6 = sub_7E2F8(12);
    if ( v6[(unsigned __int8)a2[1]] )
    {
      do
        v8 = *++v7;
      while ( v6[v8] );
    }
    if ( !sub_859EC(v7, *(unsigned __int8 **)(a1 + 28), v5) )
    {
      v9 = v7[v5];
      if ( v9 <= 0x7F && (dword_9F184[v9] & 0x1000C01) != 0 )
        break;
    }
    a2 = strstr((const char *)v7, v4);
    if ( !a2 )
    {
      free(v4);
      return 0;
    }
  }
  v14 = v7[v5];
  free(v4);
  v11 = v14;
  v12 = &v7[v5 + 1];
  while ( v11 )
  {
    result = v12;
    if ( v11 == 62 )
      return result;
    v13 = *v12++;
    v11 = v13;
  }
  return 0;
}
