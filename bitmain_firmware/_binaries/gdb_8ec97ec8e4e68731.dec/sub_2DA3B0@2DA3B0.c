char *__fastcall sub_2DA3B0(int a1, void *a2, _DWORD *a3, const char *a4, int a5, void *src, size_t a7)
{
  size_t v11; // r0
  size_t v12; // r7
  unsigned int v13; // r3
  size_t v14; // r4
  char *v15; // r6
  int v16; // r3
  char *v17; // r11
  _BYTE *v18; // r4
  char v19; // r2
  void *v20; // r0
  _BYTE *v21; // r4
  _BYTE *v22; // r2

  if ( a4 )
  {
    v11 = strlen(a4);
    v12 = v11 + 1;
    v13 = (v11 + 4) & 0xFFFFFFFC;
  }
  else
  {
    v13 = 0;
    v12 = 0;
  }
  v14 = ((a7 + 3) & 0xFFFFFFFC) + 12 + v13;
  v15 = (char *)realloc(a2, v14 + *a3);
  if ( v15 )
  {
    v16 = *(_DWORD *)(a1 + 4);
    v17 = &v15[*a3];
    *a3 += v14;
    v18 = v17 + 12;
    (*(void (__fastcall **)(size_t, char *))(v16 + 84))(v12, v17);
    (*(void (__fastcall **)(size_t, char *))(*(_DWORD *)(a1 + 4) + 84))(a7, v17 + 4);
    (*(void (__fastcall **)(int, char *))(*(_DWORD *)(a1 + 4) + 84))(a5, v17 + 8);
    if ( a4 )
    {
      memcpy(v17 + 12, a4, v12);
      v19 = (_BYTE)v18 + v12;
      v18 += v12;
      if ( (v12 & 3) != 0 )
      {
        do
          *v18++ = 0;
        while ( (((_BYTE)v18 + (_BYTE)v12 - v19) & 3) != 0 );
      }
    }
    v20 = v18;
    v21 = &v18[a7];
    memcpy(v20, src, a7);
    if ( (a7 & 3) != 0 )
    {
      v22 = v21;
      do
        *v22++ = 0;
      while ( (((_BYTE)v22 + (_BYTE)a7 - (_BYTE)v21) & 3) != 0 );
    }
  }
  return v15;
}
