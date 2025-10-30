int __fastcall sub_95540(
        void *a1,
        void *a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int a6,
        unsigned int a7,
        char *s1)
{
  int v8; // r10
  unsigned __int64 v9; // r6
  unsigned int *v10; // r4
  void *v11; // r11
  void *v12; // r8
  int v13; // r10
  unsigned __int64 v14; // r0
  __int64 v15; // r2
  int v16; // r12
  __int64 v17; // r4
  unsigned __int64 v18; // kr00_8
  int v19; // r0
  unsigned __int64 v21; // kr08_8
  int v22; // r0
  __int64 v23; // r0
  int v24; // lr
  int v25; // r4
  int v26; // r3
  int v27; // r10
  size_t v28; // r6
  int v29; // r0
  _DWORD *v30; // r12
  size_t v31; // lr
  int v32; // [sp-Ch] [bp-30h]
  int v33; // [sp-4h] [bp-28h]
  size_t v34; // [sp+0h] [bp-24h]
  unsigned __int64 n; // [sp+8h] [bp-1Ch]
  size_t na; // [sp+8h] [bp-1Ch]
  size_t v37; // [sp+10h] [bp-14h]
  unsigned __int64 v38; // [sp+18h] [bp-Ch]

  while ( 1 )
  {
    v9 = a3;
    v10 = (unsigned int *)a6;
    v38 = a3 + a4;
    if ( a4 )
      break;
    v23 = sub_94700((int)"exec.c", 790, "failed internal consistency check", 0);
    v32 = v8;
    v33 = v24;
    v25 = HIDWORD(v23);
    v27 = v26;
    v28 = v37;
    v29 = sub_22F480(v23);
    if ( v25 != 2 )
      __asm { POP             {R4-R11,PC} }
    v30 = (_DWORD *)v29;
    a3 = n;
    v31 = *(_DWORD *)(v29 + 4);
    a2 = (void *)v34;
    a1 = (void *)v27;
    v37 = v31;
    LODWORD(n) = v38;
    v34 = v28;
    HIDWORD(n) = *v30;
    v8 = v32;
  }
  if ( a6 >= a7 )
    return 0;
  v11 = a1;
  v12 = a2;
  while ( 1 )
  {
    v13 = v10[2];
    if ( s1 && strcmp(s1, *(const char **)v13) )
      goto LABEL_13;
    v14 = *v10;
    if ( v14 > v9 )
      goto LABEL_13;
    v15 = v10[1];
    v16 = *(_DWORD *)(v13 + 148);
    if ( (unsigned int)v15 >= v38 )
      break;
    if ( (unsigned int)v15 > v9 )
    {
      v17 = v15 - v9;
      na = v15 - v9;
      v18 = v9 - v14;
      if ( v12 )
        v19 = sub_2ADDE8(v16, v13, v12, SHIDWORD(v18), v18, SHIDWORD(v18), na);
      else
        v19 = sub_2ADEDC(v16, v13, v11, SHIDWORD(v18), v18, SHIDWORD(v18), na);
      if ( v19 )
      {
        *a5 = v17;
        return 1;
      }
      return 0;
    }
LABEL_13:
    v10 += 4;
    if ( a7 <= (unsigned int)v10 )
      return 0;
  }
  v21 = v9 - v14;
  if ( v12 )
    v22 = sub_2ADDE8(v16, v13, v12, SHIDWORD(v21), v21, SHIDWORD(v21), a4);
  else
    v22 = sub_2ADEDC(v16, v13, v11, SHIDWORD(v21), v21, SHIDWORD(v21), a4);
  if ( v22 )
  {
    *a5 = a4;
    return 1;
  }
  return 0;
}
