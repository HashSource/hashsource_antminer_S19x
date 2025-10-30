int __fastcall sub_300E60(int a1, int **a2, int a3, int a4, int a5)
{
  int *v6; // r4
  int v10; // r6
  int (__fastcall *v11)(int, int **, int); // r8
  int v12; // r3
  int *v14; // r8
  unsigned int v15; // r8
  _DWORD *v16; // r3
  int v17; // r1
  int v18; // r0
  int v19; // r6
  int v20; // r2
  int *v21; // r3
  int v22; // r6
  int v23; // r0
  unsigned int v24; // r6
  int *v25; // r2
  int v26; // r1
  int v27; // r9
  int v28; // r5
  int v29; // r8
  unsigned int v30; // r6
  const char *v31; // r9
  char v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r1
  int v37; // r12
  int v38; // lr
  unsigned int v39; // r6
  __int16 v40; // r0
  int *v41; // [sp+14h] [bp-8h]
  int v42; // [sp+14h] [bp-8h]
  int v43; // [sp+14h] [bp-8h]
  int v44; // [sp+14h] [bp-8h]
  int v45; // [sp+14h] [bp-8h]

  v6 = a2[3];
  v10 = **a2;
  if ( v6 )
  {
    v11 = (int (__fastcall *)(int, int **, int))v6[7];
    if ( v11 )
    {
      v12 = v11(a1, a2, v10);
      if ( v12 != 5 )
        return v12;
    }
  }
  v14 = a2[1];
  if ( *(char ***)(v10 + 16) != &off_470950 )
  {
    v15 = (_DWORD)v14 * sub_2A6904(a1);
    if ( !sub_30098C((int)v6, a1, a5, v15) )
      return 4;
    v16 = *(_DWORD **)(v10 + 16);
    v17 = v6[9];
    if ( (v16[5] & 0x1000) != 0 )
      v18 = 0;
    else
      v18 = *(_DWORD *)(v10 + 8);
    v19 = v16[14];
    if ( v17 )
      v20 = v16[15];
    else
      v20 = 0;
    v21 = a2[2];
    if ( v17 )
      v20 = *(_DWORD *)(v20 + 28);
    v22 = (int)v21 + v19 + v18;
    v23 = *(_DWORD *)(a5 + 56);
    v24 = v22 + v20;
    v25 = a2[1];
    if ( v6[4] && (v24 -= v23 + *(_DWORD *)(*(_DWORD *)(a5 + 60) + 28), v6[12]) )
    {
      if ( v17 )
      {
        v24 -= (unsigned int)v25;
        goto LABEL_22;
      }
    }
    else if ( v17 )
    {
LABEL_22:
      v26 = *(_DWORD *)(a1 + 4);
      a2[1] = (int *)((char *)v25 + v23);
      if ( *(_DWORD *)(v26 + 4) != 2
        || (v31 = *(const char **)v26, v41 = v21, !strcmp(*(const char **)v26, "coff-Intel-little"))
        || !strcmp(v31, "coff-Intel-big") )
      {
        a2[2] = (int *)v24;
      }
      else
      {
        v24 -= (unsigned int)v41;
        if ( strcmp(v31, "coff-z8k") )
          a2[2] = 0;
      }
      v27 = v6[6];
      v28 = v6[1];
      if ( v27 )
      {
        v42 = v6[3];
        v32 = sub_2A67A4(a1);
        v33 = sub_3008DC(v27, v42, v28, v32, v24);
        v28 = v6[1];
        v12 = v33;
      }
      else
      {
        v12 = 2;
      }
      v29 = v15 - a4;
      v30 = v24 >> v28 << v6[5];
      switch ( v6[2] )
      {
        case -2:
          v44 = v12;
          v35 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40))(a3 + v29);
          v36 = a3 + v29;
          v37 = v6[11];
          v38 = *(_DWORD *)(a1 + 4);
          v39 = (v6[10] & v35) - v30;
          goto LABEL_36;
        case 0:
          *(_BYTE *)(a3 + v29) ^= (*(_BYTE *)(a3 + v29) ^ ((v6[10] & *(_BYTE *)(a3 + v29)) + v30)) & (_BYTE)v6[11];
          break;
        case 1:
          v45 = v12;
          v40 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 52))(a3 + v29);
          (*(void (__fastcall **)(unsigned int, int))(*(_DWORD *)(a1 + 4) + 60))(
            v40 ^ (v40 ^ (((_WORD)v6[10] & v40) + v30)) & (unsigned __int16)v6[11],
            a3 + v29);
          v12 = v45;
          break;
        case 2:
          v44 = v12;
          v35 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 40))(a3 + v29);
          v36 = a3 + v29;
          v37 = v6[11];
          v38 = *(_DWORD *)(a1 + 4);
          v39 = (v6[10] & v35) + v30;
LABEL_36:
          (*(void (__fastcall **)(unsigned int, int))(v38 + 48))(v35 ^ (v39 ^ v35) & v37, v36);
          v12 = v44;
          break;
        case 3:
          return v12;
        case 4:
          v43 = v12;
          v34 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 28))(a3 + v29);
          (*(void (__fastcall **)(unsigned int, _DWORD, int))(*(_DWORD *)(a1 + 4) + 36))(
            v34 ^ (((v6[10] & v34) + v30) ^ v34) & v6[11],
            0,
            a3 + v29);
          v12 = v43;
          break;
        default:
          v12 = 7;
          break;
      }
      return v12;
    }
    v12 = 2;
    a2[1] = (int *)((char *)v25 + v23);
    a2[2] = (int *)v24;
    return v12;
  }
  a2[1] = (int *)((char *)v14 + *(_DWORD *)(a5 + 56));
  return 2;
}
