void __fastcall sub_87CE4(int a1, const char *a2)
{
  int v3; // r6
  char *v4; // r8
  int v5[4]; // [sp+Ch] [bp-14h] BYREF

  v3 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 12) = v3 & 0xFFFFFFFB;
  v5[2] = 1;
  v5[0] = 0;
  v5[1] = 0;
  v5[3] = 0;
  v4 = sub_7FA64(a2);
  sub_87938(a1, v5, v4, 0, 0);
  free(v4);
  *(_DWORD *)(a1 + 12) = v3;
}
