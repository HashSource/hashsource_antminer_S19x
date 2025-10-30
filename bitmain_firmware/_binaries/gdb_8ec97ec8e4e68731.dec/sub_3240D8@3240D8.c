int __fastcall sub_3240D8(_DWORD *a1, int *a2)
{
  unsigned int v2; // r3
  int result; // r0
  int (*v6)(void); // r3
  int v7; // r3

  v2 = a1[3];
  if ( v2 > (unsigned int)a2 || (unsigned int)a2 >= v2 + 4 * a1[4] || (result = *a2, (unsigned int)*a2 <= 1) )
    abort();
  v6 = (int (*)(void))a1[2];
  if ( v6 )
    result = v6();
  v7 = a1[6];
  *a2 = 1;
  a1[6] = v7 + 1;
  return result;
}
