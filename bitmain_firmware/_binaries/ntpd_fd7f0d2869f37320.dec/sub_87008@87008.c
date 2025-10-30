int __fastcall sub_87008(int a1, char *src, int *a3)
{
  unsigned __int8 *v3; // r7
  unsigned __int8 *v4; // r1
  unsigned __int8 *v5; // r10
  int v6; // r5
  int v7; // r3
  int v8; // t1
  unsigned __int8 *v9; // r1
  int v10; // r9
  _DWORD *v11; // r4
  int v12; // r11
  int v13; // r6
  int v14; // r10
  unsigned __int8 *v15; // r1
  unsigned int v16; // r0
  int v18; // r2
  unsigned __int8 *v19; // r10
  size_t v20; // r9
  const char *v21; // r4
  int v22; // r8
  int v23; // r6
  unsigned __int8 *v24; // r1
  unsigned __int8 *v25; // r1
  int result; // r0
  unsigned __int8 *v27; // r1
  int v28; // r11
  _DWORD *v29; // r4
  int v30; // r3
  int v31; // r4
  int v32; // r2
  int v33; // r3
  int v35; // [sp+10h] [bp-9Ch]
  unsigned __int8 *v37; // [sp+1Ch] [bp-90h]
  _BYTE dest[136]; // [sp+24h] [bp-88h] BYREF

  v3 = (unsigned __int8 *)src;
  v4 = (unsigned __int8 *)(src + 128);
  v5 = v3;
  while ( 1 )
  {
    v6 = v5 - v3;
    v8 = *v5++;
    v7 = v8;
    if ( !v8 )
      break;
    if ( v7 == 61 )
    {
      v9 = v3;
      v3 = dest;
      memcpy(dest, v9, v6);
      dest[v6] = 0;
      goto LABEL_5;
    }
    if ( v5 == v4 )
      goto LABEL_31;
  }
  v5 = 0;
LABEL_5:
  if ( v6 <= 1 )
  {
LABEL_31:
    if ( (*(_DWORD *)(a1 + 12) & 4) == 0 )
      return -1;
    v31 = a1;
    fprintf(stderr, off_B94E0, *(_DWORD *)(a1 + 28), v3);
    goto LABEL_50;
  }
  v37 = v5;
  v10 = 0;
  v35 = 0;
  v11 = *(_DWORD **)(a1 + 68);
  v12 = 0;
  v13 = *(_DWORD *)(a1 + 100);
  v14 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v15 = (unsigned __int8 *)v11[13];
      if ( v15 )
      {
        v16 = v11[4];
        if ( (_UNKNOWN *)v16 == &loc_80100 || (v16 & 0x280000) == 0 )
        {
          if ( !sub_86F54(v3, v15, v6) )
          {
            if ( !*(_BYTE *)(v11[13] + v6) )
            {
              v28 = v14;
              v19 = v37;
              goto LABEL_40;
            }
            goto LABEL_15;
          }
          v27 = (unsigned __int8 *)v11[14];
          if ( v27 )
          {
            if ( !sub_86F54(v3, v27, v6) )
              break;
          }
        }
      }
      ++v14;
      v11 += 16;
      if ( v13 <= v14 )
        goto LABEL_16;
    }
    if ( !*(_BYTE *)(v11[14] + v6) )
      break;
    v35 = 1;
LABEL_15:
    v12 = v14++;
    ++v10;
    v11 += 16;
    if ( v13 <= v14 )
    {
LABEL_16:
      v18 = v12;
      v19 = v37;
      if ( v10 )
      {
        if ( v10 == 1 )
          goto LABEL_41;
        if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
        {
          fprintf(stderr, off_B94A8, *(_DWORD *)(a1 + 24), v3, v10);
          if ( v10 <= 4 )
          {
            v20 = strlen((const char *)v3);
            if ( (*(_DWORD *)(a1 + 12) & 3) != 0 )
              v21 = "--";
            else
              v21 = byte_99528;
            v22 = 0;
            v23 = *(_DWORD *)(a1 + 68);
            fputs(off_B94A4, stderr);
            do
            {
              v24 = *(unsigned __int8 **)(v23 + 52);
              if ( v24 )
              {
                if ( sub_86F54(v3, v24, v20) )
                {
                  v25 = *(unsigned __int8 **)(v23 + 56);
                  if ( v25 )
                  {
                    if ( !sub_86F54(v3, v25, v20) )
                      fprintf(stderr, "  %s%s\n", v21, *(_DWORD *)(v23 + 56));
                  }
                }
                else
                {
                  fprintf(stderr, "  %s%s\n", v21, *(_DWORD *)(v23 + 52));
                }
              }
              ++v22;
              v23 += 64;
            }
            while ( v22 < *(_DWORD *)(a1 + 100) );
          }
          goto LABEL_46;
        }
        return -1;
      }
      v30 = *(_DWORD *)(a1 + 12);
      if ( !v37 && (v30 & 3) == 0 )
      {
        v32 = *(unsigned __int16 *)(a1 + 98);
        if ( v32 != 0x8000 )
        {
          v33 = *(_DWORD *)(a1 + 68) + (v32 << 6);
          a3[1] = (int)v3;
          a3[3] = 3;
          *a3 = v33;
          return 0;
        }
      }
      if ( (v30 & 4) == 0 )
        return -1;
      v31 = a1;
      fprintf(stderr, off_B94D0, *(_DWORD *)(a1 + 24), v3);
LABEL_50:
      (*(void (__fastcall **)(int, int))(v31 + 84))(v31, 1);
      exit(1);
    }
  }
  v28 = v14;
  v19 = v37;
  v35 = 1;
LABEL_40:
  v18 = v28;
LABEL_41:
  v29 = (_DWORD *)(*(_DWORD *)(a1 + 68) + (v18 << 6));
  if ( (v29[4] & 0x280000) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    {
      fprintf(stderr, off_B94C4, *(_DWORD *)(a1 + 28), v29[13]);
      if ( v29[11] )
        fprintf(stderr, " -- %s");
      fputc(10, stderr);
LABEL_46:
      (*(void (__fastcall **)(int, int))(a1 + 84))(a1, 1);
      exit(1);
    }
    return -1;
  }
  else
  {
    result = 0;
    if ( v35 )
      a3[2] |= 0x20u;
    *a3 = (int)v29;
    a3[1] = (int)v19;
    a3[3] = 2;
  }
  return result;
}
