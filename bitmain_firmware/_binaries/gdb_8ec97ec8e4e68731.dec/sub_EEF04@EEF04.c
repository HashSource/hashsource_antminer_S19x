void *__fastcall sub_EEF04(const char *a1, const char *a2, char *a3, size_t a4, int a5, struct obstack *a6, int a7)
{
  char *v11; // r0
  void *result; // r0
  iconv_t v13; // r8
  char *next_free; // r3
  size_t v15; // r2
  char *v16; // r1
  char *object_base; // r2
  int v18; // r6
  size_t v19; // r6
  int *v20; // r0
  size_t v21; // r2
  int v22; // r2
  char *v23; // r1
  int v24; // r7
  unsigned int v25; // r6
  char *v26; // r0
  size_t v27; // r2
  size_t inbytesleft; // [sp+8h] [bp-1Ch] BYREF
  char *inbuf; // [sp+Ch] [bp-18h] BYREF
  char *outbuf; // [sp+10h] [bp-14h] BYREF
  size_t outbytesleft; // [sp+14h] [bp-10h] BYREF
  char s[12]; // [sp+18h] [bp-Ch] BYREF

  if ( strcmp(a1, a2) )
  {
    v13 = iconv_open(a2, a1);
    if ( v13 == (iconv_t)-1 )
      sub_258B04("Converting character sets");
    inbytesleft = a4;
    inbuf = a3;
    if ( !a4 )
      return (void *)iconv_close(v13);
    next_free = a6->next_free;
    while ( 1 )
    {
      v16 = next_free;
      object_base = a6->object_base;
      v18 = next_free - object_base;
      if ( a6->chunk_limit - next_free < a4 )
      {
        obstack_newchunk(a6, a4);
        v16 = a6->next_free;
        object_base = a6->object_base;
      }
      a6->next_free = &v16[a4];
      outbuf = &object_base[v18];
      outbytesleft = a4;
      v19 = iconv(v13, &inbuf, &inbytesleft, &outbuf, &outbytesleft);
      v20 = _errno_location();
      v21 = outbytesleft;
      if ( *v20 == 2 )
        *v20 = 84;
      next_free = &a6->next_free[-v21];
      a6->next_free = next_free;
      if ( v19 == -1 )
      {
        v22 = *v20;
        if ( *v20 == 22 )
        {
          inbytesleft = 0;
          return (void *)iconv_close(v13);
        }
        if ( v22 != 84 )
        {
          if ( v22 != 7 )
            sub_258B04("Internal error while converting character sets");
          a4 *= 2;
          v15 = inbytesleft;
          goto LABEL_9;
        }
        if ( !a7 )
          sub_946E0("Could not convert character to `%s' character set", a2);
        if ( a5 > 0 )
        {
          v23 = inbuf;
          v24 = 0;
          do
          {
            sub_93170(s, 5u, "\\%.3o", (unsigned __int8)*v23);
            v25 = strlen(s);
            v26 = a6->next_free;
            if ( v25 > a6->chunk_limit - v26 )
            {
              obstack_newchunk(a6, v25);
              v26 = a6->next_free;
            }
            memcpy(v26, s, v25);
            ++v24;
            v27 = inbytesleft;
            next_free = &a6->next_free[v25];
            v23 = inbuf + 1;
            a6->next_free = next_free;
            v15 = v27 - 1;
            inbuf = v23;
            inbytesleft = v15;
          }
          while ( a5 != v24 );
          goto LABEL_9;
        }
      }
      v15 = inbytesleft;
LABEL_9:
      if ( !v15 )
        return (void *)iconv_close(v13);
    }
  }
  v11 = a6->next_free;
  if ( a6->chunk_limit - v11 < a4 )
  {
    obstack_newchunk(a6, a4);
    v11 = a6->next_free;
  }
  result = memcpy(v11, a3, a4);
  a6->next_free += a4;
  return result;
}
