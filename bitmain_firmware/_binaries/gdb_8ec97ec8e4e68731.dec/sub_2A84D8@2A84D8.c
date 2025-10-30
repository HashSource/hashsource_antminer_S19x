int __fastcall sub_2A84D8(int a1, void *s)
{
  int *v2; // r4
  _DWORD *v3; // r0
  int v4; // r2
  _DWORD *v5; // r3

  v2 = *(int **)(a1 + 8);
  v3 = memset(s, 0, 0x68u);
  v4 = *v2;
  v5 = v3;
  v5[13] = 0;
  v5[12] = v4;
  return 0;
}
