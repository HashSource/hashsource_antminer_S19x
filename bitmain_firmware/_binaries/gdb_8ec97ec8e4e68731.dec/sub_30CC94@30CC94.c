void __fastcall sub_30CC94(_DWORD *a1)
{
  int v2; // r3
  int i; // r5
  int v4; // r1
  void *v5; // r0
  bool v6; // cc
  char *v7; // r12
  int v8; // r3
  char *v9; // r2
  void *v10; // r0
  void *v11; // t1
  char *v12; // r5
  void *v13; // r0

LABEL_1:
  v2 = a1[4];
  for ( i = 4 * (v2 - 1); ; i -= 4 )
  {
    v6 = v2-- <= 0;
    if ( v6 )
      break;
    v4 = a1[2];
    a1[4] = v2;
    v5 = *(void **)(v4 + i);
    if ( v5 )
    {
      free(v5);
      *(_DWORD *)(a1[2] + i) = 0;
      goto LABEL_1;
    }
  }
  v7 = (char *)a1[3];
LABEL_7:
  v8 = a1[5];
  v9 = &v7[4 * v8];
  while ( 1 )
  {
    v6 = v8 <= 0;
    v12 = &v9[-4 - (_DWORD)v7];
    --v8;
    if ( v6 )
      break;
    v11 = (void *)*((_DWORD *)v9 - 1);
    v9 -= 4;
    v10 = v11;
    a1[5] = v8;
    if ( v11 )
    {
      free(v10);
      v7 = (char *)a1[3];
      *(_DWORD *)&v12[(_DWORD)v7] = 0;
      goto LABEL_7;
    }
  }
  if ( v7 )
  {
    free(v7);
    a1[3] = 0;
    a1[7] = 0;
  }
  v13 = (void *)a1[2];
  if ( v13 )
  {
    free(v13);
    a1[2] = 0;
    a1[6] = 0;
  }
}
