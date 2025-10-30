int sub_1942C()
{
  size_t v0; // r6
  int v1; // r4
  int v3; // r7
  int v4; // r10
  int v5; // r9
  int v6; // r6
  int v7; // r10
  int v8; // r7
  int v9; // r0
  int v10; // [sp+8h] [bp-3Ch]
  char *v11; // [sp+Ch] [bp-38h]
  char *v12; // [sp+10h] [bp-34h]
  char *v13; // [sp+14h] [bp-30h]
  char *v14; // [sp+18h] [bp-2Ch]
  int v15; // [sp+1Ch] [bp-28h]
  int v16; // [sp+20h] [bp-24h]
  int v17; // [sp+24h] [bp-20h]
  char *ptr; // [sp+28h] [bp-1Ch]
  char *v19; // [sp+2Ch] [bp-18h]
  char *v20; // [sp+30h] [bp-14h]
  char *v21; // [sp+34h] [bp-10h]
  char v22; // [sp+3Ch] [bp-8h] BYREF
  char v23; // [sp+3Dh] [bp-7h] BYREF
  char v24; // [sp+3Eh] [bp-6h] BYREF
  _BYTE v25[5]; // [sp+3Fh] [bp-5h] BYREF

  ptr = (char *)calloc(0x10u, 1u);
  v19 = (char *)calloc(0x10u, 1u);
  v20 = (char *)calloc(0x20u, 1u);
  v21 = (char *)calloc(0x20u, 1u);
  sub_17614((int)ptr, (int)v19, (int)v20, (int)v21);
  v0 = *(unsigned __int8 *)(dword_A0D68 + 12935);
  v11 = (char *)calloc(v0, 1u);
  v12 = (char *)calloc(v0, 1u);
  v13 = (char *)calloc(2 * v0, 1u);
  v14 = (char *)calloc(2 * v0, 1u);
  v1 = *(unsigned __int8 *)(dword_A05EC + 96);
  if ( !*(_BYTE *)(dword_A05EC + 96) )
    goto LABEL_2;
  v3 = sub_17A14(v11, ptr, 1u);
  v4 = sub_17A14(v12, v19, 1u);
  v15 = sub_17A14(v13, v20, 2u);
  v17 = sub_17A14(v14, v21, 2u);
  pthread_mutex_lock(&stru_A05F4);
  if ( dword_A060C <= 0 )
  {
LABEL_20:
    v1 = 0;
    goto LABEL_21;
  }
  v5 = v4;
  v6 = 0;
  v7 = v3;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = sub_17968(v11, v7, (char *)(dword_A0610 + 192 * v6), &v22, 1u);
      v10 = sub_17968(v12, v5, (char *)(dword_A0610 + 192 * v6 + 32), &v23, 1u);
      v16 = sub_17968(v13, v15, (char *)(dword_A0610 + 192 * v6 + 64), &v24, 2u);
      v9 = sub_17968(v14, v17, (char *)(dword_A0610 + 192 * v6 + 128), v25, 2u);
      if ( v7 == v8 )
        break;
      if ( v7 != 1 )
        goto LABEL_6;
      if ( !v22 )
        break;
      if ( dword_A060C <= ++v6 )
        goto LABEL_20;
    }
    if ( v5 != v10 && (v5 != 1 || v23) || v15 != v16 && (v15 != 1 || v24) )
      goto LABEL_6;
    if ( v17 == v9 )
      break;
    if ( v17 == 1 && !v25[0] )
    {
      v1 = 1;
      goto LABEL_21;
    }
LABEL_6:
    if ( dword_A060C <= ++v6 )
      goto LABEL_20;
  }
  v1 = 1;
LABEL_21:
  pthread_mutex_unlock(&stru_A05F4);
LABEL_2:
  free(ptr);
  free(v19);
  free(v20);
  free(v21);
  free(v11);
  free(v12);
  free(v13);
  free(v14);
  return v1;
}
