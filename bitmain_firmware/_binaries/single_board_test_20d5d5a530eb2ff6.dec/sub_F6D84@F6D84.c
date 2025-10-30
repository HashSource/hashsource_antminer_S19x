int __fastcall sub_F6D84(int a1, int *a2, int *a3, int *a4)
{
  char *v8; // r0
  char *v9; // r0
  int v10; // r0
  int *v11; // r3
  char *v12; // r0
  char *v13; // r0
  int v14; // r0
  int v15; // r0
  void *v17; // r0
  void *v18; // r0

  if ( !a1 )
    return 0;
  if ( *(_DWORD *)a1 )
  {
    v8 = sub_EAC84(**(_DWORD **)a1);
    v9 = sub_EAAB4((unsigned int)v8);
    v10 = sub_D99DC((int)v9);
    if ( !v10 )
    {
      sub_D0048(4, 156, 166, (int)"crypto/rsa/rsa_ameth.c", 585);
      *a2 = 0;
      return 0;
    }
    *a2 = v10;
  }
  else
  {
    v17 = sub_D93D8();
    *a2 = (int)v17;
    if ( !v17 )
      return 0;
  }
  v11 = *(int **)(a1 + 16);
  if ( v11 )
  {
    v12 = sub_EAC84(*v11);
    v13 = sub_EAAB4((unsigned int)v12);
    v14 = sub_D99DC((int)v13);
    if ( !v14 )
    {
      sub_D0048(4, 156, 166, (int)"crypto/rsa/rsa_ameth.c", 585);
      *a3 = 0;
      return 0;
    }
    *a3 = v14;
  }
  else
  {
    v18 = sub_D93D8();
    *a3 = (int)v18;
    if ( !v18 )
      return 0;
  }
  if ( !*(_DWORD *)(a1 + 8) )
  {
    *a4 = 20;
    goto LABEL_10;
  }
  v15 = sub_126F04();
  *a4 = v15;
  if ( v15 < 0 )
  {
    sub_D0048(4, 151, 150, (int)"crypto/rsa/rsa_ameth.c", 731);
    return 0;
  }
LABEL_10:
  if ( !*(_DWORD *)(a1 + 12) || sub_126F04() == 1 )
    return 1;
  sub_D0048(4, 151, 139, (int)"crypto/rsa/rsa_ameth.c", 743);
  return 0;
}
