int __fastcall sub_35528(
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
        int a23,
        int a24,
        char a25,
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
        double a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        double a54)
{
  __int64 v56; // d0
  __int64 v57; // d1
  __int64 v58; // d2
  double v59; // d6
  int v61; // r6
  int v62; // r4
  int v63; // r2
  double *v64; // r10
  int v65; // r12
  _QWORD *v66; // r1
  int v67; // r0
  double *v68; // r8
  bool v69; // nf
  int v70; // r3
  int v71; // r4
  int v72; // r1
  int v73; // r3
  double v74; // d7
  double v75; // d9
  int v76; // r3
  int v77; // r11
  double v78; // d7
  double v79; // r0
  double v80; // r0
  _DWORD *v81; // r12
  double *v82; // r1
  int i; // r0
  double *v84; // r2
  int v85; // r3
  double v86; // d7
  double v87; // d6
  int v88; // lr
  int v89; // r4
  void **v90; // r2
  _BYTE *v91; // r3
  double v92; // r0
  double v93; // d5
  double v94; // d7
  void *v95; // t1
  int v96; // r6
  int v97; // r3
  double v98; // d7
  int v99; // r2
  bool v101; // zf
  double v102; // d0
  int v103; // r7
  double v104; // d9
  double v105; // d10
  __int64 v106; // r2
  double v107; // d8
  double v108; // r0
  int v109; // r2
  double v110; // d8
  double v111; // d7
  int v112; // r6
  double v113; // d6
  unsigned int v114; // r10
  unsigned int v115; // r4
  double v116; // d0
  int v117; // r0
  double v118; // d9
  unsigned int v120; // [sp+8h] [bp-8h]
  void *v121; // [sp+Ch] [bp-4h] BYREF
  _DWORD v122[8]; // [sp+10h] [bp+0h] BYREF
  _BYTE v123[68]; // [sp+30h] [bp+20h] BYREF
  char v124[80]; // [sp+74h] [bp+64h] BYREF
  int v125; // [sp+C4h] [bp+B4h]

  v61 = 7;
  v62 = *(_DWORD *)(a1 + 320);
  v63 = (int)&_stack_chk_guard;
  v64 = (double *)v123;
  v65 = v62 + 130;
  v66 = (_QWORD *)(a1 + 8 * v62++);
  v67 = _stack_chk_guard;
  v68 = (double *)v123;
  v66[49] = v56;
  v66[41] = v57;
  v66[57] = v58;
  v125 = v67;
  v121 = &_stack_chk_guard;
  v69 = -v62 < 0;
  v70 = -v62 & 7;
  v71 = v62 & 7;
  if ( !v69 )
    v71 = -v70;
  v72 = current_time;
  v73 = current_time - *(_DWORD *)(a1 + 704);
  *(_DWORD *)(a1 + 4 * v65) = current_time;
  *(_DWORD *)(a1 + 320) = v71;
  v74 = clock_phi;
  *(_DWORD *)(a1 + 704) = v72;
  v75 = (double)(unsigned int)v73 * v74;
  do
  {
    v77 = a1 + 8 * v71;
    v78 = *(double *)(v77 + 456);
    if ( v61 )
    {
      v78 = v78 + v75;
      *(double *)(v77 + 456) = v78;
    }
    if ( v78 < 16.0 )
    {
      HIDWORD(v79) = &allan_xpt;
      LODWORD(v79) = (unsigned __int8)allan_xpt;
      v120 = *(_DWORD *)(a1 + 704) - *(_DWORD *)(a1 + 4 * (v71 + 130));
      v80 = ldexp(v79, v63);
      v63 = (unsigned int)1.0;
      if ( v120 <= (unsigned int)1.0 )
      {
        v80 = *(double *)(v77 + 328);
      }
      else
      {
        v78 = *(double *)(v77 + 328);
        v59 = *(double *)(v77 + 456);
      }
      if ( v120 <= (unsigned int)1.0 )
        v68[7] = v80;
      else
        v78 = v78 + v59;
      if ( v120 > (unsigned int)1.0 )
        v68[7] = v78;
    }
    else
    {
      *(double *)(v77 + 456) = 16.0;
      v68[7] = 16.0;
    }
    v122[v61] = v71;
    v69 = -(v71 + 1) < 0;
    --v61;
    v76 = -(v71 + 1) & 7;
    v71 = (v71 + 1) & 7;
    if ( !v69 )
      v71 = -v76;
    --v68;
  }
  while ( v61 != -1 );
  if ( !LODWORD(freq_cnt) )
  {
    v81 = v122;
    v82 = (double *)v123;
    for ( i = 1; i != 8; ++i )
    {
      v84 = (double *)v123;
      v85 = 0;
      do
      {
        v86 = *v84++;
        v87 = v82[1];
        if ( v86 > v87 )
        {
          v88 = v122[v85];
          v89 = v81[1];
          *(v84 - 1) = v87;
          v82[1] = v86;
          v122[v85] = v89;
          v81[1] = v88;
        }
        ++v85;
      }
      while ( v85 != i );
      ++v82;
      ++v81;
    }
  }
  v90 = &v121;
  v91 = (_BYTE *)(a1 + 552);
  HIDWORD(v92) = 0;
  v93 = sys_maxdist;
  do
  {
    v94 = *v64++;
    v95 = v90[1];
    ++v90;
    *v91++ = (_BYTE)v95;
    if ( v94 < 16.0 && (SHIDWORD(v92) <= 1 || v94 < v93) )
      ++HIDWORD(v92);
  }
  while ( (_BYTE *)(a1 + 560) != v91 );
  v96 = v122[0];
  v97 = 7;
  LODWORD(v92) = a1 + 8 * (v122[0] + 49);
  *(_QWORD *)(a1 + 624) = 0;
  v98 = 0.0;
  *(_QWORD *)(a1 + 632) = 0;
  do
  {
    v99 = a1 + 8 * v122[v97];
    v98 = (v98 + *(double *)(v99 + 456)) * 0.5;
    if ( SHIDWORD(v92) > v97 )
      *(double *)(a1 + 624) = *(double *)(a1 + 624)
                            + (*(double *)(v99 + 392) - *(double *)LODWORD(v92))
                            * (*(double *)(v99 + 392) - *(double *)LODWORD(v92));
  }
  while ( v97-- != 0 );
  *(double *)(a1 + 632) = v98;
  if ( !HIDWORD(v92) )
    goto LABEL_58;
  v101 = HIDWORD(v92) == 1;
  v102 = *(double *)(a1 + 624);
  if ( HIDWORD(v92) != 1 )
    --HIDWORD(v92);
  v103 = a1 + 8 * v96;
  v104 = *(double *)(a1 + 608);
  if ( !v101 )
    v98 = (double)SHIDWORD(v92);
  v105 = *(double *)(v103 + 392);
  if ( !v101 )
    v102 = v102 / v98;
  *(double *)(a1 + 608) = v105;
  v106 = *(_QWORD *)(v103 + 328);
  *(_QWORD *)(a1 + 616) = v106;
  if ( !v101 )
    *(double *)(a1 + 624) = v102;
  v107 = sqrt(v102);
  if ( v102 < 0.0 )
    v92 = sqrt(v92);
  LODWORD(v92) = sys_precision;
  v108 = ldexp(v92, v106);
  if ( v107 > 1.0 )
  {
    v116 = *(double *)(a1 + 624);
    v110 = sqrt(v116);
    if ( v116 < 0.0 )
      v108 = sqrt(v108);
  }
  else
  {
    LODWORD(v108) = sys_precision;
    v108 = ldexp(v108, v109);
    v110 = 1.0;
  }
  v111 = sys_maxdist;
  v112 = a1 + 4 * v96;
  v113 = *(double *)(a1 + 632);
  *(double *)(a1 + 624) = v110;
  v114 = *(_DWORD *)(a1 + 304);
  v115 = *(_DWORD *)(v112 + 520);
  if ( v113 < v111 && v111 > *(double *)(v103 + 456) )
  {
    v118 = fabs(v104 - v105);
    if ( v110 * 3.0 < v118 )
    {
      LODWORD(v108) = *(unsigned __int8 *)(a1 + 64);
      v108 = ldexp(v108, v109);
      if ( (double)(v115 - v114) < 1.0 + 1.0 )
      {
        sub_6C054(v124, 80, "%.6f s", v118);
        LODWORD(v108) = sub_25EE0((__int16 *)((char *)&dword_8C + 1), a1, v124);
        return LODWORD(v108);
      }
      v115 = *(_DWORD *)(v112 + 520);
      v114 = *(_DWORD *)(a1 + 304);
    }
  }
  if ( v115 > v114 )
  {
    *(_DWORD *)(a1 + 304) = v115;
    v117 = sub_23504(a1);
    LODWORD(v108) = sub_41CDC(a1 + 16, v117);
    if ( !*(_DWORD *)(a1 + 308) || sys_leap == 3 )
LABEL_58:
      LODWORD(v108) = sub_343FC();
  }
  return LODWORD(v108);
}
