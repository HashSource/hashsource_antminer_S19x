int __fastcall sub_2576F8(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v5; // r12
  int v6; // lr
  _DWORD *v7; // r12
  int v8; // r1
  int result; // r0

  result = *(_DWORD *)(a1 + 20);
  if ( result )
  {
    v5 = a2 - 1;
    if ( a2 - 1 < 0 )
    {
      return 0;
    }
    else
    {
      v6 = *(_DWORD *)(result + 36);
      if ( v5 >= (*(_DWORD *)(result + 40) - v6) >> 2 )
      {
        return 0;
      }
      else
      {
        v7 = *(_DWORD **)(v6 + 4 * v5);
        if ( a2 == *v7 )
        {
          v8 = v7[2];
          *a3 = v7[1];
          *a4 = v8;
          *a5 = v7[3];
          return 1;
        }
        else
        {
          return *(_DWORD *)sub_94700(
                              (int)"ui-out.c",
                              288,
                              "%s: Assertion `%s' failed.",
                              "bool ui_out_table::query_field(int, int*, int*, const char**) const",
                              "colno == hdr->number ()");
        }
      }
    }
  }
  return result;
}
