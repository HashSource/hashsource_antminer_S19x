int __fastcall sub_19024(__int16 *a1, unsigned int a2)
{
  __int16 *v4; // r4
  __int16 *v5; // r6

  fwrite("Stack now", 1u, 9u, stderr);
  if ( (unsigned int)a1 <= a2 )
  {
    v4 = a1 + 1;
    v5 = (__int16 *)((char *)a1 + ((a2 - (_DWORD)a1) & 0xFFFFFFFE) + 2);
    while ( 1 )
    {
      _fprintf_chk(stderr, 1, " %d", *a1);
      a1 = v4;
      if ( v4 == v5 )
        break;
      ++v4;
    }
  }
  return fputc(10, stderr);
}
