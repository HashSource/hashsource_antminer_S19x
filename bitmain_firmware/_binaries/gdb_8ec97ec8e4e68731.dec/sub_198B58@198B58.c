unsigned int *__fastcall sub_198B58(
        _DWORD *a1,
        int a2,
        const char *a3,
        char *a4,
        int a5,
        const char *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  void *v8; // r10
  unsigned int *result; // r0
  __int64 v14; // r2
  int *v15; // r1
  int v16; // r5
  int v17; // r3
  unsigned int **v18; // r4
  unsigned int v19; // r2
  unsigned int v20; // r3
  __int64 i; // r0
  int v22; // r11
  unsigned int v23; // r1
  unsigned int v24; // [sp+Ch] [bp-10h]
  __int64 v25; // [sp+10h] [bp-Ch] BYREF

  *(_DWORD *)(a2 + 8) = a5;
  if ( !a3 )
    goto LABEL_13;
  v8 = sub_92E28();
  *(_DWORD *)(a2 + 24) = sub_19623C(a3, a1[2]);
  sub_92E40((int)v8);
  result = (unsigned int *)sub_327254(a3);
  *(_DWORD *)a2 = result;
  while ( a4 )
  {
    sub_197FEC(a1, *(_DWORD *)(a2 + 24), a4, a5, (void **)&v25, (void **)&v25 + 1);
    if ( v25 )
    {
      result = (unsigned int *)sub_327254(a4);
      v14 = v25;
      *(_DWORD *)(a2 + 4) = result;
      *(_QWORD *)(a2 + 28) = v14;
      break;
    }
    sub_195708(a4, *(const char **)a2);
LABEL_13:
    result = *(unsigned int **)(a2 + 24);
    if ( !result || (v19 = result[1], v20 = *result, v19 == *result) )
    {
      result = sub_99FE0(result, 1);
      v20 = *result;
      v19 = result[1];
      *(_DWORD *)(a2 + 24) = result;
    }
    if ( v19 <= v20 )
      goto LABEL_19;
    *result = v20 + 1;
    result[v20 + 2] = 0;
  }
  if ( a6 )
  {
    v15 = *(int **)(a2 + 28);
    LODWORD(v25) = 0;
    v16 = sub_196908(a1 + 1, v15, (int)&v25, (int)a6, 0);
    if ( !v16 )
    {
      sub_16104(*(const char **)(a2 + 4), a6);
LABEL_19:
      for ( i = sub_94700(
                  (int)"linespec.c",
                  2422,
                  "%s: Assertion `%s' failed.",
                  "symtab** VEC_symtab_ptr_quick_push(VEC_symtab_ptr*, symtab_ptr, const char*, unsigned int)",
                  "quick_push"); HIDWORD(i) == 1; i = __PAIR64__(v24, v22) )
      {
        sub_339E78(i);
        v22 = sub_92F64(2, "No source file named %s.", a3);
        v24 = v23;
        sub_92E40((int)v8);
      }
      sub_339E78(i);
      sub_92E60();
    }
    result = (unsigned int *)sub_327254(a6);
    v17 = v25;
    *(_DWORD *)(a2 + 12) = result;
    *(_DWORD *)(a2 + 36) = v16;
    *(_DWORD *)(a2 + 40) = v17;
  }
  if ( a8 != (unsigned int *)3 )
  {
    v18 = (unsigned int **)(a2 + 16);
    result = a7;
    *v18 = a7;
    v18[1] = a8;
  }
  return result;
}
