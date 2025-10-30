int __fastcall sub_29B254(int a1, int a2, mbstate_t *a3, int a4, int a5, mbstate_t *a6)
{
  int v6; // r5
  signed int v10; // r8
  signed int v11; // r0
  _BOOL4 v12; // r0
  unsigned __int8 *v14; // r4
  unsigned __int8 *v15; // r5
  int v16; // r7
  int v17; // r3
  int v18; // t1
  int v19; // t1

  v6 = a1 + a2;
  v10 = sub_29B1F4((const char *)(a1 + a2), a3);
  if ( v10 <= 0 )
    return 0;
  v11 = sub_29B1F4((const char *)(a4 + a5), a6);
  v12 = v10 != v11 || v11 <= 0;
  if ( v12 || *(unsigned __int8 *)(a1 + a2) != *(unsigned __int8 *)(a4 + a5) )
    return 0;
  if ( v10 > 1 )
  {
    if ( *(unsigned __int8 *)(v6 + 1) == *(unsigned __int8 *)(a4 + a5 + 1) )
    {
      v14 = (unsigned __int8 *)(a1 + a2 + 2);
      v15 = (unsigned __int8 *)(v6 + v10);
      v16 = a4 + a5 + 1;
      while ( v14 != v15 )
      {
        v18 = *v14++;
        v17 = v18;
        v19 = *(unsigned __int8 *)++v16;
        if ( v19 != v17 )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  return 1;
}
