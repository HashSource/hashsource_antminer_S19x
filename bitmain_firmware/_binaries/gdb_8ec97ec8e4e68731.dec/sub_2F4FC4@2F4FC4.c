int __fastcall sub_2F4FC4(int a1, int a2)
{
  int v2; // r4
  _DWORD *v3; // r6
  _BOOL4 v4; // r2
  int v5; // r7
  int v8; // r0
  signed int v9; // r0
  _DWORD *v10; // r8
  char *v11; // r2
  unsigned int v12; // r7
  int v13; // r11
  int v14; // r10
  int v15; // r9
  int v16; // r3
  void *v17; // r0
  int v18; // r3
  int v19; // r4
  int (__fastcall *v20)(int); // r3
  char v21; // r0
  unsigned int v22; // [sp+14h] [bp-18h]
  int v23; // [sp+18h] [bp-14h]
  int src; // [sp+20h] [bp-Ch] BYREF
  int v26; // [sp+24h] [bp-8h] BYREF

  v2 = *(_DWORD *)(a2 + 28);
  v3 = *(_DWORD **)(v2 + 168);
  v4 = (*(_BYTE *)(a2 + 3) & 0x60) == 0;
  if ( !v3 )
    v4 = 1;
  if ( v4 )
    return 1;
  if ( (*(_BYTE *)(a2 + 3) & 0x60) != 0x40 )
  {
    if ( *(_DWORD *)(v2 + 192) && (v8 = *(_DWORD *)(v2 + 172), v8 == *(_DWORD *)(v2 + 184)) )
      v9 = 8 * v8 + 12;
    else
      v9 = 8;
    v10 = sub_2AB368(v9);
    if ( !v10 )
      return 0;
    v11 = sub_2AD7AC(a1, ".eh_frame");
    if ( v11 )
    {
      *v10 = 0;
      v10[1] = 0;
      *(_BYTE *)v10 = 1;
      *((_BYTE *)v10 + 1) = (*(int (__fastcall **)(int, int, char *, _DWORD, _DWORD *, int, int *))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444)
                                                                                                  + 312))(
                              a1,
                              a2,
                              v11,
                              0,
                              v3,
                              4,
                              &src);
      if ( *(_DWORD *)(v2 + 192) && *(_DWORD *)(v2 + 172) == *(_DWORD *)(v2 + 184) )
      {
        *((_BYTE *)v10 + 2) = 3;
        *((_BYTE *)v10 + 3) = 59;
      }
      else
      {
        *((_BYTE *)v10 + 2) = -1;
        *((_BYTE *)v10 + 3) = -1;
      }
      (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)(a1 + 4) + 48))(src, v10 + 1);
      if ( *((unsigned __int8 *)v10 + 2) == 255 )
        goto LABEL_39;
      v12 = 0;
      (*(void (__fastcall **)(_DWORD, _DWORD *))(*(_DWORD *)(a1 + 4) + 48))(*(_DWORD *)(v2 + 184), v10 + 2);
      qsort(*(void **)(v2 + 192), *(_DWORD *)(v2 + 184), 0xCu, (__compar_fn_t)sub_2F1AB0);
      v23 = 0;
      while ( v12 < *(_DWORD *)(v2 + 184) )
      {
        while ( 1 )
        {
          v13 = 3 * v12;
          v14 = 12 * v12;
          v15 = 2 * (v12 + 1);
          v22 = v12 + 1;
          (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)(a1 + 4) + 48))(
            *(_DWORD *)(*(_DWORD *)(v2 + 192) + 12 * v12) - *(_DWORD *)(v3[15] + 28),
            &v10[v15 + 1]);
          (*(void (__fastcall **)(int, _DWORD *))(*(_DWORD *)(a1 + 4) + 48))(
            *(_DWORD *)(*(_DWORD *)(v2 + 192) + 12 * v12 + 8) - *(_DWORD *)(v3[15] + 28),
            &v10[v15 + 2]);
          if ( !v12 )
            break;
          ++v12;
          v16 = v23;
          if ( *(_DWORD *)(*(_DWORD *)(v2 + 192) + 4 * v13) < (unsigned int)(*(_DWORD *)(*(_DWORD *)(v2 + 192) + v14 - 12)
                                                                           + *(_DWORD *)(*(_DWORD *)(v2 + 192)
                                                                                       + v14
                                                                                       - 12
                                                                                       + 4)) )
            v16 = 1;
          v23 = v16;
          if ( v22 >= *(_DWORD *)(v2 + 184) )
            goto LABEL_38;
        }
        v12 = 1;
      }
LABEL_38:
      if ( v23 )
      {
        (*(void (**)(const char *, ...))(*(_DWORD *)(a2 + 24) + 44))("%P: .eh_frame_hdr refers to overlapping FDEs.\n");
        v5 = 0;
        ((void (__fastcall *)(int))loc_2A6C48)(17);
      }
      else
      {
LABEL_39:
        v5 = 1;
      }
      if ( !sub_2ADDE8(a1, (_DWORD *)v3[15], v10, v3[14], (unsigned int)v3[14], v3[9]) )
        v5 = 0;
      free(v10);
      v17 = *(void **)(v2 + 192);
      if ( v17 )
        free(v17);
    }
    else
    {
      v5 = 0;
      free(v10);
    }
    return v5;
  }
  if ( v3[9] != 8 )
    sub_2A6BF0((int)"elf-eh-frame.c", 2359, (int)"write_compact_eh_frame_hdr");
  v18 = *(_DWORD *)(a1 + 4);
  v26 = 0;
  src = 2;
  v19 = *(_DWORD *)(v18 + 444);
  v20 = *(int (__fastcall **)(int))(v19 + 444);
  if ( v20 )
  {
    v21 = v20(a2);
  }
  else
  {
    sub_2A6BBC("elf-eh-frame.c", 2367);
    v21 = (*(int (__fastcall **)(int))(v19 + 444))(a2);
  }
  BYTE1(src) = v21;
  (*(void (__fastcall **)(unsigned int, int *))(*(_DWORD *)(a1 + 4) + 48))(
    (unsigned int)(*(_DWORD *)(v3[15] + 36) - 8) >> 3,
    &v26);
  return sub_2ADDE8(a1, (_DWORD *)v3[15], &src, v3[14], (unsigned int)v3[14], v3[9]);
}
