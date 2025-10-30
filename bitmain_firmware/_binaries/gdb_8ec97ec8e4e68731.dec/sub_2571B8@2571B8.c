int __fastcall sub_2571B8(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v6; // r0
  int v11; // r0

  v6 = (_DWORD *)a1[5];
  if ( v6 )
  {
    sub_256B98(v6, a2, a3, a4, a5);
    return (*(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 20))(a1, a2, a3, a4, a5);
  }
  else
  {
    v11 = sub_94700(
            (int)"ui-out.c",
            369,
            "table_header outside a table is not valid; it must be after a table_begin and before a table_body.");
    return sub_25722C(v11);
  }
}
