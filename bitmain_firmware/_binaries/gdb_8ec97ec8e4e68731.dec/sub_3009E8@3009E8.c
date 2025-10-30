int __fastcall sub_3009E8(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v10; // r6
  _DWORD *v11; // r5
  char **v12; // r3
  int (__fastcall *v13)(int, int, _DWORD *, int, int, int, int); // r9
  int v14; // r11
  int result; // r0
  int v16; // r9
  unsigned int v17; // r9
  _DWORD *v18; // r3
  int v19; // r1
  int v20; // r6
  int v21; // r2
  int v22; // r6
  int v23; // r3
  unsigned int v24; // r6
  int v25; // r2
  int v26; // r1
  int v27; // r8
  int v28; // r4
  _BOOL4 v29; // r3
  unsigned int v30; // r6
  int v31; // r9
  int v32; // r0
  int v33; // r1
  int v34; // r12
  int v35; // r2
  unsigned int v36; // r6
  int v37; // r9
  __int16 v38; // r0
  int v39; // r9
  int v40; // r0
  int v41; // r9
  const char *v42; // r8
  int v43; // r11
  char v44; // r0
  int v45; // r0
  int v46; // [sp+14h] [bp-8h]

  v10 = **(_DWORD ***)a2;
  v11 = *(_DWORD **)(a2 + 12);
  v12 = (char **)v10[4];
  if ( v12 == &off_4708A8 )
  {
    if ( ((a5 == 0) & ((v10[3] ^ 0x80u) >> 7)) != 0 )
      v14 = 8;
    else
      v14 = 2;
    if ( v11 )
    {
      v13 = (int (__fastcall *)(int, int, _DWORD *, int, int, int, int))v11[7];
      if ( !v13 )
        goto LABEL_15;
LABEL_5:
      result = v13(a1, a2, v10, a3, a4, a5, a6);
      if ( result != 5 )
        return result;
      if ( (char **)v10[4] != &off_470950 )
        goto LABEL_15;
      goto LABEL_50;
    }
    return 8;
  }
  if ( !v11 )
  {
    if ( v12 == &off_470950 && a5 )
      goto LABEL_9;
    return 8;
  }
  v13 = (int (__fastcall *)(int, int, _DWORD *, int, int, int, int))v11[7];
  if ( v13 )
  {
    v14 = 2;
    goto LABEL_5;
  }
  v14 = 2;
  if ( v12 != &off_470950 )
    goto LABEL_15;
LABEL_50:
  if ( a5 )
  {
LABEL_9:
    *(_DWORD *)(a2 + 4) += *(_DWORD *)(a4 + 56);
    return 2;
  }
LABEL_15:
  v16 = *(_DWORD *)(a2 + 4);
  v17 = sub_2A6904(a1) * v16;
  if ( !sub_30098C((int)v11, a1, a4, v17) )
    return 4;
  v18 = (_DWORD *)v10[4];
  if ( (v18[5] & 0x1000) != 0 )
    v19 = 0;
  else
    v19 = v10[2];
  if ( (!a5 || (v20 = v11[9]) != 0) && (v20 = v18[15]) != 0 )
    v21 = *(_DWORD *)(v20 + 28);
  else
    v21 = v20;
  v22 = v18[14];
  v23 = *(_DWORD *)(a2 + 8);
  v24 = v23 + v22 + v19 + v21;
  if ( v11[4] )
  {
    v24 -= *(_DWORD *)(*(_DWORD *)(a4 + 60) + 28) + *(_DWORD *)(a4 + 56);
    if ( v11[12] )
      v24 -= *(_DWORD *)(a2 + 4);
  }
  if ( a5 )
  {
    v25 = *(_DWORD *)(a4 + 56) + *(_DWORD *)(a2 + 4);
    if ( !v11[9] )
    {
      *(_DWORD *)(a2 + 8) = v24;
      *(_DWORD *)(a2 + 4) = v25;
      return v14;
    }
    v26 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a2 + 4) = v25;
    if ( *(_DWORD *)(v26 + 4) != 2
      || (v42 = *(const char **)v26, v46 = v23, !strcmp(*(const char **)v26, "coff-Intel-little"))
      || !strcmp(v42, "coff-Intel-big") )
    {
      *(_DWORD *)(a2 + 8) = v24;
    }
    else
    {
      *(_DWORD *)(a2 + 8) = 0;
      v24 -= v46;
    }
  }
  v27 = v11[6];
  v28 = v11[1];
  v29 = v14 == 2;
  if ( !v27 )
    v29 = 0;
  if ( v29 )
  {
    v43 = v11[3];
    v44 = sub_2A67A4(a1);
    v45 = sub_3008DC(v27, v43, v28, v44, v24);
    v28 = v11[1];
    v14 = v45;
  }
  v30 = v24 >> v28 << v11[5];
  switch ( v11[2] )
  {
    case 0xFFFFFFFE:
      v41 = a3 + v17;
      v32 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40))(v41);
      v33 = v41;
      v34 = v11[11];
      v35 = *(_DWORD *)(a1 + 4);
      v36 = (v11[10] & v32) - v30;
      goto LABEL_40;
    case 0xFFFFFFFF:
      v39 = a3 + v17;
      v40 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 52))(v39);
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a1 + 4) + 60))(
        v40 ^ (((v11[10] & v40) - v30) ^ v40) & v11[11],
        v39);
      return v14;
    case 0:
      result = v14;
      *(_BYTE *)(a3 + v17) ^= (*(_BYTE *)(a3 + v17)
                             ^ ((v11[10] & *(_BYTE *)(a3 + v17)) + v30))
                            & (unsigned __int8)v11[11];
      return result;
    case 1:
      v37 = a3 + v17;
      v38 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 52))(v37);
      (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a1 + 4) + 60))(
        v38 ^ (v38 ^ (((_WORD)v11[10] & v38) + v30)) & (_WORD)v11[11],
        v37);
      return v14;
    case 2:
      v31 = a3 + v17;
      v32 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40))(v31);
      v33 = v31;
      v34 = v11[11];
      v35 = *(_DWORD *)(a1 + 4);
      v36 = (v11[10] & v32) + v30;
LABEL_40:
      (*(void (__fastcall **)(unsigned int, int))(v35 + 48))(v32 ^ (v36 ^ v32) & v34, v33);
      goto LABEL_41;
    case 3:
LABEL_41:
      result = v14;
      break;
    case 4:
      sub_2A6BF0((int)"reloc.c", 974, (int)"bfd_perform_relocation");
    default:
      result = 7;
      break;
  }
  return result;
}
