const char *__fastcall sub_404CC(unsigned int *a1, size_t *a2)
{
  _DWORD *v2; // r12
  const char *v3; // r4
  int v5; // r4
  unsigned int v6; // lr

  *a1 = 0;
  if ( !dword_7686C )
    return 0;
  v2 = (_DWORD *)dword_76864;
  if ( *(_DWORD *)(dword_76864 + 4) == 8 )
  {
    v5 = 28;
    v6 = 1;
    do
    {
      *a1 = v6;
      if ( dword_7686C <= v6++ )
        return 0;
      v2 = (_DWORD *)(dword_76864 + v5);
      v5 += 28;
    }
    while ( v2[1] == 8 );
  }
  v3 = (const char *)(*v2 + 1);
  *a2 = strcspn(v3, "|= ");
  return v3;
}
