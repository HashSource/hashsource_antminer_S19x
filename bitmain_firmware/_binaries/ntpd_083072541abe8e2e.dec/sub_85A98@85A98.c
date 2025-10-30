int __fastcall sub_85A98(int a1, char *src, int *a3)
{
  unsigned __int8 *v3; // r6
  unsigned __int8 *v4; // r1
  unsigned __int8 *v5; // r7
  int v6; // r11
  int v7; // r2
  int v8; // t1
  unsigned __int8 *v9; // r1
  int v10; // r5
  _DWORD *v11; // r4
  int v12; // r10
  int v13; // r8
  int v14; // r7
  unsigned __int8 *v15; // r1
  unsigned int v16; // r2
  bool v17; // zf
  unsigned __int8 *v18; // r1
  unsigned __int8 *v20; // r7
  size_t v21; // r9
  const char *v22; // r5
  int v23; // r7
  int v24; // r8
  unsigned __int8 *v25; // r1
  unsigned __int8 *v26; // r1
  int v27; // r3
  int v28; // r0
  _DWORD *v29; // r5
  int v30; // r5
  int v31; // r2
  int v32; // r3
  int v34; // [sp+10h] [bp-9Ch]
  unsigned __int8 *v36; // [sp+1Ch] [bp-90h]
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
      goto LABEL_21;
  }
  v5 = 0;
LABEL_5:
  if ( v6 <= 1 )
  {
LABEL_21:
    if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
    {
      fprintf(stderr, off_B84DC[0], *(_DWORD *)(a1 + 28), v3);
      v28 = a1;
      goto LABEL_51;
    }
    return -1;
  }
  v36 = v5;
  v34 = 0;
  v10 = 0;
  v11 = *(_DWORD **)(a1 + 68);
  v12 = 0;
  v13 = *(_DWORD *)(a1 + 100);
  v14 = 0;
  do
  {
    v15 = (unsigned __int8 *)v11[13];
    if ( v15 )
    {
      v16 = v11[4];
      v17 = v16 == (_DWORD)&loc_80100;
      if ( (_UNKNOWN *)v16 != &loc_80100 )
        v17 = (v16 & 0x280000) == 0;
      if ( v17 )
      {
        if ( !sub_859EC(v3, v15, v6) )
        {
          if ( !*(_BYTE *)(v11[13] + v6) )
          {
            v10 = v14;
            v20 = v36;
            goto LABEL_42;
          }
          goto LABEL_8;
        }
        v18 = (unsigned __int8 *)v11[14];
        if ( v18 && !sub_859EC(v3, v18, v6) )
        {
          if ( !*(_BYTE *)(v11[14] + v6) )
          {
            v30 = v14;
            v20 = v36;
            v29 = (_DWORD *)(*(_DWORD *)(a1 + 68) + (v30 << 6));
            if ( (v29[4] & 0x280000) != 0 )
            {
LABEL_46:
              if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
              {
                fprintf(stderr, off_B84C0[0], *(_DWORD *)(a1 + 28), v29[13]);
                if ( v29[11] )
                  fprintf(stderr, " -- %s");
                fputc(10, stderr);
LABEL_50:
                v28 = a1;
LABEL_51:
                (*(void (__fastcall **)(int, int))(v28 + 84))(v28, 1);
                exit(1);
              }
              return -1;
            }
LABEL_52:
            a3[2] |= 0x20u;
LABEL_44:
            *a3 = (int)v29;
            a3[1] = (int)v20;
            a3[3] = 2;
            return 0;
          }
          v34 = 1;
LABEL_8:
          ++v12;
          v10 = v14;
        }
      }
    }
    ++v14;
    v11 += 16;
  }
  while ( v13 > v14 );
  v20 = v36;
  if ( v12 )
  {
    if ( v12 != 1 )
    {
      if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
      {
        fprintf(stderr, off_B84A4[0], *(_DWORD *)(a1 + 24), v3, v12);
        if ( v12 <= 4 )
        {
          v21 = strlen((const char *)v3);
          if ( (*(_DWORD *)(a1 + 12) & 3) != 0 )
            v22 = "--";
          else
            v22 = byte_97F7C;
          v23 = 0;
          v24 = *(_DWORD *)(a1 + 68);
          fputs(off_B84A0[0], stderr);
          do
          {
            v25 = *(unsigned __int8 **)(v24 + 52);
            if ( v25 )
            {
              if ( sub_859EC(v3, v25, v21) )
              {
                v26 = *(unsigned __int8 **)(v24 + 56);
                if ( v26 )
                {
                  if ( !sub_859EC(v3, v26, v21) )
                    fprintf(stderr, "  %s%s\n", v22, *(_DWORD *)(v24 + 56));
                }
              }
              else
              {
                fprintf(stderr, "  %s%s\n", v22, *(_DWORD *)(v24 + 52));
              }
            }
            ++v23;
            v24 += 64;
          }
          while ( v23 < *(_DWORD *)(a1 + 100) );
        }
        goto LABEL_50;
      }
      return -1;
    }
LABEL_42:
    v29 = (_DWORD *)(*(_DWORD *)(a1 + 68) + (v10 << 6));
    if ( (v29[4] & 0x280000) != 0 )
      goto LABEL_46;
    if ( v34 )
      goto LABEL_52;
    goto LABEL_44;
  }
  v27 = *(_DWORD *)(a1 + 12);
  if ( v36 || (v27 & 3) != 0 || (v31 = *(unsigned __int16 *)(a1 + 98), v31 == 0x8000) )
  {
    if ( (v27 & 4) != 0 )
    {
      fprintf(stderr, off_B84CC[0], *(_DWORD *)(a1 + 24), v3);
      v28 = a1;
      goto LABEL_51;
    }
    return -1;
  }
  v32 = *(_DWORD *)(a1 + 68) + (v31 << 6);
  a3[1] = (int)v3;
  a3[3] = 3;
  *a3 = v32;
  return 0;
}
