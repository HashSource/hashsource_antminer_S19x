int __fastcall sub_77610(unsigned int *a1, unsigned int *a2, unsigned int *a3)
{
  bool v3; // zf
  char v4; // r12
  int v5; // r12
  unsigned int v6; // r12
  unsigned int v7; // r4
  unsigned int v8; // r3
  unsigned int v9; // r1
  int result; // r0
  bool v11; // r0
  bool v12; // cf
  unsigned int v13; // r3

  v3 = a2 == 0;
  if ( a2 )
    v3 = a3 == 0;
  v4 = !v3;
  if ( a1 )
    v5 = v4 & 1;
  else
    v5 = 0;
  if ( !v5 )
    sub_6FC54((int)"./../lib/isc/unix/time.c", 284, 0, "t != ((void *)0) && i != ((void *)0) && result != ((void *)0)");
  v6 = a1[1];
  if ( v6 > 0x3B9AC9FF || (v7 = a2[1], v7 > 0x3B9AC9FF) )
    sub_6FC54((int)"./../lib/isc/unix/time.c", 285, 2, "t->nanoseconds < 1000000000 && i->nanoseconds < 1000000000");
  v8 = *a1;
  v9 = *a2;
  if ( *a1 < v9 )
    return 41;
  v11 = *a1 == v9;
  result = v6 < v7 && v11;
  if ( result )
    return 41;
  v12 = v6 >= v7;
  v13 = v8 - v9;
  if ( v6 >= v7 )
    v6 -= v7;
  *a3 = v13;
  if ( !v12 )
  {
    v6 = v6 + 1000000000 - v7;
    *a3 = v13 - 1;
  }
  a3[1] = v6;
  return result;
}
