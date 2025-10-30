int __fastcall sub_2DD56C(int a1, int a2)
{
  _BYTE *v4; // r7
  char *v5; // r0
  size_t v6; // r8
  unsigned __int8 *v7; // r0
  unsigned __int8 *v8; // r5
  unsigned int v9; // r0
  unsigned int *v10; // r2
  unsigned int v12; // r0
  unsigned int *v13; // r2

  if ( *(_DWORD *)(a1 + 32) == -1 )
    return 1;
  v4 = *(_BYTE **)(a1 + 4);
  if ( ((*(unsigned __int8 *)(a1 + 52) >> 1) & 3u) > 1 && (v5 = strchr(*(const char **)(a1 + 4), 64)) != 0 )
  {
    v6 = v5 - v4;
    v7 = (unsigned __int8 *)sub_2AB368(v5 - v4 + 1);
    v8 = v7;
    if ( v7 )
    {
      memcpy(v7, v4, v6);
      v8[v6] = 0;
      v9 = sub_2CD6F8(v8);
      v10 = *(unsigned int **)a2;
      *(_DWORD *)a2 += 4;
      *v10 = v9;
      *(_DWORD *)(a1 + 60) = v9;
      free(v8);
      return 1;
    }
    else
    {
      *(_DWORD *)(a2 + 4) = 1;
      return 0;
    }
  }
  else
  {
    v12 = sub_2CD6F8(v4);
    v13 = *(unsigned int **)a2;
    *(_DWORD *)a2 += 4;
    *v13 = v12;
    *(_DWORD *)(a1 + 60) = v12;
    return 1;
  }
}
