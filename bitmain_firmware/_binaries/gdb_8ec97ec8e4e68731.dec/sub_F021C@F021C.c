void __fastcall sub_F021C(int a1, int a2, int *a3)
{
  int v3; // r6
  int v4; // r4
  const char *v5; // r7
  int v7; // r5

  v3 = *a3;
  v4 = a3[1];
  v5 = *(const char **)a2;
  if ( *a3 > 0 )
  {
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      if ( !strcmp(*(const char **)(v4 + 20), v5) )
        break;
      v4 += 24;
      if ( v3 == v7 )
        return;
    }
    *(_DWORD *)v4 = *(_DWORD *)(a2 + 28) - *(_DWORD *)(v4 + 4);
  }
}
