void __fastcall sub_1C4EA8(unsigned int *a1, int a2)
{
  unsigned int v2; // r1
  unsigned int v3; // r1
  void *v5; // r0
  void *v6; // r0
  void *v7; // r3

  v2 = a2 + a1[2];
  if ( v2 >= *a1 )
  {
    v3 = v2 + 10;
    if ( 2 * *a1 >= v3 )
      v3 = 2 * *a1;
    v5 = (void *)a1[1];
    a1[1] = 0;
    *a1 = v3;
    v6 = sub_93050(v5, 16 * (v3 + 2));
    v7 = (void *)a1[1];
    a1[1] = (unsigned int)v6;
    if ( v7 )
      free(v7);
  }
}
