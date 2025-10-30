int __fastcall sub_32D228(int a1, int a2, int a3, int a4)
{
  int *v4; // r6
  int v5; // r1
  void *v6; // r4
  int v10; // r3
  size_t v11; // r0
  void *v12; // r0
  void *v13; // r10
  char *v14; // r9
  int v16; // r5
  int v17; // r3
  size_t v18; // r0
  void *v19; // r0
  int *v20; // r9
  int v21; // [sp+Ch] [bp-4Ch] BYREF
  char v22; // [sp+10h] [bp-48h] BYREF
  char v23; // [sp+34h] [bp-24h] BYREF

  v4 = (int *)a2;
  v5 = *(char *)(a2 + 8);
  v6 = 0;
  v21 = 0;
  if ( v5 < 0 )
  {
    v17 = *v4;
    if ( *v4 <= 49 )
    {
      v18 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v17) + 5);
      if ( v18 > 0x24 )
        goto LABEL_17;
    }
    else
    {
      v18 = (((2863311531u * (unsigned __int64)(unsigned int)(v17 + 2)) >> 32) & 0xFFFFFFFE) + 10;
      if ( v18 > 0x24 )
      {
LABEL_17:
        v19 = malloc(v18);
        v6 = v19;
        if ( !v19 )
        {
          v16 = 16;
          v21 = 16;
          goto LABEL_14;
        }
        v20 = (int *)v19;
        goto LABEL_20;
      }
    }
    v20 = (int *)&v22;
    v6 = 0;
LABEL_20:
    sub_32AB6C((int)v20, (int)v4);
    v4 = v20;
    *((_BYTE *)v20 + 8) &= ~0x80u;
  }
  if ( *(char *)(a3 + 8) < 0 )
  {
    v10 = *(_DWORD *)a3;
    if ( *(int *)a3 <= 49 )
    {
      v11 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v10) + 5);
      if ( v11 > 0x24 )
        goto LABEL_5;
    }
    else
    {
      v11 = (((2863311531u * (unsigned __int64)(unsigned int)(v10 + 2)) >> 32) & 0xFFFFFFFE) + 10;
      if ( v11 > 0x24 )
      {
LABEL_5:
        v12 = malloc(v11);
        v13 = v12;
        if ( !v12 )
        {
          v16 = v21 | 0x10;
          v21 |= 0x10u;
          free(v6);
          goto LABEL_14;
        }
        v14 = (char *)v12;
        goto LABEL_8;
      }
    }
    v14 = &v23;
    v13 = 0;
LABEL_8:
    sub_32AB6C((int)v14, a3);
    a3 = (int)v14;
    v14[8] &= ~0x80u;
    goto LABEL_9;
  }
  v13 = 0;
LABEL_9:
  sub_32AE38(a1, (int)v4, a3, a4, 4u, &v21);
  v16 = v21;
  free(v6);
  free(v13);
  if ( !v16 )
    return a1;
LABEL_14:
  sub_327DE4(a1, v16, a4);
  return a1;
}
