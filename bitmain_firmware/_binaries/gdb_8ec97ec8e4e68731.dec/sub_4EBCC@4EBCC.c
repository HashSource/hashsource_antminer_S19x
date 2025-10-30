int __fastcall sub_4EBCC(int a1, int a2, int a3, int a4)
{
  char *v7; // r0
  int v9[2]; // [sp+0h] [bp-8h] BYREF

  v7 = sub_4D77C();
  if ( !v7 || !v7[2] )
    return -1;
  ((void (__fastcall *)(int, int, int, int *))loc_4EAB4)(a2, a3, a4, v9);
  sub_4DD3C(v9, 1);
  return 0;
}
