int __fastcall sub_10B30(int result, int a2, unsigned int a3)
{
  FILE **v3; // r3
  unsigned __int16 *v6; // r4
  int v7; // r7
  FILE *v8; // r6
  int v9; // r2
  int v10; // r5
  const char *v11; // r2
  int i; // r3
  int v13; // r12
  int v14; // r5
  bool v15; // cc
  int v16; // r3
  int v17; // [sp+Ch] [bp-8h]

  if ( (a3 & 1) != 0 )
    LOWORD(v3) = 11152;
  else
    LOWORD(v3) = 11164;
  HIWORD(v3) = 2;
  v6 = (unsigned __int16 *)result;
  v7 = 0;
  v8 = *v3;
  v17 = (a3 >> 2) & 1;
  while ( v7 != a2 )
  {
    v9 = v6[1] & 1;
    if ( v9 )
      v10 = (a3 >> 1) & 1;
    else
      v10 = v17;
    if ( (a3 & 8) != 0 )
    {
      if ( v9 )
        v11 = "read";
      else
        v11 = "write";
      result = fprintf(v8, "msg %u: addr 0x%02x, %s, len %u", v7, *v6, v11, v6[2]);
    }
    if ( !v6[2] )
      v10 = 0;
    if ( v10 )
    {
      if ( (a3 & 8) != 0 )
        fwrite(", buf ", 1u, 6u, v8);
      for ( i = 0; ; i = v14 )
      {
        v13 = (unsigned __int16)i;
        v14 = i + 1;
        v15 = (unsigned __int16)i < v6[2] - 1;
        v16 = *((_DWORD *)v6 + 2);
        if ( !v15 )
          break;
        fprintf(v8, "0x%02x ", *(unsigned __int8 *)(v16 + v13));
      }
      result = fprintf(v8, "0x%02x\n", *(unsigned __int8 *)(v16 + v13));
    }
    else if ( (a3 & 8) != 0 )
    {
      result = fputc(10, v8);
    }
    ++v7;
    v6 += 6;
  }
  return result;
}
