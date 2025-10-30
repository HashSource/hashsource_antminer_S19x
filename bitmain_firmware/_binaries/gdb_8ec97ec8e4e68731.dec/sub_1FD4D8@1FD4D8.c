void __fastcall sub_1FD4D8(int a1)
{
  int *v2; // r5

  v2 = *(int **)(a1 + 16);
  close(*(_DWORD *)(a1 + 4));
  close(*v2);
  *(_DWORD *)(a1 + 4) = -1;
  free(v2);
  *(_DWORD *)(a1 + 16) = 0;
}
