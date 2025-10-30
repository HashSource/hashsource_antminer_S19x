void sub_48B70()
{
  void **v0; // r6
  int v1; // r9
  int v2; // r5
  char *v3; // r2
  char *v4; // r4
  int v5; // r4

  LOWORD(v0) = (unsigned __int16)&dword_530F04;
  v1 = sub_26540();
  if ( v1 )
  {
    HIWORD(v0) = (unsigned int)&dword_530F04 >> 16;
    v2 = 0;
    v3 = (char *)*v0;
    do
    {
      v4 = (char *)&unk_202A2A + v2++;
      v5 = 4 * (_DWORD)v4;
      if ( *(_DWORD *)&v3[v5 + 4] )
      {
        free(*(void **)&v3[v5 + 4]);
        v3 = (char *)*v0;
        *(_DWORD *)((char *)*v0 + v5 + 4) = 0;
      }
    }
    while ( v1 != v2 );
  }
  else
  {
    HIWORD(v0) = (unsigned int)&dword_530F04 >> 16;
    v3 = (char *)*v0;
  }
  free(v3);
  *v0 = 0;
}
