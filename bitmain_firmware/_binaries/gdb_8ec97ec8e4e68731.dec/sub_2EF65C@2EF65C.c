int __fastcall sub_2EF65C(int a1, int a2, int a3)
{
  if ( !a2 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 416))(a3);
  if ( a2 != 1 )
    sub_2A6BF0((int)"elf-attrs.c", 424, (int)"_bfd_elf_obj_attrs_arg_type");
  if ( a3 == 32 )
    return 3;
  if ( (a3 & 1) != 0 )
    return 2;
  return 1;
}
