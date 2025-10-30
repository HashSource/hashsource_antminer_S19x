int __fastcall sub_1EB280(int a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  int v6; // r0
  int v7; // r0
  int v8; // r0
  unsigned __int8 **v9; // r7
  char *v10; // r4
  _BYTE **v11; // r10
  int v12; // r0
  char *v13; // r0
  char *v14; // r5
  int v15; // r0
  int v16; // r0
  int v18; // r0
  unsigned int v22; // [sp+18h] [bp-8h] BYREF

  v6 = ((int (__fastcall *)(int))loc_1E2198)(32);
  if ( v6 == 2 )
  {
    v18 = sub_92F64(6, "TLS not supported or disabled on this target");
    return sub_1EB3C0(v18);
  }
  else
  {
    v7 = sub_16F654(v6);
    v8 = ((int (__fastcall *)(int))loc_1E2770)(v7);
    v9 = (unsigned __int8 **)dword_488C94;
    v10 = *(char **)dword_488C94;
    v11 = (_BYTE **)dword_488C94;
    v12 = sub_1E2890(v8);
    strcpy(v10, "qGetTLSAddr:");
    v13 = sub_1E29EC((int)(v10 + 12), (int)&v10[v12], a2, a3, a4);
    v14 = v13 + 1;
    *v13 = 44;
    v15 = sub_1E0F74((int)(v13 + 1), a6);
    v14[v15] = 44;
    v14[v15 + 1 + sub_1E0F74((int)&v14[v15 + 1], a5)] = 0;
    sub_1E7DEC(*v11);
    sub_1E4EB8(v11, (size_t *)v11 + 1, 0, 0, 0);
    v16 = sub_1E1768(*v11, dword_4888EC);
    if ( v16 != 1 )
    {
      if ( v16 != 2 )
        sub_92F64(6, "Remote target failed to process qGetTLSAddr request");
      sub_92F64(6, "Remote target doesn't support qGetTLSAddr packet");
    }
    sub_99188(*v9, &v22);
    return v22;
  }
}
