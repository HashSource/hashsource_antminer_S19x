int __fastcall sub_302920(int a1, int *a2)
{
  int v2; // r3
  int v5; // r5
  int v6; // r0
  int v7; // r3
  int v8; // r1

  v2 = a2[8];
  if ( *(char ***)(v2 + 60) == &off_470950 )
    return 1;
  v5 = *(_DWORD *)(v2 + 56);
  v6 = sub_2AB1E0(*a2);
  v7 = a2[8];
  v8 = *(_DWORD *)(v7 + 60);
  if ( (unsigned int)(v5 + v6) > *(_DWORD *)(v8 + 36) )
  {
    sub_2A6BBC("stabs.c", 739);
    v7 = a2[8];
    v8 = *(_DWORD *)(v7 + 60);
  }
  if ( sub_2A8A04(a1, *(_QWORD *)(v8 + 80) + *(unsigned int *)(v7 + 56), 0) || !sub_2AB1E8(a1, *a2) )
    return 0;
  sub_2AB0D4((void **)*a2);
  sub_2AAA1C((int)(a2 + 1));
  return 1;
}
