int __fastcall sub_256B34(int result)
{
  __int64 v1; // r2
  __int64 v2; // r0

  if ( *(_DWORD *)result )
  {
    sub_94700(
      (int)"ui-out.c",
      213,
      "extra table_body call not allowed; there must be only one table_body after a table_begin and before a table_end.");
  }
  else
  {
    v1 = *(_QWORD *)(result + 36);
    if ( *(_DWORD *)(result + 8) == (HIDWORD(v1) - (int)v1) >> 2 )
    {
      *(_DWORD *)(result + 48) = v1;
      *(_DWORD *)result = 1;
      return result;
    }
  }
  v2 = sub_94700((int)"ui-out.c", 221, "number of headers differ from number of table columns.");
  return sub_256B98(v2, HIDWORD(v2));
}
