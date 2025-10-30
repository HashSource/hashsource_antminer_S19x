_DWORD *__fastcall sub_2F0BEC(_DWORD *a1, int a2)
{
  const char *v2; // r4
  _DWORD *v3; // r9
  _DWORD *v4; // r5
  int v5; // r2
  int v6; // r6
  int v7; // r3
  int v8; // r3
  _DWORD *v9; // r7
  int v10; // r8
  int v11; // r3
  int v12; // r10
  _DWORD *v13; // r6
  _DWORD *v14; // r10
  int **v15; // r11
  int *v16; // r4
  unsigned int v17; // r1
  unsigned int v18; // r3
  int *v19; // r3
  unsigned int v20; // r2
  int v21; // r3
  bool v22; // zf
  unsigned int v23; // r1
  _DWORD *v24; // r12
  int v25; // r1
  int v26; // r2
  int v27; // r3
  char *v28; // r0
  unsigned int v29; // r7
  int v30; // r4
  _DWORD *v31; // r0
  size_t v32; // r1
  int v33; // r3
  size_t v34; // r4
  char *v35; // r6
  int v36; // r3
  _DWORD *v37; // r11
  unsigned int v38; // r8
  int v39; // r10
  int v40; // r7
  int v41; // r4
  int v42; // r1
  int v43; // t1
  int v44; // r11
  int v45; // r10
  _DWORD *v46; // r0
  char v47; // r2
  int v49; // r10
  int v50; // [sp+4h] [bp-18h]
  char *v51; // [sp+4h] [bp-18h]
  int v52; // [sp+Ch] [bp-10h]
  _DWORD v53[2]; // [sp+14h] [bp-8h] BYREF

  v4 = (_DWORD *)a1[14];
  if ( v4 )
  {
    v2 = (const char *)(unsigned __int16)".note.gnu.property";
    v3 = a1;
  }
  v5 = *(_DWORD *)(*(_DWORD *)(a1[12] + 4) + 444);
  if ( v4 )
  {
    a2 = 0;
    HIWORD(v2) = (unsigned int)".note.gnu.property" >> 16;
  }
  v52 = *(_DWORD *)(*(_DWORD *)(a1[12] + 4) + 444);
  v6 = *(unsigned __int8 *)(*(_DWORD *)(v5 + 392) + 12);
  v50 = *(_DWORD *)(v5 + 8);
  if ( !v4 )
    return 0;
  do
  {
    while ( 1 )
    {
      v7 = v4[1];
      if ( *(_DWORD *)(v7 + 4) == 5 && (v4[10] & 0x800) == 0 && *(_DWORD *)(v4[40] + 592) )
        break;
      v4 = (_DWORD *)v4[39];
      if ( !v4 )
        goto LABEL_13;
    }
    v8 = *(_DWORD *)(v7 + 444);
    if ( *(_DWORD *)(v8 + 8) == v50 && *(unsigned __int8 *)(*(_DWORD *)(v8 + 392) + 12) == v6 && sub_2AD7AC((int)v4, v2) )
    {
      v9 = (_DWORD *)v3[14];
      if ( v9 )
        goto LABEL_15;
LABEL_46:
      if ( *(_BYTE *)(*(_DWORD *)(v52 + 392) + 12) == 2 )
        v29 = 8;
      else
        v29 = 4;
      v51 = sub_2AD7AC((int)v4, ".note.gnu.property");
      if ( !v51 )
        sub_2A6BBC("elf-properties.c", 401);
      v30 = v3[4];
      if ( v30 > 0 )
      {
        v46 = sub_2F0894((int)v4, 1u, v29);
        if ( v46[3] )
        {
          if ( v46[2] < (unsigned int)v30 )
            v46[2] = v30;
        }
        else
        {
          v46[2] = v30;
          v46[3] = 4;
        }
        v31 = *(_DWORD **)(v4[40] + 592);
        if ( !v31 )
        {
          v34 = 0;
          v32 = 16;
LABEL_56:
          *((_DWORD *)v51 + 9) = v32;
          v35 = (char *)sub_2AD09C((int)v4, v32);
          (*(void (__fastcall **)(int, char *))(v4[1] + 84))(4, v35);
          (*(void (__fastcall **)(size_t, char *))(v4[1] + 84))(v34, v35 + 4);
          (*(void (__fastcall **)(int, char *))(v4[1] + 84))(5, v35 + 8);
          strcpy(v35 + 12, "GNU");
          v36 = v4[40];
          v37 = *(_DWORD **)(v36 + 592);
          if ( v37 )
          {
            v38 = v29 - 1;
            v39 = 16;
            v40 = -v29;
            do
            {
              v41 = v39 + 8;
              (*(void (__fastcall **)(_DWORD, char *))(v4[1] + 84))(v37[1], &v35[v39]);
              (*(void (__fastcall **)(_DWORD, char *))(v4[1] + 84))(v37[2], &v35[v39 + 4]);
              if ( v37[4] != 4 )
                sub_2A6BF0((int)"elf-properties.c", 492, (int)"_bfd_elf_link_setup_gnu_properties");
              v42 = v37[2];
              if ( v42 == 4 )
              {
                (*(void (__fastcall **)(_DWORD, char *))(v4[1] + 84))(v37[3], &v35[v41]);
                v42 = v37[2];
              }
              else if ( v42 == 8 )
              {
                (*(void (__fastcall **)(_DWORD, _DWORD, char *))(v4[1] + 72))(v37[3], 0, &v35[v41]);
                v42 = v37[2];
              }
              else if ( v42 )
              {
                sub_2A6BF0((int)"elf-properties.c", 473, (int)"_bfd_elf_link_setup_gnu_properties");
              }
              v37 = (_DWORD *)*v37;
              v39 = v40 & (v38 + v41 + v42);
            }
            while ( v37 );
            v36 = v4[40];
          }
          v47 = *(_BYTE *)(v36 + 2341);
          *(_DWORD *)(*((_DWORD *)v51 + 35) + 48) = v35;
          if ( (v47 & 0x20) != 0 )
            v3[23] = 0;
          return v4;
        }
      }
      else
      {
        v31 = *(_DWORD **)(v4[40] + 592);
        if ( !v31 )
        {
          v4 = 0;
          *((_DWORD *)v51 + 15) = &off_470950;
          return v4;
        }
      }
      v32 = 16;
      do
      {
        v33 = v31[2];
        v31 = (_DWORD *)*v31;
        v32 = (v29 + 7 + v33 + v32) & -v29;
      }
      while ( v31 );
      v34 = v32 - 16;
      goto LABEL_56;
    }
    v4 = (_DWORD *)v4[39];
    a2 = 1;
  }
  while ( v4 );
LABEL_13:
  if ( !a2 )
    return 0;
  v9 = (_DWORD *)v3[14];
  if ( !v9 )
    return 0;
LABEL_15:
  while ( 2 )
  {
    if ( v9 == v4 )
      goto LABEL_44;
    v10 = (v9[10] >> 5) & 0x40;
    if ( v10 )
      goto LABEL_44;
    v11 = v9[1];
    v53[0] = 0;
    if ( *(_DWORD *)(v11 + 4) != 5 )
    {
      if ( v4 )
      {
        v12 = v4[40];
        v13 = *(_DWORD **)(v12 + 592);
        v14 = (_DWORD *)(v12 + 592);
        if ( v13 )
        {
          v15 = (int **)v53;
          v16 = 0;
          goto LABEL_21;
        }
      }
      goto LABEL_44;
    }
    v44 = v9[40];
    v10 = *(_DWORD *)(v44 + 592);
    if ( v10 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(v11 + 444) + 8) == v50 )
        v15 = (int **)(v44 + 592);
      else
        v15 = (int **)v53;
      if ( v4 )
      {
        v45 = v4[40];
        v16 = *v15;
        v13 = *(_DWORD **)(v45 + 592);
        v14 = (_DWORD *)(v45 + 592);
        if ( v13 )
          goto LABEL_21;
        if ( v16 )
        {
          do
          {
LABEL_35:
            if ( sub_2F07F4((int)v3, (int)v4, 0, v16 + 1) )
            {
              v23 = v16[1];
              if ( v23 == 2 )
                *(_BYTE *)(v4[40] + 2341) |= 0x20u;
              v24 = sub_2F0894((int)v4, v23, v16[2]);
              if ( v24[3] )
                sub_2A6BF0((int)"elf-properties.c", 301, (int)"elf_merge_gnu_property_list");
              v25 = v16[2];
              v26 = v16[3];
              v27 = v16[4];
              *v24 = v16[1];
              v24[1] = v25;
              v24[2] = v26;
              v24[3] = v27;
            }
            v16 = (int *)*v16;
          }
          while ( v16 );
          goto LABEL_41;
        }
      }
      goto LABEL_42;
    }
    if ( v4 )
    {
      v49 = v4[40];
      v13 = *(_DWORD **)(v49 + 592);
      v14 = (_DWORD *)(v49 + 592);
      if ( v13 )
      {
        v16 = *(int **)(v44 + 592);
        v15 = (int **)v53;
        while ( 1 )
        {
LABEL_21:
          v17 = v13[1];
          if ( v16 )
          {
            v18 = v16[1];
            if ( v17 == v18 )
            {
              v19 = v16;
              v16 = (int *)v15;
LABEL_64:
              v43 = *v19++;
              *v16 = v43;
              goto LABEL_28;
            }
            if ( v17 >= v18 )
            {
              do
              {
                v19 = (int *)*v16;
                if ( !*v16 )
                  goto LABEL_28;
                v20 = v19[1];
                if ( v17 == v20 )
                  goto LABEL_64;
                v16 = (int *)*v16;
              }
              while ( v17 >= v20 );
            }
          }
          v19 = 0;
LABEL_28:
          sub_2F07F4((int)v3, (int)v4, v13 + 1, v19);
          v21 = v13[4];
          v22 = v21 == 3;
          if ( v21 == 3 )
            v21 = *v13;
          else
            v14 = v13;
          if ( v22 )
            *v14 = v21;
          v13 = (_DWORD *)*v13;
          v16 = *v15;
          if ( !v13 )
          {
            if ( v16 )
              goto LABEL_35;
LABEL_41:
            if ( v10 )
            {
LABEL_42:
              v28 = sub_2AD7AC((int)v9, ".note.gnu.property");
              if ( v28 )
                *((_DWORD *)v28 + 15) = &off_470950;
            }
            break;
          }
        }
      }
    }
LABEL_44:
    v9 = (_DWORD *)v9[39];
    if ( v9 )
      continue;
    break;
  }
  if ( v4 )
    goto LABEL_46;
  return 0;
}
