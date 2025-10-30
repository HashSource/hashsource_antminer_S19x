char *__fastcall sub_2B660C(_DWORD *a1, char a2, int a3, int a4, int a5, _DWORD *a6, int a7)
{
  int v10; // r0
  char *v11; // r5
  char *v12; // r7

  if ( (a2 & 0x10) == 0 )
    return 0;
  if ( *a1 > a6[326] )
  {
    sub_2A6BBC("elf32-arm.c", 4264);
    v10 = *(_DWORD *)(a6[323] + 8 * *a1);
    if ( a4 )
      goto LABEL_4;
  }
  else
  {
    v10 = *(_DWORD *)(a6[323] + 8 * *a1);
    if ( a4 )
    {
LABEL_4:
      v11 = *(char **)(a4 + 104);
      if ( v11 && a4 == *((_DWORD *)v11 + 13) && v10 == *((_DWORD *)v11 + 15) && *((_DWORD *)v11 + 9) == a7 )
        return v11;
      v12 = sub_2B6550((_DWORD *)(v10 + 4), (_DWORD *)(a3 + 4), a4, (_DWORD *)(a5 + 4), (_DWORD *)(a5 + 8), a7);
      if ( v12 )
      {
        v11 = sub_2AAC2C(a6 + 313, v12, 0, 0);
        *(_DWORD *)(a4 + 104) = v11;
LABEL_8:
        free(v12);
        return v11;
      }
      return 0;
    }
  }
  v12 = sub_2B6550((_DWORD *)(v10 + 4), (_DWORD *)(a3 + 4), a4, (_DWORD *)(a5 + 4), (_DWORD *)(a5 + 8), a7);
  if ( v12 )
  {
    v11 = sub_2AAC2C(a6 + 313, v12, a4, a4);
    goto LABEL_8;
  }
  return 0;
}
