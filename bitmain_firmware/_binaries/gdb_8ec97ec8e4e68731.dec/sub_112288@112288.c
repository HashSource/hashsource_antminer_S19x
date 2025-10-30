int __fastcall sub_112288(int a1, int a2)
{
  int result; // r0

  switch ( a2 )
  {
    case 1:
      result = *(_DWORD *)(sub_1780B4(a1) + 104);
      break;
    case 2:
      result = *(_DWORD *)(sub_1780B4(a1) + 112);
      break;
    case 4:
      result = *(_DWORD *)(sub_1780B4(a1) + 120);
      break;
    case 8:
      result = *(_DWORD *)(sub_1780B4(a1) + 128);
      break;
    default:
      sub_946E0("no unsigned variant found for type, while evaluating DWARF expression");
  }
  return result;
}
