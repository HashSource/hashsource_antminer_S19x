int __fastcall sub_14BE20(int *a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int result; // r0
  int i; // r4
  int v8; // r5
  int v9; // r2
  bool v10; // cc
  int v11; // r5
  int v12; // r3
  int v13; // r7
  int v14; // r2
  char v15; // r3
  bool v16; // cf
  int v17; // r2
  char v18; // r3
  unsigned __int8 v19; // r3
  _DWORD *v20; // r0
  _DWORD *v21; // r3
  _DWORD *v22; // r8
  char *v23; // r2
  int *v24; // r12
  int *v25; // r0
  int v26; // r1
  int v27; // r2
  unsigned __int8 *v28; // r6
  int v29; // r4
  unsigned __int8 v30; // r0
  int v31; // t1
  int v32; // r9
  const char ***v33; // r6
  const char **v34; // r5
  int v35; // r7
  const char *v36; // r8
  _DWORD *v37; // r6
  int v38; // r5
  int v39; // r3
  int v40; // r2
  int v41; // r5
  int v42; // r7
  int v43; // r2
  char v44; // r3
  int v45; // r2
  char v46; // r3
  unsigned __int8 v47; // r3
  _DWORD *v48; // r0
  _DWORD *v49; // r3
  _DWORD *v50; // r8
  char *v51; // r2
  int *v52; // r12
  int *v53; // r0
  int v54; // r1
  int v55; // r2
  unsigned __int8 *v56; // r6
  int v57; // r4
  unsigned __int8 v58; // r0
  int v59; // t1
  int v60; // r9
  const char ***v61; // r6
  const char **v62; // r5
  const char *v63; // r8
  _DWORD *v64; // r6
  unsigned int v65; // r3
  unsigned int v66; // r3
  int v68; // [sp+Ch] [bp-50h]
  int v69; // [sp+Ch] [bp-50h]
  char *s1; // [sp+14h] [bp-48h]
  char *s1a; // [sp+14h] [bp-48h]
  int v73; // [sp+18h] [bp-44h]
  int v74; // [sp+18h] [bp-44h]
  int v75; // [sp+1Ch] [bp-40h]
  _DWORD **v76; // [sp+1Ch] [bp-40h]
  _DWORD **v77; // [sp+1Ch] [bp-40h]
  int v78; // [sp+20h] [bp-3Ch]
  int v79; // [sp+20h] [bp-3Ch]
  int v81; // [sp+24h] [bp-38h]
  int v83; // [sp+30h] [bp-2Ch] BYREF
  int v84; // [sp+34h] [bp-28h] BYREF
  _BYTE v85[8]; // [sp+38h] [bp-24h] BYREF
  int v86; // [sp+40h] [bp-1Ch] BYREF
  int v87; // [sp+44h] [bp-18h] BYREF
  _DWORD *v88; // [sp+48h] [bp-14h]
  int *v89; // [sp+4Ch] [bp-10h]
  int *v90; // [sp+50h] [bp-Ch]
  int v91; // [sp+54h] [bp-8h]

  result = a3[8];
  if ( result > 0 )
  {
    for ( i = 0; i < result; ++i )
    {
      if ( *(_DWORD *)(*(_DWORD *)(a3[7] + 4 * i) + 24) )
      {
        sub_14BE20(a1, a2);
        result = a3[8];
      }
    }
  }
  v8 = a3[10];
  v9 = a3[9];
  v10 = v8 <= 0;
  v11 = v8 - 1;
  v12 = *(_DWORD *)(a2 + 108);
  v13 = v12 + 4 * v9;
  if ( !v10 )
  {
    v14 = *(_DWORD *)(v12 + 4 * v9);
    v15 = *(_BYTE *)(v14 + 20);
    v84 = v14;
    if ( (v15 & 0x1F) != 0xE )
    {
      v68 = v13;
      while ( 1 )
      {
        result = sub_13CA20((int)&v86, a4, &v84);
        if ( !(_BYTE)v87 )
          break;
        result = v84;
        v19 = *(_BYTE *)(v84 + 24);
        if ( (v19 & 7) == 1 )
        {
          v65 = (unsigned __int8)((v19 >> 3) - 1);
          if ( v65 > 0xD )
          {
            v78 = 52;
          }
          else
          {
            v78 = *(_DWORD *)&aWhetherToAlway[4 * v65 - 2728];
            if ( !v78 )
              break;
          }
        }
        else
        {
          if ( (v19 & 7) != 2 )
            break;
          v78 = 19;
        }
        s1 = (char *)sub_21B7DC(v84);
        v86 = 0;
        v87 = 0;
        v88 = 0;
        v89 = &v87;
        v90 = &v87;
        v91 = 0;
        v20 = sub_9836C(0x24u);
        v21 = v88;
        v22 = v20;
        *v20 = 0;
        v23 = (char *)(v20 + 3);
        v20[1] = s1;
        if ( v21 )
        {
          v24 = v89;
          v25 = v90;
          v22[3] = v87;
          v26 = v91;
          v22[4] = v21;
          v22[5] = v24;
          v22[6] = v25;
          v21[1] = v23;
          v88 = 0;
          v89 = &v87;
          v90 = &v87;
          v22[7] = v26;
          v91 = 0;
        }
        else
        {
          v20[3] = 0;
          v20[4] = 0;
          v20[5] = v23;
          *((_QWORD *)v20 + 3) = (unsigned int)v23;
        }
        v27 = (unsigned __int8)*s1;
        v28 = (unsigned __int8 *)(s1 + 1);
        if ( *s1 )
        {
          v29 = 0;
          do
          {
            v30 = tolower(v27);
            v31 = *v28++;
            v27 = v31;
            v29 = v30 + 67 * v29 - 113;
          }
          while ( v31 );
        }
        else
        {
          v29 = (unsigned __int8)*s1;
        }
        v75 = a1[1];
        v32 = (unsigned __int64)sub_347674(v29, v75) >> 32;
        v33 = *(const char ****)(*a1 + 4 * v32);
        if ( v33 )
        {
          v73 = v11;
          v34 = *v33;
          v35 = v75;
          v76 = (_DWORD **)v22;
          v36 = (*v33)[8];
          while ( (const char *)v29 != v36 || strcmp(s1, v34[1]) )
          {
            if ( *v34 )
            {
              v36 = (const char *)*((_DWORD *)*v34 + 8);
              v33 = (const char ***)v34;
              v34 = (const char **)*v34;
              if ( v32 == (unsigned __int64)sub_347674(v36, v35) >> 32 )
                continue;
            }
            v11 = v73;
            v22 = v76;
            goto LABEL_58;
          }
          v37 = *v33;
          v11 = v73;
          v22 = v76;
          if ( !v37 )
            goto LABEL_58;
          sub_149088((int)(v76 + 2), v76[4]);
          sub_339E64(v76);
        }
        else
        {
LABEL_58:
          v37 = sub_14B5EC(a1, v32, v29, v22);
        }
        sub_149088((int)&v86, v88);
        v86 = v78;
        v87 = a5;
        LOBYTE(v88) = 0;
        v89 = 0;
        result = sub_149250((int)v85, v37 + 2, &v86);
        v16 = v11-- != 0;
        if ( !v16 )
          goto LABEL_31;
LABEL_11:
        v17 = *(_DWORD *)(v68 + 4);
        v68 += 4;
        v18 = *(_BYTE *)(v17 + 20);
        v84 = v17;
        if ( (v18 & 0x1F) == 0xE )
          goto LABEL_71;
      }
      v16 = v11-- != 0;
      if ( !v16 )
        goto LABEL_31;
      goto LABEL_11;
    }
LABEL_71:
    sub_946E0("Ada is not currently supported by the index");
  }
LABEL_31:
  v38 = a3[12];
  v39 = *(_DWORD *)(a2 + 120);
  v40 = a3[11];
  v10 = v38 <= 0;
  v41 = v38 - 1;
  v42 = v39 + 4 * v40;
  if ( !v10 )
  {
    v43 = *(_DWORD *)(v39 + 4 * v40);
    v44 = *(_BYTE *)(v43 + 20);
    v83 = v43;
    if ( (v44 & 0x1F) == 0xE )
      goto LABEL_71;
    v69 = v42;
    while ( 1 )
    {
      result = sub_13CA20((int)&v86, a4, &v83);
      if ( !(_BYTE)v87 )
        break;
      result = v83;
      v47 = *(_BYTE *)(v83 + 24);
      if ( (v47 & 7) == 1 )
      {
        v66 = (unsigned __int8)((v47 >> 3) - 1);
        if ( v66 > 0xD )
        {
          v79 = 52;
        }
        else
        {
          v79 = *(_DWORD *)&aWhetherToAlway[4 * v66 - 2728];
          if ( !v79 )
            break;
        }
      }
      else
      {
        if ( (v47 & 7) != 2 )
          break;
        v79 = 19;
      }
      s1a = (char *)sub_21B7DC(v83);
      v86 = 0;
      v87 = 0;
      v88 = 0;
      v89 = &v87;
      v90 = &v87;
      v91 = 0;
      v48 = sub_9836C(0x24u);
      v49 = v88;
      v50 = v48;
      *v48 = 0;
      v51 = (char *)(v48 + 3);
      v48[1] = s1a;
      if ( v49 )
      {
        v52 = v89;
        v53 = v90;
        v50[3] = v87;
        v54 = v91;
        v50[4] = v49;
        v50[5] = v52;
        v50[6] = v53;
        v49[1] = v51;
        v88 = 0;
        v89 = &v87;
        v90 = &v87;
        v50[7] = v54;
        v91 = 0;
      }
      else
      {
        v48[3] = 0;
        v48[4] = 0;
        v48[5] = v51;
        *((_QWORD *)v48 + 3) = (unsigned int)v51;
      }
      v55 = (unsigned __int8)*s1a;
      v56 = (unsigned __int8 *)(s1a + 1);
      if ( *s1a )
      {
        v57 = 0;
        do
        {
          v58 = tolower(v55);
          v59 = *v56++;
          v55 = v59;
          v57 = v58 + 67 * v57 - 113;
        }
        while ( v59 );
      }
      else
      {
        v57 = (unsigned __int8)*s1a;
      }
      v81 = a1[1];
      v60 = (unsigned __int64)sub_347674(v57, v81) >> 32;
      v61 = *(const char ****)(*a1 + 4 * v60);
      if ( v61 )
      {
        v74 = v41;
        v77 = (_DWORD **)v50;
        v62 = *v61;
        v63 = (*v61)[8];
        while ( (const char *)v57 != v63 || strcmp(s1a, v62[1]) )
        {
          if ( *v62 )
          {
            v63 = (const char *)*((_DWORD *)*v62 + 8);
            v61 = (const char ***)v62;
            v62 = (const char **)*v62;
            if ( v60 == (unsigned __int64)sub_347674(v63, v81) >> 32 )
              continue;
          }
          v41 = v74;
          v50 = v77;
          goto LABEL_63;
        }
        v64 = *v61;
        v41 = v74;
        v50 = v77;
        if ( !v64 )
          goto LABEL_63;
        sub_149088((int)(v77 + 2), v77[4]);
        sub_339E64(v77);
      }
      else
      {
LABEL_63:
        v64 = sub_14B5EC(a1, v60, v57, v50);
      }
      sub_149088((int)&v86, v88);
      LOBYTE(v88) = 1;
      v86 = v79;
      v87 = a5;
      v89 = 0;
      result = sub_149250((int)v85, v64 + 2, &v86);
      v16 = v41-- != 0;
      if ( !v16 )
        return result;
LABEL_36:
      v45 = *(_DWORD *)(v69 + 4);
      v69 += 4;
      v46 = *(_BYTE *)(v45 + 20);
      v83 = v45;
      if ( (v46 & 0x1F) == 0xE )
        goto LABEL_71;
    }
    v16 = v41-- != 0;
    if ( !v16 )
      return result;
    goto LABEL_36;
  }
  return result;
}
