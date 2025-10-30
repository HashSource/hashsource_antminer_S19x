void *__fastcall sub_122CC0(void *a1, int a2)
{
  int v4; // r5

  v4 = *(_DWORD *)(*(_DWORD *)(a2 + 12) + 4) + *(_DWORD *)a2;
  memset(a1, 0, 0x30u);
  sub_11E520((int)a1, v4, *(int ***)(a2 + 12), 0);
  return a1;
}
