int __fastcall sub_2FB9EC(int a1, int *a2)
{
  int *v2; // r3
  int v3; // r10
  unsigned int *v4; // r3
  int *v5; // r9
  int *v7; // r5
  unsigned int *v8; // r11
  int v9; // r4
  __int64 v10; // r0
  unsigned int v11; // r2
  int v12; // r1

  v2 = *(int **)(a1 + 160);
  v3 = *v2;
  v4 = (unsigned int *)v2[1];
  dword_48FD30 = (int)".text";
  dword_48FDEC = 4096;
  if ( v3 > 0 )
  {
    v5 = &a2[v3];
    v7 = a2;
    v8 = v4;
    do
    {
      v9 = sub_2ACBF4(a1, 24);
      if ( !v9 )
        sub_2A6BBC("plugin.c", 500);
      v10 = *v8;
      v11 = v8[2];
      *v7++ = v9;
      *(_DWORD *)v9 = a1;
      *(_QWORD *)(v9 + 4) = v10;
      switch ( v11 )
      {
        case 0u:
        case 2u:
        case 4u:
          v12 = 2;
          break;
        case 1u:
        case 3u:
          v12 = 130;
          break;
        default:
          sub_2A6BBC("plugin.c", 477);
          v11 = v8[2];
          v12 = 0;
          break;
      }
      *(_DWORD *)(v9 + 12) = v12;
      switch ( v11 )
      {
        case 0u:
        case 1u:
          *(_DWORD *)(v9 + 16) = &dword_48FD30;
          break;
        case 2u:
        case 3u:
          *(_DWORD *)(v9 + 16) = &off_4708A8;
          break;
        case 4u:
          *(_DWORD *)(v9 + 16) = &unk_48FDD8;
          break;
        default:
          sub_2A6BBC("plugin.c", 521);
          break;
      }
      *(_DWORD *)(v9 + 20) = v8;
      v8 += 8;
    }
    while ( v5 != v7 );
  }
  return v3;
}
