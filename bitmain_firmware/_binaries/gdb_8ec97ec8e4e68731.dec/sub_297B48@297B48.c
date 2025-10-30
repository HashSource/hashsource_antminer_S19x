char *__fastcall sub_297B48(char *result)
{
  int *v1; // r5
  char *v2; // r6
  int v3; // r2
  int v4; // r2
  int v5; // r3
  time_t v6; // r0
  size_t v7; // r0
  char *v8; // r0
  char *v9; // r0
  int v10; // r2
  int v11; // r3
  _DWORD *v12; // r3
  int v13; // r2
  void *v14; // r0
  char v15[64]; // [sp+0h] [bp-40h] BYREF

  LOWORD(v1) = (unsigned __int16)&dword_490158;
  v2 = result;
  if ( !dword_48BB30 )
  {
    HIWORD(v1) = (unsigned int)&dword_490158 >> 16;
    goto LABEL_4;
  }
  HIWORD(v1) = (unsigned int)&dword_490158 >> 16;
  v3 = *v1;
  if ( *v1 != dword_490160 )
  {
LABEL_4:
    v4 = dword_48BB2C;
    if ( dword_48BB2C )
    {
      v5 = *v1;
      if ( dword_48BB2C - 1 == *v1 )
      {
        dword_48BB2C += 50;
        v14 = sub_93050((void *)dword_48BB28, 4 * (v4 + 50));
        v5 = *v1;
        dword_48BB28 = (int)v14;
      }
      *v1 = v5 + 1;
    }
    else
    {
      dword_48BB2C = 50;
      dword_48BB28 = (int)sub_93028(0xC8u);
      *v1 = 1;
    }
LABEL_8:
    v6 = time(0);
    snprintf(v15, 0x3Fu, "X%lu", v6);
    v7 = strlen(v15);
    v8 = (char *)sub_93028(v7 + 1);
    v9 = strcpy(v8, v15);
    *v9 = byte_48BB34;
    result = (char *)sub_297A18(v2, (int)v9);
    v10 = *v1;
    v11 = dword_48BB28;
    *(_DWORD *)(dword_48BB28 + 4 * *v1) = 0;
    *(_DWORD *)(v11 + 4 * v10 - 4) = result;
    return result;
  }
  if ( v3 )
  {
    if ( *(_DWORD *)dword_48BB28 )
    {
      sub_297B08(*(void ***)dword_48BB28);
      v3 = *v1;
    }
    if ( v3 > 0 )
    {
      v12 = (_DWORD *)dword_48BB28;
      v13 = dword_48BB28 + 4 * v3;
      do
      {
        *v12 = v12[1];
        ++v12;
      }
      while ( (_DWORD *)v13 != v12 );
    }
    ++dword_4707AC;
    goto LABEL_8;
  }
  return result;
}
