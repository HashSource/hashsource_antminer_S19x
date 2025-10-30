bool __fastcall sub_194300(int a1)
{
  unsigned int v1; // r0
  bool v2; // cc

  v1 = **(char **)(a1 + 24);
  v2 = v1 > 1;
  if ( v1 != 1 )
    v2 = (unsigned __int8)(v1 - 18) > 1u;
  return !v2;
}
