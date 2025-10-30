void __fastcall sub_851E0(unsigned int a1, _DWORD *a2, char a3, int a4)
{
  void *v8; // r0
  int *v9; // r0
  const char *v10; // r10
  int *v11; // r11
  char *v12; // r0
  size_t v13; // r9
  void *v14; // r0
  _BYTE *v15; // r0
  __int16 v16; // r2
  int v17; // r7
  int v18; // r7
  int v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r0
  __int16 v23; // r3
  char *v24; // r0
  void *ptr; // [sp+4h] [bp-78h]
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
        if ( _xstat64(3, v10, v26) || (v23 = v27, *v11 = 22, (v23 & 0xF000) != 0x8000) )
          sub_7E374(*(_DWORD *)(a1 + 28), (int)"stat", (int)v10);
      }
      else
      {
        if ( (a3 & 3) == 2 )
        {
          v20 = _xstat64(3, v10, v26);
          v21 = *v11;
          if ( !v20 || v21 != 2 )
          {
            v22 = *(_DWORD *)(a1 + 28);
            if ( !v21 )
              *v11 = 22;
            sub_7E374(v22, (int)"stat", (int)v10);
          }
        }
        v12 = strrchr(v10, 47);
        if ( v12 )
        {
          v13 = v12 - v10;
          v14 = sub_7FBE0(v12 - v10 + 1);
          v15 = memcpy(v14, v10, v13);
          v15[v13] = 0;
          ptr = v15;
          if ( _xstat64(3, v15, v26) || (v16 = v27, *v11 = 22, (v16 & 0xF000) != 0x4000) )
            sub_7E374(*(_DWORD *)(a1 + 28), (int)"stat", (int)ptr);
          free(ptr);
        }
      }
      v17 = a3 & 0x30;
      if ( v17 == 16 )
      {
        v18 = open64(a2[6], a4);
        if ( v18 < 0 )
          sub_7E374(*(_DWORD *)(a1 + 28), (int)"open", a2[6]);
      }
      else
      {
        if ( v17 != 32 )
          return;
        v18 = fopen64(a2[6], a4);
        if ( !v18 )
          sub_7E374(*(_DWORD *)(a1 + 28), (int)"fopen", a2[6]);
      }
      v19 = a2[4];
      if ( (v19 & 0x40) != 0 )
      {
        a2[7] = a2[6];
      }
      else
      {
        v24 = sub_7FA64((const char *)a2[6]);
        v19 = a2[4];
        a2[7] = v24;
      }
      a2[6] = v18;
      a2[4] = v19 & 0xFFFFFFBF;
    }
  }
  else if ( a1 == 1 )
  {
    if ( (a3 & 3) == 1 )
    {
      fputs(&off_B9570[dword_1083EC], (FILE *)option_usage_fp);
    }
    else if ( (a3 & 3) == 2 )
    {
      fputs(&off_B956C[dword_1083EC], (FILE *)option_usage_fp);
    }
  }
}
