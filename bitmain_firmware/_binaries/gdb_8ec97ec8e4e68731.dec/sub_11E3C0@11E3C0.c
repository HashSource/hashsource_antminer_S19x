int __fastcall sub_11E3C0(__int64 a1, int a2, int a3, _DWORD *a4)
{
  int v5; // lr
  const char *v6; // r3
  int v7; // r12
  int result; // r0

  v5 = *(unsigned __int8 *)(a3 + 15);
  v6 = (const char *)a1;
  v7 = *(unsigned __int8 *)(a3 + 14);
  if ( !v5 )
  {
LABEL_6:
    switch ( v7 )
    {
      case 4:
        result = (*(int (__fastcall **)(int))(*(_DWORD *)HIDWORD(a1) + 40))(a2);
        goto LABEL_11;
      case 8:
        result = (*(int (__fastcall **)(int))(*(_DWORD *)HIDWORD(a1) + 28))(a2);
        goto LABEL_11;
      case 2:
        result = (*(int (__fastcall **)(int))(*(_DWORD *)HIDWORD(a1) + 52))(a2);
        goto LABEL_11;
    }
    a1 = sub_94700((int)"dwarf2read.c", 19222, "read_address: bad switch, unsigned [in module %s]", v6);
    goto LABEL_10;
  }
  if ( v7 == 4 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)HIDWORD(a1) + 44))(a2);
    goto LABEL_11;
  }
  if ( v7 != 8 )
  {
    if ( v7 == 2 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)HIDWORD(a1) + 56))(a2);
      goto LABEL_11;
    }
    a1 = sub_94700((int)"dwarf2read.c", 19203, "read_address: bad switch, signed [in module %s]", (const char *)a1);
    goto LABEL_6;
  }
LABEL_10:
  result = (*(int (__fastcall **)(int))(*(_DWORD *)HIDWORD(a1) + 32))(a2);
LABEL_11:
  *a4 = *(unsigned __int8 *)(a3 + 14);
  return result;
}
