int *__fastcall sub_DE260(
        int *result,
        int a2,
        void **a3,
        void **a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14)
{
  int v14; // r8
  unsigned int v16; // r5
  _DWORD *v17; // r4
  int v18; // r10
  int *v19; // r7
  void *v20; // r10
  char v21; // r0
  void *v22; // r10
  int v25; // [sp+4Ch] [bp-20h]
  void *v26; // [sp+50h] [bp-1Ch] BYREF
  void *v27; // [sp+54h] [bp-18h] BYREF
  void *v28; // [sp+58h] [bp-14h] BYREF
  void *ptr; // [sp+5Ch] [bp-10h] BYREF
  int *v30; // [sp+60h] [bp-Ch] BYREF
  int v31; // [sp+64h] [bp-8h]

  v14 = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)(v14 + 8) != *(_DWORD *)(v14 + 4) )
  {
    v16 = 0;
    v25 = (int)result;
    do
    {
      ((void (__fastcall *)(void **, _DWORD))loc_19CF64)(&v26, *(_DWORD *)(a2 + 4));
      v17 = sub_9836C(0xA8u);
      memset(v17, 0, 0xA8u);
      v18 = *(_DWORD *)(v14 + 4);
      *((_BYTE *)v17 + 32) = 0;
      *((_BYTE *)v17 + 33) = 0;
      v17[4] = 1;
      v19 = (int *)(v18 + 40 * v16);
      v17[13] = 0;
      v17[14] = 0;
      v17[15] = 0;
      v17[16] = 0;
      v17[17] = 0;
      v20 = *a3;
      v17[28] = -1;
      v21 = *(_BYTE *)a2;
      v28 = v20;
      v22 = *a4;
      v27 = 0;
      *v17 = off_37D908;
      v31 = 1;
      v30 = v19;
      *a3 = 0;
      *a4 = 0;
      ptr = v22;
      sub_DDE28((int)v17, v25, v30, v31, &v26, (int *)&v27, &v28, &ptr, a5, a6, a7, a8, a9, a10, a11, a12, a14, v21);
      if ( ptr )
        free(ptr);
      if ( v28 )
        free(v28);
      if ( v27 )
        free(v27);
      v17[41] = v16;
      v30 = v17;
      sub_D9044(a13, (int *)&v30, 0);
      result = v30;
      if ( v30 )
        result = (int *)(*(int (__fastcall **)(int *))(*v30 + 4))(v30);
      if ( v26 )
        result = (int *)((int (__fastcall *)(void **))loc_19D154)(&v26);
      ++v16;
    }
    while ( -858993459 * ((*(_DWORD *)(v14 + 8) - *(_DWORD *)(v14 + 4)) >> 3) > v16 );
  }
  return result;
}
