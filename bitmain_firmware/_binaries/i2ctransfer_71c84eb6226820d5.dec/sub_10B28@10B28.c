int __fastcall sub_10B28(int result, int a2, unsigned int a3)
{
  FILE **v3; // r3
  unsigned __int16 *v6; // r4
  int v7; // r8
  FILE *v8; // r5
  int v9; // r1
  int v10; // r6
  const char *v11; // r2
  int v12; // r10
  int v13; // r3
  int v14; // r2
  int v15; // [sp+Ch] [bp-8h]

  if ( (a3 & 1) != 0 )
    LOWORD(v3) = 12464;
  else
    LOWORD(v3) = 12476;
  HIWORD(v3) = 2;
  v6 = (unsigned __int16 *)result;
  v7 = 0;
  v8 = *v3;
  v15 = (a3 >> 2) & 1;
  while ( v7 != a2 )
  {
    v9 = v6[1] & 1;
    if ( v9 )
      v10 = (a3 >> 1) & 1;
    else
      v10 = v15;
    if ( (a3 & 8) != 0 )
    {
      v11 = "read";
      if ( !v9 )
        v11 = "write";
      result = fprintf(v8, "msg %u: addr 0x%02x, %s, len %u", v7, *v6, v11, v6[2]);
    }
    if ( !v6[2] )
      v10 = 0;
    if ( v10 )
    {
      if ( (a3 & 8) != 0 )
        fwrite(", buf ", 1u, 6u, v8);
      v12 = 0;
      while ( 1 )
      {
        v13 = (unsigned __int16)v12++;
        v14 = *(unsigned __int8 *)(*((_DWORD *)v6 + 2) + v13);
        if ( v13 >= v6[2] - 1 )
          break;
        fprintf(v8, "0x%02x ", v14);
      }
      result = fprintf(v8, "0x%02x\n", v14);
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
