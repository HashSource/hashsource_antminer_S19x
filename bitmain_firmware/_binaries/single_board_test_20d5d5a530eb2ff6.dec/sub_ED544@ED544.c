size_t __fastcall sub_ED544(void *a1, int a2, int a3, char *s)
{
  signed int v7; // r0
  const char *v10; // r3
  int v11; // r1

  if ( s )
  {
    v7 = strlen(s);
    if ( a2 >= v7 )
      a2 = v7;
    memcpy(a1, s, a2);
    return a2;
  }
  else
  {
    v10 = (const char *)sub_15DE24();
    if ( !v10 )
      v10 = "Enter PEM pass phrase:";
    if ( a3 )
      v11 = 4;
    else
      v11 = 0;
    if ( sub_15DE38(a1, v11, a2, v10, a3) )
    {
      sub_D0048(9, 100, 109, (int)"crypto/pem/pem_lib.c", 59);
      memset(a1, 0, a2);
      return -1;
    }
    else
    {
      return j_strlen((const char *)a1);
    }
  }
}
