int __fastcall sub_3015A0(int a1, int a2, const char **a3, _BYTE *a4)
{
  int result; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r5
  int v12; // r7
  int v13; // r0
  int v14; // r5
  int v15; // r5
  int v16; // r7

  result = sub_300850(a1);
  v9 = result;
  switch ( result )
  {
    case 0:
      return result;
    case 1:
      v15 = *(_DWORD *)(a1 + 44);
      v16 = (unsigned __int8)*a4;
      result = strcmp(*a3, ".debug_ranges");
      v12 = v16 & ~v15;
      if ( !result && (v15 & 1) != 0 )
        goto LABEL_6;
LABEL_11:
      *a4 = v12;
      break;
    case 2:
      v13 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(a2 + 4) + 52))(a4);
      v14 = *(_DWORD *)(a1 + 44);
      v12 = v13 & ~v14;
      result = strcmp(*a3, ".debug_ranges");
      if ( !result && (v14 & 1) != 0 )
        goto LABEL_6;
LABEL_9:
      result = (*(int (__fastcall **)(int, _BYTE *))(*(_DWORD *)(a2 + 4) + 60))(v12, a4);
      break;
    case 4:
      v10 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)(a2 + 4) + 40))(a4);
      v11 = *(_DWORD *)(a1 + 44);
      v12 = v10 & ~v11;
      result = strcmp(*a3, ".debug_ranges");
      if ( !result && (v11 & 1) != 0 )
      {
LABEL_6:
        v12 |= 1u;
        switch ( v9 )
        {
          case 1:
            goto LABEL_11;
          case 2:
            goto LABEL_9;
          case 4:
            break;
          case 8:
            sub_2A6BF0((int)"reloc.c", 1671, (int)"_bfd_clear_contents");
          default:
            sub_2A6BF0((int)"reloc.c", 1657, (int)"_bfd_clear_contents");
        }
      }
      result = (*(int (__fastcall **)(int, _BYTE *))(*(_DWORD *)(a2 + 4) + 48))(v12, a4);
      break;
    case 8:
      sub_2A6BF0((int)"reloc.c", 1637, (int)"_bfd_clear_contents");
    default:
      sub_2A6BF0((int)"reloc.c", 1621, (int)"_bfd_clear_contents");
  }
  return result;
}
