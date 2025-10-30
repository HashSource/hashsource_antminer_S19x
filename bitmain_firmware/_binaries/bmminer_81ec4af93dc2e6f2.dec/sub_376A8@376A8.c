int __fastcall sub_376A8(_DWORD *a1, int a2, int a3)
{
  size_t v6; // r0
  size_t v7; // r7
  size_t v8; // r4
  void *v9; // r0
  void *v10; // r3
  int v11; // r0
  size_t v12; // r10
  int v13; // r0
  int v14; // r3
  int v15; // r8
  size_t v16; // r7
  int *v17; // r4
  int v18; // r5
  _DWORD *v19; // r3
  int v20; // r12
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r0
  int v25; // r1
  int v26; // r2
  char *v27; // r4
  size_t v28; // r0
  size_t v29; // r10
  char *v30; // r4
  size_t v31; // r10
  _DWORD *v32; // r2
  int v33; // r1
  _DWORD *v34; // r9
  int v35; // r1
  int result; // r0
  int v37; // r3
  int v38; // r3
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  memcpy(a1, (const void *)a2, 0x738u);
  v6 = sub_37644((int)a1, a2);
  if ( v6 == a3 )
  {
    v7 = a1[393];
    v8 = v7 + 1848;
    v9 = calloc(1u, v7);
    v10 = memcpy(v9, (const void *)(a2 + 1848), v7);
    v11 = a1[427];
    a1[392] = v10;
    v12 = v7 + 1848;
    v13 = sub_3C908(4 * v11 + 1, "bmminer.c", "parse_job_buf", 2247);
    v14 = a1[427];
    v15 = v13;
    a1[169] = v13;
    if ( v14 > 0 )
    {
      v16 = v7 + 1880;
      v17 = (int *)(a2 + v8);
      v18 = 0;
      while ( 1 )
      {
        *(_DWORD *)(v15 + 4 * v18) = sub_3C908(32, "bmminer.c", "parse_job_buf", 2250);
        v12 = v16 + 32 * v18;
        v19 = *(_DWORD **)(a1[169] + 4 * v18);
        if ( !v19 )
        {
          strcpy(s, "Failed to malloc local merkle_bin");
          sub_3AF5C(3, s, 1, *(_DWORD *)"e_bin");
          v19 = *(_DWORD **)(a1[169] + 4 * v18);
        }
        v20 = *v17;
        ++v18;
        v21 = v17[1];
        v17 += 8;
        v22 = *(v17 - 6);
        v23 = *(v17 - 5);
        *v19 = v20;
        v19[1] = v21;
        v19[2] = v22;
        v19[3] = v23;
        v24 = *(v17 - 3);
        v25 = *(v17 - 2);
        v26 = *(v17 - 1);
        v19[4] = *(v17 - 4);
        v19[5] = v24;
        v19[6] = v25;
        v19[7] = v26;
        if ( a1[427] <= v18 )
          break;
        v15 = a1[169];
      }
    }
    v27 = _strdup((const char *)(a2 + v12));
    v28 = strlen(v27);
    a1[168] = v27;
    v29 = v28 + 1 + v12;
    v30 = _strdup((const char *)(a2 + v29));
    v31 = v29 + strlen(v30);
    a1[153] = v30;
    v32 = (_DWORD *)(a2 + v31 + 1);
    v33 = v32[1];
    v34 = (_DWORD *)(a2 + v31 + 9);
    unk_B40F0 = *v32;
    unk_B40F4 = v33;
    v35 = v34[1];
    LODWORD(dbl_AFB38) = *v34;
    HIDWORD(dbl_AFB38) = v35;
    if ( byte_4B6CA6 )
    {
      if ( byte_5BC044 || (result = (unsigned __int8)byte_4B6CA5, byte_4B6CA5) || dword_AFC2C > 6 )
      {
        snprintf(s, 0x800u, "parse job buf len:%d\n", v31 + 17);
        sub_3AF5C(7, s, 0, v37);
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    snprintf(s, 0x800u, "ERR: data trans/recv unmathced! chk=%d, data_size=%d, coinbase_len=%d", v6, a3, a1[393]);
    sub_3AF5C(3, s, 1, v38);
    return -1;
  }
  return result;
}
