int __fastcall sub_10E100(_DWORD *a1, unsigned int a2, int a3)
{
  char **v5; // r0

  v5 = sub_EAA20(a2);
  if ( v5 )
    return sub_10E0BC(a1, (int)v5, a3);
  else
    return -2;
}
