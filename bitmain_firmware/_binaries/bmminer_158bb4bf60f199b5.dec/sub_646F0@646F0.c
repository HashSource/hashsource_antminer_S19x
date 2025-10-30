const char *__fastcall sub_646F0(unsigned int *a1, size_t *a2)
{
  _DWORD *v2; // r12
  const char *v3; // r4
  int v5; // r4
  unsigned int v6; // lr

  *a1 = 0;
  if ( !dword_2463EC )
    return 0;
  v2 = (_DWORD *)dword_2463E4;
  if ( *(_DWORD *)(dword_2463E4 + 4) == 8 )
  {
    v5 = 28;
    v6 = 1;
    do
    {
      *a1 = v6;
      if ( dword_2463EC <= v6++ )
        return 0;
      v2 = (_DWORD *)(dword_2463E4 + v5);
      v5 += 28;
    }
    while ( v2[1] == 8 );
  }
  v3 = (const char *)(*v2 + 1);
  *a2 = strcspn(v3, (const char *)&off_89BE4);
  return v3;
}
