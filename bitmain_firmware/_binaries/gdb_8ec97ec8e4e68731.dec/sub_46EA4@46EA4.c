FILE *__fastcall sub_46EA4(char *a1, size_t a2, __int64 a3)
{
  void *v6; // r5
  FILE *v7; // r0
  FILE *result; // r0
  FILE *stream; // [sp+Ch] [bp-24h] BYREF
  __int64 v10; // [sp+10h] [bp-20h] BYREF
  char v11; // [sp+1Bh] [bp-15h]
  char s; // [sp+1Ch] [bp-14h] BYREF
  char src[19]; // [sp+1Dh] [bp-13h] BYREF

  v6 = (void *)sub_93140("/proc/%lld/stat", a3);
  sub_967F0((int)&stream, (int)v6, "r");
  v7 = stream;
  *a1 = 0;
  if ( v7 )
  {
    if ( fscanf(v7, "%lld %17s", &v10, &s) == 2 && v10 == a3 )
    {
      *(&v11 + strlen(&s)) = 0;
      strncpy(a1, src, a2);
    }
  }
  else
  {
    snprintf(a1, a2, "%lld", a3);
  }
  a1[a2 - 1] = 0;
  if ( v6 )
    free(v6);
  result = stream;
  if ( stream )
    return (FILE *)fclose(stream);
  return result;
}
