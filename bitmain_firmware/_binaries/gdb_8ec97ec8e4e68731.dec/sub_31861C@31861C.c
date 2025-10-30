int __fastcall sub_31861C(int result, int a2, _DWORD *a3)
{
  _DWORD *v3; // r5
  unsigned int v4; // r4
  char *v6; // r7
  int v7; // r3
  int v8; // r1
  char v9; // r10
  char v10; // t1
  int (__fastcall *v11)(unsigned int, int, int); // r3
  int v12; // r2
  int v13; // r2
  int v14; // r0
  void (__fastcall *v15)(unsigned int, int, int); // r3
  int v16; // r2
  int v17; // r1
  int (__fastcall *v18)(unsigned int); // r3
  int v19; // r2
  int v20; // r1
  int v21; // r2
  int (__fastcall *v22)(unsigned int, int, int); // r3
  int v23; // r2
  int v24; // r3
  int *v25; // r5
  int v26; // r1
  char v27; // r6
  char v28; // t1
  int (__fastcall *v29)(unsigned int, int, int); // r3
  int v30; // r2
  char *v31; // r5
  int v32; // r3
  int v33; // r1
  char v34; // r6
  char v35; // t1
  int (__fastcall *v36)(unsigned int, int, int); // r3
  int v37; // r2
  char *v38; // r5
  int v39; // r3
  int v40; // r1
  char v41; // r6
  char v42; // t1
  int (__fastcall *v43)(unsigned int, int, int); // r3
  int v44; // r2
  int v45; // r1
  int v46; // r2
  void (__fastcall *v47)(int, int, int); // r3
  int v48; // r2
  int v49; // r2
  char *v50; // r5
  int v51; // r3
  int v52; // r1
  char v53; // r6
  char v54; // t1
  int (__fastcall *v55)(unsigned int, int, int); // r3
  int v56; // r2
  char *v57; // r7
  int v58; // r3
  int v59; // r1
  char v60; // r10
  char v61; // t1
  void (__fastcall *v62)(unsigned int, int, int); // r3
  int v63; // r2
  char *v64; // r5
  int v65; // r3
  int v66; // r1
  char v67; // r6
  char v68; // t1
  int (__fastcall *v69)(unsigned int, int, int); // r3
  int v70; // r2
  char *v71; // r7
  int v72; // r1
  char v73; // r10
  char v74; // t1
  int (__fastcall *v75)(unsigned int, int, int); // r3
  int v76; // r2
  int v77; // r2
  int (__fastcall *v78)(int, int, int); // r3
  int v79; // r2
  int v80; // r3
  int v81; // r2
  void (__fastcall *v82)(int, int, int); // r3
  int v83; // r2
  int v84; // r3
  char *v85; // r5
  int v86; // r3
  int v87; // r1
  char v88; // r6
  char v89; // t1
  int (__fastcall *v90)(unsigned int, int, int); // r3
  int v91; // r2
  int v92; // r2
  void (__fastcall *v93)(int, int, int); // r3
  int v94; // r2
  int v95; // r3
  int v96; // r2
  int (__fastcall *v97)(int, int, int); // r3
  int v98; // r2
  int v99; // r3
  char *v100; // r5
  int v101; // r3
  int v102; // r1
  char v103; // r6
  char v104; // t1
  int (__fastcall *v105)(unsigned int, int, int); // r3
  int v106; // r2
  char *v107; // r5
  int v108; // r3
  int v109; // r1
  char v110; // r6
  char v111; // t1
  int (__fastcall *v112)(unsigned int, int, int); // r3
  int v113; // r2

  v3 = a3;
  v4 = result;
  switch ( *a3 )
  {
    case 3:
      a3 = (_DWORD *)a3[2];
      goto LABEL_15;
    case 0x19:
    case 0x1C:
      v100 = (char *)&unk_38B1FB;
      v101 = *(_DWORD *)(result + 256);
      do
      {
        v102 = v101;
        result = v4;
        v104 = *++v100;
        v103 = v104;
        if ( v101 == 255 )
        {
          v105 = *(int (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v106 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          result = v105(v4, 255, v106);
          v101 = 1;
          v102 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          ++v101;
        }
        *(_DWORD *)(v4 + 256) = v101;
        *(_BYTE *)(v4 + v102) = v103;
        *(_BYTE *)(v4 + 260) = v103;
      }
      while ( "t" != v100 );
      return result;
    case 0x1A:
    case 0x1D:
      v85 = (char *)&unk_38B1EF;
      v86 = *(_DWORD *)(result + 256);
      do
      {
        v87 = v86;
        result = v4;
        v89 = *++v85;
        v88 = v89;
        if ( v86 == 255 )
        {
          v90 = *(int (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v91 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          result = v90(v4, 255, v91);
          v86 = 1;
          v87 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          ++v86;
        }
        *(_DWORD *)(v4 + 256) = v86;
        *(_BYTE *)(v4 + v87) = v88;
        *(_BYTE *)(v4 + 260) = v88;
      }
      while ( "e" != v85 );
      return result;
    case 0x1B:
    case 0x1E:
      v107 = " const";
      v108 = *(_DWORD *)(result + 256);
      do
      {
        v109 = v108;
        result = v4;
        v111 = *v107++;
        v110 = v111;
        if ( v108 == 255 )
        {
          v112 = *(int (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v113 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          result = v112(v4, 255, v113);
          v108 = 1;
          v109 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          ++v108;
        }
        *(_DWORD *)(v4 + 256) = v108;
        *(_BYTE *)(v4 + v109) = v110;
        *(_BYTE *)(v4 + 260) = v110;
      }
      while ( v107 != "" );
      return result;
    case 0x1F:
      v77 = *(_DWORD *)(result + 256);
      if ( v77 == 255 )
      {
        v78 = *(int (__fastcall **)(int, int, int))(result + 264);
        v79 = *(_DWORD *)(result + 268);
        *(_BYTE *)(result + 255) = 0;
        result = v78(result, 255, v79);
        v80 = *(_DWORD *)(v4 + 296);
        v77 = 0;
        *(_DWORD *)(v4 + 256) = 0;
        *(_DWORD *)(v4 + 296) = v80 + 1;
      }
      v20 = v77 + 1;
      *(_DWORD *)(v4 + 256) = v77 + 1;
      *(_BYTE *)(v4 + v77) = 32;
      *(_BYTE *)(v4 + 260) = 32;
      goto LABEL_17;
    case 0x20:
      v81 = *(_DWORD *)(result + 256);
      if ( v81 == 255 )
      {
        v82 = *(void (__fastcall **)(int, int, int))(result + 264);
        v83 = *(_DWORD *)(result + 268);
        *(_BYTE *)(result + 255) = 0;
        v82(result, 255, v83);
        v84 = *(_DWORD *)(v4 + 296);
        v81 = 0;
        *(_DWORD *)(v4 + 256) = 0;
        *(_DWORD *)(v4 + 296) = v84 + 1;
      }
      v24 = v81 + 1;
      *(_DWORD *)(v4 + 256) = v81 + 1;
      *(_BYTE *)(v4 + v81) = 32;
      *(_BYTE *)(v4 + 260) = 32;
      goto LABEL_22;
    case 0x21:
      v92 = *(_DWORD *)(result + 256);
      if ( v92 == 255 )
      {
        v93 = *(void (__fastcall **)(int, int, int))(result + 264);
        v94 = *(_DWORD *)(result + 268);
        *(_BYTE *)(result + 255) = 0;
        v93(result, 255, v94);
        v95 = *(_DWORD *)(v4 + 296);
        v92 = 0;
        *(_DWORD *)(v4 + 256) = 0;
        *(_DWORD *)(v4 + 296) = v95 + 1;
      }
      *(_DWORD *)(v4 + 256) = v92 + 1;
      *(_BYTE *)(v4 + v92) = 32;
      *(_BYTE *)(v4 + 260) = 32;
      return sub_314740(v4, a2, v3[3]);
    case 0x22:
      if ( (a2 & 4) == 0 )
      {
        v96 = *(_DWORD *)(result + 256);
        if ( v96 == 255 )
        {
          v97 = *(int (__fastcall **)(int, int, int))(result + 264);
          v98 = *(_DWORD *)(result + 268);
          *(_BYTE *)(result + 255) = 0;
          result = v97(result, 255, v98);
          v99 = *(_DWORD *)(v4 + 296);
          v96 = 0;
          *(_DWORD *)(v4 + 256) = 0;
          *(_DWORD *)(v4 + 296) = v99 + 1;
        }
        *(_DWORD *)(v4 + 256) = v96 + 1;
        *(_BYTE *)(v4 + v96) = 42;
        *(_BYTE *)(v4 + 260) = 42;
      }
      return result;
    case 0x23:
      v20 = *(_DWORD *)(result + 256);
LABEL_17:
      if ( v20 == 255 )
      {
        v22 = *(int (__fastcall **)(unsigned int, int, int))(v4 + 264);
        v23 = *(_DWORD *)(v4 + 268);
        *(_BYTE *)(v4 + 255) = 0;
        result = v22(v4, 255, v23);
        v21 = 1;
        v20 = 0;
        ++*(_DWORD *)(v4 + 296);
      }
      else
      {
        v21 = v20 + 1;
      }
      *(_DWORD *)(v4 + 256) = v21;
      *(_BYTE *)(v4 + v20) = 38;
      *(_BYTE *)(v4 + 260) = 38;
      return result;
    case 0x24:
      v24 = *(_DWORD *)(result + 256);
LABEL_22:
      v25 = &dword_364FBC;
      do
      {
        v26 = v24;
        result = v4;
        v28 = *(_BYTE *)v25;
        v25 = (int *)((char *)v25 + 1);
        v27 = v28;
        if ( v24 == 255 )
        {
          v29 = *(int (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v30 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          result = v29(v4, 255, v30);
          v24 = 1;
          v26 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          ++v24;
        }
        *(_DWORD *)(v4 + 256) = v24;
        *(_BYTE *)(v4 + v26) = v27;
        *(_BYTE *)(v4 + 260) = v27;
      }
      while ( v25 != (int *)((char *)&dword_364FBC + 2) );
      return result;
    case 0x25:
      v31 = (char *)&unk_433C27;
      v32 = *(_DWORD *)(result + 256);
      do
      {
        v33 = v32;
        result = v4;
        v35 = *++v31;
        v34 = v35;
        if ( v32 == 255 )
        {
          v36 = *(int (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v37 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          result = v36(v4, 255, v37);
          v32 = 1;
          v33 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          ++v32;
        }
        *(_DWORD *)(v4 + 256) = v32;
        *(_BYTE *)(v4 + v33) = v34;
        *(_BYTE *)(v4 + 260) = v34;
      }
      while ( " " != v31 );
      return result;
    case 0x26:
      v38 = "imaginary ";
      v39 = *(_DWORD *)(result + 256);
      do
      {
        v40 = v39;
        result = v4;
        v42 = *v38++;
        v41 = v42;
        if ( v39 == 255 )
        {
          v43 = *(int (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v44 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          result = v43(v4, 255, v44);
          v39 = 1;
          v40 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          ++v39;
        }
        *(_DWORD *)(v4 + 256) = v39;
        *(_BYTE *)(v4 + v40) = v41;
        *(_BYTE *)(v4 + 260) = v41;
      }
      while ( v38 != "" );
      return result;
    case 0x2B:
      if ( *(_BYTE *)(result + 260) != 40 )
      {
        v45 = *(_DWORD *)(result + 256);
        if ( v45 == 255 )
        {
          v47 = *(void (__fastcall **)(int, int, int))(result + 264);
          v48 = *(_DWORD *)(result + 268);
          *(_BYTE *)(result + 255) = 0;
          v47(result, 255, v48);
          v46 = 1;
          v45 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          v46 = v45 + 1;
        }
        *(_DWORD *)(v4 + 256) = v46;
        *(_BYTE *)(v4 + v45) = 32;
        *(_BYTE *)(v4 + 260) = 32;
      }
      v49 = v3[2];
      v50 = "::*";
      sub_314740(v4, a2, v49);
      v51 = *(_DWORD *)(v4 + 256);
      do
      {
        v52 = v51;
        result = v4;
        v54 = *v50++;
        v53 = v54;
        if ( v51 == 255 )
        {
          v55 = *(int (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v56 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          result = v55(v4, 255, v56);
          v51 = 1;
          v52 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          ++v51;
        }
        *(_DWORD *)(v4 + 256) = v51;
        *(_BYTE *)(v4 + v52) = v53;
        *(_BYTE *)(v4 + 260) = v53;
      }
      while ( "" != v50 );
      return result;
    case 0x2D:
      v57 = " __vector(";
      v58 = *(_DWORD *)(result + 256);
      do
      {
        v59 = v58;
        v61 = *v57++;
        v60 = v61;
        if ( v58 == 255 )
        {
          v62 = *(void (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v63 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          v62(v4, 255, v63);
          v58 = 1;
          v59 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          ++v58;
        }
        *(_DWORD *)(v4 + 256) = v58;
        *(_BYTE *)(v4 + v59) = v60;
        *(_BYTE *)(v4 + 260) = v60;
      }
      while ( "" != v57 );
      result = sub_314740(v4, a2, v3[2]);
      v17 = *(_DWORD *)(v4 + 256);
      if ( v17 != 255 )
        goto LABEL_57;
      goto LABEL_12;
    case 0x4C:
      v64 = (char *)&unk_433BFF;
      v65 = *(_DWORD *)(result + 256);
      do
      {
        v66 = v65;
        result = v4;
        v68 = *++v64;
        v67 = v68;
        if ( v65 == 255 )
        {
          v69 = *(int (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v70 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          result = v69(v4, 255, v70);
          v65 = 1;
          v66 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          ++v65;
        }
        *(_DWORD *)(v4 + 256) = v65;
        *(_BYTE *)(v4 + v66) = v67;
        *(_BYTE *)(v4 + 260) = v67;
      }
      while ( "e" != v64 );
      return result;
    case 0x4E:
      v71 = (char *)&unk_433C13;
      v7 = *(_DWORD *)(result + 256);
      do
      {
        v72 = v7;
        result = v4;
        v74 = *++v71;
        v73 = v74;
        if ( v7 == 255 )
        {
          v75 = *(int (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v76 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          result = v75(v4, 255, v76);
          v7 = 1;
          v72 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          ++v7;
        }
        *(_DWORD *)(v4 + 256) = v7;
        *(_BYTE *)(v4 + v72) = v73;
        *(_BYTE *)(v4 + 260) = v73;
      }
      while ( v71 != "t" );
      goto LABEL_7;
    case 0x4F:
      v6 = " throw";
      v7 = *(_DWORD *)(result + 256);
      do
      {
        v8 = v7;
        result = v4;
        v10 = *v6++;
        v9 = v10;
        if ( v7 == 255 )
        {
          v11 = *(int (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v12 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          result = v11(v4, 255, v12);
          v7 = 1;
          v8 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          ++v7;
        }
        *(_DWORD *)(v4 + 256) = v7;
        *(_BYTE *)(v4 + v8) = v9;
        *(_BYTE *)(v4 + 260) = v9;
      }
      while ( v6 != "" );
LABEL_7:
      v13 = v3[3];
      if ( v13 )
      {
        if ( v7 == 255 )
        {
          v15 = *(void (__fastcall **)(unsigned int, int, int))(v4 + 264);
          v16 = *(_DWORD *)(v4 + 268);
          *(_BYTE *)(v4 + 255) = 0;
          v15(v4, 255, v16);
          v14 = 1;
          v7 = 0;
          v13 = v3[3];
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
          v14 = v7 + 1;
        }
        *(_DWORD *)(v4 + 256) = v14;
        *(_BYTE *)(v4 + v7) = 40;
        *(_BYTE *)(v4 + 260) = 40;
        result = sub_314740(v4, a2, v13);
        v17 = *(_DWORD *)(v4 + 256);
        if ( v17 == 255 )
        {
LABEL_12:
          v18 = *(int (__fastcall **)(unsigned int))(v4 + 264);
          *(_BYTE *)(v4 + 255) = 0;
          result = v18(v4);
          v19 = 1;
          v17 = 0;
          ++*(_DWORD *)(v4 + 296);
        }
        else
        {
LABEL_57:
          v19 = v17 + 1;
        }
        *(_DWORD *)(v4 + 256) = v19;
        *(_BYTE *)(v4 + v17) = 41;
        *(_BYTE *)(v4 + 260) = 41;
      }
      break;
    default:
LABEL_15:
      result = sub_314740(result, a2, (int)a3);
      break;
  }
  return result;
}
