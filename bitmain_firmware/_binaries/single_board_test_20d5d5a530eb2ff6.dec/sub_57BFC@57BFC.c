int __fastcall sub_57BFC(int a1, int a2, unsigned int a3, char *a4, size_t n, _DWORD *a6, int a7)
{
  int v7; // r5
  int (__fastcall *v8)(int, const void *, int, size_t, size_t, int, int); // r5
  unsigned int v10; // r9
  _BOOL4 v14; // r2
  size_t v15; // r10
  int v16; // r0
  _DWORD *v17; // r3
  char *v18; // r7
  unsigned int v19; // r11
  size_t v20; // r2
  int v21; // r3
  int v22; // r6
  char *v23; // r1
  int v24; // r0
  int v25; // r1
  bool v26; // cc
  int v27; // r2
  bool v28; // zf
  size_t v29; // r2
  int v30; // r0
  char *v31; // r1
  size_t v32; // r0
  int v34; // [sp+14h] [bp-8h]
  _DWORD *v35; // [sp+44h] [bp+28h]

  v7 = *(_DWORD *)(a1 + 20);
  if ( a7 == 1 )
  {
    v8 = (int (__fastcall *)(int, const void *, int, size_t, size_t, int, int))(sub_57078 + 1);
    goto LABEL_6;
  }
  if ( *(int *)(a1 + 48) > 2 )
  {
    if ( v7 == 1 )
      v8 = (int (__fastcall *)(int, const void *, int, size_t, size_t, int, int))sub_572C0;
    else
      v8 = (int (__fastcall *)(int, const void *, int, size_t, size_t, int, int))sub_57218;
LABEL_6:
    if ( *(_DWORD *)(a1 + 76) != 1 )
      return -20;
    goto LABEL_14;
  }
  if ( v7 == 1 )
    v8 = (int (__fastcall *)(int, const void *, int, size_t, size_t, int, int))(sub_5730C + 1);
  else
    v8 = (int (__fastcall *)(int, const void *, int, size_t, size_t, int, int))sub_5721C;
  if ( *(_DWORD *)(a1 + 76) != 1 )
    return -20;
LABEL_14:
  v10 = *(_DWORD *)(a1 + 100);
  if ( sub_56FE0(n, a1 + 16, v10) > a3 )
    return -11;
  v14 = a7 == 1;
  if ( n <= a3 )
    v14 = 0;
  if ( v14 )
    return -11;
  v15 = *(_DWORD *)(a1 + 84);
  if ( a7 == *(_DWORD *)(a1 + 168) )
  {
    v34 = a2;
  }
  else
  {
    v16 = sub_57B3C(a1, a2, a3);
    v10 = *(_DWORD *)(a1 + 100);
    *(_DWORD *)(a1 + 168) = a7;
    v34 = a2 + v16;
  }
  v17 = a6;
  v18 = a4;
  if ( !a6 )
    v17 = &unk_1A0148;
  v35 = v17;
  v19 = (unsigned int)&a4[n];
  if ( v10 )
  {
    v29 = v15 - v10;
    v30 = *(_DWORD *)(a1 + 96);
    if ( n >= v15 - v10 )
    {
      v18 = &a4[v29];
      memcpy((void *)(v30 + v10), a4, v29);
      v34 += sub_5718C(
               v34,
               *(const void **)(a1 + 96),
               v15,
               v8,
               *(_DWORD *)(a1 + 160),
               *(_DWORD *)(a1 + 48),
               *(_DWORD *)(a1 + 80),
               *(_DWORD *)(a1 + 44));
      if ( !*(_DWORD *)(a1 + 20) )
        *(_DWORD *)(a1 + 96) += v15;
      v20 = v19 - (_DWORD)v18;
      *(_DWORD *)(a1 + 100) = 0;
      v21 = 1;
    }
    else
    {
      v18 = &a4[n];
      memcpy((void *)(v30 + v10), a4, n);
      v20 = 0;
      v21 = 0;
      *(_DWORD *)(a1 + 100) += n;
    }
  }
  else
  {
    v20 = n;
    v21 = 0;
  }
  if ( v15 <= v20 )
  {
    v22 = v34;
    do
    {
      v23 = v18;
      v18 += v15;
      v24 = sub_5718C(
              v22,
              v23,
              v15,
              v8,
              *(_DWORD *)(a1 + 160),
              *(_DWORD *)(a1 + 48),
              *(_DWORD *)(a1 + 80),
              *(_DWORD *)(a1 + 44));
      v20 = v19 - (_DWORD)v18;
      v22 += v24;
    }
    while ( v15 <= v19 - (unsigned int)v18 );
    v21 = 2;
    v34 = v22;
  }
  v25 = *(_DWORD *)(a1 + 52);
  v26 = v25 != 0;
  if ( v25 )
    v26 = v19 > (unsigned int)v18;
  if ( !v26 )
  {
    v27 = *(_DWORD *)(a1 + 20);
    v28 = v27 == 0;
    if ( !v27 )
      v28 = v21 == 2;
    if ( !v28 )
    {
LABEL_38:
      if ( v25 )
      {
LABEL_41:
        if ( v19 > (unsigned int)v18 )
        {
          memcpy(*(void **)(a1 + 96), v18, v19 - (_DWORD)v18);
          *(_DWORD *)(a1 + 100) = v19 - (_DWORD)v18;
        }
        goto LABEL_43;
      }
LABEL_39:
      if ( *(_DWORD *)(a1 + 96) + v15 > *(_DWORD *)(a1 + 88) + *(_DWORD *)(a1 + 92) )
        *(_DWORD *)(a1 + 96) = sub_57360((_DWORD *)a1) + *(_DWORD *)(a1 + 92);
      goto LABEL_41;
    }
LABEL_46:
    if ( *v35 )
    {
      v25 = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 92);
    }
    else
    {
      v32 = sub_57360((_DWORD *)a1);
      v25 = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 96) = v32 + *(_DWORD *)(a1 + 92);
    }
    goto LABEL_38;
  }
  v31 = v18;
  v18 = &a4[n];
  v34 += sub_5718C(
           v34,
           v31,
           v20,
           v8,
           *(_DWORD *)(a1 + 160),
           *(_DWORD *)(a1 + 48),
           *(_DWORD *)(a1 + 80),
           *(_DWORD *)(a1 + 44));
  if ( !*(_DWORD *)(a1 + 20) )
    goto LABEL_46;
  if ( !*(_DWORD *)(a1 + 52) )
  {
    v18 = &a4[n];
    goto LABEL_39;
  }
LABEL_43:
  if ( *(_DWORD *)(a1 + 24) == 1 )
    sub_5A628(a1 + 112, a4);
  *(_QWORD *)(a1 + 104) += n;
  return v34 - a2;
}
