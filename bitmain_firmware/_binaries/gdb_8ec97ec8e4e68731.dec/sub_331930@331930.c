const char *__fastcall sub_331930(int a1)
{
  int v1; // r3
  const char *result; // r0

  v1 = *(_DWORD *)(a1 + 20);
  switch ( v1 )
  {
    case 0x80:
      return "Invalid operation";
    case 2:
      return "Division by zero";
    case 0x200:
      return "Overflow";
    case 0x2000:
      return "Underflow";
    case 0x20:
      return "Inexact";
    case 4:
      return "Division impossible";
    case 8:
      return "Division undefined";
    case 0x800:
      return "Rounded";
    case 0x400:
      return "Clamped";
    case 0x1000:
      return "Subnormal";
    case 1:
      return "Conversion syntax";
    case 0x10:
      return "Insufficient storage";
    case 0x40:
      return "Invalid context";
  }
  result = "No status";
  if ( v1 )
    return "Multiple status";
  return result;
}
