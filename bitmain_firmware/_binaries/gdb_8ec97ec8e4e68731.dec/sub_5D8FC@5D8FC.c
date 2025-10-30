int __fastcall sub_5D8FC(int a1, int a2, int a3, int a4)
{
  int v7; // r11
  int i; // r0
  int v9; // r0
  char *v10; // r3
  int v11; // r4
  unsigned int v12; // r3
  unsigned int v13; // r3
  unsigned int v14; // r2
  int v15; // r6
  int v19; // [sp+14h] [bp-40h]
  _DWORD v20[2]; // [sp+18h] [bp-3Ch] BYREF
  void *ptr; // [sp+20h] [bp-34h]
  const char *v22; // [sp+24h] [bp-30h]
  _DWORD v23[2]; // [sp+28h] [bp-2Ch] BYREF
  void *v24; // [sp+30h] [bp-24h]
  char *v25; // [sp+34h] [bp-20h]
  _BYTE v26[28]; // [sp+38h] [bp-1Ch] BYREF

  v19 = *(_DWORD *)sub_242FDC(a1);
  v7 = sub_C32A8(a3, 0);
  sub_2578AC(v19, 1);
  if ( v7 )
  {
    while ( 1 )
    {
      for ( i = sub_C28A8(v7, v26); ; i = sub_C28E4(v26) )
      {
        v11 = i;
        if ( !i )
          break;
        v12 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(i + 32) >> 3));
        if ( v12 >= 2 && (v12 <= 7 || v12 == 14) )
        {
          v13 = *(unsigned __int8 *)(i + 33);
          if ( a1 == 2 )
            goto LABEL_27;
          if ( a1 )
            v14 = (v13 >> 1) & 1;
          else
            v14 = v13 ^ 2;
          if ( !a1 )
            v14 = (v14 >> 1) & 1;
          if ( v14 )
          {
LABEL_27:
            if ( (v13 & 2) == 0 )
            {
              v15 = i;
              goto LABEL_30;
            }
            sub_21D6B0(v23, *(_DWORD *)i, v7, 1, 0);
            v15 = v23[0];
            if ( !v23[0] )
            {
              v9 = sub_94700(
                     "mi/mi-cmd-stack.c",
                     637,
                     "%s: Assertion `%s' failed.",
                     "void list_args_or_locals(what_to_list, print_values, frame_info*, int)",
                     "sym2 != NULL");
LABEL_35:
              sub_20CCE8(v9, a3, v20);
              goto LABEL_6;
            }
LABEL_30:
            v20[1] = 0;
            v20[0] = v15;
            v22 = "no";
            v23[1] = 0;
            v23[0] = v15;
            v25 = "no";
            ptr = 0;
            v24 = 0;
            if ( a2 != 1 )
            {
              if ( a2 != 2 )
              {
                v10 = "no";
                goto LABEL_7;
              }
              if ( (unsigned int)**(unsigned __int8 **)(sub_171258(*(_DWORD *)(v15 + 24)) + 24) - 2 <= 2 )
                goto LABEL_6;
            }
            v9 = v15;
            if ( (*(_BYTE *)(v11 + 33) & 2) == 0 )
              goto LABEL_35;
            sub_20CD8C(v15, a3, v20, v23);
LABEL_6:
            v10 = (char *)v22;
LABEL_7:
            if ( v10 != "only" )
              sub_5D458((int)v20, a1, a2, a4);
            if ( v25 != "no" )
              sub_5D458((int)v23, a1, a2, a4);
            if ( ptr )
              free(ptr);
            if ( v24 )
              free(v24);
            continue;
          }
        }
      }
      if ( !*(_DWORD *)(v7 + 8) )
      {
        v7 = *(_DWORD *)(v7 + 12);
        if ( v7 )
          continue;
      }
      return sub_25734C(v19, 1);
    }
  }
  return sub_25734C(v19, 1);
}
