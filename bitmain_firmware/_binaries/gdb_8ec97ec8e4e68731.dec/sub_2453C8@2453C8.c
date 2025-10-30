int __fastcall sub_2453C8(const char *a1, int *a2, int a3)
{
  int v6; // r7
  int v7; // r0
  int result; // r0
  int *v9; // r5
  int i; // r4
  int v11; // r4
  int j; // r4
  __int64 v13; // kr10_8
  __int64 (__fastcall *v14)(int *, unsigned __int8 *, _DWORD, _DWORD, int, _DWORD); // r7
  __int64 v15; // r0
  int v16; // r2
  __int64 v17; // r8
  int v18; // r3
  int v19; // r3
  unsigned __int16 v20; // r7
  int *v21; // r9
  int v22; // r5
  signed __int64 v23; // r4
  int v24; // r3
  unsigned __int64 v25; // kr30_8
  unsigned int v26; // r4
  int v27; // r1
  int v28; // r5
  int v29; // r10
  void (__fastcall *v30)(int *, _DWORD, unsigned int, int, int); // r1
  int v31; // r8
  unsigned int v32; // r5
  int v33; // r4
  unsigned int v34; // r3
  unsigned int v35; // r2
  unsigned __int64 v36; // r4
  unsigned int v37; // r6
  unsigned int v38; // r0
  int v39; // r1
  __int64 v40; // [sp+8h] [bp-7FCh]
  unsigned int v41; // [sp+10h] [bp-7F4h]
  int v42; // [sp+18h] [bp-7ECh]
  unsigned int v43; // [sp+1Ch] [bp-7E8h]
  int v44; // [sp+20h] [bp-7E4h]
  int v45; // [sp+28h] [bp-7DCh] BYREF
  int v46; // [sp+2Ch] [bp-7D8h] BYREF
  unsigned __int8 v47[2]; // [sp+30h] [bp-7D4h] BYREF
  unsigned __int8 v48[2]; // [sp+32h] [bp-7D2h] BYREF
  unsigned __int8 v49[4]; // [sp+34h] [bp-7D0h] BYREF
  unsigned __int8 v50[1996]; // [sp+38h] [bp-7CCh] BYREF

  v6 = sub_249744(a1);
  v45 = 0;
  v46 = 0;
  v7 = sub_16F654(v6);
  v44 = ((int (__fastcall *)(int))loc_165BB8)(v7);
  if ( a3 )
  {
    result = (*(int (__fastcall **)(int *, const char *))(*a2 + 4))(a2, a1);
    if ( !result )
      sub_946E0("Target failed to save trace data to '%s'.", a1);
  }
  else
  {
    v9 = &dword_4899A0;
    off_489BB4(&dword_4899A0, v6);
    (*(void (__fastcall **)(int *, const char *))(*a2 + 8))(a2, a1);
    (*(void (__fastcall **)(int *))(*a2 + 12))(a2);
    (*(void (__fastcall **)(int *, int))(*a2 + 16))(a2, dword_48A5AC);
    (*(void (__fastcall **)(int *))(*a2 + 32))(a2);
    (*(void (__fastcall **)(int *, int))(*a2 + 20))(a2, v6);
    off_489BD0(&dword_4899A0, &v46);
    for ( i = v46; i; i = *(_DWORD *)(i + 20) )
      (*(void (__fastcall **)(int *, int))(*a2 + 24))(a2, i);
    sub_24C190(&v46);
    off_489BCC(&dword_4899A0, &v45);
    v11 = v45;
    if ( v45 )
    {
      do
      {
        off_489BB8(&dword_4899A0, 0, v11);
        v11 = *(_DWORD *)(v11 + 72);
      }
      while ( v11 );
      for ( j = v45; j; j = *(_DWORD *)(j + 72) )
        (*(void (__fastcall **)(int *, int))(*a2 + 28))(a2, j);
    }
    sub_24C104(&v45);
    (*(void (__fastcall **)(int *))(*a2 + 36))(a2);
    v13 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v14 = (__int64 (__fastcall *)(int *, unsigned __int8 *, _DWORD, _DWORD, int, _DWORD))v9[141];
        if ( !*(_DWORD *)(*a2 + 40) )
          break;
        v15 = v14(&dword_4899A0, v47, v13, HIDWORD(v13), 2000, 0);
        v17 = v15;
        v18 = HIDWORD(v15);
        if ( v15 < 0 )
LABEL_41:
          sub_946E0("Failure to get requested trace buffer data", HIDWORD(v15), v16, v18);
        v19 = *a2;
        if ( !v15 )
          return (*(int (__fastcall **)(int *))(v19 + 48))(a2);
        (*(void (__fastcall **)(int *, unsigned __int8 *, _DWORD, _DWORD))(v19 + 40))(a2, v47, v15, HIDWORD(v15));
        v13 += v17;
      }
      if ( !v14(&dword_4899A0, v47, v13, HIDWORD(v13), 6, 0) )
        break;
      v20 = sub_15C250(v47, 2, v44);
      v43 = sub_15C250(v48, 4, v44);
      (**(void (__fastcall ***)(int *, _DWORD))(*a2 + 44))(a2, v20);
      v13 += 6;
      if ( v43 )
      {
        v21 = v9;
        v22 = 0;
        do
        {
          v15 = ((__int64 (__fastcall *)(int *, unsigned __int8 *, _DWORD, _DWORD, int, _DWORD))v21[141])(
                  &dword_4899A0,
                  v47,
                  v13,
                  HIDWORD(v13),
                  1,
                  0);
          v18 = (unsigned __int64)(v15 - 1) >> 32;
          if ( v15 < 1 )
            goto LABEL_41;
          v40 = v13 + 1;
          v42 = v22 + 1;
          switch ( v47[0] )
          {
            case 'R':
              v15 = ((__int64 (__fastcall *)(int *, unsigned __int8 *, _DWORD, _DWORD, int, int))v21[141])(
                      &dword_4899A0,
                      v47,
                      v40,
                      HIDWORD(v40),
                      dword_48A5AC,
                      dword_48A5AC >> 31);
              v16 = dword_48A5AC;
              v23 = v15;
              HIDWORD(v15) = dword_48A5AC >> 31;
              v18 = (unsigned __int64)(v23 - dword_48A5AC) >> 32;
              if ( v23 < dword_48A5AC )
                goto LABEL_41;
              (*(void (__fastcall **)(int *, unsigned __int8 *))(*(_DWORD *)(*a2 + 44) + 4))(a2, v47);
              v24 = v23;
              v25 = v23;
              break;
            case 'V':
              v15 = ((__int64 (__fastcall *)(int *, unsigned __int8 *, _DWORD, _DWORD, int, _DWORD))v21[141])(
                      &dword_4899A0,
                      v47,
                      v40,
                      HIDWORD(v40),
                      12,
                      0);
              v36 = v15;
              v18 = (unsigned __int64)(v15 - 12) >> 32;
              if ( v15 < 12 )
                goto LABEL_41;
              v37 = sub_15C190(v47, 4, v44);
              v38 = sub_15C190(v49, 8, v44);
              (*(void (__fastcall **)(int *, unsigned int, unsigned int, int))(*(_DWORD *)(*a2 + 44) + 16))(
                a2,
                v37,
                v38,
                v39);
              v24 = v36;
              v25 = v36;
              break;
            case 'M':
              v15 = ((__int64 (__fastcall *)(int *, unsigned __int8 *, _DWORD, _DWORD, int, _DWORD))v21[141])(
                      &dword_4899A0,
                      v47,
                      v40,
                      HIDWORD(v40),
                      10,
                      0);
              v18 = (unsigned __int64)(v15 - 10) >> 32;
              if ( v15 < 10 )
                goto LABEL_41;
              v40 = v13 + 11;
              v42 = v22 + 11;
              v26 = sub_15C250(v47, 8, v44);
              v28 = v27;
              v29 = (unsigned __int16)sub_15C250(v50, 2, v44);
              v30 = *(void (__fastcall **)(int *, _DWORD, unsigned int, int, int))(*(_DWORD *)(*a2 + 44) + 8);
              v30(a2, v30, v26, v28, v29);
              if ( v29 )
              {
                v31 = 0;
                v32 = 0;
                v41 = 0;
                do
                {
                  v33 = v29 - v31;
                  if ( v29 - v31 >= 2000 )
                    v33 = 2000;
                  v15 = ((__int64 (__fastcall *)(int *, unsigned __int8 *, int, _DWORD, int, _DWORD))v21[141])(
                          &dword_4899A0,
                          v47,
                          (int)v40 + v31,
                          (unsigned __int64)(v40 + v31) >> 32,
                          v33,
                          0);
                  v18 = (v15 - (unsigned __int64)(unsigned int)v33) >> 32;
                  if ( v15 < (unsigned int)v33 )
                    goto LABEL_41;
                  v31 += v33;
                  (*(void (__fastcall **)(int *, unsigned __int8 *, _DWORD))(*(_DWORD *)(*a2 + 44) + 12))(
                    a2,
                    v47,
                    (unsigned __int16)v33);
                  v34 = (__PAIR64__(v41, v32) + (unsigned int)v33) >> 32;
                  v32 += v33;
                  v41 = v34;
                }
                while ( v31 < v29 );
                v35 = v34;
                v24 = v32;
                v25 = __PAIR64__(v35, v32);
              }
              else
              {
                v24 = 0;
                v25 = 0;
              }
              break;
            default:
              sub_946E0("Unknown block type '%c' (0x%x) in trace frame", v47[0], v47[0]);
          }
          v22 = v42 + v24;
          v13 = v40 + v25;
        }
        while ( v43 > v42 + v24 );
        v9 = v21;
      }
      (*(void (__fastcall **)(int *))(*(_DWORD *)(*a2 + 44) + 20))(a2);
    }
    v19 = *a2;
    return (*(int (__fastcall **)(int *))(v19 + 48))(a2);
  }
  return result;
}
