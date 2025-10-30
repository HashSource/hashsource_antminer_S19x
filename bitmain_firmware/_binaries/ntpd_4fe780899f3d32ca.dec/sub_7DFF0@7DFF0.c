int __fastcall sub_7DFF0(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r7
  int v6; // r12
  int v7; // r4
  int v8; // r0
  int v9; // r1
  int result; // r0
  unsigned int v11; // r12
  int v12; // r2
  const char *v13; // r2

  v5 = *(_DWORD *)(a1 + 68);
  v6 = *(_DWORD *)(a1 + 100);
  v7 = v5;
  while ( *(unsigned __int16 *)(v7 + 2) != a2 )
  {
    --v6;
    v7 += 64;
    if ( v6 <= 0 )
    {
      if ( a2 <= 0x7F && (dword_9F184[a2] & 0x30000) != 0 )
      {
        v8 = *(unsigned __int16 *)(a1 + 96);
        if ( v8 != 0x8000 )
        {
          v9 = *(_DWORD *)(a1 + 20);
          *a3 = v5 + (v8 << 6);
          *(_DWORD *)(a1 + 20) = v9 - 1;
          *a4 = 1;
          return 0;
        }
      }
      v12 = *(_DWORD *)(a1 + 12) & 4;
LABEL_10:
      if ( !v12 )
        return -1;
      fprintf(stderr, off_B84C8[0], *(_DWORD *)(a1 + 24), a2);
LABEL_20:
      (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
      exit(1);
    }
  }
  v11 = *(_DWORD *)(v7 + 16);
  result = v11 & 0x280000;
  if ( (v11 & 0x280000) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 12) & 4;
    if ( (_UNKNOWN *)v11 != &loc_80100 || !*(_DWORD *)(v7 + 52) )
      goto LABEL_10;
    if ( v12 )
    {
      fprintf(stderr, off_B84C0[0], *(_DWORD *)(a1 + 24));
      v13 = *(const char **)(v7 + 44);
      if ( v13 )
        fprintf(stderr, " -- %s", v13);
      fputc(10, stderr);
      goto LABEL_20;
    }
    return -1;
  }
  else
  {
    *a3 = v7;
    *a4 = 1;
  }
  return result;
}
