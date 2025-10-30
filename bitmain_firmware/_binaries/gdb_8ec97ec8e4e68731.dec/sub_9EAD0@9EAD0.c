char *__fastcall sub_9EAD0(const char *a1)
{
  const char *v1; // r5
  size_t v2; // r0
  signed int v3; // r7
  char *v4; // r8
  int v5; // r3
  int v6; // r0
  char *v7; // r6
  signed int v8; // r4
  int v9; // t1

  v1 = a1;
  v2 = strlen(a1);
  v3 = v2;
  v4 = (char *)dword_477C90;
  if ( v2 + 1 > dword_477C8C )
  {
    v5 = 2 * dword_477C8C;
    if ( 2 * dword_477C8C < v2 + 1 )
      v5 = v2 + 1;
    dword_477C8C = v5;
    v4 = (char *)sub_9D470((void *)dword_477C90, &dword_477C8C, 1);
    dword_477C90 = (int)v4;
  }
  v6 = *(unsigned __int8 *)v1;
  if ( v6 == 39 )
  {
    strncpy(v4, v1 + 1, v3 - 2);
    v4[v3 - 2] = 0;
    return v4;
  }
  else
  {
    v7 = v4 - 1;
    v8 = 0;
    while ( 1 )
    {
      ++v8;
      *++v7 = tolower(v6);
      if ( v3 < v8 )
        break;
      v9 = *(unsigned __int8 *)++v1;
      v6 = v9;
    }
    return v4;
  }
}
