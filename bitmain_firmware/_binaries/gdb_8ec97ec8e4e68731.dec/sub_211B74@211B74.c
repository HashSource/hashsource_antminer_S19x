int __fastcall sub_211B74(int result, int *a2, int *a3)
{
  size_t n; // r5
  unsigned int v4; // r3
  int v5; // r11
  unsigned int *v6; // r0
  int v9; // r9
  unsigned int v10; // r2
  unsigned int v11; // r3
  unsigned int *v12; // r6
  unsigned int *v13; // r3
  _DWORD *v14; // r0
  int v15; // r1
  _DWORD *v16; // r10
  int v17; // r3
  unsigned int v18; // r3
  void *v19; // r0
  unsigned int v20; // lr
  int v21; // r7
  __int64 v22; // r0

  n = a2[9];
  v4 = ((a2[5] ^ 2u) >> 1) & 1;
  if ( !n )
    v4 = 1;
  if ( !v4 )
  {
    v5 = result;
    v6 = (unsigned int *)a3[2];
    v9 = *a2;
    if ( !v6 || (v10 = v6[1], v11 = *v6, v10 == *v6) )
    {
      v6 = sub_99EB8(v6, 1, 8, 24);
      v11 = *v6;
      v10 = v6[1];
      a3[2] = (int)v6;
    }
    if ( v10 <= v11 )
    {
      v22 = sub_94700(
              (int)"symfile.c",
              2010,
              "%s: Assertion `%s' failed.",
              "memory_write_request_s* VEC_memory_write_request_s_quick_push(VEC_memory_write_request_s*, const memory_wr"
              "ite_request_s*, const char*, unsigned int)",
              "quick_push");
      return sub_211CF0(v22, HIDWORD(v22));
    }
    else
    {
      *v6 = v11 + 1;
      v12 = &v6[6 * v11];
      v13 = &v6[6 * v11 + 2];
      *v13 = 0;
      v13[1] = 0;
      v13[2] = 0;
      v13[3] = 0;
      v13[4] = 0;
      v13[5] = 0;
      v14 = sub_93094(1u, 0x20u);
      v15 = *a3;
      v16 = v14;
      v17 = a2[8];
      v12[3] = 0;
      v18 = v17 + v15;
      v12[2] = v18;
      *((_QWORD *)v12 + 2) = v18 + (unsigned __int64)n;
      v19 = sub_93028(n);
      v20 = v12[2];
      v21 = a3[1];
      v12[7] = (unsigned int)v16;
      v12[6] = (unsigned int)v19;
      *v16 = v21;
      v16[6] = v20;
      v16[1] = v9;
      v16[4] = n;
      v16[5] = 0;
      v16[7] = v19;
      return sub_2ADEDC(v5, (int)a2, v19, 0, 0, 0, n);
    }
  }
  return result;
}
