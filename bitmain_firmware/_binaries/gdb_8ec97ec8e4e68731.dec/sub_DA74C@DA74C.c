void __fastcall sub_DA74C(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        _DWORD *a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        unsigned int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48)
{
  int v48; // r4
  int v49; // r5
  int v50; // r8
  int *v53; // r0
  int *v54; // r4
  _DWORD *v55; // r0
  int v56; // r0
  _DWORD *v57; // r4
  char **v58; // r2
  char *v59; // r2
  unsigned int v60; // r0
  int v61; // r3
  int v62; // r3
  int v63; // r1
  _DWORD *v64; // r3
  int v65; // r2
  int v66; // r0
  int v67; // r2
  int v68; // r1
  int v69; // r12
  unsigned int v70; // r2
  int v71; // r0
  char *v72; // r3

  sub_92E40(v48);
  if ( a2 != 1 )
  {
    sub_339E78(a1);
    sub_92E60();
  }
  v53 = (int *)sub_339E78(a1);
  v54 = v53;
  if ( v53[1] != 2 )
    sub_92F1C(*v53, v53[1], v53[2]);
  if ( a44 != 1 )
  {
    v55 = (_DWORD *)sub_242FB4(v53);
    v56 = sub_154B38(*v55, *v54, v54[1], v54[2]);
    if ( a44 != 2 )
      goto LABEL_5;
    if ( a42 <= 0x21 )
    {
      v72 = &aStdVectorSymta_0[8 * a42];
      if ( a42 == *((_DWORD *)v72 + 915) )
      {
        v56 = sub_25A37C("Make %s pending on future shared library load? ", *((const char **)v72 + 916));
        if ( !v56 )
        {
          sub_339EF8(0);
          JUMPOUT(0xDA55C);
        }
LABEL_5:
        sub_339EF8(v56);
        sub_9253C((int)nullsub_39, 0);
        sub_CCB74(&a23, a42);
        v57 = a23;
        v58 = off_46D5A4[0];
        a23[1] = a45;
        v59 = v58[2];
        v60 = a42;
        v61 = dword_46DE54;
        v57[22] = v50;
        v57[3] = v60;
        v57[23] = v59;
        v57[27] = v57;
        v57[24] = v61;
        ((void (__fastcall *)(int *, int))loc_19CF64)(&a22, v49);
        v62 = a22;
        a22 = 0;
        v63 = v57[19];
        v57[19] = v62;
        if ( v63 )
        {
          ((void (__fastcall *)(_DWORD *))loc_19D154)(v57 + 19);
          if ( a22 )
            ((void (__fastcall *)(int *))loc_19D154)(&a22);
        }
        if ( a40 )
        {
          v64 = a23;
          a23[25] = 0;
          v65 = a39;
          if ( a39 )
          {
LABEL_10:
            v66 = sub_327254(v65);
            v64 = a23;
            goto LABEL_11;
          }
        }
        else
        {
          if ( a17 )
            v71 = sub_327254(a17);
          else
            v71 = 0;
          v64 = a23;
          a23[25] = v71;
          v64[28] = a20;
          v65 = a39;
          if ( a39 )
            goto LABEL_10;
        }
        v66 = a39;
LABEL_11:
        v67 = a41;
        v68 = a47;
        v64[26] = v66;
        if ( v67 )
          v69 = 0;
        else
          v69 = 3;
        v70 = a42 - 1;
        v64[9] = a43;
        v64[5] = v69;
        v64[4] = v68 != 0;
        v64[31] = 1;
        if ( v70 > 1 || a20 != -1 )
          v64[18] = dword_487D2C;
        sub_D9044(a48, (int *)&a23, 0);
        if ( a23 )
          (*(void (__fastcall **)(_DWORD *))(*a23 + 4))(a23);
        JUMPOUT(0xDA644);
      }
    }
    v53 = (int *)((int (__fastcall *)(unsigned int))loc_C93F0)(a42);
  }
  sub_92F1C(*v53, v53[1], v53[2]);
}
