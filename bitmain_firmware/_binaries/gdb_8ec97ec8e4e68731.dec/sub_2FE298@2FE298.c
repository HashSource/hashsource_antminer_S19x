int __fastcall sub_2FE298(_DWORD *a1, int *a2, int a3, unsigned int *a4)
{
  int v7; // r2
  int v8; // r4
  _DWORD *v9; // r0
  int v10; // r2
  int *v11; // r6
  int *v12; // r9
  int v13; // r4
  int v14; // t1
  int v15; // r3
  int v16; // r2
  char *v17; // r5
  const char *v19; // r1
  int v20; // r3
  __int64 v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r1
  int v25; // r2
  unsigned int v26; // r3
  int v27; // r2
  int v28; // r1
  int v29; // r0
  char v30; // r3
  int v31; // r2
  unsigned int v32; // r3
  int v33; // r3
  int v34; // r1
  int v35; // r2
  int v36; // r0

  if ( !sub_2FCD78(a2) )
    return 0;
  v7 = *(_DWORD *)(a3 + 64);
  if ( v7 )
  {
    v8 = a2[25];
    if ( v8 )
    {
      while ( v7 != *(_DWORD *)(v8 + 60) )
      {
        v8 = *(_DWORD *)(v8 + 12);
        if ( !v8 )
          goto LABEL_9;
      }
      v9 = (_DWORD *)(*(int (__fastcall **)(int *))(a2[1] + 268))(a2);
      if ( !v9 )
        return 0;
      v10 = *a2;
      v9[2] = 0;
      v9[3] = 16385;
      v9[1] = v10;
      v9[4] = v8;
      if ( !sub_2FC690(a1 + 30, a1 + 31, a4, (int)v9) )
        return 0;
    }
  }
LABEL_9:
  v11 = (int *)a2[30];
  v12 = &v11[a2[31]];
  while ( v12 > v11 )
  {
    v14 = *v11++;
    v13 = v14;
    v15 = *(_DWORD *)(v14 + 12);
    if ( (v15 & 0x3882) != 0 )
      goto LABEL_22;
    v16 = *(_DWORD *)(v13 + 16);
    if ( (char **)v16 == &off_4708A8 )
      goto LABEL_22;
    v17 = (char *)((*(_DWORD *)(v16 + 20) >> 12) & 1);
    if ( (char **)v16 == &off_4709F8 )
      v17 = (char *)1;
    if ( v17 )
    {
LABEL_22:
      v17 = *(char **)(v13 + 20);
      if ( v17
        || (v15 & 0x800) == 0
        && ((v19 = *(const char **)(v13 + 4), *(char ***)(v13 + 16) == &off_4708A8)
          ? (v17 = sub_2FC960((int)a1, a3, v19, 0, *(_DWORD *)(v13 + 20), 1))
          : (v17 = sub_2FC920(*(_DWORD **)(a3 + 28), v19, *(_DWORD *)(v13 + 20), 0, 1)),
            v17) )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a3 + 48) + 4) == a2[1] )
        {
          v33 = *((_DWORD *)v17 + 8);
          if ( v33 )
          {
            v13 = *((_DWORD *)v17 + 8);
            *(v11 - 1) = v33;
          }
        }
        switch ( v17[12] )
        {
          case 1:
            goto LABEL_23;
          case 2:
            *(_DWORD *)(v13 + 12) |= 0x80u;
            goto LABEL_23;
          case 3:
            goto LABEL_37;
          case 4:
            v31 = *((_DWORD *)v17 + 5);
            v32 = *(_DWORD *)(v13 + 12) & 0xFFFFF77F | 0x80;
            *(_DWORD *)(v13 + 8) = *((_DWORD *)v17 + 6);
            *(_DWORD *)(v13 + 12) = v32;
            *(_DWORD *)(v13 + 16) = v31;
            goto LABEL_23;
          case 5:
            v27 = *(_DWORD *)(v13 + 16);
            v28 = *((_DWORD *)v17 + 6);
            v29 = *(_DWORD *)(v27 + 20);
            *(_DWORD *)(v13 + 12) |= 2u;
            *(_DWORD *)(v13 + 8) = v28;
            if ( (v29 & 0x1000) != 0 )
              goto LABEL_23;
            if ( (char **)v27 != &off_4708A8 )
              sub_2A6BBC("linker.c", 2082);
            v30 = *(_BYTE *)(a3 + 1);
            *(_DWORD *)(v13 + 16) = &off_470800;
            v20 = v30 & 0x60;
            if ( v20 != 96 )
              goto LABEL_24;
            HIDWORD(v21) = &off_470800;
            LODWORD(v21) = 0;
            break;
          case 6:
            v17 = (char *)*((_DWORD *)v17 + 5);
LABEL_37:
            v25 = *((_DWORD *)v17 + 5);
            v26 = *(_DWORD *)(v13 + 12) & 0xFFFFF77D | 2;
            *(_DWORD *)(v13 + 8) = *((_DWORD *)v17 + 6);
            *(_DWORD *)(v13 + 12) = v26;
            LOBYTE(v26) = *(_BYTE *)(a3 + 1);
            *(_DWORD *)(v13 + 16) = v25;
            v20 = v26 & 0x60;
            if ( v20 == 96 )
              goto LABEL_38;
            goto LABEL_24;
          default:
            sub_2A6BF0((int)"linker.c", 2056, (int)"_bfd_generic_link_output_symbols");
        }
        goto LABEL_29;
      }
    }
LABEL_23:
    v20 = *(_BYTE *)(a3 + 1) & 0x60;
    if ( v20 == 96 )
    {
LABEL_38:
      HIDWORD(v21) = *(_DWORD *)(v13 + 16);
      goto LABEL_27;
    }
LABEL_24:
    if ( v20 == 64 && !sub_2AAC2C(*(_DWORD **)(a3 + 32), *(const char **)(v13 + 4), 0, 0) )
    {
      HIDWORD(v21) = *(_DWORD *)(v13 + 16);
      goto LABEL_27;
    }
    v21 = *(_QWORD *)(v13 + 12);
    if ( (v21 & 0x800082) != 0 )
    {
      if ( a2 != *(int **)v13 || (v21 & 0x400) == 0 )
        goto LABEL_27;
    }
    else
    {
      if ( (char **)HIDWORD(v21) == &off_4709F8 )
        goto LABEL_28;
      if ( (v21 & 4) != 0 )
      {
        if ( (*(_BYTE *)(a3 + 1) & 0x60) != 0 )
          goto LABEL_27;
      }
      else
      {
        if ( (char **)HIDWORD(v21) == &off_4708A8 )
          goto LABEL_28;
        v34 = *(_DWORD *)(HIDWORD(v21) + 20);
        if ( (v34 & 0x1000) != 0 )
          goto LABEL_27;
        if ( (v21 & 1) != 0 )
        {
          if ( (v21 & 0x1000) != 0 )
            goto LABEL_27;
          v35 = (*(_DWORD *)a3 >> 15) & 3;
          if ( v35 != 1 )
          {
            if ( v35 )
            {
              if ( v35 != 2 )
                goto LABEL_27;
            }
            else if ( (*(_BYTE *)a3 & 3) == 2 || (v34 & 0x800000) == 0 )
            {
              goto LABEL_49;
            }
            v36 = sub_302A7C(a2, v13);
            HIDWORD(v21) = *(_DWORD *)(v13 + 16);
            if ( v36 )
              goto LABEL_27;
          }
        }
        else
        {
          if ( (v21 & 0x800) == 0 )
          {
            if ( (_DWORD)v21 || (*(_DWORD *)(*(_DWORD *)(HIDWORD(v21) + 148) + 40) & 0x200000) == 0 )
              sub_2A6BF0((int)"linker.c", 2171, (int)"_bfd_generic_link_output_symbols");
LABEL_27:
            if ( (char **)HIDWORD(v21) == &off_470950 )
              continue;
LABEL_28:
            LODWORD(v21) = 0;
LABEL_29:
            v22 = *(_DWORD *)(HIDWORD(v21) + 60);
            v23 = *(_DWORD *)(v22 + 12);
            if ( v23 )
              v24 = *(_DWORD *)(v23 + 16);
            else
              v24 = a1[26];
            if ( v24 != v22 || !(_DWORD)v21 )
              continue;
            goto LABEL_50;
          }
          if ( (*(_BYTE *)(a3 + 1) & 0x60) == 0x60 )
            goto LABEL_27;
        }
      }
    }
LABEL_49:
    if ( (char **)HIDWORD(v21) != &off_470950 )
    {
      LODWORD(v21) = 1;
      goto LABEL_29;
    }
LABEL_50:
    if ( !sub_2FC690(a1 + 30, a1 + 31, a4, v13) )
      return 0;
    if ( v17 )
      *((_DWORD *)v17 + 7) = 1;
  }
  return 1;
}
