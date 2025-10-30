_BYTE *sub_31E338(void *a1, ...)
{
  const char *v2; // r4
  const char *v3; // r3
  char *v4; // r6
  int v5; // r5
  size_t v6; // r0
  const char *v7; // t1
  char *v8; // r7
  _BYTE *v9; // r10
  _BYTE *v10; // r5
  size_t v11; // r6
  const char *v12; // t1
  const char *varg_r1; // [sp+2Ch] [bp+20h] BYREF
  va_list varg_r1a; // [sp+2Ch] [bp+20h]
  va_list varg_r2; // [sp+30h] [bp+24h] BYREF

  va_start(varg_r2, a1);
  va_start(varg_r1a, a1);
  varg_r1 = va_arg(varg_r2, const char *);
  v2 = varg_r1;
  if ( varg_r1 )
  {
    v3 = varg_r1;
    va_copy(v4, varg_r1a);
    v5 = 0;
    do
    {
      v6 = strlen(v3);
      v7 = (const char *)*((_DWORD *)v4 + 1);
      v4 += 4;
      v3 = v7;
      v5 += v6;
    }
    while ( v7 );
    va_copy(v8, varg_r1a);
    v9 = sub_93028(v5 + 1);
    v10 = v9;
    do
    {
      v11 = strlen(v2);
      memcpy(v10, v2, v11);
      v12 = (const char *)*((_DWORD *)v8 + 1);
      v8 += 4;
      v2 = v12;
      v10 += v11;
    }
    while ( v12 );
  }
  else
  {
    v10 = sub_93028(1u);
    v9 = v10;
  }
  *v10 = 0;
  if ( a1 )
    free(a1);
  return v9;
}
