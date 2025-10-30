void __fastcall sub_862F0(int a1, char *s)
{
  int v3; // r6
  char *v5; // r0
  char *v6; // r8
  int v7[4]; // [sp+Ch] [bp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 12) = v3 & 0xFFFFFFFB;
  v7[0] = 0;
  v7[1] = 0;
  v7[3] = 0;
  v7[2] = 1;
  v5 = _strdup(s);
  v6 = v5;
  if ( !v5 )
    sub_7E624(s);
  sub_85F40(a1, v7, v5, 0, 0);
  free(v6);
  *(_DWORD *)(a1 + 12) = v3;
}
