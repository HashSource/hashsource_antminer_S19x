int __fastcall sub_2F68C8(_DWORD *a1, unsigned int a2, int a3, int a4, char *a5, unsigned __int8 *a6)
{
  char *v6; // r4
  unsigned __int8 *v7; // r8
  int v8; // r7
  _DWORD *v11; // r0
  int v12; // r0
  int v13; // r10
  char *v14; // r6
  __int64 v15; // r0
  int v17; // r0
  int v18; // r3
  _DWORD *v19; // r10
  int v20; // r12
  __int64 v21; // r0
  unsigned __int64 v22; // r8
  int v23; // r2
  const char **v24; // r1
  int v25; // r0
  int v26; // r0
  int v27; // r6
  __int64 v28; // r2
  int v29; // r0
  int v30; // r3
  char *v31; // r4
  int *v32; // r0
  int *v33; // r10
  char *v34; // r8
  int v35; // r0
  int v36; // r0
  __int64 v37; // r0
  int v38; // r8
  char *v39; // r4
  int v40; // r3
  _DWORD *v41; // r10
  int v42; // r2
  __int64 v43; // r0
  unsigned __int64 v44; // r8
  int v45; // r11
  char *v46; // r7
  _DWORD *v47; // r0
  char *v48; // r3
  int v49; // r2
  int v50; // r3
  _DWORD *v51; // r10
  int v52; // r12
  __int64 v53; // r0
  int v54; // r2
  const char **v55; // r1
  __int64 v56; // r0
  int v57; // r3
  __int64 v58; // r0
  int *v59; // r0
  int *v60; // r11
  char *v61; // r10
  int v62; // r0
  int v63; // r0
  int v64; // r0
  int v65; // r0
  int v66; // r0
  char *v67; // r0
  void **v68; // r0
  int v69; // r2
  int v70; // r3
  int v71; // r11
  char *v72; // r0
  int v73; // r0
  int v74[2]; // [sp+14h] [bp-8h] BYREF

  v6 = a5;
  v7 = (unsigned __int8 *)(a5 >= (char *)a6);
  if ( a2 == 25 )
    v7 = 0;
  if ( v7 )
  {
    v14 = a5;
    sub_2A6A5C("Dwarf Error: Info pointer extends beyond end of attributes");
    ((void (__fastcall *)(int))loc_2A6C48)(17);
    return (int)v14;
  }
  v8 = *(_DWORD *)(a4 + 8);
  a1[1] = a2;
  v11 = (_DWORD *)v8;
  if ( a2 == 16 )
  {
    if ( (unsigned int)(*(_DWORD *)(a4 + 88) - 3) <= 1 )
    {
      if ( *(_BYTE *)(a4 + 93) == 4 )
      {
        if ( a6 >= (unsigned __int8 *)a5 + 4 )
          v73 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v8 + 4) + 40))(a5);
        else
          v73 = 0;
        a1[2] = v73;
        a1[3] = 0;
      }
      else
      {
        if ( a6 < (unsigned __int8 *)a5 + 8 )
          v56 = 0;
        else
          v56 = ((__int64 (__fastcall *)(char *))*(_DWORD *)(*(_DWORD *)(v8 + 4) + 28))(a5);
        *((_QWORD *)a1 + 1) = v56;
      }
      return (int)&a5[*(unsigned __int8 *)(a4 + 93)];
    }
    goto LABEL_75;
  }
  if ( a2 > 0x10 )
  {
    if ( a2 == 23 )
      goto LABEL_115;
    v13 = a3;
    if ( a2 <= 0x17 )
    {
      if ( a2 != 19 )
      {
        if ( a2 <= 0x13 )
        {
          if ( a2 == 17 )
            goto LABEL_49;
LABEL_28:
          v14 = a5 + 2;
          if ( a6 < (unsigned __int8 *)a5 + 2 )
            v17 = 0;
          else
            v17 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v8 + 4) + 52))(a5);
          a1[2] = v17;
          a1[3] = 0;
          return (int)v14;
        }
        if ( a2 == 21 )
          goto LABEL_46;
        if ( a2 > 0x15 )
        {
          v38 = sub_2ABC24(v8, a5, v74, 0, (unsigned int)a6);
          v39 = &a5[v74[0]];
          if ( v38 == 33 )
          {
            v13 = sub_2ABC24(v8, v39, v74, 1, (unsigned int)a6);
            v39 += v74[0];
          }
          return sub_2F68C8(a1, v38, v13, a4, v39, a6);
        }
LABEL_19:
        v14 = a5 + 8;
        if ( a6 < (unsigned __int8 *)a5 + 8 )
          v15 = 0;
        else
          v15 = ((__int64 (__fastcall *)(char *))*(_DWORD *)(*(_DWORD *)(v8 + 4) + 28))(a5);
        *((_QWORD *)a1 + 1) = v15;
        return (int)v14;
      }
LABEL_70:
      v14 = a5 + 4;
      if ( a6 < (unsigned __int8 *)a5 + 4 )
        v36 = 0;
      else
        v36 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v8 + 4) + 40))(a5);
      a1[2] = v36;
      a1[3] = 0;
      return (int)v14;
    }
    if ( a2 == 32 )
      goto LABEL_19;
    if ( a2 <= 0x20 )
    {
      if ( a2 == 25 )
      {
        v14 = a5;
        *((_QWORD *)a1 + 1) = 1;
        return (int)v14;
      }
      if ( a2 < 0x19 )
      {
LABEL_55:
        v7 = (unsigned __int8 *)sub_2ACBF4(v8, 8);
        if ( v7 )
        {
          v29 = sub_2ABC24(v8, a5, v74, 0, (unsigned int)a6);
          v30 = v74[0];
          *(_DWORD *)v7 = v29;
          v31 = &a5[v30];
          v14 = &a5[v30 + v29];
          if ( a6 < (unsigned __int8 *)v14 )
            v31 = 0;
          *((_DWORD *)v7 + 1) = v31;
          goto LABEL_45;
        }
        return 0;
      }
      if ( a2 == 31 )
      {
        v18 = *(unsigned __int8 *)(a4 + 93);
        v19 = *(_DWORD **)(a4 + 84);
        v20 = v18;
        if ( a6 < (unsigned __int8 *)&a5[v18] )
        {
          v14 = a5;
          v7 = 0;
          goto LABEL_45;
        }
        if ( v18 == 4 )
        {
          if ( a6 < (unsigned __int8 *)a5 + 4 )
          {
            v22 = 0;
          }
          else
          {
            v65 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v8 + 4) + 40))(a5);
            v8 = *(_DWORD *)(a4 + 8);
            v22 = (unsigned int)v65;
            v18 = *(unsigned __int8 *)(a4 + 93);
          }
          v20 = v18;
          v11 = (_DWORD *)v8;
        }
        else if ( a6 < (unsigned __int8 *)a5 + 8 )
        {
          v22 = 0;
        }
        else
        {
          v21 = ((__int64 (__fastcall *)(char *))*(_DWORD *)(*(_DWORD *)(v8 + 4) + 28))(a5);
          v20 = *(unsigned __int8 *)(a4 + 93);
          v22 = v21;
          v11 = *(_DWORD **)(a4 + 8);
        }
        v23 = v19[15];
        v24 = (const char **)(v19[2] + 128);
        v74[0] = v20;
        v25 = sub_2F5C18(v11, v24, v23, (int)(v19 + 23), v22, v19 + 22, v19 + 23);
        if ( v25 )
        {
          v14 = &a5[v74[0]];
          if ( v22 < (unsigned int)v19[23] )
          {
            v26 = v19[22];
            goto LABEL_43;
          }
          goto LABEL_147;
        }
LABEL_146:
        v7 = (unsigned __int8 *)v25;
        v14 = &a5[v74[0]];
LABEL_45:
        a1[2] = v7;
        return (int)v14;
      }
      goto LABEL_74;
    }
    if ( a2 == 7968 )
    {
LABEL_115:
      v57 = *(unsigned __int8 *)(a4 + 93);
      if ( v57 == 4 )
      {
        if ( a6 < (unsigned __int8 *)a5 + 4 )
        {
          v63 = 0;
        }
        else
        {
          v63 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v8 + 4) + 40))(a5);
          v57 = *(unsigned __int8 *)(a4 + 93);
        }
        a1[2] = v63;
        a1[3] = 0;
      }
      else
      {
        if ( a6 < (unsigned __int8 *)a5 + 8 )
          v58 = 0;
        else
          v58 = ((__int64 (__fastcall *)(char *))*(_DWORD *)(*(_DWORD *)(v8 + 4) + 28))(a5);
        *((_QWORD *)a1 + 1) = v58;
        v57 = *(unsigned __int8 *)(a4 + 93);
      }
      return (int)&a5[v57];
    }
    if ( a2 != 7969 )
    {
      if ( a2 == 33 )
      {
        a1[2] = a3;
        v14 = a5;
        a1[1] = 13;
        a1[3] = 0;
        return (int)v14;
      }
      goto LABEL_74;
    }
    v40 = *(unsigned __int8 *)(a4 + 93);
    v41 = *(_DWORD **)(a4 + 84);
    v42 = *(unsigned __int8 *)(a4 + 93);
    if ( a6 < (unsigned __int8 *)&a5[v40] )
    {
      v14 = a5;
      v46 = 0;
    }
    else
    {
      if ( v40 == 4 )
      {
        if ( a6 < (unsigned __int8 *)a5 + 4 )
        {
          v42 = *(unsigned __int8 *)(a4 + 93);
          v44 = 0;
        }
        else
        {
          v66 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v8 + 4) + 40))(a5);
          v42 = *(unsigned __int8 *)(a4 + 93);
          v44 = (unsigned int)v66;
        }
      }
      else if ( a6 < (unsigned __int8 *)a5 + 8 )
      {
        v44 = 0;
      }
      else
      {
        v43 = ((__int64 (__fastcall *)(char *))*(_DWORD *)(*(_DWORD *)(v8 + 4) + 28))(a5);
        v42 = *(unsigned __int8 *)(a4 + 93);
        v44 = v43;
      }
      v45 = v41[9];
      v74[0] = v42;
      if ( v45 )
      {
LABEL_85:
        if ( sub_2F5C18(
               *(_DWORD **)(*(_DWORD *)(a4 + 84) + 36),
               (const char **)(v41[2] + 120),
               0,
               (int)(v41 + 10),
               v44,
               v41 + 10,
               v41 + 11) )
        {
          v14 = &a5[v74[0]];
          if ( v44 >= (unsigned int)v41[11] )
          {
            v46 = 0;
          }
          else
          {
            v46 = (char *)(v41[10] + v44);
            if ( !*v46 )
              v46 = 0;
          }
        }
        else
        {
          v46 = 0;
          v14 = &a5[v74[0]];
        }
        goto LABEL_89;
      }
      v67 = sub_2AD3B0(*(const char ***)(a4 + 8), "/usr/lib/debug");
      v46 = v67;
      if ( v67 )
      {
        v68 = sub_2AC764((int)v67, 0);
        v71 = (int)v68;
        if ( v68 )
        {
          if ( sub_2AA86C((int)v68, 1, v69, v70) )
          {
            v41[9] = v71;
            goto LABEL_85;
          }
          sub_2AC9DC(v71);
        }
        v72 = v46;
        v46 = 0;
        free(v72);
      }
      v14 = &a5[v74[0]];
    }
LABEL_89:
    a1[2] = v46;
    return (int)v14;
  }
  if ( a2 == 8 )
  {
    if ( a5 < (char *)a6 )
    {
      v7 = (unsigned __int8 *)(unsigned __int8)*a5;
      if ( *a5 )
      {
        v7 = sub_2F6144((unsigned __int8 *)a5, a6, v74);
        v6 = &a5[v74[0]];
      }
      else
      {
        v6 = a5 + 1;
      }
    }
    a1[2] = v7;
    return (int)v6;
  }
  if ( a2 <= 8 )
  {
    if ( a2 == 4 )
    {
      v59 = (int *)sub_2ACBF4(v8, 8);
      v60 = v59;
      if ( !v59 )
        return 0;
      v61 = a5 + 4;
      if ( a6 < (unsigned __int8 *)a5 + 4 )
      {
        v14 = a5 + 4;
        *v59 = 0;
        v61 = 0;
      }
      else
      {
        v62 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v8 + 4) + 40))(a5);
        v14 = &v61[v62];
        *v60 = v62;
        if ( a6 < (unsigned __int8 *)&v61[v62] )
          v61 = 0;
      }
      v60[1] = (int)v61;
      a1[2] = v60;
      return (int)v14;
    }
    if ( a2 > 4 )
    {
      if ( a2 != 6 )
      {
        if ( a2 <= 6 )
          goto LABEL_28;
        goto LABEL_19;
      }
      goto LABEL_70;
    }
    if ( a2 != 1 )
    {
      if ( a2 == 3 )
      {
        v32 = (int *)sub_2ACBF4(v8, 8);
        v33 = v32;
        if ( !v32 )
          return 0;
        v34 = a5 + 2;
        if ( a6 < (unsigned __int8 *)a5 + 2 )
        {
          v14 = a5 + 2;
          *v32 = 0;
          v34 = 0;
        }
        else
        {
          v35 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v8 + 4) + 52))(a5);
          v14 = &v34[v35];
          *v33 = v35;
          if ( a6 < (unsigned __int8 *)&v34[v35] )
            v34 = 0;
        }
        v33[1] = (int)v34;
        a1[2] = v33;
        return (int)v14;
      }
LABEL_74:
      v14 = 0;
      sub_2A6A5C("Dwarf Error: Invalid or unhandled FORM value: %#x.", a2);
      ((void (__fastcall *)(int))loc_2A6C48)(17);
      return (int)v14;
    }
LABEL_75:
    LODWORD(v37) = sub_2F67B0(v8, *(unsigned __int8 *)(a4 + 92), (int)a5, (unsigned int)a6);
    *((_QWORD *)a1 + 1) = v37;
    return (int)&a5[*(unsigned __int8 *)(a4 + 92)];
  }
  if ( a2 == 12 )
  {
LABEL_49:
    v14 = a5 + 1;
    HIDWORD(v28) = 0;
    if ( a6 < (unsigned __int8 *)a5 + 1 )
      LODWORD(v28) = 0;
    else
      LODWORD(v28) = (unsigned __int8)*a5;
    *((_QWORD *)a1 + 1) = v28;
    return (int)v14;
  }
  if ( a2 > 0xC )
  {
    if ( a2 != 14 )
    {
      if ( a2 <= 0xE )
      {
        v12 = sub_2ABC24(v8, a5, v74, 1, (unsigned int)a6);
LABEL_47:
        v27 = v74[0];
        a1[2] = v12;
        a1[3] = 0;
        return (int)&a5[v27];
      }
LABEL_46:
      v12 = sub_2ABC24(v8, a5, v74, 0, (unsigned int)a6);
      goto LABEL_47;
    }
    v50 = *(unsigned __int8 *)(a4 + 93);
    v51 = *(_DWORD **)(a4 + 84);
    v52 = v50;
    if ( a6 < (unsigned __int8 *)&a5[v50] )
    {
      v14 = a5;
      goto LABEL_45;
    }
    if ( v50 == 4 )
    {
      if ( a6 < (unsigned __int8 *)a5 + 4 )
      {
        v22 = 0;
      }
      else
      {
        v64 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v8 + 4) + 40))(a5);
        v8 = *(_DWORD *)(a4 + 8);
        v22 = (unsigned int)v64;
        v50 = *(unsigned __int8 *)(a4 + 93);
      }
      v52 = v50;
      v11 = (_DWORD *)v8;
    }
    else if ( a6 < (unsigned __int8 *)a5 + 8 )
    {
      v22 = 0;
    }
    else
    {
      v53 = ((__int64 (__fastcall *)(char *))*(_DWORD *)(*(_DWORD *)(v8 + 4) + 28))(a5);
      v52 = *(unsigned __int8 *)(a4 + 93);
      v22 = v53;
      v11 = *(_DWORD **)(a4 + 8);
    }
    v54 = v51[15];
    v55 = (const char **)(v51[2] + 112);
    v74[0] = v52;
    v25 = sub_2F5C18(v11, v55, v54, (int)(v51 + 21), v22, v51 + 20, v51 + 21);
    if ( v25 )
    {
      v14 = &a5[v74[0]];
      if ( v22 < (unsigned int)v51[21] )
      {
        v26 = v51[20];
LABEL_43:
        v7 = (unsigned __int8 *)(v26 + v22);
        if ( !*v7 )
          v7 = 0;
        goto LABEL_45;
      }
LABEL_147:
      v7 = 0;
      goto LABEL_45;
    }
    goto LABEL_146;
  }
  if ( a2 != 10 )
  {
    if ( a2 <= 0xA )
      goto LABEL_55;
    goto LABEL_49;
  }
  v47 = (_DWORD *)sub_2ACBF4(v8, 8);
  if ( !v47 )
    return 0;
  v48 = a5 + 1;
  if ( a6 < (unsigned __int8 *)a5 + 1 )
  {
    v14 = a5 + 1;
    *v47 = 0;
    v48 = 0;
  }
  else
  {
    v49 = (unsigned __int8)*a5;
    v14 = &v48[v49];
    *v47 = v49;
    if ( a6 < (unsigned __int8 *)&v48[v49] )
      v48 = 0;
  }
  v47[1] = v48;
  a1[2] = v47;
  return (int)v14;
}
