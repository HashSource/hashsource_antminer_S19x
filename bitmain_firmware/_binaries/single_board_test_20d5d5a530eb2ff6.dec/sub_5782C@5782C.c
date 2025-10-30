int __fastcall sub_5782C(int a1, int a2, unsigned int a3, int a4, _DWORD *a5)
{
  _DWORD *v9; // r8
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r0
  int v22; // r5
  int v23; // r6
  unsigned int v24; // r3
  int v25; // r5
  int v26; // r3
  size_t v27; // r5
  void (__fastcall *v28)(_DWORD, _DWORD); // r3
  void *v29; // r0
  int v30; // r3
  char v31; // r6
  int v32; // r3
  __int64 v33; // r2
  _WORD *v34; // r5
  int v35; // r3
  void (__fastcall *v36)(_DWORD, _DWORD); // r3
  int v37; // r0
  int (__fastcall *v38)(int, size_t); // r3
  void *v39; // r0
  _WORD *v40; // r0
  _BYTE v41[60]; // [sp+0h] [bp-3Ch] BYREF

  v9 = a5;
  memset(v41, 0, 0x38u);
  if ( a3 <= 0x12 )
    return -11;
  if ( !a5 )
    v9 = v41;
  v11 = v9[1];
  v12 = v9[2];
  v13 = v9[3];
  *(_DWORD *)(a1 + 16) = *v9;
  *(_DWORD *)(a1 + 20) = v11;
  *(_DWORD *)(a1 + 24) = v12;
  *(_DWORD *)(a1 + 28) = v13;
  v14 = v9[5];
  v15 = v9[6];
  v16 = v9[7];
  *(_DWORD *)(a1 + 32) = v9[4];
  *(_DWORD *)(a1 + 36) = v14;
  *(_DWORD *)(a1 + 40) = v15;
  *(_DWORD *)(a1 + 44) = v16;
  v17 = v9[9];
  v18 = v9[10];
  v19 = v9[11];
  *(_DWORD *)(a1 + 48) = v9[8];
  *(_DWORD *)(a1 + 52) = v17;
  *(_DWORD *)(a1 + 56) = v18;
  *(_DWORD *)(a1 + 60) = v19;
  v20 = v9[13];
  *(_DWORD *)(a1 + 64) = v9[12];
  *(_DWORD *)(a1 + 68) = v20;
  if ( *(int *)(a1 + 48) > 2 )
    v21 = 2;
  else
    v21 = 1;
  v22 = v21;
  v23 = sub_57178(v21);
  if ( v23 > sub_57178(*(unsigned __int16 *)(a1 + 164)) )
  {
    v36 = *(void (__fastcall **)(_DWORD, _DWORD))(a1 + 8);
    if ( v36 )
      v36(*(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 160));
    else
      free(*(void **)(a1 + 160));
    v37 = *(_DWORD *)(a1 + 12);
    v38 = *(int (__fastcall **)(int, size_t))a1;
    if ( *(int *)(a1 + 48) > 2 )
    {
      if ( v38 )
        v40 = (_WORD *)v38(v37, 262200);
      else
        v40 = malloc(0x40038u);
      *(_DWORD *)(a1 + 160) = v40;
      if ( !v40 )
        return -9;
      sub_56A50(v40, 0x40038u);
    }
    else
    {
      if ( v38 )
        v39 = (void *)v38(v37, 16416);
      else
        v39 = malloc(0x4020u);
      *(_DWORD *)(a1 + 160) = v39;
      if ( !v39 )
        return -9;
      sub_4C11C(v39, 0x4020u);
    }
    if ( !*(_DWORD *)(a1 + 160) )
      return -9;
    v24 = *(_DWORD *)(a1 + 16);
    *(_WORD *)(a1 + 164) = v22;
    *(_WORD *)(a1 + 166) = v22;
    if ( !v24 )
      goto LABEL_14;
  }
  else
  {
    if ( *(unsigned __int16 *)(a1 + 166) != v22 )
    {
      if ( *(int *)(a1 + 48) > 2 )
      {
        sub_56A50(*(_WORD **)(a1 + 160), (unsigned int)&loc_40036 + 2);
        sub_56BD4(*(_DWORD *)(a1 + 160), *(_DWORD *)(a1 + 48));
      }
      else
      {
        sub_4C11C(*(void **)(a1 + 160), 0x4020u);
      }
      *(_WORD *)(a1 + 166) = v22;
    }
    v24 = *(_DWORD *)(a1 + 16);
    if ( !v24 )
    {
LABEL_14:
      *(_DWORD *)(a1 + 16) = 4;
      goto LABEL_15;
    }
  }
  v24 -= 4;
  if ( v24 > 3 )
  {
    v25 = -2;
    *(_DWORD *)(a1 + 84) = -2;
    v26 = v9[9];
    if ( v26 )
      goto LABEL_16;
LABEL_51:
    if ( !*(_DWORD *)(a1 + 20) )
      v26 = 0x20000;
    v27 = v25 + v26;
    goto LABEL_18;
  }
LABEL_15:
  v25 = dword_1A00CC[v24];
  *(_DWORD *)(a1 + 84) = v25;
  v26 = v9[9];
  if ( !v26 )
    goto LABEL_51;
LABEL_16:
  if ( *(_DWORD *)(a1 + 20) )
  {
LABEL_55:
    v29 = *(void **)(a1 + 92);
    goto LABEL_23;
  }
  v27 = 0x10000;
LABEL_18:
  if ( v27 <= *(_DWORD *)(a1 + 88) )
    goto LABEL_55;
  v28 = *(void (__fastcall **)(_DWORD, _DWORD))(a1 + 8);
  *(_DWORD *)(a1 + 88) = 0;
  if ( v28 )
    v28(*(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 92));
  else
    free(*(void **)(a1 + 92));
  v29 = sub_57238(
          v27,
          *(int (__fastcall **)(int, size_t))a1,
          *(int (__fastcall **)(int, size_t))(a1 + 4),
          *(_DWORD *)(a1 + 12));
  *(_DWORD *)(a1 + 92) = v29;
  if ( !v29 )
    return -9;
  *(_DWORD *)(a1 + 88) = v27;
LABEL_23:
  *(_DWORD *)(a1 + 96) = v29;
  *(_DWORD *)(a1 + 100) = 0;
  sub_5A5C0(a1 + 112);
  v30 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 80) = a4;
  if ( !v30 )
    sub_57270(*(_WORD **)(a1 + 160), a4, *(_DWORD *)(a1 + 48), 0);
  if ( (int)v9[8] > 2 )
    sub_56BEC(*(_DWORD *)(a1 + 160), v9[10]);
  *(_BYTE *)a2 = 4;
  *(_BYTE *)(a2 + 1) = 34;
  *(_BYTE *)(a2 + 2) = 77;
  *(_BYTE *)(a2 + 3) = 24;
  if ( *(_QWORD *)(a1 + 32) )
    v31 = 8;
  else
    v31 = 0;
  v32 = *(_DWORD *)(a1 + 40);
  if ( v32 )
    LOBYTE(v32) = 1;
  *(_BYTE *)(a2 + 4) = v32
                     + 64
                     + 32 * (*(_DWORD *)(a1 + 20) & 1)
                     + 16 * (*(_DWORD *)(a1 + 44) & 1)
                     + 4 * (*(_BYTE *)(a1 + 24) & 1)
                     + v31;
  *(_BYTE *)(a2 + 5) = 16 * (*(_BYTE *)(a1 + 16) & 7);
  v33 = *(_QWORD *)(a1 + 32);
  if ( v33 )
  {
    *(_QWORD *)(a2 + 6) = v33;
    v34 = (_WORD *)(a2 + 14);
    *(_QWORD *)(a1 + 104) = 0;
  }
  else
  {
    v34 = (_WORD *)(a2 + 6);
  }
  v35 = *(_DWORD *)(a1 + 40);
  if ( v35 )
  {
    *v34 = v35;
    v34 += 2;
    *((_BYTE *)v34 - 2) = BYTE2(v35);
    *((_BYTE *)v34 - 1) = HIBYTE(v35);
  }
  *(_BYTE *)v34 = (unsigned __int16)sub_5A430(a2 + 4, (char *)v34 - a2 - 4, 0) >> 8;
  *(_DWORD *)(a1 + 76) = 1;
  return (int)v34 - a2 + 1;
}
