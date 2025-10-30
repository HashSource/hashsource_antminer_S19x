void __fastcall sub_83C64(unsigned int a1, _DWORD *a2, char a3, int a4)
{
  void *v8; // r0
  int *v9; // r0
  const char *v10; // r10
  int *v11; // r11
  int v12; // r0
  int v13; // r3
  char *v14; // r0
  size_t v15; // r9
  _BYTE *v16; // r0
  __int16 v17; // r2
  int v18; // r7
  int v19; // r7
  int v20; // r3
  const char *v21; // r6
  __int16 v22; // r3
  char *v23; // r0
  void *ptr; // [sp+4h] [bp-78h]
  _BYTE *ptra; // [sp+4h] [bp-78h]
  _BYTE v26[16]; // [sp+8h] [bp-74h] BYREF
  int v27; // [sp+18h] [bp-64h]

  if ( a1 > 0xF )
  {
    if ( (a2[4] & 8) != 0 )
    {
      v8 = (void *)a2[7];
      if ( v8 )
        free(v8);
    }
    else
    {
      v9 = _errno_location();
      v10 = (const char *)a2[6];
      v11 = v9;
      *v9 = 0;
      if ( (a3 & 3) == 1 )
      {
        if ( _xstat64(3, v10, v26) || (v22 = v27, *v11 = 22, (v22 & 0xF000) != 0x8000) )
          sub_7CF18(*(_DWORD *)(a1 + 28), (int)"stat", (int)v10);
      }
      else
      {
        if ( (a3 & 3) == 2 )
        {
          v12 = _xstat64(3, v10, v26);
          v13 = *v11;
          if ( !v12 || v13 != 2 )
          {
            if ( !v13 )
              *v11 = 22;
            sub_7CF18(*(_DWORD *)(a1 + 28), (int)"stat", (int)v10);
          }
        }
        v14 = strrchr(v10, 47);
        if ( v14 )
        {
          v15 = v14 - v10;
          ptr = (void *)(v14 - v10 + 1);
          v16 = malloc((size_t)ptr);
          if ( !v16 )
            sub_C610((int)ptr);
          ptra = v16;
          memcpy(v16, v10, v15);
          ptra[v15] = 0;
          if ( _xstat64(3, ptra, v26) || (v17 = v27, *v11 = 22, (v17 & 0xF000) != 0x4000) )
            sub_7CF18(*(_DWORD *)(a1 + 28), (int)"stat", (int)ptra);
          free(ptra);
        }
      }
      v18 = a3 & 0x30;
      if ( v18 == 16 )
      {
        v19 = open64(a2[6], a4);
        if ( v19 < 0 )
          sub_7CF18(*(_DWORD *)(a1 + 28), (int)"open", a2[6]);
      }
      else
      {
        if ( v18 != 32 )
          return;
        v19 = fopen64(a2[6], a4);
        if ( !v19 )
          sub_7CF18(*(_DWORD *)(a1 + 28), (int)"fopen", a2[6]);
      }
      v20 = a2[4];
      v21 = (const char *)a2[6];
      if ( (v20 & 0x40) != 0 )
      {
        a2[7] = v21;
      }
      else
      {
        v23 = _strdup((const char *)a2[6]);
        if ( !v23 )
          sub_7E624(v21);
        v20 = a2[4];
        a2[7] = v23;
      }
      a2[6] = v19;
      a2[4] = v20 & 0xFFFFFFBF;
    }
  }
  else if ( a1 == 1 )
  {
    if ( (a3 & 3) == 1 )
    {
      fputs(&off_B856C[0][dword_1073C8], (FILE *)option_usage_fp);
    }
    else if ( (a3 & 3) == 2 )
    {
      fputs(&off_B8568[0][dword_1073C8], (FILE *)option_usage_fp);
    }
  }
}
