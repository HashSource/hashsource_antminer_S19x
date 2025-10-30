int __fastcall sub_265E88(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // r5
  int result; // r0
  int v5; // t1
  wint_t v6; // r0
  __int64 v7; // r2
  wint_t v8; // r6

  v2 = a1;
  result = *a1;
  if ( result )
  {
    do
    {
      v6 = btowc(result);
      v7 = *(_QWORD *)(a2 + 12);
      v8 = v6;
      if ( (unsigned int)(HIDWORD(v7) - v7) <= 3 )
      {
        obstack_newchunk((struct obstack *)a2, 4);
        LODWORD(v7) = *(_DWORD *)(a2 + 12);
      }
      *(_DWORD *)v7 = v8;
      *(_DWORD *)(a2 + 12) += 4;
      v5 = *++v2;
      result = v5;
    }
    while ( v5 );
  }
  return result;
}
