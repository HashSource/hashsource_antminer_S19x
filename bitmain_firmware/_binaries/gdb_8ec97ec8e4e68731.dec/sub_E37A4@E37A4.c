int __fastcall sub_E37A4(int result, _DWORD *a2)
{
  _DWORD *v2; // r4
  int v4; // r0
  void *v5; // r7
  int v6; // r7
  const char *v7; // r8
  const char *v8; // r0
  int v9; // r0
  int v10; // r5
  void *v11; // r6
  unsigned int *v12; // r0
  unsigned int v13; // r2
  unsigned int v14; // r3
  unsigned int *v15; // r2
  __int64 v16; // kr00_8
  int *v17; // r5
  int v18; // [sp+Ch] [bp-2Ch] BYREF
  unsigned int *v19; // [sp+10h] [bp-28h]

  if ( !*(_DWORD *)(result + 252) )
  {
    v2 = (_DWORD *)result;
    if ( *a2 == 2 )
      sub_946E0("GDB does not support Intel Processor Trace.");
    v4 = sub_232574();
    if ( !v4 )
      sub_946E0("Target does not support branch tracing.");
    if ( dword_487D4C )
    {
      v6 = *(_DWORD *)sub_242FC8(v4);
      v7 = (const char *)sub_240128(v2);
      v8 = (const char *)sub_23095C(v2[2], v2[3], v2[4]);
      sub_2594B0(v6, "[btrace] enable thread %s (%s)\n", v7, v8);
    }
    result = sub_23258C(v2[2], v2[3], v2[4], a2);
    v2[63] = result;
    if ( result )
    {
      v5 = sub_92E28();
      if ( *a2 != 2 && sub_23F828(v2[2], v2[3], v2[4]) )
      {
        v9 = sub_1DDB40(v2[2], v2[3], v2[4]);
        v10 = sub_1DFB3C(v9);
        sub_91CEC(&v18);
        v18 = 1;
        v19 = 0;
        v11 = sub_9253C((int)&loc_E082C, (int)&v18);
        v12 = v19;
        if ( !v19 || (v13 = v19[1], v14 = *v19, v13 == *v19) )
        {
          v12 = sub_99EB8(v19, 1, 8, 8);
          v14 = *v12;
          v13 = v12[1];
          v19 = v12;
        }
        if ( v14 >= v13 )
        {
          v16 = sub_94700(
                  (int)"btrace.c",
                  1563,
                  "%s: Assertion `%s' failed.",
                  "btrace_block_s* VEC_btrace_block_s_quick_push(VEC_btrace_block_s*, const btrace_block_s*, const char*, unsigned int)",
                  "quick_push");
          sub_92E40((int)v5);
          if ( HIDWORD(v16) == 1 )
          {
            v17 = (int *)sub_339E78(v16);
            sub_E1438(v2);
            sub_92F1C(*v17, v17[1], v17[2]);
          }
          sub_339E78(v16);
          sub_92E60();
        }
        v15 = &v12[2 * v14];
        *v12 = v14 + 1;
        v15[2] = v10;
        v15[3] = v10;
        sub_E2D4C(v2, &v18);
        sub_92620(v11);
      }
      return sub_92E40((int)v5);
    }
  }
  return result;
}
