bool __fastcall sub_1615E8(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _BOOL4 v10; // r4
  unsigned int v11; // r0
  char *v12; // r0
  size_t v13; // r6
  int v14; // r3
  int v15; // r9
  int v16; // r10
  unsigned int v17; // r0
  char *v18; // r8
  int v19; // r0
  int v20; // r1
  int v22; // r0
  char v23[1028]; // [sp+10h] [bp-404h] BYREF

  v10 = a3;
  if ( a3 )
  {
    v11 = sub_D8AD8(a3);
    v12 = sub_EAAB4(v11);
    if ( !v12 || (v13 = strlen(v12) + 36, v13 + 2 * sub_D8940(v10) > 0x400) )
    {
      v10 = 0;
      sub_D0048(9, 117, 113, (int)"crypto/pem/pem_info.c", 266);
      goto LABEL_12;
    }
  }
  v14 = *(_DWORD *)(a2 + 8);
  if ( !v14 )
    goto LABEL_15;
  v15 = *(_DWORD *)(a2 + 36);
  if ( !v15 || (v16 = *(_DWORD *)(a2 + 32), v16 <= 0) )
  {
    v22 = sub_DA044(*(_DWORD **)(v14 + 12));
    if ( sub_ECB94(a1, v22, v10, a4, a5, a6, a7) <= 0 )
    {
LABEL_17:
      v10 = 0;
      goto LABEL_12;
    }
LABEL_15:
    v20 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 )
      goto LABEL_11;
LABEL_16:
    v10 = 1;
    goto LABEL_12;
  }
  if ( !v10 )
  {
    sub_D0048(9, 117, 127, (int)"crypto/pem/pem_info.c", 279);
    goto LABEL_12;
  }
  v17 = sub_D8AD8(*(_DWORD *)(a2 + 12));
  v18 = sub_EAAB4(v17);
  if ( !v18 )
  {
    v10 = 0;
    sub_D0048(9, 117, 113, (int)"crypto/pem/pem_info.c", 296);
    goto LABEL_12;
  }
  v23[0] = 0;
  sub_ED5C8(v23, 10);
  v19 = sub_D8940(v10);
  sub_ED61C(v23, v18, v19, (unsigned __int8 *)(a2 + 16));
  if ( sub_EDB94(a1, "RSA PRIVATE KEY", v23, v15, v16) <= 0 )
    goto LABEL_17;
  v20 = *(_DWORD *)a2;
  if ( !*(_DWORD *)a2 )
    goto LABEL_16;
LABEL_11:
  v10 = sub_EF1EC(a1, v20) > 0;
LABEL_12:
  sub_E07F8(v23, 0x400u);
  return v10;
}
