int __fastcall sub_700D0(__int16 *a1, unsigned int a2)
{
  __int16 *v4; // r4
  __int16 *v5; // r6
  int v6; // r2

  sub_1C4D40(stderr, "Stack now");
  if ( (unsigned int)a1 <= a2 )
  {
    v4 = a1 + 1;
    v5 = (__int16 *)((char *)a1 + ((a2 - (_DWORD)a1) & 0xFFFFFFFE) + 2);
    do
    {
      v6 = *a1;
      a1 = v4;
      sub_1C4D40(stderr, " %d", v6);
    }
    while ( v4++ != v5 );
  }
  return sub_1C4D40(stderr, (const char *)&word_356638);
}
