int __fastcall sub_2BA08C(int a1, int a2, _DWORD *a3, int a4)
{
  int v5; // r4
  int v10; // r3
  void *v11; // r9
  int *v12; // r4
  int v13; // r6
  int v14; // r5
  int v15; // t1
  int v16; // r7
  int v17; // r11
  _DWORD *v18; // r10
  int v19; // r3
  unsigned int v20; // r2
  const char *v21; // r3
  unsigned __int8 *v22; // r0
  void *v23; // r0
  size_t maxlen; // [sp+8h] [bp-1Ch]
  int *v25; // [sp+Ch] [bp-18h]
  const char *v26; // [sp+10h] [bp-14h]
  int v27; // [sp+14h] [bp-10h]

  v5 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v5 + 44) != 4 )
    v5 = 0;
  if ( (*(_DWORD *)(*(_DWORD *)(a2 + 52) + 40) & 0x40) != 0 )
    sub_2A6BBC("elf32-arm.c", 17357);
  if ( !*(_DWORD *)(v5 + 436) )
    return sub_2D06B0(a1, a2, a3, a4);
  v27 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v27 + 44) != 4 )
    __und(0);
  v10 = *(_DWORD *)(v27 + 1280);
  if ( v10 && *(_DWORD *)(v10 + 100) )
  {
    v11 = sub_2AB368(128);
    if ( a4 <= 0 )
    {
      v18 = a3;
      v17 = 0;
    }
    else
    {
      v12 = a3;
      v25 = &a3[a4];
      v13 = 0;
      maxlen = 128;
      do
      {
        v15 = *v12++;
        v14 = v15;
        v16 = v13;
        v17 = v13;
        v18 = &a3[v13];
        v19 = *(_DWORD *)(v15 + 12);
        if ( (v19 & 8) != 0 && (v19 & 0x82) != 0 )
        {
          v26 = *(const char **)(v14 + 4);
          v20 = strlen(v26) + 12;
          v21 = v26;
          if ( v20 > maxlen )
          {
            maxlen = v20;
            v23 = sub_2AB3FC(v11, v20);
            v21 = v26;
            v11 = v23;
          }
          snprintf((char *)v11, maxlen, "%s%s", "__acle_se_", v21);
          v22 = (unsigned __int8 *)sub_2FC920(v27, v11, 0);
          if ( v22 && (unsigned int)v22[12] - 3 <= 1 && v22[48] == 2 && (v22[50] & 4) != 0 )
          {
            ++v13;
            v18 = &a3[v16 + 1];
            v17 = v13;
            a3[v16] = v14;
          }
        }
      }
      while ( v25 != v12 );
    }
  }
  else
  {
    v18 = a3;
    v11 = sub_2AB368(128);
    v17 = 0;
  }
  free(v11);
  *v18 = 0;
  return v17;
}
