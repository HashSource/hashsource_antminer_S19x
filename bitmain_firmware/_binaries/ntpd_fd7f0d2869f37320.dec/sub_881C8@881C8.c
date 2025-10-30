char *__fastcall sub_881C8(int a1, char *a2)
{
  char *v4; // r6
  size_t v5; // r0
  int v6; // r5
  int v7; // r0
  unsigned __int8 *v8; // r4
  int v9; // t1
  unsigned int v10; // r3
  char *v12; // r3
  bool v13; // zf
  char *v14; // t1

  v4 = (char *)sub_7FBE0(0xAu);
  v5 = strlen(*(const char **)(a1 + 28));
  strcpy(v4, "<?program");
  v6 = v5;
  while ( 1 )
  {
    v7 = dword_108358;
    v8 = (unsigned __int8 *)(a2 + 1);
    if ( !dword_108358 )
      v7 = sub_7F738(12);
    if ( *(_BYTE *)(v7 + (unsigned __int8)a2[1]) )
    {
      do
        v9 = *++v8;
      while ( *(_BYTE *)(v7 + v9) );
    }
    if ( !sub_86F54(v8, *(unsigned __int8 **)(a1 + 28), v6) )
    {
      v10 = v8[v6];
      if ( v10 <= 0x7F && (dword_A0784[v10] & 0x1000C01) != 0 )
        break;
    }
    a2 = strstr((const char *)v8, v4);
    if ( !a2 )
    {
      free(v4);
      return a2;
    }
  }
  free(v4);
  v12 = (char *)&v8[v6];
  do
  {
    v14 = (char *)(unsigned __int8)*v12++;
    a2 = v14;
    if ( !v14 )
      break;
    v13 = a2 == (_BYTE *)&off_3C + 2;
    a2 = v12;
  }
  while ( !v13 );
  return a2;
}
