int __fastcall sub_92B44(unsigned __int8 **a1, int *a2)
{
  unsigned __int8 *v3; // r4
  int v5; // r3
  unsigned __int8 *v6; // r3

  if ( (unsigned int)a1[1] <= 1 )
    return 0;
  v3 = *a1;
  v5 = *v3 << 8;
  *a2 = v5;
  *a2 = v5 | v3[1];
  v6 = a1[1];
  *a1 = v3 + 2;
  a1[1] = v6 - 2;
  return 1;
}
