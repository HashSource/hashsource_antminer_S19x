int __fastcall sub_32CCC8(int a1, int a2, int a3, int *a4, int *a5)
{
  void *v9; // r8
  int v10; // lr
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  size_t v17; // r0
  void *v18; // r0
  char *v19; // r9
  int v21; // r4
  int v22; // [sp+8h] [bp-68h] BYREF
  _DWORD v23[2]; // [sp+Ch] [bp-64h] BYREF
  char v24; // [sp+14h] [bp-5Ch]
  __int16 v25; // [sp+16h] [bp-5Ah]
  int v26; // [sp+18h] [bp-58h] BYREF
  int v27; // [sp+1Ch] [bp-54h]
  int v28; // [sp+20h] [bp-50h]
  int v29; // [sp+24h] [bp-4Ch]
  int v30; // [sp+28h] [bp-48h]
  int v31; // [sp+2Ch] [bp-44h]
  int v32; // [sp+30h] [bp-40h]
  char v33; // [sp+34h] [bp-3Ch] BYREF

  v9 = (void *)(*(_BYTE *)(a2 + 8) & 0x70);
  v22 = 0;
  if ( v9 )
  {
    v9 = (void *)(*(_BYTE *)(a3 + 8) & 0x70);
    if ( (*(_BYTE *)(a3 + 8) & 0x70) != 0 )
      goto LABEL_3;
  }
  else
  {
    if ( sub_327A48((int *)a2, a5, &v22) )
      goto LABEL_16;
    v9 = (void *)(*(_BYTE *)(a3 + 8) & 0x70);
    if ( (*(_BYTE *)(a3 + 8) & 0x70) != 0 )
      goto LABEL_3;
  }
  if ( sub_327A48((int *)a3, a5, &v22) )
    goto LABEL_16;
LABEL_3:
  v9 = (void *)(a4[2] & 0x70);
  if ( (a4[2] & 0x70) != 0 || !sub_327A48(a4, a5, &v22) )
  {
    v10 = *(_DWORD *)a2;
    v11 = a5[1];
    v12 = a5[2];
    v13 = a5[3];
    v26 = *a5;
    v27 = v11;
    v28 = v12;
    v29 = v13;
    v14 = a5[4];
    v15 = a5[5];
    v16 = a5[6];
    v26 = v10 + *(_DWORD *)a3;
    v27 = 999999999;
    v30 = v14;
    v31 = v15;
    v32 = v16;
    v28 = -999999999;
    if ( v26 <= 49 )
    {
      v17 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v26) + 5);
      if ( v17 > 0x3C )
        goto LABEL_6;
    }
    else
    {
      v17 = (((2863311531u * (unsigned __int64)(unsigned int)(v26 + 2)) >> 32) & 0xFFFFFFFE) + 10;
      if ( v17 > 0x3C )
      {
LABEL_6:
        v18 = malloc(v17);
        v9 = v18;
        if ( !v18 )
        {
          v21 = v22 | 0x10;
          v22 |= 0x10u;
LABEL_12:
          sub_327DE4(a1, v21, (int)a5);
          return a1;
        }
        v19 = (char *)v18;
LABEL_9:
        sub_32B538((int)v19, a2, a3, (int)&v26, &v22);
        v21 = v22;
        if ( (v22 & 0x80) != 0 )
        {
          if ( (v22 & 0x40000000) == 0 )
          {
            *(_DWORD *)(a1 + 4) = 0;
            *(_WORD *)(a1 + 10) = 0;
            *(_DWORD *)a1 = 1;
            *(_BYTE *)(a1 + 8) = 32;
            free(v9);
            goto LABEL_12;
          }
          a4 = v23;
          v24 = 0;
          v23[1] = 0;
          v25 = 0;
          v23[0] = 1;
        }
        sub_32C3B0(a1, (int)v19, __SPAIR64__((unsigned int)a5, (unsigned int)a4), 0, &v22);
        goto LABEL_16;
      }
    }
    v19 = &v33;
    v9 = 0;
    goto LABEL_9;
  }
LABEL_16:
  v21 = v22;
  free(v9);
  if ( v21 )
    goto LABEL_12;
  return a1;
}
