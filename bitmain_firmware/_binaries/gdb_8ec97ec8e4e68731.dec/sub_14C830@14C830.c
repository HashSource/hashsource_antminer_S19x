int __fastcall sub_14C830(unsigned __int8 *a1, int a2)
{
  char *v3; // r1
  int v4; // r3

  v3 = *(char **)(sub_171258(a2) + 24);
  v4 = *v3;
  if ( (unsigned __int8)(v4 - 18) <= 1u )
  {
    v3 = *(char **)(*((_DWORD *)v3 + 5) + 24);
    v4 = *v3;
  }
  if ( v4 == 2 )
  {
    if ( (v3[2] & 1) != 0 )
      return 0;
    return *a1;
  }
  else
  {
    return v4 == 7 || v4 == 1;
  }
}
