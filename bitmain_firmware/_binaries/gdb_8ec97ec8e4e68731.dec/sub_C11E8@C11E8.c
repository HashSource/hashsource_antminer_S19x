void *__fastcall sub_C11E8(void **a1)
{
  signed int v2; // r10
  unsigned __int8 *v3; // r8
  void *result; // r0
  unsigned int v5; // r4
  char *v6; // r12
  int v7; // r9
  int v8; // r1
  int v9; // r10
  int v10; // r2
  int *v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r12
  int v15; // r3
  unsigned __int8 *v16; // r2
  unsigned __int8 *v17; // r8
  bool v18; // cc
  unsigned __int8 *v19; // r2
  unsigned __int8 *v20; // r3
  bool v21; // zf
  int *v22; // r1
  unsigned __int8 *v23; // r2
  void *v24; // t1
  int v25; // [sp+0h] [bp-4Ch] BYREF
  int v26; // [sp+4h] [bp-48h]
  __int64 v27; // [sp+8h] [bp-44h]
  char *v28; // [sp+10h] [bp-3Ch]
  int *v29; // [sp+14h] [bp-38h]
  int *v30; // [sp+18h] [bp-34h]
  int v31; // [sp+1Ch] [bp-30h]
  int *v32; // [sp+20h] [bp-2Ch]
  int *v33; // [sp+24h] [bp-28h]

  v2 = (signed int)a1[1];
  v3 = 0;
  v32 = &v25;
  v30 = &v25;
  v33 = &v25;
  memset(&v25, 0, v2);
  result = memset(&v25, 0, v2);
  a1[8] = 0;
  a1[7] = 0;
  a1[5] = 0;
  a1[9] = 0;
  if ( v2 <= 0 )
    goto LABEL_45;
  v5 = *(unsigned __int8 *)*a1;
  if ( v5 > 0x35 || (v6 = (char *)&dword_46BC24[5 * v5], !*(_DWORD *)v6) )
  {
LABEL_36:
    a1[5] = (void *)1;
    return result;
  }
  if ( v2 <= *((_DWORD *)v6 + 1) )
  {
LABEL_39:
    a1[5] = (void *)2;
    return result;
  }
  v7 = 0;
  result = *a1;
  v8 = v2;
  v31 = 1;
  v9 = 0;
  while ( 1 )
  {
    v13 = *((unsigned __int8 *)v32 + v9);
    v29 = &v33[v9];
    if ( v13 && (unsigned __int8 *)v33[v9] != v3 )
    {
LABEL_46:
      a1[5] = (void *)4;
      return result;
    }
    v14 = v6 - (char *)dword_46BC24;
    *((_BYTE *)v30 + v9) = 1;
    v15 = dword_46BC24[5 * v5 + 3];
    v33[v9] = (int)v3;
    v16 = (unsigned __int8 *)a1[7];
    v17 = &v3[-v15];
    if ( (int)a1[8] > (int)v17 )
      a1[8] = v17;
    v3 = &v17[dword_46BC24[5 * v5 + 4]];
    v18 = (int)v16 < (int)v3;
    v19 = (unsigned __int8 *)a1[9];
    v20 = (unsigned __int8 *)dword_46BC24[5 * v5 + 2];
    if ( v18 )
      a1[7] = v3;
    if ( (int)v20 > (int)v19 )
      a1[9] = v20;
    v21 = v14 == 660;
    if ( v14 != 660 )
      v21 = v14 == 640;
    if ( !v21 )
    {
      if ( v14 != 760 )
        goto LABEL_15;
      if ( v7 + 3 > v8 )
LABEL_48:
        sub_946E0("GDB bug: ax-general.c (read_const): incomplete constant");
      v28 = (char *)result + v7;
LABEL_33:
      result = (void *)sub_C10E4((int)a1, (unsigned __int8)v28[2] | (*((unsigned __int8 *)result + v31) << 8));
      goto LABEL_15;
    }
    v26 = v7 + 3;
    if ( v7 + 3 > v8 )
      goto LABEL_48;
    v28 = (char *)result + v7;
    v27 = *((unsigned __int8 *)result + v31);
    v10 = *((unsigned __int8 *)result + v7 + 2) | ((_DWORD)v27 << 8);
    if ( v8 <= v10 )
      goto LABEL_38;
    if ( (*((_BYTE *)v32 + v10) || *((_BYTE *)v30 + v10)) && (unsigned __int8 *)v33[v10] != v3 )
      goto LABEL_46;
    v11 = v32;
    *((_BYTE *)v32 + v10) = 1;
    v33[v10] = (int)v3;
    if ( v14 == 660 )
    {
      if ( v26 < v8 )
      {
        if ( !*((_BYTE *)v11 + v9 + 3) )
        {
          a1[5] = (void *)5;
          return result;
        }
        v3 = (unsigned __int8 *)v29[3];
      }
    }
    else if ( v14 == 760 )
    {
      goto LABEL_33;
    }
LABEL_15:
    v8 = (int)a1[1];
    v7 += dword_46BC24[5 * v5 + 1] + 1;
    if ( v8 <= v7 )
      break;
    result = *a1;
    v9 = v7;
    v5 = *((unsigned __int8 *)*a1 + v7);
    if ( v5 > 0x35 )
      goto LABEL_36;
    v6 = (char *)&dword_46BC24[5 * v5];
    if ( !*(_DWORD *)v6 )
      goto LABEL_36;
    v12 = dword_46BC24[5 * v5 + 1];
    v31 = v7 + 1;
    if ( v8 < v7 + 1 + v12 )
      goto LABEL_39;
  }
  if ( v8 > 0 )
  {
    v22 = v30;
    v23 = (unsigned __int8 *)v32 - 1;
    while ( 1 )
    {
      v24 = (void *)*++v23;
      result = v24;
      if ( v24 )
      {
        result = (void *)*(unsigned __int8 *)v22;
        if ( !*(_BYTE *)v22 )
          break;
      }
      v22 = (int *)((char *)v22 + 1);
      if ( (unsigned __int8 *)a1[1] + (_DWORD)v32 - 1 == v23 )
        goto LABEL_45;
    }
LABEL_38:
    a1[5] = (void *)3;
    return result;
  }
LABEL_45:
  a1[6] = v3;
  return result;
}
