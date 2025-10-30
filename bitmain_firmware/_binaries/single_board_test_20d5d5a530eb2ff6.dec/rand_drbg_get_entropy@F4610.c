int __fastcall rand_drbg_get_entropy(int *a1, int *a2, int a3, void *a4, unsigned int a5, int a6)
{
  int v6; // r4
  int *v8; // r5
  unsigned int v9; // r4
  char *v10; // r6
  int *v11; // r3
  int v12; // r6
  int result; // r0
  unsigned int v14; // r0
  int *v15; // [sp+Ch] [bp-8h] BYREF

  v6 = a1[1];
  v15 = a1;
  if ( v6 && a1[8] > *(_DWORD *)(v6 + 32) )
  {
    sub_D0048(36, 120, 131, (int)"crypto/rand/rand_lib.c", 143);
    return 0;
  }
  v8 = (int *)a1[6];
  if ( v8 )
  {
    v8[8] = a3;
    goto LABEL_5;
  }
  v8 = (int *)sub_F3F4C(a3, a1[2], a4, a5);
  if ( !v8 )
    return 0;
  v6 = v15[1];
LABEL_5:
  if ( v6 )
  {
    v9 = sub_F415C(v8, 1);
    v10 = sub_F44A4(v8, v9);
    if ( !v10 )
    {
LABEL_10:
      v6 = 0;
      goto LABEL_11;
    }
    sub_F370C((int *)v15[1]);
    if ( sub_F347C((_DWORD *)v15[1], (int)v10, v9, a6, (int)&v15, 4u) )
    {
      v11 = v15;
      v12 = 8 * v9;
      if ( v15[20] )
      {
        v12 = 8 * v9;
        v15[21] = *(_DWORD *)(v15[1] + 84);
        v11 = v15;
      }
    }
    else
    {
      v11 = v15;
      v12 = 0;
      v9 = 0;
    }
    sub_F3718((int *)v11[1]);
    sub_F45CC(v8, v9, v12);
    v14 = sub_F4130(v8);
  }
  else
  {
    if ( a6 )
    {
      sub_D0048(36, 120, 133, (int)"crypto/rand/rand_lib.c", 195);
      goto LABEL_11;
    }
    v14 = sub_F4C94(v8);
  }
  if ( !v14 )
    goto LABEL_10;
  v6 = sub_F40E4((int)v8);
  *a2 = sub_F40E8(v8);
LABEL_11:
  result = v6;
  if ( !v15[6] )
  {
    sub_F408C(v8);
    return v6;
  }
  return result;
}
