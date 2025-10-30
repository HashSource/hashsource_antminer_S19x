int __fastcall sub_2B7F60(int a1, char *s, int a3, int a4, int a5, int a6, _DWORD *a7, char **a8)
{
  int v8; // r10
  size_t v13; // r0
  char *v14; // r4
  int v15; // r10
  _DWORD *v16; // r4
  unsigned int v17; // r5
  int v18; // r1
  int v19; // r3
  unsigned int v20; // r6
  unsigned int v21; // r11
  int v22; // r0
  __int64 v23; // r2
  int v24; // r1
  int v25; // r8
  __int64 v27; // r2
  __int64 v28; // r2
  unsigned int v29; // r2
  __int64 v30; // r2
  unsigned int v31; // r3

  v8 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v8 + 44) != 4 )
    return 0;
  v13 = strlen(s);
  v14 = (char *)sub_2AB368(v13 + 14);
  if ( !v14 )
    sub_2A6BBC("elf32-arm.c", 6788);
  sprintf(v14, "__%s_from_arm", s);
  v15 = sub_2FC920(v8, v14, 0);
  if ( v15 )
  {
    free(v14);
    v16 = *(_DWORD **)(a1 + 28);
    if ( v16[11] != 4 )
    {
      sub_2A6BBC("elf32-arm.c", 8884);
      __und(0);
    }
    if ( !v16[90] )
      sub_2A6BBC("elf32-arm.c", 8885);
    v17 = *(_DWORD *)(v15 + 24);
    if ( (v17 & 1) != 0 )
    {
      if ( a5 )
      {
        v18 = *(_DWORD *)(a5 + 148);
        if ( v18 )
        {
          v19 = *(_DWORD *)(*(_DWORD *)(v18 + 160) + 32);
          if ( (v19 & 0xFF000000) <= 0x3FFFFFF && (v19 & 4) == 0 && (*(_DWORD *)(v18 + 40) & 0x20000) == 0 )
            sub_2A6A5C(
              "%B(%s): warning: interworking not enabled.\n  first occurrence: %B: arm call to thumb",
              v18,
              s,
              a3,
              1);
        }
      }
      LOBYTE(v23) = *(_BYTE *)a1;
      v20 = v17 - 1;
      HIDWORD(v23) = a7[27];
      v21 = v17 + 3;
      *(_DWORD *)(v15 + 24) = v17 - 1;
      v22 = v16[91];
      HIDWORD(v23) += v17 - 1;
      v24 = *(_DWORD *)(a4 + 4);
      if ( (v23 & 1) != 0 || v16[13] || v16[102] )
      {
        LODWORD(v23) = -442515452;
        sub_2B73D0(v22, v24, v23);
        LODWORD(v27) = -527646705;
        HIDWORD(v27) = a7[27] + v21;
        sub_2B73D0(v16[91], *(_DWORD *)(a4 + 4), v27);
        LODWORD(v28) = -516948196;
        HIDWORD(v28) = a7[27] + v17 + 7;
        sub_2B73D0(v16[91], *(_DWORD *)(a4 + 4), v28);
        v29 = v17 + 11;
        --v17;
        (*(void (__fastcall **)(unsigned int, unsigned int))(*(_DWORD *)(a4 + 4) + 48))(
          (a6 - 12 - a7[14] - *(_DWORD *)(a7[15] + 28) - v20) | 1,
          a7[27] + v29);
      }
      else
      {
        v25 = a6 | 1;
        if ( v16[97] )
        {
          LODWORD(v23) = -450891772;
          --v17;
          sub_2B73D0(v22, v24, v23);
          (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)(a4 + 4) + 48))(v25, a7[27] + v21);
        }
        else
        {
          LODWORD(v23) = -442515456;
          sub_2B73D0(v22, v24, v23);
          LODWORD(v30) = -516948196;
          HIDWORD(v30) = a7[27] + v21;
          sub_2B73D0(v16[91], *(_DWORD *)(a4 + 4), v30);
          v31 = v17 + 7;
          v17 += 11;
          (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)(a4 + 4) + 48))(v25, a7[27] + v31);
        }
      }
    }
    if ( v16[69] < v17 )
      sub_2A6BBC("elf32-arm.c", 8952);
    return v15;
  }
  else
  {
    if ( asprintf(a8, "unable to find ARM glue '%s' for '%s'", v14, s) == -1 )
      *a8 = sub_2A6920(1u);
    free(v14);
    return 0;
  }
}
