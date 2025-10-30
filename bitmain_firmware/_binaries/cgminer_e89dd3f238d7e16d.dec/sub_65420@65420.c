int __fastcall sub_65420(_DWORD *a1, char *a2, int a3)
{
  size_t v3; // r0

  if ( a2 )
  {
    v3 = strlen(a2);
    if ( sub_64F60((int)a2, v3) )
      return sub_65360(a1, a2, a3);
  }
  sub_650B0(a3);
  return -1;
}
