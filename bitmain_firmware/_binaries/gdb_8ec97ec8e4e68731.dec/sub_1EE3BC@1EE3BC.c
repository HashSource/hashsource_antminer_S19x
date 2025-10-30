int __fastcall sub_1EE3BC(int a1, int a2, int a3, int a4, int a5, int *a6, char a7)
{
  int *v7; // r4
  int v8; // r0
  unsigned __int8 **v9; // r6
  int i; // r0
  int v11; // r3
  _DWORD *v12; // r0
  int v13; // r0
  _DWORD *v14; // r0
  int v15; // r2
  char *v16; // r9
  int v17; // r3
  bool v18; // zf
  int v19; // r3
  int v20; // r2
  _DWORD *v22; // r0
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int *v26; // r3
  bool v27; // zf
  __int64 v28; // kr08_8
  char *v29; // r0
  int v30; // r0
  __int16 *v31; // r3
  __int64 v32; // r0
  int v33; // r2
  __int64 v34; // r0
  int v35; // r2
  int v36; // r2
  int v38; // [sp+18h] [bp-5Ch] BYREF
  __int64 v39; // [sp+1Ch] [bp-58h]
  int v40; // [sp+28h] [bp-4Ch] BYREF
  int v41; // [sp+2Ch] [bp-48h]
  int v42; // [sp+30h] [bp-44h]
  int v43; // [sp+34h] [bp-40h]
  int v44; // [sp+38h] [bp-3Ch]
  int v45; // [sp+3Ch] [bp-38h]
  _BYTE v46[12]; // [sp+40h] [bp-34h] BYREF
  __int64 v47; // [sp+4Ch] [bp-28h]
  int v48; // [sp+54h] [bp-20h]
  _DWORD v49[3]; // [sp+58h] [bp-1Ch] BYREF
  __int64 v50; // [sp+64h] [bp-10h] BYREF
  int v51; // [sp+6Ch] [bp-8h]
  int varg_r2; // [sp+98h] [bp+24h]
  int varg_r3; // [sp+9Ch] [bp+28h]

  varg_r2 = a3;
  varg_r3 = a4;
  if ( !sub_232950(a1) )
  {
    v43 = varg_r2;
    v44 = varg_r3;
    v45 = a5;
    v13 = sub_16F654(varg_r2);
    ((void (__fastcall *)(int))loc_1E2770)(v13);
    v7 = (int *)dword_488C94;
    *(_DWORD *)v46 = dword_475848;
    *(_QWORD *)&v46[4] = qword_47584C;
    while ( 1 )
    {
      *(_QWORD *)a6 = 11;
      v14 = (_DWORD *)sub_1E7AAC(v43, v44, v45);
      if ( v14 )
      {
        sub_1EC81C((int *)&v50, v14, a6);
        goto LABEL_32;
      }
      v15 = v7[4];
      if ( v15 )
      {
        v7[4] = 0;
      }
      else
      {
        if ( (a7 & 1) == 0 )
          v15 = dword_46DB4C != 0;
        if ( !v7[7] )
        {
          v34 = qword_46BBCC;
          v35 = dword_46BBD4;
          *a6 = 13;
          v50 = v34;
          v51 = v35;
          goto LABEL_32;
        }
        v14 = (_DWORD *)sub_1E4EB8((char **)v7, (size_t *)v7 + 1, v15, 1, v49);
        if ( v14 == (_DWORD *)-1 )
        {
          if ( (a7 & 1) != 0 )
            goto LABEL_31;
        }
        else if ( v49[0] )
        {
          goto LABEL_31;
        }
      }
      v16 = (char *)*v7;
      v17 = *(unsigned __int8 *)*v7;
      v18 = v17 == 79;
      if ( v17 != 79 )
        v18 = v17 == 70;
      if ( !v18 )
      {
        v7[12] = 0;
        v17 = (unsigned __int8)*v16;
      }
      switch ( v17 )
      {
        case 0:
          if ( !v7[24] )
            goto LABEL_54;
          sub_22F048(v14);
          v29 = sub_99A4C(v7[24]);
          v30 = sub_259F10("Can't send signals to this remote system.  %s not sent.\n", v29);
          v7[24] = 0;
          sub_22EF7C(v30);
          v31 = &word_3FD7C8;
          if ( v7[25] )
            v31 = &word_3DDC78;
          *(_WORD *)v16 = *v31;
          sub_1E7DEC(v16);
          break;
        case 69:
          v7[7] = 0;
          sub_946B0("Remote failure reply: %s", v16);
          *a6 = 1;
          a6[1] = 0;
          goto LABEL_41;
        case 70:
          v7[7] = 0;
          sub_1F7354(v16, v7[12]);
          v7[12] = 0;
          v7[7] = 1;
          break;
        case 78:
        case 83:
        case 84:
        case 87:
        case 88:
          v7[7] = 0;
          v22 = (_DWORD *)sub_1F7718(&off_46DB30, v16);
          sub_1EC81C(&v38, v22, a6);
          *(_DWORD *)v46 = v38;
          *(_QWORD *)&v46[4] = v39;
          break;
        case 79:
          sub_1E1F18((unsigned __int8 *)v16 + 1);
          break;
        default:
LABEL_54:
          sub_946B0("Invalid remote reply: %s", v16);
          break;
      }
      v19 = *a6;
      if ( *a6 != 13 )
      {
        if ( v19 != 11 )
          goto LABEL_68;
        if ( (a7 & 1) == 0 )
          continue;
      }
LABEL_31:
      v50 = qword_46BBCC;
      v51 = dword_46BBD4;
      goto LABEL_32;
    }
  }
  v7 = &v40;
  v40 = varg_r2;
  v41 = varg_r3;
  v42 = a5;
  v8 = sub_16F654(varg_r2);
  ((void (__fastcall *)(int))loc_1E2770)(v8);
  v9 = (unsigned __int8 **)dword_488C94;
  LODWORD(v50) = 0;
  for ( i = sub_1E4EB8((char **)dword_488C94, (size_t *)(dword_488C94 + 4), 0, 1, &v50);
        ;
        i = sub_1E4EB8((char **)v9, (size_t *)v9 + 1, 1, 1, &v50) )
  {
    if ( i != -1 && !(_DWORD)v50 )
    {
      v11 = **v9;
      if ( v11 == 69 )
      {
        sub_946B0("Remote failure reply: %s");
      }
      else if ( v11 == 79 )
      {
        sub_1E1F18(*v9 + 1);
      }
      else
      {
        sub_946B0("Invalid remote reply: %s");
      }
    }
    if ( *(_DWORD *)&v9[102][4 * dword_46DB48 + 8] )
      sub_1E7CD0((const char **)&off_46DB30);
    v12 = (_DWORD *)sub_1E7AAC(v40, v41, v42);
    if ( v12 )
    {
      sub_1EC81C((int *)v46, v12, a6);
      goto LABEL_60;
    }
    if ( (a7 & 1) != 0 )
      break;
  }
  v32 = qword_46BBCC;
  v33 = dword_46BBD4;
  *a6 = 11;
  *(_QWORD *)v46 = v32;
  *(_DWORD *)&v46[8] = v33;
LABEL_60:
  v28 = *(_QWORD *)&v46[4];
  *(_DWORD *)a1 = *(_DWORD *)v46;
  *(_QWORD *)(a1 + 4) = v28;
  while ( off_489AFC(&dword_4899A0) )
  {
    if ( dword_488CE4 )
    {
      if ( *(_DWORD *)dword_488CE4 )
        sub_1532BC((_DWORD *)dword_488C6C);
      return a1;
    }
    ((void (*)(void))loc_16318)();
LABEL_68:
    if ( (v19 & 0xFFFFFFFD) != 0 )
    {
LABEL_41:
      v23 = sub_98F78(v46, &dword_475848);
      v27 = v23 == 0;
      if ( v23 )
      {
        LOWORD(v26) = 30956;
      }
      else
      {
        v23 = *(_DWORD *)v46;
        v25 = *(_DWORD *)&v46[8];
        v24 = *(_DWORD *)&v46[4];
      }
      if ( v27 )
        v26 = v49;
      else
        HIWORD(v26) = 72;
      if ( v27 )
      {
        v7 += 15;
        *v26 = v23;
        v26[1] = v24;
        v26[2] = v25;
        *v7 = v23;
        v7[1] = v24;
        v7[2] = v25;
      }
      else
      {
        v23 = *v26;
        v24 = v26[1];
        v25 = v26[2];
      }
      if ( !v27 )
      {
        *(_DWORD *)v46 = v23;
        *(_DWORD *)&v46[4] = v24;
        *(_DWORD *)&v46[8] = v25;
      }
    }
    else
    {
      v7 += 15;
      v36 = dword_46BBD4;
      v47 = qword_46BBCC;
      v48 = dword_46BBD4;
      *(_QWORD *)v7 = qword_46BBCC;
      v7[2] = v36;
    }
    v50 = *(_QWORD *)v46;
    v51 = *(_DWORD *)&v46[8];
LABEL_32:
    v20 = v51;
    *(_QWORD *)a1 = v50;
    *(_DWORD *)(a1 + 8) = v20;
  }
  return a1;
}
