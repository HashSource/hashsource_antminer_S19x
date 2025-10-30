int __fastcall sub_1E9690(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _BYTE **v8; // r6
  char *v9; // r4
  int v10; // r0
  int v11; // r0
  unsigned int v16; // [sp+18h] [bp-8h] BYREF

  v5 = ((int (__fastcall *)(int))loc_1E2198)(31);
  if ( v5 == 2 )
    sub_946E0("qGetTIBAddr not supported or disabled on this target");
  v6 = sub_16F654(v5);
  v7 = ((int (__fastcall *)(int))loc_1E2770)(v6);
  v8 = (_BYTE **)dword_488C94;
  v9 = *(char **)dword_488C94;
  v10 = sub_1E2890(v7);
  strcpy(v9, "qGetTIBAddr:");
  *sub_1E29EC((int)(v9 + 12), (int)&v9[v10], a2, a3, a4) = 0;
  sub_1E7DEC(*v8);
  sub_1E4EB8(v8, (size_t *)v8 + 1, 0, 0, 0);
  v11 = sub_1E1768(*v8, dword_4888DC);
  if ( v11 != 1 )
  {
    if ( v11 != 2 )
      sub_946E0("Remote target failed to process qGetTIBAddr request");
    sub_946E0("Remote target doesn't support qGetTIBAddr packet");
  }
  sub_99188(*v8, &v16);
  if ( a5 )
    *a5 = v16;
  return 1;
}
