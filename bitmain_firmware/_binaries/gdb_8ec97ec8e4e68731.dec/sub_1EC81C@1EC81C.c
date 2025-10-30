int *__fastcall sub_1EC81C(int *a1, _DWORD *a2, int *a3)
{
  _DWORD *v3; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r1
  int v15; // r2
  bool v16; // zf
  int v17; // r3
  bool v18; // zf
  _DWORD *v20; // r8
  unsigned int *v21; // r0
  unsigned int v22; // r7
  unsigned int *v23; // r6
  void *v24; // r0
  int v25; // r0
  _DWORD *v26; // r0
  int v27; // r1
  int v28; // r2

  v3 = a2 + 5;
  v7 = a2[5];
  v8 = a2[6];
  v9 = v3[2];
  v10 = v3[3];
  *a3 = v7;
  a3[1] = v8;
  a3[2] = v9;
  a3[3] = v10;
  v11 = a2[2];
  v12 = a2[3];
  *a1 = a2[1];
  a1[1] = v11;
  a1[2] = v12;
  v13 = sub_98F78(a1, &dword_475848);
  v16 = v13 == 0;
  if ( v13 )
  {
    v13 = dword_4878EC;
    v15 = HIDWORD(qword_4878F0);
    v14 = qword_4878F0;
  }
  v17 = *a3;
  if ( !v16 )
  {
    *a1 = v13;
    a1[1] = v14;
    a1[2] = v15;
  }
  v18 = v17 == 13;
  if ( v17 != 13 )
    v18 = (v17 & 0xFFFFFFFD) == 0;
  if ( !v18 )
  {
    if ( a2[10] )
    {
      v20 = sub_1DDB0C(*a1, a1[1], a1[2], a2[9]);
      v21 = (unsigned int *)a2[10];
      if ( v21 )
      {
        if ( *v21 )
        {
          v22 = 0;
          while ( 1 )
          {
            v23 = &v21[2 * v22++];
            ((void (__fastcall *)(_DWORD *, unsigned int, unsigned int))loc_1DE9C8)(v20, v23[2], v23[3]);
            v24 = (void *)v23[3];
            if ( v24 )
              free(v24);
            v21 = (unsigned int *)a2[10];
            if ( !v21 )
              break;
            if ( v22 >= *v21 )
              goto LABEL_21;
          }
        }
        else
        {
LABEL_21:
          free(v21);
        }
      }
      a2[10] = 0;
    }
    sub_1EC668(*a1, a1[1], a1[2], 0);
    v25 = sub_23E408(*a1, a1[1], a1[2]);
    v26 = (_DWORD *)((int (__fastcall *)(int))loc_1E38EC)(v25);
    v27 = a2[11];
    v28 = a2[12];
    v26[13] = a2[13];
    v26[17] = v27;
    v26[18] = v28;
    v26[21] = 0;
  }
  sub_1F7D58(a2);
  return a1;
}
