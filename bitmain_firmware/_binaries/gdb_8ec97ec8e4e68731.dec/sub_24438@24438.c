int __fastcall sub_24438(int a1, unsigned int **a2)
{
  unsigned int *v3; // r4
  unsigned int v4; // r6
  int v5; // r0

  v3 = *a2;
  if ( !*a2 )
  {
    v3 = sub_24218(a1);
    *a2 = v3;
  }
  v4 = sub_15DDFC(a1);
  v5 = sub_15ECB4(a1);
  if ( *(_DWORD *)(sub_163E78(v5) + 36) >= v4 )
    return 2;
  if ( *v3 )
    return 0;
  return 2;
}
