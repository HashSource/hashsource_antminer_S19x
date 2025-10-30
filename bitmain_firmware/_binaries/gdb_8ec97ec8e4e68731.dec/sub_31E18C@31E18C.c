_BYTE *sub_31E18C(_BYTE *a1, ...)
{
  const char *v2; // r4
  _BYTE *v3; // r5
  char *v4; // r7
  size_t v5; // r6
  const char *v6; // t1
  const char *varg_r1; // [sp+24h] [bp+18h] BYREF
  va_list varg_r1a; // [sp+24h] [bp+18h]
  va_list varg_r2; // [sp+28h] [bp+1Ch] BYREF

  va_start(varg_r2, a1);
  va_start(varg_r1a, a1);
  varg_r1 = va_arg(varg_r2, const char *);
  v2 = varg_r1;
  if ( varg_r1 )
  {
    va_copy(v4, varg_r1a);
    v3 = a1;
    do
    {
      v5 = strlen(v2);
      memcpy(v3, v2, v5);
      v6 = (const char *)*((_DWORD *)v4 + 1);
      v4 += 4;
      v2 = v6;
      v3 += v5;
    }
    while ( v6 );
  }
  else
  {
    v3 = a1;
  }
  *v3 = 0;
  return a1;
}
