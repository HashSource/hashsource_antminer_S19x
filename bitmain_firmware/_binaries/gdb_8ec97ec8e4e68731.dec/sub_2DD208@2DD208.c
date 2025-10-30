int __fastcall sub_2DD208(int a1, int a2, int a3)
{
  int v3; // r3
  int i; // r9
  int v6; // r10
  _DWORD *v7; // r7
  int v8; // r5
  int v9; // r8
  unsigned int v10; // r0
  unsigned int v11; // r6
  int v12; // r4
  int v13; // r11
  int v14; // r4
  char *v15; // r6
  char *v16; // r11
  char *v17; // r0
  void *ptr; // [sp+14h] [bp-18h]
  char *v21; // [sp+1Ch] [bp-10h]
  __int16 v22[4]; // [sp+24h] [bp-8h] BYREF

  v3 = *(unsigned __int8 *)(a3 + 12);
  for ( i = a3; v3 == 6; v3 = *(unsigned __int8 *)(i + 12) )
    i = *(_DWORD *)(i + 20);
  switch ( v3 )
  {
    case 1:
    case 2:
      v6 = *(_DWORD *)(i + 20);
      if ( v6 && (*(_DWORD *)(v6 + 40) & 0x800) != 0 && *(unsigned __int8 *)(*(_DWORD *)(v6 + 160) + 2340) >> 7 )
        goto LABEL_5;
      return 0;
    case 3:
    case 4:
      v6 = *(_DWORD *)(*(_DWORD *)(i + 20) + 148);
      if ( !v6 )
        goto LABEL_38;
      goto LABEL_5;
    case 5:
      v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(i + 20) + 4) + 148);
      if ( v6 )
        goto LABEL_5;
      goto LABEL_38;
    default:
LABEL_38:
      v6 = 0;
      sub_2A6BBC("elflink.c", 9413);
LABEL_5:
      v7 = *(_DWORD **)(*(_DWORD *)a1 + 212);
      if ( !v7 )
        return 0;
      break;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = v7[1];
      if ( v8 != v6 && (*(_DWORD *)(v8 + 40) & 0x800) != 0 )
      {
        v9 = *(_DWORD *)(v8 + 160);
        if ( *(_DWORD *)(v9 + 2328) )
        {
          v10 = sub_347418(*(_DWORD *)(v9 + 264), *(unsigned __int8 *)(*(_DWORD *)a2 + 5));
          v11 = v10;
          if ( (*(_BYTE *)(v9 + 2341) & 0x40) != 0 )
            v12 = 0;
          else
            v12 = *(_DWORD *)(v9 + 272);
          if ( (*(_BYTE *)(v9 + 2341) & 0x40) == 0 )
            v11 = v10 - v12;
          if ( v11 )
            break;
        }
      }
      v7 = (_DWORD *)*v7;
      if ( !v7 )
        return 0;
    }
    v21 = (char *)sub_2CDA08(v8, v9 + 240, v11, v12, 0, 0, 0);
    if ( !v21 )
      return 0;
    v13 = *(_DWORD *)(v8 + 160);
    ptr = sub_2AB368(*(_DWORD *)(v13 + 376));
    if ( !ptr )
      goto LABEL_41;
    if ( sub_2A8A04(v8, *(_QWORD *)(v13 + 368), 0)
      || sub_2A87D8((int)ptr, *(_DWORD *)(v13 + 376), v8) != *(_DWORD *)(v13 + 376) )
    {
      break;
    }
    v14 = (int)ptr + 2 * v12;
    v15 = &v21[20 * v11];
    if ( v21 < v15 )
    {
      v16 = v21;
      while ( 1 )
      {
        if ( (unsigned __int8)v16[12] >> 4 )
        {
          if ( *((_DWORD *)v16 + 4) )
          {
            v17 = sub_2CD844(v8, *(_DWORD *)(v9 + 268), *((_DWORD *)v16 + 2));
            if ( !strcmp(v17, *(const char **)(i + 4)) )
            {
              sub_2CD6C0(v8, v14, v22);
              if ( (v22[0] & 0x8000) == 0 && ((*(_BYTE *)(i + 51) & 2) == 0 || (*(_BYTE *)(i + 52) & 8) == 0) )
                sub_2A6BF0((int)"elflink.c", 9505, (int)"elf_link_check_versioned_symbol");
              if ( (v22[0] & 0x7FFFu) - 1 <= 1 )
                break;
            }
          }
        }
        v16 += 20;
        v14 += 2;
        if ( v15 <= v16 )
          goto LABEL_31;
      }
      free(ptr);
      free(v21);
      return 1;
    }
LABEL_31:
    free(ptr);
    free(v21);
    v7 = (_DWORD *)*v7;
    if ( !v7 )
      return 0;
  }
  free(ptr);
LABEL_41:
  free(v21);
  return 0;
}
