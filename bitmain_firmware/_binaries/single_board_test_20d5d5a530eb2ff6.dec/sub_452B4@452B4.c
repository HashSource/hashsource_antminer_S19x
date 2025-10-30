int __fastcall sub_452B4(int a1)
{
  int v2; // r2
  int v3; // r6
  int v4; // r4
  int v5; // r3
  char v8[52]; // [sp+0h] [bp-34h] BYREF

  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : ============matrix state==============\n\n", "dump_matrix_state");
  strcpy(byte_6434DC, "============matrix state==============\n");
  sub_3CCE0((int)byte_6434DC);
  v2 = dword_705300;
  if ( *(int *)(dword_705300 + 8) > 0 )
  {
    v3 = 0;
    do
    {
      if ( *(int *)(v2 + 12) > 0 )
      {
        v4 = 0;
        do
        {
          while ( 1 )
          {
            sub_1E938(v8, 0x30u);
            printf("%s ", v8);
            printf(
              "%s : %4d \n",
              "dump_matrix_state",
              *(unsigned __int8 *)(a1 + v4 + *(_DWORD *)(dword_705300 + 12) * v3));
            snprintf(byte_6435DC, 0x100u, "%4d ", *(unsigned __int8 *)(a1 + v4 + *(_DWORD *)(dword_705300 + 12) * v3));
            sub_3CCE0((int)byte_6435DC);
            v2 = dword_705300;
            v5 = *(_DWORD *)(dword_705300 + 12);
            if ( v5 - 1 == v4++ )
              break;
            if ( v5 <= v4 )
              goto LABEL_10;
          }
          sub_1E938(v8, 0x30u);
          printf("%s ", v8);
          printf("%s : \n\n", "dump_matrix_state");
          word_6436DC = 10;
          sub_3CCE0((int)&word_6436DC);
          v2 = dword_705300;
        }
        while ( *(_DWORD *)(dword_705300 + 12) > v4 );
      }
LABEL_10:
      ++v3;
    }
    while ( *(_DWORD *)(v2 + 8) > v3 );
  }
  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : ============matrix state==============\n\n", "dump_matrix_state");
  strcpy(byte_6437DC, "============matrix state==============\n");
  return sub_3CCE0((int)byte_6437DC);
}
