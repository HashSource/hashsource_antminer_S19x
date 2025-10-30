const char *__fastcall sub_95AF0(const char *s1, int a2, int a3)
{
  int v3; // r9
  unsigned int v4; // r4
  const char *v7; // r6
  unsigned int v8; // r4
  unsigned int v9; // r5
  __int64 v10; // r2

  v3 = dword_487D2C;
  v4 = *(_DWORD *)(dword_487D2C + 40);
  if ( v4 < *(_DWORD *)(dword_487D2C + 44) )
  {
    v7 = s1;
    v8 = v4 + 16;
    do
    {
      v9 = v8;
      s1 = (const char *)j_strcmp(v7, **(const char ***)(*(_DWORD *)(v8 - 8) + 148));
      if ( !s1 && *(_DWORD *)(*(_DWORD *)(v8 - 8) + 8) == a2 )
      {
        v10 = *(_QWORD *)(v8 - 16);
        *(_DWORD *)(v8 - 16) = a3;
        *(_DWORD *)(v8 - 12) = a3 + HIDWORD(v10) - v10;
      }
      v8 += 16;
    }
    while ( *(_DWORD *)(v3 + 44) > v9 );
  }
  return s1;
}
