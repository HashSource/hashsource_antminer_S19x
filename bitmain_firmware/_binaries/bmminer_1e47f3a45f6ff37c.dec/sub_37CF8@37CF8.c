int __fastcall sub_37CF8(_DWORD *a1, int a2, int a3)
{
  size_t v6; // r0
  size_t v7; // r4
  size_t v8; // r6
  void *v9; // r0
  void *v10; // r3
  int v11; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r8
  int v15; // r4
  _DWORD *v16; // r3
  int v17; // r12
  int v18; // r0
  int v19; // r1
  int v20; // r12
  int v21; // r0
  int v22; // r1
  _DWORD *v23; // r2
  char *v24; // r4
  size_t v25; // r0
  size_t v26; // r6
  char *v27; // r4
  size_t v28; // r0
  size_t v29; // r3
  int *v30; // r1
  _DWORD *v31; // r7
  int v32; // r0
  int v33; // r1
  int v34; // r1
  int v35; // r3
  int v37; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  memcpy(a1, (const void *)a2, 0x748u);
  v6 = sub_37C94((int)a1, a2);
  if ( v6 == a3 )
  {
    v7 = a1[397];
    v8 = v7 + 1864;
    v9 = calloc(1u, v7);
    v10 = memcpy(v9, (const void *)(a2 + 1864), v7);
    v11 = a1[431];
    a1[396] = v10;
    v12 = sub_3D10C(4 * v11 + 1, "bmminer.c", "parse_job_buf", 2247);
    v13 = a1[431];
    a1[173] = v12;
    if ( v13 > 0 )
    {
      v14 = v12;
      v15 = 0;
      while ( 1 )
      {
        *(_DWORD *)(v14 + 4 * v15) = sub_3D10C(32, "bmminer.c", "parse_job_buf", 2250);
        v23 = *(_DWORD **)(a1[173] + 4 * v15);
        if ( !v23 )
        {
          strcpy(s, "Failed to malloc local merkle_bin");
          sub_3B6AC(3, s, 1, *(_DWORD *)"e_bin");
          v23 = *(_DWORD **)(a1[173] + 4 * v15);
        }
        v16 = (_DWORD *)(a2 + v8);
        ++v15;
        v8 += 32;
        v17 = v16[1];
        v18 = v16[2];
        v19 = v16[3];
        *v23 = *v16;
        v23[1] = v17;
        v23[2] = v18;
        v23[3] = v19;
        v20 = v16[5];
        v21 = v16[6];
        v22 = v16[7];
        v23[4] = v16[4];
        v23[5] = v20;
        v23[6] = v21;
        v23[7] = v22;
        if ( a1[431] <= v15 )
          break;
        v14 = a1[173];
      }
    }
    v24 = _strdup((const char *)(a2 + v8));
    v25 = strlen(v24);
    a1[172] = v24;
    v26 = v25 + 1 + v8;
    v27 = _strdup((const char *)(a2 + v26));
    v28 = strlen(v27);
    a1[157] = v27;
    v29 = v26 + v28;
    v30 = (int *)(a2 + v26 + v28 + 1);
    v31 = (_DWORD *)(a2 + v26 + v28 + 9);
    v32 = *v30;
    v33 = v30[1];
    unk_B6E68 = v32;
    unk_B6E6C = v33;
    v34 = v31[1];
    LODWORD(dbl_B2FA0) = *v31;
    HIDWORD(dbl_B2FA0) = v34;
    if ( byte_4B9A22 )
    {
      if ( !byte_5C0EFC && !byte_4B9A21 && dword_B3094 <= 6 )
        return (unsigned __int8)byte_4B9A21;
      snprintf(s, 0x800u, "parse job buf len:%d\n", v29 + 17);
      sub_3B6AC(7, s, 0, v35);
    }
    return 0;
  }
  else
  {
    snprintf(s, 0x800u, "ERR: data trans/recv unmathced! chk=%d, data_size=%d, coinbase_len=%d", v6, a3, a1[397]);
    sub_3B6AC(3, s, 1, v37);
    return -1;
  }
}
