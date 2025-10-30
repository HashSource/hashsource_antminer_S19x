int __fastcall sub_10BC04(int *a1, int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r7
  int v5; // r3
  int v7; // r4

  v2 = (unsigned int)a2 >> 31;
  if ( !a1 )
    v2 = 1;
  if ( v2 )
    return 0;
  v3 = *a1;
  if ( a2 >= *a1 )
    return 0;
  v4 = a1[1];
  v5 = v3 - 1;
  v7 = *(_DWORD *)(v4 + 4 * a2);
  if ( a2 != v3 - 1 )
  {
    memmove((void *)(v4 + 4 * a2), (const void *)(4 * a2 + 4 + v4), 4 * (v3 - a2 - 1));
    v5 = *a1 - 1;
  }
  *a1 = v5;
  return v7;
}
