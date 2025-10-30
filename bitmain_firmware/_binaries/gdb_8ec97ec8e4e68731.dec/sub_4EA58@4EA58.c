int __fastcall sub_4EA58(int a1, int a2, int a3)
{
  char *v5; // r0
  int v7[3]; // [sp+0h] [bp-Ch] BYREF

  v5 = sub_4D77C();
  if ( !v5 || !v5[3] )
    return -1;
  sub_4E9BC(a2, (int *)(a3 + 4), *(_DWORD *)(a3 + 8), (unsigned int *)v7);
  sub_4DD3C(v7, 0);
  return 0;
}
