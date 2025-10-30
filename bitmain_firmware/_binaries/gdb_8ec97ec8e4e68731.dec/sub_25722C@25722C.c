int __fastcall sub_25722C(_DWORD *a1)
{
  int v2; // r0
  int v4; // r0

  v2 = a1[5];
  if ( v2 )
  {
    sub_256B34(v2);
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 12))(a1);
  }
  else
  {
    v4 = sub_94700(
           (int)"ui-out.c",
           382,
           "table_body outside a table is not valid; it must be after a table_begin and before a table_end.");
    return sub_257270(v4);
  }
}
