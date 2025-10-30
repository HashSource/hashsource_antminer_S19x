int __fastcall sub_9F1B4(unsigned __int8 **a1, int *a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r3
  unsigned int v4; // r2
  int v6; // r4

  v2 = (unsigned int)a1[1];
  if ( v2 <= 1 )
    return 0;
  v3 = v2 - 2;
  v4 = (*a1)[1] | (**a1 << 8);
  if ( v4 > v3 )
    return 0;
  v6 = (int)(*a1 + 2);
  a1[1] = (unsigned __int8 *)(v3 - v4);
  *a1 = (unsigned __int8 *)(v6 + v4);
  *a2 = v6;
  a2[1] = v4;
  return 1;
}
