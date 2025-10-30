int __fastcall sub_87510(int a1, int *a2, int *a3, unsigned int *a4, int *a5)
{
  int v5; // r5
  unsigned int v6; // r4
  int v7; // r5
  int v8; // r6
  int v9; // r7
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r6
  int *v19; // [sp+4h] [bp-10h]
  int *v20; // [sp+8h] [bp-Ch]
  unsigned int *v21; // [sp+Ch] [bp-8h]

  v5 = *(_DWORD *)(a1 + 24);
  v6 = (unsigned int)&unk_30F000 & v5;
  if ( ((unsigned int)&unk_30F000 & v5) != 0 )
  {
    v6 = 0;
    v7 = 24;
    v8 = 0;
    v9 = 0;
    goto LABEL_5;
  }
  if ( (v5 & 0xB0000) != 0 )
  {
    v7 = 16;
    v8 = 0;
    v9 = 0;
LABEL_5:
    *a2 = v9;
    *a3 = v8;
    *a4 = v6;
    *a5 = v7;
    return 1;
  }
  v7 = *(_DWORD *)(a1 + 28) & 0x40;
  if ( !v7 )
  {
    v21 = a4;
    v20 = a3;
    v19 = a2;
    v12 = sub_873C4(a1);
    v13 = sub_EAAB4(v12);
    v14 = sub_D99DC(v13);
    if ( v14 )
    {
      v9 = sub_D8C78(v14);
      a2 = v19;
      a3 = v20;
      a4 = v21;
      if ( *(_DWORD *)(a1 + 24) == 32 )
      {
        v6 = 0;
        v8 = 0;
        goto LABEL_5;
      }
      v15 = sub_87390(a1);
      v16 = sub_EAAB4(v15);
      v17 = sub_D99BC(v16);
      v18 = v17;
      if ( v17 )
      {
        if ( (sub_D8928(v17) & 0xF0007) == 2 )
        {
          v7 = sub_D8940(v18);
          v6 = sub_D8900(v18);
          v8 = 1;
          a2 = v19;
          a3 = v20;
          a4 = v21;
          goto LABEL_5;
        }
      }
    }
  }
  return 0;
}
