int __fastcall sub_33E96C(_DWORD *a1)
{
  unsigned __int8 *v1; // r3

  v1 = (unsigned __int8 *)a1[3];
  if ( (unsigned int)*v1 - 73 > 1 )
    return 0;
  a1[3] = v1 + 1;
  return sub_33E8A8(a1);
}
