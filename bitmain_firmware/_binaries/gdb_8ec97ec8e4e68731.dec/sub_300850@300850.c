int __fastcall sub_300850(int a1)
{
  int result; // r0

  switch ( *(_DWORD *)(a1 + 8) )
  {
    case 0xFFFFFFFE:
    case 2:
      result = 4;
      break;
    case 0xFFFFFFFF:
    case 1:
      result = 2;
      break;
    case 0:
      result = 1;
      break;
    case 3:
      result = 0;
      break;
    case 4:
      result = 8;
      break;
    case 8:
      result = 16;
      break;
    default:
      sub_2A6BF0((int)"reloc.c", 444, (int)"bfd_get_reloc_size");
  }
  return result;
}
