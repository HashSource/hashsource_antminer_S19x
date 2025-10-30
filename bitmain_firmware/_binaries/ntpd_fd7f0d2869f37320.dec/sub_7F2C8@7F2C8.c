int __fastcall sub_7F2C8(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r7
  int v6; // r0
  int v7; // r4
  int result; // r0
  int v9; // r12
  const char *v10; // r2
  int v11; // r0

  v5 = *(_DWORD *)(a1 + 68);
  v6 = *(_DWORD *)(a1 + 100);
  v7 = v5;
  do
  {
    if ( *(unsigned __int16 *)(v7 + 2) == a2 )
    {
      v9 = *(_DWORD *)(v7 + 16);
      result = v9 & 0x280000;
      if ( (v9 & 0x280000) == 0 )
      {
        *a3 = v7;
        *a4 = 1;
        return result;
      }
      if ( v9 == 524544 && *(_DWORD *)(v7 + 52) )
      {
        if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
          return -1;
        fprintf(stderr, off_B94C4, *(_DWORD *)(a1 + 24));
        v10 = *(const char **)(v7 + 44);
        if ( v10 )
          fprintf(stderr, " -- %s", v10);
        fputc(10, stderr);
        goto LABEL_19;
      }
LABEL_6:
      if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
        return -1;
      fprintf(stderr, off_B94CC, *(_DWORD *)(a1 + 24), a2);
LABEL_19:
      (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
      exit(1);
    }
    --v6;
    v7 += 64;
  }
  while ( v6 > 0 );
  if ( (unsigned __int8)a2 > 0x7Fu )
    goto LABEL_6;
  if ( (dword_A0784[(unsigned __int8)a2] & 0x30000) == 0 )
    goto LABEL_6;
  v11 = *(unsigned __int16 *)(a1 + 96);
  if ( v11 == 0x8000 )
    goto LABEL_6;
  *a3 = v5 + (v11 << 6);
  --*(_DWORD *)(a1 + 20);
  *a4 = 1;
  return 0;
}
